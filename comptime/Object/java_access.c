/*===========================================================================*/
/*   (Object/java_access.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/java_access.scm)*/
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

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t
		BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzobject_javazd2accesszd2();
	static bool_t
		BGl_correctzd2javazd2classzf3zf3zzobject_javazd2accesszd2
		(BgL_jclassz00_bglt, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_javazd2accesszd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_javazd2accesszd2();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(long, char *);
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
	extern obj_t
		BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(obj_t);
	extern obj_t
		BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(BgL_jclassz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t,
		obj_t, BgL_jclassz00_bglt, bool_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t
		BGl__importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_javazd2accesszd2();
	static obj_t BGl_methodzd2initzd2zzobject_javazd2accesszd2();
	static obj_t __cnst[1];


	   
		 
		DEFINE_STRING(BGl_string2560z00zzobject_javazd2accesszd2,
		BgL_bgl_string2560za700za7za7o2566za7, "super of `", 10);
	      DEFINE_STRING(BGl_string2561z00zzobject_javazd2accesszd2,
		BgL_bgl_string2561za700za7za7o2567za7, "' is not a class", 16);
	      DEFINE_STRING(BGl_string2562z00zzobject_javazd2accesszd2,
		BgL_bgl_string2562za700za7za7o2568za7, "object_java-access", 18);
	      DEFINE_STRING(BGl_string2563z00zzobject_javazd2accesszd2,
		BgL_bgl_string2563za700za7za7o2569za7, "foreign ", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2javazd2classzd2accessorsz12zd2envz12zzobject_javazd2accesszd2,
		BgL_bgl__importza7d2javaza7d2570z00,
		BGl__importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2, 0L,
		BUNSPEC, 6);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(long
		BgL_checksumz00_701, char *BgL_fromz00_702)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2))
				{
					BGl_requirezd2initializa7ationz75zzobject_javazd2accesszd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_javazd2accesszd2();
					BGl_cnstzd2initzd2zzobject_javazd2accesszd2();
					BGl_importedzd2moduleszd2initz00zzobject_javazd2accesszd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_javazd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_java-access");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_java-access");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_javazd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 21 */
			{	/* Object/java_access.scm 21 */
				obj_t BgL_cportz00_693;

				BgL_cportz00_693 =
					bgl_open_input_string(BGl_string2563z00zzobject_javazd2accesszd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_694;

					BgL_iz00_694 = ((long) 0);
				BgL_loopz00_695:
					if ((BgL_iz00_694 == ((long) -1)))
						{	/* Object/java_access.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/java_access.scm 21 */
							{	/* Object/java_access.scm 21 */
								obj_t BgL_arg2565z00_697;

								{	/* Object/java_access.scm 21 */

									{	/* Object/java_access.scm 21 */
										obj_t BgL_locationz00_699;

										BgL_locationz00_699 = BBOOL(((bool_t) 0));
										{	/* Object/java_access.scm 21 */

											BgL_arg2565z00_697 =
												BGl_readz00zz__readerz00(BgL_cportz00_693,
												BgL_locationz00_699);
										}
									}
								}
								{	/* Object/java_access.scm 21 */
									int BgL_auxz00_719;

									BgL_auxz00_719 = (int) (BgL_iz00_694);
									CNST_TABLE_SET(BgL_auxz00_719, BgL_arg2565z00_697);
							}}
							{	/* Object/java_access.scm 21 */
								int BgL_auxz00_700;

								BgL_auxz00_700 = (int) ((BgL_iz00_694 - ((long) 1)));
								{
									long BgL_iz00_724;

									BgL_iz00_724 = (long) (BgL_auxz00_700);
									BgL_iz00_694 = BgL_iz00_724;
									goto BgL_loopz00_695;
								}
							}
						}
				}
			}
		}
	}



