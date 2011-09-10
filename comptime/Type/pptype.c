/*===========================================================================*/
/*   (Type/pptype.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/pptype.scm)*/
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

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;


	static obj_t BGl_requirezd2initializa7ationz75zztype_pptypez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztype_pptypez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__functionzd2typezd2ze3stringze3zztype_pptypez00(obj_t,
		obj_t);
	static obj_t BGl__variablezd2typezd2ze3stringze3zztype_pptypez00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_pptypez00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	static obj_t BGl_loopz00zztype_pptypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_pptypez00();
	static obj_t BGl_methodzd2initzd2zztype_pptypez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_variablezd2typezd2ze3stringzd2envz31zztype_pptypez00,
		BgL_bgl__variableza7d2type2253za7,
		BGl__variablezd2typezd2ze3stringze3zztype_pptypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2250z00zztype_pptypez00,
		BgL_bgl_string2250za700za7za7t2254za7, "", 0);
	      DEFINE_STRING(BGl_string2249z00zztype_pptypez00,
		BgL_bgl_string2249za700za7za7t2255za7, " -> ", 4);
	      DEFINE_STRING(BGl_string2251z00zztype_pptypez00,
		BgL_bgl_string2251za700za7za7t2256za7, " x ", 3);
	      DEFINE_STRING(BGl_string2252z00zztype_pptypez00,
		BgL_bgl_string2252za700za7za7t2257za7, "type_pptype", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_functionzd2typezd2ze3stringzd2envz31zztype_pptypez00,
		BgL_bgl__functionza7d2type2258za7,
		BGl__functionzd2typezd2ze3stringze3zztype_pptypez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long
		BgL_checksumz00_549, char *BgL_fromz00_550)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_pptypez00))
				{
					BGl_requirezd2initializa7ationz75zztype_pptypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_pptypez00();
					BGl_importedzd2moduleszd2initz00zztype_pptypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_pptypez00()
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_pptype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_pptype");
			return BUNSPEC;
		}
	}



/* function-type->string */
	BGL_EXPORTED_DEF obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt
		BgL_variablez00_2)
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 32 */
			{	/* Type/pptype.scm 33 */
				BgL_valuez00_bglt BgL_sfunz00_378;

				BgL_sfunz00_378 =
					(((BgL_variablez00_bglt) CREF(BgL_variablez00_2))->BgL_valuez00);
				{	/* Type/pptype.scm 34 */
					obj_t BgL_arg2125z00_379;

					obj_t BgL_arg2127z00_381;

					{	/* Type/pptype.scm 34 */
						obj_t BgL_g2091z00_382;

						{
							BgL_sfunz00_bglt BgL_auxz00_559;

							BgL_auxz00_559 = (BgL_sfunz00_bglt) (BgL_sfunz00_378);
							BgL_g2091z00_382 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_559))->BgL_argsz00);
						}
						BgL_arg2125z00_379 = BGl_loopz00zztype_pptypez00(BgL_g2091z00_382);
					}
					{	/* Type/pptype.scm 47 */
						obj_t BgL_arg2185z00_398;

						{	/* Type/pptype.scm 47 */
							obj_t BgL_arg2187z00_399;

							{	/* Type/pptype.scm 47 */
								BgL_typez00_bglt BgL_obj1508z00_536;

								BgL_obj1508z00_536 =
									(((BgL_variablez00_bglt) CREF(BgL_variablez00_2))->
									BgL_typez00);
								BgL_arg2187z00_399 =
									(((BgL_typez00_bglt) CREF(BgL_obj1508z00_536))->BgL_idz00);
							}
							{	/* Type/pptype.scm 47 */
								obj_t BgL_res2247z00_539;

								{	/* Type/pptype.scm 47 */
									obj_t BgL_arg2063z00_538;

									BgL_arg2063z00_538 = SYMBOL_TO_STRING(BgL_arg2187z00_399);
									BgL_res2247z00_539 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_538);
								}
								BgL_arg2185z00_398 = BgL_res2247z00_539;
							}
						}
						BgL_arg2127z00_381 =
							BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg2185z00_398);
					}
					return
						string_append_3(BgL_arg2125z00_379,
						BGl_string2249z00zztype_pptypez00, BgL_arg2127z00_381);
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zztype_pptypez00(obj_t BgL_argsz00_384)
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 34 */
			if (NULLP(BgL_argsz00_384))
				{	/* Type/pptype.scm 35 */
					return BGl_string2250z00zztype_pptypez00;
				}
			else
				{	/* Type/pptype.scm 40 */
					obj_t BgL_arg2139z00_387;

					obj_t BgL_arg2141z00_388;

					obj_t BgL_arg2145z00_389;

					{	/* Type/pptype.scm 40 */
						obj_t BgL_arg2151z00_390;

						{	/* Type/pptype.scm 40 */
							obj_t BgL_arg2155z00_391;

							{	/* Type/pptype.scm 40 */
								BgL_typez00_bglt BgL_arg2159z00_392;

								{	/* Type/pptype.scm 40 */
									BgL_variablez00_bglt BgL_obj1608z00_527;

									{	/* Type/pptype.scm 40 */
										obj_t BgL_pairz00_526;

										BgL_pairz00_526 = BgL_argsz00_384;
										BgL_obj1608z00_527 =
											(BgL_variablez00_bglt) (CAR(BgL_pairz00_526));
									}
									BgL_arg2159z00_392 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_527))->
										BgL_typez00);
								}
								BgL_arg2155z00_391 =
									(((BgL_typez00_bglt) CREF(BgL_arg2159z00_392))->BgL_idz00);
							}
							{	/* Type/pptype.scm 39 */
								obj_t BgL_res2246z00_531;

								{	/* Type/pptype.scm 39 */
									obj_t BgL_arg2063z00_530;

									BgL_arg2063z00_530 = SYMBOL_TO_STRING(BgL_arg2155z00_391);
									BgL_res2246z00_531 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_530);
								}
								BgL_arg2151z00_390 = BgL_res2246z00_531;
							}
						}
						BgL_arg2139z00_387 =
							BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg2151z00_390);
					}
					if (NULLP(CDR(BgL_argsz00_384)))
						{	/* Type/pptype.scm 41 */
							BgL_arg2141z00_388 = BGl_string2250z00zztype_pptypez00;
						}
					else
						{	/* Type/pptype.scm 41 */
							BgL_arg2141z00_388 = BGl_string2251z00zztype_pptypez00;
						}
					BgL_arg2145z00_389 =
						BGl_loopz00zztype_pptypez00(CDR(BgL_argsz00_384));
					return
						string_append_3(BgL_arg2139z00_387, BgL_arg2141z00_388,
						BgL_arg2145z00_389);
				}
		}
	}



