/*===========================================================================*/
/*   (Eval/expdlet.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q +rm -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -mklib -cc gcc -fsharing -q -no-hello -copt -fPIC -unsafe -safee -O4 -c Eval/expdlet.scm -indent -o objs/obj_u/Eval/expdlet.c)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zz__expander_letz00();
	extern obj_t BGl_bindingszd2ze3listz31zz__evutilsz00(obj_t);
	extern obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	extern obj_t BGl_evalzd2beginzd2expanderz00zz__expander_definez00(obj_t);
	extern obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zz__expander_letz00();
	extern obj_t BGl_untypezd2identzd2zz__evcompilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2letza2za2zz__expander_letz00(obj_t, obj_t);
	static obj_t BGl__expandzd2evalzd2labelsz00zz__expander_letz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zz__expander_letz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32012ze3z83zz__expander_letz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2labelsz00zz__expander_letz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__expander_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evutilsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__evcompilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expander_definez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_z52withzd2lexicalz80zz__expandz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_symbol2541z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2543z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2545z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2550z00zz__expander_letz00 = BUNSPEC;
	static obj_t BGl_symbol2554z00zz__expander_letz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_expandzd2evalzd2letz00zz__expander_letz00(obj_t,
		obj_t);
	static obj_t BGl_loopz00zz__expander_letz00(obj_t, obj_t);
	static obj_t BGl__expandzd2evalzd2letrecz00zz__expander_letz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__expandzd2evalzd2letza2za2zz__expander_letz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2letrecza2za2zz__expander_letz00(obj_t, obj_t);
	static obj_t BGl__expandzd2evalzd2letrecza2za2zz__expander_letz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__expandzd2evalzd2letz00zz__expander_letz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_expandzd2evalzd2letrecz00zz__expander_letz00(obj_t, obj_t);
	extern obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	extern bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_methodzd2initzd2zz__expander_letz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letreczd2envzd2zz__expander_letz00,
		BgL_bgl__expandza7d2evalza7d2558z00,
		BGl__expandzd2evalzd2letrecz00zz__expander_letz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2542z00zz__expander_letz00,
		BgL_bgl_string2542za700za7za7_2559za7, "letrec", 6);
	      DEFINE_STRING(BGl_string2544z00zz__expander_letz00,
		BgL_bgl_string2544za700za7za7_2560za7, "lambda", 6);
	      DEFINE_STRING(BGl_string2546z00zz__expander_letz00,
		BgL_bgl_string2546za700za7za7_2561za7, "let", 3);
	      DEFINE_STRING(BGl_string2547z00zz__expander_letz00,
		BgL_bgl_string2547za700za7za7_2562za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string2548z00zz__expander_letz00,
		BgL_bgl_string2548za700za7za7_2563za7, "Illegal binding form", 20);
	      DEFINE_STRING(BGl_string2549z00zz__expander_letz00,
		BgL_bgl_string2549za700za7za7_2564za7, "Illegal `let' form", 18);
	      DEFINE_STRING(BGl_string2551z00zz__expander_letz00,
		BgL_bgl_string2551za700za7za7_2565za7, "let*", 4);
	      DEFINE_STRING(BGl_string2552z00zz__expander_letz00,
		BgL_bgl_string2552za700za7za7_2566za7, "Illegal bindings form", 21);
	      DEFINE_STRING(BGl_string2553z00zz__expander_letz00,
		BgL_bgl_string2553za700za7za7_2567za7, "letrec*", 7);
	      DEFINE_STRING(BGl_string2555z00zz__expander_letz00,
		BgL_bgl_string2555za700za7za7_2568za7, "set!", 4);
	      DEFINE_STRING(BGl_string2556z00zz__expander_letz00,
		BgL_bgl_string2556za700za7za7_2569za7, "expand-labels", 13);
	      DEFINE_STRING(BGl_string2557z00zz__expander_letz00,
		BgL_bgl_string2557za700za7za7_2570za7, "__expander_let", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letza2zd2envz70zz__expander_letz00,
		BgL_bgl__expandza7d2evalza7d2571z00,
		BGl__expandzd2evalzd2letza2za2zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letrecza2zd2envz70zz__expander_letz00,
		BgL_bgl__expandza7d2evalza7d2572z00,
		BGl__expandzd2evalzd2letrecza2za2zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2labelszd2envzd2zz__expander_letz00,
		BgL_bgl__expandza7d2evalza7d2573z00,
		BGl__expandzd2evalzd2labelsz00zz__expander_letz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_expandzd2evalzd2letzd2envzd2zz__expander_letz00,
		BgL_bgl__expandza7d2evalza7d2574z00,
		BGl__expandzd2evalzd2letz00zz__expander_letz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2540z00zz__expander_letz00,
		BgL_bgl_za7c3anonymousza7a322575z00,
		BGl_zc3anonymousza32012ze3z83zz__expander_letz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__expander_letz00(long
		BgL_checksumz00_2430, char *BgL_fromz00_2431)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__expander_letz00))
				{
					BGl_requirezd2initializa7ationz75zz__expander_letz00 =
						BBOOL(((bool_t) 0));
					BGl_cnstzd2initzd2zz__expander_letz00();
					BGl_importedzd2moduleszd2initz00zz__expander_letz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__expander_letz00()
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 15 */
			BGl_symbol2541z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2542z00zz__expander_letz00);
			BGl_symbol2543z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2544z00zz__expander_letz00);
			BGl_symbol2545z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2546z00zz__expander_letz00);
			BGl_symbol2550z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2551z00zz__expander_letz00);
			return (BGl_symbol2554z00zz__expander_letz00 =
				bstring_to_symbol(BGl_string2555z00zz__expander_letz00), BUNSPEC);
		}
	}



