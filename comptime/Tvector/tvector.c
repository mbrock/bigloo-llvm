/*===========================================================================*/
/*   (Tvector/tvector.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tvector/tvector.scm)*/
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_makezd2coercionzd2clausez00zztvector_tvectorz00(obj_t);
	extern BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_tvecz00_bglt
		BGl_wideningzd2tveczd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztvector_tvectorz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static obj_t BGl__fillzd2tvecz12zc0zztvector_tvectorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__addzd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztvector_tvectorz00();
	BGL_EXPORTED_DECL bool_t BGl_tveczf3zf3zztvector_tvectorz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t);
	static obj_t BGl__declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_tvecz00_bglt BGl_tveczd2nilzd2zztvector_tvectorz00();
	static obj_t BGl__makezd2tveczd2zztvector_tvectorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zztvector_tvectorz00();
	static obj_t BGl__z52allocatezd2tvecz80zztvector_tvectorz00(obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl__tveczf3zf3zztvector_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztvector_tvectorz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL BgL_tvecz00_bglt
		BGl_fillzd2tvecz12zc0zztvector_tvectorz00(BgL_tvecz00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl__tveczd2nilzd2zztvector_tvectorz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2tvecz80zztvector_tvectorz00();
	static obj_t BGl_toplevelzd2initzd2zztvector_tvectorz00();
	static obj_t BGl_objectzd2ze3structzd2tvec1710ze3zztvector_tvectorz00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_tvecz00_bglt
		BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_tvecz00_bglt
		BGl_makezd2tveczd2zztvector_tvectorz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt);
	static obj_t BGl_structzb2objectzd2ze3objec1712z83zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztvector_tvectorz00();
	BGL_EXPORTED_DEF obj_t BGl_tvecz00zztvector_tvectorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2tvectorzd2typez12z12zztvector_tvectorz00(BgL_tvecz00_bglt);
	static obj_t BGl__wideningzd2tveczd2zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztvector_tvectorz00();
	static obj_t BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zztvector_tvectorz00();
	static obj_t __cnst[7];


	BGL_IMPORT obj_t BGl_expzd2envzd2zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2tveczd2envz00zztvector_tvectorz00,
		BgL_bgl__wideningza7d2tvec1834za7,
		BGl__wideningzd2tveczd2zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tveczd2envz00zztvector_tvectorz00,
		BgL_bgl__makeza7d2tvecza7d2za71835za7,
		BGl__makezd2tveczd2zztvector_tvectorz00, 0L, BUNSPEC, 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2nilzd2envz00zztvector_tvectorz00,
		BgL_bgl__tvecza7d2nilza7d2za7za71836z00,
		BGl__tveczd2nilzd2zztvector_tvectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1824z00zztvector_tvectorz00,
		BgL_bgl_objectza7d2za7e3stru1837z00,
		BGl_objectzd2ze3structzd2tvec1710ze3zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1826z00zztvector_tvectorz00,
		BgL_bgl_structza7b2objectza71838z00,
		BGl_structzb2objectzd2ze3objec1712z83zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2tveczd2envz52zztvector_tvectorz00,
		BgL_bgl__za752allocateza7d2t1839z00,
		BGl__z52allocatezd2tvecz80zztvector_tvectorz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1813z00zztvector_tvectorz00,
		BgL_bgl_string1813za700za7za7t1840za7, "declare-tvector-type!", 21);
	      DEFINE_STRING(BGl_string1814z00zztvector_tvectorz00,
		BgL_bgl_string1814za700za7za7t1841za7, "Unable to find `obj' type", 25);
	      DEFINE_STRING(BGl_string1815z00zztvector_tvectorz00,
		BgL_bgl_string1815za700za7za7t1842za7, "/* Tvector type definitions */",
		30);
	      DEFINE_STRING(BGl_string1816z00zztvector_tvectorz00,
		BgL_bgl_string1816za700za7za7t1843za7, "struct bgl_tvector_of_", 22);
	      DEFINE_STRING(BGl_string1817z00zztvector_tvectorz00,
		BgL_bgl_string1817za700za7za7t1844za7, " {", 2);
	      DEFINE_STRING(BGl_string1818z00zztvector_tvectorz00,
		BgL_bgl_string1818za700za7za7t1845za7, "   header_t header;", 19);
	      DEFINE_STRING(BGl_string1820z00zztvector_tvectorz00,
		BgL_bgl_string1820za700za7za7t1846za7, "   obj_t    descr;", 18);
	      DEFINE_STRING(BGl_string1819z00zztvector_tvectorz00,
		BgL_bgl_string1819za700za7za7t1847za7, "   long     length;", 19);
	      DEFINE_STRING(BGl_string1821z00zztvector_tvectorz00,
		BgL_bgl_string1821za700za7za7t1848za7, "   ", 3);
	      DEFINE_STRING(BGl_string1822z00zztvector_tvectorz00,
		BgL_bgl_string1822za700za7za7t1849za7, " el0;", 5);
	      DEFINE_STRING(BGl_string1823z00zztvector_tvectorz00,
		BgL_bgl_string1823za700za7za7t1850za7, "};\n", 3);
	      DEFINE_STRING(BGl_string1825z00zztvector_tvectorz00,
		BgL_bgl_string1825za700za7za7t1851za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string1827z00zztvector_tvectorz00,
		BgL_bgl_string1827za700za7za7t1852za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string1828z00zztvector_tvectorz00,
		BgL_bgl_string1828za700za7za7t1853za7, "tvector_tvector", 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2tvectorzd2typez12zd2envzc0zztvector_tvectorz00,
		BgL_bgl__declareza7d2tvect1854za7,
		BGl__declarezd2tvectorzd2typez12z12zztvector_tvectorz00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1829z00zztvector_tvectorz00,
		BgL_bgl_string1829za700za7za7t1855za7,
		"_ tvec tvector coerce type bigloo obj ", 38);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2tvectorzd2typez12zd2envzc0zztvector_tvectorz00,
		BgL_bgl__addza7d2tvectorza7d1856z00,
		BGl__addzd2tvectorzd2typez12z12zztvector_tvectorz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2tvectorzd2typeszd2envzd2zztvector_tvectorz00,
		BgL_bgl__emitza7d2tvectorza71857z00,
		BGl__emitzd2tvectorzd2typesz00zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2tvecz12zd2envz12zztvector_tvectorz00,
		BgL_bgl__fillza7d2tvecza712za71858za7,
		BGl__fillzd2tvecz12zc0zztvector_tvectorz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczf3zd2envz21zztvector_tvectorz00,
		BgL_bgl__tvecza7f3za7f3za7za7tve1859z00,
		BGl__tveczf3zf3zztvector_tvectorz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long
		BgL_checksumz00_542, char *BgL_fromz00_543)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztvector_tvectorz00))
				{
					BGl_requirezd2initializa7ationz75zztvector_tvectorz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztvector_tvectorz00();
					BGl_cnstzd2initzd2zztvector_tvectorz00();
					BGl_importedzd2moduleszd2initz00zztvector_tvectorz00();
					BGl_objectzd2initzd2zztvector_tvectorz00();
					BGl_methodzd2initzd2zztvector_tvectorz00();
					BGl_toplevelzd2initzd2zztvector_tvectorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tvector_tvector");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			{	/* Tvector/tvector.scm 15 */
				obj_t BgL_cportz00_523;

				BgL_cportz00_523 =
					bgl_open_input_string(BGl_string1829z00zztvector_tvectorz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_524;

					BgL_iz00_524 = ((long) 6);
				BgL_loopz00_525:
					if ((BgL_iz00_524 == ((long) -1)))
						{	/* Tvector/tvector.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tvector/tvector.scm 15 */
							{	/* Tvector/tvector.scm 15 */
								obj_t BgL_arg1831z00_527;

								{	/* Tvector/tvector.scm 15 */

									{	/* Tvector/tvector.scm 15 */
										obj_t BgL_locationz00_529;

										BgL_locationz00_529 = BBOOL(((bool_t) 0));
										{	/* Tvector/tvector.scm 15 */

											BgL_arg1831z00_527 =
												BGl_readz00zz__readerz00(BgL_cportz00_523,
												BgL_locationz00_529);
										}
									}
								}
								{	/* Tvector/tvector.scm 15 */
									int BgL_auxz00_565;

									BgL_auxz00_565 = (int) (BgL_iz00_524);
									CNST_TABLE_SET(BgL_auxz00_565, BgL_arg1831z00_527);
							}}
							{	/* Tvector/tvector.scm 15 */
								int BgL_auxz00_530;

								BgL_auxz00_530 = (int) ((BgL_iz00_524 - ((long) 1)));
								{
									long BgL_iz00_570;

									BgL_iz00_570 = (long) (BgL_auxz00_530);
									BgL_iz00_524 = BgL_iz00_570;
									goto BgL_loopz00_525;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			return (BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 =
				BNIL, BUNSPEC);
		}
	}



/* add-tvector-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2tvectorzd2typez12z12zztvector_tvectorz00(BgL_tvecz00_bglt
		BgL_typez00_1)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 39 */
			return (BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 =
				MAKE_PAIR(
					(obj_t) (BgL_typez00_1),
					BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00), BUNSPEC);
		}
	}



/* _add-tvector-type! */
	obj_t BGl__addzd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t
		BgL_envz00_475, obj_t BgL_typez00_476)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 39 */
			return
				BGl_addzd2tvectorzd2typez12z12zztvector_tvectorz00(
				(BgL_tvecz00_bglt) (BgL_typez00_476));
		}
	}



