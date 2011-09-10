/*===========================================================================*/
/*   (Jas/produce.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/produce.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_attributez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_typez00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_infoz00;
	}                   *BgL_attributez00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	static bool_t BGl_producezd2methodzd2zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_producez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzjas_producez00();
	static obj_t BGl_producezd2codezd2zzjas_producez00(obj_t, obj_t);
	static obj_t BGl__producez00zzjas_producez00(obj_t, obj_t, obj_t);
	static obj_t BGl_producezd2attributezd2zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_producez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_producez00();
	static bool_t BGl_producezd2fieldzd2zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_outintz00zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_producezd2cpinfozd2zzjas_producez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_producez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_outshortz00zzjas_producez00(obj_t, obj_t);
	static bool_t BGl_producezd2interfaceszd2zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static bool_t BGl_producezd2fieldszd2zzjas_producez00(obj_t, obj_t);
	static bool_t BGl_producezd2poolzd2zzjas_producez00(obj_t, obj_t, obj_t);
	static bool_t BGl_producezd2methodszd2zzjas_producez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static bool_t BGl_producezd2attributeszd2zzjas_producez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_producez00zzjas_producez00(obj_t, obj_t);
	static obj_t BGl_producezd2stringzd2zzjas_producez00(obj_t, obj_t);
	extern obj_t BGl_stringzd2ze3utf8z31zzjas_libz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_producez00();
	static obj_t BGl_methodzd2initzd2zzjas_producez00();
	static obj_t __cnst[6];


	   
		 
		DEFINE_STRING(BGl_string2241z00zzjas_producez00,
		BgL_bgl_string2241za700za7za7j2253za7, "as", 2);
	      DEFINE_STRING(BGl_string2242z00zzjas_producez00,
		BgL_bgl_string2242za700za7za7j2254za7, "bad cpinfo tag", 14);
	      DEFINE_STRING(BGl_string2243z00zzjas_producez00,
		BgL_bgl_string2243za700za7za7j2255za7, "constant string too long", 24);
	      DEFINE_STRING(BGl_string2244z00zzjas_producez00,
		BgL_bgl_string2244za700za7za7j2256za7, "produce-attribute", 17);
	      DEFINE_STRING(BGl_string2245z00zzjas_producez00,
		BgL_bgl_string2245za700za7za7j2257za7, "bad attribute type", 18);
	      DEFINE_STRING(BGl_string2246z00zzjas_producez00,
		BgL_bgl_string2246za700za7za7j2258za7, "produce-code", 12);
	      DEFINE_STRING(BGl_string2247z00zzjas_producez00,
		BgL_bgl_string2247za700za7za7j2259za7, "bad handler", 11);
	      DEFINE_STRING(BGl_string2248z00zzjas_producez00,
		BgL_bgl_string2248za700za7za7j2260za7, "bad code attribute", 18);
	      DEFINE_STRING(BGl_string2250z00zzjas_producez00,
		BgL_bgl_string2250za700za7za7j2261za7,
		"localvariable linenumber srcfile code bytevector ok ", 52);
	      DEFINE_STRING(BGl_string2249z00zzjas_producez00,
		BgL_bgl_string2249za700za7za7j2262za7, "jas_produce", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_producezd2envzd2zzjas_producez00,
		BgL_bgl__produceza700za7za7jas2263za7, BGl__producez00zzjas_producez00, 0L,
		BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_producez00(long
		BgL_checksumz00_757, char *BgL_fromz00_758)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_producez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_producez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzjas_producez00();
					BGl_cnstzd2initzd2zzjas_producez00();
					BGl_importedzd2moduleszd2initz00zzjas_producez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_producez00()
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_produce");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_produce");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_produce");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_producez00()
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 1 */
			{	/* Jas/produce.scm 1 */
				obj_t BgL_cportz00_747;

				BgL_cportz00_747 =
					bgl_open_input_string(BGl_string2250z00zzjas_producez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_748;

					BgL_iz00_748 = ((long) 5);
				BgL_loopz00_749:
					if ((BgL_iz00_748 == ((long) -1)))
						{	/* Jas/produce.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/produce.scm 1 */
							{	/* Jas/produce.scm 1 */
								obj_t BgL_arg2252z00_751;

								{	/* Jas/produce.scm 1 */

									{	/* Jas/produce.scm 1 */
										obj_t BgL_locationz00_753;

										BgL_locationz00_753 = BBOOL(((bool_t) 0));
										{	/* Jas/produce.scm 1 */

											BgL_arg2252z00_751 =
												BGl_readz00zz__readerz00(BgL_cportz00_747,
												BgL_locationz00_753);
										}
									}
								}
								{	/* Jas/produce.scm 1 */
									int BgL_auxz00_774;

									BgL_auxz00_774 = (int) (BgL_iz00_748);
									CNST_TABLE_SET(BgL_auxz00_774, BgL_arg2252z00_751);
							}}
							{	/* Jas/produce.scm 1 */
								int BgL_auxz00_754;

								BgL_auxz00_754 = (int) ((BgL_iz00_748 - ((long) 1)));
								{
									long BgL_iz00_779;

									BgL_iz00_779 = (long) (BgL_auxz00_754);
									BgL_iz00_748 = BgL_iz00_779;
									goto BgL_loopz00_749;
								}
							}
						}
				}
			}
		}
	}