/* expand-eval-let */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2letz00zz__expander_letz00(obj_t
		BgL_xz00_1, obj_t BgL_ez00_2)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 62 */
			{
				obj_t BgL_bindingsz00_958;

				obj_t BgL_bodyz00_959;

				obj_t BgL_xz00_960;

				obj_t BgL_ez00_961;

				obj_t BgL_loopz00_835;

				obj_t BgL_bindingsz00_836;

				obj_t BgL_bodyz00_837;

				obj_t BgL_xz00_838;

				obj_t BgL_ez00_839;

				{	/* Eval/expdlet.scm 105 */
					obj_t BgL_ez00_780;

					BgL_ez00_780 =
						BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_2);
					{	/* Eval/expdlet.scm 105 */
						obj_t BgL_resz00_781;

						if (PAIRP(BgL_xz00_1))
							{	/* Eval/expdlet.scm 106 */
								obj_t BgL_cdrzd21428zd2_794;

								BgL_cdrzd21428zd2_794 = CDR(BgL_xz00_1);
								if (PAIRP(BgL_cdrzd21428zd2_794))
									{	/* Eval/expdlet.scm 106 */
										obj_t BgL_cdrzd21431zd2_796;

										BgL_cdrzd21431zd2_796 = CDR(BgL_cdrzd21428zd2_794);
										if (NULLP(CAR(BgL_cdrzd21428zd2_794)))
											{	/* Eval/expdlet.scm 106 */
												if (NULLP(BgL_cdrzd21431zd2_796))
													{	/* Eval/expdlet.scm 106 */
														obj_t BgL_carzd21445zd2_800;

														obj_t BgL_cdrzd21446zd2_801;

														BgL_carzd21445zd2_800 = CAR(BgL_cdrzd21428zd2_794);
														BgL_cdrzd21446zd2_801 = CDR(BgL_cdrzd21428zd2_794);
														if (SYMBOLP(BgL_carzd21445zd2_800))
															{	/* Eval/expdlet.scm 106 */
																if (PAIRP(BgL_cdrzd21446zd2_801))
																	{	/* Eval/expdlet.scm 106 */
																		obj_t BgL_cdrzd21453zd2_804;

																		BgL_cdrzd21453zd2_804 =
																			CDR(BgL_cdrzd21446zd2_801);
																		if (NULLP(BgL_cdrzd21453zd2_804))
																			{	/* Eval/expdlet.scm 106 */
																				obj_t BgL_carzd21465zd2_807;

																				BgL_carzd21465zd2_807 =
																					CAR(BgL_cdrzd21428zd2_794);
																				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21465zd2_807))
																					{	/* Eval/expdlet.scm 106 */
																						BgL_bindingsz00_958 =
																							BgL_carzd21465zd2_807;
																						BgL_bodyz00_959 =
																							CDR(BgL_cdrzd21428zd2_794);
																						BgL_xz00_960 = BgL_xz00_1;
																						BgL_ez00_961 = BgL_ez00_780;
																					BgL_zc3anonymousza32038ze3z83_962:
																						{
																							obj_t BgL_bindingsz00_966;

																							obj_t BgL_nbindingsz00_967;

																							obj_t BgL_ebdgsz00_968;

																							BgL_bindingsz00_966 =
																								BgL_bindingsz00_958;
																							BgL_nbindingsz00_967 = BNIL;
																							BgL_ebdgsz00_968 = BNIL;
																						BgL_zc3anonymousza32039ze3z83_969:
																							if (NULLP(BgL_bindingsz00_966))
																								{	/* Eval/expdlet.scm 91 */
																									obj_t BgL_arg2041z00_971;

																									obj_t BgL_arg2042z00_972;

																									BgL_arg2041z00_971 =
																										BGl_symbol2545z00zz__expander_letz00;
																									{	/* Eval/expdlet.scm 91 */
																										obj_t BgL_arg2043z00_973;

																										obj_t BgL_arg2044z00_974;

																										BgL_arg2043z00_973 =
																											bgl_reverse_bang
																											(BgL_nbindingsz00_967);
																										BgL_arg2044z00_974 =
																											BGl_z52withzd2lexicalz80zz__expandz00
																											(BgL_ebdgsz00_968,
																											BGl_expandzd2prognzd2zz__prognz00
																											(BgL_bodyz00_959),
																											BgL_ez00_961, BFALSE);
																										{	/* Eval/expdlet.scm 91 */
																											obj_t BgL_list2046z00_976;

																											{	/* Eval/expdlet.scm 91 */
																												obj_t
																													BgL_arg2047z00_977;
																												BgL_arg2047z00_977 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list2046z00_976 =
																													MAKE_PAIR
																													(BgL_arg2044z00_974,
																													BgL_arg2047z00_977);
																											}
																											BgL_arg2042z00_972 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2043z00_973,
																												BgL_list2046z00_976);
																										}
																									}
																									BgL_resz00_781 =
																										MAKE_PAIR
																										(BgL_arg2041z00_971,
																										BgL_arg2042z00_972);
																								}
																							else
																								{
																									obj_t BgL_varz00_981;

																									obj_t BgL_valz00_982;

																									obj_t BgL_varz00_979;

																									{	/* Eval/expdlet.scm 93 */
																										obj_t BgL_ezd21399zd2_985;

																										BgL_ezd21399zd2_985 =
																											CAR(BgL_bindingsz00_966);
																										if (SYMBOLP
																											(BgL_ezd21399zd2_985))
																											{	/* Eval/expdlet.scm 93 */
																												BgL_varz00_979 =
																													BgL_ezd21399zd2_985;
																												{	/* Eval/expdlet.scm 95 */
																													obj_t
																														BgL_arg2056z00_995;
																													obj_t
																														BgL_arg2057z00_996;
																													obj_t
																														BgL_arg2058z00_997;
																													BgL_arg2056z00_995 =
																														CDR
																														(BgL_bindingsz00_966);
																													{	/* Eval/expdlet.scm 96 */
																														obj_t
																															BgL_arg2059z00_998;
																														{	/* Eval/expdlet.scm 96 */
																															obj_t
																																BgL_list2060z00_999;
																															{	/* Eval/expdlet.scm 96 */
																																obj_t
																																	BgL_arg2061z00_1000;
																																BgL_arg2061z00_1000
																																	=
																																	MAKE_PAIR
																																	(BUNSPEC,
																																	BNIL);
																																BgL_list2060z00_999
																																	=
																																	MAKE_PAIR
																																	(BgL_varz00_979,
																																	BgL_arg2061z00_1000);
																															}
																															BgL_arg2059z00_998
																																=
																																BgL_list2060z00_999;
																														}
																														BgL_arg2057z00_996 =
																															MAKE_PAIR
																															(BgL_arg2059z00_998,
																															BgL_nbindingsz00_967);
																													}
																													BgL_arg2058z00_997 =
																														MAKE_PAIR
																														(BgL_varz00_979,
																														BgL_ebdgsz00_968);
																													{
																														obj_t
																															BgL_ebdgsz00_2485;
																														obj_t
																															BgL_nbindingsz00_2484;
																														obj_t
																															BgL_bindingsz00_2483;
																														BgL_bindingsz00_2483
																															=
																															BgL_arg2056z00_995;
																														BgL_nbindingsz00_2484
																															=
																															BgL_arg2057z00_996;
																														BgL_ebdgsz00_2485 =
																															BgL_arg2058z00_997;
																														BgL_ebdgsz00_968 =
																															BgL_ebdgsz00_2485;
																														BgL_nbindingsz00_967
																															=
																															BgL_nbindingsz00_2484;
																														BgL_bindingsz00_966
																															=
																															BgL_bindingsz00_2483;
																														goto
																															BgL_zc3anonymousza32039ze3z83_969;
																													}
																												}
																											}
																										else
																											{	/* Eval/expdlet.scm 93 */
																												if (PAIRP
																													(BgL_ezd21399zd2_985))
																													{	/* Eval/expdlet.scm 93 */
																														obj_t
																															BgL_carzd21409zd2_988;
																														obj_t
																															BgL_cdrzd21410zd2_989;
																														BgL_carzd21409zd2_988
																															=
																															CAR
																															(BgL_ezd21399zd2_985);
																														BgL_cdrzd21410zd2_989
																															=
																															CDR
																															(BgL_ezd21399zd2_985);
																														if (SYMBOLP
																															(BgL_carzd21409zd2_988))
																															{	/* Eval/expdlet.scm 93 */
																																if (PAIRP
																																	(BgL_cdrzd21410zd2_989))
																																	{	/* Eval/expdlet.scm 93 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd21410zd2_989)))
																																			{	/* Eval/expdlet.scm 93 */
																																				BgL_varz00_981
																																					=
																																					BgL_carzd21409zd2_988;
																																				BgL_valz00_982
																																					=
																																					CAR
																																					(BgL_cdrzd21410zd2_989);
																																				{	/* Eval/expdlet.scm 99 */
																																					obj_t
																																						BgL_arg2062z00_1001;
																																					obj_t
																																						BgL_arg2063z00_1002;
																																					obj_t
																																						BgL_arg2064z00_1003;
																																					BgL_arg2062z00_1001
																																						=
																																						CDR
																																						(BgL_bindingsz00_966);
																																					{	/* Eval/expdlet.scm 100 */
																																						obj_t
																																							BgL_arg2065z00_1004;
																																						{	/* Eval/expdlet.scm 100 */
																																							obj_t
																																								BgL_arg2066z00_1005;
																																							BgL_arg2066z00_1005
																																								=
																																								PROCEDURE_ENTRY
																																								(BgL_ez00_961)
																																								(BgL_ez00_961,
																																								BgL_valz00_982,
																																								BgL_ez00_961,
																																								BEOA);
																																							{	/* Eval/expdlet.scm 100 */
																																								obj_t
																																									BgL_list2067z00_1006;
																																								{	/* Eval/expdlet.scm 100 */
																																									obj_t
																																										BgL_arg2068z00_1007;
																																									BgL_arg2068z00_1007
																																										=
																																										MAKE_PAIR
																																										(BgL_arg2066z00_1005,
																																										BNIL);
																																									BgL_list2067z00_1006
																																										=
																																										MAKE_PAIR
																																										(BgL_varz00_981,
																																										BgL_arg2068z00_1007);
																																								}
																																								BgL_arg2065z00_1004
																																									=
																																									BgL_list2067z00_1006;
																																							}
																																						}
																																						BgL_arg2063z00_1002
																																							=
																																							MAKE_PAIR
																																							(BgL_arg2065z00_1004,
																																							BgL_nbindingsz00_967);
																																					}
																																					BgL_arg2064z00_1003
																																						=
																																						MAKE_PAIR
																																						(BgL_varz00_981,
																																						BgL_ebdgsz00_968);
																																					{
																																						obj_t
																																							BgL_ebdgsz00_2506;
																																						obj_t
																																							BgL_nbindingsz00_2505;
																																						obj_t
																																							BgL_bindingsz00_2504;
																																						BgL_bindingsz00_2504
																																							=
																																							BgL_arg2062z00_1001;
																																						BgL_nbindingsz00_2505
																																							=
																																							BgL_arg2063z00_1002;
																																						BgL_ebdgsz00_2506
																																							=
																																							BgL_arg2064z00_1003;
																																						BgL_ebdgsz00_968
																																							=
																																							BgL_ebdgsz00_2506;
																																						BgL_nbindingsz00_967
																																							=
																																							BgL_nbindingsz00_2505;
																																						BgL_bindingsz00_966
																																							=
																																							BgL_bindingsz00_2504;
																																						goto
																																							BgL_zc3anonymousza32039ze3z83_969;
																																					}
																																				}
																																			}
																																		else
																																			{	/* Eval/expdlet.scm 93 */
																																				BgL_resz00_781
																																					=
																																					BGl_errorz00zz__errorz00
																																					(BGl_string2546z00zz__expander_letz00,
																																					BGl_string2548z00zz__expander_letz00,
																																					BgL_xz00_960);
																																			}
																																	}
																																else
																																	{	/* Eval/expdlet.scm 93 */
																																		BgL_resz00_781
																																			=
																																			BGl_errorz00zz__errorz00
																																			(BGl_string2546z00zz__expander_letz00,
																																			BGl_string2548z00zz__expander_letz00,
																																			BgL_xz00_960);
																																	}
																															}
																														else
																															{	/* Eval/expdlet.scm 93 */
																																BgL_resz00_781 =
																																	BGl_errorz00zz__errorz00
																																	(BGl_string2546z00zz__expander_letz00,
																																	BGl_string2548z00zz__expander_letz00,
																																	BgL_xz00_960);
																															}
																													}
																												else
																													{	/* Eval/expdlet.scm 93 */
																														BgL_resz00_781 =
																															BGl_errorz00zz__errorz00
																															(BGl_string2546z00zz__expander_letz00,
																															BGl_string2548z00zz__expander_letz00,
																															BgL_xz00_960);
																													}
																											}
																									}
																								}
																						}
																					}
																				else
																					{	/* Eval/expdlet.scm 106 */
																						BgL_resz00_781 =
																							BGl_errorz00zz__errorz00
																							(BGl_string2546z00zz__expander_letz00,
																							BGl_string2549z00zz__expander_letz00,
																							BgL_xz00_1);
																					}
																			}
																		else
																			{	/* Eval/expdlet.scm 106 */
																				BgL_loopz00_835 = BgL_carzd21445zd2_800;
																				BgL_bindingsz00_836 =
																					CAR(BgL_cdrzd21446zd2_801);
																				BgL_bodyz00_837 = BgL_cdrzd21453zd2_804;
																				BgL_xz00_838 = BgL_xz00_1;
																				BgL_ez00_839 = BgL_ez00_780;
																			BgL_zc3anonymousza31956ze3z83_840:
																				{	/* Eval/expdlet.scm 65 */
																					bool_t BgL_testz00_2514;

																					{
																						obj_t BgL_l1855z00_943;

																						BgL_l1855z00_943 =
																							BgL_bindingsz00_836;
																					BgL_zc3anonymousza32030ze3z83_944:
																						if (NULLP(BgL_l1855z00_943))
																							{	/* Eval/expdlet.scm 65 */
																								BgL_testz00_2514 = ((bool_t) 1);
																							}
																						else
																							{	/* Eval/expdlet.scm 65 */
																								bool_t BgL_testz00_2517;

																								{	/* Eval/expdlet.scm 66 */
																									obj_t BgL_ezd21391zd2_951;

																									BgL_ezd21391zd2_951 =
																										CAR(BgL_l1855z00_943);
																									if (PAIRP
																										(BgL_ezd21391zd2_951))
																										{	/* Eval/expdlet.scm 66 */
																											obj_t
																												BgL_cdrzd21393zd2_953;
																											BgL_cdrzd21393zd2_953 =
																												CDR
																												(BgL_ezd21391zd2_951);
																											if (PAIRP
																												(BgL_cdrzd21393zd2_953))
																												{	/* Eval/expdlet.scm 66 */
																													if (NULLP(CDR
																															(BgL_cdrzd21393zd2_953)))
																														{	/* Eval/expdlet.scm 66 */
																															BgL_testz00_2517 =
																																((bool_t) 1);
																														}
																													else
																														{	/* Eval/expdlet.scm 66 */
																															BgL_testz00_2517 =
																																((bool_t) 0);
																														}
																												}
																											else
																												{	/* Eval/expdlet.scm 66 */
																													BgL_testz00_2517 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Eval/expdlet.scm 66 */
																											BgL_testz00_2517 =
																												((bool_t) 0);
																										}
																								}
																								if (BgL_testz00_2517)
																									{
																										obj_t BgL_l1855z00_2527;

																										BgL_l1855z00_2527 =
																											CDR(BgL_l1855z00_943);
																										BgL_l1855z00_943 =
																											BgL_l1855z00_2527;
																										goto
																											BgL_zc3anonymousza32030ze3z83_944;
																									}
																								else
																									{	/* Eval/expdlet.scm 65 */
																										BgL_testz00_2514 =
																											((bool_t) 0);
																									}
																							}
																					}
																					if (BgL_testz00_2514)
																						{	/* Eval/expdlet.scm 71 */
																							obj_t BgL_varsz00_842;

																							if (NULLP(BgL_bindingsz00_836))
																								{	/* Eval/expdlet.scm 71 */
																									BgL_varsz00_842 = BNIL;
																								}
																							else
																								{	/* Eval/expdlet.scm 71 */
																									obj_t BgL_head1859z00_922;

																									BgL_head1859z00_922 =
																										MAKE_PAIR(BNIL, BNIL);
																									{
																										obj_t BgL_l1857z00_924;

																										obj_t BgL_tail1860z00_925;

																										BgL_l1857z00_924 =
																											BgL_bindingsz00_836;
																										BgL_tail1860z00_925 =
																											BgL_head1859z00_922;
																									BgL_zc3anonymousza32017ze3z83_926:
																										if (NULLP
																											(BgL_l1857z00_924))
																											{	/* Eval/expdlet.scm 71 */
																												BgL_varsz00_842 =
																													CDR
																													(BgL_head1859z00_922);
																											}
																										else
																											{	/* Eval/expdlet.scm 71 */
																												obj_t
																													BgL_newtail1861z00_928;
																												{	/* Eval/expdlet.scm 71 */
																													obj_t
																														BgL_arg2021z00_930;
																													{	/* Eval/expdlet.scm 71 */
																														obj_t BgL_xz00_932;

																														BgL_xz00_932 =
																															CAR
																															(BgL_l1857z00_924);
																														{	/* Eval/expdlet.scm 72 */
																															bool_t
																																BgL_testz00_2536;
																															{	/* Eval/expdlet.scm 72 */
																																bool_t
																																	BgL_testz00_2537;
																																{	/* Eval/expdlet.scm 72 */
																																	obj_t
																																		BgL_auxz00_2538;
																																	{	/* Eval/expdlet.scm 72 */
																																		obj_t
																																			BgL_pairz00_1834;
																																		BgL_pairz00_1834
																																			=
																																			BgL_xz00_932;
																																		BgL_auxz00_2538
																																			=
																																			CDR(CDR
																																			(BgL_pairz00_1834));
																																	}
																																	BgL_testz00_2537
																																		=
																																		NULLP
																																		(BgL_auxz00_2538);
																																}
																																if (BgL_testz00_2537)
																																	{	/* Eval/expdlet.scm 73 */
																																		bool_t
																																			BgL_testz00_2542;
																																		{	/* Eval/expdlet.scm 73 */
																																			obj_t
																																				BgL_auxz00_2543;
																																			{	/* Eval/expdlet.scm 73 */
																																				obj_t
																																					BgL_pairz00_1839;
																																				BgL_pairz00_1839
																																					=
																																					BgL_xz00_932;
																																				BgL_auxz00_2543
																																					=
																																					CAR
																																					(CDR
																																					(BgL_pairz00_1839));
																																			}
																																			BgL_testz00_2542
																																				=
																																				PAIRP
																																				(BgL_auxz00_2543);
																																		}
																																		if (BgL_testz00_2542)
																																			{	/* Eval/expdlet.scm 73 */
																																				BgL_testz00_2536
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																		else
																																			{	/* Eval/expdlet.scm 73 */
																																				BgL_testz00_2536
																																					=
																																					(
																																					(bool_t)
																																					1);
																																			}
																																	}
																																else
																																	{	/* Eval/expdlet.scm 72 */
																																		BgL_testz00_2536
																																			=
																																			((bool_t)
																																			0);
																																	}
																															}
																															if (BgL_testz00_2536)
																																{	/* Eval/expdlet.scm 74 */
																																	obj_t
																																		BgL_arg2024z00_934;
																																	{	/* Eval/expdlet.scm 74 */
																																		obj_t
																																			BgL_pairz00_1844;
																																		BgL_pairz00_1844
																																			=
																																			BgL_xz00_932;
																																		BgL_arg2024z00_934
																																			=
																																			CAR(CDR
																																			(BgL_pairz00_1844));
																																	}
																																	BgL_arg2021z00_930
																																		=
																																		MAKE_PAIR
																																		(BFALSE,
																																		BgL_arg2024z00_934);
																																}
																															else
																																{	/* Eval/expdlet.scm 75 */
																																	obj_t
																																		BgL_arg2025z00_935;
																																	{	/* Eval/expdlet.scm 75 */

																																		{	/* Eval/expdlet.scm 75 */

																																			BgL_arg2025z00_935
																																				=
																																				BGl_gensymz00zz__r4_symbols_6_4z00
																																				(BFALSE);
																																		}
																																	}
																																	BgL_arg2021z00_930
																																		=
																																		MAKE_PAIR
																																		(BTRUE,
																																		BgL_arg2025z00_935);
																																}
																														}
																													}
																													BgL_newtail1861z00_928
																														=
																														MAKE_PAIR
																														(BgL_arg2021z00_930,
																														BNIL);
																												}
																												SET_CDR
																													(BgL_tail1860z00_925,
																													BgL_newtail1861z00_928);
																												{
																													obj_t
																														BgL_tail1860z00_2556;
																													obj_t
																														BgL_l1857z00_2554;
																													BgL_l1857z00_2554 =
																														CDR
																														(BgL_l1857z00_924);
																													BgL_tail1860z00_2556 =
																														BgL_newtail1861z00_928;
																													BgL_tail1860z00_925 =
																														BgL_tail1860z00_2556;
																													BgL_l1857z00_924 =
																														BgL_l1857z00_2554;
																													goto
																														BgL_zc3anonymousza32017ze3z83_926;
																												}
																											}
																									}
																								}
																							{	/* Eval/expdlet.scm 71 */
																								obj_t BgL_auxz00_843;

																								{	/* Eval/expdlet.scm 77 */
																									obj_t BgL_list2010z00_911;

																									{	/* Eval/expdlet.scm 77 */
																										obj_t BgL_arg2011z00_912;

																										BgL_arg2011z00_912 =
																											MAKE_PAIR
																											(BgL_bindingsz00_836,
																											BNIL);
																										BgL_list2010z00_911 =
																											MAKE_PAIR(BgL_varsz00_842,
																											BgL_arg2011z00_912);
																									}
																									BgL_auxz00_843 =
																										BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																										(BGl_proc2540z00zz__expander_letz00,
																										BgL_list2010z00_911);
																								}
																								{	/* Eval/expdlet.scm 77 */
																									obj_t BgL_recz00_844;

																									{	/* Eval/expdlet.scm 80 */
																										obj_t BgL_arg1963z00_851;

																										obj_t BgL_arg1965z00_852;

																										BgL_arg1963z00_851 =
																											BGl_symbol2541z00zz__expander_letz00;
																										{	/* Eval/expdlet.scm 80 */
																											obj_t BgL_arg1966z00_853;

																											obj_t BgL_arg1967z00_854;

																											{	/* Eval/expdlet.scm 80 */
																												obj_t
																													BgL_arg1971z00_858;
																												{	/* Eval/expdlet.scm 80 */
																													obj_t
																														BgL_arg1973z00_860;
																													{	/* Eval/expdlet.scm 80 */
																														obj_t
																															BgL_arg1974z00_861;
																														{	/* Eval/expdlet.scm 80 */
																															obj_t
																																BgL_arg1977z00_864;
																															obj_t
																																BgL_arg1979z00_865;
																															BgL_arg1977z00_864
																																=
																																BGl_symbol2543z00zz__expander_letz00;
																															{	/* Eval/expdlet.scm 80 */
																																obj_t
																																	BgL_arg1980z00_866;
																																obj_t
																																	BgL_arg1981z00_867;
																																if (NULLP
																																	(BgL_bindingsz00_836))
																																	{	/* Eval/expdlet.scm 80 */
																																		BgL_arg1980z00_866
																																			= BNIL;
																																	}
																																else
																																	{	/* Eval/expdlet.scm 80 */
																																		obj_t
																																			BgL_head1864z00_873;
																																		BgL_head1864z00_873
																																			=
																																			MAKE_PAIR
																																			(CAR(CAR
																																				(BgL_bindingsz00_836)),
																																			BNIL);
																																		{	/* Eval/expdlet.scm 80 */
																																			obj_t
																																				BgL_g1867z00_874;
																																			BgL_g1867z00_874
																																				=
																																				CDR
																																				(BgL_bindingsz00_836);
																																			{
																																				obj_t
																																					BgL_l1862z00_1866;
																																				obj_t
																																					BgL_tail1865z00_1867;
																																				BgL_l1862z00_1866
																																					=
																																					BgL_g1867z00_874;
																																				BgL_tail1865z00_1867
																																					=
																																					BgL_head1864z00_873;
																																			BgL_zc3anonymousza31986ze3z83_1865:
																																				if (NULLP(BgL_l1862z00_1866))
																																					{	/* Eval/expdlet.scm 80 */
																																						BgL_arg1980z00_866
																																							=
																																							BgL_head1864z00_873;
																																					}
																																				else
																																					{	/* Eval/expdlet.scm 80 */
																																						obj_t
																																							BgL_newtail1866z00_1875;
																																						BgL_newtail1866z00_1875
																																							=
																																							MAKE_PAIR
																																							(CAR
																																							(CAR
																																								(BgL_l1862z00_1866)),
																																							BNIL);
																																						SET_CDR
																																							(BgL_tail1865z00_1867,
																																							BgL_newtail1866z00_1875);
																																						{
																																							obj_t
																																								BgL_tail1865z00_2574;
																																							obj_t
																																								BgL_l1862z00_2572;
																																							BgL_l1862z00_2572
																																								=
																																								CDR
																																								(BgL_l1862z00_1866);
																																							BgL_tail1865z00_2574
																																								=
																																								BgL_newtail1866z00_1875;
																																							BgL_tail1865z00_1867
																																								=
																																								BgL_tail1865z00_2574;
																																							BgL_l1862z00_1866
																																								=
																																								BgL_l1862z00_2572;
																																							goto
																																								BgL_zc3anonymousza31986ze3z83_1865;
																																						}
																																					}
																																			}
																																		}
																																	}
																																BgL_arg1981z00_867
																																	=
																																	BGl_expandzd2prognzd2zz__prognz00
																																	(BgL_bodyz00_837);
																																{	/* Eval/expdlet.scm 80 */
																																	obj_t
																																		BgL_list1983z00_869;
																																	{	/* Eval/expdlet.scm 80 */
																																		obj_t
																																			BgL_arg1984z00_870;
																																		BgL_arg1984z00_870
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list1983z00_869
																																			=
																																			MAKE_PAIR
																																			(BgL_arg1981z00_867,
																																			BgL_arg1984z00_870);
																																	}
																																	BgL_arg1979z00_865
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg1980z00_866,
																																		BgL_list1983z00_869);
																																}
																															}
																															BgL_arg1974z00_861
																																=
																																MAKE_PAIR
																																(BgL_arg1977z00_864,
																																BgL_arg1979z00_865);
																														}
																														{	/* Eval/expdlet.scm 80 */
																															obj_t
																																BgL_list1976z00_863;
																															BgL_list1976z00_863
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg1973z00_860
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg1974z00_861,
																																BgL_list1976z00_863);
																														}
																													}
																													BgL_arg1971z00_858 =
																														MAKE_PAIR
																														(BgL_loopz00_835,
																														BgL_arg1973z00_860);
																												}
																												BgL_arg1966z00_853 =
																													MAKE_PAIR
																													(BgL_arg1971z00_858,
																													BNIL);
																											}
																											{	/* Eval/expdlet.scm 82 */
																												obj_t
																													BgL_arg1995z00_889;
																												{	/* Eval/expdlet.scm 82 */
																													obj_t
																														BgL_arg1996z00_890;
																													if (NULLP
																														(BgL_varsz00_842))
																														{	/* Eval/expdlet.scm 82 */
																															BgL_arg1996z00_890
																																= BNIL;
																														}
																													else
																														{	/* Eval/expdlet.scm 82 */
																															obj_t
																																BgL_head1870z00_894;
																															BgL_head1870z00_894
																																=
																																MAKE_PAIR(CDR
																																(CAR
																																	(BgL_varsz00_842)),
																																BNIL);
																															{	/* Eval/expdlet.scm 82 */
																																obj_t
																																	BgL_g1873z00_895;
																																BgL_g1873z00_895
																																	=
																																	CDR
																																	(BgL_varsz00_842);
																																{
																																	obj_t
																																		BgL_l1868z00_1925;
																																	obj_t
																																		BgL_tail1871z00_1926;
																																	BgL_l1868z00_1925
																																		=
																																		BgL_g1873z00_895;
																																	BgL_tail1871z00_1926
																																		=
																																		BgL_head1870z00_894;
																																BgL_zc3anonymousza32000ze3z83_1924:
																																	if (NULLP
																																		(BgL_l1868z00_1925))
																																		{	/* Eval/expdlet.scm 82 */
																																			BgL_arg1996z00_890
																																				=
																																				BgL_head1870z00_894;
																																		}
																																	else
																																		{	/* Eval/expdlet.scm 82 */
																																			obj_t
																																				BgL_newtail1872z00_1934;
																																			BgL_newtail1872z00_1934
																																				=
																																				MAKE_PAIR
																																				(CDR(CAR
																																					(BgL_l1868z00_1925)),
																																				BNIL);
																																			SET_CDR
																																				(BgL_tail1871z00_1926,
																																				BgL_newtail1872z00_1934);
																																			{
																																				obj_t
																																					BgL_tail1871z00_2598;
																																				obj_t
																																					BgL_l1868z00_2596;
																																				BgL_l1868z00_2596
																																					=
																																					CDR
																																					(BgL_l1868z00_1925);
																																				BgL_tail1871z00_2598
																																					=
																																					BgL_newtail1872z00_1934;
																																				BgL_tail1871z00_1926
																																					=
																																					BgL_tail1871z00_2598;
																																				BgL_l1868z00_1925
																																					=
																																					BgL_l1868z00_2596;
																																				goto
																																					BgL_zc3anonymousza32000ze3z83_1924;
																																			}
																																		}
																																}
																															}
																														}
																													BgL_arg1995z00_889 =
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg1996z00_890,
																														BNIL);
																												}
																												BgL_arg1967z00_854 =
																													MAKE_PAIR
																													(BgL_loopz00_835,
																													BgL_arg1995z00_889);
																											}
																											{	/* Eval/expdlet.scm 80 */
																												obj_t
																													BgL_list1969z00_856;
																												{	/* Eval/expdlet.scm 80 */
																													obj_t
																														BgL_arg1970z00_857;
																													BgL_arg1970z00_857 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list1969z00_856 =
																														MAKE_PAIR
																														(BgL_arg1967z00_854,
																														BgL_arg1970z00_857);
																												}
																												BgL_arg1965z00_852 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg1966z00_853,
																													BgL_list1969z00_856);
																											}
																										}
																										BgL_recz00_844 =
																											MAKE_PAIR
																											(BgL_arg1963z00_851,
																											BgL_arg1965z00_852);
																									}
																									{	/* Eval/expdlet.scm 80 */
																										obj_t BgL_expz00_845;

																										if (PAIRP(BgL_auxz00_843))
																											{	/* Eval/expdlet.scm 83 */
																												obj_t
																													BgL_arg1959z00_847;
																												obj_t
																													BgL_arg1960z00_848;
																												BgL_arg1959z00_847 =
																													BGl_symbol2545z00zz__expander_letz00;
																												{	/* Eval/expdlet.scm 83 */
																													obj_t
																														BgL_list1961z00_849;
																													{	/* Eval/expdlet.scm 83 */
																														obj_t
																															BgL_arg1962z00_850;
																														BgL_arg1962z00_850 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list1961z00_849
																															=
																															MAKE_PAIR
																															(BgL_recz00_844,
																															BgL_arg1962z00_850);
																													}
																													BgL_arg1960z00_848 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_auxz00_843,
																														BgL_list1961z00_849);
																												}
																												BgL_expz00_845 =
																													MAKE_PAIR
																													(BgL_arg1959z00_847,
																													BgL_arg1960z00_848);
																											}
																										else
																											{	/* Eval/expdlet.scm 83 */
																												BgL_expz00_845 =
																													BgL_recz00_844;
																											}
																										{	/* Eval/expdlet.scm 83 */

																											BgL_resz00_781 =
																												PROCEDURE_ENTRY
																												(BgL_ez00_839)
																												(BgL_ez00_839,
																												BgL_expz00_845,
																												BgL_ez00_839, BEOA);
																										}
																									}
																								}
																							}
																						}
																					else
																						{	/* Eval/expdlet.scm 65 */
																							BgL_resz00_781 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2546z00zz__expander_letz00,
																								BGl_string2547z00zz__expander_letz00,
																								BgL_xz00_838);
																						}
																				}
																			}
																	}
																else
																	{	/* Eval/expdlet.scm 106 */
																		BgL_resz00_781 =
																			BGl_errorz00zz__errorz00
																			(BGl_string2546z00zz__expander_letz00,
																			BGl_string2549z00zz__expander_letz00,
																			BgL_xz00_1);
																	}
															}
														else
															{	/* Eval/expdlet.scm 106 */
																BgL_resz00_781 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2546z00zz__expander_letz00,
																	BGl_string2549z00zz__expander_letz00,
																	BgL_xz00_1);
															}
													}
												else
													{	/* Eval/expdlet.scm 106 */
														obj_t BgL_arg1955z00_1790;

														BgL_arg1955z00_1790 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd21431zd2_796);
														BgL_resz00_781 =
															PROCEDURE_ENTRY(BgL_ez00_780) (BgL_ez00_780,
															BgL_arg1955z00_1790, BgL_ez00_780, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 106 */
												obj_t BgL_carzd21491zd2_812;

												obj_t BgL_cdrzd21492zd2_813;

												BgL_carzd21491zd2_812 = CAR(BgL_cdrzd21428zd2_794);
												BgL_cdrzd21492zd2_813 = CDR(BgL_cdrzd21428zd2_794);
												if (SYMBOLP(BgL_carzd21491zd2_812))
													{	/* Eval/expdlet.scm 106 */
														if (PAIRP(BgL_cdrzd21492zd2_813))
															{	/* Eval/expdlet.scm 106 */
																obj_t BgL_cdrzd21499zd2_816;

																BgL_cdrzd21499zd2_816 =
																	CDR(BgL_cdrzd21492zd2_813);
																if (NULLP(BgL_cdrzd21499zd2_816))
																	{	/* Eval/expdlet.scm 106 */
																		obj_t BgL_carzd21513zd2_819;

																		BgL_carzd21513zd2_819 =
																			CAR(BgL_cdrzd21428zd2_794);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd21513zd2_819))
																			{
																				obj_t BgL_ez00_2636;

																				obj_t BgL_xz00_2635;

																				obj_t BgL_bodyz00_2633;

																				obj_t BgL_bindingsz00_2632;

																				BgL_bindingsz00_2632 =
																					BgL_carzd21513zd2_819;
																				BgL_bodyz00_2633 =
																					CDR(BgL_cdrzd21428zd2_794);
																				BgL_xz00_2635 = BgL_xz00_1;
																				BgL_ez00_2636 = BgL_ez00_780;
																				BgL_ez00_961 = BgL_ez00_2636;
																				BgL_xz00_960 = BgL_xz00_2635;
																				BgL_bodyz00_959 = BgL_bodyz00_2633;
																				BgL_bindingsz00_958 =
																					BgL_bindingsz00_2632;
																				goto BgL_zc3anonymousza32038ze3z83_962;
																			}
																		else
																			{	/* Eval/expdlet.scm 106 */
																				BgL_resz00_781 =
																					BGl_errorz00zz__errorz00
																					(BGl_string2546z00zz__expander_letz00,
																					BGl_string2549z00zz__expander_letz00,
																					BgL_xz00_1);
																			}
																	}
																else
																	{
																		obj_t BgL_ez00_2643;

																		obj_t BgL_xz00_2642;

																		obj_t BgL_bodyz00_2641;

																		obj_t BgL_bindingsz00_2639;

																		obj_t BgL_loopz00_2638;

																		BgL_loopz00_2638 = BgL_carzd21491zd2_812;
																		BgL_bindingsz00_2639 =
																			CAR(BgL_cdrzd21492zd2_813);
																		BgL_bodyz00_2641 = BgL_cdrzd21499zd2_816;
																		BgL_xz00_2642 = BgL_xz00_1;
																		BgL_ez00_2643 = BgL_ez00_780;
																		BgL_ez00_839 = BgL_ez00_2643;
																		BgL_xz00_838 = BgL_xz00_2642;
																		BgL_bodyz00_837 = BgL_bodyz00_2641;
																		BgL_bindingsz00_836 = BgL_bindingsz00_2639;
																		BgL_loopz00_835 = BgL_loopz00_2638;
																		goto BgL_zc3anonymousza31956ze3z83_840;
																	}
															}
														else
															{	/* Eval/expdlet.scm 106 */
																obj_t BgL_carzd21532zd2_824;

																obj_t BgL_cdrzd21533zd2_825;

																BgL_carzd21532zd2_824 =
																	CAR(BgL_cdrzd21428zd2_794);
																BgL_cdrzd21533zd2_825 =
																	CDR(BgL_cdrzd21428zd2_794);
																if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																	(BgL_carzd21532zd2_824))
																	{	/* Eval/expdlet.scm 106 */
																		if (NULLP(BgL_cdrzd21533zd2_825))
																			{	/* Eval/expdlet.scm 106 */
																				BgL_resz00_781 =
																					BGl_errorz00zz__errorz00
																					(BGl_string2546z00zz__expander_letz00,
																					BGl_string2549z00zz__expander_letz00,
																					BgL_xz00_1);
																			}
																		else
																			{
																				obj_t BgL_ez00_2654;

																				obj_t BgL_xz00_2653;

																				obj_t BgL_bodyz00_2652;

																				obj_t BgL_bindingsz00_2651;

																				BgL_bindingsz00_2651 =
																					BgL_carzd21532zd2_824;
																				BgL_bodyz00_2652 =
																					BgL_cdrzd21533zd2_825;
																				BgL_xz00_2653 = BgL_xz00_1;
																				BgL_ez00_2654 = BgL_ez00_780;
																				BgL_ez00_961 = BgL_ez00_2654;
																				BgL_xz00_960 = BgL_xz00_2653;
																				BgL_bodyz00_959 = BgL_bodyz00_2652;
																				BgL_bindingsz00_958 =
																					BgL_bindingsz00_2651;
																				goto BgL_zc3anonymousza32038ze3z83_962;
																			}
																	}
																else
																	{	/* Eval/expdlet.scm 106 */
																		BgL_resz00_781 =
																			BGl_errorz00zz__errorz00
																			(BGl_string2546z00zz__expander_letz00,
																			BGl_string2549z00zz__expander_letz00,
																			BgL_xz00_1);
																	}
															}
													}
												else
													{	/* Eval/expdlet.scm 106 */
														obj_t BgL_carzd21549zd2_829;

														obj_t BgL_cdrzd21550zd2_830;

														BgL_carzd21549zd2_829 = CAR(BgL_cdrzd21428zd2_794);
														BgL_cdrzd21550zd2_830 = CDR(BgL_cdrzd21428zd2_794);
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd21549zd2_829))
															{	/* Eval/expdlet.scm 106 */
																if (NULLP(BgL_cdrzd21550zd2_830))
																	{	/* Eval/expdlet.scm 106 */
																		BgL_resz00_781 =
																			BGl_errorz00zz__errorz00
																			(BGl_string2546z00zz__expander_letz00,
																			BGl_string2549z00zz__expander_letz00,
																			BgL_xz00_1);
																	}
																else
																	{
																		obj_t BgL_ez00_2666;

																		obj_t BgL_xz00_2665;

																		obj_t BgL_bodyz00_2664;

																		obj_t BgL_bindingsz00_2663;

																		BgL_bindingsz00_2663 =
																			BgL_carzd21549zd2_829;
																		BgL_bodyz00_2664 = BgL_cdrzd21550zd2_830;
																		BgL_xz00_2665 = BgL_xz00_1;
																		BgL_ez00_2666 = BgL_ez00_780;
																		BgL_ez00_961 = BgL_ez00_2666;
																		BgL_xz00_960 = BgL_xz00_2665;
																		BgL_bodyz00_959 = BgL_bodyz00_2664;
																		BgL_bindingsz00_958 = BgL_bindingsz00_2663;
																		goto BgL_zc3anonymousza32038ze3z83_962;
																	}
															}
														else
															{	/* Eval/expdlet.scm 106 */
																BgL_resz00_781 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2546z00zz__expander_letz00,
																	BGl_string2549z00zz__expander_letz00,
																	BgL_xz00_1);
															}
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 106 */
										BgL_resz00_781 =
											BGl_errorz00zz__errorz00
											(BGl_string2546z00zz__expander_letz00,
											BGl_string2549z00zz__expander_letz00, BgL_xz00_1);
									}
							}
						else
							{	/* Eval/expdlet.scm 106 */
								BgL_resz00_781 =
									BGl_errorz00zz__errorz00(BGl_string2546z00zz__expander_letz00,
									BGl_string2549z00zz__expander_letz00, BgL_xz00_1);
							}
						{	/* Eval/expdlet.scm 106 */

							return BGl_evepairifyz00zz__prognz00(BgL_resz00_781, BgL_xz00_1);
						}
					}
				}
			}
		}
	}



