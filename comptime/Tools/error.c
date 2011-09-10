/*===========================================================================*/
/*   (Tools/error.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/error.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;

	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;


	BGL_IMPORT BgL_z62errorz62_bglt BGl_makezd2z62errorzb0zz__objectz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2tracezd2portza2zd2zztools_tracez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_sharpzd2symbolzd2zztools_errorz00 = BUNSPEC;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl__userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zztools_errorz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_nozd2warningzd2zztools_errorz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_za2bigloozd2emailza2zd2zzengine_paramz00;
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_EXPORTED_DECL obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza33302ze3z83zztools_errorz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_zc3anonymousza33298ze3z83zztools_errorz00(obj_t, obj_t);
	static obj_t BGl_za2sfunzd2stackza2zd2zztools_errorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zztools_errorz00();
	static obj_t BGl_zc3exitza33295ze3z83zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_z62errorzf3z91zz__objectz00(obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	static obj_t BGl__enterzd2functionzd2zztools_errorz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_errorz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	static obj_t BGl__nozd2warningzd2zztools_errorz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
		BUNSPEC;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztools_errorz00();
	static obj_t BGl__userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__leavezd2functionzd2zztools_errorz00(obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_EXPORTED_DECL obj_t BGl_userzd2errorzd2notifyz00zztools_errorz00(obj_t,
		obj_t);
	static obj_t BGl__internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__userzd2errorzd2notifyz00zztools_errorz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__currentzd2functionzd2zztools_errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	BGL_IMPORT obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_errorz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_userzd2errorzd2notifyzd2envzd2zztools_errorz00,
		BgL_bgl__userza7d2errorza7d23387z00,
		BGl__userzd2errorzd2notifyz00zztools_errorz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2errorzd2envz00zztools_errorz00,
		BgL_bgl__userza7d2errorza7d23388z00, va_generic_entry,
		BGl__userzd2errorzd2zztools_errorz00, BUNSPEC, -4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nozd2warningzd2envz00zztools_errorz00,
		BgL_bgl__noza7d2warningza7d23389z00, BGl__nozd2warningzd2zztools_errorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_leavezd2functionzd2envz00zztools_errorz00,
		BgL_bgl__leaveza7d2functio3390za7, BGl__leavezd2functionzd2zztools_errorz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_userzd2errorzf2locationzd2envzf2zztools_errorz00,
		BgL_bgl__userza7d2errorza7f23391z00, va_generic_entry,
		BGl__userzd2errorzf2locationz20zztools_errorz00, BUNSPEC, -5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_userzd2warningzf2locationzd2envzf2zztools_errorz00,
		BgL_bgl__userza7d2warningza73392z00,
		BGl__userzd2warningzf2locationz20zztools_errorz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2warningzd2envz00zztools_errorz00,
		BgL_bgl__userza7d2warningza73393z00, BGl__userzd2warningzd2zztools_errorz00,
		0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2functionzd2envz00zztools_errorz00,
		BgL_bgl__currentza7d2funct3394za7,
		BGl__currentzd2functionzd2zztools_errorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_enterzd2functionzd2envz00zztools_errorz00,
		BgL_bgl__enterza7d2functio3395za7, BGl__enterzd2functionzd2zztools_errorz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_internalzd2errorzd2envz00zztools_errorz00,
		BgL_bgl__internalza7d2erro3396za7, BGl__internalzd2errorzd2zztools_errorz00,
		0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3373z00zztools_errorz00,
		BgL_bgl_string3373za700za7za7t3397za7, "#", 1);
	      DEFINE_STRING(BGl_string3374z00zztools_errorz00,
		BgL_bgl_string3374za700za7za7t3398za7, "*** ERROR: ", 11);
	      DEFINE_STRING(BGl_string3375z00zztools_errorz00,
		BgL_bgl_string3375za700za7za7t3399za7, ":", 1);
	      DEFINE_STRING(BGl_string3376z00zztools_errorz00,
		BgL_bgl_string3376za700za7za7t3400za7, "*** INTERNAL-ERROR in pass: ", 28);
	      DEFINE_STRING(BGl_string3377z00zztools_errorz00,
		BgL_bgl_string3377za700za7za7t3401za7,
		"(Would you, please, send this error report and the source file to", 65);
	      DEFINE_STRING(BGl_string3378z00zztools_errorz00,
		BgL_bgl_string3378za700za7za7t3402za7, " [", 2);
	      DEFINE_STRING(BGl_string3380z00zztools_errorz00,
		BgL_bgl_string3380za700za7za7t3403za7, " -- ", 4);
	      DEFINE_STRING(BGl_string3379z00zztools_errorz00,
		BgL_bgl_string3379za700za7za7t3404za7, "], thank you.)", 14);
	      DEFINE_STRING(BGl_string3381z00zztools_errorz00,
		BgL_bgl_string3381za700za7za7t3405za7, "*** ERROR:", 10);
	      DEFINE_STRING(BGl_string3382z00zztools_errorz00,
		BgL_bgl_string3382za700za7za7t3406za7, " ...", 4);
	      DEFINE_STRING(BGl_string3383z00zztools_errorz00,
		BgL_bgl_string3383za700za7za7t3407za7, "tools_error", 11);
	      DEFINE_STRING(BGl_string3384z00zztools_errorz00,
		BgL_bgl_string3384za700za7za7t3408za7, "location (top-level) ", 21);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long
		BgL_checksumz00_1442, char *BgL_fromz00_1443)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_errorz00))
				{
					BGl_requirezd2initializa7ationz75zztools_errorz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_errorz00();
					BGl_cnstzd2initzd2zztools_errorz00();
					BGl_importedzd2moduleszd2initz00zztools_errorz00();
					BGl_toplevelzd2initzd2zztools_errorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_error");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 15 */
			{	/* Tools/error.scm 15 */
				obj_t BgL_cportz00_1434;

				BgL_cportz00_1434 =
					bgl_open_input_string(BGl_string3384z00zztools_errorz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1435;

					BgL_iz00_1435 = ((long) 1);
				BgL_loopz00_1436:
					if ((BgL_iz00_1435 == ((long) -1)))
						{	/* Tools/error.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/error.scm 15 */
							{	/* Tools/error.scm 15 */
								obj_t BgL_arg3386z00_1438;

								{	/* Tools/error.scm 15 */

									{	/* Tools/error.scm 15 */
										obj_t BgL_locationz00_1440;

										BgL_locationz00_1440 = BBOOL(((bool_t) 0));
										{	/* Tools/error.scm 15 */

											BgL_arg3386z00_1438 =
												BGl_readz00zz__readerz00(BgL_cportz00_1434,
												BgL_locationz00_1440);
										}
									}
								}
								{	/* Tools/error.scm 15 */
									int BgL_auxz00_1466;

									BgL_auxz00_1466 = (int) (BgL_iz00_1435);
									CNST_TABLE_SET(BgL_auxz00_1466, BgL_arg3386z00_1438);
							}}
							{	/* Tools/error.scm 15 */
								int BgL_auxz00_1441;

								BgL_auxz00_1441 = (int) ((BgL_iz00_1435 - ((long) 1)));
								{
									long BgL_iz00_1471;

									BgL_iz00_1471 = (long) (BgL_auxz00_1441);
									BgL_iz00_1435 = BgL_iz00_1471;
									goto BgL_loopz00_1436;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 15 */
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2sfunzd2stackza2zd2zztools_errorz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_sharpzd2symbolzd2zztools_errorz00 =
				string_to_symbol(BSTRING_TO_STRING(BGl_string3373z00zztools_errorz00)),
				BUNSPEC);
		}
	}



/* internal-error */
	BGL_EXPORTED_DEF obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t
		BgL_procz00_15, obj_t BgL_mesz00_16, obj_t BgL_objz00_17)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 45 */
			if (OUTPUT_PORTP(BGl_za2tracezd2portza2zd2zztools_tracez00))
				{	/* Tools/error.scm 47 */
					obj_t BgL_port3249z00_821;

					BgL_port3249z00_821 = BGl_za2tracezd2portza2zd2zztools_tracez00;
					bgl_display_string(BGl_string3374z00zztools_errorz00,
						BgL_port3249z00_821);
					bgl_display_obj(BgL_procz00_15, BgL_port3249z00_821);
					bgl_display_string(BGl_string3375z00zztools_errorz00,
						BgL_port3249z00_821);
					bgl_display_obj(BgL_mesz00_16, BgL_port3249z00_821);
					bgl_display_string(BGl_string3375z00zztools_errorz00,
						BgL_port3249z00_821);
					bgl_display_obj(BgL_objz00_17, BgL_port3249z00_821);
					bgl_display_char(((unsigned char) '\n'), BgL_port3249z00_821);
				}
			else
				{	/* Tools/error.scm 46 */
					BFALSE;
				}
			{	/* Tools/error.scm 48 */
				obj_t BgL_port3250z00_822;

				{	/* Tools/error.scm 48 */
					obj_t BgL_res3366z00_1295;

					{	/* Tools/error.scm 48 */
						obj_t BgL_auxz00_1486;

						BgL_auxz00_1486 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3366z00_1295 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1486);
					}
					BgL_port3250z00_822 = BgL_res3366z00_1295;
				}
				bgl_display_string(BGl_string3376z00zztools_errorz00,
					BgL_port3250z00_822);
				bgl_display_obj(BGl_za2currentzd2passza2zd2zzengine_passz00,
					BgL_port3250z00_822);
				bgl_display_char(((unsigned char) '\n'), BgL_port3250z00_822);
			}
			{	/* Tools/error.scm 50 */
				obj_t BgL_port3251z00_823;

				{	/* Tools/error.scm 50 */
					obj_t BgL_res3367z00_1300;

					{	/* Tools/error.scm 50 */
						obj_t BgL_auxz00_1492;

						BgL_auxz00_1492 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res3367z00_1300 = BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1492);
					}
					BgL_port3251z00_823 = BgL_res3367z00_1300;
				}
				bgl_display_string(BGl_string3377z00zztools_errorz00,
					BgL_port3251z00_823);
				bgl_display_char(((unsigned char) '\n'), BgL_port3251z00_823);
				bgl_display_obj(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
					BgL_port3251z00_823);
				bgl_display_string(BGl_string3378z00zztools_errorz00,
					BgL_port3251z00_823);
				bgl_display_obj(BGl_za2bigloozd2emailza2zd2zzengine_paramz00,
					BgL_port3251z00_823);
				bgl_display_string(BGl_string3379z00zztools_errorz00,
					BgL_port3251z00_823);
				bgl_display_char(((unsigned char) '\n'), BgL_port3251z00_823);
			}
			BGl_errorz00zz__errorz00(BgL_procz00_15, BgL_mesz00_16, BgL_objz00_17);
			return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 1)));
		}
	}



