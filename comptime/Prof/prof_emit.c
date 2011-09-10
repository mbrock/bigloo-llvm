/*===========================================================================*/
/*   (Prof/prof_emit.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Prof/prof_emit.scm)*/
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


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emitzd2profzd2infoz00zzprof_emitz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzprof_emitz00();
	extern obj_t BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzprof_emitz00();
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzprof_emitz00();
	static obj_t BGl__emitzd2profzd2infoz00zzprof_emitz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzprof_emitz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzprof_emitz00();
	static obj_t BGl_zc3anonymousza33625ze3z83zzprof_emitz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzprof_emitz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_emitzd2globalz12zc0zzprof_emitz00(obj_t, obj_t);
	extern obj_t BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzprof_emitz00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_emitzd2profzd2infozd2envzd2zzprof_emitz00,
		BgL_bgl__emitza7d2profza7d2i3728z00,
		BGl__emitzd2profzd2infoz00zzprof_emitz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3706z00zzprof_emitz00,
		BgL_bgl_string3706za700za7za7p3729za7, "/* prof association table */", 28);
	      DEFINE_STRING(BGl_string3707z00zzprof_emitz00,
		BgL_bgl_string3707za700za7za7p3730za7, "static obj_t write_bprof_table() {",
		34);
	      DEFINE_STRING(BGl_string3708z00zzprof_emitz00,
		BgL_bgl_string3708za700za7za7p3731za7, "   extern obj_t bprof_port;", 27);
	      DEFINE_STRING(BGl_string3710z00zzprof_emitz00,
		BgL_bgl_string3710za700za7za7p3732za7, "\", \"w\" );", 9);
	      DEFINE_STRING(BGl_string3709z00zzprof_emitz00,
		BgL_bgl_string3709za700za7za7p3733za7,
		"   if( bprof_port == BUNSPEC ) bprof_port = (obj_t)fopen( \"", 59);
	      DEFINE_STRING(BGl_string3711z00zzprof_emitz00,
		BgL_bgl_string3711za700za7za7p3734za7, "   if( bprof_port ) {", 21);
	      DEFINE_STRING(BGl_string3712z00zzprof_emitz00,
		BgL_bgl_string3712za700za7za7p3735za7, "      fputs( \"(\\\"", 17);
	      DEFINE_STRING(BGl_string3713z00zzprof_emitz00,
		BgL_bgl_string3713za700za7za7p3736za7, "\\\" \\\"", 5);
	      DEFINE_STRING(BGl_string3714z00zzprof_emitz00,
		BgL_bgl_string3714za700za7za7p3737za7, "\\\"", 2);
	      DEFINE_STRING(BGl_string3715z00zzprof_emitz00,
		BgL_bgl_string3715za700za7za7p3738za7, ")\\n\", (FILE *)bprof_port );", 27);
	      DEFINE_STRING(BGl_string3716z00zzprof_emitz00,
		BgL_bgl_string3716za700za7za7p3739za7, "   }", 4);
	      DEFINE_STRING(BGl_string3717z00zzprof_emitz00,
		BgL_bgl_string3717za700za7za7p3740za7, "   return BUNSPEC;", 18);
	      DEFINE_STRING(BGl_string3718z00zzprof_emitz00,
		BgL_bgl_string3718za700za7za7p3741za7, "}\n", 2);
	      DEFINE_STRING(BGl_string3720z00zzprof_emitz00,
		BgL_bgl_string3720za700za7za7p3742za7, "\\\" ", 3);
	      DEFINE_STRING(BGl_string3719z00zzprof_emitz00,
		BgL_bgl_string3719za700za7za7p3743za7, "      fputs( \"((\\\"", 18);
	      DEFINE_STRING(BGl_string3721z00zzprof_emitz00,
		BgL_bgl_string3721za700za7za7p3744za7, ") \\\"", 4);
	      DEFINE_STRING(BGl_string3722z00zzprof_emitz00,
		BgL_bgl_string3722za700za7za7p3745za7, " allocator", 10);
	      DEFINE_STRING(BGl_string3723z00zzprof_emitz00,
		BgL_bgl_string3723za700za7za7p3746za7, "", 0);
	      DEFINE_STRING(BGl_string3724z00zzprof_emitz00,
		BgL_bgl_string3724za700za7za7p3747za7, "prof_emit", 9);
	      DEFINE_STRING(BGl_string3725z00zzprof_emitz00,
		BgL_bgl_string3725za700za7za7p3748za7, "foreign location allocator ", 27);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzprof_emitz00(long
		BgL_checksumz00_1523, char *BgL_fromz00_1524)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzprof_emitz00))
				{
					BGl_requirezd2initializa7ationz75zzprof_emitz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzprof_emitz00();
					BGl_cnstzd2initzd2zzprof_emitz00();
					BGl_importedzd2moduleszd2initz00zzprof_emitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzprof_emitz00()
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "prof_emit");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"prof_emit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "prof_emit");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"prof_emit");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzprof_emitz00()
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 15 */
			{	/* Prof/prof_emit.scm 15 */
				obj_t BgL_cportz00_1515;

				BgL_cportz00_1515 =
					bgl_open_input_string(BGl_string3725z00zzprof_emitz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1516;

					BgL_iz00_1516 = ((long) 2);
				BgL_loopz00_1517:
					if ((BgL_iz00_1516 == ((long) -1)))
						{	/* Prof/prof_emit.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Prof/prof_emit.scm 15 */
							{	/* Prof/prof_emit.scm 15 */
								obj_t BgL_arg3727z00_1519;

								{	/* Prof/prof_emit.scm 15 */

									{	/* Prof/prof_emit.scm 15 */
										obj_t BgL_locationz00_1521;

										BgL_locationz00_1521 = BBOOL(((bool_t) 0));
										{	/* Prof/prof_emit.scm 15 */

											BgL_arg3727z00_1519 =
												BGl_readz00zz__readerz00(BgL_cportz00_1515,
												BgL_locationz00_1521);
										}
									}
								}
								{	/* Prof/prof_emit.scm 15 */
									int BgL_auxz00_1541;

									BgL_auxz00_1541 = (int) (BgL_iz00_1516);
									CNST_TABLE_SET(BgL_auxz00_1541, BgL_arg3727z00_1519);
							}}
							{	/* Prof/prof_emit.scm 15 */
								int BgL_auxz00_1522;

								BgL_auxz00_1522 = (int) ((BgL_iz00_1516 - ((long) 1)));
								{
									long BgL_iz00_1546;

									BgL_iz00_1546 = (long) (BgL_auxz00_1522);
									BgL_iz00_1516 = BgL_iz00_1546;
									goto BgL_loopz00_1517;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzprof_emitz00()
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}
	}



/* emit-prof-info */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2profzd2infoz00zzprof_emitz00(obj_t
		BgL_globalsz00_37, obj_t BgL_portz00_38)
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 40 */
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3706z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3707z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3708z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3709z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_obj(BGl_za2profzd2tablezd2nameza2z00zzengine_paramz00,
				BgL_portz00_38);
			bgl_display_string(BGl_string3710z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3711z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			{	/* Prof/prof_emit.scm 80 */
				obj_t BgL_zc3anonymousza33625ze3z83_1505;

				BgL_zc3anonymousza33625ze3z83_1505 =
					make_fx_procedure(BGl_zc3anonymousza33625ze3z83zzprof_emitz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_zc3anonymousza33625ze3z83_1505,
					(int) (((long) 0)), BgL_portz00_38);
				BGl_forzd2eachzd2globalz12z12zzast_envz00
					(BgL_zc3anonymousza33625ze3z83_1505, BNIL);
			}
			{
				obj_t BgL_l3597z00_943;

				BgL_l3597z00_943 = BgL_globalsz00_37;
			BgL_zc3anonymousza33634ze3z83_944:
				if (PAIRP(BgL_l3597z00_943))
					{	/* Prof/prof_emit.scm 86 */
						{	/* Prof/prof_emit.scm 87 */
							obj_t BgL_globalz00_946;

							BgL_globalz00_946 = CAR(BgL_l3597z00_943);
							{	/* Prof/prof_emit.scm 87 */
								bool_t BgL_testz00_1571;

								{
									BgL_globalz00_bglt BgL_auxz00_1572;

									BgL_auxz00_1572 = (BgL_globalz00_bglt) (BgL_globalz00_946);
									BgL_testz00_1571 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_1572))->
										BgL_userzf3zf3);
								}
								if (BgL_testz00_1571)
									{	/* Prof/prof_emit.scm 87 */
										BGl_emitzd2globalz12zc0zzprof_emitz00(BgL_portz00_38,
											BgL_globalz00_946);
									}
								else
									{	/* Prof/prof_emit.scm 87 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l3597z00_1576;

							BgL_l3597z00_1576 = CDR(BgL_l3597z00_943);
							BgL_l3597z00_943 = BgL_l3597z00_1576;
							goto BgL_zc3anonymousza33634ze3z83_944;
						}
					}
				else
					{	/* Prof/prof_emit.scm 86 */
						((bool_t) 1);
					}
			}
			{
				obj_t BgL_l3600z00_951;

				BgL_l3600z00_951 = BGl_za2builtinzd2allocatorsza2zd2zzengine_paramz00;
			BgL_zc3anonymousza33638ze3z83_952:
				if (PAIRP(BgL_l3600z00_951))
					{	/* Prof/prof_emit.scm 92 */
						{	/* Prof/prof_emit.scm 93 */
							obj_t BgL_scmze2cze2_954;

							BgL_scmze2cze2_954 = CAR(BgL_l3600z00_951);
							{	/* Prof/prof_emit.scm 93 */
								obj_t BgL_scmz00_955;

								obj_t BgL_cz00_956;

								BgL_scmz00_955 = CAR(BgL_scmze2cze2_954);
								BgL_cz00_956 = CDR(BgL_scmze2cze2_954);
								bgl_display_string(BGl_string3712z00zzprof_emitz00,
									BgL_portz00_38);
								bgl_display_obj(BgL_scmz00_955, BgL_portz00_38);
								bgl_display_string(BGl_string3713z00zzprof_emitz00,
									BgL_portz00_38);
								bgl_display_obj(BgL_cz00_956, BgL_portz00_38);
								bgl_display_string(BGl_string3714z00zzprof_emitz00,
									BgL_portz00_38);
								bgl_display_string(BGl_string3715z00zzprof_emitz00,
									BgL_portz00_38);
								bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
						}}
						{
							obj_t BgL_l3600z00_1590;

							BgL_l3600z00_1590 = CDR(BgL_l3600z00_951);
							BgL_l3600z00_951 = BgL_l3600z00_1590;
							goto BgL_zc3anonymousza33638ze3z83_952;
						}
					}
				else
					{	/* Prof/prof_emit.scm 92 */
						((bool_t) 1);
					}
			}
			bgl_display_string(BGl_string3716z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3717z00zzprof_emitz00, BgL_portz00_38);
			bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
			bgl_display_string(BGl_string3718z00zzprof_emitz00, BgL_portz00_38);
			return bgl_display_char(((unsigned char) '\n'), BgL_portz00_38);
		}
	}



/* _emit-prof-info */
	obj_t BGl__emitzd2profzd2infoz00zzprof_emitz00(obj_t BgL_envz00_1506,
		obj_t BgL_globalsz00_1507, obj_t BgL_portz00_1508)
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 40 */
			return
				BGl_emitzd2profzd2infoz00zzprof_emitz00(BgL_globalsz00_1507,
				BgL_portz00_1508);
		}
	}



