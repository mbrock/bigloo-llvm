/*===========================================================================*/
/*   (Object/plain_access.scm)                                               */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/plain_access.scm)*/
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
	extern obj_t
		BGl_importzd2plainzd2classzd2creatorszd2zzobject_creatorz00
		(BgL_tclassz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_plainzd2accesszd2 =
		BUNSPEC;
	static bool_t
		BGl_correctzd2plainzd2classzf3zf3zzobject_plainzd2accesszd2
		(BgL_tclassz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
		(obj_t, BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_plainzd2accesszd2();
	extern obj_t
		BGl_importzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	extern obj_t BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_plainzd2accesszd2();
	static obj_t
		BGl__heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_plainzd2accesszd2();
	static obj_t
		BGl__importzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
		(obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_plainzd2accesszd2(long, char *);
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
	extern bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t);
	extern obj_t BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_tclassz00_bglt,
		obj_t, obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t,
		BgL_tclassz00_bglt, obj_t, obj_t);
	extern obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_tclassz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
		(BgL_tclassz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl__genzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00(BgL_tclassz00_bglt,
		obj_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_genzd2plainzd2classzd2creatorszd2zzobject_creatorz00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_plainzd2accesszd2();
	static obj_t BGl_methodzd2initzd2zzobject_plainzd2accesszd2();
	static obj_t
		BGl_setzd2plainzd2classzd2slotsz12zc0zzobject_plainzd2accesszd2(obj_t,
		obj_t, BgL_tclassz00_bglt);
	extern obj_t
		BGl_genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00
		(BgL_typez00_bglt, obj_t);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2,
		BgL_bgl__heapza7d2plainza7d22603z00,
		BGl__heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2590z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2590za700za7za7o2604za7, "' is not a class", 16);
	      DEFINE_STRING(BGl_string2589z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2589za700za7za7o2605za7, "super of `", 10);
	      DEFINE_STRING(BGl_string2591z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2591za700za7za7o2606za7, "make-class-accesses!", 20);
	      DEFINE_STRING(BGl_string2592z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2592za700za7za7o2607za7,
		"Should not be able to see a wide class here", 43);
	      DEFINE_STRING(BGl_string2593z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2593za700za7za7o2608za7, "' is a wide class", 17);
	      DEFINE_STRING(BGl_string2594z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2594za700za7za7o2609za7,
		"Only wide classes can inherit of final classes", 46);
	      DEFINE_STRING(BGl_string2595z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2595za700za7za7o2610za7, "object_plain-access", 19);
	      DEFINE_STRING(BGl_string2596z00zzobject_plainzd2accesszd2,
		BgL_bgl_string2596za700za7za7o2611za7, "(no def found) ", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2,
		BgL_bgl__genza7d2plainza7d2c2612z00,
		BGl__genzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2, 0L,
		BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2plainzd2classzd2accessorsz12zd2envz12zzobject_plainzd2accesszd2,
		BgL_bgl__importza7d2plainza72613z00,
		BGl__importzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2, 0L,
		BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_plainzd2accesszd2(long
		BgL_checksumz00_750, char *BgL_fromz00_751)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_plainzd2accesszd2))
				{
					BGl_requirezd2initializa7ationz75zzobject_plainzd2accesszd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_plainzd2accesszd2();
					BGl_cnstzd2initzd2zzobject_plainzd2accesszd2();
					BGl_importedzd2moduleszd2initz00zzobject_plainzd2accesszd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_plainzd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_plain-access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_plain-access");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_plain-access");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_plain-access");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_plainzd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 21 */
			{	/* Object/plain_access.scm 21 */
				obj_t BgL_cportz00_742;

				BgL_cportz00_742 =
					bgl_open_input_string(BGl_string2596z00zzobject_plainzd2accesszd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_743;

					BgL_iz00_743 = ((long) 0);
				BgL_loopz00_744:
					if ((BgL_iz00_743 == ((long) -1)))
						{	/* Object/plain_access.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/plain_access.scm 21 */
							{	/* Object/plain_access.scm 21 */
								obj_t BgL_arg2602z00_746;

								{	/* Object/plain_access.scm 21 */

									{	/* Object/plain_access.scm 21 */
										obj_t BgL_locationz00_748;

										BgL_locationz00_748 = BBOOL(((bool_t) 0));
										{	/* Object/plain_access.scm 21 */

											BgL_arg2602z00_746 =
												BGl_readz00zz__readerz00(BgL_cportz00_742,
												BgL_locationz00_748);
										}
									}
								}
								{	/* Object/plain_access.scm 21 */
									int BgL_auxz00_768;

									BgL_auxz00_768 = (int) (BgL_iz00_743);
									CNST_TABLE_SET(BgL_auxz00_768, BgL_arg2602z00_746);
							}}
							{	/* Object/plain_access.scm 21 */
								int BgL_auxz00_749;

								BgL_auxz00_749 = (int) ((BgL_iz00_743 - ((long) 1)));
								{
									long BgL_iz00_773;

									BgL_iz00_773 = (long) (BgL_auxz00_749);
									BgL_iz00_743 = BgL_iz00_773;
									goto BgL_loopz00_744;
								}
							}
						}
				}
			}
		}
	}



