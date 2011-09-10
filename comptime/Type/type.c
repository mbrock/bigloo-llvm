/*===========================================================================*/
/*   (Type/type.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/type.scm)*/
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


	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, int);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_z52thezd2typezd2nilz52zztype_typez00 = BUNSPEC;
	static obj_t BGl_typezd2occurrencezd2incr1667z00zztype_typez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_typez00 = BUNSPEC;
	static obj_t BGl__fillzd2typez12zc0zztype_typez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztype_typez00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_typezf3zf3zztype_typez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_typez00zztype_typez00 = BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zztype_typez00();
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl__typezf3zf3zztype_typez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_typez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_fillzd2typez12zc0zztype_typez00(BgL_typez00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztype_typez00();
	static obj_t BGl__makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__typezd2nilzd2zztype_typez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_objectzd2ze3structzd2type1670ze3zztype_typez00(obj_t, obj_t);
	static obj_t BGl__z52allocatezd2typez80zztype_typez00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl__getzd2aliasedzd2typez00zztype_typez00(obj_t, obj_t);
	static obj_t BGl__bigloozd2typezf3z21zztype_typez00(obj_t, obj_t);
	static obj_t BGl__typezd2occurrencezd2incr1667z00zztype_typez00(obj_t, obj_t);
	static obj_t BGl__typezd2occurrencezd2incrementz12z12zztype_typez00(obj_t,
		obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec1672z83zztype_typez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_z52allocatezd2typez80zztype_typez00();
	static obj_t BGl_objectzd2initzd2zztype_typez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_typez00();
	static obj_t BGl_methodzd2initzd2zztype_typez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2nilzd2envz00zztype_typez00,
		BgL_bgl__typeza7d2nilza7d2za7za71760z00, BGl__typezd2nilzd2zztype_typez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
		BgL_bgl__typeza7d2occurren1761za7,
		BGl__typezd2occurrencezd2incrementz12z12zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2aliasedzd2typezd2envzd2zztype_typez00,
		BgL_bgl__getza7d2aliasedza7d1762z00,
		BGl__getzd2aliasedzd2typez00zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2typezd2envz00zztype_typez00,
		BgL_bgl__makeza7d2typeza7d2za71763za7, BGl__makezd2typezd2zztype_typez00,
		0L, BUNSPEC, 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1750z00zztype_typez00,
		BgL_bgl_objectza7d2za7e3stru1764z00,
		BGl_objectzd2ze3structzd2type1670ze3zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1752z00zztype_typez00,
		BgL_bgl_structza7b2objectza71765z00,
		BGl_structzb2objectzd2ze3objec1672z83zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1749z00zztype_typez00,
		BgL_bgl_string1749za700za7za7t1766za7, "type-occurrence-increment!", 26);
	      DEFINE_STRING(BGl_string1751z00zztype_typez00,
		BgL_bgl_string1751za700za7za7t1767za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string1753z00zztype_typez00,
		BgL_bgl_string1753za700za7za7t1768za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string1754z00zztype_typez00,
		BgL_bgl_string1754za700za7za7t1769za7, "type_type", 9);
	      DEFINE_STRING(BGl_string1755z00zztype_typez00,
		BgL_bgl_string1755za700za7za7t1770za7, "_ type bigloo ", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2typezd2envz52zztype_typez00,
		BgL_bgl__za752allocateza7d2t1771z00,
		BGl__z52allocatezd2typez80zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2typez12zd2envz12zztype_typez00,
		BgL_bgl__fillza7d2typeza712za71772za7, BGl__fillzd2typez12zc0zztype_typez00,
		0L, BUNSPEC, 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezf3zd2envz21zztype_typez00,
		BgL_bgl__typeza7f3za7f3za7za7typ1773z00, BGl__typezf3zf3zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2typezf3zd2envzf3zztype_typez00,
		BgL_bgl__biglooza7d2typeza7f1774z00, BGl__bigloozd2typezf3z21zztype_typez00,
		0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2occurrencezd2incr1667zd2envzd2zztype_typez00,
		BgL_bgl__typeza7d2occurren1775za7,
		BGl__typezd2occurrencezd2incr1667z00zztype_typez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long
		BgL_checksumz00_611, char *BgL_fromz00_612)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_typez00))
				{
					BGl_requirezd2initializa7ationz75zztype_typez00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_typez00();
					BGl_cnstzd2initzd2zztype_typez00();
					BGl_importedzd2moduleszd2initz00zztype_typez00();
					BGl_objectzd2initzd2zztype_typez00();
					BGl_genericzd2initzd2zztype_typez00();
					BGl_methodzd2initzd2zztype_typez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_type");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			{	/* Type/type.scm 15 */
				obj_t BgL_cportz00_550;

				BgL_cportz00_550 =
					bgl_open_input_string(BGl_string1755z00zztype_typez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_551;

					BgL_iz00_551 = ((long) 2);
				BgL_loopz00_552:
					if ((BgL_iz00_551 == ((long) -1)))
						{	/* Type/type.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/type.scm 15 */
							{	/* Type/type.scm 15 */
								obj_t BgL_arg1757z00_554;

								{	/* Type/type.scm 15 */

									{	/* Type/type.scm 15 */
										obj_t BgL_locationz00_556;

										BgL_locationz00_556 = BBOOL(((bool_t) 0));
										{	/* Type/type.scm 15 */

											BgL_arg1757z00_554 =
												BGl_readz00zz__readerz00(BgL_cportz00_550,
												BgL_locationz00_556);
										}
									}
								}
								{	/* Type/type.scm 15 */
									int BgL_auxz00_630;

									BgL_auxz00_630 = (int) (BgL_iz00_551);
									CNST_TABLE_SET(BgL_auxz00_630, BgL_arg1757z00_554);
							}}
							{	/* Type/type.scm 15 */
								int BgL_auxz00_557;

								BgL_auxz00_557 = (int) ((BgL_iz00_551 - ((long) 1)));
								{
									long BgL_iz00_635;

									BgL_iz00_635 = (long) (BgL_auxz00_557);
									BgL_iz00_551 = BgL_iz00_635;
									goto BgL_loopz00_552;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			return BUNSPEC;
		}
	}



/* get-aliased-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt BgL_typez00_1)
	{
		AN_OBJECT;
		{	/* Type/type.scm 59 */
			{
				obj_t BgL_typez00_169;

				{	/* Type/type.scm 60 */
					obj_t BgL_auxz00_637;

					BgL_typez00_169 = (obj_t) (BgL_typez00_1);
				BgL_zc3anonymousza31673ze3z83_170:
					{	/* Type/type.scm 61 */
						bool_t BgL_testz00_638;

						{	/* Type/type.scm 61 */
							obj_t BgL_arg1676z00_173;

							{
								BgL_typez00_bglt BgL_auxz00_639;

								BgL_auxz00_639 = (BgL_typez00_bglt) (BgL_typez00_169);
								BgL_arg1676z00_173 =
									(((BgL_typez00_bglt) CREF(BgL_auxz00_639))->BgL_aliasz00);
							}
							BgL_testz00_638 =
								BGl_iszd2azf3z21zz__objectz00(BgL_arg1676z00_173,
								BGl_typez00zztype_typez00);
						}
						if (BgL_testz00_638)
							{
								obj_t BgL_typez00_643;

								{
									BgL_typez00_bglt BgL_auxz00_644;

									BgL_auxz00_644 = (BgL_typez00_bglt) (BgL_typez00_169);
									BgL_typez00_643 =
										(((BgL_typez00_bglt) CREF(BgL_auxz00_644))->BgL_aliasz00);
								}
								BgL_typez00_169 = BgL_typez00_643;
								goto BgL_zc3anonymousza31673ze3z83_170;
							}
						else
							{	/* Type/type.scm 61 */
								BgL_auxz00_637 = BgL_typez00_169;
							}
					}
					return (BgL_typez00_bglt) (BgL_auxz00_637);
				}
			}
		}
	}



/* _get-aliased-type */
	obj_t BGl__getzd2aliasedzd2typez00zztype_typez00(obj_t BgL_envz00_493,
		obj_t BgL_typez00_494)
	{
		AN_OBJECT;
		{	/* Type/type.scm 59 */
			return
				(obj_t) (BGl_getzd2aliasedzd2typez00zztype_typez00(
					(BgL_typez00_bglt) (BgL_typez00_494)));
		}
	}



/* bigloo-type? */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt
		BgL_typez00_2)
	{
		AN_OBJECT;
		{	/* Type/type.scm 68 */
			return
				(
				(((BgL_typez00_bglt) CREF(BgL_typez00_2))->BgL_classz00) ==
				CNST_TABLE_REF(((long) 0)));
		}
	}



