/*===========================================================================*/
/*   (Write/ast.scm)                                                         */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/ast.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

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


	BGL_IMPORT obj_t BGl_za2ppzd2caseza2zd2zz__ppz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzwrite_astz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzwrite_astz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_pptypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__ppz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_atomzd2ze3stringz31zzwrite_astz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t string_to_bstring(char *);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00;
	static obj_t BGl_zc3exitza33264ze3z83zzwrite_astz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_methodzd2initzd2zzwrite_astz00();
	extern obj_t BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_ppz00zz__ppz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_astz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzwrite_astz00();
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_argszd2listzd2ze3argsza2z41zztools_argsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza33356ze3z83zzwrite_astz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_writezd2astzd2zzwrite_astz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_astz00();
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(BgL_variablez00_bglt);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl__writezd2astzd2zzwrite_astz00(obj_t, obj_t);
	BGL_IMPORT char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	BGL_IMPORT bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_astz00();
	static obj_t BGl_makezd2sfunzd2sinfoz00zzwrite_astz00(BgL_globalz00_bglt);
	static obj_t __cnst[8];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2astzd2envz00zzwrite_astz00,
		BgL_bgl__writeza7d2astza7d2za73442za7, BGl__writezd2astzd2zzwrite_astz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3420z00zzwrite_astz00,
		BgL_bgl_string3420za700za7za7w3443za7, "write-ast", 9);
	      DEFINE_STRING(BGl_string3419z00zzwrite_astz00,
		BgL_bgl_string3419za700za7za7w3444za7, ".ast", 4);
	      DEFINE_STRING(BGl_string3421z00zzwrite_astz00,
		BgL_bgl_string3421za700za7za7w3445za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string3422z00zzwrite_astz00,
		BgL_bgl_string3422za700za7za7w3446za7, "The AST (", 9);
	      DEFINE_STRING(BGl_string3423z00zzwrite_astz00,
		BgL_bgl_string3423za700za7za7w3447za7, ")", 1);
	      DEFINE_STRING(BGl_string3424z00zzwrite_astz00,
		BgL_bgl_string3424za700za7za7w3448za7, "  predicate-of: ", 16);
	      DEFINE_STRING(BGl_string3425z00zzwrite_astz00,
		BgL_bgl_string3425za700za7za7w3449za7, "", 0);
	      DEFINE_STRING(BGl_string3426z00zzwrite_astz00,
		BgL_bgl_string3426za700za7za7w3450za7, "  user?: #t", 11);
	      DEFINE_STRING(BGl_string3427z00zzwrite_astz00,
		BgL_bgl_string3427za700za7za7w3451za7, "  user?: #f", 11);
	      DEFINE_STRING(BGl_string3428z00zzwrite_astz00,
		BgL_bgl_string3428za700za7za7w3452za7, "]", 1);
	      DEFINE_STRING(BGl_string3430z00zzwrite_astz00,
		BgL_bgl_string3430za700za7za7w3453za7, "  loc: ", 7);
	      DEFINE_STRING(BGl_string3429z00zzwrite_astz00,
		BgL_bgl_string3429za700za7za7w3454za7, " removable: ", 12);
	      DEFINE_STRING(BGl_string3431z00zzwrite_astz00,
		BgL_bgl_string3431za700za7za7w3455za7, "  rm: ", 6);
	      DEFINE_STRING(BGl_string3432z00zzwrite_astz00,
		BgL_bgl_string3432za700za7za7w3456za7, "  occ: ", 7);
	      DEFINE_STRING(BGl_string3433z00zzwrite_astz00,
		BgL_bgl_string3433za700za7za7w3457za7, "  side-effect: ", 15);
	      DEFINE_STRING(BGl_string3434z00zzwrite_astz00,
		BgL_bgl_string3434za700za7za7w3458za7, "[", 1);
	      DEFINE_STRING(BGl_string3435z00zzwrite_astz00,
		BgL_bgl_string3435za700za7za7w3459za7, "#t", 2);
	      DEFINE_STRING(BGl_string3436z00zzwrite_astz00,
		BgL_bgl_string3436za700za7za7w3460za7, "#f", 2);
	      DEFINE_STRING(BGl_string3437z00zzwrite_astz00,
		BgL_bgl_string3437za700za7za7w3461za7, "#unspecified", 12);
	      DEFINE_STRING(BGl_string3438z00zzwrite_astz00,
		BgL_bgl_string3438za700za7za7w3462za7, "write_ast", 9);
	      DEFINE_STRING(BGl_string3439z00zzwrite_astz00,
		BgL_bgl_string3439za700za7za7w3463za7,
		"define define-method smfun define-inline sifun define-generic sgfun lower ",
		74);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzwrite_astz00(long
		BgL_checksumz00_1369, char *BgL_fromz00_1370)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_astz00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_astz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzwrite_astz00();
					BGl_cnstzd2initzd2zzwrite_astz00();
					BGl_importedzd2moduleszd2initz00zzwrite_astz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_astz00()
	{
		AN_OBJECT;
		{	/* Write/ast.scm 15 */
			BGl_modulezd2initializa7ationz75zz__ppz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_ast");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "write_ast");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"write_ast");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzwrite_astz00()
	{
		AN_OBJECT;
		{	/* Write/ast.scm 15 */
			{	/* Write/ast.scm 15 */
				obj_t BgL_cportz00_1361;

				BgL_cportz00_1361 =
					bgl_open_input_string(BGl_string3439z00zzwrite_astz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1362;

					BgL_iz00_1362 = ((long) 7);
				BgL_loopz00_1363:
					if ((BgL_iz00_1362 == ((long) -1)))
						{	/* Write/ast.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Write/ast.scm 15 */
							{	/* Write/ast.scm 15 */
								obj_t BgL_arg3441z00_1365;

								{	/* Write/ast.scm 15 */

									{	/* Write/ast.scm 15 */
										obj_t BgL_locationz00_1367;

										BgL_locationz00_1367 = BBOOL(((bool_t) 0));
										{	/* Write/ast.scm 15 */

											BgL_arg3441z00_1365 =
												BGl_readz00zz__readerz00(BgL_cportz00_1361,
												BgL_locationz00_1367);
										}
									}
								}
								{	/* Write/ast.scm 15 */
									int BgL_auxz00_1396;

									BgL_auxz00_1396 = (int) (BgL_iz00_1362);
									CNST_TABLE_SET(BgL_auxz00_1396, BgL_arg3441z00_1365);
							}}
							{	/* Write/ast.scm 15 */
								int BgL_auxz00_1368;

								BgL_auxz00_1368 = (int) ((BgL_iz00_1362 - ((long) 1)));
								{
									long BgL_iz00_1401;

									BgL_iz00_1401 = (long) (BgL_auxz00_1368);
									BgL_iz00_1362 = BgL_iz00_1401;
									goto BgL_loopz00_1363;
								}
							}
						}
				}
			}
		}
	}



/* write-ast */
	BGL_EXPORTED_DEF obj_t BGl_writezd2astzd2zzwrite_astz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Write/ast.scm 29 */
			{	/* Write/ast.scm 31 */
				obj_t BgL_outputzd2namezd2_775;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Write/ast.scm 31 */
						BgL_outputzd2namezd2_775 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Write/ast.scm 33 */
						bool_t BgL_testz00_1405;

						if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
							{	/* Write/ast.scm 34 */
								obj_t BgL_auxz00_1408;

								BgL_auxz00_1408 =
									CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
								BgL_testz00_1405 = STRINGP(BgL_auxz00_1408);
							}
						else
							{	/* Write/ast.scm 33 */
								BgL_testz00_1405 = ((bool_t) 0);
							}
						if (BgL_testz00_1405)
							{	/* Write/ast.scm 33 */
								BgL_outputzd2namezd2_775 =
									string_append(BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
									BGl_string3419z00zzwrite_astz00);
							}
						else
							{	/* Write/ast.scm 33 */
								BgL_outputzd2namezd2_775 = BFALSE;
							}
					}
				{	/* Write/ast.scm 31 */
					obj_t BgL_portz00_776;

					if (STRINGP(BgL_outputzd2namezd2_775))
						{	/* Write/ast.scm 39 */
							obj_t BgL_g2679z00_839;

							BgL_g2679z00_839 = BgL_outputzd2namezd2_775;
							{	/* Write/ast.scm 39 */

								BgL_portz00_776 =
									BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_g2679z00_839, BTRUE);
							}
						}
					else
						{	/* Write/ast.scm 40 */
							obj_t BgL_res3413z00_1299;

							{	/* Write/ast.scm 40 */
								obj_t BgL_auxz00_1417;

								BgL_auxz00_1417 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3413z00_1299 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1417);
							}
							BgL_portz00_776 = BgL_res3413z00_1299;
						}
					{	/* Write/ast.scm 38 */

						if (OUTPUT_PORTP(BgL_portz00_776))
							{	/* Write/ast.scm 43 */
								obj_t BgL_val3246z00_778;

								BgL_val3246z00_778 =
									BGl_zc3exitza33264ze3z83zzwrite_astz00(BgL_globalsz00_1,
									BgL_portz00_776);
								bgl_close_output_port(BgL_portz00_776);
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val3246z00_778)))
									{	/* Write/ast.scm 74 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val3246z00_778), CDR(BgL_val3246z00_778));
									}
								else
									{	/* Write/ast.scm 74 */
										return BgL_val3246z00_778;
									}
							}
						else
							{	/* Write/ast.scm 41 */
								return
									BGl_errorz00zz__errorz00(BGl_string3420z00zzwrite_astz00,
									BGl_string3421z00zzwrite_astz00, BgL_outputzd2namezd2_775);
							}
					}
				}
			}
		}
	}