/* declare-tvector-type! */
	BGL_EXPORTED_DEF BgL_tvecz00_bglt
		BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t
		BgL_tvectzd2idzd2_2, obj_t BgL_itemzd2idzd2_3, obj_t BgL_srcz00_4)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 45 */
			{	/* Tvector/tvector.scm 46 */
				BgL_typez00_bglt BgL_objz00_186;

				BgL_objz00_186 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0)));
				{	/* Tvector/tvector.scm 47 */
					bool_t BgL_testz00_578;

					{	/* Tvector/tvector.scm 47 */
						obj_t BgL_obj1599z00_306;

						BgL_obj1599z00_306 = (obj_t) (BgL_objz00_186);
						BgL_testz00_578 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1599z00_306,
							BGl_typez00zztype_typez00);
					}
					if (BgL_testz00_578)
						{	/* Tvector/tvector.scm 49 */
							BgL_typez00_bglt BgL_typez00_188;

							BgL_typez00_bglt BgL_itemzd2typezd2_189;

							{	/* Tvector/tvector.scm 50 */
								obj_t BgL_arg1719z00_194;

								obj_t BgL_arg1724z00_195;

								obj_t BgL_arg1725z00_196;

								BgL_arg1719z00_194 =
									(((BgL_typez00_bglt) CREF(BgL_objz00_186))->BgL_namez00);
								{	/* Tvector/tvector.scm 51 */
									obj_t BgL_list1726z00_197;

									BgL_list1726z00_197 =
										MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
									BgL_arg1724z00_195 = BgL_list1726z00_197;
								}
								BgL_arg1725z00_196 = CNST_TABLE_REF(((long) 1));
								BgL_typez00_188 =
									BGl_declarezd2subtypez12zc0zztype_envz00(BgL_tvectzd2idzd2_2,
									BgL_arg1719z00_194, BgL_arg1724z00_195, BgL_arg1725z00_196);
							}
							BgL_itemzd2typezd2_189 =
								BGl_usezd2typez12zc0zztype_envz00(BgL_itemzd2idzd2_3,
								BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_4));
							{	/* Tvector/tvector.scm 55 */
								BgL_typez00_bglt BgL_obj1697z00_190;

								BgL_obj1697z00_190 = ((BgL_typez00_bglt) BgL_typez00_188);
								{	/* Tvector/tvector.scm 55 */
									BgL_tvecz00_bglt BgL_arg1714z00_191;

									{	/* Tvector/tvector.scm 55 */
										BgL_tvecz00_bglt BgL_res1798z00_316;

										{	/* Tvector/tvector.scm 55 */
											BgL_tvecz00_bglt BgL_new1621z00_311;

											BgL_new1621z00_311 =
												((BgL_tvecz00_bglt) BREF(GC_MALLOC(sizeof(struct
															BgL_tvecz00_bgl))));
											{	/* Tvector/tvector.scm 55 */
												BgL_tvecz00_bglt BgL_res1797z00_315;

												{	/* Tvector/tvector.scm 55 */
													BgL_tvecz00_bglt BgL_new1642z00_312;

													BgL_new1642z00_312 = BgL_new1621z00_311;
													{	/* Tvector/tvector.scm 55 */
														BgL_typez00_bglt BgL_itemzd2type1641zd2_314;

														BgL_itemzd2type1641zd2_314 = BgL_itemzd2typezd2_189;
														((((BgL_tvecz00_bglt) CREF(BgL_new1642z00_312))->
																BgL_itemzd2typezd2) =
															((BgL_typez00_bglt) BgL_itemzd2type1641zd2_314),
															BUNSPEC);
														BgL_res1797z00_315 = BgL_new1642z00_312;
												}} BgL_res1797z00_315;
											}
											BgL_res1798z00_316 = BgL_new1621z00_311;
										}
										BgL_arg1714z00_191 = BgL_res1798z00_316;
									}
									{	/* Tvector/tvector.scm 55 */
										obj_t BgL_auxz00_593;

										BgL_objectz00_bglt BgL_auxz00_591;

										BgL_auxz00_593 = (obj_t) (BgL_arg1714z00_191);
										BgL_auxz00_591 = (BgL_objectz00_bglt) (BgL_obj1697z00_190);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_591, BgL_auxz00_593);
								}}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj1697z00_190),
									BGl_classzd2numzd2zz__objectz00
									(BGl_tvecz00zztvector_tvectorz00));
								BgL_obj1697z00_190;
							}
							BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
								(BGl_makezd2coercionzd2clausez00zztvector_tvectorz00
								(BgL_tvectzd2idzd2_2));
							{	/* Tvector/tvector.scm 59 */
								BgL_tvecz00_bglt BgL_typez00_319;

								BgL_typez00_319 = (BgL_tvecz00_bglt) (BgL_typez00_188);
								BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 =
									MAKE_PAIR(
									(obj_t) (BgL_typez00_319),
									BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00);
							}
							{
								obj_t BgL_auxz00_604;

								BgL_auxz00_604 = (obj_t) (BgL_typez00_188);
								((((BgL_typez00_bglt) CREF(BgL_itemzd2typezd2_189))->
										BgL_tvectorz00) = ((obj_t) BgL_auxz00_604), BUNSPEC);
							}
							return (BgL_tvecz00_bglt) (BgL_typez00_188);
						}
					else
						{	/* Tvector/tvector.scm 47 */
							return
								(BgL_tvecz00_bglt) (BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1813z00zztvector_tvectorz00,
									BGl_string1814z00zztvector_tvectorz00,
									BGl_expzd2envzd2zz__r4_numbers_6_5z00, BNIL));
						}
				}
			}
		}
	}



