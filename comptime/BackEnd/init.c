/*===========================================================================*/
/*   (BackEnd/init.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/init.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	extern obj_t BGl_za2modulezd2checksumza2zd2zzmodule_modulez00;
	extern obj_t BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_makezd2modulezd2initz00zzbackend_initz00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_initz00();
	extern obj_t BGl_unitzd2initzd2callsz00zzast_unitz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_initz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_initz00();
	extern obj_t
		BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(BgL_variablez00_bglt);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2modulezd2initz00zzbackend_initz00();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_initz00();
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_initz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_initz00();
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	extern obj_t BGl_za2unsafezd2versionza2zd2zzengine_paramz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_initz00();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_za2stringza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_za2modulezd2initza2zd2zzbackend_initz00 = BUNSPEC;
	static obj_t BGl__getzd2modulezd2initz00zzbackend_initz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_initz00();
	static obj_t __cnst[23];


	   
		 
		DEFINE_STRING(BGl_string3865z00zzbackend_initz00,
		BgL_bgl_string3865za700za7za7b3873za7, "bgl_init_module_debug_start(\"",
		29);
	      DEFINE_STRING(BGl_string3866z00zzbackend_initz00,
		BgL_bgl_string3866za700za7za7b3874za7, "\")", 2);
	      DEFINE_STRING(BGl_string3867z00zzbackend_initz00,
		BgL_bgl_string3867za700za7za7b3875za7, "bgl_init_module_debug_end(\"", 27);
	      DEFINE_STRING(BGl_string3868z00zzbackend_initz00,
		BgL_bgl_string3868za700za7za7b3876za7, "~s", 2);
	      DEFINE_STRING(BGl_string3870z00zzbackend_initz00,
		BgL_bgl_string3870za700za7za7b3877za7,
		"export module-initialization sfun (checksum from) value s from module-init-error pragma::string s::string let checksum bit-and =fx pragma set! begin require-initialization if module now module-initalization require-initialization::obj ",
		235);
	      DEFINE_STRING(BGl_string3869z00zzbackend_initz00,
		BgL_bgl_string3869za700za7za7b3878za7, "backend_init", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2modulezd2initzd2envzd2zzbackend_initz00,
		BgL_bgl__getza7d2moduleza7d23879z00,
		BGl__getzd2modulezd2initz00zzbackend_initz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_initz00(long
		BgL_checksumz00_1526, char *BgL_fromz00_1527)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_initz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_initz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_initz00();
					BGl_cnstzd2initzd2zzbackend_initz00();
					BGl_importedzd2moduleszd2initz00zzbackend_initz00();
					BGl_toplevelzd2initzd2zzbackend_initz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_init");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"backend_init");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 15 */
			{	/* BackEnd/init.scm 15 */
				obj_t BgL_cportz00_1518;

				BgL_cportz00_1518 =
					bgl_open_input_string(BGl_string3870z00zzbackend_initz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1519;

					BgL_iz00_1519 = ((long) 22);
				BgL_loopz00_1520:
					if ((BgL_iz00_1519 == ((long) -1)))
						{	/* BackEnd/init.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/init.scm 15 */
							{	/* BackEnd/init.scm 15 */
								obj_t BgL_arg3872z00_1522;

								{	/* BackEnd/init.scm 15 */

									{	/* BackEnd/init.scm 15 */
										obj_t BgL_locationz00_1524;

										BgL_locationz00_1524 = BBOOL(((bool_t) 0));
										{	/* BackEnd/init.scm 15 */

											BgL_arg3872z00_1522 =
												BGl_readz00zz__readerz00(BgL_cportz00_1518,
												BgL_locationz00_1524);
										}
									}
								}
								{	/* BackEnd/init.scm 15 */
									int BgL_auxz00_1545;

									BgL_auxz00_1545 = (int) (BgL_iz00_1519);
									CNST_TABLE_SET(BgL_auxz00_1545, BgL_arg3872z00_1522);
							}}
							{	/* BackEnd/init.scm 15 */
								int BgL_auxz00_1525;

								BgL_auxz00_1525 = (int) ((BgL_iz00_1519 - ((long) 1)));
								{
									long BgL_iz00_1550;

									BgL_iz00_1550 = (long) (BgL_auxz00_1525);
									BgL_iz00_1519 = BgL_iz00_1550;
									goto BgL_loopz00_1520;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 15 */
			return (BGl_za2modulezd2initza2zd2zzbackend_initz00 = BUNSPEC, BUNSPEC);
		}
	}



/* get-module-init */
	BGL_EXPORTED_DEF obj_t BGl_getzd2modulezd2initz00zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 44 */
			if ((BGl_za2modulezd2initza2zd2zzbackend_initz00 == BUNSPEC))
				{	/* BackEnd/init.scm 45 */
					BGl_za2modulezd2initza2zd2zzbackend_initz00 =
						(obj_t) (BGl_makezd2modulezd2initz00zzbackend_initz00());
				}
			else
				{	/* BackEnd/init.scm 45 */
					BFALSE;
				}
			return BGl_za2modulezd2initza2zd2zzbackend_initz00;
		}
	}



/* _get-module-init */
	obj_t BGl__getzd2modulezd2initz00zzbackend_initz00(obj_t BgL_envz00_1517)
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 44 */
			return BGl_getzd2modulezd2initz00zzbackend_initz00();
		}
	}