/* _bigloo-type? */
	obj_t BGl__bigloozd2typezf3z21zztype_typez00(obj_t BgL_envz00_495,
		obj_t BgL_typez00_496)
	{
		AN_OBJECT;
		{	/* Type/type.scm 68 */
			return
				BBOOL(BGl_bigloozd2typezf3z21zztype_typez00(
					(BgL_typez00_bglt) (BgL_typez00_496)));
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			{	/* Type/type.scm 19 */
				obj_t BgL_arg1680z00_177;

				obj_t BgL_arg1684z00_178;

				obj_t BgL_arg1689z00_181;

				BgL_arg1680z00_177 = CNST_TABLE_REF(((long) 1));
				BgL_arg1684z00_178 = BGl_objectz00zz__objectz00;
				{	/* Type/type.scm 19 */
					obj_t BgL_v1666z00_182;

					BgL_v1666z00_182 = create_vector((int) (((long) 0)));
					BgL_arg1689z00_181 = BgL_v1666z00_182;
				}
				BGl_typez00zztype_typez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg1680z00_177,
					BgL_arg1684z00_178, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2typezd2envz52zztype_typez00,
					BGl_typezd2nilzd2envz00zztype_typez00,
					BGl_typezf3zd2envz21zztype_typez00, ((long) 283786560), BFALSE,
					BFALSE, BgL_arg1689z00_181);
			}
			return (BGl_z52thezd2typezd2nilz52zztype_typez00 = BUNSPEC, BUNSPEC);
		}
	}



/* type? */
	BGL_EXPORTED_DEF bool_t BGl_typezf3zf3zztype_typez00(obj_t BgL_obj1663z00_5)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1663z00_5,
				BGl_typez00zztype_typez00);
		}
	}



/* _type? */
	obj_t BGl__typezf3zf3zztype_typez00(obj_t BgL_envz00_499,
		obj_t BgL_obj1663z00_500)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1663z00_500,
					BGl_typez00zztype_typez00));
		}
	}



