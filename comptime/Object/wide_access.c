/*===========================================================================*/
/*   (Object/wide_access.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/wide_access.scm)*/
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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_setzd2widezd2classzd2slotsz12zc0zzobject_widezd2accesszd2(obj_t, obj_t,
		BgL_tclassz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_widezd2accesszd2 =
		BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_widezd2accesszd2();
	static obj_t
		BGl_correctzd2widezd2classzf3zf3zzobject_widezd2accesszd2
		(BgL_tclassz00_bglt, obj_t);
	extern obj_t
		BGl_importzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	extern obj_t BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_widezd2accesszd2();
	extern obj_t
		BGl_genzd2widezd2classzd2creatorszd2zzobject_creatorz00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_widezd2accesszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2
		(BgL_tclassz00_bglt);
	extern obj_t
		BGl_genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(BgL_typez00_bglt,
		obj_t);
	static obj_t
		BGl__heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl__genzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_widezd2accesszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_coercionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_predicatez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_creatorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_getterz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t);
	extern obj_t BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_tclassz00_bglt,
		obj_t, obj_t, int, obj_t);
	extern obj_t
		BGl_importzd2widezd2classzd2creatorszd2zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_tclassz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(BgL_tclassz00_bglt,
		obj_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t
		BGl__importzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_widezd2accesszd2();
	static obj_t BGl_methodzd2initzd2zzobject_widezd2accesszd2();
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2,
		BgL_bgl__importza7d2wideza7d2643z00,
		BGl__importzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2, 0L,
		BUNSPEC, 4);
	      DEFINE_STRING(BGl_string2625z00zzobject_widezd2accesszd2,
		BgL_bgl_string2625za700za7za7o2644za7, "super of `", 10);
	      DEFINE_STRING(BGl_string2626z00zzobject_widezd2accesszd2,
		BgL_bgl_string2626za700za7za7o2645za7, "' is not a class", 16);
	      DEFINE_STRING(BGl_string2627z00zzobject_widezd2accesszd2,
		BgL_bgl_string2627za700za7za7o2646za7, "' is a wide class", 17);
	      DEFINE_STRING(BGl_string2628z00zzobject_widezd2accesszd2,
		BgL_bgl_string2628za700za7za7o2647za7,
		"A class can't be `wide' and `final'", 35);
	      DEFINE_STRING(BGl_string2630z00zzobject_widezd2accesszd2,
		BgL_bgl_string2630za700za7za7o2648za7, "' is not a final class", 22);
	      DEFINE_STRING(BGl_string2629z00zzobject_widezd2accesszd2,
		BgL_bgl_string2629za700za7za7o2649za7, "super of wide class `", 21);
	      DEFINE_STRING(BGl_string2631z00zzobject_widezd2accesszd2,
		BgL_bgl_string2631za700za7za7o2650za7, "correct-wide-class?", 19);
	      DEFINE_STRING(BGl_string2632z00zzobject_widezd2accesszd2,
		BgL_bgl_string2632za700za7za7o2651za7,
		"Should not be able to see a plain class here", 44);
	      DEFINE_STRING(BGl_string2633z00zzobject_widezd2accesszd2,
		BgL_bgl_string2633za700za7za7o2652za7, "object_wide-access", 18);
	      DEFINE_STRING(BGl_string2634z00zzobject_widezd2accesszd2,
		BgL_bgl_string2634za700za7za7o2653za7, "(no def found) ", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2,
		BgL_bgl__genza7d2wideza7d2cl2654z00,
		BGl__genzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2widezd2classzd2accessorsz12zd2envz12zzobject_widezd2accesszd2,
		BgL_bgl__heapza7d2wideza7d2c2655z00,
		BGl__heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_widezd2accesszd2(long
		BgL_checksumz00_787, char *BgL_fromz00_788)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_widezd2accesszd2))
				{
					BGl_requirezd2initializa7ationz75zzobject_widezd2accesszd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_widezd2accesszd2();
					BGl_cnstzd2initzd2zzobject_widezd2accesszd2();
					BGl_importedzd2moduleszd2initz00zzobject_widezd2accesszd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_widezd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_wide-access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_wide-access");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_wide-access");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_wide-access");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_widezd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 21 */
			{	/* Object/wide_access.scm 21 */
				obj_t BgL_cportz00_779;

				BgL_cportz00_779 =
					bgl_open_input_string(BGl_string2634z00zzobject_widezd2accesszd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_780;

					BgL_iz00_780 = ((long) 0);
				BgL_loopz00_781:
					if ((BgL_iz00_780 == ((long) -1)))
						{	/* Object/wide_access.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/wide_access.scm 21 */
							{	/* Object/wide_access.scm 21 */
								obj_t BgL_arg2642z00_783;

								{	/* Object/wide_access.scm 21 */

									{	/* Object/wide_access.scm 21 */
										obj_t BgL_locationz00_785;

										BgL_locationz00_785 = BBOOL(((bool_t) 0));
										{	/* Object/wide_access.scm 21 */

											BgL_arg2642z00_783 =
												BGl_readz00zz__readerz00(BgL_cportz00_779,
												BgL_locationz00_785);
										}
									}
								}
								{	/* Object/wide_access.scm 21 */
									int BgL_auxz00_805;

									BgL_auxz00_805 = (int) (BgL_iz00_780);
									CNST_TABLE_SET(BgL_auxz00_805, BgL_arg2642z00_783);
							}}
							{	/* Object/wide_access.scm 21 */
								int BgL_auxz00_786;

								BgL_auxz00_786 = (int) ((BgL_iz00_780 - ((long) 1)));
								{
									long BgL_iz00_810;

									BgL_iz00_810 = (long) (BgL_auxz00_786);
									BgL_iz00_780 = BgL_iz00_810;
									goto BgL_loopz00_781;
								}
							}
						}
				}
			}
		}
	}



