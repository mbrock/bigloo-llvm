/*===========================================================================*/
/*   (Cfa/show.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/show.scm)*/
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_cfunzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cfunzf2cinfozf2_bglt;

	typedef struct BgL_externzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_externzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_internzd2sfunzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		long BgL_stampz00;
	}                               *BgL_internzd2sfunzf2cinfoz20_bglt;

	typedef struct BgL_scnstzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                       *BgL_scnstzf2cinfozf2_bglt;

	typedef struct BgL_svarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_clozd2envzf3z21;
	}                      *BgL_svarzf2cinfozf2_bglt;

	typedef struct BgL_cvarzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                      *BgL_cvarzf2cinfozf2_bglt;

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;

	typedef struct BgL_reshapedzd2globalzd2_bgl
	{
		char dummy;
	}                           *BgL_reshapedzd2globalzd2_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	extern obj_t BGl_cvarzf2Cinfozf2zzcfa_infoz00;
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	static obj_t BGl_shapezd2reshapedzd2local4685z00zzcfa_showz00(obj_t, obj_t);
	extern obj_t BGl_reshapedzd2globalzd2zzcfa_infoz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_showz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_showz00();
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_cfunzf2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_cfazd2variablezd2shapez00zzcfa_showz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_showzd2cfazd2resultsz00zzcfa_showz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_showz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_showz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_showz00();
	static obj_t BGl__showzd2cfazd2resultsz00zzcfa_showz00(obj_t, obj_t);
	static obj_t BGl__showzd2cfazd2nbzd2iterationszd2zzcfa_showz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_showz00();
	extern obj_t BGl_getzd2allocszd2zzcfa_collectz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_svarzf2Cinfozf2zzcfa_infoz00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_shapezd2reshapedzd2globa4687z00zzcfa_showz00(obj_t, obj_t);
	extern obj_t BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_showz00();
	extern obj_t BGl_scnstzf2Cinfozf2zzcfa_infoz00;
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4827z00zzcfa_showz00,
		BgL_bgl_shapeza7d2reshaped4831za7,
		BGl_shapezd2reshapedzd2local4685z00zzcfa_showz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4829z00zzcfa_showz00,
		BgL_bgl_shapeza7d2reshaped4832za7,
		BGl_shapezd2reshapedzd2globa4687z00zzcfa_showz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_showzd2cfazd2resultszd2envzd2zzcfa_showz00,
		BgL_bgl__showza7d2cfaza7d2re4833z00,
		BGl__showzd2cfazd2resultsz00zzcfa_showz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4824z00zzcfa_showz00,
		BgL_bgl_string4824za700za7za7c4834za7, " Iterations)", 12);
	      DEFINE_STRING(BGl_string4825z00zzcfa_showz00,
		BgL_bgl_string4825za700za7za7c4835za7, "      (", 7);
	      DEFINE_STRING(BGl_string4826z00zzcfa_showz00,
		BgL_bgl_string4826za700za7za7c4836za7, " ", 1);
	      DEFINE_STRING(BGl_string4828z00zzcfa_showz00,
		BgL_bgl_string4828za700za7za7c4837za7, "shape", 5);
	      DEFINE_STRING(BGl_string4830z00zzcfa_showz00,
		BgL_bgl_string4830za700za7za7c4838za7, "cfa_show", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_showzd2cfazd2nbzd2iterationszd2envz00zzcfa_showz00,
		BgL_bgl__showza7d2cfaza7d2nb4839z00,
		BGl__showzd2cfazd2nbzd2iterationszd2zzcfa_showz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_showz00(long
		BgL_checksumz00_1674, char *BgL_fromz00_1675)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_showz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_showz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_showz00();
					BGl_importedzd2moduleszd2initz00zzcfa_showz00();
					BGl_methodzd2initzd2zzcfa_showz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_showz00()
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_show");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cfa_show");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_show");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_showz00()
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 15 */
			return BUNSPEC;
		}
	}