/* _internal-error */
	obj_t BGl__internalzd2errorzd2zztools_errorz00(obj_t BgL_envz00_1384,
		obj_t BgL_procz00_1385, obj_t BgL_mesz00_1386, obj_t BgL_objz00_1387)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 45 */
			return
				BGl_internalzd2errorzd2zztools_errorz00(BgL_procz00_1385,
				BgL_mesz00_1386, BgL_objz00_1387);
		}
	}



/* user-warning/location */
	BGL_EXPORTED_DEF obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t
		BgL_locz00_18, obj_t BgL_procz00_19, obj_t BgL_mesz00_20,
		obj_t BgL_objz00_21)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 60 */
			{	/* Tools/error.scm 61 */
				bool_t BgL_testz00_1506;

				if (STRUCTP(BgL_locz00_18))
					{	/* Tools/error.scm 61 */
						BgL_testz00_1506 =
							(STRUCT_KEY(BgL_locz00_18) == CNST_TABLE_REF(((long) 1)));
					}
				else
					{	/* Tools/error.scm 61 */
						BgL_testz00_1506 = ((bool_t) 0);
					}
				if (BgL_testz00_1506)
					{	/* Tools/error.scm 63 */
						obj_t BgL_arg3264z00_825;

						obj_t BgL_arg3265z00_826;

						BgL_arg3264z00_825 =
							BGl_locationzd2fullzd2fnamez00zztools_locationz00(BgL_locz00_18);
						BgL_arg3265z00_826 = STRUCT_REF(BgL_locz00_18, (int) (((long) 1)));
						{	/* Tools/error.scm 63 */
							obj_t BgL_list3267z00_828;

							{	/* Tools/error.scm 63 */
								obj_t BgL_arg3268z00_829;

								{	/* Tools/error.scm 63 */
									obj_t BgL_arg3269z00_830;

									{	/* Tools/error.scm 63 */
										obj_t BgL_arg3270z00_831;

										BgL_arg3270z00_831 = MAKE_PAIR(BgL_objz00_21, BNIL);
										BgL_arg3269z00_830 =
											MAKE_PAIR(BGl_string3380z00zztools_errorz00,
											BgL_arg3270z00_831);
									}
									BgL_arg3268z00_829 =
										MAKE_PAIR(BgL_mesz00_20, BgL_arg3269z00_830);
								}
								BgL_list3267z00_828 =
									MAKE_PAIR(BgL_procz00_19, BgL_arg3268z00_829);
							}
							return
								BGl_warningzf2locationzf2zz__errorz00(BgL_arg3264z00_825,
								BgL_arg3265z00_826, BgL_list3267z00_828);
						}
					}
				else
					{	/* Tools/error.scm 62 */
						obj_t BgL_list3271z00_832;

						{	/* Tools/error.scm 62 */
							obj_t BgL_arg3272z00_833;

							{	/* Tools/error.scm 62 */
								obj_t BgL_arg3273z00_834;

								{	/* Tools/error.scm 62 */
									obj_t BgL_arg3275z00_836;

									BgL_arg3275z00_836 = MAKE_PAIR(BgL_objz00_21, BNIL);
									BgL_arg3273z00_834 =
										MAKE_PAIR(BGl_string3380z00zztools_errorz00,
										BgL_arg3275z00_836);
								}
								BgL_arg3272z00_833 =
									MAKE_PAIR(BgL_mesz00_20, BgL_arg3273z00_834);
							}
							BgL_list3271z00_832 =
								MAKE_PAIR(BgL_procz00_19, BgL_arg3272z00_833);
						}
						return BGl_warningz00zz__errorz00(BgL_list3271z00_832);
					}
			}
		}
	}