/* make-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t
		BgL_id1551z00_9, obj_t BgL_name1552z00_10, obj_t BgL_siza7e1553za7_11,
		obj_t BgL_class1554z00_12, obj_t BgL_coercezd2to1555zd2_13,
		obj_t BgL_parents1556z00_14, bool_t BgL_initzf31557zf3_15,
		bool_t BgL_magiczf31558zf3_16, obj_t BgL_z421559z42_17,
		obj_t BgL_alias1560z00_18, obj_t BgL_pointedzd2tozd2by1561z00_19,
		obj_t BgL_tvector1562z00_20, obj_t BgL_location1563z00_21,
		obj_t BgL_importzd2location1564zd2_22, int BgL_occurrence1565z00_23)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{	/* Type/type.scm 19 */
				BgL_typez00_bglt BgL_new1566z00_271;

				{	/* Type/type.scm 19 */
					BgL_typez00_bglt BgL_res1740z00_276;

					{	/* Type/type.scm 19 */
						BgL_typez00_bglt BgL_new1600z00_272;

						BgL_new1600z00_272 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1600z00_272),
							BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
						{	/* Type/type.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_669;

							BgL_auxz00_669 = (BgL_objectz00_bglt) (BgL_new1600z00_272);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_669, BFALSE);
						}
						BgL_res1740z00_276 = BgL_new1600z00_272;
					}
					BgL_new1566z00_271 = BgL_res1740z00_276;
				}
				{	/* Type/type.scm 19 */
					BgL_typez00_bglt BgL_res1741z00_308;

					{	/* Type/type.scm 19 */
						BgL_typez00_bglt BgL_new1583z00_277;

						BgL_new1583z00_277 = BgL_new1566z00_271;
						{	/* Type/type.scm 19 */
							obj_t BgL_id1568z00_293;

							obj_t BgL_name1569z00_294;

							obj_t BgL_siza7e1570za7_295;

							obj_t BgL_class1571z00_296;

							obj_t BgL_coercezd2to1572zd2_297;

							obj_t BgL_parents1573z00_298;

							bool_t BgL_initzf31574zf3_299;

							bool_t BgL_magiczf31575zf3_300;

							obj_t BgL_z421576z42_301;

							obj_t BgL_alias1577z00_302;

							obj_t BgL_pointedzd2tozd2by1578z00_303;

							obj_t BgL_tvector1579z00_304;

							obj_t BgL_location1580z00_305;

							obj_t BgL_importzd2location1581zd2_306;

							int BgL_occurrence1582z00_307;

							BgL_id1568z00_293 = BgL_id1551z00_9;
							BgL_name1569z00_294 = BgL_name1552z00_10;
							BgL_siza7e1570za7_295 = BgL_siza7e1553za7_11;
							BgL_class1571z00_296 = BgL_class1554z00_12;
							BgL_coercezd2to1572zd2_297 = BgL_coercezd2to1555zd2_13;
							BgL_parents1573z00_298 = BgL_parents1556z00_14;
							BgL_initzf31574zf3_299 = BgL_initzf31557zf3_15;
							BgL_magiczf31575zf3_300 = BgL_magiczf31558zf3_16;
							BgL_z421576z42_301 = BgL_z421559z42_17;
							BgL_alias1577z00_302 = BgL_alias1560z00_18;
							BgL_pointedzd2tozd2by1578z00_303 =
								BgL_pointedzd2tozd2by1561z00_19;
							BgL_tvector1579z00_304 = BgL_tvector1562z00_20;
							BgL_location1580z00_305 = BgL_location1563z00_21;
							BgL_importzd2location1581zd2_306 =
								BgL_importzd2location1564zd2_22;
							BgL_occurrence1582z00_307 = BgL_occurrence1565z00_23;
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_idz00) =
								((obj_t) BgL_id1568z00_293), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_namez00) =
								((obj_t) BgL_name1569z00_294), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_siza7eza7) =
								((obj_t) BgL_siza7e1570za7_295), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_classz00) =
								((obj_t) BgL_class1571z00_296), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->
									BgL_coercezd2tozd2) =
								((obj_t) BgL_coercezd2to1572zd2_297), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_parentsz00) =
								((obj_t) BgL_parents1573z00_298), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_initzf3zf3) =
								((bool_t) BgL_initzf31574zf3_299), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->
									BgL_magiczf3zf3) =
								((bool_t) BgL_magiczf31575zf3_300), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_z42z42) =
								((obj_t) BgL_z421576z42_301), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_aliasz00) =
								((obj_t) BgL_alias1577z00_302), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->
									BgL_pointedzd2tozd2byz00) =
								((obj_t) BgL_pointedzd2tozd2by1578z00_303), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->BgL_tvectorz00) =
								((obj_t) BgL_tvector1579z00_304), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->
									BgL_locationz00) =
								((obj_t) BgL_location1580z00_305), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->
									BgL_importzd2locationzd2) =
								((obj_t) BgL_importzd2location1581zd2_306), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_277))->
									BgL_occurrencez00) =
								((int) BgL_occurrence1582z00_307), BUNSPEC);
							BgL_res1741z00_308 = BgL_new1583z00_277;
					}} BgL_res1741z00_308;
				}
				return BgL_new1566z00_271;
			}
		}
	}



/* _make-type */
	obj_t BGl__makezd2typezd2zztype_typez00(obj_t BgL_envz00_501,
		obj_t BgL_id1551z00_502, obj_t BgL_name1552z00_503,
		obj_t BgL_siza7e1553za7_504, obj_t BgL_class1554z00_505,
		obj_t BgL_coercezd2to1555zd2_506, obj_t BgL_parents1556z00_507,
		obj_t BgL_initzf31557zf3_508, obj_t BgL_magiczf31558zf3_509,
		obj_t BgL_z421559z42_510, obj_t BgL_alias1560z00_511,
		obj_t BgL_pointedzd2tozd2by1561z00_512, obj_t BgL_tvector1562z00_513,
		obj_t BgL_location1563z00_514, obj_t BgL_importzd2location1564zd2_515,
		obj_t BgL_occurrence1565z00_516)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			return
				(obj_t) (BGl_makezd2typezd2zztype_typez00(BgL_id1551z00_502,
					BgL_name1552z00_503, BgL_siza7e1553za7_504, BgL_class1554z00_505,
					BgL_coercezd2to1555zd2_506, BgL_parents1556z00_507,
					CBOOL(BgL_initzf31557zf3_508), CBOOL(BgL_magiczf31558zf3_509),
					BgL_z421559z42_510, BgL_alias1560z00_511,
					BgL_pointedzd2tozd2by1561z00_512, BgL_tvector1562z00_513,
					BgL_location1563z00_514, BgL_importzd2location1564zd2_515,
					CINT(BgL_occurrence1565z00_516)));
		}
	}



