/*===========================================================================*/
/*   (Object/getter.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/getter.scm)*/
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_indexedz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;


	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t
		BGl_slotzd2virtualzd2setz12z12zzobject_getterz00(BgL_tclassz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	static obj_t
		BGl__genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_slotzd2setz12zc0zzobject_getterz00(BgL_tclassz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_getterz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_getterz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_slotzd2indexedzd2refz00zzobject_getterz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_slotzd2virtualzd2refz00zzobject_getterz00(BgL_tclassz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_slotzd2directzd2setz12z12zzobject_getterz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_getterz00();
	static obj_t BGl_slotzd2refzd2zzobject_getterz00(BgL_tclassz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_getterz00();
	extern obj_t BGl_slotz00zzobject_slotsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_getterz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t
		BGl_genzd2javazd2classzd2slotzd2accessz00zzobject_getterz00(obj_t,
		BgL_jclassz00_bglt, BgL_jclassz00_bglt, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl__genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_slotzd2indexedzd2setz12z12zzobject_getterz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static bool_t BGl_firstzd2virtualzd2slotzf3zf3zzobject_getterz00(obj_t,
		BgL_tclassz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(BgL_tclassz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	static obj_t BGl_slotzd2directzd2refz00zzobject_getterz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2unsafezd2rangeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_getterz00();
	static obj_t BGl_methodzd2initzd2zzobject_getterz00();
	static obj_t __cnst[37];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2javazd2classzd2slotszd2accessz12zd2envzc0zzobject_getterz00,
		BgL_bgl__genza7d2javaza7d2cl3464z00,
		BGl__genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3460z00zzobject_getterz00,
		BgL_bgl_string3460za700za7za7o3465za7, "object_getter", 13);
	      DEFINE_STRING(BGl_string3459z00zzobject_getterz00,
		BgL_bgl_string3459za700za7za7o3466za7, "Index out of bound", 18);
	      DEFINE_STRING(BGl_string3461z00zzobject_getterz00,
		BgL_bgl_string3461za700za7za7o3467za7,
		"call-virtual-setter val ::obj -set! call-next-virtual-setter sval sobj ::long write -ref quote error -len <fx >=fx if define i i::long o call-virtual-getter __object @ define-inline read effect no-cfa-top side-effect-free pragma inline static - call-next-virtual-getter call-next-slot let lambda obj ",
		300);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2slotszd2accessz12zd2envz12zzobject_getterz00,
		BgL_bgl__genza7d2classza7d2s3468z00,
		BGl__genzd2classzd2slotszd2accessz12zc0zzobject_getterz00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_getterz00(long
		BgL_checksumz00_1843, char *BgL_fromz00_1844)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_getterz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_getterz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_getterz00();
					BGl_cnstzd2initzd2zzobject_getterz00();
					BGl_importedzd2moduleszd2initz00zzobject_getterz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_getterz00()
	{
		AN_OBJECT;
		{	/* Object/getter.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_getter");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_getter");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_getterz00()
	{
		AN_OBJECT;
		{	/* Object/getter.scm 18 */
			{	/* Object/getter.scm 18 */
				obj_t BgL_cportz00_1835;

				BgL_cportz00_1835 =
					bgl_open_input_string(BGl_string3461z00zzobject_getterz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1836;

					BgL_iz00_1836 = ((long) 36);
				BgL_loopz00_1837:
					if ((BgL_iz00_1836 == ((long) -1)))
						{	/* Object/getter.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Object/getter.scm 18 */
							{	/* Object/getter.scm 18 */
								obj_t BgL_arg3463z00_1839;

								{	/* Object/getter.scm 18 */

									{	/* Object/getter.scm 18 */
										obj_t BgL_locationz00_1841;

										BgL_locationz00_1841 = BBOOL(((bool_t) 0));
										{	/* Object/getter.scm 18 */

											BgL_arg3463z00_1839 =
												BGl_readz00zz__readerz00(BgL_cportz00_1835,
												BgL_locationz00_1841);
										}
									}
								}
								{	/* Object/getter.scm 18 */
									int BgL_auxz00_1862;

									BgL_auxz00_1862 = (int) (BgL_iz00_1836);
									CNST_TABLE_SET(BgL_auxz00_1862, BgL_arg3463z00_1839);
							}}
							{	/* Object/getter.scm 18 */
								int BgL_auxz00_1842;

								BgL_auxz00_1842 = (int) ((BgL_iz00_1836 - ((long) 1)));
								{
									long BgL_iz00_1867;

									BgL_iz00_1867 = (long) (BgL_auxz00_1842);
									BgL_iz00_1836 = BgL_iz00_1867;
									goto BgL_loopz00_1837;
								}
							}
						}
				}
			}
		}
	}



/* gen-class-slots-access! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(BgL_tclassz00_bglt
		BgL_classz00_1, obj_t BgL_typez00_2, obj_t BgL_wideningz00_3,
		obj_t BgL_srcz00_4)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 59 */
			{	/* Object/getter.scm 65 */
				obj_t BgL_g2433z00_513;

				{	/* Object/getter.scm 65 */
					BgL_tclassz00_bglt BgL_arg2560z00_550;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_typez00_2,
							BGl_tclassz00zzobject_classz00))
						{	/* Object/getter.scm 65 */
							BgL_arg2560z00_550 = (BgL_tclassz00_bglt) (BgL_typez00_2);
						}
					else
						{	/* Object/getter.scm 65 */
							BgL_arg2560z00_550 = BgL_classz00_1;
						}
					{
						obj_t BgL_auxz00_1872;

						{	/* Object/getter.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_1873;

							BgL_auxz00_1873 = (BgL_objectz00_bglt) (BgL_arg2560z00_550);
							BgL_auxz00_1872 = BGL_OBJECT_WIDENING(BgL_auxz00_1873);
						}
						BgL_g2433z00_513 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1872))->BgL_slotsz00);
					}
				}
				{
					obj_t BgL_slotsz00_517;

					obj_t BgL_resz00_518;

					obj_t BgL_virtualsz00_519;

					BgL_slotsz00_517 = BgL_g2433z00_513;
					BgL_resz00_518 = BNIL;
					BgL_virtualsz00_519 = BNIL;
				BgL_zc3anonymousza32473ze3z83_520:
					if (NULLP(BgL_slotsz00_517))
						{	/* Object/getter.scm 69 */
							obj_t BgL_val0_2445z00_522;

							obj_t BgL_val1_2446z00_523;

							BgL_val0_2445z00_522 = bgl_reverse_bang(BgL_resz00_518);
							BgL_val1_2446z00_523 = bgl_reverse_bang(BgL_virtualsz00_519);
							{	/* Object/getter.scm 69 */
								int BgL_auxz00_1881;

								BgL_auxz00_1881 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_1881);
							}
							{	/* Object/getter.scm 69 */
								int BgL_auxz00_1884;

								BgL_auxz00_1884 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_1884, BgL_val1_2446z00_523);
							}
							return BgL_val0_2445z00_522;
						}
					else
						{	/* Object/getter.scm 70 */
							obj_t BgL_slotz00_524;

							BgL_slotz00_524 = CAR(BgL_slotsz00_517);
							{	/* Object/getter.scm 71 */
								obj_t BgL_refz00_525;

								BgL_refz00_525 =
									BGl_slotzd2refzd2zzobject_getterz00(BgL_classz00_1,
									BgL_typez00_2, BgL_slotz00_524, BgL_wideningz00_3,
									BgL_srcz00_4);
								{	/* Object/getter.scm 73 */
									obj_t BgL_vrefz00_526;

									{	/* Object/getter.scm 73 */
										int BgL_auxz00_1889;

										BgL_auxz00_1889 = (int) (((long) 1));
										BgL_vrefz00_526 = BGL_MVALUES_VAL(BgL_auxz00_1889);
									}
									{	/* Object/getter.scm 73 */
										bool_t BgL_testz00_1892;

										{
											BgL_slotz00_bglt BgL_auxz00_1893;

											BgL_auxz00_1893 = (BgL_slotz00_bglt) (BgL_slotz00_524);
											BgL_testz00_1892 =
												(((BgL_slotz00_bglt) CREF(BgL_auxz00_1893))->
												BgL_readzd2onlyzf3z21);
										}
										if (BgL_testz00_1892)
											{	/* Object/getter.scm 74 */
												obj_t BgL_arg2491z00_528;

												obj_t BgL_arg2492z00_529;

												obj_t BgL_arg2493z00_530;

												BgL_arg2491z00_528 = CDR(BgL_slotsz00_517);
												BgL_arg2492z00_529 =
													bgl_append2(BgL_refz00_525, BgL_resz00_518);
												if (CBOOL(BgL_vrefz00_526))
													{	/* Object/getter.scm 77 */
														obj_t BgL_arg2503z00_531;

														{	/* Object/getter.scm 77 */
															obj_t BgL_arg2504z00_532;

															{
																BgL_slotz00_bglt BgL_auxz00_1900;

																BgL_auxz00_1900 =
																	(BgL_slotz00_bglt) (BgL_slotz00_524);
																BgL_arg2504z00_532 =
																	(((BgL_slotz00_bglt) CREF(BgL_auxz00_1900))->
																	BgL_virtualzd2numzd2);
															}
															{	/* Object/getter.scm 77 */
																obj_t BgL_list2505z00_533;

																{	/* Object/getter.scm 77 */
																	obj_t BgL_arg2523z00_534;

																	{	/* Object/getter.scm 77 */
																		obj_t BgL_arg2529z00_535;

																		BgL_arg2529z00_535 =
																			MAKE_PAIR(BFALSE, BNIL);
																		BgL_arg2523z00_534 =
																			MAKE_PAIR(BgL_vrefz00_526,
																			BgL_arg2529z00_535);
																	}
																	BgL_list2505z00_533 =
																		MAKE_PAIR(BgL_arg2504z00_532,
																		BgL_arg2523z00_534);
																}
																BgL_arg2503z00_531 = BgL_list2505z00_533;
															}
														}
														BgL_arg2493z00_530 =
															MAKE_PAIR(BgL_arg2503z00_531,
															BgL_virtualsz00_519);
													}
												else
													{	/* Object/getter.scm 76 */
														BgL_arg2493z00_530 = BgL_virtualsz00_519;
													}
												{
													obj_t BgL_virtualsz00_1909;

													obj_t BgL_resz00_1908;

													obj_t BgL_slotsz00_1907;

													BgL_slotsz00_1907 = BgL_arg2491z00_528;
													BgL_resz00_1908 = BgL_arg2492z00_529;
													BgL_virtualsz00_1909 = BgL_arg2493z00_530;
													BgL_virtualsz00_519 = BgL_virtualsz00_1909;
													BgL_resz00_518 = BgL_resz00_1908;
													BgL_slotsz00_517 = BgL_slotsz00_1907;
													goto BgL_zc3anonymousza32473ze3z83_520;
												}
											}
										else
											{	/* Object/getter.scm 80 */
												obj_t BgL_setz00_536;

												BgL_setz00_536 =
													BGl_slotzd2setz12zc0zzobject_getterz00(BgL_classz00_1,
													BgL_typez00_2, BgL_slotz00_524, BgL_wideningz00_3,
													BgL_srcz00_4);
												{	/* Object/getter.scm 82 */
													obj_t BgL_vsetz00_537;

													{	/* Object/getter.scm 82 */
														int BgL_auxz00_1911;

														BgL_auxz00_1911 = (int) (((long) 1));
														BgL_vsetz00_537 = BGL_MVALUES_VAL(BgL_auxz00_1911);
													}
													{	/* Object/getter.scm 82 */
														obj_t BgL_arg2531z00_538;

														obj_t BgL_arg2536z00_539;

														obj_t BgL_arg2544z00_540;

														BgL_arg2531z00_538 = CDR(BgL_slotsz00_517);
														{	/* Object/getter.scm 83 */
															obj_t BgL_list2545z00_541;

															{	/* Object/getter.scm 83 */
																obj_t BgL_arg2550z00_542;

																{	/* Object/getter.scm 83 */
																	obj_t BgL_arg2554z00_543;

																	BgL_arg2554z00_543 =
																		MAKE_PAIR(BgL_resz00_518, BNIL);
																	BgL_arg2550z00_542 =
																		MAKE_PAIR(BgL_setz00_536,
																		BgL_arg2554z00_543);
																}
																BgL_list2545z00_541 =
																	MAKE_PAIR(BgL_refz00_525, BgL_arg2550z00_542);
															}
															BgL_arg2536z00_539 =
																BGl_appendz00zz__r4_pairs_and_lists_6_3z00
																(BgL_list2545z00_541);
														}
														if (CBOOL(BgL_vrefz00_526))
															{	/* Object/getter.scm 85 */
																obj_t BgL_arg2555z00_544;

																{	/* Object/getter.scm 85 */
																	obj_t BgL_arg2556z00_545;

																	{
																		BgL_slotz00_bglt BgL_auxz00_1921;

																		BgL_auxz00_1921 =
																			(BgL_slotz00_bglt) (BgL_slotz00_524);
																		BgL_arg2556z00_545 =
																			(((BgL_slotz00_bglt)
																				CREF(BgL_auxz00_1921))->
																			BgL_virtualzd2numzd2);
																	}
																	{	/* Object/getter.scm 85 */
																		obj_t BgL_list2557z00_546;

																		{	/* Object/getter.scm 85 */
																			obj_t BgL_arg2558z00_547;

																			{	/* Object/getter.scm 85 */
																				obj_t BgL_arg2559z00_548;

																				BgL_arg2559z00_548 =
																					MAKE_PAIR(BgL_vsetz00_537, BNIL);
																				BgL_arg2558z00_547 =
																					MAKE_PAIR(BgL_vrefz00_526,
																					BgL_arg2559z00_548);
																			}
																			BgL_list2557z00_546 =
																				MAKE_PAIR(BgL_arg2556z00_545,
																				BgL_arg2558z00_547);
																		}
																		BgL_arg2555z00_544 = BgL_list2557z00_546;
																	}
																}
																BgL_arg2544z00_540 =
																	MAKE_PAIR(BgL_arg2555z00_544,
																	BgL_virtualsz00_519);
															}
														else
															{	/* Object/getter.scm 84 */
																BgL_arg2544z00_540 = BgL_virtualsz00_519;
															}
														{
															obj_t BgL_virtualsz00_1930;

															obj_t BgL_resz00_1929;

															obj_t BgL_slotsz00_1928;

															BgL_slotsz00_1928 = BgL_arg2531z00_538;
															BgL_resz00_1929 = BgL_arg2536z00_539;
															BgL_virtualsz00_1930 = BgL_arg2544z00_540;
															BgL_virtualsz00_519 = BgL_virtualsz00_1930;
															BgL_resz00_518 = BgL_resz00_1929;
															BgL_slotsz00_517 = BgL_slotsz00_1928;
															goto BgL_zc3anonymousza32473ze3z83_520;
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



/* _gen-class-slots-access! */
	obj_t BGl__genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(obj_t
		BgL_envz00_1823, obj_t BgL_classz00_1824, obj_t BgL_typez00_1825,
		obj_t BgL_wideningz00_1826, obj_t BgL_srcz00_1827)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 59 */
			return
				BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(
				(BgL_tclassz00_bglt) (BgL_classz00_1824), BgL_typez00_1825,
				BgL_wideningz00_1826, BgL_srcz00_1827);
		}
	}



/* gen-java-class-slots-access! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
		(BgL_jclassz00_bglt BgL_jclassz00_5, obj_t BgL_slotsz00_6,
		obj_t BgL_srczd2defzd2_7)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 94 */
			{	/* Object/getter.scm 101 */
				obj_t BgL_runner2588z00_572;

				if (NULLP(BgL_slotsz00_6))
					{	/* Object/getter.scm 101 */
						BgL_runner2588z00_572 = BNIL;
					}
				else
					{	/* Object/getter.scm 101 */
						obj_t BgL_head2449z00_556;

						BgL_head2449z00_556 =
							MAKE_PAIR
							(BGl_genzd2javazd2classzd2slotzd2accessz00zzobject_getterz00
							(BgL_srczd2defzd2_7, BgL_jclassz00_5, BgL_jclassz00_5,
								CAR(BgL_slotsz00_6)), BNIL);
						{	/* Object/getter.scm 101 */
							obj_t BgL_g2452z00_557;

							BgL_g2452z00_557 = CDR(BgL_slotsz00_6);
							{
								obj_t BgL_l2447z00_559;

								obj_t BgL_tail2450z00_560;

								BgL_l2447z00_559 = BgL_g2452z00_557;
								BgL_tail2450z00_560 = BgL_head2449z00_556;
							BgL_zc3anonymousza32563ze3z83_561:
								if (NULLP(BgL_l2447z00_559))
									{	/* Object/getter.scm 101 */
										BgL_runner2588z00_572 = BgL_head2449z00_556;
									}
								else
									{	/* Object/getter.scm 101 */
										obj_t BgL_newtail2451z00_563;

										BgL_newtail2451z00_563 =
											MAKE_PAIR
											(BGl_genzd2javazd2classzd2slotzd2accessz00zzobject_getterz00
											(BgL_srczd2defzd2_7, BgL_jclassz00_5, BgL_jclassz00_5,
												CAR(BgL_l2447z00_559)), BNIL);
										SET_CDR(BgL_tail2450z00_560, BgL_newtail2451z00_563);
										{
											obj_t BgL_tail2450z00_1947;

											obj_t BgL_l2447z00_1945;

											BgL_l2447z00_1945 = CDR(BgL_l2447z00_559);
											BgL_tail2450z00_1947 = BgL_newtail2451z00_563;
											BgL_tail2450z00_560 = BgL_tail2450z00_1947;
											BgL_l2447z00_559 = BgL_l2447z00_1945;
											goto BgL_zc3anonymousza32563ze3z83_561;
										}
									}
							}
						}
					}
				return
					BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_runner2588z00_572);
			}
		}
	}



/* gen-java-class-slot-access */
	obj_t BGl_genzd2javazd2classzd2slotzd2accessz00zzobject_getterz00(obj_t
		BgL_srczd2defzd2_1834, BgL_jclassz00_bglt BgL_jclassz00_1833,
		BgL_jclassz00_bglt BgL_instance2436z00_1832, obj_t BgL_slotz00_573)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 100 */
			{	/* Object/getter.scm 97 */
				obj_t BgL_refz00_575;

				{	/* Object/getter.scm 97 */
					obj_t BgL_arg2602z00_579;

					{
						BgL_typez00_bglt BgL_auxz00_1949;

						BgL_auxz00_1949 = (BgL_typez00_bglt) (BgL_instance2436z00_1832);
						BgL_arg2602z00_579 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1949))->BgL_idz00);
					}
					BgL_refz00_575 =
						BGl_slotzd2directzd2refz00zzobject_getterz00(BgL_arg2602z00_579,
						(obj_t) (BgL_jclassz00_1833), BgL_slotz00_573, BFALSE,
						BgL_srczd2defzd2_1834);
				}
				{	/* Object/getter.scm 98 */
					bool_t BgL_testz00_1954;

					{
						BgL_slotz00_bglt BgL_auxz00_1955;

						BgL_auxz00_1955 = (BgL_slotz00_bglt) (BgL_slotz00_573);
						BgL_testz00_1954 =
							(((BgL_slotz00_bglt) CREF(BgL_auxz00_1955))->
							BgL_readzd2onlyzf3z21);
					}
					if (BgL_testz00_1954)
						{	/* Object/getter.scm 98 */
							return BgL_refz00_575;
						}
					else
						{	/* Object/getter.scm 100 */
							obj_t BgL_arg2594z00_577;

							{	/* Object/getter.scm 100 */
								obj_t BgL_arg2595z00_578;

								{
									BgL_typez00_bglt BgL_auxz00_1958;

									BgL_auxz00_1958 =
										(BgL_typez00_bglt) (BgL_instance2436z00_1832);
									BgL_arg2595z00_578 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_1958))->BgL_idz00);
								}
								BgL_arg2594z00_577 =
									BGl_slotzd2directzd2setz12z12zzobject_getterz00
									(BgL_arg2595z00_578, (obj_t) (BgL_jclassz00_1833),
									BgL_slotz00_573, BFALSE, BgL_srczd2defzd2_1834);
							}
							return bgl_append2(BgL_refz00_575, BgL_arg2594z00_577);
						}
				}
			}
		}
	}



/* _gen-java-class-slots-access! */
	obj_t BGl__genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00(obj_t
		BgL_envz00_1828, obj_t BgL_jclassz00_1829, obj_t BgL_slotsz00_1830,
		obj_t BgL_srczd2defzd2_1831)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 94 */
			return
				BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00(
				(BgL_jclassz00_bglt) (BgL_jclassz00_1829), BgL_slotsz00_1830,
				BgL_srczd2defzd2_1831);
		}
	}



/* slot-ref */
	obj_t BGl_slotzd2refzd2zzobject_getterz00(BgL_tclassz00_bglt BgL_classz00_8,
		obj_t BgL_typez00_9, obj_t BgL_slotz00_10, obj_t BgL_wideningz00_11,
		obj_t BgL_srczd2defzd2_12)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 106 */
			{	/* Object/getter.scm 107 */
				obj_t BgL_classzd2idzd2_581;

				{
					BgL_typez00_bglt BgL_auxz00_1966;

					BgL_auxz00_1966 = (BgL_typez00_bglt) (BgL_classz00_8);
					BgL_classzd2idzd2_581 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_1966))->BgL_idz00);
				}
				{	/* Object/getter.scm 109 */
					bool_t BgL_testz00_1969;

					{	/* Object/getter.scm 109 */
						BgL_slotz00_bglt BgL_obj2367z00_1641;

						BgL_obj2367z00_1641 = (BgL_slotz00_bglt) (BgL_slotz00_10);
						BgL_testz00_1969 =
							CBOOL(
							(((BgL_slotz00_bglt) CREF(BgL_obj2367z00_1641))->BgL_indexedz00));
					}
					if (BgL_testz00_1969)
						{	/* Object/getter.scm 110 */
							obj_t BgL_val0_2453z00_583;

							BgL_val0_2453z00_583 =
								BGl_slotzd2indexedzd2refz00zzobject_getterz00
								(BgL_classzd2idzd2_581, BgL_typez00_9, BgL_slotz00_10,
								BgL_wideningz00_11, BgL_srczd2defzd2_12);
							{	/* Object/getter.scm 110 */
								int BgL_auxz00_1974;

								BgL_auxz00_1974 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_1974);
							}
							{	/* Object/getter.scm 110 */
								int BgL_auxz00_1977;

								BgL_auxz00_1977 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_1977, BFALSE);
							}
							return BgL_val0_2453z00_583;
						}
					else
						{	/* Object/getter.scm 109 */
							if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
									(BgL_slotz00_bglt) (BgL_slotz00_10)))
								{	/* Object/getter.scm 114 */
									obj_t BgL_userzd2defzd2_586;

									BgL_userzd2defzd2_586 =
										BGl_slotzd2virtualzd2refz00zzobject_getterz00
										(BgL_classz00_8, BgL_typez00_9, BgL_slotz00_10,
										BgL_wideningz00_11, BgL_srczd2defzd2_12);
									{	/* Object/getter.scm 116 */
										obj_t BgL_classzd2defzd2_587;

										{	/* Object/getter.scm 116 */
											int BgL_auxz00_1984;

											BgL_auxz00_1984 = (int) (((long) 1));
											BgL_classzd2defzd2_587 = BGL_MVALUES_VAL(BgL_auxz00_1984);
										}
										if (CBOOL(BgL_classzd2defzd2_587))
											{	/* Object/getter.scm 116 */
												{	/* Object/getter.scm 117 */
													int BgL_auxz00_1989;

													BgL_auxz00_1989 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_1989);
												}
												{	/* Object/getter.scm 117 */
													int BgL_auxz00_1992;

													BgL_auxz00_1992 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_1992,
														BgL_classzd2defzd2_587);
												}
												return BgL_userzd2defzd2_586;
											}
										else
											{	/* Object/getter.scm 116 */
												{	/* Object/getter.scm 118 */
													int BgL_auxz00_1995;

													BgL_auxz00_1995 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_1995);
												}
												{	/* Object/getter.scm 118 */
													int BgL_auxz00_1998;

													BgL_auxz00_1998 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_1998, BFALSE);
												}
												return BgL_userzd2defzd2_586;
											}
									}
								}
							else
								{	/* Object/getter.scm 120 */
									obj_t BgL_val0_2459z00_592;

									BgL_val0_2459z00_592 =
										BGl_slotzd2directzd2refz00zzobject_getterz00
										(BgL_classzd2idzd2_581, BgL_typez00_9, BgL_slotz00_10,
										BgL_wideningz00_11, BgL_srczd2defzd2_12);
									{	/* Object/getter.scm 120 */
										int BgL_auxz00_2002;

										BgL_auxz00_2002 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2002);
									}
									{	/* Object/getter.scm 120 */
										int BgL_auxz00_2005;

										BgL_auxz00_2005 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2005, BFALSE);
									}
									return BgL_val0_2459z00_592;
								}
						}
				}
			}
		}
	}