/* _declare-tvector-type! */
	obj_t BGl__declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t
		BgL_envz00_477, obj_t BgL_tvectzd2idzd2_478, obj_t BgL_itemzd2idzd2_479,
		obj_t BgL_srcz00_480)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 45 */
			return
				(obj_t) (BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00
				(BgL_tvectzd2idzd2_478, BgL_itemzd2idzd2_479, BgL_srcz00_480));
		}
	}



/* emit-tvector-types */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t
		BgL_oportz00_5)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 68 */
			if (PAIRP(BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00))
				{	/* Tvector/tvector.scm 69 */
					bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
					bgl_display_string(BGl_string1815z00zztvector_tvectorz00,
						BgL_oportz00_5);
					bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
				}
			else
				{	/* Tvector/tvector.scm 69 */
					BFALSE;
				}
			{	/* Tvector/tvector.scm 71 */
				obj_t BgL_g1707z00_202;

				BgL_g1707z00_202 =
					bgl_reverse_bang
					(BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00);
				{
					obj_t BgL_l1705z00_204;

					BgL_l1705z00_204 = BgL_g1707z00_202;
				BgL_zc3anonymousza31732ze3z83_205:
					if (PAIRP(BgL_l1705z00_204))
						{	/* Tvector/tvector.scm 80 */
							{	/* Tvector/tvector.scm 72 */
								obj_t BgL_tvectorz00_207;

								BgL_tvectorz00_207 = CAR(BgL_l1705z00_204);
								{	/* Tvector/tvector.scm 72 */
									obj_t BgL_itemzd2typezd2namez00_208;

									{	/* Tvector/tvector.scm 72 */
										BgL_typez00_bglt BgL_obj1509z00_331;

										{	/* Tvector/tvector.scm 72 */
											BgL_tvecz00_bglt BgL_obj1653z00_330;

											BgL_obj1653z00_330 =
												(BgL_tvecz00_bglt) (BgL_tvectorz00_207);
											{
												obj_t BgL_auxz00_622;

												{	/* Tvector/tvector.scm 72 */
													BgL_objectz00_bglt BgL_auxz00_623;

													BgL_auxz00_623 =
														(BgL_objectz00_bglt) (BgL_obj1653z00_330);
													BgL_auxz00_622 = BGL_OBJECT_WIDENING(BgL_auxz00_623);
												}
												BgL_obj1509z00_331 =
													(((BgL_tvecz00_bglt) CREF(BgL_auxz00_622))->
													BgL_itemzd2typezd2);
											}
										}
										BgL_itemzd2typezd2namez00_208 =
											(((BgL_typez00_bglt) CREF(BgL_obj1509z00_331))->
											BgL_namez00);
									}
									bgl_display_string(BGl_string1816z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_obj(bigloo_mangle(BgL_itemzd2typezd2namez00_208),
										BgL_oportz00_5);
									bgl_display_string(BGl_string1817z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
									bgl_display_string(BGl_string1818z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
									bgl_display_string(BGl_string1819z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
									bgl_display_string(BGl_string1820z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
									bgl_display_string(BGl_string1821z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_obj(BgL_itemzd2typezd2namez00_208,
										BgL_oportz00_5);
									bgl_display_string(BGl_string1822z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
									bgl_display_string(BGl_string1823z00zztvector_tvectorz00,
										BgL_oportz00_5);
									bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
							}}
							{
								obj_t BgL_l1705z00_645;

								BgL_l1705z00_645 = CDR(BgL_l1705z00_204);
								BgL_l1705z00_204 = BgL_l1705z00_645;
								goto BgL_zc3anonymousza31732ze3z83_205;
							}
						}
					else
						{	/* Tvector/tvector.scm 80 */
							((bool_t) 1);
						}
				}
			}
			return bgl_display_char(((unsigned char) '\n'), BgL_oportz00_5);
		}
	}



/* _emit-tvector-types */
	obj_t BGl__emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t BgL_envz00_483,
		obj_t BgL_oportz00_484)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 68 */
			return
				BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(BgL_oportz00_484);
		}
	}



/* make-coercion-clause */
	obj_t BGl_makezd2coercionzd2clausez00zztvector_tvectorz00(obj_t
		BgL_tvectzd2idzd2_6)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 86 */
			{	/* Tvector/tvector.scm 87 */
				obj_t BgL_arg1738z00_219;

				obj_t BgL_arg1739z00_220;

				BgL_arg1738z00_219 = CNST_TABLE_REF(((long) 2));
				{	/* Tvector/tvector.scm 87 */
					obj_t BgL_arg1740z00_221;

					obj_t BgL_arg1741z00_222;

					{	/* Tvector/tvector.scm 87 */
						obj_t BgL_arg1745z00_226;

						obj_t BgL_arg1746z00_227;

						BgL_arg1745z00_226 = CNST_TABLE_REF(((long) 3));
						{	/* Tvector/tvector.scm 87 */
							obj_t BgL_list1747z00_228;

							{	/* Tvector/tvector.scm 87 */
								obj_t BgL_arg1748z00_229;

								obj_t BgL_arg1749z00_230;

								BgL_arg1748z00_229 = CNST_TABLE_REF(((long) 4));
								{	/* Tvector/tvector.scm 87 */
									obj_t BgL_arg1751z00_232;

									{	/* Tvector/tvector.scm 87 */
										obj_t BgL_arg1754z00_234;

										BgL_arg1754z00_234 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1751z00_232 = MAKE_PAIR(BNIL, BgL_arg1754z00_234);
									}
									BgL_arg1749z00_230 = MAKE_PAIR(BNIL, BgL_arg1751z00_232);
								}
								BgL_list1747z00_228 =
									MAKE_PAIR(BgL_arg1748z00_229, BgL_arg1749z00_230);
							}
							BgL_arg1746z00_227 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_tvectzd2idzd2_6,
								BgL_list1747z00_228);
						}
						BgL_arg1740z00_221 =
							MAKE_PAIR(BgL_arg1745z00_226, BgL_arg1746z00_227);
					}
					{	/* Tvector/tvector.scm 88 */
						obj_t BgL_arg1755z00_235;

						obj_t BgL_arg1756z00_236;

						BgL_arg1755z00_235 = CNST_TABLE_REF(((long) 3));
						{	/* Tvector/tvector.scm 88 */
							obj_t BgL_list1757z00_237;

							{	/* Tvector/tvector.scm 88 */
								obj_t BgL_arg1758z00_238;

								{	/* Tvector/tvector.scm 88 */
									obj_t BgL_arg1767z00_240;

									{	/* Tvector/tvector.scm 88 */
										obj_t BgL_arg1769z00_242;

										BgL_arg1769z00_242 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg1767z00_240 = MAKE_PAIR(BNIL, BgL_arg1769z00_242);
									}
									BgL_arg1758z00_238 = MAKE_PAIR(BNIL, BgL_arg1767z00_240);
								}
								BgL_list1757z00_237 =
									MAKE_PAIR(BgL_tvectzd2idzd2_6, BgL_arg1758z00_238);
							}
							BgL_arg1756z00_236 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
										(long) 4)), BgL_list1757z00_237);
						}
						BgL_arg1741z00_222 =
							MAKE_PAIR(BgL_arg1755z00_235, BgL_arg1756z00_236);
					}
					{	/* Tvector/tvector.scm 87 */
						obj_t BgL_list1743z00_224;

						{	/* Tvector/tvector.scm 87 */
							obj_t BgL_arg1744z00_225;

							BgL_arg1744z00_225 = MAKE_PAIR(BNIL, BNIL);
							BgL_list1743z00_224 =
								MAKE_PAIR(BgL_arg1741z00_222, BgL_arg1744z00_225);
						}
						BgL_arg1739z00_220 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg1740z00_221,
							BgL_list1743z00_224);
				}}
				return MAKE_PAIR(BgL_arg1738z00_219, BgL_arg1739z00_220);
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			{	/* Tvector/tvector.scm 23 */
				obj_t BgL_arg1770z00_243;

				obj_t BgL_arg1771z00_244;

				obj_t BgL_arg1776z00_247;

				BgL_arg1770z00_243 = CNST_TABLE_REF(((long) 5));
				BgL_arg1771z00_244 = BGl_typez00zztype_typez00;
				{	/* Tvector/tvector.scm 23 */
					obj_t BgL_v1708z00_248;

					BgL_v1708z00_248 = create_vector((int) (((long) 0)));
					BgL_arg1776z00_247 = BgL_v1708z00_248;
				}
				BGl_tvecz00zztvector_tvectorz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg1770z00_243,
					BgL_arg1771z00_244, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2tveczd2envz52zztvector_tvectorz00,
					BGl_tveczd2nilzd2envz00zztvector_tvectorz00,
					BGl_tveczf3zd2envz21zztvector_tvectorz00, ((long) 524731270), BFALSE,
					BFALSE, BgL_arg1776z00_247);
			}
			return (BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* tvec? */
	BGL_EXPORTED_DEF bool_t BGl_tveczf3zf3zztvector_tvectorz00(obj_t
		BgL_obj1652z00_7)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1652z00_7,
				BGl_tvecz00zztvector_tvectorz00);
		}
	}