/* outshort */
	obj_t BGl_outshortz00zzjas_producez00(obj_t BgL_outchanz00_5,
		obj_t BgL_nz00_6)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 14 */
			{	/* Jas/produce.scm 15 */
				long BgL_arg1941z00_299;

				BgL_arg1941z00_299 = ((long) CINT(BgL_nz00_6) >> (int) (((long) 8)));
				{	/* Jas/produce.scm 15 */
					unsigned char BgL_arg1938z00_576;

					BgL_arg1938z00_576 = ((BgL_arg1941z00_299 & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_5, (char) (BgL_arg1938z00_576));
			}}
			{	/* Jas/produce.scm 16 */
				long BgL_arg1942z00_300;

				BgL_arg1942z00_300 = ((long) CINT(BgL_nz00_6) & ((long) 255));
				{	/* Jas/produce.scm 16 */
					unsigned char BgL_arg1938z00_589;

					BgL_arg1938z00_589 = ((BgL_arg1942z00_300 & ((long) 255)));
					return BGL_OUTPUT_CHAR(BgL_outchanz00_5, (char) (BgL_arg1938z00_589));
		}}}
	}



/* outint */
	obj_t BGl_outintz00zzjas_producez00(obj_t BgL_outchanz00_7, obj_t BgL_nz00_8)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 18 */
			{	/* Jas/produce.scm 19 */
				long BgL_arg1943z00_301;

				BgL_arg1943z00_301 = ((long) CINT(BgL_nz00_8) >> (int) (((long) 16)));
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_7,
					BINT(BgL_arg1943z00_301));
			}
			{	/* Jas/produce.scm 20 */
				long BgL_arg1944z00_302;

				BgL_arg1944z00_302 = ((long) CINT(BgL_nz00_8) & ((long) 65535));
				return
					BGl_outshortz00zzjas_producez00(BgL_outchanz00_7,
					BINT(BgL_arg1944z00_302));
			}
		}
	}



/* produce */
	BGL_EXPORTED_DEF obj_t BGl_producez00zzjas_producez00(obj_t BgL_outchanz00_9,
		obj_t BgL_classfilez00_10)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 22 */
			BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BINT(((long) 51966)));
			BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BINT(((long) 47806)));
			BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BINT(((long) 3)));
			BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BINT(((long) 45)));
			{	/* Jas/produce.scm 29 */
				obj_t BgL_arg1945z00_304;

				obj_t BgL_arg1946z00_305;

				{
					BgL_classfilez00_bglt BgL_auxz00_811;

					BgL_auxz00_811 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1945z00_304 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_811))->
						BgL_poolzd2siza7ez75);
				}
				{	/* Jas/produce.scm 29 */
					obj_t BgL_auxz00_814;

					{
						BgL_classfilez00_bglt BgL_auxz00_815;

						BgL_auxz00_815 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
						BgL_auxz00_814 =
							(((BgL_classfilez00_bglt) CREF(BgL_auxz00_815))->BgL_poolz00);
					}
					BgL_arg1946z00_305 = bgl_reverse(BgL_auxz00_814);
				}
				BGl_producezd2poolzd2zzjas_producez00(BgL_outchanz00_9,
					BgL_arg1945z00_304, BgL_arg1946z00_305);
			}
			{	/* Jas/produce.scm 30 */
				obj_t BgL_arg1949z00_307;

				{
					BgL_classfilez00_bglt BgL_auxz00_820;

					BgL_auxz00_820 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1949z00_307 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_820))->BgL_flagsz00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BgL_arg1949z00_307);
			}
			{	/* Jas/produce.scm 31 */
				obj_t BgL_arg1950z00_308;

				{
					BgL_classfilez00_bglt BgL_auxz00_824;

					BgL_auxz00_824 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1950z00_308 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_824))->BgL_mez00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BgL_arg1950z00_308);
			}
			{	/* Jas/produce.scm 32 */
				obj_t BgL_arg1952z00_309;

				{
					BgL_classfilez00_bglt BgL_auxz00_828;

					BgL_auxz00_828 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1952z00_309 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_828))->BgL_superz00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_9, BgL_arg1952z00_309);
			}
			{	/* Jas/produce.scm 33 */
				obj_t BgL_arg1955z00_310;

				{
					BgL_classfilez00_bglt BgL_auxz00_832;

					BgL_auxz00_832 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1955z00_310 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_832))->BgL_interfacesz00);
				}
				BGl_producezd2interfaceszd2zzjas_producez00(BgL_outchanz00_9,
					BgL_arg1955z00_310);
			}
			{	/* Jas/produce.scm 34 */
				obj_t BgL_arg1957z00_311;

				{
					BgL_classfilez00_bglt BgL_auxz00_836;

					BgL_auxz00_836 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1957z00_311 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_836))->BgL_fieldsz00);
				}
				BGl_producezd2fieldszd2zzjas_producez00(BgL_outchanz00_9,
					BgL_arg1957z00_311);
			}
			{	/* Jas/produce.scm 35 */
				obj_t BgL_arg1958z00_312;

				{
					BgL_classfilez00_bglt BgL_auxz00_840;

					BgL_auxz00_840 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1958z00_312 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_840))->BgL_methodsz00);
				}
				BGl_producezd2methodszd2zzjas_producez00(BgL_outchanz00_9,
					BgL_arg1958z00_312);
			}
			{	/* Jas/produce.scm 36 */
				obj_t BgL_arg1962z00_313;

				{
					BgL_classfilez00_bglt BgL_auxz00_844;

					BgL_auxz00_844 = (BgL_classfilez00_bglt) (BgL_classfilez00_10);
					BgL_arg1962z00_313 =
						(((BgL_classfilez00_bglt) CREF(BgL_auxz00_844))->BgL_attributesz00);
				}
				return
					BBOOL(BGl_producezd2attributeszd2zzjas_producez00(BgL_outchanz00_9,
						BgL_arg1962z00_313));
			}
		}
	}