/* first-virtual-slot? */
	bool_t BGl_firstzd2virtualzd2slotzf3zf3zzobject_getterz00(obj_t
		BgL_slotz00_13, BgL_tclassz00_bglt BgL_classz00_14)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 131 */
			{	/* Object/getter.scm 132 */
				obj_t BgL_vnumz00_594;

				obj_t BgL_superz00_595;

				{
					BgL_slotz00_bglt BgL_auxz00_2008;

					BgL_auxz00_2008 = (BgL_slotz00_bglt) (BgL_slotz00_13);
					BgL_vnumz00_594 =
						(((BgL_slotz00_bglt) CREF(BgL_auxz00_2008))->BgL_virtualzd2numzd2);
				}
				{
					obj_t BgL_auxz00_2011;

					{	/* Object/getter.scm 133 */
						BgL_objectz00_bglt BgL_auxz00_2012;

						BgL_auxz00_2012 = (BgL_objectz00_bglt) (BgL_classz00_14);
						BgL_auxz00_2011 = BGL_OBJECT_WIDENING(BgL_auxz00_2012);
					}
					BgL_superz00_595 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2011))->BgL_itszd2superzd2);
				}
				{	/* Object/getter.scm 134 */
					bool_t BgL__ortest_2438z00_596;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_595,
							BGl_tclassz00zzobject_classz00))
						{	/* Object/getter.scm 134 */
							BgL__ortest_2438z00_596 = ((bool_t) 0);
						}
					else
						{	/* Object/getter.scm 134 */
							BgL__ortest_2438z00_596 = ((bool_t) 1);
						}
					if (BgL__ortest_2438z00_596)
						{	/* Object/getter.scm 134 */
							return BgL__ortest_2438z00_596;
						}
					else
						{	/* Object/getter.scm 135 */
							long BgL_auxz00_2019;

							{	/* Object/getter.scm 135 */
								BgL_tclassz00_bglt BgL_obj2153z00_1658;

								BgL_obj2153z00_1658 = (BgL_tclassz00_bglt) (BgL_superz00_595);
								{	/* Object/getter.scm 135 */
									obj_t BgL_auxz00_2021;

									{
										obj_t BgL_auxz00_2022;

										{	/* Object/getter.scm 135 */
											BgL_objectz00_bglt BgL_auxz00_2023;

											BgL_auxz00_2023 =
												(BgL_objectz00_bglt) (BgL_obj2153z00_1658);
											BgL_auxz00_2022 = BGL_OBJECT_WIDENING(BgL_auxz00_2023);
										}
										BgL_auxz00_2021 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2022))->
											BgL_virtualzd2slotszd2numberz00);
									}
									BgL_auxz00_2019 = (long) CINT(BgL_auxz00_2021);
							}}
							return (BgL_auxz00_2019 <= (long) CINT(BgL_vnumz00_594));
		}}}}
	}



/* slot-virtual-ref */
	obj_t BGl_slotzd2virtualzd2refz00zzobject_getterz00(BgL_tclassz00_bglt
		BgL_classz00_15, obj_t BgL_typez00_16, obj_t BgL_slotz00_17,
		obj_t BgL_wideningz00_18, obj_t BgL_srczd2defzd2_19)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 140 */
			{
				obj_t BgL_userzd2getterzd2_699;

				obj_t BgL_classzd2idzd2_700;

				obj_t BgL_vnumz00_701;

				{	/* Object/getter.scm 154 */
					obj_t BgL_classzd2idzd2_600;

					{
						BgL_typez00_bglt BgL_auxz00_2030;

						BgL_auxz00_2030 = (BgL_typez00_bglt) (BgL_classz00_15);
						BgL_classzd2idzd2_600 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_2030))->BgL_idz00);
					}
					{	/* Object/getter.scm 154 */
						obj_t BgL_classzd2ownerzd2_601;

						{
							BgL_slotz00_bglt BgL_auxz00_2033;

							BgL_auxz00_2033 = (BgL_slotz00_bglt) (BgL_slotz00_17);
							BgL_classzd2ownerzd2_601 =
								(((BgL_slotz00_bglt) CREF(BgL_auxz00_2033))->
								BgL_classzd2ownerzd2);
						}
						{	/* Object/getter.scm 155 */
							obj_t BgL_slotzd2refzd2idz00_602;

							{	/* Object/getter.scm 156 */
								obj_t BgL_arg2722z00_694;

								obj_t BgL_arg2724z00_695;

								BgL_arg2722z00_694 = CNST_TABLE_REF(((long) 5));
								{
									BgL_slotz00_bglt BgL_auxz00_2037;

									BgL_auxz00_2037 = (BgL_slotz00_bglt) (BgL_slotz00_17);
									BgL_arg2724z00_695 =
										(((BgL_slotz00_bglt) CREF(BgL_auxz00_2037))->BgL_idz00);
								}
								{	/* Object/getter.scm 156 */
									obj_t BgL_list2725z00_696;

									{	/* Object/getter.scm 156 */
										obj_t BgL_arg2726z00_697;

										{	/* Object/getter.scm 156 */
											obj_t BgL_arg2727z00_698;

											BgL_arg2727z00_698 = MAKE_PAIR(BgL_arg2724z00_695, BNIL);
											BgL_arg2726z00_697 =
												MAKE_PAIR(BgL_arg2722z00_694, BgL_arg2727z00_698);
										}
										BgL_list2725z00_696 =
											MAKE_PAIR(BgL_classzd2idzd2_600, BgL_arg2726z00_697);
									}
									BgL_slotzd2refzd2idz00_602 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list2725z00_696);
							}}
							{	/* Object/getter.scm 156 */
								obj_t BgL_slotzd2refzd2tidz00_603;

								{	/* Object/getter.scm 158 */
									obj_t BgL_arg2720z00_692;

									{	/* Object/getter.scm 158 */
										BgL_typez00_bglt BgL_obj1508z00_1665;

										{	/* Object/getter.scm 158 */
											BgL_slotz00_bglt BgL_obj2355z00_1664;

											BgL_obj2355z00_1664 = (BgL_slotz00_bglt) (BgL_slotz00_17);
											BgL_obj1508z00_1665 =
												(BgL_typez00_bglt) (
												(((BgL_slotz00_bglt) CREF(BgL_obj2355z00_1664))->
													BgL_typez00));
										}
										BgL_arg2720z00_692 =
											(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1665))->
											BgL_idz00);
									}
									BgL_slotzd2refzd2tidz00_603 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_slotzd2refzd2idz00_602, BgL_arg2720z00_692);
								}
								{	/* Object/getter.scm 157 */
									obj_t BgL_tidz00_604;

									{	/* Object/getter.scm 159 */
										obj_t BgL_arg2719z00_691;

										{
											BgL_typez00_bglt BgL_auxz00_2049;

											BgL_auxz00_2049 = (BgL_typez00_bglt) (BgL_typez00_16);
											BgL_arg2719z00_691 =
												(((BgL_typez00_bglt) CREF(BgL_auxz00_2049))->BgL_idz00);
										}
										BgL_tidz00_604 =
											BGl_makezd2typedzd2formalz00zzast_identz00
											(BgL_arg2719z00_691);
									}
									{	/* Object/getter.scm 160 */
										obj_t BgL_objz00_606;

										BgL_objz00_606 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
														0))));
										{	/* Object/getter.scm 161 */
											obj_t BgL_vnumz00_607;

											{
												BgL_slotz00_bglt BgL_auxz00_2056;

												BgL_auxz00_2056 = (BgL_slotz00_bglt) (BgL_slotz00_17);
												BgL_vnumz00_607 =
													(((BgL_slotz00_bglt) CREF(BgL_auxz00_2056))->
													BgL_virtualzd2numzd2);
											}
											{	/* Object/getter.scm 162 */
												obj_t BgL_userzd2getterzd2_608;

												{
													BgL_slotz00_bglt BgL_auxz00_2059;

													BgL_auxz00_2059 = (BgL_slotz00_bglt) (BgL_slotz00_17);
													BgL_userzd2getterzd2_608 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_2059))->
														BgL_getterz00);
												}
												{	/* Object/getter.scm 163 */
													obj_t BgL_getterz00_609;

													BgL_userzd2getterzd2_699 = BgL_userzd2getterzd2_608;
													BgL_classzd2idzd2_700 = BgL_classzd2idzd2_600;
													BgL_vnumz00_701 = BgL_vnumz00_607;
													if (BGl_firstzd2virtualzd2slotzf3zf3zzobject_getterz00
														(BgL_slotz00_17, BgL_classz00_15))
														{	/* Object/getter.scm 142 */
															BgL_getterz00_609 = BgL_userzd2getterzd2_699;
														}
													else
														{	/* Object/getter.scm 146 */
															obj_t BgL_gobjz00_704;

															BgL_gobjz00_704 =
																BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																(BGl_gensymz00zz__r4_symbols_6_4z00
																(CNST_TABLE_REF(((long) 0))));
															{	/* Object/getter.scm 147 */
																obj_t BgL_arg2730z00_705;

																obj_t BgL_arg2731z00_706;

																BgL_arg2730z00_705 = CNST_TABLE_REF(((long) 1));
																{	/* Object/getter.scm 147 */
																	obj_t BgL_arg2732z00_707;

																	obj_t BgL_arg2733z00_708;

																	BgL_arg2732z00_707 =
																		MAKE_PAIR(BgL_gobjz00_704, BNIL);
																	{	/* Object/getter.scm 148 */
																		obj_t BgL_arg2737z00_712;

																		obj_t BgL_arg2738z00_713;

																		BgL_arg2737z00_712 =
																			CNST_TABLE_REF(((long) 2));
																		{	/* Object/getter.scm 148 */
																			obj_t BgL_arg2739z00_714;

																			obj_t BgL_arg2740z00_715;

																			{	/* Object/getter.scm 148 */
																				obj_t BgL_arg2745z00_719;

																				{	/* Object/getter.scm 148 */
																					obj_t BgL_arg2747z00_721;

																					obj_t BgL_arg2748z00_722;

																					BgL_arg2747z00_721 =
																						CNST_TABLE_REF(((long) 3));
																					{	/* Object/getter.scm 149 */
																						obj_t BgL_arg2749z00_723;

																						{	/* Object/getter.scm 149 */
																							obj_t BgL_arg2752z00_726;

																							obj_t BgL_arg2753z00_727;

																							BgL_arg2752z00_726 =
																								CNST_TABLE_REF(((long) 1));
																							{	/* Object/getter.scm 149 */
																								obj_t BgL_arg2755z00_729;

																								{	/* Object/getter.scm 150 */
																									obj_t BgL_arg2759z00_733;

																									obj_t BgL_arg2760z00_734;

																									BgL_arg2759z00_733 =
																										CNST_TABLE_REF(((long) 4));
																									{	/* Object/getter.scm 150 */
																										obj_t BgL_list2761z00_735;

																										{	/* Object/getter.scm 150 */
																											obj_t BgL_arg2762z00_736;

																											{	/* Object/getter.scm 150 */
																												obj_t
																													BgL_arg2763z00_737;
																												BgL_arg2763z00_737 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2762z00_736 =
																													MAKE_PAIR
																													(BgL_vnumz00_701,
																													BgL_arg2763z00_737);
																											}
																											BgL_list2761z00_735 =
																												MAKE_PAIR
																												(BgL_gobjz00_704,
																												BgL_arg2762z00_736);
																										}
																										BgL_arg2760z00_734 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_classzd2idzd2_700,
																											BgL_list2761z00_735);
																									}
																									BgL_arg2755z00_729 =
																										MAKE_PAIR
																										(BgL_arg2759z00_733,
																										BgL_arg2760z00_734);
																								}
																								{	/* Object/getter.scm 149 */
																									obj_t BgL_list2757z00_731;

																									{	/* Object/getter.scm 149 */
																										obj_t BgL_arg2758z00_732;

																										BgL_arg2758z00_732 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2757z00_731 =
																											MAKE_PAIR
																											(BgL_arg2755z00_729,
																											BgL_arg2758z00_732);
																									}
																									BgL_arg2753z00_727 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BNIL, BgL_list2757z00_731);
																							}}
																							BgL_arg2749z00_723 =
																								MAKE_PAIR(BgL_arg2752z00_726,
																								BgL_arg2753z00_727);
																						}
																						{	/* Object/getter.scm 148 */
																							obj_t BgL_list2751z00_725;

																							BgL_list2751z00_725 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2748z00_722 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2749z00_723,
																								BgL_list2751z00_725);
																					}}
																					BgL_arg2745z00_719 =
																						MAKE_PAIR(BgL_arg2747z00_721,
																						BgL_arg2748z00_722);
																				}
																				BgL_arg2739z00_714 =
																					MAKE_PAIR(BgL_arg2745z00_719, BNIL);
																			}
																			{	/* Object/getter.scm 153 */
																				obj_t BgL_arg2764z00_738;

																				{	/* Object/getter.scm 153 */
																					obj_t BgL_list2765z00_739;

																					BgL_list2765z00_739 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2764z00_738 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_gobjz00_704,
																						BgL_list2765z00_739);
																				}
																				BgL_arg2740z00_715 =
																					MAKE_PAIR(BgL_userzd2getterzd2_699,
																					BgL_arg2764z00_738);
																			}
																			{	/* Object/getter.scm 148 */
																				obj_t BgL_list2742z00_717;

																				{	/* Object/getter.scm 148 */
																					obj_t BgL_arg2743z00_718;

																					BgL_arg2743z00_718 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2742z00_717 =
																						MAKE_PAIR(BgL_arg2740z00_715,
																						BgL_arg2743z00_718);
																				}
																				BgL_arg2738z00_713 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2739z00_714,
																					BgL_list2742z00_717);
																		}}
																		BgL_arg2733z00_708 =
																			MAKE_PAIR(BgL_arg2737z00_712,
																			BgL_arg2738z00_713);
																	}
																	{	/* Object/getter.scm 147 */
																		obj_t BgL_list2735z00_710;

																		{	/* Object/getter.scm 147 */
																			obj_t BgL_arg2736z00_711;

																			BgL_arg2736z00_711 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2735z00_710 =
																				MAKE_PAIR(BgL_arg2733z00_708,
																				BgL_arg2736z00_711);
																		}
																		BgL_arg2731z00_706 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2732z00_707, BgL_list2735z00_710);
																}}
																BgL_getterz00_609 =
																	MAKE_PAIR(BgL_arg2730z00_705,
																	BgL_arg2731z00_706);
														}}
													{	/* Object/getter.scm 164 */

														if (
															((obj_t) (BgL_classz00_15) ==
																BgL_classzd2ownerzd2_601))
															{	/* Object/getter.scm 165 */
																{	/* Object/getter.scm 169 */
																	obj_t BgL_arg2615z00_611;

																	{	/* Object/getter.scm 169 */
																		obj_t BgL_arg2621z00_612;

																		obj_t BgL_arg2628z00_613;

																		BgL_arg2621z00_612 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Object/getter.scm 169 */
																			obj_t BgL_arg2629z00_614;

																			{	/* Object/getter.scm 169 */
																				obj_t BgL_arg2642z00_617;

																				obj_t BgL_arg2648z00_618;

																				BgL_arg2642z00_617 =
																					CNST_TABLE_REF(((long) 7));
																				{	/* Object/getter.scm 169 */
																					obj_t BgL_list2649z00_619;

																					{	/* Object/getter.scm 169 */
																						obj_t BgL_arg2650z00_620;

																						BgL_arg2650z00_620 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2649z00_619 =
																							MAKE_PAIR(BgL_tidz00_604,
																							BgL_arg2650z00_620);
																					}
																					BgL_arg2648z00_618 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_slotzd2refzd2tidz00_603,
																						BgL_list2649z00_619);
																				}
																				BgL_arg2629z00_614 =
																					MAKE_PAIR(BgL_arg2642z00_617,
																					BgL_arg2648z00_618);
																			}
																			{	/* Object/getter.scm 169 */
																				obj_t BgL_list2631z00_616;

																				BgL_list2631z00_616 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2628z00_613 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2629z00_614,
																					BgL_list2631z00_616);
																		}}
																		BgL_arg2615z00_611 =
																			MAKE_PAIR(BgL_arg2621z00_612,
																			BgL_arg2628z00_613);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg2615z00_611);
																}
																{	/* Object/getter.scm 171 */
																	obj_t BgL_arg2651z00_621;

																	{	/* Object/getter.scm 171 */
																		obj_t BgL_arg2652z00_622;

																		obj_t BgL_arg2655z00_623;

																		BgL_arg2652z00_622 =
																			CNST_TABLE_REF(((long) 8));
																		{	/* Object/getter.scm 171 */
																			obj_t BgL_arg2656z00_624;

																			{	/* Object/getter.scm 171 */
																				obj_t BgL_arg2659z00_627;

																				{	/* Object/getter.scm 171 */
																					obj_t BgL_arg2660z00_628;

																					obj_t BgL_arg2661z00_629;

																					obj_t BgL_arg2663z00_630;

																					BgL_arg2660z00_628 =
																						CNST_TABLE_REF(((long) 9));
																					BgL_arg2661z00_629 =
																						CNST_TABLE_REF(((long) 10));
																					{	/* Object/getter.scm 172 */
																						obj_t BgL_arg2668z00_635;

																						obj_t BgL_arg2669z00_636;

																						BgL_arg2668z00_635 =
																							CNST_TABLE_REF(((long) 11));
																						{	/* Object/getter.scm 172 */
																							obj_t BgL_arg2670z00_637;

																							{	/* Object/getter.scm 172 */
																								obj_t BgL_arg2673z00_640;

																								obj_t BgL_arg2674z00_641;

																								BgL_arg2673z00_640 =
																									CNST_TABLE_REF(((long) 12));
																								{	/* Object/getter.scm 172 */
																									obj_t BgL_arg2675z00_642;

																									BgL_arg2675z00_642 =
																										MAKE_PAIR
																										(BgL_slotzd2refzd2idz00_602,
																										BNIL);
																									{	/* Object/getter.scm 172 */
																										obj_t BgL_list2677z00_644;

																										BgL_list2677z00_644 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg2674z00_641 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2675z00_642,
																											BgL_list2677z00_644);
																								}}
																								BgL_arg2670z00_637 =
																									MAKE_PAIR(BgL_arg2673z00_640,
																									BgL_arg2674z00_641);
																							}
																							{	/* Object/getter.scm 172 */
																								obj_t BgL_list2672z00_639;

																								BgL_list2672z00_639 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2669z00_636 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2670z00_637,
																									BgL_list2672z00_639);
																						}}
																						BgL_arg2663z00_630 =
																							MAKE_PAIR(BgL_arg2668z00_635,
																							BgL_arg2669z00_636);
																					}
																					{	/* Object/getter.scm 171 */
																						obj_t BgL_list2665z00_632;

																						{	/* Object/getter.scm 171 */
																							obj_t BgL_arg2666z00_633;

																							{	/* Object/getter.scm 171 */
																								obj_t BgL_arg2667z00_634;

																								BgL_arg2667z00_634 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2666z00_633 =
																									MAKE_PAIR(BgL_arg2663z00_630,
																									BgL_arg2667z00_634);
																							}
																							BgL_list2665z00_632 =
																								MAKE_PAIR(BgL_arg2661z00_629,
																								BgL_arg2666z00_633);
																						}
																						BgL_arg2659z00_627 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2660z00_628,
																							BgL_list2665z00_632);
																				}}
																				BgL_arg2656z00_624 =
																					MAKE_PAIR(BgL_slotzd2refzd2idz00_602,
																					BgL_arg2659z00_627);
																			}
																			{	/* Object/getter.scm 171 */
																				obj_t BgL_list2658z00_626;

																				BgL_list2658z00_626 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2655z00_623 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2656z00_624,
																					BgL_list2658z00_626);
																		}}
																		BgL_arg2651z00_621 =
																			MAKE_PAIR(BgL_arg2652z00_622,
																			BgL_arg2655z00_623);
																	}
																	BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																		(BgL_arg2651z00_621);
																}
																{	/* Object/getter.scm 173 */
																	obj_t BgL_val0_2461z00_645;

																	obj_t BgL_val1_2462z00_646;

																	{	/* Object/getter.scm 176 */
																		obj_t BgL_arg2678z00_647;

																		{	/* Object/getter.scm 176 */
																			obj_t BgL_arg2680z00_649;

																			obj_t BgL_arg2681z00_650;

																			{	/* Object/getter.scm 176 */
																				obj_t BgL_arg2684z00_653;

																				obj_t BgL_arg2685z00_654;

																				BgL_arg2684z00_653 =
																					CNST_TABLE_REF(((long) 13));
																				{	/* Object/getter.scm 176 */
																					obj_t BgL_arg2686z00_655;

																					obj_t BgL_arg2687z00_656;

																					{	/* Object/getter.scm 176 */
																						obj_t BgL_arg2691z00_660;

																						{	/* Object/getter.scm 176 */
																							obj_t BgL_arg2692z00_661;

																							{	/* Object/getter.scm 176 */
																								obj_t BgL_arg2695z00_664;

																								{	/* Object/getter.scm 176 */
																									obj_t BgL_arg2696z00_665;

																									obj_t BgL_arg2697z00_666;

																									{	/* Object/getter.scm 176 */
																										obj_t BgL_res3433z00_1672;

																										{	/* Object/getter.scm 176 */
																											obj_t BgL_arg2063z00_1671;

																											BgL_arg2063z00_1671 =
																												SYMBOL_TO_STRING
																												(BgL_objz00_606);
																											BgL_res3433z00_1672 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_1671);
																										}
																										BgL_arg2696z00_665 =
																											BgL_res3433z00_1672;
																									}
																									{	/* Object/getter.scm 176 */
																										obj_t BgL_res3434z00_1675;

																										{	/* Object/getter.scm 176 */
																											obj_t BgL_arg2063z00_1674;

																											BgL_arg2063z00_1674 =
																												SYMBOL_TO_STRING
																												(BgL_tidz00_604);
																											BgL_res3434z00_1675 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_1674);
																										}
																										BgL_arg2697z00_666 =
																											BgL_res3434z00_1675;
																									}
																									{	/* Object/getter.scm 176 */
																										obj_t BgL_list2698z00_667;

																										{	/* Object/getter.scm 176 */
																											obj_t BgL_arg2699z00_668;

																											BgL_arg2699z00_668 =
																												MAKE_PAIR
																												(BgL_arg2697z00_666,
																												BNIL);
																											BgL_list2698z00_667 =
																												MAKE_PAIR
																												(BgL_arg2696z00_665,
																												BgL_arg2699z00_668);
																										}
																										BgL_arg2695z00_664 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2698z00_667);
																								}}
																								BgL_arg2692z00_661 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2695z00_664));
																							}
																							{	/* Object/getter.scm 176 */
																								obj_t BgL_list2694z00_663;

																								BgL_list2694z00_663 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2691z00_660 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg2692z00_661,
																									BgL_list2694z00_663);
																						}}
																						BgL_arg2686z00_655 =
																							MAKE_PAIR
																							(BgL_slotzd2refzd2tidz00_603,
																							BgL_arg2691z00_660);
																					}
																					{	/* Object/getter.scm 177 */
																						obj_t BgL_arg2700z00_669;

																						obj_t BgL_arg2701z00_670;

																						{	/* Object/getter.scm 177 */
																							obj_t BgL_arg2702z00_671;

																							obj_t BgL_arg2703z00_672;

																							BgL_arg2702z00_671 =
																								CNST_TABLE_REF(((long) 14));
																							{	/* Object/getter.scm 177 */
																								obj_t BgL_list2704z00_673;

																								{	/* Object/getter.scm 177 */
																									obj_t BgL_arg2705z00_674;

																									obj_t BgL_arg2706z00_675;

																									BgL_arg2705z00_674 =
																										CNST_TABLE_REF(((long) 15));
																									BgL_arg2706z00_675 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2704z00_673 =
																										MAKE_PAIR
																										(BgL_arg2705z00_674,
																										BgL_arg2706z00_675);
																								}
																								BgL_arg2703z00_672 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 16)),
																									BgL_list2704z00_673);
																							}
																							BgL_arg2700z00_669 =
																								MAKE_PAIR(BgL_arg2702z00_671,
																								BgL_arg2703z00_672);
																						}
																						{	/* Object/getter.scm 177 */
																							obj_t BgL_list2707z00_676;

																							{	/* Object/getter.scm 177 */
																								obj_t BgL_arg2708z00_677;

																								BgL_arg2708z00_677 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2707z00_676 =
																									MAKE_PAIR(BgL_vnumz00_607,
																									BgL_arg2708z00_677);
																							}
																							BgL_arg2701z00_670 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_objz00_606,
																								BgL_list2707z00_676);
																						}
																						BgL_arg2687z00_656 =
																							MAKE_PAIR(BgL_arg2700z00_669,
																							BgL_arg2701z00_670);
																					}
																					{	/* Object/getter.scm 176 */
																						obj_t BgL_list2689z00_658;

																						{	/* Object/getter.scm 176 */
																							obj_t BgL_arg2690z00_659;

																							BgL_arg2690z00_659 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2689z00_658 =
																								MAKE_PAIR(BgL_arg2687z00_656,
																								BgL_arg2690z00_659);
																						}
																						BgL_arg2685z00_654 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2686z00_655,
																							BgL_list2689z00_658);
																				}}
																				BgL_arg2680z00_649 =
																					MAKE_PAIR(BgL_arg2684z00_653,
																					BgL_arg2685z00_654);
																			}
																			if (BGl_iszd2azf3z21zz__objectz00
																				(BgL_slotz00_17,
																					BGl_slotz00zzobject_slotsz00))
																				{
																					BgL_slotz00_bglt BgL_auxz00_2161;

																					BgL_auxz00_2161 =
																						(BgL_slotz00_bglt) (BgL_slotz00_17);
																					BgL_arg2681z00_650 =
																						(((BgL_slotz00_bglt)
																							CREF(BgL_auxz00_2161))->
																						BgL_srcz00);
																				}
																			else
																				{	/* Object/getter.scm 178 */
																					BgL_arg2681z00_650 = BgL_slotz00_17;
																				}
																			{	/* Object/getter.scm 175 */
																				obj_t BgL_list2682z00_651;

																				{	/* Object/getter.scm 175 */
																					obj_t BgL_arg2683z00_652;

																					BgL_arg2683z00_652 =
																						MAKE_PAIR(BgL_srczd2defzd2_19,
																						BNIL);
																					BgL_list2682z00_651 =
																						MAKE_PAIR(BgL_arg2681z00_650,
																						BgL_arg2683z00_652);
																				}
																				BgL_arg2678z00_647 =
																					BGl_epairifyza2za2zztools_miscz00
																					(BgL_arg2680z00_649,
																					BgL_list2682z00_651);
																			}
																		}
																		{	/* Object/getter.scm 174 */
																			obj_t BgL_list2679z00_648;

																			BgL_list2679z00_648 =
																				MAKE_PAIR(BgL_arg2678z00_647, BNIL);
																			BgL_val0_2461z00_645 =
																				BgL_list2679z00_648;
																		}
																	}
																	{	/* Object/getter.scm 182 */
																		bool_t BgL_testz00_2168;

																		{	/* Object/getter.scm 182 */
																			obj_t BgL_auxz00_2169;

																			{
																				BgL_slotz00_bglt BgL_auxz00_2171;

																				BgL_auxz00_2171 =
																					(BgL_slotz00_bglt) (BgL_slotz00_17);
																				BgL_auxz00_2169 =
																					(((BgL_slotz00_bglt)
																						CREF(BgL_auxz00_2171))->
																					BgL_classzd2ownerzd2);
																			}
																			BgL_testz00_2168 =
																				(
																				(obj_t) (BgL_classz00_15) ==
																				BgL_auxz00_2169);
																		}
																		if (BgL_testz00_2168)
																			{	/* Object/getter.scm 182 */
																				BgL_val1_2462z00_646 =
																					BgL_getterz00_609;
																			}
																		else
																			{	/* Object/getter.scm 182 */
																				BgL_val1_2462z00_646 = BFALSE;
																			}
																	}
																	{	/* Object/getter.scm 173 */
																		int BgL_auxz00_2175;

																		BgL_auxz00_2175 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_2175);
																	}
																	{	/* Object/getter.scm 173 */
																		int BgL_auxz00_2178;

																		BgL_auxz00_2178 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_2178,
																			BgL_val1_2462z00_646);
																	}
																	return BgL_val0_2461z00_645;
																}
															}
														else
															{	/* Object/getter.scm 185 */
																obj_t BgL_slotzd2refzd2oidz00_681;

																{	/* Object/getter.scm 185 */
																	obj_t BgL_arg2712z00_684;

																	obj_t BgL_arg2713z00_685;

																	obj_t BgL_arg2714z00_686;

																	{
																		BgL_typez00_bglt BgL_auxz00_2181;

																		BgL_auxz00_2181 =
																			(BgL_typez00_bglt)
																			(BgL_classzd2ownerzd2_601);
																		BgL_arg2712z00_684 =
																			(((BgL_typez00_bglt)
																				CREF(BgL_auxz00_2181))->BgL_idz00);
																	}
																	BgL_arg2713z00_685 =
																		CNST_TABLE_REF(((long) 5));
																	{
																		BgL_slotz00_bglt BgL_auxz00_2185;

																		BgL_auxz00_2185 =
																			(BgL_slotz00_bglt) (BgL_slotz00_17);
																		BgL_arg2714z00_686 =
																			(((BgL_slotz00_bglt)
																				CREF(BgL_auxz00_2185))->BgL_idz00);
																	}
																	{	/* Object/getter.scm 185 */
																		obj_t BgL_list2715z00_687;

																		{	/* Object/getter.scm 185 */
																			obj_t BgL_arg2716z00_688;

																			{	/* Object/getter.scm 185 */
																				obj_t BgL_arg2717z00_689;

																				BgL_arg2717z00_689 =
																					MAKE_PAIR(BgL_arg2714z00_686, BNIL);
																				BgL_arg2716z00_688 =
																					MAKE_PAIR(BgL_arg2713z00_685,
																					BgL_arg2717z00_689);
																			}
																			BgL_list2715z00_687 =
																				MAKE_PAIR(BgL_arg2712z00_684,
																				BgL_arg2716z00_688);
																		}
																		BgL_slotzd2refzd2oidz00_681 =
																			BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																			(BgL_list2715z00_687);
																}}
																BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00
																	(BgL_slotzd2refzd2idz00_602,
																	BgL_slotzd2refzd2oidz00_681);
																{	/* Object/getter.scm 188 */
																	int BgL_auxz00_2193;

																	BgL_auxz00_2193 = (int) (((long) 2));
																	BGL_MVALUES_NUMBER_SET(BgL_auxz00_2193);
																}
																{	/* Object/getter.scm 188 */
																	int BgL_auxz00_2196;

																	BgL_auxz00_2196 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_auxz00_2196, BFALSE);
																}
																return BNIL;
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



