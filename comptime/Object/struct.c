/*===========================================================================*/
/*   (Object/struct.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/struct.scm)*/
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;

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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_savezd2slotzd2zzobject_structz00(obj_t, obj_t, obj_t, long,
		obj_t);
	extern obj_t
		BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_structz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzobject_structz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t
		BGl__genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genzd2plainzd2classzd2ze3structz31zzobject_structz00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_structz00();
	static obj_t BGl_genzd2widezd2classzd2ze3structz31zzobject_structz00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_structz00();
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl_genzd2structzd2ze3plainzd2classz31zzobject_structz00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl__genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t
		BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00
		(BgL_typez00_bglt, BgL_slotz00_bglt, obj_t, obj_t);
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_restorezd2slotzd2zzobject_structz00(obj_t, obj_t, obj_t,
		BgL_typez00_bglt, long, obj_t);
	static long BGl_slotszd2lengthzd2zzobject_structz00(obj_t);
	static obj_t BGl_genzd2structzd2ze3widezd2classz31zzobject_structz00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00(BgL_typez00_bglt,
		BgL_slotz00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_structz00();
	static obj_t BGl_methodzd2initzd2zzobject_structz00();
	BGL_EXPORTED_DECL obj_t
		BGl_genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00
		(BgL_typez00_bglt, obj_t);
	static obj_t __cnst[47];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2widezd2classzc3zd2ze3structzd2envz20zzobject_structz00,
		BgL_bgl__genza7d2wideza7d2cl3271z00,
		BGl__genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00, 0L, BUNSPEC,
		2);
	      DEFINE_STRING(BGl_string3265z00zzobject_structz00,
		BgL_bgl_string3265za700za7za7o3272za7, "((", 2);
	      DEFINE_STRING(BGl_string3266z00zzobject_structz00,
		BgL_bgl_string3266za700za7za7o3273za7, ")($1))", 6);
	      DEFINE_STRING(BGl_string3267z00zzobject_structz00,
		BgL_bgl_string3267za700za7za7o3274za7, "object_struct", 13);
	      DEFINE_STRING(BGl_string3268z00zzobject_structz00,
		BgL_bgl_string3268za700za7za7o3275za7,
		"@ class-num object-class-num-set! cast pragma new old object-widening-set! s::struct struct+object->object::object vector-ref-ur done o vector-length s struct-ref f ::long v i struct-key struct-key-set! call-next-method aux ::struct quote make-struct object->struct::struct define-method res obj +fx -ref vector-set-ur! begin =fx if labels make-vector -len let len loop j vec - struct-set! ",
		390);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_genzd2plainzd2classzc3zd2ze3structzd2envz20zzobject_structz00,
		BgL_bgl__genza7d2plainza7d2c3276z00,
		BGl__genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_structz00(long
		BgL_checksumz00_1521, char *BgL_fromz00_1522)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_structz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_structz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_structz00();
					BGl_cnstzd2initzd2zzobject_structz00();
					BGl_importedzd2moduleszd2initz00zzobject_structz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_structz00()
	{
		AN_OBJECT;
		{	/* Object/struct.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_struct");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_struct");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_struct");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_struct");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_structz00()
	{
		AN_OBJECT;
		{	/* Object/struct.scm 15 */
			{	/* Object/struct.scm 15 */
				obj_t BgL_cportz00_1513;

				BgL_cportz00_1513 =
					bgl_open_input_string(BGl_string3268z00zzobject_structz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1514;

					BgL_iz00_1514 = ((long) 46);
				BgL_loopz00_1515:
					if ((BgL_iz00_1514 == ((long) -1)))
						{	/* Object/struct.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/struct.scm 15 */
							{	/* Object/struct.scm 15 */
								obj_t BgL_arg3270z00_1517;

								{	/* Object/struct.scm 15 */

									{	/* Object/struct.scm 15 */
										obj_t BgL_locationz00_1519;

										BgL_locationz00_1519 = BBOOL(((bool_t) 0));
										{	/* Object/struct.scm 15 */

											BgL_arg3270z00_1517 =
												BGl_readz00zz__readerz00(BgL_cportz00_1513,
												BgL_locationz00_1519);
										}
									}
								}
								{	/* Object/struct.scm 15 */
									int BgL_auxz00_1539;

									BgL_auxz00_1539 = (int) (BgL_iz00_1514);
									CNST_TABLE_SET(BgL_auxz00_1539, BgL_arg3270z00_1517);
							}}
							{	/* Object/struct.scm 15 */
								int BgL_auxz00_1520;

								BgL_auxz00_1520 = (int) ((BgL_iz00_1514 - ((long) 1)));
								{
									long BgL_iz00_1544;

									BgL_iz00_1544 = (long) (BgL_auxz00_1520);
									BgL_iz00_1514 = BgL_iz00_1544;
									goto BgL_loopz00_1515;
								}
							}
						}
				}
			}
		}
	}



/* gen-plain-class<->struct */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00(BgL_typez00_bglt
		BgL_classz00_1, obj_t BgL_srczd2defzd2_2)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 38 */
			{	/* Object/struct.scm 40 */
				bool_t BgL_testz00_1546;

				{	/* Object/struct.scm 40 */
					BgL_tclassz00_bglt BgL_obj2242z00_1402;

					BgL_obj2242z00_1402 = (BgL_tclassz00_bglt) (BgL_classz00_1);
					{
						obj_t BgL_auxz00_1548;

						{	/* Object/struct.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_1549;

							BgL_auxz00_1549 = (BgL_objectz00_bglt) (BgL_obj2242z00_1402);
							BgL_auxz00_1548 = BGL_OBJECT_WIDENING(BgL_auxz00_1549);
						}
						BgL_testz00_1546 =
							(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1548))->
							BgL_abstractzf3zf3);
					}
				}
				if (BgL_testz00_1546)
					{	/* Object/struct.scm 40 */
						return BNIL;
					}
				else
					{	/* Object/struct.scm 42 */
						obj_t BgL_arg2503z00_573;

						obj_t BgL_arg2504z00_574;

						{	/* Object/struct.scm 42 */
							obj_t BgL_arg2529z00_577;

							obj_t BgL_arg2531z00_578;

							BgL_arg2529z00_577 =
								(((BgL_typez00_bglt) CREF(BgL_classz00_1))->BgL_idz00);
							{	/* Object/struct.scm 42 */
								BgL_tclassz00_bglt BgL_obj2229z00_1404;

								BgL_obj2229z00_1404 = (BgL_tclassz00_bglt) (BgL_classz00_1);
								{
									obj_t BgL_auxz00_1555;

									{	/* Object/struct.scm 42 */
										BgL_objectz00_bglt BgL_auxz00_1556;

										BgL_auxz00_1556 =
											(BgL_objectz00_bglt) (BgL_obj2229z00_1404);
										BgL_auxz00_1555 = BGL_OBJECT_WIDENING(BgL_auxz00_1556);
									}
									BgL_arg2531z00_578 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1555))->
										BgL_slotsz00);
								}
							}
							BgL_arg2503z00_573 =
								BGl_genzd2plainzd2classzd2ze3structz31zzobject_structz00
								(BgL_arg2529z00_577, BgL_classz00_1, BgL_arg2531z00_578,
								BgL_srczd2defzd2_2);
						}
						{	/* Object/struct.scm 43 */
							obj_t BgL_arg2536z00_579;

							obj_t BgL_arg2544z00_580;

							BgL_arg2536z00_579 =
								(((BgL_typez00_bglt) CREF(BgL_classz00_1))->BgL_idz00);
							{	/* Object/struct.scm 43 */
								BgL_tclassz00_bglt BgL_obj2229z00_1406;

								BgL_obj2229z00_1406 = (BgL_tclassz00_bglt) (BgL_classz00_1);
								{
									obj_t BgL_auxz00_1563;

									{	/* Object/struct.scm 43 */
										BgL_objectz00_bglt BgL_auxz00_1564;

										BgL_auxz00_1564 =
											(BgL_objectz00_bglt) (BgL_obj2229z00_1406);
										BgL_auxz00_1563 = BGL_OBJECT_WIDENING(BgL_auxz00_1564);
									}
									BgL_arg2544z00_580 =
										(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1563))->
										BgL_slotsz00);
								}
							}
							BgL_arg2504z00_574 =
								BGl_genzd2structzd2ze3plainzd2classz31zzobject_structz00
								(BgL_arg2536z00_579, BgL_classz00_1, BgL_arg2544z00_580,
								BgL_srczd2defzd2_2);
						}
						{	/* Object/struct.scm 42 */
							obj_t BgL_list2505z00_575;

							{	/* Object/struct.scm 42 */
								obj_t BgL_arg2523z00_576;

								BgL_arg2523z00_576 = MAKE_PAIR(BgL_arg2504z00_574, BNIL);
								BgL_list2505z00_575 =
									MAKE_PAIR(BgL_arg2503z00_573, BgL_arg2523z00_576);
							}
							return BgL_list2505z00_575;
						}
					}
			}
		}
	}



/* _gen-plain-class<->struct */
	obj_t BGl__genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00(obj_t
		BgL_envz00_1507, obj_t BgL_classz00_1508, obj_t BgL_srczd2defzd2_1509)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 38 */
			return
				BGl_genzd2plainzd2classzc3zd2ze3structzf2zzobject_structz00(
				(BgL_typez00_bglt) (BgL_classz00_1508), BgL_srczd2defzd2_1509);
		}
	}



/* gen-wide-class<->struct */
	BGL_EXPORTED_DEF obj_t
		BGl_genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(BgL_typez00_bglt
		BgL_classz00_3, obj_t BgL_srczd2defzd2_4)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 48 */
			{	/* Object/struct.scm 50 */
				obj_t BgL_arg2550z00_582;

				obj_t BgL_arg2554z00_583;

				{	/* Object/struct.scm 50 */
					obj_t BgL_arg2557z00_586;

					obj_t BgL_arg2558z00_587;

					BgL_arg2557z00_586 =
						(((BgL_typez00_bglt) CREF(BgL_classz00_3))->BgL_idz00);
					{	/* Object/struct.scm 50 */
						BgL_tclassz00_bglt BgL_obj2229z00_1410;

						BgL_obj2229z00_1410 = (BgL_tclassz00_bglt) (BgL_classz00_3);
						{
							obj_t BgL_auxz00_1575;

							{	/* Object/struct.scm 50 */
								BgL_objectz00_bglt BgL_auxz00_1576;

								BgL_auxz00_1576 = (BgL_objectz00_bglt) (BgL_obj2229z00_1410);
								BgL_auxz00_1575 = BGL_OBJECT_WIDENING(BgL_auxz00_1576);
							}
							BgL_arg2558z00_587 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1575))->BgL_slotsz00);
						}
					}
					BgL_arg2550z00_582 =
						BGl_genzd2widezd2classzd2ze3structz31zzobject_structz00
						(BgL_arg2557z00_586, BgL_classz00_3, BgL_arg2558z00_587,
						BgL_srczd2defzd2_4);
				}
				{	/* Object/struct.scm 51 */
					obj_t BgL_arg2559z00_588;

					obj_t BgL_arg2560z00_589;

					BgL_arg2559z00_588 =
						(((BgL_typez00_bglt) CREF(BgL_classz00_3))->BgL_idz00);
					{	/* Object/struct.scm 51 */
						BgL_tclassz00_bglt BgL_obj2229z00_1412;

						BgL_obj2229z00_1412 = (BgL_tclassz00_bglt) (BgL_classz00_3);
						{
							obj_t BgL_auxz00_1583;

							{	/* Object/struct.scm 51 */
								BgL_objectz00_bglt BgL_auxz00_1584;

								BgL_auxz00_1584 = (BgL_objectz00_bglt) (BgL_obj2229z00_1412);
								BgL_auxz00_1583 = BGL_OBJECT_WIDENING(BgL_auxz00_1584);
							}
							BgL_arg2560z00_589 =
								(((BgL_tclassz00_bglt) CREF(BgL_auxz00_1583))->BgL_slotsz00);
						}
					}
					BgL_arg2554z00_583 =
						BGl_genzd2structzd2ze3widezd2classz31zzobject_structz00
						(BgL_arg2559z00_588, BgL_classz00_3, BgL_arg2560z00_589,
						BgL_srczd2defzd2_4);
				}
				{	/* Object/struct.scm 50 */
					obj_t BgL_list2555z00_584;

					{	/* Object/struct.scm 50 */
						obj_t BgL_arg2556z00_585;

						BgL_arg2556z00_585 = MAKE_PAIR(BgL_arg2554z00_583, BNIL);
						BgL_list2555z00_584 =
							MAKE_PAIR(BgL_arg2550z00_582, BgL_arg2556z00_585);
					}
					return BgL_list2555z00_584;
				}
			}
		}
	}



/* _gen-wide-class<->struct */
	obj_t BGl__genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(obj_t
		BgL_envz00_1510, obj_t BgL_classz00_1511, obj_t BgL_srczd2defzd2_1512)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 48 */
			return
				BGl_genzd2widezd2classzc3zd2ze3structzf2zzobject_structz00(
				(BgL_typez00_bglt) (BgL_classz00_1511), BgL_srczd2defzd2_1512);
		}
	}



