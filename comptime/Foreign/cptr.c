/*===========================================================================*/
/*   (Foreign/cptr.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cptr.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;

	typedef struct BgL_cptrz00_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_typez00_bgl *BgL_pointzd2tozd2;
		bool_t BgL_arrayzf3zf3;
	}              *BgL_cptrz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_cpointerz00();
	extern obj_t BGl_cptrz00zzforeign_ctypez00;
	extern obj_t BGl_caliasz00zzforeign_ctypez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzforeign_cpointerz00();
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_cpointerz00();
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cpointerz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzforeign_cpointerz00();
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cpointerz00();
	static obj_t BGl_makezd2ctypezd2accessesz122137z12zzforeign_cpointerz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cstructz00zzforeign_ctypez00;
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cpointerz00();
	static obj_t __cnst[37];


	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2901z00zzforeign_cpointerz00,
		BgL_bgl_makeza7d2ctypeza7d2a2924z00,
		BGl_makezd2ctypezd2accessesz122137z12zzforeign_cpointerz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2902z00zzforeign_cpointerz00,
		BgL_bgl_string2902za700za7za7f2925za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2903z00zzforeign_cpointerz00,
		BgL_bgl_string2903za700za7za7f2926za7, "&(((", 4);
	      DEFINE_STRING(BGl_string2904z00zzforeign_cpointerz00,
		BgL_bgl_string2904za700za7za7f2927za7, ")($1))[ $2 ])", 13);
	      DEFINE_STRING(BGl_string2905z00zzforeign_cpointerz00,
		BgL_bgl_string2905za700za7za7f2928za7, "((", 2);
	      DEFINE_STRING(BGl_string2906z00zzforeign_cpointerz00,
		BgL_bgl_string2906za700za7za7f2929za7, ")($1))[ $2 ]", 12);
	      DEFINE_STRING(BGl_string2907z00zzforeign_cpointerz00,
		BgL_bgl_string2907za700za7za7f2930za7, "(((", 3);
	      DEFINE_STRING(BGl_string2908z00zzforeign_cpointerz00,
		BgL_bgl_string2908za700za7za7f2931za7, ")($1))[ $2 ] = *($3), BUNSPEC)",
		30);
	      DEFINE_STRING(BGl_string2910z00zzforeign_cpointerz00,
		BgL_bgl_string2910za700za7za7f2932za7, " * $1 )", 7);
	      DEFINE_STRING(BGl_string2909z00zzforeign_cpointerz00,
		BgL_bgl_string2909za700za7za7f2933za7, ")($1))[ $2 ] = $3, BUNSPEC)", 27);
	      DEFINE_STRING(BGl_string2911z00zzforeign_cpointerz00,
		BgL_bgl_string2911za700za7za7f2934za7, " )", 2);
	      DEFINE_STRING(BGl_string2912z00zzforeign_cpointerz00,
		BgL_bgl_string2912za700za7za7f2935za7, "sizeof( ", 8);
	      DEFINE_STRING(BGl_string2913z00zzforeign_cpointerz00,
		BgL_bgl_string2913za700za7za7f2936za7, ")GC_MALLOC( ", 12);
	      DEFINE_STRING(BGl_string2914z00zzforeign_cpointerz00,
		BgL_bgl_string2914za700za7za7f2937za7, "(", 1);
	      DEFINE_STRING(BGl_string2915z00zzforeign_cpointerz00,
		BgL_bgl_string2915za700za7za7f2938za7, " ))", 3);
	      DEFINE_STRING(BGl_string2916z00zzforeign_cpointerz00,
		BgL_bgl_string2916za700za7za7f2939za7, ")0L)", 4);
	      DEFINE_STRING(BGl_string2917z00zzforeign_cpointerz00,
		BgL_bgl_string2917za700za7za7f2940za7, "($1 == (", 8);
	      DEFINE_STRING(BGl_string2918z00zzforeign_cpointerz00,
		BgL_bgl_string2918za700za7za7f2941za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string2920z00zzforeign_cpointerz00,
		BgL_bgl_string2920za700za7za7f2942za7, "foreign_cpointer", 16);
	      DEFINE_STRING(BGl_string2919z00zzforeign_cpointerz00,
		BgL_bgl_string2919za700za7za7f2943za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string2921z00zzforeign_cpointerz00,
		BgL_bgl_string2921za700za7za7f2944za7,
		"predicate-of static foreign -null? symbol macro quote foreign-id eq? foreign? if o::obj (free-pragma::bool \"($1 == $2)\" o1 o2) o2 o1 ?::bool = free-pragma::bool -null?::bool |free-pragma::| make-null- len len::long make- pragma v ::obj i free-pragma i::long o * -set! -ref ::bool ? -> ",
		285);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cpointerz00(long
		BgL_checksumz00_788, char *BgL_fromz00_789)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cpointerz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cpointerz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_cpointerz00();
					BGl_cnstzd2initzd2zzforeign_cpointerz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cpointerz00();
					BGl_methodzd2initzd2zzforeign_cpointerz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cpointerz00()
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cpointer");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cpointer");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cpointerz00()
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 15 */
			{	/* Foreign/cptr.scm 15 */
				obj_t BgL_cportz00_780;

				BgL_cportz00_780 =
					bgl_open_input_string(BGl_string2921z00zzforeign_cpointerz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_781;

					BgL_iz00_781 = ((long) 36);
				BgL_loopz00_782:
					if ((BgL_iz00_781 == ((long) -1)))
						{	/* Foreign/cptr.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cptr.scm 15 */
							{	/* Foreign/cptr.scm 15 */
								obj_t BgL_arg2923z00_784;

								{	/* Foreign/cptr.scm 15 */

									{	/* Foreign/cptr.scm 15 */
										obj_t BgL_locationz00_786;

										BgL_locationz00_786 = BBOOL(((bool_t) 0));
										{	/* Foreign/cptr.scm 15 */

											BgL_arg2923z00_784 =
												BGl_readz00zz__readerz00(BgL_cportz00_780,
												BgL_locationz00_786);
										}
									}
								}
								{	/* Foreign/cptr.scm 15 */
									int BgL_auxz00_808;

									BgL_auxz00_808 = (int) (BgL_iz00_781);
									CNST_TABLE_SET(BgL_auxz00_808, BgL_arg2923z00_784);
							}}
							{	/* Foreign/cptr.scm 15 */
								int BgL_auxz00_787;

								BgL_auxz00_787 = (int) ((BgL_iz00_781 - ((long) 1)));
								{
									long BgL_iz00_813;

									BgL_iz00_813 = (long) (BgL_auxz00_787);
									BgL_iz00_781 = BgL_iz00_813;
									goto BgL_loopz00_782;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cpointerz00()
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cpointerz00()
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cpointerz00()
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cptrz00zzforeign_ctypez00, BGl_proc2901z00zzforeign_cpointerz00,
				BGl_string2902z00zzforeign_cpointerz00);
		}
	}



/* make-ctype-accesses!2137 */
	obj_t BGl_makezd2ctypezd2accessesz122137z12zzforeign_cpointerz00(obj_t
		BgL_envz00_772, obj_t BgL_whatz00_773, obj_t BgL_whoz00_774,
		obj_t BgL_locz00_775)
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 31 */
			{
				BgL_cptrz00_bglt BgL_whatz00_262;

				BgL_typez00_bglt BgL_whoz00_263;

				obj_t BgL_locz00_264;

				BgL_whatz00_262 = (BgL_cptrz00_bglt) (BgL_whatz00_773);
				BgL_whoz00_263 = (BgL_typez00_bglt) (BgL_whoz00_774);
				BgL_locz00_264 = BgL_locz00_775;
				{	/* Foreign/cptr.scm 34 */
					BgL_typez00_bglt BgL_btypez00_267;

					{
						obj_t BgL_auxz00_816;

						{	/* Foreign/cptr.scm 34 */
							BgL_objectz00_bglt BgL_auxz00_817;

							BgL_auxz00_817 = (BgL_objectz00_bglt) (BgL_whatz00_262);
							BgL_auxz00_816 = BGL_OBJECT_WIDENING(BgL_auxz00_817);
						}
						BgL_btypez00_267 =
							(((BgL_cptrz00_bglt) CREF(BgL_auxz00_816))->BgL_btypez00);
					}
					{	/* Foreign/cptr.scm 34 */
						obj_t BgL_idz00_268;

						BgL_idz00_268 =
							(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->BgL_idz00);
						{	/* Foreign/cptr.scm 35 */
							obj_t BgL_widz00_269;

							{
								BgL_typez00_bglt BgL_auxz00_822;

								BgL_auxz00_822 = (BgL_typez00_bglt) (BgL_whatz00_262);
								BgL_widz00_269 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_822))->BgL_idz00);
							}
							{	/* Foreign/cptr.scm 36 */
								obj_t BgL_bidz00_270;

								BgL_bidz00_270 =
									(((BgL_typez00_bglt) CREF(BgL_btypez00_267))->BgL_idz00);
								{	/* Foreign/cptr.scm 37 */
									obj_t BgL_idzd2ze3bidz31_271;

									{	/* Foreign/cptr.scm 38 */
										obj_t BgL_list2859z00_636;

										{	/* Foreign/cptr.scm 38 */
											obj_t BgL_arg2861z00_637;

											{	/* Foreign/cptr.scm 38 */
												obj_t BgL_arg2862z00_638;

												obj_t BgL_arg2863z00_639;

												BgL_arg2862z00_638 = CNST_TABLE_REF(((long) 0));
												BgL_arg2863z00_639 = MAKE_PAIR(BgL_bidz00_270, BNIL);
												BgL_arg2861z00_637 =
													MAKE_PAIR(BgL_arg2862z00_638, BgL_arg2863z00_639);
											}
											BgL_list2859z00_636 =
												MAKE_PAIR(BgL_idz00_268, BgL_arg2861z00_637);
										}
										BgL_idzd2ze3bidz31_271 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2859z00_636);
									}
									{	/* Foreign/cptr.scm 38 */
										obj_t BgL_bidzd2ze3idz31_272;

										{	/* Foreign/cptr.scm 39 */
											obj_t BgL_list2855z00_632;

											{	/* Foreign/cptr.scm 39 */
												obj_t BgL_arg2856z00_633;

												{	/* Foreign/cptr.scm 39 */
													obj_t BgL_arg2857z00_634;

													obj_t BgL_arg2858z00_635;

													BgL_arg2857z00_634 = CNST_TABLE_REF(((long) 0));
													BgL_arg2858z00_635 = MAKE_PAIR(BgL_idz00_268, BNIL);
													BgL_arg2856z00_633 =
														MAKE_PAIR(BgL_arg2857z00_634, BgL_arg2858z00_635);
												}
												BgL_list2855z00_632 =
													MAKE_PAIR(BgL_bidz00_270, BgL_arg2856z00_633);
											}
											BgL_bidzd2ze3idz31_272 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list2855z00_632);
										}
										{	/* Foreign/cptr.scm 39 */
											obj_t BgL_bidzf3zf3_273;

											{	/* Foreign/cptr.scm 40 */
												obj_t BgL_arg2849z00_627;

												{	/* Foreign/cptr.scm 40 */
													obj_t BgL_arg2850z00_628;

													obj_t BgL_arg2851z00_629;

													{	/* Foreign/cptr.scm 40 */
														obj_t BgL_res2865z00_648;

														{	/* Foreign/cptr.scm 40 */
															obj_t BgL_arg2063z00_647;

															BgL_arg2063z00_647 =
																SYMBOL_TO_STRING(BgL_idz00_268);
															BgL_res2865z00_648 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_647);
														}
														BgL_arg2850z00_628 = BgL_res2865z00_648;
													}
													{	/* Foreign/cptr.scm 40 */
														obj_t BgL_res2866z00_651;

														{	/* Foreign/cptr.scm 40 */
															obj_t BgL_symbolz00_649;

															BgL_symbolz00_649 = CNST_TABLE_REF(((long) 1));
															{	/* Foreign/cptr.scm 40 */
																obj_t BgL_arg2063z00_650;

																BgL_arg2063z00_650 =
																	SYMBOL_TO_STRING(BgL_symbolz00_649);
																BgL_res2866z00_651 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_650);
														}}
														BgL_arg2851z00_629 = BgL_res2866z00_651;
													}
													{	/* Foreign/cptr.scm 40 */
														obj_t BgL_list2852z00_630;

														{	/* Foreign/cptr.scm 40 */
															obj_t BgL_arg2854z00_631;

															BgL_arg2854z00_631 =
																MAKE_PAIR(BgL_arg2851z00_629, BNIL);
															BgL_list2852z00_630 =
																MAKE_PAIR(BgL_arg2850z00_628,
																BgL_arg2854z00_631);
														}
														BgL_arg2849z00_627 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2852z00_630);
												}}
												BgL_bidzf3zf3_273 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2849z00_627));
											}
											{	/* Foreign/cptr.scm 40 */
												obj_t BgL_bidzf3zd2boolz21_274;

												{	/* Foreign/cptr.scm 41 */
													obj_t BgL_arg2844z00_622;

													{	/* Foreign/cptr.scm 41 */
														obj_t BgL_arg2845z00_623;

														obj_t BgL_arg2846z00_624;

														{	/* Foreign/cptr.scm 41 */
															obj_t BgL_res2867z00_655;

															{	/* Foreign/cptr.scm 41 */
																obj_t BgL_arg2063z00_654;

																BgL_arg2063z00_654 =
																	SYMBOL_TO_STRING(BgL_bidzf3zf3_273);
																BgL_res2867z00_655 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_654);
															}
															BgL_arg2845z00_623 = BgL_res2867z00_655;
														}
														{	/* Foreign/cptr.scm 41 */
															obj_t BgL_res2868z00_658;

															{	/* Foreign/cptr.scm 41 */
																obj_t BgL_symbolz00_656;

																BgL_symbolz00_656 = CNST_TABLE_REF(((long) 2));
																{	/* Foreign/cptr.scm 41 */
																	obj_t BgL_arg2063z00_657;

																	BgL_arg2063z00_657 =
																		SYMBOL_TO_STRING(BgL_symbolz00_656);
																	BgL_res2868z00_658 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_657);
															}}
															BgL_arg2846z00_624 = BgL_res2868z00_658;
														}
														{	/* Foreign/cptr.scm 41 */
															obj_t BgL_list2847z00_625;

															{	/* Foreign/cptr.scm 41 */
																obj_t BgL_arg2848z00_626;

																BgL_arg2848z00_626 =
																	MAKE_PAIR(BgL_arg2846z00_624, BNIL);
																BgL_list2847z00_625 =
																	MAKE_PAIR(BgL_arg2845z00_623,
																	BgL_arg2848z00_626);
															}
															BgL_arg2844z00_622 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2847z00_625);
													}}
													BgL_bidzf3zd2boolz21_274 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2844z00_622));
												}
												{	/* Foreign/cptr.scm 41 */
													obj_t BgL_namez00_275;

													BgL_namez00_275 =
														(((BgL_typez00_bglt) CREF(BgL_whoz00_263))->
														BgL_namez00);
													{	/* Foreign/cptr.scm 42 */
														obj_t BgL_namezd2sanszd2z42z42_276;

														BgL_namezd2sanszd2z42z42_276 =
															BGl_stringzd2sanszd2z42z42zztype_toolsz00
															(BgL_namez00_275);
														{	/* Foreign/cptr.scm 43 */
															BgL_typez00_bglt BgL_pointzd2tozd2_277;

															{
																obj_t BgL_auxz00_858;

																{	/* Foreign/cptr.scm 44 */
																	BgL_objectz00_bglt BgL_auxz00_859;

																	BgL_auxz00_859 =
																		(BgL_objectz00_bglt) (BgL_whatz00_262);
																	BgL_auxz00_858 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_859);
																}
																BgL_pointzd2tozd2_277 =
																	(((BgL_cptrz00_bglt) CREF(BgL_auxz00_858))->
																	BgL_pointzd2tozd2);
															}
															{	/* Foreign/cptr.scm 44 */
																obj_t BgL_pointzd2tozd2idz00_278;

																BgL_pointzd2tozd2idz00_278 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_pointzd2tozd2_277))->BgL_idz00);
																{	/* Foreign/cptr.scm 45 */
																	obj_t BgL_pointzd2tozd2namez00_279;

																	BgL_pointzd2tozd2namez00_279 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_pointzd2tozd2_277))->
																		BgL_namez00);
																	{	/* Foreign/cptr.scm 46 */
																		obj_t
																			BgL_pointzd2tozd2namezd2sanszd2z42z42_280;
																		BgL_pointzd2tozd2namezd2sanszd2z42z42_280 =
																			BGl_stringzd2sanszd2z42z42zztype_toolsz00
																			(BgL_pointzd2tozd2namez00_279);
																		{	/* Foreign/cptr.scm 47 */

																			{

																				{	/* Foreign/cptr.scm 150 */
																					obj_t BgL_arg2185z00_289;

																					obj_t BgL_arg2187z00_290;

																					obj_t BgL_arg2192z00_291;

																					obj_t BgL_arg2198z00_292;

																					obj_t BgL_arg2199z00_293;

																					obj_t BgL_arg2200z00_294;

																					{	/* Foreign/cptr.scm 150 */
																						obj_t BgL_list2228z00_302;

																						{	/* Foreign/cptr.scm 150 */
																							obj_t BgL_arg2233z00_303;

																							obj_t BgL_arg2237z00_304;

																							BgL_arg2233z00_303 =
																								CNST_TABLE_REF(((long) 20));
																							{	/* Foreign/cptr.scm 150 */
																								obj_t BgL_arg2239z00_305;

																								BgL_arg2239z00_305 =
																									MAKE_PAIR(CNST_TABLE_REF((
																											(long) 1)), BNIL);
																								BgL_arg2237z00_304 =
																									MAKE_PAIR(BgL_idz00_268,
																									BgL_arg2239z00_305);
																							}
																							BgL_list2228z00_302 =
																								MAKE_PAIR(BgL_arg2233z00_303,
																								BgL_arg2237z00_304);
																						}
																						BgL_arg2185z00_289 =
																							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																							(BgL_list2228z00_302);
																					}
																					{	/* Foreign/cptr.scm 151 */
																						obj_t BgL_arg2240z00_306;

																						{	/* Foreign/cptr.scm 151 */
																							obj_t BgL_arg2242z00_307;

																							obj_t BgL_arg2243z00_308;

																							{	/* Foreign/cptr.scm 151 */
																								obj_t BgL_res2869z00_666;

																								{	/* Foreign/cptr.scm 151 */
																									obj_t BgL_symbolz00_664;

																									BgL_symbolz00_664 =
																										CNST_TABLE_REF(((long) 16));
																									{	/* Foreign/cptr.scm 151 */
																										obj_t BgL_arg2063z00_665;

																										BgL_arg2063z00_665 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_664);
																										BgL_res2869z00_666 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_665);
																								}}
																								BgL_arg2242z00_307 =
																									BgL_res2869z00_666;
																							}
																							{	/* Foreign/cptr.scm 151 */
																								obj_t BgL_res2870z00_669;

																								{	/* Foreign/cptr.scm 151 */
																									obj_t BgL_arg2063z00_668;

																									BgL_arg2063z00_668 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_268);
																									BgL_res2870z00_669 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_668);
																								}
																								BgL_arg2243z00_308 =
																									BgL_res2870z00_669;
																							}
																							{	/* Foreign/cptr.scm 151 */
																								obj_t BgL_list2244z00_309;

																								{	/* Foreign/cptr.scm 151 */
																									obj_t BgL_arg2245z00_310;

																									BgL_arg2245z00_310 =
																										MAKE_PAIR
																										(BgL_arg2243z00_308, BNIL);
																									BgL_list2244z00_309 =
																										MAKE_PAIR
																										(BgL_arg2242z00_307,
																										BgL_arg2245z00_310);
																								}
																								BgL_arg2240z00_306 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2244z00_309);
																						}}
																						BgL_arg2187z00_290 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2240z00_306));
																					}
																					{	/* Foreign/cptr.scm 152 */
																						obj_t BgL_arg2252z00_311;

																						{	/* Foreign/cptr.scm 152 */
																							obj_t BgL_arg2255z00_312;

																							obj_t BgL_arg2259z00_313;

																							{	/* Foreign/cptr.scm 152 */
																								obj_t BgL_res2871z00_673;

																								{	/* Foreign/cptr.scm 152 */
																									obj_t BgL_arg2063z00_672;

																									BgL_arg2063z00_672 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_268);
																									BgL_res2871z00_673 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_672);
																								}
																								BgL_arg2255z00_312 =
																									BgL_res2871z00_673;
																							}
																							{	/* Foreign/cptr.scm 152 */
																								obj_t BgL_res2872z00_676;

																								{	/* Foreign/cptr.scm 152 */
																									obj_t BgL_symbolz00_674;

																									BgL_symbolz00_674 =
																										CNST_TABLE_REF(((long) 33));
																									{	/* Foreign/cptr.scm 152 */
																										obj_t BgL_arg2063z00_675;

																										BgL_arg2063z00_675 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_674);
																										BgL_res2872z00_676 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_675);
																								}}
																								BgL_arg2259z00_313 =
																									BgL_res2872z00_676;
																							}
																							{	/* Foreign/cptr.scm 152 */
																								obj_t BgL_list2260z00_314;

																								{	/* Foreign/cptr.scm 152 */
																									obj_t BgL_arg2267z00_315;

																									BgL_arg2267z00_315 =
																										MAKE_PAIR
																										(BgL_arg2259z00_313, BNIL);
																									BgL_list2260z00_314 =
																										MAKE_PAIR
																										(BgL_arg2255z00_312,
																										BgL_arg2267z00_315);
																								}
																								BgL_arg2252z00_311 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2260z00_314);
																						}}
																						BgL_arg2192z00_291 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2252z00_311));
																					}
																					{	/* Foreign/cptr.scm 153 */
																						obj_t BgL_arg2274z00_316;

																						{	/* Foreign/cptr.scm 153 */
																							obj_t BgL_arg2275z00_317;

																							obj_t BgL_arg2282z00_318;

																							{	/* Foreign/cptr.scm 153 */
																								obj_t BgL_res2873z00_680;

																								{	/* Foreign/cptr.scm 153 */
																									obj_t BgL_symbolz00_678;

																									BgL_symbolz00_678 =
																										CNST_TABLE_REF(((long) 13));
																									{	/* Foreign/cptr.scm 153 */
																										obj_t BgL_arg2063z00_679;

																										BgL_arg2063z00_679 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_678);
																										BgL_res2873z00_680 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_679);
																								}}
																								BgL_arg2275z00_317 =
																									BgL_res2873z00_680;
																							}
																							{	/* Foreign/cptr.scm 153 */
																								obj_t BgL_res2874z00_683;

																								{	/* Foreign/cptr.scm 153 */
																									obj_t BgL_arg2063z00_682;

																									BgL_arg2063z00_682 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_268);
																									BgL_res2874z00_683 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_682);
																								}
																								BgL_arg2282z00_318 =
																									BgL_res2874z00_683;
																							}
																							{	/* Foreign/cptr.scm 153 */
																								obj_t BgL_list2283z00_319;

																								{	/* Foreign/cptr.scm 153 */
																									obj_t BgL_arg2285z00_320;

																									BgL_arg2285z00_320 =
																										MAKE_PAIR
																										(BgL_arg2282z00_318, BNIL);
																									BgL_list2283z00_319 =
																										MAKE_PAIR
																										(BgL_arg2275z00_317,
																										BgL_arg2285z00_320);
																								}
																								BgL_arg2274z00_316 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2283z00_319);
																						}}
																						BgL_arg2198z00_292 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2274z00_316));
																					}
																					{	/* Foreign/cptr.scm 154 */
																						obj_t BgL_arg2286z00_321;

																						{	/* Foreign/cptr.scm 154 */
																							obj_t BgL_arg2290z00_322;

																							obj_t BgL_arg2295z00_323;

																							{	/* Foreign/cptr.scm 154 */
																								obj_t BgL_res2875z00_687;

																								{	/* Foreign/cptr.scm 154 */
																									obj_t BgL_arg2063z00_686;

																									BgL_arg2063z00_686 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_268);
																									BgL_res2875z00_687 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_686);
																								}
																								BgL_arg2290z00_322 =
																									BgL_res2875z00_687;
																							}
																							{	/* Foreign/cptr.scm 154 */
																								obj_t BgL_res2876z00_690;

																								{	/* Foreign/cptr.scm 154 */
																									obj_t BgL_symbolz00_688;

																									BgL_symbolz00_688 =
																										CNST_TABLE_REF(((long) 3));
																									{	/* Foreign/cptr.scm 154 */
																										obj_t BgL_arg2063z00_689;

																										BgL_arg2063z00_689 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_688);
																										BgL_res2876z00_690 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_689);
																								}}
																								BgL_arg2295z00_323 =
																									BgL_res2876z00_690;
																							}
																							{	/* Foreign/cptr.scm 154 */
																								obj_t BgL_list2296z00_324;

																								{	/* Foreign/cptr.scm 154 */
																									obj_t BgL_arg2297z00_325;

																									BgL_arg2297z00_325 =
																										MAKE_PAIR
																										(BgL_arg2295z00_323, BNIL);
																									BgL_list2296z00_324 =
																										MAKE_PAIR
																										(BgL_arg2290z00_322,
																										BgL_arg2297z00_325);
																								}
																								BgL_arg2286z00_321 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2296z00_324);
																						}}
																						BgL_arg2199z00_293 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2286z00_321));
																					}
																					{	/* Foreign/cptr.scm 155 */
																						obj_t BgL_arg2305z00_326;

																						{	/* Foreign/cptr.scm 155 */
																							obj_t BgL_arg2312z00_327;

																							obj_t BgL_arg2318z00_328;

																							{	/* Foreign/cptr.scm 155 */
																								obj_t BgL_res2877z00_694;

																								{	/* Foreign/cptr.scm 155 */
																									obj_t BgL_arg2063z00_693;

																									BgL_arg2063z00_693 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_268);
																									BgL_res2877z00_694 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_693);
																								}
																								BgL_arg2312z00_327 =
																									BgL_res2877z00_694;
																							}
																							{	/* Foreign/cptr.scm 155 */
																								obj_t BgL_res2878z00_697;

																								{	/* Foreign/cptr.scm 155 */
																									obj_t BgL_symbolz00_695;

																									BgL_symbolz00_695 =
																										CNST_TABLE_REF(((long) 4));
																									{	/* Foreign/cptr.scm 155 */
																										obj_t BgL_arg2063z00_696;

																										BgL_arg2063z00_696 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_695);
																										BgL_res2878z00_697 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_696);
																								}}
																								BgL_arg2318z00_328 =
																									BgL_res2878z00_697;
																							}
																							{	/* Foreign/cptr.scm 155 */
																								obj_t BgL_list2319z00_329;

																								{	/* Foreign/cptr.scm 155 */
																									obj_t BgL_arg2325z00_330;

																									BgL_arg2325z00_330 =
																										MAKE_PAIR
																										(BgL_arg2318z00_328, BNIL);
																									BgL_list2319z00_329 =
																										MAKE_PAIR
																										(BgL_arg2312z00_327,
																										BgL_arg2325z00_330);
																								}
																								BgL_arg2305z00_326 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2319z00_329);
																						}}
																						BgL_arg2200z00_294 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2305z00_326));
																					}
																					{	/* Foreign/cptr.scm 148 */
																						obj_t BgL_list2201z00_295;

																						{	/* Foreign/cptr.scm 148 */
																							obj_t BgL_arg2208z00_296;

																							{	/* Foreign/cptr.scm 148 */
																								obj_t BgL_arg2213z00_297;

																								{	/* Foreign/cptr.scm 148 */
																									obj_t BgL_arg2216z00_298;

																									{	/* Foreign/cptr.scm 148 */
																										obj_t BgL_arg2222z00_299;

																										{	/* Foreign/cptr.scm 148 */
																											obj_t BgL_arg2226z00_300;

																											{	/* Foreign/cptr.scm 148 */
																												obj_t
																													BgL_arg2227z00_301;
																												BgL_arg2227z00_301 =
																													MAKE_PAIR
																													(BgL_arg2200z00_294,
																													BNIL);
																												BgL_arg2226z00_300 =
																													MAKE_PAIR
																													(BgL_arg2199z00_293,
																													BgL_arg2227z00_301);
																											}
																											BgL_arg2222z00_299 =
																												MAKE_PAIR
																												(BgL_arg2198z00_292,
																												BgL_arg2226z00_300);
																										}
																										BgL_arg2216z00_298 =
																											MAKE_PAIR
																											(BgL_arg2192z00_291,
																											BgL_arg2222z00_299);
																									}
																									BgL_arg2213z00_297 =
																										MAKE_PAIR
																										(BgL_arg2187z00_290,
																										BgL_arg2216z00_298);
																								}
																								BgL_arg2208z00_296 =
																									MAKE_PAIR(BgL_arg2185z00_289,
																									BgL_arg2213z00_297);
																							}
																							BgL_list2201z00_295 =
																								MAKE_PAIR(BgL_bidzf3zf3_273,
																								BgL_arg2208z00_296);
																						}
																						BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																							(BgL_list2201z00_295);
																				}}
																				{	/* Foreign/cptr.scm 158 */
																					obj_t BgL_arg2331z00_331;

																					{	/* Foreign/cptr.scm 158 */
																						obj_t BgL_arg2338z00_332;

																						obj_t BgL_arg2344z00_333;

																						BgL_arg2338z00_332 =
																							CNST_TABLE_REF(((long) 34));
																						{	/* Foreign/cptr.scm 158 */
																							obj_t BgL_arg2351z00_334;

																							obj_t BgL_arg2357z00_335;

																							{	/* Foreign/cptr.scm 53 */
																								obj_t BgL_arg2493z00_373;

																								obj_t BgL_arg2503z00_374;

																								BgL_arg2493z00_373 =
																									CNST_TABLE_REF(((long) 31));
																								{	/* Foreign/cptr.scm 53 */
																									obj_t BgL_arg2504z00_375;

																									{	/* Foreign/cptr.scm 53 */
																										obj_t BgL_arg2544z00_382;

																										obj_t BgL_arg2550z00_383;

																										BgL_arg2544z00_382 =
																											CNST_TABLE_REF(((long)
																												32));
																										{	/* Foreign/cptr.scm 53 */
																											obj_t BgL_list2551z00_384;

																											BgL_list2551z00_384 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2550z00_383 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_idz00_268,
																												BgL_list2551z00_384);
																										}
																										BgL_arg2504z00_375 =
																											MAKE_PAIR
																											(BgL_arg2544z00_382,
																											BgL_arg2550z00_383);
																									}
																									{	/* Foreign/cptr.scm 53 */
																										obj_t BgL_list2524z00_378;

																										{	/* Foreign/cptr.scm 53 */
																											obj_t BgL_arg2529z00_379;

																											{	/* Foreign/cptr.scm 53 */
																												obj_t
																													BgL_arg2531z00_380;
																												{	/* Foreign/cptr.scm 53 */
																													obj_t
																														BgL_arg2536z00_381;
																													BgL_arg2536z00_381 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2531z00_380 =
																														MAKE_PAIR
																														(BGl_string2919z00zzforeign_cpointerz00,
																														BgL_arg2536z00_381);
																												}
																												BgL_arg2529z00_379 =
																													MAKE_PAIR
																													(BgL_arg2504z00_375,
																													BgL_arg2531z00_380);
																											}
																											BgL_list2524z00_378 =
																												MAKE_PAIR
																												(BgL_idzd2ze3bidz31_271,
																												BgL_arg2529z00_379);
																										}
																										BgL_arg2503z00_374 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_bidz00_270,
																											BgL_list2524z00_378);
																								}}
																								BgL_arg2351z00_334 =
																									MAKE_PAIR(BgL_arg2493z00_373,
																									BgL_arg2503z00_374);
																							}
																							{	/* Foreign/cptr.scm 56 */
																								obj_t BgL_mnamez00_386;

																								BgL_mnamez00_386 =
																									string_append_3
																									(BGl_string2914z00zzforeign_cpointerz00,
																									BgL_namezd2sanszd2z42z42_276,
																									BGl_string2918z00zzforeign_cpointerz00);
																								{	/* Foreign/cptr.scm 57 */
																									obj_t BgL_arg2554z00_387;

																									obj_t BgL_arg2555z00_388;

																									BgL_arg2554z00_387 =
																										CNST_TABLE_REF(((long) 31));
																									{	/* Foreign/cptr.scm 57 */
																										obj_t BgL_arg2556z00_389;

																										BgL_arg2556z00_389 =
																											MAKE_PAIR(BgL_bidz00_270,
																											BNIL);
																										{	/* Foreign/cptr.scm 57 */
																											obj_t BgL_list2558z00_391;

																											{	/* Foreign/cptr.scm 57 */
																												obj_t
																													BgL_arg2559z00_392;
																												{	/* Foreign/cptr.scm 57 */
																													obj_t
																														BgL_arg2560z00_393;
																													{	/* Foreign/cptr.scm 57 */
																														obj_t
																															BgL_arg2561z00_394;
																														BgL_arg2561z00_394 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2560z00_393 =
																															MAKE_PAIR
																															(BgL_mnamez00_386,
																															BgL_arg2561z00_394);
																													}
																													BgL_arg2559z00_392 =
																														MAKE_PAIR
																														(BgL_arg2556z00_389,
																														BgL_arg2560z00_393);
																												}
																												BgL_list2558z00_391 =
																													MAKE_PAIR
																													(BgL_bidzd2ze3idz31_272,
																													BgL_arg2559z00_392);
																											}
																											BgL_arg2555z00_388 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_idz00_268,
																												BgL_list2558z00_391);
																									}}
																									BgL_arg2357z00_335 =
																										MAKE_PAIR
																										(BgL_arg2554z00_387,
																										BgL_arg2555z00_388);
																							}}
																							{	/* Foreign/cptr.scm 158 */
																								obj_t BgL_list2365z00_337;

																								{	/* Foreign/cptr.scm 158 */
																									obj_t BgL_arg2370z00_338;

																									BgL_arg2370z00_338 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2365z00_337 =
																										MAKE_PAIR
																										(BgL_arg2357z00_335,
																										BgL_arg2370z00_338);
																								}
																								BgL_arg2344z00_333 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2351z00_334,
																									BgL_list2365z00_337);
																						}}
																						BgL_arg2331z00_331 =
																							MAKE_PAIR(BgL_arg2338z00_332,
																							BgL_arg2344z00_333);
																					}
																					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																						(BgL_arg2331z00_331);
																				}
																				{	/* Foreign/cptr.scm 160 */
																					obj_t BgL_arg2377z00_339;

																					{	/* Foreign/cptr.scm 160 */
																						obj_t BgL_arg2383z00_340;

																						obj_t BgL_arg2390z00_341;

																						BgL_arg2383z00_340 =
																							CNST_TABLE_REF(((long) 35));
																						{	/* Foreign/cptr.scm 161 */
																							obj_t BgL_arg2396z00_342;

																							{	/* Foreign/cptr.scm 161 */
																								obj_t BgL_arg2409z00_345;

																								{	/* Foreign/cptr.scm 161 */
																									obj_t BgL_arg2416z00_346;

																									{	/* Foreign/cptr.scm 161 */
																										obj_t BgL_list2417z00_347;

																										BgL_list2417z00_347 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2416z00_346 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													10)),
																											BgL_list2417z00_347);
																									}
																									BgL_arg2409z00_345 =
																										MAKE_PAIR
																										(BgL_bidzf3zd2boolz21_274,
																										BgL_arg2416z00_346);
																								}
																								BgL_arg2396z00_342 =
																									BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																									(BgL_arg2409z00_345);
																							}
																							{	/* Foreign/cptr.scm 160 */
																								obj_t BgL_list2404z00_344;

																								BgL_list2404z00_344 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2390z00_341 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2396z00_342,
																									BgL_list2404z00_344);
																						}}
																						BgL_arg2377z00_339 =
																							MAKE_PAIR(BgL_arg2383z00_340,
																							BgL_arg2390z00_341);
																					}
																					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																						(BgL_arg2377z00_339);
																				}
																				{	/* Foreign/cptr.scm 162 */
																					obj_t BgL_arg2422z00_348;

																					{	/* Foreign/cptr.scm 162 */
																						obj_t BgL_arg2429z00_349;

																						obj_t BgL_arg2430z00_350;

																						BgL_arg2429z00_349 =
																							CNST_TABLE_REF(((long) 12));
																						{	/* Foreign/cptr.scm 162 */
																							obj_t BgL_arg2431z00_351;

																							{	/* Foreign/cptr.scm 162 */
																								obj_t BgL_arg2444z00_354;

																								{	/* Foreign/cptr.scm 162 */
																									obj_t BgL_arg2445z00_355;

																									{	/* Foreign/cptr.scm 162 */
																										obj_t BgL_arg2451z00_358;

																										obj_t BgL_arg2452z00_359;

																										BgL_arg2451z00_358 =
																											CNST_TABLE_REF(((long)
																												36));
																										{	/* Foreign/cptr.scm 162 */
																											obj_t BgL_list2453z00_360;

																											BgL_list2453z00_360 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2452z00_359 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_widz00_269,
																												BgL_list2453z00_360);
																										}
																										BgL_arg2445z00_355 =
																											MAKE_PAIR
																											(BgL_arg2451z00_358,
																											BgL_arg2452z00_359);
																									}
																									{	/* Foreign/cptr.scm 162 */
																										obj_t BgL_list2449z00_357;

																										BgL_list2449z00_357 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2444z00_354 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2445z00_355,
																											BgL_list2449z00_357);
																								}}
																								BgL_arg2431z00_351 =
																									MAKE_PAIR(BgL_bidzf3zf3_273,
																									BgL_arg2444z00_354);
																							}
																							{	/* Foreign/cptr.scm 162 */
																								obj_t BgL_list2438z00_353;

																								BgL_list2438z00_353 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2430z00_350 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2431z00_351,
																									BgL_list2438z00_353);
																						}}
																						BgL_arg2422z00_348 =
																							MAKE_PAIR(BgL_arg2429z00_349,
																							BgL_arg2430z00_350);
																					}
																					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																						(BgL_arg2422z00_348);
																				}
																				{	/* Foreign/cptr.scm 164 */
																					obj_t BgL_arg2454z00_361;

																					obj_t BgL_arg2459z00_362;

																					{

																						{	/* Foreign/cptr.scm 103 */
																							bool_t BgL_testz00_978;

																							{	/* Foreign/cptr.scm 103 */
																								bool_t BgL_testz00_979;

																								{	/* Foreign/cptr.scm 103 */
																									bool_t BgL_testz00_980;

																									{
																										obj_t BgL_auxz00_981;

																										{	/* Foreign/cptr.scm 103 */
																											BgL_objectz00_bglt
																												BgL_auxz00_982;
																											BgL_auxz00_982 =
																												(BgL_objectz00_bglt)
																												(BgL_whatz00_262);
																											BgL_auxz00_981 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_982);
																										}
																										BgL_testz00_980 =
																											(((BgL_cptrz00_bglt)
																												CREF(BgL_auxz00_981))->
																											BgL_arrayzf3zf3);
																									}
																									if (BgL_testz00_980)
																										{	/* Foreign/cptr.scm 103 */
																											BgL_testz00_979 =
																												(
																												(obj_t) (BgL_whoz00_263)
																												==
																												(obj_t)
																												(BgL_whatz00_262));
																										}
																									else
																										{	/* Foreign/cptr.scm 103 */
																											BgL_testz00_979 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_testz00_979)
																									{	/* Foreign/cptr.scm 103 */
																										BgL_testz00_978 =
																											((bool_t) 1);
																									}
																								else
																									{	/* Foreign/cptr.scm 104 */
																										bool_t BgL_testz00_989;

																										{	/* Foreign/cptr.scm 104 */
																											obj_t BgL_obj1621z00_721;

																											BgL_obj1621z00_721 =
																												(obj_t)
																												(BgL_whoz00_263);
																											BgL_testz00_989 =
																												BGl_iszd2azf3z21zz__objectz00
																												(BgL_obj1621z00_721,
																												BGl_caliasz00zzforeign_ctypez00);
																										}
																										if (BgL_testz00_989)
																											{	/* Foreign/cptr.scm 104 */
																												BgL_caliasz00_bglt
																													BgL_obj1622z00_722;
																												BgL_obj1622z00_722 =
																													(BgL_caliasz00_bglt)
																													(BgL_whoz00_263);
																												{
																													obj_t BgL_auxz00_993;

																													{	/* Foreign/cptr.scm 104 */
																														BgL_objectz00_bglt
																															BgL_auxz00_994;
																														BgL_auxz00_994 =
																															(BgL_objectz00_bglt)
																															(BgL_obj1622z00_722);
																														BgL_auxz00_993 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_994);
																													}
																													BgL_testz00_978 =
																														(((BgL_caliasz00_bglt) CREF(BgL_auxz00_993))->BgL_arrayzf3zf3);
																												}
																											}
																										else
																											{	/* Foreign/cptr.scm 104 */
																												BgL_testz00_978 =
																													((bool_t) 0);
																											}
																									}
																							}
																							if (BgL_testz00_978)
																								{	/* Foreign/cptr.scm 103 */
																									{	/* Foreign/cptr.scm 99 */
																										obj_t BgL_arg2748z00_517;

																										obj_t BgL_arg2749z00_518;

																										{	/* Foreign/cptr.scm 99 */
																											obj_t BgL_arg2750z00_519;

																											{	/* Foreign/cptr.scm 99 */
																												obj_t
																													BgL_arg2753z00_521;
																												{	/* Foreign/cptr.scm 99 */
																													obj_t
																														BgL_arg2754z00_522;
																													{	/* Foreign/cptr.scm 99 */
																														obj_t
																															BgL_arg2755z00_523;
																														obj_t
																															BgL_arg2756z00_524;
																														{	/* Foreign/cptr.scm 99 */
																															obj_t
																																BgL_res2887z00_732;
																															{	/* Foreign/cptr.scm 99 */
																																obj_t
																																	BgL_symbolz00_730;
																																BgL_symbolz00_730
																																	=
																																	CNST_TABLE_REF
																																	(((long) 13));
																																{	/* Foreign/cptr.scm 99 */
																																	obj_t
																																		BgL_arg2063z00_731;
																																	BgL_arg2063z00_731
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_730);
																																	BgL_res2887z00_732
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_731);
																															}}
																															BgL_arg2755z00_523
																																=
																																BgL_res2887z00_732;
																														}
																														{	/* Foreign/cptr.scm 99 */
																															obj_t
																																BgL_res2888z00_735;
																															{	/* Foreign/cptr.scm 99 */
																																obj_t
																																	BgL_arg2063z00_734;
																																BgL_arg2063z00_734
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_idz00_268);
																																BgL_res2888z00_735
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg2063z00_734);
																															}
																															BgL_arg2756z00_524
																																=
																																BgL_res2888z00_735;
																														}
																														{	/* Foreign/cptr.scm 99 */
																															obj_t
																																BgL_list2757z00_525;
																															{	/* Foreign/cptr.scm 99 */
																																obj_t
																																	BgL_arg2758z00_526;
																																BgL_arg2758z00_526
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2756z00_524,
																																	BNIL);
																																BgL_list2757z00_525
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2755z00_523,
																																	BgL_arg2758z00_526);
																															}
																															BgL_arg2754z00_522
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list2757z00_525);
																													}}
																													BgL_arg2753z00_521 =
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg2754z00_522));
																												}
																												BgL_arg2750z00_519 =
																													BGl_makezd2typedzd2identz00zzast_identz00
																													(BgL_arg2753z00_521,
																													BgL_idz00_268);
																											}
																											BgL_arg2748z00_517 =
																												MAKE_PAIR
																												(BgL_arg2750z00_519,
																												BNIL);
																										}
																										{	/* Foreign/cptr.scm 100 */
																											obj_t BgL_arg2759z00_527;

																											obj_t BgL_arg2760z00_528;

																											BgL_arg2759z00_527 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														8)), BgL_idz00_268);
																											{	/* Foreign/cptr.scm 101 */
																												obj_t
																													BgL_arg2761z00_529;
																												{	/* Foreign/cptr.scm 101 */
																													obj_t
																														BgL_arg2767z00_535;
																													BgL_arg2767z00_535 =
																														(((BgL_typez00_bglt)
																															CREF
																															(BgL_whoz00_263))->
																														BgL_siza7eza7);
																													{	/* Foreign/cptr.scm 101 */
																														obj_t
																															BgL_list2769z00_537;
																														{	/* Foreign/cptr.scm 101 */
																															obj_t
																																BgL_arg2770z00_538;
																															{	/* Foreign/cptr.scm 101 */
																																obj_t
																																	BgL_arg2771z00_539;
																																{	/* Foreign/cptr.scm 101 */
																																	obj_t
																																		BgL_arg2773z00_540;
																																	{	/* Foreign/cptr.scm 101 */
																																		obj_t
																																			BgL_arg2774z00_541;
																																		{	/* Foreign/cptr.scm 101 */
																																			obj_t
																																				BgL_arg2775z00_542;
																																			BgL_arg2775z00_542
																																				=
																																				MAKE_PAIR
																																				(BGl_string2915z00zzforeign_cpointerz00,
																																				BNIL);
																																			BgL_arg2774z00_541
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2767z00_535,
																																				BgL_arg2775z00_542);
																																		}
																																		BgL_arg2773z00_540
																																			=
																																			MAKE_PAIR
																																			(BGl_string2912z00zzforeign_cpointerz00,
																																			BgL_arg2774z00_541);
																																	}
																																	BgL_arg2771z00_539
																																		=
																																		MAKE_PAIR
																																		(BGl_string2913z00zzforeign_cpointerz00,
																																		BgL_arg2773z00_540);
																																}
																																BgL_arg2770z00_538
																																	=
																																	MAKE_PAIR
																																	(BgL_namezd2sanszd2z42z42_276,
																																	BgL_arg2771z00_539);
																															}
																															BgL_list2769z00_537
																																=
																																MAKE_PAIR
																																(BGl_string2914z00zzforeign_cpointerz00,
																																BgL_arg2770z00_538);
																														}
																														BgL_arg2761z00_529 =
																															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																															(BgL_list2769z00_537);
																												}}
																												{	/* Foreign/cptr.scm 100 */
																													obj_t
																														BgL_list2763z00_531;
																													BgL_list2763z00_531 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2760z00_528 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2761z00_529,
																														BgL_list2763z00_531);
																											}}
																											BgL_arg2749z00_518 =
																												MAKE_PAIR
																												(BgL_arg2759z00_527,
																												BgL_arg2760z00_528);
																										}
																										BgL_arg2454z00_361 =
																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																											(BgL_arg2748z00_517,
																											BgL_arg2749z00_518);
																								}}
																							else
																								{	/* Foreign/cptr.scm 103 */
																									{	/* Foreign/cptr.scm 91 */
																										obj_t BgL_arg2716z00_487;

																										obj_t BgL_arg2717z00_488;

																										{	/* Foreign/cptr.scm 91 */
																											obj_t BgL_arg2718z00_489;

																											obj_t BgL_arg2719z00_490;

																											{	/* Foreign/cptr.scm 91 */
																												obj_t
																													BgL_arg2720z00_491;
																												{	/* Foreign/cptr.scm 91 */
																													obj_t
																														BgL_arg2721z00_492;
																													{	/* Foreign/cptr.scm 91 */
																														obj_t
																															BgL_arg2722z00_493;
																														obj_t
																															BgL_arg2724z00_494;
																														{	/* Foreign/cptr.scm 91 */
																															obj_t
																																BgL_res2885z00_725;
																															{	/* Foreign/cptr.scm 91 */
																																obj_t
																																	BgL_symbolz00_723;
																																BgL_symbolz00_723
																																	=
																																	CNST_TABLE_REF
																																	(((long) 13));
																																{	/* Foreign/cptr.scm 91 */
																																	obj_t
																																		BgL_arg2063z00_724;
																																	BgL_arg2063z00_724
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_symbolz00_723);
																																	BgL_res2885z00_725
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_724);
																															}}
																															BgL_arg2722z00_493
																																=
																																BgL_res2885z00_725;
																														}
																														{	/* Foreign/cptr.scm 91 */
																															obj_t
																																BgL_res2886z00_728;
																															{	/* Foreign/cptr.scm 91 */
																																obj_t
																																	BgL_arg2063z00_727;
																																BgL_arg2063z00_727
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_idz00_268);
																																BgL_res2886z00_728
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg2063z00_727);
																															}
																															BgL_arg2724z00_494
																																=
																																BgL_res2886z00_728;
																														}
																														{	/* Foreign/cptr.scm 91 */
																															obj_t
																																BgL_list2725z00_495;
																															{	/* Foreign/cptr.scm 91 */
																																obj_t
																																	BgL_arg2726z00_496;
																																BgL_arg2726z00_496
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2724z00_494,
																																	BNIL);
																																BgL_list2725z00_495
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2722z00_493,
																																	BgL_arg2726z00_496);
																															}
																															BgL_arg2721z00_492
																																=
																																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																(BgL_list2725z00_495);
																													}}
																													BgL_arg2720z00_491 =
																														string_to_symbol
																														(BSTRING_TO_STRING
																														(BgL_arg2721z00_492));
																												}
																												BgL_arg2718z00_489 =
																													BGl_makezd2typedzd2identz00zzast_identz00
																													(BgL_arg2720z00_491,
																													BgL_idz00_268);
																											}
																											{	/* Foreign/cptr.scm 91 */
																												obj_t
																													BgL_list2727z00_497;
																												BgL_list2727z00_497 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2719z00_490 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 14)),
																													BgL_list2727z00_497);
																											}
																											BgL_arg2716z00_487 =
																												MAKE_PAIR
																												(BgL_arg2718z00_489,
																												BgL_arg2719z00_490);
																										}
																										{	/* Foreign/cptr.scm 92 */
																											obj_t BgL_arg2728z00_498;

																											obj_t BgL_arg2729z00_499;

																											BgL_arg2728z00_498 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														8)), BgL_idz00_268);
																											{	/* Foreign/cptr.scm 93 */
																												obj_t
																													BgL_arg2730z00_500;
																												obj_t
																													BgL_arg2731z00_501;
																												{	/* Foreign/cptr.scm 93 */
																													obj_t
																														BgL_list2735z00_505;
																													{	/* Foreign/cptr.scm 93 */
																														obj_t
																															BgL_arg2737z00_507;
																														{	/* Foreign/cptr.scm 93 */
																															obj_t
																																BgL_arg2738z00_508;
																															{	/* Foreign/cptr.scm 93 */
																																obj_t
																																	BgL_arg2740z00_510;
																																{	/* Foreign/cptr.scm 93 */
																																	obj_t
																																		BgL_arg2742z00_512;
																																	{	/* Foreign/cptr.scm 93 */
																																		obj_t
																																			BgL_arg2743z00_513;
																																		{	/* Foreign/cptr.scm 93 */
																																			obj_t
																																				BgL_arg2746z00_515;
																																			BgL_arg2746z00_515
																																				=
																																				MAKE_PAIR
																																				(BGl_string2910z00zzforeign_cpointerz00,
																																				BNIL);
																																			BgL_arg2743z00_513
																																				=
																																				MAKE_PAIR
																																				(BGl_string2911z00zzforeign_cpointerz00,
																																				BgL_arg2746z00_515);
																																		}
																																		BgL_arg2742z00_512
																																			=
																																			MAKE_PAIR
																																			(BgL_pointzd2tozd2namezd2sanszd2z42z42_280,
																																			BgL_arg2743z00_513);
																																	}
																																	BgL_arg2740z00_510
																																		=
																																		MAKE_PAIR
																																		(BGl_string2912z00zzforeign_cpointerz00,
																																		BgL_arg2742z00_512);
																																}
																																BgL_arg2738z00_508
																																	=
																																	MAKE_PAIR
																																	(BGl_string2913z00zzforeign_cpointerz00,
																																	BgL_arg2740z00_510);
																															}
																															BgL_arg2737z00_507
																																=
																																MAKE_PAIR
																																(BgL_namezd2sanszd2z42z42_276,
																																BgL_arg2738z00_508);
																														}
																														BgL_list2735z00_505
																															=
																															MAKE_PAIR
																															(BGl_string2914z00zzforeign_cpointerz00,
																															BgL_arg2737z00_507);
																													}
																													BgL_arg2730z00_500 =
																														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																														(BgL_list2735z00_505);
																												}
																												BgL_arg2731z00_501 =
																													CNST_TABLE_REF(((long)
																														15));
																												{	/* Foreign/cptr.scm 92 */
																													obj_t
																														BgL_list2733z00_503;
																													{	/* Foreign/cptr.scm 92 */
																														obj_t
																															BgL_arg2734z00_504;
																														BgL_arg2734z00_504 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2733z00_503
																															=
																															MAKE_PAIR
																															(BgL_arg2731z00_501,
																															BgL_arg2734z00_504);
																													}
																													BgL_arg2729z00_499 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2730z00_500,
																														BgL_list2733z00_503);
																											}}
																											BgL_arg2717z00_488 =
																												MAKE_PAIR
																												(BgL_arg2728z00_498,
																												BgL_arg2729z00_499);
																										}
																										BgL_arg2454z00_361 =
																											BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																											(BgL_arg2716z00_487,
																											BgL_arg2717z00_488);
																					}}}}
																					{	/* Foreign/cptr.scm 165 */
																						obj_t BgL_arg2460z00_363;

																						obj_t BgL_arg2461z00_364;

																						obj_t BgL_arg2470z00_365;

																						obj_t BgL_arg2471z00_366;

																						obj_t BgL_arg2472z00_367;

																						{	/* Foreign/cptr.scm 68 */
																							obj_t BgL_arg2655z00_425;

																							obj_t BgL_arg2656z00_426;

																							{	/* Foreign/cptr.scm 68 */
																								obj_t BgL_arg2657z00_427;

																								obj_t BgL_arg2658z00_428;

																								{	/* Foreign/cptr.scm 68 */
																									obj_t BgL_list2659z00_429;

																									{	/* Foreign/cptr.scm 68 */
																										obj_t BgL_arg2660z00_430;

																										obj_t BgL_arg2661z00_431;

																										BgL_arg2660z00_430 =
																											CNST_TABLE_REF(((long)
																												20));
																										{	/* Foreign/cptr.scm 68 */
																											obj_t BgL_arg2663z00_432;

																											BgL_arg2663z00_432 =
																												MAKE_PAIR(CNST_TABLE_REF
																												(((long) 21)), BNIL);
																											BgL_arg2661z00_431 =
																												MAKE_PAIR(BgL_idz00_268,
																												BgL_arg2663z00_432);
																										}
																										BgL_list2659z00_429 =
																											MAKE_PAIR
																											(BgL_arg2660z00_430,
																											BgL_arg2661z00_431);
																									}
																									BgL_arg2657z00_427 =
																										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																										(BgL_list2659z00_429);
																								}
																								{	/* Foreign/cptr.scm 69 */
																									obj_t BgL_arg2664z00_433;

																									obj_t BgL_arg2665z00_434;

																									BgL_arg2664z00_433 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long)
																												22)), BgL_idz00_268);
																									BgL_arg2665z00_434 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long)
																												23)), BgL_idz00_268);
																									{	/* Foreign/cptr.scm 68 */
																										obj_t BgL_list2667z00_436;

																										{	/* Foreign/cptr.scm 68 */
																											obj_t BgL_arg2668z00_437;

																											BgL_arg2668z00_437 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2667z00_436 =
																												MAKE_PAIR
																												(BgL_arg2665z00_434,
																												BgL_arg2668z00_437);
																										}
																										BgL_arg2658z00_428 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2664z00_433,
																											BgL_list2667z00_436);
																								}}
																								BgL_arg2655z00_425 =
																									MAKE_PAIR(BgL_arg2657z00_427,
																									BgL_arg2658z00_428);
																							}
																							BgL_arg2656z00_426 =
																								CNST_TABLE_REF(((long) 24));
																							BgL_arg2460z00_363 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2655z00_425,
																								BgL_arg2656z00_426);
																						}
																						{	/* Foreign/cptr.scm 75 */
																							obj_t BgL_arg2670z00_439;

																							obj_t BgL_arg2671z00_440;

																							{	/* Foreign/cptr.scm 75 */
																								obj_t BgL_arg2672z00_441;

																								obj_t BgL_arg2673z00_442;

																								{	/* Foreign/cptr.scm 75 */
																									obj_t BgL_arg2674z00_443;

																									{	/* Foreign/cptr.scm 75 */
																										obj_t BgL_arg2675z00_444;

																										obj_t BgL_arg2676z00_445;

																										{	/* Foreign/cptr.scm 75 */
																											obj_t BgL_res2879z00_701;

																											{	/* Foreign/cptr.scm 75 */
																												obj_t
																													BgL_arg2063z00_700;
																												BgL_arg2063z00_700 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_268);
																												BgL_res2879z00_701 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_700);
																											}
																											BgL_arg2675z00_444 =
																												BgL_res2879z00_701;
																										}
																										{	/* Foreign/cptr.scm 75 */
																											obj_t BgL_res2880z00_704;

																											{	/* Foreign/cptr.scm 75 */
																												obj_t BgL_symbolz00_702;

																												BgL_symbolz00_702 =
																													CNST_TABLE_REF(((long)
																														18));
																												{	/* Foreign/cptr.scm 75 */
																													obj_t
																														BgL_arg2063z00_703;
																													BgL_arg2063z00_703 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_702);
																													BgL_res2880z00_704 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg2063z00_703);
																											}}
																											BgL_arg2676z00_445 =
																												BgL_res2880z00_704;
																										}
																										{	/* Foreign/cptr.scm 75 */
																											obj_t BgL_list2677z00_446;

																											{	/* Foreign/cptr.scm 75 */
																												obj_t
																													BgL_arg2678z00_447;
																												BgL_arg2678z00_447 =
																													MAKE_PAIR
																													(BgL_arg2676z00_445,
																													BNIL);
																												BgL_list2677z00_446 =
																													MAKE_PAIR
																													(BgL_arg2675z00_444,
																													BgL_arg2678z00_447);
																											}
																											BgL_arg2674z00_443 =
																												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																												(BgL_list2677z00_446);
																									}}
																									BgL_arg2672z00_441 =
																										string_to_symbol
																										(BSTRING_TO_STRING
																										(BgL_arg2674z00_443));
																								}
																								{	/* Foreign/cptr.scm 76 */
																									obj_t BgL_arg2679z00_448;

																									BgL_arg2679z00_448 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(CNST_TABLE_REF(((long) 6)),
																										BgL_idz00_268);
																									{	/* Foreign/cptr.scm 75 */
																										obj_t BgL_list2681z00_450;

																										BgL_list2681z00_450 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2673z00_442 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2679z00_448,
																											BgL_list2681z00_450);
																								}}
																								BgL_arg2670z00_439 =
																									MAKE_PAIR(BgL_arg2672z00_441,
																									BgL_arg2673z00_442);
																							}
																							{	/* Foreign/cptr.scm 77 */
																								obj_t BgL_arg2682z00_451;

																								obj_t BgL_arg2683z00_452;

																								BgL_arg2682z00_451 =
																									CNST_TABLE_REF(((long) 19));
																								{	/* Foreign/cptr.scm 78 */
																									obj_t BgL_arg2684z00_453;

																									obj_t BgL_arg2685z00_454;

																									BgL_arg2684z00_453 =
																										string_append_3
																										(BGl_string2917z00zzforeign_cpointerz00,
																										BgL_namezd2sanszd2z42z42_276,
																										BGl_string2916z00zzforeign_cpointerz00);
																									BgL_arg2685z00_454 =
																										CNST_TABLE_REF(((long) 6));
																									{	/* Foreign/cptr.scm 77 */
																										obj_t BgL_list2687z00_456;

																										{	/* Foreign/cptr.scm 77 */
																											obj_t BgL_arg2688z00_457;

																											BgL_arg2688z00_457 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2687z00_456 =
																												MAKE_PAIR
																												(BgL_arg2685z00_454,
																												BgL_arg2688z00_457);
																										}
																										BgL_arg2683z00_452 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2684z00_453,
																											BgL_list2687z00_456);
																								}}
																								BgL_arg2671z00_440 =
																									MAKE_PAIR(BgL_arg2682z00_451,
																									BgL_arg2683z00_452);
																							}
																							BgL_arg2461z00_364 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2670z00_439,
																								BgL_arg2671z00_440);
																						}
																						{	/* Foreign/cptr.scm 83 */
																							obj_t BgL_arg2690z00_459;

																							obj_t BgL_arg2691z00_460;

																							{	/* Foreign/cptr.scm 83 */
																								obj_t BgL_arg2692z00_461;

																								{	/* Foreign/cptr.scm 83 */
																									obj_t BgL_arg2694z00_463;

																									{	/* Foreign/cptr.scm 83 */
																										obj_t BgL_arg2695z00_464;

																										{	/* Foreign/cptr.scm 83 */
																											obj_t BgL_arg2696z00_465;

																											obj_t BgL_arg2697z00_466;

																											{	/* Foreign/cptr.scm 83 */
																												obj_t
																													BgL_res2881z00_708;
																												{	/* Foreign/cptr.scm 83 */
																													obj_t
																														BgL_symbolz00_706;
																													BgL_symbolz00_706 =
																														CNST_TABLE_REF((
																															(long) 16));
																													{	/* Foreign/cptr.scm 83 */
																														obj_t
																															BgL_arg2063z00_707;
																														BgL_arg2063z00_707 =
																															SYMBOL_TO_STRING
																															(BgL_symbolz00_706);
																														BgL_res2881z00_708 =
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg2063z00_707);
																												}}
																												BgL_arg2696z00_465 =
																													BgL_res2881z00_708;
																											}
																											{	/* Foreign/cptr.scm 83 */
																												obj_t
																													BgL_res2882z00_711;
																												{	/* Foreign/cptr.scm 83 */
																													obj_t
																														BgL_arg2063z00_710;
																													BgL_arg2063z00_710 =
																														SYMBOL_TO_STRING
																														(BgL_idz00_268);
																													BgL_res2882z00_711 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg2063z00_710);
																												}
																												BgL_arg2697z00_466 =
																													BgL_res2882z00_711;
																											}
																											{	/* Foreign/cptr.scm 83 */
																												obj_t
																													BgL_list2698z00_467;
																												{	/* Foreign/cptr.scm 83 */
																													obj_t
																														BgL_arg2699z00_468;
																													BgL_arg2699z00_468 =
																														MAKE_PAIR
																														(BgL_arg2697z00_466,
																														BNIL);
																													BgL_list2698z00_467 =
																														MAKE_PAIR
																														(BgL_arg2696z00_465,
																														BgL_arg2699z00_468);
																												}
																												BgL_arg2695z00_464 =
																													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																													(BgL_list2698z00_467);
																										}}
																										BgL_arg2694z00_463 =
																											string_to_symbol
																											(BSTRING_TO_STRING
																											(BgL_arg2695z00_464));
																									}
																									BgL_arg2692z00_461 =
																										BGl_makezd2typedzd2identz00zzast_identz00
																										(BgL_arg2694z00_463,
																										BgL_idz00_268);
																								}
																								BgL_arg2690z00_459 =
																									MAKE_PAIR(BgL_arg2692z00_461,
																									BNIL);
																							}
																							{	/* Foreign/cptr.scm 84 */
																								obj_t BgL_arg2700z00_469;

																								obj_t BgL_arg2701z00_470;

																								{	/* Foreign/cptr.scm 84 */
																									obj_t BgL_arg2702z00_471;

																									{	/* Foreign/cptr.scm 84 */
																										obj_t BgL_arg2703z00_472;

																										obj_t BgL_arg2704z00_473;

																										{	/* Foreign/cptr.scm 84 */
																											obj_t BgL_res2883z00_715;

																											{	/* Foreign/cptr.scm 84 */
																												obj_t BgL_symbolz00_713;

																												BgL_symbolz00_713 =
																													CNST_TABLE_REF(((long)
																														17));
																												{	/* Foreign/cptr.scm 84 */
																													obj_t
																														BgL_arg2063z00_714;
																													BgL_arg2063z00_714 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_713);
																													BgL_res2883z00_715 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg2063z00_714);
																											}}
																											BgL_arg2703z00_472 =
																												BgL_res2883z00_715;
																										}
																										{	/* Foreign/cptr.scm 84 */
																											obj_t BgL_res2884z00_718;

																											{	/* Foreign/cptr.scm 84 */
																												obj_t
																													BgL_arg2063z00_717;
																												BgL_arg2063z00_717 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_268);
																												BgL_res2884z00_718 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_717);
																											}
																											BgL_arg2704z00_473 =
																												BgL_res2884z00_718;
																										}
																										{	/* Foreign/cptr.scm 84 */
																											obj_t BgL_list2705z00_474;

																											{	/* Foreign/cptr.scm 84 */
																												obj_t
																													BgL_arg2706z00_475;
																												BgL_arg2706z00_475 =
																													MAKE_PAIR
																													(BgL_arg2704z00_473,
																													BNIL);
																												BgL_list2705z00_474 =
																													MAKE_PAIR
																													(BgL_arg2703z00_472,
																													BgL_arg2706z00_475);
																											}
																											BgL_arg2702z00_471 =
																												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																												(BgL_list2705z00_474);
																									}}
																									BgL_arg2700z00_469 =
																										string_to_symbol
																										(BSTRING_TO_STRING
																										(BgL_arg2702z00_471));
																								}
																								{	/* Foreign/cptr.scm 85 */
																									obj_t BgL_arg2707z00_476;

																									BgL_arg2707z00_476 =
																										string_append_3
																										(BGl_string2905z00zzforeign_cpointerz00,
																										BgL_namezd2sanszd2z42z42_276,
																										BGl_string2916z00zzforeign_cpointerz00);
																									{	/* Foreign/cptr.scm 84 */
																										obj_t BgL_list2709z00_478;

																										BgL_list2709z00_478 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2701z00_470 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2707z00_476,
																											BgL_list2709z00_478);
																								}}
																								BgL_arg2691z00_460 =
																									MAKE_PAIR(BgL_arg2700z00_469,
																									BgL_arg2701z00_470);
																							}
																							BgL_arg2470z00_365 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2690z00_459,
																								BgL_arg2691z00_460);
																						}
																						{	/* Foreign/cptr.scm 61 */
																							obj_t BgL_arg2563z00_396;

																							obj_t BgL_arg2564z00_397;

																							{	/* Foreign/cptr.scm 61 */
																								obj_t BgL_arg2565z00_398;

																								{	/* Foreign/cptr.scm 61 */
																									obj_t BgL_list2566z00_399;

																									BgL_list2566z00_399 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2565z00_398 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												25)),
																										BgL_list2566z00_399);
																								}
																								BgL_arg2563z00_396 =
																									MAKE_PAIR
																									(BgL_bidzf3zd2boolz21_274,
																									BgL_arg2565z00_398);
																							}
																							{	/* Foreign/cptr.scm 62 */
																								obj_t BgL_arg2571z00_400;

																								obj_t BgL_arg2572z00_401;

																								BgL_arg2571z00_400 =
																									CNST_TABLE_REF(((long) 26));
																								{	/* Foreign/cptr.scm 62 */
																									obj_t BgL_arg2576z00_402;

																									obj_t BgL_arg2586z00_403;

																									{	/* Foreign/cptr.scm 62 */
																										obj_t BgL_arg2594z00_408;

																										obj_t BgL_arg2595z00_409;

																										BgL_arg2594z00_408 =
																											CNST_TABLE_REF(((long)
																												27));
																										{	/* Foreign/cptr.scm 62 */
																											obj_t BgL_list2596z00_410;

																											BgL_list2596z00_410 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2595z00_409 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														6)),
																												BgL_list2596z00_410);
																										}
																										BgL_arg2576z00_402 =
																											MAKE_PAIR
																											(BgL_arg2594z00_408,
																											BgL_arg2595z00_409);
																									}
																									{	/* Foreign/cptr.scm 63 */
																										obj_t BgL_arg2602z00_411;

																										obj_t BgL_arg2608z00_412;

																										BgL_arg2602z00_411 =
																											CNST_TABLE_REF(((long)
																												28));
																										{	/* Foreign/cptr.scm 63 */
																											obj_t BgL_arg2615z00_413;

																											obj_t BgL_arg2621z00_414;

																											{	/* Foreign/cptr.scm 63 */
																												obj_t
																													BgL_arg2642z00_418;
																												obj_t
																													BgL_arg2648z00_419;
																												BgL_arg2642z00_418 =
																													CNST_TABLE_REF(((long)
																														29));
																												{	/* Foreign/cptr.scm 63 */
																													obj_t
																														BgL_list2649z00_420;
																													BgL_list2649z00_420 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2648z00_419 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(CNST_TABLE_REF((
																																(long) 6)),
																														BgL_list2649z00_420);
																												}
																												BgL_arg2615z00_413 =
																													MAKE_PAIR
																													(BgL_arg2642z00_418,
																													BgL_arg2648z00_419);
																											}
																											{	/* Foreign/cptr.scm 63 */
																												obj_t
																													BgL_arg2650z00_421;
																												obj_t
																													BgL_arg2651z00_422;
																												BgL_arg2650z00_421 =
																													CNST_TABLE_REF(((long)
																														30));
																												{	/* Foreign/cptr.scm 63 */
																													obj_t
																														BgL_list2652z00_423;
																													BgL_list2652z00_423 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2651z00_422 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_bidz00_270,
																														BgL_list2652z00_423);
																												}
																												BgL_arg2621z00_414 =
																													MAKE_PAIR
																													(BgL_arg2650z00_421,
																													BgL_arg2651z00_422);
																											}
																											{	/* Foreign/cptr.scm 63 */
																												obj_t
																													BgL_list2629z00_416;
																												{	/* Foreign/cptr.scm 63 */
																													obj_t
																														BgL_arg2630z00_417;
																													BgL_arg2630z00_417 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2629z00_416 =
																														MAKE_PAIR
																														(BgL_arg2621z00_414,
																														BgL_arg2630z00_417);
																												}
																												BgL_arg2608z00_412 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2615z00_413,
																													BgL_list2629z00_416);
																										}}
																										BgL_arg2586z00_403 =
																											MAKE_PAIR
																											(BgL_arg2602z00_411,
																											BgL_arg2608z00_412);
																									}
																									{	/* Foreign/cptr.scm 62 */
																										obj_t BgL_list2588z00_405;

																										{	/* Foreign/cptr.scm 62 */
																											obj_t BgL_arg2589z00_406;

																											{	/* Foreign/cptr.scm 62 */
																												obj_t
																													BgL_arg2590z00_407;
																												BgL_arg2590z00_407 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2589z00_406 =
																													MAKE_PAIR(BFALSE,
																													BgL_arg2590z00_407);
																											}
																											BgL_list2588z00_405 =
																												MAKE_PAIR
																												(BgL_arg2586z00_403,
																												BgL_arg2589z00_406);
																										}
																										BgL_arg2572z00_401 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2576z00_402,
																											BgL_list2588z00_405);
																								}}
																								BgL_arg2564z00_397 =
																									MAKE_PAIR(BgL_arg2571z00_400,
																									BgL_arg2572z00_401);
																							}
																							BgL_arg2471z00_366 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2563z00_396,
																								BgL_arg2564z00_397);
																						}
																						{	/* Foreign/cptr.scm 110 */
																							obj_t BgL_refzd2idzd2_546;

																							obj_t BgL_setzd2idzd2_547;

																							obj_t BgL_refzd2typezd2idz00_548;

																							obj_t BgL_refzd2fmtzd2_549;

																							obj_t BgL_setzd2fmtzd2_550;

																							{	/* Foreign/cptr.scm 110 */
																								obj_t BgL_arg2825z00_596;

																								{	/* Foreign/cptr.scm 110 */
																									obj_t BgL_arg2826z00_597;

																									obj_t BgL_arg2827z00_598;

																									{	/* Foreign/cptr.scm 110 */
																										obj_t BgL_res2889z00_740;

																										{	/* Foreign/cptr.scm 110 */
																											obj_t BgL_arg2063z00_739;

																											BgL_arg2063z00_739 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_268);
																											BgL_res2889z00_740 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_739);
																										}
																										BgL_arg2826z00_597 =
																											BgL_res2889z00_740;
																									}
																									{	/* Foreign/cptr.scm 110 */
																										obj_t BgL_res2890z00_743;

																										{	/* Foreign/cptr.scm 110 */
																											obj_t BgL_symbolz00_741;

																											BgL_symbolz00_741 =
																												CNST_TABLE_REF(((long)
																													3));
																											{	/* Foreign/cptr.scm 110 */
																												obj_t
																													BgL_arg2063z00_742;
																												BgL_arg2063z00_742 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_741);
																												BgL_res2890z00_743 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_742);
																										}}
																										BgL_arg2827z00_598 =
																											BgL_res2890z00_743;
																									}
																									{	/* Foreign/cptr.scm 110 */
																										obj_t BgL_list2828z00_599;

																										{	/* Foreign/cptr.scm 110 */
																											obj_t BgL_arg2829z00_600;

																											BgL_arg2829z00_600 =
																												MAKE_PAIR
																												(BgL_arg2827z00_598,
																												BNIL);
																											BgL_list2828z00_599 =
																												MAKE_PAIR
																												(BgL_arg2826z00_597,
																												BgL_arg2829z00_600);
																										}
																										BgL_arg2825z00_596 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2828z00_599);
																								}}
																								BgL_refzd2idzd2_546 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2825z00_596));
																							}
																							{	/* Foreign/cptr.scm 111 */
																								obj_t BgL_arg2830z00_601;

																								{	/* Foreign/cptr.scm 111 */
																									obj_t BgL_arg2831z00_602;

																									obj_t BgL_arg2832z00_603;

																									{	/* Foreign/cptr.scm 111 */
																										obj_t BgL_res2891z00_747;

																										{	/* Foreign/cptr.scm 111 */
																											obj_t BgL_arg2063z00_746;

																											BgL_arg2063z00_746 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_268);
																											BgL_res2891z00_747 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_746);
																										}
																										BgL_arg2831z00_602 =
																											BgL_res2891z00_747;
																									}
																									{	/* Foreign/cptr.scm 111 */
																										obj_t BgL_res2892z00_750;

																										{	/* Foreign/cptr.scm 111 */
																											obj_t BgL_symbolz00_748;

																											BgL_symbolz00_748 =
																												CNST_TABLE_REF(((long)
																													4));
																											{	/* Foreign/cptr.scm 111 */
																												obj_t
																													BgL_arg2063z00_749;
																												BgL_arg2063z00_749 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_748);
																												BgL_res2892z00_750 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_749);
																										}}
																										BgL_arg2832z00_603 =
																											BgL_res2892z00_750;
																									}
																									{	/* Foreign/cptr.scm 111 */
																										obj_t BgL_list2833z00_604;

																										{	/* Foreign/cptr.scm 111 */
																											obj_t BgL_arg2834z00_605;

																											BgL_arg2834z00_605 =
																												MAKE_PAIR
																												(BgL_arg2832z00_603,
																												BNIL);
																											BgL_list2833z00_604 =
																												MAKE_PAIR
																												(BgL_arg2831z00_602,
																												BgL_arg2834z00_605);
																										}
																										BgL_arg2830z00_601 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2833z00_604);
																								}}
																								BgL_setzd2idzd2_547 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2830z00_601));
																							}
																							{	/* Foreign/cptr.scm 112 */
																								bool_t BgL_testz00_1171;

																								{	/* Foreign/cptr.scm 112 */
																									obj_t BgL_obj1991z00_752;

																									BgL_obj1991z00_752 =
																										(obj_t)
																										(BgL_pointzd2tozd2_277);
																									BgL_testz00_1171 =
																										BGl_iszd2azf3z21zz__objectz00
																										(BgL_obj1991z00_752,
																										BGl_cstructz00zzforeign_ctypez00);
																								}
																								if (BgL_testz00_1171)
																									{	/* Foreign/cptr.scm 113 */
																										obj_t BgL_arg2836z00_607;

																										{	/* Foreign/cptr.scm 113 */
																											obj_t BgL_arg2837z00_608;

																											obj_t BgL_arg2838z00_609;

																											{	/* Foreign/cptr.scm 113 */
																												obj_t
																													BgL_res2893z00_755;
																												{	/* Foreign/cptr.scm 113 */
																													obj_t
																														BgL_arg2063z00_754;
																													BgL_arg2063z00_754 =
																														SYMBOL_TO_STRING
																														(BgL_pointzd2tozd2idz00_278);
																													BgL_res2893z00_755 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg2063z00_754);
																												}
																												BgL_arg2837z00_608 =
																													BgL_res2893z00_755;
																											}
																											{	/* Foreign/cptr.scm 113 */
																												obj_t
																													BgL_res2894z00_758;
																												{	/* Foreign/cptr.scm 113 */
																													obj_t
																														BgL_symbolz00_756;
																													BgL_symbolz00_756 =
																														CNST_TABLE_REF((
																															(long) 5));
																													{	/* Foreign/cptr.scm 113 */
																														obj_t
																															BgL_arg2063z00_757;
																														BgL_arg2063z00_757 =
																															SYMBOL_TO_STRING
																															(BgL_symbolz00_756);
																														BgL_res2894z00_758 =
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg2063z00_757);
																												}}
																												BgL_arg2838z00_609 =
																													BgL_res2894z00_758;
																											}
																											{	/* Foreign/cptr.scm 113 */
																												obj_t
																													BgL_list2839z00_610;
																												{	/* Foreign/cptr.scm 113 */
																													obj_t
																														BgL_arg2841z00_611;
																													BgL_arg2841z00_611 =
																														MAKE_PAIR
																														(BgL_arg2838z00_609,
																														BNIL);
																													BgL_list2839z00_610 =
																														MAKE_PAIR
																														(BgL_arg2837z00_608,
																														BgL_arg2841z00_611);
																												}
																												BgL_arg2836z00_607 =
																													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																													(BgL_list2839z00_610);
																										}}
																										BgL_refzd2typezd2idz00_548 =
																											string_to_symbol
																											(BSTRING_TO_STRING
																											(BgL_arg2836z00_607));
																									}
																								else
																									{	/* Foreign/cptr.scm 112 */
																										BgL_refzd2typezd2idz00_548 =
																											BgL_pointzd2tozd2idz00_278;
																									}
																							}
																							{	/* Foreign/cptr.scm 115 */
																								bool_t BgL_testz00_1184;

																								{	/* Foreign/cptr.scm 115 */
																									obj_t BgL_obj1991z00_760;

																									BgL_obj1991z00_760 =
																										(obj_t)
																										(BgL_pointzd2tozd2_277);
																									BgL_testz00_1184 =
																										BGl_iszd2azf3z21zz__objectz00
																										(BgL_obj1991z00_760,
																										BGl_cstructz00zzforeign_ctypez00);
																								}
																								if (BgL_testz00_1184)
																									{	/* Foreign/cptr.scm 115 */
																										BgL_refzd2fmtzd2_549 =
																											string_append_3
																											(BGl_string2903z00zzforeign_cpointerz00,
																											BgL_namezd2sanszd2z42z42_276,
																											BGl_string2904z00zzforeign_cpointerz00);
																									}
																								else
																									{	/* Foreign/cptr.scm 115 */
																										BgL_refzd2fmtzd2_549 =
																											string_append_3
																											(BGl_string2905z00zzforeign_cpointerz00,
																											BgL_namezd2sanszd2z42z42_276,
																											BGl_string2906z00zzforeign_cpointerz00);
																									}
																							}
																							{	/* Foreign/cptr.scm 120 */
																								bool_t BgL_testz00_1189;

																								{	/* Foreign/cptr.scm 120 */
																									obj_t BgL_obj1991z00_761;

																									BgL_obj1991z00_761 =
																										(obj_t)
																										(BgL_pointzd2tozd2_277);
																									BgL_testz00_1189 =
																										BGl_iszd2azf3z21zz__objectz00
																										(BgL_obj1991z00_761,
																										BGl_cstructz00zzforeign_ctypez00);
																								}
																								if (BgL_testz00_1189)
																									{	/* Foreign/cptr.scm 120 */
																										BgL_setzd2fmtzd2_550 =
																											string_append_3
																											(BGl_string2907z00zzforeign_cpointerz00,
																											BgL_namezd2sanszd2z42z42_276,
																											BGl_string2908z00zzforeign_cpointerz00);
																									}
																								else
																									{	/* Foreign/cptr.scm 120 */
																										BgL_setzd2fmtzd2_550 =
																											string_append_3
																											(BGl_string2907z00zzforeign_cpointerz00,
																											BgL_namezd2sanszd2z42z42_276,
																											BGl_string2909z00zzforeign_cpointerz00);
																									}
																							}
																							{	/* Foreign/cptr.scm 129 */
																								obj_t BgL_arg2777z00_551;

																								obj_t BgL_arg2778z00_552;

																								{	/* Foreign/cptr.scm 129 */
																									obj_t BgL_arg2782z00_555;

																									obj_t BgL_arg2783z00_556;

																									{	/* Foreign/cptr.scm 129 */
																										obj_t BgL_arg2784z00_557;

																										obj_t BgL_arg2785z00_558;

																										BgL_arg2784z00_557 =
																											BGl_makezd2typedzd2identz00zzast_identz00
																											(BgL_refzd2idzd2_546,
																											BgL_refzd2typezd2idz00_548);
																										{	/* Foreign/cptr.scm 130 */
																											obj_t BgL_arg2786z00_559;

																											obj_t BgL_arg2787z00_560;

																											BgL_arg2786z00_559 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														6)), BgL_idz00_268);
																											BgL_arg2787z00_560 =
																												CNST_TABLE_REF(((long)
																													7));
																											{	/* Foreign/cptr.scm 129 */
																												obj_t
																													BgL_list2790z00_562;
																												{	/* Foreign/cptr.scm 129 */
																													obj_t
																														BgL_arg2791z00_563;
																													BgL_arg2791z00_563 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2790z00_562 =
																														MAKE_PAIR
																														(BgL_arg2787z00_560,
																														BgL_arg2791z00_563);
																												}
																												BgL_arg2785z00_558 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2786z00_559,
																													BgL_list2790z00_562);
																										}}
																										BgL_arg2782z00_555 =
																											MAKE_PAIR
																											(BgL_arg2784z00_557,
																											BgL_arg2785z00_558);
																									}
																									{	/* Foreign/cptr.scm 132 */
																										obj_t BgL_arg2792z00_564;

																										obj_t BgL_arg2793z00_565;

																										BgL_arg2792z00_564 =
																											BGl_makezd2typedzd2identz00zzast_identz00
																											(CNST_TABLE_REF(((long)
																													8)),
																											BgL_refzd2typezd2idz00_548);
																										{	/* Foreign/cptr.scm 132 */
																											obj_t BgL_list2794z00_566;

																											{	/* Foreign/cptr.scm 132 */
																												obj_t
																													BgL_arg2795z00_567;
																												obj_t
																													BgL_arg2796z00_568;
																												BgL_arg2795z00_567 =
																													CNST_TABLE_REF(((long)
																														6));
																												{	/* Foreign/cptr.scm 132 */
																													obj_t
																														BgL_arg2797z00_569;
																													obj_t
																														BgL_arg2798z00_570;
																													BgL_arg2797z00_569 =
																														CNST_TABLE_REF((
																															(long) 9));
																													BgL_arg2798z00_570 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2796z00_568 =
																														MAKE_PAIR
																														(BgL_arg2797z00_569,
																														BgL_arg2798z00_570);
																												}
																												BgL_list2794z00_566 =
																													MAKE_PAIR
																													(BgL_arg2795z00_567,
																													BgL_arg2796z00_568);
																											}
																											BgL_arg2793z00_565 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_refzd2fmtzd2_549,
																												BgL_list2794z00_566);
																										}
																										BgL_arg2783z00_556 =
																											MAKE_PAIR
																											(BgL_arg2792z00_564,
																											BgL_arg2793z00_565);
																									}
																									BgL_arg2777z00_551 =
																										BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																										(BgL_arg2782z00_555,
																										BgL_arg2783z00_556);
																								}
																								{	/* Foreign/cptr.scm 137 */
																									obj_t BgL_arg2799z00_571;

																									obj_t BgL_arg2800z00_572;

																									{	/* Foreign/cptr.scm 137 */
																										obj_t BgL_arg2801z00_573;

																										obj_t BgL_arg2802z00_574;

																										{	/* Foreign/cptr.scm 137 */
																											obj_t BgL_arg2803z00_575;

																											{	/* Foreign/cptr.scm 137 */
																												obj_t
																													BgL_arg2804z00_576;
																												obj_t
																													BgL_arg2805z00_577;
																												{	/* Foreign/cptr.scm 137 */
																													obj_t
																														BgL_res2895z00_764;
																													{	/* Foreign/cptr.scm 137 */
																														obj_t
																															BgL_arg2063z00_763;
																														BgL_arg2063z00_763 =
																															SYMBOL_TO_STRING
																															(BgL_setzd2idzd2_547);
																														BgL_res2895z00_764 =
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg2063z00_763);
																													}
																													BgL_arg2804z00_576 =
																														BgL_res2895z00_764;
																												}
																												{	/* Foreign/cptr.scm 137 */
																													obj_t
																														BgL_res2896z00_767;
																													{	/* Foreign/cptr.scm 137 */
																														obj_t
																															BgL_symbolz00_765;
																														BgL_symbolz00_765 =
																															CNST_TABLE_REF((
																																(long) 10));
																														{	/* Foreign/cptr.scm 137 */
																															obj_t
																																BgL_arg2063z00_766;
																															BgL_arg2063z00_766
																																=
																																SYMBOL_TO_STRING
																																(BgL_symbolz00_765);
																															BgL_res2896z00_767
																																=
																																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																(BgL_arg2063z00_766);
																													}}
																													BgL_arg2805z00_577 =
																														BgL_res2896z00_767;
																												}
																												{	/* Foreign/cptr.scm 137 */
																													obj_t
																														BgL_list2806z00_578;
																													{	/* Foreign/cptr.scm 137 */
																														obj_t
																															BgL_arg2807z00_579;
																														BgL_arg2807z00_579 =
																															MAKE_PAIR
																															(BgL_arg2805z00_577,
																															BNIL);
																														BgL_list2806z00_578
																															=
																															MAKE_PAIR
																															(BgL_arg2804z00_576,
																															BgL_arg2807z00_579);
																													}
																													BgL_arg2803z00_575 =
																														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																														(BgL_list2806z00_578);
																											}}
																											BgL_arg2801z00_573 =
																												string_to_symbol
																												(BSTRING_TO_STRING
																												(BgL_arg2803z00_575));
																										}
																										{	/* Foreign/cptr.scm 138 */
																											obj_t BgL_arg2808z00_580;

																											obj_t BgL_arg2809z00_581;

																											obj_t BgL_arg2810z00_582;

																											BgL_arg2808z00_580 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														6)), BgL_idz00_268);
																											BgL_arg2809z00_581 =
																												CNST_TABLE_REF(((long)
																													7));
																											BgL_arg2810z00_582 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(CNST_TABLE_REF(((long)
																														11)),
																												BgL_refzd2typezd2idz00_548);
																											{	/* Foreign/cptr.scm 137 */
																												obj_t
																													BgL_list2812z00_584;
																												{	/* Foreign/cptr.scm 137 */
																													obj_t
																														BgL_arg2813z00_585;
																													{	/* Foreign/cptr.scm 137 */
																														obj_t
																															BgL_arg2814z00_586;
																														BgL_arg2814z00_586 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2813z00_585 =
																															MAKE_PAIR
																															(BgL_arg2810z00_582,
																															BgL_arg2814z00_586);
																													}
																													BgL_list2812z00_584 =
																														MAKE_PAIR
																														(BgL_arg2809z00_581,
																														BgL_arg2813z00_585);
																												}
																												BgL_arg2802z00_574 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2808z00_580,
																													BgL_list2812z00_584);
																										}}
																										BgL_arg2799z00_571 =
																											MAKE_PAIR
																											(BgL_arg2801z00_573,
																											BgL_arg2802z00_574);
																									}
																									{	/* Foreign/cptr.scm 141 */
																										obj_t BgL_arg2815z00_587;

																										obj_t BgL_arg2816z00_588;

																										BgL_arg2815z00_587 =
																											CNST_TABLE_REF(((long)
																												12));
																										{	/* Foreign/cptr.scm 141 */
																											obj_t BgL_list2817z00_589;

																											{	/* Foreign/cptr.scm 141 */
																												obj_t
																													BgL_arg2818z00_590;
																												obj_t
																													BgL_arg2819z00_591;
																												BgL_arg2818z00_590 =
																													CNST_TABLE_REF(((long)
																														6));
																												{	/* Foreign/cptr.scm 141 */
																													obj_t
																														BgL_arg2820z00_592;
																													obj_t
																														BgL_arg2821z00_593;
																													BgL_arg2820z00_592 =
																														CNST_TABLE_REF((
																															(long) 9));
																													{	/* Foreign/cptr.scm 141 */
																														obj_t
																															BgL_arg2822z00_594;
																														obj_t
																															BgL_arg2823z00_595;
																														BgL_arg2822z00_594 =
																															CNST_TABLE_REF((
																																(long) 11));
																														BgL_arg2823z00_595 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2821z00_593 =
																															MAKE_PAIR
																															(BgL_arg2822z00_594,
																															BgL_arg2823z00_595);
																													}
																													BgL_arg2819z00_591 =
																														MAKE_PAIR
																														(BgL_arg2820z00_592,
																														BgL_arg2821z00_593);
																												}
																												BgL_list2817z00_589 =
																													MAKE_PAIR
																													(BgL_arg2818z00_590,
																													BgL_arg2819z00_591);
																											}
																											BgL_arg2816z00_588 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_setzd2fmtzd2_550,
																												BgL_list2817z00_589);
																										}
																										BgL_arg2800z00_572 =
																											MAKE_PAIR
																											(BgL_arg2815z00_587,
																											BgL_arg2816z00_588);
																									}
																									BgL_arg2778z00_552 =
																										BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																										(BgL_arg2799z00_571,
																										BgL_arg2800z00_572);
																								}
																								{	/* Foreign/cptr.scm 127 */
																									obj_t BgL_list2779z00_553;

																									{	/* Foreign/cptr.scm 127 */
																										obj_t BgL_arg2780z00_554;

																										BgL_arg2780z00_554 =
																											MAKE_PAIR
																											(BgL_arg2778z00_552,
																											BNIL);
																										BgL_list2779z00_553 =
																											MAKE_PAIR
																											(BgL_arg2777z00_551,
																											BgL_arg2780z00_554);
																									}
																									BgL_arg2472z00_367 =
																										BgL_list2779z00_553;
																						}}}
																						{	/* Foreign/cptr.scm 164 */
																							obj_t BgL_list2473z00_368;

																							{	/* Foreign/cptr.scm 164 */
																								obj_t BgL_arg2476z00_369;

																								{	/* Foreign/cptr.scm 164 */
																									obj_t BgL_arg2477z00_370;

																									{	/* Foreign/cptr.scm 164 */
																										obj_t BgL_arg2491z00_371;

																										BgL_arg2491z00_371 =
																											MAKE_PAIR
																											(BgL_arg2472z00_367,
																											BNIL);
																										BgL_arg2477z00_370 =
																											MAKE_PAIR
																											(BgL_arg2471z00_366,
																											BgL_arg2491z00_371);
																									}
																									BgL_arg2476z00_369 =
																										MAKE_PAIR
																										(BgL_arg2470z00_365,
																										BgL_arg2477z00_370);
																								}
																								BgL_list2473z00_368 =
																									MAKE_PAIR(BgL_arg2461z00_364,
																									BgL_arg2476z00_369);
																							}
																							BgL_arg2459z00_362 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2460z00_363,
																								BgL_list2473z00_368);
																					}}
																					return
																						MAKE_PAIR(BgL_arg2454z00_361,
																						BgL_arg2459z00_362);
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
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cpointerz00()
	{
		AN_OBJECT;
		{	/* Foreign/cptr.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2920z00zzforeign_cpointerz00));
		}
	}

#ifdef __cplusplus
}
#endif