/* gen-wide-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t
		BgL_classzd2defzd2_1, BgL_tclassz00_bglt BgL_classz00_2,
		obj_t BgL_srczd2defzd2_3, obj_t BgL_importz00_4)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 51 */
			if (CBOOL(BGl_correctzd2widezd2classzf3zf3zzobject_widezd2accesszd2
					(BgL_classz00_2, BgL_srczd2defzd2_3)))
				{	/* Object/wide_access.scm 53 */
					BGl_setzd2widezd2classzd2slotsz12zc0zzobject_widezd2accesszd2
						(BgL_classzd2defzd2_1, BgL_srczd2defzd2_3, BgL_classz00_2);
					BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00((obj_t)
						(BgL_classz00_2));
					{	/* Object/wide_access.scm 62 */
						obj_t BgL_creatsz00_480;

						obj_t BgL_structsz00_481;

						obj_t BgL_predicatez00_482;

						BgL_creatsz00_480 =
							BGl_genzd2widezd2classzd2creatorszd2zzobject_creatorz00
							(BgL_classz00_2, BgL_srczd2defzd2_3, BgL_importz00_4);
						BgL_structsz00_481 =
							BGl_genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(
							(BgL_typez00_bglt) (BgL_classz00_2), BgL_srczd2defzd2_3);
						BgL_predicatez00_482 =
							BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_classz00_2,
							BgL_srczd2defzd2_3, BgL_importz00_4);
						{	/* Object/wide_access.scm 65 */
							obj_t BgL_fieldsz00_483;

							BgL_fieldsz00_483 =
								BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
								(BgL_classz00_2, (obj_t) (BgL_classz00_2),
								(obj_t) (BgL_classz00_2), BgL_srczd2defzd2_3);
							{	/* Object/wide_access.scm 67 */
								obj_t BgL_virtualsz00_484;

								{	/* Object/wide_access.scm 67 */
									int BgL_auxz00_825;

									BgL_auxz00_825 = (int) (((long) 1));
									BgL_virtualsz00_484 = BGL_MVALUES_VAL(BgL_auxz00_825);
								}
								{	/* Object/wide_access.scm 67 */
									obj_t BgL_superzd2fieldszd2_485;

									{	/* Object/wide_access.scm 68 */
										obj_t BgL_arg2459z00_493;

										{
											obj_t BgL_auxz00_828;

											{	/* Object/wide_access.scm 68 */
												BgL_objectz00_bglt BgL_auxz00_829;

												BgL_auxz00_829 = (BgL_objectz00_bglt) (BgL_classz00_2);
												BgL_auxz00_828 = BGL_OBJECT_WIDENING(BgL_auxz00_829);
											}
											BgL_arg2459z00_493 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_828))->
												BgL_itszd2superzd2);
										}
										BgL_superzd2fieldszd2_485 =
											BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
											(BgL_classz00_2, BgL_arg2459z00_493, BFALSE,
											BgL_srczd2defzd2_3);
									}
									{	/* Object/wide_access.scm 69 */
										obj_t BgL_superzd2virtualszd2_486;

										{	/* Object/wide_access.scm 69 */
											int BgL_auxz00_834;

											BgL_auxz00_834 = (int) (((long) 1));
											BgL_superzd2virtualszd2_486 =
												BGL_MVALUES_VAL(BgL_auxz00_834);
										}
										{	/* Object/wide_access.scm 69 */
											obj_t BgL_val0_2439z00_487;

											obj_t BgL_val1_2440z00_488;

											BgL_val0_2439z00_487 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_predicatez00_482,
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_structsz00_481,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_creatsz00_480,
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_superzd2fieldszd2_485,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_fieldsz00_483, BNIL)))));
											BgL_val1_2440z00_488 =
												bgl_append2(BgL_superzd2virtualszd2_486,
												BgL_virtualsz00_484);
											{	/* Object/wide_access.scm 69 */
												int BgL_auxz00_843;

												BgL_auxz00_843 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_843);
											}
											{	/* Object/wide_access.scm 69 */
												int BgL_auxz00_846;

												BgL_auxz00_846 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_846,
													BgL_val1_2440z00_488);
											}
											return BgL_val0_2439z00_487;
										}
									}
								}
							}
						}
					}
				}
			else
				{	/* Object/wide_access.scm 53 */
					{	/* Object/wide_access.scm 72 */
						int BgL_auxz00_849;

						BgL_auxz00_849 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_849);
					}
					{	/* Object/wide_access.scm 72 */
						int BgL_auxz00_852;

						BgL_auxz00_852 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_852, BNIL);
					}
					return BNIL;
				}
		}
	}