/* _expand-eval-let */
	obj_t BGl__expandzd2evalzd2letz00zz__expander_letz00(obj_t BgL_envz00_2411,
		obj_t BgL_xz00_2412, obj_t BgL_ez00_2413)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 62 */
			return
				BGl_expandzd2evalzd2letz00zz__expander_letz00(BgL_xz00_2412,
				BgL_ez00_2413);
		}
	}



/* <anonymous:2012> */
	obj_t BGl_zc3anonymousza32012ze3z83zz__expander_letz00(obj_t BgL_envz00_2414,
		obj_t BgL_xz00_2415, obj_t BgL_yz00_2416)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 77 */
			{
				obj_t BgL_xz00_913;

				obj_t BgL_yz00_914;

				BgL_xz00_913 = BgL_xz00_2415;
				BgL_yz00_914 = BgL_yz00_2416;
				{	/* Eval/expdlet.scm 78 */
					obj_t BgL__andtest_1824z00_1853;

					BgL__andtest_1824z00_1853 = CAR(BgL_xz00_913);
					if (CBOOL(BgL__andtest_1824z00_1853))
						{	/* Eval/expdlet.scm 78 */
							return MAKE_PAIR(CDR(BgL_xz00_913), CDR(BgL_yz00_914));
						}
					else
						{	/* Eval/expdlet.scm 78 */
							return BFALSE;
						}
				}
			}
		}
	}