/* save-slot */
	obj_t BGl_savezd2slotzd2zzobject_structz00(obj_t BgL_onamez00_5,
		obj_t BgL_snamez00_6, obj_t BgL_cnamez00_7, long BgL_iz00_8,
		obj_t BgL_slotz00_9)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 56 */
			{

				if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
						(BgL_slotz00_bglt) (BgL_slotz00_9)))
					{	/* Object/struct.scm 84 */
						return BUNSPEC;
					}
				else
					{	/* Object/struct.scm 86 */
						bool_t BgL_testz00_1596;

						{	/* Object/struct.scm 86 */
							BgL_slotz00_bglt BgL_obj2451z00_1415;

							BgL_obj2451z00_1415 = (BgL_slotz00_bglt) (BgL_slotz00_9);
							BgL_testz00_1596 =
								CBOOL(
								(((BgL_slotz00_bglt) CREF(BgL_obj2451z00_1415))->
									BgL_indexedz00));
						}
						if (BgL_testz00_1596)
							{	/* Object/struct.scm 86 */
								{	/* Object/struct.scm 63 */
									obj_t BgL_vecz00_611;

									obj_t BgL_jz00_612;

									obj_t BgL_loopz00_613;

									obj_t BgL_lenz00_614;

									BgL_vecz00_611 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												2)));
									BgL_jz00_612 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												3)));
									BgL_loopz00_613 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												4)));
									BgL_lenz00_614 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												5)));
									{	/* Object/struct.scm 67 */
										obj_t BgL_arg2615z00_615;

										obj_t BgL_arg2621z00_616;

										BgL_arg2615z00_615 = CNST_TABLE_REF(((long) 6));
										{	/* Object/struct.scm 67 */
											obj_t BgL_arg2628z00_617;

											obj_t BgL_arg2629z00_618;

											{	/* Object/struct.scm 67 */
												obj_t BgL_arg2648z00_622;

												{	/* Object/struct.scm 67 */
													obj_t BgL_arg2650z00_624;

													{	/* Object/struct.scm 67 */
														obj_t BgL_arg2651z00_625;

														{	/* Object/struct.scm 67 */
															obj_t BgL_arg2655z00_628;

															obj_t BgL_arg2656z00_629;

															{	/* Object/struct.scm 67 */
																obj_t BgL_arg2657z00_630;

																obj_t BgL_arg2658z00_631;

																obj_t BgL_arg2659z00_632;

																BgL_arg2657z00_630 = CNST_TABLE_REF(((long) 1));
																{
																	BgL_slotz00_bglt BgL_auxz00_1610;

																	BgL_auxz00_1610 =
																		(BgL_slotz00_bglt) (BgL_slotz00_9);
																	BgL_arg2658z00_631 =
																		(((BgL_slotz00_bglt)
																			CREF(BgL_auxz00_1610))->BgL_idz00);
																}
																BgL_arg2659z00_632 = CNST_TABLE_REF(((long) 7));
																{	/* Object/struct.scm 67 */
																	obj_t BgL_list2660z00_633;

																	{	/* Object/struct.scm 67 */
																		obj_t BgL_arg2661z00_634;

																		{	/* Object/struct.scm 67 */
																			obj_t BgL_arg2663z00_635;

																			{	/* Object/struct.scm 67 */
																				obj_t BgL_arg2664z00_636;

																				BgL_arg2664z00_636 =
																					MAKE_PAIR(BgL_arg2659z00_632, BNIL);
																				BgL_arg2663z00_635 =
																					MAKE_PAIR(BgL_arg2658z00_631,
																					BgL_arg2664z00_636);
																			}
																			BgL_arg2661z00_634 =
																				MAKE_PAIR(BgL_arg2657z00_630,
																				BgL_arg2663z00_635);
																		}
																		BgL_list2660z00_633 =
																			MAKE_PAIR(BgL_cnamez00_7,
																			BgL_arg2661z00_634);
																	}
																	BgL_arg2655z00_628 =
																		BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																		(BgL_list2660z00_633);
															}}
															{	/* Object/struct.scm 67 */
																obj_t BgL_list2665z00_637;

																BgL_list2665z00_637 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2656z00_629 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_onamez00_5, BgL_list2665z00_637);
															}
															BgL_arg2651z00_625 =
																MAKE_PAIR(BgL_arg2655z00_628,
																BgL_arg2656z00_629);
														}
														{	/* Object/struct.scm 67 */
															obj_t BgL_list2653z00_627;

															BgL_list2653z00_627 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2650z00_624 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2651z00_625, BgL_list2653z00_627);
													}}
													BgL_arg2648z00_622 =
														MAKE_PAIR(BgL_lenz00_614, BgL_arg2650z00_624);
												}
												BgL_arg2628z00_617 =
													MAKE_PAIR(BgL_arg2648z00_622, BNIL);
											}
											{	/* Object/struct.scm 68 */
												obj_t BgL_arg2666z00_638;

												obj_t BgL_arg2667z00_639;

												BgL_arg2666z00_638 = CNST_TABLE_REF(((long) 6));
												{	/* Object/struct.scm 68 */
													obj_t BgL_arg2668z00_640;

													obj_t BgL_arg2669z00_641;

													{	/* Object/struct.scm 68 */
														obj_t BgL_arg2673z00_645;

														{	/* Object/struct.scm 68 */
															obj_t BgL_arg2675z00_647;

															{	/* Object/struct.scm 68 */
																obj_t BgL_arg2676z00_648;

																{	/* Object/struct.scm 68 */
																	obj_t BgL_arg2679z00_651;

																	obj_t BgL_arg2680z00_652;

																	BgL_arg2679z00_651 =
																		CNST_TABLE_REF(((long) 8));
																	{	/* Object/struct.scm 68 */
																		obj_t BgL_list2681z00_653;

																		BgL_list2681z00_653 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2680z00_652 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_lenz00_614, BgL_list2681z00_653);
																	}
																	BgL_arg2676z00_648 =
																		MAKE_PAIR(BgL_arg2679z00_651,
																		BgL_arg2680z00_652);
																}
																{	/* Object/struct.scm 68 */
																	obj_t BgL_list2678z00_650;

																	BgL_list2678z00_650 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2675z00_647 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2676z00_648, BgL_list2678z00_650);
															}}
															BgL_arg2673z00_645 =
																MAKE_PAIR(BgL_vecz00_611, BgL_arg2675z00_647);
														}
														BgL_arg2668z00_640 =
															MAKE_PAIR(BgL_arg2673z00_645, BNIL);
													}
													{	/* Object/struct.scm 69 */
														obj_t BgL_arg2682z00_654;

														obj_t BgL_arg2683z00_655;

														BgL_arg2682z00_654 = CNST_TABLE_REF(((long) 9));
														{	/* Object/struct.scm 69 */
															obj_t BgL_arg2684z00_656;

															obj_t BgL_arg2685z00_657;

															{	/* Object/struct.scm 69 */
																obj_t BgL_arg2689z00_661;

																{	/* Object/struct.scm 69 */
																	obj_t BgL_arg2691z00_663;

																	{	/* Object/struct.scm 69 */
																		obj_t BgL_arg2692z00_664;

																		obj_t BgL_arg2693z00_665;

																		BgL_arg2692z00_664 =
																			MAKE_PAIR(BgL_jz00_612, BNIL);
																		{	/* Object/struct.scm 69 */
																			obj_t BgL_arg2697z00_669;

																			obj_t BgL_arg2698z00_670;

																			BgL_arg2697z00_669 =
																				CNST_TABLE_REF(((long) 10));
																			{	/* Object/struct.scm 69 */
																				obj_t BgL_arg2699z00_671;

																				obj_t BgL_arg2700z00_672;

																				obj_t BgL_arg2701z00_673;

																				{	/* Object/struct.scm 69 */
																					obj_t BgL_arg2706z00_678;

																					obj_t BgL_arg2707z00_679;

																					BgL_arg2706z00_678 =
																						CNST_TABLE_REF(((long) 11));
																					{	/* Object/struct.scm 69 */
																						obj_t BgL_list2708z00_680;

																						{	/* Object/struct.scm 69 */
																							obj_t BgL_arg2709z00_681;

																							BgL_arg2709z00_681 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2708z00_680 =
																								MAKE_PAIR(BgL_lenz00_614,
																								BgL_arg2709z00_681);
																						}
																						BgL_arg2707z00_679 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_jz00_612,
																							BgL_list2708z00_680);
																					}
																					BgL_arg2699z00_671 =
																						MAKE_PAIR(BgL_arg2706z00_678,
																						BgL_arg2707z00_679);
																				}
																				{	/* Object/struct.scm 70 */
																					obj_t BgL_arg2710z00_682;

																					obj_t BgL_arg2711z00_683;

																					BgL_arg2710z00_682 =
																						CNST_TABLE_REF(((long) 0));
																					{	/* Object/struct.scm 70 */
																						obj_t BgL_list2712z00_684;

																						{	/* Object/struct.scm 70 */
																							obj_t BgL_arg2713z00_685;

																							{	/* Object/struct.scm 70 */
																								obj_t BgL_arg2714z00_686;

																								BgL_arg2714z00_686 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2713z00_685 =
																									MAKE_PAIR(BgL_vecz00_611,
																									BgL_arg2714z00_686);
																							}
																							BgL_list2712z00_684 =
																								MAKE_PAIR(BINT(BgL_iz00_8),
																								BgL_arg2713z00_685);
																						}
																						BgL_arg2711z00_683 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_snamez00_6,
																							BgL_list2712z00_684);
																					}
																					BgL_arg2700z00_672 =
																						MAKE_PAIR(BgL_arg2710z00_682,
																						BgL_arg2711z00_683);
																				}
																				{	/* Object/struct.scm 71 */
																					obj_t BgL_arg2716z00_687;

																					obj_t BgL_arg2717z00_688;

																					BgL_arg2716z00_687 =
																						CNST_TABLE_REF(((long) 12));
																					{	/* Object/struct.scm 72 */
																						obj_t BgL_arg2718z00_689;

																						obj_t BgL_arg2719z00_690;

																						{	/* Object/struct.scm 72 */
																							obj_t BgL_arg2724z00_694;

																							obj_t BgL_arg2725z00_695;

																							BgL_arg2724z00_694 =
																								CNST_TABLE_REF(((long) 13));
																							{	/* Object/struct.scm 76 */
																								obj_t BgL_arg2726z00_696;

																								{	/* Object/struct.scm 76 */
																									obj_t BgL_arg2731z00_701;

																									obj_t BgL_arg2732z00_702;

																									{	/* Object/struct.scm 76 */
																										obj_t BgL_arg2733z00_703;

																										obj_t BgL_arg2734z00_704;

																										obj_t BgL_arg2735z00_705;

																										BgL_arg2733z00_703 =
																											CNST_TABLE_REF(((long)
																												1));
																										{
																											BgL_slotz00_bglt
																												BgL_auxz00_1653;
																											BgL_auxz00_1653 =
																												(BgL_slotz00_bglt)
																												(BgL_slotz00_9);
																											BgL_arg2734z00_704 =
																												(((BgL_slotz00_bglt)
																													CREF
																													(BgL_auxz00_1653))->
																												BgL_idz00);
																										}
																										BgL_arg2735z00_705 =
																											CNST_TABLE_REF(((long)
																												14));
																										{	/* Object/struct.scm 75 */
																											obj_t BgL_list2736z00_706;

																											{	/* Object/struct.scm 75 */
																												obj_t
																													BgL_arg2737z00_707;
																												{	/* Object/struct.scm 75 */
																													obj_t
																														BgL_arg2738z00_708;
																													{	/* Object/struct.scm 75 */
																														obj_t
																															BgL_arg2739z00_709;
																														BgL_arg2739z00_709 =
																															MAKE_PAIR
																															(BgL_arg2735z00_705,
																															BNIL);
																														BgL_arg2738z00_708 =
																															MAKE_PAIR
																															(BgL_arg2734z00_704,
																															BgL_arg2739z00_709);
																													}
																													BgL_arg2737z00_707 =
																														MAKE_PAIR
																														(BgL_arg2733z00_703,
																														BgL_arg2738z00_708);
																												}
																												BgL_list2736z00_706 =
																													MAKE_PAIR
																													(BgL_cnamez00_7,
																													BgL_arg2737z00_707);
																											}
																											BgL_arg2731z00_701 =
																												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																												(BgL_list2736z00_706);
																									}}
																									{	/* Object/struct.scm 75 */
																										obj_t BgL_list2740z00_710;

																										{	/* Object/struct.scm 75 */
																											obj_t BgL_arg2741z00_711;

																											BgL_arg2741z00_711 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2740z00_710 =
																												MAKE_PAIR(BgL_jz00_612,
																												BgL_arg2741z00_711);
																										}
																										BgL_arg2732z00_702 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_onamez00_5,
																											BgL_list2740z00_710);
																									}
																									BgL_arg2726z00_696 =
																										MAKE_PAIR
																										(BgL_arg2731z00_701,
																										BgL_arg2732z00_702);
																								}
																								{	/* Object/struct.scm 72 */
																									obj_t BgL_list2728z00_698;

																									{	/* Object/struct.scm 72 */
																										obj_t BgL_arg2729z00_699;

																										{	/* Object/struct.scm 72 */
																											obj_t BgL_arg2730z00_700;

																											BgL_arg2730z00_700 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg2729z00_699 =
																												MAKE_PAIR
																												(BgL_arg2726z00_696,
																												BgL_arg2730z00_700);
																										}
																										BgL_list2728z00_698 =
																											MAKE_PAIR(BgL_jz00_612,
																											BgL_arg2729z00_699);
																									}
																									BgL_arg2725z00_695 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_vecz00_611,
																										BgL_list2728z00_698);
																							}}
																							BgL_arg2718z00_689 =
																								MAKE_PAIR(BgL_arg2724z00_694,
																								BgL_arg2725z00_695);
																						}
																						{	/* Object/struct.scm 81 */
																							obj_t BgL_arg2742z00_712;

																							{	/* Object/struct.scm 81 */
																								obj_t BgL_arg2743z00_713;

																								{	/* Object/struct.scm 81 */
																									obj_t BgL_arg2747z00_716;

																									obj_t BgL_arg2748z00_717;

																									BgL_arg2747z00_716 =
																										CNST_TABLE_REF(((long) 15));
																									{	/* Object/struct.scm 81 */
																										obj_t BgL_list2749z00_718;

																										{	/* Object/struct.scm 81 */
																											obj_t BgL_arg2752z00_720;

																											BgL_arg2752z00_720 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2749z00_718 =
																												MAKE_PAIR(BINT(((long)
																														1)),
																												BgL_arg2752z00_720);
																										}
																										BgL_arg2748z00_717 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_jz00_612,
																											BgL_list2749z00_718);
																									}
																									BgL_arg2743z00_713 =
																										MAKE_PAIR
																										(BgL_arg2747z00_716,
																										BgL_arg2748z00_717);
																								}
																								{	/* Object/struct.scm 81 */
																									obj_t BgL_list2746z00_715;

																									BgL_list2746z00_715 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg2742z00_712 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2743z00_713,
																										BgL_list2746z00_715);
																							}}
																							BgL_arg2719z00_690 =
																								MAKE_PAIR(BgL_loopz00_613,
																								BgL_arg2742z00_712);
																						}
																						{	/* Object/struct.scm 71 */
																							obj_t BgL_list2721z00_692;

																							{	/* Object/struct.scm 71 */
																								obj_t BgL_arg2722z00_693;

																								BgL_arg2722z00_693 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list2721z00_692 =
																									MAKE_PAIR(BgL_arg2719z00_690,
																									BgL_arg2722z00_693);
																							}
																							BgL_arg2717z00_688 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2718z00_689,
																								BgL_list2721z00_692);
																					}}
																					BgL_arg2701z00_673 =
																						MAKE_PAIR(BgL_arg2716z00_687,
																						BgL_arg2717z00_688);
																				}
																				{	/* Object/struct.scm 69 */
																					obj_t BgL_list2703z00_675;

																					{	/* Object/struct.scm 69 */
																						obj_t BgL_arg2704z00_676;

																						{	/* Object/struct.scm 69 */
																							obj_t BgL_arg2705z00_677;

																							BgL_arg2705z00_677 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2704z00_676 =
																								MAKE_PAIR(BgL_arg2701z00_673,
																								BgL_arg2705z00_677);
																						}
																						BgL_list2703z00_675 =
																							MAKE_PAIR(BgL_arg2700z00_672,
																							BgL_arg2704z00_676);
																					}
																					BgL_arg2698z00_670 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2699z00_671,
																						BgL_list2703z00_675);
																			}}
																			BgL_arg2693z00_665 =
																				MAKE_PAIR(BgL_arg2697z00_669,
																				BgL_arg2698z00_670);
																		}
																		{	/* Object/struct.scm 69 */
																			obj_t BgL_list2695z00_667;

																			{	/* Object/struct.scm 69 */
																				obj_t BgL_arg2696z00_668;

																				BgL_arg2696z00_668 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list2695z00_667 =
																					MAKE_PAIR(BgL_arg2693z00_665,
																					BgL_arg2696z00_668);
																			}
																			BgL_arg2691z00_663 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg2692z00_664,
																				BgL_list2695z00_667);
																	}}
																	BgL_arg2689z00_661 =
																		MAKE_PAIR(BgL_loopz00_613,
																		BgL_arg2691z00_663);
																}
																BgL_arg2684z00_656 =
																	MAKE_PAIR(BgL_arg2689z00_661, BNIL);
															}
															{	/* Object/struct.scm 82 */
																obj_t BgL_arg2753z00_721;

																{	/* Object/struct.scm 82 */
																	obj_t BgL_list2754z00_722;

																	BgL_list2754z00_722 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2753z00_721 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BINT(((long) 0)), BgL_list2754z00_722);
																}
																BgL_arg2685z00_657 =
																	MAKE_PAIR(BgL_loopz00_613,
																	BgL_arg2753z00_721);
															}
															{	/* Object/struct.scm 69 */
																obj_t BgL_list2687z00_659;

																{	/* Object/struct.scm 69 */
																	obj_t BgL_arg2688z00_660;

																	BgL_arg2688z00_660 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list2687z00_659 =
																		MAKE_PAIR(BgL_arg2685z00_657,
																		BgL_arg2688z00_660);
																}
																BgL_arg2683z00_655 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg2684z00_656, BgL_list2687z00_659);
														}}
														BgL_arg2669z00_641 =
															MAKE_PAIR(BgL_arg2682z00_654, BgL_arg2683z00_655);
													}
													{	/* Object/struct.scm 68 */
														obj_t BgL_list2671z00_643;

														{	/* Object/struct.scm 68 */
															obj_t BgL_arg2672z00_644;

															BgL_arg2672z00_644 = MAKE_PAIR(BNIL, BNIL);
															BgL_list2671z00_643 =
																MAKE_PAIR(BgL_arg2669z00_641,
																BgL_arg2672z00_644);
														}
														BgL_arg2667z00_639 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg2668z00_640, BgL_list2671z00_643);
												}}
												BgL_arg2629z00_618 =
													MAKE_PAIR(BgL_arg2666z00_638, BgL_arg2667z00_639);
											}
											{	/* Object/struct.scm 67 */
												obj_t BgL_list2631z00_620;

												{	/* Object/struct.scm 67 */
													obj_t BgL_arg2642z00_621;

													BgL_arg2642z00_621 = MAKE_PAIR(BNIL, BNIL);
													BgL_list2631z00_620 =
														MAKE_PAIR(BgL_arg2629z00_618, BgL_arg2642z00_621);
												}
												BgL_arg2621z00_616 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2628z00_617, BgL_list2631z00_620);
										}}
										return MAKE_PAIR(BgL_arg2615z00_615, BgL_arg2621z00_616);
									}
								}
							}
						else
							{	/* Object/struct.scm 86 */
								{	/* Object/struct.scm 58 */
									obj_t BgL_arg2564z00_595;

									obj_t BgL_arg2565z00_596;

									BgL_arg2564z00_595 = CNST_TABLE_REF(((long) 0));
									{	/* Object/struct.scm 60 */
										obj_t BgL_arg2566z00_597;

										{	/* Object/struct.scm 60 */
											obj_t BgL_arg2587z00_602;

											obj_t BgL_arg2589z00_603;

											{	/* Object/struct.scm 60 */
												obj_t BgL_arg2590z00_604;

												obj_t BgL_arg2594z00_605;

												BgL_arg2590z00_604 = CNST_TABLE_REF(((long) 1));
												{
													BgL_slotz00_bglt BgL_auxz00_1712;

													BgL_auxz00_1712 = (BgL_slotz00_bglt) (BgL_slotz00_9);
													BgL_arg2594z00_605 =
														(((BgL_slotz00_bglt) CREF(BgL_auxz00_1712))->
														BgL_idz00);
												}
												{	/* Object/struct.scm 60 */
													obj_t BgL_list2595z00_606;

													{	/* Object/struct.scm 60 */
														obj_t BgL_arg2602z00_607;

														{	/* Object/struct.scm 60 */
															obj_t BgL_arg2608z00_608;

															BgL_arg2608z00_608 =
																MAKE_PAIR(BgL_arg2594z00_605, BNIL);
															BgL_arg2602z00_607 =
																MAKE_PAIR(BgL_arg2590z00_604,
																BgL_arg2608z00_608);
														}
														BgL_list2595z00_606 =
															MAKE_PAIR(BgL_cnamez00_7, BgL_arg2602z00_607);
													}
													BgL_arg2587z00_602 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2595z00_606);
											}}
											{	/* Object/struct.scm 60 */
												obj_t BgL_list2609z00_609;

												BgL_list2609z00_609 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg2589z00_603 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_onamez00_5, BgL_list2609z00_609);
											}
											BgL_arg2566z00_597 =
												MAKE_PAIR(BgL_arg2587z00_602, BgL_arg2589z00_603);
										}
										{	/* Object/struct.scm 58 */
											obj_t BgL_list2572z00_599;

											{	/* Object/struct.scm 58 */
												obj_t BgL_arg2576z00_600;

												{	/* Object/struct.scm 58 */
													obj_t BgL_arg2586z00_601;

													BgL_arg2586z00_601 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2576z00_600 =
														MAKE_PAIR(BgL_arg2566z00_597, BgL_arg2586z00_601);
												}
												BgL_list2572z00_599 =
													MAKE_PAIR(BINT(BgL_iz00_8), BgL_arg2576z00_600);
											}
											BgL_arg2565z00_596 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_snamez00_6, BgL_list2572z00_599);
									}}
									return MAKE_PAIR(BgL_arg2564z00_595, BgL_arg2565z00_596);
								}
							}
					}
			}
		}
	}



