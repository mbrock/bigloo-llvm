/*===========================================================================*/
/*   (Object/predicate.scm)                                                  */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/predicate.scm)*/
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

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_globalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

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


	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2profilezd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_predicatez00 = BUNSPEC;
	static obj_t BGl__importzd2classzd2predz12z12zzobject_predicatez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_epairifyza2za2zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_predicatez00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_predicatez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_predicatez00();
	static bool_t BGl_inlinezd2predzf3z21zzobject_predicatez00();
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t
		BGl__importzd2javazd2classzd2predz12zc0zzobject_predicatez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_predicatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
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
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
		(BgL_jclassz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_genzd2javazd2classzd2predz12zc0zzobject_predicatez00(BgL_jclassz00_bglt,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_predicatez00();
	static obj_t BGl__genzd2classzd2predz12z12zzobject_predicatez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_predicatez00();
	static obj_t __cnst[20];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2classzd2predz12zd2envzc0zzobject_predicatez00,
		BgL_bgl__importza7d2classza72804z00,
		BGl__importzd2classzd2predz12z12zzobject_predicatez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2800z00zzobject_predicatez00,
		BgL_bgl_string2800za700za7za7o2805za7, "object_predicate", 16);
	      DEFINE_STRING(BGl_string2801z00zzobject_predicatez00,
		BgL_bgl_string2801za700za7za7o2806za7,
		"export isa static define define-inline effect no-cfa-top predicate-of pragma ::obj inline super super- is-a? __object @ obj ?::bool ? (make-heap make-add-heap) ",
		160);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2classzd2predz12zd2envzc0zzobject_predicatez00,
		BgL_bgl__genza7d2classza7d2p2807z00,
		BGl__genzd2classzd2predz12z12zzobject_predicatez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2javazd2classzd2predz12zd2envz12zzobject_predicatez00,
		BgL_bgl__importza7d2javaza7d2808z00,
		BGl__importzd2javazd2classzd2predz12zc0zzobject_predicatez00, 0L, BUNSPEC,
		3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_predicatez00(long
		BgL_checksumz00_948, char *BgL_fromz00_949)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_predicatez00))
				{
					BGl_requirezd2initializa7ationz75zzobject_predicatez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_predicatez00();
					BGl_cnstzd2initzd2zzobject_predicatez00();
					BGl_importedzd2moduleszd2initz00zzobject_predicatez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_predicatez00()
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_predicate");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"object_predicate");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_predicatez00()
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 21 */
			{	/* Object/predicate.scm 21 */
				obj_t BgL_cportz00_940;

				BgL_cportz00_940 =
					bgl_open_input_string(BGl_string2801z00zzobject_predicatez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_941;

					BgL_iz00_941 = ((long) 19);
				BgL_loopz00_942:
					if ((BgL_iz00_941 == ((long) -1)))
						{	/* Object/predicate.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Object/predicate.scm 21 */
							{	/* Object/predicate.scm 21 */
								obj_t BgL_arg2803z00_944;

								{	/* Object/predicate.scm 21 */

									{	/* Object/predicate.scm 21 */
										obj_t BgL_locationz00_946;

										BgL_locationz00_946 = BBOOL(((bool_t) 0));
										{	/* Object/predicate.scm 21 */

											BgL_arg2803z00_944 =
												BGl_readz00zz__readerz00(BgL_cportz00_940,
												BgL_locationz00_946);
										}
									}
								}
								{	/* Object/predicate.scm 21 */
									int BgL_auxz00_968;

									BgL_auxz00_968 = (int) (BgL_iz00_941);
									CNST_TABLE_SET(BgL_auxz00_968, BgL_arg2803z00_944);
							}}
							{	/* Object/predicate.scm 21 */
								int BgL_auxz00_947;

								BgL_auxz00_947 = (int) ((BgL_iz00_941 - ((long) 1)));
								{
									long BgL_iz00_973;

									BgL_iz00_973 = (long) (BgL_auxz00_947);
									BgL_iz00_941 = BgL_iz00_973;
									goto BgL_loopz00_942;
								}
							}
						}
				}
			}
		}
	}



