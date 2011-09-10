/*===========================================================================*/
/*   (Jas/profile.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/profile.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL__envz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_thisz00;
		obj_t BgL_jstringz00;
		obj_t BgL_has_clinitz00;
		obj_t BgL_clinitz00;
		obj_t BgL_resz00;
		obj_t BgL_namesz00;
		obj_t BgL_lnamesz00;
		obj_t BgL_linesz00;
	}              *BgL__envz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_profilezd2declarationszd2zzjas_profilez00(BgL__envz00_bglt,
		obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl_mfz00zzjas_profilez00(BgL__envz00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_profilez00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2_envz80zzjas_profilez00(obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_profilez00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00 =
		BUNSPEC;
	static obj_t BGl___envzd2nilzd2zzjas_profilez00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2_env1620ze3zzjas_profilez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_profilezd2extrazd2clinitz00zzjas_profilez00(BgL__envz00_bglt,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_profilez00();
	static obj_t BGl_profilingz00zzjas_profilez00(obj_t);
	static obj_t BGl_profilezd2codezd2zzjas_profilez00(BgL__envz00_bglt, long,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_profilez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_profilezd2makezd2linesz00zzjas_profilez00(long, obj_t,
		obj_t);
	static obj_t BGl_profilezd2makezd2namesz00zzjas_profilez00(long, obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_profilez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzjas_profilez00();
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl___envzf3zf3zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_profilezd2makezd2resz00zzjas_profilez00(long, obj_t, obj_t);
	static BgL__envz00_bglt BGl_makezd2envzd2zzjas_profilez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_jaszd2profilezd2zzjas_profilez00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec1622z83zzjas_profilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl__envz00zzjas_profilez00 = BUNSPEC;
	static obj_t BGl_z52thezd2_envzd2nilz52zzjas_profilez00 = BUNSPEC;
	static obj_t BGl_pushzd2intzd2zzjas_profilez00(obj_t);
	static obj_t BGl_getzd2idzd2zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_profilezd2methodszd2zzjas_profilez00(BgL__envz00_bglt,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_profilez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_profilez00();
	static obj_t BGl__jaszd2profilezd2zzjas_profilez00(obj_t, obj_t);
	static BgL__envz00_bglt BGl__envzd2nilzd2zzjas_profilez00();
	static obj_t BGl_methodzd2initzd2zzjas_profilez00();
	static obj_t BGl_profilezd2infoszd2zzjas_profilez00(BgL__envz00_bglt, obj_t);
	static obj_t __cnst[43];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl__envzd2nilzd2envz00zzjas_profilez00,
		BgL_bgl___envza7d2nilza7d2za7za72780z00, BGl___envzd2nilzd2zzjas_profilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2771z00zzjas_profilez00,
		BgL_bgl_objectza7d2za7e3stru2781z00,
		BGl_objectzd2ze3structzd2_env1620ze3zzjas_profilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2773z00zzjas_profilez00,
		BgL_bgl_structza7b2objectza72782z00,
		BGl_structzb2objectzd2ze3objec1622z83zzjas_profilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_z52allocatezd2_envzd2envz52zzjas_profilez00,
		BgL_bgl__za752allocateza7d2_2783z00,
		BGl__z52allocatezd2_envz80zzjas_profilez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2756z00zzjas_profilez00,
		BgL_bgl_string2756za700za7za7j2784za7, "jas", 3);
	      DEFINE_STRING(BGl_string2757z00zzjas_profilez00,
		BgL_bgl_string2757za700za7za7j2785za7, "bad module definition", 21);
	      DEFINE_STRING(BGl_string2758z00zzjas_profilez00,
		BgL_bgl_string2758za700za7za7j2786za7, "undef", 5);
	      DEFINE_STRING(BGl_string2760z00zzjas_profilez00,
		BgL_bgl_string2760za700za7za7j2787za7, "<clinit>", 8);
	      DEFINE_STRING(BGl_string2759z00zzjas_profilez00,
		BgL_bgl_string2759za700za7za7j2788za7, "__prof", 6);
	      DEFINE_STRING(BGl_string2761z00zzjas_profilez00,
		BgL_bgl_string2761za700za7za7j2789za7, "java.lang.String", 16);
	      DEFINE_STRING(BGl_string2762z00zzjas_profilez00,
		BgL_bgl_string2762za700za7za7j2790za7, "__profiler", 10);
	      DEFINE_STRING(BGl_string2763z00zzjas_profilez00,
		BgL_bgl_string2763za700za7za7j2791za7, "__profiler__lines", 17);
	      DEFINE_STRING(BGl_string2764z00zzjas_profilez00,
		BgL_bgl_string2764za700za7za7j2792za7, "__profiler__names", 17);
	      DEFINE_STRING(BGl_string2765z00zzjas_profilez00,
		BgL_bgl_string2765za700za7za7j2793za7, "__profiler__res", 15);
	      DEFINE_STRING(BGl_string2766z00zzjas_profilez00,
		BgL_bgl_string2766za700za7za7j2794za7, "cant reach clinit", 17);
	      DEFINE_STRING(BGl_string2767z00zzjas_profilez00,
		BgL_bgl_string2767za700za7za7j2795za7, "as", 2);
	      DEFINE_STRING(BGl_string2768z00zzjas_profilez00,
		BgL_bgl_string2768za700za7za7j2796za7, "bad method definition", 21);
	      DEFINE_STRING(BGl_string2770z00zzjas_profilez00,
		BgL_bgl_string2770za700za7za7j2797za7, "empty basic block", 17);
	      DEFINE_STRING(BGl_string2769z00zzjas_profilez00,
		BgL_bgl_string2769za700za7za7j2798za7, "profile", 7);
	      DEFINE_STRING(BGl_string2772z00zzjas_profilez00,
		BgL_bgl_string2772za700za7za7j2799za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2774z00zzjas_profilez00,
		BgL_bgl_string2774za700za7za7j2800za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string2775z00zzjas_profilez00,
		BgL_bgl_string2775za700za7za7j2801za7, "jas_profile", 11);
	      DEFINE_STRING(BGl_string2776z00zzjas_profilez00,
		BgL_bgl_string2776za700za7za7j2802za7,
		"_env int (newarray int) (iastore) anewarray putstatic (dup) (aastore) (iconst_5) (iconst_4) (iconst_3) (iconst_2) (iconst_1) (iconst_0) (iconst_m1) ldc sipush bipush ***start*** (handler line comment localvar) getstatic aaload dup2 iaload iconst_1 iadd iastore fields sde sourcefile field void static public method vector (vector (vector int)) __profile_lines __profile_names __profile_res class (sourcefile sde fields) declare ",
		428);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl__envzf3zd2envz21zzjas_profilez00,
		BgL_bgl___envza7f3za7f3za7za7jas2803z00, BGl___envzf3zf3zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jaszd2profilezd2envz00zzjas_profilez00,
		BgL_bgl__jasza7d2profileza7d2804z00, BGl__jaszd2profilezd2zzjas_profilez00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_profilez00(long
		BgL_checksumz00_1355, char *BgL_fromz00_1356)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_profilez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_profilez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_profilez00();
					BGl_cnstzd2initzd2zzjas_profilez00();
					BGl_importedzd2moduleszd2initz00zzjas_profilez00();
					BGl_objectzd2initzd2zzjas_profilez00();
					BGl_methodzd2initzd2zzjas_profilez00();
					BGl_toplevelzd2initzd2zzjas_profilez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "jas_profile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_profile");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			{	/* Jas/profile.scm 1 */
				obj_t BgL_cportz00_1341;

				BgL_cportz00_1341 =
					bgl_open_input_string(BGl_string2776z00zzjas_profilez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1342;

					BgL_iz00_1342 = ((long) 42);
				BgL_loopz00_1343:
					if ((BgL_iz00_1342 == ((long) -1)))
						{	/* Jas/profile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/profile.scm 1 */
							{	/* Jas/profile.scm 1 */
								obj_t BgL_arg2778z00_1345;

								{	/* Jas/profile.scm 1 */

									{	/* Jas/profile.scm 1 */
										obj_t BgL_locationz00_1347;

										BgL_locationz00_1347 = BBOOL(((bool_t) 0));
										{	/* Jas/profile.scm 1 */

											BgL_arg2778z00_1345 =
												BGl_readz00zz__readerz00(BgL_cportz00_1341,
												BgL_locationz00_1347);
										}
									}
								}
								{	/* Jas/profile.scm 1 */
									int BgL_auxz00_1378;

									BgL_auxz00_1378 = (int) (BgL_iz00_1342);
									CNST_TABLE_SET(BgL_auxz00_1378, BgL_arg2778z00_1345);
							}}
							{	/* Jas/profile.scm 1 */
								int BgL_auxz00_1348;

								BgL_auxz00_1348 = (int) ((BgL_iz00_1342 - ((long) 1)));
								{
									long BgL_iz00_1383;

									BgL_iz00_1383 = (long) (BgL_auxz00_1348);
									BgL_iz00_1342 = BgL_iz00_1383;
									goto BgL_loopz00_1343;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			return (BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00 =
				BINT(((long) 0)), BUNSPEC);
		}
	}



/* jas-profile */
	BGL_EXPORTED_DEF obj_t BGl_jaszd2profilezd2zzjas_profilez00(obj_t BgL_lz00_1)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 15 */
			if (
				((long) CINT(BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00) >
					((long) 0)))
				{	/* Jas/profile.scm 16 */
					return BGl_profilingz00zzjas_profilez00(BgL_lz00_1);
				}
			else
				{	/* Jas/profile.scm 16 */
					return BgL_lz00_1;
				}
		}
	}



/* _jas-profile */
	obj_t BGl__jaszd2profilezd2zzjas_profilez00(obj_t BgL_envz00_1322,
		obj_t BgL_lz00_1323)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 15 */
			return BGl_jaszd2profilezd2zzjas_profilez00(BgL_lz00_1323);
		}
	}



/* profiling */
	obj_t BGl_profilingz00zzjas_profilez00(obj_t BgL_lz00_2)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 27 */
			{
				obj_t BgL_keyz00_160;

				obj_t BgL_thisz00_161;

				obj_t BgL_extendz00_162;

				obj_t BgL_implementsz00_163;

				obj_t BgL_declsz00_164;

				obj_t BgL_infosz00_165;

				if (PAIRP(BgL_lz00_2))
					{	/* Jas/profile.scm 28 */
						obj_t BgL_cdrzd21407zd2_170;

						BgL_cdrzd21407zd2_170 = CDR(BgL_lz00_2);
						{	/* Jas/profile.scm 28 */
							obj_t BgL_keyz00_171;

							BgL_keyz00_171 = CAR(BgL_lz00_2);
							if (PAIRP(BgL_cdrzd21407zd2_170))
								{	/* Jas/profile.scm 28 */
									obj_t BgL_carzd21414zd2_173;

									obj_t BgL_cdrzd21415zd2_174;

									BgL_carzd21414zd2_173 = CAR(BgL_cdrzd21407zd2_170);
									BgL_cdrzd21415zd2_174 = CDR(BgL_cdrzd21407zd2_170);
									if (SYMBOLP(BgL_carzd21414zd2_173))
										{	/* Jas/profile.scm 28 */
											if (PAIRP(BgL_cdrzd21415zd2_174))
												{	/* Jas/profile.scm 28 */
													obj_t BgL_carzd21422zd2_178;

													obj_t BgL_cdrzd21423zd2_179;

													BgL_carzd21422zd2_178 = CAR(BgL_cdrzd21415zd2_174);
													BgL_cdrzd21423zd2_179 = CDR(BgL_cdrzd21415zd2_174);
													if (SYMBOLP(BgL_carzd21422zd2_178))
														{	/* Jas/profile.scm 28 */
															if (PAIRP(BgL_cdrzd21423zd2_179))
																{	/* Jas/profile.scm 28 */
																	obj_t BgL_carzd21429zd2_183;

																	obj_t BgL_cdrzd21430zd2_184;

																	BgL_carzd21429zd2_183 =
																		CAR(BgL_cdrzd21423zd2_179);
																	BgL_cdrzd21430zd2_184 =
																		CDR(BgL_cdrzd21423zd2_179);
																	{
																		obj_t BgL_gzd21446zd2_203;

																		obj_t BgL_gzd21433zd2_188;

																		BgL_gzd21433zd2_188 = BgL_carzd21429zd2_183;
																		if (NULLP(BgL_gzd21433zd2_188))
																			{	/* Jas/profile.scm 28 */
																				if (PAIRP(BgL_cdrzd21430zd2_184))
																					{	/* Jas/profile.scm 28 */
																						obj_t BgL_carzd21437zd2_192;

																						BgL_carzd21437zd2_192 =
																							CAR(BgL_cdrzd21430zd2_184);
																						if (PAIRP(BgL_carzd21437zd2_192))
																							{	/* Jas/profile.scm 28 */
																								if (
																									(CAR(BgL_carzd21437zd2_192) ==
																										CNST_TABLE_REF(((long) 0))))
																									{	/* Jas/profile.scm 28 */
																										BgL_keyz00_160 =
																											BgL_keyz00_171;
																										BgL_thisz00_161 =
																											BgL_carzd21414zd2_173;
																										BgL_extendz00_162 =
																											BgL_carzd21422zd2_178;
																										BgL_implementsz00_163 =
																											BgL_carzd21429zd2_183;
																										BgL_declsz00_164 =
																											CDR
																											(BgL_carzd21437zd2_192);
																										BgL_infosz00_165 =
																											CDR
																											(BgL_cdrzd21430zd2_184);
																									BgL_tagzd21389zd2_166:
																										{	/* Jas/profile.scm 33 */
																											BgL__envz00_bglt
																												BgL_envz00_220;
																											BgL_envz00_220 =
																												BGl_makezd2envzd2zzjas_profilez00
																												(BgL_thisz00_161,
																												BgL_declsz00_164,
																												BgL_infosz00_165);
																											{	/* Jas/profile.scm 35 */
																												obj_t
																													BgL_arg1660z00_221;
																												{	/* Jas/profile.scm 35 */
																													obj_t
																														BgL_arg1662z00_222;
																													obj_t
																														BgL_arg1663z00_223;
																													{	/* Jas/profile.scm 35 */
																														obj_t
																															BgL_arg1669z00_228;
																														obj_t
																															BgL_arg1670z00_229;
																														BgL_arg1669z00_228 =
																															CNST_TABLE_REF((
																																(long) 0));
																														BgL_arg1670z00_229 =
																															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																															(BGl_profilezd2declarationszd2zzjas_profilez00
																															(BgL_envz00_220,
																																BgL_declsz00_164),
																															BNIL);
																														BgL_arg1662z00_222 =
																															MAKE_PAIR
																															(BgL_arg1669z00_228,
																															BgL_arg1670z00_229);
																													}
																													BgL_arg1663z00_223 =
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BGl_profilezd2infoszd2zzjas_profilez00
																														(BgL_envz00_220,
																															BgL_infosz00_165),
																														BNIL);
																													{	/* Jas/profile.scm 34 */
																														obj_t
																															BgL_list1664z00_224;
																														{	/* Jas/profile.scm 34 */
																															obj_t
																																BgL_arg1666z00_225;
																															{	/* Jas/profile.scm 34 */
																																obj_t
																																	BgL_arg1667z00_226;
																																{	/* Jas/profile.scm 34 */
																																	obj_t
																																		BgL_arg1668z00_227;
																																	BgL_arg1668z00_227
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1663z00_223,
																																		BNIL);
																																	BgL_arg1667z00_226
																																		=
																																		MAKE_PAIR
																																		(BgL_arg1662z00_222,
																																		BgL_arg1668z00_227);
																																}
																																BgL_arg1666z00_225
																																	=
																																	MAKE_PAIR
																																	(BgL_implementsz00_163,
																																	BgL_arg1667z00_226);
																															}
																															BgL_list1664z00_224
																																=
																																MAKE_PAIR
																																(BgL_extendz00_162,
																																BgL_arg1666z00_225);
																														}
																														BgL_arg1660z00_221 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_thisz00_161,
																															BgL_list1664z00_224);
																												}}
																												return
																													MAKE_PAIR
																													(BgL_keyz00_160,
																													BgL_arg1660z00_221);
																											}
																										}
																									}
																								else
																									{	/* Jas/profile.scm 28 */
																									BgL_tagzd21390zd2_167:
																										return
																											BGl_errorz00zz__errorz00
																											(BGl_string2756z00zzjas_profilez00,
																											BGl_string2757z00zzjas_profilez00,
																											BgL_lz00_2);
																									}
																							}
																						else
																							{	/* Jas/profile.scm 28 */
																								goto BgL_tagzd21390zd2_167;
																							}
																					}
																				else
																					{	/* Jas/profile.scm 28 */
																						goto BgL_tagzd21390zd2_167;
																					}
																			}
																		else
																			{	/* Jas/profile.scm 28 */
																				if (PAIRP(BgL_gzd21433zd2_188))
																					{	/* Jas/profile.scm 28 */
																						bool_t BgL_testz00_1440;

																						{	/* Jas/profile.scm 28 */
																							obj_t BgL_auxz00_1441;

																							BgL_auxz00_1441 =
																								CAR(BgL_gzd21433zd2_188);
																							BgL_testz00_1440 =
																								SYMBOLP(BgL_auxz00_1441);
																						}
																						if (BgL_testz00_1440)
																							{	/* Jas/profile.scm 28 */
																								BgL_gzd21446zd2_203 =
																									CDR(BgL_gzd21433zd2_188);
																							BgL_zc3anonymousza31645ze3z83_204:
																								if (NULLP
																									(BgL_gzd21446zd2_203))
																									{	/* Jas/profile.scm 28 */
																										if (PAIRP
																											(BgL_cdrzd21430zd2_184))
																											{	/* Jas/profile.scm 28 */
																												obj_t
																													BgL_carzd21450zd2_207;
																												BgL_carzd21450zd2_207 =
																													CAR
																													(BgL_cdrzd21430zd2_184);
																												if (PAIRP
																													(BgL_carzd21450zd2_207))
																													{	/* Jas/profile.scm 28 */
																														if (
																															(CAR
																																(BgL_carzd21450zd2_207)
																																==
																																CNST_TABLE_REF((
																																		(long) 0))))
																															{
																																obj_t
																																	BgL_infosz00_1461;
																																obj_t
																																	BgL_declsz00_1459;
																																obj_t
																																	BgL_implementsz00_1458;
																																obj_t
																																	BgL_extendz00_1457;
																																obj_t
																																	BgL_thisz00_1456;
																																obj_t
																																	BgL_keyz00_1455;
																																BgL_keyz00_1455
																																	=
																																	BgL_keyz00_171;
																																BgL_thisz00_1456
																																	=
																																	BgL_carzd21414zd2_173;
																																BgL_extendz00_1457
																																	=
																																	BgL_carzd21422zd2_178;
																																BgL_implementsz00_1458
																																	=
																																	BgL_carzd21429zd2_183;
																																BgL_declsz00_1459
																																	=
																																	CDR
																																	(BgL_carzd21450zd2_207);
																																BgL_infosz00_1461
																																	=
																																	CDR
																																	(BgL_cdrzd21430zd2_184);
																																BgL_infosz00_165
																																	=
																																	BgL_infosz00_1461;
																																BgL_declsz00_164
																																	=
																																	BgL_declsz00_1459;
																																BgL_implementsz00_163
																																	=
																																	BgL_implementsz00_1458;
																																BgL_extendz00_162
																																	=
																																	BgL_extendz00_1457;
																																BgL_thisz00_161
																																	=
																																	BgL_thisz00_1456;
																																BgL_keyz00_160 =
																																	BgL_keyz00_1455;
																																goto
																																	BgL_tagzd21389zd2_166;
																															}
																														else
																															{	/* Jas/profile.scm 28 */
																																goto
																																	BgL_tagzd21390zd2_167;
																															}
																													}
																												else
																													{	/* Jas/profile.scm 28 */
																														goto
																															BgL_tagzd21390zd2_167;
																													}
																											}
																										else
																											{	/* Jas/profile.scm 28 */
																												goto
																													BgL_tagzd21390zd2_167;
																											}
																									}
																								else
																									{	/* Jas/profile.scm 28 */
																										if (PAIRP
																											(BgL_gzd21446zd2_203))
																											{	/* Jas/profile.scm 28 */
																												bool_t BgL_testz00_1465;

																												{	/* Jas/profile.scm 28 */
																													obj_t BgL_auxz00_1466;

																													BgL_auxz00_1466 =
																														CAR
																														(BgL_gzd21446zd2_203);
																													BgL_testz00_1465 =
																														SYMBOLP
																														(BgL_auxz00_1466);
																												}
																												if (BgL_testz00_1465)
																													{
																														obj_t
																															BgL_gzd21446zd2_1469;
																														BgL_gzd21446zd2_1469
																															=
																															CDR
																															(BgL_gzd21446zd2_203);
																														BgL_gzd21446zd2_203
																															=
																															BgL_gzd21446zd2_1469;
																														goto
																															BgL_zc3anonymousza31645ze3z83_204;
																													}
																												else
																													{	/* Jas/profile.scm 28 */
																														goto
																															BgL_tagzd21390zd2_167;
																													}
																											}
																										else
																											{	/* Jas/profile.scm 28 */
																												goto
																													BgL_tagzd21390zd2_167;
																											}
																									}
																							}
																						else
																							{	/* Jas/profile.scm 28 */
																								goto BgL_tagzd21390zd2_167;
																							}
																					}
																				else
																					{	/* Jas/profile.scm 28 */
																						goto BgL_tagzd21390zd2_167;
																					}
																			}
																	}
																}
															else
																{	/* Jas/profile.scm 28 */
																	goto BgL_tagzd21390zd2_167;
																}
														}
													else
														{	/* Jas/profile.scm 28 */
															goto BgL_tagzd21390zd2_167;
														}
												}
											else
												{	/* Jas/profile.scm 28 */
													goto BgL_tagzd21390zd2_167;
												}
										}
									else
										{	/* Jas/profile.scm 28 */
											goto BgL_tagzd21390zd2_167;
										}
								}
							else
								{	/* Jas/profile.scm 28 */
									goto BgL_tagzd21390zd2_167;
								}
						}
					}
				else
					{	/* Jas/profile.scm 28 */
						goto BgL_tagzd21390zd2_167;
					}
			}
		}
	}