/* _user-warning/location */
	obj_t BGl__userzd2warningzf2locationz20zztools_errorz00(obj_t BgL_envz00_1388,
		obj_t BgL_locz00_1389, obj_t BgL_procz00_1390, obj_t BgL_mesz00_1391,
		obj_t BgL_objz00_1392)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 60 */
			return
				BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_1389,
				BgL_procz00_1390, BgL_mesz00_1391, BgL_objz00_1392);
		}
	}



/* user-warning */
	BGL_EXPORTED_DEF obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t
		BgL_procz00_22, obj_t BgL_mesz00_23, obj_t BgL_objz00_24)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 73 */
			return
				BGl_userzd2warningzf2locationz20zztools_errorz00
				(BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_24),
				BgL_procz00_22, BgL_mesz00_23, BgL_objz00_24);
		}
	}



/* _user-warning */
	obj_t BGl__userzd2warningzd2zztools_errorz00(obj_t BgL_envz00_1393,
		obj_t BgL_procz00_1394, obj_t BgL_mesz00_1395, obj_t BgL_objz00_1396)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 73 */
			return
				BGl_userzd2warningzd2zztools_errorz00(BgL_procz00_1394, BgL_mesz00_1395,
				BgL_objz00_1396);
		}
	}



/* no-warning */
	BGL_EXPORTED_DEF obj_t BGl_nozd2warningzd2zztools_errorz00(obj_t
		BgL_thunkz00_25)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 79 */
			{	/* Tools/error.scm 80 */
				int BgL_warningz00_838;

				BgL_warningz00_838 = BGl_bigloozd2warningzd2zz__paramz00();
				BGl_bigloozd2warningzd2setz12z12zz__paramz00((int) (((long) 0)));
				{	/* Tools/error.scm 82 */
					obj_t BgL_valz00_839;

					BgL_valz00_839 =
						PROCEDURE_ENTRY(BgL_thunkz00_25) (BgL_thunkz00_25, BEOA);
					BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_warningz00_838);
					return BgL_valz00_839;
				}
			}
		}
	}