/* <exit:3264> */
	obj_t BGl_zc3exitza33264ze3z83zzwrite_astz00(obj_t BgL_globalsz00_1360,
		obj_t BgL_portz00_1359)
	{
		AN_OBJECT;
		{	/* Write/ast.scm 74 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit3247z00_783;

			if (SET_EXIT(BgL_an_exit3247z00_783))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit3247z00_783 = (void *) jmpbuf;
					{	/* Write/ast.scm 74 */

						PUSH_EXIT(BgL_an_exit3247z00_783, ((long) 0));
						{	/* Write/ast.scm 47 */
							bool_t BgL_val3248z00_784;

							if (CBOOL(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
								{	/* Write/ast.scm 45 */
									BFALSE;
								}
							else
								{	/* Write/ast.scm 45 */
									BGl_za2ppzd2caseza2zd2zz__ppz00 = CNST_TABLE_REF(((long) 0));
								}
							BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00
								(BgL_portz00_1359,
								string_append_3(BGl_string3422z00zzwrite_astz00,
									BGl_za2currentzd2passza2zd2zzengine_passz00,
									BGl_string3423z00zzwrite_astz00));
							{
								obj_t BgL_l3258z00_787;

								BgL_l3258z00_787 = BgL_globalsz00_1360;
							BgL_zc3anonymousza33266ze3z83_788:
								if (PAIRP(BgL_l3258z00_787))
									{	/* Write/ast.scm 51 */
										{	/* Write/ast.scm 53 */
											obj_t BgL_gz00_790;

											BgL_gz00_790 = CAR(BgL_l3258z00_787);
											{	/* Write/ast.scm 53 */
												BgL_valuez00_bglt BgL_funz00_791;

												{
													BgL_variablez00_bglt BgL_auxz00_1442;

													BgL_auxz00_1442 =
														(BgL_variablez00_bglt) (BgL_gz00_790);
													BgL_funz00_791 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_1442))->
														BgL_valuez00);
												}
												{	/* Write/ast.scm 54 */
													obj_t BgL_arg3268z00_792;

													BgL_arg3268z00_792 =
														BGl_shapez00zztools_shapez00(BgL_gz00_790);
													{	/* Write/ast.scm 54 */
														obj_t BgL_list3269z00_793;

														BgL_list3269z00_793 =
															MAKE_PAIR(BgL_arg3268z00_792, BNIL);
														BGl_writezd2schemezd2commentz00zzwrite_schemez00
															(BgL_portz00_1359, BgL_list3269z00_793);
													}
												}
												{	/* Write/ast.scm 56 */
													obj_t BgL_arg3270z00_794;

													BgL_arg3270z00_794 =
														BGl_functionzd2typezd2ze3stringze3zztype_pptypez00(
														(BgL_variablez00_bglt) (BgL_gz00_790));
													{	/* Write/ast.scm 55 */
														obj_t BgL_list3271z00_795;

														BgL_list3271z00_795 =
															MAKE_PAIR(BgL_arg3270z00_794, BNIL);
														BGl_writezd2schemezd2commentz00zzwrite_schemez00
															(BgL_portz00_1359, BgL_list3271z00_795);
													}
												}
												{	/* Write/ast.scm 57 */
													obj_t BgL_arg3272z00_796;

													BgL_arg3272z00_796 =
														BGl_makezd2sfunzd2sinfoz00zzwrite_astz00(
														(BgL_globalz00_bglt) (BgL_gz00_790));
													{	/* Write/ast.scm 57 */
														obj_t BgL_list3273z00_797;

														BgL_list3273z00_797 =
															MAKE_PAIR(BgL_arg3272z00_796, BNIL);
														BGl_writezd2schemezd2commentz00zzwrite_schemez00
															(BgL_portz00_1359, BgL_list3273z00_797);
													}
												}
												{	/* Write/ast.scm 58 */
													obj_t BgL_arg3274z00_798;

													{	/* Write/ast.scm 58 */
														obj_t BgL_arg3276z00_800;

														obj_t BgL_arg3277z00_801;

														{	/* Write/ast.scm 58 */
															obj_t BgL_casezd2valuezd2_802;

															{
																BgL_sfunz00_bglt BgL_auxz00_1456;

																BgL_auxz00_1456 =
																	(BgL_sfunz00_bglt) (BgL_funz00_791);
																BgL_casezd2valuezd2_802 =
																	(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1456))->
																	BgL_classz00);
															}
															if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																(BgL_casezd2valuezd2_802,
																	CNST_TABLE_REF(((long) 1))))
																{	/* Write/ast.scm 58 */
																	BgL_arg3276z00_800 =
																		CNST_TABLE_REF(((long) 2));
																}
															else
																{	/* Write/ast.scm 58 */
																	if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																		(BgL_casezd2valuezd2_802,
																			CNST_TABLE_REF(((long) 3))))
																		{	/* Write/ast.scm 58 */
																			BgL_arg3276z00_800 =
																				CNST_TABLE_REF(((long) 4));
																		}
																	else
																		{	/* Write/ast.scm 58 */
																			if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
																				(BgL_casezd2valuezd2_802,
																					CNST_TABLE_REF(((long) 5))))
																				{	/* Write/ast.scm 58 */
																					BgL_arg3276z00_800 =
																						CNST_TABLE_REF(((long) 6));
																				}
																			else
																				{	/* Write/ast.scm 58 */
																					BgL_arg3276z00_800 =
																						CNST_TABLE_REF(((long) 7));
														}}}}
														{	/* Write/ast.scm 67 */
															obj_t BgL_arg3281z00_808;

															obj_t BgL_arg3282z00_809;

															{	/* Write/ast.scm 67 */
																obj_t BgL_arg3286z00_813;

																obj_t BgL_arg3287z00_814;

																BgL_arg3286z00_813 =
																	BGl_shapez00zztools_shapez00(BgL_gz00_790);
																{	/* Write/ast.scm 69 */
																	obj_t BgL_arg3288z00_815;

																	long BgL_arg3289z00_816;

																	{	/* Write/ast.scm 69 */
																		obj_t BgL_l3252z00_817;

																		{
																			BgL_sfunz00_bglt BgL_auxz00_1473;

																			BgL_auxz00_1473 =
																				(BgL_sfunz00_bglt) (BgL_funz00_791);
																			BgL_l3252z00_817 =
																				(((BgL_sfunz00_bglt)
																					CREF(BgL_auxz00_1473))->BgL_argsz00);
																		}
																		if (NULLP(BgL_l3252z00_817))
																			{	/* Write/ast.scm 69 */
																				BgL_arg3288z00_815 = BNIL;
																			}
																		else
																			{	/* Write/ast.scm 69 */
																				obj_t BgL_head3254z00_819;

																				BgL_head3254z00_819 =
																					MAKE_PAIR(BGl_shapez00zztools_shapez00
																					(CAR(BgL_l3252z00_817)), BNIL);
																				{	/* Write/ast.scm 69 */
																					obj_t BgL_g3257z00_820;

																					BgL_g3257z00_820 =
																						CDR(BgL_l3252z00_817);
																					{
																						obj_t BgL_l3252z00_822;

																						obj_t BgL_tail3255z00_823;

																						BgL_l3252z00_822 = BgL_g3257z00_820;
																						BgL_tail3255z00_823 =
																							BgL_head3254z00_819;
																					BgL_zc3anonymousza33291ze3z83_824:
																						if (NULLP(BgL_l3252z00_822))
																							{	/* Write/ast.scm 69 */
																								BgL_arg3288z00_815 =
																									BgL_head3254z00_819;
																							}
																						else
																							{	/* Write/ast.scm 69 */
																								obj_t BgL_newtail3256z00_826;

																								BgL_newtail3256z00_826 =
																									MAKE_PAIR
																									(BGl_shapez00zztools_shapez00
																									(CAR(BgL_l3252z00_822)),
																									BNIL);
																								SET_CDR(BgL_tail3255z00_823,
																									BgL_newtail3256z00_826);
																								{
																									obj_t BgL_tail3255z00_1490;

																									obj_t BgL_l3252z00_1488;

																									BgL_l3252z00_1488 =
																										CDR(BgL_l3252z00_822);
																									BgL_tail3255z00_1490 =
																										BgL_newtail3256z00_826;
																									BgL_tail3255z00_823 =
																										BgL_tail3255z00_1490;
																									BgL_l3252z00_822 =
																										BgL_l3252z00_1488;
																									goto
																										BgL_zc3anonymousza33291ze3z83_824;
																								}
																							}
																					}
																				}
																			}
																	}
																	{
																		BgL_funz00_bglt BgL_auxz00_1491;

																		BgL_auxz00_1491 =
																			(BgL_funz00_bglt) (BgL_funz00_791);
																		BgL_arg3289z00_816 =
																			(((BgL_funz00_bglt)
																				CREF(BgL_auxz00_1491))->BgL_arityz00);
																	}
																	BgL_arg3287z00_814 =
																		BGl_argszd2listzd2ze3argsza2z41zztools_argsz00
																		(BgL_arg3288z00_815,
																		BINT(BgL_arg3289z00_816));
																}
																BgL_arg3281z00_808 =
																	MAKE_PAIR(BgL_arg3286z00_813,
																	BgL_arg3287z00_814);
															}
															{	/* Write/ast.scm 71 */
																obj_t BgL_arg3300z00_835;

																{
																	BgL_sfunz00_bglt BgL_auxz00_1497;

																	BgL_auxz00_1497 =
																		(BgL_sfunz00_bglt) (BgL_funz00_791);
																	BgL_arg3300z00_835 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_1497))->BgL_bodyz00);
																}
																BgL_arg3282z00_809 =
																	BGl_shapez00zztools_shapez00
																	(BgL_arg3300z00_835);
															}
															{	/* Write/ast.scm 58 */
																obj_t BgL_list3284z00_811;

																{	/* Write/ast.scm 58 */
																	obj_t BgL_arg3285z00_812;

																	BgL_arg3285z00_812 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3284z00_811 =
																		MAKE_PAIR(BgL_arg3282z00_809,
																		BgL_arg3285z00_812);
																}
																BgL_arg3277z00_801 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3281z00_808, BgL_list3284z00_811);
															}
														}
														BgL_arg3274z00_798 =
															MAKE_PAIR(BgL_arg3276z00_800, BgL_arg3277z00_801);
													}
													{	/* Write/ast.scm 58 */
														obj_t BgL_list3275z00_799;

														BgL_list3275z00_799 =
															MAKE_PAIR(BgL_portz00_1359, BNIL);
														BGl_ppz00zz__ppz00(BgL_arg3274z00_798,
															BgL_list3275z00_799);
													}
												}
											}
										}
										{
											obj_t BgL_l3258z00_1507;

											BgL_l3258z00_1507 = CDR(BgL_l3258z00_787);
											BgL_l3258z00_787 = BgL_l3258z00_1507;
											goto BgL_zc3anonymousza33266ze3z83_788;
										}
									}
								else
									{	/* Write/ast.scm 51 */
										BgL_val3248z00_784 = ((bool_t) 1);
									}
							}
							POP_EXIT();
							return BBOOL(BgL_val3248z00_784);
						}
					}
				}
		}
	}