/* make-env */
	BgL__envz00_bglt BGl_makezd2envzd2zzjas_profilez00(obj_t BgL_thisz00_3,
		obj_t BgL_declsz00_4, obj_t BgL_infosz00_5)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 42 */
			{
				obj_t BgL_valz00_269;

				obj_t BgL_varz00_277;

				obj_t BgL_lz00_278;

				obj_t BgL_infosz00_286;

				obj_t BgL_declsz00_287;

				{	/* Jas/profile.scm 71 */
					obj_t BgL_vclinitz00_238;

					obj_t BgL_lnamesz00_239;

					BgL_vclinitz00_238 =
						BGl_getzd2idzd2zzjas_profilez00(BGl_string2760z00zzjas_profilez00,
						BgL_declsz00_4);
					BgL_infosz00_286 = BgL_infosz00_5;
					BgL_declsz00_287 = BgL_declsz00_4;
				BgL_zc3anonymousza31719ze3z83_288:
					if (NULLP(BgL_infosz00_286))
						{	/* Jas/profile.scm 66 */
							BgL_lnamesz00_239 = BNIL;
						}
					else
						{	/* Jas/profile.scm 67 */
							bool_t BgL_testz00_1475;

							{	/* Jas/profile.scm 67 */
								obj_t BgL_auxz00_1476;

								{	/* Jas/profile.scm 67 */
									obj_t BgL_auxz00_1477;

									{	/* Jas/profile.scm 67 */
										obj_t BgL_pairz00_1002;

										BgL_pairz00_1002 = BgL_infosz00_286;
										BgL_auxz00_1477 = CAR(CAR(BgL_pairz00_1002));
									}
									BgL_auxz00_1476 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_1477,
										CNST_TABLE_REF(((long) 1)));
								}
								BgL_testz00_1475 = CBOOL(BgL_auxz00_1476);
							}
							if (BgL_testz00_1475)
								{
									obj_t BgL_infosz00_1483;

									BgL_infosz00_1483 = CDR(BgL_infosz00_286);
									BgL_infosz00_286 = BgL_infosz00_1483;
									goto BgL_zc3anonymousza31719ze3z83_288;
								}
							else
								{	/* Jas/profile.scm 70 */
									obj_t BgL_head1615z00_294;

									BgL_head1615z00_294 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l1613z00_296;

										obj_t BgL_tail1616z00_297;

										BgL_l1613z00_296 = BgL_infosz00_286;
										BgL_tail1616z00_297 = BgL_head1615z00_294;
									BgL_zc3anonymousza31726ze3z83_298:
										if (NULLP(BgL_l1613z00_296))
											{	/* Jas/profile.scm 70 */
												BgL_lnamesz00_239 = CDR(BgL_head1615z00_294);
											}
										else
											{	/* Jas/profile.scm 70 */
												obj_t BgL_newtail1617z00_300;

												{	/* Jas/profile.scm 70 */
													obj_t BgL_arg1730z00_302;

													{	/* Jas/profile.scm 70 */
														obj_t BgL_mz00_304;

														BgL_mz00_304 = CAR(BgL_l1613z00_296);
														{	/* Jas/profile.scm 70 */
															obj_t BgL_arg1732z00_305;

															{	/* Jas/profile.scm 70 */
																obj_t BgL_pairz00_1013;

																BgL_pairz00_1013 = BgL_mz00_304;
																BgL_arg1732z00_305 = CAR(CDR(BgL_pairz00_1013));
															}
															BgL_varz00_277 = BgL_arg1732z00_305;
															BgL_lz00_278 = BgL_declsz00_287;
														BgL_zc3anonymousza31710ze3z83_279:
															if (NULLP(BgL_lz00_278))
																{	/* Jas/profile.scm 61 */
																	BgL_arg1730z00_302 =
																		BGl_errorz00zz__errorz00
																		(BGl_string2756z00zzjas_profilez00,
																		BGl_string2758z00zzjas_profilez00,
																		BgL_varz00_277);
																}
															else
																{	/* Jas/profile.scm 62 */
																	bool_t BgL_testz00_1495;

																	{	/* Jas/profile.scm 62 */
																		obj_t BgL_auxz00_1496;

																		{	/* Jas/profile.scm 62 */
																			obj_t BgL_pairz00_981;

																			BgL_pairz00_981 = BgL_lz00_278;
																			BgL_auxz00_1496 =
																				CAR(CAR(BgL_pairz00_981));
																		}
																		BgL_testz00_1495 =
																			(BgL_auxz00_1496 == BgL_varz00_277);
																	}
																	if (BgL_testz00_1495)
																		{	/* Jas/profile.scm 63 */
																			obj_t BgL_pairz00_999;

																			{	/* Jas/profile.scm 63 */
																				obj_t BgL_pairz00_991;

																				{	/* Jas/profile.scm 63 */
																					obj_t BgL_pairz00_985;

																					BgL_pairz00_985 = BgL_lz00_278;
																					BgL_pairz00_991 =
																						CAR(CDR(CAR(BgL_pairz00_985)));
																				}
																				BgL_pairz00_999 =
																					CDR(CDR(CDR(CDR(BgL_pairz00_991))));
																			}
																			BgL_arg1730z00_302 = CAR(BgL_pairz00_999);
																		}
																	else
																		{
																			obj_t BgL_lz00_1508;

																			BgL_lz00_1508 = CDR(BgL_lz00_278);
																			BgL_lz00_278 = BgL_lz00_1508;
																			goto BgL_zc3anonymousza31710ze3z83_279;
																		}
																}
														}
													}
													BgL_newtail1617z00_300 =
														MAKE_PAIR(BgL_arg1730z00_302, BNIL);
												}
												SET_CDR(BgL_tail1616z00_297, BgL_newtail1617z00_300);
												{
													obj_t BgL_tail1616z00_1514;

													obj_t BgL_l1613z00_1512;

													BgL_l1613z00_1512 = CDR(BgL_l1613z00_296);
													BgL_tail1616z00_1514 = BgL_newtail1617z00_300;
													BgL_tail1616z00_297 = BgL_tail1616z00_1514;
													BgL_l1613z00_296 = BgL_l1613z00_1512;
													goto BgL_zc3anonymousza31726ze3z83_298;
												}
											}
									}
								}
						}
					{	/* Jas/profile.scm 75 */
						obj_t BgL_arg1676z00_240;

						obj_t BgL_arg1677z00_241;

						obj_t BgL_arg1678z00_242;

						obj_t BgL_arg1680z00_243;

						obj_t BgL_arg1684z00_244;

						{	/* Jas/profile.scm 75 */
							obj_t BgL__ortest_1598z00_245;

							BgL__ortest_1598z00_245 =
								BGl_getzd2idzd2zzjas_profilez00
								(BGl_string2761z00zzjas_profilez00, BgL_declsz00_4);
							if (CBOOL(BgL__ortest_1598z00_245))
								{	/* Jas/profile.scm 75 */
									BgL_arg1676z00_240 = BgL__ortest_1598z00_245;
								}
							else
								{	/* Jas/profile.scm 76 */
									obj_t BgL_arg1685z00_246;

									{	/* Jas/profile.scm 76 */
										obj_t BgL_arg1688z00_247;

										obj_t BgL_arg1689z00_248;

										BgL_arg1688z00_247 = CNST_TABLE_REF(((long) 2));
										{	/* Jas/profile.scm 76 */
											obj_t BgL_list1690z00_249;

											{	/* Jas/profile.scm 76 */
												obj_t BgL_arg1692z00_251;

												BgL_arg1692z00_251 = MAKE_PAIR(BNIL, BNIL);
												BgL_list1690z00_249 =
													MAKE_PAIR(BGl_string2761z00zzjas_profilez00,
													BgL_arg1692z00_251);
											}
											BgL_arg1689z00_248 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BNIL,
												BgL_list1690z00_249);
										}
										BgL_arg1685z00_246 =
											MAKE_PAIR(BgL_arg1688z00_247, BgL_arg1689z00_248);
									}
									BgL_valz00_269 = BgL_arg1685z00_246;
									{	/* Jas/profile.scm 57 */
										obj_t BgL_rz00_271;

										BgL_rz00_271 =
											BGl_gensymz00zz__r4_symbols_6_4z00
											(BGl_string2759z00zzjas_profilez00);
										{	/* Jas/profile.scm 58 */
											obj_t BgL_arg1705z00_272;

											{	/* Jas/profile.scm 58 */
												obj_t BgL_arg1706z00_273;

												obj_t BgL_arg1707z00_274;

												{	/* Jas/profile.scm 58 */
													obj_t BgL_arg1708z00_275;

													{	/* Jas/profile.scm 58 */
														obj_t BgL_list1709z00_276;

														BgL_list1709z00_276 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1708z00_275 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_valz00_269, BgL_list1709z00_276);
													}
													BgL_arg1706z00_273 =
														MAKE_PAIR(BgL_rz00_271, BgL_arg1708z00_275);
												}
												BgL_arg1707z00_274 = CDR(BgL_valz00_269);
												BgL_arg1705z00_272 =
													MAKE_PAIR(BgL_arg1706z00_273, BgL_arg1707z00_274);
											}
											SET_CDR(BgL_valz00_269, BgL_arg1705z00_272);
										}
										BgL_arg1676z00_240 = BgL_rz00_271;
						}}}
						if (CBOOL(BgL_vclinitz00_238))
							{	/* Jas/profile.scm 78 */
								BgL_arg1677z00_241 = BgL_vclinitz00_238;
							}
						else
							{	/* Jas/profile.scm 78 */
								BgL_arg1677z00_241 =
									BGl_gensymz00zz__r4_symbols_6_4z00
									(BGl_string2762z00zzjas_profilez00);
							}
						BgL_arg1678z00_242 = CNST_TABLE_REF(((long) 3));
						BgL_arg1680z00_243 = CNST_TABLE_REF(((long) 4));
						BgL_arg1684z00_244 = CNST_TABLE_REF(((long) 5));
						{	/* Jas/profile.scm 73 */
							BgL__envz00_bglt BgL_res2661z00_949;

							{	/* Jas/profile.scm 73 */
								BgL__envz00_bglt BgL_new1541z00_925;

								{	/* Jas/profile.scm 73 */
									BgL__envz00_bglt BgL_res2659z00_930;

									{	/* Jas/profile.scm 73 */
										BgL__envz00_bglt BgL_new1561z00_926;

										BgL_new1561z00_926 =
											((BgL__envz00_bglt) BREF(GC_MALLOC(sizeof(struct
														BgL__envz00_bgl))));
										BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
											(BgL_new1561z00_926),
											BGl_classzd2numzd2zz__objectz00
											(BGl__envz00zzjas_profilez00));
										{	/* Jas/profile.scm 73 */
											BgL_objectz00_bglt BgL_auxz00_1540;

											BgL_auxz00_1540 =
												(BgL_objectz00_bglt) (BgL_new1561z00_926);
											BGL_OBJECT_WIDENING_SET(BgL_auxz00_1540, BFALSE);
										}
										BgL_res2659z00_930 = BgL_new1561z00_926;
									}
									BgL_new1541z00_925 = BgL_res2659z00_930;
								}
								{	/* Jas/profile.scm 73 */
									BgL__envz00_bglt BgL_res2660z00_948;

									{	/* Jas/profile.scm 73 */
										BgL__envz00_bglt BgL_new1551z00_931;

										BgL_new1551z00_931 = BgL_new1541z00_925;
										{	/* Jas/profile.scm 73 */
											obj_t BgL_this1543z00_940;

											obj_t BgL_jstring1544z00_941;

											obj_t BgL_has_clinit1545z00_942;

											obj_t BgL_clinit1546z00_943;

											obj_t BgL_res1547z00_944;

											obj_t BgL_names1548z00_945;

											obj_t BgL_lnames1549z00_946;

											obj_t BgL_lines1550z00_947;

											BgL_this1543z00_940 = BgL_thisz00_3;
											BgL_jstring1544z00_941 = BgL_arg1676z00_240;
											BgL_has_clinit1545z00_942 = BgL_vclinitz00_238;
											BgL_clinit1546z00_943 = BgL_arg1677z00_241;
											BgL_res1547z00_944 = BgL_arg1678z00_242;
											BgL_names1548z00_945 = BgL_arg1680z00_243;
											BgL_lnames1549z00_946 = BgL_lnamesz00_239;
											BgL_lines1550z00_947 = BgL_arg1684z00_244;
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_thisz00) =
												((obj_t) BgL_this1543z00_940), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_jstringz00) =
												((obj_t) BgL_jstring1544z00_941), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_has_clinitz00) =
												((obj_t) BgL_has_clinit1545z00_942), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_clinitz00) =
												((obj_t) BgL_clinit1546z00_943), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_resz00) = ((obj_t) BgL_res1547z00_944), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_namesz00) =
												((obj_t) BgL_names1548z00_945), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_lnamesz00) =
												((obj_t) BgL_lnames1549z00_946), BUNSPEC);
											((((BgL__envz00_bglt) CREF(BgL_new1551z00_931))->
													BgL_linesz00) =
												((obj_t) BgL_lines1550z00_947), BUNSPEC);
											BgL_res2660z00_948 = BgL_new1551z00_931;
									}} BgL_res2660z00_948;
								}
								BgL_res2661z00_949 = BgL_new1541z00_925;
							}
							return BgL_res2661z00_949;
						}
					}
				}
			}
		}
	}