/* show-cfa-nb-iterations */
	BGL_EXPORTED_DEF obj_t BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00()
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 35 */
			{	/* Cfa/show.scm 36 */
				long BgL_arg4690z00_1047;

				BgL_arg4690z00_1047 =
					(((long) 1) + (long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00));
				{	/* Cfa/show.scm 36 */
					obj_t BgL_list4692z00_1049;

					{	/* Cfa/show.scm 36 */
						obj_t BgL_arg4693z00_1050;

						{	/* Cfa/show.scm 36 */
							obj_t BgL_arg4694z00_1051;

							{	/* Cfa/show.scm 36 */
								obj_t BgL_arg4695z00_1052;

								BgL_arg4695z00_1052 =
									MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
								BgL_arg4694z00_1051 =
									MAKE_PAIR(BGl_string4824z00zzcfa_showz00,
									BgL_arg4695z00_1052);
							}
							BgL_arg4693z00_1050 =
								MAKE_PAIR(BINT(BgL_arg4690z00_1047), BgL_arg4694z00_1051);
						}
						BgL_list4692z00_1049 =
							MAKE_PAIR(BGl_string4825z00zzcfa_showz00, BgL_arg4693z00_1050);
					}
					return
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list4692z00_1049);
		}}}
	}



/* _show-cfa-nb-iterations */
	obj_t BGl__showzd2cfazd2nbzd2iterationszd2zzcfa_showz00(obj_t BgL_envz00_1663)
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 35 */
			return BGl_showzd2cfazd2nbzd2iterationszd2zzcfa_showz00();
		}
	}



/* show-cfa-results */
	BGL_EXPORTED_DEF obj_t BGl_showzd2cfazd2resultsz00zzcfa_showz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 41 */
			{	/* Cfa/show.scm 46 */
				bool_t BgL_testz00_1697;

				{	/* Cfa/show.scm 46 */
					obj_t BgL_auxz00_1698;

					BgL_auxz00_1698 = BGl_getzd2allocszd2zzcfa_collectz00();
					BgL_testz00_1697 = PAIRP(BgL_auxz00_1698);
				}
				if (BgL_testz00_1697)
					{	/* Cfa/show.scm 46 */
						BNIL;
					}
				else
					{	/* Cfa/show.scm 46 */
						BFALSE;
					}
			}
			{	/* Cfa/show.scm 47 */
				obj_t BgL_g4683z00_1055;

				BgL_g4683z00_1055 = BGl_getzd2allocszd2zzcfa_collectz00();
				{
					obj_t BgL_l4681z00_1057;

					BgL_l4681z00_1057 = BgL_g4683z00_1055;
				BgL_zc3anonymousza34698ze3z83_1058:
					if (PAIRP(BgL_l4681z00_1057))
						{	/* Cfa/show.scm 49 */
							{
								obj_t BgL_l4681z00_1704;

								BgL_l4681z00_1704 = CDR(BgL_l4681z00_1057);
								BgL_l4681z00_1057 = BgL_l4681z00_1704;
								goto BgL_zc3anonymousza34698ze3z83_1058;
							}
						}
					else
						{	/* Cfa/show.scm 49 */
							((bool_t) 1);
						}
				}
			}
			return BNIL;
		}
	}



/* _show-cfa-results */
	obj_t BGl__showzd2cfazd2resultsz00zzcfa_showz00(obj_t BgL_envz00_1664,
		obj_t BgL_globalsz00_1665)
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 41 */
			return BGl_showzd2cfazd2resultsz00zzcfa_showz00(BgL_globalsz00_1665);
		}
	}



