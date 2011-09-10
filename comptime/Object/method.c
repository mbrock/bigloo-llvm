/*===========================================================================*/
/*   (Object/method.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/method.scm)*/
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;

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


	BGL_EXPORTED_DECL obj_t BGl_makezd2methodzd2bodyz00zzobject_methodz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_methodz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzobject_methodz00();
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_methodz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_methodz00();
	static obj_t BGl__makezd2methodzd2bodyz00zzobject_methodz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_methodz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_methodz00();
	static obj_t BGl_methodzd2initzd2zzobject_methodz00();
	static obj_t __cnst[16];


	   
		 
		DEFINE_STRING(BGl_string2775z00zzobject_methodz00,
		BgL_bgl_string2775za700za7za7o2783za7,
		"bgl_init_module_debug_string( \"generic-add-method: ", 51);
	      DEFINE_STRING(BGl_string2776z00zzobject_methodz00,
		BgL_bgl_string2776za700za7za7o2784za7, "\"); ", 4);
	      DEFINE_STRING(BGl_string2777z00zzobject_methodz00,
		BgL_bgl_string2777za700za7za7o2785za7, "Can't find generic for method", 29);
	      DEFINE_STRING(BGl_string2778z00zzobject_methodz00,
		BgL_bgl_string2778za700za7za7o2786za7,
		"method has a non-class dispatching type arg", 43);
	      DEFINE_STRING(BGl_string2780z00zzobject_methodz00,
		BgL_bgl_string2780za700za7za7o2787za7,
		"(quote method-definition-error) generic-add-method! pragma::void module begin cons* apply procedure? if @ find-super-class-method let call-next-method labels - next-method ",
		172);
	      DEFINE_STRING(BGl_string2779z00zzobject_methodz00,
		BgL_bgl_string2779za700za7za7o2788za7, "object_method", 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2methodzd2bodyzd2envzd2zzobject_methodz00,
		BgL_bgl__makeza7d2methodza7d2789z00,
		BGl__makezd2methodzd2bodyz00zzobject_methodz00, 0L, BUNSPEC, 5);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_methodz00(long
		BgL_checksumz00_919, char *BgL_fromz00_920)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_methodz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_methodz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzobject_methodz00();
					BGl_cnstzd2initzd2zzobject_methodz00();
					BGl_importedzd2moduleszd2initz00zzobject_methodz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_methodz00()
	{
		AN_OBJECT;
		{	/* Object/method.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_method");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_method");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_methodz00()
	{
		AN_OBJECT;
		{	/* Object/method.scm 15 */
			{	/* Object/method.scm 15 */
				obj_t BgL_cportz00_911;

				BgL_cportz00_911 =
					bgl_open_input_string(BGl_string2780z00zzobject_methodz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_912;

					BgL_iz00_912 = ((long) 15);
				BgL_loopz00_913:
					if ((BgL_iz00_912 == ((long) -1)))
						{	/* Object/method.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/method.scm 15 */
							{	/* Object/method.scm 15 */
								obj_t BgL_arg2782z00_915;

								{	/* Object/method.scm 15 */

									{	/* Object/method.scm 15 */
										obj_t BgL_locationz00_917;

										BgL_locationz00_917 = BBOOL(((bool_t) 0));
										{	/* Object/method.scm 15 */

											BgL_arg2782z00_915 =
												BGl_readz00zz__readerz00(BgL_cportz00_911,
												BgL_locationz00_917);
										}
									}
								}
								{	/* Object/method.scm 15 */
									int BgL_auxz00_938;

									BgL_auxz00_938 = (int) (BgL_iz00_912);
									CNST_TABLE_SET(BgL_auxz00_938, BgL_arg2782z00_915);
							}}
							{	/* Object/method.scm 15 */
								int BgL_auxz00_918;

								BgL_auxz00_918 = (int) ((BgL_iz00_912 - ((long) 1)));
								{
									long BgL_iz00_943;

									BgL_iz00_943 = (long) (BgL_auxz00_918);
									BgL_iz00_912 = BgL_iz00_943;
									goto BgL_loopz00_913;
								}
							}
						}
				}
			}
		}
	}