/* get-id */
	obj_t BGl_getzd2idzd2zzjas_profilez00(obj_t BgL_strz00_253,
		obj_t BgL_lz00_254)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 55 */
		BGl_getzd2idzd2zzjas_profilez00:
			if (NULLP(BgL_lz00_254))
				{	/* Jas/profile.scm 44 */
					return BFALSE;
				}
			else
				{	/* Jas/profile.scm 46 */
					obj_t BgL_declz00_257;

					BgL_declz00_257 = CAR(BgL_lz00_254);
					{	/* Jas/profile.scm 47 */
						obj_t BgL_namez00_258;

						obj_t BgL_valz00_259;

						BgL_namez00_258 = CAR(BgL_declz00_257);
						{	/* Jas/profile.scm 47 */
							obj_t BgL_pairz00_953;

							BgL_pairz00_953 = BgL_declz00_257;
							BgL_valz00_259 = CAR(CDR(BgL_pairz00_953));
						}
						{	/* Jas/profile.scm 48 */
							obj_t BgL_tyz00_260;

							obj_t BgL_defz00_261;

							BgL_tyz00_260 = CAR(BgL_valz00_259);
							BgL_defz00_261 = CDR(BgL_valz00_259);
							if ((BgL_tyz00_260 == CNST_TABLE_REF(((long) 2))))
								{	/* Jas/profile.scm 50 */
									bool_t BgL_testz00_1562;

									{	/* Jas/profile.scm 50 */
										obj_t BgL_arg1700z00_265;

										{	/* Jas/profile.scm 50 */
											obj_t BgL_pairz00_959;

											BgL_pairz00_959 = BgL_defz00_261;
											BgL_arg1700z00_265 = CAR(CDR(BgL_pairz00_959));
										}
										BgL_testz00_1562 =
											bigloo_strcmp(BgL_arg1700z00_265, BgL_strz00_253);
									}
									if (BgL_testz00_1562)
										{	/* Jas/profile.scm 50 */
											return BgL_namez00_258;
										}
									else
										{
											obj_t BgL_lz00_1566;

											BgL_lz00_1566 = CDR(BgL_lz00_254);
											BgL_lz00_254 = BgL_lz00_1566;
											goto BGl_getzd2idzd2zzjas_profilez00;
										}
								}
							else
								{	/* Jas/profile.scm 53 */
									bool_t BgL_testz00_1568;

									{	/* Jas/profile.scm 53 */
										obj_t BgL_arg1703z00_268;

										{	/* Jas/profile.scm 53 */
											obj_t BgL_pairz00_966;

											BgL_pairz00_966 = BgL_defz00_261;
											BgL_arg1703z00_268 = CAR(CDR(CDR(CDR(BgL_pairz00_966))));
										}
										BgL_testz00_1568 =
											bigloo_strcmp(BgL_arg1703z00_268, BgL_strz00_253);
									}
									if (BgL_testz00_1568)
										{	/* Jas/profile.scm 53 */
											return BgL_namez00_258;
										}
									else
										{
											obj_t BgL_lz00_1574;

											BgL_lz00_1574 = CDR(BgL_lz00_254);
											BgL_lz00_254 = BgL_lz00_1574;
											goto BGl_getzd2idzd2zzjas_profilez00;
										}
								}
						}
					}
				}
		}
	}



/* profile-declarations */
	obj_t BGl_profilezd2declarationszd2zzjas_profilez00(BgL__envz00_bglt
		BgL_envz00_6, obj_t BgL_declsz00_7)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 88 */
			{	/* Jas/profile.scm 92 */
				obj_t BgL_arg1735z00_315;

				obj_t BgL_arg1736z00_316;

				{	/* Jas/profile.scm 92 */
					obj_t BgL_arg1738z00_317;

					obj_t BgL_arg1739z00_318;

					BgL_arg1738z00_317 =
						(((BgL__envz00_bglt) CREF(BgL_envz00_6))->BgL_linesz00);
					BgL_arg1739z00_318 = CNST_TABLE_REF(((long) 6));
					BgL_arg1735z00_315 =
						BGl_mfz00zzjas_profilez00(BgL_envz00_6, BgL_arg1738z00_317,
						BgL_arg1739z00_318, BGl_string2763z00zzjas_profilez00);
				}
				{	/* Jas/profile.scm 93 */
					obj_t BgL_arg1741z00_320;

					obj_t BgL_arg1742z00_321;

					obj_t BgL_arg1743z00_322;

					{	/* Jas/profile.scm 93 */
						obj_t BgL_arg1746z00_325;

						obj_t BgL_arg1747z00_326;

						BgL_arg1746z00_325 =
							(((BgL__envz00_bglt) CREF(BgL_envz00_6))->BgL_namesz00);
						{	/* Jas/profile.scm 93 */
							obj_t BgL_arg1749z00_328;

							obj_t BgL_arg1750z00_329;

							BgL_arg1749z00_328 = CNST_TABLE_REF(((long) 7));
							{	/* Jas/profile.scm 93 */
								obj_t BgL_arg1751z00_330;

								BgL_arg1751z00_330 =
									(((BgL__envz00_bglt) CREF(BgL_envz00_6))->BgL_jstringz00);
								{	/* Jas/profile.scm 93 */
									obj_t BgL_list1754z00_332;

									BgL_list1754z00_332 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1750z00_329 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1751z00_330, BgL_list1754z00_332);
							}}
							BgL_arg1747z00_326 =
								MAKE_PAIR(BgL_arg1749z00_328, BgL_arg1750z00_329);
						}
						BgL_arg1741z00_320 =
							BGl_mfz00zzjas_profilez00(BgL_envz00_6, BgL_arg1746z00_325,
							BgL_arg1747z00_326, BGl_string2764z00zzjas_profilez00);
					}
					{	/* Jas/profile.scm 94 */
						obj_t BgL_arg1755z00_333;

						obj_t BgL_arg1756z00_334;

						BgL_arg1755z00_333 =
							(((BgL__envz00_bglt) CREF(BgL_envz00_6))->BgL_resz00);
						BgL_arg1756z00_334 = CNST_TABLE_REF(((long) 6));
						BgL_arg1742z00_321 =
							BGl_mfz00zzjas_profilez00(BgL_envz00_6, BgL_arg1755z00_333,
							BgL_arg1756z00_334, BGl_string2765z00zzjas_profilez00);
					}
					{	/* Jas/profile.scm 95 */
						obj_t BgL_arg1758z00_336;

						obj_t BgL_arg1764z00_337;

						if (CBOOL(
								(((BgL__envz00_bglt) CREF(BgL_envz00_6))->BgL_has_clinitz00)))
							{	/* Jas/profile.scm 95 */
								BgL_arg1758z00_336 = BNIL;
							}
						else
							{	/* Jas/profile.scm 97 */
								obj_t BgL_arg1767z00_339;

								{	/* Jas/profile.scm 97 */
									obj_t BgL_arg1769z00_341;

									obj_t BgL_arg1770z00_342;

									BgL_arg1769z00_341 =
										(((BgL__envz00_bglt) CREF(BgL_envz00_6))->BgL_clinitz00);
									{	/* Jas/profile.scm 97 */
										obj_t BgL_arg1771z00_343;

										{	/* Jas/profile.scm 97 */
											obj_t BgL_arg1775z00_346;

											obj_t BgL_arg1776z00_347;

											BgL_arg1775z00_346 = CNST_TABLE_REF(((long) 8));
											{	/* Jas/profile.scm 97 */
												obj_t BgL_arg1777z00_348;

												obj_t BgL_arg1778z00_349;

												obj_t BgL_arg1779z00_350;

												BgL_arg1777z00_348 =
													(((BgL__envz00_bglt) CREF(BgL_envz00_6))->
													BgL_thisz00);
												{	/* Jas/profile.scm 97 */
													obj_t BgL_arg1789z00_357;

													obj_t BgL_arg1790z00_358;

													BgL_arg1789z00_357 = CNST_TABLE_REF(((long) 9));
													{	/* Jas/profile.scm 97 */
														obj_t BgL_list1791z00_359;

														BgL_list1791z00_359 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1790z00_358 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 10)),
															BgL_list1791z00_359);
													}
													BgL_arg1778z00_349 =
														MAKE_PAIR(BgL_arg1789z00_357, BgL_arg1790z00_358);
												}
												BgL_arg1779z00_350 = CNST_TABLE_REF(((long) 11));
												{	/* Jas/profile.scm 97 */
													obj_t BgL_list1784z00_353;

													{	/* Jas/profile.scm 97 */
														obj_t BgL_arg1785z00_354;

														{	/* Jas/profile.scm 97 */
															obj_t BgL_arg1786z00_355;

															{	/* Jas/profile.scm 97 */
																obj_t BgL_arg1787z00_356;

																BgL_arg1787z00_356 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg1786z00_355 =
																	MAKE_PAIR(BGl_string2760z00zzjas_profilez00,
																	BgL_arg1787z00_356);
															}
															BgL_arg1785z00_354 =
																MAKE_PAIR(BgL_arg1779z00_350,
																BgL_arg1786z00_355);
														}
														BgL_list1784z00_353 =
															MAKE_PAIR(BgL_arg1778z00_349, BgL_arg1785z00_354);
													}
													BgL_arg1776z00_347 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1777z00_348, BgL_list1784z00_353);
											}}
											BgL_arg1771z00_343 =
												MAKE_PAIR(BgL_arg1775z00_346, BgL_arg1776z00_347);
										}
										{	/* Jas/profile.scm 97 */
											obj_t BgL_list1773z00_345;

											BgL_list1773z00_345 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1770z00_342 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1771z00_343, BgL_list1773z00_345);
									}}
									BgL_arg1767z00_339 =
										MAKE_PAIR(BgL_arg1769z00_341, BgL_arg1770z00_342);
								}
								BgL_arg1758z00_336 = MAKE_PAIR(BgL_arg1767z00_339, BNIL);
							}
						BgL_arg1764z00_337 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_declsz00_7,
							BNIL);
						BgL_arg1743z00_322 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg1758z00_336, BgL_arg1764z00_337);
					}
					{	/* Jas/profile.scm 92 */
						obj_t BgL_list1744z00_323;

						{	/* Jas/profile.scm 92 */
							obj_t BgL_arg1745z00_324;

							BgL_arg1745z00_324 = MAKE_PAIR(BgL_arg1743z00_322, BNIL);
							BgL_list1744z00_323 =
								MAKE_PAIR(BgL_arg1742z00_321, BgL_arg1745z00_324);
						}
						BgL_arg1736z00_316 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1741z00_320,
							BgL_list1744z00_323);
				}}
				return MAKE_PAIR(BgL_arg1735z00_315, BgL_arg1736z00_316);
			}
		}
	}



/* mf */
	obj_t BGl_mfz00zzjas_profilez00(BgL__envz00_bglt BgL_instance1600z00_1340,
		obj_t BgL_namez00_360, obj_t BgL_tyz00_361, obj_t BgL_strz00_362)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 91 */
			{	/* Jas/profile.scm 91 */
				obj_t BgL_arg1793z00_364;

				{	/* Jas/profile.scm 91 */
					obj_t BgL_arg1794z00_365;

					{	/* Jas/profile.scm 91 */
						obj_t BgL_arg1797z00_368;

						obj_t BgL_arg1798z00_369;

						BgL_arg1797z00_368 = CNST_TABLE_REF(((long) 12));
						{	/* Jas/profile.scm 91 */
							obj_t BgL_arg1799z00_370;

							obj_t BgL_arg1800z00_371;

							BgL_arg1799z00_370 =
								(((BgL__envz00_bglt) CREF(BgL_instance1600z00_1340))->
								BgL_thisz00);
							{	/* Jas/profile.scm 91 */
								obj_t BgL_arg1806z00_377;

								obj_t BgL_arg1807z00_378;

								BgL_arg1806z00_377 = CNST_TABLE_REF(((long) 9));
								{	/* Jas/profile.scm 91 */
									obj_t BgL_list1808z00_379;

									BgL_list1808z00_379 = MAKE_PAIR(BNIL, BNIL);
									BgL_arg1807z00_378 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
												(long) 10)), BgL_list1808z00_379);
								}
								BgL_arg1800z00_371 =
									MAKE_PAIR(BgL_arg1806z00_377, BgL_arg1807z00_378);
							}
							{	/* Jas/profile.scm 91 */
								obj_t BgL_list1802z00_373;

								{	/* Jas/profile.scm 91 */
									obj_t BgL_arg1803z00_374;

									{	/* Jas/profile.scm 91 */
										obj_t BgL_arg1804z00_375;

										{	/* Jas/profile.scm 91 */
											obj_t BgL_arg1805z00_376;

											BgL_arg1805z00_376 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg1804z00_375 =
												MAKE_PAIR(BgL_strz00_362, BgL_arg1805z00_376);
										}
										BgL_arg1803z00_374 =
											MAKE_PAIR(BgL_tyz00_361, BgL_arg1804z00_375);
									}
									BgL_list1802z00_373 =
										MAKE_PAIR(BgL_arg1800z00_371, BgL_arg1803z00_374);
								}
								BgL_arg1798z00_369 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg1799z00_370, BgL_list1802z00_373);
						}}
						BgL_arg1794z00_365 =
							MAKE_PAIR(BgL_arg1797z00_368, BgL_arg1798z00_369);
					}
					{	/* Jas/profile.scm 91 */
						obj_t BgL_list1796z00_367;

						BgL_list1796z00_367 = MAKE_PAIR(BNIL, BNIL);
						BgL_arg1793z00_364 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1794z00_365,
							BgL_list1796z00_367);
				}}
				return MAKE_PAIR(BgL_namez00_360, BgL_arg1793z00_364);
			}
		}
	}



