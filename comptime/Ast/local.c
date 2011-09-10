/*===========================================================================*/
/*   (Ast/local.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/local.scm)*/
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

	typedef struct BgL_localz00_bgl
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
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_sexitz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_handlerz00;
		bool_t BgL_detachedzf3zf3;
	}               *BgL_sexitz00_bglt;


	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt, BgL_valuez00_bglt);
	extern BgL_localz00_bglt BGl_makezd2localzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, bool_t,
		long);
	extern obj_t BGl_localzd2idzd2ze3nameze3zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_localz00 = BUNSPEC;
	static BgL_localz00_bglt BGl_makezd2newzd2localz00zzast_localz00(obj_t,
		BgL_typez00_bglt, obj_t, bool_t);
	static obj_t BGl_genericzd2initzd2zzast_localz00();
	static long BGl_getzd2newzd2keyz00zzast_localz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2sexitz00zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sexitz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzast_localz00();
	static obj_t BGl__clonezd2localzd2zzast_localz00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_localz00();
	static long BGl_za2localzd2keyza2zd2zzast_localz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_localz00();
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2sfunz00zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sfunz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzd2svarz00zzast_localz00(obj_t, BgL_typez00_bglt);
	static obj_t BGl__makezd2localzd2sexitz00zzast_localz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2localzd2sfunz00zzast_localz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t, BgL_typez00_bglt,
		BgL_sfunz00_bglt);
	static obj_t BGl__makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__makezd2localzd2svarz00zzast_localz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_localz00();
	static obj_t BGl__makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, obj_t,
		obj_t);
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzast_localz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2sexitzd2envzd2zzast_localz00,
		BgL_bgl__makeza7d2localza7d22260z00,
		BGl__makezd2localzd2sexitz00zzast_localz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_clonezd2localzd2envz00zzast_localz00,
		BgL_bgl__cloneza7d2localza7d2261z00, BGl__clonezd2localzd2zzast_localz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2sfunzd2envzd2zzast_localz00,
		BgL_bgl__makeza7d2localza7d22262z00,
		BGl__makezd2localzd2sfunz00zzast_localz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2userzd2localzd2sfunzd2envz00zzast_localz00,
		BgL_bgl__makeza7d2userza7d2l2263z00,
		BGl__makezd2userzd2localzd2sfunzd2zzast_localz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2localzd2svarzd2envzd2zzast_localz00,
		BgL_bgl__makeza7d2localza7d22264z00,
		BGl__makezd2localzd2svarz00zzast_localz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2userzd2localzd2svarzd2envz00zzast_localz00,
		BgL_bgl__makeza7d2userza7d2l2265z00,
		BGl__makezd2userzd2localzd2svarzd2zzast_localz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2253z00zzast_localz00,
		BgL_bgl_string2253za700za7za7a2266za7, "_", 1);
	      DEFINE_STRING(BGl_string2254z00zzast_localz00,
		BgL_bgl_string2254za700za7za7a2267za7, "ast_local", 9);
	      DEFINE_STRING(BGl_string2255z00zzast_localz00,
		BgL_bgl_string2255za700za7za7a2268za7, "now read ", 9);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long
		BgL_checksumz00_581, char *BgL_fromz00_582)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_localz00))
				{
					BGl_requirezd2initializa7ationz75zzast_localz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_localz00();
					BGl_cnstzd2initzd2zzast_localz00();
					BGl_importedzd2moduleszd2initz00zzast_localz00();
					BGl_toplevelzd2initzd2zzast_localz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_local");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_local");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 14 */
			{	/* Ast/local.scm 14 */
				obj_t BgL_cportz00_573;

				BgL_cportz00_573 =
					bgl_open_input_string(BGl_string2255z00zzast_localz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_574;

					BgL_iz00_574 = ((long) 1);
				BgL_loopz00_575:
					if ((BgL_iz00_574 == ((long) -1)))
						{	/* Ast/local.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/local.scm 14 */
							{	/* Ast/local.scm 14 */
								obj_t BgL_arg2259z00_577;

								{	/* Ast/local.scm 14 */

									{	/* Ast/local.scm 14 */
										obj_t BgL_locationz00_579;

										BgL_locationz00_579 = BBOOL(((bool_t) 0));
										{	/* Ast/local.scm 14 */

											BgL_arg2259z00_577 =
												BGl_readz00zz__readerz00(BgL_cportz00_573,
												BgL_locationz00_579);
										}
									}
								}
								{	/* Ast/local.scm 14 */
									int BgL_auxz00_598;

									BgL_auxz00_598 = (int) (BgL_iz00_574);
									CNST_TABLE_SET(BgL_auxz00_598, BgL_arg2259z00_577);
							}}
							{	/* Ast/local.scm 14 */
								int BgL_auxz00_580;

								BgL_auxz00_580 = (int) ((BgL_iz00_574 - ((long) 1)));
								{
									long BgL_iz00_603;

									BgL_iz00_603 = (long) (BgL_auxz00_580);
									BgL_iz00_574 = BgL_iz00_603;
									goto BgL_loopz00_575;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 14 */
			return (BGl_za2localzd2keyza2zd2zzast_localz00 = ((long) 0), BUNSPEC);
		}
	}



/* get-new-key */
	long BGl_getzd2newzd2keyz00zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 35 */
			BGl_za2localzd2keyza2zd2zzast_localz00 =
				(BGl_za2localzd2keyza2zd2zzast_localz00 + ((long) 1));
			return BGl_za2localzd2keyza2zd2zzast_localz00;
		}
	}



/* make-new-local */
	BgL_localz00_bglt BGl_makezd2newzd2localz00zzast_localz00(obj_t BgL_idz00_1,
		BgL_typez00_bglt BgL_typez00_2, obj_t BgL_valuez00_3,
		bool_t BgL_userzf3zf3_4)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 44 */
			{	/* Ast/local.scm 45 */
				long BgL_keyz00_391;

				BgL_keyz00_391 = BGl_getzd2newzd2keyz00zzast_localz00();
				{	/* Ast/local.scm 49 */
					obj_t BgL_arg2118z00_392;

					obj_t BgL_arg2119z00_393;

					obj_t BgL_arg2125z00_394;

					{	/* Ast/local.scm 49 */
						obj_t BgL_arg2127z00_396;

						obj_t BgL_arg2141z00_398;

						BgL_arg2127z00_396 =
							BGl_localzd2idzd2ze3nameze3zzast_identz00(BgL_idz00_1);
						{	/* Ast/local.scm 49 */

							BgL_arg2141z00_398 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
								(BgL_keyz00_391, ((long) 10));
						}
						BgL_arg2118z00_392 =
							string_append_3(BgL_arg2127z00_396,
							BGl_string2253z00zzast_localz00, BgL_arg2141z00_398);
					}
					BgL_arg2119z00_393 = CNST_TABLE_REF(((long) 0));
					BgL_arg2125z00_394 = CNST_TABLE_REF(((long) 1));
					return
						BGl_makezd2localzd2zzast_varz00(BgL_idz00_1, BgL_arg2118z00_392,
						BgL_typez00_2, (BgL_valuez00_bglt) (BgL_valuez00_3),
						BgL_arg2119z00_393, BUNSPEC, BgL_arg2125z00_394, ((long) 0),
						BgL_userzf3zf3_4, BgL_keyz00_391);
		}}}
	}