/* expand-eval-let* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2letza2za2zz__expander_letz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 120 */
			{	/* Eval/expdlet.scm 121 */
				obj_t BgL_ez00_1011;

				BgL_ez00_1011 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_4);
				{	/* Eval/expdlet.scm 121 */
					obj_t BgL_resz00_1012;

					{
						obj_t BgL_bindingsz00_1015;

						obj_t BgL_bodyz00_1016;

						if (PAIRP(BgL_xz00_3))
							{	/* Eval/expdlet.scm 122 */
								obj_t BgL_cdrzd21584zd2_1021;

								BgL_cdrzd21584zd2_1021 = CDR(BgL_xz00_3);
								if (PAIRP(BgL_cdrzd21584zd2_1021))
									{	/* Eval/expdlet.scm 122 */
										obj_t BgL_cdrzd21587zd2_1023;

										BgL_cdrzd21587zd2_1023 = CDR(BgL_cdrzd21584zd2_1021);
										if (NULLP(CAR(BgL_cdrzd21584zd2_1021)))
											{	/* Eval/expdlet.scm 122 */
												if (NULLP(BgL_cdrzd21587zd2_1023))
													{	/* Eval/expdlet.scm 122 */
														BgL_resz00_1012 =
															BGl_errorz00zz__errorz00
															(BGl_string2551z00zz__expander_letz00,
															BGl_string2547z00zz__expander_letz00, BgL_xz00_3);
													}
												else
													{	/* Eval/expdlet.scm 122 */
														obj_t BgL_arg2077z00_2003;

														BgL_arg2077z00_2003 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd21587zd2_1023);
														BgL_resz00_1012 =
															PROCEDURE_ENTRY(BgL_ez00_1011) (BgL_ez00_1011,
															BgL_arg2077z00_2003, BgL_ez00_1011, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 122 */
												obj_t BgL_carzd21602zd2_1027;

												obj_t BgL_cdrzd21603zd2_1028;

												BgL_carzd21602zd2_1027 = CAR(BgL_cdrzd21584zd2_1021);
												BgL_cdrzd21603zd2_1028 = CDR(BgL_cdrzd21584zd2_1021);
												if (PAIRP(BgL_carzd21602zd2_1027))
													{	/* Eval/expdlet.scm 122 */
														if (NULLP(BgL_cdrzd21603zd2_1028))
															{	/* Eval/expdlet.scm 122 */
																BgL_resz00_1012 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2551z00zz__expander_letz00,
																	BGl_string2547z00zz__expander_letz00,
																	BgL_xz00_3);
															}
														else
															{	/* Eval/expdlet.scm 122 */
																BgL_bindingsz00_1015 = BgL_carzd21602zd2_1027;
																BgL_bodyz00_1016 = BgL_cdrzd21603zd2_1028;
																{
																	obj_t BgL_bindingsz00_1036;

																	obj_t BgL_nbindingsz00_1037;

																	obj_t BgL_ebdgsz00_1038;

																	BgL_bindingsz00_1036 = BgL_bindingsz00_1015;
																	BgL_nbindingsz00_1037 = BNIL;
																	BgL_ebdgsz00_1038 = BNIL;
																BgL_zc3anonymousza32078ze3z83_1039:
																	if (NULLP(BgL_bindingsz00_1036))
																		{	/* Eval/expdlet.scm 131 */
																			obj_t BgL_arg2080z00_1041;

																			obj_t BgL_arg2081z00_1042;

																			BgL_arg2080z00_1041 =
																				BGl_symbol2550z00zz__expander_letz00;
																			{	/* Eval/expdlet.scm 131 */
																				obj_t BgL_arg2082z00_1043;

																				obj_t BgL_arg2083z00_1044;

																				BgL_arg2082z00_1043 =
																					bgl_reverse_bang
																					(BgL_nbindingsz00_1037);
																				BgL_arg2083z00_1044 =
																					BGl_z52withzd2lexicalz80zz__expandz00
																					(BgL_ebdgsz00_1038,
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_1016), BgL_ez00_1011,
																					BFALSE);
																				{	/* Eval/expdlet.scm 131 */
																					obj_t BgL_list2085z00_1046;

																					{	/* Eval/expdlet.scm 131 */
																						obj_t BgL_arg2086z00_1047;

																						BgL_arg2086z00_1047 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2085z00_1046 =
																							MAKE_PAIR(BgL_arg2083z00_1044,
																							BgL_arg2086z00_1047);
																					}
																					BgL_arg2081z00_1042 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2082z00_1043,
																						BgL_list2085z00_1046);
																				}
																			}
																			BgL_resz00_1012 =
																				MAKE_PAIR(BgL_arg2080z00_1041,
																				BgL_arg2081z00_1042);
																		}
																	else
																		{	/* Eval/expdlet.scm 134 */
																			bool_t BgL_testz00_2710;

																			{	/* Eval/expdlet.scm 134 */
																				obj_t BgL_auxz00_2711;

																				BgL_auxz00_2711 =
																					CAR(BgL_bindingsz00_1036);
																				BgL_testz00_2710 =
																					PAIRP(BgL_auxz00_2711);
																			}
																			if (BgL_testz00_2710)
																				{	/* Eval/expdlet.scm 139 */
																					bool_t BgL_testz00_2714;

																					{	/* Eval/expdlet.scm 139 */
																						bool_t BgL_testz00_2715;

																						{	/* Eval/expdlet.scm 139 */
																							obj_t BgL_auxz00_2716;

																							{	/* Eval/expdlet.scm 139 */
																								obj_t BgL_pairz00_2013;

																								BgL_pairz00_2013 =
																									BgL_bindingsz00_1036;
																								BgL_auxz00_2716 =
																									CDR(CAR(BgL_pairz00_2013));
																							}
																							BgL_testz00_2715 =
																								PAIRP(BgL_auxz00_2716);
																						}
																						if (BgL_testz00_2715)
																							{	/* Eval/expdlet.scm 140 */
																								bool_t BgL_testz00_2720;

																								{	/* Eval/expdlet.scm 140 */
																									obj_t BgL_auxz00_2721;

																									{	/* Eval/expdlet.scm 140 */
																										obj_t BgL_pairz00_2018;

																										BgL_pairz00_2018 =
																											BgL_bindingsz00_1036;
																										BgL_auxz00_2721 =
																											CDR(CDR(CAR
																												(BgL_pairz00_2018)));
																									}
																									BgL_testz00_2720 =
																										NULLP(BgL_auxz00_2721);
																								}
																								if (BgL_testz00_2720)
																									{	/* Eval/expdlet.scm 140 */
																										BgL_testz00_2714 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Eval/expdlet.scm 140 */
																										BgL_testz00_2714 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Eval/expdlet.scm 139 */
																								BgL_testz00_2714 = ((bool_t) 1);
																							}
																					}
																					if (BgL_testz00_2714)
																						{	/* Eval/expdlet.scm 139 */
																							BgL_resz00_1012 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2551z00zz__expander_letz00,
																								BGl_string2552z00zz__expander_letz00,
																								BgL_xz00_3);
																						}
																					else
																						{	/* Eval/expdlet.scm 143 */
																							obj_t BgL_arg2092z00_1051;

																							obj_t BgL_arg2093z00_1052;

																							obj_t BgL_arg2094z00_1053;

																							BgL_arg2092z00_1051 =
																								CDR(BgL_bindingsz00_1036);
																							{	/* Eval/expdlet.scm 144 */
																								obj_t BgL_arg2095z00_1054;

																								{	/* Eval/expdlet.scm 144 */
																									obj_t BgL_arg2096z00_1055;

																									obj_t BgL_arg2097z00_1056;

																									{	/* Eval/expdlet.scm 144 */
																										obj_t BgL_pairz00_2026;

																										BgL_pairz00_2026 =
																											BgL_bindingsz00_1036;
																										BgL_arg2096z00_1055 =
																											CAR(CAR
																											(BgL_pairz00_2026));
																									}
																									{	/* Eval/expdlet.scm 147 */
																										obj_t BgL_arg2100z00_1059;

																										{	/* Eval/expdlet.scm 147 */
																											obj_t BgL_arg2101z00_1060;

																											{	/* Eval/expdlet.scm 147 */
																												obj_t BgL_pairz00_2030;

																												BgL_pairz00_2030 =
																													BgL_bindingsz00_1036;
																												BgL_arg2101z00_1060 =
																													CDR(CAR
																													(BgL_pairz00_2030));
																											}
																											BgL_arg2100z00_1059 =
																												BGl_expandzd2prognzd2zz__prognz00
																												(BgL_arg2101z00_1060);
																										}
																										BgL_arg2097z00_1056 =
																											BGl_z52withzd2lexicalz80zz__expandz00
																											(BgL_ebdgsz00_1038,
																											BgL_arg2100z00_1059,
																											BgL_ez00_1011, BFALSE);
																									}
																									{	/* Eval/expdlet.scm 144 */
																										obj_t BgL_list2098z00_1057;

																										{	/* Eval/expdlet.scm 144 */
																											obj_t BgL_arg2099z00_1058;

																											BgL_arg2099z00_1058 =
																												MAKE_PAIR
																												(BgL_arg2097z00_1056,
																												BNIL);
																											BgL_list2098z00_1057 =
																												MAKE_PAIR
																												(BgL_arg2096z00_1055,
																												BgL_arg2099z00_1058);
																										}
																										BgL_arg2095z00_1054 =
																											BgL_list2098z00_1057;
																									}
																								}
																								BgL_arg2093z00_1052 =
																									MAKE_PAIR(BgL_arg2095z00_1054,
																									BgL_nbindingsz00_1037);
																							}
																							{	/* Eval/expdlet.scm 151 */
																								obj_t BgL_arg2102z00_1061;

																								{	/* Eval/expdlet.scm 151 */
																									obj_t BgL_pairz00_2036;

																									BgL_pairz00_2036 =
																										BgL_bindingsz00_1036;
																									BgL_arg2102z00_1061 =
																										CAR(CAR(BgL_pairz00_2036));
																								}
																								BgL_arg2094z00_1053 =
																									MAKE_PAIR(BgL_arg2102z00_1061,
																									BgL_ebdgsz00_1038);
																							}
																							{
																								obj_t BgL_ebdgsz00_2742;

																								obj_t BgL_nbindingsz00_2741;

																								obj_t BgL_bindingsz00_2740;

																								BgL_bindingsz00_2740 =
																									BgL_arg2092z00_1051;
																								BgL_nbindingsz00_2741 =
																									BgL_arg2093z00_1052;
																								BgL_ebdgsz00_2742 =
																									BgL_arg2094z00_1053;
																								BgL_ebdgsz00_1038 =
																									BgL_ebdgsz00_2742;
																								BgL_nbindingsz00_1037 =
																									BgL_nbindingsz00_2741;
																								BgL_bindingsz00_1036 =
																									BgL_bindingsz00_2740;
																								goto
																									BgL_zc3anonymousza32078ze3z83_1039;
																							}
																						}
																				}
																			else
																				{	/* Eval/expdlet.scm 135 */
																					obj_t BgL_arg2107z00_1066;

																					obj_t BgL_arg2108z00_1067;

																					obj_t BgL_arg2109z00_1068;

																					BgL_arg2107z00_1066 =
																						CDR(BgL_bindingsz00_1036);
																					{	/* Eval/expdlet.scm 136 */
																						obj_t BgL_arg2110z00_1069;

																						{	/* Eval/expdlet.scm 136 */
																							obj_t BgL_arg2111z00_1070;

																							BgL_arg2111z00_1070 =
																								CAR(BgL_bindingsz00_1036);
																							{	/* Eval/expdlet.scm 136 */
																								obj_t BgL_list2112z00_1071;

																								{	/* Eval/expdlet.scm 136 */
																									obj_t BgL_arg2113z00_1072;

																									BgL_arg2113z00_1072 =
																										MAKE_PAIR(BUNSPEC, BNIL);
																									BgL_list2112z00_1071 =
																										MAKE_PAIR
																										(BgL_arg2111z00_1070,
																										BgL_arg2113z00_1072);
																								}
																								BgL_arg2110z00_1069 =
																									BgL_list2112z00_1071;
																							}
																						}
																						BgL_arg2108z00_1067 =
																							MAKE_PAIR(BgL_arg2110z00_1069,
																							BgL_nbindingsz00_1037);
																					}
																					BgL_arg2109z00_1068 =
																						MAKE_PAIR(CAR(BgL_bindingsz00_1036),
																						BgL_ebdgsz00_1038);
																					{
																						obj_t BgL_ebdgsz00_2752;

																						obj_t BgL_nbindingsz00_2751;

																						obj_t BgL_bindingsz00_2750;

																						BgL_bindingsz00_2750 =
																							BgL_arg2107z00_1066;
																						BgL_nbindingsz00_2751 =
																							BgL_arg2108z00_1067;
																						BgL_ebdgsz00_2752 =
																							BgL_arg2109z00_1068;
																						BgL_ebdgsz00_1038 =
																							BgL_ebdgsz00_2752;
																						BgL_nbindingsz00_1037 =
																							BgL_nbindingsz00_2751;
																						BgL_bindingsz00_1036 =
																							BgL_bindingsz00_2750;
																						goto
																							BgL_zc3anonymousza32078ze3z83_1039;
																					}
																				}
																		}
																}
															}
													}
												else
													{	/* Eval/expdlet.scm 122 */
														BgL_resz00_1012 =
															BGl_errorz00zz__errorz00
															(BGl_string2551z00zz__expander_letz00,
															BGl_string2547z00zz__expander_letz00, BgL_xz00_3);
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 122 */
										BgL_resz00_1012 =
											BGl_errorz00zz__errorz00
											(BGl_string2551z00zz__expander_letz00,
											BGl_string2547z00zz__expander_letz00, BgL_xz00_3);
									}
							}
						else
							{	/* Eval/expdlet.scm 122 */
								BgL_resz00_1012 =
									BGl_errorz00zz__errorz00(BGl_string2551z00zz__expander_letz00,
									BGl_string2547z00zz__expander_letz00, BgL_xz00_3);
							}
					}
					{	/* Eval/expdlet.scm 122 */

						return BGl_evepairifyz00zz__prognz00(BgL_resz00_1012, BgL_xz00_3);
					}
				}
			}
		}
	}