/* profile-infos */
	obj_t BGl_profilezd2infoszd2zzjas_profilez00(BgL__envz00_bglt BgL_envz00_8,
		obj_t BgL_infosz00_9)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 103 */
			{
				obj_t BgL_idz00_426;

				obj_t BgL_lz00_427;

				if (NULLP(BgL_infosz00_9))
					{	/* Jas/profile.scm 110 */
						return BNIL;
					}
				else
					{	/* Jas/profile.scm 111 */
						bool_t BgL_testz00_1635;

						{	/* Jas/profile.scm 111 */
							bool_t BgL_testz00_1636;

							{	/* Jas/profile.scm 111 */
								obj_t BgL_auxz00_1637;

								{	/* Jas/profile.scm 111 */
									obj_t BgL_pairz00_1031;

									BgL_pairz00_1031 = BgL_infosz00_9;
									BgL_auxz00_1637 = CAR(CAR(BgL_pairz00_1031));
								}
								BgL_testz00_1636 =
									(BgL_auxz00_1637 == CNST_TABLE_REF(((long) 13)));
							}
							if (BgL_testz00_1636)
								{	/* Jas/profile.scm 111 */
									BgL_testz00_1635 = ((bool_t) 1);
								}
							else
								{	/* Jas/profile.scm 111 */
									obj_t BgL_auxz00_1642;

									{	/* Jas/profile.scm 111 */
										obj_t BgL_pairz00_1035;

										BgL_pairz00_1035 = BgL_infosz00_9;
										BgL_auxz00_1642 = CAR(CAR(BgL_pairz00_1035));
									}
									BgL_testz00_1635 =
										(BgL_auxz00_1642 == CNST_TABLE_REF(((long) 14)));
						}}
						if (BgL_testz00_1635)
							{	/* Jas/profile.scm 111 */
								return
									MAKE_PAIR(CAR(BgL_infosz00_9),
									BGl_profilezd2infoszd2zzjas_profilez00(BgL_envz00_8,
										CDR(BgL_infosz00_9)));
							}
						else
							{	/* Jas/profile.scm 113 */
								bool_t BgL_testz00_1651;

								{	/* Jas/profile.scm 113 */
									obj_t BgL_auxz00_1652;

									{	/* Jas/profile.scm 113 */
										obj_t BgL_pairz00_1041;

										BgL_pairz00_1041 = BgL_infosz00_9;
										BgL_auxz00_1652 = CAR(CAR(BgL_pairz00_1041));
									}
									BgL_testz00_1651 =
										(BgL_auxz00_1652 == CNST_TABLE_REF(((long) 15)));
								}
								if (BgL_testz00_1651)
									{	/* Jas/profile.scm 115 */
										obj_t BgL_arg1815z00_389;

										obj_t BgL_arg1816z00_390;

										{	/* Jas/profile.scm 115 */
											obj_t BgL_arg1817z00_391;

											obj_t BgL_arg1818z00_392;

											BgL_arg1817z00_391 = CNST_TABLE_REF(((long) 15));
											{	/* Jas/profile.scm 115 */
												obj_t BgL_arg1819z00_393;

												obj_t BgL_arg1820z00_394;

												obj_t BgL_arg1821z00_395;

												obj_t BgL_arg1822z00_396;

												BgL_arg1819z00_393 =
													(((BgL__envz00_bglt) CREF(BgL_envz00_8))->BgL_resz00);
												BgL_arg1820z00_394 =
													(((BgL__envz00_bglt) CREF(BgL_envz00_8))->
													BgL_namesz00);
												BgL_arg1821z00_395 =
													(((BgL__envz00_bglt) CREF(BgL_envz00_8))->
													BgL_linesz00);
												{	/* Jas/profile.scm 115 */
													obj_t BgL_auxz00_1661;

													{	/* Jas/profile.scm 115 */
														obj_t BgL_pairz00_1048;

														BgL_pairz00_1048 = BgL_infosz00_9;
														BgL_auxz00_1661 = CDR(CAR(BgL_pairz00_1048));
													}
													BgL_arg1822z00_396 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_auxz00_1661, BNIL);
												}
												{	/* Jas/profile.scm 115 */
													obj_t BgL_list1823z00_397;

													{	/* Jas/profile.scm 115 */
														obj_t BgL_arg1824z00_398;

														{	/* Jas/profile.scm 115 */
															obj_t BgL_arg1825z00_399;

															BgL_arg1825z00_399 =
																MAKE_PAIR(BgL_arg1822z00_396, BNIL);
															BgL_arg1824z00_398 =
																MAKE_PAIR(BgL_arg1821z00_395,
																BgL_arg1825z00_399);
														}
														BgL_list1823z00_397 =
															MAKE_PAIR(BgL_arg1820z00_394, BgL_arg1824z00_398);
													}
													BgL_arg1818z00_392 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1819z00_393, BgL_list1823z00_397);
											}}
											BgL_arg1815z00_389 =
												MAKE_PAIR(BgL_arg1817z00_391, BgL_arg1818z00_392);
										}
										BgL_arg1816z00_390 =
											BGl_profilezd2infoszd2zzjas_profilez00(BgL_envz00_8,
											CDR(BgL_infosz00_9));
										return MAKE_PAIR(BgL_arg1815z00_389, BgL_arg1816z00_390);
									}
								else
									{	/* Jas/profile.scm 118 */
										obj_t BgL_extraz00_403;

										BgL_extraz00_403 =
											BGl_profilezd2extrazd2clinitz00zzjas_profilez00
											(BgL_envz00_8, BgL_infosz00_9);
										{	/* Jas/profile.scm 119 */
											obj_t BgL_rz00_404;

											BgL_rz00_404 =
												BGl_profilezd2methodszd2zzjas_profilez00(BgL_envz00_8,
												BgL_infosz00_9);
											if (CBOOL((((BgL__envz00_bglt) CREF(BgL_envz00_8))->
														BgL_has_clinitz00)))
												{	/* Jas/profile.scm 122 */
													obj_t BgL_slotz00_407;

													{	/* Jas/profile.scm 122 */
														obj_t BgL_arg1832z00_410;

														BgL_arg1832z00_410 =
															(((BgL__envz00_bglt) CREF(BgL_envz00_8))->
															BgL_clinitz00);
														BgL_idz00_426 = BgL_arg1832z00_410;
														BgL_lz00_427 = BgL_rz00_404;
													BgL_zc3anonymousza31853ze3z83_428:
														if (NULLP(BgL_lz00_427))
															{	/* Jas/profile.scm 105 */
																BgL_slotz00_407 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2756z00zzjas_profilez00,
																	BGl_string2766z00zzjas_profilez00,
																	BgL_idz00_426);
															}
														else
															{	/* Jas/profile.scm 106 */
																bool_t BgL_testz00_1682;

																{	/* Jas/profile.scm 106 */
																	obj_t BgL_auxz00_1683;

																	{	/* Jas/profile.scm 106 */
																		obj_t BgL_pairz00_1060;

																		BgL_pairz00_1060 = BgL_lz00_427;
																		BgL_auxz00_1683 =
																			CAR(CDR(CAR(BgL_pairz00_1060)));
																	}
																	BgL_testz00_1682 =
																		(BgL_auxz00_1683 == BgL_idz00_426);
																}
																if (BgL_testz00_1682)
																	{	/* Jas/profile.scm 107 */
																		obj_t BgL_pairz00_1066;

																		BgL_pairz00_1066 = BgL_lz00_427;
																		BgL_slotz00_407 =
																			CDR(CDR(CDR(CAR(BgL_pairz00_1066))));
																	}
																else
																	{
																		obj_t BgL_lz00_1692;

																		BgL_lz00_1692 = CDR(BgL_lz00_427);
																		BgL_lz00_427 = BgL_lz00_1692;
																		goto BgL_zc3anonymousza31853ze3z83_428;
																	}
															}
													}
													{	/* Jas/profile.scm 123 */
														obj_t BgL_auxz00_1694;

														BgL_auxz00_1694 =
															bgl_append2(BgL_extraz00_403,
															CDR(BgL_slotz00_407));
														SET_CDR(BgL_slotz00_407, BgL_auxz00_1694);
													}
													return BgL_rz00_404;
												}
											else
												{	/* Jas/profile.scm 126 */
													obj_t BgL_arg1834z00_411;

													{	/* Jas/profile.scm 126 */
														obj_t BgL_arg1835z00_412;

														obj_t BgL_arg1836z00_413;

														BgL_arg1835z00_412 =
															(((BgL__envz00_bglt) CREF(BgL_envz00_8))->
															BgL_clinitz00);
														{	/* Jas/profile.scm 126 */
															obj_t BgL_arg1840z00_416;

															BgL_arg1840z00_416 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_extraz00_403, BNIL);
															{	/* Jas/profile.scm 126 */
																obj_t BgL_list1841z00_417;

																{	/* Jas/profile.scm 126 */
																	obj_t BgL_arg1842z00_418;

																	BgL_arg1842z00_418 =
																		MAKE_PAIR(BgL_arg1840z00_416, BNIL);
																	BgL_list1841z00_417 =
																		MAKE_PAIR(BNIL, BgL_arg1842z00_418);
																}
																BgL_arg1836z00_413 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BNIL, BgL_list1841z00_417);
															}
														}
														BgL_arg1834z00_411 =
															MAKE_PAIR(BgL_arg1835z00_412, BgL_arg1836z00_413);
													}
													return MAKE_PAIR(BgL_arg1834z00_411, BgL_rz00_404);
												}
										}
									}
							}
					}
			}
		}
	}



/* profile-methods */
	obj_t BGl_profilezd2methodszd2zzjas_profilez00(BgL__envz00_bglt BgL_envz00_10,
		obj_t BgL_methodsz00_11)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 128 */
			{
				long BgL_iz00_448;

				obj_t BgL_mz00_449;

				{
					obj_t BgL_lz00_437;

					long BgL_iz00_438;

					obj_t BgL_rz00_439;

					BgL_lz00_437 = BgL_methodsz00_11;
					BgL_iz00_438 = ((long) 0);
					BgL_rz00_439 = BNIL;
				BgL_zc3anonymousza31858ze3z83_440:
					if (NULLP(BgL_lz00_437))
						{	/* Jas/profile.scm 135 */
							return bgl_reverse_bang(BgL_rz00_439);
						}
					else
						{	/* Jas/profile.scm 137 */
							obj_t BgL_arg1860z00_442;

							long BgL_arg1861z00_443;

							obj_t BgL_arg1862z00_444;

							BgL_arg1860z00_442 = CDR(BgL_lz00_437);
							BgL_arg1861z00_443 = (BgL_iz00_438 + ((long) 1));
							{	/* Jas/profile.scm 137 */
								obj_t BgL_auxz00_1710;

								BgL_iz00_448 = BgL_iz00_438;
								BgL_mz00_449 = CAR(BgL_lz00_437);
								{
									obj_t BgL_gnamez00_451;

									obj_t BgL_paramsz00_452;

									obj_t BgL_localsz00_453;

									obj_t BgL_codez00_454;

									if (PAIRP(BgL_mz00_449))
										{	/* Jas/profile.scm 133 */
											obj_t BgL_cdrzd21471zd2_459;

											BgL_cdrzd21471zd2_459 = CDR(BgL_mz00_449);
											if ((CAR(BgL_mz00_449) == CNST_TABLE_REF(((long) 8))))
												{	/* Jas/profile.scm 133 */
													if (PAIRP(BgL_cdrzd21471zd2_459))
														{	/* Jas/profile.scm 133 */
															obj_t BgL_cdrzd21477zd2_462;

															BgL_cdrzd21477zd2_462 =
																CDR(BgL_cdrzd21471zd2_459);
															if (PAIRP(BgL_cdrzd21477zd2_462))
																{	/* Jas/profile.scm 133 */
																	obj_t BgL_cdrzd21483zd2_464;

																	BgL_cdrzd21483zd2_464 =
																		CDR(BgL_cdrzd21477zd2_462);
																	if (PAIRP(BgL_cdrzd21483zd2_464))
																		{	/* Jas/profile.scm 133 */
																			BgL_gnamez00_451 =
																				CAR(BgL_cdrzd21471zd2_459);
																			BgL_paramsz00_452 =
																				CAR(BgL_cdrzd21477zd2_462);
																			BgL_localsz00_453 =
																				CAR(BgL_cdrzd21483zd2_464);
																			BgL_codez00_454 =
																				CDR(BgL_cdrzd21483zd2_464);
																			{	/* Jas/profile.scm 132 */
																				obj_t BgL_arg1877z00_472;

																				obj_t BgL_arg1878z00_473;

																				BgL_arg1877z00_472 =
																					CNST_TABLE_REF(((long) 8));
																				{	/* Jas/profile.scm 132 */
																					obj_t BgL_arg1879z00_474;

																					BgL_arg1879z00_474 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BGl_profilezd2codezd2zzjas_profilez00
																						(BgL_envz00_10, BgL_iz00_448,
																							BgL_codez00_454), BNIL);
																					{	/* Jas/profile.scm 132 */
																						obj_t BgL_list1880z00_475;

																						{	/* Jas/profile.scm 132 */
																							obj_t BgL_arg1881z00_476;

																							{	/* Jas/profile.scm 132 */
																								obj_t BgL_arg1882z00_477;

																								BgL_arg1882z00_477 =
																									MAKE_PAIR(BgL_arg1879z00_474,
																									BNIL);
																								BgL_arg1881z00_476 =
																									MAKE_PAIR(BgL_localsz00_453,
																									BgL_arg1882z00_477);
																							}
																							BgL_list1880z00_475 =
																								MAKE_PAIR(BgL_paramsz00_452,
																								BgL_arg1881z00_476);
																						}
																						BgL_arg1878z00_473 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_gnamez00_451,
																							BgL_list1880z00_475);
																				}}
																				BgL_auxz00_1710 =
																					MAKE_PAIR(BgL_arg1877z00_472,
																					BgL_arg1878z00_473);
																		}}
																	else
																		{	/* Jas/profile.scm 133 */
																		BgL_tagzd21460zd2_456:
																			BgL_auxz00_1710 =
																				BGl_errorz00zz__errorz00
																				(BGl_string2767z00zzjas_profilez00,
																				BGl_string2768z00zzjas_profilez00,
																				BgL_mz00_449);
																		}
																}
															else
																{	/* Jas/profile.scm 133 */
																	goto BgL_tagzd21460zd2_456;
																}
														}
													else
														{	/* Jas/profile.scm 133 */
															goto BgL_tagzd21460zd2_456;
														}
												}
											else
												{	/* Jas/profile.scm 133 */
													goto BgL_tagzd21460zd2_456;
												}
										}
									else
										{	/* Jas/profile.scm 133 */
											goto BgL_tagzd21460zd2_456;
										}
								}
								BgL_arg1862z00_444 = MAKE_PAIR(BgL_auxz00_1710, BgL_rz00_439);
							}
							{
								obj_t BgL_rz00_1743;

								long BgL_iz00_1742;

								obj_t BgL_lz00_1741;

								BgL_lz00_1741 = BgL_arg1860z00_442;
								BgL_iz00_1742 = BgL_arg1861z00_443;
								BgL_rz00_1743 = BgL_arg1862z00_444;
								BgL_rz00_439 = BgL_rz00_1743;
								BgL_iz00_438 = BgL_iz00_1742;
								BgL_lz00_437 = BgL_lz00_1741;
								goto BgL_zc3anonymousza31858ze3z83_440;
							}
						}
				}
			}
		}
	}