/* slots-length */
	long BGl_slotszd2lengthzd2zzobject_structz00(obj_t BgL_slotsz00_10)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 94 */
			{
				obj_t BgL_slotsz00_726;

				long BgL_lenz00_727;

				BgL_slotsz00_726 = BgL_slotsz00_10;
				BgL_lenz00_727 = ((long) 0);
			BgL_zc3anonymousza32755ze3z83_728:
				if (NULLP(BgL_slotsz00_726))
					{	/* Object/struct.scm 98 */
						return BgL_lenz00_727;
					}
				else
					{	/* Object/struct.scm 100 */
						bool_t BgL_testz00_1730;

						{	/* Object/struct.scm 100 */
							obj_t BgL_arg2761z00_734;

							BgL_arg2761z00_734 = CAR(BgL_slotsz00_726);
							BgL_testz00_1730 =
								BGl_slotzd2virtualzf3z21zzobject_slotsz00(
								(BgL_slotz00_bglt) (BgL_arg2761z00_734));
						}
						if (BgL_testz00_1730)
							{
								obj_t BgL_slotsz00_1734;

								BgL_slotsz00_1734 = CDR(BgL_slotsz00_726);
								BgL_slotsz00_726 = BgL_slotsz00_1734;
								goto BgL_zc3anonymousza32755ze3z83_728;
							}
						else
							{
								long BgL_lenz00_1738;

								obj_t BgL_slotsz00_1736;

								BgL_slotsz00_1736 = CDR(BgL_slotsz00_726);
								BgL_lenz00_1738 = (((long) 1) + BgL_lenz00_727);
								BgL_lenz00_727 = BgL_lenz00_1738;
								BgL_slotsz00_726 = BgL_slotsz00_1736;
								goto BgL_zc3anonymousza32755ze3z83_728;
							}
					}
			}
		}
	}



/* gen-plain-class->struct */
	obj_t BGl_genzd2plainzd2classzd2ze3structz31zzobject_structz00(obj_t
		BgL_cnamez00_11, BgL_typez00_bglt BgL_typez00_12, obj_t BgL_slotsz00_13,
		obj_t BgL_srczd2defzd2_14)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 108 */
			{	/* Object/struct.scm 109 */
				long BgL_lenz00_736;

				obj_t BgL_onamez00_737;

				obj_t BgL_snamez00_738;

				BgL_lenz00_736 =
					(((long) 1) +
					BGl_slotszd2lengthzd2zzobject_structz00(BgL_slotsz00_13));
				BgL_onamez00_737 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 16)));
				BgL_snamez00_738 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 17)));
				{	/* Object/struct.scm 113 */
					obj_t BgL_arg2762z00_739;

					{	/* Object/struct.scm 113 */
						obj_t BgL_arg2763z00_740;

						obj_t BgL_arg2764z00_741;

						BgL_arg2763z00_740 = CNST_TABLE_REF(((long) 18));
						{	/* Object/struct.scm 113 */
							obj_t BgL_arg2765z00_742;

							obj_t BgL_arg2766z00_743;

							{	/* Object/struct.scm 113 */
								obj_t BgL_arg2770z00_747;

								obj_t BgL_arg2771z00_748;

								BgL_arg2770z00_747 = CNST_TABLE_REF(((long) 19));
								{	/* Object/struct.scm 113 */
									obj_t BgL_arg2773z00_749;

									BgL_arg2773z00_749 =
										BGl_makezd2typedzd2identz00zzast_identz00(BgL_onamez00_737,
										BgL_cnamez00_11);
									{	/* Object/struct.scm 113 */
										obj_t BgL_list2775z00_751;

										BgL_list2775z00_751 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg2771z00_748 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2773z00_749, BgL_list2775z00_751);
								}}
								BgL_arg2765z00_742 =
									MAKE_PAIR(BgL_arg2770z00_747, BgL_arg2771z00_748);
							}
							{	/* Object/struct.scm 114 */
								obj_t BgL_arg2776z00_752;

								obj_t BgL_arg2777z00_753;

								BgL_arg2776z00_752 = CNST_TABLE_REF(((long) 6));
								{	/* Object/struct.scm 114 */
									obj_t BgL_arg2778z00_754;

									obj_t BgL_arg2779z00_755;

									{	/* Object/struct.scm 114 */
										obj_t BgL_arg2783z00_759;

										{	/* Object/struct.scm 114 */
											obj_t BgL_arg2785z00_761;

											{	/* Object/struct.scm 114 */
												obj_t BgL_arg2786z00_762;

												{	/* Object/struct.scm 114 */
													obj_t BgL_arg2789z00_765;

													obj_t BgL_arg2790z00_766;

													BgL_arg2789z00_765 = CNST_TABLE_REF(((long) 20));
													{	/* Object/struct.scm 114 */
														obj_t BgL_arg2791z00_767;

														{	/* Object/struct.scm 114 */
															obj_t BgL_arg2796z00_772;

															obj_t BgL_arg2797z00_773;

															BgL_arg2796z00_772 = CNST_TABLE_REF(((long) 21));
															{	/* Object/struct.scm 114 */
																obj_t BgL_list2798z00_774;

																BgL_list2798z00_774 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg2797z00_773 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_cnamez00_11, BgL_list2798z00_774);
															}
															BgL_arg2791z00_767 =
																MAKE_PAIR(BgL_arg2796z00_772,
																BgL_arg2797z00_773);
														}
														{	/* Object/struct.scm 114 */
															obj_t BgL_list2793z00_769;

															{	/* Object/struct.scm 114 */
																obj_t BgL_arg2794z00_770;

																{	/* Object/struct.scm 114 */
																	obj_t BgL_arg2795z00_771;

																	BgL_arg2795z00_771 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg2794z00_770 =
																		MAKE_PAIR(BUNSPEC, BgL_arg2795z00_771);
																}
																BgL_list2793z00_769 =
																	MAKE_PAIR(BINT(BgL_lenz00_736),
																	BgL_arg2794z00_770);
															}
															BgL_arg2790z00_766 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2791z00_767, BgL_list2793z00_769);
													}}
													BgL_arg2786z00_762 =
														MAKE_PAIR(BgL_arg2789z00_765, BgL_arg2790z00_766);
												}
												{	/* Object/struct.scm 114 */
													obj_t BgL_list2788z00_764;

													BgL_list2788z00_764 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg2785z00_761 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2786z00_762, BgL_list2788z00_764);
											}}
											BgL_arg2783z00_759 =
												MAKE_PAIR(BgL_snamez00_738, BgL_arg2785z00_761);
										}
										BgL_arg2778z00_754 = MAKE_PAIR(BgL_arg2783z00_759, BNIL);
									}
									{	/* Object/struct.scm 115 */
										obj_t BgL_arg2799z00_775;

										obj_t BgL_arg2800z00_776;

										BgL_arg2799z00_775 = CNST_TABLE_REF(((long) 12));
										{	/* Object/struct.scm 116 */
											obj_t BgL_arg2801z00_777;

											obj_t BgL_arg2802z00_778;

											{	/* Object/struct.scm 116 */
												obj_t BgL_arg2804z00_780;

												obj_t BgL_arg2805z00_781;

												BgL_arg2804z00_780 = CNST_TABLE_REF(((long) 0));
												{	/* Object/struct.scm 116 */
													obj_t BgL_list2806z00_782;

													{	/* Object/struct.scm 116 */
														obj_t BgL_arg2808z00_784;

														{	/* Object/struct.scm 116 */
															obj_t BgL_arg2809z00_785;

															BgL_arg2809z00_785 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2808z00_784 =
																MAKE_PAIR(BFALSE, BgL_arg2809z00_785);
														}
														BgL_list2806z00_782 =
															MAKE_PAIR(BINT(((long) 0)), BgL_arg2808z00_784);
													}
													BgL_arg2805z00_781 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_snamez00_738, BgL_list2806z00_782);
												}
												BgL_arg2801z00_777 =
													MAKE_PAIR(BgL_arg2804z00_780, BgL_arg2805z00_781);
											}
											{	/* Object/struct.scm 117 */
												obj_t BgL_arg2810z00_786;

												obj_t BgL_arg2811z00_787;

												{
													long BgL_iz00_790;

													obj_t BgL_slotsz00_791;

													obj_t BgL_resz00_792;

													BgL_iz00_790 = ((long) 1);
													BgL_slotsz00_791 = BgL_slotsz00_13;
													BgL_resz00_792 = BNIL;
												BgL_zc3anonymousza32812ze3z83_793:
													if ((BgL_iz00_790 == BgL_lenz00_736))
														{	/* Object/struct.scm 121 */
															BgL_arg2810z00_786 =
																bgl_reverse_bang(BgL_resz00_792);
														}
													else
														{	/* Object/struct.scm 123 */
															bool_t BgL_testz00_1779;

															{	/* Object/struct.scm 123 */
																obj_t BgL_arg2823z00_803;

																BgL_arg2823z00_803 = CAR(BgL_slotsz00_791);
																BgL_testz00_1779 =
																	BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																	(BgL_slotz00_bglt) (BgL_arg2823z00_803));
															}
															if (BgL_testz00_1779)
																{
																	obj_t BgL_slotsz00_1785;

																	long BgL_iz00_1783;

																	BgL_iz00_1783 = (BgL_iz00_790 + ((long) 1));
																	BgL_slotsz00_1785 = CDR(BgL_slotsz00_791);
																	BgL_slotsz00_791 = BgL_slotsz00_1785;
																	BgL_iz00_790 = BgL_iz00_1783;
																	goto BgL_zc3anonymousza32812ze3z83_793;
																}
															else
																{	/* Object/struct.scm 128 */
																	long BgL_arg2818z00_798;

																	obj_t BgL_arg2819z00_799;

																	obj_t BgL_arg2820z00_800;

																	BgL_arg2818z00_798 =
																		(BgL_iz00_790 + ((long) 1));
																	BgL_arg2819z00_799 = CDR(BgL_slotsz00_791);
																	BgL_arg2820z00_800 =
																		MAKE_PAIR
																		(BGl_savezd2slotzd2zzobject_structz00
																		(BgL_onamez00_737, BgL_snamez00_738,
																			BgL_cnamez00_11, BgL_iz00_790,
																			CAR(BgL_slotsz00_791)), BgL_resz00_792);
																	{
																		obj_t BgL_resz00_1794;

																		obj_t BgL_slotsz00_1793;

																		long BgL_iz00_1792;

																		BgL_iz00_1792 = BgL_arg2818z00_798;
																		BgL_slotsz00_1793 = BgL_arg2819z00_799;
																		BgL_resz00_1794 = BgL_arg2820z00_800;
																		BgL_resz00_792 = BgL_resz00_1794;
																		BgL_slotsz00_791 = BgL_slotsz00_1793;
																		BgL_iz00_790 = BgL_iz00_1792;
																		goto BgL_zc3anonymousza32812ze3z83_793;
																	}
																}
														}
												}
												BgL_arg2811z00_787 = MAKE_PAIR(BgL_snamez00_738, BNIL);
												BgL_arg2802z00_778 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2810z00_786, BgL_arg2811z00_787);
											}
											{	/* Object/struct.scm 115 */
												obj_t BgL_list2803z00_779;

												BgL_list2803z00_779 =
													MAKE_PAIR(BgL_arg2802z00_778, BNIL);
												BgL_arg2800z00_776 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg2801z00_777, BgL_list2803z00_779);
											}
										}
										BgL_arg2779z00_755 =
											MAKE_PAIR(BgL_arg2799z00_775, BgL_arg2800z00_776);
									}
									{	/* Object/struct.scm 114 */
										obj_t BgL_list2781z00_757;

										{	/* Object/struct.scm 114 */
											obj_t BgL_arg2782z00_758;

											BgL_arg2782z00_758 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2781z00_757 =
												MAKE_PAIR(BgL_arg2779z00_755, BgL_arg2782z00_758);
										}
										BgL_arg2777z00_753 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2778z00_754, BgL_list2781z00_757);
									}
								}
								BgL_arg2766z00_743 =
									MAKE_PAIR(BgL_arg2776z00_752, BgL_arg2777z00_753);
							}
							{	/* Object/struct.scm 113 */
								obj_t BgL_list2768z00_745;

								{	/* Object/struct.scm 113 */
									obj_t BgL_arg2769z00_746;

									BgL_arg2769z00_746 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2768z00_745 =
										MAKE_PAIR(BgL_arg2766z00_743, BgL_arg2769z00_746);
								}
								BgL_arg2764z00_741 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2765z00_742, BgL_list2768z00_745);
							}
						}
						BgL_arg2762z00_739 =
							MAKE_PAIR(BgL_arg2763z00_740, BgL_arg2764z00_741);
					}
					return
						BGl_epairifyz00zztools_miscz00(BgL_arg2762z00_739,
						BgL_srczd2defzd2_14);
				}
			}
		}
	}