/* _gen-wide-class-accessors! */
	obj_t BGl__genzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t
		BgL_envz00_767, obj_t BgL_classzd2defzd2_768, obj_t BgL_classz00_769,
		obj_t BgL_srczd2defzd2_770, obj_t BgL_importz00_771)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 51 */
			return
				BGl_genzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2
				(BgL_classzd2defzd2_768, (BgL_tclassz00_bglt) (BgL_classz00_769),
				BgL_srczd2defzd2_770, BgL_importz00_771);
		}
	}



/* import-wide-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t
		BgL_classzd2defzd2_5, BgL_tclassz00_bglt BgL_classz00_6,
		obj_t BgL_srczd2defzd2_7, obj_t BgL_modulez00_8)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 77 */
			if (CBOOL(BGl_correctzd2widezd2classzf3zf3zzobject_widezd2accesszd2
					(BgL_classz00_6, BgL_srczd2defzd2_7)))
				{	/* Object/wide_access.scm 79 */
					BGl_setzd2widezd2classzd2slotsz12zc0zzobject_widezd2accesszd2
						(BgL_classzd2defzd2_5, BgL_srczd2defzd2_7, BgL_classz00_6);
					BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00((obj_t)
						(BgL_classz00_6));
					{	/* Object/wide_access.scm 88 */
						obj_t BgL_creatsz00_498;

						obj_t BgL_predicatez00_499;

						BgL_creatsz00_498 =
							BGl_importzd2widezd2classzd2creatorszd2zzobject_creatorz00
							(BgL_classz00_6, BgL_srczd2defzd2_7, BgL_modulez00_8);
						BgL_predicatez00_499 =
							BGl_importzd2classzd2predz12z12zzobject_predicatez00
							(BgL_classz00_6, BgL_srczd2defzd2_7, BgL_modulez00_8);
						{	/* Object/wide_access.scm 90 */
							obj_t BgL_fieldsz00_500;

							BgL_fieldsz00_500 =
								BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
								(BgL_classz00_6, (obj_t) (BgL_classz00_6),
								(obj_t) (BgL_classz00_6), BgL_srczd2defzd2_7);
							{	/* Object/wide_access.scm 92 */
								obj_t BgL_virtualsz00_501;

								{	/* Object/wide_access.scm 92 */
									int BgL_auxz00_868;

									BgL_auxz00_868 = (int) (((long) 1));
									BgL_virtualsz00_501 = BGL_MVALUES_VAL(BgL_auxz00_868);
								}
								{	/* Object/wide_access.scm 92 */
									obj_t BgL_superzd2fieldszd2_502;

									{	/* Object/wide_access.scm 93 */
										obj_t BgL_arg2472z00_509;

										{
											obj_t BgL_auxz00_871;

											{	/* Object/wide_access.scm 93 */
												BgL_objectz00_bglt BgL_auxz00_872;

												BgL_auxz00_872 = (BgL_objectz00_bglt) (BgL_classz00_6);
												BgL_auxz00_871 = BGL_OBJECT_WIDENING(BgL_auxz00_872);
											}
											BgL_arg2472z00_509 =
												(((BgL_tclassz00_bglt) CREF(BgL_auxz00_871))->
												BgL_itszd2superzd2);
										}
										BgL_superzd2fieldszd2_502 =
											BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
											(BgL_classz00_6, BgL_arg2472z00_509, BFALSE,
											BgL_srczd2defzd2_7);
									}
									{	/* Object/wide_access.scm 94 */
										obj_t BgL_superzd2virtualszd2_503;

										{	/* Object/wide_access.scm 94 */
											int BgL_auxz00_877;

											BgL_auxz00_877 = (int) (((long) 1));
											BgL_superzd2virtualszd2_503 =
												BGL_MVALUES_VAL(BgL_auxz00_877);
										}
										{	/* Object/wide_access.scm 94 */
											obj_t BgL_val0_2443z00_504;

											obj_t BgL_val1_2444z00_505;

											BgL_val0_2443z00_504 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_predicatez00_499,
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_creatsz00_498,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_superzd2fieldszd2_502,
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_fieldsz00_500, BNIL))));
											BgL_val1_2444z00_505 =
												bgl_append2(BgL_superzd2virtualszd2_503,
												BgL_virtualsz00_501);
											{	/* Object/wide_access.scm 94 */
												int BgL_auxz00_885;

												BgL_auxz00_885 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_885);
											}
											{	/* Object/wide_access.scm 94 */
												int BgL_auxz00_888;

												BgL_auxz00_888 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_888,
													BgL_val1_2444z00_505);
											}
											return BgL_val0_2443z00_504;
										}
									}
								}
							}
						}
					}
				}
			else
				{	/* Object/wide_access.scm 79 */
					{	/* Object/wide_access.scm 96 */
						int BgL_auxz00_891;

						BgL_auxz00_891 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_891);
					}
					{	/* Object/wide_access.scm 96 */
						int BgL_auxz00_894;

						BgL_auxz00_894 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_894, BNIL);
					}
					return BNIL;
				}
		}
	}