/* _produce */
	obj_t BGl__producez00zzjas_producez00(obj_t BgL_envz00_744,
		obj_t BgL_outchanz00_745, obj_t BgL_classfilez00_746)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 22 */
			return
				BGl_producez00zzjas_producez00(BgL_outchanz00_745,
				BgL_classfilez00_746);
		}
	}



/* produce-pool */
	bool_t BGl_producezd2poolzd2zzjas_producez00(obj_t BgL_outchanz00_11,
		obj_t BgL_siza7eza7_12, obj_t BgL_poolz00_13)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 38 */
			BGl_outshortz00zzjas_producez00(BgL_outchanz00_11, BgL_siza7eza7_12);
			{
				obj_t BgL_l1915z00_315;

				BgL_l1915z00_315 = BgL_poolz00_13;
			BgL_zc3anonymousza31963ze3z83_316:
				if (PAIRP(BgL_l1915z00_315))
					{	/* Jas/produce.scm 40 */
						BGl_producezd2cpinfozd2zzjas_producez00(BgL_outchanz00_11,
							CAR(BgL_l1915z00_315));
						{
							obj_t BgL_l1915z00_855;

							BgL_l1915z00_855 = CDR(BgL_l1915z00_315);
							BgL_l1915z00_315 = BgL_l1915z00_855;
							goto BgL_zc3anonymousza31963ze3z83_316;
						}
					}
				else
					{	/* Jas/produce.scm 40 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* produce-cpinfo */
	obj_t BGl_producezd2cpinfozd2zzjas_producez00(obj_t BgL_outchanz00_14,
		obj_t BgL_cpinfoz00_15)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 42 */
			{	/* Jas/produce.scm 43 */
				obj_t BgL_arg1968z00_321;

				BgL_arg1968z00_321 = CAR(BgL_cpinfoz00_15);
				{	/* Jas/produce.scm 43 */
					unsigned char BgL_arg1938z00_617;

					BgL_arg1938z00_617 =
						(((long) CINT(BgL_arg1968z00_321) & ((long) 255)));
					BGL_OUTPUT_CHAR(BgL_outchanz00_14, (char) (BgL_arg1938z00_617));
			}}
			{

				{	/* Jas/produce.scm 44 */
					obj_t BgL_aux1910z00_323;

					BgL_aux1910z00_323 = CAR(BgL_cpinfoz00_15);
					if (INTEGERP(BgL_aux1910z00_323))
						{	/* Jas/produce.scm 44 */
							switch ((long) CINT(BgL_aux1910z00_323))
								{
								case ((long) 1):

									{	/* Jas/produce.scm 46 */
										obj_t BgL_strz00_325;

										BgL_strz00_325 =
											BGl_stringzd2ze3utf8z31zzjas_libz00(CDR
											(BgL_cpinfoz00_15));
										{	/* Jas/produce.scm 47 */
											long BgL_nz00_326;

											BgL_nz00_326 = STRING_LENGTH(BgL_strz00_325);
											if ((BgL_nz00_326 > ((long) 65535)))
												{	/* Jas/produce.scm 48 */
													BGl_errorz00zz__errorz00
														(BGl_string2241z00zzjas_producez00,
														BGl_string2243z00zzjas_producez00,
														BINT(BgL_nz00_326));
												}
											else
												{	/* Jas/produce.scm 48 */
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_14,
														BINT(BgL_nz00_326));
												}
										}
										return
											BGl_producezd2stringzd2zzjas_producez00(BgL_outchanz00_14,
											BgL_strz00_325);
									}
									break;
								case ((long) 3):
								case ((long) 4):
								case ((long) 5):
								case ((long) 6):
								case ((long) 7):
								case ((long) 8):
								case ((long) 9):
								case ((long) 10):
								case ((long) 11):
								case ((long) 12):

									{	/* Jas/produce.scm 53 */
										obj_t BgL_g1919z00_329;

										BgL_g1919z00_329 = CDR(BgL_cpinfoz00_15);
										{
											obj_t BgL_l1917z00_331;

											{	/* Jas/produce.scm 53 */
												bool_t BgL_auxz00_877;

												BgL_l1917z00_331 = BgL_g1919z00_329;
											BgL_zc3anonymousza31977ze3z83_332:
												if (PAIRP(BgL_l1917z00_331))
													{	/* Jas/produce.scm 53 */
														BGl_outshortz00zzjas_producez00(BgL_outchanz00_14,
															CAR(BgL_l1917z00_331));
														{
															obj_t BgL_l1917z00_882;

															BgL_l1917z00_882 = CDR(BgL_l1917z00_331);
															BgL_l1917z00_331 = BgL_l1917z00_882;
															goto BgL_zc3anonymousza31977ze3z83_332;
														}
													}
												else
													{	/* Jas/produce.scm 53 */
														BgL_auxz00_877 = ((bool_t) 1);
													}
												return BBOOL(BgL_auxz00_877);
											}
										}
									}
									break;
								default:
								BgL_case_else1909z00_322:
									return
										BGl_errorz00zz__errorz00(BGl_string2241z00zzjas_producez00,
										BGl_string2242z00zzjas_producez00, CAR(BgL_cpinfoz00_15));
								}
						}
					else
						{	/* Jas/produce.scm 44 */
							goto BgL_case_else1909z00_322;
						}
				}
			}
		}
	}