/* make-method-body */
	BGL_EXPORTED_DEF obj_t BGl_makezd2methodzd2bodyz00zzobject_methodz00(obj_t
		BgL_identz00_1, obj_t BgL_argsz00_2, obj_t BgL_localsz00_3,
		obj_t BgL_bodyz00_4, obj_t BgL_srcz00_5)
	{
		AN_OBJECT;
		{	/* Object/method.scm 32 */
			{	/* Object/method.scm 33 */
				obj_t BgL_idz00_515;

				BgL_idz00_515 =
					BGl_idzd2ofzd2idz00zzast_identz00(BgL_identz00_1,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_5));
				{	/* Object/method.scm 33 */
					obj_t BgL_methodz00_516;

					BgL_methodz00_516 =
						BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0)));
					{	/* Object/method.scm 34 */
						long BgL_arityz00_517;

						BgL_arityz00_517 =
							BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_2);
						{	/* Object/method.scm 35 */
							obj_t BgL_argszd2idzd2_518;

							if (NULLP(BgL_localsz00_3))
								{	/* Object/method.scm 36 */
									BgL_argszd2idzd2_518 = BNIL;
								}
							else
								{	/* Object/method.scm 36 */
									obj_t BgL_head2438z00_670;

									{	/* Object/method.scm 36 */
										obj_t BgL_arg2741z00_683;

										{	/* Object/method.scm 36 */
											BgL_variablez00_bglt BgL_obj1604z00_831;

											{	/* Object/method.scm 36 */
												obj_t BgL_pairz00_830;

												BgL_pairz00_830 = BgL_localsz00_3;
												BgL_obj1604z00_831 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_830));
											}
											BgL_arg2741z00_683 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_831))->
												BgL_idz00);
										}
										BgL_head2438z00_670 = MAKE_PAIR(BgL_arg2741z00_683, BNIL);
									}
									{	/* Object/method.scm 36 */
										obj_t BgL_g2441z00_671;

										BgL_g2441z00_671 = CDR(BgL_localsz00_3);
										{
											obj_t BgL_l2436z00_673;

											obj_t BgL_tail2439z00_674;

											BgL_l2436z00_673 = BgL_g2441z00_671;
											BgL_tail2439z00_674 = BgL_head2438z00_670;
										BgL_zc3anonymousza32735ze3z83_675:
											if (NULLP(BgL_l2436z00_673))
												{	/* Object/method.scm 36 */
													BgL_argszd2idzd2_518 = BgL_head2438z00_670;
												}
											else
												{	/* Object/method.scm 36 */
													obj_t BgL_newtail2440z00_677;

													{	/* Object/method.scm 36 */
														obj_t BgL_arg2738z00_679;

														{	/* Object/method.scm 36 */
															BgL_variablez00_bglt BgL_obj1604z00_837;

															{	/* Object/method.scm 36 */
																obj_t BgL_pairz00_836;

																BgL_pairz00_836 = BgL_l2436z00_673;
																BgL_obj1604z00_837 =
																	(BgL_variablez00_bglt) (CAR(BgL_pairz00_836));
															}
															BgL_arg2738z00_679 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj1604z00_837))->BgL_idz00);
														}
														BgL_newtail2440z00_677 =
															MAKE_PAIR(BgL_arg2738z00_679, BNIL);
													}
													SET_CDR(BgL_tail2439z00_674, BgL_newtail2440z00_677);
													{
														obj_t BgL_tail2439z00_966;

														obj_t BgL_l2436z00_964;

														BgL_l2436z00_964 = CDR(BgL_l2436z00_673);
														BgL_tail2439z00_966 = BgL_newtail2440z00_677;
														BgL_tail2439z00_674 = BgL_tail2439z00_966;
														BgL_l2436z00_673 = BgL_l2436z00_964;
														goto BgL_zc3anonymousza32735ze3z83_675;
													}
												}
										}
									}
								}
							{	/* Object/method.scm 36 */
								BgL_typez00_bglt BgL_typez00_519;

								{	/* Object/method.scm 37 */
									BgL_variablez00_bglt BgL_obj1608z00_844;

									{	/* Object/method.scm 37 */
										obj_t BgL_pairz00_843;

										BgL_pairz00_843 = BgL_localsz00_3;
										BgL_obj1608z00_844 =
											(BgL_variablez00_bglt) (CAR(BgL_pairz00_843));
									}
									BgL_typez00_519 =
										(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_844))->
										BgL_typez00);
								}
								{	/* Object/method.scm 37 */
									obj_t BgL_mzd2idzd2_520;

									{	/* Object/method.scm 43 */
										obj_t BgL_arg2726z00_660;

										{	/* Object/method.scm 43 */
											obj_t BgL_arg2727z00_661;

											{	/* Object/method.scm 43 */
												obj_t BgL_arg2728z00_662;

												obj_t BgL_arg2729z00_663;

												BgL_arg2728z00_662 = CNST_TABLE_REF(((long) 1));
												BgL_arg2729z00_663 =
													(((BgL_typez00_bglt) CREF(BgL_typez00_519))->
													BgL_idz00);
												{	/* Object/method.scm 43 */
													obj_t BgL_list2730z00_664;

													{	/* Object/method.scm 43 */
														obj_t BgL_arg2731z00_665;

														{	/* Object/method.scm 43 */
															obj_t BgL_arg2732z00_666;

															BgL_arg2732z00_666 =
																MAKE_PAIR(BgL_arg2729z00_663, BNIL);
															BgL_arg2731z00_665 =
																MAKE_PAIR(BgL_arg2728z00_662,
																BgL_arg2732z00_666);
														}
														BgL_list2730z00_664 =
															MAKE_PAIR(BgL_idz00_515, BgL_arg2731z00_665);
													}
													BgL_arg2727z00_661 =
														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
														(BgL_list2730z00_664);
											}}
											BgL_arg2726z00_660 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg2727z00_661);
										}
										BgL_mzd2idzd2_520 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BgL_arg2726z00_660);
									}
									{	/* Object/method.scm 42 */

										{	/* Object/method.scm 44 */
											bool_t BgL_testz00_978;

											{	/* Object/method.scm 44 */
												obj_t BgL_obj2139z00_846;

												BgL_obj2139z00_846 = (obj_t) (BgL_typez00_519);
												BgL_testz00_978 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2139z00_846,
													BGl_tclassz00zzobject_classz00);
											}
											if (BgL_testz00_978)
												{	/* Object/method.scm 46 */
													BgL_globalz00_bglt BgL_holderz00_522;

													{	/* Object/method.scm 46 */
														BgL_tclassz00_bglt BgL_obj2146z00_847;

														BgL_obj2146z00_847 =
															(BgL_tclassz00_bglt) (BgL_typez00_519);
														{
															obj_t BgL_auxz00_982;

															{	/* Object/method.scm 46 */
																BgL_objectz00_bglt BgL_auxz00_983;

																BgL_auxz00_983 =
																	(BgL_objectz00_bglt) (BgL_obj2146z00_847);
																BgL_auxz00_982 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_983);
															}
															BgL_holderz00_522 =
																(((BgL_tclassz00_bglt) CREF(BgL_auxz00_982))->
																BgL_holderz00);
														}
													}
													{	/* Object/method.scm 46 */
														obj_t BgL_modulez00_523;

														BgL_modulez00_523 =
															(((BgL_globalz00_bglt) CREF(BgL_holderz00_522))->
															BgL_modulez00);
														{	/* Object/method.scm 47 */
															obj_t BgL_genericz00_524;

															BgL_genericz00_524 =
																BGl_findzd2globalzd2zzast_envz00(BgL_idz00_515,
																BNIL);
															{	/* Object/method.scm 48 */

																if (BGl_iszd2azf3z21zz__objectz00
																	(BgL_genericz00_524,
																		BGl_globalz00zzast_varz00))
																	{	/* Object/method.scm 53 */
																		obj_t BgL_bodyz00_526;

																		{	/* Object/method.scm 53 */
																			obj_t BgL_arg2608z00_580;

																			obj_t BgL_arg2615z00_581;

																			BgL_arg2608z00_580 =
																				CNST_TABLE_REF(((long) 2));
																			{	/* Object/method.scm 53 */
																				obj_t BgL_arg2621z00_582;

																				{	/* Object/method.scm 53 */
																					obj_t BgL_arg2642z00_586;

																					{	/* Object/method.scm 53 */
																						obj_t BgL_arg2649z00_588;

																						obj_t BgL_arg2650z00_589;

																						BgL_arg2649z00_588 =
																							CNST_TABLE_REF(((long) 3));
																						{	/* Object/method.scm 53 */
																							obj_t BgL_arg2652z00_591;

																							{	/* Object/method.scm 54 */
																								obj_t BgL_arg2658z00_595;

																								obj_t BgL_arg2659z00_596;

																								BgL_arg2658z00_595 =
																									CNST_TABLE_REF(((long) 4));
																								{	/* Object/method.scm 54 */
																									obj_t BgL_arg2660z00_597;

																									obj_t BgL_arg2661z00_598;

																									{	/* Object/method.scm 54 */
																										obj_t BgL_arg2666z00_602;

																										{	/* Object/method.scm 54 */
																											obj_t BgL_arg2668z00_604;

																											{	/* Object/method.scm 54 */
																												obj_t
																													BgL_arg2669z00_605;
																												{	/* Object/method.scm 54 */
																													obj_t
																														BgL_arg2672z00_608;
																													obj_t
																														BgL_arg2673z00_609;
																													BgL_arg2672z00_608 =
																														CNST_TABLE_REF((
																															(long) 5));
																													{	/* Object/method.scm 55 */
																														obj_t
																															BgL_arg2674z00_610;
																														obj_t
																															BgL_arg2675z00_611;
																														BgL_arg2674z00_610 =
																															CAR
																															(BgL_argszd2idzd2_518);
																														{	/* Object/method.scm 57 */
																															obj_t
																																BgL_arg2680z00_616;
																															obj_t
																																BgL_arg2681z00_617;
																															BgL_arg2680z00_616
																																=
																																CNST_TABLE_REF((
																																	(long) 6));
																															{	/* Object/method.scm 57 */
																																obj_t
																																	BgL_arg2682z00_618;
																																{
																																	BgL_variablez00_bglt
																																		BgL_auxz00_997;
																																	BgL_auxz00_997
																																		=
																																		(BgL_variablez00_bglt)
																																		(BgL_holderz00_522);
																																	BgL_arg2682z00_618
																																		=
																																		(((BgL_variablez00_bglt) CREF(BgL_auxz00_997))->BgL_idz00);
																																}
																																{	/* Object/method.scm 57 */
																																	obj_t
																																		BgL_list2684z00_620;
																																	{	/* Object/method.scm 57 */
																																		obj_t
																																			BgL_arg2685z00_621;
																																		BgL_arg2685z00_621
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2684z00_620
																																			=
																																			MAKE_PAIR
																																			(BgL_modulez00_523,
																																			BgL_arg2685z00_621);
																																	}
																																	BgL_arg2681z00_617
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg2682z00_618,
																																		BgL_list2684z00_620);
																															}}
																															BgL_arg2675z00_611
																																=
																																MAKE_PAIR
																																(BgL_arg2680z00_616,
																																BgL_arg2681z00_617);
																														}
																														{	/* Object/method.scm 54 */
																															obj_t
																																BgL_list2677z00_613;
																															{	/* Object/method.scm 54 */
																																obj_t
																																	BgL_arg2678z00_614;
																																{	/* Object/method.scm 54 */
																																	obj_t
																																		BgL_arg2679z00_615;
																																	BgL_arg2679z00_615
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2678z00_614
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2675z00_611,
																																		BgL_arg2679z00_615);
																																}
																																BgL_list2677z00_613
																																	=
																																	MAKE_PAIR
																																	(BgL_idz00_515,
																																	BgL_arg2678z00_614);
																															}
																															BgL_arg2673z00_609
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg2674z00_610,
																																BgL_list2677z00_613);
																													}}
																													BgL_arg2669z00_605 =
																														MAKE_PAIR
																														(BgL_arg2672z00_608,
																														BgL_arg2673z00_609);
																												}
																												{	/* Object/method.scm 54 */
																													obj_t
																														BgL_list2671z00_607;
																													BgL_list2671z00_607 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2668z00_604 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2669z00_605,
																														BgL_list2671z00_607);
																											}}
																											BgL_arg2666z00_602 =
																												MAKE_PAIR
																												(BgL_methodz00_516,
																												BgL_arg2668z00_604);
																										}
																										BgL_arg2660z00_597 =
																											MAKE_PAIR
																											(BgL_arg2666z00_602,
																											BNIL);
																									}
																									{	/* Object/method.scm 59 */
																										obj_t BgL_arg2686z00_622;

																										obj_t BgL_arg2687z00_623;

																										BgL_arg2686z00_622 =
																											CNST_TABLE_REF(((long)
																												7));
																										{	/* Object/method.scm 59 */
																											obj_t BgL_arg2688z00_624;

																											obj_t BgL_arg2689z00_625;

																											obj_t BgL_arg2690z00_626;

																											{	/* Object/method.scm 59 */
																												obj_t
																													BgL_arg2695z00_631;
																												obj_t
																													BgL_arg2696z00_632;
																												BgL_arg2695z00_631 =
																													CNST_TABLE_REF(((long)
																														8));
																												{	/* Object/method.scm 59 */
																													obj_t
																														BgL_list2697z00_633;
																													BgL_list2697z00_633 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg2696z00_632 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_methodz00_516,
																														BgL_list2697z00_633);
																												}
																												BgL_arg2688z00_624 =
																													MAKE_PAIR
																													(BgL_arg2695z00_631,
																													BgL_arg2696z00_632);
																											}
																											if (
																												(BgL_arityz00_517 >=
																													((long) 0)))
																												{	/* Object/method.scm 60 */
																													BgL_arg2689z00_625 =
																														MAKE_PAIR
																														(BgL_methodz00_516,
																														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																														(BgL_argszd2idzd2_518,
																															BNIL));
																												}
																											else
																												{	/* Object/method.scm 62 */
																													obj_t
																														BgL_arg2700z00_636;
																													obj_t
																														BgL_arg2701z00_637;
																													BgL_arg2700z00_636 =
																														CNST_TABLE_REF((
																															(long) 9));
																													{	/* Object/method.scm 63 */
																														obj_t
																															BgL_arg2702z00_638;
																														{	/* Object/method.scm 63 */
																															obj_t
																																BgL_arg2706z00_642;
																															obj_t
																																BgL_arg2707z00_643;
																															BgL_arg2706z00_642
																																=
																																CNST_TABLE_REF((
																																	(long) 10));
																															BgL_arg2707z00_643
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_argszd2idzd2_518,
																																BNIL);
																															BgL_arg2702z00_638
																																=
																																MAKE_PAIR
																																(BgL_arg2706z00_642,
																																BgL_arg2707z00_643);
																														}
																														{	/* Object/method.scm 62 */
																															obj_t
																																BgL_list2704z00_640;
																															{	/* Object/method.scm 62 */
																																obj_t
																																	BgL_arg2705z00_641;
																																BgL_arg2705z00_641
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list2704z00_640
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2702z00_638,
																																	BgL_arg2705z00_641);
																															}
																															BgL_arg2701z00_637
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_methodz00_516,
																																BgL_list2704z00_640);
																													}}
																													BgL_arg2689z00_625 =
																														MAKE_PAIR
																														(BgL_arg2700z00_636,
																														BgL_arg2701z00_637);
																												}
																											{	/* Object/method.scm 64 */
																												obj_t
																													BgL_arg2708z00_644;
																												obj_t
																													BgL_arg2709z00_645;
																												BgL_arg2708z00_644 =
																													CNST_TABLE_REF(((long)
																														11));
																												{	/* Object/method.scm 65 */
																													obj_t
																														BgL_arg2710z00_646;
																													if ((BgL_arityz00_517
																															>= ((long) 0)))
																														{	/* Object/method.scm 65 */
																															BgL_arg2710z00_646
																																=
																																MAKE_PAIR
																																(BgL_idz00_515,
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_argszd2idzd2_518,
																																	BNIL));
																														}
																													else
																														{	/* Object/method.scm 67 */
																															obj_t
																																BgL_arg2716z00_651;
																															obj_t
																																BgL_arg2717z00_652;
																															BgL_arg2716z00_651
																																=
																																CNST_TABLE_REF((
																																	(long) 9));
																															{	/* Object/method.scm 69 */
																																obj_t
																																	BgL_arg2718z00_653;
																																{	/* Object/method.scm 69 */
																																	obj_t
																																		BgL_arg2722z00_657;
																																	obj_t
																																		BgL_arg2724z00_658;
																																	BgL_arg2722z00_657
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			10));
																																	BgL_arg2724z00_658
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_argszd2idzd2_518,
																																		BNIL);
																																	BgL_arg2718z00_653
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2722z00_657,
																																		BgL_arg2724z00_658);
																																}
																																{	/* Object/method.scm 67 */
																																	obj_t
																																		BgL_list2720z00_655;
																																	{	/* Object/method.scm 67 */
																																		obj_t
																																			BgL_arg2721z00_656;
																																		BgL_arg2721z00_656
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list2720z00_655
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2718z00_653,
																																			BgL_arg2721z00_656);
																																	}
																																	BgL_arg2717z00_652
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_idz00_515,
																																		BgL_list2720z00_655);
																															}}
																															BgL_arg2710z00_646
																																=
																																MAKE_PAIR
																																(BgL_arg2716z00_651,
																																BgL_arg2717z00_652);
																														}
																													{	/* Object/method.scm 64 */
																														obj_t
																															BgL_list2712z00_648;
																														BgL_list2712z00_648
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2709z00_645 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2710z00_646,
																															BgL_list2712z00_648);
																												}}
																												BgL_arg2690z00_626 =
																													MAKE_PAIR
																													(BgL_arg2708z00_644,
																													BgL_arg2709z00_645);
																											}
																											{	/* Object/method.scm 59 */
																												obj_t
																													BgL_list2692z00_628;
																												{	/* Object/method.scm 59 */
																													obj_t
																														BgL_arg2693z00_629;
																													{	/* Object/method.scm 59 */
																														obj_t
																															BgL_arg2694z00_630;
																														BgL_arg2694z00_630 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2693z00_629 =
																															MAKE_PAIR
																															(BgL_arg2690z00_626,
																															BgL_arg2694z00_630);
																													}
																													BgL_list2692z00_628 =
																														MAKE_PAIR
																														(BgL_arg2689z00_625,
																														BgL_arg2693z00_629);
																												}
																												BgL_arg2687z00_623 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2688z00_624,
																													BgL_list2692z00_628);
																										}}
																										BgL_arg2661z00_598 =
																											MAKE_PAIR
																											(BgL_arg2686z00_622,
																											BgL_arg2687z00_623);
																									}
																									{	/* Object/method.scm 54 */
																										obj_t BgL_list2664z00_600;

																										{	/* Object/method.scm 54 */
																											obj_t BgL_arg2665z00_601;

																											BgL_arg2665z00_601 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_list2664z00_600 =
																												MAKE_PAIR
																												(BgL_arg2661z00_598,
																												BgL_arg2665z00_601);
																										}
																										BgL_arg2659z00_596 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2660z00_597,
																											BgL_list2664z00_600);
																								}}
																								BgL_arg2652z00_591 =
																									MAKE_PAIR(BgL_arg2658z00_595,
																									BgL_arg2659z00_596);
																							}
																							{	/* Object/method.scm 53 */
																								obj_t BgL_list2656z00_593;

																								{	/* Object/method.scm 53 */
																									obj_t BgL_arg2657z00_594;

																									BgL_arg2657z00_594 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list2656z00_593 =
																										MAKE_PAIR
																										(BgL_arg2652z00_591,
																										BgL_arg2657z00_594);
																								}
																								BgL_arg2650z00_589 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BNIL, BgL_list2656z00_593);
																						}}
																						BgL_arg2642z00_586 =
																							MAKE_PAIR(BgL_arg2649z00_588,
																							BgL_arg2650z00_589);
																					}
																					BgL_arg2621z00_582 =
																						MAKE_PAIR(BgL_arg2642z00_586, BNIL);
																				}
																				{	/* Object/method.scm 53 */
																					obj_t BgL_list2629z00_584;

																					{	/* Object/method.scm 53 */
																						obj_t BgL_arg2630z00_585;

																						BgL_arg2630z00_585 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list2629z00_584 =
																							MAKE_PAIR(BgL_bodyz00_4,
																							BgL_arg2630z00_585);
																					}
																					BgL_arg2615z00_581 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg2621z00_582,
																						BgL_list2629z00_584);
																			}}
																			BgL_bodyz00_526 =
																				MAKE_PAIR(BgL_arg2608z00_580,
																				BgL_arg2615z00_581);
																		}
																		{	/* Object/method.scm 53 */
																			obj_t BgL_ebodyz00_527;

																			if (EXTENDED_PAIRP(BgL_srcz00_5))
																				{	/* Object/method.scm 72 */
																					obj_t BgL_arg2594z00_577;

																					obj_t BgL_arg2595z00_578;

																					obj_t BgL_arg2602z00_579;

																					BgL_arg2594z00_577 =
																						CAR(BgL_bodyz00_526);
																					BgL_arg2595z00_578 =
																						CDR(BgL_bodyz00_526);
																					BgL_arg2602z00_579 =
																						CER(BgL_srcz00_5);
																					{	/* Object/method.scm 72 */
																						obj_t BgL_res2767z00_863;

																						BgL_res2767z00_863 =
																							MAKE_EXTENDED_PAIR
																							(BgL_arg2594z00_577,
																							BgL_arg2595z00_578,
																							BgL_arg2602z00_579);
																						BgL_ebodyz00_527 =
																							BgL_res2767z00_863;
																					}
																				}
																			else
																				{	/* Object/method.scm 71 */
																					BgL_ebodyz00_527 = BgL_bodyz00_526;
																				}
																			{	/* Object/method.scm 71 */
																				obj_t BgL_bdgz00_528;

																				{	/* Object/method.scm 74 */
																					obj_t BgL_arg2586z00_573;

																					{	/* Object/method.scm 74 */
																						obj_t BgL_list2587z00_574;

																						{	/* Object/method.scm 74 */
																							obj_t BgL_arg2589z00_575;

																							BgL_arg2589z00_575 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list2587z00_574 =
																								MAKE_PAIR(BgL_ebodyz00_527,
																								BgL_arg2589z00_575);
																						}
																						BgL_arg2586z00_573 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_argsz00_2,
																							BgL_list2587z00_574);
																					}
																					BgL_bdgz00_528 =
																						MAKE_PAIR(BgL_mzd2idzd2_520,
																						BgL_arg2586z00_573);
																				}
																				{	/* Object/method.scm 74 */
																					obj_t BgL_ebdgz00_529;

																					if (EXTENDED_PAIRP(BgL_srcz00_5))
																						{	/* Object/method.scm 76 */
																							obj_t BgL_arg2571z00_570;

																							obj_t BgL_arg2572z00_571;

																							obj_t BgL_arg2576z00_572;

																							BgL_arg2571z00_570 =
																								CAR(BgL_bdgz00_528);
																							BgL_arg2572z00_571 =
																								CDR(BgL_bdgz00_528);
																							BgL_arg2576z00_572 =
																								CER(BgL_srcz00_5);
																							{	/* Object/method.scm 76 */
																								obj_t BgL_res2768z00_871;

																								BgL_res2768z00_871 =
																									MAKE_EXTENDED_PAIR
																									(BgL_arg2571z00_570,
																									BgL_arg2572z00_571,
																									BgL_arg2576z00_572);
																								BgL_ebdgz00_529 =
																									BgL_res2768z00_871;
																							}
																						}
																					else
																						{	/* Object/method.scm 75 */
																							BgL_ebdgz00_529 = BgL_bdgz00_528;
																						}
																					{	/* Object/method.scm 75 */

																						{	/* Object/method.scm 78 */
																							obj_t BgL_arg2444z00_530;

																							{	/* Object/method.scm 78 */
																								obj_t BgL_arg2448z00_532;

																								obj_t BgL_arg2451z00_533;

																								BgL_arg2448z00_532 =
																									CNST_TABLE_REF(((long) 2));
																								{	/* Object/method.scm 78 */
																									obj_t BgL_arg2452z00_534;

																									obj_t BgL_arg2453z00_535;

																									obj_t BgL_arg2454z00_536;

																									BgL_arg2452z00_534 =
																										MAKE_PAIR(BgL_ebdgz00_529,
																										BNIL);
																									{	/* Object/method.scm 79 */
																										bool_t BgL_testz00_1082;

																										if (
																											((long)
																												CINT
																												(BGl_za2debugzd2moduleza2zd2zzengine_paramz00)
																												>= ((long) 1)))
																											{	/* Object/method.scm 80 */
																												obj_t
																													BgL_arg2523z00_551;
																												obj_t
																													BgL_arg2529z00_552;
																												BgL_arg2523z00_551 =
																													CNST_TABLE_REF(((long)
																														12));
																												{	/* Object/method.scm 82 */
																													obj_t
																														BgL_arg2531z00_553;
																													BgL_arg2531z00_553 =
																														BGl_thezd2backendzd2zzbackend_backendz00
																														();
																													{
																														BgL_backendz00_bglt
																															BgL_auxz00_1088;
																														BgL_auxz00_1088 =
																															(BgL_backendz00_bglt)
																															(BgL_arg2531z00_553);
																														BgL_arg2529z00_552 =
																															(((BgL_backendz00_bglt) CREF(BgL_auxz00_1088))->BgL_debugzd2supportzd2);
																												}}
																												BgL_testz00_1082 =
																													CBOOL
																													(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg2523z00_551,
																														BgL_arg2529z00_552));
																											}
																										else
																											{	/* Object/method.scm 79 */
																												BgL_testz00_1082 =
																													((bool_t) 0);
																											}
																										if (BgL_testz00_1082)
																											{	/* Object/method.scm 83 */
																												obj_t
																													BgL_arg2472z00_542;
																												obj_t
																													BgL_arg2476z00_543;
																												BgL_arg2472z00_542 =
																													CNST_TABLE_REF(((long)
																														13));
																												{	/* Object/method.scm 84 */
																													obj_t
																														BgL_arg2477z00_544;
																													{	/* Object/method.scm 84 */
																														obj_t
																															BgL_arg2503z00_548;
																														{	/* Object/method.scm 84 */
																															obj_t
																																BgL_res2769z00_877;
																															{	/* Object/method.scm 84 */
																																obj_t
																																	BgL_arg2063z00_876;
																																BgL_arg2063z00_876
																																	=
																																	SYMBOL_TO_STRING
																																	(BgL_identz00_1);
																																BgL_res2769z00_877
																																	=
																																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																	(BgL_arg2063z00_876);
																															}
																															BgL_arg2503z00_548
																																=
																																BgL_res2769z00_877;
																														}
																														BgL_arg2477z00_544 =
																															string_append_3
																															(BGl_string2775z00zzobject_methodz00,
																															BgL_arg2503z00_548,
																															BGl_string2776z00zzobject_methodz00);
																													}
																													{	/* Object/method.scm 83 */
																														obj_t
																															BgL_list2492z00_546;
																														BgL_list2492z00_546
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2476z00_543 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2477z00_544,
																															BgL_list2492z00_546);
																												}}
																												BgL_arg2453z00_535 =
																													MAKE_PAIR
																													(BgL_arg2472z00_542,
																													BgL_arg2476z00_543);
																											}
																										else
																											{	/* Object/method.scm 79 */
																												BgL_arg2453z00_535 =
																													BFALSE;
																											}
																									}
																									{	/* Object/method.scm 85 */
																										obj_t BgL_arg2536z00_554;

																										obj_t BgL_arg2544z00_555;

																										BgL_arg2536z00_554 =
																											CNST_TABLE_REF(((long)
																												14));
																										{	/* Object/method.scm 86 */
																											obj_t BgL_arg2550z00_556;

																											obj_t BgL_arg2554z00_557;

																											{	/* Object/method.scm 86 */
																												obj_t
																													BgL_arg2560z00_563;
																												obj_t
																													BgL_arg2561z00_564;
																												BgL_arg2560z00_563 =
																													CNST_TABLE_REF(((long)
																														6));
																												{	/* Object/method.scm 86 */
																													obj_t
																														BgL_arg2562z00_565;
																													{
																														BgL_variablez00_bglt
																															BgL_auxz00_1102;
																														BgL_auxz00_1102 =
																															(BgL_variablez00_bglt)
																															(BgL_holderz00_522);
																														BgL_arg2562z00_565 =
																															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1102))->BgL_idz00);
																													}
																													{	/* Object/method.scm 86 */
																														obj_t
																															BgL_list2564z00_567;
																														{	/* Object/method.scm 86 */
																															obj_t
																																BgL_arg2565z00_568;
																															BgL_arg2565z00_568
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2564z00_567
																																=
																																MAKE_PAIR
																																(BgL_modulez00_523,
																																BgL_arg2565z00_568);
																														}
																														BgL_arg2561z00_564 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg2562z00_565,
																															BgL_list2564z00_567);
																												}}
																												BgL_arg2550z00_556 =
																													MAKE_PAIR
																													(BgL_arg2560z00_563,
																													BgL_arg2561z00_564);
																											}
																											{	/* Object/method.scm 88 */
																												obj_t
																													BgL_res2770z00_881;
																												{	/* Object/method.scm 88 */
																													obj_t
																														BgL_arg2063z00_880;
																													BgL_arg2063z00_880 =
																														SYMBOL_TO_STRING
																														(BgL_identz00_1);
																													BgL_res2770z00_881 =
																														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																														(BgL_arg2063z00_880);
																												}
																												BgL_arg2554z00_557 =
																													BgL_res2770z00_881;
																											}
																											{	/* Object/method.scm 85 */
																												obj_t
																													BgL_list2556z00_559;
																												{	/* Object/method.scm 85 */
																													obj_t
																														BgL_arg2557z00_560;
																													{	/* Object/method.scm 85 */
																														obj_t
																															BgL_arg2558z00_561;
																														{	/* Object/method.scm 85 */
																															obj_t
																																BgL_arg2559z00_562;
																															BgL_arg2559z00_562
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg2558z00_561
																																=
																																MAKE_PAIR
																																(BgL_arg2554z00_557,
																																BgL_arg2559z00_562);
																														}
																														BgL_arg2557z00_560 =
																															MAKE_PAIR
																															(BgL_mzd2idzd2_520,
																															BgL_arg2558z00_561);
																													}
																													BgL_list2556z00_559 =
																														MAKE_PAIR
																														(BgL_arg2550z00_556,
																														BgL_arg2557z00_560);
																												}
																												BgL_arg2544z00_555 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_515,
																													BgL_list2556z00_559);
																										}}
																										BgL_arg2454z00_536 =
																											MAKE_PAIR
																											(BgL_arg2536z00_554,
																											BgL_arg2544z00_555);
																									}
																									{	/* Object/method.scm 78 */
																										obj_t BgL_list2460z00_538;

																										{	/* Object/method.scm 78 */
																											obj_t BgL_arg2461z00_539;

																											{	/* Object/method.scm 78 */
																												obj_t
																													BgL_arg2470z00_540;
																												BgL_arg2470z00_540 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg2461z00_539 =
																													MAKE_PAIR
																													(BgL_arg2454z00_536,
																													BgL_arg2470z00_540);
																											}
																											BgL_list2460z00_538 =
																												MAKE_PAIR
																												(BgL_arg2453z00_535,
																												BgL_arg2461z00_539);
																										}
																										BgL_arg2451z00_533 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg2452z00_534,
																											BgL_list2460z00_538);
																								}}
																								BgL_arg2444z00_530 =
																									MAKE_PAIR(BgL_arg2448z00_532,
																									BgL_arg2451z00_533);
																							}
																							{	/* Object/method.scm 78 */
																								obj_t BgL_list2445z00_531;

																								BgL_list2445z00_531 =
																									MAKE_PAIR(BgL_arg2444z00_530,
																									BNIL);
																								return BgL_list2445z00_531;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* Object/method.scm 51 */
																		obj_t BgL_arg2746z00_887;

																		{	/* Object/method.scm 51 */
																			obj_t BgL_list2748z00_888;

																			BgL_list2748z00_888 =
																				MAKE_PAIR(CNST_TABLE_REF(((long) 15)),
																				BNIL);
																			BgL_arg2746z00_887 = BgL_list2748z00_888;
																		}
																		{	/* Object/method.scm 51 */
																			obj_t BgL_list2747z00_889;

																			BgL_list2747z00_889 =
																				MAKE_PAIR(BgL_arg2746z00_887, BNIL);
																			return
																				BGl_userzd2errorzd2zztools_errorz00
																				(BgL_idz00_515,
																				BGl_string2777z00zzobject_methodz00,
																				BgL_srcz00_5, BgL_list2747z00_889);
																		}
																	}
															}
														}
													}
												}
											else
												{	/* Object/method.scm 45 */
													obj_t BgL_arg2746z00_895;

													{	/* Object/method.scm 45 */
														obj_t BgL_list2748z00_896;

														BgL_list2748z00_896 =
															MAKE_PAIR(CNST_TABLE_REF(((long) 15)), BNIL);
														BgL_arg2746z00_895 = BgL_list2748z00_896;
													}
													{	/* Object/method.scm 45 */
														obj_t BgL_list2747z00_897;

														BgL_list2747z00_897 =
															MAKE_PAIR(BgL_arg2746z00_895, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_515,
															BGl_string2778z00zzobject_methodz00, BgL_srcz00_5,
															BgL_list2747z00_897);
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



/* _make-method-body */
	obj_t BGl__makezd2methodzd2bodyz00zzobject_methodz00(obj_t BgL_envz00_905,
		obj_t BgL_identz00_906, obj_t BgL_argsz00_907, obj_t BgL_localsz00_908,
		obj_t BgL_bodyz00_909, obj_t BgL_srcz00_910)
	{
		AN_OBJECT;
		{	/* Object/method.scm 32 */
			return
				BGl_makezd2methodzd2bodyz00zzobject_methodz00(BgL_identz00_906,
				BgL_argsz00_907, BgL_localsz00_908, BgL_bodyz00_909, BgL_srcz00_910);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_methodz00()
	{
		AN_OBJECT;
		{	/* Object/method.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_methodz00()
	{
		AN_OBJECT;
		{	/* Object/method.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_methodz00()
	{
		AN_OBJECT;
		{	/* Object/method.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2779z00zzobject_methodz00));
		}
	}

#ifdef __cplusplus
}
#endif