/* _no-warning */
	obj_t BGl__nozd2warningzd2zztools_errorz00(obj_t BgL_envz00_1397,
		obj_t BgL_thunkz00_1398)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 79 */
			return BGl_nozd2warningzd2zztools_errorz00(BgL_thunkz00_1398);
		}
	}



/* user-error-notify */
	BGL_EXPORTED_DEF obj_t BGl_userzd2errorzd2notifyz00zztools_errorz00(obj_t
		BgL_ez00_26, obj_t BgL_procz00_27)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 89 */
			if (BGl_z62errorzf3z91zz__objectz00(BgL_ez00_26))
				{	/* Tools/error.scm 91 */
					obj_t BgL_objz00_841;

					{
						BgL_z62errorz62_bglt BgL_auxz00_1538;

						BgL_auxz00_1538 = (BgL_z62errorz62_bglt) (BgL_ez00_26);
						BgL_objz00_841 =
							(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_1538))->BgL_objz00);
					}
					{	/* Tools/error.scm 91 */
						obj_t BgL_locz00_842;

						BgL_locz00_842 =
							BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_841);
						{	/* Tools/error.scm 92 */
							obj_t BgL_pz00_843;

							{
								BgL_z62errorz62_bglt BgL_auxz00_1542;

								BgL_auxz00_1542 = (BgL_z62errorz62_bglt) (BgL_ez00_26);
								BgL_pz00_843 =
									(((BgL_z62errorz62_bglt) CREF(BgL_auxz00_1542))->BgL_procz00);
							}
							{	/* Tools/error.scm 93 */

								{	/* Tools/error.scm 94 */
									long BgL_za71za7_1323;

									BgL_za71za7_1323 =
										(long)
										CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00);
									BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
										BINT((BgL_za71za7_1323 + ((long) 1)));
								}
								{	/* Tools/error.scm 95 */
									bool_t BgL_testz00_1548;

									if (STRUCTP(BgL_locz00_842))
										{	/* Tools/error.scm 95 */
											BgL_testz00_1548 =
												(STRUCT_KEY(BgL_locz00_842) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Tools/error.scm 95 */
											BgL_testz00_1548 = ((bool_t) 0);
										}
									if (BgL_testz00_1548)
										{	/* Tools/error.scm 96 */
											BgL_z62errorz62_bglt BgL_arg3279z00_845;

											{	/* Tools/error.scm 96 */
												BgL_z62errorz62_bglt BgL_duplicated3242z00_846;

												BgL_duplicated3242z00_846 =
													(BgL_z62errorz62_bglt) (BgL_ez00_26);
												{	/* Tools/error.scm 98 */
													BgL_z62errorz62_bglt BgL_new3243z00_847;

													{	/* Tools/error.scm 98 */
														obj_t BgL_arg3280z00_848;

														obj_t BgL_arg3281z00_849;

														obj_t BgL_arg3282z00_850;

														obj_t BgL_arg3283z00_851;

														obj_t BgL_arg3284z00_852;

														obj_t BgL_arg3285z00_853;

														BgL_arg3280z00_848 =
															BGl_locationzd2fullzd2fnamez00zztools_locationz00
															(BgL_locz00_842);
														BgL_arg3281z00_849 =
															STRUCT_REF(BgL_locz00_842, (int) (((long) 1)));
														{
															BgL_z62exceptionz62_bglt BgL_auxz00_1558;

															BgL_auxz00_1558 =
																(BgL_z62exceptionz62_bglt)
																(BgL_duplicated3242z00_846);
															BgL_arg3282z00_850 =
																(((BgL_z62exceptionz62_bglt)
																	CREF(BgL_auxz00_1558))->BgL_stackz00);
														}
														if (CBOOL(BgL_pz00_843))
															{	/* Tools/error.scm 97 */
																BgL_arg3283z00_851 = BgL_pz00_843;
															}
														else
															{	/* Tools/error.scm 97 */
																BgL_arg3283z00_851 = BgL_procz00_27;
															}
														BgL_arg3284z00_852 =
															(((BgL_z62errorz62_bglt)
																CREF(BgL_duplicated3242z00_846))->BgL_msgz00);
														BgL_arg3285z00_853 =
															(((BgL_z62errorz62_bglt)
																CREF(BgL_duplicated3242z00_846))->BgL_objz00);
														BgL_new3243z00_847 =
															BGl_makezd2z62errorzb0zz__objectz00
															(BgL_arg3280z00_848, BgL_arg3281z00_849,
															BgL_arg3282z00_850, BgL_arg3283z00_851,
															BgL_arg3284z00_852, BgL_arg3285z00_853);
													}
													{	/* Tools/error.scm 96 */

														BgL_arg3279z00_845 = BgL_new3243z00_847;
													}
												}
											}
											return
												BGl_errorzd2notifyzd2zz__errorz00(
												(obj_t) (BgL_arg3279z00_845));
										}
									else
										{	/* Tools/error.scm 95 */
											return BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_26);
										}
								}
							}
						}
					}
				}
			else
				{	/* Tools/error.scm 90 */
					return BFALSE;
				}
		}
	}