/* produce-string */
	obj_t BGl_producezd2stringzd2zzjas_producez00(obj_t BgL_outchanz00_16,
		obj_t BgL_sz00_17)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 56 */
			{	/* Jas/produce.scm 57 */
				long BgL_nz00_340;

				BgL_nz00_340 = STRING_LENGTH(BgL_sz00_17);
				{
					long BgL_iz00_342;

					BgL_iz00_342 = ((long) 0);
				BgL_zc3anonymousza31990ze3z83_343:
					if ((BgL_iz00_342 == BgL_nz00_340))
						{	/* Jas/produce.scm 59 */
							return CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Jas/produce.scm 59 */
							{	/* Jas/produce.scm 61 */
								long BgL_arg1992z00_345;

								BgL_arg1992z00_345 = (STRING_REF(BgL_sz00_17, BgL_iz00_342));
								{	/* Jas/produce.scm 61 */
									unsigned char BgL_arg1938z00_642;

									BgL_arg1938z00_642 = ((BgL_arg1992z00_345 & ((long) 255)));
									BGL_OUTPUT_CHAR(BgL_outchanz00_16,
										(char) (BgL_arg1938z00_642));
							}}
							{
								long BgL_iz00_899;

								BgL_iz00_899 = (BgL_iz00_342 + ((long) 1));
								BgL_iz00_342 = BgL_iz00_899;
								goto BgL_zc3anonymousza31990ze3z83_343;
							}
						}
				}
			}
		}
	}



/* produce-interfaces */
	bool_t BGl_producezd2interfaceszd2zzjas_producez00(obj_t BgL_outchanz00_18,
		obj_t BgL_interfacesz00_19)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 65 */
			{	/* Jas/produce.scm 66 */
				long BgL_arg1995z00_349;

				BgL_arg1995z00_349 = bgl_list_length(BgL_interfacesz00_19);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_18,
					BINT(BgL_arg1995z00_349));
			}
			{
				obj_t BgL_l1920z00_351;

				BgL_l1920z00_351 = BgL_interfacesz00_19;
			BgL_zc3anonymousza31996ze3z83_352:
				if (PAIRP(BgL_l1920z00_351))
					{	/* Jas/produce.scm 67 */
						BGl_outshortz00zzjas_producez00(BgL_outchanz00_18,
							CAR(BgL_l1920z00_351));
						{
							obj_t BgL_l1920z00_908;

							BgL_l1920z00_908 = CDR(BgL_l1920z00_351);
							BgL_l1920z00_351 = BgL_l1920z00_908;
							goto BgL_zc3anonymousza31996ze3z83_352;
						}
					}
				else
					{	/* Jas/produce.scm 67 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* produce-fields */
	bool_t BGl_producezd2fieldszd2zzjas_producez00(obj_t BgL_outchanz00_20,
		obj_t BgL_fieldsz00_21)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 69 */
			{	/* Jas/produce.scm 70 */
				long BgL_arg1999z00_357;

				BgL_arg1999z00_357 = bgl_list_length(BgL_fieldsz00_21);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_20,
					BINT(BgL_arg1999z00_357));
			}
			{
				obj_t BgL_l1922z00_359;

				BgL_l1922z00_359 = BgL_fieldsz00_21;
			BgL_zc3anonymousza32000ze3z83_360:
				if (PAIRP(BgL_l1922z00_359))
					{	/* Jas/produce.scm 71 */
						BGl_producezd2fieldzd2zzjas_producez00(BgL_outchanz00_20,
							CAR(BgL_l1922z00_359));
						{
							obj_t BgL_l1922z00_917;

							BgL_l1922z00_917 = CDR(BgL_l1922z00_359);
							BgL_l1922z00_359 = BgL_l1922z00_917;
							goto BgL_zc3anonymousza32000ze3z83_360;
						}
					}
				else
					{	/* Jas/produce.scm 71 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* produce-field */
	bool_t BGl_producezd2fieldzd2zzjas_producez00(obj_t BgL_outchanz00_22,
		obj_t BgL_fieldz00_23)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 73 */
			{	/* Jas/produce.scm 75 */
				obj_t BgL_arg2003z00_366;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_919;

					BgL_auxz00_919 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_fieldz00_23);
					BgL_arg2003z00_366 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_919))->
						BgL_flagsz00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_22, BgL_arg2003z00_366);
			}
			{	/* Jas/produce.scm 76 */
				obj_t BgL_arg2004z00_367;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_923;

					BgL_auxz00_923 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_fieldz00_23);
					BgL_arg2004z00_367 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_923))->
						BgL_pnamez00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_22, BgL_arg2004z00_367);
			}
			{	/* Jas/produce.scm 77 */
				obj_t BgL_arg2005z00_368;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_927;

					BgL_auxz00_927 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_fieldz00_23);
					BgL_arg2005z00_368 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_927))->
						BgL_descriptorz00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_22, BgL_arg2005z00_368);
			}
			{	/* Jas/produce.scm 78 */
				obj_t BgL_arg2012z00_369;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_931;

					BgL_auxz00_931 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_fieldz00_23);
					BgL_arg2012z00_369 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_931))->
						BgL_attributesz00);
				}
				return
					BGl_producezd2attributeszd2zzjas_producez00(BgL_outchanz00_22,
					BgL_arg2012z00_369);
			}
		}
	}