/* gen-plain-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t
		BgL_classzd2defzd2_1, BgL_tclassz00_bglt BgL_classz00_2,
		obj_t BgL_srczd2defzd2_3, obj_t BgL_importz00_4)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 50 */
			if (BGl_correctzd2plainzd2classzf3zf3zzobject_plainzd2accesszd2
				(BgL_classz00_2, BgL_srczd2defzd2_3))
				{	/* Object/plain_access.scm 52 */
					BGl_setzd2plainzd2classzd2slotsz12zc0zzobject_plainzd2accesszd2
						(BgL_classzd2defzd2_1, BgL_srczd2defzd2_3, BgL_classz00_2);
					BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00((obj_t)
						(BgL_classz00_2));
					{	/* Object/plain_access.scm 61 */
						obj_t BgL_fieldsz00_480;

						BgL_fieldsz00_480 =
							BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
							(BgL_classz00_2, (obj_t) (BgL_classz00_2), BFALSE,
							BgL_srczd2defzd2_3);
						{	/* Object/plain_access.scm 63 */
							obj_t BgL_virtualsz00_481;

							{	/* Object/plain_access.scm 63 */
								int BgL_auxz00_782;

								BgL_auxz00_782 = (int) (((long) 1));
								BgL_virtualsz00_481 = BGL_MVALUES_VAL(BgL_auxz00_782);
							}
							{	/* Object/plain_access.scm 63 */
								obj_t BgL_creatsz00_482;

								obj_t BgL_structsz00_483;

								obj_t BgL_predicatez00_484;

								BgL_creatsz00_482 =
									BGl_genzd2plainzd2classzd2creatorszd2zzobject_creatorz00
									(BgL_classz00_2, BgL_srczd2defzd2_3, BgL_importz00_4);
								BgL_structsz00_483 =
									BGl_genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00(
									(BgL_typez00_bglt) (BgL_classz00_2), BgL_srczd2defzd2_3);
								BgL_predicatez00_484 =
									BGl_genzd2classzd2predz12z12zzobject_predicatez00
									(BgL_classz00_2, BgL_srczd2defzd2_3, BgL_importz00_4);
								{	/* Object/plain_access.scm 66 */
									obj_t BgL_val0_2439z00_485;

									BgL_val0_2439z00_485 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_predicatez00_484,
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_structsz00_483,
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_creatsz00_482,
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_fieldsz00_480, BNIL))));
									{	/* Object/plain_access.scm 66 */
										int BgL_auxz00_793;

										BgL_auxz00_793 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_793);
									}
									{	/* Object/plain_access.scm 66 */
										int BgL_auxz00_796;

										BgL_auxz00_796 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_796, BgL_virtualsz00_481);
									}
									return BgL_val0_2439z00_485;
								}
							}
						}
					}
				}
			else
				{	/* Object/plain_access.scm 52 */
					{	/* Object/plain_access.scm 68 */
						int BgL_auxz00_799;

						BgL_auxz00_799 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_799);
					}
					{	/* Object/plain_access.scm 68 */
						int BgL_auxz00_802;

						BgL_auxz00_802 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_802, BNIL);
					}
					return BNIL;
				}
		}
	}