/* slot-direct-ref */
	obj_t BGl_slotzd2directzd2refz00zzobject_getterz00(obj_t BgL_classzd2idzd2_20,
		obj_t BgL_classz00_21, obj_t BgL_slotz00_22, obj_t BgL_wideningz00_23,
		obj_t BgL_srczd2defzd2_24)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 193 */
			{	/* Object/getter.scm 195 */
				obj_t BgL_slotzd2refzd2idz00_743;

				{	/* Object/getter.scm 195 */
					obj_t BgL_arg2843z00_818;

					obj_t BgL_arg2844z00_819;

					BgL_arg2843z00_818 = CNST_TABLE_REF(((long) 5));
					{
						BgL_slotz00_bglt BgL_auxz00_2200;

						BgL_auxz00_2200 = (BgL_slotz00_bglt) (BgL_slotz00_22);
						BgL_arg2844z00_819 =
							(((BgL_slotz00_bglt) CREF(BgL_auxz00_2200))->BgL_idz00);
					}
					{	/* Object/getter.scm 195 */
						obj_t BgL_list2845z00_820;

						{	/* Object/getter.scm 195 */
							obj_t BgL_arg2846z00_821;

							{	/* Object/getter.scm 195 */
								obj_t BgL_arg2847z00_822;

								BgL_arg2847z00_822 = MAKE_PAIR(BgL_arg2844z00_819, BNIL);
								BgL_arg2846z00_821 =
									MAKE_PAIR(BgL_arg2843z00_818, BgL_arg2847z00_822);
							}
							BgL_list2845z00_820 =
								MAKE_PAIR(BgL_classzd2idzd2_20, BgL_arg2846z00_821);
						}
						BgL_slotzd2refzd2idz00_743 =
							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list2845z00_820);
				}}
				{	/* Object/getter.scm 195 */
					obj_t BgL_slotzd2refzd2tidz00_744;

					{	/* Object/getter.scm 196 */
						obj_t BgL_arg2841z00_816;

						{	/* Object/getter.scm 196 */
							BgL_typez00_bglt BgL_obj1508z00_1692;

							{	/* Object/getter.scm 196 */
								BgL_slotz00_bglt BgL_obj2355z00_1691;

								BgL_obj2355z00_1691 = (BgL_slotz00_bglt) (BgL_slotz00_22);
								BgL_obj1508z00_1692 =
									(BgL_typez00_bglt) (
									(((BgL_slotz00_bglt) CREF(BgL_obj2355z00_1691))->
										BgL_typez00));
							}
							BgL_arg2841z00_816 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1692))->BgL_idz00);
						}
						BgL_slotzd2refzd2tidz00_744 =
							BGl_makezd2typedzd2identz00zzast_identz00
							(BgL_slotzd2refzd2idz00_743, BgL_arg2841z00_816);
					}
					{	/* Object/getter.scm 196 */
						obj_t BgL_objz00_745;

						BgL_objz00_745 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0))));
						{	/* Object/getter.scm 197 */
							obj_t BgL_tidz00_746;

							{	/* Object/getter.scm 198 */
								obj_t BgL_arg2838z00_814;

								{
									BgL_typez00_bglt BgL_auxz00_2215;

									BgL_auxz00_2215 = (BgL_typez00_bglt) (BgL_classz00_21);
									BgL_arg2838z00_814 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2215))->BgL_idz00);
								}
								BgL_tidz00_746 =
									BGl_makezd2typedzd2formalz00zzast_identz00
									(BgL_arg2838z00_814);
							}
							{	/* Object/getter.scm 198 */

								{	/* Object/getter.scm 199 */
									bool_t BgL_testz00_2219;

									{	/* Object/getter.scm 199 */
										obj_t BgL_auxz00_2220;

										{	/* Object/getter.scm 199 */
											BgL_typez00_bglt BgL_obj1508z00_1695;

											{	/* Object/getter.scm 199 */
												BgL_slotz00_bglt BgL_obj2354z00_1694;

												BgL_obj2354z00_1694 =
													(BgL_slotz00_bglt) (BgL_slotz00_22);
												BgL_obj1508z00_1695 =
													(BgL_typez00_bglt) (
													(((BgL_slotz00_bglt) CREF(BgL_obj2354z00_1694))->
														BgL_classzd2ownerzd2));
											}
											BgL_auxz00_2220 =
												(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1695))->
												BgL_idz00);
										}
										BgL_testz00_2219 =
											(BgL_classzd2idzd2_20 == BgL_auxz00_2220);
									}
									if (BgL_testz00_2219)
										{	/* Object/getter.scm 199 */
											{	/* Object/getter.scm 205 */
												obj_t BgL_arg2768z00_748;

												{	/* Object/getter.scm 205 */
													obj_t BgL_arg2769z00_749;

													obj_t BgL_arg2770z00_750;

													BgL_arg2769z00_749 = CNST_TABLE_REF(((long) 6));
													{	/* Object/getter.scm 205 */
														obj_t BgL_arg2771z00_751;

														{	/* Object/getter.scm 205 */
															obj_t BgL_arg2775z00_754;

															obj_t BgL_arg2776z00_755;

															BgL_arg2775z00_754 = CNST_TABLE_REF(((long) 7));
															{	/* Object/getter.scm 205 */
																obj_t BgL_list2777z00_756;

																{	/* Object/getter.scm 205 */
																	obj_t BgL_arg2778z00_757;

																	BgL_arg2778z00_757 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2777z00_756 =
																		MAKE_PAIR(BgL_tidz00_746,
																		BgL_arg2778z00_757);
																}
																BgL_arg2776z00_755 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_slotzd2refzd2tidz00_744,
																	BgL_list2777z00_756);
															}
															BgL_arg2771z00_751 =
																MAKE_PAIR(BgL_arg2775z00_754,
																BgL_arg2776z00_755);
														}
														{	/* Object/getter.scm 205 */
															obj_t BgL_list2774z00_753;

															BgL_list2774z00_753 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2770z00_750 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2771z00_751, BgL_list2774z00_753);
													}}
													BgL_arg2768z00_748 =
														MAKE_PAIR(BgL_arg2769z00_749, BgL_arg2770z00_750);
												}
												BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
													(BgL_arg2768z00_748);
											}
											{	/* Object/getter.scm 207 */
												obj_t BgL_arg2779z00_758;

												{	/* Object/getter.scm 207 */
													obj_t BgL_arg2780z00_759;

													obj_t BgL_arg2782z00_760;

													BgL_arg2780z00_759 = CNST_TABLE_REF(((long) 8));
													{	/* Object/getter.scm 207 */
														obj_t BgL_arg2783z00_761;

														{	/* Object/getter.scm 207 */
															obj_t BgL_arg2786z00_764;

															{	/* Object/getter.scm 207 */
																obj_t BgL_arg2787z00_765;

																obj_t BgL_arg2789z00_766;

																obj_t BgL_arg2790z00_767;

																BgL_arg2787z00_765 = CNST_TABLE_REF(((long) 9));
																BgL_arg2789z00_766 =
																	CNST_TABLE_REF(((long) 10));
																{	/* Object/getter.scm 208 */
																	obj_t BgL_arg2795z00_772;

																	obj_t BgL_arg2796z00_773;

																	BgL_arg2795z00_772 =
																		CNST_TABLE_REF(((long) 11));
																	{	/* Object/getter.scm 208 */
																		obj_t BgL_arg2797z00_774;

																		{	/* Object/getter.scm 208 */
																			obj_t BgL_arg2800z00_777;

																			obj_t BgL_arg2801z00_778;

																			BgL_arg2800z00_777 =
																				CNST_TABLE_REF(((long) 12));
																			{	/* Object/getter.scm 208 */
																				obj_t BgL_arg2802z00_779;

																				BgL_arg2802z00_779 =
																					MAKE_PAIR(BgL_slotzd2refzd2idz00_743,
																					BNIL);
																				{	/* Object/getter.scm 208 */
																					obj_t BgL_list2804z00_781;

																					BgL_list2804z00_781 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2801z00_778 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2802z00_779,
																						BgL_list2804z00_781);
																			}}
																			BgL_arg2797z00_774 =
																				MAKE_PAIR(BgL_arg2800z00_777,
																				BgL_arg2801z00_778);
																		}
																		{	/* Object/getter.scm 208 */
																			obj_t BgL_list2799z00_776;

																			BgL_list2799z00_776 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2796z00_773 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2797z00_774,
																				BgL_list2799z00_776);
																	}}
																	BgL_arg2790z00_767 =
																		MAKE_PAIR(BgL_arg2795z00_772,
																		BgL_arg2796z00_773);
																}
																{	/* Object/getter.scm 207 */
																	obj_t BgL_list2792z00_769;

																	{	/* Object/getter.scm 207 */
																		obj_t BgL_arg2793z00_770;

																		{	/* Object/getter.scm 207 */
																			obj_t BgL_arg2794z00_771;

																			BgL_arg2794z00_771 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2793z00_770 =
																				MAKE_PAIR(BgL_arg2790z00_767,
																				BgL_arg2794z00_771);
																		}
																		BgL_list2792z00_769 =
																			MAKE_PAIR(BgL_arg2789z00_766,
																			BgL_arg2793z00_770);
																	}
																	BgL_arg2786z00_764 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2787z00_765, BgL_list2792z00_769);
															}}
															BgL_arg2783z00_761 =
																MAKE_PAIR(BgL_slotzd2refzd2idz00_743,
																BgL_arg2786z00_764);
														}
														{	/* Object/getter.scm 207 */
															obj_t BgL_list2785z00_763;

															BgL_list2785z00_763 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2782z00_760 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2783z00_761, BgL_list2785z00_763);
													}}
													BgL_arg2779z00_758 =
														MAKE_PAIR(BgL_arg2780z00_759, BgL_arg2782z00_760);
												}
												BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
													(BgL_arg2779z00_758);
											}
											{	/* Object/getter.scm 211 */
												obj_t BgL_arg2805z00_782;

												{	/* Object/getter.scm 211 */
													obj_t BgL_arg2807z00_784;

													obj_t BgL_arg2808z00_785;

													{	/* Object/getter.scm 211 */
														obj_t BgL_arg2811z00_788;

														obj_t BgL_arg2812z00_789;

														BgL_arg2811z00_788 = CNST_TABLE_REF(((long) 13));
														{	/* Object/getter.scm 211 */
															obj_t BgL_arg2813z00_790;

															obj_t BgL_arg2814z00_791;

															{	/* Object/getter.scm 211 */
																obj_t BgL_arg2819z00_795;

																{	/* Object/getter.scm 211 */
																	obj_t BgL_arg2820z00_796;

																	{	/* Object/getter.scm 211 */
																		obj_t BgL_arg2823z00_799;

																		{	/* Object/getter.scm 211 */
																			obj_t BgL_arg2825z00_800;

																			obj_t BgL_arg2826z00_801;

																			{	/* Object/getter.scm 211 */
																				obj_t BgL_res3436z00_1698;

																				{	/* Object/getter.scm 211 */
																					obj_t BgL_arg2063z00_1697;

																					BgL_arg2063z00_1697 =
																						SYMBOL_TO_STRING(BgL_objz00_745);
																					BgL_res3436z00_1698 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_1697);
																				}
																				BgL_arg2825z00_800 =
																					BgL_res3436z00_1698;
																			}
																			{	/* Object/getter.scm 211 */
																				obj_t BgL_res3437z00_1701;

																				{	/* Object/getter.scm 211 */
																					obj_t BgL_arg2063z00_1700;

																					BgL_arg2063z00_1700 =
																						SYMBOL_TO_STRING(BgL_tidz00_746);
																					BgL_res3437z00_1701 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_1700);
																				}
																				BgL_arg2826z00_801 =
																					BgL_res3437z00_1701;
																			}
																			{	/* Object/getter.scm 211 */
																				obj_t BgL_list2827z00_802;

																				{	/* Object/getter.scm 211 */
																					obj_t BgL_arg2828z00_803;

																					BgL_arg2828z00_803 =
																						MAKE_PAIR(BgL_arg2826z00_801, BNIL);
																					BgL_list2827z00_802 =
																						MAKE_PAIR(BgL_arg2825z00_800,
																						BgL_arg2828z00_803);
																				}
																				BgL_arg2823z00_799 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2827z00_802);
																		}}
																		BgL_arg2820z00_796 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg2823z00_799));
																	}
																	{	/* Object/getter.scm 211 */
																		obj_t BgL_list2822z00_798;

																		BgL_list2822z00_798 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2819z00_795 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2820z00_796, BgL_list2822z00_798);
																}}
																BgL_arg2813z00_790 =
																	MAKE_PAIR(BgL_slotzd2refzd2tidz00_744,
																	BgL_arg2819z00_795);
															}
															BgL_arg2814z00_791 =
																BGl_makezd2pragmazd2directzd2refzf2wideningz20zzobject_toolsz00
																((BgL_typez00_bglt) (BgL_classz00_21),
																(BgL_slotz00_bglt) (BgL_slotz00_22),
																BgL_objz00_745, BgL_wideningz00_23);
															{	/* Object/getter.scm 211 */
																obj_t BgL_list2816z00_793;

																{	/* Object/getter.scm 211 */
																	obj_t BgL_arg2818z00_794;

																	BgL_arg2818z00_794 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2816z00_793 =
																		MAKE_PAIR(BgL_arg2814z00_791,
																		BgL_arg2818z00_794);
																}
																BgL_arg2812z00_789 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2813z00_790, BgL_list2816z00_793);
														}}
														BgL_arg2807z00_784 =
															MAKE_PAIR(BgL_arg2811z00_788, BgL_arg2812z00_789);
													}
													{
														BgL_slotz00_bglt BgL_auxz00_2277;

														BgL_auxz00_2277 =
															(BgL_slotz00_bglt) (BgL_slotz00_22);
														BgL_arg2808z00_785 =
															(((BgL_slotz00_bglt) CREF(BgL_auxz00_2277))->
															BgL_srcz00);
													}
													{	/* Object/getter.scm 210 */
														obj_t BgL_list2809z00_786;

														{	/* Object/getter.scm 210 */
															obj_t BgL_arg2810z00_787;

															BgL_arg2810z00_787 =
																MAKE_PAIR(BgL_srczd2defzd2_24, BNIL);
															BgL_list2809z00_786 =
																MAKE_PAIR(BgL_arg2808z00_785,
																BgL_arg2810z00_787);
														}
														BgL_arg2805z00_782 =
															BGl_epairifyza2za2zztools_miscz00
															(BgL_arg2807z00_784, BgL_list2809z00_786);
												}}
												{	/* Object/getter.scm 209 */
													obj_t BgL_list2806z00_783;

													BgL_list2806z00_783 =
														MAKE_PAIR(BgL_arg2805z00_782, BNIL);
													return BgL_list2806z00_783;
												}
											}
										}
									else
										{	/* Object/getter.scm 217 */
											obj_t BgL_slotzd2refzd2oidz00_804;

											{	/* Object/getter.scm 217 */
												obj_t BgL_arg2829z00_805;

												obj_t BgL_arg2830z00_806;

												obj_t BgL_arg2831z00_807;

												{	/* Object/getter.scm 217 */
													BgL_typez00_bglt BgL_obj1508z00_1707;

													{	/* Object/getter.scm 217 */
														BgL_slotz00_bglt BgL_obj2354z00_1706;

														BgL_obj2354z00_1706 =
															(BgL_slotz00_bglt) (BgL_slotz00_22);
														BgL_obj1508z00_1707 =
															(BgL_typez00_bglt) (
															(((BgL_slotz00_bglt) CREF(BgL_obj2354z00_1706))->
																BgL_classzd2ownerzd2));
													}
													BgL_arg2829z00_805 =
														(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1707))->
														BgL_idz00);
												}
												BgL_arg2830z00_806 = CNST_TABLE_REF(((long) 5));
												{
													BgL_slotz00_bglt BgL_auxz00_2289;

													BgL_auxz00_2289 = (BgL_slotz00_bglt) (BgL_slotz00_22);
													BgL_arg2831z00_807 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_2289))->
														BgL_idz00);
												}
												{	/* Object/getter.scm 217 */
													obj_t BgL_list2832z00_808;

													{	/* Object/getter.scm 217 */
														obj_t BgL_arg2833z00_809;

														{	/* Object/getter.scm 217 */
															obj_t BgL_arg2834z00_810;

															BgL_arg2834z00_810 =
																MAKE_PAIR(BgL_arg2831z00_807, BNIL);
															BgL_arg2833z00_809 =
																MAKE_PAIR(BgL_arg2830z00_806,
																BgL_arg2834z00_810);
														}
														BgL_list2832z00_808 =
															MAKE_PAIR(BgL_arg2829z00_805, BgL_arg2833z00_809);
													}
													BgL_slotzd2refzd2oidz00_804 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2832z00_808);
											}}
											BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00
												(BgL_slotzd2refzd2idz00_743,
												BgL_slotzd2refzd2oidz00_804);
											return BNIL;
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* slot-indexed-ref */
	obj_t BGl_slotzd2indexedzd2refz00zzobject_getterz00(obj_t
		BgL_classzd2idzd2_25, obj_t BgL_typez00_26, obj_t BgL_slotz00_27,
		obj_t BgL_wideningz00_28, obj_t BgL_srczd2defzd2_29)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 225 */
			{
				obj_t BgL_sidz00_915;

				obj_t BgL_idz00_916;

				obj_t BgL_tidz00_917;

				obj_t BgL_sidz00_898;

				obj_t BgL_idz00_899;

				obj_t BgL_tidz00_900;

				{	/* Object/getter.scm 237 */
					obj_t BgL_slotzd2refzd2idz00_826;

					{	/* Object/getter.scm 237 */
						obj_t BgL_arg2912z00_891;

						obj_t BgL_arg2913z00_892;

						obj_t BgL_arg2914z00_893;

						BgL_arg2912z00_891 = CNST_TABLE_REF(((long) 5));
						{
							BgL_slotz00_bglt BgL_auxz00_2298;

							BgL_auxz00_2298 = (BgL_slotz00_bglt) (BgL_slotz00_27);
							BgL_arg2913z00_892 =
								(((BgL_slotz00_bglt) CREF(BgL_auxz00_2298))->BgL_idz00);
						}
						BgL_arg2914z00_893 = CNST_TABLE_REF(((long) 27));
						{	/* Object/getter.scm 237 */
							obj_t BgL_list2915z00_894;

							{	/* Object/getter.scm 237 */
								obj_t BgL_arg2916z00_895;

								{	/* Object/getter.scm 237 */
									obj_t BgL_arg2917z00_896;

									{	/* Object/getter.scm 237 */
										obj_t BgL_arg2918z00_897;

										BgL_arg2918z00_897 = MAKE_PAIR(BgL_arg2914z00_893, BNIL);
										BgL_arg2917z00_896 =
											MAKE_PAIR(BgL_arg2913z00_892, BgL_arg2918z00_897);
									}
									BgL_arg2916z00_895 =
										MAKE_PAIR(BgL_arg2912z00_891, BgL_arg2917z00_896);
								}
								BgL_list2915z00_894 =
									MAKE_PAIR(BgL_classzd2idzd2_25, BgL_arg2916z00_895);
							}
							BgL_slotzd2refzd2idz00_826 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list2915z00_894);
					}}
					{	/* Object/getter.scm 237 */
						obj_t BgL_slotzd2refzd2tidz00_827;

						{	/* Object/getter.scm 238 */
							obj_t BgL_arg2910z00_889;

							{	/* Object/getter.scm 238 */
								BgL_typez00_bglt BgL_obj1508z00_1711;

								{	/* Object/getter.scm 238 */
									BgL_slotz00_bglt BgL_obj2355z00_1710;

									BgL_obj2355z00_1710 = (BgL_slotz00_bglt) (BgL_slotz00_27);
									BgL_obj1508z00_1711 =
										(BgL_typez00_bglt) (
										(((BgL_slotz00_bglt) CREF(BgL_obj2355z00_1710))->
											BgL_typez00));
								}
								BgL_arg2910z00_889 =
									(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1711))->BgL_idz00);
							}
							BgL_slotzd2refzd2tidz00_827 =
								BGl_makezd2typedzd2identz00zzast_identz00
								(BgL_slotzd2refzd2idz00_826, BgL_arg2910z00_889);
						}
						{	/* Object/getter.scm 238 */
							obj_t BgL_tidz00_828;

							BgL_tidz00_828 =
								BGl_makezd2typedzd2formalz00zzast_identz00
								(BgL_classzd2idzd2_25);
							{	/* Object/getter.scm 239 */

								{	/* Object/getter.scm 241 */
									obj_t BgL_arg2848z00_829;

									{	/* Object/getter.scm 241 */
										obj_t BgL_arg2849z00_830;

										obj_t BgL_arg2850z00_831;

										BgL_arg2849z00_830 = CNST_TABLE_REF(((long) 8));
										{	/* Object/getter.scm 241 */
											obj_t BgL_arg2851z00_832;

											{	/* Object/getter.scm 241 */
												obj_t BgL_arg2854z00_835;

												{	/* Object/getter.scm 241 */
													obj_t BgL_arg2856z00_836;

													obj_t BgL_arg2857z00_837;

													obj_t BgL_arg2858z00_838;

													BgL_arg2856z00_836 = CNST_TABLE_REF(((long) 9));
													BgL_arg2857z00_837 = CNST_TABLE_REF(((long) 10));
													{	/* Object/getter.scm 242 */
														obj_t BgL_arg2863z00_843;

														obj_t BgL_arg2864z00_844;

														BgL_arg2863z00_843 = CNST_TABLE_REF(((long) 11));
														{	/* Object/getter.scm 242 */
															obj_t BgL_arg2865z00_845;

															{	/* Object/getter.scm 242 */
																obj_t BgL_arg2868z00_848;

																obj_t BgL_arg2869z00_849;

																BgL_arg2868z00_848 =
																	CNST_TABLE_REF(((long) 28));
																{	/* Object/getter.scm 242 */
																	obj_t BgL_arg2870z00_850;

																	BgL_arg2870z00_850 =
																		MAKE_PAIR(BgL_slotzd2refzd2idz00_826, BNIL);
																	{	/* Object/getter.scm 242 */
																		obj_t BgL_list2872z00_852;

																		BgL_list2872z00_852 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2869z00_849 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2870z00_850, BgL_list2872z00_852);
																}}
																BgL_arg2865z00_845 =
																	MAKE_PAIR(BgL_arg2868z00_848,
																	BgL_arg2869z00_849);
															}
															{	/* Object/getter.scm 242 */
																obj_t BgL_list2867z00_847;

																BgL_list2867z00_847 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2864z00_844 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2865z00_845, BgL_list2867z00_847);
														}}
														BgL_arg2858z00_838 =
															MAKE_PAIR(BgL_arg2863z00_843, BgL_arg2864z00_844);
													}
													{	/* Object/getter.scm 241 */
														obj_t BgL_list2860z00_840;

														{	/* Object/getter.scm 241 */
															obj_t BgL_arg2861z00_841;

															{	/* Object/getter.scm 241 */
																obj_t BgL_arg2862z00_842;

																BgL_arg2862z00_842 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2861z00_841 =
																	MAKE_PAIR(BgL_arg2858z00_838,
																	BgL_arg2862z00_842);
															}
															BgL_list2860z00_840 =
																MAKE_PAIR(BgL_arg2857z00_837,
																BgL_arg2861z00_841);
														}
														BgL_arg2854z00_835 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2856z00_836, BgL_list2860z00_840);
												}}
												BgL_arg2851z00_832 =
													MAKE_PAIR(BgL_slotzd2refzd2idz00_826,
													BgL_arg2854z00_835);
											}
											{	/* Object/getter.scm 241 */
												obj_t BgL_list2853z00_834;

												BgL_list2853z00_834 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2850z00_831 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2851z00_832, BgL_list2853z00_834);
										}}
										BgL_arg2848z00_829 =
											MAKE_PAIR(BgL_arg2849z00_830, BgL_arg2850z00_831);
									}
									BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
										(BgL_arg2848z00_829);
								}
								if (CBOOL(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
									{	/* Object/getter.scm 244 */
										{	/* Object/getter.scm 253 */
											obj_t BgL_arg2873z00_853;

											{	/* Object/getter.scm 253 */
												obj_t BgL_arg2874z00_854;

												obj_t BgL_arg2875z00_855;

												BgL_arg2874z00_854 = CNST_TABLE_REF(((long) 6));
												{	/* Object/getter.scm 253 */
													obj_t BgL_arg2876z00_856;

													{	/* Object/getter.scm 253 */
														obj_t BgL_arg2879z00_859;

														obj_t BgL_arg2880z00_860;

														BgL_arg2879z00_859 = CNST_TABLE_REF(((long) 7));
														{	/* Object/getter.scm 253 */
															obj_t BgL_list2881z00_861;

															{	/* Object/getter.scm 253 */
																obj_t BgL_arg2882z00_862;

																{	/* Object/getter.scm 253 */
																	obj_t BgL_arg2883z00_863;

																	obj_t BgL_arg2884z00_864;

																	BgL_arg2883z00_863 =
																		CNST_TABLE_REF(((long) 29));
																	BgL_arg2884z00_864 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2882z00_862 =
																		MAKE_PAIR(BgL_arg2883z00_863,
																		BgL_arg2884z00_864);
																}
																BgL_list2881z00_861 =
																	MAKE_PAIR(BgL_tidz00_828, BgL_arg2882z00_862);
															}
															BgL_arg2880z00_860 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_slotzd2refzd2tidz00_827,
																BgL_list2881z00_861);
														}
														BgL_arg2876z00_856 =
															MAKE_PAIR(BgL_arg2879z00_859, BgL_arg2880z00_860);
													}
													{	/* Object/getter.scm 253 */
														obj_t BgL_list2878z00_858;

														BgL_list2878z00_858 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2875z00_855 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2876z00_856, BgL_list2878z00_858);
												}}
												BgL_arg2873z00_853 =
													MAKE_PAIR(BgL_arg2874z00_854, BgL_arg2875z00_855);
											}
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
												(BgL_arg2873z00_853);
										}
										{	/* Object/getter.scm 255 */
											obj_t BgL_arg2885z00_865;

											{	/* Object/getter.scm 255 */
												obj_t BgL_arg2887z00_867;

												obj_t BgL_arg2888z00_868;

												{	/* Object/getter.scm 255 */
													obj_t BgL_arg2891z00_871;

													{
														BgL_slotz00_bglt BgL_auxz00_2348;

														BgL_auxz00_2348 =
															(BgL_slotz00_bglt) (BgL_slotz00_27);
														BgL_arg2891z00_871 =
															(((BgL_slotz00_bglt) CREF(BgL_auxz00_2348))->
															BgL_idz00);
													}
													BgL_sidz00_898 = BgL_arg2891z00_871;
													BgL_idz00_899 = BgL_slotzd2refzd2idz00_826;
													BgL_tidz00_900 = BgL_slotzd2refzd2tidz00_827;
													{	/* Object/getter.scm 227 */
														obj_t BgL_arg2920z00_902;

														obj_t BgL_arg2921z00_903;

														BgL_arg2920z00_902 = CNST_TABLE_REF(((long) 13));
														{	/* Object/getter.scm 227 */
															obj_t BgL_arg2922z00_904;

															obj_t BgL_arg2923z00_905;

															{	/* Object/getter.scm 227 */
																obj_t BgL_arg2927z00_909;

																{	/* Object/getter.scm 227 */
																	obj_t BgL_arg2928z00_910;

																	obj_t BgL_arg2929z00_911;

																	BgL_arg2928z00_910 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(CNST_TABLE_REF(((long) 17)),
																		BgL_classzd2idzd2_25);
																	BgL_arg2929z00_911 =
																		CNST_TABLE_REF(((long) 18));
																	{	/* Object/getter.scm 227 */
																		obj_t BgL_list2931z00_913;

																		{	/* Object/getter.scm 227 */
																			obj_t BgL_arg2932z00_914;

																			BgL_arg2932z00_914 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2931z00_913 =
																				MAKE_PAIR(BgL_arg2929z00_911,
																				BgL_arg2932z00_914);
																		}
																		BgL_arg2927z00_909 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2928z00_910, BgL_list2931z00_913);
																}}
																BgL_arg2922z00_904 =
																	MAKE_PAIR(BgL_tidz00_900, BgL_arg2927z00_909);
															}
															BgL_arg2923z00_905 =
																BGl_makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00
																((BgL_typez00_bglt) (BgL_typez00_26),
																(BgL_slotz00_bglt) (BgL_slotz00_27),
																CNST_TABLE_REF(((long) 17)),
																CNST_TABLE_REF(((long) 19)),
																BgL_wideningz00_28);
															{	/* Object/getter.scm 227 */
																obj_t BgL_list2925z00_907;

																{	/* Object/getter.scm 227 */
																	obj_t BgL_arg2926z00_908;

																	BgL_arg2926z00_908 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2925z00_907 =
																		MAKE_PAIR(BgL_arg2923z00_905,
																		BgL_arg2926z00_908);
																}
																BgL_arg2921z00_903 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2922z00_904, BgL_list2925z00_907);
														}}
														BgL_arg2887z00_867 =
															MAKE_PAIR(BgL_arg2920z00_902, BgL_arg2921z00_903);
												}}
												{
													BgL_slotz00_bglt BgL_auxz00_2368;

													BgL_auxz00_2368 = (BgL_slotz00_bglt) (BgL_slotz00_27);
													BgL_arg2888z00_868 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_2368))->
														BgL_srcz00);
												}
												{	/* Object/getter.scm 255 */
													obj_t BgL_list2889z00_869;

													{	/* Object/getter.scm 255 */
														obj_t BgL_arg2890z00_870;

														BgL_arg2890z00_870 =
															MAKE_PAIR(BgL_srczd2defzd2_29, BNIL);
														BgL_list2889z00_869 =
															MAKE_PAIR(BgL_arg2888z00_868, BgL_arg2890z00_870);
													}
													BgL_arg2885z00_865 =
														BGl_epairifyza2za2zztools_miscz00
														(BgL_arg2887z00_867, BgL_list2889z00_869);
											}}
											{	/* Object/getter.scm 254 */
												obj_t BgL_list2886z00_866;

												BgL_list2886z00_866 =
													MAKE_PAIR(BgL_arg2885z00_865, BNIL);
												return BgL_list2886z00_866;
											}
										}
									}
								else
									{	/* Object/getter.scm 244 */
										{	/* Object/getter.scm 246 */
											obj_t BgL_arg2892z00_872;

											{	/* Object/getter.scm 246 */
												obj_t BgL_arg2893z00_873;

												obj_t BgL_arg2894z00_874;

												BgL_arg2893z00_873 = CNST_TABLE_REF(((long) 6));
												{	/* Object/getter.scm 246 */
													obj_t BgL_arg2896z00_875;

													{	/* Object/getter.scm 246 */
														obj_t BgL_arg2899z00_878;

														{	/* Object/getter.scm 246 */
															obj_t BgL_list2900z00_879;

															{	/* Object/getter.scm 246 */
																obj_t BgL_arg2901z00_880;

																obj_t BgL_arg2902z00_881;

																BgL_arg2901z00_880 =
																	CNST_TABLE_REF(((long) 29));
																BgL_arg2902z00_881 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2900z00_879 =
																	MAKE_PAIR(BgL_arg2901z00_880,
																	BgL_arg2902z00_881);
															}
															BgL_arg2899z00_878 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_tidz00_828, BgL_list2900z00_879);
														}
														BgL_arg2896z00_875 =
															MAKE_PAIR(BgL_slotzd2refzd2tidz00_827,
															BgL_arg2899z00_878);
													}
													{	/* Object/getter.scm 246 */
														obj_t BgL_list2898z00_877;

														BgL_list2898z00_877 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg2894z00_874 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2896z00_875, BgL_list2898z00_877);
												}}
												BgL_arg2892z00_872 =
													MAKE_PAIR(BgL_arg2893z00_873, BgL_arg2894z00_874);
											}
											BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
												(BgL_arg2892z00_872);
										}
										{	/* Object/getter.scm 248 */
											obj_t BgL_arg2903z00_882;

											{	/* Object/getter.scm 248 */
												obj_t BgL_arg2905z00_884;

												obj_t BgL_arg2906z00_885;

												{	/* Object/getter.scm 248 */
													obj_t BgL_arg2909z00_888;

													{
														BgL_slotz00_bglt BgL_auxz00_2385;

														BgL_auxz00_2385 =
															(BgL_slotz00_bglt) (BgL_slotz00_27);
														BgL_arg2909z00_888 =
															(((BgL_slotz00_bglt) CREF(BgL_auxz00_2385))->
															BgL_idz00);
													}
													BgL_sidz00_915 = BgL_arg2909z00_888;
													BgL_idz00_916 = BgL_slotzd2refzd2idz00_826;
													BgL_tidz00_917 = BgL_slotzd2refzd2tidz00_827;
													{	/* Object/getter.scm 230 */
														obj_t BgL_arg2934z00_919;

														obj_t BgL_arg2935z00_920;

														BgL_arg2934z00_919 = CNST_TABLE_REF(((long) 20));
														{	/* Object/getter.scm 230 */
															obj_t BgL_arg2936z00_921;

															obj_t BgL_arg2937z00_922;

															{	/* Object/getter.scm 230 */
																obj_t BgL_arg2942z00_926;

																{	/* Object/getter.scm 230 */
																	obj_t BgL_arg2943z00_927;

																	obj_t BgL_arg2944z00_928;

																	BgL_arg2943z00_927 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(CNST_TABLE_REF(((long) 17)),
																		BgL_classzd2idzd2_25);
																	BgL_arg2944z00_928 =
																		CNST_TABLE_REF(((long) 18));
																	{	/* Object/getter.scm 230 */
																		obj_t BgL_list2946z00_930;

																		{	/* Object/getter.scm 230 */
																			obj_t BgL_arg2947z00_931;

																			BgL_arg2947z00_931 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2946z00_930 =
																				MAKE_PAIR(BgL_arg2944z00_928,
																				BgL_arg2947z00_931);
																		}
																		BgL_arg2942z00_926 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2943z00_927, BgL_list2946z00_930);
																}}
																BgL_arg2936z00_921 =
																	MAKE_PAIR(BgL_tidz00_917, BgL_arg2942z00_926);
															}
															{	/* Object/getter.scm 231 */
																obj_t BgL_arg2948z00_932;

																obj_t BgL_arg2949z00_933;

																BgL_arg2948z00_932 =
																	CNST_TABLE_REF(((long) 21));
																{	/* Object/getter.scm 231 */
																	obj_t BgL_arg2950z00_934;

																	obj_t BgL_arg2951z00_935;

																	obj_t BgL_arg2952z00_936;

																	{	/* Object/getter.scm 231 */
																		obj_t BgL_arg2958z00_941;

																		obj_t BgL_arg2959z00_942;

																		BgL_arg2958z00_941 =
																			CNST_TABLE_REF(((long) 22));
																		{	/* Object/getter.scm 231 */
																			obj_t BgL_list2960z00_943;

																			{	/* Object/getter.scm 231 */
																				obj_t BgL_arg2962z00_945;

																				BgL_arg2962z00_945 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2960z00_943 =
																					MAKE_PAIR(BINT(((long) 0)),
																					BgL_arg2962z00_945);
																			}
																			BgL_arg2959z00_942 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 19)),
																				BgL_list2960z00_943);
																		}
																		BgL_arg2950z00_934 =
																			MAKE_PAIR(BgL_arg2958z00_941,
																			BgL_arg2959z00_942);
																	}
																	{	/* Object/getter.scm 232 */
																		obj_t BgL_arg2963z00_946;

																		obj_t BgL_arg2964z00_947;

																		BgL_arg2963z00_946 =
																			CNST_TABLE_REF(((long) 21));
																		{	/* Object/getter.scm 232 */
																			obj_t BgL_arg2965z00_948;

																			obj_t BgL_arg2966z00_949;

																			obj_t BgL_arg2967z00_950;

																			{	/* Object/getter.scm 232 */
																				obj_t BgL_arg2972z00_955;

																				obj_t BgL_arg2973z00_956;

																				BgL_arg2972z00_955 =
																					CNST_TABLE_REF(((long) 23));
																				{	/* Object/getter.scm 232 */
																					obj_t BgL_arg2974z00_957;

																					obj_t BgL_arg2975z00_958;

																					BgL_arg2974z00_957 =
																						CNST_TABLE_REF(((long) 19));
																					{	/* Object/getter.scm 232 */
																						obj_t BgL_arg2979z00_962;

																						obj_t BgL_arg2980z00_963;

																						{	/* Object/getter.scm 232 */
																							obj_t BgL_list2981z00_964;

																							{	/* Object/getter.scm 232 */
																								obj_t BgL_arg2982z00_965;

																								{	/* Object/getter.scm 232 */
																									obj_t BgL_arg2983z00_966;

																									obj_t BgL_arg2984z00_967;

																									BgL_arg2983z00_966 =
																										CNST_TABLE_REF(((long) 5));
																									{	/* Object/getter.scm 232 */
																										obj_t BgL_arg2985z00_968;

																										BgL_arg2985z00_968 =
																											MAKE_PAIR(CNST_TABLE_REF((
																													(long) 24)), BNIL);
																										BgL_arg2984z00_967 =
																											MAKE_PAIR(BgL_sidz00_915,
																											BgL_arg2985z00_968);
																									}
																									BgL_arg2982z00_965 =
																										MAKE_PAIR
																										(BgL_arg2983z00_966,
																										BgL_arg2984z00_967);
																								}
																								BgL_list2981z00_964 =
																									MAKE_PAIR
																									(BgL_classzd2idzd2_25,
																									BgL_arg2982z00_965);
																							}
																							BgL_arg2979z00_962 =
																								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																								(BgL_list2981z00_964);
																						}
																						{	/* Object/getter.scm 232 */
																							obj_t BgL_list2986z00_969;

																							BgL_list2986z00_969 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2980z00_963 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 17)),
																								BgL_list2986z00_969);
																						}
																						BgL_arg2975z00_958 =
																							MAKE_PAIR(BgL_arg2979z00_962,
																							BgL_arg2980z00_963);
																					}
																					{	/* Object/getter.scm 232 */
																						obj_t BgL_list2977z00_960;

																						{	/* Object/getter.scm 232 */
																							obj_t BgL_arg2978z00_961;

																							BgL_arg2978z00_961 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2977z00_960 =
																								MAKE_PAIR(BgL_arg2975z00_958,
																								BgL_arg2978z00_961);
																						}
																						BgL_arg2973z00_956 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2974z00_957,
																							BgL_list2977z00_960);
																				}}
																				BgL_arg2965z00_948 =
																					MAKE_PAIR(BgL_arg2972z00_955,
																					BgL_arg2973z00_956);
																			}
																			BgL_arg2966z00_949 =
																				BGl_makezd2pragmazd2indexedzd2refzf2wideningz20zzobject_toolsz00
																				((BgL_typez00_bglt) (BgL_typez00_26),
																				(BgL_slotz00_bglt) (BgL_slotz00_27),
																				CNST_TABLE_REF(((long) 17)),
																				CNST_TABLE_REF(((long) 19)),
																				BgL_wideningz00_28);
																			{	/* Object/getter.scm 234 */
																				obj_t BgL_arg2987z00_970;

																				obj_t BgL_arg2988z00_971;

																				BgL_arg2987z00_970 =
																					CNST_TABLE_REF(((long) 25));
																				{	/* Object/getter.scm 234 */
																					obj_t BgL_arg2989z00_972;

																					obj_t BgL_arg2991z00_974;

																					{	/* Object/getter.scm 234 */
																						obj_t BgL_arg2996z00_979;

																						obj_t BgL_arg2997z00_980;

																						BgL_arg2996z00_979 =
																							CNST_TABLE_REF(((long) 26));
																						{	/* Object/getter.scm 234 */
																							obj_t BgL_list2998z00_981;

																							BgL_list2998z00_981 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2997z00_980 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_idz00_916,
																								BgL_list2998z00_981);
																						}
																						BgL_arg2989z00_972 =
																							MAKE_PAIR(BgL_arg2996z00_979,
																							BgL_arg2997z00_980);
																					}
																					BgL_arg2991z00_974 =
																						CNST_TABLE_REF(((long) 19));
																					{	/* Object/getter.scm 234 */
																						obj_t BgL_list2993z00_976;

																						{	/* Object/getter.scm 234 */
																							obj_t BgL_arg2994z00_977;

																							{	/* Object/getter.scm 234 */
																								obj_t BgL_arg2995z00_978;

																								BgL_arg2995z00_978 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2994z00_977 =
																									MAKE_PAIR(BgL_arg2991z00_974,
																									BgL_arg2995z00_978);
																							}
																							BgL_list2993z00_976 =
																								MAKE_PAIR
																								(BGl_string3459z00zzobject_getterz00,
																								BgL_arg2994z00_977);
																						}
																						BgL_arg2988z00_971 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2989z00_972,
																							BgL_list2993z00_976);
																				}}
																				BgL_arg2967z00_950 =
																					MAKE_PAIR(BgL_arg2987z00_970,
																					BgL_arg2988z00_971);
																			}
																			{	/* Object/getter.scm 232 */
																				obj_t BgL_list2969z00_952;

																				{	/* Object/getter.scm 232 */
																					obj_t BgL_arg2970z00_953;

																					{	/* Object/getter.scm 232 */
																						obj_t BgL_arg2971z00_954;

																						BgL_arg2971z00_954 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2970z00_953 =
																							MAKE_PAIR(BgL_arg2967z00_950,
																							BgL_arg2971z00_954);
																					}
																					BgL_list2969z00_952 =
																						MAKE_PAIR(BgL_arg2966z00_949,
																						BgL_arg2970z00_953);
																				}
																				BgL_arg2964z00_947 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2965z00_948,
																					BgL_list2969z00_952);
																		}}
																		BgL_arg2951z00_935 =
																			MAKE_PAIR(BgL_arg2963z00_946,
																			BgL_arg2964z00_947);
																	}
																	{	/* Object/getter.scm 235 */
																		obj_t BgL_arg3000z00_982;

																		obj_t BgL_arg3001z00_983;

																		BgL_arg3000z00_982 =
																			CNST_TABLE_REF(((long) 25));
																		{	/* Object/getter.scm 235 */
																			obj_t BgL_arg3002z00_984;

																			obj_t BgL_arg3004z00_986;

																			{	/* Object/getter.scm 235 */
																				obj_t BgL_arg3009z00_991;

																				obj_t BgL_arg3010z00_992;

																				BgL_arg3009z00_991 =
																					CNST_TABLE_REF(((long) 26));
																				{	/* Object/getter.scm 235 */
																					obj_t BgL_list3011z00_993;

																					BgL_list3011z00_993 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3010z00_992 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_idz00_916,
																						BgL_list3011z00_993);
																				}
																				BgL_arg3002z00_984 =
																					MAKE_PAIR(BgL_arg3009z00_991,
																					BgL_arg3010z00_992);
																			}
																			BgL_arg3004z00_986 =
																				CNST_TABLE_REF(((long) 19));
																			{	/* Object/getter.scm 235 */
																				obj_t BgL_list3006z00_988;

																				{	/* Object/getter.scm 235 */
																					obj_t BgL_arg3007z00_989;

																					{	/* Object/getter.scm 235 */
																						obj_t BgL_arg3008z00_990;

																						BgL_arg3008z00_990 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3007z00_989 =
																							MAKE_PAIR(BgL_arg3004z00_986,
																							BgL_arg3008z00_990);
																					}
																					BgL_list3006z00_988 =
																						MAKE_PAIR
																						(BGl_string3459z00zzobject_getterz00,
																						BgL_arg3007z00_989);
																				}
																				BgL_arg3001z00_983 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3002z00_984,
																					BgL_list3006z00_988);
																		}}
																		BgL_arg2952z00_936 =
																			MAKE_PAIR(BgL_arg3000z00_982,
																			BgL_arg3001z00_983);
																	}
																	{	/* Object/getter.scm 231 */
																		obj_t BgL_list2954z00_938;

																		{	/* Object/getter.scm 231 */
																			obj_t BgL_arg2955z00_939;

																			{	/* Object/getter.scm 231 */
																				obj_t BgL_arg2956z00_940;

																				BgL_arg2956z00_940 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2955z00_939 =
																					MAKE_PAIR(BgL_arg2952z00_936,
																					BgL_arg2956z00_940);
																			}
																			BgL_list2954z00_938 =
																				MAKE_PAIR(BgL_arg2951z00_935,
																				BgL_arg2955z00_939);
																		}
																		BgL_arg2949z00_933 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2950z00_934, BgL_list2954z00_938);
																}}
																BgL_arg2937z00_922 =
																	MAKE_PAIR(BgL_arg2948z00_932,
																	BgL_arg2949z00_933);
															}
															{	/* Object/getter.scm 230 */
																obj_t BgL_list2939z00_924;

																{	/* Object/getter.scm 230 */
																	obj_t BgL_arg2940z00_925;

																	BgL_arg2940z00_925 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2939z00_924 =
																		MAKE_PAIR(BgL_arg2937z00_922,
																		BgL_arg2940z00_925);
																}
																BgL_arg2935z00_920 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2936z00_921, BgL_list2939z00_924);
														}}
														BgL_arg2905z00_884 =
															MAKE_PAIR(BgL_arg2934z00_919, BgL_arg2935z00_920);
												}}
												{
													BgL_slotz00_bglt BgL_auxz00_2463;

													BgL_auxz00_2463 = (BgL_slotz00_bglt) (BgL_slotz00_27);
													BgL_arg2906z00_885 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_2463))->
														BgL_srcz00);
												}
												{	/* Object/getter.scm 248 */
													obj_t BgL_list2907z00_886;

													{	/* Object/getter.scm 248 */
														obj_t BgL_arg2908z00_887;

														BgL_arg2908z00_887 =
															MAKE_PAIR(BgL_srczd2defzd2_29, BNIL);
														BgL_list2907z00_886 =
															MAKE_PAIR(BgL_arg2906z00_885, BgL_arg2908z00_887);
													}
													BgL_arg2903z00_882 =
														BGl_epairifyza2za2zztools_miscz00
														(BgL_arg2905z00_884, BgL_list2907z00_886);
											}}
											{	/* Object/getter.scm 247 */
												obj_t BgL_list2904z00_883;

												BgL_list2904z00_883 =
													MAKE_PAIR(BgL_arg2903z00_882, BNIL);
												return BgL_list2904z00_883;
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



/* slot-set! */
	obj_t BGl_slotzd2setz12zc0zzobject_getterz00(BgL_tclassz00_bglt
		BgL_classz00_30, obj_t BgL_typez00_31, obj_t BgL_slotz00_32,
		obj_t BgL_wideningz00_33, obj_t BgL_srczd2defzd2_34)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 262 */
			{	/* Object/getter.scm 263 */
				obj_t BgL_classzd2idzd2_996;

				{
					BgL_typez00_bglt BgL_auxz00_2470;

					BgL_auxz00_2470 = (BgL_typez00_bglt) (BgL_classz00_30);
					BgL_classzd2idzd2_996 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_2470))->BgL_idz00);
				}
				{	/* Object/getter.scm 265 */
					bool_t BgL_testz00_2473;

					{	/* Object/getter.scm 265 */
						BgL_slotz00_bglt BgL_obj2367z00_1721;

						BgL_obj2367z00_1721 = (BgL_slotz00_bglt) (BgL_slotz00_32);
						BgL_testz00_2473 =
							CBOOL(
							(((BgL_slotz00_bglt) CREF(BgL_obj2367z00_1721))->BgL_indexedz00));
					}
					if (BgL_testz00_2473)
						{	/* Object/getter.scm 266 */
							obj_t BgL_val0_2465z00_998;

							BgL_val0_2465z00_998 =
								BGl_slotzd2indexedzd2setz12z12zzobject_getterz00
								(BgL_classzd2idzd2_996, BgL_typez00_31, BgL_slotz00_32,
								BgL_wideningz00_33, BgL_srczd2defzd2_34);
							{	/* Object/getter.scm 266 */
								int BgL_auxz00_2478;

								BgL_auxz00_2478 = (int) (((long) 2));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_2478);
							}
							{	/* Object/getter.scm 266 */
								int BgL_auxz00_2481;

								BgL_auxz00_2481 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2481, BFALSE);
							}
							return BgL_val0_2465z00_998;
						}
					else
						{	/* Object/getter.scm 265 */
							if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
									(BgL_slotz00_bglt) (BgL_slotz00_32)))
								{	/* Object/getter.scm 270 */
									obj_t BgL_userzd2defzd2_1001;

									BgL_userzd2defzd2_1001 =
										BGl_slotzd2virtualzd2setz12z12zzobject_getterz00
										(BgL_classz00_30, BgL_typez00_31, BgL_slotz00_32,
										BgL_wideningz00_33, BgL_srczd2defzd2_34);
									{	/* Object/getter.scm 272 */
										obj_t BgL_classzd2defzd2_1002;

										{	/* Object/getter.scm 272 */
											int BgL_auxz00_2488;

											BgL_auxz00_2488 = (int) (((long) 1));
											BgL_classzd2defzd2_1002 =
												BGL_MVALUES_VAL(BgL_auxz00_2488);
										}
										{	/* Object/getter.scm 272 */
											int BgL_auxz00_2491;

											BgL_auxz00_2491 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_2491);
										}
										{	/* Object/getter.scm 272 */
											int BgL_auxz00_2494;

											BgL_auxz00_2494 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_2494,
												BgL_classzd2defzd2_1002);
										}
										return BgL_userzd2defzd2_1001;
									}
								}
							else
								{	/* Object/getter.scm 274 */
									obj_t BgL_val0_2469z00_1005;

									BgL_val0_2469z00_1005 =
										BGl_slotzd2directzd2setz12z12zzobject_getterz00
										(BgL_classzd2idzd2_996, BgL_typez00_31, BgL_slotz00_32,
										BgL_wideningz00_33, BgL_srczd2defzd2_34);
									{	/* Object/getter.scm 274 */
										int BgL_auxz00_2498;

										BgL_auxz00_2498 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_2498);
									}
									{	/* Object/getter.scm 274 */
										int BgL_auxz00_2501;

										BgL_auxz00_2501 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_2501, BFALSE);
									}
									return BgL_val0_2469z00_1005;
								}
						}
				}
			}
		}
	}