/* _tvec? */
	obj_t BGl__tveczf3zf3zztvector_tvectorz00(obj_t BgL_envz00_487,
		obj_t BgL_obj1652z00_488)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1652z00_488,
					BGl_tvecz00zztvector_tvectorz00));
		}
	}



/* widening-tvec */
	BGL_EXPORTED_DEF BgL_tvecz00_bglt
		BGl_wideningzd2tveczd2zztvector_tvectorz00(BgL_typez00_bglt
		BgL_itemzd2type1620zd2_11)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{	/* Tvector/tvector.scm 23 */
				BgL_tvecz00_bglt BgL_new1621z00_356;

				BgL_new1621z00_356 =
					((BgL_tvecz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_tvecz00_bgl))));
				{	/* Tvector/tvector.scm 23 */
					BgL_tvecz00_bglt BgL_res1799z00_360;

					{	/* Tvector/tvector.scm 23 */
						BgL_tvecz00_bglt BgL_new1642z00_357;

						BgL_new1642z00_357 = BgL_new1621z00_356;
						{	/* Tvector/tvector.scm 23 */
							BgL_typez00_bglt BgL_itemzd2type1641zd2_359;

							BgL_itemzd2type1641zd2_359 = BgL_itemzd2type1620zd2_11;
							((((BgL_tvecz00_bglt) CREF(BgL_new1642z00_357))->
									BgL_itemzd2typezd2) =
								((BgL_typez00_bglt) BgL_itemzd2type1641zd2_359), BUNSPEC);
							BgL_res1799z00_360 = BgL_new1642z00_357;
					}} BgL_res1799z00_360;
				}
				return BgL_new1621z00_356;
			}
		}
	}