/* _import-wide-class-accessors! */
	obj_t
		BGl__importzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t
		BgL_envz00_772, obj_t BgL_classzd2defzd2_773, obj_t BgL_classz00_774,
		obj_t BgL_srczd2defzd2_775, obj_t BgL_modulez00_776)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 77 */
			return
				BGl_importzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2
				(BgL_classzd2defzd2_773, (BgL_tclassz00_bglt) (BgL_classz00_774),
				BgL_srczd2defzd2_775, BgL_modulez00_776);
		}
	}



/* heap-wide-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2
		(BgL_tclassz00_bglt BgL_classz00_9)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 101 */
			{	/* Object/wide_access.scm 102 */
				obj_t BgL_srczd2defzd2_512;

				BgL_srczd2defzd2_512 = CNST_TABLE_REF(((long) 0));
				{	/* Object/wide_access.scm 107 */
					obj_t BgL_fieldsz00_514;

					BgL_fieldsz00_514 =
						BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
						(BgL_classz00_9, (obj_t) (BgL_classz00_9), (obj_t) (BgL_classz00_9),
						BgL_srczd2defzd2_512);
					{	/* Object/wide_access.scm 109 */
						obj_t BgL_virtualsz00_515;

						{	/* Object/wide_access.scm 109 */
							int BgL_auxz00_903;

							BgL_auxz00_903 = (int) (((long) 1));
							BgL_virtualsz00_515 = BGL_MVALUES_VAL(BgL_auxz00_903);
						}
						{	/* Object/wide_access.scm 109 */
							obj_t BgL_superzd2fieldszd2_516;

							{	/* Object/wide_access.scm 110 */
								obj_t BgL_arg2476z00_520;

								{
									obj_t BgL_auxz00_906;

									{	/* Object/wide_access.scm 110 */
										BgL_objectz00_bglt BgL_auxz00_907;

										BgL_auxz00_907 = (BgL_objectz00_bglt) (BgL_classz00_9);
										BgL_auxz00_906 = BGL_OBJECT_WIDENING(BgL_auxz00_907);
									}
									BgL_arg2476z00_520 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_906))->
										BgL_itszd2superzd2);
								}
								BgL_superzd2fieldszd2_516 =
									BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
									(BgL_classz00_9, BgL_arg2476z00_520, BFALSE,
									BgL_srczd2defzd2_512);
							}
							{	/* Object/wide_access.scm 111 */
								obj_t BgL_superzd2virtualszd2_517;

								{	/* Object/wide_access.scm 111 */
									int BgL_auxz00_912;

									BgL_auxz00_912 = (int) (((long) 1));
									BgL_superzd2virtualszd2_517 = BGL_MVALUES_VAL(BgL_auxz00_912);
								}
								{	/* Object/wide_access.scm 111 */
									obj_t BgL_val0_2447z00_518;

									obj_t BgL_val1_2448z00_519;

									BgL_val0_2447z00_518 =
										bgl_append2(BgL_superzd2fieldszd2_516, BgL_fieldsz00_514);
									BgL_val1_2448z00_519 =
										bgl_append2(BgL_superzd2virtualszd2_517,
										BgL_virtualsz00_515);
									{	/* Object/wide_access.scm 111 */
										int BgL_auxz00_917;

										BgL_auxz00_917 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_917);
									}
									{	/* Object/wide_access.scm 111 */
										int BgL_auxz00_920;

										BgL_auxz00_920 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_920, BgL_val1_2448z00_519);
									}
									return BgL_val0_2447z00_518;
								}
							}
						}
					}
				}
			}
		}
	}