/* fill-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_fillzd2typez12zc0zztype_typez00(BgL_typez00_bglt BgL_new1583z00_24,
		obj_t BgL_id1568z00_25, obj_t BgL_name1569z00_26,
		obj_t BgL_siza7e1570za7_27, obj_t BgL_class1571z00_28,
		obj_t BgL_coercezd2to1572zd2_29, obj_t BgL_parents1573z00_30,
		bool_t BgL_initzf31574zf3_31, bool_t BgL_magiczf31575zf3_32,
		obj_t BgL_z421576z42_33, obj_t BgL_alias1577z00_34,
		obj_t BgL_pointedzd2tozd2by1578z00_35, obj_t BgL_tvector1579z00_36,
		obj_t BgL_location1580z00_37, obj_t BgL_importzd2location1581zd2_38,
		int BgL_occurrence1582z00_39)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{	/* Type/type.scm 19 */
				obj_t BgL_id1568z00_559;

				obj_t BgL_name1569z00_560;

				obj_t BgL_siza7e1570za7_561;

				obj_t BgL_class1571z00_562;

				obj_t BgL_coercezd2to1572zd2_563;

				obj_t BgL_parents1573z00_564;

				bool_t BgL_initzf31574zf3_565;

				bool_t BgL_magiczf31575zf3_566;

				obj_t BgL_z421576z42_567;

				obj_t BgL_alias1577z00_568;

				obj_t BgL_pointedzd2tozd2by1578z00_569;

				obj_t BgL_tvector1579z00_570;

				obj_t BgL_location1580z00_571;

				obj_t BgL_importzd2location1581zd2_572;

				int BgL_occurrence1582z00_573;

				BgL_id1568z00_559 = BgL_id1568z00_25;
				BgL_name1569z00_560 = BgL_name1569z00_26;
				BgL_siza7e1570za7_561 = BgL_siza7e1570za7_27;
				BgL_class1571z00_562 = BgL_class1571z00_28;
				BgL_coercezd2to1572zd2_563 = BgL_coercezd2to1572zd2_29;
				BgL_parents1573z00_564 = BgL_parents1573z00_30;
				BgL_initzf31574zf3_565 = BgL_initzf31574zf3_31;
				BgL_magiczf31575zf3_566 = BgL_magiczf31575zf3_32;
				BgL_z421576z42_567 = BgL_z421576z42_33;
				BgL_alias1577z00_568 = BgL_alias1577z00_34;
				BgL_pointedzd2tozd2by1578z00_569 = BgL_pointedzd2tozd2by1578z00_35;
				BgL_tvector1579z00_570 = BgL_tvector1579z00_36;
				BgL_location1580z00_571 = BgL_location1580z00_37;
				BgL_importzd2location1581zd2_572 = BgL_importzd2location1581zd2_38;
				BgL_occurrence1582z00_573 = BgL_occurrence1582z00_39;
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_idz00) =
					((obj_t) BgL_id1568z00_559), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_namez00) =
					((obj_t) BgL_name1569z00_560), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1570za7_561), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_classz00) =
					((obj_t) BgL_class1571z00_562), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1572zd2_563), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_parentsz00) =
					((obj_t) BgL_parents1573z00_564), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31574zf3_565), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31575zf3_566), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_z42z42) =
					((obj_t) BgL_z421576z42_567), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_aliasz00) =
					((obj_t) BgL_alias1577z00_568), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->
						BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1578z00_569), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1579z00_570), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_locationz00) =
					((obj_t) BgL_location1580z00_571), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->
						BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1581zd2_572), BUNSPEC);
				((((BgL_typez00_bglt) CREF(BgL_new1583z00_24))->BgL_occurrencez00) =
					((int) BgL_occurrence1582z00_573), BUNSPEC);
				return BgL_new1583z00_24;
			}
		}
	}