/* _widening-tvec */
	obj_t BGl__wideningzd2tveczd2zztvector_tvectorz00(obj_t BgL_envz00_489,
		obj_t BgL_itemzd2type1620zd2_490)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			return
				(obj_t) (BGl_wideningzd2tveczd2zztvector_tvectorz00(
					(BgL_typez00_bglt) (BgL_itemzd2type1620zd2_490)));
		}
	}



/* make-tvec */
	BGL_EXPORTED_DEF BgL_tvecz00_bglt BGl_makezd2tveczd2zztvector_tvectorz00(obj_t
		BgL_id1624z00_12, obj_t BgL_name1625z00_13, obj_t BgL_siza7e1626za7_14,
		obj_t BgL_class1627z00_15, obj_t BgL_coercezd2to1628zd2_16,
		obj_t BgL_parents1629z00_17, bool_t BgL_initzf31630zf3_18,
		bool_t BgL_magiczf31631zf3_19, obj_t BgL_z421632z42_20,
		obj_t BgL_alias1633z00_21, obj_t BgL_pointedzd2tozd2by1634z00_22,
		obj_t BgL_tvector1635z00_23, obj_t BgL_location1636z00_24,
		obj_t BgL_importzd2location1637zd2_25, int BgL_occurrence1638z00_26,
		BgL_typez00_bglt BgL_itemzd2type1623zd2_27)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{	/* Tvector/tvector.scm 23 */
				BgL_typez00_bglt BgL_aux1639z00_361;

				BgL_aux1639z00_361 =
					BGl_makezd2typezd2zztype_typez00(BgL_id1624z00_12, BgL_name1625z00_13,
					BgL_siza7e1626za7_14, BgL_class1627z00_15, BgL_coercezd2to1628zd2_16,
					BgL_parents1629z00_17, BgL_initzf31630zf3_18, BgL_magiczf31631zf3_19,
					BgL_z421632z42_20, BgL_alias1633z00_21,
					BgL_pointedzd2tozd2by1634z00_22, BgL_tvector1635z00_23,
					BgL_location1636z00_24, BgL_importzd2location1637zd2_25,
					BgL_occurrence1638z00_26);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux1639z00_361),
					BGl_classzd2numzd2zz__objectz00(BGl_tvecz00zztvector_tvectorz00));
				{	/* Tvector/tvector.scm 23 */
					BgL_tvecz00_bglt BgL_arg1778z00_363;

					{	/* Tvector/tvector.scm 23 */
						BgL_tvecz00_bglt BgL_res1801z00_373;

						{	/* Tvector/tvector.scm 23 */
							BgL_tvecz00_bglt BgL_new1621z00_368;

							BgL_new1621z00_368 =
								((BgL_tvecz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_tvecz00_bgl))));
							{	/* Tvector/tvector.scm 23 */
								BgL_tvecz00_bglt BgL_res1800z00_372;

								{	/* Tvector/tvector.scm 23 */
									BgL_tvecz00_bglt BgL_new1642z00_369;

									BgL_new1642z00_369 = BgL_new1621z00_368;
									{	/* Tvector/tvector.scm 23 */
										BgL_typez00_bglt BgL_itemzd2type1641zd2_371;

										BgL_itemzd2type1641zd2_371 = BgL_itemzd2type1623zd2_27;
										((((BgL_tvecz00_bglt) CREF(BgL_new1642z00_369))->
												BgL_itemzd2typezd2) =
											((BgL_typez00_bglt) BgL_itemzd2type1641zd2_371), BUNSPEC);
										BgL_res1800z00_372 = BgL_new1642z00_369;
								}} BgL_res1800z00_372;
							}
							BgL_res1801z00_373 = BgL_new1621z00_368;
						}
						BgL_arg1778z00_363 = BgL_res1801z00_373;
					}
					{	/* Tvector/tvector.scm 23 */
						obj_t BgL_auxz00_690;

						BgL_objectz00_bglt BgL_auxz00_688;

						BgL_auxz00_690 = (obj_t) (BgL_arg1778z00_363);
						BgL_auxz00_688 = (BgL_objectz00_bglt) (BgL_aux1639z00_361);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_688, BgL_auxz00_690);
				}}
				return ((BgL_tvecz00_bglt) (BgL_tvecz00_bglt) (BgL_aux1639z00_361));
			}
		}
	}



/* _make-tvec */
	obj_t BGl__makezd2tveczd2zztvector_tvectorz00(obj_t BgL_envz00_491,
		obj_t BgL_id1624z00_492, obj_t BgL_name1625z00_493,
		obj_t BgL_siza7e1626za7_494, obj_t BgL_class1627z00_495,
		obj_t BgL_coercezd2to1628zd2_496, obj_t BgL_parents1629z00_497,
		obj_t BgL_initzf31630zf3_498, obj_t BgL_magiczf31631zf3_499,
		obj_t BgL_z421632z42_500, obj_t BgL_alias1633z00_501,
		obj_t BgL_pointedzd2tozd2by1634z00_502, obj_t BgL_tvector1635z00_503,
		obj_t BgL_location1636z00_504, obj_t BgL_importzd2location1637zd2_505,
		obj_t BgL_occurrence1638z00_506, obj_t BgL_itemzd2type1623zd2_507)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			return
				(obj_t) (BGl_makezd2tveczd2zztvector_tvectorz00(BgL_id1624z00_492,
					BgL_name1625z00_493, BgL_siza7e1626za7_494, BgL_class1627z00_495,
					BgL_coercezd2to1628zd2_496, BgL_parents1629z00_497,
					CBOOL(BgL_initzf31630zf3_498), CBOOL(BgL_magiczf31631zf3_499),
					BgL_z421632z42_500, BgL_alias1633z00_501,
					BgL_pointedzd2tozd2by1634z00_502, BgL_tvector1635z00_503,
					BgL_location1636z00_504, BgL_importzd2location1637zd2_505,
					CINT(BgL_occurrence1638z00_506),
					(BgL_typez00_bglt) (BgL_itemzd2type1623zd2_507)));
		}
	}