/* profile-code */
	obj_t BGl_profilezd2codezd2zzjas_profilez00(BgL__envz00_bglt BgL_envz00_12,
		long BgL_curzd2fntzd2_13, obj_t BgL_lz00_14)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 139 */
			{
				obj_t BgL_lz00_529;

				long BgL_iz00_530;

				obj_t BgL_rz00_531;

				obj_t BgL_lz00_514;

				long BgL_iz00_515;

				obj_t BgL_rz00_516;

				obj_t BgL_extraz00_517;

				long BgL_iz00_487;

				{	/* Jas/profile.scm 168 */
					obj_t BgL_arg1886z00_484;

					BgL_arg1886z00_484 =
						MAKE_PAIR(CNST_TABLE_REF(((long) 24)), BgL_lz00_14);
					BgL_lz00_529 = BgL_arg1886z00_484;
					BgL_iz00_530 = ((long) 0);
					BgL_rz00_531 = BNIL;
				BgL_zc3anonymousza31928ze3z83_532:
					if (NULLP(BgL_lz00_529))
						{	/* Jas/profile.scm 164 */
							return bgl_reverse_bang(BgL_rz00_531);
						}
					else
						{	/* Jas/profile.scm 165 */
							bool_t BgL_testz00_1749;

							{	/* Jas/profile.scm 165 */
								obj_t BgL_auxz00_1750;

								BgL_auxz00_1750 = CAR(BgL_lz00_529);
								BgL_testz00_1749 = PAIRP(BgL_auxz00_1750);
							}
							if (BgL_testz00_1749)
								{	/* Jas/profile.scm 167 */
									obj_t BgL_arg1931z00_535;

									obj_t BgL_arg1932z00_536;

									BgL_arg1931z00_535 = CDR(BgL_lz00_529);
									BgL_arg1932z00_536 =
										MAKE_PAIR(CAR(BgL_lz00_529), BgL_rz00_531);
									{
										obj_t BgL_rz00_1757;

										obj_t BgL_lz00_1756;

										BgL_lz00_1756 = BgL_arg1931z00_535;
										BgL_rz00_1757 = BgL_arg1932z00_536;
										BgL_rz00_531 = BgL_rz00_1757;
										BgL_lz00_529 = BgL_lz00_1756;
										goto BgL_zc3anonymousza31928ze3z83_532;
									}
								}
							else
								{	/* Jas/profile.scm 165 */
									BgL_lz00_514 = BgL_lz00_529;
									BgL_iz00_515 = (BgL_iz00_530 + ((long) 1));
									BgL_rz00_516 = BgL_rz00_531;
									BgL_iz00_487 = BgL_iz00_530;
									{	/* Jas/profile.scm 143 */
										obj_t BgL_arg1890z00_490;

										obj_t BgL_arg1892z00_491;

										BgL_arg1890z00_490 =
											MAKE_PAIR(CNST_TABLE_REF(((long) 16)), BNIL);
										{	/* Jas/profile.scm 144 */
											obj_t BgL_arg1893z00_492;

											obj_t BgL_arg1894z00_493;

											obj_t BgL_arg1895z00_494;

											obj_t BgL_arg1896z00_495;

											obj_t BgL_arg1898z00_496;

											obj_t BgL_arg1899z00_497;

											obj_t BgL_arg1900z00_498;

											obj_t BgL_arg1901z00_499;

											BgL_arg1893z00_492 =
												MAKE_PAIR(CNST_TABLE_REF(((long) 17)), BNIL);
											BgL_arg1894z00_493 =
												MAKE_PAIR(CNST_TABLE_REF(((long) 18)), BNIL);
											BgL_arg1895z00_494 =
												MAKE_PAIR(CNST_TABLE_REF(((long) 19)), BNIL);
											BgL_arg1896z00_495 =
												MAKE_PAIR(CNST_TABLE_REF(((long) 20)), BNIL);
											BgL_arg1898z00_496 =
												BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_iz00_487));
											BgL_arg1899z00_497 =
												MAKE_PAIR(CNST_TABLE_REF(((long) 21)), BNIL);
											BgL_arg1900z00_498 =
												BGl_pushzd2intzd2zzjas_profilez00(BINT
												(BgL_curzd2fntzd2_13));
											{	/* Jas/profile.scm 151 */
												obj_t BgL_arg1911z00_509;

												obj_t BgL_arg1912z00_510;

												BgL_arg1911z00_509 = CNST_TABLE_REF(((long) 22));
												{	/* Jas/profile.scm 151 */
													obj_t BgL_arg1914z00_511;

													BgL_arg1914z00_511 =
														(((BgL__envz00_bglt) CREF(BgL_envz00_12))->
														BgL_resz00);
													{	/* Jas/profile.scm 151 */
														obj_t BgL_list1916z00_513;

														BgL_list1916z00_513 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1912z00_510 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1914z00_511, BgL_list1916z00_513);
												}}
												BgL_arg1901z00_499 =
													MAKE_PAIR(BgL_arg1911z00_509, BgL_arg1912z00_510);
											}
											{	/* Jas/profile.scm 142 */
												obj_t BgL_list1903z00_501;

												{	/* Jas/profile.scm 142 */
													obj_t BgL_arg1904z00_502;

													{	/* Jas/profile.scm 142 */
														obj_t BgL_arg1905z00_503;

														{	/* Jas/profile.scm 142 */
															obj_t BgL_arg1906z00_504;

															{	/* Jas/profile.scm 142 */
																obj_t BgL_arg1907z00_505;

																{	/* Jas/profile.scm 142 */
																	obj_t BgL_arg1908z00_506;

																	{	/* Jas/profile.scm 142 */
																		obj_t BgL_arg1909z00_507;

																		{	/* Jas/profile.scm 142 */
																			obj_t BgL_arg1910z00_508;

																			BgL_arg1910z00_508 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg1909z00_507 =
																				MAKE_PAIR(BgL_arg1901z00_499,
																				BgL_arg1910z00_508);
																		}
																		BgL_arg1908z00_506 =
																			MAKE_PAIR(BgL_arg1900z00_498,
																			BgL_arg1909z00_507);
																	}
																	BgL_arg1907z00_505 =
																		MAKE_PAIR(BgL_arg1899z00_497,
																		BgL_arg1908z00_506);
																}
																BgL_arg1906z00_504 =
																	MAKE_PAIR(BgL_arg1898z00_496,
																	BgL_arg1907z00_505);
															}
															BgL_arg1905z00_503 =
																MAKE_PAIR(BgL_arg1896z00_495,
																BgL_arg1906z00_504);
														}
														BgL_arg1904z00_502 =
															MAKE_PAIR(BgL_arg1895z00_494, BgL_arg1905z00_503);
													}
													BgL_list1903z00_501 =
														MAKE_PAIR(BgL_arg1894z00_493, BgL_arg1904z00_502);
												}
												BgL_arg1892z00_491 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1893z00_492, BgL_list1903z00_501);
										}}
										BgL_extraz00_517 =
											MAKE_PAIR(BgL_arg1890z00_490, BgL_arg1892z00_491);
									}
								BgL_zc3anonymousza31917ze3z83_518:
									if (NULLP(BgL_lz00_514))
										{	/* Jas/profile.scm 157 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2769z00zzjas_profilez00,
												BGl_string2770z00zzjas_profilez00, BgL_lz00_514);
										}
									else
										{	/* Jas/profile.scm 158 */
											bool_t BgL_testz00_1761;

											{	/* Jas/profile.scm 158 */
												bool_t BgL_testz00_1762;

												{	/* Jas/profile.scm 158 */
													obj_t BgL_auxz00_1763;

													BgL_auxz00_1763 = CAR(BgL_lz00_514);
													BgL_testz00_1762 = PAIRP(BgL_auxz00_1763);
												}
												if (BgL_testz00_1762)
													{	/* Jas/profile.scm 159 */
														obj_t BgL_auxz00_1766;

														{	/* Jas/profile.scm 159 */
															obj_t BgL_auxz00_1767;

															{	/* Jas/profile.scm 159 */
																obj_t BgL_pairz00_1096;

																BgL_pairz00_1096 = BgL_lz00_514;
																BgL_auxz00_1767 = CAR(CAR(BgL_pairz00_1096));
															}
															BgL_auxz00_1766 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_1767, CNST_TABLE_REF(((long) 23)));
														}
														BgL_testz00_1761 = CBOOL(BgL_auxz00_1766);
													}
												else
													{	/* Jas/profile.scm 158 */
														BgL_testz00_1761 = ((bool_t) 1);
													}
											}
											if (BgL_testz00_1761)
												{	/* Jas/profile.scm 160 */
													obj_t BgL_arg1920z00_521;

													obj_t BgL_arg1921z00_522;

													BgL_arg1920z00_521 = CDR(BgL_lz00_514);
													BgL_arg1921z00_522 =
														MAKE_PAIR(CAR(BgL_lz00_514), BgL_rz00_516);
													{
														obj_t BgL_rz00_1777;

														obj_t BgL_lz00_1776;

														BgL_lz00_1776 = BgL_arg1920z00_521;
														BgL_rz00_1777 = BgL_arg1921z00_522;
														BgL_rz00_516 = BgL_rz00_1777;
														BgL_lz00_514 = BgL_lz00_1776;
														goto BgL_zc3anonymousza31917ze3z83_518;
													}
												}
											else
												{
													obj_t BgL_rz00_1780;

													long BgL_iz00_1779;

													obj_t BgL_lz00_1778;

													BgL_lz00_1778 = BgL_lz00_514;
													BgL_iz00_1779 = BgL_iz00_515;
													BgL_rz00_1780 =
														bgl_append2(BgL_extraz00_517, BgL_rz00_516);
													BgL_rz00_531 = BgL_rz00_1780;
													BgL_iz00_530 = BgL_iz00_1779;
													BgL_lz00_529 = BgL_lz00_1778;
													goto BgL_zc3anonymousza31928ze3z83_532;
												}
										}
								}
						}
				}
			}
		}
	}



/* push-int */
	obj_t BGl_pushzd2intzd2zzjas_profilez00(obj_t BgL_nz00_15)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 170 */
			{

				if (INTEGERP(BgL_nz00_15))
					{	/* Jas/profile.scm 171 */
						switch ((long) CINT(BgL_nz00_15))
							{
							case ((long) -1):

								return CNST_TABLE_REF(((long) 28));
								break;
							case ((long) 0):

								return CNST_TABLE_REF(((long) 29));
								break;
							case ((long) 1):

								return CNST_TABLE_REF(((long) 30));
								break;
							case ((long) 2):

								return CNST_TABLE_REF(((long) 31));
								break;
							case ((long) 3):

								return CNST_TABLE_REF(((long) 32));
								break;
							case ((long) 4):

								return CNST_TABLE_REF(((long) 33));
								break;
							case ((long) 5):

								return CNST_TABLE_REF(((long) 34));
								break;
							default:
							BgL_case_else1609z00_544:
								{	/* Jas/profile.scm 180 */
									bool_t BgL_testz00_1823;

									if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_nz00_15,
											BINT(((long) -129))))
										{	/* Jas/profile.scm 180 */
											BgL_testz00_1823 =
												BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_nz00_15,
												BINT(((long) 128)));
										}
									else
										{	/* Jas/profile.scm 180 */
											BgL_testz00_1823 = ((bool_t) 0);
										}
									if (BgL_testz00_1823)
										{	/* Jas/profile.scm 180 */
											obj_t BgL_arg1943z00_548;

											obj_t BgL_arg1944z00_549;

											BgL_arg1943z00_548 = CNST_TABLE_REF(((long) 25));
											{	/* Jas/profile.scm 180 */
												obj_t BgL_list1945z00_550;

												BgL_list1945z00_550 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg1944z00_549 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_nz00_15, BgL_list1945z00_550);
											}
											return MAKE_PAIR(BgL_arg1943z00_548, BgL_arg1944z00_549);
										}
									else
										{	/* Jas/profile.scm 181 */
											bool_t BgL_testz00_1833;

											if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_nz00_15,
													BINT(((long) -32769))))
												{	/* Jas/profile.scm 181 */
													BgL_testz00_1833 =
														BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_nz00_15,
														BINT(((long) 32768)));
												}
											else
												{	/* Jas/profile.scm 181 */
													BgL_testz00_1833 = ((bool_t) 0);
												}
											if (BgL_testz00_1833)
												{	/* Jas/profile.scm 181 */
													obj_t BgL_arg1948z00_552;

													obj_t BgL_arg1949z00_553;

													BgL_arg1948z00_552 = CNST_TABLE_REF(((long) 26));
													{	/* Jas/profile.scm 181 */
														obj_t BgL_list1950z00_554;

														BgL_list1950z00_554 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1949z00_553 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_nz00_15, BgL_list1950z00_554);
													}
													return
														MAKE_PAIR(BgL_arg1948z00_552, BgL_arg1949z00_553);
												}
											else
												{	/* Jas/profile.scm 182 */
													obj_t BgL_arg1952z00_555;

													obj_t BgL_arg1955z00_556;

													BgL_arg1952z00_555 = CNST_TABLE_REF(((long) 27));
													{	/* Jas/profile.scm 182 */
														obj_t BgL_list1956z00_557;

														BgL_list1956z00_557 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg1955z00_556 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_nz00_15, BgL_list1956z00_557);
													}
													return
														MAKE_PAIR(BgL_arg1952z00_555, BgL_arg1955z00_556);
												}
										}
								}
							}
					}
				else
					{	/* Jas/profile.scm 171 */
						goto BgL_case_else1609z00_544;
					}
			}
		}
	}



/* profile-extra-clinit */
	obj_t BGl_profilezd2extrazd2clinitz00zzjas_profilez00(BgL__envz00_bglt
		BgL_envz00_16, obj_t BgL_methodsz00_17)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 187 */
			{	/* Jas/profile.scm 189 */
				long BgL_siza7eza7_561;

				BgL_siza7eza7_561 =
					bgl_list_length(
					(((BgL__envz00_bglt) CREF(BgL_envz00_16))->BgL_lnamesz00));
				{	/* Jas/profile.scm 190 */
					obj_t BgL_arg1962z00_562;

					obj_t BgL_arg1963z00_563;

					{	/* Jas/profile.scm 190 */
						obj_t BgL_arg1967z00_564;

						obj_t BgL_arg1968z00_565;

						obj_t BgL_arg1969z00_566;

						BgL_arg1967z00_564 =
							(((BgL__envz00_bglt) CREF(BgL_envz00_16))->BgL_namesz00);
						BgL_arg1968z00_565 =
							(((BgL__envz00_bglt) CREF(BgL_envz00_16))->BgL_lnamesz00);
						BgL_arg1969z00_566 =
							(((BgL__envz00_bglt) CREF(BgL_envz00_16))->BgL_jstringz00);
						BgL_arg1962z00_562 =
							BGl_profilezd2makezd2namesz00zzjas_profilez00(BgL_siza7eza7_561,
							BgL_arg1967z00_564, BgL_arg1968z00_565, BgL_arg1969z00_566);
					}
					{	/* Jas/profile.scm 191 */
						obj_t BgL_arg1970z00_567;

						obj_t BgL_arg1971z00_568;

						{	/* Jas/profile.scm 191 */
							obj_t BgL_arg1972z00_569;

							BgL_arg1972z00_569 =
								(((BgL__envz00_bglt) CREF(BgL_envz00_16))->BgL_linesz00);
							BgL_arg1970z00_567 =
								BGl_profilezd2makezd2linesz00zzjas_profilez00(BgL_siza7eza7_561,
								BgL_arg1972z00_569, BgL_methodsz00_17);
						}
						{	/* Jas/profile.scm 192 */
							obj_t BgL_arg1976z00_570;

							{	/* Jas/profile.scm 192 */
								obj_t BgL_arg1984z00_572;

								BgL_arg1984z00_572 =
									(((BgL__envz00_bglt) CREF(BgL_envz00_16))->BgL_resz00);
								BgL_arg1976z00_570 =
									BGl_profilezd2makezd2resz00zzjas_profilez00(BgL_siza7eza7_561,
									BgL_arg1984z00_572, BgL_methodsz00_17);
							}
							BgL_arg1971z00_568 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1976z00_570, BNIL);
						}
						BgL_arg1963z00_563 =
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
							(BgL_arg1970z00_567, BgL_arg1971z00_568);
					}
					return
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1962z00_562,
						BgL_arg1963z00_563);
				}
			}
		}
	}



