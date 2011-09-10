/*===========================================================================*/
/*   (Coerce/funcall.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Coerce/funcall.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                 *BgL_funcallz00_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_coercez12zd2funcall3351zc0zzcoerce_funcallz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzcoerce_funcallz00();
	extern BgL_nodez00_bglt BGl_convertz12z12zzcoerce_convertz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_convertz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcoerce_funcallz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcoerce_funcallz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcoerce_funcallz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_makezd2arityzd2errorzd2nodezd2zzcoerce_funcallz00(BgL_localz00_bglt,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcoerce_funcallz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t
		BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(BgL_funcallz00_bglt,
		obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcoerce_funcallz00();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_currentzd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t string_to_symbol(char *);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_funcallz00();
	static obj_t __cnst[18];


	extern obj_t BGl_coercez12zd2envzc0zzcoerce_coercez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3557z00zzcoerce_funcallz00,
		BgL_bgl_coerceza712za7d2func3563z00,
		BGl_coercez12zd2funcall3351zc0zzcoerce_funcallz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string3556z00zzcoerce_funcallz00,
		BgL_bgl_string3556za700za7za7c3564za7, ":Wrong number of arguments", 26);
	      DEFINE_STRING(BGl_string3558z00zzcoerce_funcallz00,
		BgL_bgl_string3558za700za7za7c3565za7, "coerce!", 7);
	      DEFINE_STRING(BGl_string3560z00zzcoerce_funcallz00,
		BgL_bgl_string3560za700za7za7c3566za7,
		"correct-arity? if let ::int len fun (light elight) dummy __eoa__ _ quote failure error/location __error @ begin location bdb ",
		125);
	      DEFINE_STRING(BGl_string3559z00zzcoerce_funcallz00,
		BgL_bgl_string3559za700za7za7c3567za7, "coerce_funcall", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzcoerce_funcallz00(long
		BgL_checksumz00_1509, char *BgL_fromz00_1510)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcoerce_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzcoerce_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcoerce_funcallz00();
					BGl_cnstzd2initzd2zzcoerce_funcallz00();
					BGl_importedzd2moduleszd2initz00zzcoerce_funcallz00();
					BGl_methodzd2initzd2zzcoerce_funcallz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcoerce_funcallz00()
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"coerce_funcall");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"coerce_funcall");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcoerce_funcallz00()
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 15 */
			{	/* Coerce/funcall.scm 15 */
				obj_t BgL_cportz00_1501;

				BgL_cportz00_1501 =
					bgl_open_input_string(BGl_string3560z00zzcoerce_funcallz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1502;

					BgL_iz00_1502 = ((long) 17);
				BgL_loopz00_1503:
					if ((BgL_iz00_1502 == ((long) -1)))
						{	/* Coerce/funcall.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Coerce/funcall.scm 15 */
							{	/* Coerce/funcall.scm 15 */
								obj_t BgL_arg3562z00_1505;

								{	/* Coerce/funcall.scm 15 */

									{	/* Coerce/funcall.scm 15 */
										obj_t BgL_locationz00_1507;

										BgL_locationz00_1507 = BBOOL(((bool_t) 0));
										{	/* Coerce/funcall.scm 15 */

											BgL_arg3562z00_1505 =
												BGl_readz00zz__readerz00(BgL_cportz00_1501,
												BgL_locationz00_1507);
										}
									}
								}
								{	/* Coerce/funcall.scm 15 */
									int BgL_auxz00_1529;

									BgL_auxz00_1529 = (int) (BgL_iz00_1502);
									CNST_TABLE_SET(BgL_auxz00_1529, BgL_arg3562z00_1505);
							}}
							{	/* Coerce/funcall.scm 15 */
								int BgL_auxz00_1508;

								BgL_auxz00_1508 = (int) ((BgL_iz00_1502 - ((long) 1)));
								{
									long BgL_iz00_1534;

									BgL_iz00_1534 = (long) (BgL_auxz00_1508);
									BgL_iz00_1502 = BgL_iz00_1534;
									goto BgL_loopz00_1503;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcoerce_funcallz00()
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 15 */
			return BUNSPEC;
		}
	}



/* make-arity-error-node */
	BgL_nodez00_bglt
		BGl_makezd2arityzd2errorzd2nodezd2zzcoerce_funcallz00(BgL_localz00_bglt
		BgL_funz00_19, obj_t BgL_errorzd2msgzd2_20, obj_t BgL_locz00_21,
		obj_t BgL_callerz00_22, obj_t BgL_toz00_23)
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 85 */
			{	/* Coerce/funcall.scm 86 */
				BgL_nodez00_bglt BgL_nodez00_895;

				{	/* Coerce/funcall.scm 87 */
					obj_t BgL_arg3361z00_896;

					{	/* Coerce/funcall.scm 87 */
						bool_t BgL_testz00_1536;

						{	/* Coerce/funcall.scm 87 */
							bool_t BgL_testz00_1537;

							if (
								((long) CINT(BGl_za2compilerzd2debugza2zd2zzengine_paramz00) >
									((long) 0)))
								{	/* Coerce/funcall.scm 87 */
									BgL_testz00_1537 = ((bool_t) 1);
								}
							else
								{	/* Coerce/funcall.scm 87 */
									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
											((long) 0)))
										{	/* Coerce/funcall.scm 89 */
											obj_t BgL_arg3420z00_955;

											obj_t BgL_arg3421z00_956;

											BgL_arg3420z00_955 = CNST_TABLE_REF(((long) 0));
											{	/* Coerce/funcall.scm 91 */
												obj_t BgL_arg3422z00_957;

												BgL_arg3422z00_957 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												{
													BgL_backendz00_bglt BgL_auxz00_1546;

													BgL_auxz00_1546 =
														(BgL_backendz00_bglt) (BgL_arg3422z00_957);
													BgL_arg3421z00_956 =
														(((BgL_backendz00_bglt) CREF(BgL_auxz00_1546))->
														BgL_debugzd2supportzd2);
											}}
											BgL_testz00_1537 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_arg3420z00_955, BgL_arg3421z00_956));
										}
									else
										{	/* Coerce/funcall.scm 88 */
											BgL_testz00_1537 = ((bool_t) 0);
										}
								}
							if (BgL_testz00_1537)
								{	/* Coerce/funcall.scm 87 */
									if (STRUCTP(BgL_locz00_21))
										{	/* Coerce/funcall.scm 92 */
											BgL_testz00_1536 =
												(STRUCT_KEY(BgL_locz00_21) ==
												CNST_TABLE_REF(((long) 1)));
										}
									else
										{	/* Coerce/funcall.scm 92 */
											BgL_testz00_1536 = ((bool_t) 0);
										}
								}
							else
								{	/* Coerce/funcall.scm 87 */
									BgL_testz00_1536 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_1536)
							{	/* Coerce/funcall.scm 93 */
								obj_t BgL_arg3363z00_898;

								obj_t BgL_arg3364z00_899;

								BgL_arg3363z00_898 = CNST_TABLE_REF(((long) 2));
								{	/* Coerce/funcall.scm 94 */
									obj_t BgL_arg3365z00_900;

									obj_t BgL_arg3366z00_901;

									{	/* Coerce/funcall.scm 94 */
										obj_t BgL_arg3371z00_905;

										obj_t BgL_arg3372z00_906;

										{	/* Coerce/funcall.scm 94 */
											obj_t BgL_arg3373z00_907;

											obj_t BgL_arg3374z00_908;

											BgL_arg3373z00_907 = CNST_TABLE_REF(((long) 3));
											{	/* Coerce/funcall.scm 94 */
												obj_t BgL_list3375z00_909;

												{	/* Coerce/funcall.scm 94 */
													obj_t BgL_arg3376z00_910;

													obj_t BgL_arg3377z00_911;

													BgL_arg3376z00_910 = CNST_TABLE_REF(((long) 4));
													BgL_arg3377z00_911 = MAKE_PAIR(BNIL, BNIL);
													BgL_list3375z00_909 =
														MAKE_PAIR(BgL_arg3376z00_910, BgL_arg3377z00_911);
												}
												BgL_arg3374z00_908 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 5)), BgL_list3375z00_909);
											}
											BgL_arg3371z00_905 =
												MAKE_PAIR(BgL_arg3373z00_907, BgL_arg3374z00_908);
										}
										{	/* Coerce/funcall.scm 96 */
											obj_t BgL_arg3378z00_912;

											obj_t BgL_arg3379z00_913;

											obj_t BgL_arg3380z00_914;

											{	/* Coerce/funcall.scm 96 */
												obj_t BgL_arg3387z00_921;

												{	/* Coerce/funcall.scm 96 */
													obj_t BgL_arg3389z00_923;

													BgL_arg3389z00_923 =
														BGl_currentzd2functionzd2zztools_errorz00();
													{	/* Coerce/funcall.scm 95 */
														obj_t BgL_res3544z00_1443;

														{	/* Coerce/funcall.scm 95 */
															obj_t BgL_symbolz00_1441;

															BgL_symbolz00_1441 = BgL_arg3389z00_923;
															{	/* Coerce/funcall.scm 95 */
																obj_t BgL_arg2063z00_1442;

																BgL_arg2063z00_1442 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1441);
																BgL_res3544z00_1443 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1442);
														}}
														BgL_arg3387z00_921 = BgL_res3544z00_1443;
												}}
												BgL_arg3378z00_912 =
													string_append(BgL_arg3387z00_921,
													BGl_string3556z00zzcoerce_funcallz00);
											}
											BgL_arg3379z00_913 =
												BGl_locationzd2fullzd2fnamez00zztools_locationz00
												(BgL_locz00_21);
											BgL_arg3380z00_914 =
												STRUCT_REF(BgL_locz00_21, (int) (((long) 1)));
											{	/* Coerce/funcall.scm 94 */
												obj_t BgL_list3382z00_916;

												{	/* Coerce/funcall.scm 94 */
													obj_t BgL_arg3383z00_917;

													{	/* Coerce/funcall.scm 94 */
														obj_t BgL_arg3384z00_918;

														{	/* Coerce/funcall.scm 94 */
															obj_t BgL_arg3385z00_919;

															{	/* Coerce/funcall.scm 94 */
																obj_t BgL_arg3386z00_920;

																BgL_arg3386z00_920 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg3385z00_919 =
																	MAKE_PAIR(BgL_arg3380z00_914,
																	BgL_arg3386z00_920);
															}
															BgL_arg3384z00_918 =
																MAKE_PAIR(BgL_arg3379z00_913,
																BgL_arg3385z00_919);
														}
														BgL_arg3383z00_917 =
															MAKE_PAIR(
															(obj_t) (BgL_funz00_19), BgL_arg3384z00_918);
													}
													BgL_list3382z00_916 =
														MAKE_PAIR(BgL_errorzd2msgzd2_20,
														BgL_arg3383z00_917);
												}
												BgL_arg3372z00_906 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3378z00_912, BgL_list3382z00_916);
										}}
										BgL_arg3365z00_900 =
											MAKE_PAIR(BgL_arg3371z00_905, BgL_arg3372z00_906);
									}
									{	/* Coerce/funcall.scm 102 */
										obj_t BgL_arg3390z00_924;

										obj_t BgL_arg3391z00_925;

										BgL_arg3390z00_924 = CNST_TABLE_REF(((long) 6));
										{	/* Coerce/funcall.scm 102 */
											obj_t BgL_arg3392z00_926;

											obj_t BgL_arg3393z00_927;

											obj_t BgL_arg3394z00_928;

											{	/* Coerce/funcall.scm 102 */
												obj_t BgL_arg3399z00_933;

												obj_t BgL_arg3400z00_934;

												BgL_arg3399z00_933 = CNST_TABLE_REF(((long) 7));
												{	/* Coerce/funcall.scm 102 */
													obj_t BgL_list3401z00_935;

													BgL_list3401z00_935 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3400z00_934 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 8)), BgL_list3401z00_935);
												}
												BgL_arg3392z00_926 =
													MAKE_PAIR(BgL_arg3399z00_933, BgL_arg3400z00_934);
											}
											{	/* Coerce/funcall.scm 102 */
												obj_t BgL_arg3402z00_936;

												obj_t BgL_arg3403z00_937;

												BgL_arg3402z00_936 = CNST_TABLE_REF(((long) 7));
												{	/* Coerce/funcall.scm 102 */
													obj_t BgL_list3404z00_938;

													BgL_list3404z00_938 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3403z00_937 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 8)), BgL_list3404z00_938);
												}
												BgL_arg3393z00_927 =
													MAKE_PAIR(BgL_arg3402z00_936, BgL_arg3403z00_937);
											}
											{	/* Coerce/funcall.scm 102 */
												obj_t BgL_arg3405z00_939;

												obj_t BgL_arg3406z00_940;

												BgL_arg3405z00_939 = CNST_TABLE_REF(((long) 7));
												{	/* Coerce/funcall.scm 102 */
													obj_t BgL_list3407z00_941;

													BgL_list3407z00_941 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3406z00_940 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(CNST_TABLE_REF(((long) 8)), BgL_list3407z00_941);
												}
												BgL_arg3394z00_928 =
													MAKE_PAIR(BgL_arg3405z00_939, BgL_arg3406z00_940);
											}
											{	/* Coerce/funcall.scm 102 */
												obj_t BgL_list3396z00_930;

												{	/* Coerce/funcall.scm 102 */
													obj_t BgL_arg3397z00_931;

													{	/* Coerce/funcall.scm 102 */
														obj_t BgL_arg3398z00_932;

														BgL_arg3398z00_932 = MAKE_PAIR(BNIL, BNIL);
														BgL_arg3397z00_931 =
															MAKE_PAIR(BgL_arg3394z00_928, BgL_arg3398z00_932);
													}
													BgL_list3396z00_930 =
														MAKE_PAIR(BgL_arg3393z00_927, BgL_arg3397z00_931);
												}
												BgL_arg3391z00_925 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg3392z00_926, BgL_list3396z00_930);
										}}
										BgL_arg3366z00_901 =
											MAKE_PAIR(BgL_arg3390z00_924, BgL_arg3391z00_925);
									}
									{	/* Coerce/funcall.scm 93 */
										obj_t BgL_list3368z00_903;

										{	/* Coerce/funcall.scm 93 */
											obj_t BgL_arg3369z00_904;

											BgL_arg3369z00_904 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3368z00_903 =
												MAKE_PAIR(BgL_arg3366z00_901, BgL_arg3369z00_904);
										}
										BgL_arg3364z00_899 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3365z00_900, BgL_list3368z00_903);
								}}
								BgL_arg3361z00_896 =
									MAKE_PAIR(BgL_arg3363z00_898, BgL_arg3364z00_899);
							}
						else
							{	/* Coerce/funcall.scm 103 */
								obj_t BgL_arg3408z00_942;

								obj_t BgL_arg3409z00_943;

								BgL_arg3408z00_942 = CNST_TABLE_REF(((long) 6));
								{	/* Coerce/funcall.scm 104 */
									obj_t BgL_arg3410z00_944;

									{	/* Coerce/funcall.scm 104 */
										obj_t BgL_arg3415z00_949;

										{	/* Coerce/funcall.scm 104 */
											obj_t BgL_arg3417z00_951;

											BgL_arg3417z00_951 =
												BGl_currentzd2functionzd2zztools_errorz00();
											{	/* Coerce/funcall.scm 103 */
												obj_t BgL_res3545z00_1449;

												{	/* Coerce/funcall.scm 103 */
													obj_t BgL_symbolz00_1447;

													BgL_symbolz00_1447 = BgL_arg3417z00_951;
													{	/* Coerce/funcall.scm 103 */
														obj_t BgL_arg2063z00_1448;

														BgL_arg2063z00_1448 =
															SYMBOL_TO_STRING(BgL_symbolz00_1447);
														BgL_res3545z00_1449 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1448);
												}}
												BgL_arg3415z00_949 = BgL_res3545z00_1449;
										}}
										BgL_arg3410z00_944 =
											string_append(BgL_arg3415z00_949,
											BGl_string3556z00zzcoerce_funcallz00);
									}
									{	/* Coerce/funcall.scm 103 */
										obj_t BgL_list3412z00_946;

										{	/* Coerce/funcall.scm 103 */
											obj_t BgL_arg3413z00_947;

											{	/* Coerce/funcall.scm 103 */
												obj_t BgL_arg3414z00_948;

												BgL_arg3414z00_948 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg3413z00_947 =
													MAKE_PAIR(
													(obj_t) (BgL_funz00_19), BgL_arg3414z00_948);
											}
											BgL_list3412z00_946 =
												MAKE_PAIR(BgL_errorzd2msgzd2_20, BgL_arg3413z00_947);
										}
										BgL_arg3409z00_943 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3410z00_944, BgL_list3412z00_946);
								}}
								BgL_arg3361z00_896 =
									MAKE_PAIR(BgL_arg3408z00_942, BgL_arg3409z00_943);
					}}
					BgL_nodez00_895 =
						BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3361z00_896,
						BgL_locz00_21);
				}
				return
					BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_895, BgL_callerz00_22,
					(BgL_typez00_bglt) (BgL_toz00_23), ((bool_t) 0));
			}
		}
	}