/* _write-ast */
	obj_t BGl__writezd2astzd2zzwrite_astz00(obj_t BgL_envz00_1354,
		obj_t BgL_globalsz00_1355)
	{
		AN_OBJECT;
		{	/* Write/ast.scm 29 */
			return BGl_writezd2astzd2zzwrite_astz00(BgL_globalsz00_1355);
		}
	}



/* make-sfun-sinfo */
	obj_t BGl_makezd2sfunzd2sinfoz00zzwrite_astz00(BgL_globalz00_bglt BgL_gz00_2)
	{
		AN_OBJECT;
		{	/* Write/ast.scm 79 */
			{	/* Write/ast.scm 102 */
				BgL_valuez00_bglt BgL_sfunz00_849;

				{
					BgL_variablez00_bglt BgL_auxz00_1512;

					BgL_auxz00_1512 = (BgL_variablez00_bglt) (BgL_gz00_2);
					BgL_sfunz00_849 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1512))->BgL_valuez00);
				}
				{	/* Write/ast.scm 103 */
					obj_t BgL_arg3311z00_851;

					obj_t BgL_arg3313z00_853;

					obj_t BgL_arg3314z00_854;

					obj_t BgL_arg3316z00_856;

					obj_t BgL_arg3318z00_858;

					obj_t BgL_arg3320z00_860;

					obj_t BgL_arg3321z00_861;

					obj_t BgL_arg3325z00_863;

					if (CBOOL(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
						{	/* Write/ast.scm 105 */
							obj_t BgL_arg3342z00_880;

							BgL_arg3342z00_880 =
								(((BgL_globalz00_bglt) CREF(BgL_gz00_2))->BgL_importz00);
							{	/* Write/ast.scm 105 */
								obj_t BgL_res3414z00_1328;

								{	/* Write/ast.scm 105 */
									obj_t BgL_symbolz00_1326;

									BgL_symbolz00_1326 = BgL_arg3342z00_880;
									{	/* Write/ast.scm 105 */
										obj_t BgL_arg2063z00_1327;

										BgL_arg2063z00_1327 = SYMBOL_TO_STRING(BgL_symbolz00_1326);
										BgL_res3414z00_1328 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1327);
									}
								}
								BgL_arg3311z00_851 = BgL_res3414z00_1328;
							}
						}
					else
						{	/* Write/ast.scm 106 */
							obj_t BgL_arg3343z00_881;

							{	/* Write/ast.scm 106 */
								obj_t BgL_arg3345z00_882;

								BgL_arg3345z00_882 =
									(((BgL_globalz00_bglt) CREF(BgL_gz00_2))->BgL_importz00);
								{	/* Write/ast.scm 106 */
									obj_t BgL_res3415z00_1332;

									{	/* Write/ast.scm 106 */
										obj_t BgL_symbolz00_1330;

										BgL_symbolz00_1330 = BgL_arg3345z00_882;
										{	/* Write/ast.scm 106 */
											obj_t BgL_arg2063z00_1331;

											BgL_arg2063z00_1331 =
												SYMBOL_TO_STRING(BgL_symbolz00_1330);
											BgL_res3415z00_1332 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1331);
										}
									}
									BgL_arg3343z00_881 = BgL_res3415z00_1332;
								}
							}
							BgL_arg3311z00_851 =
								BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
								(BgL_arg3343z00_881);
						}
					{	/* Write/ast.scm 107 */
						obj_t BgL_arg3346z00_883;

						{
							BgL_funz00_bglt BgL_auxz00_1524;

							BgL_auxz00_1524 = (BgL_funz00_bglt) (BgL_sfunz00_849);
							BgL_arg3346z00_883 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_1524))->
								BgL_sidezd2effectzf3z21);
						}
						BgL_arg3313z00_853 =
							BGl_atomzd2ze3stringz31zzwrite_astz00(BgL_arg3346z00_883);
					}
					{	/* Write/ast.scm 108 */
						obj_t BgL_tz00_884;

						{
							BgL_funz00_bglt BgL_auxz00_1528;

							BgL_auxz00_1528 = (BgL_funz00_bglt) (BgL_sfunz00_849);
							BgL_tz00_884 =
								(((BgL_funz00_bglt) CREF(BgL_auxz00_1528))->
								BgL_predicatezd2ofzd2);
						}
						if (BGl_iszd2azf3z21zz__objectz00(BgL_tz00_884,
								BGl_typez00zztype_typez00))
							{	/* Write/ast.scm 109 */
								BgL_arg3314z00_854 =
									string_append(BGl_string3424z00zzwrite_astz00,
									BGl_atomzd2ze3stringz31zzwrite_astz00
									(BGl_shapez00zztools_shapez00(BgL_tz00_884)));
							}
						else
							{	/* Write/ast.scm 109 */
								BgL_arg3314z00_854 = BGl_string3425z00zzwrite_astz00;
							}
					}
					{	/* Write/ast.scm 113 */

						{	/* Write/ast.scm 113 */
							long BgL_auxz00_1536;

							{
								BgL_variablez00_bglt BgL_auxz00_1537;

								BgL_auxz00_1537 = (BgL_variablez00_bglt) (BgL_gz00_2);
								BgL_auxz00_1536 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1537))->
									BgL_occurrencez00);
							}
							BgL_arg3316z00_856 =
								BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
								(BgL_auxz00_1536, ((long) 10));
					}}
					{	/* Write/ast.scm 114 */
						obj_t BgL_arg3352z00_892;

						{
							BgL_variablez00_bglt BgL_auxz00_1541;

							BgL_auxz00_1541 = (BgL_variablez00_bglt) (BgL_gz00_2);
							BgL_arg3352z00_892 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1541))->
								BgL_removablez00);
						}
						BgL_arg3318z00_858 =
							BGl_atomzd2ze3stringz31zzwrite_astz00(BgL_arg3352z00_892);
					}
					{	/* Write/ast.scm 115 */
						obj_t BgL_pz00_893;

						{	/* Write/ast.scm 115 */

							{	/* Write/ast.scm 115 */

								BgL_pz00_893 =
									BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
						}}
						{	/* Write/ast.scm 116 */
							obj_t BgL_arg3353z00_894;

							{
								BgL_sfunz00_bglt BgL_auxz00_1546;

								BgL_auxz00_1546 = (BgL_sfunz00_bglt) (BgL_sfunz00_849);
								BgL_arg3353z00_894 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1546))->BgL_locz00);
							}
							bgl_display_obj(BgL_arg3353z00_894, BgL_pz00_893);
						}
						BgL_arg3320z00_860 = bgl_close_output_port(BgL_pz00_893);
					}
					if ((((BgL_globalz00_bglt) CREF(BgL_gz00_2))->BgL_userzf3zf3))
						{	/* Write/ast.scm 118 */
							BgL_arg3321z00_861 = BGl_string3426z00zzwrite_astz00;
						}
					else
						{	/* Write/ast.scm 118 */
							BgL_arg3321z00_861 = BGl_string3427z00zzwrite_astz00;
						}
					{	/* Write/ast.scm 123 */
						obj_t BgL_zc3anonymousza33356ze3z83_1356;

						BgL_zc3anonymousza33356ze3z83_1356 =
							make_fx_procedure(BGl_zc3anonymousza33356ze3z83zzwrite_astz00,
							(int) (((long) 0)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3anonymousza33356ze3z83_1356,
							(int) (((long) 0)), (obj_t) (BgL_gz00_2));
						BgL_arg3325z00_863 =
							BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
							(BgL_zc3anonymousza33356ze3z83_1356);
					}
					{	/* Write/ast.scm 103 */
						obj_t BgL_list3327z00_865;

						{	/* Write/ast.scm 103 */
							obj_t BgL_arg3328z00_866;

							{	/* Write/ast.scm 103 */
								obj_t BgL_arg3329z00_867;

								{	/* Write/ast.scm 103 */
									obj_t BgL_arg3330z00_868;

									{	/* Write/ast.scm 103 */
										obj_t BgL_arg3331z00_869;

										{	/* Write/ast.scm 103 */
											obj_t BgL_arg3332z00_870;

											{	/* Write/ast.scm 103 */
												obj_t BgL_arg3333z00_871;

												{	/* Write/ast.scm 103 */
													obj_t BgL_arg3334z00_872;

													{	/* Write/ast.scm 103 */
														obj_t BgL_arg3335z00_873;

														{	/* Write/ast.scm 103 */
															obj_t BgL_arg3336z00_874;

															{	/* Write/ast.scm 103 */
																obj_t BgL_arg3337z00_875;

																{	/* Write/ast.scm 103 */
																	obj_t BgL_arg3338z00_876;

																	{	/* Write/ast.scm 103 */
																		obj_t BgL_arg3339z00_877;

																		{	/* Write/ast.scm 103 */
																			obj_t BgL_arg3340z00_878;

																			{	/* Write/ast.scm 103 */
																				obj_t BgL_arg3341z00_879;

																				BgL_arg3341z00_879 =
																					MAKE_PAIR
																					(BGl_string3428z00zzwrite_astz00,
																					BNIL);
																				BgL_arg3340z00_878 =
																					MAKE_PAIR(BgL_arg3325z00_863,
																					BgL_arg3341z00_879);
																			}
																			BgL_arg3339z00_877 =
																				MAKE_PAIR
																				(BGl_string3429z00zzwrite_astz00,
																				BgL_arg3340z00_878);
																		}
																		BgL_arg3338z00_876 =
																			MAKE_PAIR(BgL_arg3321z00_861,
																			BgL_arg3339z00_877);
																	}
																	BgL_arg3337z00_875 =
																		MAKE_PAIR(BgL_arg3320z00_860,
																		BgL_arg3338z00_876);
																}
																BgL_arg3336z00_874 =
																	MAKE_PAIR(BGl_string3430z00zzwrite_astz00,
																	BgL_arg3337z00_875);
															}
															BgL_arg3335z00_873 =
																MAKE_PAIR(BgL_arg3318z00_858,
																BgL_arg3336z00_874);
														}
														BgL_arg3334z00_872 =
															MAKE_PAIR(BGl_string3431z00zzwrite_astz00,
															BgL_arg3335z00_873);
													}
													BgL_arg3333z00_871 =
														MAKE_PAIR(BgL_arg3316z00_856, BgL_arg3334z00_872);
												}
												BgL_arg3332z00_870 =
													MAKE_PAIR(BGl_string3432z00zzwrite_astz00,
													BgL_arg3333z00_871);
											}
											BgL_arg3331z00_869 =
												MAKE_PAIR(BgL_arg3314z00_854, BgL_arg3332z00_870);
										}
										BgL_arg3330z00_868 =
											MAKE_PAIR(BgL_arg3313z00_853, BgL_arg3331z00_869);
									}
									BgL_arg3329z00_867 =
										MAKE_PAIR(BGl_string3433z00zzwrite_astz00,
										BgL_arg3330z00_868);
								}
								BgL_arg3328z00_866 =
									MAKE_PAIR(BgL_arg3311z00_851, BgL_arg3329z00_867);
							}
							BgL_list3327z00_865 =
								MAKE_PAIR(BGl_string3434z00zzwrite_astz00, BgL_arg3328z00_866);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3327z00_865);
					}
				}
			}
		}
	}