/* make-module-init */
	BgL_globalz00_bglt BGl_makezd2modulezd2initz00zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 52 */
			{	/* BackEnd/init.scm 53 */
				BgL_globalz00_bglt BgL_reqz00_951;

				BgL_reqz00_951 =
					BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(CNST_TABLE_REF(((long)
							0)), BGl_za2moduleza2z00zzmodule_modulez00,
					CNST_TABLE_REF(((long) 1)), CNST_TABLE_REF(((long) 2)));
				{	/* BackEnd/init.scm 53 */
					obj_t BgL_bcz00_952;

					BgL_bcz00_952 = BGl_thezd2backendzd2zzbackend_backendz00();
					{	/* BackEnd/init.scm 57 */
						bool_t BgL_dbgz00_953;

						if (
							((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
								((long) 0)))
							{	/* BackEnd/init.scm 59 */
								bool_t BgL_testz00_1565;

								{	/* BackEnd/init.scm 59 */
									obj_t BgL_auxz00_1566;

									{	/* BackEnd/init.scm 59 */
										obj_t BgL_auxz00_1567;

										{
											BgL_backendz00_bglt BgL_auxz00_1569;

											BgL_auxz00_1569 = (BgL_backendz00_bglt) (BgL_bcz00_952);
											BgL_auxz00_1567 =
												(((BgL_backendz00_bglt) CREF(BgL_auxz00_1569))->
												BgL_debugzd2supportzd2);
										}
										BgL_auxz00_1566 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
													(long) 3)), BgL_auxz00_1567);
									}
									BgL_testz00_1565 = CBOOL(BgL_auxz00_1566);
								}
								if (BgL_testz00_1565)
									{
										BgL_backendz00_bglt BgL_auxz00_1574;

										BgL_auxz00_1574 = (BgL_backendz00_bglt) (BgL_bcz00_952);
										BgL_dbgz00_953 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_1574))->
											BgL_pragmazd2supportzd2);
									}
								else
									{	/* BackEnd/init.scm 59 */
										BgL_dbgz00_953 = ((bool_t) 0);
									}
							}
						else
							{	/* BackEnd/init.scm 58 */
								BgL_dbgz00_953 = ((bool_t) 0);
							}
						{	/* BackEnd/init.scm 58 */
							obj_t BgL_ubodyz00_954;

							{	/* BackEnd/init.scm 61 */
								obj_t BgL_arg3763z00_1031;

								obj_t BgL_arg3764z00_1032;

								BgL_arg3763z00_1031 = CNST_TABLE_REF(((long) 4));
								{	/* BackEnd/init.scm 61 */
									obj_t BgL_arg3765z00_1033;

									obj_t BgL_arg3766z00_1034;

									BgL_arg3765z00_1033 = CNST_TABLE_REF(((long) 5));
									{	/* BackEnd/init.scm 62 */
										obj_t BgL_arg3771z00_1039;

										obj_t BgL_arg3772z00_1040;

										BgL_arg3771z00_1039 = CNST_TABLE_REF(((long) 6));
										{	/* BackEnd/init.scm 63 */
											obj_t BgL_arg3773z00_1041;

											obj_t BgL_arg3774z00_1042;

											{	/* BackEnd/init.scm 63 */
												obj_t BgL_arg3776z00_1044;

												obj_t BgL_arg3777z00_1045;

												BgL_arg3776z00_1044 = CNST_TABLE_REF(((long) 7));
												{	/* BackEnd/init.scm 63 */
													obj_t BgL_list3778z00_1046;

													{	/* BackEnd/init.scm 63 */
														obj_t BgL_arg3779z00_1047;

														BgL_arg3779z00_1047 = MAKE_PAIR(BNIL, BNIL);
														BgL_list3778z00_1046 =
															MAKE_PAIR(BFALSE, BgL_arg3779z00_1047);
													}
													BgL_arg3777z00_1045 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 5)), BgL_list3778z00_1046);
												}
												BgL_arg3773z00_1041 =
													MAKE_PAIR(BgL_arg3776z00_1044, BgL_arg3777z00_1045);
											}
											{	/* BackEnd/init.scm 64 */
												obj_t BgL_arg3780z00_1048;

												obj_t BgL_arg3781z00_1049;

												if (BgL_dbgz00_953)
													{	/* BackEnd/init.scm 65 */
														obj_t BgL_arg3782z00_1050;

														{	/* BackEnd/init.scm 65 */
															obj_t BgL_arg3784z00_1052;

															obj_t BgL_arg3785z00_1053;

															BgL_arg3784z00_1052 = CNST_TABLE_REF(((long) 8));
															{	/* BackEnd/init.scm 66 */
																obj_t BgL_arg3786z00_1054;

																{	/* BackEnd/init.scm 66 */
																	obj_t BgL_arg3790z00_1058;

																	{	/* BackEnd/init.scm 67 */
																		obj_t BgL_res3859z00_1498;

																		{	/* BackEnd/init.scm 67 */
																			obj_t BgL_symbolz00_1496;

																			BgL_symbolz00_1496 =
																				BGl_za2moduleza2z00zzmodule_modulez00;
																			{	/* BackEnd/init.scm 67 */
																				obj_t BgL_arg2063z00_1497;

																				BgL_arg2063z00_1497 =
																					SYMBOL_TO_STRING(BgL_symbolz00_1496);
																				BgL_res3859z00_1498 =
																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																					(BgL_arg2063z00_1497);
																		}}
																		BgL_arg3790z00_1058 = BgL_res3859z00_1498;
																	}
																	BgL_arg3786z00_1054 =
																		string_append_3
																		(BGl_string3865z00zzbackend_initz00,
																		BgL_arg3790z00_1058,
																		BGl_string3866z00zzbackend_initz00);
																}
																{	/* BackEnd/init.scm 65 */
																	obj_t BgL_list3788z00_1056;

																	BgL_list3788z00_1056 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3785z00_1053 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3786z00_1054, BgL_list3788z00_1056);
															}}
															BgL_arg3782z00_1050 =
																MAKE_PAIR(BgL_arg3784z00_1052,
																BgL_arg3785z00_1053);
														}
														BgL_arg3780z00_1048 =
															MAKE_PAIR(BgL_arg3782z00_1050, BNIL);
													}
												else
													{	/* BackEnd/init.scm 64 */
														BgL_arg3780z00_1048 = BNIL;
													}
												{	/* BackEnd/init.scm 70 */
													obj_t BgL_arg3792z00_1060;

													obj_t BgL_arg3793z00_1061;

													BgL_arg3792z00_1060 =
														BGl_unitzd2initzd2callsz00zzast_unitz00();
													{	/* BackEnd/init.scm 71 */
														obj_t BgL_arg3794z00_1062;

														obj_t BgL_arg3795z00_1063;

														if (BgL_dbgz00_953)
															{	/* BackEnd/init.scm 72 */
																obj_t BgL_arg3796z00_1064;

																{	/* BackEnd/init.scm 72 */
																	obj_t BgL_arg3798z00_1066;

																	obj_t BgL_arg3799z00_1067;

																	BgL_arg3798z00_1066 =
																		CNST_TABLE_REF(((long) 8));
																	{	/* BackEnd/init.scm 73 */
																		obj_t BgL_arg3800z00_1068;

																		{	/* BackEnd/init.scm 73 */
																			obj_t BgL_arg3804z00_1072;

																			{	/* BackEnd/init.scm 74 */
																				obj_t BgL_res3860z00_1501;

																				{	/* BackEnd/init.scm 74 */
																					obj_t BgL_symbolz00_1499;

																					BgL_symbolz00_1499 =
																						BGl_za2moduleza2z00zzmodule_modulez00;
																					{	/* BackEnd/init.scm 74 */
																						obj_t BgL_arg2063z00_1500;

																						BgL_arg2063z00_1500 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_1499);
																						BgL_res3860z00_1501 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_1500);
																				}}
																				BgL_arg3804z00_1072 =
																					BgL_res3860z00_1501;
																			}
																			BgL_arg3800z00_1068 =
																				string_append_3
																				(BGl_string3867z00zzbackend_initz00,
																				BgL_arg3804z00_1072,
																				BGl_string3866z00zzbackend_initz00);
																		}
																		{	/* BackEnd/init.scm 72 */
																			obj_t BgL_list3802z00_1070;

																			BgL_list3802z00_1070 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3799z00_1067 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3800z00_1068,
																				BgL_list3802z00_1070);
																	}}
																	BgL_arg3796z00_1064 =
																		MAKE_PAIR(BgL_arg3798z00_1066,
																		BgL_arg3799z00_1067);
																}
																BgL_arg3794z00_1062 =
																	MAKE_PAIR(BgL_arg3796z00_1064, BNIL);
															}
														else
															{	/* BackEnd/init.scm 71 */
																BgL_arg3794z00_1062 = BNIL;
															}
														BgL_arg3795z00_1063 = MAKE_PAIR(BUNSPEC, BNIL);
														BgL_arg3793z00_1061 =
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3794z00_1062, BgL_arg3795z00_1063);
													}
													BgL_arg3781z00_1049 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3792z00_1060, BgL_arg3793z00_1061);
												}
												BgL_arg3774z00_1042 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3780z00_1048, BgL_arg3781z00_1049);
											}
											{	/* BackEnd/init.scm 62 */
												obj_t BgL_list3775z00_1043;

												BgL_list3775z00_1043 =
													MAKE_PAIR(BgL_arg3774z00_1042, BNIL);
												BgL_arg3772z00_1040 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3773z00_1041, BgL_list3775z00_1043);
											}
										}
										BgL_arg3766z00_1034 =
											MAKE_PAIR(BgL_arg3771z00_1039, BgL_arg3772z00_1040);
									}
									{	/* BackEnd/init.scm 61 */
										obj_t BgL_list3768z00_1036;

										{	/* BackEnd/init.scm 61 */
											obj_t BgL_arg3769z00_1037;

											{	/* BackEnd/init.scm 61 */
												obj_t BgL_arg3770z00_1038;

												BgL_arg3770z00_1038 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3769z00_1037 =
													MAKE_PAIR(BUNSPEC, BgL_arg3770z00_1038);
											}
											BgL_list3768z00_1036 =
												MAKE_PAIR(BgL_arg3766z00_1034, BgL_arg3769z00_1037);
										}
										BgL_arg3764z00_1032 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3765z00_1033, BgL_list3768z00_1036);
									}
								}
								BgL_ubodyz00_954 =
									MAKE_PAIR(BgL_arg3763z00_1031, BgL_arg3764z00_1032);
							}
							{	/* BackEnd/init.scm 61 */
								obj_t BgL_bodyz00_955;

								if (CBOOL(BGl_za2unsafezd2versionza2zd2zzengine_paramz00))
									{	/* BackEnd/init.scm 79 */
										BgL_bodyz00_955 = BgL_ubodyz00_954;
									}
								else
									{	/* BackEnd/init.scm 81 */
										obj_t BgL_arg3706z00_976;

										obj_t BgL_arg3707z00_977;

										BgL_arg3706z00_976 = CNST_TABLE_REF(((long) 4));
										{	/* BackEnd/init.scm 81 */
											obj_t BgL_arg3708z00_978;

											obj_t BgL_arg3709z00_979;

											{	/* BackEnd/init.scm 81 */
												obj_t BgL_arg3714z00_984;

												obj_t BgL_arg3715z00_985;

												BgL_arg3714z00_984 = CNST_TABLE_REF(((long) 9));
												{	/* BackEnd/init.scm 81 */
													obj_t BgL_arg3716z00_986;

													obj_t BgL_arg3717z00_987;

													{	/* BackEnd/init.scm 81 */
														obj_t BgL_arg3721z00_991;

														obj_t BgL_arg3722z00_992;

														BgL_arg3721z00_991 = CNST_TABLE_REF(((long) 10));
														{	/* BackEnd/init.scm 81 */
															obj_t BgL_list3723z00_993;

															{	/* BackEnd/init.scm 81 */
																obj_t BgL_arg3724z00_994;

																BgL_arg3724z00_994 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3723z00_993 =
																	MAKE_PAIR
																	(BGl_za2modulezd2checksumza2zd2zzmodule_modulez00,
																	BgL_arg3724z00_994);
															}
															BgL_arg3722z00_992 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(CNST_TABLE_REF(((long) 11)),
																BgL_list3723z00_993);
														}
														BgL_arg3716z00_986 =
															MAKE_PAIR(BgL_arg3721z00_991, BgL_arg3722z00_992);
													}
													BgL_arg3717z00_987 = CNST_TABLE_REF(((long) 11));
													{	/* BackEnd/init.scm 81 */
														obj_t BgL_list3719z00_989;

														{	/* BackEnd/init.scm 81 */
															obj_t BgL_arg3720z00_990;

															BgL_arg3720z00_990 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3719z00_989 =
																MAKE_PAIR(BgL_arg3717z00_987,
																BgL_arg3720z00_990);
														}
														BgL_arg3715z00_985 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3716z00_986, BgL_list3719z00_989);
												}}
												BgL_arg3708z00_978 =
													MAKE_PAIR(BgL_arg3714z00_984, BgL_arg3715z00_985);
											}
											{	/* BackEnd/init.scm 83 */
												bool_t BgL_testz00_1632;

												{	/* BackEnd/init.scm 83 */
													obj_t BgL_arg3762z00_1030;

													BgL_arg3762z00_1030 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													{
														BgL_backendz00_bglt BgL_auxz00_1634;

														BgL_auxz00_1634 =
															(BgL_backendz00_bglt) (BgL_arg3762z00_1030);
														BgL_testz00_1632 =
															(((BgL_backendz00_bglt) CREF(BgL_auxz00_1634))->
															BgL_pragmazd2supportzd2);
												}}
												if (BgL_testz00_1632)
													{	/* BackEnd/init.scm 84 */
														obj_t BgL_arg3726z00_996;

														obj_t BgL_arg3727z00_997;

														BgL_arg3726z00_996 = CNST_TABLE_REF(((long) 12));
														{	/* BackEnd/init.scm 84 */
															obj_t BgL_arg3728z00_998;

															obj_t BgL_arg3729z00_999;

															{	/* BackEnd/init.scm 84 */
																obj_t BgL_arg3733z00_1003;

																{	/* BackEnd/init.scm 84 */
																	obj_t BgL_arg3735z00_1005;

																	obj_t BgL_arg3736z00_1006;

																	BgL_arg3735z00_1005 =
																		CNST_TABLE_REF(((long) 13));
																	{	/* BackEnd/init.scm 85 */
																		obj_t BgL_arg3737z00_1007;

																		{	/* BackEnd/init.scm 85 */
																			obj_t BgL_arg3740z00_1010;

																			obj_t BgL_arg3741z00_1011;

																			BgL_arg3740z00_1010 =
																				CNST_TABLE_REF(((long) 14));
																			{	/* BackEnd/init.scm 86 */
																				obj_t BgL_arg3742z00_1012;

																				{	/* BackEnd/init.scm 86 */
																					obj_t BgL_arg3748z00_1016;

																					{	/* BackEnd/init.scm 86 */
																						obj_t BgL_res3861z00_1505;

																						{	/* BackEnd/init.scm 86 */
																							obj_t BgL_symbolz00_1503;

																							BgL_symbolz00_1503 =
																								BGl_za2moduleza2z00zzmodule_modulez00;
																							{	/* BackEnd/init.scm 86 */
																								obj_t BgL_arg2063z00_1504;

																								BgL_arg2063z00_1504 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_1503);
																								BgL_res3861z00_1505 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_1504);
																						}}
																						BgL_arg3748z00_1016 =
																							BgL_res3861z00_1505;
																					}
																					{	/* BackEnd/init.scm 86 */
																						obj_t BgL_list3749z00_1017;

																						BgL_list3749z00_1017 =
																							MAKE_PAIR(BgL_arg3748z00_1016,
																							BNIL);
																						BgL_arg3742z00_1012 =
																							BGl_formatz00zz__r4_output_6_10_3z00
																							(BGl_string3868z00zzbackend_initz00,
																							BgL_list3749z00_1017);
																				}}
																				{	/* BackEnd/init.scm 85 */
																					obj_t BgL_list3746z00_1014;

																					BgL_list3746z00_1014 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3741z00_1011 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3742z00_1012,
																						BgL_list3746z00_1014);
																			}}
																			BgL_arg3737z00_1007 =
																				MAKE_PAIR(BgL_arg3740z00_1010,
																				BgL_arg3741z00_1011);
																		}
																		{	/* BackEnd/init.scm 84 */
																			obj_t BgL_list3739z00_1009;

																			BgL_list3739z00_1009 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3736z00_1006 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3737z00_1007,
																				BgL_list3739z00_1009);
																	}}
																	BgL_arg3733z00_1003 =
																		MAKE_PAIR(BgL_arg3735z00_1005,
																		BgL_arg3736z00_1006);
																}
																BgL_arg3728z00_998 =
																	MAKE_PAIR(BgL_arg3733z00_1003, BNIL);
															}
															{	/* BackEnd/init.scm 87 */
																obj_t BgL_arg3750z00_1018;

																obj_t BgL_arg3751z00_1019;

																BgL_arg3750z00_1018 =
																	CNST_TABLE_REF(((long) 15));
																{	/* BackEnd/init.scm 87 */
																	obj_t BgL_list3752z00_1020;

																	{	/* BackEnd/init.scm 87 */
																		obj_t BgL_arg3753z00_1021;

																		obj_t BgL_arg3754z00_1022;

																		BgL_arg3753z00_1021 =
																			CNST_TABLE_REF(((long) 16));
																		BgL_arg3754z00_1022 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3752z00_1020 =
																			MAKE_PAIR(BgL_arg3753z00_1021,
																			BgL_arg3754z00_1022);
																	}
																	BgL_arg3751z00_1019 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(CNST_TABLE_REF(((long) 17)),
																		BgL_list3752z00_1020);
																}
																BgL_arg3729z00_999 =
																	MAKE_PAIR(BgL_arg3750z00_1018,
																	BgL_arg3751z00_1019);
															}
															{	/* BackEnd/init.scm 84 */
																obj_t BgL_list3731z00_1001;

																{	/* BackEnd/init.scm 84 */
																	obj_t BgL_arg3732z00_1002;

																	BgL_arg3732z00_1002 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3731z00_1001 =
																		MAKE_PAIR(BgL_arg3729z00_999,
																		BgL_arg3732z00_1002);
																}
																BgL_arg3727z00_997 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3728z00_998, BgL_list3731z00_1001);
														}}
														BgL_arg3709z00_979 =
															MAKE_PAIR(BgL_arg3726z00_996, BgL_arg3727z00_997);
													}
												else
													{	/* BackEnd/init.scm 88 */
														obj_t BgL_arg3755z00_1023;

														obj_t BgL_arg3756z00_1024;

														BgL_arg3755z00_1023 = CNST_TABLE_REF(((long) 15));
														{	/* BackEnd/init.scm 88 */
															obj_t BgL_arg3757z00_1025;

															obj_t BgL_arg3758z00_1026;

															{	/* BackEnd/init.scm 88 */
																obj_t BgL_res3862z00_1508;

																{	/* BackEnd/init.scm 88 */
																	obj_t BgL_symbolz00_1506;

																	BgL_symbolz00_1506 =
																		BGl_za2moduleza2z00zzmodule_modulez00;
																	{	/* BackEnd/init.scm 88 */
																		obj_t BgL_arg2063z00_1507;

																		BgL_arg2063z00_1507 =
																			SYMBOL_TO_STRING(BgL_symbolz00_1506);
																		BgL_res3862z00_1508 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_1507);
																}}
																BgL_arg3757z00_1025 = BgL_res3862z00_1508;
															}
															BgL_arg3758z00_1026 = CNST_TABLE_REF(((long) 16));
															{	/* BackEnd/init.scm 88 */
																obj_t BgL_list3760z00_1028;

																{	/* BackEnd/init.scm 88 */
																	obj_t BgL_arg3761z00_1029;

																	BgL_arg3761z00_1029 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3760z00_1028 =
																		MAKE_PAIR(BgL_arg3758z00_1026,
																		BgL_arg3761z00_1029);
																}
																BgL_arg3756z00_1024 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3757z00_1025, BgL_list3760z00_1028);
														}}
														BgL_arg3709z00_979 =
															MAKE_PAIR(BgL_arg3755z00_1023,
															BgL_arg3756z00_1024);
											}}
											{	/* BackEnd/init.scm 81 */
												obj_t BgL_list3711z00_981;

												{	/* BackEnd/init.scm 81 */
													obj_t BgL_arg3712z00_982;

													{	/* BackEnd/init.scm 81 */
														obj_t BgL_arg3713z00_983;

														BgL_arg3713z00_983 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3712z00_982 =
															MAKE_PAIR(BgL_arg3709z00_979, BgL_arg3713z00_983);
													}
													BgL_list3711z00_981 =
														MAKE_PAIR(BgL_ubodyz00_954, BgL_arg3712z00_982);
												}
												BgL_arg3707z00_977 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3708z00_978, BgL_list3711z00_981);
										}}
										BgL_bodyz00_955 =
											MAKE_PAIR(BgL_arg3706z00_976, BgL_arg3707z00_977);
									}
								{	/* BackEnd/init.scm 79 */
									BgL_localz00_bglt BgL_cvarz00_956;

									BgL_cvarz00_956 =
										BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
												(long) 11)),
										(BgL_typez00_bglt) (BGl_za2longza2z00zztype_cachez00));
									{	/* BackEnd/init.scm 90 */
										BgL_localz00_bglt BgL_nvarz00_957;

										BgL_nvarz00_957 =
											BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
													(long) 16)),
											(BgL_typez00_bglt) (BGl_za2stringza2z00zztype_cachez00));
										{	/* BackEnd/init.scm 91 */
											BgL_nodez00_bglt BgL_nodez00_958;

											{	/* BackEnd/init.scm 92 */
												obj_t BgL__z00_968;

												BgL__z00_968 = BGl_za2_za2z00zztype_cachez00;
												BGl_za2_za2z00zztype_cachez00 =
													BGl_za2objza2z00zztype_cachez00;
												{	/* BackEnd/init.scm 94 */
													BgL_nodez00_bglt BgL_nodez00_969;

													{	/* BackEnd/init.scm 95 */
														BgL_nodez00_bglt BgL_arg3700z00_970;

														{	/* BackEnd/init.scm 95 */
															obj_t BgL_arg3701z00_971;

															obj_t BgL_arg3703z00_973;

															{	/* BackEnd/init.scm 95 */
																obj_t BgL_list3704z00_974;

																{	/* BackEnd/init.scm 95 */
																	obj_t BgL_arg3705z00_975;

																	BgL_arg3705z00_975 =
																		MAKE_PAIR((obj_t) (BgL_nvarz00_957), BNIL);
																	BgL_list3704z00_974 =
																		MAKE_PAIR(
																		(obj_t) (BgL_cvarz00_956),
																		BgL_arg3705z00_975);
																}
																BgL_arg3701z00_971 = BgL_list3704z00_974;
															}
															BgL_arg3703z00_973 = CNST_TABLE_REF(((long) 18));
															BgL_arg3700z00_970 =
																BGl_sexpzd2ze3nodez31zzast_sexpz00
																(BgL_bodyz00_955, BgL_arg3701z00_971, BNIL,
																BgL_arg3703z00_973);
														}
														BgL_nodez00_969 =
															BGl_coercez12z12zzcoerce_coercez00
															(BgL_arg3700z00_970, (obj_t) (BgL_reqz00_951),
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00), ((bool_t) 0));
													}
													BGl_za2_za2z00zztype_cachez00 = BgL__z00_968;
													BgL_nodez00_958 = BgL_nodez00_969;
											}}
											{	/* BackEnd/init.scm 92 */
												BgL_globalz00_bglt BgL_initz00_959;

												{	/* BackEnd/init.scm 104 */
													obj_t BgL_arg3692z00_960;

													obj_t BgL_arg3693z00_961;

													obj_t BgL_arg3694z00_962;

													obj_t BgL_arg3695z00_963;

													obj_t BgL_arg3696z00_964;

													obj_t BgL_arg3697z00_965;

													BgL_arg3692z00_960 =
														BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
														(BGl_za2moduleza2z00zzmodule_modulez00);
													BgL_arg3693z00_961 = CNST_TABLE_REF(((long) 19));
													{	/* BackEnd/init.scm 106 */
														obj_t BgL_list3698z00_966;

														{	/* BackEnd/init.scm 106 */
															obj_t BgL_arg3699z00_967;

															BgL_arg3699z00_967 =
																MAKE_PAIR((obj_t) (BgL_nvarz00_957), BNIL);
															BgL_list3698z00_966 =
																MAKE_PAIR(
																(obj_t) (BgL_cvarz00_956), BgL_arg3699z00_967);
														}
														BgL_arg3694z00_962 = BgL_list3698z00_966;
													}
													BgL_arg3695z00_963 = CNST_TABLE_REF(((long) 20));
													BgL_arg3696z00_964 = CNST_TABLE_REF(((long) 21));
													BgL_arg3697z00_965 = CNST_TABLE_REF(((long) 2));
													BgL_initz00_959 =
														BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
														(BgL_arg3692z00_960, BgL_arg3693z00_961,
														BgL_arg3694z00_962,
														BGl_za2moduleza2z00zzmodule_modulez00,
														BgL_arg3695z00_963, BgL_arg3696z00_964,
														BgL_arg3697z00_965, (obj_t) (BgL_nodez00_958));
												}
												{	/* BackEnd/init.scm 103 */

													BGl_setzd2variablezd2namez12z12zzbackend_cplibz00(
														(BgL_variablez00_bglt) (BgL_reqz00_951));
													{	/* BackEnd/init.scm 113 */
														BgL_globalz00_bglt BgL_obj2026z00_1513;

														obj_t BgL_val2025z00_1514;

														BgL_obj2026z00_1513 = BgL_initz00_959;
														BgL_val2025z00_1514 = CNST_TABLE_REF(((long) 22));
														((((BgL_globalz00_bglt) CREF(BgL_obj2026z00_1513))->
																BgL_importz00) =
															((obj_t) BgL_val2025z00_1514), BUNSPEC);
													}
													{
														BgL_typez00_bglt BgL_auxz00_1707;

														BgL_variablez00_bglt BgL_auxz00_1705;

														BgL_auxz00_1707 =
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00);
														BgL_auxz00_1705 =
															(BgL_variablez00_bglt) (BgL_initz00_959);
														((((BgL_variablez00_bglt) CREF(BgL_auxz00_1705))->
																BgL_typez00) =
															((BgL_typez00_bglt) BgL_auxz00_1707), BUNSPEC);
													}
													BGl_occurzd2nodezd2inz12z12zzast_occurz00
														(BgL_nodez00_958, BgL_initz00_959);
													return BgL_initz00_959;
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
	obj_t BGl_genericzd2initzd2zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_initz00()
	{
		AN_OBJECT;
		{	/* BackEnd/init.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_unitz00(((long) 386858258),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string3869z00zzbackend_initz00));
		}
	}

#ifdef __cplusplus
}
#endif