/* gen-wide-class->struct */
	obj_t BGl_genzd2widezd2classzd2ze3structz31zzobject_structz00(obj_t
		BgL_cnamez00_15, BgL_typez00_bglt BgL_typez00_16, obj_t BgL_slotsz00_17,
		obj_t BgL_srczd2defzd2_18)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 142 */
			{	/* Object/struct.scm 143 */
				long BgL_lenz00_807;

				BgL_lenz00_807 =
					BGl_slotszd2lengthzd2zzobject_structz00(BgL_slotsz00_17);
				{	/* Object/struct.scm 143 */
					obj_t BgL_onamez00_808;

					BgL_onamez00_808 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 16)));
					{	/* Object/struct.scm 144 */
						obj_t BgL_resz00_809;

						BgL_resz00_809 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 17)));
						{	/* Object/struct.scm 145 */
							obj_t BgL_tresz00_810;

							{	/* Object/struct.scm 146 */
								obj_t BgL_arg2923z00_910;

								{	/* Object/struct.scm 146 */
									obj_t BgL_arg2924z00_911;

									obj_t BgL_arg2925z00_912;

									{	/* Object/struct.scm 146 */
										obj_t BgL_res3257z00_1439;

										{	/* Object/struct.scm 146 */
											obj_t BgL_symbolz00_1437;

											BgL_symbolz00_1437 = BgL_resz00_809;
											{	/* Object/struct.scm 146 */
												obj_t BgL_arg2063z00_1438;

												BgL_arg2063z00_1438 =
													SYMBOL_TO_STRING(BgL_symbolz00_1437);
												BgL_res3257z00_1439 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1438);
										}}
										BgL_arg2924z00_911 = BgL_res3257z00_1439;
									}
									{	/* Object/struct.scm 146 */
										obj_t BgL_res3258z00_1442;

										{	/* Object/struct.scm 146 */
											obj_t BgL_symbolz00_1440;

											BgL_symbolz00_1440 = CNST_TABLE_REF(((long) 22));
											{	/* Object/struct.scm 146 */
												obj_t BgL_arg2063z00_1441;

												BgL_arg2063z00_1441 =
													SYMBOL_TO_STRING(BgL_symbolz00_1440);
												BgL_res3258z00_1442 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1441);
										}}
										BgL_arg2925z00_912 = BgL_res3258z00_1442;
									}
									{	/* Object/struct.scm 146 */
										obj_t BgL_list2926z00_913;

										{	/* Object/struct.scm 146 */
											obj_t BgL_arg2927z00_914;

											BgL_arg2927z00_914 = MAKE_PAIR(BgL_arg2925z00_912, BNIL);
											BgL_list2926z00_913 =
												MAKE_PAIR(BgL_arg2924z00_911, BgL_arg2927z00_914);
										}
										BgL_arg2923z00_910 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2926z00_913);
								}}
								BgL_tresz00_810 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2923z00_910));
							}
							{	/* Object/struct.scm 146 */
								obj_t BgL_auxz00_811;

								BgL_auxz00_811 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											23)));
								{	/* Object/struct.scm 147 */

									{	/* Object/struct.scm 149 */
										obj_t BgL_arg2827z00_812;

										{	/* Object/struct.scm 149 */
											obj_t BgL_arg2828z00_813;

											obj_t BgL_arg2829z00_814;

											BgL_arg2828z00_813 = CNST_TABLE_REF(((long) 18));
											{	/* Object/struct.scm 149 */
												obj_t BgL_arg2830z00_815;

												obj_t BgL_arg2831z00_816;

												{	/* Object/struct.scm 149 */
													obj_t BgL_arg2835z00_820;

													obj_t BgL_arg2836z00_821;

													BgL_arg2835z00_820 = CNST_TABLE_REF(((long) 19));
													{	/* Object/struct.scm 149 */
														obj_t BgL_arg2837z00_822;

														BgL_arg2837z00_822 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_onamez00_808, BgL_cnamez00_15);
														{	/* Object/struct.scm 149 */
															obj_t BgL_list2839z00_824;

															BgL_list2839z00_824 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg2836z00_821 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2837z00_822, BgL_list2839z00_824);
													}}
													BgL_arg2830z00_815 =
														MAKE_PAIR(BgL_arg2835z00_820, BgL_arg2836z00_821);
												}
												{	/* Object/struct.scm 150 */
													obj_t BgL_arg2841z00_825;

													obj_t BgL_arg2842z00_826;

													BgL_arg2841z00_825 = CNST_TABLE_REF(((long) 6));
													{	/* Object/struct.scm 150 */
														obj_t BgL_arg2843z00_827;

														obj_t BgL_arg2844z00_828;

														{	/* Object/struct.scm 150 */
															obj_t BgL_arg2848z00_832;

															{	/* Object/struct.scm 150 */
																obj_t BgL_arg2850z00_834;

																{	/* Object/struct.scm 150 */
																	obj_t BgL_arg2851z00_835;

																	BgL_arg2851z00_835 =
																		MAKE_PAIR(CNST_TABLE_REF(((long) 24)),
																		BNIL);
																	{	/* Object/struct.scm 150 */
																		obj_t BgL_list2853z00_837;

																		BgL_list2853z00_837 = MAKE_PAIR(BNIL, BNIL);
																		BgL_arg2850z00_834 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2851z00_835, BgL_list2853z00_837);
																}}
																BgL_arg2848z00_832 =
																	MAKE_PAIR(BgL_tresz00_810,
																	BgL_arg2850z00_834);
															}
															BgL_arg2843z00_827 =
																MAKE_PAIR(BgL_arg2848z00_832, BNIL);
														}
														{	/* Object/struct.scm 151 */
															obj_t BgL_arg2854z00_838;

															obj_t BgL_arg2856z00_839;

															BgL_arg2854z00_838 = CNST_TABLE_REF(((long) 6));
															{	/* Object/struct.scm 151 */
																obj_t BgL_arg2857z00_840;

																obj_t BgL_arg2858z00_841;

																{	/* Object/struct.scm 151 */
																	obj_t BgL_arg2861z00_843;

																	{	/* Object/struct.scm 151 */
																		obj_t BgL_arg2863z00_845;

																		{	/* Object/struct.scm 151 */
																			obj_t BgL_arg2864z00_846;

																			{	/* Object/struct.scm 151 */
																				obj_t BgL_arg2867z00_849;

																				obj_t BgL_arg2868z00_850;

																				BgL_arg2867z00_849 =
																					CNST_TABLE_REF(((long) 20));
																				{	/* Object/struct.scm 151 */
																					obj_t BgL_arg2869z00_851;

																					{	/* Object/struct.scm 151 */
																						obj_t BgL_arg2874z00_856;

																						obj_t BgL_arg2875z00_857;

																						BgL_arg2874z00_856 =
																							CNST_TABLE_REF(((long) 21));
																						{	/* Object/struct.scm 151 */
																							obj_t BgL_list2876z00_858;

																							BgL_list2876z00_858 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2875z00_857 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_cnamez00_15,
																								BgL_list2876z00_858);
																						}
																						BgL_arg2869z00_851 =
																							MAKE_PAIR(BgL_arg2874z00_856,
																							BgL_arg2875z00_857);
																					}
																					{	/* Object/struct.scm 151 */
																						obj_t BgL_list2871z00_853;

																						{	/* Object/struct.scm 151 */
																							obj_t BgL_arg2872z00_854;

																							{	/* Object/struct.scm 151 */
																								obj_t BgL_arg2873z00_855;

																								BgL_arg2873z00_855 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2872z00_854 =
																									MAKE_PAIR(BUNSPEC,
																									BgL_arg2873z00_855);
																							}
																							BgL_list2871z00_853 =
																								MAKE_PAIR(BINT(BgL_lenz00_807),
																								BgL_arg2872z00_854);
																						}
																						BgL_arg2868z00_850 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2869z00_851,
																							BgL_list2871z00_853);
																				}}
																				BgL_arg2864z00_846 =
																					MAKE_PAIR(BgL_arg2867z00_849,
																					BgL_arg2868z00_850);
																			}
																			{	/* Object/struct.scm 151 */
																				obj_t BgL_list2866z00_848;

																				BgL_list2866z00_848 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2863z00_845 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2864z00_846,
																					BgL_list2866z00_848);
																		}}
																		BgL_arg2861z00_843 =
																			MAKE_PAIR(BgL_auxz00_811,
																			BgL_arg2863z00_845);
																	}
																	BgL_arg2857z00_840 =
																		MAKE_PAIR(BgL_arg2861z00_843, BNIL);
																}
																{	/* Object/struct.scm 152 */
																	obj_t BgL_arg2877z00_859;

																	obj_t BgL_arg2878z00_860;

																	{
																		long BgL_iz00_863;

																		obj_t BgL_slotsz00_864;

																		obj_t BgL_resz00_865;

																		BgL_iz00_863 = ((long) 0);
																		BgL_slotsz00_864 = BgL_slotsz00_17;
																		BgL_resz00_865 = BNIL;
																	BgL_zc3anonymousza32879ze3z83_866:
																		if ((BgL_iz00_863 == BgL_lenz00_807))
																			{	/* Object/struct.scm 156 */
																				BgL_arg2877z00_859 =
																					bgl_reverse_bang(BgL_resz00_865);
																			}
																		else
																			{	/* Object/struct.scm 158 */
																				bool_t BgL_testz00_1858;

																				{	/* Object/struct.scm 158 */
																					obj_t BgL_arg2890z00_876;

																					BgL_arg2890z00_876 =
																						CAR(BgL_slotsz00_864);
																					BgL_testz00_1858 =
																						BGl_slotzd2virtualzf3z21zzobject_slotsz00
																						((BgL_slotz00_bglt)
																						(BgL_arg2890z00_876));
																				}
																				if (BgL_testz00_1858)
																					{
																						obj_t BgL_slotsz00_1864;

																						long BgL_iz00_1862;

																						BgL_iz00_1862 =
																							(BgL_iz00_863 + ((long) 1));
																						BgL_slotsz00_1864 =
																							CDR(BgL_slotsz00_864);
																						BgL_slotsz00_864 =
																							BgL_slotsz00_1864;
																						BgL_iz00_863 = BgL_iz00_1862;
																						goto
																							BgL_zc3anonymousza32879ze3z83_866;
																					}
																				else
																					{	/* Object/struct.scm 163 */
																						long BgL_arg2884z00_871;

																						obj_t BgL_arg2885z00_872;

																						obj_t BgL_arg2886z00_873;

																						BgL_arg2884z00_871 =
																							(BgL_iz00_863 + ((long) 1));
																						BgL_arg2885z00_872 =
																							CDR(BgL_slotsz00_864);
																						BgL_arg2886z00_873 =
																							MAKE_PAIR
																							(BGl_savezd2slotzd2zzobject_structz00
																							(BgL_onamez00_808, BgL_auxz00_811,
																								BgL_cnamez00_15, BgL_iz00_863,
																								CAR(BgL_slotsz00_864)),
																							BgL_resz00_865);
																						{
																							obj_t BgL_resz00_1873;

																							obj_t BgL_slotsz00_1872;

																							long BgL_iz00_1871;

																							BgL_iz00_1871 =
																								BgL_arg2884z00_871;
																							BgL_slotsz00_1872 =
																								BgL_arg2885z00_872;
																							BgL_resz00_1873 =
																								BgL_arg2886z00_873;
																							BgL_resz00_865 = BgL_resz00_1873;
																							BgL_slotsz00_864 =
																								BgL_slotsz00_1872;
																							BgL_iz00_863 = BgL_iz00_1871;
																							goto
																								BgL_zc3anonymousza32879ze3z83_866;
																						}
																					}
																			}
																	}
																	{	/* Object/struct.scm 167 */
																		obj_t BgL_arg2891z00_878;

																		obj_t BgL_arg2892z00_879;

																		{	/* Object/struct.scm 167 */
																			obj_t BgL_arg2893z00_880;

																			obj_t BgL_arg2894z00_881;

																			BgL_arg2893z00_880 =
																				CNST_TABLE_REF(((long) 0));
																			{	/* Object/struct.scm 167 */
																				obj_t BgL_list2895z00_882;

																				{	/* Object/struct.scm 167 */
																					obj_t BgL_arg2897z00_884;

																					{	/* Object/struct.scm 167 */
																						obj_t BgL_arg2898z00_885;

																						BgL_arg2898z00_885 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2897z00_884 =
																							MAKE_PAIR(BgL_auxz00_811,
																							BgL_arg2898z00_885);
																					}
																					BgL_list2895z00_882 =
																						MAKE_PAIR(BINT(((long) 0)),
																						BgL_arg2897z00_884);
																				}
																				BgL_arg2894z00_881 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_resz00_809, BgL_list2895z00_882);
																			}
																			BgL_arg2891z00_878 =
																				MAKE_PAIR(BgL_arg2893z00_880,
																				BgL_arg2894z00_881);
																		}
																		{	/* Object/struct.scm 169 */
																			obj_t BgL_arg2899z00_886;

																			obj_t BgL_arg2900z00_887;

																			{	/* Object/struct.scm 169 */
																				obj_t BgL_arg2905z00_892;

																				obj_t BgL_arg2906z00_893;

																				BgL_arg2905z00_892 =
																					CNST_TABLE_REF(((long) 25));
																				{	/* Object/struct.scm 169 */
																					obj_t BgL_arg2907z00_894;

																					{	/* Object/struct.scm 169 */
																						obj_t BgL_arg2911z00_898;

																						obj_t BgL_arg2912z00_899;

																						BgL_arg2911z00_898 =
																							CNST_TABLE_REF(((long) 26));
																						{	/* Object/struct.scm 169 */
																							obj_t BgL_list2913z00_900;

																							BgL_list2913z00_900 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2912z00_899 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_resz00_809,
																								BgL_list2913z00_900);
																						}
																						BgL_arg2907z00_894 =
																							MAKE_PAIR(BgL_arg2911z00_898,
																							BgL_arg2912z00_899);
																					}
																					{	/* Object/struct.scm 169 */
																						obj_t BgL_list2909z00_896;

																						{	/* Object/struct.scm 169 */
																							obj_t BgL_arg2910z00_897;

																							BgL_arg2910z00_897 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2909z00_896 =
																								MAKE_PAIR(BgL_arg2907z00_894,
																								BgL_arg2910z00_897);
																						}
																						BgL_arg2906z00_893 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_auxz00_811,
																							BgL_list2909z00_896);
																				}}
																				BgL_arg2899z00_886 =
																					MAKE_PAIR(BgL_arg2905z00_892,
																					BgL_arg2906z00_893);
																			}
																			{	/* Object/struct.scm 170 */
																				obj_t BgL_arg2914z00_901;

																				obj_t BgL_arg2915z00_902;

																				BgL_arg2914z00_901 =
																					CNST_TABLE_REF(((long) 25));
																				{	/* Object/struct.scm 170 */
																					obj_t BgL_arg2916z00_903;

																					{	/* Object/struct.scm 170 */
																						obj_t BgL_arg2920z00_907;

																						obj_t BgL_arg2921z00_908;

																						BgL_arg2920z00_907 =
																							CNST_TABLE_REF(((long) 21));
																						{	/* Object/struct.scm 170 */
																							obj_t BgL_list2922z00_909;

																							BgL_list2922z00_909 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2921z00_908 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_cnamez00_15,
																								BgL_list2922z00_909);
																						}
																						BgL_arg2916z00_903 =
																							MAKE_PAIR(BgL_arg2920z00_907,
																							BgL_arg2921z00_908);
																					}
																					{	/* Object/struct.scm 170 */
																						obj_t BgL_list2918z00_905;

																						{	/* Object/struct.scm 170 */
																							obj_t BgL_arg2919z00_906;

																							BgL_arg2919z00_906 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2918z00_905 =
																								MAKE_PAIR(BgL_arg2916z00_903,
																								BgL_arg2919z00_906);
																						}
																						BgL_arg2915z00_902 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_resz00_809,
																							BgL_list2918z00_905);
																				}}
																				BgL_arg2900z00_887 =
																					MAKE_PAIR(BgL_arg2914z00_901,
																					BgL_arg2915z00_902);
																			}
																			{	/* Object/struct.scm 151 */
																				obj_t BgL_list2902z00_889;

																				{	/* Object/struct.scm 151 */
																					obj_t BgL_arg2903z00_890;

																					{	/* Object/struct.scm 151 */
																						obj_t BgL_arg2904z00_891;

																						BgL_arg2904z00_891 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2903z00_890 =
																							MAKE_PAIR(BgL_resz00_809,
																							BgL_arg2904z00_891);
																					}
																					BgL_list2902z00_889 =
																						MAKE_PAIR(BgL_arg2900z00_887,
																						BgL_arg2903z00_890);
																				}
																				BgL_arg2892z00_879 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2899z00_886,
																					BgL_list2902z00_889);
																		}}
																		BgL_arg2878z00_860 =
																			MAKE_PAIR(BgL_arg2891z00_878,
																			BgL_arg2892z00_879);
																	}
																	BgL_arg2858z00_841 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2877z00_859, BgL_arg2878z00_860);
																}
																{	/* Object/struct.scm 151 */
																	obj_t BgL_list2859z00_842;

																	BgL_list2859z00_842 =
																		MAKE_PAIR(BgL_arg2858z00_841, BNIL);
																	BgL_arg2856z00_839 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2857z00_840, BgL_list2859z00_842);
															}}
															BgL_arg2844z00_828 =
																MAKE_PAIR(BgL_arg2854z00_838,
																BgL_arg2856z00_839);
														}
														{	/* Object/struct.scm 150 */
															obj_t BgL_list2846z00_830;

															{	/* Object/struct.scm 150 */
																obj_t BgL_arg2847z00_831;

																BgL_arg2847z00_831 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2846z00_830 =
																	MAKE_PAIR(BgL_arg2844z00_828,
																	BgL_arg2847z00_831);
															}
															BgL_arg2842z00_826 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2843z00_827, BgL_list2846z00_830);
													}}
													BgL_arg2831z00_816 =
														MAKE_PAIR(BgL_arg2841z00_825, BgL_arg2842z00_826);
												}
												{	/* Object/struct.scm 149 */
													obj_t BgL_list2833z00_818;

													{	/* Object/struct.scm 149 */
														obj_t BgL_arg2834z00_819;

														BgL_arg2834z00_819 = MAKE_PAIR(BNIL, BNIL);
														BgL_list2833z00_818 =
															MAKE_PAIR(BgL_arg2831z00_816, BgL_arg2834z00_819);
													}
													BgL_arg2829z00_814 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg2830z00_815, BgL_list2833z00_818);
											}}
											BgL_arg2827z00_812 =
												MAKE_PAIR(BgL_arg2828z00_813, BgL_arg2829z00_814);
										}
										return
											BGl_epairifyz00zztools_miscz00(BgL_arg2827z00_812,
											BgL_srczd2defzd2_18);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* restore-slot */
	obj_t BGl_restorezd2slotzd2zzobject_structz00(obj_t BgL_onamez00_19,
		obj_t BgL_snamez00_20, obj_t BgL_cnamez00_21,
		BgL_typez00_bglt BgL_typez00_22, long BgL_iz00_23, obj_t BgL_slotz00_24)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 178 */
			{	/* Object/struct.scm 179 */
				obj_t BgL_loopz00_915;

				BgL_loopz00_915 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 4)));
				{	/* Object/struct.scm 179 */
					obj_t BgL_runnerz00_916;

					BgL_runnerz00_916 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 27)));
					{	/* Object/struct.scm 180 */
						obj_t BgL_vz00_917;

						BgL_vz00_917 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 28)));
						{	/* Object/struct.scm 181 */
							obj_t BgL_lenz00_918;

							BgL_lenz00_918 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 5)));
							{	/* Object/struct.scm 182 */
								obj_t BgL_runnerzd2typedzd2_919;

								{	/* Object/struct.scm 183 */
									obj_t BgL_arg3056z00_1048;

									{	/* Object/struct.scm 183 */
										obj_t BgL_arg3057z00_1049;

										obj_t BgL_arg3058z00_1050;

										{	/* Object/struct.scm 183 */
											obj_t BgL_res3259z00_1456;

											{	/* Object/struct.scm 183 */
												obj_t BgL_symbolz00_1454;

												BgL_symbolz00_1454 = BgL_runnerz00_916;
												{	/* Object/struct.scm 183 */
													obj_t BgL_arg2063z00_1455;

													BgL_arg2063z00_1455 =
														SYMBOL_TO_STRING(BgL_symbolz00_1454);
													BgL_res3259z00_1456 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1455);
											}}
											BgL_arg3057z00_1049 = BgL_res3259z00_1456;
										}
										{	/* Object/struct.scm 183 */
											obj_t BgL_res3260z00_1459;

											{	/* Object/struct.scm 183 */
												obj_t BgL_symbolz00_1457;

												BgL_symbolz00_1457 = CNST_TABLE_REF(((long) 29));
												{	/* Object/struct.scm 183 */
													obj_t BgL_arg2063z00_1458;

													BgL_arg2063z00_1458 =
														SYMBOL_TO_STRING(BgL_symbolz00_1457);
													BgL_res3260z00_1459 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1458);
											}}
											BgL_arg3058z00_1050 = BgL_res3260z00_1459;
										}
										{	/* Object/struct.scm 183 */
											obj_t BgL_list3059z00_1051;

											{	/* Object/struct.scm 183 */
												obj_t BgL_arg3060z00_1052;

												BgL_arg3060z00_1052 =
													MAKE_PAIR(BgL_arg3058z00_1050, BNIL);
												BgL_list3059z00_1051 =
													MAKE_PAIR(BgL_arg3057z00_1049, BgL_arg3060z00_1052);
											}
											BgL_arg3056z00_1048 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list3059z00_1051);
									}}
									BgL_runnerzd2typedzd2_919 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg3056z00_1048));
								}
								{	/* Object/struct.scm 183 */

									if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
											(BgL_slotz00_bglt) (BgL_slotz00_24)))
										{	/* Object/struct.scm 185 */
											return BUNSPEC;
										}
									else
										{	/* Object/struct.scm 187 */
											bool_t BgL_testz00_1938;

											{	/* Object/struct.scm 187 */
												BgL_slotz00_bglt BgL_obj2451z00_1461;

												BgL_obj2451z00_1461 =
													(BgL_slotz00_bglt) (BgL_slotz00_24);
												BgL_testz00_1938 =
													CBOOL(
													(((BgL_slotz00_bglt) CREF(BgL_obj2451z00_1461))->
														BgL_indexedz00));
											}
											if (BgL_testz00_1938)
												{	/* Object/struct.scm 195 */
													obj_t BgL_fz00_922;

													BgL_fz00_922 =
														BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 30)));
													{	/* Object/struct.scm 195 */
														obj_t BgL_tfz00_923;

														{	/* Object/struct.scm 196 */
															obj_t BgL_arg3034z00_1026;

															{	/* Object/struct.scm 196 */
																BgL_typez00_bglt BgL_obj1508z00_1463;

																{	/* Object/struct.scm 196 */
																	BgL_slotz00_bglt BgL_obj2439z00_1462;

																	BgL_obj2439z00_1462 =
																		(BgL_slotz00_bglt) (BgL_slotz00_24);
																	BgL_obj1508z00_1463 =
																		(BgL_typez00_bglt) (
																		(((BgL_slotz00_bglt)
																				CREF(BgL_obj2439z00_1462))->
																			BgL_typez00));
																}
																BgL_arg3034z00_1026 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_obj1508z00_1463))->BgL_idz00);
															}
															BgL_tfz00_923 =
																BGl_makezd2typedzd2identz00zzast_identz00
																(BgL_fz00_922, BgL_arg3034z00_1026);
														}
														{	/* Object/struct.scm 196 */

															{	/* Object/struct.scm 197 */
																obj_t BgL_arg2930z00_924;

																obj_t BgL_arg2931z00_925;

																BgL_arg2930z00_924 = CNST_TABLE_REF(((long) 6));
																{	/* Object/struct.scm 197 */
																	obj_t BgL_arg2932z00_926;

																	obj_t BgL_arg2933z00_927;

																	{	/* Object/struct.scm 197 */
																		obj_t BgL_arg2937z00_931;

																		{	/* Object/struct.scm 197 */
																			obj_t BgL_arg2939z00_933;

																			{	/* Object/struct.scm 197 */
																				obj_t BgL_arg2940z00_934;

																				{	/* Object/struct.scm 197 */
																					obj_t BgL_arg2944z00_937;

																					obj_t BgL_arg2945z00_938;

																					BgL_arg2944z00_937 =
																						CNST_TABLE_REF(((long) 31));
																					{	/* Object/struct.scm 197 */
																						obj_t BgL_list2946z00_939;

																						{	/* Object/struct.scm 197 */
																							obj_t BgL_arg2947z00_940;

																							BgL_arg2947z00_940 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2946z00_939 =
																								MAKE_PAIR(BINT(BgL_iz00_23),
																								BgL_arg2947z00_940);
																						}
																						BgL_arg2945z00_938 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(CNST_TABLE_REF(((long) 32)),
																							BgL_list2946z00_939);
																					}
																					BgL_arg2940z00_934 =
																						MAKE_PAIR(BgL_arg2944z00_937,
																						BgL_arg2945z00_938);
																				}
																				{	/* Object/struct.scm 197 */
																					obj_t BgL_list2943z00_936;

																					BgL_list2943z00_936 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg2939z00_933 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2940z00_934,
																						BgL_list2943z00_936);
																			}}
																			BgL_arg2937z00_931 =
																				MAKE_PAIR(BgL_vz00_917,
																				BgL_arg2939z00_933);
																		}
																		BgL_arg2932z00_926 =
																			MAKE_PAIR(BgL_arg2937z00_931, BNIL);
																	}
																	{	/* Object/struct.scm 198 */
																		obj_t BgL_arg2948z00_941;

																		obj_t BgL_arg2949z00_942;

																		BgL_arg2948z00_941 =
																			CNST_TABLE_REF(((long) 6));
																		{	/* Object/struct.scm 198 */
																			obj_t BgL_arg2950z00_943;

																			obj_t BgL_arg2951z00_944;

																			obj_t BgL_arg2952z00_945;

																			{	/* Object/struct.scm 198 */
																				obj_t BgL_arg2958z00_950;

																				{	/* Object/struct.scm 198 */
																					obj_t BgL_arg2960z00_952;

																					obj_t BgL_arg2961z00_953;

																					{	/* Object/struct.scm 198 */
																						obj_t BgL_arg2962z00_954;

																						{	/* Object/struct.scm 198 */
																							obj_t BgL_arg2963z00_955;

																							obj_t BgL_arg2964z00_956;

																							{	/* Object/struct.scm 198 */
																								obj_t BgL_res3261z00_1466;

																								{	/* Object/struct.scm 198 */
																									obj_t BgL_symbolz00_1464;

																									BgL_symbolz00_1464 =
																										BgL_lenz00_918;
																									{	/* Object/struct.scm 198 */
																										obj_t BgL_arg2063z00_1465;

																										BgL_arg2063z00_1465 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_1464);
																										BgL_res3261z00_1466 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_1465);
																								}}
																								BgL_arg2963z00_955 =
																									BgL_res3261z00_1466;
																							}
																							{	/* Object/struct.scm 198 */
																								obj_t BgL_res3262z00_1469;

																								{	/* Object/struct.scm 198 */
																									obj_t BgL_symbolz00_1467;

																									BgL_symbolz00_1467 =
																										CNST_TABLE_REF(((long) 29));
																									{	/* Object/struct.scm 198 */
																										obj_t BgL_arg2063z00_1468;

																										BgL_arg2063z00_1468 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_1467);
																										BgL_res3262z00_1469 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_1468);
																								}}
																								BgL_arg2964z00_956 =
																									BgL_res3262z00_1469;
																							}
																							{	/* Object/struct.scm 198 */
																								obj_t BgL_list2965z00_957;

																								{	/* Object/struct.scm 198 */
																									obj_t BgL_arg2966z00_958;

																									BgL_arg2966z00_958 =
																										MAKE_PAIR
																										(BgL_arg2964z00_956, BNIL);
																									BgL_list2965z00_957 =
																										MAKE_PAIR
																										(BgL_arg2963z00_955,
																										BgL_arg2966z00_958);
																								}
																								BgL_arg2962z00_954 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2965z00_957);
																						}}
																						BgL_arg2960z00_952 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2962z00_954));
																					}
																					{	/* Object/struct.scm 198 */
																						obj_t BgL_arg2967z00_959;

																						{	/* Object/struct.scm 198 */
																							obj_t BgL_arg2970z00_962;

																							obj_t BgL_arg2971z00_963;

																							BgL_arg2970z00_962 =
																								CNST_TABLE_REF(((long) 33));
																							{	/* Object/struct.scm 198 */
																								obj_t BgL_list2972z00_964;

																								BgL_list2972z00_964 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg2971z00_963 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_vz00_917,
																									BgL_list2972z00_964);
																							}
																							BgL_arg2967z00_959 =
																								MAKE_PAIR(BgL_arg2970z00_962,
																								BgL_arg2971z00_963);
																						}
																						{	/* Object/struct.scm 198 */
																							obj_t BgL_list2969z00_961;

																							BgL_list2969z00_961 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg2961z00_953 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg2967z00_959,
																								BgL_list2969z00_961);
																					}}
																					BgL_arg2958z00_950 =
																						MAKE_PAIR(BgL_arg2960z00_952,
																						BgL_arg2961z00_953);
																				}
																				BgL_arg2950z00_943 =
																					MAKE_PAIR(BgL_arg2958z00_950, BNIL);
																			}
																			BgL_arg2951z00_944 =
																				BGl_makezd2pragmazd2indexedzd2initzd2setz12z12zzobject_toolsz00
																				(BgL_typez00_22,
																				(BgL_slotz00_bglt) (BgL_slotz00_24),
																				CNST_TABLE_REF(((long) 34)),
																				BgL_lenz00_918);
																			{	/* Object/struct.scm 201 */
																				obj_t BgL_arg2973z00_965;

																				obj_t BgL_arg2974z00_966;

																				BgL_arg2973z00_965 =
																					CNST_TABLE_REF(((long) 9));
																				{	/* Object/struct.scm 201 */
																					obj_t BgL_arg2975z00_967;

																					obj_t BgL_arg2976z00_968;

																					{	/* Object/struct.scm 201 */
																						obj_t BgL_arg2980z00_972;

																						{	/* Object/struct.scm 201 */
																							obj_t BgL_arg2982z00_974;

																							{	/* Object/struct.scm 201 */
																								obj_t BgL_arg2983z00_975;

																								obj_t BgL_arg2984z00_976;

																								BgL_arg2983z00_975 =
																									MAKE_PAIR
																									(BgL_runnerzd2typedzd2_919,
																									BNIL);
																								{	/* Object/struct.scm 202 */
																									obj_t BgL_arg2988z00_980;

																									obj_t BgL_arg2989z00_981;

																									BgL_arg2988z00_980 =
																										CNST_TABLE_REF(((long) 10));
																									{	/* Object/struct.scm 202 */
																										obj_t BgL_arg2990z00_982;

																										obj_t BgL_arg2991z00_983;

																										obj_t BgL_arg2992z00_984;

																										{	/* Object/struct.scm 202 */
																											obj_t BgL_arg2997z00_989;

																											obj_t BgL_arg2998z00_990;

																											BgL_arg2997z00_989 =
																												CNST_TABLE_REF(((long)
																													11));
																											{	/* Object/struct.scm 202 */
																												obj_t
																													BgL_list2999z00_991;
																												{	/* Object/struct.scm 202 */
																													obj_t
																														BgL_arg3000z00_992;
																													BgL_arg3000z00_992 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list2999z00_991 =
																														MAKE_PAIR
																														(BgL_lenz00_918,
																														BgL_arg3000z00_992);
																												}
																												BgL_arg2998z00_990 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_runnerz00_916,
																													BgL_list2999z00_991);
																											}
																											BgL_arg2990z00_982 =
																												MAKE_PAIR
																												(BgL_arg2997z00_989,
																												BgL_arg2998z00_990);
																										}
																										{	/* Object/struct.scm 203 */
																											obj_t BgL_arg3001z00_993;

																											obj_t BgL_arg3002z00_994;

																											BgL_arg3001z00_993 =
																												CNST_TABLE_REF(((long)
																													21));
																											{	/* Object/struct.scm 203 */
																												obj_t
																													BgL_list3003z00_995;
																												BgL_list3003z00_995 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg3002z00_994 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 35)),
																													BgL_list3003z00_995);
																											}
																											BgL_arg2991z00_983 =
																												MAKE_PAIR
																												(BgL_arg3001z00_993,
																												BgL_arg3002z00_994);
																										}
																										{	/* Object/struct.scm 204 */
																											obj_t BgL_arg3004z00_996;

																											obj_t BgL_arg3005z00_997;

																											BgL_arg3004z00_996 =
																												CNST_TABLE_REF(((long)
																													6));
																											{	/* Object/struct.scm 204 */
																												obj_t
																													BgL_arg3006z00_998;
																												obj_t
																													BgL_arg3007z00_999;
																												obj_t
																													BgL_arg3008z00_1000;
																												{	/* Object/struct.scm 204 */
																													obj_t
																														BgL_arg3013z00_1005;
																													{	/* Object/struct.scm 204 */
																														obj_t
																															BgL_arg3015z00_1007;
																														{	/* Object/struct.scm 204 */
																															obj_t
																																BgL_arg3016z00_1008;
																															{	/* Object/struct.scm 204 */
																																obj_t
																																	BgL_arg3019z00_1011;
																																obj_t
																																	BgL_arg3020z00_1012;
																																BgL_arg3019z00_1011
																																	=
																																	CNST_TABLE_REF
																																	(((long) 36));
																																{	/* Object/struct.scm 204 */
																																	obj_t
																																		BgL_list3021z00_1013;
																																	{	/* Object/struct.scm 204 */
																																		obj_t
																																			BgL_arg3022z00_1014;
																																		BgL_arg3022z00_1014
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list3021z00_1013
																																			=
																																			MAKE_PAIR
																																			(BgL_runnerz00_916,
																																			BgL_arg3022z00_1014);
																																	}
																																	BgL_arg3020z00_1012
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_vz00_917,
																																		BgL_list3021z00_1013);
																																}
																																BgL_arg3016z00_1008
																																	=
																																	MAKE_PAIR
																																	(BgL_arg3019z00_1011,
																																	BgL_arg3020z00_1012);
																															}
																															{	/* Object/struct.scm 204 */
																																obj_t
																																	BgL_list3018z00_1010;
																																BgL_list3018z00_1010
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg3015z00_1007
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg3016z00_1008,
																																	BgL_list3018z00_1010);
																														}}
																														BgL_arg3013z00_1005
																															=
																															MAKE_PAIR
																															(BgL_tfz00_923,
																															BgL_arg3015z00_1007);
																													}
																													BgL_arg3006z00_998 =
																														MAKE_PAIR
																														(BgL_arg3013z00_1005,
																														BNIL);
																												}
																												BgL_arg3007z00_999 =
																													BGl_makezd2pragmazd2indexedzd2setz12zc0zzobject_toolsz00
																													(BgL_typez00_22,
																													(BgL_slotz00_bglt)
																													(BgL_slotz00_24),
																													CNST_TABLE_REF(((long)
																															34)),
																													BgL_fz00_922,
																													BgL_runnerz00_916);
																												{	/* Object/struct.scm 211 */
																													obj_t
																														BgL_arg3023z00_1015;
																													{	/* Object/struct.scm 211 */
																														obj_t
																															BgL_arg3024z00_1016;
																														{	/* Object/struct.scm 211 */
																															obj_t
																																BgL_arg3027z00_1019;
																															obj_t
																																BgL_arg3028z00_1020;
																															BgL_arg3027z00_1019
																																=
																																CNST_TABLE_REF((
																																	(long) 15));
																															{	/* Object/struct.scm 211 */
																																obj_t
																																	BgL_list3029z00_1021;
																																{	/* Object/struct.scm 211 */
																																	obj_t
																																		BgL_arg3031z00_1023;
																																	BgL_arg3031z00_1023
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list3029z00_1021
																																		=
																																		MAKE_PAIR
																																		(BINT((
																																				(long)
																																				1)),
																																		BgL_arg3031z00_1023);
																																}
																																BgL_arg3028z00_1020
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_runnerz00_916,
																																	BgL_list3029z00_1021);
																															}
																															BgL_arg3024z00_1016
																																=
																																MAKE_PAIR
																																(BgL_arg3027z00_1019,
																																BgL_arg3028z00_1020);
																														}
																														{	/* Object/struct.scm 211 */
																															obj_t
																																BgL_list3026z00_1018;
																															BgL_list3026z00_1018
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg3023z00_1015
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg3024z00_1016,
																																BgL_list3026z00_1018);
																													}}
																													BgL_arg3008z00_1000 =
																														MAKE_PAIR
																														(BgL_loopz00_915,
																														BgL_arg3023z00_1015);
																												}
																												{	/* Object/struct.scm 204 */
																													obj_t
																														BgL_list3010z00_1002;
																													{	/* Object/struct.scm 204 */
																														obj_t
																															BgL_arg3011z00_1003;
																														{	/* Object/struct.scm 204 */
																															obj_t
																																BgL_arg3012z00_1004;
																															BgL_arg3012z00_1004
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg3011z00_1003
																																=
																																MAKE_PAIR
																																(BgL_arg3008z00_1000,
																																BgL_arg3012z00_1004);
																														}
																														BgL_list3010z00_1002
																															=
																															MAKE_PAIR
																															(BgL_arg3007z00_999,
																															BgL_arg3011z00_1003);
																													}
																													BgL_arg3005z00_997 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg3006z00_998,
																														BgL_list3010z00_1002);
																											}}
																											BgL_arg2992z00_984 =
																												MAKE_PAIR
																												(BgL_arg3004z00_996,
																												BgL_arg3005z00_997);
																										}
																										{	/* Object/struct.scm 202 */
																											obj_t BgL_list2994z00_986;

																											{	/* Object/struct.scm 202 */
																												obj_t
																													BgL_arg2995z00_987;
																												{	/* Object/struct.scm 202 */
																													obj_t
																														BgL_arg2996z00_988;
																													BgL_arg2996z00_988 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2995z00_987 =
																														MAKE_PAIR
																														(BgL_arg2992z00_984,
																														BgL_arg2996z00_988);
																												}
																												BgL_list2994z00_986 =
																													MAKE_PAIR
																													(BgL_arg2991z00_983,
																													BgL_arg2995z00_987);
																											}
																											BgL_arg2989z00_981 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg2990z00_982,
																												BgL_list2994z00_986);
																									}}
																									BgL_arg2984z00_976 =
																										MAKE_PAIR
																										(BgL_arg2988z00_980,
																										BgL_arg2989z00_981);
																								}
																								{	/* Object/struct.scm 201 */
																									obj_t BgL_list2986z00_978;

																									{	/* Object/struct.scm 201 */
																										obj_t BgL_arg2987z00_979;

																										BgL_arg2987z00_979 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list2986z00_978 =
																											MAKE_PAIR
																											(BgL_arg2984z00_976,
																											BgL_arg2987z00_979);
																									}
																									BgL_arg2982z00_974 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg2983z00_975,
																										BgL_list2986z00_978);
																							}}
																							BgL_arg2980z00_972 =
																								MAKE_PAIR(BgL_loopz00_915,
																								BgL_arg2982z00_974);
																						}
																						BgL_arg2975z00_967 =
																							MAKE_PAIR(BgL_arg2980z00_972,
																							BNIL);
																					}
																					{	/* Object/struct.scm 212 */
																						obj_t BgL_arg3032z00_1024;

																						{	/* Object/struct.scm 212 */
																							obj_t BgL_list3033z00_1025;

																							BgL_list3033z00_1025 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3032z00_1024 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BINT(((long) 0)),
																								BgL_list3033z00_1025);
																						}
																						BgL_arg2976z00_968 =
																							MAKE_PAIR(BgL_loopz00_915,
																							BgL_arg3032z00_1024);
																					}
																					{	/* Object/struct.scm 201 */
																						obj_t BgL_list2978z00_970;

																						{	/* Object/struct.scm 201 */
																							obj_t BgL_arg2979z00_971;

																							BgL_arg2979z00_971 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2978z00_970 =
																								MAKE_PAIR(BgL_arg2976z00_968,
																								BgL_arg2979z00_971);
																						}
																						BgL_arg2974z00_966 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2975z00_967,
																							BgL_list2978z00_970);
																				}}
																				BgL_arg2952z00_945 =
																					MAKE_PAIR(BgL_arg2973z00_965,
																					BgL_arg2974z00_966);
																			}
																			{	/* Object/struct.scm 198 */
																				obj_t BgL_list2954z00_947;

																				{	/* Object/struct.scm 198 */
																					obj_t BgL_arg2955z00_948;

																					{	/* Object/struct.scm 198 */
																						obj_t BgL_arg2956z00_949;

																						BgL_arg2956z00_949 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg2955z00_948 =
																							MAKE_PAIR(BgL_arg2952z00_945,
																							BgL_arg2956z00_949);
																					}
																					BgL_list2954z00_947 =
																						MAKE_PAIR(BgL_arg2951z00_944,
																						BgL_arg2955z00_948);
																				}
																				BgL_arg2949z00_942 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2950z00_943,
																					BgL_list2954z00_947);
																		}}
																		BgL_arg2933z00_927 =
																			MAKE_PAIR(BgL_arg2948z00_941,
																			BgL_arg2949z00_942);
																	}
																	{	/* Object/struct.scm 197 */
																		obj_t BgL_list2935z00_929;

																		{	/* Object/struct.scm 197 */
																			obj_t BgL_arg2936z00_930;

																			BgL_arg2936z00_930 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_list2935z00_929 =
																				MAKE_PAIR(BgL_arg2933z00_927,
																				BgL_arg2936z00_930);
																		}
																		BgL_arg2931z00_925 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg2932z00_926, BgL_list2935z00_929);
																}}
																return
																	MAKE_PAIR(BgL_arg2930z00_924,
																	BgL_arg2931z00_925);
															}
														}
													}
												}
											else
												{	/* Object/struct.scm 214 */
													obj_t BgL_arg3036z00_1028;

													obj_t BgL_arg3037z00_1029;

													BgL_arg3036z00_1028 = CNST_TABLE_REF(((long) 6));
													{	/* Object/struct.scm 214 */
														obj_t BgL_arg3038z00_1030;

														obj_t BgL_arg3039z00_1031;

														{	/* Object/struct.scm 214 */
															obj_t BgL_arg3043z00_1035;

															{	/* Object/struct.scm 214 */
																obj_t BgL_arg3045z00_1037;

																obj_t BgL_arg3046z00_1038;

																{	/* Object/struct.scm 214 */
																	obj_t BgL_arg3047z00_1039;

																	{	/* Object/struct.scm 214 */
																		BgL_typez00_bglt BgL_obj1508z00_1472;

																		{	/* Object/struct.scm 214 */
																			BgL_slotz00_bglt BgL_obj2439z00_1471;

																			BgL_obj2439z00_1471 =
																				(BgL_slotz00_bglt) (BgL_slotz00_24);
																			BgL_obj1508z00_1472 =
																				(BgL_typez00_bglt) (
																				(((BgL_slotz00_bglt)
																						CREF(BgL_obj2439z00_1471))->
																					BgL_typez00));
																		}
																		BgL_arg3047z00_1039 =
																			(((BgL_typez00_bglt)
																				CREF(BgL_obj1508z00_1472))->BgL_idz00);
																	}
																	BgL_arg3045z00_1037 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(BgL_vz00_917, BgL_arg3047z00_1039);
																}
																{	/* Object/struct.scm 215 */
																	obj_t BgL_arg3049z00_1041;

																	{	/* Object/struct.scm 215 */
																		obj_t BgL_arg3052z00_1044;

																		obj_t BgL_arg3053z00_1045;

																		BgL_arg3052z00_1044 =
																			CNST_TABLE_REF(((long) 31));
																		{	/* Object/struct.scm 215 */
																			obj_t BgL_list3054z00_1046;

																			{	/* Object/struct.scm 215 */
																				obj_t BgL_arg3055z00_1047;

																				BgL_arg3055z00_1047 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3054z00_1046 =
																					MAKE_PAIR(BINT(BgL_iz00_23),
																					BgL_arg3055z00_1047);
																			}
																			BgL_arg3053z00_1045 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 32)),
																				BgL_list3054z00_1046);
																		}
																		BgL_arg3049z00_1041 =
																			MAKE_PAIR(BgL_arg3052z00_1044,
																			BgL_arg3053z00_1045);
																	}
																	{	/* Object/struct.scm 214 */
																		obj_t BgL_list3051z00_1043;

																		BgL_list3051z00_1043 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3046z00_1038 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3049z00_1041,
																			BgL_list3051z00_1043);
																}}
																BgL_arg3043z00_1035 =
																	MAKE_PAIR(BgL_arg3045z00_1037,
																	BgL_arg3046z00_1038);
															}
															BgL_arg3038z00_1030 =
																MAKE_PAIR(BgL_arg3043z00_1035, BNIL);
														}
														BgL_arg3039z00_1031 =
															BGl_makezd2pragmazd2directzd2setz12zc0zzobject_toolsz00
															(BgL_typez00_22,
															(BgL_slotz00_bglt) (BgL_slotz00_24),
															CNST_TABLE_REF(((long) 34)), BgL_vz00_917);
														{	/* Object/struct.scm 214 */
															obj_t BgL_list3041z00_1033;

															{	/* Object/struct.scm 214 */
																obj_t BgL_arg3042z00_1034;

																BgL_arg3042z00_1034 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3041z00_1033 =
																	MAKE_PAIR(BgL_arg3039z00_1031,
																	BgL_arg3042z00_1034);
															}
															BgL_arg3037z00_1029 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3038z00_1030, BgL_list3041z00_1033);
													}}
													return
														MAKE_PAIR(BgL_arg3036z00_1028, BgL_arg3037z00_1029);
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