/* cfa-variable-shape */
	obj_t BGl_cfazd2variablezd2shapez00zzcfa_showz00(obj_t BgL_variablez00_4,
		obj_t BgL_portz00_5)
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 93 */
			{	/* Cfa/show.scm 94 */
				BgL_valuez00_bglt BgL_valuez00_1063;

				{
					BgL_variablez00_bglt BgL_auxz00_1707;

					BgL_auxz00_1707 = (BgL_variablez00_bglt) (BgL_variablez00_4);
					BgL_valuez00_1063 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1707))->BgL_valuez00);
				}
				{	/* Cfa/show.scm 96 */
					bool_t BgL_testz00_1710;

					{	/* Cfa/show.scm 96 */
						obj_t BgL_obj3501z00_1635;

						BgL_obj3501z00_1635 = (obj_t) (BgL_valuez00_1063);
						BgL_testz00_1710 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3501z00_1635,
							BGl_svarzf2Cinfozf2zzcfa_infoz00);
					}
					if (BgL_testz00_1710)
						{	/* Cfa/show.scm 96 */
							bgl_display_string(BGl_string4826z00zzcfa_showz00, BgL_portz00_5);
							{	/* Cfa/show.scm 98 */
								obj_t BgL_arg4702z00_1065;

								{	/* Cfa/show.scm 98 */
									BgL_approxz00_bglt BgL_arg4703z00_1066;

									{	/* Cfa/show.scm 98 */
										BgL_svarzf2cinfozf2_bglt BgL_obj3502z00_1638;

										BgL_obj3502z00_1638 =
											(BgL_svarzf2cinfozf2_bglt) (BgL_valuez00_1063);
										{
											obj_t BgL_auxz00_1715;

											{	/* Cfa/show.scm 98 */
												BgL_objectz00_bglt BgL_auxz00_1716;

												BgL_auxz00_1716 =
													(BgL_objectz00_bglt) (BgL_obj3502z00_1638);
												BgL_auxz00_1715 = BGL_OBJECT_WIDENING(BgL_auxz00_1716);
											}
											BgL_arg4703z00_1066 =
												(((BgL_svarzf2cinfozf2_bglt) CREF(BgL_auxz00_1715))->
												BgL_approxz00);
										}
									}
									BgL_arg4702z00_1065 =
										BGl_shapez00zztools_shapez00((obj_t) (BgL_arg4703z00_1066));
								}
								bgl_display_obj(BgL_arg4702z00_1065, BgL_portz00_5);
							}
						}
					else
						{	/* Cfa/show.scm 99 */
							bool_t BgL_testz00_1723;

							{	/* Cfa/show.scm 99 */
								obj_t BgL_obj3516z00_1639;

								BgL_obj3516z00_1639 = (obj_t) (BgL_valuez00_1063);
								BgL_testz00_1723 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3516z00_1639,
									BGl_cvarzf2Cinfozf2zzcfa_infoz00);
							}
							if (BgL_testz00_1723)
								{	/* Cfa/show.scm 99 */
									bgl_display_string(BGl_string4826z00zzcfa_showz00,
										BgL_portz00_5);
									{	/* Cfa/show.scm 101 */
										obj_t BgL_arg4705z00_1068;

										{	/* Cfa/show.scm 101 */
											BgL_approxz00_bglt BgL_arg4706z00_1069;

											{	/* Cfa/show.scm 101 */
												BgL_cvarzf2cinfozf2_bglt BgL_obj3517z00_1642;

												BgL_obj3517z00_1642 =
													(BgL_cvarzf2cinfozf2_bglt) (BgL_valuez00_1063);
												{
													obj_t BgL_auxz00_1728;

													{	/* Cfa/show.scm 101 */
														BgL_objectz00_bglt BgL_auxz00_1729;

														BgL_auxz00_1729 =
															(BgL_objectz00_bglt) (BgL_obj3517z00_1642);
														BgL_auxz00_1728 =
															BGL_OBJECT_WIDENING(BgL_auxz00_1729);
													}
													BgL_arg4706z00_1069 =
														(((BgL_cvarzf2cinfozf2_bglt)
															CREF(BgL_auxz00_1728))->BgL_approxz00);
												}
											}
											BgL_arg4705z00_1068 =
												BGl_shapez00zztools_shapez00(
												(obj_t) (BgL_arg4706z00_1069));
										}
										bgl_display_obj(BgL_arg4705z00_1068, BgL_portz00_5);
									}
								}
							else
								{	/* Cfa/show.scm 102 */
									bool_t BgL_testz00_1736;

									{	/* Cfa/show.scm 102 */
										obj_t BgL_obj3473z00_1643;

										BgL_obj3473z00_1643 = (obj_t) (BgL_valuez00_1063);
										BgL_testz00_1736 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3473z00_1643,
											BGl_scnstzf2Cinfozf2zzcfa_infoz00);
									}
									if (BgL_testz00_1736)
										{	/* Cfa/show.scm 102 */
											bgl_display_string(BGl_string4826z00zzcfa_showz00,
												BgL_portz00_5);
											{	/* Cfa/show.scm 104 */
												obj_t BgL_arg4708z00_1071;

												{	/* Cfa/show.scm 104 */
													BgL_approxz00_bglt BgL_arg4710z00_1072;

													{	/* Cfa/show.scm 104 */
														BgL_scnstzf2cinfozf2_bglt BgL_obj3474z00_1646;

														BgL_obj3474z00_1646 =
															(BgL_scnstzf2cinfozf2_bglt) (BgL_valuez00_1063);
														{
															obj_t BgL_auxz00_1741;

															{	/* Cfa/show.scm 104 */
																BgL_objectz00_bglt BgL_auxz00_1742;

																BgL_auxz00_1742 =
																	(BgL_objectz00_bglt) (BgL_obj3474z00_1646);
																BgL_auxz00_1741 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_1742);
															}
															BgL_arg4710z00_1072 =
																(((BgL_scnstzf2cinfozf2_bglt)
																	CREF(BgL_auxz00_1741))->BgL_approxz00);
														}
													}
													BgL_arg4708z00_1071 =
														BGl_shapez00zztools_shapez00(
														(obj_t) (BgL_arg4710z00_1072));
												}
												bgl_display_obj(BgL_arg4708z00_1071, BgL_portz00_5);
											}
										}
									else
										{	/* Cfa/show.scm 105 */
											bool_t BgL_testz00_1749;

											{	/* Cfa/show.scm 105 */
												obj_t BgL_obj3414z00_1647;

												BgL_obj3414z00_1647 = (obj_t) (BgL_valuez00_1063);
												BgL_testz00_1749 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3414z00_1647,
													BGl_internzd2sfunzf2Cinfoz20zzcfa_infoz00);
											}
											if (BgL_testz00_1749)
												{	/* Cfa/show.scm 105 */
													bgl_display_string(BGl_string4826z00zzcfa_showz00,
														BgL_portz00_5);
													{	/* Cfa/show.scm 107 */
														obj_t BgL_arg4712z00_1074;

														{	/* Cfa/show.scm 107 */
															BgL_approxz00_bglt BgL_arg4713z00_1075;

															{	/* Cfa/show.scm 107 */
																BgL_internzd2sfunzf2cinfoz20_bglt
																	BgL_obj3415z00_1650;
																BgL_obj3415z00_1650 =
																	(BgL_internzd2sfunzf2cinfoz20_bglt)
																	(BgL_valuez00_1063);
																{
																	obj_t BgL_auxz00_1754;

																	{	/* Cfa/show.scm 107 */
																		BgL_objectz00_bglt BgL_auxz00_1755;

																		BgL_auxz00_1755 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3415z00_1650);
																		BgL_auxz00_1754 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1755);
																	}
																	BgL_arg4713z00_1075 =
																		(((BgL_internzd2sfunzf2cinfoz20_bglt)
																			CREF(BgL_auxz00_1754))->BgL_approxz00);
																}
															}
															BgL_arg4712z00_1074 =
																BGl_shapez00zztools_shapez00(
																(obj_t) (BgL_arg4713z00_1075));
														}
														bgl_display_obj(BgL_arg4712z00_1074, BgL_portz00_5);
													}
												}
											else
												{	/* Cfa/show.scm 108 */
													bool_t BgL_testz00_1762;

													{	/* Cfa/show.scm 108 */
														obj_t BgL_obj3343z00_1651;

														BgL_obj3343z00_1651 = (obj_t) (BgL_valuez00_1063);
														BgL_testz00_1762 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj3343z00_1651,
															BGl_externzd2sfunzf2Cinfoz20zzcfa_infoz00);
													}
													if (BgL_testz00_1762)
														{	/* Cfa/show.scm 108 */
															bgl_display_string(BGl_string4826z00zzcfa_showz00,
																BgL_portz00_5);
															{	/* Cfa/show.scm 110 */
																obj_t BgL_arg4715z00_1077;

																{	/* Cfa/show.scm 110 */
																	BgL_approxz00_bglt BgL_arg4716z00_1078;

																	{	/* Cfa/show.scm 110 */
																		BgL_externzd2sfunzf2cinfoz20_bglt
																			BgL_obj3344z00_1654;
																		BgL_obj3344z00_1654 =
																			(BgL_externzd2sfunzf2cinfoz20_bglt)
																			(BgL_valuez00_1063);
																		{
																			obj_t BgL_auxz00_1767;

																			{	/* Cfa/show.scm 110 */
																				BgL_objectz00_bglt BgL_auxz00_1768;

																				BgL_auxz00_1768 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3344z00_1654);
																				BgL_auxz00_1767 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1768);
																			}
																			BgL_arg4716z00_1078 =
																				(((BgL_externzd2sfunzf2cinfoz20_bglt)
																					CREF(BgL_auxz00_1767))->
																				BgL_approxz00);
																		}
																	}
																	BgL_arg4715z00_1077 =
																		BGl_shapez00zztools_shapez00(
																		(obj_t) (BgL_arg4716z00_1078));
																}
																bgl_display_obj(BgL_arg4715z00_1077,
																	BgL_portz00_5);
															}
														}
													else
														{	/* Cfa/show.scm 111 */
															bool_t BgL_testz00_1775;

															{	/* Cfa/show.scm 111 */
																obj_t BgL_obj3290z00_1655;

																BgL_obj3290z00_1655 =
																	(obj_t) (BgL_valuez00_1063);
																BgL_testz00_1775 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj3290z00_1655,
																	BGl_cfunzf2Cinfozf2zzcfa_infoz00);
															}
															if (BgL_testz00_1775)
																{	/* Cfa/show.scm 111 */
																	bgl_display_string
																		(BGl_string4826z00zzcfa_showz00,
																		BgL_portz00_5);
																	{	/* Cfa/show.scm 113 */
																		obj_t BgL_arg4718z00_1080;

																		{	/* Cfa/show.scm 113 */
																			BgL_approxz00_bglt BgL_arg4719z00_1081;

																			{	/* Cfa/show.scm 113 */
																				BgL_cfunzf2cinfozf2_bglt
																					BgL_obj3291z00_1658;
																				BgL_obj3291z00_1658 =
																					(BgL_cfunzf2cinfozf2_bglt)
																					(BgL_valuez00_1063);
																				{
																					obj_t BgL_auxz00_1780;

																					{	/* Cfa/show.scm 113 */
																						BgL_objectz00_bglt BgL_auxz00_1781;

																						BgL_auxz00_1781 =
																							(BgL_objectz00_bglt)
																							(BgL_obj3291z00_1658);
																						BgL_auxz00_1780 =
																							BGL_OBJECT_WIDENING
																							(BgL_auxz00_1781);
																					}
																					BgL_arg4719z00_1081 =
																						(((BgL_cfunzf2cinfozf2_bglt)
																							CREF(BgL_auxz00_1780))->
																						BgL_approxz00);
																				}
																			}
																			BgL_arg4718z00_1080 =
																				BGl_shapez00zztools_shapez00(
																				(obj_t) (BgL_arg4719z00_1081));
																		}
																		bgl_display_obj(BgL_arg4718z00_1080,
																			BgL_portz00_5);
																	}
																}
															else
																{	/* Cfa/show.scm 111 */
																	BFALSE;
																}
														}
												}
										}
								}
						}
				}
				{	/* Cfa/show.scm 114 */
					obj_t BgL_arg4720z00_1082;

					BgL_arg4720z00_1082 = bgl_close_output_port(BgL_portz00_5);
					{	/* Cfa/show.scm 114 */
						obj_t BgL_stringz00_1660;

						BgL_stringz00_1660 = BgL_arg4720z00_1082;
						return string_to_symbol(BSTRING_TO_STRING(BgL_stringz00_1660));
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_showz00()
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_showz00()
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00,
				BGl_reshapedzd2localzd2zzcfa_infoz00, BGl_proc4827z00zzcfa_showz00,
				BGl_string4828z00zzcfa_showz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00,
				BGl_reshapedzd2globalzd2zzcfa_infoz00, BGl_proc4829z00zzcfa_showz00,
				BGl_string4828z00zzcfa_showz00);
		}
	}