/* produce-methods */
	bool_t BGl_producezd2methodszd2zzjas_producez00(obj_t BgL_outchanz00_24,
		obj_t BgL_methodsz00_25)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 80 */
			{	/* Jas/produce.scm 81 */
				long BgL_arg2021z00_370;

				BgL_arg2021z00_370 = bgl_list_length(BgL_methodsz00_25);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_24,
					BINT(BgL_arg2021z00_370));
			}
			{
				obj_t BgL_l1924z00_372;

				BgL_l1924z00_372 = BgL_methodsz00_25;
			BgL_zc3anonymousza32022ze3z83_373:
				if (PAIRP(BgL_l1924z00_372))
					{	/* Jas/produce.scm 82 */
						BGl_producezd2methodzd2zzjas_producez00(BgL_outchanz00_24,
							CAR(BgL_l1924z00_372));
						{
							obj_t BgL_l1924z00_942;

							BgL_l1924z00_942 = CDR(BgL_l1924z00_372);
							BgL_l1924z00_372 = BgL_l1924z00_942;
							goto BgL_zc3anonymousza32022ze3z83_373;
						}
					}
				else
					{	/* Jas/produce.scm 82 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* produce-method */
	bool_t BGl_producezd2methodzd2zzjas_producez00(obj_t BgL_outchanz00_26,
		obj_t BgL_methodz00_27)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 84 */
			{	/* Jas/produce.scm 86 */
				obj_t BgL_arg2028z00_379;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_944;

					BgL_auxz00_944 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_methodz00_27);
					BgL_arg2028z00_379 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_944))->
						BgL_flagsz00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_26, BgL_arg2028z00_379);
			}
			{	/* Jas/produce.scm 87 */
				obj_t BgL_arg2029z00_380;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_948;

					BgL_auxz00_948 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_methodz00_27);
					BgL_arg2029z00_380 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_948))->
						BgL_pnamez00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_26, BgL_arg2029z00_380);
			}
			{	/* Jas/produce.scm 88 */
				obj_t BgL_arg2031z00_381;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_952;

					BgL_auxz00_952 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_methodz00_27);
					BgL_arg2031z00_381 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_952))->
						BgL_descriptorz00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_26, BgL_arg2031z00_381);
			}
			{	/* Jas/produce.scm 89 */
				obj_t BgL_arg2033z00_382;

				{
					BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_956;

					BgL_auxz00_956 = (BgL_fieldzd2orzd2methodz00_bglt) (BgL_methodz00_27);
					BgL_arg2033z00_382 =
						(((BgL_fieldzd2orzd2methodz00_bglt) CREF(BgL_auxz00_956))->
						BgL_attributesz00);
				}
				return
					BGl_producezd2attributeszd2zzjas_producez00(BgL_outchanz00_26,
					BgL_arg2033z00_382);
			}
		}
	}