/* fill-tvec! */
	BGL_EXPORTED_DEF BgL_tvecz00_bglt
		BGl_fillzd2tvecz12zc0zztvector_tvectorz00(BgL_tvecz00_bglt
		BgL_new1642z00_28, BgL_typez00_bglt BgL_itemzd2type1641zd2_29)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{	/* Tvector/tvector.scm 23 */
				BgL_typez00_bglt BgL_itemzd2type1641zd2_532;

				BgL_itemzd2type1641zd2_532 = BgL_itemzd2type1641zd2_29;
				((((BgL_tvecz00_bglt) CREF(BgL_new1642z00_28))->BgL_itemzd2typezd2) =
					((BgL_typez00_bglt) BgL_itemzd2type1641zd2_532), BUNSPEC);
				return BgL_new1642z00_28;
			}
		}
	}



/* _fill-tvec! */
	obj_t BGl__fillzd2tvecz12zc0zztvector_tvectorz00(obj_t BgL_envz00_508,
		obj_t BgL_new1642z00_509, obj_t BgL_itemzd2type1641zd2_510)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{	/* Tvector/tvector.scm 23 */
				BgL_tvecz00_bglt BgL_auxz00_702;

				{	/* Tvector/tvector.scm 23 */
					BgL_tvecz00_bglt BgL_res1832z00_536;

					{	/* Tvector/tvector.scm 23 */
						BgL_tvecz00_bglt BgL_new1642z00_533;

						BgL_typez00_bglt BgL_itemzd2type1641zd2_534;

						BgL_new1642z00_533 = (BgL_tvecz00_bglt) (BgL_new1642z00_509);
						BgL_itemzd2type1641zd2_534 =
							(BgL_typez00_bglt) (BgL_itemzd2type1641zd2_510);
						{	/* Tvector/tvector.scm 23 */
							BgL_typez00_bglt BgL_itemzd2type1641zd2_535;

							BgL_itemzd2type1641zd2_535 = BgL_itemzd2type1641zd2_534;
							((((BgL_tvecz00_bglt) CREF(BgL_new1642z00_533))->
									BgL_itemzd2typezd2) =
								((BgL_typez00_bglt) BgL_itemzd2type1641zd2_535), BUNSPEC);
							BgL_res1832z00_536 = BgL_new1642z00_533;
						}
					}
					BgL_auxz00_702 = BgL_res1832z00_536;
				}
				return (obj_t) (BgL_auxz00_702);
			}
		}
	}



/* %allocate-tvec */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2tvecz80zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{	/* Tvector/tvector.scm 23 */
				BgL_typez00_bglt BgL_new1645z00_537;

				BgL_new1645z00_537 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1645z00_537),
					BGl_classzd2numzd2zz__objectz00(BGl_tvecz00zztvector_tvectorz00));
				{	/* Tvector/tvector.scm 23 */
					BgL_objectz00_bglt BgL_auxz00_711;

					BgL_auxz00_711 = (BgL_objectz00_bglt) (BgL_new1645z00_537);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_711, BFALSE);
				}
				return BgL_new1645z00_537;
			}
		}
	}



/* _%allocate-tvec */
	obj_t BGl__z52allocatezd2tvecz80zztvector_tvectorz00(obj_t BgL_envz00_485)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{	/* Tvector/tvector.scm 23 */
				BgL_typez00_bglt BgL_auxz00_714;

				{	/* Tvector/tvector.scm 23 */
					BgL_typez00_bglt BgL_res1833z00_541;

					{	/* Tvector/tvector.scm 23 */
						BgL_typez00_bglt BgL_new1645z00_539;

						BgL_new1645z00_539 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1645z00_539),
							BGl_classzd2numzd2zz__objectz00(BGl_tvecz00zztvector_tvectorz00));
						{	/* Tvector/tvector.scm 23 */
							BgL_objectz00_bglt BgL_auxz00_719;

							BgL_auxz00_719 = (BgL_objectz00_bglt) (BgL_new1645z00_539);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_719, BFALSE);
						}
						BgL_res1833z00_541 = BgL_new1645z00_539;
					}
					BgL_auxz00_714 = BgL_res1833z00_541;
				}
				return (obj_t) (BgL_auxz00_714);
			}
		}
	}