/* _user-error-notify */
	obj_t BGl__userzd2errorzd2notifyz00zztools_errorz00(obj_t BgL_envz00_1399,
		obj_t BgL_ez00_1400, obj_t BgL_procz00_1401)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 89 */
			return
				BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_1400,
				BgL_procz00_1401);
		}
	}



/* user-error */
	BGL_EXPORTED_DEF obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t
		BgL_procz00_28, obj_t BgL_mesz00_29, obj_t BgL_objz00_30,
		obj_t BgL_continuez00_31)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 105 */
			if (PAIRP(BgL_continuez00_31))
				{	/* Tools/error.scm 107 */
					obj_t BgL_arg3287z00_856;

					obj_t BgL_arg3288z00_857;

					obj_t BgL_arg3289z00_858;

					BgL_arg3287z00_856 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_30);
					BgL_arg3288z00_857 = BGl_shapez00zztools_shapez00(BgL_objz00_30);
					BgL_arg3289z00_858 = CAR(BgL_continuez00_31);
					{	/* Tools/error.scm 107 */
						obj_t BgL_list3290z00_859;

						BgL_list3290z00_859 = MAKE_PAIR(BgL_arg3289z00_858, BNIL);
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_arg3287z00_856,
							BgL_procz00_28, BgL_mesz00_29, BgL_arg3288z00_857,
							BgL_list3290z00_859);
					}
				}
			else
				{	/* Tools/error.scm 106 */
					return
						BGl_userzd2errorzf2locationz20zztools_errorz00
						(BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_30),
						BgL_procz00_28, BgL_mesz00_29,
						BGl_shapez00zztools_shapez00(BgL_objz00_30), BNIL);
				}
		}
	}



/* _user-error */
	obj_t BGl__userzd2errorzd2zztools_errorz00(obj_t BgL_envz00_1402,
		obj_t BgL_procz00_1403, obj_t BgL_mesz00_1404, obj_t BgL_objz00_1405,
		obj_t BgL_continuez00_1406)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 105 */
			return
				BGl_userzd2errorzd2zztools_errorz00(BgL_procz00_1403, BgL_mesz00_1404,
				BgL_objz00_1405, BgL_continuez00_1406);
		}
	}