/* _fill-type! */
	obj_t BGl__fillzd2typez12zc0zztype_typez00(obj_t BgL_envz00_517,
		obj_t BgL_new1583z00_518, obj_t BgL_id1568z00_519,
		obj_t BgL_name1569z00_520, obj_t BgL_siza7e1570za7_521,
		obj_t BgL_class1571z00_522, obj_t BgL_coercezd2to1572zd2_523,
		obj_t BgL_parents1573z00_524, obj_t BgL_initzf31574zf3_525,
		obj_t BgL_magiczf31575zf3_526, obj_t BgL_z421576z42_527,
		obj_t BgL_alias1577z00_528, obj_t BgL_pointedzd2tozd2by1578z00_529,
		obj_t BgL_tvector1579z00_530, obj_t BgL_location1580z00_531,
		obj_t BgL_importzd2location1581zd2_532, obj_t BgL_occurrence1582z00_533)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{	/* Type/type.scm 19 */
				BgL_typez00_bglt BgL_auxz00_707;

				{	/* Type/type.scm 19 */
					BgL_typez00_bglt BgL_res1758z00_605;

					{	/* Type/type.scm 19 */
						BgL_typez00_bglt BgL_new1583z00_574;

						obj_t BgL_id1568z00_575;

						bool_t BgL_initzf31574zf3_581;

						bool_t BgL_magiczf31575zf3_582;

						int BgL_occurrence1582z00_589;

						BgL_new1583z00_574 = (BgL_typez00_bglt) (BgL_new1583z00_518);
						BgL_id1568z00_575 = BgL_id1568z00_519;
						BgL_initzf31574zf3_581 = CBOOL(BgL_initzf31574zf3_525);
						BgL_magiczf31575zf3_582 = CBOOL(BgL_magiczf31575zf3_526);
						BgL_occurrence1582z00_589 = CINT(BgL_occurrence1582z00_533);
						{	/* Type/type.scm 19 */
							obj_t BgL_id1568z00_590;

							obj_t BgL_name1569z00_591;

							obj_t BgL_siza7e1570za7_592;

							obj_t BgL_class1571z00_593;

							obj_t BgL_coercezd2to1572zd2_594;

							obj_t BgL_parents1573z00_595;

							bool_t BgL_initzf31574zf3_596;

							bool_t BgL_magiczf31575zf3_597;

							obj_t BgL_z421576z42_598;

							obj_t BgL_alias1577z00_599;

							obj_t BgL_pointedzd2tozd2by1578z00_600;

							obj_t BgL_tvector1579z00_601;

							obj_t BgL_location1580z00_602;

							obj_t BgL_importzd2location1581zd2_603;

							int BgL_occurrence1582z00_604;

							BgL_id1568z00_590 = BgL_id1568z00_575;
							BgL_name1569z00_591 = BgL_name1569z00_520;
							BgL_siza7e1570za7_592 = BgL_siza7e1570za7_521;
							BgL_class1571z00_593 = BgL_class1571z00_522;
							BgL_coercezd2to1572zd2_594 = BgL_coercezd2to1572zd2_523;
							BgL_parents1573z00_595 = BgL_parents1573z00_524;
							BgL_initzf31574zf3_596 = BgL_initzf31574zf3_581;
							BgL_magiczf31575zf3_597 = BgL_magiczf31575zf3_582;
							BgL_z421576z42_598 = BgL_z421576z42_527;
							BgL_alias1577z00_599 = BgL_alias1577z00_528;
							BgL_pointedzd2tozd2by1578z00_600 =
								BgL_pointedzd2tozd2by1578z00_529;
							BgL_tvector1579z00_601 = BgL_tvector1579z00_530;
							BgL_location1580z00_602 = BgL_location1580z00_531;
							BgL_importzd2location1581zd2_603 =
								BgL_importzd2location1581zd2_532;
							BgL_occurrence1582z00_604 = BgL_occurrence1582z00_589;
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_idz00) =
								((obj_t) BgL_id1568z00_590), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_namez00) =
								((obj_t) BgL_name1569z00_591), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_siza7eza7) =
								((obj_t) BgL_siza7e1570za7_592), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_classz00) =
								((obj_t) BgL_class1571z00_593), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->
									BgL_coercezd2tozd2) =
								((obj_t) BgL_coercezd2to1572zd2_594), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_parentsz00) =
								((obj_t) BgL_parents1573z00_595), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_initzf3zf3) =
								((bool_t) BgL_initzf31574zf3_596), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->
									BgL_magiczf3zf3) =
								((bool_t) BgL_magiczf31575zf3_597), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_z42z42) =
								((obj_t) BgL_z421576z42_598), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_aliasz00) =
								((obj_t) BgL_alias1577z00_599), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->
									BgL_pointedzd2tozd2byz00) =
								((obj_t) BgL_pointedzd2tozd2by1578z00_600), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->BgL_tvectorz00) =
								((obj_t) BgL_tvector1579z00_601), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->
									BgL_locationz00) =
								((obj_t) BgL_location1580z00_602), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->
									BgL_importzd2locationzd2) =
								((obj_t) BgL_importzd2location1581zd2_603), BUNSPEC);
							((((BgL_typez00_bglt) CREF(BgL_new1583z00_574))->
									BgL_occurrencez00) =
								((int) BgL_occurrence1582z00_604), BUNSPEC);
							BgL_res1758z00_605 = BgL_new1583z00_574;
					}}
					BgL_auxz00_707 = BgL_res1758z00_605;
				}
				return (obj_t) (BgL_auxz00_707);
			}
		}
	}