/* produce-attributes */
	bool_t BGl_producezd2attributeszd2zzjas_producez00(obj_t BgL_outchanz00_28,
		obj_t BgL_attributesz00_29)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 91 */
			{	/* Jas/produce.scm 92 */
				long BgL_arg2034z00_383;

				BgL_arg2034z00_383 = bgl_list_length(BgL_attributesz00_29);
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_28,
					BINT(BgL_arg2034z00_383));
			}
			{
				obj_t BgL_l1926z00_385;

				BgL_l1926z00_385 = BgL_attributesz00_29;
			BgL_zc3anonymousza32035ze3z83_386:
				if (PAIRP(BgL_l1926z00_385))
					{	/* Jas/produce.scm 93 */
						BGl_producezd2attributezd2zzjas_producez00(BgL_outchanz00_28,
							CAR(BgL_l1926z00_385));
						{
							obj_t BgL_l1926z00_967;

							BgL_l1926z00_967 = CDR(BgL_l1926z00_385);
							BgL_l1926z00_385 = BgL_l1926z00_967;
							goto BgL_zc3anonymousza32035ze3z83_386;
						}
					}
				else
					{	/* Jas/produce.scm 93 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* produce-attribute */
	obj_t BGl_producezd2attributezd2zzjas_producez00(obj_t BgL_outchanz00_30,
		obj_t BgL_attributez00_31)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 96 */
			{	/* Jas/produce.scm 97 */
				obj_t BgL_arg2038z00_391;

				{
					BgL_attributez00_bglt BgL_auxz00_969;

					BgL_auxz00_969 = (BgL_attributez00_bglt) (BgL_attributez00_31);
					BgL_arg2038z00_391 =
						(((BgL_attributez00_bglt) CREF(BgL_auxz00_969))->BgL_namez00);
				}
				BGl_outshortz00zzjas_producez00(BgL_outchanz00_30, BgL_arg2038z00_391);
			}
			{	/* Jas/produce.scm 98 */
				obj_t BgL_arg2045z00_392;

				{
					BgL_attributez00_bglt BgL_auxz00_973;

					BgL_auxz00_973 = (BgL_attributez00_bglt) (BgL_attributez00_31);
					BgL_arg2045z00_392 =
						(((BgL_attributez00_bglt) CREF(BgL_auxz00_973))->BgL_siza7eza7);
				}
				BGl_outintz00zzjas_producez00(BgL_outchanz00_30, BgL_arg2045z00_392);
			}
			{	/* Jas/produce.scm 99 */
				obj_t BgL_infoz00_393;

				obj_t BgL_typez00_394;

				{
					BgL_attributez00_bglt BgL_auxz00_977;

					BgL_auxz00_977 = (BgL_attributez00_bglt) (BgL_attributez00_31);
					BgL_infoz00_393 =
						(((BgL_attributez00_bglt) CREF(BgL_auxz00_977))->BgL_infoz00);
				}
				{
					BgL_attributez00_bglt BgL_auxz00_980;

					BgL_auxz00_980 = (BgL_attributez00_bglt) (BgL_attributez00_31);
					BgL_typez00_394 =
						(((BgL_attributez00_bglt) CREF(BgL_auxz00_980))->BgL_typez00);
				}
				if ((BgL_typez00_394 == CNST_TABLE_REF(((long) 1))))
					{	/* Jas/produce.scm 100 */
						return
							BGl_producezd2stringzd2zzjas_producez00(BgL_outchanz00_30,
							BgL_infoz00_393);
					}
				else
					{	/* Jas/produce.scm 100 */
						if ((BgL_typez00_394 == CNST_TABLE_REF(((long) 2))))
							{	/* Jas/produce.scm 100 */
								return
									BGl_producezd2codezd2zzjas_producez00(BgL_outchanz00_30,
									BgL_infoz00_393);
							}
						else
							{	/* Jas/produce.scm 100 */
								if ((BgL_typez00_394 == CNST_TABLE_REF(((long) 3))))
									{	/* Jas/produce.scm 100 */
										return
											BGl_outshortz00zzjas_producez00(BgL_outchanz00_30,
											BgL_infoz00_393);
									}
								else
									{	/* Jas/produce.scm 100 */
										if ((BgL_typez00_394 == CNST_TABLE_REF(((long) 4))))
											{	/* Jas/produce.scm 100 */
												{	/* Jas/produce.scm 108 */
													long BgL_arg2051z00_400;

													BgL_arg2051z00_400 = bgl_list_length(BgL_infoz00_393);
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_30,
														BINT(BgL_arg2051z00_400));
												}
												{
													obj_t BgL_l1928z00_402;

													{	/* Jas/produce.scm 109 */
														bool_t BgL_auxz00_1001;

														BgL_l1928z00_402 = BgL_infoz00_393;
													BgL_zc3anonymousza32052ze3z83_403:
														if (PAIRP(BgL_l1928z00_402))
															{	/* Jas/produce.scm 109 */
																{	/* Jas/produce.scm 110 */
																	obj_t BgL_slotz00_405;

																	BgL_slotz00_405 = CAR(BgL_l1928z00_402);
																	BGl_outshortz00zzjas_producez00
																		(BgL_outchanz00_30, CAR(BgL_slotz00_405));
																	BGl_outshortz00zzjas_producez00
																		(BgL_outchanz00_30, CDR(BgL_slotz00_405));
																}
																{
																	obj_t BgL_l1928z00_1009;

																	BgL_l1928z00_1009 = CDR(BgL_l1928z00_402);
																	BgL_l1928z00_402 = BgL_l1928z00_1009;
																	goto BgL_zc3anonymousza32052ze3z83_403;
																}
															}
														else
															{	/* Jas/produce.scm 109 */
																BgL_auxz00_1001 = ((bool_t) 1);
															}
														return BBOOL(BgL_auxz00_1001);
													}
												}
											}
										else
											{	/* Jas/produce.scm 100 */
												if ((BgL_typez00_394 == CNST_TABLE_REF(((long) 5))))
													{	/* Jas/produce.scm 100 */
														{	/* Jas/produce.scm 113 */
															long BgL_arg2118z00_411;

															BgL_arg2118z00_411 =
																bgl_list_length(BgL_infoz00_393);
															BGl_outshortz00zzjas_producez00(BgL_outchanz00_30,
																BINT(BgL_arg2118z00_411));
														}
														{
															obj_t BgL_l1932z00_413;

															{	/* Jas/produce.scm 114 */
																bool_t BgL_auxz00_1018;

																BgL_l1932z00_413 = BgL_infoz00_393;
															BgL_zc3anonymousza32119ze3z83_414:
																if (PAIRP(BgL_l1932z00_413))
																	{	/* Jas/produce.scm 114 */
																		{	/* Jas/produce.scm 114 */
																			obj_t BgL_slotz00_416;

																			BgL_slotz00_416 = CAR(BgL_l1932z00_413);
																			{
																				obj_t BgL_l1930z00_418;

																				BgL_l1930z00_418 = BgL_slotz00_416;
																			BgL_zc3anonymousza32121ze3z83_419:
																				if (PAIRP(BgL_l1930z00_418))
																					{	/* Jas/produce.scm 114 */
																						BGl_outshortz00zzjas_producez00
																							(BgL_outchanz00_30,
																							CAR(BgL_l1930z00_418));
																						{
																							obj_t BgL_l1930z00_1026;

																							BgL_l1930z00_1026 =
																								CDR(BgL_l1930z00_418);
																							BgL_l1930z00_418 =
																								BgL_l1930z00_1026;
																							goto
																								BgL_zc3anonymousza32121ze3z83_419;
																						}
																					}
																				else
																					{	/* Jas/produce.scm 114 */
																						((bool_t) 1);
																					}
																			}
																		}
																		{
																			obj_t BgL_l1932z00_1028;

																			BgL_l1932z00_1028 = CDR(BgL_l1932z00_413);
																			BgL_l1932z00_413 = BgL_l1932z00_1028;
																			goto BgL_zc3anonymousza32119ze3z83_414;
																		}
																	}
																else
																	{	/* Jas/produce.scm 114 */
																		BgL_auxz00_1018 = ((bool_t) 1);
																	}
																return BBOOL(BgL_auxz00_1018);
															}
														}
													}
												else
													{	/* Jas/produce.scm 100 */
														return
															BGl_errorz00zz__errorz00
															(BGl_string2244z00zzjas_producez00,
															BGl_string2245z00zzjas_producez00,
															BgL_typez00_394);
													}
											}
									}
							}
					}
			}
		}
	}