/* profile-make-names */
	obj_t BGl_profilezd2makezd2namesz00zzjas_profilez00(long BgL_siza7eza7_18,
		obj_t BgL_namesz00_19, obj_t BgL_lz00_20, obj_t BgL_jstringz00_21)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 194 */
			{
				obj_t BgL_codez00_591;

				long BgL_iz00_592;

				obj_t BgL_namesz00_593;

				{	/* Jas/profile.scm 202 */
					obj_t BgL_arg1988z00_575;

					{	/* Jas/profile.scm 202 */
						obj_t BgL_arg1989z00_576;

						obj_t BgL_arg1990z00_577;

						{	/* Jas/profile.scm 202 */
							obj_t BgL_arg1991z00_578;

							obj_t BgL_arg1992z00_579;

							BgL_arg1991z00_578 = CNST_TABLE_REF(((long) 37));
							{	/* Jas/profile.scm 202 */
								obj_t BgL_list1993z00_580;

								BgL_list1993z00_580 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg1992z00_579 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_namesz00_19,
									BgL_list1993z00_580);
							}
							BgL_arg1989z00_576 =
								MAKE_PAIR(BgL_arg1991z00_578, BgL_arg1992z00_579);
						}
						{	/* Jas/profile.scm 203 */
							obj_t BgL_arg1994z00_581;

							{	/* Jas/profile.scm 203 */
								obj_t BgL_arg1996z00_583;

								obj_t BgL_arg1998z00_584;

								{	/* Jas/profile.scm 203 */
									obj_t BgL_arg1999z00_585;

									obj_t BgL_arg2000z00_586;

									BgL_arg1999z00_585 = CNST_TABLE_REF(((long) 38));
									{	/* Jas/profile.scm 203 */
										obj_t BgL_list2001z00_587;

										BgL_list2001z00_587 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2000z00_586 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_jstringz00_21, BgL_list2001z00_587);
									}
									BgL_arg1996z00_583 =
										MAKE_PAIR(BgL_arg1999z00_585, BgL_arg2000z00_586);
								}
								{	/* Jas/profile.scm 203 */
									obj_t BgL_arg2002z00_588;

									BgL_arg2002z00_588 =
										BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_siza7eza7_18));
									{	/* Jas/profile.scm 203 */
										obj_t BgL_list2004z00_590;

										BgL_list2004z00_590 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1998z00_584 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2002z00_588, BgL_list2004z00_590);
								}}
								BgL_arg1994z00_581 =
									MAKE_PAIR(BgL_arg1996z00_583, BgL_arg1998z00_584);
							}
							BgL_codez00_591 = BgL_arg1994z00_581;
							BgL_iz00_592 = ((long) 0);
							BgL_namesz00_593 = BgL_lz00_20;
						BgL_zc3anonymousza32005ze3z83_594:
							if (NULLP(BgL_namesz00_593))
								{	/* Jas/profile.scm 196 */
									BgL_arg1990z00_577 = BgL_codez00_591;
								}
							else
								{	/* Jas/profile.scm 198 */
									obj_t BgL_arg2012z00_596;

									long BgL_arg2021z00_597;

									obj_t BgL_arg2022z00_598;

									{	/* Jas/profile.scm 198 */
										obj_t BgL_arg2023z00_599;

										obj_t BgL_arg2027z00_600;

										BgL_arg2023z00_599 = CNST_TABLE_REF(((long) 35));
										{	/* Jas/profile.scm 198 */
											obj_t BgL_arg2028z00_601;

											obj_t BgL_arg2029z00_602;

											obj_t BgL_arg2031z00_603;

											{	/* Jas/profile.scm 198 */
												obj_t BgL_arg2037z00_607;

												obj_t BgL_arg2038z00_608;

												BgL_arg2037z00_607 = CNST_TABLE_REF(((long) 27));
												{	/* Jas/profile.scm 198 */
													obj_t BgL_arg2045z00_609;

													BgL_arg2045z00_609 = CAR(BgL_namesz00_593);
													{	/* Jas/profile.scm 198 */
														obj_t BgL_list2049z00_611;

														BgL_list2049z00_611 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2038z00_608 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2045z00_609, BgL_list2049z00_611);
												}}
												BgL_arg2028z00_601 =
													MAKE_PAIR(BgL_arg2037z00_607, BgL_arg2038z00_608);
											}
											BgL_arg2029z00_602 =
												BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_iz00_592));
											BgL_arg2031z00_603 = CNST_TABLE_REF(((long) 36));
											{	/* Jas/profile.scm 198 */
												obj_t BgL_list2032z00_604;

												{	/* Jas/profile.scm 198 */
													obj_t BgL_arg2033z00_605;

													{	/* Jas/profile.scm 198 */
														obj_t BgL_arg2034z00_606;

														BgL_arg2034z00_606 =
															MAKE_PAIR(BgL_codez00_591, BNIL);
														BgL_arg2033z00_605 =
															MAKE_PAIR(BgL_arg2031z00_603, BgL_arg2034z00_606);
													}
													BgL_list2032z00_604 =
														MAKE_PAIR(BgL_arg2029z00_602, BgL_arg2033z00_605);
												}
												BgL_arg2027z00_600 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2028z00_601, BgL_list2032z00_604);
										}}
										BgL_arg2012z00_596 =
											MAKE_PAIR(BgL_arg2023z00_599, BgL_arg2027z00_600);
									}
									BgL_arg2021z00_597 = (BgL_iz00_592 + ((long) 1));
									BgL_arg2022z00_598 = CDR(BgL_namesz00_593);
									{
										obj_t BgL_namesz00_1895;

										long BgL_iz00_1894;

										obj_t BgL_codez00_1893;

										BgL_codez00_1893 = BgL_arg2012z00_596;
										BgL_iz00_1894 = BgL_arg2021z00_597;
										BgL_namesz00_1895 = BgL_arg2022z00_598;
										BgL_namesz00_593 = BgL_namesz00_1895;
										BgL_iz00_592 = BgL_iz00_1894;
										BgL_codez00_591 = BgL_codez00_1893;
										goto BgL_zc3anonymousza32005ze3z83_594;
									}
								}
						}
						BgL_arg1988z00_575 =
							MAKE_PAIR(BgL_arg1989z00_576, BgL_arg1990z00_577);
					}
					return bgl_reverse_bang(BgL_arg1988z00_575);
				}
			}
		}
	}



/* profile-make-lines */
	obj_t BGl_profilezd2makezd2linesz00zzjas_profilez00(long BgL_siza7eza7_22,
		obj_t BgL_linesz00_23, obj_t BgL_methodsz00_24)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 205 */
			{
				obj_t BgL_codez00_703;

				long BgL_iz00_704;

				obj_t BgL_methodsz00_705;

				obj_t BgL_codez00_686;

				long BgL_iz00_687;

				obj_t BgL_labsz00_688;

				obj_t BgL_mz00_660;

				obj_t BgL_lz00_648;

				long BgL_iz00_649;

				obj_t BgL_rz00_650;

				obj_t BgL_lz00_639;

				{	/* Jas/profile.scm 247 */
					obj_t BgL_arg2051z00_618;

					{	/* Jas/profile.scm 247 */
						obj_t BgL_arg2052z00_619;

						obj_t BgL_arg2053z00_620;

						{	/* Jas/profile.scm 247 */
							obj_t BgL_arg2054z00_621;

							obj_t BgL_arg2055z00_622;

							BgL_arg2054z00_621 = CNST_TABLE_REF(((long) 37));
							{	/* Jas/profile.scm 247 */
								obj_t BgL_list2056z00_623;

								BgL_list2056z00_623 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2055z00_622 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_linesz00_23,
									BgL_list2056z00_623);
							}
							BgL_arg2052z00_619 =
								MAKE_PAIR(BgL_arg2054z00_621, BgL_arg2055z00_622);
						}
						{	/* Jas/profile.scm 248 */
							obj_t BgL_arg2057z00_624;

							{	/* Jas/profile.scm 248 */
								obj_t BgL_arg2059z00_626;

								obj_t BgL_arg2061z00_627;

								{	/* Jas/profile.scm 248 */
									obj_t BgL_arg2062z00_628;

									obj_t BgL_arg2070z00_629;

									BgL_arg2062z00_628 = CNST_TABLE_REF(((long) 38));
									{	/* Jas/profile.scm 248 */
										obj_t BgL_arg2118z00_630;

										{	/* Jas/profile.scm 248 */
											obj_t BgL_arg2125z00_633;

											obj_t BgL_arg2126z00_634;

											BgL_arg2125z00_633 = CNST_TABLE_REF(((long) 7));
											{	/* Jas/profile.scm 248 */
												obj_t BgL_list2127z00_635;

												BgL_list2127z00_635 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2126z00_634 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 41)), BgL_list2127z00_635);
											}
											BgL_arg2118z00_630 =
												MAKE_PAIR(BgL_arg2125z00_633, BgL_arg2126z00_634);
										}
										{	/* Jas/profile.scm 248 */
											obj_t BgL_list2120z00_632;

											BgL_list2120z00_632 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2070z00_629 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2118z00_630, BgL_list2120z00_632);
									}}
									BgL_arg2059z00_626 =
										MAKE_PAIR(BgL_arg2062z00_628, BgL_arg2070z00_629);
								}
								{	/* Jas/profile.scm 248 */
									obj_t BgL_arg2139z00_636;

									BgL_arg2139z00_636 =
										BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_siza7eza7_22));
									{	/* Jas/profile.scm 248 */
										obj_t BgL_list2142z00_638;

										BgL_list2142z00_638 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2061z00_627 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2139z00_636, BgL_list2142z00_638);
								}}
								BgL_arg2057z00_624 =
									MAKE_PAIR(BgL_arg2059z00_626, BgL_arg2061z00_627);
							}
							BgL_codez00_703 = BgL_arg2057z00_624;
							BgL_iz00_704 = ((long) 0);
							BgL_methodsz00_705 = BgL_methodsz00_24;
						BgL_zc3anonymousza32283ze3z83_706:
							if (NULLP(BgL_methodsz00_705))
								{	/* Jas/profile.scm 233 */
									BgL_arg2053z00_620 = BgL_codez00_703;
								}
							else
								{	/* Jas/profile.scm 235 */
									obj_t BgL_arg2285z00_708;

									long BgL_arg2286z00_709;

									obj_t BgL_arg2290z00_710;

									{	/* Jas/profile.scm 235 */
										obj_t BgL_labsz00_711;

										BgL_mz00_660 = CAR(BgL_methodsz00_705);
										{

											if (PAIRP(BgL_mz00_660))
												{	/* Jas/profile.scm 221 */
													obj_t BgL_cdrzd21503zd2_670;

													BgL_cdrzd21503zd2_670 = CDR(BgL_mz00_660);
													if ((CAR(BgL_mz00_660) == CNST_TABLE_REF(((long) 8))))
														{	/* Jas/profile.scm 221 */
															if (PAIRP(BgL_cdrzd21503zd2_670))
																{	/* Jas/profile.scm 221 */
																	obj_t BgL_cdrzd21509zd2_673;

																	BgL_cdrzd21509zd2_673 =
																		CDR(BgL_cdrzd21503zd2_670);
																	if (PAIRP(BgL_cdrzd21509zd2_673))
																		{	/* Jas/profile.scm 221 */
																			obj_t BgL_cdrzd21515zd2_675;

																			BgL_cdrzd21515zd2_675 =
																				CDR(BgL_cdrzd21509zd2_673);
																			if (PAIRP(BgL_cdrzd21515zd2_675))
																				{	/* Jas/profile.scm 221 */
																					obj_t BgL_arg2222z00_680;

																					BgL_arg2222z00_680 =
																						CDR(BgL_cdrzd21515zd2_675);
																					{	/* Jas/profile.scm 221 */
																						obj_t BgL_arg2233z00_1151;

																						BgL_arg2233z00_1151 =
																							MAKE_PAIR(CNST_TABLE_REF(((long)
																									24)), BgL_arg2222z00_680);
																						BgL_lz00_648 = BgL_arg2233z00_1151;
																						BgL_iz00_649 = ((long) 0);
																						BgL_rz00_650 = BNIL;
																					BgL_zc3anonymousza32166ze3z83_651:
																						if (NULLP(BgL_lz00_648))
																							{	/* Jas/profile.scm 213 */
																								BgL_labsz00_711 =
																									bgl_reverse_bang
																									(BgL_rz00_650);
																							}
																						else
																							{	/* Jas/profile.scm 214 */
																								bool_t BgL_testz00_1939;

																								{	/* Jas/profile.scm 214 */
																									obj_t BgL_auxz00_1940;

																									BgL_auxz00_1940 =
																										CAR(BgL_lz00_648);
																									BgL_testz00_1939 =
																										PAIRP(BgL_auxz00_1940);
																								}
																								if (BgL_testz00_1939)
																									{
																										long BgL_iz00_1945;

																										obj_t BgL_lz00_1943;

																										BgL_lz00_1943 =
																											CDR(BgL_lz00_648);
																										BgL_iz00_1945 =
																											(BgL_iz00_649 +
																											((long) 1));
																										BgL_iz00_649 =
																											BgL_iz00_1945;
																										BgL_lz00_648 =
																											BgL_lz00_1943;
																										goto
																											BgL_zc3anonymousza32166ze3z83_651;
																									}
																								else
																									{	/* Jas/profile.scm 215 */
																										obj_t BgL_arg2185z00_656;

																										obj_t BgL_arg2187z00_657;

																										BgL_lz00_639 =
																											CDR(BgL_lz00_648);
																									BgL_zc3anonymousza32143ze3z83_640:
																										if (NULLP
																											(BgL_lz00_639))
																											{	/* Jas/profile.scm 207 */
																												BgL_arg2185z00_656 =
																													BNIL;
																											}
																										else
																											{	/* Jas/profile.scm 208 */
																												bool_t BgL_testz00_1949;

																												{	/* Jas/profile.scm 208 */
																													bool_t
																														BgL_testz00_1950;
																													{	/* Jas/profile.scm 208 */
																														obj_t
																															BgL_auxz00_1951;
																														BgL_auxz00_1951 =
																															CAR(BgL_lz00_639);
																														BgL_testz00_1950 =
																															PAIRP
																															(BgL_auxz00_1951);
																													}
																													if (BgL_testz00_1950)
																														{	/* Jas/profile.scm 209 */
																															obj_t
																																BgL_auxz00_1954;
																															{	/* Jas/profile.scm 209 */
																																obj_t
																																	BgL_auxz00_1955;
																																{	/* Jas/profile.scm 209 */
																																	obj_t
																																		BgL_pairz00_1123;
																																	BgL_pairz00_1123
																																		=
																																		BgL_lz00_639;
																																	BgL_auxz00_1955
																																		=
																																		CAR(CAR
																																		(BgL_pairz00_1123));
																																}
																																BgL_auxz00_1954
																																	=
																																	BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																	(BgL_auxz00_1955,
																																	CNST_TABLE_REF
																																	(((long)
																																			23)));
																															}
																															BgL_testz00_1949 =
																																CBOOL
																																(BgL_auxz00_1954);
																														}
																													else
																														{	/* Jas/profile.scm 208 */
																															BgL_testz00_1949 =
																																((bool_t) 1);
																														}
																												}
																												if (BgL_testz00_1949)
																													{
																														obj_t BgL_lz00_1961;

																														BgL_lz00_1961 =
																															CDR(BgL_lz00_639);
																														BgL_lz00_639 =
																															BgL_lz00_1961;
																														goto
																															BgL_zc3anonymousza32143ze3z83_640;
																													}
																												else
																													{	/* Jas/profile.scm 208 */
																														BgL_arg2185z00_656 =
																															BgL_lz00_639;
																													}
																											}
																										BgL_arg2187z00_657 =
																											MAKE_PAIR(BINT
																											(BgL_iz00_649),
																											BgL_rz00_650);
																										{
																											obj_t BgL_rz00_1967;

																											obj_t BgL_lz00_1966;

																											BgL_lz00_1966 =
																												BgL_arg2185z00_656;
																											BgL_rz00_1967 =
																												BgL_arg2187z00_657;
																											BgL_rz00_650 =
																												BgL_rz00_1967;
																											BgL_lz00_648 =
																												BgL_lz00_1966;
																											goto
																												BgL_zc3anonymousza32166ze3z83_651;
																										}
																									}
																							}
																					}
																				}
																			else
																				{	/* Jas/profile.scm 221 */
																				BgL_tagzd21492zd2_667:
																					BgL_labsz00_711 =
																						BGl_errorz00zz__errorz00
																						(BGl_string2767z00zzjas_profilez00,
																						BGl_string2768z00zzjas_profilez00,
																						BgL_mz00_660);
																				}
																		}
																	else
																		{	/* Jas/profile.scm 221 */
																			goto BgL_tagzd21492zd2_667;
																		}
																}
															else
																{	/* Jas/profile.scm 221 */
																	goto BgL_tagzd21492zd2_667;
																}
														}
													else
														{	/* Jas/profile.scm 221 */
															goto BgL_tagzd21492zd2_667;
														}
												}
											else
												{	/* Jas/profile.scm 221 */
													goto BgL_tagzd21492zd2_667;
												}
										}
										{	/* Jas/profile.scm 236 */
											obj_t BgL_arg2295z00_712;

											obj_t BgL_arg2297z00_713;

											BgL_arg2295z00_712 = CNST_TABLE_REF(((long) 35));
											{	/* Jas/profile.scm 237 */
												obj_t BgL_arg2305z00_714;

												{	/* Jas/profile.scm 237 */
													obj_t BgL_arg2318z00_716;

													obj_t BgL_arg2325z00_717;

													BgL_arg2318z00_716 = CNST_TABLE_REF(((long) 40));
													{	/* Jas/profile.scm 238 */
														obj_t BgL_arg2331z00_718;

														obj_t BgL_arg2338z00_719;

														obj_t BgL_arg2344z00_720;

														{	/* Jas/profile.scm 238 */
															long BgL_arg2364z00_724;

															BgL_arg2364z00_724 =
																bgl_list_length(BgL_labsz00_711);
															BgL_arg2331z00_718 =
																BGl_pushzd2intzd2zzjas_profilez00(BINT
																(BgL_arg2364z00_724));
														}
														BgL_arg2338z00_719 =
															BGl_pushzd2intzd2zzjas_profilez00(BINT
															(BgL_iz00_704));
														BgL_arg2344z00_720 = CNST_TABLE_REF(((long) 36));
														{	/* Jas/profile.scm 237 */
															obj_t BgL_list2345z00_721;

															{	/* Jas/profile.scm 237 */
																obj_t BgL_arg2351z00_722;

																{	/* Jas/profile.scm 237 */
																	obj_t BgL_arg2357z00_723;

																	BgL_arg2357z00_723 =
																		MAKE_PAIR(BgL_codez00_703, BNIL);
																	BgL_arg2351z00_722 =
																		MAKE_PAIR(BgL_arg2344z00_720,
																		BgL_arg2357z00_723);
																}
																BgL_list2345z00_721 =
																	MAKE_PAIR(BgL_arg2338z00_719,
																	BgL_arg2351z00_722);
															}
															BgL_arg2325z00_717 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2331z00_718, BgL_list2345z00_721);
													}}
													BgL_arg2305z00_714 =
														MAKE_PAIR(BgL_arg2318z00_716, BgL_arg2325z00_717);
												}
												BgL_codez00_686 = BgL_arg2305z00_714;
												BgL_iz00_687 = ((long) 0);
												BgL_labsz00_688 = BgL_labsz00_711;
											BgL_zc3anonymousza32240ze3z83_689:
												if (NULLP(BgL_labsz00_688))
													{	/* Jas/profile.scm 223 */
														BgL_arg2297z00_713 = BgL_codez00_686;
													}
												else
													{	/* Jas/profile.scm 225 */
														obj_t BgL_arg2242z00_691;

														long BgL_arg2243z00_692;

														obj_t BgL_arg2245z00_693;

														{	/* Jas/profile.scm 225 */
															obj_t BgL_arg2252z00_694;

															obj_t BgL_arg2255z00_695;

															BgL_arg2252z00_694 = CNST_TABLE_REF(((long) 39));
															{	/* Jas/profile.scm 226 */
																obj_t BgL_arg2259z00_696;

																obj_t BgL_arg2260z00_697;

																obj_t BgL_arg2267z00_698;

																BgL_arg2259z00_696 =
																	BGl_pushzd2intzd2zzjas_profilez00(CAR
																	(BgL_labsz00_688));
																BgL_arg2260z00_697 =
																	BGl_pushzd2intzd2zzjas_profilez00(BINT
																	(BgL_iz00_687));
																BgL_arg2267z00_698 =
																	CNST_TABLE_REF(((long) 36));
																{	/* Jas/profile.scm 225 */
																	obj_t BgL_list2268z00_699;

																	{	/* Jas/profile.scm 225 */
																		obj_t BgL_arg2274z00_700;

																		{	/* Jas/profile.scm 225 */
																			obj_t BgL_arg2275z00_701;

																			BgL_arg2275z00_701 =
																				MAKE_PAIR(BgL_codez00_686, BNIL);
																			BgL_arg2274z00_700 =
																				MAKE_PAIR(BgL_arg2267z00_698,
																				BgL_arg2275z00_701);
																		}
																		BgL_list2268z00_699 =
																			MAKE_PAIR(BgL_arg2260z00_697,
																			BgL_arg2274z00_700);
																	}
																	BgL_arg2255z00_695 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2259z00_696, BgL_list2268z00_699);
															}}
															BgL_arg2242z00_691 =
																MAKE_PAIR(BgL_arg2252z00_694,
																BgL_arg2255z00_695);
														}
														BgL_arg2243z00_692 = (BgL_iz00_687 + ((long) 1));
														BgL_arg2245z00_693 = CDR(BgL_labsz00_688);
														{
															obj_t BgL_labsz00_2000;

															long BgL_iz00_1999;

															obj_t BgL_codez00_1998;

															BgL_codez00_1998 = BgL_arg2242z00_691;
															BgL_iz00_1999 = BgL_arg2243z00_692;
															BgL_labsz00_2000 = BgL_arg2245z00_693;
															BgL_labsz00_688 = BgL_labsz00_2000;
															BgL_iz00_687 = BgL_iz00_1999;
															BgL_codez00_686 = BgL_codez00_1998;
															goto BgL_zc3anonymousza32240ze3z83_689;
														}
													}
											}
											BgL_arg2285z00_708 =
												MAKE_PAIR(BgL_arg2295z00_712, BgL_arg2297z00_713);
										}
									}
									BgL_arg2286z00_709 = (BgL_iz00_704 + ((long) 1));
									BgL_arg2290z00_710 = CDR(BgL_methodsz00_705);
									{
										obj_t BgL_methodsz00_2006;

										long BgL_iz00_2005;

										obj_t BgL_codez00_2004;

										BgL_codez00_2004 = BgL_arg2285z00_708;
										BgL_iz00_2005 = BgL_arg2286z00_709;
										BgL_methodsz00_2006 = BgL_arg2290z00_710;
										BgL_methodsz00_705 = BgL_methodsz00_2006;
										BgL_iz00_704 = BgL_iz00_2005;
										BgL_codez00_703 = BgL_codez00_2004;
										goto BgL_zc3anonymousza32283ze3z83_706;
									}
								}
						}
						BgL_arg2051z00_618 =
							MAKE_PAIR(BgL_arg2052z00_619, BgL_arg2053z00_620);
					}
					return bgl_reverse_bang(BgL_arg2051z00_618);
				}
			}
		}
	}