/* _expand-eval-let* */
	obj_t BGl__expandzd2evalzd2letza2za2zz__expander_letz00(obj_t BgL_envz00_2417,
		obj_t BgL_xz00_2418, obj_t BgL_ez00_2419)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 120 */
			return
				BGl_expandzd2evalzd2letza2za2zz__expander_letz00(BgL_xz00_2418,
				BgL_ez00_2419);
		}
	}



/* expand-eval-letrec */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2letrecz00zz__expander_letz00(obj_t
		BgL_xz00_5, obj_t BgL_ez00_6)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 159 */
			{	/* Eval/expdlet.scm 160 */
				obj_t BgL_ez00_1076;

				BgL_ez00_1076 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_6);
				{	/* Eval/expdlet.scm 160 */
					obj_t BgL_resz00_1077;

					{
						obj_t BgL_bindingsz00_1080;

						obj_t BgL_bodyz00_1081;

						if (PAIRP(BgL_xz00_5))
							{	/* Eval/expdlet.scm 161 */
								obj_t BgL_cdrzd21625zd2_1086;

								BgL_cdrzd21625zd2_1086 = CDR(BgL_xz00_5);
								if (PAIRP(BgL_cdrzd21625zd2_1086))
									{	/* Eval/expdlet.scm 161 */
										obj_t BgL_cdrzd21628zd2_1088;

										BgL_cdrzd21628zd2_1088 = CDR(BgL_cdrzd21625zd2_1086);
										if (NULLP(CAR(BgL_cdrzd21625zd2_1086)))
											{	/* Eval/expdlet.scm 161 */
												if (NULLP(BgL_cdrzd21628zd2_1088))
													{	/* Eval/expdlet.scm 161 */
														BgL_resz00_1077 =
															BGl_errorz00zz__errorz00
															(BGl_string2542z00zz__expander_letz00,
															BGl_string2547z00zz__expander_letz00, BgL_xz00_5);
													}
												else
													{	/* Eval/expdlet.scm 161 */
														obj_t BgL_arg2124z00_2053;

														BgL_arg2124z00_2053 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd21628zd2_1088);
														BgL_resz00_1077 =
															PROCEDURE_ENTRY(BgL_ez00_1076) (BgL_ez00_1076,
															BgL_arg2124z00_2053, BgL_ez00_1076, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 161 */
												obj_t BgL_carzd21643zd2_1092;

												obj_t BgL_cdrzd21644zd2_1093;

												BgL_carzd21643zd2_1092 = CAR(BgL_cdrzd21625zd2_1086);
												BgL_cdrzd21644zd2_1093 = CDR(BgL_cdrzd21625zd2_1086);
												if (PAIRP(BgL_carzd21643zd2_1092))
													{	/* Eval/expdlet.scm 161 */
														if (NULLP(BgL_cdrzd21644zd2_1093))
															{	/* Eval/expdlet.scm 161 */
																BgL_resz00_1077 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2542z00zz__expander_letz00,
																	BGl_string2547z00zz__expander_letz00,
																	BgL_xz00_5);
															}
														else
															{	/* Eval/expdlet.scm 161 */
																BgL_bindingsz00_1080 = BgL_carzd21643zd2_1092;
																BgL_bodyz00_1081 = BgL_cdrzd21644zd2_1093;
																{
																	obj_t BgL_bindingsz00_1100;

																	obj_t BgL_nbindingsz00_1101;

																	BgL_bindingsz00_1100 = BgL_bindingsz00_1080;
																	BgL_nbindingsz00_1101 = BNIL;
																BgL_zc3anonymousza32125ze3z83_1102:
																	if (NULLP(BgL_bindingsz00_1100))
																		{	/* Eval/expdlet.scm 196 */
																			obj_t BgL_nbindingsz00_1104;

																			BgL_nbindingsz00_1104 =
																				bgl_reverse_bang(BgL_nbindingsz00_1101);
																			{	/* Eval/expdlet.scm 196 */
																				obj_t BgL_ebodyz00_1105;

																				BgL_ebodyz00_1105 =
																					BGl_z52withzd2lexicalz80zz__expandz00
																					(BGl_bindingszd2ze3listz31zz__evutilsz00
																					(BgL_bindingsz00_1100),
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_1081), BgL_ez00_1076,
																					BFALSE);
																				{	/* Eval/expdlet.scm 197 */

																					{	/* Eval/expdlet.scm 200 */
																						obj_t BgL_arg2127z00_1106;

																						obj_t BgL_arg2130z00_1107;

																						BgL_arg2127z00_1106 =
																							BGl_symbol2541z00zz__expander_letz00;
																						{	/* Eval/expdlet.scm 200 */
																							obj_t BgL_list2131z00_1108;

																							{	/* Eval/expdlet.scm 200 */
																								obj_t BgL_arg2132z00_1109;

																								BgL_arg2132z00_1109 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2131z00_1108 =
																									MAKE_PAIR(BgL_ebodyz00_1105,
																									BgL_arg2132z00_1109);
																							}
																							BgL_arg2130z00_1107 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_nbindingsz00_1104,
																								BgL_list2131z00_1108);
																						}
																						BgL_resz00_1077 =
																							MAKE_PAIR(BgL_arg2127z00_1106,
																							BgL_arg2130z00_1107);
																					}
																				}
																			}
																		}
																	else
																		{	/* Eval/expdlet.scm 201 */
																			bool_t BgL_testz00_2791;

																			{	/* Eval/expdlet.scm 201 */
																				obj_t BgL_auxz00_2792;

																				BgL_auxz00_2792 =
																					CAR(BgL_bindingsz00_1100);
																				BgL_testz00_2791 =
																					PAIRP(BgL_auxz00_2792);
																			}
																			if (BgL_testz00_2791)
																				{	/* Eval/expdlet.scm 205 */
																					bool_t BgL_testz00_2795;

																					{	/* Eval/expdlet.scm 205 */
																						bool_t BgL_testz00_2796;

																						{	/* Eval/expdlet.scm 205 */
																							obj_t BgL_auxz00_2797;

																							{	/* Eval/expdlet.scm 205 */
																								obj_t BgL_pairz00_2063;

																								BgL_pairz00_2063 =
																									BgL_bindingsz00_1100;
																								BgL_auxz00_2797 =
																									CDR(CAR(BgL_pairz00_2063));
																							}
																							BgL_testz00_2796 =
																								PAIRP(BgL_auxz00_2797);
																						}
																						if (BgL_testz00_2796)
																							{	/* Eval/expdlet.scm 206 */
																								bool_t BgL_testz00_2801;

																								{	/* Eval/expdlet.scm 206 */
																									obj_t BgL_auxz00_2802;

																									{	/* Eval/expdlet.scm 206 */
																										obj_t BgL_pairz00_2068;

																										BgL_pairz00_2068 =
																											BgL_bindingsz00_1100;
																										BgL_auxz00_2802 =
																											CDR(CDR(CAR
																												(BgL_pairz00_2068)));
																									}
																									BgL_testz00_2801 =
																										NULLP(BgL_auxz00_2802);
																								}
																								if (BgL_testz00_2801)
																									{	/* Eval/expdlet.scm 206 */
																										BgL_testz00_2795 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Eval/expdlet.scm 206 */
																										BgL_testz00_2795 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Eval/expdlet.scm 205 */
																								BgL_testz00_2795 = ((bool_t) 1);
																							}
																					}
																					if (BgL_testz00_2795)
																						{	/* Eval/expdlet.scm 205 */
																							BgL_resz00_1077 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2542z00zz__expander_letz00,
																								BGl_string2548z00zz__expander_letz00,
																								BgL_xz00_5);
																						}
																					else
																						{	/* Eval/expdlet.scm 209 */
																							obj_t BgL_arg2137z00_1114;

																							obj_t BgL_arg2138z00_1115;

																							BgL_arg2137z00_1114 =
																								CDR(BgL_bindingsz00_1100);
																							{	/* Eval/expdlet.scm 210 */
																								obj_t BgL_arg2139z00_1116;

																								{	/* Eval/expdlet.scm 210 */
																									obj_t BgL_arg2140z00_1117;

																									obj_t BgL_arg2141z00_1118;

																									{	/* Eval/expdlet.scm 210 */
																										obj_t BgL_arg2145z00_1121;

																										{	/* Eval/expdlet.scm 210 */
																											obj_t BgL_pairz00_2076;

																											BgL_pairz00_2076 =
																												BgL_bindingsz00_1100;
																											BgL_arg2145z00_1121 =
																												CAR(CAR
																												(BgL_pairz00_2076));
																										}
																										BgL_arg2140z00_1117 =
																											BGl_untypezd2identzd2zz__evcompilez00
																											(BgL_arg2145z00_1121);
																									}
																									{	/* Eval/expdlet.scm 211 */
																										obj_t BgL_arg2146z00_1122;

																										{	/* Eval/expdlet.scm 211 */
																											obj_t BgL_arg2147z00_1123;

																											{	/* Eval/expdlet.scm 211 */
																												obj_t BgL_pairz00_2080;

																												BgL_pairz00_2080 =
																													BgL_bindingsz00_1100;
																												BgL_arg2147z00_1123 =
																													CDR(CAR
																													(BgL_pairz00_2080));
																											}
																											BgL_arg2146z00_1122 =
																												BGl_expandzd2prognzd2zz__prognz00
																												(BgL_arg2147z00_1123);
																										}
																										BgL_arg2141z00_1118 =
																											PROCEDURE_ENTRY
																											(BgL_ez00_1076)
																											(BgL_ez00_1076,
																											BgL_arg2146z00_1122,
																											BgL_ez00_1076, BEOA);
																									}
																									{	/* Eval/expdlet.scm 210 */
																										obj_t BgL_list2142z00_1119;

																										{	/* Eval/expdlet.scm 210 */
																											obj_t BgL_arg2144z00_1120;

																											BgL_arg2144z00_1120 =
																												MAKE_PAIR
																												(BgL_arg2141z00_1118,
																												BNIL);
																											BgL_list2142z00_1119 =
																												MAKE_PAIR
																												(BgL_arg2140z00_1117,
																												BgL_arg2144z00_1120);
																										}
																										BgL_arg2139z00_1116 =
																											BgL_list2142z00_1119;
																									}
																								}
																								BgL_arg2138z00_1115 =
																									MAKE_PAIR(BgL_arg2139z00_1116,
																									BgL_nbindingsz00_1101);
																							}
																							{
																								obj_t BgL_nbindingsz00_2821;

																								obj_t BgL_bindingsz00_2820;

																								BgL_bindingsz00_2820 =
																									BgL_arg2137z00_1114;
																								BgL_nbindingsz00_2821 =
																									BgL_arg2138z00_1115;
																								BgL_nbindingsz00_1101 =
																									BgL_nbindingsz00_2821;
																								BgL_bindingsz00_1100 =
																									BgL_bindingsz00_2820;
																								goto
																									BgL_zc3anonymousza32125ze3z83_1102;
																							}
																						}
																				}
																			else
																				{	/* Eval/expdlet.scm 202 */
																					obj_t BgL_arg2152z00_1128;

																					obj_t BgL_arg2153z00_1129;

																					BgL_arg2152z00_1128 =
																						CDR(BgL_bindingsz00_1100);
																					{	/* Eval/expdlet.scm 203 */
																						obj_t BgL_arg2154z00_1130;

																						{	/* Eval/expdlet.scm 203 */
																							obj_t BgL_arg2155z00_1131;

																							BgL_arg2155z00_1131 =
																								CAR(BgL_bindingsz00_1100);
																							{	/* Eval/expdlet.scm 203 */
																								obj_t BgL_list2156z00_1132;

																								{	/* Eval/expdlet.scm 203 */
																									obj_t BgL_arg2157z00_1133;

																									BgL_arg2157z00_1133 =
																										MAKE_PAIR(BUNSPEC, BNIL);
																									BgL_list2156z00_1132 =
																										MAKE_PAIR
																										(BgL_arg2155z00_1131,
																										BgL_arg2157z00_1133);
																								}
																								BgL_arg2154z00_1130 =
																									BgL_list2156z00_1132;
																							}
																						}
																						BgL_arg2153z00_1129 =
																							MAKE_PAIR(BgL_arg2154z00_1130,
																							BgL_nbindingsz00_1101);
																					}
																					{
																						obj_t BgL_nbindingsz00_2828;

																						obj_t BgL_bindingsz00_2827;

																						BgL_bindingsz00_2827 =
																							BgL_arg2152z00_1128;
																						BgL_nbindingsz00_2828 =
																							BgL_arg2153z00_1129;
																						BgL_nbindingsz00_1101 =
																							BgL_nbindingsz00_2828;
																						BgL_bindingsz00_1100 =
																							BgL_bindingsz00_2827;
																						goto
																							BgL_zc3anonymousza32125ze3z83_1102;
																					}
																				}
																		}
																}
															}
													}
												else
													{	/* Eval/expdlet.scm 161 */
														BgL_resz00_1077 =
															BGl_errorz00zz__errorz00
															(BGl_string2542z00zz__expander_letz00,
															BGl_string2547z00zz__expander_letz00, BgL_xz00_5);
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 161 */
										BgL_resz00_1077 =
											BGl_errorz00zz__errorz00
											(BGl_string2542z00zz__expander_letz00,
											BGl_string2547z00zz__expander_letz00, BgL_xz00_5);
									}
							}
						else
							{	/* Eval/expdlet.scm 161 */
								BgL_resz00_1077 =
									BGl_errorz00zz__errorz00(BGl_string2542z00zz__expander_letz00,
									BGl_string2547z00zz__expander_letz00, BgL_xz00_5);
							}
					}
					{	/* Eval/expdlet.scm 161 */

						return BGl_evepairifyz00zz__prognz00(BgL_resz00_1077, BgL_xz00_5);
					}
				}
			}
		}
	}