/* inline-pred? */
	bool_t BGl_inlinezd2predzf3z21zzobject_predicatez00()
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 49 */
			{	/* Object/predicate.scm 50 */
				bool_t BgL_testz00_975;

				{	/* Object/predicate.scm 50 */
					bool_t BgL__ortest_2434z00_478;

					if (BGl_numberzf3zf3zz__r4_numbers_6_5z00
						(BGl_za2profilezd2modeza2zd2zzengine_paramz00))
						{	/* Object/predicate.scm 50 */
							BgL__ortest_2434z00_478 = ((bool_t) 0);
						}
					else
						{	/* Object/predicate.scm 50 */
							BgL__ortest_2434z00_478 = ((bool_t) 1);
						}
					if (BgL__ortest_2434z00_478)
						{	/* Object/predicate.scm 50 */
							BgL_testz00_975 = BgL__ortest_2434z00_478;
						}
					else
						{	/* Object/predicate.scm 50 */
							BgL_testz00_975 =
								(
								(long) CINT(BGl_za2profilezd2modeza2zd2zzengine_paramz00) <
								((long) 1));
				}}
				if (BgL_testz00_975)
					{	/* Object/predicate.scm 50 */
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
								(BGl_za2passza2z00zzengine_paramz00,
									CNST_TABLE_REF(((long) 0)))))
							{	/* Object/predicate.scm 52 */
								return ((bool_t) 0);
							}
						else
							{	/* Object/predicate.scm 52 */
								return ((bool_t) 1);
							}
					}
				else
					{	/* Object/predicate.scm 50 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* gen-class-pred! */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt
		BgL_classz00_1, obj_t BgL_srczd2defzd2_2, obj_t BgL_importz00_3)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 60 */
			{	/* Object/predicate.scm 61 */
				obj_t BgL_idz00_480;

				{
					BgL_typez00_bglt BgL_auxz00_985;

					BgL_auxz00_985 = (BgL_typez00_bglt) (BgL_classz00_1);
					BgL_idz00_480 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_985))->BgL_idz00);
				}
				{	/* Object/predicate.scm 61 */
					obj_t BgL_idzf3zf3_481;

					{	/* Object/predicate.scm 62 */
						obj_t BgL_arg2664z00_573;

						{	/* Object/predicate.scm 62 */
							obj_t BgL_arg2665z00_574;

							obj_t BgL_arg2666z00_575;

							{	/* Object/predicate.scm 62 */
								obj_t BgL_res2780z00_847;

								{	/* Object/predicate.scm 62 */
									obj_t BgL_arg2063z00_846;

									BgL_arg2063z00_846 = SYMBOL_TO_STRING(BgL_idz00_480);
									BgL_res2780z00_847 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_846);
								}
								BgL_arg2665z00_574 = BgL_res2780z00_847;
							}
							{	/* Object/predicate.scm 62 */
								obj_t BgL_res2781z00_850;

								{	/* Object/predicate.scm 62 */
									obj_t BgL_symbolz00_848;

									BgL_symbolz00_848 = CNST_TABLE_REF(((long) 1));
									{	/* Object/predicate.scm 62 */
										obj_t BgL_arg2063z00_849;

										BgL_arg2063z00_849 = SYMBOL_TO_STRING(BgL_symbolz00_848);
										BgL_res2781z00_850 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_849);
								}}
								BgL_arg2666z00_575 = BgL_res2781z00_850;
							}
							{	/* Object/predicate.scm 62 */
								obj_t BgL_list2667z00_576;

								{	/* Object/predicate.scm 62 */
									obj_t BgL_arg2668z00_577;

									BgL_arg2668z00_577 = MAKE_PAIR(BgL_arg2666z00_575, BNIL);
									BgL_list2667z00_576 =
										MAKE_PAIR(BgL_arg2665z00_574, BgL_arg2668z00_577);
								}
								BgL_arg2664z00_573 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2667z00_576);
						}}
						BgL_idzf3zf3_481 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2664z00_573));
					}
					{	/* Object/predicate.scm 62 */
						obj_t BgL_predzd2idzd2_482;

						{	/* Object/predicate.scm 63 */
							obj_t BgL_arg2659z00_568;

							{	/* Object/predicate.scm 63 */
								obj_t BgL_arg2660z00_569;

								obj_t BgL_arg2661z00_570;

								{	/* Object/predicate.scm 63 */
									obj_t BgL_res2782z00_854;

									{	/* Object/predicate.scm 63 */
										obj_t BgL_arg2063z00_853;

										BgL_arg2063z00_853 = SYMBOL_TO_STRING(BgL_idz00_480);
										BgL_res2782z00_854 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_853);
									}
									BgL_arg2660z00_569 = BgL_res2782z00_854;
								}
								{	/* Object/predicate.scm 63 */
									obj_t BgL_res2783z00_857;

									{	/* Object/predicate.scm 63 */
										obj_t BgL_symbolz00_855;

										BgL_symbolz00_855 = CNST_TABLE_REF(((long) 2));
										{	/* Object/predicate.scm 63 */
											obj_t BgL_arg2063z00_856;

											BgL_arg2063z00_856 = SYMBOL_TO_STRING(BgL_symbolz00_855);
											BgL_res2783z00_857 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_856);
									}}
									BgL_arg2661z00_570 = BgL_res2783z00_857;
								}
								{	/* Object/predicate.scm 63 */
									obj_t BgL_list2662z00_571;

									{	/* Object/predicate.scm 63 */
										obj_t BgL_arg2663z00_572;

										BgL_arg2663z00_572 = MAKE_PAIR(BgL_arg2661z00_570, BNIL);
										BgL_list2662z00_571 =
											MAKE_PAIR(BgL_arg2660z00_569, BgL_arg2663z00_572);
									}
									BgL_arg2659z00_568 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2662z00_571);
							}}
							BgL_predzd2idzd2_482 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2659z00_568));
						}
						{	/* Object/predicate.scm 63 */
							BgL_globalz00_bglt BgL_holderz00_483;

							{
								obj_t BgL_auxz00_1008;

								{	/* Object/predicate.scm 64 */
									BgL_objectz00_bglt BgL_auxz00_1009;

									BgL_auxz00_1009 = (BgL_objectz00_bglt) (BgL_classz00_1);
									BgL_auxz00_1008 = BGL_OBJECT_WIDENING(BgL_auxz00_1009);
								}
								BgL_holderz00_483 =
									(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1008))->BgL_holderz00);
							}
							{	/* Object/predicate.scm 64 */
								obj_t BgL_objz00_484;

								BgL_objz00_484 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												3))));
								{	/* Object/predicate.scm 65 */
									obj_t BgL_superz00_485;

									{
										obj_t BgL_auxz00_1016;

										{	/* Object/predicate.scm 66 */
											BgL_objectz00_bglt BgL_auxz00_1017;

											BgL_auxz00_1017 = (BgL_objectz00_bglt) (BgL_classz00_1);
											BgL_auxz00_1016 = BGL_OBJECT_WIDENING(BgL_auxz00_1017);
										}
										BgL_superz00_485 =
											(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1016))->
											BgL_itszd2superzd2);
									}
									{	/* Object/predicate.scm 66 */

										{

											if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_485,
													BGl_tclassz00zzobject_classz00))
												{	/* Object/predicate.scm 73 */
													obj_t BgL_superzd2predzd2idz00_488;

													obj_t BgL_superzd2typedzd2_489;

													{	/* Object/predicate.scm 73 */
														obj_t BgL_arg2576z00_540;

														{	/* Object/predicate.scm 73 */
															obj_t BgL_arg2586z00_541;

															obj_t BgL_arg2587z00_542;

															{	/* Object/predicate.scm 73 */
																obj_t BgL_res2784z00_864;

																{	/* Object/predicate.scm 73 */
																	obj_t BgL_symbolz00_862;

																	BgL_symbolz00_862 =
																		CNST_TABLE_REF(((long) 7));
																	{	/* Object/predicate.scm 73 */
																		obj_t BgL_arg2063z00_863;

																		BgL_arg2063z00_863 =
																			SYMBOL_TO_STRING(BgL_symbolz00_862);
																		BgL_res2784z00_864 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_863);
																}}
																BgL_arg2586z00_541 = BgL_res2784z00_864;
															}
															{	/* Object/predicate.scm 73 */
																obj_t BgL_res2785z00_867;

																{	/* Object/predicate.scm 73 */
																	obj_t BgL_arg2063z00_866;

																	BgL_arg2063z00_866 =
																		SYMBOL_TO_STRING(BgL_predzd2idzd2_482);
																	BgL_res2785z00_867 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_866);
																}
																BgL_arg2587z00_542 = BgL_res2785z00_867;
															}
															{	/* Object/predicate.scm 73 */
																obj_t BgL_list2588z00_543;

																{	/* Object/predicate.scm 73 */
																	obj_t BgL_arg2589z00_544;

																	BgL_arg2589z00_544 =
																		MAKE_PAIR(BgL_arg2587z00_542, BNIL);
																	BgL_list2588z00_543 =
																		MAKE_PAIR(BgL_arg2586z00_541,
																		BgL_arg2589z00_544);
																}
																BgL_arg2576z00_540 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2588z00_543);
														}}
														BgL_superzd2predzd2idz00_488 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2576z00_540));
													}
													{	/* Object/predicate.scm 74 */
														obj_t BgL_arg2590z00_545;

														obj_t BgL_arg2594z00_546;

														BgL_arg2590z00_545 = CNST_TABLE_REF(((long) 8));
														{
															BgL_typez00_bglt BgL_auxz00_1034;

															BgL_auxz00_1034 =
																(BgL_typez00_bglt) (
																(BgL_tclassz00_bglt) (BgL_superz00_485));
															BgL_arg2594z00_546 =
																(((BgL_typez00_bglt) CREF(BgL_auxz00_1034))->
																BgL_idz00);
														}
														BgL_superzd2typedzd2_489 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_arg2590z00_545, BgL_arg2594z00_546);
													}
													{	/* Object/predicate.scm 77 */
														obj_t BgL_arg2438z00_490;

														if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
															{	/* Object/predicate.scm 78 */
																obj_t BgL_arg2444z00_492;

																{	/* Object/predicate.scm 78 */
																	obj_t BgL_arg2445z00_493;

																	{	/* Object/predicate.scm 78 */
																		obj_t BgL_arg2451z00_496;

																		obj_t BgL_arg2452z00_497;

																		BgL_arg2451z00_496 =
																			CNST_TABLE_REF(((long) 9));
																		{	/* Object/predicate.scm 78 */
																			obj_t BgL_list2453z00_498;

																			{	/* Object/predicate.scm 78 */
																				obj_t BgL_arg2454z00_499;

																				obj_t BgL_arg2459z00_500;

																				BgL_arg2454z00_499 =
																					CNST_TABLE_REF(((long) 10));
																				BgL_arg2459z00_500 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2453z00_498 =
																					MAKE_PAIR(BgL_arg2454z00_499,
																					BgL_arg2459z00_500);
																			}
																			BgL_arg2452z00_497 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_predzd2idzd2_482,
																				BgL_list2453z00_498);
																		}
																		BgL_arg2445z00_493 =
																			MAKE_PAIR(BgL_arg2451z00_496,
																			BgL_arg2452z00_497);
																	}
																	{	/* Object/predicate.scm 78 */
																		obj_t BgL_list2449z00_495;

																		BgL_list2449z00_495 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2444z00_492 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2445z00_493, BgL_list2449z00_495);
																}}
																BgL_arg2438z00_490 =
																	MAKE_PAIR(BgL_importz00_3,
																	BgL_arg2444z00_492);
															}
														else
															{	/* Object/predicate.scm 79 */
																obj_t BgL_arg2460z00_501;

																{	/* Object/predicate.scm 79 */
																	obj_t BgL_arg2461z00_502;

																	{	/* Object/predicate.scm 79 */
																		obj_t BgL_arg2472z00_505;

																		{	/* Object/predicate.scm 79 */
																			obj_t BgL_list2473z00_506;

																			BgL_list2473z00_506 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2472z00_505 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 10)),
																				BgL_list2473z00_506);
																		}
																		BgL_arg2461z00_502 =
																			MAKE_PAIR(BgL_predzd2idzd2_482,
																			BgL_arg2472z00_505);
																	}
																	{	/* Object/predicate.scm 79 */
																		obj_t BgL_list2471z00_504;

																		BgL_list2471z00_504 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2460z00_501 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2461z00_502, BgL_list2471z00_504);
																}}
																BgL_arg2438z00_490 =
																	MAKE_PAIR(BgL_importz00_3,
																	BgL_arg2460z00_501);
															}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg2438z00_490);
													}
													{	/* Object/predicate.scm 81 */
														obj_t BgL_arg2476z00_507;

														{	/* Object/predicate.scm 81 */
															obj_t BgL_arg2477z00_508;

															obj_t BgL_arg2491z00_509;

															BgL_arg2477z00_508 = CNST_TABLE_REF(((long) 11));
															{	/* Object/predicate.scm 81 */
																obj_t BgL_arg2492z00_510;

																{	/* Object/predicate.scm 81 */
																	obj_t BgL_arg2503z00_513;

																	{	/* Object/predicate.scm 81 */
																		obj_t BgL_arg2504z00_514;

																		obj_t BgL_arg2505z00_515;

																		obj_t BgL_arg2523z00_516;

																		{	/* Object/predicate.scm 81 */
																			obj_t BgL_arg2544z00_521;

																			obj_t BgL_arg2550z00_522;

																			BgL_arg2544z00_521 =
																				CNST_TABLE_REF(((long) 12));
																			{	/* Object/predicate.scm 81 */
																				obj_t BgL_arg2554z00_523;

																				{
																					BgL_typez00_bglt BgL_auxz00_1060;

																					BgL_auxz00_1060 =
																						(BgL_typez00_bglt) (BgL_classz00_1);
																					BgL_arg2554z00_523 =
																						(((BgL_typez00_bglt)
																							CREF(BgL_auxz00_1060))->
																						BgL_idz00);
																				}
																				{	/* Object/predicate.scm 81 */
																					obj_t BgL_list2556z00_525;

																					BgL_list2556z00_525 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2550z00_522 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2554z00_523,
																						BgL_list2556z00_525);
																			}}
																			BgL_arg2504z00_514 =
																				MAKE_PAIR(BgL_arg2544z00_521,
																				BgL_arg2550z00_522);
																		}
																		BgL_arg2505z00_515 =
																			CNST_TABLE_REF(((long) 13));
																		BgL_arg2523z00_516 =
																			MAKE_PAIR(CNST_TABLE_REF(((long) 14)),
																			BNIL);
																		{	/* Object/predicate.scm 81 */
																			obj_t BgL_list2530z00_518;

																			{	/* Object/predicate.scm 81 */
																				obj_t BgL_arg2531z00_519;

																				{	/* Object/predicate.scm 81 */
																					obj_t BgL_arg2536z00_520;

																					BgL_arg2536z00_520 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2531z00_519 =
																						MAKE_PAIR(BgL_arg2523z00_516,
																						BgL_arg2536z00_520);
																				}
																				BgL_list2530z00_518 =
																					MAKE_PAIR(BgL_arg2505z00_515,
																					BgL_arg2531z00_519);
																			}
																			BgL_arg2503z00_513 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2504z00_514,
																				BgL_list2530z00_518);
																	}}
																	BgL_arg2492z00_510 =
																		MAKE_PAIR(BgL_idzf3zf3_481,
																		BgL_arg2503z00_513);
																}
																{	/* Object/predicate.scm 81 */
																	obj_t BgL_list2494z00_512;

																	BgL_list2494z00_512 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2491z00_509 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2492z00_510, BgL_list2494z00_512);
															}}
															BgL_arg2476z00_507 =
																MAKE_PAIR(BgL_arg2477z00_508,
																BgL_arg2491z00_509);
														}
														BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
															(BgL_arg2476z00_507);
													}
													{	/* Object/predicate.scm 85 */
														obj_t BgL_arg2557z00_526;

														{	/* Object/predicate.scm 85 */
															obj_t BgL_arg2559z00_528;

															{	/* Object/predicate.scm 85 */
																obj_t BgL_arg2561z00_530;

																obj_t BgL_arg2562z00_531;

																if (BGl_inlinezd2predzf3z21zzobject_predicatez00
																	())
																	{	/* Object/predicate.scm 85 */
																		BgL_arg2561z00_530 =
																			CNST_TABLE_REF(((long) 15));
																	}
																else
																	{	/* Object/predicate.scm 85 */
																		BgL_arg2561z00_530 =
																			CNST_TABLE_REF(((long) 16));
																	}
																{	/* Object/predicate.scm 86 */
																	obj_t BgL_arg2564z00_533;

																	obj_t BgL_arg2565z00_534;

																	{	/* Object/predicate.scm 86 */
																		obj_t BgL_arg2572z00_538;

																		{	/* Object/predicate.scm 86 */
																			obj_t BgL_list2573z00_539;

																			BgL_list2573z00_539 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2572z00_538 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_objz00_484, BgL_list2573z00_539);
																		}
																		BgL_arg2564z00_533 =
																			MAKE_PAIR(BgL_predzd2idzd2_482,
																			BgL_arg2572z00_538);
																	}
																	{	/* Object/predicate.scm 68 */
																		obj_t BgL_arg2602z00_548;

																		obj_t BgL_arg2608z00_549;

																		{	/* Object/predicate.scm 68 */
																			obj_t BgL_arg2615z00_550;

																			obj_t BgL_arg2621z00_551;

																			BgL_arg2615z00_550 =
																				CNST_TABLE_REF(((long) 4));
																			{	/* Object/predicate.scm 68 */
																				obj_t BgL_list2622z00_552;

																				{	/* Object/predicate.scm 68 */
																					obj_t BgL_arg2628z00_553;

																					obj_t BgL_arg2629z00_554;

																					BgL_arg2628z00_553 =
																						CNST_TABLE_REF(((long) 5));
																					BgL_arg2629z00_554 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2622z00_552 =
																						MAKE_PAIR(BgL_arg2628z00_553,
																						BgL_arg2629z00_554);
																				}
																				BgL_arg2621z00_551 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(CNST_TABLE_REF(((long) 6)),
																					BgL_list2622z00_552);
																			}
																			BgL_arg2602z00_548 =
																				MAKE_PAIR(BgL_arg2615z00_550,
																				BgL_arg2621z00_551);
																		}
																		{	/* Object/predicate.scm 68 */
																			obj_t BgL_arg2630z00_555;

																			{	/* Object/predicate.scm 68 */
																				obj_t BgL_arg2649z00_559;

																				obj_t BgL_arg2650z00_560;

																				BgL_arg2649z00_559 =
																					CNST_TABLE_REF(((long) 4));
																				{	/* Object/predicate.scm 68 */
																					obj_t BgL_arg2651z00_561;

																					obj_t BgL_arg2652z00_562;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_1093;
																						BgL_auxz00_1093 =
																							(BgL_variablez00_bglt)
																							(BgL_holderz00_483);
																						BgL_arg2651z00_561 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_1093))->
																							BgL_idz00);
																					}
																					BgL_arg2652z00_562 =
																						(((BgL_globalz00_bglt)
																							CREF(BgL_holderz00_483))->
																						BgL_modulez00);
																					{	/* Object/predicate.scm 68 */
																						obj_t BgL_list2656z00_564;

																						{	/* Object/predicate.scm 68 */
																							obj_t BgL_arg2657z00_565;

																							BgL_arg2657z00_565 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2656z00_564 =
																								MAKE_PAIR(BgL_arg2652z00_562,
																								BgL_arg2657z00_565);
																						}
																						BgL_arg2650z00_560 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2651z00_561,
																							BgL_list2656z00_564);
																				}}
																				BgL_arg2630z00_555 =
																					MAKE_PAIR(BgL_arg2649z00_559,
																					BgL_arg2650z00_560);
																			}
																			{	/* Object/predicate.scm 68 */
																				obj_t BgL_list2643z00_557;

																				{	/* Object/predicate.scm 68 */
																					obj_t BgL_arg2648z00_558;

																					BgL_arg2648z00_558 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list2643z00_557 =
																						MAKE_PAIR(BgL_arg2630z00_555,
																						BgL_arg2648z00_558);
																				}
																				BgL_arg2608z00_549 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_objz00_484, BgL_list2643z00_557);
																		}}
																		BgL_arg2565z00_534 =
																			MAKE_PAIR(BgL_arg2602z00_548,
																			BgL_arg2608z00_549);
																	}
																	{	/* Object/predicate.scm 85 */
																		obj_t BgL_list2567z00_536;

																		{	/* Object/predicate.scm 85 */
																			obj_t BgL_arg2571z00_537;

																			BgL_arg2571z00_537 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2567z00_536 =
																				MAKE_PAIR(BgL_arg2565z00_534,
																				BgL_arg2571z00_537);
																		}
																		BgL_arg2562z00_531 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2564z00_533, BgL_list2567z00_536);
																}}
																BgL_arg2559z00_528 =
																	MAKE_PAIR(BgL_arg2561z00_530,
																	BgL_arg2562z00_531);
															}
															{	/* Object/predicate.scm 85 */
																obj_t BgL_list2560z00_529;

																BgL_list2560z00_529 =
																	MAKE_PAIR(BgL_srczd2defzd2_2, BNIL);
																BgL_arg2557z00_526 =
																	BGl_epairifyza2za2zztools_miscz00
																	(BgL_arg2559z00_528, BgL_list2560z00_529);
														}}
														{	/* Object/predicate.scm 84 */
															obj_t BgL_list2558z00_527;

															BgL_list2558z00_527 =
																MAKE_PAIR(BgL_arg2557z00_526, BNIL);
															return BgL_list2558z00_527;
														}
													}
												}
											else
												{	/* Object/predicate.scm 69 */
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



/* _gen-class-pred! */
	obj_t BGl__genzd2classzd2predz12z12zzobject_predicatez00(obj_t BgL_envz00_928,
		obj_t BgL_classz00_929, obj_t BgL_srczd2defzd2_930, obj_t BgL_importz00_931)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 60 */
			return
				BGl_genzd2classzd2predz12z12zzobject_predicatez00(
				(BgL_tclassz00_bglt) (BgL_classz00_929), BgL_srczd2defzd2_930,
				BgL_importz00_931);
		}
	}