/* profile-make-res */
	obj_t BGl_profilezd2makezd2resz00zzjas_profilez00(long BgL_siza7eza7_25,
		obj_t BgL_resz00_26, obj_t BgL_methodsz00_27)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 251 */
			{
				obj_t BgL_codez00_800;

				long BgL_iz00_801;

				obj_t BgL_methodsz00_802;

				obj_t BgL_mz00_775;

				obj_t BgL_lz00_765;

				long BgL_rz00_766;

				obj_t BgL_lz00_756;

				{	/* Jas/profile.scm 280 */
					obj_t BgL_arg2377z00_735;

					{	/* Jas/profile.scm 280 */
						obj_t BgL_arg2383z00_736;

						obj_t BgL_arg2390z00_737;

						{	/* Jas/profile.scm 280 */
							obj_t BgL_arg2396z00_738;

							obj_t BgL_arg2403z00_739;

							BgL_arg2396z00_738 = CNST_TABLE_REF(((long) 37));
							{	/* Jas/profile.scm 280 */
								obj_t BgL_list2404z00_740;

								BgL_list2404z00_740 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2403z00_739 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_resz00_26,
									BgL_list2404z00_740);
							}
							BgL_arg2383z00_736 =
								MAKE_PAIR(BgL_arg2396z00_738, BgL_arg2403z00_739);
						}
						{	/* Jas/profile.scm 281 */
							obj_t BgL_arg2409z00_741;

							{	/* Jas/profile.scm 281 */
								obj_t BgL_arg2422z00_743;

								obj_t BgL_arg2429z00_744;

								{	/* Jas/profile.scm 281 */
									obj_t BgL_arg2430z00_745;

									obj_t BgL_arg2431z00_746;

									BgL_arg2430z00_745 = CNST_TABLE_REF(((long) 38));
									{	/* Jas/profile.scm 281 */
										obj_t BgL_arg2437z00_747;

										{	/* Jas/profile.scm 281 */
											obj_t BgL_arg2444z00_750;

											obj_t BgL_arg2445z00_751;

											BgL_arg2444z00_750 = CNST_TABLE_REF(((long) 7));
											{	/* Jas/profile.scm 281 */
												obj_t BgL_list2446z00_752;

												BgL_list2446z00_752 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2445z00_751 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 41)), BgL_list2446z00_752);
											}
											BgL_arg2437z00_747 =
												MAKE_PAIR(BgL_arg2444z00_750, BgL_arg2445z00_751);
										}
										{	/* Jas/profile.scm 281 */
											obj_t BgL_list2439z00_749;

											BgL_list2439z00_749 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2431z00_746 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg2437z00_747, BgL_list2439z00_749);
									}}
									BgL_arg2422z00_743 =
										MAKE_PAIR(BgL_arg2430z00_745, BgL_arg2431z00_746);
								}
								{	/* Jas/profile.scm 281 */
									obj_t BgL_arg2448z00_753;

									BgL_arg2448z00_753 =
										BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_siza7eza7_25));
									{	/* Jas/profile.scm 281 */
										obj_t BgL_list2452z00_755;

										BgL_list2452z00_755 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2429z00_744 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2448z00_753, BgL_list2452z00_755);
								}}
								BgL_arg2409z00_741 =
									MAKE_PAIR(BgL_arg2422z00_743, BgL_arg2429z00_744);
							}
							BgL_codez00_800 = BgL_arg2409z00_741;
							BgL_iz00_801 = ((long) 0);
							BgL_methodsz00_802 = BgL_methodsz00_27;
						BgL_zc3anonymousza32545ze3z83_803:
							if (NULLP(BgL_methodsz00_802))
								{	/* Jas/profile.scm 269 */
									BgL_arg2390z00_737 = BgL_codez00_800;
								}
							else
								{	/* Jas/profile.scm 271 */
									obj_t BgL_arg2550z00_805;

									long BgL_arg2554z00_806;

									obj_t BgL_arg2555z00_807;

									{	/* Jas/profile.scm 271 */
										obj_t BgL_arg2556z00_808;

										obj_t BgL_arg2557z00_809;

										BgL_arg2556z00_808 = CNST_TABLE_REF(((long) 35));
										{	/* Jas/profile.scm 272 */
											obj_t BgL_arg2558z00_810;

											obj_t BgL_arg2559z00_811;

											obj_t BgL_arg2560z00_812;

											obj_t BgL_arg2561z00_813;

											BgL_arg2558z00_810 = CNST_TABLE_REF(((long) 40));
											{	/* Jas/profile.scm 273 */
												obj_t BgL_auxz00_2031;

												BgL_mz00_775 = CAR(BgL_methodsz00_802);
												{

													if (PAIRP(BgL_mz00_775))
														{	/* Jas/profile.scm 267 */
															obj_t BgL_cdrzd21535zd2_785;

															BgL_cdrzd21535zd2_785 = CDR(BgL_mz00_775);
															if (
																(CAR(BgL_mz00_775) ==
																	CNST_TABLE_REF(((long) 8))))
																{	/* Jas/profile.scm 267 */
																	if (PAIRP(BgL_cdrzd21535zd2_785))
																		{	/* Jas/profile.scm 267 */
																			obj_t BgL_cdrzd21541zd2_788;

																			BgL_cdrzd21541zd2_788 =
																				CDR(BgL_cdrzd21535zd2_785);
																			if (PAIRP(BgL_cdrzd21541zd2_788))
																				{	/* Jas/profile.scm 267 */
																					obj_t BgL_cdrzd21547zd2_790;

																					BgL_cdrzd21547zd2_790 =
																						CDR(BgL_cdrzd21541zd2_788);
																					if (PAIRP(BgL_cdrzd21547zd2_790))
																						{	/* Jas/profile.scm 267 */
																							obj_t BgL_arg2523z00_795;

																							BgL_arg2523z00_795 =
																								CDR(BgL_cdrzd21547zd2_790);
																							{	/* Jas/profile.scm 267 */
																								obj_t BgL_arg2536z00_1198;

																								BgL_arg2536z00_1198 =
																									MAKE_PAIR(CNST_TABLE_REF((
																											(long) 24)),
																									BgL_arg2523z00_795);
																								{	/* Jas/profile.scm 267 */
																									long BgL_auxz00_2050;

																									BgL_lz00_765 =
																										BgL_arg2536z00_1198;
																									BgL_rz00_766 = ((long) 0);
																								BgL_zc3anonymousza32472ze3z83_767:
																									if (NULLP
																										(BgL_lz00_765))
																										{	/* Jas/profile.scm 259 */
																											BgL_auxz00_2050 =
																												BgL_rz00_766;
																										}
																									else
																										{	/* Jas/profile.scm 260 */
																											bool_t BgL_testz00_2053;

																											{	/* Jas/profile.scm 260 */
																												obj_t BgL_auxz00_2054;

																												BgL_auxz00_2054 =
																													CAR(BgL_lz00_765);
																												BgL_testz00_2053 =
																													PAIRP
																													(BgL_auxz00_2054);
																											}
																											if (BgL_testz00_2053)
																												{
																													obj_t BgL_lz00_2057;

																													BgL_lz00_2057 =
																														CDR(BgL_lz00_765);
																													BgL_lz00_765 =
																														BgL_lz00_2057;
																													goto
																														BgL_zc3anonymousza32472ze3z83_767;
																												}
																											else
																												{
																													long BgL_rz00_2077;

																													obj_t BgL_lz00_2059;

																													BgL_lz00_756 =
																														CDR(BgL_lz00_765);
																												BgL_zc3anonymousza32453ze3z83_757:
																													if (NULLP
																														(BgL_lz00_756))
																														{	/* Jas/profile.scm 253 */
																															BgL_lz00_2059 =
																																BNIL;
																														}
																													else
																														{	/* Jas/profile.scm 254 */
																															bool_t
																																BgL_testz00_2062;
																															{	/* Jas/profile.scm 254 */
																																bool_t
																																	BgL_testz00_2063;
																																{	/* Jas/profile.scm 254 */
																																	obj_t
																																		BgL_auxz00_2064;
																																	BgL_auxz00_2064
																																		=
																																		CAR
																																		(BgL_lz00_756);
																																	BgL_testz00_2063
																																		=
																																		PAIRP
																																		(BgL_auxz00_2064);
																																}
																																if (BgL_testz00_2063)
																																	{	/* Jas/profile.scm 255 */
																																		obj_t
																																			BgL_auxz00_2067;
																																		{	/* Jas/profile.scm 255 */
																																			obj_t
																																				BgL_auxz00_2068;
																																			{	/* Jas/profile.scm 255 */
																																				obj_t
																																					BgL_pairz00_1170;
																																				BgL_pairz00_1170
																																					=
																																					BgL_lz00_756;
																																				BgL_auxz00_2068
																																					=
																																					CAR
																																					(CAR
																																					(BgL_pairz00_1170));
																																			}
																																			BgL_auxz00_2067
																																				=
																																				BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																				(BgL_auxz00_2068,
																																				CNST_TABLE_REF
																																				(((long)
																																						23)));
																																		}
																																		BgL_testz00_2062
																																			=
																																			CBOOL
																																			(BgL_auxz00_2067);
																																	}
																																else
																																	{	/* Jas/profile.scm 254 */
																																		BgL_testz00_2062
																																			=
																																			((bool_t)
																																			1);
																																	}
																															}
																															if (BgL_testz00_2062)
																																{
																																	obj_t
																																		BgL_lz00_2074;
																																	BgL_lz00_2074
																																		=
																																		CDR
																																		(BgL_lz00_756);
																																	BgL_lz00_756 =
																																		BgL_lz00_2074;
																																	goto
																																		BgL_zc3anonymousza32453ze3z83_757;
																																}
																															else
																																{	/* Jas/profile.scm 254 */
																																	BgL_lz00_2059
																																		=
																																		BgL_lz00_756;
																																}
																														}
																													BgL_rz00_2077 =
																														(BgL_rz00_766 +
																														((long) 1));
																													BgL_rz00_766 =
																														BgL_rz00_2077;
																													BgL_lz00_765 =
																														BgL_lz00_2059;
																													goto
																														BgL_zc3anonymousza32472ze3z83_767;
																												}
																										}
																									BgL_auxz00_2031 =
																										BINT(BgL_auxz00_2050);
																								}
																							}
																						}
																					else
																						{	/* Jas/profile.scm 267 */
																						BgL_tagzd21524zd2_782:
																							BgL_auxz00_2031 =
																								BGl_errorz00zz__errorz00
																								(BGl_string2767z00zzjas_profilez00,
																								BGl_string2768z00zzjas_profilez00,
																								BgL_mz00_775);
																						}
																				}
																			else
																				{	/* Jas/profile.scm 267 */
																					goto BgL_tagzd21524zd2_782;
																				}
																		}
																	else
																		{	/* Jas/profile.scm 267 */
																			goto BgL_tagzd21524zd2_782;
																		}
																}
															else
																{	/* Jas/profile.scm 267 */
																	goto BgL_tagzd21524zd2_782;
																}
														}
													else
														{	/* Jas/profile.scm 267 */
															goto BgL_tagzd21524zd2_782;
														}
												}
												BgL_arg2559z00_811 =
													BGl_pushzd2intzd2zzjas_profilez00(BgL_auxz00_2031);
											}
											BgL_arg2560z00_812 =
												BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_iz00_801));
											BgL_arg2561z00_813 = CNST_TABLE_REF(((long) 36));
											{	/* Jas/profile.scm 271 */
												obj_t BgL_list2562z00_814;

												{	/* Jas/profile.scm 271 */
													obj_t BgL_arg2563z00_815;

													{	/* Jas/profile.scm 271 */
														obj_t BgL_arg2564z00_816;

														{	/* Jas/profile.scm 271 */
															obj_t BgL_arg2565z00_817;

															BgL_arg2565z00_817 =
																MAKE_PAIR(BgL_codez00_800, BNIL);
															BgL_arg2564z00_816 =
																MAKE_PAIR(BgL_arg2561z00_813,
																BgL_arg2565z00_817);
														}
														BgL_arg2563z00_815 =
															MAKE_PAIR(BgL_arg2560z00_812, BgL_arg2564z00_816);
													}
													BgL_list2562z00_814 =
														MAKE_PAIR(BgL_arg2559z00_811, BgL_arg2563z00_815);
												}
												BgL_arg2557z00_809 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2558z00_810, BgL_list2562z00_814);
										}}
										BgL_arg2550z00_805 =
											MAKE_PAIR(BgL_arg2556z00_808, BgL_arg2557z00_809);
									}
									BgL_arg2554z00_806 = (BgL_iz00_801 + ((long) 1));
									BgL_arg2555z00_807 = CDR(BgL_methodsz00_802);
									{
										obj_t BgL_methodsz00_2096;

										long BgL_iz00_2095;

										obj_t BgL_codez00_2094;

										BgL_codez00_2094 = BgL_arg2550z00_805;
										BgL_iz00_2095 = BgL_arg2554z00_806;
										BgL_methodsz00_2096 = BgL_arg2555z00_807;
										BgL_methodsz00_802 = BgL_methodsz00_2096;
										BgL_iz00_801 = BgL_iz00_2095;
										BgL_codez00_800 = BgL_codez00_2094;
										goto BgL_zc3anonymousza32545ze3z83_803;
									}
								}
						}
						BgL_arg2377z00_735 =
							MAKE_PAIR(BgL_arg2383z00_736, BgL_arg2390z00_737);
					}
					return bgl_reverse_bang(BgL_arg2377z00_735);
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			{	/* Jas/profile.scm 5 */
				obj_t BgL_arg2572z00_824;

				obj_t BgL_arg2576z00_825;

				obj_t BgL_arg2589z00_828;

				BgL_arg2572z00_824 = CNST_TABLE_REF(((long) 42));
				BgL_arg2576z00_825 = BGl_objectz00zz__objectz00;
				{	/* Jas/profile.scm 5 */
					obj_t BgL_v1618z00_829;

					BgL_v1618z00_829 = create_vector((int) (((long) 0)));
					BgL_arg2589z00_828 = BgL_v1618z00_829;
				}
				BGl__envz00zzjas_profilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2572z00_824,
					BgL_arg2576z00_825, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2_envzd2envz52zzjas_profilez00,
					BGl__envzd2nilzd2envz00zzjas_profilez00,
					BGl__envzf3zd2envz21zzjas_profilez00, ((long) 494782322), BFALSE,
					BFALSE, BgL_arg2589z00_828);
			}
			return (BGl_z52thezd2_envzd2nilz52zzjas_profilez00 = BUNSPEC, BUNSPEC);
		}
	}