/* import-java-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t
		BgL_pslotsz00_1, obj_t BgL_constrsz00_2, BgL_jclassz00_bglt BgL_classz00_3,
		bool_t BgL_abstractzf3zf3_4, obj_t BgL_modulez00_5, obj_t BgL_srcz00_6)
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 50 */
			if (BGl_correctzd2javazd2classzf3zf3zzobject_javazd2accesszd2
				(BgL_classz00_3, BgL_srcz00_6))
				{	/* Object/java_access.scm 52 */
					{	/* Object/java_access.scm 56 */
						obj_t BgL_cslotsz00_666;

						{	/* Object/java_access.scm 56 */
							obj_t BgL_arg2476z00_667;

							{
								obj_t BgL_auxz00_728;

								{	/* Object/java_access.scm 56 */
									BgL_objectz00_bglt BgL_auxz00_729;

									BgL_auxz00_729 = (BgL_objectz00_bglt) (BgL_classz00_3);
									BgL_auxz00_728 = BGL_OBJECT_WIDENING(BgL_auxz00_729);
								}
								BgL_arg2476z00_667 =
									(((BgL_jclassz00_bglt) CREF(BgL_auxz00_728))->
									BgL_itszd2superzd2);
							}
							BgL_cslotsz00_666 =
								BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00
								(BgL_classz00_3, BgL_pslotsz00_1, BgL_arg2476z00_667,
								BgL_srcz00_6);
						}
						{
							obj_t BgL_auxz00_734;

							{	/* Object/java_access.scm 56 */
								BgL_objectz00_bglt BgL_auxz00_735;

								BgL_auxz00_735 = (BgL_objectz00_bglt) (BgL_classz00_3);
								BgL_auxz00_734 = BGL_OBJECT_WIDENING(BgL_auxz00_735);
							}
							((((BgL_jclassz00_bglt) CREF(BgL_auxz00_734))->BgL_slotsz00) =
								((obj_t) BgL_cslotsz00_666), BUNSPEC);
						}
					}
					BGl_genzd2javazd2classzd2coercionsz12zc0zzobject_coercionz00(
						(obj_t) (BgL_classz00_3));
					{	/* Object/java_access.scm 61 */
						obj_t BgL_fieldsz00_478;

						{	/* Object/java_access.scm 61 */
							obj_t BgL_arg2453z00_488;

							{
								obj_t BgL_auxz00_741;

								{	/* Object/java_access.scm 61 */
									BgL_objectz00_bglt BgL_auxz00_742;

									BgL_auxz00_742 = (BgL_objectz00_bglt) (BgL_classz00_3);
									BgL_auxz00_741 = BGL_OBJECT_WIDENING(BgL_auxz00_742);
								}
								BgL_arg2453z00_488 =
									(((BgL_jclassz00_bglt) CREF(BgL_auxz00_741))->BgL_slotsz00);
							}
							BgL_fieldsz00_478 =
								BGl_genzd2javazd2classzd2slotszd2accessz12z12zzobject_getterz00
								(BgL_classz00_3, BgL_arg2453z00_488, BgL_srcz00_6);
						}
						{	/* Object/java_access.scm 62 */
							bool_t BgL_testz00_747;

							{	/* Object/java_access.scm 62 */
								obj_t BgL_auxz00_748;

								{
									BgL_typez00_bglt BgL_auxz00_749;

									BgL_auxz00_749 = (BgL_typez00_bglt) (BgL_classz00_3);
									BgL_auxz00_748 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_749))->BgL_idz00);
								}
								BgL_testz00_747 =
									(BgL_auxz00_748 == CNST_TABLE_REF(((long) 0)));
							}
							if (BgL_testz00_747)
								{	/* Object/java_access.scm 62 */
									return BgL_fieldsz00_478;
								}
							else
								{	/* Object/java_access.scm 64 */
									obj_t BgL_predz00_480;

									BgL_predz00_480 =
										BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
										(BgL_classz00_3, BgL_srcz00_6, BgL_modulez00_5);
									if (BgL_abstractzf3zf3_4)
										{	/* Object/java_access.scm 65 */
											return bgl_append2(BgL_predz00_480, BgL_fieldsz00_478);
										}
									else
										{	/* Object/java_access.scm 67 */
											obj_t BgL_constz00_481;

											BgL_constz00_481 =
												BGl_genzd2javazd2classzd2constructorszd2zzobject_creatorz00
												(BgL_classz00_3, BgL_constrsz00_2, BgL_srcz00_6);
											{	/* Object/java_access.scm 67 */
												obj_t BgL_creatorz00_482;

												BgL_creatorz00_482 =
													BGl_importzd2javazd2classzd2creatorzd2zzobject_creatorz00
													(BgL_classz00_3, BgL_constrsz00_2, BgL_srcz00_6);
												{	/* Object/java_access.scm 70 */

													return
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_predz00_480,
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_creatorz00_482,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_fieldsz00_478,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_constz00_481, BNIL))));
												}
											}
										}
								}
						}
					}
				}
			else
				{	/* Object/java_access.scm 52 */
					return BNIL;
				}
		}
	}