/* _expand-eval-letrec */
	obj_t BGl__expandzd2evalzd2letrecz00zz__expander_letz00(obj_t BgL_envz00_2420,
		obj_t BgL_xz00_2421, obj_t BgL_ez00_2422)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 159 */
			return
				BGl_expandzd2evalzd2letrecz00zz__expander_letz00(BgL_xz00_2421,
				BgL_ez00_2422);
		}
	}



/* expand-eval-letrec* */
	BGL_EXPORTED_DEF obj_t
		BGl_expandzd2evalzd2letrecza2za2zz__expander_letz00(obj_t BgL_xz00_7,
		obj_t BgL_ez00_8)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 220 */
			{	/* Eval/expdlet.scm 221 */
				obj_t BgL_ez00_1136;

				BgL_ez00_1136 =
					BGl_evalzd2beginzd2expanderz00zz__expander_definez00(BgL_ez00_8);
				{	/* Eval/expdlet.scm 221 */
					obj_t BgL_resz00_1137;

					{
						obj_t BgL_bindingsz00_1140;

						obj_t BgL_bodyz00_1141;

						if (PAIRP(BgL_xz00_7))
							{	/* Eval/expdlet.scm 222 */
								obj_t BgL_cdrzd21666zd2_1146;

								BgL_cdrzd21666zd2_1146 = CDR(BgL_xz00_7);
								if (PAIRP(BgL_cdrzd21666zd2_1146))
									{	/* Eval/expdlet.scm 222 */
										obj_t BgL_cdrzd21669zd2_1148;

										BgL_cdrzd21669zd2_1148 = CDR(BgL_cdrzd21666zd2_1146);
										if (NULLP(CAR(BgL_cdrzd21666zd2_1146)))
											{	/* Eval/expdlet.scm 222 */
												if (NULLP(BgL_cdrzd21669zd2_1148))
													{	/* Eval/expdlet.scm 222 */
														BgL_resz00_1137 =
															BGl_errorz00zz__errorz00
															(BGl_string2553z00zz__expander_letz00,
															BGl_string2547z00zz__expander_letz00, BgL_xz00_7);
													}
												else
													{	/* Eval/expdlet.scm 222 */
														obj_t BgL_arg2166z00_2098;

														BgL_arg2166z00_2098 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_cdrzd21669zd2_1148);
														BgL_resz00_1137 =
															PROCEDURE_ENTRY(BgL_ez00_1136) (BgL_ez00_1136,
															BgL_arg2166z00_2098, BgL_ez00_1136, BEOA);
													}
											}
										else
											{	/* Eval/expdlet.scm 222 */
												obj_t BgL_carzd21684zd2_1152;

												obj_t BgL_cdrzd21685zd2_1153;

												BgL_carzd21684zd2_1152 = CAR(BgL_cdrzd21666zd2_1146);
												BgL_cdrzd21685zd2_1153 = CDR(BgL_cdrzd21666zd2_1146);
												if (PAIRP(BgL_carzd21684zd2_1152))
													{	/* Eval/expdlet.scm 222 */
														if (NULLP(BgL_cdrzd21685zd2_1153))
															{	/* Eval/expdlet.scm 222 */
																BgL_resz00_1137 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2553z00zz__expander_letz00,
																	BGl_string2547z00zz__expander_letz00,
																	BgL_xz00_7);
															}
														else
															{	/* Eval/expdlet.scm 222 */
																BgL_bindingsz00_1140 = BgL_carzd21684zd2_1152;
																BgL_bodyz00_1141 = BgL_cdrzd21685zd2_1153;
																{
																	obj_t BgL_l1874z00_1159;

																	BgL_l1874z00_1159 = BgL_bindingsz00_1140;
																BgL_zc3anonymousza32167ze3z83_1160:
																	if (PAIRP(BgL_l1874z00_1159))
																		{	/* Eval/expdlet.scm 227 */
																			{	/* Eval/expdlet.scm 228 */
																				obj_t BgL_bz00_1162;

																				BgL_bz00_1162 = CAR(BgL_l1874z00_1159);
																				{	/* Eval/expdlet.scm 228 */
																					bool_t BgL_testz00_2860;

																					if (PAIRP(BgL_bz00_1162))
																						{	/* Eval/expdlet.scm 229 */
																							bool_t BgL_testz00_2863;

																							{	/* Eval/expdlet.scm 229 */
																								obj_t BgL_auxz00_2864;

																								BgL_auxz00_2864 =
																									CAR(BgL_bz00_1162);
																								BgL_testz00_2863 =
																									SYMBOLP(BgL_auxz00_2864);
																							}
																							if (BgL_testz00_2863)
																								{	/* Eval/expdlet.scm 230 */
																									obj_t BgL_auxz00_2867;

																									BgL_auxz00_2867 =
																										CDR(BgL_bz00_1162);
																									BgL_testz00_2860 =
																										PAIRP(BgL_auxz00_2867);
																								}
																							else
																								{	/* Eval/expdlet.scm 229 */
																									BgL_testz00_2860 =
																										((bool_t) 0);
																								}
																						}
																					else
																						{	/* Eval/expdlet.scm 228 */
																							BgL_testz00_2860 = ((bool_t) 0);
																						}
																					if (BgL_testz00_2860)
																						{	/* Eval/expdlet.scm 228 */
																							BFALSE;
																						}
																					else
																						{	/* Eval/expdlet.scm 228 */
																							BGl_errorz00zz__errorz00
																								(BGl_string2553z00zz__expander_letz00,
																								BGl_string2547z00zz__expander_letz00,
																								BgL_xz00_7);
																						}
																				}
																			}
																			{
																				obj_t BgL_l1874z00_2871;

																				BgL_l1874z00_2871 =
																					CDR(BgL_l1874z00_1159);
																				BgL_l1874z00_1159 = BgL_l1874z00_2871;
																				goto BgL_zc3anonymousza32167ze3z83_1160;
																			}
																		}
																	else
																		{	/* Eval/expdlet.scm 227 */
																			((bool_t) 1);
																		}
																}
																{	/* Eval/expdlet.scm 233 */
																	bool_t BgL_testz00_2873;

																	{
																		obj_t BgL_l1876z00_1246;

																		BgL_l1876z00_1246 = BgL_bindingsz00_1140;
																	BgL_zc3anonymousza32236ze3z83_1247:
																		if (NULLP(BgL_l1876z00_1246))
																			{	/* Eval/expdlet.scm 233 */
																				BgL_testz00_2873 = ((bool_t) 1);
																			}
																		else
																			{	/* Eval/expdlet.scm 233 */
																				bool_t BgL_testz00_2876;

																				{	/* Eval/expdlet.scm 234 */
																					obj_t BgL_bz00_1251;

																					BgL_bz00_1251 =
																						CAR(BgL_l1876z00_1246);
																					{	/* Eval/expdlet.scm 234 */
																						bool_t BgL_testz00_2878;

																						{	/* Eval/expdlet.scm 234 */
																							obj_t BgL_auxz00_2879;

																							{	/* Eval/expdlet.scm 234 */
																								obj_t BgL_pairz00_2115;

																								BgL_pairz00_2115 =
																									BgL_bz00_1251;
																								BgL_auxz00_2879 =
																									CAR(CDR(BgL_pairz00_2115));
																							}
																							BgL_testz00_2878 =
																								PAIRP(BgL_auxz00_2879);
																						}
																						if (BgL_testz00_2878)
																							{	/* Eval/expdlet.scm 235 */
																								obj_t BgL_auxz00_2883;

																								{	/* Eval/expdlet.scm 235 */
																									obj_t BgL_pairz00_2124;

																									{	/* Eval/expdlet.scm 235 */
																										obj_t BgL_pairz00_2120;

																										BgL_pairz00_2120 =
																											BgL_bz00_1251;
																										BgL_pairz00_2124 =
																											CAR(CDR
																											(BgL_pairz00_2120));
																									}
																									BgL_auxz00_2883 =
																										CAR(BgL_pairz00_2124);
																								}
																								BgL_testz00_2876 =
																									(BgL_auxz00_2883 ==
																									BGl_symbol2543z00zz__expander_letz00);
																							}
																						else
																							{	/* Eval/expdlet.scm 234 */
																								BgL_testz00_2876 = ((bool_t) 0);
																							}
																					}
																				}
																				if (BgL_testz00_2876)
																					{
																						obj_t BgL_l1876z00_2888;

																						BgL_l1876z00_2888 =
																							CDR(BgL_l1876z00_1246);
																						BgL_l1876z00_1246 =
																							BgL_l1876z00_2888;
																						goto
																							BgL_zc3anonymousza32236ze3z83_1247;
																					}
																				else
																					{	/* Eval/expdlet.scm 233 */
																						BgL_testz00_2873 = ((bool_t) 0);
																					}
																			}
																	}
																	if (BgL_testz00_2873)
																		{	/* Eval/expdlet.scm 239 */
																			obj_t BgL_arg2176z00_1171;

																			{	/* Eval/expdlet.scm 239 */
																				obj_t BgL_arg2177z00_1172;

																				obj_t BgL_arg2178z00_1173;

																				BgL_arg2177z00_1172 =
																					BGl_symbol2541z00zz__expander_letz00;
																				{	/* Eval/expdlet.scm 239 */
																					obj_t BgL_arg2179z00_1174;

																					obj_t BgL_arg2180z00_1175;

																					{	/* Eval/expdlet.scm 239 */
																						obj_t BgL_head1880z00_1179;

																						BgL_head1880z00_1179 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l1878z00_1181;

																							obj_t BgL_tail1881z00_1182;

																							BgL_l1878z00_1181 =
																								BgL_bindingsz00_1140;
																							BgL_tail1881z00_1182 =
																								BgL_head1880z00_1179;
																						BgL_zc3anonymousza32183ze3z83_1183:
																							if (NULLP(BgL_l1878z00_1181))
																								{	/* Eval/expdlet.scm 239 */
																									BgL_arg2179z00_1174 =
																										CDR(BgL_head1880z00_1179);
																								}
																							else
																								{	/* Eval/expdlet.scm 239 */
																									obj_t BgL_newtail1882z00_1185;

																									{	/* Eval/expdlet.scm 239 */
																										obj_t BgL_arg2186z00_1187;

																										{	/* Eval/expdlet.scm 239 */
																											obj_t BgL_bz00_1189;

																											BgL_bz00_1189 =
																												CAR(BgL_l1878z00_1181);
																											{	/* Eval/expdlet.scm 240 */
																												obj_t
																													BgL_arg2188z00_1190;
																												obj_t
																													BgL_arg2189z00_1191;
																												BgL_arg2188z00_1190 =
																													CAR(BgL_bz00_1189);
																												{	/* Eval/expdlet.scm 241 */
																													obj_t
																														BgL_arg2192z00_1194;
																													BgL_arg2192z00_1194 =
																														BGl_expandzd2prognzd2zz__prognz00
																														(CDR
																														(BgL_bz00_1189));
																													BgL_arg2189z00_1191 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_1136)
																														(BgL_ez00_1136,
																														BgL_arg2192z00_1194,
																														BgL_ez00_1136,
																														BEOA);
																												}
																												{	/* Eval/expdlet.scm 240 */
																													obj_t
																														BgL_list2190z00_1192;
																													{	/* Eval/expdlet.scm 240 */
																														obj_t
																															BgL_arg2191z00_1193;
																														BgL_arg2191z00_1193
																															=
																															MAKE_PAIR
																															(BgL_arg2189z00_1191,
																															BNIL);
																														BgL_list2190z00_1192
																															=
																															MAKE_PAIR
																															(BgL_arg2188z00_1190,
																															BgL_arg2191z00_1193);
																													}
																													BgL_arg2186z00_1187 =
																														BgL_list2190z00_1192;
																												}
																											}
																										}
																										BgL_newtail1882z00_1185 =
																											MAKE_PAIR
																											(BgL_arg2186z00_1187,
																											BNIL);
																									}
																									SET_CDR(BgL_tail1881z00_1182,
																										BgL_newtail1882z00_1185);
																									{
																										obj_t BgL_tail1881z00_2906;

																										obj_t BgL_l1878z00_2904;

																										BgL_l1878z00_2904 =
																											CDR(BgL_l1878z00_1181);
																										BgL_tail1881z00_2906 =
																											BgL_newtail1882z00_1185;
																										BgL_tail1881z00_1182 =
																											BgL_tail1881z00_2906;
																										BgL_l1878z00_1181 =
																											BgL_l1878z00_2904;
																										goto
																											BgL_zc3anonymousza32183ze3z83_1183;
																									}
																								}
																						}
																					}
																					BgL_arg2180z00_1175 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_bodyz00_1141, BNIL);
																					{	/* Eval/expdlet.scm 239 */
																						obj_t BgL_list2181z00_1176;

																						BgL_list2181z00_1176 =
																							MAKE_PAIR(BgL_arg2180z00_1175,
																							BNIL);
																						BgL_arg2178z00_1173 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2179z00_1174,
																							BgL_list2181z00_1176);
																					}
																				}
																				BgL_arg2176z00_1171 =
																					MAKE_PAIR(BgL_arg2177z00_1172,
																					BgL_arg2178z00_1173);
																			}
																			BgL_resz00_1137 =
																				PROCEDURE_ENTRY(BgL_ez00_1136)
																				(BgL_ez00_1136, BgL_arg2176z00_1171,
																				BgL_ez00_1136, BEOA);
																		}
																	else
																		{	/* Eval/expdlet.scm 244 */
																			obj_t BgL_arg2194z00_1197;

																			{	/* Eval/expdlet.scm 244 */
																				obj_t BgL_arg2195z00_1198;

																				obj_t BgL_arg2196z00_1199;

																				BgL_arg2195z00_1198 =
																					BGl_symbol2545z00zz__expander_letz00;
																				{	/* Eval/expdlet.scm 244 */
																					obj_t BgL_arg2197z00_1200;

																					obj_t BgL_arg2198z00_1201;

																					{	/* Eval/expdlet.scm 244 */
																						obj_t BgL_head1885z00_1205;

																						BgL_head1885z00_1205 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l1883z00_1207;

																							obj_t BgL_tail1886z00_1208;

																							BgL_l1883z00_1207 =
																								BgL_bindingsz00_1140;
																							BgL_tail1886z00_1208 =
																								BgL_head1885z00_1205;
																						BgL_zc3anonymousza32201ze3z83_1209:
																							if (NULLP(BgL_l1883z00_1207))
																								{	/* Eval/expdlet.scm 244 */
																									BgL_arg2197z00_1200 =
																										CDR(BgL_head1885z00_1205);
																								}
																							else
																								{	/* Eval/expdlet.scm 244 */
																									obj_t BgL_newtail1887z00_1211;

																									{	/* Eval/expdlet.scm 244 */
																										obj_t BgL_arg2204z00_1213;

																										{	/* Eval/expdlet.scm 244 */
																											obj_t BgL_bz00_1215;

																											BgL_bz00_1215 =
																												CAR(BgL_l1883z00_1207);
																											{	/* Eval/expdlet.scm 245 */
																												obj_t
																													BgL_arg2206z00_1216;
																												BgL_arg2206z00_1216 =
																													CAR(BgL_bz00_1215);
																												{	/* Eval/expdlet.scm 245 */
																													obj_t
																														BgL_list2207z00_1217;
																													{	/* Eval/expdlet.scm 245 */
																														obj_t
																															BgL_arg2208z00_1218;
																														BgL_arg2208z00_1218
																															=
																															MAKE_PAIR(BUNSPEC,
																															BNIL);
																														BgL_list2207z00_1217
																															=
																															MAKE_PAIR
																															(BgL_arg2206z00_1216,
																															BgL_arg2208z00_1218);
																													}
																													BgL_arg2204z00_1213 =
																														BgL_list2207z00_1217;
																												}
																											}
																										}
																										BgL_newtail1887z00_1211 =
																											MAKE_PAIR
																											(BgL_arg2204z00_1213,
																											BNIL);
																									}
																									SET_CDR(BgL_tail1886z00_1208,
																										BgL_newtail1887z00_1211);
																									{
																										obj_t BgL_tail1886z00_2925;

																										obj_t BgL_l1883z00_2923;

																										BgL_l1883z00_2923 =
																											CDR(BgL_l1883z00_1207);
																										BgL_tail1886z00_2925 =
																											BgL_newtail1887z00_1211;
																										BgL_tail1886z00_1208 =
																											BgL_tail1886z00_2925;
																										BgL_l1883z00_1207 =
																											BgL_l1883z00_2923;
																										goto
																											BgL_zc3anonymousza32201ze3z83_1209;
																									}
																								}
																						}
																					}
																					{	/* Eval/expdlet.scm 247 */
																						obj_t BgL_arg2209z00_1220;

																						obj_t BgL_arg2210z00_1221;

																						{	/* Eval/expdlet.scm 247 */
																							obj_t BgL_head1890z00_1224;

																							BgL_head1890z00_1224 =
																								MAKE_PAIR(BNIL, BNIL);
																							{
																								obj_t BgL_l1888z00_1226;

																								obj_t BgL_tail1891z00_1227;

																								BgL_l1888z00_1226 =
																									BgL_bindingsz00_1140;
																								BgL_tail1891z00_1227 =
																									BgL_head1890z00_1224;
																							BgL_zc3anonymousza32212ze3z83_1228:
																								if (NULLP
																									(BgL_l1888z00_1226))
																									{	/* Eval/expdlet.scm 247 */
																										BgL_arg2209z00_1220 =
																											CDR(BgL_head1890z00_1224);
																									}
																								else
																									{	/* Eval/expdlet.scm 247 */
																										obj_t
																											BgL_newtail1892z00_1230;
																										{	/* Eval/expdlet.scm 247 */
																											obj_t BgL_arg2216z00_1232;

																											{	/* Eval/expdlet.scm 247 */
																												obj_t BgL_bz00_1234;

																												BgL_bz00_1234 =
																													CAR
																													(BgL_l1888z00_1226);
																												{	/* Eval/expdlet.scm 248 */
																													obj_t
																														BgL_arg2222z00_1235;
																													obj_t
																														BgL_arg2223z00_1236;
																													BgL_arg2222z00_1235 =
																														BGl_symbol2554z00zz__expander_letz00;
																													{	/* Eval/expdlet.scm 248 */
																														obj_t
																															BgL_arg2224z00_1237;
																														obj_t
																															BgL_arg2226z00_1238;
																														BgL_arg2224z00_1237
																															=
																															CAR
																															(BgL_bz00_1234);
																														{	/* Eval/expdlet.scm 249 */
																															obj_t
																																BgL_arg2234z00_1242;
																															BgL_arg2234z00_1242
																																=
																																BGl_expandzd2prognzd2zz__prognz00
																																(CDR
																																(BgL_bz00_1234));
																															BgL_arg2226z00_1238
																																=
																																PROCEDURE_ENTRY
																																(BgL_ez00_1136)
																																(BgL_ez00_1136,
																																BgL_arg2234z00_1242,
																																BgL_ez00_1136,
																																BEOA);
																														}
																														{	/* Eval/expdlet.scm 248 */
																															obj_t
																																BgL_list2228z00_1240;
																															{	/* Eval/expdlet.scm 248 */
																																obj_t
																																	BgL_arg2233z00_1241;
																																BgL_arg2233z00_1241
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list2228z00_1240
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2226z00_1238,
																																	BgL_arg2233z00_1241);
																															}
																															BgL_arg2223z00_1236
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg2224z00_1237,
																																BgL_list2228z00_1240);
																														}
																													}
																													BgL_arg2216z00_1232 =
																														MAKE_PAIR
																														(BgL_arg2222z00_1235,
																														BgL_arg2223z00_1236);
																												}
																											}
																											BgL_newtail1892z00_1230 =
																												MAKE_PAIR
																												(BgL_arg2216z00_1232,
																												BNIL);
																										}
																										SET_CDR
																											(BgL_tail1891z00_1227,
																											BgL_newtail1892z00_1230);
																										{
																											obj_t
																												BgL_tail1891z00_2944;
																											obj_t BgL_l1888z00_2942;

																											BgL_l1888z00_2942 =
																												CDR(BgL_l1888z00_1226);
																											BgL_tail1891z00_2944 =
																												BgL_newtail1892z00_1230;
																											BgL_tail1891z00_1227 =
																												BgL_tail1891z00_2944;
																											BgL_l1888z00_1226 =
																												BgL_l1888z00_2942;
																											goto
																												BgL_zc3anonymousza32212ze3z83_1228;
																										}
																									}
																							}
																						}
																						BgL_arg2210z00_1221 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_bodyz00_1141, BNIL);
																						BgL_arg2198z00_1201 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2209z00_1220,
																							BgL_arg2210z00_1221);
																					}
																					{	/* Eval/expdlet.scm 244 */
																						obj_t BgL_list2199z00_1202;

																						BgL_list2199z00_1202 =
																							MAKE_PAIR(BgL_arg2198z00_1201,
																							BNIL);
																						BgL_arg2196z00_1199 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2197z00_1200,
																							BgL_list2199z00_1202);
																					}
																				}
																				BgL_arg2194z00_1197 =
																					MAKE_PAIR(BgL_arg2195z00_1198,
																					BgL_arg2196z00_1199);
																			}
																			BgL_resz00_1137 =
																				PROCEDURE_ENTRY(BgL_ez00_1136)
																				(BgL_ez00_1136, BgL_arg2194z00_1197,
																				BgL_ez00_1136, BEOA);
																		}
																}
															}
													}
												else
													{	/* Eval/expdlet.scm 222 */
														BgL_resz00_1137 =
															BGl_errorz00zz__errorz00
															(BGl_string2553z00zz__expander_letz00,
															BGl_string2547z00zz__expander_letz00, BgL_xz00_7);
													}
											}
									}
								else
									{	/* Eval/expdlet.scm 222 */
										BgL_resz00_1137 =
											BGl_errorz00zz__errorz00
											(BGl_string2553z00zz__expander_letz00,
											BGl_string2547z00zz__expander_letz00, BgL_xz00_7);
									}
							}
						else
							{	/* Eval/expdlet.scm 222 */
								BgL_resz00_1137 =
									BGl_errorz00zz__errorz00(BGl_string2553z00zz__expander_letz00,
									BGl_string2547z00zz__expander_letz00, BgL_xz00_7);
							}
					}
					{	/* Eval/expdlet.scm 222 */

						return BGl_evepairifyz00zz__prognz00(BgL_resz00_1137, BgL_xz00_7);
					}
				}
			}
		}
	}