/* __env? */
	obj_t BGl___envzf3zf3zzjas_profilez00(obj_t BgL_envz00_1326,
		obj_t BgL_obj1596z00_1327)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 5 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1596z00_1327,
					BGl__envz00zzjas_profilez00));
		}
	}



/* _%allocate-_env */
	obj_t BGl__z52allocatezd2_envz80zzjas_profilez00(obj_t BgL_envz00_1324)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 5 */
			{	/* Jas/profile.scm 5 */
				BgL__envz00_bglt BgL_auxz00_2105;

				{	/* Jas/profile.scm 5 */
					BgL__envz00_bglt BgL_res2779z00_1354;

					{	/* Jas/profile.scm 5 */
						BgL__envz00_bglt BgL_new1561z00_1352;

						BgL_new1561z00_1352 =
							((BgL__envz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL__envz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1561z00_1352),
							BGl_classzd2numzd2zz__objectz00(BGl__envz00zzjas_profilez00));
						{	/* Jas/profile.scm 5 */
							BgL_objectz00_bglt BgL_auxz00_2110;

							BgL_auxz00_2110 = (BgL_objectz00_bglt) (BgL_new1561z00_1352);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2110, BFALSE);
						}
						BgL_res2779z00_1354 = BgL_new1561z00_1352;
					}
					BgL_auxz00_2105 = BgL_res2779z00_1354;
				}
				return (obj_t) (BgL_auxz00_2105);
			}
		}
	}



/* _env-nil */
	BgL__envz00_bglt BGl__envzd2nilzd2zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 5 */
			if ((BGl_z52thezd2_envzd2nilz52zzjas_profilez00 == BUNSPEC))
				{	/* Jas/profile.scm 5 */
					{	/* Jas/profile.scm 5 */
						BgL__envz00_bglt BgL_res2664z00_1247;

						{	/* Jas/profile.scm 5 */
							BgL__envz00_bglt BgL_new1561z00_1243;

							BgL_new1561z00_1243 =
								((BgL__envz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL__envz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1561z00_1243),
								BGl_classzd2numzd2zz__objectz00(BGl__envz00zzjas_profilez00));
							{	/* Jas/profile.scm 5 */
								BgL_objectz00_bglt BgL_auxz00_2120;

								BgL_auxz00_2120 = (BgL_objectz00_bglt) (BgL_new1561z00_1243);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2120, BFALSE);
							}
							BgL_res2664z00_1247 = BgL_new1561z00_1243;
						}
						BGl_z52thezd2_envzd2nilz52zzjas_profilez00 =
							(obj_t) (BgL_res2664z00_1247);
					}
					{	/* Jas/profile.scm 5 */
						BgL__envz00_bglt BgL_res2665z00_1265;

						{	/* Jas/profile.scm 5 */
							BgL__envz00_bglt BgL_new1551z00_1248;

							BgL_new1551z00_1248 =
								(BgL__envz00_bglt) (BGl_z52thezd2_envzd2nilz52zzjas_profilez00);
							{	/* Jas/profile.scm 5 */
								obj_t BgL_this1543z00_1257;

								obj_t BgL_jstring1544z00_1258;

								obj_t BgL_has_clinit1545z00_1259;

								obj_t BgL_clinit1546z00_1260;

								obj_t BgL_res1547z00_1261;

								obj_t BgL_names1548z00_1262;

								obj_t BgL_lnames1549z00_1263;

								obj_t BgL_lines1550z00_1264;

								BgL_this1543z00_1257 = BUNSPEC;
								BgL_jstring1544z00_1258 = BUNSPEC;
								BgL_has_clinit1545z00_1259 = BUNSPEC;
								BgL_clinit1546z00_1260 = BUNSPEC;
								BgL_res1547z00_1261 = BUNSPEC;
								BgL_names1548z00_1262 = BUNSPEC;
								BgL_lnames1549z00_1263 = BUNSPEC;
								BgL_lines1550z00_1264 = BUNSPEC;
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->BgL_thisz00) =
									((obj_t) BgL_this1543z00_1257), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->
										BgL_jstringz00) =
									((obj_t) BgL_jstring1544z00_1258), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->
										BgL_has_clinitz00) =
									((obj_t) BgL_has_clinit1545z00_1259), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->
										BgL_clinitz00) = ((obj_t) BgL_clinit1546z00_1260), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->BgL_resz00) =
									((obj_t) BgL_res1547z00_1261), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->
										BgL_namesz00) = ((obj_t) BgL_names1548z00_1262), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->
										BgL_lnamesz00) = ((obj_t) BgL_lnames1549z00_1263), BUNSPEC);
								((((BgL__envz00_bglt) CREF(BgL_new1551z00_1248))->
										BgL_linesz00) = ((obj_t) BgL_lines1550z00_1264), BUNSPEC);
								BgL_res2665z00_1265 = BgL_new1551z00_1248;
						}}
						(obj_t) (BgL_res2665z00_1265);
				}}
			else
				{	/* Jas/profile.scm 5 */
					BFALSE;
				}
			return (BgL__envz00_bglt) (BGl_z52thezd2_envzd2nilz52zzjas_profilez00);
		}
	}



/* __env-nil */
	obj_t BGl___envzd2nilzd2zzjas_profilez00(obj_t BgL_envz00_1325)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 5 */
			return (obj_t) (BGl__envzd2nilzd2zzjas_profilez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl__envz00zzjas_profilez00, BGl_proc2771z00zzjas_profilez00,
				BGl_string2772z00zzjas_profilez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl__envz00zzjas_profilez00, BGl_proc2773z00zzjas_profilez00,
				BGl_string2774z00zzjas_profilez00);
		}
	}



/* struct+object->objec1622 */
	obj_t BGl_structzb2objectzd2ze3objec1622z83zzjas_profilez00(obj_t
		BgL_envz00_1330, obj_t BgL_oz00_1331, obj_t BgL_sz00_1332)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 5 */
			{
				BgL__envz00_bglt BgL_oz00_864;

				obj_t BgL_sz00_865;

				{	/* Jas/profile.scm 5 */
					BgL__envz00_bglt BgL_auxz00_2139;

					BgL_oz00_864 = (BgL__envz00_bglt) (BgL_oz00_1331);
					BgL_sz00_865 = BgL_sz00_1332;
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2657z00_868;

						BgL_arg2657z00_868 = STRUCT_REF(BgL_sz00_865, (int) (((long) 0)));
						{	/* Jas/profile.scm 5 */
							BgL_objectz00_bglt BgL_auxz00_2142;

							BgL_auxz00_2142 = (BgL_objectz00_bglt) (BgL_oz00_864);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2142, BgL_arg2657z00_868);
					}}
					{
						obj_t BgL_auxz00_2145;

						BgL_auxz00_2145 = STRUCT_REF(BgL_sz00_865, (int) (((long) 1)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_thisz00) =
							((obj_t) BgL_auxz00_2145), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2149;

						BgL_auxz00_2149 = STRUCT_REF(BgL_sz00_865, (int) (((long) 2)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_jstringz00) =
							((obj_t) BgL_auxz00_2149), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2153;

						BgL_auxz00_2153 = STRUCT_REF(BgL_sz00_865, (int) (((long) 3)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_has_clinitz00) =
							((obj_t) BgL_auxz00_2153), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2157;

						BgL_auxz00_2157 = STRUCT_REF(BgL_sz00_865, (int) (((long) 4)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_clinitz00) =
							((obj_t) BgL_auxz00_2157), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2161;

						BgL_auxz00_2161 = STRUCT_REF(BgL_sz00_865, (int) (((long) 5)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_resz00) =
							((obj_t) BgL_auxz00_2161), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2165;

						BgL_auxz00_2165 = STRUCT_REF(BgL_sz00_865, (int) (((long) 6)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_namesz00) =
							((obj_t) BgL_auxz00_2165), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2169;

						BgL_auxz00_2169 = STRUCT_REF(BgL_sz00_865, (int) (((long) 7)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_lnamesz00) =
							((obj_t) BgL_auxz00_2169), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2173;

						BgL_auxz00_2173 = STRUCT_REF(BgL_sz00_865, (int) (((long) 8)));
						((((BgL__envz00_bglt) CREF(BgL_oz00_864))->BgL_linesz00) =
							((obj_t) BgL_auxz00_2173), BUNSPEC);
					}
					BgL_auxz00_2139 = BgL_oz00_864;
					return (obj_t) (BgL_auxz00_2139);
				}
			}
		}
	}



/* object->struct-_env1620 */
	obj_t BGl_objectzd2ze3structzd2_env1620ze3zzjas_profilez00(obj_t
		BgL_envz00_1333, obj_t BgL_obj1562z00_1334)
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 5 */
			{
				BgL__envz00_bglt BgL_obj1562z00_842;

				BgL_obj1562z00_842 = (BgL__envz00_bglt) (BgL_obj1562z00_1334);
				{	/* Jas/profile.scm 5 */
					obj_t BgL_res1563z00_845;

					{	/* Jas/profile.scm 5 */
						obj_t BgL_keyz00_1266;

						BgL_keyz00_1266 = CNST_TABLE_REF(((long) 42));
						BgL_res1563z00_845 =
							make_struct(BgL_keyz00_1266, (int) (((long) 9)), BUNSPEC);
					}
					{	/* Jas/profile.scm 5 */
						int BgL_auxz00_2182;

						BgL_auxz00_2182 = (int) (((long) 0));
						STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2182, BFALSE);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2595z00_847;

						BgL_arg2595z00_847 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_thisz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2186;

							BgL_auxz00_2186 = (int) (((long) 1));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2186,
								BgL_arg2595z00_847);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2608z00_849;

						BgL_arg2608z00_849 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_jstringz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2190;

							BgL_auxz00_2190 = (int) (((long) 2));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2190,
								BgL_arg2608z00_849);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2621z00_851;

						BgL_arg2621z00_851 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->
							BgL_has_clinitz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2194;

							BgL_auxz00_2194 = (int) (((long) 3));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2194,
								BgL_arg2621z00_851);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2629z00_853;

						BgL_arg2629z00_853 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_clinitz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2198;

							BgL_auxz00_2198 = (int) (((long) 4));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2198,
								BgL_arg2629z00_853);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2642z00_855;

						BgL_arg2642z00_855 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_resz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2202;

							BgL_auxz00_2202 = (int) (((long) 5));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2202,
								BgL_arg2642z00_855);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2649z00_857;

						BgL_arg2649z00_857 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_namesz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2206;

							BgL_auxz00_2206 = (int) (((long) 6));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2206,
								BgL_arg2649z00_857);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2651z00_859;

						BgL_arg2651z00_859 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_lnamesz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2210;

							BgL_auxz00_2210 = (int) (((long) 7));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2210,
								BgL_arg2651z00_859);
					}}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg2655z00_861;

						BgL_arg2655z00_861 =
							(((BgL__envz00_bglt) CREF(BgL_obj1562z00_842))->BgL_linesz00);
						{	/* Jas/profile.scm 5 */
							int BgL_auxz00_2214;

							BgL_auxz00_2214 = (int) (((long) 8));
							STRUCT_SET(BgL_res1563z00_845, BgL_auxz00_2214,
								BgL_arg2655z00_861);
					}}
					return BgL_res1563z00_845;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_profilez00()
	{
		AN_OBJECT;
		{	/* Jas/profile.scm 1 */
			return
				BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string2775z00zzjas_profilez00));
		}
	}

#ifdef __cplusplus
}
#endif