/* %allocate-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_z52allocatezd2typez80zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{	/* Type/type.scm 19 */
				BgL_typez00_bglt BgL_new1600z00_606;

				BgL_new1600z00_606 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1600z00_606),
					BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
				{	/* Type/type.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_732;

					BgL_auxz00_732 = (BgL_objectz00_bglt) (BgL_new1600z00_606);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_732, BFALSE);
				}
				return BgL_new1600z00_606;
			}
		}
	}



/* _%allocate-type */
	obj_t BGl__z52allocatezd2typez80zztype_typez00(obj_t BgL_envz00_497)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{	/* Type/type.scm 19 */
				BgL_typez00_bglt BgL_auxz00_735;

				{	/* Type/type.scm 19 */
					BgL_typez00_bglt BgL_res1759z00_610;

					{	/* Type/type.scm 19 */
						BgL_typez00_bglt BgL_new1600z00_608;

						BgL_new1600z00_608 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1600z00_608),
							BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
						{	/* Type/type.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_740;

							BgL_auxz00_740 = (BgL_objectz00_bglt) (BgL_new1600z00_608);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_740, BFALSE);
						}
						BgL_res1759z00_610 = BgL_new1600z00_608;
					}
					BgL_auxz00_735 = BgL_res1759z00_610;
				}
				return (obj_t) (BgL_auxz00_735);
			}
		}
	}



/* type-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			if ((BGl_z52thezd2typezd2nilz52zztype_typez00 == BUNSPEC))
				{	/* Type/type.scm 19 */
					{	/* Type/type.scm 19 */
						BgL_typez00_bglt BgL_res1742z00_332;

						{	/* Type/type.scm 19 */
							BgL_typez00_bglt BgL_new1600z00_328;

							BgL_new1600z00_328 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1600z00_328),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Type/type.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_750;

								BgL_auxz00_750 = (BgL_objectz00_bglt) (BgL_new1600z00_328);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_750, BFALSE);
							}
							BgL_res1742z00_332 = BgL_new1600z00_328;
						}
						BGl_z52thezd2typezd2nilz52zztype_typez00 =
							(obj_t) (BgL_res1742z00_332);
					}
					{	/* Type/type.scm 19 */
						BgL_typez00_bglt BgL_res1743z00_364;

						{	/* Type/type.scm 19 */
							BgL_typez00_bglt BgL_new1583z00_333;

							obj_t BgL_id1568z00_334;

							int BgL_occurrence1582z00_348;

							BgL_new1583z00_333 =
								(BgL_typez00_bglt) (BGl_z52thezd2typezd2nilz52zztype_typez00);
							BgL_id1568z00_334 = CNST_TABLE_REF(((long) 2));
							BgL_occurrence1582z00_348 = (int) (((long) 0));
							{	/* Type/type.scm 19 */
								obj_t BgL_id1568z00_349;

								obj_t BgL_name1569z00_350;

								obj_t BgL_siza7e1570za7_351;

								obj_t BgL_class1571z00_352;

								obj_t BgL_coercezd2to1572zd2_353;

								obj_t BgL_parents1573z00_354;

								bool_t BgL_initzf31574zf3_355;

								bool_t BgL_magiczf31575zf3_356;

								obj_t BgL_z421576z42_357;

								obj_t BgL_alias1577z00_358;

								obj_t BgL_pointedzd2tozd2by1578z00_359;

								obj_t BgL_tvector1579z00_360;

								obj_t BgL_location1580z00_361;

								obj_t BgL_importzd2location1581zd2_362;

								int BgL_occurrence1582z00_363;

								BgL_id1568z00_349 = BgL_id1568z00_334;
								BgL_name1569z00_350 = BUNSPEC;
								BgL_siza7e1570za7_351 = BUNSPEC;
								BgL_class1571z00_352 = BUNSPEC;
								BgL_coercezd2to1572zd2_353 = BUNSPEC;
								BgL_parents1573z00_354 = BUNSPEC;
								BgL_initzf31574zf3_355 = ((bool_t) 0);
								BgL_magiczf31575zf3_356 = ((bool_t) 0);
								BgL_z421576z42_357 = BUNSPEC;
								BgL_alias1577z00_358 = BUNSPEC;
								BgL_pointedzd2tozd2by1578z00_359 = BUNSPEC;
								BgL_tvector1579z00_360 = BUNSPEC;
								BgL_location1580z00_361 = BUNSPEC;
								BgL_importzd2location1581zd2_362 = BUNSPEC;
								BgL_occurrence1582z00_363 = BgL_occurrence1582z00_348;
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->BgL_idz00) =
									((obj_t) BgL_id1568z00_349), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->BgL_namez00) =
									((obj_t) BgL_name1569z00_350), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1570za7_351), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->BgL_classz00) =
									((obj_t) BgL_class1571z00_352), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1572zd2_353), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1573z00_354), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31574zf3_355), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31575zf3_356), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->BgL_z42z42) =
									((obj_t) BgL_z421576z42_357), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->BgL_aliasz00) =
									((obj_t) BgL_alias1577z00_358), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1578z00_359), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1579z00_360), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_locationz00) =
									((obj_t) BgL_location1580z00_361), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1581zd2_362), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1583z00_333))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1582z00_363), BUNSPEC);
								BgL_res1743z00_364 = BgL_new1583z00_333;
						}}
						(obj_t) (BgL_res1743z00_364);
				}}
			else
				{	/* Type/type.scm 19 */
					BFALSE;
				}
			return (BgL_typez00_bglt) (BGl_z52thezd2typezd2nilz52zztype_typez00);
		}
	}



/* _type-nil */
	obj_t BGl__typezd2nilzd2zztype_typez00(obj_t BgL_envz00_498)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			return (obj_t) (BGl_typezd2nilzd2zztype_typez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
				BGl_typezd2occurrencezd2incr1667zd2envzd2zztype_typez00,
				BGl_typez00zztype_typez00, BGl_string1749z00zztype_typez00);
		}
	}



/* type-occurrence-increment! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt
		BgL_tz00_3)
	{
		AN_OBJECT;
		{	/* Type/type.scm 74 */
			{	/* Type/type.scm 74 */
				obj_t BgL_method1668z00_365;

				{	/* Type/type.scm 74 */
					BgL_objectz00_bglt BgL_objz00_366;

					BgL_objz00_366 = (BgL_objectz00_bglt) (BgL_tz00_3);
					{	/* Type/type.scm 74 */
						long BgL_objzd2classzd2numz00_367;

						BgL_objzd2classzd2numz00_367 = BGL_OBJECT_CLASS_NUM(BgL_objz00_366);
						{	/* Type/type.scm 74 */
							obj_t BgL_arg2643z00_368;

							BgL_arg2643z00_368 =
								PROCEDURE_REF
								(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
								(int) (((long) 1)));
							{	/* Type/type.scm 74 */
								obj_t BgL_arrayz00_370;

								int BgL_offsetz00_371;

								BgL_arrayz00_370 = BgL_arg2643z00_368;
								BgL_offsetz00_371 = (int) (BgL_objzd2classzd2numz00_367);
								{	/* Type/type.scm 74 */
									long BgL_offsetz00_372;

									BgL_offsetz00_372 =
										((long) (BgL_offsetz00_371) - OBJECT_TYPE);
									{	/* Type/type.scm 74 */
										long BgL_modz00_373;

										{	/* Type/type.scm 74 */
											int BgL_arg2645z00_374;

											BgL_arg2645z00_374 = (int) (((long) 16));
											{	/* Type/type.scm 74 */
												long BgL_auxz00_785;

												BgL_auxz00_785 = (long) (BgL_arg2645z00_374);
												BgL_modz00_373 = (BgL_offsetz00_372 / BgL_auxz00_785);
										}}
										{	/* Type/type.scm 74 */
											long BgL_restz00_375;

											{	/* Type/type.scm 74 */
												int BgL_arg2644z00_376;

												BgL_arg2644z00_376 = (int) (((long) 16));
												{	/* Type/type.scm 74 */
													long BgL_auxz00_789;

													BgL_auxz00_789 = (long) (BgL_arg2644z00_376);
													BgL_restz00_375 =
														(BgL_offsetz00_372 % BgL_auxz00_789);
											}}
											{	/* Type/type.scm 74 */

												BgL_method1668z00_365 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_370,
														(int) (BgL_modz00_373)), (int) (BgL_restz00_375));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method1668z00_365) (BgL_method1668z00_365,
					(obj_t) (BgL_tz00_3), BEOA);
			}
		}
	}



/* _type-occurrence-increment! */
	obj_t BGl__typezd2occurrencezd2incrementz12z12zztype_typez00(obj_t
		BgL_envz00_534, obj_t BgL_tz00_535)
	{
		AN_OBJECT;
		{	/* Type/type.scm 74 */
			return
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
				(BgL_typez00_bglt) (BgL_tz00_535));
		}
	}



/* type-occurrence-incr1667 */
	obj_t BGl_typezd2occurrencezd2incr1667z00zztype_typez00(obj_t BgL_tz00_4)
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			{	/* Type/type.scm 76 */
				long BgL_arg1692z00_204;

				{	/* Type/type.scm 76 */
					long BgL_auxz00_801;

					{	/* Type/type.scm 76 */
						BgL_typez00_bglt BgL_obj1548z00_390;

						BgL_obj1548z00_390 = (BgL_typez00_bglt) (BgL_tz00_4);
						BgL_auxz00_801 =
							(long) (
							(((BgL_typez00_bglt) CREF(BgL_obj1548z00_390))->
								BgL_occurrencez00));
					}
					BgL_arg1692z00_204 = (((long) 1) + BgL_auxz00_801);
				}
				{
					int BgL_auxz00_808;

					BgL_typez00_bglt BgL_auxz00_806;

					BgL_auxz00_808 = (int) (BgL_arg1692z00_204);
					BgL_auxz00_806 = (BgL_typez00_bglt) (BgL_tz00_4);
					return
						((((BgL_typez00_bglt) CREF(BgL_auxz00_806))->BgL_occurrencez00) =
						((int) BgL_auxz00_808), BUNSPEC);
		}}}
	}