/* atom->string */
	obj_t BGl_atomzd2ze3stringz31zzwrite_astz00(obj_t BgL_atomz00_902)
	{
		AN_OBJECT;
		{	/* Write/ast.scm 101 */
			{

				{	/* Write/ast.scm 81 */
					long BgL_aux3251z00_905;

					if (CNSTP(BgL_atomz00_902))
						{	/* Write/ast.scm 81 */
							BgL_aux3251z00_905 = CCNST(BgL_atomz00_902);
						}
					else
						{	/* Write/ast.scm 81 */
							BgL_aux3251z00_905 = ((long) -1);
						}
					switch (BgL_aux3251z00_905)
						{
						case ((long) 2):

							return BGl_string3435z00zzwrite_astz00;
							break;
						case ((long) 1):

							return BGl_string3436z00zzwrite_astz00;
							break;
						case ((long) 3):

							return BGl_string3437z00zzwrite_astz00;
							break;
						default:
							if (SYMBOLP(BgL_atomz00_902))
								{	/* Write/ast.scm 90 */
									if (CBOOL
										(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
										{	/* Write/ast.scm 92 */
											obj_t BgL_res3417z00_1348;

											{	/* Write/ast.scm 92 */
												obj_t BgL_symbolz00_1346;

												BgL_symbolz00_1346 = BgL_atomz00_902;
												{	/* Write/ast.scm 92 */
													obj_t BgL_arg2063z00_1347;

													BgL_arg2063z00_1347 =
														SYMBOL_TO_STRING(BgL_symbolz00_1346);
													BgL_res3417z00_1348 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1347);
												}
											}
											return BgL_res3417z00_1348;
										}
									else
										{	/* Write/ast.scm 93 */
											obj_t BgL_arg3363z00_910;

											{	/* Write/ast.scm 93 */
												obj_t BgL_res3418z00_1351;

												{	/* Write/ast.scm 93 */
													obj_t BgL_symbolz00_1349;

													BgL_symbolz00_1349 = BgL_atomz00_902;
													{	/* Write/ast.scm 93 */
														obj_t BgL_arg2063z00_1350;

														BgL_arg2063z00_1350 =
															SYMBOL_TO_STRING(BgL_symbolz00_1349);
														BgL_res3418z00_1351 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1350);
													}
												}
												BgL_arg3363z00_910 = BgL_res3418z00_1351;
											}
											return
												BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
												(BgL_arg3363z00_910);
										}
								}
							else
								{	/* Write/ast.scm 90 */
									if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_atomz00_902))
										{	/* Write/ast.scm 95 */

											return
												string_to_bstring
												(BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
												(BgL_atomz00_902, BINT(((long) 10))));
										}
									else
										{	/* Write/ast.scm 94 */
											if (STRINGP(BgL_atomz00_902))
												{	/* Write/ast.scm 96 */
													return BgL_atomz00_902;
												}
											else
												{	/* Write/ast.scm 99 */
													obj_t BgL_pz00_915;

													{	/* Write/ast.scm 99 */

														{	/* Write/ast.scm 99 */

															BgL_pz00_915 =
																BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																(BTRUE);
														}
													}
													bgl_display_obj(BgL_atomz00_902, BgL_pz00_915);
													return bgl_close_output_port(BgL_pz00_915);
												}
										}
								}
						}
				}
			}
		}
	}