/* clone-local */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt BgL_localz00_5,
		BgL_valuez00_bglt BgL_valuez00_6)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 57 */
			{	/* Ast/local.scm 58 */
				long BgL_keyz00_401;

				BgL_keyz00_401 = BGl_getzd2newzd2keyz00zzast_localz00();
				{	/* Ast/local.scm 60 */
					BgL_localz00_bglt BgL_new2095z00_404;

					{	/* Ast/local.scm 60 */
						obj_t BgL_arg2145z00_405;

						obj_t BgL_arg2151z00_406;

						BgL_typez00_bglt BgL_arg2155z00_407;

						obj_t BgL_arg2159z00_408;

						obj_t BgL_arg2165z00_409;

						obj_t BgL_arg2172z00_410;

						long BgL_arg2178z00_411;

						bool_t BgL_arg2185z00_412;

						{
							BgL_variablez00_bglt BgL_auxz00_615;

							BgL_auxz00_615 = (BgL_variablez00_bglt) (BgL_localz00_5);
							BgL_arg2145z00_405 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_615))->BgL_idz00);
						}
						{	/* Ast/local.scm 62 */
							obj_t BgL_arg2187z00_413;

							obj_t BgL_arg2198z00_415;

							{	/* Ast/local.scm 62 */
								obj_t BgL_arg2199z00_416;

								{
									BgL_variablez00_bglt BgL_auxz00_618;

									BgL_auxz00_618 = (BgL_variablez00_bglt) (BgL_localz00_5);
									BgL_arg2199z00_416 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_618))->BgL_idz00);
								}
								BgL_arg2187z00_413 =
									BGl_idzd2ze3namez31zzast_identz00(BgL_arg2199z00_416);
							}
							{	/* Ast/local.scm 62 */

								BgL_arg2198z00_415 =
									BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
									(BgL_keyz00_401, ((long) 10));
							}
							BgL_arg2151z00_406 =
								string_append_3(BgL_arg2187z00_413,
								BGl_string2253z00zzast_localz00, BgL_arg2198z00_415);
						}
						{
							BgL_variablez00_bglt BgL_auxz00_624;

							BgL_auxz00_624 = (BgL_variablez00_bglt) (BgL_localz00_5);
							BgL_arg2155z00_407 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_624))->BgL_typez00);
						}
						{
							BgL_variablez00_bglt BgL_auxz00_627;

							BgL_auxz00_627 = (BgL_variablez00_bglt) (BgL_localz00_5);
							BgL_arg2159z00_408 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_627))->BgL_accessz00);
						}
						{
							BgL_variablez00_bglt BgL_auxz00_630;

							BgL_auxz00_630 = (BgL_variablez00_bglt) (BgL_localz00_5);
							BgL_arg2165z00_409 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_630))->
								BgL_fastzd2alphazd2);
						}
						{
							BgL_variablez00_bglt BgL_auxz00_633;

							BgL_auxz00_633 = (BgL_variablez00_bglt) (BgL_localz00_5);
							BgL_arg2172z00_410 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_633))->
								BgL_removablez00);
						}
						{
							BgL_variablez00_bglt BgL_auxz00_636;

							BgL_auxz00_636 = (BgL_variablez00_bglt) (BgL_localz00_5);
							BgL_arg2178z00_411 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_636))->
								BgL_occurrencez00);
						}
						BgL_arg2185z00_412 =
							(((BgL_localz00_bglt) CREF(BgL_localz00_5))->BgL_userzf3zf3);
						BgL_new2095z00_404 =
							BGl_makezd2localzd2zzast_varz00(BgL_arg2145z00_405,
							BgL_arg2151z00_406, BgL_arg2155z00_407, BgL_valuez00_6,
							BgL_arg2159z00_408, BgL_arg2165z00_409, BgL_arg2172z00_410,
							BgL_arg2178z00_411, BgL_arg2185z00_412, BgL_keyz00_401);
					}
					{	/* Ast/local.scm 60 */

						return BgL_new2095z00_404;
					}
				}
			}
		}
	}