/* gen-struct->plain-class */
	obj_t BGl_genzd2structzd2ze3plainzd2classz31zzobject_structz00(obj_t
		BgL_cnamez00_25, BgL_typez00_bglt BgL_typez00_26, obj_t BgL_slotsz00_27,
		obj_t BgL_srczd2defzd2_28)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 227 */
			{	/* Object/struct.scm 229 */
				obj_t BgL_arg3061z00_1053;

				{	/* Object/struct.scm 229 */
					obj_t BgL_arg3063z00_1054;

					obj_t BgL_arg3064z00_1055;

					BgL_arg3063z00_1054 = CNST_TABLE_REF(((long) 18));
					{	/* Object/struct.scm 229 */
						obj_t BgL_arg3065z00_1056;

						obj_t BgL_arg3066z00_1057;

						{	/* Object/struct.scm 229 */
							obj_t BgL_arg3070z00_1061;

							obj_t BgL_arg3071z00_1062;

							BgL_arg3070z00_1061 = CNST_TABLE_REF(((long) 37));
							{	/* Object/struct.scm 229 */
								obj_t BgL_arg3072z00_1063;

								obj_t BgL_arg3073z00_1064;

								BgL_arg3072z00_1063 =
									BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
											(long) 34)), BgL_cnamez00_25);
								BgL_arg3073z00_1064 = CNST_TABLE_REF(((long) 38));
								{	/* Object/struct.scm 229 */
									obj_t BgL_list3075z00_1066;

									{	/* Object/struct.scm 229 */
										obj_t BgL_arg3076z00_1067;

										BgL_arg3076z00_1067 = MAKE_PAIR(BNIL, BNIL);
										BgL_list3075z00_1066 =
											MAKE_PAIR(BgL_arg3073z00_1064, BgL_arg3076z00_1067);
									}
									BgL_arg3071z00_1062 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3072z00_1063, BgL_list3075z00_1066);
							}}
							BgL_arg3065z00_1056 =
								MAKE_PAIR(BgL_arg3070z00_1061, BgL_arg3071z00_1062);
						}
						{	/* Object/struct.scm 231 */
							obj_t BgL_arg3077z00_1068;

							obj_t BgL_arg3078z00_1069;

							BgL_arg3077z00_1068 = CNST_TABLE_REF(((long) 12));
							{	/* Object/struct.scm 232 */
								obj_t BgL_arg3079z00_1070;

								obj_t BgL_arg3081z00_1071;

								{	/* Object/struct.scm 232 */
									obj_t BgL_arg3083z00_1073;

									obj_t BgL_arg3084z00_1074;

									BgL_arg3083z00_1073 = CNST_TABLE_REF(((long) 39));
									{	/* Object/struct.scm 232 */
										obj_t BgL_arg3085z00_1075;

										obj_t BgL_arg3086z00_1076;

										BgL_arg3085z00_1075 = CNST_TABLE_REF(((long) 34));
										{	/* Object/struct.scm 232 */
											obj_t BgL_arg3090z00_1080;

											obj_t BgL_arg3091z00_1081;

											BgL_arg3090z00_1080 = CNST_TABLE_REF(((long) 31));
											{	/* Object/struct.scm 232 */
												obj_t BgL_list3092z00_1082;

												{	/* Object/struct.scm 232 */
													obj_t BgL_arg3094z00_1084;

													BgL_arg3094z00_1084 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3092z00_1082 =
														MAKE_PAIR(BINT(((long) 0)), BgL_arg3094z00_1084);
												}
												BgL_arg3091z00_1081 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 32)), BgL_list3092z00_1082);
											}
											BgL_arg3086z00_1076 =
												MAKE_PAIR(BgL_arg3090z00_1080, BgL_arg3091z00_1081);
										}
										{	/* Object/struct.scm 232 */
											obj_t BgL_list3088z00_1078;

											{	/* Object/struct.scm 232 */
												obj_t BgL_arg3089z00_1079;

												BgL_arg3089z00_1079 = MAKE_PAIR(BNIL, BNIL);
												BgL_list3088z00_1078 =
													MAKE_PAIR(BgL_arg3086z00_1076, BgL_arg3089z00_1079);
											}
											BgL_arg3084z00_1074 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3085z00_1075, BgL_list3088z00_1078);
									}}
									BgL_arg3079z00_1070 =
										MAKE_PAIR(BgL_arg3083z00_1073, BgL_arg3084z00_1074);
								}
								{	/* Object/struct.scm 233 */
									obj_t BgL_arg3095z00_1085;

									obj_t BgL_arg3096z00_1086;

									{
										long BgL_iz00_1089;

										obj_t BgL_slotsz00_1090;

										obj_t BgL_resz00_1091;

										BgL_iz00_1089 = ((long) 1);
										BgL_slotsz00_1090 = BgL_slotsz00_27;
										BgL_resz00_1091 = BNIL;
									BgL_zc3anonymousza33097ze3z83_1092:
										if (NULLP(BgL_slotsz00_1090))
											{	/* Object/struct.scm 237 */
												BgL_arg3095z00_1085 = bgl_reverse_bang(BgL_resz00_1091);
											}
										else
											{	/* Object/struct.scm 239 */
												bool_t BgL_testz00_2100;

												{	/* Object/struct.scm 239 */
													obj_t BgL_arg3108z00_1104;

													BgL_arg3108z00_1104 = CAR(BgL_slotsz00_1090);
													BgL_testz00_2100 =
														BGl_slotzd2virtualzf3z21zzobject_slotsz00(
														(BgL_slotz00_bglt) (BgL_arg3108z00_1104));
												}
												if (BgL_testz00_2100)
													{
														obj_t BgL_slotsz00_2106;

														long BgL_iz00_2104;

														BgL_iz00_2104 = (BgL_iz00_1089 + ((long) 1));
														BgL_slotsz00_2106 = CDR(BgL_slotsz00_1090);
														BgL_slotsz00_1090 = BgL_slotsz00_2106;
														BgL_iz00_1089 = BgL_iz00_2104;
														goto BgL_zc3anonymousza33097ze3z83_1092;
													}
												else
													{	/* Object/struct.scm 244 */
														obj_t BgL_newz00_1097;

														{	/* Object/struct.scm 244 */
															obj_t BgL_arg3105z00_1101;

															obj_t BgL_arg3106z00_1102;

															obj_t BgL_arg3107z00_1103;

															BgL_arg3105z00_1101 = CNST_TABLE_REF(((long) 34));
															BgL_arg3106z00_1102 = CNST_TABLE_REF(((long) 32));
															BgL_arg3107z00_1103 = CAR(BgL_slotsz00_1090);
															BgL_newz00_1097 =
																BGl_restorezd2slotzd2zzobject_structz00
																(BgL_arg3105z00_1101, BgL_arg3106z00_1102,
																BgL_cnamez00_25, BgL_typez00_26, BgL_iz00_1089,
																BgL_arg3107z00_1103);
														}
														{	/* Object/struct.scm 245 */
															long BgL_arg3102z00_1098;

															obj_t BgL_arg3103z00_1099;

															obj_t BgL_arg3104z00_1100;

															BgL_arg3102z00_1098 =
																(BgL_iz00_1089 + ((long) 1));
															BgL_arg3103z00_1099 = CDR(BgL_slotsz00_1090);
															BgL_arg3104z00_1100 =
																MAKE_PAIR(BgL_newz00_1097, BgL_resz00_1091);
															{
																obj_t BgL_resz00_2117;

																obj_t BgL_slotsz00_2116;

																long BgL_iz00_2115;

																BgL_iz00_2115 = BgL_arg3102z00_1098;
																BgL_slotsz00_2116 = BgL_arg3103z00_1099;
																BgL_resz00_2117 = BgL_arg3104z00_1100;
																BgL_resz00_1091 = BgL_resz00_2117;
																BgL_slotsz00_1090 = BgL_slotsz00_2116;
																BgL_iz00_1089 = BgL_iz00_2115;
																goto BgL_zc3anonymousza33097ze3z83_1092;
															}
														}
													}
											}
									}
									BgL_arg3096z00_1086 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 34)), BNIL);
									BgL_arg3081z00_1071 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3095z00_1085, BgL_arg3096z00_1086);
								}
								{	/* Object/struct.scm 231 */
									obj_t BgL_list3082z00_1072;

									BgL_list3082z00_1072 = MAKE_PAIR(BgL_arg3081z00_1071, BNIL);
									BgL_arg3078z00_1069 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg3079z00_1070, BgL_list3082z00_1072);
							}}
							BgL_arg3066z00_1057 =
								MAKE_PAIR(BgL_arg3077z00_1068, BgL_arg3078z00_1069);
						}
						{	/* Object/struct.scm 229 */
							obj_t BgL_list3068z00_1059;

							{	/* Object/struct.scm 229 */
								obj_t BgL_arg3069z00_1060;

								BgL_arg3069z00_1060 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3068z00_1059 =
									MAKE_PAIR(BgL_arg3066z00_1057, BgL_arg3069z00_1060);
							}
							BgL_arg3064z00_1055 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3065z00_1056,
								BgL_list3068z00_1059);
					}}
					BgL_arg3061z00_1053 =
						MAKE_PAIR(BgL_arg3063z00_1054, BgL_arg3064z00_1055);
				}
				return
					BGl_epairifyz00zztools_miscz00(BgL_arg3061z00_1053,
					BgL_srczd2defzd2_28);
			}
		}
	}