/* slot-virtual-set! */
	obj_t BGl_slotzd2virtualzd2setz12z12zzobject_getterz00(BgL_tclassz00_bglt
		BgL_classz00_35, obj_t BgL_typez00_36, obj_t BgL_slotz00_37,
		obj_t BgL_wideningz00_38, obj_t BgL_srcz00_39)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 281 */
			{
				obj_t BgL_userzd2setterzd2_1120;

				obj_t BgL_classzd2idzd2_1121;

				obj_t BgL_vnumz00_1122;

				{	/* Object/getter.scm 297 */
					obj_t BgL_classzd2idzd2_1008;

					{
						BgL_typez00_bglt BgL_auxz00_2504;

						BgL_auxz00_2504 = (BgL_typez00_bglt) (BgL_classz00_35);
						BgL_classzd2idzd2_1008 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_2504))->BgL_idz00);
					}
					{	/* Object/getter.scm 297 */
						obj_t BgL_classzd2ownerzd2_1009;

						{
							BgL_slotz00_bglt BgL_auxz00_2507;

							BgL_auxz00_2507 = (BgL_slotz00_bglt) (BgL_slotz00_37);
							BgL_classzd2ownerzd2_1009 =
								(((BgL_slotz00_bglt) CREF(BgL_auxz00_2507))->
								BgL_classzd2ownerzd2);
						}
						{	/* Object/getter.scm 298 */
							obj_t BgL_slotzd2refzd2idz00_1010;

							{	/* Object/getter.scm 299 */
								obj_t BgL_arg3105z00_1115;

								obj_t BgL_arg3106z00_1116;

								BgL_arg3105z00_1115 = CNST_TABLE_REF(((long) 5));
								{
									BgL_slotz00_bglt BgL_auxz00_2511;

									BgL_auxz00_2511 = (BgL_slotz00_bglt) (BgL_slotz00_37);
									BgL_arg3106z00_1116 =
										(((BgL_slotz00_bglt) CREF(BgL_auxz00_2511))->BgL_idz00);
								}
								{	/* Object/getter.scm 299 */
									obj_t BgL_list3107z00_1117;

									{	/* Object/getter.scm 299 */
										obj_t BgL_arg3108z00_1118;

										{	/* Object/getter.scm 299 */
											obj_t BgL_arg3109z00_1119;

											BgL_arg3109z00_1119 =
												MAKE_PAIR(BgL_arg3106z00_1116, BNIL);
											BgL_arg3108z00_1118 =
												MAKE_PAIR(BgL_arg3105z00_1115, BgL_arg3109z00_1119);
										}
										BgL_list3107z00_1117 =
											MAKE_PAIR(BgL_classzd2idzd2_1008, BgL_arg3108z00_1118);
									}
									BgL_slotzd2refzd2idz00_1010 =
										BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
										(BgL_list3107z00_1117);
							}}
							{	/* Object/getter.scm 299 */
								obj_t BgL_slotzd2setz12zd2idz12_1011;

								{	/* Object/getter.scm 300 */
									obj_t BgL_arg3100z00_1110;

									{	/* Object/getter.scm 300 */
										obj_t BgL_arg3101z00_1111;

										obj_t BgL_arg3102z00_1112;

										{	/* Object/getter.scm 300 */
											obj_t BgL_res3441z00_1737;

											{	/* Object/getter.scm 300 */
												obj_t BgL_arg2063z00_1736;

												BgL_arg2063z00_1736 =
													SYMBOL_TO_STRING(BgL_slotzd2refzd2idz00_1010);
												BgL_res3441z00_1737 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1736);
											}
											BgL_arg3101z00_1111 = BgL_res3441z00_1737;
										}
										{	/* Object/getter.scm 300 */
											obj_t BgL_res3442z00_1740;

											{	/* Object/getter.scm 300 */
												obj_t BgL_symbolz00_1738;

												BgL_symbolz00_1738 = CNST_TABLE_REF(((long) 33));
												{	/* Object/getter.scm 300 */
													obj_t BgL_arg2063z00_1739;

													BgL_arg2063z00_1739 =
														SYMBOL_TO_STRING(BgL_symbolz00_1738);
													BgL_res3442z00_1740 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1739);
											}}
											BgL_arg3102z00_1112 = BgL_res3442z00_1740;
										}
										{	/* Object/getter.scm 300 */
											obj_t BgL_list3103z00_1113;

											{	/* Object/getter.scm 300 */
												obj_t BgL_arg3104z00_1114;

												BgL_arg3104z00_1114 =
													MAKE_PAIR(BgL_arg3102z00_1112, BNIL);
												BgL_list3103z00_1113 =
													MAKE_PAIR(BgL_arg3101z00_1111, BgL_arg3104z00_1114);
											}
											BgL_arg3100z00_1110 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3103z00_1113);
									}}
									BgL_slotzd2setz12zd2idz12_1011 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg3100z00_1110));
								}
								{	/* Object/getter.scm 300 */
									obj_t BgL_slotzd2setz12zd2tidz12_1012;

									{	/* Object/getter.scm 301 */
										obj_t BgL_arg3095z00_1105;

										{	/* Object/getter.scm 301 */
											obj_t BgL_arg3096z00_1106;

											obj_t BgL_arg3097z00_1107;

											{	/* Object/getter.scm 301 */
												obj_t BgL_res3443z00_1744;

												{	/* Object/getter.scm 301 */
													obj_t BgL_arg2063z00_1743;

													BgL_arg2063z00_1743 =
														SYMBOL_TO_STRING(BgL_slotzd2setz12zd2idz12_1011);
													BgL_res3443z00_1744 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1743);
												}
												BgL_arg3096z00_1106 = BgL_res3443z00_1744;
											}
											{	/* Object/getter.scm 301 */
												obj_t BgL_res3444z00_1747;

												{	/* Object/getter.scm 301 */
													obj_t BgL_symbolz00_1745;

													BgL_symbolz00_1745 = CNST_TABLE_REF(((long) 34));
													{	/* Object/getter.scm 301 */
														obj_t BgL_arg2063z00_1746;

														BgL_arg2063z00_1746 =
															SYMBOL_TO_STRING(BgL_symbolz00_1745);
														BgL_res3444z00_1747 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1746);
												}}
												BgL_arg3097z00_1107 = BgL_res3444z00_1747;
											}
											{	/* Object/getter.scm 301 */
												obj_t BgL_list3098z00_1108;

												{	/* Object/getter.scm 301 */
													obj_t BgL_arg3099z00_1109;

													BgL_arg3099z00_1109 =
														MAKE_PAIR(BgL_arg3097z00_1107, BNIL);
													BgL_list3098z00_1108 =
														MAKE_PAIR(BgL_arg3096z00_1106, BgL_arg3099z00_1109);
												}
												BgL_arg3095z00_1105 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list3098z00_1108);
										}}
										BgL_slotzd2setz12zd2tidz12_1012 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg3095z00_1105));
									}
									{	/* Object/getter.scm 301 */
										obj_t BgL_tidz00_1013;

										{	/* Object/getter.scm 302 */
											obj_t BgL_arg3094z00_1104;

											{
												BgL_typez00_bglt BgL_auxz00_2538;

												BgL_auxz00_2538 = (BgL_typez00_bglt) (BgL_typez00_36);
												BgL_arg3094z00_1104 =
													(((BgL_typez00_bglt) CREF(BgL_auxz00_2538))->
													BgL_idz00);
											}
											BgL_tidz00_1013 =
												BGl_makezd2typedzd2formalz00zzast_identz00
												(BgL_arg3094z00_1104);
										}
										{	/* Object/getter.scm 303 */
											obj_t BgL_vzd2idzd2_1015;

											BgL_vzd2idzd2_1015 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 35))));
											{	/* Object/getter.scm 304 */
												obj_t BgL_objz00_1016;

												BgL_objz00_1016 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 0))));
												{	/* Object/getter.scm 305 */
													obj_t BgL_vzd2tidzd2_1017;

													{	/* Object/getter.scm 306 */
														obj_t BgL_arg3090z00_1100;

														{	/* Object/getter.scm 306 */
															BgL_typez00_bglt BgL_obj1508z00_1752;

															{	/* Object/getter.scm 306 */
																BgL_slotz00_bglt BgL_obj2355z00_1751;

																BgL_obj2355z00_1751 =
																	(BgL_slotz00_bglt) (BgL_slotz00_37);
																BgL_obj1508z00_1752 =
																	(BgL_typez00_bglt) (
																	(((BgL_slotz00_bglt)
																			CREF(BgL_obj2355z00_1751))->BgL_typez00));
															}
															BgL_arg3090z00_1100 =
																(((BgL_typez00_bglt)
																	CREF(BgL_obj1508z00_1752))->BgL_idz00);
														}
														BgL_vzd2tidzd2_1017 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_vzd2idzd2_1015, BgL_arg3090z00_1100);
													}
													{	/* Object/getter.scm 306 */
														obj_t BgL_vnumz00_1018;

														{
															BgL_slotz00_bglt BgL_auxz00_2553;

															BgL_auxz00_2553 =
																(BgL_slotz00_bglt) (BgL_slotz00_37);
															BgL_vnumz00_1018 =
																(((BgL_slotz00_bglt) CREF(BgL_auxz00_2553))->
																BgL_virtualzd2numzd2);
														}
														{	/* Object/getter.scm 307 */
															obj_t BgL_userzd2setterzd2_1019;

															{
																BgL_slotz00_bglt BgL_auxz00_2556;

																BgL_auxz00_2556 =
																	(BgL_slotz00_bglt) (BgL_slotz00_37);
																BgL_userzd2setterzd2_1019 =
																	(((BgL_slotz00_bglt) CREF(BgL_auxz00_2556))->
																	BgL_setterz00);
															}
															{	/* Object/getter.scm 308 */
																obj_t BgL_setterz00_1020;

																BgL_userzd2setterzd2_1120 =
																	BgL_userzd2setterzd2_1019;
																BgL_classzd2idzd2_1121 = BgL_classzd2idzd2_1008;
																BgL_vnumz00_1122 = BgL_vnumz00_1018;
																if (BGl_firstzd2virtualzd2slotzf3zf3zzobject_getterz00(BgL_slotz00_37, BgL_classz00_35))
																	{	/* Object/getter.scm 283 */
																		BgL_setterz00_1020 =
																			BgL_userzd2setterzd2_1120;
																	}
																else
																	{	/* Object/getter.scm 287 */
																		obj_t BgL_sobjz00_1125;

																		obj_t BgL_svalz00_1126;

																		BgL_sobjz00_1125 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 30))));
																		BgL_svalz00_1126 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 31))));
																		{	/* Object/getter.scm 289 */
																			obj_t BgL_arg3112z00_1127;

																			obj_t BgL_arg3113z00_1128;

																			BgL_arg3112z00_1127 =
																				CNST_TABLE_REF(((long) 1));
																			{	/* Object/getter.scm 289 */
																				obj_t BgL_arg3114z00_1129;

																				obj_t BgL_arg3115z00_1130;

																				{	/* Object/getter.scm 289 */
																					obj_t BgL_arg3119z00_1134;

																					{	/* Object/getter.scm 289 */
																						obj_t BgL_list3120z00_1135;

																						BgL_list3120z00_1135 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3119z00_1134 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_svalz00_1126,
																							BgL_list3120z00_1135);
																					}
																					BgL_arg3114z00_1129 =
																						MAKE_PAIR(BgL_sobjz00_1125,
																						BgL_arg3119z00_1134);
																				}
																				{	/* Object/getter.scm 290 */
																					obj_t BgL_arg3121z00_1136;

																					obj_t BgL_arg3122z00_1137;

																					BgL_arg3121z00_1136 =
																						CNST_TABLE_REF(((long) 2));
																					{	/* Object/getter.scm 290 */
																						obj_t BgL_arg3123z00_1138;

																						obj_t BgL_arg3124z00_1139;

																						{	/* Object/getter.scm 290 */
																							obj_t BgL_arg3128z00_1143;

																							{	/* Object/getter.scm 290 */
																								obj_t BgL_arg3130z00_1145;

																								obj_t BgL_arg3131z00_1146;

																								BgL_arg3130z00_1145 =
																									CNST_TABLE_REF(((long) 3));
																								{	/* Object/getter.scm 291 */
																									obj_t BgL_arg3132z00_1147;

																									{	/* Object/getter.scm 291 */
																										obj_t BgL_arg3135z00_1150;

																										obj_t BgL_arg3136z00_1151;

																										BgL_arg3135z00_1150 =
																											CNST_TABLE_REF(((long)
																												1));
																										{	/* Object/getter.scm 291 */
																											obj_t BgL_arg3138z00_1153;

																											{	/* Object/getter.scm 292 */
																												obj_t
																													BgL_arg3142z00_1157;
																												obj_t
																													BgL_arg3143z00_1158;
																												BgL_arg3142z00_1157 =
																													CNST_TABLE_REF(((long)
																														32));
																												{	/* Object/getter.scm 292 */
																													obj_t
																														BgL_list3144z00_1159;
																													{	/* Object/getter.scm 292 */
																														obj_t
																															BgL_arg3145z00_1160;
																														{	/* Object/getter.scm 292 */
																															obj_t
																																BgL_arg3146z00_1161;
																															{	/* Object/getter.scm 292 */
																																obj_t
																																	BgL_arg3147z00_1162;
																																BgL_arg3147z00_1162
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg3146z00_1161
																																	=
																																	MAKE_PAIR
																																	(BgL_svalz00_1126,
																																	BgL_arg3147z00_1162);
																															}
																															BgL_arg3145z00_1160
																																=
																																MAKE_PAIR
																																(BgL_vnumz00_1122,
																																BgL_arg3146z00_1161);
																														}
																														BgL_list3144z00_1159
																															=
																															MAKE_PAIR
																															(BgL_sobjz00_1125,
																															BgL_arg3145z00_1160);
																													}
																													BgL_arg3143z00_1158 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_classzd2idzd2_1121,
																														BgL_list3144z00_1159);
																												}
																												BgL_arg3138z00_1153 =
																													MAKE_PAIR
																													(BgL_arg3142z00_1157,
																													BgL_arg3143z00_1158);
																											}
																											{	/* Object/getter.scm 291 */
																												obj_t
																													BgL_list3140z00_1155;
																												{	/* Object/getter.scm 291 */
																													obj_t
																														BgL_arg3141z00_1156;
																													BgL_arg3141z00_1156 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list3140z00_1155 =
																														MAKE_PAIR
																														(BgL_arg3138z00_1153,
																														BgL_arg3141z00_1156);
																												}
																												BgL_arg3136z00_1151 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BNIL,
																													BgL_list3140z00_1155);
																										}}
																										BgL_arg3132z00_1147 =
																											MAKE_PAIR
																											(BgL_arg3135z00_1150,
																											BgL_arg3136z00_1151);
																									}
																									{	/* Object/getter.scm 290 */
																										obj_t BgL_list3134z00_1149;

																										BgL_list3134z00_1149 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg3131z00_1146 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg3132z00_1147,
																											BgL_list3134z00_1149);
																								}}
																								BgL_arg3128z00_1143 =
																									MAKE_PAIR(BgL_arg3130z00_1145,
																									BgL_arg3131z00_1146);
																							}
																							BgL_arg3123z00_1138 =
																								MAKE_PAIR(BgL_arg3128z00_1143,
																								BNIL);
																						}
																						{	/* Object/getter.scm 296 */
																							obj_t BgL_arg3148z00_1163;

																							{	/* Object/getter.scm 296 */
																								obj_t BgL_list3149z00_1164;

																								{	/* Object/getter.scm 296 */
																									obj_t BgL_arg3150z00_1165;

																									BgL_arg3150z00_1165 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3149z00_1164 =
																										MAKE_PAIR(BgL_svalz00_1126,
																										BgL_arg3150z00_1165);
																								}
																								BgL_arg3148z00_1163 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_sobjz00_1125,
																									BgL_list3149z00_1164);
																							}
																							BgL_arg3124z00_1139 =
																								MAKE_PAIR
																								(BgL_userzd2setterzd2_1120,
																								BgL_arg3148z00_1163);
																						}
																						{	/* Object/getter.scm 290 */
																							obj_t BgL_list3126z00_1141;

																							{	/* Object/getter.scm 290 */
																								obj_t BgL_arg3127z00_1142;

																								BgL_arg3127z00_1142 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3126z00_1141 =
																									MAKE_PAIR(BgL_arg3124z00_1139,
																									BgL_arg3127z00_1142);
																							}
																							BgL_arg3122z00_1137 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3123z00_1138,
																								BgL_list3126z00_1141);
																					}}
																					BgL_arg3115z00_1130 =
																						MAKE_PAIR(BgL_arg3121z00_1136,
																						BgL_arg3122z00_1137);
																				}
																				{	/* Object/getter.scm 289 */
																					obj_t BgL_list3117z00_1132;

																					{	/* Object/getter.scm 289 */
																						obj_t BgL_arg3118z00_1133;

																						BgL_arg3118z00_1133 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3117z00_1132 =
																							MAKE_PAIR(BgL_arg3115z00_1130,
																							BgL_arg3118z00_1133);
																					}
																					BgL_arg3113z00_1128 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3114z00_1129,
																						BgL_list3117z00_1132);
																			}}
																			BgL_setterz00_1020 =
																				MAKE_PAIR(BgL_arg3112z00_1127,
																				BgL_arg3113z00_1128);
																	}}
																{	/* Object/getter.scm 309 */

																	if (
																		((obj_t) (BgL_classz00_35) ==
																			BgL_classzd2ownerzd2_1009))
																		{	/* Object/getter.scm 310 */
																			{	/* Object/getter.scm 314 */
																				obj_t BgL_arg3015z00_1022;

																				{	/* Object/getter.scm 314 */
																					obj_t BgL_arg3016z00_1023;

																					obj_t BgL_arg3017z00_1024;

																					BgL_arg3016z00_1023 =
																						CNST_TABLE_REF(((long) 6));
																					{	/* Object/getter.scm 314 */
																						obj_t BgL_arg3018z00_1025;

																						{	/* Object/getter.scm 314 */
																							obj_t BgL_arg3021z00_1028;

																							obj_t BgL_arg3022z00_1029;

																							BgL_arg3021z00_1028 =
																								CNST_TABLE_REF(((long) 7));
																							{	/* Object/getter.scm 314 */
																								obj_t BgL_list3023z00_1030;

																								{	/* Object/getter.scm 314 */
																									obj_t BgL_arg3024z00_1031;

																									{	/* Object/getter.scm 314 */
																										obj_t BgL_arg3025z00_1032;

																										BgL_arg3025z00_1032 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg3024z00_1031 =
																											MAKE_PAIR
																											(BgL_vzd2tidzd2_1017,
																											BgL_arg3025z00_1032);
																									}
																									BgL_list3023z00_1030 =
																										MAKE_PAIR(BgL_tidz00_1013,
																										BgL_arg3024z00_1031);
																								}
																								BgL_arg3022z00_1029 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_slotzd2setz12zd2tidz12_1012,
																									BgL_list3023z00_1030);
																							}
																							BgL_arg3018z00_1025 =
																								MAKE_PAIR(BgL_arg3021z00_1028,
																								BgL_arg3022z00_1029);
																						}
																						{	/* Object/getter.scm 314 */
																							obj_t BgL_list3020z00_1027;

																							BgL_list3020z00_1027 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3017z00_1024 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3018z00_1025,
																								BgL_list3020z00_1027);
																					}}
																					BgL_arg3015z00_1022 =
																						MAKE_PAIR(BgL_arg3016z00_1023,
																						BgL_arg3017z00_1024);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg3015z00_1022);
																			}
																			{	/* Object/getter.scm 316 */
																				obj_t BgL_arg3026z00_1033;

																				{	/* Object/getter.scm 316 */
																					obj_t BgL_arg3027z00_1034;

																					obj_t BgL_arg3028z00_1035;

																					BgL_arg3027z00_1034 =
																						CNST_TABLE_REF(((long) 8));
																					{	/* Object/getter.scm 316 */
																						obj_t BgL_arg3029z00_1036;

																						{	/* Object/getter.scm 316 */
																							obj_t BgL_arg3032z00_1039;

																							{	/* Object/getter.scm 316 */
																								obj_t BgL_arg3033z00_1040;

																								{	/* Object/getter.scm 316 */
																									obj_t BgL_arg3036z00_1043;

																									obj_t BgL_arg3037z00_1044;

																									BgL_arg3036z00_1043 =
																										CNST_TABLE_REF(((long) 11));
																									{	/* Object/getter.scm 316 */
																										obj_t BgL_arg3038z00_1045;

																										{	/* Object/getter.scm 316 */
																											obj_t BgL_arg3041z00_1048;

																											obj_t BgL_arg3042z00_1049;

																											BgL_arg3041z00_1048 =
																												CNST_TABLE_REF(((long)
																													28));
																											{	/* Object/getter.scm 316 */
																												obj_t
																													BgL_arg3043z00_1050;
																												BgL_arg3043z00_1050 =
																													MAKE_PAIR
																													(BgL_slotzd2refzd2idz00_1010,
																													BNIL);
																												{	/* Object/getter.scm 316 */
																													obj_t
																														BgL_list3045z00_1052;
																													BgL_list3045z00_1052 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg3042z00_1049 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg3043z00_1050,
																														BgL_list3045z00_1052);
																											}}
																											BgL_arg3038z00_1045 =
																												MAKE_PAIR
																												(BgL_arg3041z00_1048,
																												BgL_arg3042z00_1049);
																										}
																										{	/* Object/getter.scm 316 */
																											obj_t
																												BgL_list3040z00_1047;
																											BgL_list3040z00_1047 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3037z00_1044 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3038z00_1045,
																												BgL_list3040z00_1047);
																									}}
																									BgL_arg3033z00_1040 =
																										MAKE_PAIR
																										(BgL_arg3036z00_1043,
																										BgL_arg3037z00_1044);
																								}
																								{	/* Object/getter.scm 316 */
																									obj_t BgL_list3035z00_1042;

																									BgL_list3035z00_1042 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3032z00_1039 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3033z00_1040,
																										BgL_list3035z00_1042);
																							}}
																							BgL_arg3029z00_1036 =
																								MAKE_PAIR
																								(BgL_slotzd2setz12zd2idz12_1011,
																								BgL_arg3032z00_1039);
																						}
																						{	/* Object/getter.scm 316 */
																							obj_t BgL_list3031z00_1038;

																							BgL_list3031z00_1038 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3028z00_1035 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3029z00_1036,
																								BgL_list3031z00_1038);
																					}}
																					BgL_arg3026z00_1033 =
																						MAKE_PAIR(BgL_arg3027z00_1034,
																						BgL_arg3028z00_1035);
																				}
																				BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																					(BgL_arg3026z00_1033);
																			}
																			{	/* Object/getter.scm 317 */
																				obj_t BgL_val0_2471z00_1053;

																				obj_t BgL_val1_2472z00_1054;

																				{	/* Object/getter.scm 320 */
																					obj_t BgL_arg3046z00_1055;

																					{	/* Object/getter.scm 320 */
																						obj_t BgL_arg3048z00_1057;

																						obj_t BgL_arg3049z00_1058;

																						{	/* Object/getter.scm 320 */
																							obj_t BgL_arg3052z00_1061;

																							obj_t BgL_arg3053z00_1062;

																							BgL_arg3052z00_1061 =
																								CNST_TABLE_REF(((long) 13));
																							{	/* Object/getter.scm 320 */
																								obj_t BgL_arg3054z00_1063;

																								obj_t BgL_arg3055z00_1064;

																								{	/* Object/getter.scm 320 */
																									obj_t BgL_arg3059z00_1068;

																									{	/* Object/getter.scm 320 */
																										obj_t BgL_arg3060z00_1069;

																										{	/* Object/getter.scm 320 */
																											obj_t BgL_arg3064z00_1073;

																											{	/* Object/getter.scm 320 */
																												obj_t
																													BgL_arg3065z00_1074;
																												obj_t
																													BgL_arg3066z00_1075;
																												{	/* Object/getter.scm 320 */
																													obj_t
																														BgL_res3445z00_1757;
																													{	/* Object/getter.scm 320 */
																														obj_t
																															BgL_arg2063z00_1756;
																														BgL_arg2063z00_1756
																															=
																															SYMBOL_TO_STRING
																															(BgL_objz00_1016);
																														BgL_res3445z00_1757
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg2063z00_1756);
																													}
																													BgL_arg3065z00_1074 =
																														BgL_res3445z00_1757;
																												}
																												{	/* Object/getter.scm 320 */
																													obj_t
																														BgL_res3446z00_1760;
																													{	/* Object/getter.scm 320 */
																														obj_t
																															BgL_arg2063z00_1759;
																														BgL_arg2063z00_1759
																															=
																															SYMBOL_TO_STRING
																															(BgL_tidz00_1013);
																														BgL_res3446z00_1760
																															=
																															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																															(BgL_arg2063z00_1759);
																													}
																													BgL_arg3066z00_1075 =
																														BgL_res3446z00_1760;
																												}
																												{	/* Object/getter.scm 320 */
																													obj_t
																														BgL_list3067z00_1076;
																													{	/* Object/getter.scm 320 */
																														obj_t
																															BgL_arg3068z00_1077;
																														BgL_arg3068z00_1077
																															=
																															MAKE_PAIR
																															(BgL_arg3066z00_1075,
																															BNIL);
																														BgL_list3067z00_1076
																															=
																															MAKE_PAIR
																															(BgL_arg3065z00_1074,
																															BgL_arg3068z00_1077);
																													}
																													BgL_arg3064z00_1073 =
																														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																														(BgL_list3067z00_1076);
																											}}
																											BgL_arg3060z00_1069 =
																												string_to_symbol
																												(BSTRING_TO_STRING
																												(BgL_arg3064z00_1073));
																										}
																										{	/* Object/getter.scm 320 */
																											obj_t
																												BgL_list3062z00_1071;
																											{	/* Object/getter.scm 320 */
																												obj_t
																													BgL_arg3063z00_1072;
																												BgL_arg3063z00_1072 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list3062z00_1071 =
																													MAKE_PAIR
																													(BgL_vzd2tidzd2_1017,
																													BgL_arg3063z00_1072);
																											}
																											BgL_arg3059z00_1068 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3060z00_1069,
																												BgL_list3062z00_1071);
																									}}
																									BgL_arg3054z00_1063 =
																										MAKE_PAIR
																										(BgL_slotzd2setz12zd2tidz12_1012,
																										BgL_arg3059z00_1068);
																								}
																								{	/* Object/getter.scm 322 */
																									obj_t BgL_arg3069z00_1078;

																									obj_t BgL_arg3070z00_1079;

																									{	/* Object/getter.scm 322 */
																										obj_t BgL_arg3071z00_1080;

																										obj_t BgL_arg3072z00_1081;

																										BgL_arg3071z00_1080 =
																											CNST_TABLE_REF(((long)
																												14));
																										{	/* Object/getter.scm 322 */
																											obj_t
																												BgL_list3073z00_1082;
																											{	/* Object/getter.scm 322 */
																												obj_t
																													BgL_arg3074z00_1083;
																												obj_t
																													BgL_arg3075z00_1084;
																												BgL_arg3074z00_1083 =
																													CNST_TABLE_REF(((long)
																														15));
																												BgL_arg3075z00_1084 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list3073z00_1082 =
																													MAKE_PAIR
																													(BgL_arg3074z00_1083,
																													BgL_arg3075z00_1084);
																											}
																											BgL_arg3072z00_1081 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														36)),
																												BgL_list3073z00_1082);
																										}
																										BgL_arg3069z00_1078 =
																											MAKE_PAIR
																											(BgL_arg3071z00_1080,
																											BgL_arg3072z00_1081);
																									}
																									{	/* Object/getter.scm 322 */
																										obj_t BgL_list3076z00_1085;

																										{	/* Object/getter.scm 322 */
																											obj_t BgL_arg3077z00_1086;

																											{	/* Object/getter.scm 322 */
																												obj_t
																													BgL_arg3078z00_1087;
																												BgL_arg3078z00_1087 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg3077z00_1086 =
																													MAKE_PAIR
																													(BgL_vzd2idzd2_1015,
																													BgL_arg3078z00_1087);
																											}
																											BgL_list3076z00_1085 =
																												MAKE_PAIR
																												(BgL_vnumz00_1018,
																												BgL_arg3077z00_1086);
																										}
																										BgL_arg3070z00_1079 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_objz00_1016,
																											BgL_list3076z00_1085);
																									}
																									BgL_arg3055z00_1064 =
																										MAKE_PAIR
																										(BgL_arg3069z00_1078,
																										BgL_arg3070z00_1079);
																								}
																								{	/* Object/getter.scm 320 */
																									obj_t BgL_list3057z00_1066;

																									{	/* Object/getter.scm 320 */
																										obj_t BgL_arg3058z00_1067;

																										BgL_arg3058z00_1067 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3057z00_1066 =
																											MAKE_PAIR
																											(BgL_arg3055z00_1064,
																											BgL_arg3058z00_1067);
																									}
																									BgL_arg3053z00_1062 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3054z00_1063,
																										BgL_list3057z00_1066);
																							}}
																							BgL_arg3048z00_1057 =
																								MAKE_PAIR(BgL_arg3052z00_1061,
																								BgL_arg3053z00_1062);
																						}
																						if (BGl_iszd2azf3z21zz__objectz00
																							(BgL_slotz00_37,
																								BGl_slotz00zzobject_slotsz00))
																							{
																								BgL_slotz00_bglt
																									BgL_auxz00_2664;
																								BgL_auxz00_2664 =
																									(BgL_slotz00_bglt)
																									(BgL_slotz00_37);
																								BgL_arg3049z00_1058 =
																									(((BgL_slotz00_bglt)
																										CREF(BgL_auxz00_2664))->
																									BgL_srcz00);
																							}
																						else
																							{	/* Object/getter.scm 323 */
																								BgL_arg3049z00_1058 =
																									BgL_slotz00_37;
																							}
																						{	/* Object/getter.scm 319 */
																							obj_t BgL_list3050z00_1059;

																							{	/* Object/getter.scm 319 */
																								obj_t BgL_arg3051z00_1060;

																								BgL_arg3051z00_1060 =
																									MAKE_PAIR(BgL_srcz00_39,
																									BNIL);
																								BgL_list3050z00_1059 =
																									MAKE_PAIR(BgL_arg3049z00_1058,
																									BgL_arg3051z00_1060);
																							}
																							BgL_arg3046z00_1055 =
																								BGl_epairifyza2za2zztools_miscz00
																								(BgL_arg3048z00_1057,
																								BgL_list3050z00_1059);
																						}
																					}
																					{	/* Object/getter.scm 318 */
																						obj_t BgL_list3047z00_1056;

																						BgL_list3047z00_1056 =
																							MAKE_PAIR(BgL_arg3046z00_1055,
																							BNIL);
																						BgL_val0_2471z00_1053 =
																							BgL_list3047z00_1056;
																					}
																				}
																				{	/* Object/getter.scm 327 */
																					bool_t BgL_testz00_2671;

																					{	/* Object/getter.scm 327 */
																						obj_t BgL_auxz00_2672;

																						{
																							BgL_slotz00_bglt BgL_auxz00_2674;

																							BgL_auxz00_2674 =
																								(BgL_slotz00_bglt)
																								(BgL_slotz00_37);
																							BgL_auxz00_2672 =
																								(((BgL_slotz00_bglt)
																									CREF(BgL_auxz00_2674))->
																								BgL_classzd2ownerzd2);
																						}
																						BgL_testz00_2671 =
																							(
																							(obj_t) (BgL_classz00_35) ==
																							BgL_auxz00_2672);
																					}
																					if (BgL_testz00_2671)
																						{	/* Object/getter.scm 327 */
																							BgL_val1_2472z00_1054 =
																								BgL_setterz00_1020;
																						}
																					else
																						{	/* Object/getter.scm 327 */
																							BgL_val1_2472z00_1054 = BFALSE;
																						}
																				}
																				{	/* Object/getter.scm 317 */
																					int BgL_auxz00_2678;

																					BgL_auxz00_2678 = (int) (((long) 2));
																					BGL_MVALUES_NUMBER_SET
																						(BgL_auxz00_2678);
																				}
																				{	/* Object/getter.scm 317 */
																					int BgL_auxz00_2681;

																					BgL_auxz00_2681 = (int) (((long) 1));
																					BGL_MVALUES_VAL_SET(BgL_auxz00_2681,
																						BgL_val1_2472z00_1054);
																				}
																				return BgL_val0_2471z00_1053;
																			}
																		}
																	else
																		{	/* Object/getter.scm 330 */
																			obj_t BgL_slotzd2setz12zd2oidz12_1091;

																			{	/* Object/getter.scm 330 */
																				obj_t BgL_arg3082z00_1092;

																				obj_t BgL_arg3083z00_1093;

																				obj_t BgL_arg3084z00_1094;

																				obj_t BgL_arg3085z00_1095;

																				{
																					BgL_typez00_bglt BgL_auxz00_2684;

																					BgL_auxz00_2684 =
																						(BgL_typez00_bglt)
																						(BgL_classzd2ownerzd2_1009);
																					BgL_arg3082z00_1092 =
																						(((BgL_typez00_bglt)
																							CREF(BgL_auxz00_2684))->
																						BgL_idz00);
																				}
																				BgL_arg3083z00_1093 =
																					CNST_TABLE_REF(((long) 5));
																				{
																					BgL_slotz00_bglt BgL_auxz00_2688;

																					BgL_auxz00_2688 =
																						(BgL_slotz00_bglt) (BgL_slotz00_37);
																					BgL_arg3084z00_1094 =
																						(((BgL_slotz00_bglt)
																							CREF(BgL_auxz00_2688))->
																						BgL_idz00);
																				}
																				BgL_arg3085z00_1095 =
																					CNST_TABLE_REF(((long) 33));
																				{	/* Object/getter.scm 330 */
																					obj_t BgL_list3086z00_1096;

																					{	/* Object/getter.scm 330 */
																						obj_t BgL_arg3087z00_1097;

																						{	/* Object/getter.scm 330 */
																							obj_t BgL_arg3088z00_1098;

																							{	/* Object/getter.scm 330 */
																								obj_t BgL_arg3089z00_1099;

																								BgL_arg3089z00_1099 =
																									MAKE_PAIR(BgL_arg3085z00_1095,
																									BNIL);
																								BgL_arg3088z00_1098 =
																									MAKE_PAIR(BgL_arg3084z00_1094,
																									BgL_arg3089z00_1099);
																							}
																							BgL_arg3087z00_1097 =
																								MAKE_PAIR(BgL_arg3083z00_1093,
																								BgL_arg3088z00_1098);
																						}
																						BgL_list3086z00_1096 =
																							MAKE_PAIR(BgL_arg3082z00_1092,
																							BgL_arg3087z00_1097);
																					}
																					BgL_slotzd2setz12zd2oidz12_1091 =
																						BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																						(BgL_list3086z00_1096);
																			}}
																			BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00
																				(BgL_slotzd2setz12zd2idz12_1011,
																				BgL_slotzd2setz12zd2oidz12_1091);
																			return BNIL;
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



/* slot-direct-set! */
	obj_t BGl_slotzd2directzd2setz12z12zzobject_getterz00(obj_t
		BgL_classzd2idzd2_40, obj_t BgL_classz00_41, obj_t BgL_slotz00_42,
		obj_t BgL_wideningz00_43, obj_t BgL_srczd2defzd2_44)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 339 */
			{	/* Object/getter.scm 340 */
				obj_t BgL_slotzd2refzd2idz00_1169;

				{	/* Object/getter.scm 340 */
					obj_t BgL_arg3238z00_1258;

					obj_t BgL_arg3239z00_1259;

					BgL_arg3238z00_1258 = CNST_TABLE_REF(((long) 5));
					{
						BgL_slotz00_bglt BgL_auxz00_2699;

						BgL_auxz00_2699 = (BgL_slotz00_bglt) (BgL_slotz00_42);
						BgL_arg3239z00_1259 =
							(((BgL_slotz00_bglt) CREF(BgL_auxz00_2699))->BgL_idz00);
					}
					{	/* Object/getter.scm 340 */
						obj_t BgL_list3240z00_1260;

						{	/* Object/getter.scm 340 */
							obj_t BgL_arg3241z00_1261;

							{	/* Object/getter.scm 340 */
								obj_t BgL_arg3242z00_1262;

								BgL_arg3242z00_1262 = MAKE_PAIR(BgL_arg3239z00_1259, BNIL);
								BgL_arg3241z00_1261 =
									MAKE_PAIR(BgL_arg3238z00_1258, BgL_arg3242z00_1262);
							}
							BgL_list3240z00_1260 =
								MAKE_PAIR(BgL_classzd2idzd2_40, BgL_arg3241z00_1261);
						}
						BgL_slotzd2refzd2idz00_1169 =
							BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(BgL_list3240z00_1260);
				}}
				{	/* Object/getter.scm 340 */
					obj_t BgL_slotzd2setz12zd2idz12_1170;

					{	/* Object/getter.scm 341 */
						obj_t BgL_arg3233z00_1253;

						{	/* Object/getter.scm 341 */
							obj_t BgL_arg3234z00_1254;

							obj_t BgL_arg3235z00_1255;

							{	/* Object/getter.scm 341 */
								obj_t BgL_res3448z00_1775;

								{	/* Object/getter.scm 341 */
									obj_t BgL_arg2063z00_1774;

									BgL_arg2063z00_1774 =
										SYMBOL_TO_STRING(BgL_slotzd2refzd2idz00_1169);
									BgL_res3448z00_1775 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1774);
								}
								BgL_arg3234z00_1254 = BgL_res3448z00_1775;
							}
							{	/* Object/getter.scm 341 */
								obj_t BgL_res3449z00_1778;

								{	/* Object/getter.scm 341 */
									obj_t BgL_symbolz00_1776;

									BgL_symbolz00_1776 = CNST_TABLE_REF(((long) 33));
									{	/* Object/getter.scm 341 */
										obj_t BgL_arg2063z00_1777;

										BgL_arg2063z00_1777 = SYMBOL_TO_STRING(BgL_symbolz00_1776);
										BgL_res3449z00_1778 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1777);
								}}
								BgL_arg3235z00_1255 = BgL_res3449z00_1778;
							}
							{	/* Object/getter.scm 341 */
								obj_t BgL_list3236z00_1256;

								{	/* Object/getter.scm 341 */
									obj_t BgL_arg3237z00_1257;

									BgL_arg3237z00_1257 = MAKE_PAIR(BgL_arg3235z00_1255, BNIL);
									BgL_list3236z00_1256 =
										MAKE_PAIR(BgL_arg3234z00_1254, BgL_arg3237z00_1257);
								}
								BgL_arg3233z00_1253 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3236z00_1256);
						}}
						BgL_slotzd2setz12zd2idz12_1170 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg3233z00_1253));
					}
					{	/* Object/getter.scm 341 */
						obj_t BgL_slotzd2setz12zd2tidz12_1171;

						{	/* Object/getter.scm 342 */
							obj_t BgL_arg3228z00_1248;

							{	/* Object/getter.scm 342 */
								obj_t BgL_arg3229z00_1249;

								obj_t BgL_arg3230z00_1250;

								{	/* Object/getter.scm 342 */
									obj_t BgL_res3450z00_1782;

									{	/* Object/getter.scm 342 */
										obj_t BgL_arg2063z00_1781;

										BgL_arg2063z00_1781 =
											SYMBOL_TO_STRING(BgL_slotzd2setz12zd2idz12_1170);
										BgL_res3450z00_1782 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1781);
									}
									BgL_arg3229z00_1249 = BgL_res3450z00_1782;
								}
								{	/* Object/getter.scm 342 */
									obj_t BgL_res3451z00_1785;

									{	/* Object/getter.scm 342 */
										obj_t BgL_symbolz00_1783;

										BgL_symbolz00_1783 = CNST_TABLE_REF(((long) 34));
										{	/* Object/getter.scm 342 */
											obj_t BgL_arg2063z00_1784;

											BgL_arg2063z00_1784 =
												SYMBOL_TO_STRING(BgL_symbolz00_1783);
											BgL_res3451z00_1785 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1784);
									}}
									BgL_arg3230z00_1250 = BgL_res3451z00_1785;
								}
								{	/* Object/getter.scm 342 */
									obj_t BgL_list3231z00_1251;

									{	/* Object/getter.scm 342 */
										obj_t BgL_arg3232z00_1252;

										BgL_arg3232z00_1252 = MAKE_PAIR(BgL_arg3230z00_1250, BNIL);
										BgL_list3231z00_1251 =
											MAKE_PAIR(BgL_arg3229z00_1249, BgL_arg3232z00_1252);
									}
									BgL_arg3228z00_1248 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3231z00_1251);
							}}
							BgL_slotzd2setz12zd2tidz12_1171 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg3228z00_1248));
						}
						{	/* Object/getter.scm 342 */
							obj_t BgL_tidz00_1172;

							{	/* Object/getter.scm 343 */
								obj_t BgL_arg3227z00_1247;

								{
									BgL_typez00_bglt BgL_auxz00_2726;

									BgL_auxz00_2726 = (BgL_typez00_bglt) (BgL_classz00_41);
									BgL_arg3227z00_1247 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_2726))->BgL_idz00);
								}
								BgL_tidz00_1172 =
									BGl_makezd2typedzd2formalz00zzast_identz00
									(BgL_arg3227z00_1247);
							}
							{	/* Object/getter.scm 343 */
								obj_t BgL_vzd2idzd2_1173;

								BgL_vzd2idzd2_1173 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												35))));
								{	/* Object/getter.scm 344 */
									obj_t BgL_objz00_1174;

									BgL_objz00_1174 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													0))));
									{	/* Object/getter.scm 345 */
										obj_t BgL_vzd2tidzd2_1175;

										{	/* Object/getter.scm 346 */
											obj_t BgL_arg3222z00_1243;

											{	/* Object/getter.scm 346 */
												BgL_typez00_bglt BgL_obj1508z00_1789;

												{	/* Object/getter.scm 346 */
													BgL_slotz00_bglt BgL_obj2355z00_1788;

													BgL_obj2355z00_1788 =
														(BgL_slotz00_bglt) (BgL_slotz00_42);
													BgL_obj1508z00_1789 =
														(BgL_typez00_bglt) (
														(((BgL_slotz00_bglt) CREF(BgL_obj2355z00_1788))->
															BgL_typez00));
												}
												BgL_arg3222z00_1243 =
													(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1789))->
													BgL_idz00);
											}
											BgL_vzd2tidzd2_1175 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_vzd2idzd2_1173, BgL_arg3222z00_1243);
										}
										{	/* Object/getter.scm 346 */
											obj_t BgL_classzd2ownerzd2_1176;

											{
												BgL_slotz00_bglt BgL_auxz00_2741;

												BgL_auxz00_2741 = (BgL_slotz00_bglt) (BgL_slotz00_42);
												BgL_classzd2ownerzd2_1176 =
													(((BgL_slotz00_bglt) CREF(BgL_auxz00_2741))->
													BgL_classzd2ownerzd2);
											}
											{	/* Object/getter.scm 347 */

												{	/* Object/getter.scm 348 */
													bool_t BgL_testz00_2744;

													{	/* Object/getter.scm 348 */
														obj_t BgL_auxz00_2745;

														{
															BgL_typez00_bglt BgL_auxz00_2746;

															BgL_auxz00_2746 =
																(BgL_typez00_bglt) (BgL_classzd2ownerzd2_1176);
															BgL_auxz00_2745 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_2746))->
																BgL_idz00);
														}
														BgL_testz00_2744 =
															(BgL_classzd2idzd2_40 == BgL_auxz00_2745);
													}
													if (BgL_testz00_2744)
														{	/* Object/getter.scm 348 */
															{	/* Object/getter.scm 352 */
																obj_t BgL_arg3154z00_1178;

																{	/* Object/getter.scm 352 */
																	obj_t BgL_arg3155z00_1179;

																	obj_t BgL_arg3157z00_1180;

																	BgL_arg3155z00_1179 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Object/getter.scm 352 */
																		obj_t BgL_arg3158z00_1181;

																		{	/* Object/getter.scm 352 */
																			obj_t BgL_arg3161z00_1184;

																			obj_t BgL_arg3162z00_1185;

																			BgL_arg3161z00_1184 =
																				CNST_TABLE_REF(((long) 7));
																			{	/* Object/getter.scm 352 */
																				obj_t BgL_list3163z00_1186;

																				{	/* Object/getter.scm 352 */
																					obj_t BgL_arg3165z00_1187;

																					{	/* Object/getter.scm 352 */
																						obj_t BgL_arg3167z00_1188;

																						BgL_arg3167z00_1188 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3165z00_1187 =
																							MAKE_PAIR(BgL_vzd2tidzd2_1175,
																							BgL_arg3167z00_1188);
																					}
																					BgL_list3163z00_1186 =
																						MAKE_PAIR(BgL_tidz00_1172,
																						BgL_arg3165z00_1187);
																				}
																				BgL_arg3162z00_1185 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_slotzd2setz12zd2tidz12_1171,
																					BgL_list3163z00_1186);
																			}
																			BgL_arg3158z00_1181 =
																				MAKE_PAIR(BgL_arg3161z00_1184,
																				BgL_arg3162z00_1185);
																		}
																		{	/* Object/getter.scm 352 */
																			obj_t BgL_list3160z00_1183;

																			BgL_list3160z00_1183 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3157z00_1180 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3158z00_1181,
																				BgL_list3160z00_1183);
																	}}
																	BgL_arg3154z00_1178 =
																		MAKE_PAIR(BgL_arg3155z00_1179,
																		BgL_arg3157z00_1180);
																}
																BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																	(BgL_arg3154z00_1178);
															}
															{	/* Object/getter.scm 354 */
																obj_t BgL_arg3168z00_1189;

																{	/* Object/getter.scm 354 */
																	obj_t BgL_arg3169z00_1190;

																	obj_t BgL_arg3170z00_1191;

																	BgL_arg3169z00_1190 =
																		CNST_TABLE_REF(((long) 8));
																	{	/* Object/getter.scm 354 */
																		obj_t BgL_arg3171z00_1192;

																		{	/* Object/getter.scm 354 */
																			obj_t BgL_arg3174z00_1195;

																			{	/* Object/getter.scm 354 */
																				obj_t BgL_arg3175z00_1196;

																				{	/* Object/getter.scm 354 */
																					obj_t BgL_arg3178z00_1199;

																					obj_t BgL_arg3179z00_1200;

																					BgL_arg3178z00_1199 =
																						CNST_TABLE_REF(((long) 11));
																					{	/* Object/getter.scm 354 */
																						obj_t BgL_arg3180z00_1201;

																						{	/* Object/getter.scm 354 */
																							obj_t BgL_arg3183z00_1204;

																							obj_t BgL_arg3184z00_1205;

																							BgL_arg3183z00_1204 =
																								CNST_TABLE_REF(((long) 28));
																							{	/* Object/getter.scm 354 */
																								obj_t BgL_arg3185z00_1206;

																								BgL_arg3185z00_1206 =
																									MAKE_PAIR
																									(BgL_slotzd2refzd2idz00_1169,
																									BNIL);
																								{	/* Object/getter.scm 354 */
																									obj_t BgL_list3187z00_1208;

																									BgL_list3187z00_1208 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3184z00_1205 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3185z00_1206,
																										BgL_list3187z00_1208);
																							}}
																							BgL_arg3180z00_1201 =
																								MAKE_PAIR(BgL_arg3183z00_1204,
																								BgL_arg3184z00_1205);
																						}
																						{	/* Object/getter.scm 354 */
																							obj_t BgL_list3182z00_1203;

																							BgL_list3182z00_1203 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3179z00_1200 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3180z00_1201,
																								BgL_list3182z00_1203);
																					}}
																					BgL_arg3175z00_1196 =
																						MAKE_PAIR(BgL_arg3178z00_1199,
																						BgL_arg3179z00_1200);
																				}
																				{	/* Object/getter.scm 354 */
																					obj_t BgL_list3177z00_1198;

																					BgL_list3177z00_1198 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3174z00_1195 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3175z00_1196,
																						BgL_list3177z00_1198);
																			}}
																			BgL_arg3171z00_1192 =
																				MAKE_PAIR
																				(BgL_slotzd2setz12zd2idz12_1170,
																				BgL_arg3174z00_1195);
																		}
																		{	/* Object/getter.scm 354 */
																			obj_t BgL_list3173z00_1194;

																			BgL_list3173z00_1194 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3170z00_1191 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3171z00_1192,
																				BgL_list3173z00_1194);
																	}}
																	BgL_arg3168z00_1189 =
																		MAKE_PAIR(BgL_arg3169z00_1190,
																		BgL_arg3170z00_1191);
																}
																BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																	(BgL_arg3168z00_1189);
															}
															{	/* Object/getter.scm 356 */
																obj_t BgL_arg3189z00_1209;

																{	/* Object/getter.scm 356 */
																	obj_t BgL_arg3191z00_1211;

																	obj_t BgL_arg3192z00_1212;

																	{	/* Object/getter.scm 356 */
																		obj_t BgL_arg3195z00_1215;

																		obj_t BgL_arg3196z00_1216;

																		BgL_arg3195z00_1215 =
																			CNST_TABLE_REF(((long) 13));
																		{	/* Object/getter.scm 357 */
																			obj_t BgL_arg3197z00_1217;

																			obj_t BgL_arg3198z00_1218;

																			{	/* Object/getter.scm 357 */
																				obj_t BgL_arg3202z00_1222;

																				{	/* Object/getter.scm 357 */
																					obj_t BgL_arg3203z00_1223;

																					{	/* Object/getter.scm 357 */
																						obj_t BgL_arg3207z00_1227;

																						{	/* Object/getter.scm 357 */
																							obj_t BgL_arg3208z00_1228;

																							obj_t BgL_arg3209z00_1229;

																							{	/* Object/getter.scm 357 */
																								obj_t BgL_res3452z00_1794;

																								{	/* Object/getter.scm 357 */
																									obj_t BgL_arg2063z00_1793;

																									BgL_arg2063z00_1793 =
																										SYMBOL_TO_STRING
																										(BgL_objz00_1174);
																									BgL_res3452z00_1794 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_1793);
																								}
																								BgL_arg3208z00_1228 =
																									BgL_res3452z00_1794;
																							}
																							{	/* Object/getter.scm 357 */
																								obj_t BgL_res3453z00_1797;

																								{	/* Object/getter.scm 357 */
																									obj_t BgL_arg2063z00_1796;

																									BgL_arg2063z00_1796 =
																										SYMBOL_TO_STRING
																										(BgL_tidz00_1172);
																									BgL_res3453z00_1797 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_1796);
																								}
																								BgL_arg3209z00_1229 =
																									BgL_res3453z00_1797;
																							}
																							{	/* Object/getter.scm 357 */
																								obj_t BgL_list3210z00_1230;

																								{	/* Object/getter.scm 357 */
																									obj_t BgL_arg3211z00_1231;

																									BgL_arg3211z00_1231 =
																										MAKE_PAIR
																										(BgL_arg3209z00_1229, BNIL);
																									BgL_list3210z00_1230 =
																										MAKE_PAIR
																										(BgL_arg3208z00_1228,
																										BgL_arg3211z00_1231);
																								}
																								BgL_arg3207z00_1227 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list3210z00_1230);
																						}}
																						BgL_arg3203z00_1223 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg3207z00_1227));
																					}
																					{	/* Object/getter.scm 356 */
																						obj_t BgL_list3205z00_1225;

																						{	/* Object/getter.scm 356 */
																							obj_t BgL_arg3206z00_1226;

																							BgL_arg3206z00_1226 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3205z00_1225 =
																								MAKE_PAIR(BgL_vzd2tidzd2_1175,
																								BgL_arg3206z00_1226);
																						}
																						BgL_arg3202z00_1222 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3203z00_1223,
																							BgL_list3205z00_1225);
																				}}
																				BgL_arg3197z00_1217 =
																					MAKE_PAIR
																					(BgL_slotzd2setz12zd2tidz12_1171,
																					BgL_arg3202z00_1222);
																			}
																			BgL_arg3198z00_1218 =
																				BGl_makezd2pragmazd2directzd2setz12zf2wideningz32zzobject_toolsz00
																				((BgL_typez00_bglt) (BgL_classz00_41),
																				(BgL_slotz00_bglt) (BgL_slotz00_42),
																				BgL_objz00_1174, BgL_vzd2idzd2_1173,
																				BgL_wideningz00_43);
																			{	/* Object/getter.scm 356 */
																				obj_t BgL_list3200z00_1220;

																				{	/* Object/getter.scm 356 */
																					obj_t BgL_arg3201z00_1221;

																					BgL_arg3201z00_1221 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3200z00_1220 =
																						MAKE_PAIR(BgL_arg3198z00_1218,
																						BgL_arg3201z00_1221);
																				}
																				BgL_arg3196z00_1216 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3197z00_1217,
																					BgL_list3200z00_1220);
																		}}
																		BgL_arg3191z00_1211 =
																			MAKE_PAIR(BgL_arg3195z00_1215,
																			BgL_arg3196z00_1216);
																	}
																	if (BGl_iszd2azf3z21zz__objectz00
																		(BgL_slotz00_42,
																			BGl_slotz00zzobject_slotsz00))
																		{
																			BgL_slotz00_bglt BgL_auxz00_2801;

																			BgL_auxz00_2801 =
																				(BgL_slotz00_bglt) (BgL_slotz00_42);
																			BgL_arg3192z00_1212 =
																				(((BgL_slotz00_bglt)
																					CREF(BgL_auxz00_2801))->BgL_srcz00);
																		}
																	else
																		{	/* Object/getter.scm 363 */
																			BgL_arg3192z00_1212 = BgL_slotz00_42;
																		}
																	{	/* Object/getter.scm 356 */
																		obj_t BgL_list3193z00_1213;

																		{	/* Object/getter.scm 356 */
																			obj_t BgL_arg3194z00_1214;

																			BgL_arg3194z00_1214 =
																				MAKE_PAIR(BgL_srczd2defzd2_44, BNIL);
																			BgL_list3193z00_1213 =
																				MAKE_PAIR(BgL_arg3192z00_1212,
																				BgL_arg3194z00_1214);
																		}
																		BgL_arg3189z00_1209 =
																			BGl_epairifyza2za2zztools_miscz00
																			(BgL_arg3191z00_1211,
																			BgL_list3193z00_1213);
																	}
																}
																{	/* Object/getter.scm 355 */
																	obj_t BgL_list3190z00_1210;

																	BgL_list3190z00_1210 =
																		MAKE_PAIR(BgL_arg3189z00_1209, BNIL);
																	return BgL_list3190z00_1210;
																}
															}
														}
													else
														{	/* Object/getter.scm 367 */
															obj_t BgL_slotzd2setz12zd2oidz12_1233;

															{	/* Object/getter.scm 367 */
																obj_t BgL_arg3213z00_1234;

																obj_t BgL_arg3214z00_1235;

																obj_t BgL_arg3215z00_1236;

																obj_t BgL_arg3216z00_1237;

																{
																	BgL_typez00_bglt BgL_auxz00_2808;

																	BgL_auxz00_2808 =
																		(BgL_typez00_bglt)
																		(BgL_classzd2ownerzd2_1176);
																	BgL_arg3213z00_1234 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_auxz00_2808))->BgL_idz00);
																}
																BgL_arg3214z00_1235 =
																	CNST_TABLE_REF(((long) 5));
																{
																	BgL_slotz00_bglt BgL_auxz00_2812;

																	BgL_auxz00_2812 =
																		(BgL_slotz00_bglt) (BgL_slotz00_42);
																	BgL_arg3215z00_1236 =
																		(((BgL_slotz00_bglt)
																			CREF(BgL_auxz00_2812))->BgL_idz00);
																}
																BgL_arg3216z00_1237 =
																	CNST_TABLE_REF(((long) 33));
																{	/* Object/getter.scm 367 */
																	obj_t BgL_list3217z00_1238;

																	{	/* Object/getter.scm 367 */
																		obj_t BgL_arg3218z00_1239;

																		{	/* Object/getter.scm 367 */
																			obj_t BgL_arg3219z00_1240;

																			{	/* Object/getter.scm 367 */
																				obj_t BgL_arg3220z00_1241;

																				BgL_arg3220z00_1241 =
																					MAKE_PAIR(BgL_arg3216z00_1237, BNIL);
																				BgL_arg3219z00_1240 =
																					MAKE_PAIR(BgL_arg3215z00_1236,
																					BgL_arg3220z00_1241);
																			}
																			BgL_arg3218z00_1239 =
																				MAKE_PAIR(BgL_arg3214z00_1235,
																				BgL_arg3219z00_1240);
																		}
																		BgL_list3217z00_1238 =
																			MAKE_PAIR(BgL_arg3213z00_1234,
																			BgL_arg3218z00_1239);
																	}
																	BgL_slotzd2setz12zd2oidz12_1233 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list3217z00_1238);
															}}
															BGl_addzd2macrozd2aliasz12z12zzexpand_epsz00
																(BgL_slotzd2setz12zd2idz12_1170,
																BgL_slotzd2setz12zd2oidz12_1233);
															return BNIL;
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