/* user-error/location */
	BGL_EXPORTED_DEF obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t
		BgL_locz00_32, obj_t BgL_procz00_33, obj_t BgL_msgz00_34,
		obj_t BgL_objz00_35, obj_t BgL_continuez00_36)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 114 */
			if (OUTPUT_PORTP(BGl_za2tracezd2portza2zd2zztools_tracez00))
				{	/* Tools/error.scm 116 */
					obj_t BgL_port3252z00_864;

					BgL_port3252z00_864 = BGl_za2tracezd2portza2zd2zztools_tracez00;
					bgl_display_string(BGl_string3381z00zztools_errorz00,
						BgL_port3252z00_864);
					bgl_display_obj(BgL_procz00_33, BgL_port3252z00_864);
					bgl_display_string(BGl_string3375z00zztools_errorz00,
						BgL_port3252z00_864);
					bgl_display_obj(BgL_msgz00_34, BgL_port3252z00_864);
					bgl_display_string(BGl_string3375z00zztools_errorz00,
						BgL_port3252z00_864);
					bgl_display_obj(BgL_objz00_35, BgL_port3252z00_864);
					bgl_display_char(((unsigned char) '\n'), BgL_port3252z00_864);
				}
			else
				{	/* Tools/error.scm 115 */
					BFALSE;
				}
			{	/* Tools/error.scm 117 */
				long BgL_za71za7_1348;

				BgL_za71za7_1348 =
					(long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00);
				BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
					BINT((BgL_za71za7_1348 + ((long) 1)));
			}
			{	/* Tools/error.scm 118 */
				obj_t BgL_proczd2stringzd2_865;

				if (STRINGP(BgL_procz00_33))
					{	/* Tools/error.scm 119 */
						BgL_proczd2stringzd2_865 = BgL_procz00_33;
					}
				else
					{	/* Tools/error.scm 119 */
						if (SYMBOLP(BgL_procz00_33))
							{	/* Tools/error.scm 122 */
								obj_t BgL_res3370z00_1354;

								{	/* Tools/error.scm 122 */
									obj_t BgL_symbolz00_1352;

									BgL_symbolz00_1352 = BgL_procz00_33;
									{	/* Tools/error.scm 122 */
										obj_t BgL_arg2063z00_1353;

										BgL_arg2063z00_1353 = SYMBOL_TO_STRING(BgL_symbolz00_1352);
										BgL_res3370z00_1354 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1353);
									}
								}
								BgL_proczd2stringzd2_865 = BgL_res3370z00_1354;
							}
						else
							{	/* Tools/error.scm 121 */
								BgL_proczd2stringzd2_865 = BFALSE;
							}
					}
				{	/* Tools/error.scm 118 */
					obj_t BgL_funzd2stringzd2_866;

					{	/* Tools/error.scm 125 */
						obj_t BgL_arg3312z00_899;

						BgL_arg3312z00_899 = CAR(BGl_za2sfunzd2stackza2zd2zztools_errorz00);
						{	/* Tools/error.scm 125 */
							obj_t BgL_res3371z00_1358;

							{	/* Tools/error.scm 125 */
								obj_t BgL_symbolz00_1356;

								BgL_symbolz00_1356 = BgL_arg3312z00_899;
								{	/* Tools/error.scm 125 */
									obj_t BgL_arg2063z00_1357;

									BgL_arg2063z00_1357 = SYMBOL_TO_STRING(BgL_symbolz00_1356);
									BgL_res3371z00_1358 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1357);
								}
							}
							BgL_funzd2stringzd2_866 = BgL_res3371z00_1358;
						}
					}
					{	/* Tools/error.scm 125 */
						obj_t BgL_procz00_867;

						{	/* Tools/error.scm 126 */
							bool_t BgL_testz00_1602;

							if (STRINGP(BgL_proczd2stringzd2_865))
								{	/* Tools/error.scm 126 */
									if (bigloo_strcmp(BgL_proczd2stringzd2_865,
											BgL_funzd2stringzd2_866))
										{	/* Tools/error.scm 127 */
											BgL_testz00_1602 = ((bool_t) 0);
										}
									else
										{	/* Tools/error.scm 127 */
											BgL_testz00_1602 = ((bool_t) 1);
										}
								}
							else
								{	/* Tools/error.scm 126 */
									BgL_testz00_1602 = ((bool_t) 0);
								}
							if (BgL_testz00_1602)
								{	/* Tools/error.scm 126 */
									BgL_procz00_867 =
										string_append_3(BgL_funzd2stringzd2_866,
										BGl_string3375z00zztools_errorz00,
										BgL_proczd2stringzd2_865);
								}
							else
								{	/* Tools/error.scm 126 */
									BgL_procz00_867 = BgL_funzd2stringzd2_866;
								}
						}
						{	/* Tools/error.scm 126 */
							obj_t BgL_objzd2prnzd2_868;

							{	/* Tools/error.scm 130 */
								obj_t BgL_portz00_888;

								{	/* Tools/error.scm 130 */

									{	/* Tools/error.scm 130 */

										BgL_portz00_888 =
											BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
											(BTRUE);
									}
								}
								BGl_displayzd2circlezd2zz__pp_circlez00(BgL_objz00_35,
									BgL_portz00_888);
								{	/* Tools/error.scm 132 */
									obj_t BgL_stringz00_889;

									BgL_stringz00_889 = bgl_close_output_port(BgL_portz00_888);
									if ((STRING_LENGTH(BgL_stringz00_889) > ((long) 45)))
										{	/* Tools/error.scm 133 */
											BgL_objzd2prnzd2_868 =
												string_append(c_substring(BgL_stringz00_889, ((long) 0),
													((long) 44)), BGl_string3382z00zztools_errorz00);
										}
									else
										{	/* Tools/error.scm 133 */
											BgL_objzd2prnzd2_868 = BgL_stringz00_889;
										}
								}
							}
							{	/* Tools/error.scm 130 */

								return
									BGl_zc3exitza33295ze3z83zztools_errorz00(BgL_continuez00_36,
									BgL_locz00_32, BgL_objzd2prnzd2_868, BgL_msgz00_34,
									BgL_procz00_867);
							}
						}
					}
				}
			}
		}
	}