/* gen-struct->wide-class */
	obj_t BGl_genzd2structzd2ze3widezd2classz31zzobject_structz00(obj_t
		BgL_cnamez00_29, BgL_typez00_bglt BgL_typez00_30, obj_t BgL_slotsz00_31,
		obj_t BgL_srczd2defzd2_32)
	{
		AN_OBJECT;
		{	/* Object/struct.scm 254 */
			{	/* Object/struct.scm 255 */
				obj_t BgL_oldz00_1106;

				BgL_oldz00_1106 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 40)));
				{	/* Object/struct.scm 255 */
					long BgL_lenz00_1107;

					BgL_lenz00_1107 =
						BGl_slotszd2lengthzd2zzobject_structz00(BgL_slotsz00_31);
					{	/* Object/struct.scm 256 */
						obj_t BgL_auxz00_1108;

						BgL_auxz00_1108 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 23)));
						{	/* Object/struct.scm 257 */
							obj_t BgL_tauxz00_1109;

							{	/* Object/struct.scm 258 */
								obj_t BgL_arg3233z00_1244;

								{	/* Object/struct.scm 258 */
									obj_t BgL_arg3234z00_1245;

									obj_t BgL_arg3235z00_1246;

									{	/* Object/struct.scm 258 */
										obj_t BgL_res3263z00_1484;

										{	/* Object/struct.scm 258 */
											obj_t BgL_symbolz00_1482;

											BgL_symbolz00_1482 = BgL_auxz00_1108;
											{	/* Object/struct.scm 258 */
												obj_t BgL_arg2063z00_1483;

												BgL_arg2063z00_1483 =
													SYMBOL_TO_STRING(BgL_symbolz00_1482);
												BgL_res3263z00_1484 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1483);
										}}
										BgL_arg3234z00_1245 = BgL_res3263z00_1484;
									}
									{	/* Object/struct.scm 258 */
										obj_t BgL_res3264z00_1487;

										{	/* Object/struct.scm 258 */
											obj_t BgL_symbolz00_1485;

											BgL_symbolz00_1485 = CNST_TABLE_REF(((long) 22));
											{	/* Object/struct.scm 258 */
												obj_t BgL_arg2063z00_1486;

												BgL_arg2063z00_1486 =
													SYMBOL_TO_STRING(BgL_symbolz00_1485);
												BgL_res3264z00_1487 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1486);
										}}
										BgL_arg3235z00_1246 = BgL_res3264z00_1487;
									}
									{	/* Object/struct.scm 258 */
										obj_t BgL_list3236z00_1247;

										{	/* Object/struct.scm 258 */
											obj_t BgL_arg3237z00_1248;

											BgL_arg3237z00_1248 =
												MAKE_PAIR(BgL_arg3235z00_1246, BNIL);
											BgL_list3236z00_1247 =
												MAKE_PAIR(BgL_arg3234z00_1245, BgL_arg3237z00_1248);
										}
										BgL_arg3233z00_1244 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list3236z00_1247);
								}}
								BgL_tauxz00_1109 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg3233z00_1244));
							}
							{	/* Object/struct.scm 258 */
								obj_t BgL_newz00_1110;

								BgL_newz00_1110 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											41)));
								{	/* Object/struct.scm 259 */
									obj_t BgL_tidz00_1111;

									BgL_tidz00_1111 =
										(((BgL_typez00_bglt) CREF(BgL_typez00_30))->BgL_idz00);
									{	/* Object/struct.scm 260 */
										BgL_globalz00_bglt BgL_holderz00_1112;

										{	/* Object/struct.scm 261 */
											BgL_tclassz00_bglt BgL_obj2232z00_1490;

											BgL_obj2232z00_1490 =
												(BgL_tclassz00_bglt) (BgL_typez00_30);
											{
												obj_t BgL_auxz00_2148;

												{	/* Object/struct.scm 261 */
													BgL_objectz00_bglt BgL_auxz00_2149;

													BgL_auxz00_2149 =
														(BgL_objectz00_bglt) (BgL_obj2232z00_1490);
													BgL_auxz00_2148 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2149);
												}
												BgL_holderz00_1112 =
													(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2148))->
													BgL_holderz00);
										}}
										{	/* Object/struct.scm 261 */
											obj_t BgL_wideningz00_1113;

											{	/* Object/struct.scm 262 */
												obj_t BgL_arg3228z00_1239;

												obj_t BgL_arg3229z00_1240;

												{	/* Object/struct.scm 262 */
													BgL_tclassz00_bglt BgL_obj2233z00_1491;

													BgL_obj2233z00_1491 =
														(BgL_tclassz00_bglt) (BgL_typez00_30);
													{
														obj_t BgL_auxz00_2154;

														{	/* Object/struct.scm 262 */
															BgL_objectz00_bglt BgL_auxz00_2155;

															BgL_auxz00_2155 =
																(BgL_objectz00_bglt) (BgL_obj2233z00_1491);
															BgL_auxz00_2154 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2155);
														}
														BgL_arg3228z00_1239 =
															(((BgL_tclassz00_bglt) CREF(BgL_auxz00_2154))->
															BgL_wideningz00);
												}}
												BgL_arg3229z00_1240 = CNST_TABLE_REF(((long) 1));
												{	/* Object/struct.scm 262 */
													obj_t BgL_list3230z00_1241;

													{	/* Object/struct.scm 262 */
														obj_t BgL_arg3231z00_1242;

														{	/* Object/struct.scm 262 */
															obj_t BgL_arg3232z00_1243;

															BgL_arg3232z00_1243 =
																MAKE_PAIR(BgL_tidz00_1111, BNIL);
															BgL_arg3231z00_1242 =
																MAKE_PAIR(BgL_arg3229z00_1240,
																BgL_arg3232z00_1243);
														}
														BgL_list3230z00_1241 =
															MAKE_PAIR(BgL_arg3228z00_1239,
															BgL_arg3231z00_1242);
													}
													BgL_wideningz00_1113 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list3230z00_1241);
											}}
											{	/* Object/struct.scm 262 */

												{
													BgL_typez00_bglt BgL_typez00_1219;

													obj_t BgL_exprz00_1220;

													{	/* Object/struct.scm 270 */
														obj_t BgL_arg3109z00_1115;

														{	/* Object/struct.scm 270 */
															obj_t BgL_arg3110z00_1116;

															obj_t BgL_arg3111z00_1117;

															BgL_arg3110z00_1116 = CNST_TABLE_REF(((long) 18));
															{	/* Object/struct.scm 270 */
																obj_t BgL_arg3112z00_1118;

																obj_t BgL_arg3113z00_1119;

																{	/* Object/struct.scm 270 */
																	obj_t BgL_arg3117z00_1123;

																	obj_t BgL_arg3118z00_1124;

																	BgL_arg3117z00_1123 =
																		CNST_TABLE_REF(((long) 37));
																	{	/* Object/struct.scm 271 */
																		obj_t BgL_arg3119z00_1125;

																		obj_t BgL_arg3120z00_1126;

																		BgL_arg3119z00_1125 =
																			BGl_makezd2typedzd2identz00zzast_identz00
																			(CNST_TABLE_REF(((long) 34)),
																			BgL_cnamez00_29);
																		BgL_arg3120z00_1126 =
																			CNST_TABLE_REF(((long) 38));
																		{	/* Object/struct.scm 270 */
																			obj_t BgL_list3122z00_1128;

																			{	/* Object/struct.scm 270 */
																				obj_t BgL_arg3123z00_1129;

																				BgL_arg3123z00_1129 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3122z00_1128 =
																					MAKE_PAIR(BgL_arg3120z00_1126,
																					BgL_arg3123z00_1129);
																			}
																			BgL_arg3118z00_1124 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3119z00_1125,
																				BgL_list3122z00_1128);
																	}}
																	BgL_arg3112z00_1118 =
																		MAKE_PAIR(BgL_arg3117z00_1123,
																		BgL_arg3118z00_1124);
																}
																{	/* Object/struct.scm 273 */
																	obj_t BgL_arg3124z00_1130;

																	obj_t BgL_arg3125z00_1131;

																	BgL_arg3124z00_1130 =
																		CNST_TABLE_REF(((long) 6));
																	{	/* Object/struct.scm 273 */
																		obj_t BgL_arg3126z00_1132;

																		obj_t BgL_arg3127z00_1133;

																		{	/* Object/struct.scm 273 */
																			obj_t BgL_arg3131z00_1137;

																			obj_t BgL_arg3132z00_1138;

																			{	/* Object/struct.scm 273 */
																				obj_t BgL_arg3133z00_1139;

																				{	/* Object/struct.scm 273 */
																					obj_t BgL_arg3134z00_1140;

																					BgL_arg3134z00_1140 =
																						MAKE_PAIR(CNST_TABLE_REF(((long)
																								24)), BNIL);
																					{	/* Object/struct.scm 273 */
																						obj_t BgL_list3136z00_1142;

																						BgL_list3136z00_1142 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3133z00_1139 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3134z00_1140,
																							BgL_list3136z00_1142);
																				}}
																				BgL_arg3131z00_1137 =
																					MAKE_PAIR(BgL_oldz00_1106,
																					BgL_arg3133z00_1139);
																			}
																			{	/* Object/struct.scm 274 */
																				obj_t BgL_arg3137z00_1143;

																				{	/* Object/struct.scm 274 */
																					obj_t BgL_arg3140z00_1146;

																					{	/* Object/struct.scm 274 */
																						obj_t BgL_arg3141z00_1147;

																						{	/* Object/struct.scm 274 */
																							obj_t BgL_arg3144z00_1150;

																							obj_t BgL_arg3145z00_1151;

																							BgL_arg3144z00_1150 =
																								CNST_TABLE_REF(((long) 31));
																							{	/* Object/struct.scm 274 */
																								obj_t BgL_list3147z00_1152;

																								{	/* Object/struct.scm 274 */
																									obj_t BgL_arg3149z00_1154;

																									BgL_arg3149z00_1154 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3147z00_1152 =
																										MAKE_PAIR(BINT(((long) 0)),
																										BgL_arg3149z00_1154);
																								}
																								BgL_arg3145z00_1151 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(CNST_TABLE_REF(((long) 32)),
																									BgL_list3147z00_1152);
																							}
																							BgL_arg3141z00_1147 =
																								MAKE_PAIR(BgL_arg3144z00_1150,
																								BgL_arg3145z00_1151);
																						}
																						{	/* Object/struct.scm 274 */
																							obj_t BgL_list3143z00_1149;

																							BgL_list3143z00_1149 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3140z00_1146 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3141z00_1147,
																								BgL_list3143z00_1149);
																					}}
																					BgL_arg3137z00_1143 =
																						MAKE_PAIR(BgL_tauxz00_1109,
																						BgL_arg3140z00_1146);
																				}
																				{	/* Object/struct.scm 273 */
																					obj_t BgL_list3139z00_1145;

																					BgL_list3139z00_1145 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3132z00_1138 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3137z00_1143,
																						BgL_list3139z00_1145);
																			}}
																			BgL_arg3126z00_1132 =
																				MAKE_PAIR(BgL_arg3131z00_1137,
																				BgL_arg3132z00_1138);
																		}
																		{	/* Object/struct.scm 275 */
																			obj_t BgL_arg3150z00_1155;

																			obj_t BgL_arg3151z00_1156;

																			BgL_arg3150z00_1155 =
																				CNST_TABLE_REF(((long) 6));
																			{	/* Object/struct.scm 275 */
																				obj_t BgL_arg3152z00_1157;

																				obj_t BgL_arg3153z00_1158;

																				obj_t BgL_arg3154z00_1159;

																				{	/* Object/struct.scm 275 */
																					obj_t BgL_arg3160z00_1165;

																					{	/* Object/struct.scm 275 */
																						obj_t BgL_arg3162z00_1167;

																						obj_t BgL_arg3163z00_1168;

																						BgL_arg3162z00_1167 =
																							BGl_makezd2typedzd2identz00zzast_identz00
																							(BgL_newz00_1110,
																							BgL_tidz00_1111);
																						{	/* Object/struct.scm 276 */
																							obj_t BgL_arg3165z00_1169;

																							BgL_typez00_1219 = BgL_typez00_30;
																							BgL_exprz00_1220 =
																								BgL_oldz00_1106;
																							{	/* Object/struct.scm 264 */
																								bool_t BgL_testz00_2194;

																								{	/* Object/struct.scm 264 */
																									obj_t BgL_arg3227z00_1237;

																									BgL_arg3227z00_1237 =
																										BGl_thezd2backendzd2zzbackend_backendz00
																										();
																									{
																										BgL_backendz00_bglt
																											BgL_auxz00_2196;
																										BgL_auxz00_2196 =
																											(BgL_backendz00_bglt)
																											(BgL_arg3227z00_1237);
																										BgL_testz00_2194 =
																											(((BgL_backendz00_bglt)
																												CREF(BgL_auxz00_2196))->
																											BgL_pragmazd2supportzd2);
																								}}
																								if (BgL_testz00_2194)
																									{	/* Object/struct.scm 265 */
																										obj_t BgL_arg3213z00_1223;

																										obj_t BgL_arg3214z00_1224;

																										{	/* Object/struct.scm 265 */
																											obj_t BgL_arg3215z00_1225;

																											obj_t BgL_arg3216z00_1226;

																											BgL_arg3215z00_1225 =
																												CNST_TABLE_REF(((long)
																													42));
																											BgL_arg3216z00_1226 =
																												(((BgL_typez00_bglt)
																													CREF
																													(BgL_typez00_1219))->
																												BgL_idz00);
																											BgL_arg3213z00_1223 =
																												BGl_makezd2typedzd2identz00zzast_identz00
																												(BgL_arg3215z00_1225,
																												BgL_arg3216z00_1226);
																										}
																										{	/* Object/struct.scm 266 */
																											obj_t BgL_arg3217z00_1227;

																											{	/* Object/struct.scm 266 */
																												obj_t
																													BgL_arg3222z00_1232;
																												BgL_arg3222z00_1232 =
																													(((BgL_typez00_bglt)
																														CREF
																														(BgL_typez00_1219))->
																													BgL_namez00);
																												BgL_arg3217z00_1227 =
																													string_append_3
																													(BGl_string3265z00zzobject_structz00,
																													BgL_arg3222z00_1232,
																													BGl_string3266z00zzobject_structz00);
																											}
																											{	/* Object/struct.scm 265 */
																												obj_t
																													BgL_list3219z00_1229;
																												{	/* Object/struct.scm 265 */
																													obj_t
																														BgL_arg3220z00_1230;
																													BgL_arg3220z00_1230 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list3219z00_1229 =
																														MAKE_PAIR
																														(BgL_exprz00_1220,
																														BgL_arg3220z00_1230);
																												}
																												BgL_arg3214z00_1224 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg3217z00_1227,
																													BgL_list3219z00_1229);
																										}}
																										BgL_arg3165z00_1169 =
																											MAKE_PAIR
																											(BgL_arg3213z00_1223,
																											BgL_arg3214z00_1224);
																									}
																								else
																									{	/* Object/struct.scm 268 */
																										obj_t BgL_arg3224z00_1234;

																										obj_t BgL_arg3225z00_1235;

																										BgL_arg3224z00_1234 =
																											CNST_TABLE_REF(((long)
																												43));
																										BgL_arg3225z00_1235 =
																											(((BgL_typez00_bglt)
																												CREF
																												(BgL_typez00_1219))->
																											BgL_idz00);
																										{	/* Object/struct.scm 268 */
																											obj_t
																												BgL_list3226z00_1236;
																											BgL_list3226z00_1236 =
																												MAKE_PAIR
																												(BgL_exprz00_1220,
																												BNIL);
																											BgL_arg3165z00_1169 =
																												BGl_makezd2privatezd2sexpz00zzast_privatez00
																												(BgL_arg3224z00_1234,
																												BgL_arg3225z00_1235,
																												BgL_list3226z00_1236);
																							}}}
																							{	/* Object/struct.scm 275 */
																								obj_t BgL_list3168z00_1171;

																								BgL_list3168z00_1171 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3163z00_1168 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3165z00_1169,
																									BgL_list3168z00_1171);
																						}}
																						BgL_arg3160z00_1165 =
																							MAKE_PAIR(BgL_arg3162z00_1167,
																							BgL_arg3163z00_1168);
																					}
																					BgL_arg3152z00_1157 =
																						MAKE_PAIR(BgL_arg3160z00_1165,
																						BNIL);
																				}
																				{	/* Object/struct.scm 277 */
																					obj_t BgL_arg3169z00_1172;

																					obj_t BgL_arg3170z00_1173;

																					BgL_arg3169z00_1172 =
																						CNST_TABLE_REF(((long) 44));
																					{	/* Object/struct.scm 278 */
																						obj_t BgL_arg3171z00_1174;

																						{	/* Object/struct.scm 278 */
																							obj_t BgL_arg3175z00_1178;

																							obj_t BgL_arg3176z00_1179;

																							BgL_arg3175z00_1178 =
																								CNST_TABLE_REF(((long) 45));
																							{	/* Object/struct.scm 279 */
																								obj_t BgL_arg3177z00_1180;

																								{	/* Object/struct.scm 279 */
																									obj_t BgL_arg3180z00_1183;

																									obj_t BgL_arg3181z00_1184;

																									BgL_arg3180z00_1183 =
																										CNST_TABLE_REF(((long) 46));
																									{	/* Object/struct.scm 279 */
																										obj_t BgL_arg3182z00_1185;

																										obj_t BgL_arg3183z00_1186;

																										{
																											BgL_variablez00_bglt
																												BgL_auxz00_2219;
																											BgL_auxz00_2219 =
																												(BgL_variablez00_bglt)
																												(BgL_holderz00_1112);
																											BgL_arg3182z00_1185 =
																												(((BgL_variablez00_bglt)
																													CREF
																													(BgL_auxz00_2219))->
																												BgL_idz00);
																										}
																										BgL_arg3183z00_1186 =
																											(((BgL_globalz00_bglt)
																												CREF
																												(BgL_holderz00_1112))->
																											BgL_modulez00);
																										{	/* Object/struct.scm 279 */
																											obj_t
																												BgL_list3185z00_1188;
																											{	/* Object/struct.scm 279 */
																												obj_t
																													BgL_arg3186z00_1189;
																												BgL_arg3186z00_1189 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list3185z00_1188 =
																													MAKE_PAIR
																													(BgL_arg3183z00_1186,
																													BgL_arg3186z00_1189);
																											}
																											BgL_arg3181z00_1184 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg3182z00_1185,
																												BgL_list3185z00_1188);
																									}}
																									BgL_arg3177z00_1180 =
																										MAKE_PAIR
																										(BgL_arg3180z00_1183,
																										BgL_arg3181z00_1184);
																								}
																								{	/* Object/struct.scm 278 */
																									obj_t BgL_list3179z00_1182;

																									BgL_list3179z00_1182 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3176z00_1179 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3177z00_1180,
																										BgL_list3179z00_1182);
																							}}
																							BgL_arg3171z00_1174 =
																								MAKE_PAIR(BgL_arg3175z00_1178,
																								BgL_arg3176z00_1179);
																						}
																						{	/* Object/struct.scm 277 */
																							obj_t BgL_list3173z00_1176;

																							{	/* Object/struct.scm 277 */
																								obj_t BgL_arg3174z00_1177;

																								BgL_arg3174z00_1177 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3173z00_1176 =
																									MAKE_PAIR(BgL_arg3171z00_1174,
																									BgL_arg3174z00_1177);
																							}
																							BgL_arg3170z00_1173 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_newz00_1110,
																								BgL_list3173z00_1176);
																					}}
																					BgL_arg3153z00_1158 =
																						MAKE_PAIR(BgL_arg3169z00_1172,
																						BgL_arg3170z00_1173);
																				}
																				{	/* Object/struct.scm 281 */
																					obj_t BgL_arg3187z00_1190;

																					obj_t BgL_arg3189z00_1191;

																					BgL_arg3187z00_1190 =
																						CNST_TABLE_REF(((long) 39));
																					{	/* Object/struct.scm 283 */
																						obj_t BgL_arg3190z00_1192;

																						{	/* Object/struct.scm 283 */
																							obj_t BgL_arg3194z00_1196;

																							{	/* Object/struct.scm 283 */
																								obj_t BgL_arg3195z00_1197;

																								{
																									long BgL_iz00_1201;

																									obj_t BgL_slotsz00_1202;

																									obj_t BgL_refza2za2_1203;

																									BgL_iz00_1201 = ((long) 0);
																									BgL_slotsz00_1202 =
																										BgL_slotsz00_31;
																									BgL_refza2za2_1203 = BNIL;
																								BgL_zc3anonymousza33197ze3z83_1204:
																									if (
																										(BgL_iz00_1201 ==
																											BgL_lenz00_1107))
																										{	/* Object/struct.scm 287 */
																											BgL_arg3195z00_1197 =
																												bgl_reverse_bang
																												(BgL_refza2za2_1203);
																										}
																									else
																										{	/* Object/struct.scm 289 */
																											bool_t BgL_testz00_2238;

																											{	/* Object/struct.scm 289 */
																												obj_t
																													BgL_arg3210z00_1217;
																												BgL_arg3210z00_1217 =
																													CAR
																													(BgL_slotsz00_1202);
																												BgL_testz00_2238 =
																													BGl_slotzd2virtualzf3z21zzobject_slotsz00
																													((BgL_slotz00_bglt)
																													(BgL_arg3210z00_1217));
																											}
																											if (BgL_testz00_2238)
																												{
																													obj_t
																														BgL_slotsz00_2244;
																													long BgL_iz00_2242;

																													BgL_iz00_2242 =
																														(BgL_iz00_1201 +
																														((long) 1));
																													BgL_slotsz00_2244 =
																														CDR
																														(BgL_slotsz00_1202);
																													BgL_slotsz00_1202 =
																														BgL_slotsz00_2244;
																													BgL_iz00_1201 =
																														BgL_iz00_2242;
																													goto
																														BgL_zc3anonymousza33197ze3z83_1204;
																												}
																											else
																												{	/* Object/struct.scm 294 */
																													long
																														BgL_arg3202z00_1209;
																													obj_t
																														BgL_arg3203z00_1210;
																													obj_t
																														BgL_arg3204z00_1211;
																													BgL_arg3202z00_1209 =
																														(BgL_iz00_1201 +
																														((long) 1));
																													BgL_arg3203z00_1210 =
																														CDR
																														(BgL_slotsz00_1202);
																													{	/* Object/struct.scm 296 */
																														obj_t
																															BgL_arg3205z00_1212;
																														{	/* Object/struct.scm 296 */
																															obj_t
																																BgL_arg3206z00_1213;
																															obj_t
																																BgL_arg3207z00_1214;
																															BgL_arg3206z00_1213
																																=
																																CNST_TABLE_REF((
																																	(long) 31));
																															{	/* Object/struct.scm 296 */
																																obj_t
																																	BgL_list3208z00_1215;
																																{	/* Object/struct.scm 296 */
																																	obj_t
																																		BgL_arg3209z00_1216;
																																	BgL_arg3209z00_1216
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list3208z00_1215
																																		=
																																		MAKE_PAIR
																																		(BINT
																																		(BgL_iz00_1201),
																																		BgL_arg3209z00_1216);
																																}
																																BgL_arg3207z00_1214
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_auxz00_1108,
																																	BgL_list3208z00_1215);
																															}
																															BgL_arg3205z00_1212
																																=
																																MAKE_PAIR
																																(BgL_arg3206z00_1213,
																																BgL_arg3207z00_1214);
																														}
																														BgL_arg3204z00_1211
																															=
																															MAKE_PAIR
																															(BgL_arg3205z00_1212,
																															BgL_refza2za2_1203);
																													}
																													{
																														obj_t
																															BgL_refza2za2_2257;
																														obj_t
																															BgL_slotsz00_2256;
																														long BgL_iz00_2255;

																														BgL_iz00_2255 =
																															BgL_arg3202z00_1209;
																														BgL_slotsz00_2256 =
																															BgL_arg3203z00_1210;
																														BgL_refza2za2_2257 =
																															BgL_arg3204z00_1211;
																														BgL_refza2za2_1203 =
																															BgL_refza2za2_2257;
																														BgL_slotsz00_1202 =
																															BgL_slotsz00_2256;
																														BgL_iz00_1201 =
																															BgL_iz00_2255;
																														goto
																															BgL_zc3anonymousza33197ze3z83_1204;
																													}
																												}
																										}
																								}
																								BgL_arg3194z00_1196 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg3195z00_1197, BNIL);
																							}
																							BgL_arg3190z00_1192 =
																								MAKE_PAIR(BgL_wideningz00_1113,
																								BgL_arg3194z00_1196);
																						}
																						{	/* Object/struct.scm 281 */
																							obj_t BgL_list3192z00_1194;

																							{	/* Object/struct.scm 281 */
																								obj_t BgL_arg3193z00_1195;

																								BgL_arg3193z00_1195 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3192z00_1194 =
																									MAKE_PAIR(BgL_arg3190z00_1192,
																									BgL_arg3193z00_1195);
																							}
																							BgL_arg3189z00_1191 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_newz00_1110,
																								BgL_list3192z00_1194);
																						}
																					}
																					BgL_arg3154z00_1159 =
																						MAKE_PAIR(BgL_arg3187z00_1190,
																						BgL_arg3189z00_1191);
																				}
																				{	/* Object/struct.scm 275 */
																					obj_t BgL_list3156z00_1161;

																					{	/* Object/struct.scm 275 */
																						obj_t BgL_arg3157z00_1162;

																						{	/* Object/struct.scm 275 */
																							obj_t BgL_arg3158z00_1163;

																							{	/* Object/struct.scm 275 */
																								obj_t BgL_arg3159z00_1164;

																								BgL_arg3159z00_1164 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg3158z00_1163 =
																									MAKE_PAIR(BgL_newz00_1110,
																									BgL_arg3159z00_1164);
																							}
																							BgL_arg3157z00_1162 =
																								MAKE_PAIR(BgL_arg3154z00_1159,
																								BgL_arg3158z00_1163);
																						}
																						BgL_list3156z00_1161 =
																							MAKE_PAIR(BgL_arg3153z00_1158,
																							BgL_arg3157z00_1162);
																					}
																					BgL_arg3151z00_1156 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3152z00_1157,
																						BgL_list3156z00_1161);
																				}
																			}
																			BgL_arg3127z00_1133 =
																				MAKE_PAIR(BgL_arg3150z00_1155,
																				BgL_arg3151z00_1156);
																		}
																		{	/* Object/struct.scm 273 */
																			obj_t BgL_list3129z00_1135;

																			{	/* Object/struct.scm 273 */
																				obj_t BgL_arg3130z00_1136;

																				BgL_arg3130z00_1136 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3129z00_1135 =
																					MAKE_PAIR(BgL_arg3127z00_1133,
																					BgL_arg3130z00_1136);
																			}
																			BgL_arg3125z00_1131 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3126z00_1132,
																				BgL_list3129z00_1135);
																		}
																	}
																	BgL_arg3113z00_1119 =
																		MAKE_PAIR(BgL_arg3124z00_1130,
																		BgL_arg3125z00_1131);
																}
																{	/* Object/struct.scm 270 */
																	obj_t BgL_list3115z00_1121;

																	{	/* Object/struct.scm 270 */
																		obj_t BgL_arg3116z00_1122;

																		BgL_arg3116z00_1122 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3115z00_1121 =
																			MAKE_PAIR(BgL_arg3113z00_1119,
																			BgL_arg3116z00_1122);
																	}
																	BgL_arg3111z00_1117 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3112z00_1118, BgL_list3115z00_1121);
																}
															}
															BgL_arg3109z00_1115 =
																MAKE_PAIR(BgL_arg3110z00_1116,
																BgL_arg3111z00_1117);
														}
														return
															BGl_epairifyz00zztools_miscz00
															(BgL_arg3109z00_1115, BgL_srczd2defzd2_32);
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
	obj_t BGl_genericzd2initzd2zzobject_structz00()
	{
		AN_OBJECT;
		{	/* Object/struct.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_structz00()
	{
		AN_OBJECT;
		{	/* Object/struct.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_structz00()
	{
		AN_OBJECT;
		{	/* Object/struct.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 405988581),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
			return
				BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string3267z00zzobject_structz00));
		}
	}

#ifdef __cplusplus
}
#endif