/* _import-java-class-accessors! */
	obj_t
		BGl__importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t
		BgL_envz00_686, obj_t BgL_pslotsz00_687, obj_t BgL_constrsz00_688,
		obj_t BgL_classz00_689, obj_t BgL_abstractzf3zf3_690,
		obj_t BgL_modulez00_691, obj_t BgL_srcz00_692)
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 50 */
			return
				BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2
				(BgL_pslotsz00_687, BgL_constrsz00_688,
				(BgL_jclassz00_bglt) (BgL_classz00_689), CBOOL(BgL_abstractzf3zf3_690),
				BgL_modulez00_691, BgL_srcz00_692);
		}
	}



/* correct-java-class? */
	bool_t
		BGl_correctzd2javazd2classzf3zf3zzobject_javazd2accesszd2(BgL_jclassz00_bglt
		BgL_classz00_8, obj_t BgL_srcz00_9)
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 92 */
			{	/* Object/java_access.scm 93 */
				obj_t BgL_superz00_491;

				obj_t BgL_classzd2idzd2_492;

				{
					obj_t BgL_auxz00_766;

					{	/* Object/java_access.scm 93 */
						BgL_objectz00_bglt BgL_auxz00_767;

						BgL_auxz00_767 = (BgL_objectz00_bglt) (BgL_classz00_8);
						BgL_auxz00_766 = BGL_OBJECT_WIDENING(BgL_auxz00_767);
					}
					BgL_superz00_491 =
						(((BgL_jclassz00_bglt) CREF(BgL_auxz00_766))->BgL_itszd2superzd2);
				}
				{
					BgL_typez00_bglt BgL_auxz00_771;

					BgL_auxz00_771 = (BgL_typez00_bglt) (BgL_classz00_8);
					BgL_classzd2idzd2_492 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_771))->BgL_idz00);
				}
				{	/* Object/java_access.scm 98 */
					bool_t BgL_testz00_774;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_491,
							BGl_typez00zztype_typez00))
						{	/* Object/java_access.scm 98 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_491,
									BGl_jclassz00zzobject_classz00))
								{	/* Object/java_access.scm 98 */
									BgL_testz00_774 = ((bool_t) 0);
								}
							else
								{	/* Object/java_access.scm 98 */
									BgL_testz00_774 = ((bool_t) 1);
								}
						}
					else
						{	/* Object/java_access.scm 98 */
							BgL_testz00_774 = ((bool_t) 0);
						}
					if (BgL_testz00_774)
						{	/* Object/java_access.scm 98 */
							{	/* Object/java_access.scm 99 */
								obj_t BgL_arg2459z00_494;

								obj_t BgL_arg2460z00_495;

								{
									BgL_typez00_bglt BgL_auxz00_779;

									BgL_auxz00_779 = (BgL_typez00_bglt) (BgL_superz00_491);
									BgL_arg2459z00_494 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_779))->BgL_idz00);
								}
								{	/* Object/java_access.scm 100 */
									obj_t BgL_arg2471z00_498;

									{	/* Object/java_access.scm 101 */
										obj_t BgL_res2559z00_680;

										{	/* Object/java_access.scm 101 */
											obj_t BgL_arg2063z00_679;

											BgL_arg2063z00_679 =
												SYMBOL_TO_STRING(BgL_classzd2idzd2_492);
											BgL_res2559z00_680 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_679);
										}
										BgL_arg2471z00_498 = BgL_res2559z00_680;
									}
									BgL_arg2460z00_495 =
										string_append_3(BGl_string2560z00zzobject_javazd2accesszd2,
										BgL_arg2471z00_498,
										BGl_string2561z00zzobject_javazd2accesszd2);
								}
								{	/* Object/java_access.scm 99 */
									obj_t BgL_list2461z00_496;

									BgL_list2461z00_496 =
										MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
									BGl_userzd2errorzd2zztools_errorz00(BgL_arg2459z00_494,
										BgL_arg2460z00_495, BgL_srcz00_9, BgL_list2461z00_496);
								}
							}
							return ((bool_t) 0);
						}
					else
						{	/* Object/java_access.scm 98 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_javazd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_javazd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_javazd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/java_access.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_getterz00(((long) 462520640),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_creatorz00(((long) 371328867),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_predicatez00(((long) 444447869),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 173226634),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2562z00zzobject_javazd2accesszd2));
		}
	}

#ifdef __cplusplus
}
#endif