/* tvec-nil */
	BGL_EXPORTED_DEF BgL_tvecz00_bglt BGl_tveczd2nilzd2zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			if ((BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00 == BUNSPEC))
				{	/* Tvector/tvector.scm 23 */
					{	/* Tvector/tvector.scm 23 */
						BgL_typez00_bglt BgL_res1802z00_383;

						{	/* Tvector/tvector.scm 23 */
							BgL_typez00_bglt BgL_new1598z00_379;

							BgL_new1598z00_379 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_379),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Tvector/tvector.scm 23 */
								BgL_objectz00_bglt BgL_auxz00_729;

								BgL_auxz00_729 = (BgL_objectz00_bglt) (BgL_new1598z00_379);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_729, BFALSE);
							}
							BgL_res1802z00_383 = BgL_new1598z00_379;
						}
						BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00 =
							(obj_t) (BgL_res1802z00_383);
					}
					{	/* Tvector/tvector.scm 23 */
						BgL_typez00_bglt BgL_res1803z00_415;

						{	/* Tvector/tvector.scm 23 */
							BgL_typez00_bglt BgL_new1581z00_384;

							obj_t BgL_id1566z00_385;

							int BgL_occurrence1580z00_399;

							BgL_new1581z00_384 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00);
							BgL_id1566z00_385 = CNST_TABLE_REF(((long) 6));
							BgL_occurrence1580z00_399 = (int) (((long) 0));
							{	/* Tvector/tvector.scm 23 */
								obj_t BgL_id1566z00_400;

								obj_t BgL_name1567z00_401;

								obj_t BgL_siza7e1568za7_402;

								obj_t BgL_class1569z00_403;

								obj_t BgL_coercezd2to1570zd2_404;

								obj_t BgL_parents1571z00_405;

								bool_t BgL_initzf31572zf3_406;

								bool_t BgL_magiczf31573zf3_407;

								obj_t BgL_z421574z42_408;

								obj_t BgL_alias1575z00_409;

								obj_t BgL_pointedzd2tozd2by1576z00_410;

								obj_t BgL_tvector1577z00_411;

								obj_t BgL_location1578z00_412;

								obj_t BgL_importzd2location1579zd2_413;

								int BgL_occurrence1580z00_414;

								BgL_id1566z00_400 = BgL_id1566z00_385;
								BgL_name1567z00_401 = BUNSPEC;
								BgL_siza7e1568za7_402 = BUNSPEC;
								BgL_class1569z00_403 = BUNSPEC;
								BgL_coercezd2to1570zd2_404 = BUNSPEC;
								BgL_parents1571z00_405 = BUNSPEC;
								BgL_initzf31572zf3_406 = ((bool_t) 0);
								BgL_magiczf31573zf3_407 = ((bool_t) 0);
								BgL_z421574z42_408 = BUNSPEC;
								BgL_alias1575z00_409 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_410 = BUNSPEC;
								BgL_tvector1577z00_411 = BUNSPEC;
								BgL_location1578z00_412 = BUNSPEC;
								BgL_importzd2location1579zd2_413 = BUNSPEC;
								BgL_occurrence1580z00_414 = BgL_occurrence1580z00_399;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->BgL_idz00) =
									((obj_t) BgL_id1566z00_400), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->BgL_namez00) =
									((obj_t) BgL_name1567z00_401), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_402), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->BgL_classz00) =
									((obj_t) BgL_class1569z00_403), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_404), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_405), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_406), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_407), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_408), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->BgL_aliasz00) =
									((obj_t) BgL_alias1575z00_409), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_410), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_411), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_412), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_413), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_384))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_414), BUNSPEC);
								BgL_res1803z00_415 = BgL_new1581z00_384;
						}} BgL_res1803z00_415;
					}
					{	/* Tvector/tvector.scm 23 */
						long BgL_arg1782z00_258;

						BgL_arg1782z00_258 =
							BGl_classzd2numzd2zz__objectz00(BGl_tvecz00zztvector_tvectorz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00),
							BgL_arg1782z00_258);
					}
					{	/* Tvector/tvector.scm 23 */
						BgL_tvecz00_bglt BgL_arg1783z00_259;

						{	/* Tvector/tvector.scm 23 */
							BgL_typez00_bglt BgL_arg1784z00_260;

							BgL_arg1784z00_260 = BGl_typezd2nilzd2zztype_typez00();
							{	/* Tvector/tvector.scm 23 */
								BgL_tvecz00_bglt BgL_res1805z00_424;

								{	/* Tvector/tvector.scm 23 */
									BgL_tvecz00_bglt BgL_new1621z00_419;

									BgL_new1621z00_419 =
										((BgL_tvecz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_tvecz00_bgl))));
									{	/* Tvector/tvector.scm 23 */
										BgL_tvecz00_bglt BgL_res1804z00_423;

										{	/* Tvector/tvector.scm 23 */
											BgL_tvecz00_bglt BgL_new1642z00_420;

											BgL_new1642z00_420 = BgL_new1621z00_419;
											{	/* Tvector/tvector.scm 23 */
												BgL_typez00_bglt BgL_itemzd2type1641zd2_422;

												BgL_itemzd2type1641zd2_422 = BgL_arg1784z00_260;
												((((BgL_tvecz00_bglt) CREF(BgL_new1642z00_420))->
														BgL_itemzd2typezd2) =
													((BgL_typez00_bglt) BgL_itemzd2type1641zd2_422),
													BUNSPEC);
												BgL_res1804z00_423 = BgL_new1642z00_420;
										}} BgL_res1804z00_423;
									}
									BgL_res1805z00_424 = BgL_new1621z00_419;
								}
								BgL_arg1783z00_259 = BgL_res1805z00_424;
						}}
						{	/* Tvector/tvector.scm 23 */
							obj_t BgL_auxz00_759;

							BgL_objectz00_bglt BgL_auxz00_757;

							BgL_auxz00_759 = (obj_t) (BgL_arg1783z00_259);
							BgL_auxz00_757 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_757, BgL_auxz00_759);
				}}}
			else
				{	/* Tvector/tvector.scm 23 */
					BFALSE;
				}
			return
				(BgL_tvecz00_bglt) (BGl_z52thezd2tveczd2nilz52zztvector_tvectorz00);
		}
	}



/* _tvec-nil */
	obj_t BGl__tveczd2nilzd2zztvector_tvectorz00(obj_t BgL_envz00_486)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			return (obj_t) (BGl_tveczd2nilzd2zztvector_tvectorz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_tvecz00zztvector_tvectorz00, BGl_proc1824z00zztvector_tvectorz00,
				BGl_string1825z00zztvector_tvectorz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_tvecz00zztvector_tvectorz00, BGl_proc1826z00zztvector_tvectorz00,
				BGl_string1827z00zztvector_tvectorz00);
		}
	}