/* emit-global! */
	obj_t BGl_emitzd2globalz12zc0zzprof_emitz00(obj_t BgL_portz00_1509,
		obj_t BgL_globalz00_963)
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 66 */
			{	/* Prof/prof_emit.scm 43 */
				BgL_valuez00_bglt BgL_sfunz00_965;

				{
					BgL_variablez00_bglt BgL_auxz00_1599;

					BgL_auxz00_1599 = (BgL_variablez00_bglt) (BgL_globalz00_963);
					BgL_sfunz00_965 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1599))->BgL_valuez00);
				}
				BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
					(BgL_variablez00_bglt) (BgL_globalz00_963));
				{	/* Prof/prof_emit.scm 45 */
					obj_t BgL_idz00_966;

					obj_t BgL_czd2namezd2_967;

					obj_t BgL_iszd2alloczd2_968;

					obj_t BgL_locz00_969;

					{
						BgL_variablez00_bglt BgL_auxz00_1604;

						BgL_auxz00_1604 = (BgL_variablez00_bglt) (BgL_globalz00_963);
						BgL_idz00_966 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1604))->BgL_idz00);
					}
					{
						BgL_variablez00_bglt BgL_auxz00_1607;

						BgL_auxz00_1607 = (BgL_variablez00_bglt) (BgL_globalz00_963);
						BgL_czd2namezd2_967 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_1607))->BgL_namez00);
					}
					{	/* Prof/prof_emit.scm 47 */
						bool_t BgL_testz00_1610;

						{	/* Prof/prof_emit.scm 47 */
							obj_t BgL_obj1955z00_1463;

							BgL_obj1955z00_1463 = (obj_t) (BgL_sfunz00_965);
							BgL_testz00_1610 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1463,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_1610)
							{	/* Prof/prof_emit.scm 47 */
								obj_t BgL_auxz00_1613;

								{
									BgL_sfunz00_bglt BgL_auxz00_1615;

									BgL_auxz00_1615 = (BgL_sfunz00_bglt) (BgL_sfunz00_965);
									BgL_auxz00_1613 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1615))->
										BgL_propertyz00);
								}
								BgL_iszd2alloczd2_968 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 0)), BgL_auxz00_1613);
							}
						else
							{	/* Prof/prof_emit.scm 47 */
								BgL_iszd2alloczd2_968 = BFALSE;
							}
					}
					{	/* Prof/prof_emit.scm 48 */
						bool_t BgL_testz00_1619;

						{	/* Prof/prof_emit.scm 48 */
							obj_t BgL_obj1955z00_1465;

							BgL_obj1955z00_1465 = (obj_t) (BgL_sfunz00_965);
							BgL_testz00_1619 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1465,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_1619)
							{
								BgL_sfunz00_bglt BgL_auxz00_1622;

								BgL_auxz00_1622 = (BgL_sfunz00_bglt) (BgL_sfunz00_965);
								BgL_locz00_969 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_1622))->BgL_locz00);
							}
						else
							{	/* Prof/prof_emit.scm 48 */
								BgL_locz00_969 = BFALSE;
							}
					}
					{	/* Prof/prof_emit.scm 49 */
						bool_t BgL_testz00_1625;

						if (STRUCTP(BgL_locz00_969))
							{	/* Prof/prof_emit.scm 49 */
								BgL_testz00_1625 =
									(STRUCT_KEY(BgL_locz00_969) == CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Prof/prof_emit.scm 49 */
								BgL_testz00_1625 = ((bool_t) 0);
							}
						if (BgL_testz00_1625)
							{	/* Prof/prof_emit.scm 49 */
								bgl_display_string(BGl_string3719z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_obj(BgL_idz00_966, BgL_portz00_1509);
								bgl_display_string(BGl_string3720z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_string(BGl_string3714z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_obj(STRUCT_REF(BgL_locz00_969, (int) (((long) 0))),
									BgL_portz00_1509);
								bgl_display_string(BGl_string3720z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_obj(STRUCT_REF(BgL_locz00_969, (int) (((long) 1))),
									BgL_portz00_1509);
								bgl_display_string(BGl_string3721z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_obj(BgL_czd2namezd2_967, BgL_portz00_1509);
								bgl_display_string(BGl_string3714z00zzprof_emitz00,
									BgL_portz00_1509);
								{	/* Prof/prof_emit.scm 58 */
									obj_t BgL_arg3645z00_974;

									if (CBOOL(BgL_iszd2alloczd2_968))
										{	/* Prof/prof_emit.scm 58 */
											BgL_arg3645z00_974 = BGl_string3722z00zzprof_emitz00;
										}
									else
										{	/* Prof/prof_emit.scm 58 */
											BgL_arg3645z00_974 = BGl_string3723z00zzprof_emitz00;
										}
									bgl_display_obj(BgL_arg3645z00_974, BgL_portz00_1509);
								}
								bgl_display_string(BGl_string3715z00zzprof_emitz00,
									BgL_portz00_1509);
								return bgl_display_char(((unsigned char) '\n'),
									BgL_portz00_1509);
							}
						else
							{	/* Prof/prof_emit.scm 49 */
								bgl_display_string(BGl_string3712z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_obj(BgL_idz00_966, BgL_portz00_1509);
								bgl_display_string(BGl_string3713z00zzprof_emitz00,
									BgL_portz00_1509);
								bgl_display_obj(BgL_czd2namezd2_967, BgL_portz00_1509);
								bgl_display_string(BGl_string3714z00zzprof_emitz00,
									BgL_portz00_1509);
								{	/* Prof/prof_emit.scm 65 */
									obj_t BgL_arg3646z00_976;

									if (CBOOL(BgL_iszd2alloczd2_968))
										{	/* Prof/prof_emit.scm 65 */
											BgL_arg3646z00_976 = BGl_string3722z00zzprof_emitz00;
										}
									else
										{	/* Prof/prof_emit.scm 65 */
											BgL_arg3646z00_976 = BGl_string3723z00zzprof_emitz00;
										}
									bgl_display_obj(BgL_arg3646z00_976, BgL_portz00_1509);
								}
								bgl_display_string(BGl_string3715z00zzprof_emitz00,
									BgL_portz00_1509);
								return bgl_display_char(((unsigned char) '\n'),
									BgL_portz00_1509);
		}}}}}
	}



/* <anonymous:3625> */
	obj_t BGl_zc3anonymousza33625ze3z83zzprof_emitz00(obj_t BgL_envz00_1510,
		obj_t BgL_gz00_1512)
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 79 */
			{	/* Prof/prof_emit.scm 80 */
				obj_t BgL_portz00_1511;

				BgL_portz00_1511 = PROCEDURE_REF(BgL_envz00_1510, (int) (((long) 0)));
				{
					obj_t BgL_gz00_931;

					BgL_gz00_931 = BgL_gz00_1512;
					{	/* Prof/prof_emit.scm 80 */
						bool_t BgL_testz00_1662;

						{	/* Prof/prof_emit.scm 80 */
							bool_t BgL_testz00_1663;

							{	/* Prof/prof_emit.scm 80 */
								bool_t BgL_testz00_1664;

								{	/* Prof/prof_emit.scm 80 */
									long BgL_auxz00_1665;

									{
										BgL_variablez00_bglt BgL_auxz00_1666;

										BgL_auxz00_1666 = (BgL_variablez00_bglt) (BgL_gz00_931);
										BgL_auxz00_1665 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1666))->
											BgL_occurrencez00);
									}
									BgL_testz00_1664 = (BgL_auxz00_1665 > ((long) 0));
								}
								if (BgL_testz00_1664)
									{	/* Prof/prof_emit.scm 80 */
										BgL_testz00_1663 = ((bool_t) 1);
									}
								else
									{	/* Prof/prof_emit.scm 81 */
										obj_t BgL_auxz00_1670;

										{
											BgL_globalz00_bglt BgL_auxz00_1671;

											BgL_auxz00_1671 = (BgL_globalz00_bglt) (BgL_gz00_931);
											BgL_auxz00_1670 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_1671))->
												BgL_modulez00);
										}
										BgL_testz00_1663 =
											(BgL_auxz00_1670 == CNST_TABLE_REF(((long) 2)));
							}}
							if (BgL_testz00_1663)
								{	/* Prof/prof_emit.scm 82 */
									bool_t BgL_testz00_1676;

									{	/* Prof/prof_emit.scm 82 */
										BgL_globalz00_bglt BgL_obj1685z00_1431;

										BgL_obj1685z00_1431 = (BgL_globalz00_bglt) (BgL_gz00_931);
										BgL_testz00_1676 =
											CBOOL(
											(((BgL_globalz00_bglt) CREF(BgL_obj1685z00_1431))->
												BgL_libraryz00));
									}
									if (BgL_testz00_1676)
										{
											BgL_globalz00_bglt BgL_auxz00_1680;

											BgL_auxz00_1680 = (BgL_globalz00_bglt) (BgL_gz00_931);
											BgL_testz00_1662 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_1680))->
												BgL_userzf3zf3);
										}
									else
										{	/* Prof/prof_emit.scm 82 */
											BgL_testz00_1662 = ((bool_t) 0);
										}
								}
							else
								{	/* Prof/prof_emit.scm 80 */
									BgL_testz00_1662 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_1662)
							{	/* Prof/prof_emit.scm 80 */
								return
									BGl_emitzd2globalz12zc0zzprof_emitz00(BgL_portz00_1511,
									BgL_gz00_931);
							}
						else
							{	/* Prof/prof_emit.scm 80 */
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzprof_emitz00()
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzprof_emitz00()
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzprof_emitz00()
	{
		AN_OBJECT;
		{	/* Prof/prof_emit.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
			return BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long)
					254412896), BSTRING_TO_STRING(BGl_string3724z00zzprof_emitz00));
		}
	}

#ifdef __cplusplus
}
#endif