/* import-class-pred! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2classzd2predz12z12zzobject_predicatez00(BgL_tclassz00_bglt
		BgL_classz00_4, obj_t BgL_srczd2defzd2_5, obj_t BgL_modulez00_6)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 93 */
			if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
				{	/* Object/predicate.scm 94 */
					return
						BGl_genzd2classzd2predz12z12zzobject_predicatez00(BgL_classz00_4,
						BgL_srczd2defzd2_5, CNST_TABLE_REF(((long) 17)));
				}
			else
				{	/* Object/predicate.scm 98 */
					obj_t BgL_idz00_579;

					{
						BgL_typez00_bglt BgL_auxz00_1118;

						BgL_auxz00_1118 = (BgL_typez00_bglt) (BgL_classz00_4);
						BgL_idz00_579 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1118))->BgL_idz00);
					}
					{	/* Object/predicate.scm 98 */
						obj_t BgL_idzf3zf3_580;

						{	/* Object/predicate.scm 99 */
							obj_t BgL_arg2680z00_594;

							{	/* Object/predicate.scm 99 */
								obj_t BgL_arg2681z00_595;

								obj_t BgL_arg2682z00_596;

								{	/* Object/predicate.scm 99 */
									obj_t BgL_res2787z00_878;

									{	/* Object/predicate.scm 99 */
										obj_t BgL_arg2063z00_877;

										BgL_arg2063z00_877 = SYMBOL_TO_STRING(BgL_idz00_579);
										BgL_res2787z00_878 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_877);
									}
									BgL_arg2681z00_595 = BgL_res2787z00_878;
								}
								{	/* Object/predicate.scm 99 */
									obj_t BgL_res2788z00_881;

									{	/* Object/predicate.scm 99 */
										obj_t BgL_symbolz00_879;

										BgL_symbolz00_879 = CNST_TABLE_REF(((long) 1));
										{	/* Object/predicate.scm 99 */
											obj_t BgL_arg2063z00_880;

											BgL_arg2063z00_880 = SYMBOL_TO_STRING(BgL_symbolz00_879);
											BgL_res2788z00_881 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_880);
									}}
									BgL_arg2682z00_596 = BgL_res2788z00_881;
								}
								{	/* Object/predicate.scm 99 */
									obj_t BgL_list2683z00_597;

									{	/* Object/predicate.scm 99 */
										obj_t BgL_arg2684z00_598;

										BgL_arg2684z00_598 = MAKE_PAIR(BgL_arg2682z00_596, BNIL);
										BgL_list2683z00_597 =
											MAKE_PAIR(BgL_arg2681z00_595, BgL_arg2684z00_598);
									}
									BgL_arg2680z00_594 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2683z00_597);
							}}
							BgL_idzf3zf3_580 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2680z00_594));
						}
						{	/* Object/predicate.scm 99 */
							obj_t BgL_predzd2idzd2_581;

							{	/* Object/predicate.scm 100 */
								obj_t BgL_arg2675z00_589;

								{	/* Object/predicate.scm 100 */
									obj_t BgL_arg2676z00_590;

									obj_t BgL_arg2677z00_591;

									{	/* Object/predicate.scm 100 */
										obj_t BgL_res2789z00_885;

										{	/* Object/predicate.scm 100 */
											obj_t BgL_arg2063z00_884;

											BgL_arg2063z00_884 = SYMBOL_TO_STRING(BgL_idz00_579);
											BgL_res2789z00_885 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_884);
										}
										BgL_arg2676z00_590 = BgL_res2789z00_885;
									}
									{	/* Object/predicate.scm 100 */
										obj_t BgL_res2790z00_888;

										{	/* Object/predicate.scm 100 */
											obj_t BgL_symbolz00_886;

											BgL_symbolz00_886 = CNST_TABLE_REF(((long) 2));
											{	/* Object/predicate.scm 100 */
												obj_t BgL_arg2063z00_887;

												BgL_arg2063z00_887 =
													SYMBOL_TO_STRING(BgL_symbolz00_886);
												BgL_res2790z00_888 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_887);
										}}
										BgL_arg2677z00_591 = BgL_res2790z00_888;
									}
									{	/* Object/predicate.scm 100 */
										obj_t BgL_list2678z00_592;

										{	/* Object/predicate.scm 100 */
											obj_t BgL_arg2679z00_593;

											BgL_arg2679z00_593 = MAKE_PAIR(BgL_arg2677z00_591, BNIL);
											BgL_list2678z00_592 =
												MAKE_PAIR(BgL_arg2676z00_590, BgL_arg2679z00_593);
										}
										BgL_arg2675z00_589 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2678z00_592);
								}}
								BgL_predzd2idzd2_581 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2675z00_589));
							}
							{	/* Object/predicate.scm 101 */
								obj_t BgL_superz00_583;

								{
									obj_t BgL_auxz00_1141;

									{	/* Object/predicate.scm 102 */
										BgL_objectz00_bglt BgL_auxz00_1142;

										BgL_auxz00_1142 = (BgL_objectz00_bglt) (BgL_classz00_4);
										BgL_auxz00_1141 = BGL_OBJECT_WIDENING(BgL_auxz00_1142);
									}
									BgL_superz00_583 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1141))->
										BgL_itszd2superzd2);
								}
								{	/* Object/predicate.scm 102 */

									if (BGl_iszd2azf3z21zz__objectz00(BgL_superz00_583,
											BGl_tclassz00zzobject_classz00))
										{	/* Object/predicate.scm 105 */
											obj_t BgL_arg2671z00_585;

											{	/* Object/predicate.scm 105 */
												obj_t BgL_arg2673z00_587;

												{	/* Object/predicate.scm 105 */
													obj_t BgL_list2674z00_588;

													BgL_list2674z00_588 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2673z00_587 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 10)), BgL_list2674z00_588);
												}
												BgL_arg2671z00_585 =
													MAKE_PAIR(BgL_predzd2idzd2_581, BgL_arg2673z00_587);
											}
											BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_6,
												BgL_arg2671z00_585, BNIL);
										}
									else
										{	/* Object/predicate.scm 103 */
											BFALSE;
										}
									return BNIL;
								}
							}
						}
					}
				}
		}
	}