/* struct+object->objec1712 */
	obj_t BGl_structzb2objectzd2ze3objec1712z83zztvector_tvectorz00(obj_t
		BgL_envz00_518, obj_t BgL_oz00_519, obj_t BgL_sz00_520)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{
				BgL_tvecz00_bglt BgL_oz00_294;

				obj_t BgL_sz00_295;

				{	/* Tvector/tvector.scm 23 */
					BgL_tvecz00_bglt BgL_auxz00_767;

					BgL_oz00_294 = (BgL_tvecz00_bglt) (BgL_oz00_519);
					BgL_sz00_295 = BgL_sz00_520;
					{

						{	/* Tvector/tvector.scm 23 */
							obj_t BgL_old1649z00_298;

							obj_t BgL_aux1650z00_299;

							{	/* Tvector/tvector.scm 23 */
								obj_t BgL_nextzd2method1711zd2_304;

								BgL_nextzd2method1711zd2_304 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_294),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_tvecz00zztvector_tvectorz00);
								if (PROCEDUREP(BgL_nextzd2method1711zd2_304))
									{	/* Tvector/tvector.scm 23 */
										BgL_old1649z00_298 =
											PROCEDURE_ENTRY(BgL_nextzd2method1711zd2_304)
											(BgL_nextzd2method1711zd2_304, (obj_t) (BgL_oz00_294),
											BgL_sz00_295, BEOA);
									}
								else
									{	/* Tvector/tvector.scm 23 */
										BgL_old1649z00_298 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_294), BgL_sz00_295));
									}
							}
							BgL_aux1650z00_299 = STRUCT_REF(BgL_sz00_295, (int) (((long) 0)));
							{	/* Tvector/tvector.scm 23 */
								BgL_tvecz00_bglt BgL_new1651z00_300;

								BgL_new1651z00_300 = ((BgL_tvecz00_bglt) (BgL_old1649z00_298));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new1651z00_300),
									BGl_classzd2numzd2zz__objectz00
									(BGl_tvecz00zztvector_tvectorz00));
								{	/* Tvector/tvector.scm 23 */
									BgL_tvecz00_bglt BgL_arg1793z00_302;

									{	/* Tvector/tvector.scm 23 */
										obj_t BgL_arg1794z00_303;

										BgL_arg1794z00_303 =
											STRUCT_REF(BgL_aux1650z00_299, (int) (((long) 0)));
										{	/* Tvector/tvector.scm 23 */
											BgL_tvecz00_bglt BgL_res1808z00_473;

											{	/* Tvector/tvector.scm 23 */
												BgL_typez00_bglt BgL_itemzd2type1620zd2_467;

												BgL_itemzd2type1620zd2_467 =
													(BgL_typez00_bglt) (BgL_arg1794z00_303);
												{	/* Tvector/tvector.scm 23 */
													BgL_tvecz00_bglt BgL_new1621z00_468;

													BgL_new1621z00_468 =
														((BgL_tvecz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_tvecz00_bgl))));
													{	/* Tvector/tvector.scm 23 */
														BgL_tvecz00_bglt BgL_res1807z00_472;

														{	/* Tvector/tvector.scm 23 */
															BgL_tvecz00_bglt BgL_new1642z00_469;

															BgL_new1642z00_469 = BgL_new1621z00_468;
															{	/* Tvector/tvector.scm 23 */
																BgL_typez00_bglt BgL_itemzd2type1641zd2_471;

																BgL_itemzd2type1641zd2_471 =
																	BgL_itemzd2type1620zd2_467;
																((((BgL_tvecz00_bglt)
																			CREF(BgL_new1642z00_469))->
																		BgL_itemzd2typezd2) =
																	((BgL_typez00_bglt)
																		BgL_itemzd2type1641zd2_471), BUNSPEC);
																BgL_res1807z00_472 = BgL_new1642z00_469;
														}} BgL_res1807z00_472;
													}
													BgL_res1808z00_473 = BgL_new1621z00_468;
											}}
											BgL_arg1793z00_302 = BgL_res1808z00_473;
									}}
									{	/* Tvector/tvector.scm 23 */
										obj_t BgL_auxz00_791;

										BgL_objectz00_bglt BgL_auxz00_789;

										BgL_auxz00_791 = (obj_t) (BgL_arg1793z00_302);
										BgL_auxz00_789 = (BgL_objectz00_bglt) (BgL_new1651z00_300);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_789, BgL_auxz00_791);
								}}
								BgL_auxz00_767 = BgL_new1651z00_300;
					}}}
					return (obj_t) (BgL_auxz00_767);
				}
			}
		}
	}



/* object->struct-tvec1710 */
	obj_t BGl_objectzd2ze3structzd2tvec1710ze3zztvector_tvectorz00(obj_t
		BgL_envz00_521, obj_t BgL_obj1646z00_522)
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 23 */
			{
				BgL_tvecz00_bglt BgL_obj1646z00_284;

				BgL_obj1646z00_284 = (BgL_tvecz00_bglt) (BgL_obj1646z00_522);
				{

					{	/* Tvector/tvector.scm 23 */
						obj_t BgL_res1647z00_287;

						{	/* Tvector/tvector.scm 23 */
							obj_t BgL_nextzd2method1709zd2_292;

							BgL_nextzd2method1709zd2_292 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj1646z00_284),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_tvecz00zztvector_tvectorz00);
							if (PROCEDUREP(BgL_nextzd2method1709zd2_292))
								{	/* Tvector/tvector.scm 23 */
									BgL_res1647z00_287 =
										PROCEDURE_ENTRY(BgL_nextzd2method1709zd2_292)
										(BgL_nextzd2method1709zd2_292, (obj_t) (BgL_obj1646z00_284),
										BEOA);
								}
							else
								{	/* Tvector/tvector.scm 23 */
									BgL_res1647z00_287 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj1646z00_284));
								}
						}
						{	/* Tvector/tvector.scm 23 */
							obj_t BgL_aux1648z00_288;

							{	/* Tvector/tvector.scm 23 */
								obj_t BgL_keyz00_444;

								BgL_keyz00_444 = CNST_TABLE_REF(((long) 5));
								BgL_aux1648z00_288 =
									make_struct(BgL_keyz00_444, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Tvector/tvector.scm 23 */
								BgL_typez00_bglt BgL_arg1789z00_290;

								{
									obj_t BgL_auxz00_808;

									{	/* Tvector/tvector.scm 23 */
										BgL_objectz00_bglt BgL_auxz00_809;

										BgL_auxz00_809 = (BgL_objectz00_bglt) (BgL_obj1646z00_284);
										BgL_auxz00_808 = BGL_OBJECT_WIDENING(BgL_auxz00_809);
									}
									BgL_arg1789z00_290 =
										(((BgL_tvecz00_bglt) CREF(BgL_auxz00_808))->
										BgL_itemzd2typezd2);
								}
								{	/* Tvector/tvector.scm 23 */
									obj_t BgL_auxz00_815;

									int BgL_auxz00_813;

									BgL_auxz00_815 = (obj_t) (BgL_arg1789z00_290);
									BgL_auxz00_813 = (int) (((long) 0));
									STRUCT_SET(BgL_aux1648z00_288, BgL_auxz00_813,
										BgL_auxz00_815);
							}}
							{	/* Tvector/tvector.scm 23 */
								int BgL_auxz00_818;

								BgL_auxz00_818 = (int) (((long) 0));
								STRUCT_SET(BgL_res1647z00_287, BgL_auxz00_818,
									BgL_aux1648z00_288);
							}
							{	/* Tvector/tvector.scm 23 */
								obj_t BgL_auxz00_821;

								BgL_auxz00_821 = STRUCT_KEY(BgL_res1647z00_287);
								STRUCT_KEY_SET(BgL_aux1648z00_288, BgL_auxz00_821);
							}
							{	/* Tvector/tvector.scm 23 */
								obj_t BgL_kz00_459;

								BgL_kz00_459 = CNST_TABLE_REF(((long) 5));
								STRUCT_KEY_SET(BgL_res1647z00_287, BgL_kz00_459);
							}
							return BgL_res1647z00_287;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztvector_tvectorz00()
	{
		AN_OBJECT;
		{	/* Tvector/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1828z00zztvector_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string1828z00zztvector_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string1828z00zztvector_tvectorz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string1828z00zztvector_tvectorz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1828z00zztvector_tvectorz00));
		}
	}

#ifdef __cplusplus
}
#endif