/* _expand-eval-letrec* */
	obj_t BGl__expandzd2evalzd2letrecza2za2zz__expander_letz00(obj_t
		BgL_envz00_2423, obj_t BgL_xz00_2424, obj_t BgL_ez00_2425)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 220 */
			return
				BGl_expandzd2evalzd2letrecza2za2zz__expander_letz00(BgL_xz00_2424,
				BgL_ez00_2425);
		}
	}



/* expand-eval-labels */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2evalzd2labelsz00zz__expander_letz00(obj_t
		BgL_xz00_9, obj_t BgL_ez00_10)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 260 */
			{	/* Eval/expdlet.scm 261 */
				obj_t BgL_resz00_1258;

				{
					obj_t BgL_bodyz00_1259;

					obj_t BgL_bindingsz00_1261;

					obj_t BgL_bodyz00_1262;

					if (PAIRP(BgL_xz00_9))
						{	/* Eval/expdlet.scm 261 */
							obj_t BgL_cdrzd21707zd2_1267;

							BgL_cdrzd21707zd2_1267 = CDR(BgL_xz00_9);
							if (PAIRP(BgL_cdrzd21707zd2_1267))
								{	/* Eval/expdlet.scm 261 */
									obj_t BgL_cdrzd21710zd2_1269;

									BgL_cdrzd21710zd2_1269 = CDR(BgL_cdrzd21707zd2_1267);
									if (NULLP(CAR(BgL_cdrzd21707zd2_1267)))
										{	/* Eval/expdlet.scm 261 */
											if (NULLP(BgL_cdrzd21710zd2_1269))
												{	/* Eval/expdlet.scm 261 */
													BgL_resz00_1258 =
														BGl_errorz00zz__errorz00
														(BGl_string2556z00zz__expander_letz00,
														BGl_string2547z00zz__expander_letz00, BgL_xz00_9);
												}
											else
												{	/* Eval/expdlet.scm 261 */
													BgL_bodyz00_1259 = BgL_cdrzd21710zd2_1269;
													{	/* Eval/expdlet.scm 263 */
														obj_t BgL_arg2252z00_1277;

														{	/* Eval/expdlet.scm 263 */
															obj_t BgL_arg2253z00_1278;

															{	/* Eval/expdlet.scm 263 */
																obj_t BgL_arg2256z00_1280;

																obj_t BgL_arg2257z00_1281;

																BgL_arg2256z00_1280 =
																	BGl_symbol2543z00zz__expander_letz00;
																{	/* Eval/expdlet.scm 263 */
																	obj_t BgL_arg2260z00_1283;

																	BgL_arg2260z00_1283 =
																		BGl_expandzd2prognzd2zz__prognz00
																		(BgL_bodyz00_1259);
																	{	/* Eval/expdlet.scm 263 */
																		obj_t BgL_list2263z00_1285;

																		{	/* Eval/expdlet.scm 263 */
																			obj_t BgL_arg2264z00_1286;

																			BgL_arg2264z00_1286 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2263z00_1285 =
																				MAKE_PAIR(BgL_arg2260z00_1283,
																				BgL_arg2264z00_1286);
																		}
																		BgL_arg2257z00_1281 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BNIL, BgL_list2263z00_1285);
																	}
																}
																BgL_arg2253z00_1278 =
																	MAKE_PAIR(BgL_arg2256z00_1280,
																	BgL_arg2257z00_1281);
															}
															BgL_arg2252z00_1277 =
																MAKE_PAIR(BgL_arg2253z00_1278, BNIL);
														}
														BgL_resz00_1258 =
															PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
															BgL_arg2252z00_1277, BgL_ez00_10, BEOA);
													}
												}
										}
									else
										{	/* Eval/expdlet.scm 261 */
											obj_t BgL_cdrzd21726zd2_1273;

											BgL_cdrzd21726zd2_1273 = CDR(BgL_cdrzd21707zd2_1267);
											if (NULLP(BgL_cdrzd21726zd2_1273))
												{	/* Eval/expdlet.scm 261 */
													BgL_resz00_1258 =
														BGl_errorz00zz__errorz00
														(BGl_string2556z00zz__expander_letz00,
														BGl_string2547z00zz__expander_letz00, BgL_xz00_9);
												}
											else
												{	/* Eval/expdlet.scm 261 */
													BgL_bindingsz00_1261 = CAR(BgL_cdrzd21707zd2_1267);
													BgL_bodyz00_1262 = BgL_cdrzd21726zd2_1273;
													{	/* Eval/expdlet.scm 265 */
														obj_t BgL_newz00_1287;

														BgL_newz00_1287 =
															BGl_loopz00zz__expander_letz00(BgL_xz00_9,
															BgL_bindingsz00_1261);
														{	/* Eval/expdlet.scm 280 */
															obj_t BgL_arg2265z00_1288;

															{	/* Eval/expdlet.scm 280 */
																obj_t BgL_arg2266z00_1289;

																obj_t BgL_arg2267z00_1290;

																BgL_arg2266z00_1289 =
																	BGl_symbol2541z00zz__expander_letz00;
																{	/* Eval/expdlet.scm 280 */
																	obj_t BgL_arg2268z00_1291;

																	BgL_arg2268z00_1291 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_bodyz00_1262, BNIL);
																	{	/* Eval/expdlet.scm 280 */
																		obj_t BgL_list2269z00_1292;

																		BgL_list2269z00_1292 =
																			MAKE_PAIR(BgL_arg2268z00_1291, BNIL);
																		BgL_arg2267z00_1290 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_newz00_1287, BgL_list2269z00_1292);
																	}
																}
																BgL_arg2265z00_1288 =
																	MAKE_PAIR(BgL_arg2266z00_1289,
																	BgL_arg2267z00_1290);
															}
															BgL_resz00_1258 =
																PROCEDURE_ENTRY(BgL_ez00_10) (BgL_ez00_10,
																BgL_arg2265z00_1288, BgL_ez00_10, BEOA);
														}
													}
												}
										}
								}
							else
								{	/* Eval/expdlet.scm 261 */
									BgL_resz00_1258 =
										BGl_errorz00zz__errorz00
										(BGl_string2556z00zz__expander_letz00,
										BGl_string2547z00zz__expander_letz00, BgL_xz00_9);
								}
						}
					else
						{	/* Eval/expdlet.scm 261 */
							BgL_resz00_1258 =
								BGl_errorz00zz__errorz00(BGl_string2556z00zz__expander_letz00,
								BGl_string2547z00zz__expander_letz00, BgL_xz00_9);
						}
				}
				return BGl_evepairifyz00zz__prognz00(BgL_resz00_1258, BgL_xz00_9);
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zz__expander_letz00(obj_t BgL_xz00_2429,
		obj_t BgL_bindingsz00_1294)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 265 */
			if (NULLP(BgL_bindingsz00_1294))
				{	/* Eval/expdlet.scm 267 */
					return BNIL;
				}
			else
				{	/* Eval/expdlet.scm 267 */
					if (PAIRP(BgL_bindingsz00_1294))
						{	/* Eval/expdlet.scm 272 */
							obj_t BgL_ezd21740zd2_1303;

							BgL_ezd21740zd2_1303 = CAR(BgL_bindingsz00_1294);
							if (PAIRP(BgL_ezd21740zd2_1303))
								{	/* Eval/expdlet.scm 272 */
									obj_t BgL_cdrzd21748zd2_1305;

									BgL_cdrzd21748zd2_1305 = CDR(BgL_ezd21740zd2_1303);
									if (PAIRP(BgL_cdrzd21748zd2_1305))
										{	/* Eval/expdlet.scm 272 */
											obj_t BgL_arg2275z00_1307;

											obj_t BgL_arg2277z00_1308;

											obj_t BgL_arg2278z00_1309;

											BgL_arg2275z00_1307 = CAR(BgL_ezd21740zd2_1303);
											BgL_arg2277z00_1308 = CAR(BgL_cdrzd21748zd2_1305);
											BgL_arg2278z00_1309 = CDR(BgL_cdrzd21748zd2_1305);
											{	/* Eval/expdlet.scm 272 */
												obj_t BgL_arg2279z00_2191;

												obj_t BgL_arg2280z00_2192;

												{	/* Eval/expdlet.scm 272 */
													obj_t BgL_arg2281z00_2193;

													{	/* Eval/expdlet.scm 272 */
														obj_t BgL_arg2282z00_2194;

														{	/* Eval/expdlet.scm 272 */
															obj_t BgL_arg2285z00_2196;

															obj_t BgL_arg2286z00_2197;

															BgL_arg2285z00_2196 =
																BGl_symbol2543z00zz__expander_letz00;
															{	/* Eval/expdlet.scm 272 */
																obj_t BgL_arg2289z00_2198;

																BgL_arg2289z00_2198 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2278z00_1309, BNIL);
																{	/* Eval/expdlet.scm 272 */
																	obj_t BgL_list2290z00_2199;

																	BgL_list2290z00_2199 =
																		MAKE_PAIR(BgL_arg2289z00_2198, BNIL);
																	BgL_arg2286z00_2197 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2277z00_1308, BgL_list2290z00_2199);
																}
															}
															BgL_arg2282z00_2194 =
																MAKE_PAIR(BgL_arg2285z00_2196,
																BgL_arg2286z00_2197);
														}
														{	/* Eval/expdlet.scm 272 */
															obj_t BgL_list2284z00_2200;

															BgL_list2284z00_2200 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2281z00_2193 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2282z00_2194, BgL_list2284z00_2200);
														}
													}
													BgL_arg2279z00_2191 =
														MAKE_PAIR(BgL_arg2275z00_1307, BgL_arg2281z00_2193);
												}
												BgL_arg2280z00_2192 =
													BGl_loopz00zz__expander_letz00(BgL_xz00_2429,
													CDR(BgL_bindingsz00_1294));
												return
													MAKE_PAIR(BgL_arg2279z00_2191, BgL_arg2280z00_2192);
											}
										}
									else
										{	/* Eval/expdlet.scm 272 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2556z00zz__expander_letz00,
												BGl_string2547z00zz__expander_letz00, BgL_xz00_2429);
										}
								}
							else
								{	/* Eval/expdlet.scm 272 */
									return
										BGl_errorz00zz__errorz00
										(BGl_string2556z00zz__expander_letz00,
										BGl_string2547z00zz__expander_letz00, BgL_xz00_2429);
								}
						}
					else
						{	/* Eval/expdlet.scm 269 */
							return
								BGl_errorz00zz__errorz00(BGl_string2556z00zz__expander_letz00,
								BGl_string2547z00zz__expander_letz00, BgL_xz00_2429);
						}
				}
		}
	}



/* _expand-eval-labels */
	obj_t BGl__expandzd2evalzd2labelsz00zz__expander_letz00(obj_t BgL_envz00_2426,
		obj_t BgL_xz00_2427, obj_t BgL_ez00_2428)
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 260 */
			return
				BGl_expandzd2evalzd2labelsz00zz__expander_letz00(BgL_xz00_2427,
				BgL_ez00_2428);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__expander_letz00()
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__expander_letz00()
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__expander_letz00()
	{
		AN_OBJECT;
		{	/* Eval/expdlet.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 454672500),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 36880833),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 89651882),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 333500458),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 3491337),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 318625392),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 327583589),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 235939793),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 500588328),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 271566986),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					234579753), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					170547433), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					400650732), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					459721289), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 123701502),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 504082187),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 497320869),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					485908420), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 28131980),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					159305184), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 236383033),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 466504979),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					164543289), BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 361745055),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__expander_definez00(((long) 340645947),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__evcompilez00(((long) 174190226),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 453710891),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
			return BGl_modulezd2initializa7ationz75zz__evutilsz00(((long) 130886107),
				BSTRING_TO_STRING(BGl_string2557z00zz__expander_letz00));
		}
	}

#ifdef __cplusplus
}
#endif