/* produce-code */
	obj_t BGl_producezd2codezd2zzjas_producez00(obj_t BgL_outchanz00_32,
		obj_t BgL_codez00_33)
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 119 */
			{
				obj_t BgL_maxstkz00_426;

				obj_t BgL_maxlocalz00_427;

				obj_t BgL_bytecodez00_428;

				obj_t BgL_handlersz00_429;

				obj_t BgL_attributesz00_430;

				if (PAIRP(BgL_codez00_33))
					{	/* Jas/produce.scm 120 */
						obj_t BgL_cdrzd21403zd2_435;

						BgL_cdrzd21403zd2_435 = CDR(BgL_codez00_33);
						if (PAIRP(BgL_cdrzd21403zd2_435))
							{	/* Jas/produce.scm 120 */
								obj_t BgL_cdrzd21410zd2_437;

								BgL_cdrzd21410zd2_437 = CDR(BgL_cdrzd21403zd2_435);
								if (PAIRP(BgL_cdrzd21410zd2_437))
									{	/* Jas/produce.scm 120 */
										obj_t BgL_cdrzd21416zd2_439;

										BgL_cdrzd21416zd2_439 = CDR(BgL_cdrzd21410zd2_437);
										if (PAIRP(BgL_cdrzd21416zd2_439))
											{	/* Jas/produce.scm 120 */
												obj_t BgL_arg2139z00_441;

												obj_t BgL_arg2141z00_442;

												obj_t BgL_arg2145z00_443;

												obj_t BgL_arg2151z00_444;

												obj_t BgL_arg2155z00_445;

												BgL_arg2139z00_441 = CAR(BgL_codez00_33);
												BgL_arg2141z00_442 = CAR(BgL_cdrzd21403zd2_435);
												BgL_arg2145z00_443 = CAR(BgL_cdrzd21410zd2_437);
												BgL_arg2151z00_444 = CAR(BgL_cdrzd21416zd2_439);
												BgL_arg2155z00_445 = CDR(BgL_cdrzd21416zd2_439);
												{	/* Jas/produce.scm 120 */
													bool_t BgL_auxz00_1048;

													BgL_maxstkz00_426 = BgL_arg2139z00_441;
													BgL_maxlocalz00_427 = BgL_arg2141z00_442;
													BgL_bytecodez00_428 = BgL_arg2145z00_443;
													BgL_handlersz00_429 = BgL_arg2151z00_444;
													BgL_attributesz00_430 = BgL_arg2155z00_445;
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_32,
														BgL_maxstkz00_426);
													BGl_outshortz00zzjas_producez00(BgL_outchanz00_32,
														BgL_maxlocalz00_427);
													{	/* Jas/produce.scm 124 */
														long BgL_arg2159z00_446;

														BgL_arg2159z00_446 =
															bgl_list_length(BgL_bytecodez00_428);
														BGl_outintz00zzjas_producez00(BgL_outchanz00_32,
															BINT(BgL_arg2159z00_446));
													}
													{
														obj_t BgL_l1934z00_448;

														BgL_l1934z00_448 = BgL_bytecodez00_428;
													BgL_zc3anonymousza32160ze3z83_449:
														if (PAIRP(BgL_l1934z00_448))
															{	/* Jas/produce.scm 125 */
																{	/* Jas/produce.scm 125 */
																	obj_t BgL_bz00_451;

																	BgL_bz00_451 = CAR(BgL_l1934z00_448);
																	{	/* Jas/produce.scm 125 */
																		unsigned char BgL_arg1938z00_714;

																		BgL_arg1938z00_714 =
																			(
																			((long) CINT(BgL_bz00_451) & ((long)
																					255)));
																		BGL_OUTPUT_CHAR(BgL_outchanz00_32,
																			(char) (BgL_arg1938z00_714));
																}}
																{
																	obj_t BgL_l1934z00_1062;

																	BgL_l1934z00_1062 = CDR(BgL_l1934z00_448);
																	BgL_l1934z00_448 = BgL_l1934z00_1062;
																	goto BgL_zc3anonymousza32160ze3z83_449;
																}
															}
														else
															{	/* Jas/produce.scm 125 */
																((bool_t) 1);
															}
													}
													{	/* Jas/produce.scm 126 */
														long BgL_arg2172z00_454;

														BgL_arg2172z00_454 =
															bgl_list_length(BgL_handlersz00_429);
														BGl_outshortz00zzjas_producez00(BgL_outchanz00_32,
															BINT(BgL_arg2172z00_454));
													}
													{
														obj_t BgL_l1936z00_456;

														BgL_l1936z00_456 = BgL_handlersz00_429;
													BgL_zc3anonymousza32173ze3z83_457:
														if (PAIRP(BgL_l1936z00_456))
															{	/* Jas/produce.scm 127 */
																{	/* Jas/produce.scm 128 */
																	obj_t BgL_hz00_459;

																	BgL_hz00_459 = CAR(BgL_l1936z00_456);
																	{

																		if (PAIRP(BgL_hz00_459))
																			{	/* Jas/produce.scm 128 */
																				obj_t BgL_cdrzd21436zd2_468;

																				BgL_cdrzd21436zd2_468 =
																					CDR(BgL_hz00_459);
																				if (PAIRP(BgL_cdrzd21436zd2_468))
																					{	/* Jas/produce.scm 128 */
																						obj_t BgL_cdrzd21442zd2_470;

																						BgL_cdrzd21442zd2_470 =
																							CDR(BgL_cdrzd21436zd2_468);
																						if (PAIRP(BgL_cdrzd21442zd2_470))
																							{	/* Jas/produce.scm 128 */
																								obj_t BgL_cdrzd21447zd2_472;

																								BgL_cdrzd21447zd2_472 =
																									CDR(BgL_cdrzd21442zd2_470);
																								if (PAIRP
																									(BgL_cdrzd21447zd2_472))
																									{	/* Jas/produce.scm 128 */
																										if (NULLP(CDR
																												(BgL_cdrzd21447zd2_472)))
																											{	/* Jas/produce.scm 128 */
																												obj_t
																													BgL_arg2185z00_475;
																												obj_t
																													BgL_arg2187z00_476;
																												obj_t
																													BgL_arg2192z00_477;
																												obj_t
																													BgL_arg2198z00_478;
																												BgL_arg2185z00_475 =
																													CAR(BgL_hz00_459);
																												BgL_arg2187z00_476 =
																													CAR
																													(BgL_cdrzd21436zd2_468);
																												BgL_arg2192z00_477 =
																													CAR
																													(BgL_cdrzd21442zd2_470);
																												BgL_arg2198z00_478 =
																													CAR
																													(BgL_cdrzd21447zd2_472);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_32,
																													BgL_arg2185z00_475);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_32,
																													BgL_arg2187z00_476);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_32,
																													BgL_arg2192z00_477);
																												BGl_outshortz00zzjas_producez00
																													(BgL_outchanz00_32,
																													BgL_arg2198z00_478);
																											}
																										else
																											{	/* Jas/produce.scm 128 */
																											BgL_tagzd21425zd2_465:
																												BGl_errorz00zz__errorz00
																													(BGl_string2246z00zzjas_producez00,
																													BGl_string2247z00zzjas_producez00,
																													BgL_hz00_459);
																											}
																									}
																								else
																									{	/* Jas/produce.scm 128 */
																										goto BgL_tagzd21425zd2_465;
																									}
																							}
																						else
																							{	/* Jas/produce.scm 128 */
																								goto BgL_tagzd21425zd2_465;
																							}
																					}
																				else
																					{	/* Jas/produce.scm 128 */
																						goto BgL_tagzd21425zd2_465;
																					}
																			}
																		else
																			{	/* Jas/produce.scm 128 */
																				goto BgL_tagzd21425zd2_465;
																			}
																	}
																}
																{
																	obj_t BgL_l1936z00_1093;

																	BgL_l1936z00_1093 = CDR(BgL_l1936z00_456);
																	BgL_l1936z00_456 = BgL_l1936z00_1093;
																	goto BgL_zc3anonymousza32173ze3z83_457;
																}
															}
														else
															{	/* Jas/produce.scm 127 */
																((bool_t) 1);
															}
													}
													BgL_auxz00_1048 =
														BGl_producezd2attributeszd2zzjas_producez00
														(BgL_outchanz00_32, BgL_attributesz00_430);
													return BBOOL(BgL_auxz00_1048);
												}
											}
										else
											{	/* Jas/produce.scm 120 */
											BgL_tagzd21390zd2_432:
												return
													BGl_errorz00zz__errorz00
													(BGl_string2246z00zzjas_producez00,
													BGl_string2248z00zzjas_producez00, BgL_codez00_33);
											}
									}
								else
									{	/* Jas/produce.scm 120 */
										goto BgL_tagzd21390zd2_432;
									}
							}
						else
							{	/* Jas/produce.scm 120 */
								goto BgL_tagzd21390zd2_432;
							}
					}
				else
					{	/* Jas/produce.scm 120 */
						goto BgL_tagzd21390zd2_432;
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_producez00()
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_producez00()
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_producez00()
	{
		AN_OBJECT;
		{	/* Jas/produce.scm 1 */
			BGl_modulezd2initializa7ationz75zzjas_classfilez00(((long) 324206891),
				BSTRING_TO_STRING(BGl_string2249z00zzjas_producez00));
			return
				BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 125143848),
				BSTRING_TO_STRING(BGl_string2249z00zzjas_producez00));
		}
	}

#ifdef __cplusplus
}
#endif