/* slot-indexed-set! */
	obj_t BGl_slotzd2indexedzd2setz12z12zzobject_getterz00(obj_t
		BgL_classzd2idzd2_45, obj_t BgL_classz00_46, obj_t BgL_slotz00_47,
		obj_t BgL_wideningz00_48, obj_t BgL_srczd2defzd2_49)
	{
		AN_OBJECT;
		{	/* Object/getter.scm 376 */
			{
				obj_t BgL_idz00_1363;

				obj_t BgL_classzd2idzd2_1364;

				obj_t BgL_sidz12z12_1365;

				obj_t BgL_stidz12z12_1366;

				obj_t BgL_vidz00_1367;

				obj_t BgL_vtidz00_1368;

				obj_t BgL_classzd2idzd2_1343;

				obj_t BgL_sidz12z12_1344;

				obj_t BgL_stidz12z12_1345;

				obj_t BgL_vidz00_1346;

				obj_t BgL_vtidz00_1347;

				{	/* Object/getter.scm 388 */
					obj_t BgL_slotzd2setz12zd2idz12_1266;

					{	/* Object/getter.scm 388 */
						obj_t BgL_arg3307z00_1336;

						obj_t BgL_arg3308z00_1337;

						obj_t BgL_arg3309z00_1338;

						BgL_arg3307z00_1336 = CNST_TABLE_REF(((long) 5));
						{
							BgL_slotz00_bglt BgL_auxz00_2823;

							BgL_auxz00_2823 = (BgL_slotz00_bglt) (BgL_slotz00_47);
							BgL_arg3308z00_1337 =
								(((BgL_slotz00_bglt) CREF(BgL_auxz00_2823))->BgL_idz00);
						}
						BgL_arg3309z00_1338 = CNST_TABLE_REF(((long) 33));
						{	/* Object/getter.scm 388 */
							obj_t BgL_list3310z00_1339;

							{	/* Object/getter.scm 388 */
								obj_t BgL_arg3311z00_1340;

								{	/* Object/getter.scm 388 */
									obj_t BgL_arg3312z00_1341;

									{	/* Object/getter.scm 388 */
										obj_t BgL_arg3313z00_1342;

										BgL_arg3313z00_1342 = MAKE_PAIR(BgL_arg3309z00_1338, BNIL);
										BgL_arg3312z00_1341 =
											MAKE_PAIR(BgL_arg3308z00_1337, BgL_arg3313z00_1342);
									}
									BgL_arg3311z00_1340 =
										MAKE_PAIR(BgL_arg3307z00_1336, BgL_arg3312z00_1341);
								}
								BgL_list3310z00_1339 =
									MAKE_PAIR(BgL_classzd2idzd2_45, BgL_arg3311z00_1340);
							}
							BgL_slotzd2setz12zd2idz12_1266 =
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list3310z00_1339);
					}}
					{	/* Object/getter.scm 388 */
						obj_t BgL_slotzd2setz12zd2tidz12_1267;

						{	/* Object/getter.scm 389 */
							obj_t BgL_arg3302z00_1331;

							{	/* Object/getter.scm 389 */
								obj_t BgL_arg3303z00_1332;

								obj_t BgL_arg3304z00_1333;

								{	/* Object/getter.scm 389 */
									obj_t BgL_res3455z00_1808;

									{	/* Object/getter.scm 389 */
										obj_t BgL_arg2063z00_1807;

										BgL_arg2063z00_1807 =
											SYMBOL_TO_STRING(BgL_slotzd2setz12zd2idz12_1266);
										BgL_res3455z00_1808 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1807);
									}
									BgL_arg3303z00_1332 = BgL_res3455z00_1808;
								}
								{	/* Object/getter.scm 389 */
									obj_t BgL_res3456z00_1811;

									{	/* Object/getter.scm 389 */
										obj_t BgL_symbolz00_1809;

										BgL_symbolz00_1809 = CNST_TABLE_REF(((long) 34));
										{	/* Object/getter.scm 389 */
											obj_t BgL_arg2063z00_1810;

											BgL_arg2063z00_1810 =
												SYMBOL_TO_STRING(BgL_symbolz00_1809);
											BgL_res3456z00_1811 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1810);
									}}
									BgL_arg3304z00_1333 = BgL_res3456z00_1811;
								}
								{	/* Object/getter.scm 389 */
									obj_t BgL_list3305z00_1334;

									{	/* Object/getter.scm 389 */
										obj_t BgL_arg3306z00_1335;

										BgL_arg3306z00_1335 = MAKE_PAIR(BgL_arg3304z00_1333, BNIL);
										BgL_list3305z00_1334 =
											MAKE_PAIR(BgL_arg3303z00_1332, BgL_arg3306z00_1335);
									}
									BgL_arg3302z00_1331 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list3305z00_1334);
							}}
							BgL_slotzd2setz12zd2tidz12_1267 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg3302z00_1331));
						}
						{	/* Object/getter.scm 389 */
							obj_t BgL_classzd2idzd2_1268;

							{
								BgL_typez00_bglt BgL_auxz00_2842;

								BgL_auxz00_2842 = (BgL_typez00_bglt) (BgL_classz00_46);
								BgL_classzd2idzd2_1268 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_2842))->BgL_idz00);
							}
							{	/* Object/getter.scm 390 */
								obj_t BgL_tidz00_1269;

								BgL_tidz00_1269 =
									BGl_makezd2typedzd2formalz00zzast_identz00
									(BgL_classzd2idzd2_1268);
								{	/* Object/getter.scm 391 */
									obj_t BgL_vidz00_1270;

									BgL_vidz00_1270 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												35)));
									{	/* Object/getter.scm 392 */
										obj_t BgL_vtidz00_1271;

										{	/* Object/getter.scm 393 */
											obj_t BgL_arg3300z00_1329;

											{	/* Object/getter.scm 393 */
												BgL_typez00_bglt BgL_obj1508z00_1815;

												{	/* Object/getter.scm 393 */
													BgL_slotz00_bglt BgL_obj2355z00_1814;

													BgL_obj2355z00_1814 =
														(BgL_slotz00_bglt) (BgL_slotz00_47);
													BgL_obj1508z00_1815 =
														(BgL_typez00_bglt) (
														(((BgL_slotz00_bglt) CREF(BgL_obj2355z00_1814))->
															BgL_typez00));
												}
												BgL_arg3300z00_1329 =
													(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1815))->
													BgL_idz00);
											}
											BgL_vtidz00_1271 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_vidz00_1270, BgL_arg3300z00_1329);
										}
										{	/* Object/getter.scm 393 */

											{	/* Object/getter.scm 395 */
												obj_t BgL_arg3243z00_1272;

												{	/* Object/getter.scm 395 */
													obj_t BgL_arg3244z00_1273;

													obj_t BgL_arg3245z00_1274;

													BgL_arg3244z00_1273 = CNST_TABLE_REF(((long) 8));
													{	/* Object/getter.scm 395 */
														obj_t BgL_arg3246z00_1275;

														{	/* Object/getter.scm 395 */
															obj_t BgL_arg3249z00_1278;

															{	/* Object/getter.scm 395 */
																obj_t BgL_arg3250z00_1279;

																{	/* Object/getter.scm 395 */
																	obj_t BgL_arg3253z00_1282;

																	obj_t BgL_arg3254z00_1283;

																	BgL_arg3253z00_1282 =
																		CNST_TABLE_REF(((long) 11));
																	{	/* Object/getter.scm 395 */
																		obj_t BgL_arg3255z00_1284;

																		{	/* Object/getter.scm 395 */
																			obj_t BgL_arg3258z00_1287;

																			obj_t BgL_arg3259z00_1288;

																			BgL_arg3258z00_1287 =
																				CNST_TABLE_REF(((long) 28));
																			{	/* Object/getter.scm 395 */
																				obj_t BgL_arg3260z00_1289;

																				BgL_arg3260z00_1289 =
																					MAKE_PAIR
																					(BgL_slotzd2setz12zd2idz12_1266,
																					BNIL);
																				{	/* Object/getter.scm 395 */
																					obj_t BgL_list3262z00_1291;

																					BgL_list3262z00_1291 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3259z00_1288 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3260z00_1289,
																						BgL_list3262z00_1291);
																			}}
																			BgL_arg3255z00_1284 =
																				MAKE_PAIR(BgL_arg3258z00_1287,
																				BgL_arg3259z00_1288);
																		}
																		{	/* Object/getter.scm 395 */
																			obj_t BgL_list3257z00_1286;

																			BgL_list3257z00_1286 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3254z00_1283 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3255z00_1284,
																				BgL_list3257z00_1286);
																	}}
																	BgL_arg3250z00_1279 =
																		MAKE_PAIR(BgL_arg3253z00_1282,
																		BgL_arg3254z00_1283);
																}
																{	/* Object/getter.scm 395 */
																	obj_t BgL_list3252z00_1281;

																	BgL_list3252z00_1281 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3249z00_1278 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3250z00_1279, BgL_list3252z00_1281);
															}}
															BgL_arg3246z00_1275 =
																MAKE_PAIR(BgL_slotzd2setz12zd2idz12_1266,
																BgL_arg3249z00_1278);
														}
														{	/* Object/getter.scm 395 */
															obj_t BgL_list3248z00_1277;

															BgL_list3248z00_1277 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg3245z00_1274 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3246z00_1275, BgL_list3248z00_1277);
													}}
													BgL_arg3243z00_1272 =
														MAKE_PAIR(BgL_arg3244z00_1273, BgL_arg3245z00_1274);
												}
												BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
													(BgL_arg3243z00_1272);
											}
											if (CBOOL(BGl_za2unsafezd2rangeza2zd2zzengine_paramz00))
												{	/* Object/getter.scm 397 */
													{	/* Object/getter.scm 407 */
														obj_t BgL_arg3263z00_1292;

														{	/* Object/getter.scm 407 */
															obj_t BgL_arg3264z00_1293;

															obj_t BgL_arg3265z00_1294;

															BgL_arg3264z00_1293 = CNST_TABLE_REF(((long) 6));
															{	/* Object/getter.scm 407 */
																obj_t BgL_arg3266z00_1295;

																{	/* Object/getter.scm 407 */
																	obj_t BgL_arg3269z00_1298;

																	obj_t BgL_arg3270z00_1299;

																	BgL_arg3269z00_1298 =
																		CNST_TABLE_REF(((long) 7));
																	{	/* Object/getter.scm 407 */
																		obj_t BgL_list3271z00_1300;

																		{	/* Object/getter.scm 407 */
																			obj_t BgL_arg3272z00_1301;

																			{	/* Object/getter.scm 407 */
																				obj_t BgL_arg3273z00_1302;

																				obj_t BgL_arg3274z00_1303;

																				BgL_arg3273z00_1302 =
																					CNST_TABLE_REF(((long) 29));
																				{	/* Object/getter.scm 407 */
																					obj_t BgL_arg3275z00_1304;

																					BgL_arg3275z00_1304 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3274z00_1303 =
																						MAKE_PAIR(BgL_vtidz00_1271,
																						BgL_arg3275z00_1304);
																				}
																				BgL_arg3272z00_1301 =
																					MAKE_PAIR(BgL_arg3273z00_1302,
																					BgL_arg3274z00_1303);
																			}
																			BgL_list3271z00_1300 =
																				MAKE_PAIR(BgL_tidz00_1269,
																				BgL_arg3272z00_1301);
																		}
																		BgL_arg3270z00_1299 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_slotzd2setz12zd2tidz12_1267,
																			BgL_list3271z00_1300);
																	}
																	BgL_arg3266z00_1295 =
																		MAKE_PAIR(BgL_arg3269z00_1298,
																		BgL_arg3270z00_1299);
																}
																{	/* Object/getter.scm 407 */
																	obj_t BgL_list3268z00_1297;

																	BgL_list3268z00_1297 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3265z00_1294 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3266z00_1295, BgL_list3268z00_1297);
															}}
															BgL_arg3263z00_1292 =
																MAKE_PAIR(BgL_arg3264z00_1293,
																BgL_arg3265z00_1294);
														}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg3263z00_1292);
													}
													{	/* Object/getter.scm 410 */
														obj_t BgL_arg3276z00_1305;

														{	/* Object/getter.scm 410 */
															obj_t BgL_arg3278z00_1307;

															obj_t BgL_arg3279z00_1308;

															BgL_classzd2idzd2_1343 = BgL_classzd2idzd2_1268;
															BgL_sidz12z12_1344 =
																BgL_slotzd2setz12zd2idz12_1266;
															BgL_stidz12z12_1345 =
																BgL_slotzd2setz12zd2tidz12_1267;
															BgL_vidz00_1346 = BgL_vidz00_1270;
															BgL_vtidz00_1347 = BgL_vtidz00_1271;
															{	/* Object/getter.scm 378 */
																obj_t BgL_arg3315z00_1349;

																obj_t BgL_arg3316z00_1350;

																BgL_arg3315z00_1349 =
																	CNST_TABLE_REF(((long) 13));
																{	/* Object/getter.scm 378 */
																	obj_t BgL_arg3317z00_1351;

																	obj_t BgL_arg3318z00_1352;

																	{	/* Object/getter.scm 378 */
																		obj_t BgL_arg3324z00_1356;

																		{	/* Object/getter.scm 378 */
																			obj_t BgL_arg3325z00_1357;

																			obj_t BgL_arg3326z00_1358;

																			BgL_arg3325z00_1357 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(CNST_TABLE_REF(((long) 17)),
																				BgL_classzd2idzd2_1343);
																			BgL_arg3326z00_1358 =
																				CNST_TABLE_REF(((long) 18));
																			{	/* Object/getter.scm 378 */
																				obj_t BgL_list3328z00_1360;

																				{	/* Object/getter.scm 378 */
																					obj_t BgL_arg3329z00_1361;

																					{	/* Object/getter.scm 378 */
																						obj_t BgL_arg3330z00_1362;

																						BgL_arg3330z00_1362 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3329z00_1361 =
																							MAKE_PAIR(BgL_vtidz00_1347,
																							BgL_arg3330z00_1362);
																					}
																					BgL_list3328z00_1360 =
																						MAKE_PAIR(BgL_arg3326z00_1358,
																						BgL_arg3329z00_1361);
																				}
																				BgL_arg3324z00_1356 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3325z00_1357,
																					BgL_list3328z00_1360);
																		}}
																		BgL_arg3317z00_1351 =
																			MAKE_PAIR(BgL_stidz12z12_1345,
																			BgL_arg3324z00_1356);
																	}
																	BgL_arg3318z00_1352 =
																		BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
																		((BgL_typez00_bglt) (BgL_classz00_46),
																		(BgL_slotz00_bglt) (BgL_slotz00_47),
																		CNST_TABLE_REF(((long) 17)),
																		BgL_vidz00_1346,
																		CNST_TABLE_REF(((long) 19)),
																		BgL_wideningz00_48);
																	{	/* Object/getter.scm 378 */
																		obj_t BgL_list3320z00_1354;

																		{	/* Object/getter.scm 378 */
																			obj_t BgL_arg3321z00_1355;

																			BgL_arg3321z00_1355 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list3320z00_1354 =
																				MAKE_PAIR(BgL_arg3318z00_1352,
																				BgL_arg3321z00_1355);
																		}
																		BgL_arg3316z00_1350 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3317z00_1351,
																			BgL_list3320z00_1354);
																}}
																BgL_arg3278z00_1307 =
																	MAKE_PAIR(BgL_arg3315z00_1349,
																	BgL_arg3316z00_1350);
															}
															{
																BgL_slotz00_bglt BgL_auxz00_2903;

																BgL_auxz00_2903 =
																	(BgL_slotz00_bglt) (BgL_slotz00_47);
																BgL_arg3279z00_1308 =
																	(((BgL_slotz00_bglt) CREF(BgL_auxz00_2903))->
																	BgL_srcz00);
															}
															{	/* Object/getter.scm 409 */
																obj_t BgL_list3280z00_1309;

																{	/* Object/getter.scm 409 */
																	obj_t BgL_arg3281z00_1310;

																	BgL_arg3281z00_1310 =
																		MAKE_PAIR(BgL_srczd2defzd2_49, BNIL);
																	BgL_list3280z00_1309 =
																		MAKE_PAIR(BgL_arg3279z00_1308,
																		BgL_arg3281z00_1310);
																}
																BgL_arg3276z00_1305 =
																	BGl_epairifyza2za2zztools_miscz00
																	(BgL_arg3278z00_1307, BgL_list3280z00_1309);
														}}
														{	/* Object/getter.scm 408 */
															obj_t BgL_list3277z00_1306;

															BgL_list3277z00_1306 =
																MAKE_PAIR(BgL_arg3276z00_1305, BNIL);
															return BgL_list3277z00_1306;
														}
													}
												}
											else
												{	/* Object/getter.scm 397 */
													{	/* Object/getter.scm 399 */
														obj_t BgL_arg3282z00_1311;

														{	/* Object/getter.scm 399 */
															obj_t BgL_arg3283z00_1312;

															obj_t BgL_arg3284z00_1313;

															BgL_arg3283z00_1312 = CNST_TABLE_REF(((long) 6));
															{	/* Object/getter.scm 399 */
																obj_t BgL_arg3285z00_1314;

																{	/* Object/getter.scm 399 */
																	obj_t BgL_arg3288z00_1317;

																	{	/* Object/getter.scm 399 */
																		obj_t BgL_list3289z00_1318;

																		{	/* Object/getter.scm 399 */
																			obj_t BgL_arg3290z00_1319;

																			obj_t BgL_arg3291z00_1320;

																			BgL_arg3290z00_1319 =
																				CNST_TABLE_REF(((long) 29));
																			{	/* Object/getter.scm 399 */
																				obj_t BgL_arg3292z00_1321;

																				BgL_arg3292z00_1321 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3291z00_1320 =
																					MAKE_PAIR(BgL_vtidz00_1271,
																					BgL_arg3292z00_1321);
																			}
																			BgL_list3289z00_1318 =
																				MAKE_PAIR(BgL_arg3290z00_1319,
																				BgL_arg3291z00_1320);
																		}
																		BgL_arg3288z00_1317 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_tidz00_1269, BgL_list3289z00_1318);
																	}
																	BgL_arg3285z00_1314 =
																		MAKE_PAIR(BgL_slotzd2setz12zd2tidz12_1267,
																		BgL_arg3288z00_1317);
																}
																{	/* Object/getter.scm 399 */
																	obj_t BgL_list3287z00_1316;

																	BgL_list3287z00_1316 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3284z00_1313 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3285z00_1314, BgL_list3287z00_1316);
															}}
															BgL_arg3282z00_1311 =
																MAKE_PAIR(BgL_arg3283z00_1312,
																BgL_arg3284z00_1313);
														}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg3282z00_1311);
													}
													{	/* Object/getter.scm 402 */
														obj_t BgL_arg3293z00_1322;

														{	/* Object/getter.scm 402 */
															obj_t BgL_arg3295z00_1324;

															obj_t BgL_arg3296z00_1325;

															{	/* Object/getter.scm 402 */
																obj_t BgL_arg3299z00_1328;

																{
																	BgL_slotz00_bglt BgL_auxz00_2921;

																	BgL_auxz00_2921 =
																		(BgL_slotz00_bglt) (BgL_slotz00_47);
																	BgL_arg3299z00_1328 =
																		(((BgL_slotz00_bglt)
																			CREF(BgL_auxz00_2921))->BgL_idz00);
																}
																BgL_idz00_1363 = BgL_arg3299z00_1328;
																BgL_classzd2idzd2_1364 = BgL_classzd2idzd2_1268;
																BgL_sidz12z12_1365 =
																	BgL_slotzd2setz12zd2idz12_1266;
																BgL_stidz12z12_1366 =
																	BgL_slotzd2setz12zd2tidz12_1267;
																BgL_vidz00_1367 = BgL_vidz00_1270;
																BgL_vtidz00_1368 = BgL_vtidz00_1271;
																{	/* Object/getter.scm 381 */
																	obj_t BgL_arg3332z00_1370;

																	obj_t BgL_arg3333z00_1371;

																	BgL_arg3332z00_1370 =
																		CNST_TABLE_REF(((long) 20));
																	{	/* Object/getter.scm 381 */
																		obj_t BgL_arg3334z00_1372;

																		obj_t BgL_arg3335z00_1373;

																		{	/* Object/getter.scm 381 */
																			obj_t BgL_arg3339z00_1377;

																			{	/* Object/getter.scm 381 */
																				obj_t BgL_arg3340z00_1378;

																				obj_t BgL_arg3341z00_1379;

																				BgL_arg3340z00_1378 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(CNST_TABLE_REF(((long) 17)),
																					BgL_classzd2idzd2_1364);
																				BgL_arg3341z00_1379 =
																					CNST_TABLE_REF(((long) 18));
																				{	/* Object/getter.scm 381 */
																					obj_t BgL_list3343z00_1381;

																					{	/* Object/getter.scm 381 */
																						obj_t BgL_arg3345z00_1382;

																						{	/* Object/getter.scm 381 */
																							obj_t BgL_arg3346z00_1383;

																							BgL_arg3346z00_1383 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3345z00_1382 =
																								MAKE_PAIR(BgL_vtidz00_1368,
																								BgL_arg3346z00_1383);
																						}
																						BgL_list3343z00_1381 =
																							MAKE_PAIR(BgL_arg3341z00_1379,
																							BgL_arg3345z00_1382);
																					}
																					BgL_arg3339z00_1377 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3340z00_1378,
																						BgL_list3343z00_1381);
																			}}
																			BgL_arg3334z00_1372 =
																				MAKE_PAIR(BgL_stidz12z12_1366,
																				BgL_arg3339z00_1377);
																		}
																		{	/* Object/getter.scm 382 */
																			obj_t BgL_arg3347z00_1384;

																			obj_t BgL_arg3348z00_1385;

																			BgL_arg3347z00_1384 =
																				CNST_TABLE_REF(((long) 21));
																			{	/* Object/getter.scm 382 */
																				obj_t BgL_arg3349z00_1386;

																				obj_t BgL_arg3350z00_1387;

																				obj_t BgL_arg3351z00_1388;

																				{	/* Object/getter.scm 382 */
																					obj_t BgL_arg3356z00_1393;

																					obj_t BgL_arg3357z00_1394;

																					BgL_arg3356z00_1393 =
																						CNST_TABLE_REF(((long) 22));
																					{	/* Object/getter.scm 382 */
																						obj_t BgL_list3358z00_1395;

																						{	/* Object/getter.scm 382 */
																							obj_t BgL_arg3360z00_1397;

																							BgL_arg3360z00_1397 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3358z00_1395 =
																								MAKE_PAIR(BINT(((long) 0)),
																								BgL_arg3360z00_1397);
																						}
																						BgL_arg3357z00_1394 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 19)),
																							BgL_list3358z00_1395);
																					}
																					BgL_arg3349z00_1386 =
																						MAKE_PAIR(BgL_arg3356z00_1393,
																						BgL_arg3357z00_1394);
																				}
																				{	/* Object/getter.scm 383 */
																					obj_t BgL_arg3361z00_1398;

																					obj_t BgL_arg3362z00_1399;

																					BgL_arg3361z00_1398 =
																						CNST_TABLE_REF(((long) 21));
																					{	/* Object/getter.scm 383 */
																						obj_t BgL_arg3363z00_1400;

																						obj_t BgL_arg3364z00_1401;

																						obj_t BgL_arg3365z00_1402;

																						{	/* Object/getter.scm 383 */
																							obj_t BgL_arg3371z00_1407;

																							obj_t BgL_arg3372z00_1408;

																							BgL_arg3371z00_1407 =
																								CNST_TABLE_REF(((long) 23));
																							{	/* Object/getter.scm 383 */
																								obj_t BgL_arg3373z00_1409;

																								obj_t BgL_arg3374z00_1410;

																								BgL_arg3373z00_1409 =
																									CNST_TABLE_REF(((long) 19));
																								{	/* Object/getter.scm 383 */
																									obj_t BgL_arg3378z00_1414;

																									obj_t BgL_arg3379z00_1415;

																									{	/* Object/getter.scm 383 */
																										obj_t BgL_list3380z00_1416;

																										{	/* Object/getter.scm 383 */
																											obj_t BgL_arg3381z00_1417;

																											{	/* Object/getter.scm 383 */
																												obj_t
																													BgL_arg3382z00_1418;
																												obj_t
																													BgL_arg3383z00_1419;
																												BgL_arg3382z00_1418 =
																													CNST_TABLE_REF(((long)
																														5));
																												{	/* Object/getter.scm 383 */
																													obj_t
																														BgL_arg3384z00_1420;
																													BgL_arg3384z00_1420 =
																														MAKE_PAIR
																														(CNST_TABLE_REF((
																																(long) 24)),
																														BNIL);
																													BgL_arg3383z00_1419 =
																														MAKE_PAIR
																														(BgL_idz00_1363,
																														BgL_arg3384z00_1420);
																												}
																												BgL_arg3381z00_1417 =
																													MAKE_PAIR
																													(BgL_arg3382z00_1418,
																													BgL_arg3383z00_1419);
																											}
																											BgL_list3380z00_1416 =
																												MAKE_PAIR
																												(BgL_classzd2idzd2_1364,
																												BgL_arg3381z00_1417);
																										}
																										BgL_arg3378z00_1414 =
																											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																											(BgL_list3380z00_1416);
																									}
																									{	/* Object/getter.scm 383 */
																										obj_t BgL_list3385z00_1421;

																										BgL_list3385z00_1421 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg3379z00_1415 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													17)),
																											BgL_list3385z00_1421);
																									}
																									BgL_arg3374z00_1410 =
																										MAKE_PAIR
																										(BgL_arg3378z00_1414,
																										BgL_arg3379z00_1415);
																								}
																								{	/* Object/getter.scm 383 */
																									obj_t BgL_list3376z00_1412;

																									{	/* Object/getter.scm 383 */
																										obj_t BgL_arg3377z00_1413;

																										BgL_arg3377z00_1413 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3376z00_1412 =
																											MAKE_PAIR
																											(BgL_arg3374z00_1410,
																											BgL_arg3377z00_1413);
																									}
																									BgL_arg3372z00_1408 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3373z00_1409,
																										BgL_list3376z00_1412);
																							}}
																							BgL_arg3363z00_1400 =
																								MAKE_PAIR(BgL_arg3371z00_1407,
																								BgL_arg3372z00_1408);
																						}
																						BgL_arg3364z00_1401 =
																							BGl_makezd2pragmazd2indexedzd2setz12zf2wideningz32zzobject_toolsz00
																							((BgL_typez00_bglt)
																							(BgL_classz00_46),
																							(BgL_slotz00_bglt)
																							(BgL_slotz00_47),
																							CNST_TABLE_REF(((long) 17)),
																							BgL_vidz00_1367,
																							CNST_TABLE_REF(((long) 19)),
																							BgL_wideningz00_48);
																						{	/* Object/getter.scm 385 */
																							obj_t BgL_arg3386z00_1422;

																							obj_t BgL_arg3387z00_1423;

																							BgL_arg3386z00_1422 =
																								CNST_TABLE_REF(((long) 25));
																							{	/* Object/getter.scm 385 */
																								obj_t BgL_arg3388z00_1424;

																								obj_t BgL_arg3390z00_1426;

																								{	/* Object/getter.scm 385 */
																									obj_t BgL_arg3395z00_1431;

																									obj_t BgL_arg3396z00_1432;

																									BgL_arg3395z00_1431 =
																										CNST_TABLE_REF(((long) 26));
																									{	/* Object/getter.scm 385 */
																										obj_t BgL_list3397z00_1433;

																										BgL_list3397z00_1433 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg3396z00_1432 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_sidz12z12_1365,
																											BgL_list3397z00_1433);
																									}
																									BgL_arg3388z00_1424 =
																										MAKE_PAIR
																										(BgL_arg3395z00_1431,
																										BgL_arg3396z00_1432);
																								}
																								BgL_arg3390z00_1426 =
																									CNST_TABLE_REF(((long) 19));
																								{	/* Object/getter.scm 385 */
																									obj_t BgL_list3392z00_1428;

																									{	/* Object/getter.scm 385 */
																										obj_t BgL_arg3393z00_1429;

																										{	/* Object/getter.scm 385 */
																											obj_t BgL_arg3394z00_1430;

																											BgL_arg3394z00_1430 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg3393z00_1429 =
																												MAKE_PAIR
																												(BgL_arg3390z00_1426,
																												BgL_arg3394z00_1430);
																										}
																										BgL_list3392z00_1428 =
																											MAKE_PAIR
																											(BGl_string3459z00zzobject_getterz00,
																											BgL_arg3393z00_1429);
																									}
																									BgL_arg3387z00_1423 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3388z00_1424,
																										BgL_list3392z00_1428);
																							}}
																							BgL_arg3365z00_1402 =
																								MAKE_PAIR(BgL_arg3386z00_1422,
																								BgL_arg3387z00_1423);
																						}
																						{	/* Object/getter.scm 383 */
																							obj_t BgL_list3367z00_1404;

																							{	/* Object/getter.scm 383 */
																								obj_t BgL_arg3368z00_1405;

																								{	/* Object/getter.scm 383 */
																									obj_t BgL_arg3369z00_1406;

																									BgL_arg3369z00_1406 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3368z00_1405 =
																										MAKE_PAIR
																										(BgL_arg3365z00_1402,
																										BgL_arg3369z00_1406);
																								}
																								BgL_list3367z00_1404 =
																									MAKE_PAIR(BgL_arg3364z00_1401,
																									BgL_arg3368z00_1405);
																							}
																							BgL_arg3362z00_1399 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3363z00_1400,
																								BgL_list3367z00_1404);
																					}}
																					BgL_arg3350z00_1387 =
																						MAKE_PAIR(BgL_arg3361z00_1398,
																						BgL_arg3362z00_1399);
																				}
																				{	/* Object/getter.scm 386 */
																					obj_t BgL_arg3398z00_1434;

																					obj_t BgL_arg3399z00_1435;

																					BgL_arg3398z00_1434 =
																						CNST_TABLE_REF(((long) 25));
																					{	/* Object/getter.scm 386 */
																						obj_t BgL_arg3400z00_1436;

																						obj_t BgL_arg3402z00_1438;

																						{	/* Object/getter.scm 386 */
																							obj_t BgL_arg3407z00_1443;

																							obj_t BgL_arg3408z00_1444;

																							BgL_arg3407z00_1443 =
																								CNST_TABLE_REF(((long) 26));
																							{	/* Object/getter.scm 386 */
																								obj_t BgL_list3409z00_1445;

																								BgL_list3409z00_1445 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3408z00_1444 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_sidz12z12_1365,
																									BgL_list3409z00_1445);
																							}
																							BgL_arg3400z00_1436 =
																								MAKE_PAIR(BgL_arg3407z00_1443,
																								BgL_arg3408z00_1444);
																						}
																						BgL_arg3402z00_1438 =
																							CNST_TABLE_REF(((long) 19));
																						{	/* Object/getter.scm 386 */
																							obj_t BgL_list3404z00_1440;

																							{	/* Object/getter.scm 386 */
																								obj_t BgL_arg3405z00_1441;

																								{	/* Object/getter.scm 386 */
																									obj_t BgL_arg3406z00_1442;

																									BgL_arg3406z00_1442 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3405z00_1441 =
																										MAKE_PAIR
																										(BgL_arg3402z00_1438,
																										BgL_arg3406z00_1442);
																								}
																								BgL_list3404z00_1440 =
																									MAKE_PAIR
																									(BGl_string3459z00zzobject_getterz00,
																									BgL_arg3405z00_1441);
																							}
																							BgL_arg3399z00_1435 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3400z00_1436,
																								BgL_list3404z00_1440);
																					}}
																					BgL_arg3351z00_1388 =
																						MAKE_PAIR(BgL_arg3398z00_1434,
																						BgL_arg3399z00_1435);
																				}
																				{	/* Object/getter.scm 382 */
																					obj_t BgL_list3353z00_1390;

																					{	/* Object/getter.scm 382 */
																						obj_t BgL_arg3354z00_1391;

																						{	/* Object/getter.scm 382 */
																							obj_t BgL_arg3355z00_1392;

																							BgL_arg3355z00_1392 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3354z00_1391 =
																								MAKE_PAIR(BgL_arg3351z00_1388,
																								BgL_arg3355z00_1392);
																						}
																						BgL_list3353z00_1390 =
																							MAKE_PAIR(BgL_arg3350z00_1387,
																							BgL_arg3354z00_1391);
																					}
																					BgL_arg3348z00_1385 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3349z00_1386,
																						BgL_list3353z00_1390);
																			}}
																			BgL_arg3335z00_1373 =
																				MAKE_PAIR(BgL_arg3347z00_1384,
																				BgL_arg3348z00_1385);
																		}
																		{	/* Object/getter.scm 381 */
																			obj_t BgL_list3337z00_1375;

																			{	/* Object/getter.scm 381 */
																				obj_t BgL_arg3338z00_1376;

																				BgL_arg3338z00_1376 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3337z00_1375 =
																					MAKE_PAIR(BgL_arg3335z00_1373,
																					BgL_arg3338z00_1376);
																			}
																			BgL_arg3333z00_1371 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3334z00_1372,
																				BgL_list3337z00_1375);
																	}}
																	BgL_arg3295z00_1324 =
																		MAKE_PAIR(BgL_arg3332z00_1370,
																		BgL_arg3333z00_1371);
															}}
															{
																BgL_slotz00_bglt BgL_auxz00_3000;

																BgL_auxz00_3000 =
																	(BgL_slotz00_bglt) (BgL_slotz00_47);
																BgL_arg3296z00_1325 =
																	(((BgL_slotz00_bglt) CREF(BgL_auxz00_3000))->
																	BgL_srcz00);
															}
															{	/* Object/getter.scm 401 */
																obj_t BgL_list3297z00_1326;

																{	/* Object/getter.scm 401 */
																	obj_t BgL_arg3298z00_1327;

																	BgL_arg3298z00_1327 =
																		MAKE_PAIR(BgL_srczd2defzd2_49, BNIL);
																	BgL_list3297z00_1326 =
																		MAKE_PAIR(BgL_arg3296z00_1325,
																		BgL_arg3298z00_1327);
																}
																BgL_arg3293z00_1322 =
																	BGl_epairifyza2za2zztools_miscz00
																	(BgL_arg3295z00_1324, BgL_list3297z00_1326);
														}}
														{	/* Object/getter.scm 400 */
															obj_t BgL_list3294z00_1323;

															BgL_list3294z00_1323 =
																MAKE_PAIR(BgL_arg3293z00_1322, BNIL);
															return BgL_list3294z00_1323;
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_getterz00()
	{
		AN_OBJECT;
		{	/* Object/getter.scm 18 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_getterz00()
	{
		AN_OBJECT;
		{	/* Object/getter.scm 18 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_getterz00()
	{
		AN_OBJECT;
		{	/* Object/getter.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3460z00zzobject_getterz00));
		}
	}

#ifdef __cplusplus
}
#endif