/* _gen-plain-class-accessors! */
	obj_t
		BGl__genzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t
		BgL_envz00_730, obj_t BgL_classzd2defzd2_731, obj_t BgL_classz00_732,
		obj_t BgL_srczd2defzd2_733, obj_t BgL_importz00_734)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 50 */
			return
				BGl_genzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
				(BgL_classzd2defzd2_731, (BgL_tclassz00_bglt) (BgL_classz00_732),
				BgL_srczd2defzd2_733, BgL_importz00_734);
		}
	}



/* import-plain-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t
		BgL_classzd2defzd2_5, BgL_tclassz00_bglt BgL_classz00_6,
		obj_t BgL_srczd2defzd2_7, obj_t BgL_modulez00_8)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 73 */
			if (BGl_correctzd2plainzd2classzf3zf3zzobject_plainzd2accesszd2
				(BgL_classz00_6, BgL_srczd2defzd2_7))
				{	/* Object/plain_access.scm 75 */
					BGl_setzd2plainzd2classzd2slotsz12zc0zzobject_plainzd2accesszd2
						(BgL_classzd2defzd2_5, BgL_srczd2defzd2_7, BgL_classz00_6);
					BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00((obj_t)
						(BgL_classz00_6));
					{	/* Object/plain_access.scm 84 */
						obj_t BgL_fieldsz00_494;

						BgL_fieldsz00_494 =
							BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
							(BgL_classz00_6, (obj_t) (BgL_classz00_6), BFALSE,
							BgL_srczd2defzd2_7);
						{	/* Object/plain_access.scm 86 */
							obj_t BgL_virtualsz00_495;

							{	/* Object/plain_access.scm 86 */
								int BgL_auxz00_814;

								BgL_auxz00_814 = (int) (((long) 1));
								BgL_virtualsz00_495 = BGL_MVALUES_VAL(BgL_auxz00_814);
							}
							{	/* Object/plain_access.scm 86 */
								obj_t BgL_creatsz00_496;

								obj_t BgL_predicatez00_497;

								BgL_creatsz00_496 =
									BGl_importzd2plainzd2classzd2creatorszd2zzobject_creatorz00
									(BgL_classz00_6, BgL_srczd2defzd2_7, BgL_modulez00_8);
								BgL_predicatez00_497 =
									BGl_importzd2classzd2predz12z12zzobject_predicatez00
									(BgL_classz00_6, BgL_srczd2defzd2_7, BgL_modulez00_8);
								{	/* Object/plain_access.scm 88 */
									obj_t BgL_val0_2443z00_498;

									BgL_val0_2443z00_498 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_predicatez00_497,
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_creatsz00_496,
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_fieldsz00_494, BNIL)));
									{	/* Object/plain_access.scm 88 */
										int BgL_auxz00_822;

										BgL_auxz00_822 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_822);
									}
									{	/* Object/plain_access.scm 88 */
										int BgL_auxz00_825;

										BgL_auxz00_825 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_825, BgL_virtualsz00_495);
									}
									return BgL_val0_2443z00_498;
								}
							}
						}
					}
				}
			else
				{	/* Object/plain_access.scm 75 */
					return BNIL;
				}
		}
	}



/* _import-plain-class-accessors! */
	obj_t
		BGl__importzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
		(obj_t BgL_envz00_735, obj_t BgL_classzd2defzd2_736, obj_t BgL_classz00_737,
		obj_t BgL_srczd2defzd2_738, obj_t BgL_modulez00_739)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 73 */
			return
				BGl_importzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
				(BgL_classzd2defzd2_736, (BgL_tclassz00_bglt) (BgL_classz00_737),
				BgL_srczd2defzd2_738, BgL_modulez00_739);
		}
	}