/* _import-class-pred! */
	obj_t BGl__importzd2classzd2predz12z12zzobject_predicatez00(obj_t
		BgL_envz00_932, obj_t BgL_classz00_933, obj_t BgL_srczd2defzd2_934,
		obj_t BgL_modulez00_935)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 93 */
			return
				BGl_importzd2classzd2predz12z12zzobject_predicatez00(
				(BgL_tclassz00_bglt) (BgL_classz00_933), BgL_srczd2defzd2_934,
				BgL_modulez00_935);
		}
	}



/* gen-java-class-pred! */
	obj_t
		BGl_genzd2javazd2classzd2predz12zc0zzobject_predicatez00(BgL_jclassz00_bglt
		BgL_classz00_7, obj_t BgL_srczd2defzd2_8, obj_t BgL_mclausez00_9)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 115 */
			{	/* Object/predicate.scm 116 */
				obj_t BgL_idz00_599;

				{
					BgL_typez00_bglt BgL_auxz00_1155;

					BgL_auxz00_1155 = (BgL_typez00_bglt) (BgL_classz00_7);
					BgL_idz00_599 =
						(((BgL_typez00_bglt) CREF(BgL_auxz00_1155))->BgL_idz00);
				}
				{	/* Object/predicate.scm 116 */
					obj_t BgL_idzf3zf3_600;

					{	/* Object/predicate.scm 117 */
						obj_t BgL_arg2737z00_657;

						{	/* Object/predicate.scm 117 */
							obj_t BgL_arg2738z00_658;

							obj_t BgL_arg2739z00_659;

							{	/* Object/predicate.scm 117 */
								obj_t BgL_res2791z00_896;

								{	/* Object/predicate.scm 117 */
									obj_t BgL_arg2063z00_895;

									BgL_arg2063z00_895 = SYMBOL_TO_STRING(BgL_idz00_599);
									BgL_res2791z00_896 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_895);
								}
								BgL_arg2738z00_658 = BgL_res2791z00_896;
							}
							{	/* Object/predicate.scm 117 */
								obj_t BgL_res2792z00_899;

								{	/* Object/predicate.scm 117 */
									obj_t BgL_symbolz00_897;

									BgL_symbolz00_897 = CNST_TABLE_REF(((long) 1));
									{	/* Object/predicate.scm 117 */
										obj_t BgL_arg2063z00_898;

										BgL_arg2063z00_898 = SYMBOL_TO_STRING(BgL_symbolz00_897);
										BgL_res2792z00_899 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_898);
								}}
								BgL_arg2739z00_659 = BgL_res2792z00_899;
							}
							{	/* Object/predicate.scm 117 */
								obj_t BgL_list2740z00_660;

								{	/* Object/predicate.scm 117 */
									obj_t BgL_arg2741z00_661;

									BgL_arg2741z00_661 = MAKE_PAIR(BgL_arg2739z00_659, BNIL);
									BgL_list2740z00_660 =
										MAKE_PAIR(BgL_arg2738z00_658, BgL_arg2741z00_661);
								}
								BgL_arg2737z00_657 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list2740z00_660);
						}}
						BgL_idzf3zf3_600 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg2737z00_657));
					}
					{	/* Object/predicate.scm 117 */
						obj_t BgL_predzd2idzd2_601;

						{	/* Object/predicate.scm 118 */
							obj_t BgL_arg2732z00_652;

							{	/* Object/predicate.scm 118 */
								obj_t BgL_arg2733z00_653;

								obj_t BgL_arg2734z00_654;

								{	/* Object/predicate.scm 118 */
									obj_t BgL_res2793z00_903;

									{	/* Object/predicate.scm 118 */
										obj_t BgL_arg2063z00_902;

										BgL_arg2063z00_902 = SYMBOL_TO_STRING(BgL_idz00_599);
										BgL_res2793z00_903 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_902);
									}
									BgL_arg2733z00_653 = BgL_res2793z00_903;
								}
								{	/* Object/predicate.scm 118 */
									obj_t BgL_res2794z00_906;

									{	/* Object/predicate.scm 118 */
										obj_t BgL_symbolz00_904;

										BgL_symbolz00_904 = CNST_TABLE_REF(((long) 2));
										{	/* Object/predicate.scm 118 */
											obj_t BgL_arg2063z00_905;

											BgL_arg2063z00_905 = SYMBOL_TO_STRING(BgL_symbolz00_904);
											BgL_res2794z00_906 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_905);
									}}
									BgL_arg2734z00_654 = BgL_res2794z00_906;
								}
								{	/* Object/predicate.scm 118 */
									obj_t BgL_list2735z00_655;

									{	/* Object/predicate.scm 118 */
										obj_t BgL_arg2736z00_656;

										BgL_arg2736z00_656 = MAKE_PAIR(BgL_arg2734z00_654, BNIL);
										BgL_list2735z00_655 =
											MAKE_PAIR(BgL_arg2733z00_653, BgL_arg2736z00_656);
									}
									BgL_arg2732z00_652 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2735z00_655);
							}}
							BgL_predzd2idzd2_601 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2732z00_652));
						}
						{	/* Object/predicate.scm 118 */
							obj_t BgL_objz00_602;

							BgL_objz00_602 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											3))));
							{	/* Object/predicate.scm 120 */

								{

									{	/* Object/predicate.scm 125 */
										obj_t BgL_arg2685z00_605;

										{	/* Object/predicate.scm 125 */
											obj_t BgL_arg2686z00_606;

											{	/* Object/predicate.scm 125 */
												obj_t BgL_arg2687z00_607;

												{	/* Object/predicate.scm 125 */
													obj_t BgL_arg2690z00_610;

													obj_t BgL_arg2691z00_611;

													BgL_arg2690z00_610 = CNST_TABLE_REF(((long) 9));
													{	/* Object/predicate.scm 125 */
														obj_t BgL_list2692z00_612;

														{	/* Object/predicate.scm 125 */
															obj_t BgL_arg2693z00_613;

															obj_t BgL_arg2694z00_614;

															BgL_arg2693z00_613 = CNST_TABLE_REF(((long) 10));
															BgL_arg2694z00_614 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2692z00_612 =
																MAKE_PAIR(BgL_arg2693z00_613,
																BgL_arg2694z00_614);
														}
														BgL_arg2691z00_611 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_predzd2idzd2_601, BgL_list2692z00_612);
													}
													BgL_arg2687z00_607 =
														MAKE_PAIR(BgL_arg2690z00_610, BgL_arg2691z00_611);
												}
												{	/* Object/predicate.scm 125 */
													obj_t BgL_list2689z00_609;

													BgL_list2689z00_609 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2686z00_606 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2687z00_607, BgL_list2689z00_609);
											}}
											BgL_arg2685z00_605 =
												MAKE_PAIR(BgL_mclausez00_9, BgL_arg2686z00_606);
										}
										BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
											(BgL_arg2685z00_605);
									}
									{	/* Object/predicate.scm 127 */
										obj_t BgL_arg2695z00_615;

										{	/* Object/predicate.scm 127 */
											obj_t BgL_arg2696z00_616;

											obj_t BgL_arg2697z00_617;

											BgL_arg2696z00_616 = CNST_TABLE_REF(((long) 11));
											{	/* Object/predicate.scm 127 */
												obj_t BgL_arg2698z00_618;

												{	/* Object/predicate.scm 127 */
													obj_t BgL_arg2701z00_621;

													{	/* Object/predicate.scm 127 */
														obj_t BgL_arg2702z00_622;

														obj_t BgL_arg2703z00_623;

														obj_t BgL_arg2704z00_624;

														{	/* Object/predicate.scm 127 */
															obj_t BgL_arg2709z00_629;

															obj_t BgL_arg2710z00_630;

															BgL_arg2709z00_629 = CNST_TABLE_REF(((long) 12));
															{	/* Object/predicate.scm 127 */
																obj_t BgL_arg2711z00_631;

																{
																	BgL_typez00_bglt BgL_auxz00_1193;

																	BgL_auxz00_1193 =
																		(BgL_typez00_bglt) (BgL_classz00_7);
																	BgL_arg2711z00_631 =
																		(((BgL_typez00_bglt)
																			CREF(BgL_auxz00_1193))->BgL_idz00);
																}
																{	/* Object/predicate.scm 127 */
																	obj_t BgL_list2713z00_633;

																	BgL_list2713z00_633 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2710z00_630 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2711z00_631, BgL_list2713z00_633);
															}}
															BgL_arg2702z00_622 =
																MAKE_PAIR(BgL_arg2709z00_629,
																BgL_arg2710z00_630);
														}
														BgL_arg2703z00_623 = CNST_TABLE_REF(((long) 13));
														BgL_arg2704z00_624 =
															MAKE_PAIR(CNST_TABLE_REF(((long) 14)), BNIL);
														{	/* Object/predicate.scm 127 */
															obj_t BgL_list2706z00_626;

															{	/* Object/predicate.scm 127 */
																obj_t BgL_arg2707z00_627;

																{	/* Object/predicate.scm 127 */
																	obj_t BgL_arg2708z00_628;

																	BgL_arg2708z00_628 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2707z00_627 =
																		MAKE_PAIR(BgL_arg2704z00_624,
																		BgL_arg2708z00_628);
																}
																BgL_list2706z00_626 =
																	MAKE_PAIR(BgL_arg2703z00_623,
																	BgL_arg2707z00_627);
															}
															BgL_arg2701z00_621 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2702z00_622, BgL_list2706z00_626);
													}}
													BgL_arg2698z00_618 =
														MAKE_PAIR(BgL_idzf3zf3_600, BgL_arg2701z00_621);
												}
												{	/* Object/predicate.scm 127 */
													obj_t BgL_list2700z00_620;

													BgL_list2700z00_620 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2697z00_617 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2698z00_618, BgL_list2700z00_620);
											}}
											BgL_arg2695z00_615 =
												MAKE_PAIR(BgL_arg2696z00_616, BgL_arg2697z00_617);
										}
										BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
											(BgL_arg2695z00_615);
									}
									{	/* Object/predicate.scm 130 */
										obj_t BgL_arg2714z00_634;

										{	/* Object/predicate.scm 130 */
											obj_t BgL_arg2716z00_636;

											{	/* Object/predicate.scm 130 */
												obj_t BgL_arg2718z00_638;

												obj_t BgL_arg2719z00_639;

												if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
													{	/* Object/predicate.scm 130 */
														BgL_arg2718z00_638 = CNST_TABLE_REF(((long) 15));
													}
												else
													{	/* Object/predicate.scm 130 */
														BgL_arg2718z00_638 = CNST_TABLE_REF(((long) 16));
													}
												{	/* Object/predicate.scm 131 */
													obj_t BgL_arg2721z00_641;

													obj_t BgL_arg2722z00_642;

													{	/* Object/predicate.scm 131 */
														obj_t BgL_arg2727z00_646;

														{	/* Object/predicate.scm 131 */
															obj_t BgL_list2728z00_647;

															BgL_list2728z00_647 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2727z00_646 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_objz00_602, BgL_list2728z00_647);
														}
														BgL_arg2721z00_641 =
															MAKE_PAIR(BgL_predzd2idzd2_601,
															BgL_arg2727z00_646);
													}
													{	/* Object/predicate.scm 122 */
														obj_t BgL_list2730z00_649;

														BgL_list2730z00_649 =
															MAKE_PAIR(BgL_objz00_602, BNIL);
														BgL_arg2722z00_642 =
															BGl_makezd2privatezd2sexpz00zzast_privatez00
															(CNST_TABLE_REF(((long) 18)), BgL_idz00_599,
															BgL_list2730z00_649);
													}
													{	/* Object/predicate.scm 130 */
														obj_t BgL_list2725z00_644;

														{	/* Object/predicate.scm 130 */
															obj_t BgL_arg2726z00_645;

															BgL_arg2726z00_645 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2725z00_644 =
																MAKE_PAIR(BgL_arg2722z00_642,
																BgL_arg2726z00_645);
														}
														BgL_arg2719z00_639 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2721z00_641, BgL_list2725z00_644);
												}}
												BgL_arg2716z00_636 =
													MAKE_PAIR(BgL_arg2718z00_638, BgL_arg2719z00_639);
											}
											{	/* Object/predicate.scm 130 */
												obj_t BgL_list2717z00_637;

												BgL_list2717z00_637 =
													MAKE_PAIR(BgL_srczd2defzd2_8, BNIL);
												BgL_arg2714z00_634 =
													BGl_epairifyza2za2zztools_miscz00(BgL_arg2716z00_636,
													BgL_list2717z00_637);
										}}
										{	/* Object/predicate.scm 129 */
											obj_t BgL_list2715z00_635;

											BgL_list2715z00_635 = MAKE_PAIR(BgL_arg2714z00_634, BNIL);
											return BgL_list2715z00_635;
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



/* import-java-class-pred! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00
		(BgL_jclassz00_bglt BgL_classz00_10, obj_t BgL_srczd2defzd2_11,
		obj_t BgL_modulez00_12)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 138 */
			if (BGl_inlinezd2predzf3z21zzobject_predicatez00())
				{	/* Object/predicate.scm 143 */
					obj_t BgL_arg2743z00_663;

					if ((BgL_modulez00_12 == BGl_za2moduleza2z00zzmodule_modulez00))
						{	/* Object/predicate.scm 143 */
							BgL_arg2743z00_663 = CNST_TABLE_REF(((long) 19));
						}
					else
						{	/* Object/predicate.scm 143 */
							BgL_arg2743z00_663 = CNST_TABLE_REF(((long) 17));
						}
					return
						BGl_genzd2javazd2classzd2predz12zc0zzobject_predicatez00
						(BgL_classz00_10, BgL_srczd2defzd2_11, BgL_arg2743z00_663);
				}
			else
				{	/* Object/predicate.scm 145 */
					obj_t BgL_idz00_665;

					{
						BgL_typez00_bglt BgL_auxz00_1235;

						BgL_auxz00_1235 = (BgL_typez00_bglt) (BgL_classz00_10);
						BgL_idz00_665 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1235))->BgL_idz00);
					}
					{	/* Object/predicate.scm 145 */
						obj_t BgL_idzf3zf3_666;

						{	/* Object/predicate.scm 146 */
							obj_t BgL_arg2755z00_678;

							{	/* Object/predicate.scm 146 */
								obj_t BgL_arg2756z00_679;

								obj_t BgL_arg2758z00_680;

								{	/* Object/predicate.scm 146 */
									obj_t BgL_res2796z00_915;

									{	/* Object/predicate.scm 146 */
										obj_t BgL_arg2063z00_914;

										BgL_arg2063z00_914 = SYMBOL_TO_STRING(BgL_idz00_665);
										BgL_res2796z00_915 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_914);
									}
									BgL_arg2756z00_679 = BgL_res2796z00_915;
								}
								{	/* Object/predicate.scm 146 */
									obj_t BgL_res2797z00_918;

									{	/* Object/predicate.scm 146 */
										obj_t BgL_symbolz00_916;

										BgL_symbolz00_916 = CNST_TABLE_REF(((long) 1));
										{	/* Object/predicate.scm 146 */
											obj_t BgL_arg2063z00_917;

											BgL_arg2063z00_917 = SYMBOL_TO_STRING(BgL_symbolz00_916);
											BgL_res2797z00_918 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_917);
									}}
									BgL_arg2758z00_680 = BgL_res2797z00_918;
								}
								{	/* Object/predicate.scm 146 */
									obj_t BgL_list2759z00_681;

									{	/* Object/predicate.scm 146 */
										obj_t BgL_arg2760z00_682;

										BgL_arg2760z00_682 = MAKE_PAIR(BgL_arg2758z00_680, BNIL);
										BgL_list2759z00_681 =
											MAKE_PAIR(BgL_arg2756z00_679, BgL_arg2760z00_682);
									}
									BgL_arg2755z00_678 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list2759z00_681);
							}}
							BgL_idzf3zf3_666 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg2755z00_678));
						}
						{	/* Object/predicate.scm 146 */
							obj_t BgL_predzd2idzd2_667;

							{	/* Object/predicate.scm 147 */
								obj_t BgL_arg2749z00_673;

								{	/* Object/predicate.scm 147 */
									obj_t BgL_arg2750z00_674;

									obj_t BgL_arg2752z00_675;

									{	/* Object/predicate.scm 147 */
										obj_t BgL_res2798z00_922;

										{	/* Object/predicate.scm 147 */
											obj_t BgL_arg2063z00_921;

											BgL_arg2063z00_921 = SYMBOL_TO_STRING(BgL_idz00_665);
											BgL_res2798z00_922 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_921);
										}
										BgL_arg2750z00_674 = BgL_res2798z00_922;
									}
									{	/* Object/predicate.scm 147 */
										obj_t BgL_res2799z00_925;

										{	/* Object/predicate.scm 147 */
											obj_t BgL_symbolz00_923;

											BgL_symbolz00_923 = CNST_TABLE_REF(((long) 2));
											{	/* Object/predicate.scm 147 */
												obj_t BgL_arg2063z00_924;

												BgL_arg2063z00_924 =
													SYMBOL_TO_STRING(BgL_symbolz00_923);
												BgL_res2799z00_925 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_924);
										}}
										BgL_arg2752z00_675 = BgL_res2799z00_925;
									}
									{	/* Object/predicate.scm 147 */
										obj_t BgL_list2753z00_676;

										{	/* Object/predicate.scm 147 */
											obj_t BgL_arg2754z00_677;

											BgL_arg2754z00_677 = MAKE_PAIR(BgL_arg2752z00_675, BNIL);
											BgL_list2753z00_676 =
												MAKE_PAIR(BgL_arg2750z00_674, BgL_arg2754z00_677);
										}
										BgL_arg2749z00_673 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2753z00_676);
								}}
								BgL_predzd2idzd2_667 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2749z00_673));
							}
							{	/* Object/predicate.scm 148 */

								{	/* Object/predicate.scm 150 */
									obj_t BgL_arg2745z00_669;

									{	/* Object/predicate.scm 150 */
										obj_t BgL_arg2747z00_671;

										{	/* Object/predicate.scm 150 */
											obj_t BgL_list2748z00_672;

											BgL_list2748z00_672 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg2747z00_671 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(CNST_TABLE_REF(((long) 10)), BgL_list2748z00_672);
										}
										BgL_arg2745z00_669 =
											MAKE_PAIR(BgL_predzd2idzd2_667, BgL_arg2747z00_671);
									}
									BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_12,
										BgL_arg2745z00_669, BNIL);
								}
								return BNIL;
							}
						}
					}
				}
		}
	}



/* _import-java-class-pred! */
	obj_t BGl__importzd2javazd2classzd2predz12zc0zzobject_predicatez00(obj_t
		BgL_envz00_936, obj_t BgL_classz00_937, obj_t BgL_srczd2defzd2_938,
		obj_t BgL_modulez00_939)
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 138 */
			return
				BGl_importzd2javazd2classzd2predz12zc0zzobject_predicatez00(
				(BgL_jclassz00_bglt) (BgL_classz00_937), BgL_srczd2defzd2_938,
				BgL_modulez00_939);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_predicatez00()
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_predicatez00()
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_predicatez00()
	{
		AN_OBJECT;
		{	/* Object/predicate.scm 21 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_structz00(((long) 112894054),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2800z00zzobject_predicatez00));
		}
	}

#ifdef __cplusplus
}
#endif