/* coerce-funcall-args! */
	obj_t BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(BgL_funcallz00_bglt
		BgL_nodez00_24, obj_t BgL_callerz00_25, obj_t BgL_toz00_26,
		obj_t BgL_safez00_27)
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 114 */
			if (NULLP((((BgL_funcallz00_bglt) CREF(BgL_nodez00_24))->BgL_argsz00)))
				{	/* Coerce/funcall.scm 117 */
					obj_t BgL_arg3424z00_959;

					{	/* Coerce/funcall.scm 117 */
						BgL_nodez00_bglt BgL_arg3425z00_960;

						{	/* Coerce/funcall.scm 117 */
							obj_t BgL_arg3427z00_962;

							obj_t BgL_arg3430z00_963;

							BgL_arg3427z00_962 = CNST_TABLE_REF(((long) 9));
							{
								BgL_nodez00_bglt BgL_auxz00_1622;

								BgL_auxz00_1622 = (BgL_nodez00_bglt) (BgL_nodez00_24);
								BgL_arg3430z00_963 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_1622))->BgL_locz00);
							}
							BgL_arg3425z00_960 =
								BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
								(BgL_arg3427z00_962, BgL_arg3430z00_963);
						}
						{	/* Coerce/funcall.scm 116 */
							obj_t BgL_list3426z00_961;

							BgL_list3426z00_961 =
								MAKE_PAIR((obj_t) (BgL_arg3425z00_960), BNIL);
							BgL_arg3424z00_959 = BgL_list3426z00_961;
					}}
					return
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_24))->BgL_argsz00) =
						((obj_t) BgL_arg3424z00_959), BUNSPEC);
				}
			else
				{	/* Coerce/funcall.scm 119 */
					obj_t BgL_g3347z00_964;

					obj_t BgL_g3348z00_965;

					BgL_g3347z00_964 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_24))->BgL_argsz00);
					BgL_g3348z00_965 = CNST_TABLE_REF(((long) 10));
					{
						obj_t BgL_actualsz00_967;

						obj_t BgL_prevz00_968;

						BgL_actualsz00_967 = BgL_g3347z00_964;
						BgL_prevz00_968 = BgL_g3348z00_965;
					BgL_zc3anonymousza33431ze3z83_969:
						if (NULLP(BgL_actualsz00_967))
							{	/* Coerce/funcall.scm 123 */
								obj_t BgL_arg3433z00_971;

								{	/* Coerce/funcall.scm 123 */
									BgL_nodez00_bglt BgL_arg3434z00_972;

									{	/* Coerce/funcall.scm 123 */
										obj_t BgL_arg3436z00_974;

										obj_t BgL_arg3437z00_975;

										BgL_arg3436z00_974 = CNST_TABLE_REF(((long) 9));
										{
											BgL_nodez00_bglt BgL_auxz00_1634;

											BgL_auxz00_1634 = (BgL_nodez00_bglt) (BgL_nodez00_24);
											BgL_arg3437z00_975 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_1634))->
												BgL_locz00);
										}
										BgL_arg3434z00_972 =
											BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
											(BgL_arg3436z00_974, BgL_arg3437z00_975);
									}
									{	/* Coerce/funcall.scm 122 */
										obj_t BgL_list3435z00_973;

										BgL_list3435z00_973 =
											MAKE_PAIR((obj_t) (BgL_arg3434z00_972), BNIL);
										BgL_arg3433z00_971 = BgL_list3435z00_973;
								}}
								return SET_CDR(BgL_prevz00_968, BgL_arg3433z00_971);
							}
						else
							{	/* Coerce/funcall.scm 121 */
								{	/* Coerce/funcall.scm 126 */
									BgL_nodez00_bglt BgL_arg3438z00_976;

									{	/* Coerce/funcall.scm 126 */
										obj_t BgL_arg3439z00_977;

										BgL_arg3439z00_977 = CAR(BgL_actualsz00_967);
										BgL_arg3438z00_976 =
											BGl_coercez12z12zzcoerce_coercez00(
											(BgL_nodez00_bglt) (BgL_arg3439z00_977), BgL_callerz00_25,
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
											CBOOL(BgL_safez00_27));
									}
									{	/* Coerce/funcall.scm 126 */
										obj_t BgL_auxz00_1646;

										BgL_auxz00_1646 = (obj_t) (BgL_arg3438z00_976);
										SET_CAR(BgL_actualsz00_967, BgL_auxz00_1646);
									}
								}
								{
									obj_t BgL_prevz00_1651;

									obj_t BgL_actualsz00_1649;

									BgL_actualsz00_1649 = CDR(BgL_actualsz00_967);
									BgL_prevz00_1651 = BgL_actualsz00_967;
									BgL_prevz00_968 = BgL_prevz00_1651;
									BgL_actualsz00_967 = BgL_actualsz00_1649;
									goto BgL_zc3anonymousza33431ze3z83_969;
								}
							}
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcoerce_funcallz00()
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcoerce_funcallz00()
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_coercez12zd2envzc0zzcoerce_coercez00, BGl_funcallz00zzast_nodez00,
				BGl_proc3557z00zzcoerce_funcallz00,
				BGl_string3558z00zzcoerce_funcallz00);
		}
	}