/* heap-plain-class-accessors! */
	BGL_EXPORTED_DEF obj_t
		BGl_heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2
		(BgL_tclassz00_bglt BgL_classz00_9)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 95 */
			{	/* Object/plain_access.scm 96 */
				obj_t BgL_srczd2defzd2_705;

				BgL_srczd2defzd2_705 = CNST_TABLE_REF(((long) 0));
				return
					BGl_genzd2classzd2slotszd2accessz12zc0zzobject_getterz00
					(BgL_classz00_9, (obj_t) (BgL_classz00_9), BFALSE,
					BgL_srczd2defzd2_705);
			}
		}
	}



/* _heap-plain-class-accessors! */
	obj_t
		BGl__heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(obj_t
		BgL_envz00_740, obj_t BgL_classz00_741)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 95 */
			return
				BGl_heapzd2plainzd2classzd2accessorsz12zc0zzobject_plainzd2accesszd2(
				(BgL_tclassz00_bglt) (BgL_classz00_741));
		}
	}



/* set-plain-class-slots! */
	obj_t BGl_setzd2plainzd2classzd2slotsz12zc0zzobject_plainzd2accesszd2(obj_t
		BgL_classzd2defzd2_10, obj_t BgL_srczd2defzd2_11,
		BgL_tclassz00_bglt BgL_classz00_12)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 109 */
			{	/* Object/plain_access.scm 110 */
				obj_t BgL_superz00_504;

				{	/* Object/plain_access.scm 110 */
					obj_t BgL_superz00_510;

					{
						obj_t BgL_auxz00_835;

						{	/* Object/plain_access.scm 110 */
							BgL_objectz00_bglt BgL_auxz00_836;

							BgL_auxz00_836 = (BgL_objectz00_bglt) (BgL_classz00_12);
							BgL_auxz00_835 = BGL_OBJECT_WIDENING(BgL_auxz00_836);
						}
						BgL_superz00_510 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_835))->BgL_itszd2superzd2);
					}
					if ((BgL_superz00_510 == (obj_t) (BgL_classz00_12)))
						{	/* Object/plain_access.scm 111 */
							BgL_superz00_504 = BFALSE;
						}
					else
						{	/* Object/plain_access.scm 111 */
							BgL_superz00_504 = BgL_superz00_510;
						}
				}
				{	/* Object/plain_access.scm 110 */
					obj_t BgL_superzd2vnumzd2_505;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_504,
							BGl_tclassz00zzobject_classz00))
						{	/* Object/plain_access.scm 115 */
							BgL_tclassz00_bglt BgL_obj2153z00_708;

							BgL_obj2153z00_708 = (BgL_tclassz00_bglt) (BgL_superz00_504);
							{
								obj_t BgL_auxz00_846;

								{	/* Object/plain_access.scm 115 */
									BgL_objectz00_bglt BgL_auxz00_847;

									BgL_auxz00_847 = (BgL_objectz00_bglt) (BgL_obj2153z00_708);
									BgL_auxz00_846 = BGL_OBJECT_WIDENING(BgL_auxz00_847);
								}
								BgL_superzd2vnumzd2_505 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_846))->
									BgL_virtualzd2slotszd2numberz00);
							}
						}
					else
						{	/* Object/plain_access.scm 114 */
							BgL_superzd2vnumzd2_505 = BINT(((long) 0));
						}
					{	/* Object/plain_access.scm 114 */
						obj_t BgL_slotsz00_506;

						BgL_slotsz00_506 = CDR(CDR(BgL_classzd2defzd2_10));
						{	/* Object/plain_access.scm 117 */

							{	/* Object/plain_access.scm 121 */
								obj_t BgL_cslotsz00_507;

								BgL_cslotsz00_507 =
									BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_classz00_12,
									BgL_slotsz00_506, BgL_superz00_504,
									CINT(BgL_superzd2vnumzd2_505), BgL_srczd2defzd2_11);
								{	/* Object/plain_access.scm 121 */
									obj_t BgL_localzd2vnumzd2_508;

									BgL_localzd2vnumzd2_508 =
										BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
										(BgL_classz00_12, BgL_cslotsz00_507);
									{	/* Object/plain_access.scm 122 */

										{
											obj_t BgL_auxz00_857;

											{	/* Object/plain_access.scm 124 */
												BgL_objectz00_bglt BgL_auxz00_858;

												BgL_auxz00_858 = (BgL_objectz00_bglt) (BgL_classz00_12);
												BgL_auxz00_857 = BGL_OBJECT_WIDENING(BgL_auxz00_858);
											}
											((((BgL_tclassz00_bglt) CREF(BgL_auxz00_857))->
													BgL_virtualzd2slotszd2numberz00) =
												((obj_t) BgL_localzd2vnumzd2_508), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_862;

											{	/* Object/plain_access.scm 126 */
												BgL_objectz00_bglt BgL_auxz00_863;

												BgL_auxz00_863 = (BgL_objectz00_bglt) (BgL_classz00_12);
												BgL_auxz00_862 = BGL_OBJECT_WIDENING(BgL_auxz00_863);
											}
											return
												((((BgL_tclassz00_bglt) CREF(BgL_auxz00_862))->
													BgL_slotsz00) = ((obj_t) BgL_cslotsz00_507), BUNSPEC);
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



/* correct-plain-class? */
	bool_t
		BGl_correctzd2plainzd2classzf3zf3zzobject_plainzd2accesszd2
		(BgL_tclassz00_bglt BgL_classz00_13, obj_t BgL_srczd2defzd2_14)
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 135 */
			{	/* Object/plain_access.scm 136 */
				obj_t BgL_superz00_512;

				obj_t BgL_classzd2idzd2_513;

				{
					obj_t BgL_auxz00_867;

					{	/* Object/plain_access.scm 136 */
						BgL_objectz00_bglt BgL_auxz00_868;

						BgL_auxz00_868 = (BgL_objectz00_bglt) (BgL_classz00_13);
						BgL_auxz00_867 = BGL_OBJECT_WIDENING(BgL_auxz00_868);
					}
					BgL_superz00_512 =
						(((BgL_tclassz00_bglt) CREF(BgL_auxz00_867))->BgL_itszd2superzd2);
				}
				{
					BgL_typez00_bglt BgL_auxz00_872;

					BgL_auxz00_872 = (BgL_typez00_bglt) (BgL_classz00_13);
					BgL_classzd2idzd2_513 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_872))->BgL_idz00);
				}
				{	/* Object/plain_access.scm 141 */
					bool_t BgL_testz00_875;

					if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_512,
							BGl_typez00zztype_typez00))
						{	/* Object/plain_access.scm 141 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_512,
									BGl_tclassz00zzobject_classz00))
								{	/* Object/plain_access.scm 141 */
									BgL_testz00_875 = ((bool_t) 0);
								}
							else
								{	/* Object/plain_access.scm 141 */
									BgL_testz00_875 = ((bool_t) 1);
								}
						}
					else
						{	/* Object/plain_access.scm 141 */
							BgL_testz00_875 = ((bool_t) 0);
						}
					if (BgL_testz00_875)
						{	/* Object/plain_access.scm 141 */
							{	/* Object/plain_access.scm 142 */
								obj_t BgL_arg2470z00_515;

								obj_t BgL_arg2471z00_516;

								{
									BgL_typez00_bglt BgL_auxz00_880;

									BgL_auxz00_880 = (BgL_typez00_bglt) (BgL_superz00_512);
									BgL_arg2470z00_515 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_880))->BgL_idz00);
								}
								{	/* Object/plain_access.scm 143 */
									obj_t BgL_arg2477z00_519;

									{	/* Object/plain_access.scm 144 */
										obj_t BgL_res2587z00_724;

										{	/* Object/plain_access.scm 144 */
											obj_t BgL_arg2063z00_723;

											BgL_arg2063z00_723 =
												SYMBOL_TO_STRING(BgL_classzd2idzd2_513);
											BgL_res2587z00_724 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_723);
										}
										BgL_arg2477z00_519 = BgL_res2587z00_724;
									}
									BgL_arg2471z00_516 =
										string_append_3(BGl_string2589z00zzobject_plainzd2accesszd2,
										BgL_arg2477z00_519,
										BGl_string2590z00zzobject_plainzd2accesszd2);
								}
								{	/* Object/plain_access.scm 142 */
									obj_t BgL_list2472z00_517;

									BgL_list2472z00_517 =
										MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
									BGl_userzd2errorzd2zztools_errorz00(BgL_arg2470z00_515,
										BgL_arg2471z00_516, BgL_srczd2defzd2_14,
										BgL_list2472z00_517);
								}
							}
							return ((bool_t) 0);
						}
					else
						{	/* Object/plain_access.scm 141 */
							if (BGl_widezd2classzf3z21zzobject_classz00(
									(obj_t) (BgL_classz00_13)))
								{	/* Object/plain_access.scm 149 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2591z00zzobject_plainzd2accesszd2,
										BGl_string2592z00zzobject_plainzd2accesszd2,
										BgL_srczd2defzd2_14);
									return ((bool_t) 0);
								}
							else
								{	/* Object/plain_access.scm 149 */
									if (BGl_widezd2classzf3z21zzobject_classz00(BgL_superz00_512))
										{	/* Object/plain_access.scm 156 */
											{	/* Object/plain_access.scm 158 */
												obj_t BgL_arg2503z00_523;

												obj_t BgL_arg2504z00_524;

												{
													BgL_typez00_bglt BgL_auxz00_894;

													BgL_auxz00_894 =
														(BgL_typez00_bglt) (BgL_superz00_512);
													BgL_arg2503z00_523 =
														(((BgL_typez00_bglt) CREF(BgL_auxz00_894))->
														BgL_idz00);
												}
												{	/* Object/plain_access.scm 159 */
													obj_t BgL_arg2529z00_527;

													{	/* Object/plain_access.scm 160 */
														obj_t BgL_res2588z00_728;

														{	/* Object/plain_access.scm 160 */
															obj_t BgL_arg2063z00_727;

															BgL_arg2063z00_727 =
																SYMBOL_TO_STRING(BgL_classzd2idzd2_513);
															BgL_res2588z00_728 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_727);
														}
														BgL_arg2529z00_527 = BgL_res2588z00_728;
													}
													BgL_arg2504z00_524 =
														string_append_3
														(BGl_string2589z00zzobject_plainzd2accesszd2,
														BgL_arg2529z00_527,
														BGl_string2593z00zzobject_plainzd2accesszd2);
												}
												{	/* Object/plain_access.scm 158 */
													obj_t BgL_list2505z00_525;

													BgL_list2505z00_525 =
														MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
													BGl_userzd2errorzd2zztools_errorz00
														(BgL_arg2503z00_523, BgL_arg2504z00_524,
														BgL_srczd2defzd2_14, BgL_list2505z00_525);
												}
											}
											return ((bool_t) 0);
										}
									else
										{	/* Object/plain_access.scm 156 */
											if (BGl_finalzd2classzf3z21zzobject_classz00
												(BgL_superz00_512))
												{	/* Object/plain_access.scm 165 */
													{	/* Object/plain_access.scm 167 */
														obj_t BgL_arg2536z00_530;

														{
															BgL_typez00_bglt BgL_auxz00_904;

															BgL_auxz00_904 =
																(BgL_typez00_bglt) (BgL_superz00_512);
															BgL_arg2536z00_530 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_904))->
																BgL_idz00);
														}
														{	/* Object/plain_access.scm 167 */
															obj_t BgL_list2545z00_532;

															BgL_list2545z00_532 =
																MAKE_PAIR(BGl_typez00zztype_typez00, BNIL);
															BGl_userzd2errorzd2zztools_errorz00
																(BgL_arg2536z00_530,
																BGl_string2594z00zzobject_plainzd2accesszd2,
																BgL_srczd2defzd2_14, BgL_list2545z00_532);
														}
													}
													return ((bool_t) 0);
												}
											else
												{	/* Object/plain_access.scm 165 */
													return ((bool_t) 1);
												}
										}
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_plainzd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_plainzd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_plainzd2accesszd2()
	{
		AN_OBJECT;
		{	/* Object/plain_access.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_getterz00(((long) 462520640),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_creatorz00(((long) 371328867),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_predicatez00(((long) 444447869),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 173226634),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2595z00zzobject_plainzd2accesszd2));
		}
	}

#ifdef __cplusplus
}
#endif