/* _heap-wide-class-accessors! */
	obj_t
		BGl__heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(obj_t
		BgL_envz00_777, obj_t BgL_classz00_778)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 101 */
			return
				BGl_heapzd2widezd2classzd2accessorsz12zc0zzobject_widezd2accesszd2(
				(BgL_tclassz00_bglt) (BgL_classz00_778));
		}
	}



/* set-wide-class-slots! */
	obj_t BGl_setzd2widezd2classzd2slotsz12zc0zzobject_widezd2accesszd2(obj_t
		BgL_classzd2defzd2_10, obj_t BgL_srczd2defzd2_11,
		BgL_tclassz00_bglt BgL_classz00_12)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 120 */
			{	/* Object/wide_access.scm 121 */
				obj_t BgL_superz00_521;

				{	/* Object/wide_access.scm 121 */
					obj_t BgL_superz00_527;

					{
						obj_t BgL_auxz00_925;

						{	/* Object/wide_access.scm 121 */
							BgL_objectz00_bglt BgL_auxz00_926;

							BgL_auxz00_926 = (BgL_objectz00_bglt) (BgL_classz00_12);
							BgL_auxz00_925 = BGL_OBJECT_WIDENING(BgL_auxz00_926);
						}
						BgL_superz00_527 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_925))->BgL_itszd2superzd2);
					}
					if ((BgL_superz00_527 == (obj_t) (BgL_classz00_12)))
						{	/* Object/wide_access.scm 122 */
							BgL_superz00_521 = BFALSE;
						}
					else
						{	/* Object/wide_access.scm 122 */
							BgL_superz00_521 = BgL_superz00_527;
						}
				}
				{	/* Object/wide_access.scm 121 */
					obj_t BgL_superzd2vnumzd2_522;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_521,
							BGl_tclassz00zzobject_classz00))
						{	/* Object/wide_access.scm 126 */
							BgL_tclassz00_bglt BgL_obj2153z00_742;

							BgL_obj2153z00_742 = (BgL_tclassz00_bglt) (BgL_superz00_521);
							{
								obj_t BgL_auxz00_936;

								{	/* Object/wide_access.scm 126 */
									BgL_objectz00_bglt BgL_auxz00_937;

									BgL_auxz00_937 = (BgL_objectz00_bglt) (BgL_obj2153z00_742);
									BgL_auxz00_936 = BGL_OBJECT_WIDENING(BgL_auxz00_937);
								}
								BgL_superzd2vnumzd2_522 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_936))->
									BgL_virtualzd2slotszd2numberz00);
							}
						}
					else
						{	/* Object/wide_access.scm 125 */
							BgL_superzd2vnumzd2_522 = BINT(((long) 0));
						}
					{	/* Object/wide_access.scm 125 */
						obj_t BgL_slotsz00_523;

						BgL_slotsz00_523 = CDR(CDR(BgL_classzd2defzd2_10));
						{	/* Object/wide_access.scm 128 */

							{	/* Object/wide_access.scm 132 */
								obj_t BgL_cslotsz00_524;

								BgL_cslotsz00_524 =
									BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_classz00_12,
									BgL_slotsz00_523, BFALSE, CINT(BgL_superzd2vnumzd2_522),
									BgL_srczd2defzd2_11);
								{	/* Object/wide_access.scm 132 */
									obj_t BgL_localzd2vnumzd2_525;

									BgL_localzd2vnumzd2_525 =
										BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
										(BgL_classz00_12, BgL_cslotsz00_524);
									{	/* Object/wide_access.scm 133 */

										{
											obj_t BgL_auxz00_947;

											{	/* Object/wide_access.scm 135 */
												BgL_objectz00_bglt BgL_auxz00_948;

												BgL_auxz00_948 = (BgL_objectz00_bglt) (BgL_classz00_12);
												BgL_auxz00_947 = BGL_OBJECT_WIDENING(BgL_auxz00_948);
											}
											((((BgL_tclassz00_bglt) CREF(BgL_auxz00_947))->
													BgL_virtualzd2slotszd2numberz00) =
												((obj_t) BgL_localzd2vnumzd2_525), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_952;

											{	/* Object/wide_access.scm 137 */
												BgL_objectz00_bglt BgL_auxz00_953;

												BgL_auxz00_953 = (BgL_objectz00_bglt) (BgL_classz00_12);
												BgL_auxz00_952 = BGL_OBJECT_WIDENING(BgL_auxz00_953);
											}
											return
												((((BgL_tclassz00_bglt) CREF(BgL_auxz00_952))->
													BgL_slotsz00) = ((obj_t) BgL_cslotsz00_524), BUNSPEC);
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



/* correct-wide-class? */
	obj_t
		BGl_correctzd2widezd2classzf3zf3zzobject_widezd2accesszd2(BgL_tclassz00_bglt
		BgL_classz00_13, obj_t BgL_srczd2defzd2_14)
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 146 */
			{	/* Object/wide_access.scm 147 */
				obj_t BgL_superz00_529;

				{
					obj_t BgL_auxz00_957;

					{	/* Object/wide_access.scm 147 */
						BgL_objectz00_bglt BgL_auxz00_958;

						BgL_auxz00_958 = (BgL_objectz00_bglt) (BgL_classz00_13);
						BgL_auxz00_957 = BGL_OBJECT_WIDENING(BgL_auxz00_958);
					}
					BgL_superz00_529 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_957))->BgL_itszd2superzd2);
				}
				{	/* Object/wide_access.scm 147 */
					obj_t BgL_classzd2idzd2_530;

					{
						BgL_typez00_bglt BgL_auxz00_962;

						BgL_auxz00_962 = (BgL_typez00_bglt) (BgL_classz00_13);
						BgL_classzd2idzd2_530 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_962))->BgL_idz00);
					}
					{	/* Object/wide_access.scm 148 */

						{	/* Object/wide_access.scm 152 */
							bool_t BgL_testz00_965;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_529,
									BGl_typez00zztype_typez00))
								{	/* Object/wide_access.scm 152 */
									if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_529,
											BGl_tclassz00zzobject_classz00))
										{	/* Object/wide_access.scm 152 */
											BgL_testz00_965 = ((bool_t) 0);
										}
									else
										{	/* Object/wide_access.scm 152 */
											BgL_testz00_965 = ((bool_t) 1);
										}
								}
							else
								{	/* Object/wide_access.scm 152 */
									BgL_testz00_965 = ((bool_t) 0);
								}
							if (BgL_testz00_965)
								{	/* Object/wide_access.scm 153 */
									obj_t BgL_arg2491z00_532;

									obj_t BgL_arg2492z00_533;

									{
										BgL_typez00_bglt BgL_auxz00_970;

										BgL_auxz00_970 = (BgL_typez00_bglt) (BgL_superz00_529);
										BgL_arg2491z00_532 =
											(((BgL_typez00_bglt) CREF(BgL_auxz00_970))->BgL_idz00);
									}
									{	/* Object/wide_access.scm 154 */
										obj_t BgL_arg2504z00_536;

										{	/* Object/wide_access.scm 155 */
											obj_t BgL_res2622z00_758;

											{	/* Object/wide_access.scm 155 */
												obj_t BgL_arg2063z00_757;

												BgL_arg2063z00_757 =
													SYMBOL_TO_STRING(BgL_classzd2idzd2_530);
												BgL_res2622z00_758 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_757);
											}
											BgL_arg2504z00_536 = BgL_res2622z00_758;
										}
										BgL_arg2492z00_533 =
											string_append_3
											(BGl_string2625z00zzobject_widezd2accesszd2,
											BgL_arg2504z00_536,
											BGl_string2626z00zzobject_widezd2accesszd2);
									}
									{	/* Object/wide_access.scm 153 */
										obj_t BgL_list2493z00_534;

										BgL_list2493z00_534 =
											MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
										return
											BGl_userzd2errorzd2zztools_errorz00(BgL_arg2491z00_532,
											BgL_arg2492z00_533, BgL_srczd2defzd2_14,
											BgL_list2493z00_534);
									}
								}
							else
								{	/* Object/wide_access.scm 152 */
									if (BGl_widezd2classzf3z21zzobject_classz00(
											(obj_t) (BgL_classz00_13)))
										{	/* Object/wide_access.scm 159 */
											if (BGl_widezd2classzf3z21zzobject_classz00
												(BgL_superz00_529))
												{	/* Object/wide_access.scm 167 */
													obj_t BgL_arg2523z00_540;

													obj_t BgL_arg2529z00_541;

													{
														BgL_typez00_bglt BgL_auxz00_983;

														BgL_auxz00_983 =
															(BgL_typez00_bglt) (BgL_superz00_529);
														BgL_arg2523z00_540 =
															(((BgL_typez00_bglt) CREF(BgL_auxz00_983))->
															BgL_idz00);
													}
													{	/* Object/wide_access.scm 168 */
														obj_t BgL_arg2536z00_544;

														{	/* Object/wide_access.scm 169 */
															obj_t BgL_res2623z00_762;

															{	/* Object/wide_access.scm 169 */
																obj_t BgL_arg2063z00_761;

																BgL_arg2063z00_761 =
																	SYMBOL_TO_STRING(BgL_classzd2idzd2_530);
																BgL_res2623z00_762 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_761);
															}
															BgL_arg2536z00_544 = BgL_res2623z00_762;
														}
														BgL_arg2529z00_541 =
															string_append_3
															(BGl_string2625z00zzobject_widezd2accesszd2,
															BgL_arg2536z00_544,
															BGl_string2627z00zzobject_widezd2accesszd2);
													}
													{	/* Object/wide_access.scm 167 */
														obj_t BgL_list2530z00_542;

														BgL_list2530z00_542 =
															MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BgL_arg2523z00_540, BgL_arg2529z00_541,
															BgL_srczd2defzd2_14, BgL_list2530z00_542);
													}
												}
											else
												{	/* Object/wide_access.scm 165 */
													if (BGl_finalzd2classzf3z21zzobject_classz00
														(BgL_superz00_529))
														{	/* Object/wide_access.scm 173 */
															if (BGl_finalzd2classzf3z21zzobject_classz00(
																	(obj_t) (BgL_classz00_13)))
																{	/* Object/wide_access.scm 183 */
																	obj_t BgL_list2547z00_548;

																	BgL_list2547z00_548 =
																		MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BgL_classzd2idzd2_530,
																		BGl_string2628z00zzobject_widezd2accesszd2,
																		BgL_srczd2defzd2_14, BgL_list2547z00_548);
																}
															else
																{	/* Object/wide_access.scm 181 */
																	return BTRUE;
																}
														}
													else
														{	/* Object/wide_access.scm 175 */
															obj_t BgL_arg2550z00_549;

															obj_t BgL_arg2554z00_550;

															{
																BgL_typez00_bglt BgL_auxz00_998;

																BgL_auxz00_998 =
																	(BgL_typez00_bglt) (BgL_superz00_529);
																BgL_arg2550z00_549 =
																	(((BgL_typez00_bglt) CREF(BgL_auxz00_998))->
																	BgL_idz00);
															}
															{	/* Object/wide_access.scm 176 */
																obj_t BgL_arg2557z00_553;

																{	/* Object/wide_access.scm 177 */
																	obj_t BgL_res2624z00_766;

																	{	/* Object/wide_access.scm 177 */
																		obj_t BgL_arg2063z00_765;

																		BgL_arg2063z00_765 =
																			SYMBOL_TO_STRING(BgL_classzd2idzd2_530);
																		BgL_res2624z00_766 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_765);
																	}
																	BgL_arg2557z00_553 = BgL_res2624z00_766;
																}
																BgL_arg2554z00_550 =
																	string_append_3
																	(BGl_string2629z00zzobject_widezd2accesszd2,
																	BgL_arg2557z00_553,
																	BGl_string2630z00zzobject_widezd2accesszd2);
															}
															{	/* Object/wide_access.scm 175 */
																obj_t BgL_list2555z00_551;

																BgL_list2555z00_551 =
																	MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
																return
																	BGl_userzd2errorzd2zztools_errorz00
																	(BgL_arg2550z00_549, BgL_arg2554z00_550,
																	BgL_srczd2defzd2_14, BgL_list2555z00_551);
															}
														}
												}
										}
									else
										{	/* Object/wide_access.scm 159 */
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string2631z00zzobject_widezd2accesszd2,
												BGl_string2632z00zzobject_widezd2accesszd2,
												BgL_srczd2defzd2_14);
										}
								}
						}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_widezd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_widezd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_widezd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/wide_access.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_getterz00(((long) 462520640),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_creatorz00(((long) 371328867),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_predicatez00(((long) 444447869),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 173226634),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2633z00zzobject_widezd2accesszd2));
		}
	}

#ifdef __cplusplus
}
#endif