/* shape-reshaped-globa4687 */
	obj_t BGl_shapezd2reshapedzd2globa4687z00zzcfa_showz00(obj_t BgL_envz00_1670,
		obj_t BgL_globalz00_1671)
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 85 */
			{
				BgL_reshapedzd2globalzd2_bglt BgL_globalz00_1620;

				BgL_globalz00_1620 =
					(BgL_reshapedzd2globalzd2_bglt) (BgL_globalz00_1671);
				{

					{	/* Cfa/show.scm 86 */
						obj_t BgL_portz00_1623;

						{	/* Cfa/show.scm 86 */

							{	/* Cfa/show.scm 86 */

								BgL_portz00_1623 =
									BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
							}
						}
						{	/* Cfa/show.scm 87 */
							obj_t BgL_auxz00_1794;

							{	/* Cfa/show.scm 85 */
								obj_t BgL_nextzd2method4686zd2_1626;

								BgL_nextzd2method4686zd2_1626 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_globalz00_1620),
									BGl_shapezd2envzd2zztools_shapez00,
									BGl_reshapedzd2globalzd2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4686zd2_1626))
									{	/* Cfa/show.scm 85 */
										BgL_auxz00_1794 =
											PROCEDURE_ENTRY(BgL_nextzd2method4686zd2_1626)
											(BgL_nextzd2method4686zd2_1626,
											(obj_t) (BgL_globalz00_1620), BEOA);
									}
								else
									{	/* Cfa/show.scm 85 */
										BgL_auxz00_1794 =
											BGl_shapez00zztools_shapez00(
											(obj_t) (BgL_globalz00_1620));
									}
							}
							bgl_display_obj(BgL_auxz00_1794, BgL_portz00_1623);
						}
						return
							BGl_cfazd2variablezd2shapez00zzcfa_showz00(
							(obj_t) (BgL_globalz00_1620), BgL_portz00_1623);
					}
				}
			}
		}
	}