/* _clone-local */
	obj_t BGl__clonezd2localzd2zzast_localz00(obj_t BgL_envz00_552,
		obj_t BgL_localz00_553, obj_t BgL_valuez00_554)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 57 */
			return
				(obj_t) (BGl_clonezd2localzd2zzast_localz00(
					(BgL_localz00_bglt) (BgL_localz00_553),
					(BgL_valuez00_bglt) (BgL_valuez00_554)));
		}
	}



/* make-local-svar */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2svarz00zzast_localz00(obj_t BgL_idz00_7,
		BgL_typez00_bglt BgL_typez00_8)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 68 */
			{	/* Ast/local.scm 69 */
				BgL_svarz00_bglt BgL_arg2200z00_550;

				BgL_arg2200z00_550 = BGl_makezd2svarzd2zzast_varz00(BUNSPEC);
				return
					BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_7, BgL_typez00_8,
					(obj_t) (BgL_arg2200z00_550), ((bool_t) 0));
			}
		}
	}



/* _make-local-svar */
	obj_t BGl__makezd2localzd2svarz00zzast_localz00(obj_t BgL_envz00_555,
		obj_t BgL_idz00_556, obj_t BgL_typez00_557)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 68 */
			return
				(obj_t) (BGl_makezd2localzd2svarz00zzast_localz00(BgL_idz00_556,
					(BgL_typez00_bglt) (BgL_typez00_557)));
		}
	}