/* _type-occurrence-incr1667 */
	obj_t BGl__typezd2occurrencezd2incr1667z00zztype_typez00(obj_t BgL_envz00_536,
		obj_t BgL_tz00_537)
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			return BGl_typezd2occurrencezd2incr1667z00zztype_typez00(BgL_tz00_537);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_typez00zztype_typez00, BGl_proc1750z00zztype_typez00,
				BGl_string1751z00zztype_typez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_typez00zztype_typez00, BGl_proc1752z00zztype_typez00,
				BGl_string1753z00zztype_typez00);
		}
	}



/* struct+object->objec1672 */
	obj_t BGl_structzb2objectzd2ze3objec1672z83zztype_typez00(obj_t
		BgL_envz00_540, obj_t BgL_oz00_541, obj_t BgL_sz00_542)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{
				BgL_typez00_bglt BgL_oz00_243;

				obj_t BgL_sz00_244;

				{	/* Type/type.scm 19 */
					BgL_typez00_bglt BgL_auxz00_814;

					BgL_oz00_243 = (BgL_typez00_bglt) (BgL_oz00_541);
					BgL_sz00_244 = BgL_sz00_542;
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1738z00_247;

						BgL_arg1738z00_247 = STRUCT_REF(BgL_sz00_244, (int) (((long) 0)));
						{	/* Type/type.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_817;

							BgL_auxz00_817 = (BgL_objectz00_bglt) (BgL_oz00_243);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_817, BgL_arg1738z00_247);
					}}
					{
						obj_t BgL_auxz00_820;

						BgL_auxz00_820 = STRUCT_REF(BgL_sz00_244, (int) (((long) 1)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_idz00) =
							((obj_t) BgL_auxz00_820), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_824;

						BgL_auxz00_824 = STRUCT_REF(BgL_sz00_244, (int) (((long) 2)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_namez00) =
							((obj_t) BgL_auxz00_824), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_828;

						BgL_auxz00_828 = STRUCT_REF(BgL_sz00_244, (int) (((long) 3)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_siza7eza7) =
							((obj_t) BgL_auxz00_828), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_832;

						BgL_auxz00_832 = STRUCT_REF(BgL_sz00_244, (int) (((long) 4)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_classz00) =
							((obj_t) BgL_auxz00_832), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_836;

						BgL_auxz00_836 = STRUCT_REF(BgL_sz00_244, (int) (((long) 5)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_coercezd2tozd2) =
							((obj_t) BgL_auxz00_836), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_840;

						BgL_auxz00_840 = STRUCT_REF(BgL_sz00_244, (int) (((long) 6)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_parentsz00) =
							((obj_t) BgL_auxz00_840), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_844;

						BgL_auxz00_844 =
							CBOOL(STRUCT_REF(BgL_sz00_244, (int) (((long) 7))));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_initzf3zf3) =
							((bool_t) BgL_auxz00_844), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_849;

						BgL_auxz00_849 =
							CBOOL(STRUCT_REF(BgL_sz00_244, (int) (((long) 8))));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_magiczf3zf3) =
							((bool_t) BgL_auxz00_849), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_854;

						BgL_auxz00_854 = STRUCT_REF(BgL_sz00_244, (int) (((long) 9)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_z42z42) =
							((obj_t) BgL_auxz00_854), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_858;

						BgL_auxz00_858 = STRUCT_REF(BgL_sz00_244, (int) (((long) 10)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_aliasz00) =
							((obj_t) BgL_auxz00_858), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_862;

						BgL_auxz00_862 = STRUCT_REF(BgL_sz00_244, (int) (((long) 11)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->
								BgL_pointedzd2tozd2byz00) = ((obj_t) BgL_auxz00_862), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_866;

						BgL_auxz00_866 = STRUCT_REF(BgL_sz00_244, (int) (((long) 12)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_tvectorz00) =
							((obj_t) BgL_auxz00_866), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_870;

						BgL_auxz00_870 = STRUCT_REF(BgL_sz00_244, (int) (((long) 13)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_locationz00) =
							((obj_t) BgL_auxz00_870), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_874;

						BgL_auxz00_874 = STRUCT_REF(BgL_sz00_244, (int) (((long) 14)));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->
								BgL_importzd2locationzd2) = ((obj_t) BgL_auxz00_874), BUNSPEC);
					}
					{
						int BgL_auxz00_878;

						BgL_auxz00_878 =
							CINT(STRUCT_REF(BgL_sz00_244, (int) (((long) 15))));
						((((BgL_typez00_bglt) CREF(BgL_oz00_243))->BgL_occurrencez00) =
							((int) BgL_auxz00_878), BUNSPEC);
					}
					BgL_auxz00_814 = BgL_oz00_243;
					return (obj_t) (BgL_auxz00_814);
				}
			}
		}
	}



/* object->struct-type1670 */
	obj_t BGl_objectzd2ze3structzd2type1670ze3zztype_typez00(obj_t BgL_envz00_543,
		obj_t BgL_obj1601z00_544)
	{
		AN_OBJECT;
		{	/* Type/type.scm 19 */
			{
				BgL_typez00_bglt BgL_obj1601z00_207;

				BgL_obj1601z00_207 = (BgL_typez00_bglt) (BgL_obj1601z00_544);
				{	/* Type/type.scm 19 */
					obj_t BgL_res1602z00_210;

					{	/* Type/type.scm 19 */
						obj_t BgL_keyz00_395;

						BgL_keyz00_395 = CNST_TABLE_REF(((long) 1));
						BgL_res1602z00_210 =
							make_struct(BgL_keyz00_395, (int) (((long) 16)), BUNSPEC);
					}
					{	/* Type/type.scm 19 */
						int BgL_auxz00_888;

						BgL_auxz00_888 = (int) (((long) 0));
						STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_888, BFALSE);
					}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1696z00_212;

						BgL_arg1696z00_212 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_idz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_892;

							BgL_auxz00_892 = (int) (((long) 1));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_892,
								BgL_arg1696z00_212);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1700z00_214;

						BgL_arg1700z00_214 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_namez00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_896;

							BgL_auxz00_896 = (int) (((long) 2));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_896,
								BgL_arg1700z00_214);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1702z00_216;

						BgL_arg1702z00_216 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_siza7eza7);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_900;

							BgL_auxz00_900 = (int) (((long) 3));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_900,
								BgL_arg1702z00_216);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1704z00_218;

						BgL_arg1704z00_218 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_classz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_904;

							BgL_auxz00_904 = (int) (((long) 4));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_904,
								BgL_arg1704z00_218);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1706z00_220;

						BgL_arg1706z00_220 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->
							BgL_coercezd2tozd2);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_908;

							BgL_auxz00_908 = (int) (((long) 5));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_908,
								BgL_arg1706z00_220);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1708z00_222;

						BgL_arg1708z00_222 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_parentsz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_912;

							BgL_auxz00_912 = (int) (((long) 6));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_912,
								BgL_arg1708z00_222);
					}}
					{	/* Type/type.scm 19 */
						bool_t BgL_arg1710z00_224;

						BgL_arg1710z00_224 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_initzf3zf3);
						{	/* Type/type.scm 19 */
							obj_t BgL_auxz00_918;

							int BgL_auxz00_916;

							BgL_auxz00_918 = BBOOL(BgL_arg1710z00_224);
							BgL_auxz00_916 = (int) (((long) 7));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_916, BgL_auxz00_918);
					}}
					{	/* Type/type.scm 19 */
						bool_t BgL_arg1713z00_226;

						BgL_arg1713z00_226 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_magiczf3zf3);
						{	/* Type/type.scm 19 */
							obj_t BgL_auxz00_924;

							int BgL_auxz00_922;

							BgL_auxz00_924 = BBOOL(BgL_arg1713z00_226);
							BgL_auxz00_922 = (int) (((long) 8));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_922, BgL_auxz00_924);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1715z00_228;

						BgL_arg1715z00_228 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_z42z42);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_928;

							BgL_auxz00_928 = (int) (((long) 9));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_928,
								BgL_arg1715z00_228);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1719z00_230;

						BgL_arg1719z00_230 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_aliasz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_932;

							BgL_auxz00_932 = (int) (((long) 10));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_932,
								BgL_arg1719z00_230);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1725z00_232;

						BgL_arg1725z00_232 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->
							BgL_pointedzd2tozd2byz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_936;

							BgL_auxz00_936 = (int) (((long) 11));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_936,
								BgL_arg1725z00_232);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1730z00_234;

						BgL_arg1730z00_234 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_tvectorz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_940;

							BgL_auxz00_940 = (int) (((long) 12));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_940,
								BgL_arg1730z00_234);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1732z00_236;

						BgL_arg1732z00_236 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->BgL_locationz00);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_944;

							BgL_auxz00_944 = (int) (((long) 13));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_944,
								BgL_arg1732z00_236);
					}}
					{	/* Type/type.scm 19 */
						obj_t BgL_arg1734z00_238;

						BgL_arg1734z00_238 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->
							BgL_importzd2locationzd2);
						{	/* Type/type.scm 19 */
							int BgL_auxz00_948;

							BgL_auxz00_948 = (int) (((long) 14));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_948,
								BgL_arg1734z00_238);
					}}
					{	/* Type/type.scm 19 */
						int BgL_arg1736z00_240;

						BgL_arg1736z00_240 =
							(((BgL_typez00_bglt) CREF(BgL_obj1601z00_207))->
							BgL_occurrencez00);
						{	/* Type/type.scm 19 */
							obj_t BgL_auxz00_954;

							int BgL_auxz00_952;

							BgL_auxz00_954 = BINT(BgL_arg1736z00_240);
							BgL_auxz00_952 = (int) (((long) 15));
							STRUCT_SET(BgL_res1602z00_210, BgL_auxz00_952, BgL_auxz00_954);
					}}
					return BgL_res1602z00_210;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_typez00()
	{
		AN_OBJECT;
		{	/* Type/type.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string1754z00zztype_typez00));
		}
	}

#ifdef __cplusplus
}
#endif