/* shape-reshaped-local4685 */
	obj_t BGl_shapezd2reshapedzd2local4685z00zzcfa_showz00(obj_t BgL_envz00_1672,
		obj_t BgL_localz00_1673)
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 77 */
			{
				BgL_reshapedzd2localzd2_bglt BgL_localz00_1612;

				BgL_localz00_1612 = (BgL_reshapedzd2localzd2_bglt) (BgL_localz00_1673);
				{

					{	/* Cfa/show.scm 78 */
						obj_t BgL_portz00_1615;

						{	/* Cfa/show.scm 78 */

							{	/* Cfa/show.scm 78 */

								BgL_portz00_1615 =
									BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
							}
						}
						{	/* Cfa/show.scm 79 */
							obj_t BgL_auxz00_1809;

							{	/* Cfa/show.scm 77 */
								obj_t BgL_nextzd2method4684zd2_1618;

								BgL_nextzd2method4684zd2_1618 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_localz00_1612),
									BGl_shapezd2envzd2zztools_shapez00,
									BGl_reshapedzd2localzd2zzcfa_infoz00);
								if (PROCEDUREP(BgL_nextzd2method4684zd2_1618))
									{	/* Cfa/show.scm 77 */
										BgL_auxz00_1809 =
											PROCEDURE_ENTRY(BgL_nextzd2method4684zd2_1618)
											(BgL_nextzd2method4684zd2_1618,
											(obj_t) (BgL_localz00_1612), BEOA);
									}
								else
									{	/* Cfa/show.scm 77 */
										BgL_auxz00_1809 =
											BGl_shapez00zztools_shapez00((obj_t) (BgL_localz00_1612));
									}
							}
							bgl_display_obj(BgL_auxz00_1809, BgL_portz00_1615);
						}
						return
							BGl_cfazd2variablezd2shapez00zzcfa_showz00(
							(obj_t) (BgL_localz00_1612), BgL_portz00_1615);
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_showz00()
	{
		AN_OBJECT;
		{	/* Cfa/show.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 242728873),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			BGl_modulezd2initializa7ationz75zzcfa_collectz00(((long) 25125809),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4830z00zzcfa_showz00));
		}
	}

#ifdef __cplusplus
}
#endif