/* make-user-local-svar */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t BgL_idz00_9,
		BgL_typez00_bglt BgL_typez00_10)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 74 */
			{	/* Ast/local.scm 75 */
				BgL_svarz00_bglt BgL_arg2208z00_551;

				BgL_arg2208z00_551 = BGl_makezd2svarzd2zzast_varz00(BUNSPEC);
				return
					BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_9, BgL_typez00_10,
					(obj_t) (BgL_arg2208z00_551), ((bool_t) 1));
			}
		}
	}



/* _make-user-local-svar */
	obj_t BGl__makezd2userzd2localzd2svarzd2zzast_localz00(obj_t BgL_envz00_558,
		obj_t BgL_idz00_559, obj_t BgL_typez00_560)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 74 */
			return
				(obj_t) (BGl_makezd2userzd2localzd2svarzd2zzast_localz00(BgL_idz00_559,
					(BgL_typez00_bglt) (BgL_typez00_560)));
		}
	}



/* make-local-sexit */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2sexitz00zzast_localz00(obj_t BgL_idz00_11,
		BgL_typez00_bglt BgL_typez00_12, BgL_sexitz00_bglt BgL_sexitz00_13)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 80 */
			return
				BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_11, BgL_typez00_12,
				(obj_t) (BgL_sexitz00_13), ((bool_t) 0));
		}
	}



/* _make-local-sexit */
	obj_t BGl__makezd2localzd2sexitz00zzast_localz00(obj_t BgL_envz00_561,
		obj_t BgL_idz00_562, obj_t BgL_typez00_563, obj_t BgL_sexitz00_564)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 80 */
			return
				(obj_t) (BGl_makezd2localzd2sexitz00zzast_localz00(BgL_idz00_562,
					(BgL_typez00_bglt) (BgL_typez00_563),
					(BgL_sexitz00_bglt) (BgL_sexitz00_564)));
		}
	}



/* make-local-sfun */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzd2sfunz00zzast_localz00(obj_t BgL_idz00_14,
		BgL_typez00_bglt BgL_typez00_15, BgL_sfunz00_bglt BgL_sfunz00_16)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 88 */
			return
				BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_14, BgL_typez00_15,
				(obj_t) (BgL_sfunz00_16), ((bool_t) 0));
		}
	}



/* _make-local-sfun */
	obj_t BGl__makezd2localzd2sfunz00zzast_localz00(obj_t BgL_envz00_565,
		obj_t BgL_idz00_566, obj_t BgL_typez00_567, obj_t BgL_sfunz00_568)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 88 */
			return
				(obj_t) (BGl_makezd2localzd2sfunz00zzast_localz00(BgL_idz00_566,
					(BgL_typez00_bglt) (BgL_typez00_567),
					(BgL_sfunz00_bglt) (BgL_sfunz00_568)));
		}
	}



/* make-user-local-sfun */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t BgL_idz00_17,
		BgL_typez00_bglt BgL_typez00_18, BgL_sfunz00_bglt BgL_sfunz00_19)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 96 */
			return
				BGl_makezd2newzd2localz00zzast_localz00(BgL_idz00_17, BgL_typez00_18,
				(obj_t) (BgL_sfunz00_19), ((bool_t) 1));
		}
	}



/* _make-user-local-sfun */
	obj_t BGl__makezd2userzd2localzd2sfunzd2zzast_localz00(obj_t BgL_envz00_569,
		obj_t BgL_idz00_570, obj_t BgL_typez00_571, obj_t BgL_sfunz00_572)
	{
		AN_OBJECT;
		{	/* Ast/local.scm 96 */
			return
				(obj_t) (BGl_makezd2userzd2localzd2sfunzd2zzast_localz00(BgL_idz00_570,
					(BgL_typez00_bglt) (BgL_typez00_571),
					(BgL_sfunz00_bglt) (BgL_sfunz00_572)));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_localz00()
	{
		AN_OBJECT;
		{	/* Ast/local.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2254z00zzast_localz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2254z00zzast_localz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2254z00zzast_localz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2254z00zzast_localz00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2254z00zzast_localz00));
		}
	}

#ifdef __cplusplus
}
#endif