/* <anonymous:3356> */
	obj_t BGl_zc3anonymousza33356ze3z83zzwrite_astz00(obj_t BgL_envz00_1357)
	{
		AN_OBJECT;
		{	/* Write/ast.scm 122 */
			{	/* Write/ast.scm 123 */
				obj_t BgL_gz00_1358;

				BgL_gz00_1358 = PROCEDURE_REF(BgL_envz00_1357, (int) (((long) 0)));
				{

					{	/* Write/ast.scm 123 */
						obj_t BgL_arg3357z00_899;

						obj_t BgL_arg3358z00_900;

						{
							BgL_variablez00_bglt BgL_auxz00_1601;

							BgL_auxz00_1601 = (BgL_variablez00_bglt) (BgL_gz00_1358);
							BgL_arg3357z00_899 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1601))->
								BgL_removablez00);
						}
						{	/* Write/ast.scm 123 */
							obj_t BgL_res3416z00_1343;

							{	/* Write/ast.scm 123 */
								obj_t BgL_auxz00_1604;

								BgL_auxz00_1604 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3416z00_1343 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1604);
							}
							BgL_arg3358z00_900 = BgL_res3416z00_1343;
						}
						return bgl_display_obj(BgL_arg3357z00_899, BgL_arg3358z00_900);
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_astz00()
	{
		AN_OBJECT;
		{	/* Write/ast.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_astz00()
	{
		AN_OBJECT;
		{	/* Write/ast.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_astz00()
	{
		AN_OBJECT;
		{	/* Write/ast.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 242728873),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztype_pptypez00(((long) 366837795),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
			return
				BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string3438z00zzwrite_astz00));
		}
	}

#ifdef __cplusplus
}
#endif