/* _function-type->string */
	obj_t BGl__functionzd2typezd2ze3stringze3zztype_pptypez00(obj_t
		BgL_envz00_545, obj_t BgL_variablez00_546)
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 32 */
			return
				BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(
				(BgL_variablez00_bglt) (BgL_variablez00_546));
		}
	}



/* variable-type->string */
	BGL_EXPORTED_DEF obj_t
		BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt
		BgL_variablez00_3)
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 52 */
			{	/* Type/pptype.scm 53 */
				obj_t BgL_arg2198z00_401;

				{	/* Type/pptype.scm 53 */
					obj_t BgL_arg2199z00_402;

					{	/* Type/pptype.scm 53 */
						BgL_typez00_bglt BgL_obj1508z00_541;

						BgL_obj1508z00_541 =
							(((BgL_variablez00_bglt) CREF(BgL_variablez00_3))->BgL_typez00);
						BgL_arg2199z00_402 =
							(((BgL_typez00_bglt) CREF(BgL_obj1508z00_541))->BgL_idz00);
					}
					{	/* Type/pptype.scm 53 */
						obj_t BgL_res2248z00_544;

						{	/* Type/pptype.scm 53 */
							obj_t BgL_arg2063z00_543;

							BgL_arg2063z00_543 = SYMBOL_TO_STRING(BgL_arg2199z00_402);
							BgL_res2248z00_544 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_543);
						}
						BgL_arg2198z00_401 = BgL_res2248z00_544;
					}
				}
				return
					BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg2198z00_401);
			}
		}
	}



/* _variable-type->string */
	obj_t BGl__variablezd2typezd2ze3stringze3zztype_pptypez00(obj_t
		BgL_envz00_547, obj_t BgL_variablez00_548)
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 52 */
			return
				BGl_variablezd2typezd2ze3stringze3zztype_pptypez00(
				(BgL_variablez00_bglt) (BgL_variablez00_548));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_pptypez00()
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_pptypez00()
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_pptypez00()
	{
		AN_OBJECT;
		{	/* Type/pptype.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2252z00zztype_pptypez00));
			return
				BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2252z00zztype_pptypez00));
		}
	}

#ifdef __cplusplus
}
#endif