/* coerce!-funcall3351 */
	obj_t BGl_coercez12zd2funcall3351zc0zzcoerce_funcallz00(obj_t BgL_envz00_1490,
		obj_t BgL_nodez00_1491, obj_t BgL_callerz00_1492, obj_t BgL_toz00_1493,
		obj_t BgL_safez00_1494)
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 36 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1355;

				obj_t BgL_callerz00_1356;

				obj_t BgL_toz00_1357;

				obj_t BgL_safez00_1358;

				BgL_nodez00_1355 = (BgL_funcallz00_bglt) (BgL_nodez00_1491);
				BgL_callerz00_1356 = BgL_callerz00_1492;
				BgL_toz00_1357 = BgL_toz00_1493;
				BgL_safez00_1358 = BgL_safez00_1494;
				{	/* Coerce/funcall.scm 38 */
					obj_t BgL_errorzd2msgzd2_1361;

					obj_t BgL_strengthz00_1362;

					{	/* Coerce/funcall.scm 38 */
						obj_t BgL_arg3536z00_1414;

						obj_t BgL_arg3537z00_1415;

						BgL_arg3536z00_1414 = CNST_TABLE_REF(((long) 7));
						BgL_arg3537z00_1415 =
							BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1355));
						{	/* Coerce/funcall.scm 38 */
							obj_t BgL_list3538z00_1416;

							{	/* Coerce/funcall.scm 38 */
								obj_t BgL_arg3539z00_1417;

								BgL_arg3539z00_1417 = MAKE_PAIR(BgL_arg3537z00_1415, BNIL);
								BgL_list3538z00_1416 =
									MAKE_PAIR(BgL_arg3536z00_1414, BgL_arg3539z00_1417);
							}
							BgL_errorzd2msgzd2_1361 = BgL_list3538z00_1416;
					}}
					BgL_strengthz00_1362 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1355))->BgL_strengthz00);
					BGl_coercezd2funcallzd2argsz12z12zzcoerce_funcallz00(BgL_nodez00_1355,
						BgL_callerz00_1356, BgL_toz00_1357, BgL_safez00_1358);
					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
							(BgL_strengthz00_1362, CNST_TABLE_REF(((long) 11)))))
						{	/* Coerce/funcall.scm 42 */
							return
								(obj_t) (BGl_convertz12z12zzcoerce_convertz00(
									(BgL_nodez00_bglt) (BgL_nodez00_1355),
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
									(BgL_typez00_bglt) (BgL_toz00_1357),
									CBOOL(BgL_safez00_1358)));
						}
					else
						{	/* Coerce/funcall.scm 45 */
							BgL_nodez00_bglt BgL_czd2funzd2_1364;

							{	/* Coerce/funcall.scm 45 */
								BgL_nodez00_bglt BgL_arg3535z00_1413;

								BgL_arg3535z00_1413 =
									(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1355))->BgL_funz00);
								BgL_czd2funzd2_1364 =
									BGl_coercez12z12zzcoerce_coercez00(BgL_arg3535z00_1413,
									BgL_callerz00_1356,
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00),
									CBOOL(BgL_safez00_1358));
							}
							if (CBOOL(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
								{	/* Coerce/funcall.scm 47 */
									((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1355))->
											BgL_funz00) =
										((BgL_nodez00_bglt) BgL_czd2funzd2_1364), BUNSPEC);
									return (obj_t) (BGl_convertz12z12zzcoerce_convertz00(
											(BgL_nodez00_bglt) (BgL_nodez00_1355),
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
											(BgL_typez00_bglt) (BgL_toz00_1357),
											CBOOL(BgL_safez00_1358)));
								}
							else
								{	/* Coerce/funcall.scm 51 */
									BgL_localz00_bglt BgL_funz00_1365;

									BgL_funz00_1365 =
										BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
												(long) 12)),
										(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
									{	/* Coerce/funcall.scm 51 */
										obj_t BgL_locz00_1366;

										{
											BgL_nodez00_bglt BgL_auxz00_1686;

											BgL_auxz00_1686 = (BgL_nodez00_bglt) (BgL_nodez00_1355);
											BgL_locz00_1366 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_1686))->
												BgL_locz00);
										}
										{	/* Coerce/funcall.scm 52 */
											BgL_atomz00_bglt BgL_lenz00_1367;

											{	/* Coerce/funcall.scm 56 */
												long BgL_arg3530z00_1409;

												BgL_arg3530z00_1409 =
													(bgl_list_length(
														(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1355))->
															BgL_argsz00)) - ((long) 2));
												BgL_lenz00_1367 =
													BGl_makezd2atomzd2zzast_nodez00(BgL_locz00_1366,
													(BgL_typez00_bglt) (BGl_za2intza2z00zztype_cachez00),
													BINT(BgL_arg3530z00_1409));
											}
											{	/* Coerce/funcall.scm 53 */
												obj_t BgL_azd2lenzd2_1368;

												BgL_azd2lenzd2_1368 =
													BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
													(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
																(long) 13))));
												{	/* Coerce/funcall.scm 58 */
													obj_t BgL_azd2tlenzd2_1369;

													{	/* Coerce/funcall.scm 60 */
														obj_t BgL_arg3523z00_1402;

														{	/* Coerce/funcall.scm 60 */
															obj_t BgL_arg3524z00_1403;

															{	/* Coerce/funcall.scm 60 */
																obj_t BgL_arg3525z00_1404;

																obj_t BgL_arg3526z00_1405;

																{	/* Coerce/funcall.scm 60 */
																	obj_t BgL_res3549z00_1480;

																	{	/* Coerce/funcall.scm 60 */
																		obj_t BgL_arg2063z00_1479;

																		BgL_arg2063z00_1479 =
																			SYMBOL_TO_STRING(BgL_azd2lenzd2_1368);
																		BgL_res3549z00_1480 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_1479);
																	}
																	BgL_arg3525z00_1404 = BgL_res3549z00_1480;
																}
																{	/* Coerce/funcall.scm 60 */
																	obj_t BgL_res3550z00_1483;

																	{	/* Coerce/funcall.scm 60 */
																		obj_t BgL_symbolz00_1481;

																		BgL_symbolz00_1481 =
																			CNST_TABLE_REF(((long) 14));
																		{	/* Coerce/funcall.scm 60 */
																			obj_t BgL_arg2063z00_1482;

																			BgL_arg2063z00_1482 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1481);
																			BgL_res3550z00_1483 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_1482);
																	}}
																	BgL_arg3526z00_1405 = BgL_res3550z00_1483;
																}
																{	/* Coerce/funcall.scm 60 */
																	obj_t BgL_list3527z00_1406;

																	{	/* Coerce/funcall.scm 60 */
																		obj_t BgL_arg3528z00_1407;

																		BgL_arg3528z00_1407 =
																			MAKE_PAIR(BgL_arg3526z00_1405, BNIL);
																		BgL_list3527z00_1406 =
																			MAKE_PAIR(BgL_arg3525z00_1404,
																			BgL_arg3528z00_1407);
																	}
																	BgL_arg3524z00_1403 =
																		BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																		(BgL_list3527z00_1406);
															}}
															BgL_arg3523z00_1402 =
																string_to_symbol(BSTRING_TO_STRING
																(BgL_arg3524z00_1403));
														}
														BgL_azd2tlenzd2_1369 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BgL_arg3523z00_1402);
													}
													{	/* Coerce/funcall.scm 59 */
														BgL_letzd2varzd2_bglt BgL_lnodez00_1370;

														{	/* Coerce/funcall.scm 61 */
															obj_t BgL_arg3493z00_1373;

															BgL_nodez00_bglt BgL_arg3494z00_1374;

															{	/* Coerce/funcall.scm 64 */
																obj_t BgL_arg3495z00_1375;

																BgL_arg3495z00_1375 =
																	MAKE_PAIR(
																	(obj_t) (BgL_funz00_1365),
																	(obj_t) (BgL_czd2funzd2_1364));
																{	/* Coerce/funcall.scm 64 */
																	obj_t BgL_list3496z00_1376;

																	BgL_list3496z00_1376 =
																		MAKE_PAIR(BgL_arg3495z00_1375, BNIL);
																	BgL_arg3493z00_1373 = BgL_list3496z00_1376;
															}}
															{	/* Coerce/funcall.scm 66 */
																obj_t BgL_arg3497z00_1377;

																{	/* Coerce/funcall.scm 66 */
																	obj_t BgL_arg3498z00_1378;

																	obj_t BgL_arg3499z00_1379;

																	BgL_arg3498z00_1378 =
																		CNST_TABLE_REF(((long) 15));
																	{	/* Coerce/funcall.scm 66 */
																		obj_t BgL_arg3500z00_1380;

																		obj_t BgL_arg3501z00_1381;

																		{	/* Coerce/funcall.scm 66 */
																			obj_t BgL_arg3505z00_1385;

																			{	/* Coerce/funcall.scm 66 */
																				obj_t BgL_arg3507z00_1387;

																				{	/* Coerce/funcall.scm 66 */
																					obj_t BgL_list3508z00_1388;

																					BgL_list3508z00_1388 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3507z00_1387 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						((obj_t) (BgL_lenz00_1367),
																						BgL_list3508z00_1388);
																				}
																				BgL_arg3505z00_1385 =
																					MAKE_PAIR(BgL_azd2tlenzd2_1369,
																					BgL_arg3507z00_1387);
																			}
																			BgL_arg3500z00_1380 =
																				MAKE_PAIR(BgL_arg3505z00_1385, BNIL);
																		}
																		{	/* Coerce/funcall.scm 67 */
																			obj_t BgL_arg3509z00_1389;

																			obj_t BgL_arg3510z00_1390;

																			BgL_arg3509z00_1389 =
																				CNST_TABLE_REF(((long) 16));
																			{	/* Coerce/funcall.scm 67 */
																				obj_t BgL_arg3511z00_1391;

																				BgL_nodez00_bglt BgL_arg3512z00_1392;

																				BgL_nodez00_bglt BgL_arg3513z00_1393;

																				{	/* Coerce/funcall.scm 67 */
																					obj_t BgL_arg3519z00_1398;

																					obj_t BgL_arg3520z00_1399;

																					BgL_arg3519z00_1398 =
																						CNST_TABLE_REF(((long) 17));
																					{	/* Coerce/funcall.scm 67 */
																						obj_t BgL_list3521z00_1400;

																						{	/* Coerce/funcall.scm 67 */
																							obj_t BgL_arg3522z00_1401;

																							BgL_arg3522z00_1401 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3521z00_1400 =
																								MAKE_PAIR(BgL_azd2lenzd2_1368,
																								BgL_arg3522z00_1401);
																						}
																						BgL_arg3520z00_1399 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							((obj_t) (BgL_funz00_1365),
																							BgL_list3521z00_1400);
																					}
																					BgL_arg3511z00_1391 =
																						MAKE_PAIR(BgL_arg3519z00_1398,
																						BgL_arg3520z00_1399);
																				}
																				BgL_arg3512z00_1392 =
																					BGl_convertz12z12zzcoerce_convertz00(
																					(BgL_nodez00_bglt) (BgL_nodez00_1355),
																					(BgL_typez00_bglt)
																					(BGl_za2objza2z00zztype_cachez00),
																					(BgL_typez00_bglt) (BgL_toz00_1357),
																					CBOOL(BgL_safez00_1358));
																				BgL_arg3513z00_1393 =
																					BGl_makezd2arityzd2errorzd2nodezd2zzcoerce_funcallz00
																					(BgL_funz00_1365,
																					BgL_errorzd2msgzd2_1361,
																					BgL_locz00_1366, BgL_callerz00_1356,
																					BgL_toz00_1357);
																				{	/* Coerce/funcall.scm 67 */
																					obj_t BgL_list3515z00_1395;

																					{	/* Coerce/funcall.scm 67 */
																						obj_t BgL_arg3517z00_1396;

																						{	/* Coerce/funcall.scm 67 */
																							obj_t BgL_arg3518z00_1397;

																							BgL_arg3518z00_1397 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_arg3517z00_1396 =
																								MAKE_PAIR(
																								(obj_t) (BgL_arg3513z00_1393),
																								BgL_arg3518z00_1397);
																						}
																						BgL_list3515z00_1395 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg3512z00_1392),
																							BgL_arg3517z00_1396);
																					}
																					BgL_arg3510z00_1390 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3511z00_1391,
																						BgL_list3515z00_1395);
																			}}
																			BgL_arg3501z00_1381 =
																				MAKE_PAIR(BgL_arg3509z00_1389,
																				BgL_arg3510z00_1390);
																		}
																		{	/* Coerce/funcall.scm 66 */
																			obj_t BgL_list3503z00_1383;

																			{	/* Coerce/funcall.scm 66 */
																				obj_t BgL_arg3504z00_1384;

																				BgL_arg3504z00_1384 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3503z00_1383 =
																					MAKE_PAIR(BgL_arg3501z00_1381,
																					BgL_arg3504z00_1384);
																			}
																			BgL_arg3499z00_1379 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3500z00_1380,
																				BgL_list3503z00_1383);
																	}}
																	BgL_arg3497z00_1377 =
																		MAKE_PAIR(BgL_arg3498z00_1378,
																		BgL_arg3499z00_1379);
																}
																BgL_arg3494z00_1374 =
																	BGl_topzd2levelzd2sexpzd2ze3nodez31zzast_sexpz00
																	(BgL_arg3497z00_1377, BgL_locz00_1366);
															}
															BgL_lnodez00_1370 =
																BGl_makezd2letzd2varz00zzast_nodez00
																(BgL_locz00_1366,
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00), BUNSPEC,
																BINT(((long) -1)), BgL_arg3493z00_1373,
																BgL_arg3494z00_1374, ((bool_t) 1));
														}
														{	/* Coerce/funcall.scm 61 */

															{	/* Coerce/funcall.scm 76 */
																BgL_varz00_bglt BgL_arg3491z00_1371;

																BgL_arg3491z00_1371 =
																	BGl_makezd2varzd2zzast_nodez00
																	(BgL_locz00_1366,
																	(BgL_typez00_bglt)
																	(BGl_za2objza2z00zztype_cachez00),
																	(BgL_variablez00_bglt) (BgL_funz00_1365));
																{
																	BgL_nodez00_bglt BgL_auxz00_1750;

																	BgL_auxz00_1750 =
																		(BgL_nodez00_bglt) (BgL_arg3491z00_1371);
																	((((BgL_funcallz00_bglt)
																				CREF(BgL_nodez00_1355))->BgL_funz00) =
																		((BgL_nodez00_bglt) BgL_auxz00_1750),
																		BUNSPEC);
															}}
															return (obj_t) (BgL_lnodez00_1370);
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



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcoerce_funcallz00()
	{
		AN_OBJECT;
		{	/* Coerce/funcall.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzcoerce_convertz00(((long) 65499856),
				BSTRING_TO_STRING(BGl_string3559z00zzcoerce_funcallz00));
		}
	}

#ifdef __cplusplus
}
#endif
