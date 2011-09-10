/*===========================================================================*/
/*   (Foreign/cstruct.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/cstruct.scm)*/
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

	typedef struct BgL_cstructz00_bgl
	{
		bool_t BgL_structzf3zf3;
		obj_t BgL_fieldsz00;
		obj_t BgL_cstructza2za2;
	}                 *BgL_cstructz00_bglt;

	typedef struct BgL_cstructza2za2_bgl
	{
		struct BgL_typez00_bgl *BgL_btypez00;
		struct BgL_cstructz00_bgl *BgL_cstructz00;
	}                    *BgL_cstructza2za2_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_cstructza2za2zzforeign_ctypez00;
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_cstructz00 = BUNSPEC;
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzforeign_cstructz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	extern BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_makezd2definezd2inlinez00zzforeign_libraryz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_cstructz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_cstructz00();
	static obj_t BGl_makezd2ctypezd2accessesz122147z12zzforeign_cstructz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2ctypezd2accessesz122149z12zzforeign_cstructz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cstructz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzforeign_cstructz00();
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cstructz00zzforeign_ctypez00;
	extern obj_t BGl_makezd2protozd2inlinez00zzforeign_libraryz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cstructz00();
	static obj_t BGl_methodzd2initzd2zzforeign_cstructz00();
	static obj_t __cnst[34];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2934z00zzforeign_cstructz00,
		BgL_bgl_makeza7d2ctypeza7d2a2959z00,
		BGl_makezd2ctypezd2accessesz122147z12zzforeign_cstructz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2936z00zzforeign_cstructz00,
		BgL_bgl_makeza7d2ctypeza7d2a2960z00,
		BGl_makezd2ctypezd2accessesz122149z12zzforeign_cstructz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2935z00zzforeign_cstructz00,
		BgL_bgl_string2935za700za7za7f2961za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2937z00zzforeign_cstructz00,
		BgL_bgl_string2937za700za7za7f2962za7, "*((", 3);
	      DEFINE_STRING(BGl_string2938z00zzforeign_cstructz00,
		BgL_bgl_string2938za700za7za7f2963za7, ") 0)", 4);
	      DEFINE_STRING(BGl_string2940z00zzforeign_cstructz00,
		BgL_bgl_string2940za700za7za7f2964za7, ")$1)->", 6);
	      DEFINE_STRING(BGl_string2939z00zzforeign_cstructz00,
		BgL_bgl_string2939za700za7za7f2965za7, "))", 2);
	      DEFINE_STRING(BGl_string2941z00zzforeign_cstructz00,
		BgL_bgl_string2941za700za7za7f2966za7, "&((((", 5);
	      DEFINE_STRING(BGl_string2942z00zzforeign_cstructz00,
		BgL_bgl_string2942za700za7za7f2967za7, ")", 1);
	      DEFINE_STRING(BGl_string2943z00zzforeign_cstructz00,
		BgL_bgl_string2943za700za7za7f2968za7, "(((", 3);
	      DEFINE_STRING(BGl_string2944z00zzforeign_cstructz00,
		BgL_bgl_string2944za700za7za7f2969za7, "((((", 4);
	      DEFINE_STRING(BGl_string2945z00zzforeign_cstructz00,
		BgL_bgl_string2945za700za7za7f2970za7, " = (*($2)), BUNSPEC)", 20);
	      DEFINE_STRING(BGl_string2946z00zzforeign_cstructz00,
		BgL_bgl_string2946za700za7za7f2971za7, " = ($2), BUNSPEC)", 17);
	      DEFINE_STRING(BGl_string2947z00zzforeign_cstructz00,
		BgL_bgl_string2947za700za7za7f2972za7, " ) )", 4);
	      DEFINE_STRING(BGl_string2948z00zzforeign_cstructz00,
		BgL_bgl_string2948za700za7za7f2973za7, ")GC_MALLOC( sizeof( ", 20);
	      DEFINE_STRING(BGl_string2950z00zzforeign_cstructz00,
		BgL_bgl_string2950za700za7za7f2974za7, "((", 2);
	      DEFINE_STRING(BGl_string2949z00zzforeign_cstructz00,
		BgL_bgl_string2949za700za7za7f2975za7, "(", 1);
	      DEFINE_STRING(BGl_string2951z00zzforeign_cstructz00,
		BgL_bgl_string2951za700za7za7f2976za7, ")0L)", 4);
	      DEFINE_STRING(BGl_string2952z00zzforeign_cstructz00,
		BgL_bgl_string2952za700za7za7f2977za7, "($1 == (", 8);
	      DEFINE_STRING(BGl_string2953z00zzforeign_cstructz00,
		BgL_bgl_string2953za700za7za7f2978za7, ")FOREIGN_TO_COBJ", 16);
	      DEFINE_STRING(BGl_string2954z00zzforeign_cstructz00,
		BgL_bgl_string2954za700za7za7f2979za7, "cobj_to_foreign", 15);
	      DEFINE_STRING(BGl_string2955z00zzforeign_cstructz00,
		BgL_bgl_string2955za700za7za7f2980za7, "foreign_cstruct", 15);
	      DEFINE_STRING(BGl_string2956z00zzforeign_cstructz00,
		BgL_bgl_string2956za700za7za7f2981za7,
		"predicate-of static foreign -null? symbol macro quote foreign-id eq? foreign? if o::obj (pragma::bool \"($1 == $2)\" o1 o2) o2 o1 ?::bool = pragma::bool -null?::bool |pragma::| make-null- make- let new v ::obj pragma o * -set! - ::bool ? -> ",
		239);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzforeign_cstructz00(long
		BgL_checksumz00_887, char *BgL_fromz00_888)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_cstructz00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_cstructz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_cstructz00();
					BGl_cnstzd2initzd2zzforeign_cstructz00();
					BGl_importedzd2moduleszd2initz00zzforeign_cstructz00();
					BGl_methodzd2initzd2zzforeign_cstructz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_cstructz00()
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_cstruct");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_cstruct");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_cstructz00()
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 15 */
			{	/* Foreign/cstruct.scm 15 */
				obj_t BgL_cportz00_876;

				BgL_cportz00_876 =
					bgl_open_input_string(BGl_string2956z00zzforeign_cstructz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_877;

					BgL_iz00_877 = ((long) 33);
				BgL_loopz00_878:
					if ((BgL_iz00_877 == ((long) -1)))
						{	/* Foreign/cstruct.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/cstruct.scm 15 */
							{	/* Foreign/cstruct.scm 15 */
								obj_t BgL_arg2958z00_880;

								{	/* Foreign/cstruct.scm 15 */

									{	/* Foreign/cstruct.scm 15 */
										obj_t BgL_locationz00_882;

										BgL_locationz00_882 = BBOOL(((bool_t) 0));
										{	/* Foreign/cstruct.scm 15 */

											BgL_arg2958z00_880 =
												BGl_readz00zz__readerz00(BgL_cportz00_876,
												BgL_locationz00_882);
										}
									}
								}
								{	/* Foreign/cstruct.scm 15 */
									int BgL_auxz00_907;

									BgL_auxz00_907 = (int) (BgL_iz00_877);
									CNST_TABLE_SET(BgL_auxz00_907, BgL_arg2958z00_880);
							}}
							{	/* Foreign/cstruct.scm 15 */
								int BgL_auxz00_883;

								BgL_auxz00_883 = (int) ((BgL_iz00_877 - ((long) 1)));
								{
									long BgL_iz00_912;

									BgL_iz00_912 = (long) (BgL_auxz00_883);
									BgL_iz00_877 = BgL_iz00_912;
									goto BgL_loopz00_878;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_cstructz00()
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_cstructz00()
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_cstructz00()
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cstructz00zzforeign_ctypez00, BGl_proc2934z00zzforeign_cstructz00,
				BGl_string2935z00zzforeign_cstructz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_cstructza2za2zzforeign_ctypez00,
				BGl_proc2936z00zzforeign_cstructz00,
				BGl_string2935z00zzforeign_cstructz00);
		}
	}



/* make-ctype-accesses!2149 */
	obj_t BGl_makezd2ctypezd2accessesz122149z12zzforeign_cstructz00(obj_t
		BgL_envz00_864, obj_t BgL_whatz00_865, obj_t BgL_whoz00_866,
		obj_t BgL_locz00_867)
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 38 */
			{
				BgL_cstructza2za2_bglt BgL_whatz00_272;

				BgL_typez00_bglt BgL_whoz00_273;

				obj_t BgL_locz00_274;

				BgL_whatz00_272 = (BgL_cstructza2za2_bglt) (BgL_whatz00_865);
				BgL_whoz00_273 = (BgL_typez00_bglt) (BgL_whoz00_866);
				BgL_locz00_274 = BgL_locz00_867;
				{	/* Foreign/cstruct.scm 41 */
					BgL_typez00_bglt BgL_btypez00_277;

					{
						obj_t BgL_auxz00_916;

						{	/* Foreign/cstruct.scm 41 */
							BgL_objectz00_bglt BgL_auxz00_917;

							BgL_auxz00_917 = (BgL_objectz00_bglt) (BgL_whatz00_272);
							BgL_auxz00_916 = BGL_OBJECT_WIDENING(BgL_auxz00_917);
						}
						BgL_btypez00_277 =
							(((BgL_cstructza2za2_bglt) CREF(BgL_auxz00_916))->BgL_btypez00);
					}
					{	/* Foreign/cstruct.scm 41 */
						obj_t BgL_idz00_278;

						BgL_idz00_278 =
							(((BgL_typez00_bglt) CREF(BgL_whoz00_273))->BgL_idz00);
						{	/* Foreign/cstruct.scm 42 */
							obj_t BgL_widz00_279;

							{
								BgL_typez00_bglt BgL_auxz00_922;

								BgL_auxz00_922 = (BgL_typez00_bglt) (BgL_whatz00_272);
								BgL_widz00_279 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_922))->BgL_idz00);
							}
							{	/* Foreign/cstruct.scm 43 */
								obj_t BgL_bidz00_280;

								BgL_bidz00_280 =
									(((BgL_typez00_bglt) CREF(BgL_btypez00_277))->BgL_idz00);
								{	/* Foreign/cstruct.scm 44 */
									obj_t BgL_idzd2ze3bidz31_281;

									{	/* Foreign/cstruct.scm 45 */
										obj_t BgL_list2899z00_707;

										{	/* Foreign/cstruct.scm 45 */
											obj_t BgL_arg2900z00_708;

											{	/* Foreign/cstruct.scm 45 */
												obj_t BgL_arg2901z00_709;

												obj_t BgL_arg2902z00_710;

												BgL_arg2901z00_709 = CNST_TABLE_REF(((long) 0));
												BgL_arg2902z00_710 = MAKE_PAIR(BgL_bidz00_280, BNIL);
												BgL_arg2900z00_708 =
													MAKE_PAIR(BgL_arg2901z00_709, BgL_arg2902z00_710);
											}
											BgL_list2899z00_707 =
												MAKE_PAIR(BgL_idz00_278, BgL_arg2900z00_708);
										}
										BgL_idzd2ze3bidz31_281 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2899z00_707);
									}
									{	/* Foreign/cstruct.scm 45 */
										obj_t BgL_bidzd2ze3idz31_282;

										{	/* Foreign/cstruct.scm 46 */
											obj_t BgL_list2895z00_703;

											{	/* Foreign/cstruct.scm 46 */
												obj_t BgL_arg2896z00_704;

												{	/* Foreign/cstruct.scm 46 */
													obj_t BgL_arg2897z00_705;

													obj_t BgL_arg2898z00_706;

													BgL_arg2897z00_705 = CNST_TABLE_REF(((long) 0));
													BgL_arg2898z00_706 = MAKE_PAIR(BgL_idz00_278, BNIL);
													BgL_arg2896z00_704 =
														MAKE_PAIR(BgL_arg2897z00_705, BgL_arg2898z00_706);
												}
												BgL_list2895z00_703 =
													MAKE_PAIR(BgL_bidz00_280, BgL_arg2896z00_704);
											}
											BgL_bidzd2ze3idz31_282 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list2895z00_703);
										}
										{	/* Foreign/cstruct.scm 46 */
											obj_t BgL_bidzf3zf3_283;

											{	/* Foreign/cstruct.scm 47 */
												obj_t BgL_arg2890z00_698;

												{	/* Foreign/cstruct.scm 47 */
													obj_t BgL_arg2891z00_699;

													obj_t BgL_arg2892z00_700;

													{	/* Foreign/cstruct.scm 47 */
														obj_t BgL_res2904z00_719;

														{	/* Foreign/cstruct.scm 47 */
															obj_t BgL_arg2063z00_718;

															BgL_arg2063z00_718 =
																SYMBOL_TO_STRING(BgL_idz00_278);
															BgL_res2904z00_719 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_718);
														}
														BgL_arg2891z00_699 = BgL_res2904z00_719;
													}
													{	/* Foreign/cstruct.scm 47 */
														obj_t BgL_res2905z00_722;

														{	/* Foreign/cstruct.scm 47 */
															obj_t BgL_symbolz00_720;

															BgL_symbolz00_720 = CNST_TABLE_REF(((long) 1));
															{	/* Foreign/cstruct.scm 47 */
																obj_t BgL_arg2063z00_721;

																BgL_arg2063z00_721 =
																	SYMBOL_TO_STRING(BgL_symbolz00_720);
																BgL_res2905z00_722 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_721);
														}}
														BgL_arg2892z00_700 = BgL_res2905z00_722;
													}
													{	/* Foreign/cstruct.scm 47 */
														obj_t BgL_list2893z00_701;

														{	/* Foreign/cstruct.scm 47 */
															obj_t BgL_arg2894z00_702;

															BgL_arg2894z00_702 =
																MAKE_PAIR(BgL_arg2892z00_700, BNIL);
															BgL_list2893z00_701 =
																MAKE_PAIR(BgL_arg2891z00_699,
																BgL_arg2894z00_702);
														}
														BgL_arg2890z00_698 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2893z00_701);
												}}
												BgL_bidzf3zf3_283 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2890z00_698));
											}
											{	/* Foreign/cstruct.scm 47 */
												obj_t BgL_bidzf3zd2boolz21_284;

												{	/* Foreign/cstruct.scm 48 */
													obj_t BgL_arg2884z00_693;

													{	/* Foreign/cstruct.scm 48 */
														obj_t BgL_arg2885z00_694;

														obj_t BgL_arg2886z00_695;

														{	/* Foreign/cstruct.scm 48 */
															obj_t BgL_res2906z00_726;

															{	/* Foreign/cstruct.scm 48 */
																obj_t BgL_arg2063z00_725;

																BgL_arg2063z00_725 =
																	SYMBOL_TO_STRING(BgL_bidzf3zf3_283);
																BgL_res2906z00_726 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_725);
															}
															BgL_arg2885z00_694 = BgL_res2906z00_726;
														}
														{	/* Foreign/cstruct.scm 48 */
															obj_t BgL_res2907z00_729;

															{	/* Foreign/cstruct.scm 48 */
																obj_t BgL_symbolz00_727;

																BgL_symbolz00_727 = CNST_TABLE_REF(((long) 2));
																{	/* Foreign/cstruct.scm 48 */
																	obj_t BgL_arg2063z00_728;

																	BgL_arg2063z00_728 =
																		SYMBOL_TO_STRING(BgL_symbolz00_727);
																	BgL_res2907z00_729 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_728);
															}}
															BgL_arg2886z00_695 = BgL_res2907z00_729;
														}
														{	/* Foreign/cstruct.scm 48 */
															obj_t BgL_list2887z00_696;

															{	/* Foreign/cstruct.scm 48 */
																obj_t BgL_arg2888z00_697;

																BgL_arg2888z00_697 =
																	MAKE_PAIR(BgL_arg2886z00_695, BNIL);
																BgL_list2887z00_696 =
																	MAKE_PAIR(BgL_arg2885z00_694,
																	BgL_arg2888z00_697);
															}
															BgL_arg2884z00_693 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list2887z00_696);
													}}
													BgL_bidzf3zd2boolz21_284 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg2884z00_693));
												}
												{	/* Foreign/cstruct.scm 48 */
													obj_t BgL_namez00_285;

													BgL_namez00_285 =
														(((BgL_typez00_bglt) CREF(BgL_whoz00_273))->
														BgL_namez00);
													{	/* Foreign/cstruct.scm 49 */
														obj_t BgL_namezd2sanszd2z42z42_286;

														BgL_namezd2sanszd2z42z42_286 =
															BGl_stringzd2sanszd2z42z42zztype_toolsz00
															(BgL_namez00_285);
														{	/* Foreign/cstruct.scm 50 */
															BgL_cstructz00_bglt BgL_cstructz00_287;

															{
																obj_t BgL_auxz00_958;

																{	/* Foreign/cstruct.scm 51 */
																	BgL_objectz00_bglt BgL_auxz00_959;

																	BgL_auxz00_959 =
																		(BgL_objectz00_bglt) (BgL_whatz00_272);
																	BgL_auxz00_958 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_959);
																}
																BgL_cstructz00_287 =
																	(((BgL_cstructza2za2_bglt)
																		CREF(BgL_auxz00_958))->BgL_cstructz00);
															}
															{	/* Foreign/cstruct.scm 51 */
																obj_t BgL_cstructzd2fieldszd2_288;

																{
																	obj_t BgL_auxz00_963;

																	{	/* Foreign/cstruct.scm 52 */
																		BgL_objectz00_bglt BgL_auxz00_964;

																		BgL_auxz00_964 =
																			(BgL_objectz00_bglt) (BgL_cstructz00_287);
																		BgL_auxz00_963 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_964);
																	}
																	BgL_cstructzd2fieldszd2_288 =
																		(((BgL_cstructz00_bglt)
																			CREF(BgL_auxz00_963))->BgL_fieldsz00);
																}
																{	/* Foreign/cstruct.scm 52 */
																	obj_t BgL_siza7eofza7_289;

																	BgL_siza7eofza7_289 =
																		string_append_3
																		(BGl_string2937z00zzforeign_cstructz00,
																		BgL_namezd2sanszd2z42z42_286,
																		BGl_string2938z00zzforeign_cstructz00);
																	{	/* Foreign/cstruct.scm 53 */

																		{
																			obj_t BgL_fieldz00_579;

																			{	/* Foreign/cstruct.scm 171 */
																				obj_t BgL_arg2198z00_300;

																				obj_t BgL_arg2199z00_301;

																				obj_t BgL_arg2200z00_302;

																				obj_t BgL_arg2208z00_303;

																				{	/* Foreign/cstruct.scm 171 */
																					obj_t BgL_arg2233z00_310;

																					{	/* Foreign/cstruct.scm 171 */
																						obj_t BgL_arg2237z00_311;

																						obj_t BgL_arg2239z00_312;

																						{	/* Foreign/cstruct.scm 171 */
																							obj_t BgL_res2908z00_736;

																							{	/* Foreign/cstruct.scm 171 */
																								obj_t BgL_symbolz00_734;

																								BgL_symbolz00_734 =
																									CNST_TABLE_REF(((long) 12));
																								{	/* Foreign/cstruct.scm 171 */
																									obj_t BgL_arg2063z00_735;

																									BgL_arg2063z00_735 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_734);
																									BgL_res2908z00_736 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_735);
																							}}
																							BgL_arg2237z00_311 =
																								BgL_res2908z00_736;
																						}
																						{	/* Foreign/cstruct.scm 171 */
																							obj_t BgL_res2909z00_739;

																							{	/* Foreign/cstruct.scm 171 */
																								obj_t BgL_arg2063z00_738;

																								BgL_arg2063z00_738 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_278);
																								BgL_res2909z00_739 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_738);
																							}
																							BgL_arg2239z00_312 =
																								BgL_res2909z00_739;
																						}
																						{	/* Foreign/cstruct.scm 171 */
																							obj_t BgL_list2240z00_313;

																							{	/* Foreign/cstruct.scm 171 */
																								obj_t BgL_arg2242z00_314;

																								BgL_arg2242z00_314 =
																									MAKE_PAIR(BgL_arg2239z00_312,
																									BNIL);
																								BgL_list2240z00_313 =
																									MAKE_PAIR(BgL_arg2237z00_311,
																									BgL_arg2242z00_314);
																							}
																							BgL_arg2233z00_310 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list2240z00_313);
																					}}
																					BgL_arg2198z00_300 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg2233z00_310));
																				}
																				{	/* Foreign/cstruct.scm 173 */
																					obj_t BgL_list2243z00_315;

																					{	/* Foreign/cstruct.scm 173 */
																						obj_t BgL_arg2245z00_316;

																						obj_t BgL_arg2252z00_317;

																						BgL_arg2245z00_316 =
																							CNST_TABLE_REF(((long) 17));
																						{	/* Foreign/cstruct.scm 173 */
																							obj_t BgL_arg2255z00_318;

																							BgL_arg2255z00_318 =
																								MAKE_PAIR(CNST_TABLE_REF(((long)
																										1)), BNIL);
																							BgL_arg2252z00_317 =
																								MAKE_PAIR(BgL_idz00_278,
																								BgL_arg2255z00_318);
																						}
																						BgL_list2243z00_315 =
																							MAKE_PAIR(BgL_arg2245z00_316,
																							BgL_arg2252z00_317);
																					}
																					BgL_arg2199z00_301 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list2243z00_315);
																				}
																				{	/* Foreign/cstruct.scm 175 */
																					obj_t BgL_arg2259z00_319;

																					{	/* Foreign/cstruct.scm 175 */
																						obj_t BgL_arg2260z00_320;

																						obj_t BgL_arg2267z00_321;

																						{	/* Foreign/cstruct.scm 175 */
																							obj_t BgL_res2910z00_743;

																							{	/* Foreign/cstruct.scm 175 */
																								obj_t BgL_arg2063z00_742;

																								BgL_arg2063z00_742 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_278);
																								BgL_res2910z00_743 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_742);
																							}
																							BgL_arg2260z00_320 =
																								BgL_res2910z00_743;
																						}
																						{	/* Foreign/cstruct.scm 175 */
																							obj_t BgL_res2911z00_746;

																							{	/* Foreign/cstruct.scm 175 */
																								obj_t BgL_symbolz00_744;

																								BgL_symbolz00_744 =
																									CNST_TABLE_REF(((long) 30));
																								{	/* Foreign/cstruct.scm 175 */
																									obj_t BgL_arg2063z00_745;

																									BgL_arg2063z00_745 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_744);
																									BgL_res2911z00_746 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_745);
																							}}
																							BgL_arg2267z00_321 =
																								BgL_res2911z00_746;
																						}
																						{	/* Foreign/cstruct.scm 175 */
																							obj_t BgL_list2268z00_322;

																							{	/* Foreign/cstruct.scm 175 */
																								obj_t BgL_arg2274z00_323;

																								BgL_arg2274z00_323 =
																									MAKE_PAIR(BgL_arg2267z00_321,
																									BNIL);
																								BgL_list2268z00_322 =
																									MAKE_PAIR(BgL_arg2260z00_320,
																									BgL_arg2274z00_323);
																							}
																							BgL_arg2259z00_319 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list2268z00_322);
																					}}
																					BgL_arg2200z00_302 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg2259z00_319));
																				}
																				{	/* Foreign/cstruct.scm 176 */
																					obj_t BgL_arg2275z00_324;

																					{	/* Foreign/cstruct.scm 176 */
																						obj_t BgL_arg2282z00_325;

																						obj_t BgL_arg2285z00_326;

																						{	/* Foreign/cstruct.scm 176 */
																							obj_t BgL_res2912z00_750;

																							{	/* Foreign/cstruct.scm 176 */
																								obj_t BgL_symbolz00_748;

																								BgL_symbolz00_748 =
																									CNST_TABLE_REF(((long) 13));
																								{	/* Foreign/cstruct.scm 176 */
																									obj_t BgL_arg2063z00_749;

																									BgL_arg2063z00_749 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_748);
																									BgL_res2912z00_750 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_749);
																							}}
																							BgL_arg2282z00_325 =
																								BgL_res2912z00_750;
																						}
																						{	/* Foreign/cstruct.scm 176 */
																							obj_t BgL_res2913z00_753;

																							{	/* Foreign/cstruct.scm 176 */
																								obj_t BgL_arg2063z00_752;

																								BgL_arg2063z00_752 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_278);
																								BgL_res2913z00_753 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_752);
																							}
																							BgL_arg2285z00_326 =
																								BgL_res2913z00_753;
																						}
																						{	/* Foreign/cstruct.scm 176 */
																							obj_t BgL_list2286z00_327;

																							{	/* Foreign/cstruct.scm 176 */
																								obj_t BgL_arg2290z00_328;

																								BgL_arg2290z00_328 =
																									MAKE_PAIR(BgL_arg2285z00_326,
																									BNIL);
																								BgL_list2286z00_327 =
																									MAKE_PAIR(BgL_arg2282z00_325,
																									BgL_arg2290z00_328);
																							}
																							BgL_arg2275z00_324 =
																								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																								(BgL_list2286z00_327);
																					}}
																					BgL_arg2208z00_303 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_arg2275z00_324));
																				}
																				{	/* Foreign/cstruct.scm 170 */
																					obj_t BgL_list2209z00_304;

																					{	/* Foreign/cstruct.scm 170 */
																						obj_t BgL_arg2213z00_305;

																						{	/* Foreign/cstruct.scm 170 */
																							obj_t BgL_arg2216z00_306;

																							{	/* Foreign/cstruct.scm 170 */
																								obj_t BgL_arg2222z00_307;

																								{	/* Foreign/cstruct.scm 170 */
																									obj_t BgL_arg2226z00_308;

																									{	/* Foreign/cstruct.scm 170 */
																										obj_t BgL_arg2227z00_309;

																										BgL_arg2227z00_309 =
																											MAKE_PAIR
																											(BgL_arg2208z00_303,
																											BNIL);
																										BgL_arg2226z00_308 =
																											MAKE_PAIR
																											(BgL_arg2200z00_302,
																											BgL_arg2227z00_309);
																									}
																									BgL_arg2222z00_307 =
																										MAKE_PAIR(BgL_bidzf3zf3_283,
																										BgL_arg2226z00_308);
																								}
																								BgL_arg2216z00_306 =
																									MAKE_PAIR(BgL_arg2199z00_301,
																									BgL_arg2222z00_307);
																							}
																							BgL_arg2213z00_305 =
																								MAKE_PAIR(BgL_idz00_278,
																								BgL_arg2216z00_306);
																						}
																						BgL_list2209z00_304 =
																							MAKE_PAIR(BgL_arg2198z00_300,
																							BgL_arg2213z00_305);
																					}
																					BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																						(BgL_list2209z00_304);
																			}}
																			{	/* Foreign/cstruct.scm 188 */
																				obj_t BgL_arg2295z00_329;

																				{	/* Foreign/cstruct.scm 188 */
																					obj_t BgL_arg2297z00_330;

																					obj_t BgL_arg2305z00_331;

																					BgL_arg2297z00_330 =
																						CNST_TABLE_REF(((long) 31));
																					{	/* Foreign/cstruct.scm 188 */
																						obj_t BgL_arg2312z00_332;

																						obj_t BgL_arg2318z00_333;

																						{	/* Foreign/cstruct.scm 59 */
																							obj_t BgL_arg2476z00_373;

																							obj_t BgL_arg2477z00_374;

																							BgL_arg2476z00_373 =
																								CNST_TABLE_REF(((long) 28));
																							{	/* Foreign/cstruct.scm 59 */
																								obj_t BgL_arg2491z00_375;

																								{	/* Foreign/cstruct.scm 59 */
																									obj_t BgL_arg2523z00_382;

																									obj_t BgL_arg2529z00_383;

																									BgL_arg2523z00_382 =
																										CNST_TABLE_REF(((long) 29));
																									{	/* Foreign/cstruct.scm 59 */
																										obj_t BgL_list2530z00_384;

																										BgL_list2530z00_384 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2529z00_383 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_idz00_278,
																											BgL_list2530z00_384);
																									}
																									BgL_arg2491z00_375 =
																										MAKE_PAIR
																										(BgL_arg2523z00_382,
																										BgL_arg2529z00_383);
																								}
																								{	/* Foreign/cstruct.scm 59 */
																									obj_t BgL_list2494z00_378;

																									{	/* Foreign/cstruct.scm 59 */
																										obj_t BgL_arg2503z00_379;

																										{	/* Foreign/cstruct.scm 59 */
																											obj_t BgL_arg2504z00_380;

																											{	/* Foreign/cstruct.scm 59 */
																												obj_t
																													BgL_arg2505z00_381;
																												BgL_arg2505z00_381 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2504z00_380 =
																													MAKE_PAIR
																													(BGl_string2954z00zzforeign_cstructz00,
																													BgL_arg2505z00_381);
																											}
																											BgL_arg2503z00_379 =
																												MAKE_PAIR
																												(BgL_arg2491z00_375,
																												BgL_arg2504z00_380);
																										}
																										BgL_list2494z00_378 =
																											MAKE_PAIR
																											(BgL_idzd2ze3bidz31_281,
																											BgL_arg2503z00_379);
																									}
																									BgL_arg2477z00_374 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_bidz00_280,
																										BgL_list2494z00_378);
																							}}
																							BgL_arg2312z00_332 =
																								MAKE_PAIR(BgL_arg2476z00_373,
																								BgL_arg2477z00_374);
																						}
																						{	/* Foreign/cstruct.scm 62 */
																							obj_t BgL_mnamez00_386;

																							BgL_mnamez00_386 =
																								string_append_3
																								(BGl_string2949z00zzforeign_cstructz00,
																								BgL_namezd2sanszd2z42z42_286,
																								BGl_string2953z00zzforeign_cstructz00);
																							{	/* Foreign/cstruct.scm 63 */
																								obj_t BgL_arg2536z00_387;

																								obj_t BgL_arg2544z00_388;

																								BgL_arg2536z00_387 =
																									CNST_TABLE_REF(((long) 28));
																								{	/* Foreign/cstruct.scm 63 */
																									obj_t BgL_arg2550z00_389;

																									BgL_arg2550z00_389 =
																										MAKE_PAIR(BgL_bidz00_280,
																										BNIL);
																									{	/* Foreign/cstruct.scm 63 */
																										obj_t BgL_list2555z00_391;

																										{	/* Foreign/cstruct.scm 63 */
																											obj_t BgL_arg2556z00_392;

																											{	/* Foreign/cstruct.scm 63 */
																												obj_t
																													BgL_arg2557z00_393;
																												{	/* Foreign/cstruct.scm 63 */
																													obj_t
																														BgL_arg2558z00_394;
																													BgL_arg2558z00_394 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2557z00_393 =
																														MAKE_PAIR
																														(BgL_mnamez00_386,
																														BgL_arg2558z00_394);
																												}
																												BgL_arg2556z00_392 =
																													MAKE_PAIR
																													(BgL_arg2550z00_389,
																													BgL_arg2557z00_393);
																											}
																											BgL_list2555z00_391 =
																												MAKE_PAIR
																												(BgL_bidzd2ze3idz31_282,
																												BgL_arg2556z00_392);
																										}
																										BgL_arg2544z00_388 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_idz00_278,
																											BgL_list2555z00_391);
																								}}
																								BgL_arg2318z00_333 =
																									MAKE_PAIR(BgL_arg2536z00_387,
																									BgL_arg2544z00_388);
																						}}
																						{	/* Foreign/cstruct.scm 188 */
																							obj_t BgL_list2326z00_335;

																							{	/* Foreign/cstruct.scm 188 */
																								obj_t BgL_arg2331z00_336;

																								BgL_arg2331z00_336 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2326z00_335 =
																									MAKE_PAIR(BgL_arg2318z00_333,
																									BgL_arg2331z00_336);
																							}
																							BgL_arg2305z00_331 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2312z00_332,
																								BgL_list2326z00_335);
																					}}
																					BgL_arg2295z00_329 =
																						MAKE_PAIR(BgL_arg2297z00_330,
																						BgL_arg2305z00_331);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg2295z00_329);
																			}
																			{	/* Foreign/cstruct.scm 190 */
																				obj_t BgL_arg2338z00_337;

																				{	/* Foreign/cstruct.scm 190 */
																					obj_t BgL_arg2344z00_338;

																					obj_t BgL_arg2351z00_339;

																					BgL_arg2344z00_338 =
																						CNST_TABLE_REF(((long) 32));
																					{	/* Foreign/cstruct.scm 191 */
																						obj_t BgL_arg2357z00_340;

																						{	/* Foreign/cstruct.scm 191 */
																							obj_t BgL_arg2370z00_343;

																							{	/* Foreign/cstruct.scm 191 */
																								obj_t BgL_arg2377z00_344;

																								{	/* Foreign/cstruct.scm 191 */
																									obj_t BgL_list2378z00_345;

																									BgL_list2378z00_345 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2377z00_344 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long) 8)),
																										BgL_list2378z00_345);
																								}
																								BgL_arg2370z00_343 =
																									MAKE_PAIR
																									(BgL_bidzf3zd2boolz21_284,
																									BgL_arg2377z00_344);
																							}
																							BgL_arg2357z00_340 =
																								BGl_makezd2protozd2inlinez00zzforeign_libraryz00
																								(BgL_arg2370z00_343);
																						}
																						{	/* Foreign/cstruct.scm 190 */
																							obj_t BgL_list2365z00_342;

																							BgL_list2365z00_342 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2351z00_339 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2357z00_340,
																								BgL_list2365z00_342);
																					}}
																					BgL_arg2338z00_337 =
																						MAKE_PAIR(BgL_arg2344z00_338,
																						BgL_arg2351z00_339);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg2338z00_337);
																			}
																			{	/* Foreign/cstruct.scm 192 */
																				obj_t BgL_arg2383z00_346;

																				{	/* Foreign/cstruct.scm 192 */
																					obj_t BgL_arg2390z00_347;

																					obj_t BgL_arg2396z00_348;

																					BgL_arg2390z00_347 =
																						CNST_TABLE_REF(((long) 7));
																					{	/* Foreign/cstruct.scm 192 */
																						obj_t BgL_arg2403z00_349;

																						{	/* Foreign/cstruct.scm 192 */
																							obj_t BgL_arg2416z00_352;

																							{	/* Foreign/cstruct.scm 192 */
																								obj_t BgL_arg2422z00_353;

																								{	/* Foreign/cstruct.scm 192 */
																									obj_t BgL_arg2431z00_356;

																									obj_t BgL_arg2437z00_357;

																									BgL_arg2431z00_356 =
																										CNST_TABLE_REF(((long) 33));
																									{	/* Foreign/cstruct.scm 192 */
																										obj_t BgL_list2438z00_358;

																										BgL_list2438z00_358 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2437z00_357 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_widz00_279,
																											BgL_list2438z00_358);
																									}
																									BgL_arg2422z00_353 =
																										MAKE_PAIR
																										(BgL_arg2431z00_356,
																										BgL_arg2437z00_357);
																								}
																								{	/* Foreign/cstruct.scm 192 */
																									obj_t BgL_list2430z00_355;

																									BgL_list2430z00_355 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2416z00_352 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2422z00_353,
																										BgL_list2430z00_355);
																							}}
																							BgL_arg2403z00_349 =
																								MAKE_PAIR(BgL_bidzf3zf3_283,
																								BgL_arg2416z00_352);
																						}
																						{	/* Foreign/cstruct.scm 192 */
																							obj_t BgL_list2410z00_351;

																							BgL_list2410z00_351 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2396z00_348 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2403z00_349,
																								BgL_list2410z00_351);
																					}}
																					BgL_arg2383z00_346 =
																						MAKE_PAIR(BgL_arg2390z00_347,
																						BgL_arg2396z00_348);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg2383z00_346);
																			}
																			{	/* Foreign/cstruct.scm 194 */
																				obj_t BgL_arg2444z00_359;

																				obj_t BgL_arg2445z00_360;

																				{	/* Foreign/cstruct.scm 99 */
																					obj_t BgL_arg2709z00_480;

																					obj_t BgL_arg2710z00_481;

																					{	/* Foreign/cstruct.scm 99 */
																						obj_t BgL_arg2711z00_482;

																						{	/* Foreign/cstruct.scm 99 */
																							obj_t BgL_arg2713z00_484;

																							{	/* Foreign/cstruct.scm 99 */
																								obj_t BgL_arg2714z00_485;

																								{	/* Foreign/cstruct.scm 99 */
																									obj_t BgL_arg2716z00_486;

																									obj_t BgL_arg2717z00_487;

																									{	/* Foreign/cstruct.scm 99 */
																										obj_t BgL_res2920z00_778;

																										{	/* Foreign/cstruct.scm 99 */
																											obj_t BgL_symbolz00_776;

																											BgL_symbolz00_776 =
																												CNST_TABLE_REF(((long)
																													12));
																											{	/* Foreign/cstruct.scm 99 */
																												obj_t
																													BgL_arg2063z00_777;
																												BgL_arg2063z00_777 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_776);
																												BgL_res2920z00_778 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_777);
																										}}
																										BgL_arg2716z00_486 =
																											BgL_res2920z00_778;
																									}
																									{	/* Foreign/cstruct.scm 99 */
																										obj_t BgL_res2921z00_781;

																										{	/* Foreign/cstruct.scm 99 */
																											obj_t BgL_arg2063z00_780;

																											BgL_arg2063z00_780 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_278);
																											BgL_res2921z00_781 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_780);
																										}
																										BgL_arg2717z00_487 =
																											BgL_res2921z00_781;
																									}
																									{	/* Foreign/cstruct.scm 99 */
																										obj_t BgL_list2718z00_488;

																										{	/* Foreign/cstruct.scm 99 */
																											obj_t BgL_arg2719z00_489;

																											BgL_arg2719z00_489 =
																												MAKE_PAIR
																												(BgL_arg2717z00_487,
																												BNIL);
																											BgL_list2718z00_488 =
																												MAKE_PAIR
																												(BgL_arg2716z00_486,
																												BgL_arg2719z00_489);
																										}
																										BgL_arg2714z00_485 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2718z00_488);
																								}}
																								BgL_arg2713z00_484 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2714z00_485));
																							}
																							BgL_arg2711z00_482 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(BgL_arg2713z00_484,
																								BgL_idz00_278);
																						}
																						BgL_arg2709z00_480 =
																							MAKE_PAIR(BgL_arg2711z00_482,
																							BNIL);
																					}
																					{	/* Foreign/cstruct.scm 100 */
																						obj_t BgL_arg2720z00_490;

																						obj_t BgL_arg2721z00_491;

																						BgL_arg2720z00_490 =
																							BGl_makezd2typedzd2identz00zzast_identz00
																							(CNST_TABLE_REF(((long) 7)),
																							BgL_idz00_278);
																						{	/* Foreign/cstruct.scm 101 */
																							obj_t BgL_arg2722z00_492;

																							{	/* Foreign/cstruct.scm 101 */
																								obj_t BgL_list2726z00_495;

																								{	/* Foreign/cstruct.scm 101 */
																									obj_t BgL_arg2728z00_497;

																									{	/* Foreign/cstruct.scm 101 */
																										obj_t BgL_arg2729z00_498;

																										{	/* Foreign/cstruct.scm 101 */
																											obj_t BgL_arg2731z00_500;

																											{	/* Foreign/cstruct.scm 101 */
																												obj_t
																													BgL_arg2732z00_501;
																												BgL_arg2732z00_501 =
																													MAKE_PAIR
																													(BGl_string2947z00zzforeign_cstructz00,
																													BNIL);
																												BgL_arg2731z00_500 =
																													MAKE_PAIR
																													(BgL_siza7eofza7_289,
																													BgL_arg2732z00_501);
																											}
																											BgL_arg2729z00_498 =
																												MAKE_PAIR
																												(BGl_string2948z00zzforeign_cstructz00,
																												BgL_arg2731z00_500);
																										}
																										BgL_arg2728z00_497 =
																											MAKE_PAIR
																											(BgL_namezd2sanszd2z42z42_286,
																											BgL_arg2729z00_498);
																									}
																									BgL_list2726z00_495 =
																										MAKE_PAIR
																										(BGl_string2949z00zzforeign_cstructz00,
																										BgL_arg2728z00_497);
																								}
																								BgL_arg2722z00_492 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2726z00_495);
																							}
																							{	/* Foreign/cstruct.scm 100 */
																								obj_t BgL_list2725z00_494;

																								BgL_list2725z00_494 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2721z00_491 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2722z00_492,
																									BgL_list2725z00_494);
																						}}
																						BgL_arg2710z00_481 =
																							MAKE_PAIR(BgL_arg2720z00_490,
																							BgL_arg2721z00_491);
																					}
																					BgL_arg2444z00_359 =
																						BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																						(BgL_arg2709z00_480,
																						BgL_arg2710z00_481);
																				}
																				{	/* Foreign/cstruct.scm 195 */
																					obj_t BgL_arg2448z00_361;

																					obj_t BgL_arg2451z00_362;

																					obj_t BgL_arg2452z00_363;

																					obj_t BgL_arg2453z00_364;

																					obj_t BgL_arg2454z00_365;

																					obj_t BgL_arg2459z00_366;

																					{	/* Foreign/cstruct.scm 107 */
																						obj_t BgL_formalszd2typedzd2_503;

																						obj_t BgL_newz00_504;

																						if (NULLP
																							(BgL_cstructzd2fieldszd2_288))
																							{	/* Foreign/cstruct.scm 107 */
																								BgL_formalszd2typedzd2_503 =
																									BNIL;
																							}
																						else
																							{	/* Foreign/cstruct.scm 107 */
																								obj_t BgL_head2138z00_556;

																								BgL_head2138z00_556 =
																									MAKE_PAIR(BNIL, BNIL);
																								{
																									obj_t BgL_l2136z00_558;

																									obj_t BgL_tail2139z00_559;

																									BgL_l2136z00_558 =
																										BgL_cstructzd2fieldszd2_288;
																									BgL_tail2139z00_559 =
																										BgL_head2138z00_556;
																								BgL_zc3anonymousza32778ze3z83_560:
																									if (NULLP
																										(BgL_l2136z00_558))
																										{	/* Foreign/cstruct.scm 107 */
																											BgL_formalszd2typedzd2_503
																												=
																												CDR
																												(BgL_head2138z00_556);
																										}
																									else
																										{	/* Foreign/cstruct.scm 107 */
																											obj_t
																												BgL_newtail2140z00_562;
																											{	/* Foreign/cstruct.scm 107 */
																												obj_t
																													BgL_arg2782z00_564;
																												{	/* Foreign/cstruct.scm 107 */
																													obj_t BgL_fz00_566;

																													BgL_fz00_566 =
																														CAR
																														(BgL_l2136z00_558);
																													{	/* Foreign/cstruct.scm 108 */
																														obj_t
																															BgL_fzd2idzd2_567;
																														{	/* Foreign/cstruct.scm 108 */
																															obj_t
																																BgL_pairz00_789;
																															BgL_pairz00_789 =
																																BgL_fz00_566;
																															BgL_fzd2idzd2_567
																																=
																																CAR(CDR
																																(BgL_pairz00_789));
																														}
																														{	/* Foreign/cstruct.scm 108 */
																															obj_t
																																BgL_fzd2typezd2idz00_568;
																															BgL_fzd2typezd2idz00_568
																																=
																																CAR
																																(BgL_fz00_566);
																															{	/* Foreign/cstruct.scm 109 */
																																BgL_typez00_bglt
																																	BgL_fzd2typezd2_569;
																																BgL_fzd2typezd2_569
																																	=
																																	BGl_usezd2typez12zc0zztype_envz00
																																	(BgL_fzd2typezd2idz00_568,
																																	BgL_locz00_274);
																																{	/* Foreign/cstruct.scm 110 */
																																	BgL_typez00_bglt
																																		BgL_afzd2typezd2_570;
																																	BgL_afzd2typezd2_570
																																		=
																																		BGl_getzd2aliasedzd2typez00zztype_typez00
																																		(BgL_fzd2typezd2_569);
																																	{	/* Foreign/cstruct.scm 112 */

																																		{	/* Foreign/cstruct.scm 114 */
																																			bool_t
																																				BgL_testz00_1096;
																																			{	/* Foreign/cstruct.scm 114 */
																																				obj_t
																																					BgL_obj1991z00_794;
																																				BgL_obj1991z00_794
																																					=
																																					(obj_t)
																																					(BgL_afzd2typezd2_570);
																																				BgL_testz00_1096
																																					=
																																					BGl_iszd2azf3z21zz__objectz00
																																					(BgL_obj1991z00_794,
																																					BGl_cstructz00zzforeign_ctypez00);
																																			}
																																			if (BgL_testz00_1096)
																																				{	/* Foreign/cstruct.scm 117 */
																																					obj_t
																																						BgL_arg2785z00_572;
																																					{	/* Foreign/cstruct.scm 117 */
																																						obj_t
																																							BgL_arg2786z00_573;
																																						{	/* Foreign/cstruct.scm 117 */
																																							obj_t
																																								BgL_arg2787z00_574;
																																							obj_t
																																								BgL_arg2789z00_575;
																																							{	/* Foreign/cstruct.scm 117 */
																																								obj_t
																																									BgL_res2922z00_797;
																																								{	/* Foreign/cstruct.scm 117 */
																																									obj_t
																																										BgL_symbolz00_795;
																																									BgL_symbolz00_795
																																										=
																																										BgL_fzd2typezd2idz00_568;
																																									{	/* Foreign/cstruct.scm 117 */
																																										obj_t
																																											BgL_arg2063z00_796;
																																										BgL_arg2063z00_796
																																											=
																																											SYMBOL_TO_STRING
																																											(BgL_symbolz00_795);
																																										BgL_res2922z00_797
																																											=
																																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																											(BgL_arg2063z00_796);
																																									}
																																								}
																																								BgL_arg2787z00_574
																																									=
																																									BgL_res2922z00_797;
																																							}
																																							{	/* Foreign/cstruct.scm 117 */
																																								obj_t
																																									BgL_res2923z00_800;
																																								{	/* Foreign/cstruct.scm 117 */
																																									obj_t
																																										BgL_symbolz00_798;
																																									BgL_symbolz00_798
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 5));
																																									{	/* Foreign/cstruct.scm 117 */
																																										obj_t
																																											BgL_arg2063z00_799;
																																										BgL_arg2063z00_799
																																											=
																																											SYMBOL_TO_STRING
																																											(BgL_symbolz00_798);
																																										BgL_res2923z00_800
																																											=
																																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																											(BgL_arg2063z00_799);
																																								}}
																																								BgL_arg2789z00_575
																																									=
																																									BgL_res2923z00_800;
																																							}
																																							{	/* Foreign/cstruct.scm 117 */
																																								obj_t
																																									BgL_list2790z00_576;
																																								{	/* Foreign/cstruct.scm 117 */
																																									obj_t
																																										BgL_arg2791z00_577;
																																									BgL_arg2791z00_577
																																										=
																																										MAKE_PAIR
																																										(BgL_arg2789z00_575,
																																										BNIL);
																																									BgL_list2790z00_576
																																										=
																																										MAKE_PAIR
																																										(BgL_arg2787z00_574,
																																										BgL_arg2791z00_577);
																																								}
																																								BgL_arg2786z00_573
																																									=
																																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																									(BgL_list2790z00_576);
																																						}}
																																						BgL_arg2785z00_572
																																							=
																																							string_to_symbol
																																							(BSTRING_TO_STRING
																																							(BgL_arg2786z00_573));
																																					}
																																					BgL_arg2782z00_564
																																						=
																																						BGl_makezd2typedzd2identz00zzast_identz00
																																						(BgL_fzd2idzd2_567,
																																						BgL_arg2785z00_572);
																																				}
																																			else
																																				{	/* Foreign/cstruct.scm 114 */
																																					BgL_arg2782z00_564
																																						=
																																						BGl_makezd2typedzd2identz00zzast_identz00
																																						(BgL_fzd2idzd2_567,
																																						BgL_fzd2typezd2idz00_568);
																																				}
																																		}
																																	}
																																}
																															}
																														}
																													}
																												}
																												BgL_newtail2140z00_562 =
																													MAKE_PAIR
																													(BgL_arg2782z00_564,
																													BNIL);
																											}
																											SET_CDR
																												(BgL_tail2139z00_559,
																												BgL_newtail2140z00_562);
																											{
																												obj_t
																													BgL_tail2139z00_1115;
																												obj_t BgL_l2136z00_1113;

																												BgL_l2136z00_1113 =
																													CDR(BgL_l2136z00_558);
																												BgL_tail2139z00_1115 =
																													BgL_newtail2140z00_562;
																												BgL_tail2139z00_559 =
																													BgL_tail2139z00_1115;
																												BgL_l2136z00_558 =
																													BgL_l2136z00_1113;
																												goto
																													BgL_zc3anonymousza32778ze3z83_560;
																											}
																										}
																								}
																							}
																						BgL_newz00_504 =
																							BGl_gensymz00zz__r4_symbols_6_4z00
																							(CNST_TABLE_REF(((long) 10)));
																						{	/* Foreign/cstruct.scm 123 */
																							obj_t BgL_arg2734z00_505;

																							obj_t BgL_arg2735z00_506;

																							BgL_arg2734z00_505 =
																								MAKE_PAIR
																								(BGl_makezd2typedzd2identz00zzast_identz00
																								(BgL_idz00_278, BgL_idz00_278),
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_formalszd2typedzd2_503,
																									BNIL));
																							{	/* Foreign/cstruct.scm 124 */
																								obj_t BgL_arg2738z00_509;

																								obj_t BgL_arg2739z00_510;

																								BgL_arg2738z00_509 =
																									CNST_TABLE_REF(((long) 11));
																								{	/* Foreign/cstruct.scm 124 */
																									obj_t BgL_arg2740z00_511;

																									obj_t BgL_arg2741z00_512;

																									{	/* Foreign/cstruct.scm 124 */
																										obj_t BgL_arg2743z00_514;

																										{	/* Foreign/cstruct.scm 124 */
																											obj_t BgL_arg2746z00_516;

																											obj_t BgL_arg2747z00_517;

																											BgL_arg2746z00_516 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(BgL_newz00_504,
																												BgL_idz00_278);
																											{	/* Foreign/cstruct.scm 125 */
																												obj_t
																													BgL_arg2748z00_518;
																												{	/* Foreign/cstruct.scm 125 */
																													obj_t
																														BgL_arg2752z00_521;
																													{	/* Foreign/cstruct.scm 125 */
																														obj_t
																															BgL_arg2754z00_523;
																														{	/* Foreign/cstruct.scm 125 */
																															obj_t
																																BgL_arg2755z00_524;
																															obj_t
																																BgL_arg2756z00_525;
																															{	/* Foreign/cstruct.scm 125 */
																																obj_t
																																	BgL_res2924z00_809;
																																{	/* Foreign/cstruct.scm 125 */
																																	obj_t
																																		BgL_symbolz00_807;
																																	BgL_symbolz00_807
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			12));
																																	{	/* Foreign/cstruct.scm 125 */
																																		obj_t
																																			BgL_arg2063z00_808;
																																		BgL_arg2063z00_808
																																			=
																																			SYMBOL_TO_STRING
																																			(BgL_symbolz00_807);
																																		BgL_res2924z00_809
																																			=
																																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																			(BgL_arg2063z00_808);
																																}}
																																BgL_arg2755z00_524
																																	=
																																	BgL_res2924z00_809;
																															}
																															{	/* Foreign/cstruct.scm 125 */
																																obj_t
																																	BgL_res2925z00_812;
																																{	/* Foreign/cstruct.scm 125 */
																																	obj_t
																																		BgL_arg2063z00_811;
																																	BgL_arg2063z00_811
																																		=
																																		SYMBOL_TO_STRING
																																		(BgL_idz00_278);
																																	BgL_res2925z00_812
																																		=
																																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																		(BgL_arg2063z00_811);
																																}
																																BgL_arg2756z00_525
																																	=
																																	BgL_res2925z00_812;
																															}
																															{	/* Foreign/cstruct.scm 125 */
																																obj_t
																																	BgL_list2757z00_526;
																																{	/* Foreign/cstruct.scm 125 */
																																	obj_t
																																		BgL_arg2758z00_527;
																																	BgL_arg2758z00_527
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2756z00_525,
																																		BNIL);
																																	BgL_list2757z00_526
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2755z00_524,
																																		BgL_arg2758z00_527);
																																}
																																BgL_arg2754z00_523
																																	=
																																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																	(BgL_list2757z00_526);
																														}}
																														BgL_arg2752z00_521 =
																															string_to_symbol
																															(BSTRING_TO_STRING
																															(BgL_arg2754z00_523));
																													}
																													BgL_arg2748z00_518 =
																														MAKE_PAIR
																														(BgL_arg2752z00_521,
																														BNIL);
																												}
																												{	/* Foreign/cstruct.scm 124 */
																													obj_t
																														BgL_list2750z00_520;
																													BgL_list2750z00_520 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2747z00_517 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2748z00_518,
																														BgL_list2750z00_520);
																											}}
																											BgL_arg2743z00_514 =
																												MAKE_PAIR
																												(BgL_arg2746z00_516,
																												BgL_arg2747z00_517);
																										}
																										BgL_arg2740z00_511 =
																											MAKE_PAIR
																											(BgL_arg2743z00_514,
																											BNIL);
																									}
																									{	/* Foreign/cstruct.scm 126 */
																										obj_t BgL_arg2759z00_528;

																										obj_t BgL_arg2760z00_529;

																										if (NULLP
																											(BgL_cstructzd2fieldszd2_288))
																											{	/* Foreign/cstruct.scm 126 */
																												BgL_arg2759z00_528 =
																													BNIL;
																											}
																										else
																											{	/* Foreign/cstruct.scm 126 */
																												obj_t
																													BgL_head2143z00_532;
																												BgL_head2143z00_532 =
																													MAKE_PAIR(BNIL, BNIL);
																												{
																													obj_t
																														BgL_l2141z00_534;
																													obj_t
																														BgL_tail2144z00_535;
																													BgL_l2141z00_534 =
																														BgL_cstructzd2fieldszd2_288;
																													BgL_tail2144z00_535 =
																														BgL_head2143z00_532;
																												BgL_zc3anonymousza32762ze3z83_536:
																													if (NULLP
																														(BgL_l2141z00_534))
																														{	/* Foreign/cstruct.scm 126 */
																															BgL_arg2759z00_528
																																=
																																CDR
																																(BgL_head2143z00_532);
																														}
																													else
																														{	/* Foreign/cstruct.scm 126 */
																															obj_t
																																BgL_newtail2145z00_538;
																															{	/* Foreign/cstruct.scm 126 */
																																obj_t
																																	BgL_arg2765z00_540;
																																{	/* Foreign/cstruct.scm 126 */
																																	obj_t
																																		BgL_fz00_542;
																																	BgL_fz00_542 =
																																		CAR
																																		(BgL_l2141z00_534);
																																	{	/* Foreign/cstruct.scm 127 */
																																		obj_t
																																			BgL_fzd2idzd2_543;
																																		{	/* Foreign/cstruct.scm 127 */
																																			obj_t
																																				BgL_pairz00_820;
																																			BgL_pairz00_820
																																				=
																																				BgL_fz00_542;
																																			BgL_fzd2idzd2_543
																																				=
																																				CAR(CDR
																																				(BgL_pairz00_820));
																																		}
																																		{	/* Foreign/cstruct.scm 128 */
																																			obj_t
																																				BgL_arg2767z00_544;
																																			obj_t
																																				BgL_arg2768z00_545;
																																			{	/* Foreign/cstruct.scm 128 */
																																				obj_t
																																					BgL_list2769z00_546;
																																				{	/* Foreign/cstruct.scm 128 */
																																					obj_t
																																						BgL_arg2770z00_547;
																																					{	/* Foreign/cstruct.scm 128 */
																																						obj_t
																																							BgL_arg2771z00_548;
																																						obj_t
																																							BgL_arg2773z00_549;
																																						BgL_arg2771z00_548
																																							=
																																							CNST_TABLE_REF
																																							(((long) 3));
																																						{	/* Foreign/cstruct.scm 128 */
																																							obj_t
																																								BgL_arg2774z00_550;
																																							BgL_arg2774z00_550
																																								=
																																								MAKE_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 4)), BNIL);
																																							BgL_arg2773z00_549
																																								=
																																								MAKE_PAIR
																																								(BgL_fzd2idzd2_543,
																																								BgL_arg2774z00_550);
																																						}
																																						BgL_arg2770z00_547
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2771z00_548,
																																							BgL_arg2773z00_549);
																																					}
																																					BgL_list2769z00_546
																																						=
																																						MAKE_PAIR
																																						(BgL_idz00_278,
																																						BgL_arg2770z00_547);
																																				}
																																				BgL_arg2767z00_544
																																					=
																																					BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																					(BgL_list2769z00_546);
																																			}
																																			{	/* Foreign/cstruct.scm 128 */
																																				obj_t
																																					BgL_list2775z00_551;
																																				{	/* Foreign/cstruct.scm 128 */
																																					obj_t
																																						BgL_arg2776z00_552;
																																					BgL_arg2776z00_552
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list2775z00_551
																																						=
																																						MAKE_PAIR
																																						(BgL_fzd2idzd2_543,
																																						BgL_arg2776z00_552);
																																				}
																																				BgL_arg2768z00_545
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_newz00_504,
																																					BgL_list2775z00_551);
																																			}
																																			BgL_arg2765z00_540
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2767z00_544,
																																				BgL_arg2768z00_545);
																																}}}
																																BgL_newtail2145z00_538
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2765z00_540,
																																	BNIL);
																															}
																															SET_CDR
																																(BgL_tail2144z00_535,
																																BgL_newtail2145z00_538);
																															{
																																obj_t
																																	BgL_tail2144z00_1162;
																																obj_t
																																	BgL_l2141z00_1160;
																																BgL_l2141z00_1160
																																	=
																																	CDR
																																	(BgL_l2141z00_534);
																																BgL_tail2144z00_1162
																																	=
																																	BgL_newtail2145z00_538;
																																BgL_tail2144z00_535
																																	=
																																	BgL_tail2144z00_1162;
																																BgL_l2141z00_534
																																	=
																																	BgL_l2141z00_1160;
																																goto
																																	BgL_zc3anonymousza32762ze3z83_536;
																															}
																														}
																												}
																											}
																										BgL_arg2760z00_529 =
																											MAKE_PAIR(BgL_newz00_504,
																											BNIL);
																										BgL_arg2741z00_512 =
																											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2759z00_528,
																											BgL_arg2760z00_529);
																									}
																									{	/* Foreign/cstruct.scm 124 */
																										obj_t BgL_list2742z00_513;

																										BgL_list2742z00_513 =
																											MAKE_PAIR
																											(BgL_arg2741z00_512,
																											BNIL);
																										BgL_arg2739z00_510 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2740z00_511,
																											BgL_list2742z00_513);
																									}
																								}
																								BgL_arg2735z00_506 =
																									MAKE_PAIR(BgL_arg2738z00_509,
																									BgL_arg2739z00_510);
																							}
																							BgL_arg2448z00_361 =
																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																								(BgL_arg2734z00_505,
																								BgL_arg2735z00_506);
																						}
																					}
																					{	/* Foreign/cstruct.scm 76 */
																						obj_t BgL_arg2651z00_425;

																						obj_t BgL_arg2652z00_426;

																						{	/* Foreign/cstruct.scm 76 */
																							obj_t BgL_arg2655z00_427;

																							obj_t BgL_arg2656z00_428;

																							{	/* Foreign/cstruct.scm 76 */
																								obj_t BgL_list2657z00_429;

																								{	/* Foreign/cstruct.scm 76 */
																									obj_t BgL_arg2658z00_430;

																									obj_t BgL_arg2659z00_431;

																									BgL_arg2658z00_430 =
																										CNST_TABLE_REF(((long) 17));
																									{	/* Foreign/cstruct.scm 76 */
																										obj_t BgL_arg2660z00_432;

																										BgL_arg2660z00_432 =
																											MAKE_PAIR(CNST_TABLE_REF((
																													(long) 18)), BNIL);
																										BgL_arg2659z00_431 =
																											MAKE_PAIR(BgL_idz00_278,
																											BgL_arg2660z00_432);
																									}
																									BgL_list2657z00_429 =
																										MAKE_PAIR
																										(BgL_arg2658z00_430,
																										BgL_arg2659z00_431);
																								}
																								BgL_arg2655z00_427 =
																									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																									(BgL_list2657z00_429);
																							}
																							{	/* Foreign/cstruct.scm 77 */
																								obj_t BgL_arg2661z00_433;

																								obj_t BgL_arg2663z00_434;

																								BgL_arg2661z00_433 =
																									BGl_makezd2typedzd2identz00zzast_identz00
																									(CNST_TABLE_REF(((long) 19)),
																									BgL_idz00_278);
																								BgL_arg2663z00_434 =
																									BGl_makezd2typedzd2identz00zzast_identz00
																									(CNST_TABLE_REF(((long) 20)),
																									BgL_idz00_278);
																								{	/* Foreign/cstruct.scm 76 */
																									obj_t BgL_list2665z00_436;

																									{	/* Foreign/cstruct.scm 76 */
																										obj_t BgL_arg2666z00_437;

																										BgL_arg2666z00_437 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2665z00_436 =
																											MAKE_PAIR
																											(BgL_arg2663z00_434,
																											BgL_arg2666z00_437);
																									}
																									BgL_arg2656z00_428 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2661z00_433,
																										BgL_list2665z00_436);
																							}}
																							BgL_arg2651z00_425 =
																								MAKE_PAIR(BgL_arg2655z00_427,
																								BgL_arg2656z00_428);
																						}
																						BgL_arg2652z00_426 =
																							CNST_TABLE_REF(((long) 21));
																						BgL_arg2451z00_362 =
																							BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																							(BgL_arg2651z00_425,
																							BgL_arg2652z00_426);
																					}
																					{	/* Foreign/cstruct.scm 84 */
																						obj_t BgL_arg2668z00_439;

																						obj_t BgL_arg2669z00_440;

																						{	/* Foreign/cstruct.scm 84 */
																							obj_t BgL_arg2670z00_441;

																							obj_t BgL_arg2671z00_442;

																							{	/* Foreign/cstruct.scm 84 */
																								obj_t BgL_arg2672z00_443;

																								{	/* Foreign/cstruct.scm 84 */
																									obj_t BgL_arg2673z00_444;

																									obj_t BgL_arg2674z00_445;

																									{	/* Foreign/cstruct.scm 84 */
																										obj_t BgL_res2914z00_757;

																										{	/* Foreign/cstruct.scm 84 */
																											obj_t BgL_arg2063z00_756;

																											BgL_arg2063z00_756 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_278);
																											BgL_res2914z00_757 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_756);
																										}
																										BgL_arg2673z00_444 =
																											BgL_res2914z00_757;
																									}
																									{	/* Foreign/cstruct.scm 84 */
																										obj_t BgL_res2915z00_760;

																										{	/* Foreign/cstruct.scm 84 */
																											obj_t BgL_symbolz00_758;

																											BgL_symbolz00_758 =
																												CNST_TABLE_REF(((long)
																													15));
																											{	/* Foreign/cstruct.scm 84 */
																												obj_t
																													BgL_arg2063z00_759;
																												BgL_arg2063z00_759 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_758);
																												BgL_res2915z00_760 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_759);
																										}}
																										BgL_arg2674z00_445 =
																											BgL_res2915z00_760;
																									}
																									{	/* Foreign/cstruct.scm 84 */
																										obj_t BgL_list2675z00_446;

																										{	/* Foreign/cstruct.scm 84 */
																											obj_t BgL_arg2676z00_447;

																											BgL_arg2676z00_447 =
																												MAKE_PAIR
																												(BgL_arg2674z00_445,
																												BNIL);
																											BgL_list2675z00_446 =
																												MAKE_PAIR
																												(BgL_arg2673z00_444,
																												BgL_arg2676z00_447);
																										}
																										BgL_arg2672z00_443 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2675z00_446);
																								}}
																								BgL_arg2670z00_441 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2672z00_443));
																							}
																							{	/* Foreign/cstruct.scm 85 */
																								obj_t BgL_arg2677z00_448;

																								BgL_arg2677z00_448 =
																									BGl_makezd2typedzd2identz00zzast_identz00
																									(CNST_TABLE_REF(((long) 6)),
																									BgL_idz00_278);
																								{	/* Foreign/cstruct.scm 84 */
																									obj_t BgL_list2679z00_450;

																									BgL_list2679z00_450 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2671z00_442 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2677z00_448,
																										BgL_list2679z00_450);
																							}}
																							BgL_arg2668z00_439 =
																								MAKE_PAIR(BgL_arg2670z00_441,
																								BgL_arg2671z00_442);
																						}
																						{	/* Foreign/cstruct.scm 86 */
																							obj_t BgL_arg2680z00_451;

																							obj_t BgL_arg2681z00_452;

																							BgL_arg2680z00_451 =
																								CNST_TABLE_REF(((long) 16));
																							{	/* Foreign/cstruct.scm 86 */
																								obj_t BgL_arg2682z00_453;

																								obj_t BgL_arg2683z00_454;

																								BgL_arg2682z00_453 =
																									string_append_3
																									(BGl_string2952z00zzforeign_cstructz00,
																									BgL_namezd2sanszd2z42z42_286,
																									BGl_string2951z00zzforeign_cstructz00);
																								BgL_arg2683z00_454 =
																									CNST_TABLE_REF(((long) 6));
																								{	/* Foreign/cstruct.scm 86 */
																									obj_t BgL_list2685z00_456;

																									{	/* Foreign/cstruct.scm 86 */
																										obj_t BgL_arg2686z00_457;

																										BgL_arg2686z00_457 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2685z00_456 =
																											MAKE_PAIR
																											(BgL_arg2683z00_454,
																											BgL_arg2686z00_457);
																									}
																									BgL_arg2681z00_452 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2682z00_453,
																										BgL_list2685z00_456);
																							}}
																							BgL_arg2669z00_440 =
																								MAKE_PAIR(BgL_arg2680z00_451,
																								BgL_arg2681z00_452);
																						}
																						BgL_arg2452z00_363 =
																							BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																							(BgL_arg2668z00_439,
																							BgL_arg2669z00_440);
																					}
																					{	/* Foreign/cstruct.scm 92 */
																						obj_t BgL_arg2688z00_459;

																						obj_t BgL_arg2689z00_460;

																						{	/* Foreign/cstruct.scm 92 */
																							obj_t BgL_arg2690z00_461;

																							{	/* Foreign/cstruct.scm 92 */
																								obj_t BgL_arg2692z00_463;

																								{	/* Foreign/cstruct.scm 92 */
																									obj_t BgL_arg2693z00_464;

																									{	/* Foreign/cstruct.scm 92 */
																										obj_t BgL_arg2694z00_465;

																										obj_t BgL_arg2695z00_466;

																										{	/* Foreign/cstruct.scm 92 */
																											obj_t BgL_res2916z00_764;

																											{	/* Foreign/cstruct.scm 92 */
																												obj_t BgL_symbolz00_762;

																												BgL_symbolz00_762 =
																													CNST_TABLE_REF(((long)
																														13));
																												{	/* Foreign/cstruct.scm 92 */
																													obj_t
																														BgL_arg2063z00_763;
																													BgL_arg2063z00_763 =
																														SYMBOL_TO_STRING
																														(BgL_symbolz00_762);
																													BgL_res2916z00_764 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg2063z00_763);
																											}}
																											BgL_arg2694z00_465 =
																												BgL_res2916z00_764;
																										}
																										{	/* Foreign/cstruct.scm 92 */
																											obj_t BgL_res2917z00_767;

																											{	/* Foreign/cstruct.scm 92 */
																												obj_t
																													BgL_arg2063z00_766;
																												BgL_arg2063z00_766 =
																													SYMBOL_TO_STRING
																													(BgL_idz00_278);
																												BgL_res2917z00_767 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_766);
																											}
																											BgL_arg2695z00_466 =
																												BgL_res2917z00_767;
																										}
																										{	/* Foreign/cstruct.scm 92 */
																											obj_t BgL_list2696z00_467;

																											{	/* Foreign/cstruct.scm 92 */
																												obj_t
																													BgL_arg2697z00_468;
																												BgL_arg2697z00_468 =
																													MAKE_PAIR
																													(BgL_arg2695z00_466,
																													BNIL);
																												BgL_list2696z00_467 =
																													MAKE_PAIR
																													(BgL_arg2694z00_465,
																													BgL_arg2697z00_468);
																											}
																											BgL_arg2693z00_464 =
																												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																												(BgL_list2696z00_467);
																									}}
																									BgL_arg2692z00_463 =
																										string_to_symbol
																										(BSTRING_TO_STRING
																										(BgL_arg2693z00_464));
																								}
																								BgL_arg2690z00_461 =
																									BGl_makezd2typedzd2identz00zzast_identz00
																									(BgL_arg2692z00_463,
																									BgL_idz00_278);
																							}
																							BgL_arg2688z00_459 =
																								MAKE_PAIR(BgL_arg2690z00_461,
																								BNIL);
																						}
																						{	/* Foreign/cstruct.scm 93 */
																							obj_t BgL_arg2698z00_469;

																							obj_t BgL_arg2699z00_470;

																							{	/* Foreign/cstruct.scm 93 */
																								obj_t BgL_arg2700z00_471;

																								{	/* Foreign/cstruct.scm 93 */
																									obj_t BgL_arg2701z00_472;

																									obj_t BgL_arg2702z00_473;

																									{	/* Foreign/cstruct.scm 93 */
																										obj_t BgL_res2918z00_771;

																										{	/* Foreign/cstruct.scm 93 */
																											obj_t BgL_symbolz00_769;

																											BgL_symbolz00_769 =
																												CNST_TABLE_REF(((long)
																													14));
																											{	/* Foreign/cstruct.scm 93 */
																												obj_t
																													BgL_arg2063z00_770;
																												BgL_arg2063z00_770 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_769);
																												BgL_res2918z00_771 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_770);
																										}}
																										BgL_arg2701z00_472 =
																											BgL_res2918z00_771;
																									}
																									{	/* Foreign/cstruct.scm 93 */
																										obj_t BgL_res2919z00_774;

																										{	/* Foreign/cstruct.scm 93 */
																											obj_t BgL_arg2063z00_773;

																											BgL_arg2063z00_773 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_278);
																											BgL_res2919z00_774 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_773);
																										}
																										BgL_arg2702z00_473 =
																											BgL_res2919z00_774;
																									}
																									{	/* Foreign/cstruct.scm 93 */
																										obj_t BgL_list2703z00_474;

																										{	/* Foreign/cstruct.scm 93 */
																											obj_t BgL_arg2704z00_475;

																											BgL_arg2704z00_475 =
																												MAKE_PAIR
																												(BgL_arg2702z00_473,
																												BNIL);
																											BgL_list2703z00_474 =
																												MAKE_PAIR
																												(BgL_arg2701z00_472,
																												BgL_arg2704z00_475);
																										}
																										BgL_arg2700z00_471 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2703z00_474);
																								}}
																								BgL_arg2698z00_469 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2700z00_471));
																							}
																							{	/* Foreign/cstruct.scm 94 */
																								obj_t BgL_arg2705z00_476;

																								BgL_arg2705z00_476 =
																									string_append_3
																									(BGl_string2950z00zzforeign_cstructz00,
																									BgL_namezd2sanszd2z42z42_286,
																									BGl_string2951z00zzforeign_cstructz00);
																								{	/* Foreign/cstruct.scm 93 */
																									obj_t BgL_list2707z00_478;

																									BgL_list2707z00_478 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2699z00_470 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2705z00_476,
																										BgL_list2707z00_478);
																							}}
																							BgL_arg2689z00_460 =
																								MAKE_PAIR(BgL_arg2698z00_469,
																								BgL_arg2699z00_470);
																						}
																						BgL_arg2453z00_364 =
																							BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																							(BgL_arg2688z00_459,
																							BgL_arg2689z00_460);
																					}
																					{	/* Foreign/cstruct.scm 68 */
																						obj_t BgL_arg2560z00_396;

																						obj_t BgL_arg2561z00_397;

																						{	/* Foreign/cstruct.scm 68 */
																							obj_t BgL_arg2562z00_398;

																							{	/* Foreign/cstruct.scm 68 */
																								obj_t BgL_list2563z00_399;

																								BgL_list2563z00_399 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2562z00_398 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 22)),
																									BgL_list2563z00_399);
																							}
																							BgL_arg2560z00_396 =
																								MAKE_PAIR
																								(BgL_bidzf3zd2boolz21_284,
																								BgL_arg2562z00_398);
																						}
																						{	/* Foreign/cstruct.scm 69 */
																							obj_t BgL_arg2564z00_400;

																							obj_t BgL_arg2565z00_401;

																							BgL_arg2564z00_400 =
																								CNST_TABLE_REF(((long) 23));
																							{	/* Foreign/cstruct.scm 69 */
																								obj_t BgL_arg2566z00_402;

																								obj_t BgL_arg2571z00_403;

																								{	/* Foreign/cstruct.scm 69 */
																									obj_t BgL_arg2587z00_408;

																									obj_t BgL_arg2589z00_409;

																									BgL_arg2587z00_408 =
																										CNST_TABLE_REF(((long) 24));
																									{	/* Foreign/cstruct.scm 69 */
																										obj_t BgL_list2590z00_410;

																										BgL_list2590z00_410 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2589z00_409 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													6)),
																											BgL_list2590z00_410);
																									}
																									BgL_arg2566z00_402 =
																										MAKE_PAIR
																										(BgL_arg2587z00_408,
																										BgL_arg2589z00_409);
																								}
																								{	/* Foreign/cstruct.scm 70 */
																									obj_t BgL_arg2594z00_411;

																									obj_t BgL_arg2595z00_412;

																									BgL_arg2594z00_411 =
																										CNST_TABLE_REF(((long) 25));
																									{	/* Foreign/cstruct.scm 70 */
																										obj_t BgL_arg2602z00_413;

																										obj_t BgL_arg2608z00_414;

																										{	/* Foreign/cstruct.scm 70 */
																											obj_t BgL_arg2628z00_418;

																											obj_t BgL_arg2629z00_419;

																											BgL_arg2628z00_418 =
																												CNST_TABLE_REF(((long)
																													26));
																											{	/* Foreign/cstruct.scm 70 */
																												obj_t
																													BgL_list2630z00_420;
																												BgL_list2630z00_420 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2629z00_419 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 6)),
																													BgL_list2630z00_420);
																											}
																											BgL_arg2602z00_413 =
																												MAKE_PAIR
																												(BgL_arg2628z00_418,
																												BgL_arg2629z00_419);
																										}
																										{	/* Foreign/cstruct.scm 70 */
																											obj_t BgL_arg2642z00_421;

																											obj_t BgL_arg2648z00_422;

																											BgL_arg2642z00_421 =
																												CNST_TABLE_REF(((long)
																													27));
																											{	/* Foreign/cstruct.scm 70 */
																												obj_t
																													BgL_list2649z00_423;
																												BgL_list2649z00_423 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2648z00_422 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_bidz00_280,
																													BgL_list2649z00_423);
																											}
																											BgL_arg2608z00_414 =
																												MAKE_PAIR
																												(BgL_arg2642z00_421,
																												BgL_arg2648z00_422);
																										}
																										{	/* Foreign/cstruct.scm 70 */
																											obj_t BgL_list2616z00_416;

																											{	/* Foreign/cstruct.scm 70 */
																												obj_t
																													BgL_arg2621z00_417;
																												BgL_arg2621z00_417 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list2616z00_416 =
																													MAKE_PAIR
																													(BgL_arg2608z00_414,
																													BgL_arg2621z00_417);
																											}
																											BgL_arg2595z00_412 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2602z00_413,
																												BgL_list2616z00_416);
																									}}
																									BgL_arg2571z00_403 =
																										MAKE_PAIR
																										(BgL_arg2594z00_411,
																										BgL_arg2595z00_412);
																								}
																								{	/* Foreign/cstruct.scm 69 */
																									obj_t BgL_list2573z00_405;

																									{	/* Foreign/cstruct.scm 69 */
																										obj_t BgL_arg2576z00_406;

																										{	/* Foreign/cstruct.scm 69 */
																											obj_t BgL_arg2586z00_407;

																											BgL_arg2586z00_407 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2576z00_406 =
																												MAKE_PAIR(BFALSE,
																												BgL_arg2586z00_407);
																										}
																										BgL_list2573z00_405 =
																											MAKE_PAIR
																											(BgL_arg2571z00_403,
																											BgL_arg2576z00_406);
																									}
																									BgL_arg2565z00_401 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2566z00_402,
																										BgL_list2573z00_405);
																							}}
																							BgL_arg2561z00_397 =
																								MAKE_PAIR(BgL_arg2564z00_400,
																								BgL_arg2565z00_401);
																						}
																						BgL_arg2454z00_365 =
																							BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																							(BgL_arg2560z00_396,
																							BgL_arg2561z00_397);
																					}
																					{
																						obj_t BgL_fieldsz00_674;

																						obj_t BgL_resz00_675;

																						BgL_fieldsz00_674 =
																							BgL_cstructzd2fieldszd2_288;
																						BgL_resz00_675 = BNIL;
																					BgL_zc3anonymousza32878ze3z83_676:
																						if (NULLP(BgL_fieldsz00_674))
																							{	/* Foreign/cstruct.scm 182 */
																								BgL_arg2459z00_366 =
																									BgL_resz00_675;
																							}
																						else
																							{
																								obj_t BgL_resz00_1269;

																								obj_t BgL_fieldsz00_1267;

																								BgL_fieldsz00_1267 =
																									CDR(BgL_fieldsz00_674);
																								{	/* Foreign/cstruct.scm 185 */
																									obj_t BgL_auxz00_1270;

																									BgL_fieldz00_579 =
																										CAR(BgL_fieldsz00_674);
																									{	/* Foreign/cstruct.scm 135 */
																										obj_t
																											BgL_fzd2typezd2idz00_581;
																										BgL_fzd2typezd2idz00_581 =
																											CAR(BgL_fieldz00_579);
																										{	/* Foreign/cstruct.scm 135 */
																											BgL_typez00_bglt
																												BgL_fzd2typezd2_582;
																											BgL_fzd2typezd2_582 =
																												BGl_usezd2typez12zc0zztype_envz00
																												(BgL_fzd2typezd2idz00_581,
																												BgL_locz00_274);
																											{	/* Foreign/cstruct.scm 136 */
																												BgL_typez00_bglt
																													BgL_afzd2typezd2_583;
																												BgL_afzd2typezd2_583 =
																													BGl_getzd2aliasedzd2typez00zztype_typez00
																													(BgL_fzd2typezd2_582);
																												{	/* Foreign/cstruct.scm 137 */
																													obj_t
																														BgL_fzd2idzd2_584;
																													{	/* Foreign/cstruct.scm 138 */
																														obj_t
																															BgL_pairz00_830;
																														BgL_pairz00_830 =
																															BgL_fieldz00_579;
																														BgL_fzd2idzd2_584 =
																															CAR(CDR
																															(BgL_pairz00_830));
																													}
																													{	/* Foreign/cstruct.scm 138 */
																														obj_t
																															BgL_fzd2namezd2_585;
																														{	/* Foreign/cstruct.scm 139 */
																															obj_t
																																BgL_pairz00_834;
																															BgL_pairz00_834 =
																																BgL_fieldz00_579;
																															BgL_fzd2namezd2_585
																																=
																																CAR(CDR(CDR
																																	(BgL_pairz00_834)));
																														}
																														{	/* Foreign/cstruct.scm 139 */
																															obj_t
																																BgL_getzd2namezd2_586;
																															{	/* Foreign/cstruct.scm 140 */
																																obj_t
																																	BgL_list2873z00_667;
																																{	/* Foreign/cstruct.scm 140 */
																																	obj_t
																																		BgL_arg2874z00_668;
																																	{	/* Foreign/cstruct.scm 140 */
																																		obj_t
																																			BgL_arg2875z00_669;
																																		obj_t
																																			BgL_arg2876z00_670;
																																		BgL_arg2875z00_669
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				3));
																																		BgL_arg2876z00_670
																																			=
																																			MAKE_PAIR
																																			(BgL_fzd2idzd2_584,
																																			BNIL);
																																		BgL_arg2874z00_668
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2875z00_669,
																																			BgL_arg2876z00_670);
																																	}
																																	BgL_list2873z00_667
																																		=
																																		MAKE_PAIR
																																		(BgL_idz00_278,
																																		BgL_arg2874z00_668);
																																}
																																BgL_getzd2namezd2_586
																																	=
																																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																	(BgL_list2873z00_667);
																															}
																															{	/* Foreign/cstruct.scm 140 */
																																obj_t
																																	BgL_setzd2namezd2_587;
																																{	/* Foreign/cstruct.scm 141 */
																																	obj_t
																																		BgL_list2868z00_662;
																																	{	/* Foreign/cstruct.scm 141 */
																																		obj_t
																																			BgL_arg2869z00_663;
																																		{	/* Foreign/cstruct.scm 141 */
																																			obj_t
																																				BgL_arg2870z00_664;
																																			obj_t
																																				BgL_arg2871z00_665;
																																			BgL_arg2870z00_664
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					3));
																																			{	/* Foreign/cstruct.scm 141 */
																																				obj_t
																																					BgL_arg2872z00_666;
																																				BgL_arg2872z00_666
																																					=
																																					MAKE_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 4)), BNIL);
																																				BgL_arg2871z00_665
																																					=
																																					MAKE_PAIR
																																					(BgL_fzd2idzd2_584,
																																					BgL_arg2872z00_666);
																																			}
																																			BgL_arg2869z00_663
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2870z00_664,
																																				BgL_arg2871z00_665);
																																		}
																																		BgL_list2868z00_662
																																			=
																																			MAKE_PAIR
																																			(BgL_idz00_278,
																																			BgL_arg2869z00_663);
																																	}
																																	BgL_setzd2namezd2_587
																																		=
																																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																		(BgL_list2868z00_662);
																																}
																																{	/* Foreign/cstruct.scm 141 */
																																	obj_t
																																		BgL_getzd2typezd2idz00_588;
																																	{	/* Foreign/cstruct.scm 142 */
																																		bool_t
																																			BgL_testz00_1291;
																																		{	/* Foreign/cstruct.scm 142 */
																																			obj_t
																																				BgL_obj1991z00_840;
																																			BgL_obj1991z00_840
																																				=
																																				(obj_t)
																																				(BgL_afzd2typezd2_583);
																																			BgL_testz00_1291
																																				=
																																				BGl_iszd2azf3z21zz__objectz00
																																				(BgL_obj1991z00_840,
																																				BGl_cstructz00zzforeign_ctypez00);
																																		}
																																		if (BgL_testz00_1291)
																																			{	/* Foreign/cstruct.scm 143 */
																																				obj_t
																																					BgL_arg2863z00_657;
																																				{	/* Foreign/cstruct.scm 143 */
																																					obj_t
																																						BgL_arg2864z00_658;
																																					obj_t
																																						BgL_arg2865z00_659;
																																					{	/* Foreign/cstruct.scm 143 */
																																						obj_t
																																							BgL_res2926z00_843;
																																						{	/* Foreign/cstruct.scm 143 */
																																							obj_t
																																								BgL_symbolz00_841;
																																							BgL_symbolz00_841
																																								=
																																								BgL_fzd2typezd2idz00_581;
																																							{	/* Foreign/cstruct.scm 143 */
																																								obj_t
																																									BgL_arg2063z00_842;
																																								BgL_arg2063z00_842
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_841);
																																								BgL_res2926z00_843
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg2063z00_842);
																																							}
																																						}
																																						BgL_arg2864z00_658
																																							=
																																							BgL_res2926z00_843;
																																					}
																																					{	/* Foreign/cstruct.scm 143 */
																																						obj_t
																																							BgL_res2927z00_846;
																																						{	/* Foreign/cstruct.scm 143 */
																																							obj_t
																																								BgL_symbolz00_844;
																																							BgL_symbolz00_844
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 5));
																																							{	/* Foreign/cstruct.scm 143 */
																																								obj_t
																																									BgL_arg2063z00_845;
																																								BgL_arg2063z00_845
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_844);
																																								BgL_res2927z00_846
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg2063z00_845);
																																						}}
																																						BgL_arg2865z00_659
																																							=
																																							BgL_res2927z00_846;
																																					}
																																					{	/* Foreign/cstruct.scm 143 */
																																						obj_t
																																							BgL_list2866z00_660;
																																						{	/* Foreign/cstruct.scm 143 */
																																							obj_t
																																								BgL_arg2867z00_661;
																																							BgL_arg2867z00_661
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2865z00_659,
																																								BNIL);
																																							BgL_list2866z00_660
																																								=
																																								MAKE_PAIR
																																								(BgL_arg2864z00_658,
																																								BgL_arg2867z00_661);
																																						}
																																						BgL_arg2863z00_657
																																							=
																																							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																							(BgL_list2866z00_660);
																																				}}
																																				BgL_getzd2typezd2idz00_588
																																					=
																																					string_to_symbol
																																					(BSTRING_TO_STRING
																																					(BgL_arg2863z00_657));
																																			}
																																		else
																																			{	/* Foreign/cstruct.scm 142 */
																																				BgL_getzd2typezd2idz00_588
																																					=
																																					BgL_fzd2typezd2idz00_581;
																																			}
																																	}
																																	{	/* Foreign/cstruct.scm 142 */
																																		obj_t
																																			BgL_structzd2refzd2fmtz00_589;
																																		{	/* Foreign/cstruct.scm 145 */
																																			bool_t
																																				BgL_testz00_1304;
																																			{	/* Foreign/cstruct.scm 145 */
																																				obj_t
																																					BgL_obj1991z00_848;
																																				BgL_obj1991z00_848
																																					=
																																					(obj_t)
																																					(BgL_afzd2typezd2_583);
																																				BgL_testz00_1304
																																					=
																																					BGl_iszd2azf3z21zz__objectz00
																																					(BgL_obj1991z00_848,
																																					BGl_cstructz00zzforeign_ctypez00);
																																			}
																																			if (BgL_testz00_1304)
																																				{	/* Foreign/cstruct.scm 146 */
																																					obj_t
																																						BgL_list2845z00_642;
																																					{	/* Foreign/cstruct.scm 146 */
																																						obj_t
																																							BgL_arg2847z00_644;
																																						{	/* Foreign/cstruct.scm 146 */
																																							obj_t
																																								BgL_arg2848z00_645;
																																							{	/* Foreign/cstruct.scm 146 */
																																								obj_t
																																									BgL_arg2850z00_647;
																																								{	/* Foreign/cstruct.scm 146 */
																																									obj_t
																																										BgL_arg2851z00_648;
																																									BgL_arg2851z00_648
																																										=
																																										MAKE_PAIR
																																										(BGl_string2939z00zzforeign_cstructz00,
																																										BNIL);
																																									BgL_arg2850z00_647
																																										=
																																										MAKE_PAIR
																																										(BgL_fzd2namezd2_585,
																																										BgL_arg2851z00_648);
																																								}
																																								BgL_arg2848z00_645
																																									=
																																									MAKE_PAIR
																																									(BGl_string2940z00zzforeign_cstructz00,
																																									BgL_arg2850z00_647);
																																							}
																																							BgL_arg2847z00_644
																																								=
																																								MAKE_PAIR
																																								(BgL_namezd2sanszd2z42z42_286,
																																								BgL_arg2848z00_645);
																																						}
																																						BgL_list2845z00_642
																																							=
																																							MAKE_PAIR
																																							(BGl_string2941z00zzforeign_cstructz00,
																																							BgL_arg2847z00_644);
																																					}
																																					BgL_structzd2refzd2fmtz00_589
																																						=
																																						BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																						(BgL_list2845z00_642);
																																				}
																																			else
																																				{	/* Foreign/cstruct.scm 148 */
																																					obj_t
																																						BgL_list2852z00_649;
																																					{	/* Foreign/cstruct.scm 148 */
																																						obj_t
																																							BgL_arg2856z00_651;
																																						{	/* Foreign/cstruct.scm 148 */
																																							obj_t
																																								BgL_arg2857z00_652;
																																							{	/* Foreign/cstruct.scm 148 */
																																								obj_t
																																									BgL_arg2859z00_654;
																																								{	/* Foreign/cstruct.scm 148 */
																																									obj_t
																																										BgL_arg2861z00_655;
																																									BgL_arg2861z00_655
																																										=
																																										MAKE_PAIR
																																										(BGl_string2942z00zzforeign_cstructz00,
																																										BNIL);
																																									BgL_arg2859z00_654
																																										=
																																										MAKE_PAIR
																																										(BgL_fzd2namezd2_585,
																																										BgL_arg2861z00_655);
																																								}
																																								BgL_arg2857z00_652
																																									=
																																									MAKE_PAIR
																																									(BGl_string2940z00zzforeign_cstructz00,
																																									BgL_arg2859z00_654);
																																							}
																																							BgL_arg2856z00_651
																																								=
																																								MAKE_PAIR
																																								(BgL_namezd2sanszd2z42z42_286,
																																								BgL_arg2857z00_652);
																																						}
																																						BgL_list2852z00_649
																																							=
																																							MAKE_PAIR
																																							(BGl_string2943z00zzforeign_cstructz00,
																																							BgL_arg2856z00_651);
																																					}
																																					BgL_structzd2refzd2fmtz00_589
																																						=
																																						BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																						(BgL_list2852z00_649);
																																				}
																																		}
																																		{	/* Foreign/cstruct.scm 145 */
																																			obj_t
																																				BgL_structzd2setzd2fmtz00_590;
																																			{	/* Foreign/cstruct.scm 150 */
																																				obj_t
																																					BgL_list2836z00_634;
																																				{	/* Foreign/cstruct.scm 150 */
																																					obj_t
																																						BgL_arg2838z00_636;
																																					{	/* Foreign/cstruct.scm 150 */
																																						obj_t
																																							BgL_arg2839z00_637;
																																						{	/* Foreign/cstruct.scm 150 */
																																							obj_t
																																								BgL_arg2842z00_639;
																																							{	/* Foreign/cstruct.scm 150 */
																																								obj_t
																																									BgL_arg2843z00_640;
																																								BgL_arg2843z00_640
																																									=
																																									MAKE_PAIR
																																									(BGl_string2942z00zzforeign_cstructz00,
																																									BNIL);
																																								BgL_arg2842z00_639
																																									=
																																									MAKE_PAIR
																																									(BgL_fzd2namezd2_585,
																																									BgL_arg2843z00_640);
																																							}
																																							BgL_arg2839z00_637
																																								=
																																								MAKE_PAIR
																																								(BGl_string2940z00zzforeign_cstructz00,
																																								BgL_arg2842z00_639);
																																						}
																																						BgL_arg2838z00_636
																																							=
																																							MAKE_PAIR
																																							(BgL_namezd2sanszd2z42z42_286,
																																							BgL_arg2839z00_637);
																																					}
																																					BgL_list2836z00_634
																																						=
																																						MAKE_PAIR
																																						(BGl_string2944z00zzforeign_cstructz00,
																																						BgL_arg2838z00_636);
																																				}
																																				BgL_structzd2setzd2fmtz00_590
																																					=
																																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																					(BgL_list2836z00_634);
																																			}
																																			{	/* Foreign/cstruct.scm 150 */
																																				obj_t
																																					BgL_structzd2setvzd2fmtz00_591;
																																				{	/* Foreign/cstruct.scm 152 */
																																					bool_t
																																						BgL_testz00_1325;
																																					{	/* Foreign/cstruct.scm 152 */
																																						obj_t
																																							BgL_obj1991z00_849;
																																						BgL_obj1991z00_849
																																							=
																																							(obj_t)
																																							(BgL_afzd2typezd2_583);
																																						BgL_testz00_1325
																																							=
																																							BGl_iszd2azf3z21zz__objectz00
																																							(BgL_obj1991z00_849,
																																							BGl_cstructz00zzforeign_ctypez00);
																																					}
																																					if (BgL_testz00_1325)
																																						{	/* Foreign/cstruct.scm 152 */
																																							BgL_structzd2setvzd2fmtz00_591
																																								=
																																								BGl_string2945z00zzforeign_cstructz00;
																																						}
																																					else
																																						{	/* Foreign/cstruct.scm 152 */
																																							BgL_structzd2setvzd2fmtz00_591
																																								=
																																								BGl_string2946z00zzforeign_cstructz00;
																																						}
																																				}
																																				{	/* Foreign/cstruct.scm 152 */

																																					{	/* Foreign/cstruct.scm 155 */
																																						obj_t
																																							BgL_list2793z00_592;
																																						{	/* Foreign/cstruct.scm 155 */
																																							obj_t
																																								BgL_arg2794z00_593;
																																							BgL_arg2794z00_593
																																								=
																																								MAKE_PAIR
																																								(BgL_setzd2namezd2_587,
																																								BNIL);
																																							BgL_list2793z00_592
																																								=
																																								MAKE_PAIR
																																								(BgL_getzd2namezd2_586,
																																								BgL_arg2794z00_593);
																																						}
																																						BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																																							(BgL_list2793z00_592);
																																					}
																																					{	/* Foreign/cstruct.scm 157 */
																																						obj_t
																																							BgL_arg2795z00_594;
																																						obj_t
																																							BgL_arg2796z00_595;
																																						{	/* Foreign/cstruct.scm 157 */
																																							obj_t
																																								BgL_arg2799z00_598;
																																							obj_t
																																								BgL_arg2800z00_599;
																																							{	/* Foreign/cstruct.scm 157 */
																																								obj_t
																																									BgL_arg2801z00_600;
																																								obj_t
																																									BgL_arg2802z00_601;
																																								BgL_arg2801z00_600
																																									=
																																									BGl_makezd2typedzd2identz00zzast_identz00
																																									(BgL_getzd2namezd2_586,
																																									BgL_getzd2typezd2idz00_588);
																																								{	/* Foreign/cstruct.scm 158 */
																																									obj_t
																																										BgL_arg2803z00_602;
																																									BgL_arg2803z00_602
																																										=
																																										BGl_makezd2typedzd2identz00zzast_identz00
																																										(CNST_TABLE_REF
																																										(((long) 6)), BgL_idz00_278);
																																									{	/* Foreign/cstruct.scm 157 */
																																										obj_t
																																											BgL_list2805z00_604;
																																										BgL_list2805z00_604
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_arg2802z00_601
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_arg2803z00_602,
																																											BgL_list2805z00_604);
																																								}}
																																								BgL_arg2799z00_598
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2801z00_600,
																																									BgL_arg2802z00_601);
																																							}
																																							{	/* Foreign/cstruct.scm 159 */
																																								obj_t
																																									BgL_arg2806z00_605;
																																								obj_t
																																									BgL_arg2807z00_606;
																																								BgL_arg2806z00_605
																																									=
																																									BGl_makezd2typedzd2identz00zzast_identz00
																																									(CNST_TABLE_REF
																																									(((long) 7)), BgL_getzd2typezd2idz00_588);
																																								{	/* Foreign/cstruct.scm 159 */
																																									obj_t
																																										BgL_list2808z00_607;
																																									{	/* Foreign/cstruct.scm 159 */
																																										obj_t
																																											BgL_arg2809z00_608;
																																										obj_t
																																											BgL_arg2810z00_609;
																																										BgL_arg2809z00_608
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 6));
																																										BgL_arg2810z00_609
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_list2808z00_607
																																											=
																																											MAKE_PAIR
																																											(BgL_arg2809z00_608,
																																											BgL_arg2810z00_609);
																																									}
																																									BgL_arg2807z00_606
																																										=
																																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																										(BgL_structzd2refzd2fmtz00_589,
																																										BgL_list2808z00_607);
																																								}
																																								BgL_arg2800z00_599
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2806z00_605,
																																									BgL_arg2807z00_606);
																																							}
																																							BgL_arg2795z00_594
																																								=
																																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																																								(BgL_arg2799z00_598,
																																								BgL_arg2800z00_599);
																																						}
																																						{	/* Foreign/cstruct.scm 161 */
																																							obj_t
																																								BgL_arg2811z00_610;
																																							obj_t
																																								BgL_arg2812z00_611;
																																							{	/* Foreign/cstruct.scm 161 */
																																								obj_t
																																									BgL_arg2813z00_612;
																																								obj_t
																																									BgL_arg2814z00_613;
																																								{	/* Foreign/cstruct.scm 161 */
																																									obj_t
																																										BgL_arg2815z00_614;
																																									{	/* Foreign/cstruct.scm 161 */
																																										obj_t
																																											BgL_arg2816z00_615;
																																										obj_t
																																											BgL_arg2818z00_616;
																																										{	/* Foreign/cstruct.scm 161 */
																																											obj_t
																																												BgL_res2928z00_852;
																																											{	/* Foreign/cstruct.scm 161 */
																																												obj_t
																																													BgL_arg2063z00_851;
																																												BgL_arg2063z00_851
																																													=
																																													SYMBOL_TO_STRING
																																													(BgL_setzd2namezd2_587);
																																												BgL_res2928z00_852
																																													=
																																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																													(BgL_arg2063z00_851);
																																											}
																																											BgL_arg2816z00_615
																																												=
																																												BgL_res2928z00_852;
																																										}
																																										{	/* Foreign/cstruct.scm 161 */
																																											obj_t
																																												BgL_res2929z00_855;
																																											{	/* Foreign/cstruct.scm 161 */
																																												obj_t
																																													BgL_symbolz00_853;
																																												BgL_symbolz00_853
																																													=
																																													CNST_TABLE_REF
																																													(
																																													((long) 8));
																																												{	/* Foreign/cstruct.scm 161 */
																																													obj_t
																																														BgL_arg2063z00_854;
																																													BgL_arg2063z00_854
																																														=
																																														SYMBOL_TO_STRING
																																														(BgL_symbolz00_853);
																																													BgL_res2929z00_855
																																														=
																																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																														(BgL_arg2063z00_854);
																																											}}
																																											BgL_arg2818z00_616
																																												=
																																												BgL_res2929z00_855;
																																										}
																																										{	/* Foreign/cstruct.scm 161 */
																																											obj_t
																																												BgL_list2819z00_617;
																																											{	/* Foreign/cstruct.scm 161 */
																																												obj_t
																																													BgL_arg2820z00_618;
																																												BgL_arg2820z00_618
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2818z00_616,
																																													BNIL);
																																												BgL_list2819z00_617
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2816z00_615,
																																													BgL_arg2820z00_618);
																																											}
																																											BgL_arg2815z00_614
																																												=
																																												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																																												(BgL_list2819z00_617);
																																									}}
																																									BgL_arg2813z00_612
																																										=
																																										string_to_symbol
																																										(BSTRING_TO_STRING
																																										(BgL_arg2815z00_614));
																																								}
																																								{	/* Foreign/cstruct.scm 162 */
																																									obj_t
																																										BgL_arg2821z00_619;
																																									obj_t
																																										BgL_arg2822z00_620;
																																									BgL_arg2821z00_619
																																										=
																																										BGl_makezd2typedzd2identz00zzast_identz00
																																										(CNST_TABLE_REF
																																										(((long) 6)), BgL_idz00_278);
																																									BgL_arg2822z00_620
																																										=
																																										BGl_makezd2typedzd2identz00zzast_identz00
																																										(CNST_TABLE_REF
																																										(((long) 9)), BgL_getzd2typezd2idz00_588);
																																									{	/* Foreign/cstruct.scm 161 */
																																										obj_t
																																											BgL_list2824z00_622;
																																										{	/* Foreign/cstruct.scm 161 */
																																											obj_t
																																												BgL_arg2825z00_623;
																																											BgL_arg2825z00_623
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_list2824z00_622
																																												=
																																												MAKE_PAIR
																																												(BgL_arg2822z00_620,
																																												BgL_arg2825z00_623);
																																										}
																																										BgL_arg2814z00_613
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_arg2821z00_619,
																																											BgL_list2824z00_622);
																																								}}
																																								BgL_arg2811z00_610
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2813z00_612,
																																									BgL_arg2814z00_613);
																																							}
																																							{	/* Foreign/cstruct.scm 164 */
																																								obj_t
																																									BgL_arg2826z00_624;
																																								obj_t
																																									BgL_arg2827z00_625;
																																								BgL_arg2826z00_624
																																									=
																																									CNST_TABLE_REF
																																									(
																																									((long) 7));
																																								{	/* Foreign/cstruct.scm 165 */
																																									obj_t
																																										BgL_arg2828z00_626;
																																									obj_t
																																										BgL_arg2829z00_627;
																																									obj_t
																																										BgL_arg2830z00_628;
																																									BgL_arg2828z00_626
																																										=
																																										string_append
																																										(BgL_structzd2setzd2fmtz00_590,
																																										BgL_structzd2setvzd2fmtz00_591);
																																									BgL_arg2829z00_627
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 6));
																																									BgL_arg2830z00_628
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 9));
																																									{	/* Foreign/cstruct.scm 164 */
																																										obj_t
																																											BgL_list2832z00_630;
																																										{	/* Foreign/cstruct.scm 164 */
																																											obj_t
																																												BgL_arg2833z00_631;
																																											{	/* Foreign/cstruct.scm 164 */
																																												obj_t
																																													BgL_arg2834z00_632;
																																												BgL_arg2834z00_632
																																													=
																																													MAKE_PAIR
																																													(BNIL,
																																													BNIL);
																																												BgL_arg2833z00_631
																																													=
																																													MAKE_PAIR
																																													(BgL_arg2830z00_628,
																																													BgL_arg2834z00_632);
																																											}
																																											BgL_list2832z00_630
																																												=
																																												MAKE_PAIR
																																												(BgL_arg2829z00_627,
																																												BgL_arg2833z00_631);
																																										}
																																										BgL_arg2827z00_625
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_arg2828z00_626,
																																											BgL_list2832z00_630);
																																								}}
																																								BgL_arg2812z00_611
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2826z00_624,
																																									BgL_arg2827z00_625);
																																							}
																																							BgL_arg2796z00_595
																																								=
																																								BGl_makezd2definezd2inlinez00zzforeign_libraryz00
																																								(BgL_arg2811z00_610,
																																								BgL_arg2812z00_611);
																																						}
																																						{	/* Foreign/cstruct.scm 156 */
																																							obj_t
																																								BgL_list2797z00_596;
																																							{	/* Foreign/cstruct.scm 156 */
																																								obj_t
																																									BgL_arg2798z00_597;
																																								BgL_arg2798z00_597
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2796z00_595,
																																									BNIL);
																																								BgL_list2797z00_596
																																									=
																																									MAKE_PAIR
																																									(BgL_arg2795z00_594,
																																									BgL_arg2798z00_597);
																																							}
																																							BgL_auxz00_1270
																																								=
																																								BgL_list2797z00_596;
																									}}}}}}}}}}}}}}
																									BgL_resz00_1269 =
																										bgl_append2(BgL_auxz00_1270,
																										BgL_resz00_675);
																								}
																								BgL_resz00_675 =
																									BgL_resz00_1269;
																								BgL_fieldsz00_674 =
																									BgL_fieldsz00_1267;
																								goto
																									BgL_zc3anonymousza32878ze3z83_676;
																							}
																					}
																					{	/* Foreign/cstruct.scm 194 */
																						obj_t BgL_list2460z00_367;

																						{	/* Foreign/cstruct.scm 194 */
																							obj_t BgL_arg2461z00_368;

																							{	/* Foreign/cstruct.scm 194 */
																								obj_t BgL_arg2470z00_369;

																								{	/* Foreign/cstruct.scm 194 */
																									obj_t BgL_arg2471z00_370;

																									{	/* Foreign/cstruct.scm 194 */
																										obj_t BgL_arg2472z00_371;

																										BgL_arg2472z00_371 =
																											MAKE_PAIR
																											(BgL_arg2459z00_366,
																											BNIL);
																										BgL_arg2471z00_370 =
																											MAKE_PAIR
																											(BgL_arg2454z00_365,
																											BgL_arg2472z00_371);
																									}
																									BgL_arg2470z00_369 =
																										MAKE_PAIR
																										(BgL_arg2453z00_364,
																										BgL_arg2471z00_370);
																								}
																								BgL_arg2461z00_368 =
																									MAKE_PAIR(BgL_arg2452z00_363,
																									BgL_arg2470z00_369);
																							}
																							BgL_list2460z00_367 =
																								MAKE_PAIR(BgL_arg2451z00_362,
																								BgL_arg2461z00_368);
																						}
																						BgL_arg2445z00_360 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2448z00_361,
																							BgL_list2460z00_367);
																					}
																				}
																				return
																					MAKE_PAIR(BgL_arg2444z00_359,
																					BgL_arg2445z00_360);
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



/* make-ctype-accesses!2147 */
	obj_t BGl_makezd2ctypezd2accessesz122147z12zzforeign_cstructz00(obj_t
		BgL_envz00_868, obj_t BgL_whatz00_869, obj_t BgL_whoz00_870,
		obj_t BgL_locz00_871)
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 32 */
			return BNIL;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_cstructz00()
	{
		AN_OBJECT;
		{	/* Foreign/cstruct.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2955z00zzforeign_cstructz00));
		}
	}

#ifdef __cplusplus
}
#endif