/* <exit:3295> */
	obj_t BGl_zc3exitza33295ze3z83zztools_errorz00(obj_t BgL_continuez00_1432,
		obj_t BgL_locz00_1431, obj_t BgL_objzd2prnzd2_1430, obj_t BgL_msgz00_1429,
		obj_t BgL_procz00_1428)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 136 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit3245z00_870;

			if (SET_EXIT(BgL_an_exit3245z00_870))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit3245z00_870 = (void *) jmpbuf;
					{	/* Tools/error.scm 136 */

						PUSH_EXIT(BgL_an_exit3245z00_870, ((long) 1));
						{	/* Tools/error.scm 136 */
							obj_t BgL_an_exitd3246z00_871;

							BgL_an_exitd3246z00_871 = BGL_EXITD_TOP_AS_OBJ();
							{	/* Tools/error.scm 139 */
								obj_t BgL_res3248z00_874;

								{	/* Tools/error.scm 139 */
									obj_t BgL_zc3anonymousza33302ze3z83_1407;

									obj_t BgL_zc3anonymousza33298ze3z83_1408;

									BgL_zc3anonymousza33302ze3z83_1407 =
										make_fx_procedure
										(BGl_zc3anonymousza33302ze3z83zztools_errorz00,
										(int) (((long) 0)), (int) (((long) 4)));
									BgL_zc3anonymousza33298ze3z83_1408 =
										make_fx_procedure
										(BGl_zc3anonymousza33298ze3z83zztools_errorz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3anonymousza33302ze3z83_1407,
										(int) (((long) 0)), BgL_procz00_1428);
									PROCEDURE_SET(BgL_zc3anonymousza33302ze3z83_1407,
										(int) (((long) 1)), BgL_msgz00_1429);
									PROCEDURE_SET(BgL_zc3anonymousza33302ze3z83_1407,
										(int) (((long) 2)), BgL_objzd2prnzd2_1430);
									PROCEDURE_SET(BgL_zc3anonymousza33302ze3z83_1407,
										(int) (((long) 3)), BgL_locz00_1431);
									PROCEDURE_SET(BgL_zc3anonymousza33298ze3z83_1408,
										(int) (((long) 0)), BgL_continuez00_1432);
									PROCEDURE_SET(BgL_zc3anonymousza33298ze3z83_1408,
										(int) (((long) 1)), BgL_an_exitd3246z00_871);
									BgL_res3248z00_874 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3anonymousza33298ze3z83_1408,
										BgL_zc3anonymousza33302ze3z83_1407);
								}
								POP_EXIT();
								return BgL_res3248z00_874;
							}
						}
					}
				}
		}
	}



/* _user-error/location */
	obj_t BGl__userzd2errorzf2locationz20zztools_errorz00(obj_t BgL_envz00_1409,
		obj_t BgL_locz00_1410, obj_t BgL_procz00_1411, obj_t BgL_msgz00_1412,
		obj_t BgL_objz00_1413, obj_t BgL_continuez00_1414)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 114 */
			return
				BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_1410,
				BgL_procz00_1411, BgL_msgz00_1412, BgL_objz00_1413,
				BgL_continuez00_1414);
		}
	}



/* <anonymous:3302> */
	obj_t BGl_zc3anonymousza33302ze3z83zztools_errorz00(obj_t BgL_envz00_1415)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 143 */
			{	/* Tools/error.scm 144 */
				obj_t BgL_procz00_1416;

				obj_t BgL_msgz00_1417;

				obj_t BgL_objzd2prnzd2_1418;

				obj_t BgL_locz00_1419;

				BgL_procz00_1416 = PROCEDURE_REF(BgL_envz00_1415, (int) (((long) 0)));
				BgL_msgz00_1417 = PROCEDURE_REF(BgL_envz00_1415, (int) (((long) 1)));
				BgL_objzd2prnzd2_1418 =
					PROCEDURE_REF(BgL_envz00_1415, (int) (((long) 2)));
				BgL_locz00_1419 = PROCEDURE_REF(BgL_envz00_1415, (int) (((long) 3)));
				{

					{	/* Tools/error.scm 144 */
						bool_t BgL_testz00_1650;

						if (STRUCTP(BgL_locz00_1419))
							{	/* Tools/error.scm 144 */
								BgL_testz00_1650 =
									(STRUCT_KEY(BgL_locz00_1419) == CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Tools/error.scm 144 */
								BgL_testz00_1650 = ((bool_t) 0);
							}
						if (BgL_testz00_1650)
							{	/* Tools/error.scm 144 */
								return
									BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_1416,
									BgL_msgz00_1417, BgL_objzd2prnzd2_1418,
									BGl_locationzd2fullzd2fnamez00zztools_locationz00
									(BgL_locz00_1419), STRUCT_REF(BgL_locz00_1419,
										(int) (((long) 1))));
							}
						else
							{	/* Tools/error.scm 144 */
								return
									BGl_errorz00zz__errorz00(BgL_procz00_1416, BgL_msgz00_1417,
									BgL_objzd2prnzd2_1418);
							}
					}
				}
			}
		}
	}



/* <anonymous:3298> */
	obj_t BGl_zc3anonymousza33298ze3z83zztools_errorz00(obj_t BgL_envz00_1420,
		obj_t BgL_ez00_1423)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 138 */
			{	/* Tools/error.scm 139 */
				obj_t BgL_continuez00_1421;

				obj_t BgL_an_exitd3246z00_1422;

				BgL_continuez00_1421 =
					PROCEDURE_REF(BgL_envz00_1420, (int) (((long) 0)));
				BgL_an_exitd3246z00_1422 =
					PROCEDURE_REF(BgL_envz00_1420, (int) (((long) 1)));
				{
					obj_t BgL_ez00_877;

					BgL_ez00_877 = BgL_ez00_1423;
					BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_877);
					if (PAIRP(BgL_continuez00_1421))
						{	/* Tools/error.scm 140 */
							return
								BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd3246z00_1422,
								CAR(BgL_continuez00_1421));
						}
					else
						{	/* Tools/error.scm 142 */
							obj_t BgL_list3301z00_881;

							BgL_list3301z00_881 = MAKE_PAIR(BINT(((long) 1)), BNIL);
							return BGl_exitz00zz__errorz00(BgL_list3301z00_881);
						}
				}
			}
		}
	}



/* enter-function */
	BGL_EXPORTED_DEF obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t
		BgL_varz00_37)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 158 */
			return (BGl_za2sfunzd2stackza2zd2zztools_errorz00 =
				MAKE_PAIR(BgL_varz00_37, BGl_za2sfunzd2stackza2zd2zztools_errorz00),
				BUNSPEC);
		}
	}



/* _enter-function */
	obj_t BGl__enterzd2functionzd2zztools_errorz00(obj_t BgL_envz00_1424,
		obj_t BgL_varz00_1425)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 158 */
			return BGl_enterzd2functionzd2zztools_errorz00(BgL_varz00_1425);
		}
	}



/* leave-function */
	BGL_EXPORTED_DEF obj_t BGl_leavezd2functionzd2zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 164 */
			return (BGl_za2sfunzd2stackza2zd2zztools_errorz00 =
				CDR(BGl_za2sfunzd2stackza2zd2zztools_errorz00), BUNSPEC);
		}
	}



/* _leave-function */
	obj_t BGl__leavezd2functionzd2zztools_errorz00(obj_t BgL_envz00_1426)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 164 */
			return BGl_leavezd2functionzd2zztools_errorz00();
		}
	}



/* current-function */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2functionzd2zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 170 */
			return CAR(BGl_za2sfunzd2stackza2zd2zztools_errorz00);
		}
	}



/* _current-function */
	obj_t BGl__currentzd2functionzd2zztools_errorz00(obj_t BgL_envz00_1427)
	{
		AN_OBJECT;
		{	/* Tools/error.scm 170 */
			return BGl_currentzd2functionzd2zztools_errorz00();
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_errorz00()
	{
		AN_OBJECT;
		{	/* Tools/error.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string3383z00zztools_errorz00));
		}
	}

#ifdef __cplusplus
}
#endif
