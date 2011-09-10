/*===========================================================================*/
/*   (Tools/shape.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/shape.scm)*/
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


	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_IMPORT bool_t BGl_classzf3zf3zz__objectz00(obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_nodezd2ze3sexpz31zzast_dumpz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_shapez00();
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2accesszd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2typezd2shapezf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztools_shapez00();
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_loopz00zztools_shapez00(obj_t);
	static obj_t BGl_shapezd2default3244zd2zztools_shapez00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_shapezd2type3251zd2zztools_shapez00(obj_t, obj_t);
	static obj_t BGl_shapezd2global3247zd2zztools_shapez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztools_shapez00();
	static obj_t BGl_shapezd2local3249zd2zztools_shapez00(obj_t, obj_t);
	static obj_t BGl__shapezd2default3244zd2zztools_shapez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_shapez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztools_shapez00();
	extern obj_t BGl_za2userzd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00;
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_importedzd2moduleszd2initz00zztools_shapez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_za2modulezd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_EXPORTED_DECL obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_globalzd2bucketzd2positionz00zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t make_vector(int, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2keyzd2shapezf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl__shapez00zztools_shapez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_shapezd2node3253zd2zztools_shapez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2namezd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_shapez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_shapezd2envzd2zztools_shapez00,
		BgL_bgl__shapeza700za7za7tools3485za7, BGl__shapez00zztools_shapez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_shapezd2default3244zd2envz00zztools_shapez00,
		BgL_bgl__shapeza7d2default3486za7,
		BGl__shapezd2default3244zd2zztools_shapez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3465z00zztools_shapez00,
		BgL_bgl_shapeza7d2global323487za7,
		BGl_shapezd2global3247zd2zztools_shapez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3466z00zztools_shapez00,
		BgL_bgl_shapeza7d2local3243488za7, BGl_shapezd2local3249zd2zztools_shapez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3467z00zztools_shapez00,
		BgL_bgl_shapeza7d2type32513489za7, BGl_shapezd2type3251zd2zztools_shapez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3468z00zztools_shapez00,
		BgL_bgl_shapeza7d2node32533490za7, BGl_shapezd2node3253zd2zztools_shapez00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3463z00zztools_shapez00,
		BgL_bgl_string3463za700za7za7t3491za7, "shape", 5);
	      DEFINE_STRING(BGl_string3464z00zztools_shapez00,
		BgL_bgl_string3464za700za7za7t3492za7, "#<class:~a>", 11);
	      DEFINE_STRING(BGl_string3470z00zztools_shapez00,
		BgL_bgl_string3470za700za7za7t3493za7, "\"", 1);
	      DEFINE_STRING(BGl_string3469z00zztools_shapez00,
		BgL_bgl_string3469za700za7za7t3494za7, "-", 1);
	      DEFINE_STRING(BGl_string3471z00zztools_shapez00,
		BgL_bgl_string3471za700za7za7t3495za7, "::", 2);
	      DEFINE_STRING(BGl_string3472z00zztools_shapez00,
		BgL_bgl_string3472za700za7za7t3496za7, "", 0);
	      DEFINE_STRING(BGl_string3473z00zztools_shapez00,
		BgL_bgl_string3473za700za7za7t3497za7, "-<user>", 7);
	      DEFINE_STRING(BGl_string3474z00zztools_shapez00,
		BgL_bgl_string3474za700za7za7t3498za7, "-<no-user>", 10);
	      DEFINE_STRING(BGl_string3475z00zztools_shapez00,
		BgL_bgl_string3475za700za7za7t3499za7, "{", 1);
	      DEFINE_STRING(BGl_string3476z00zztools_shapez00,
		BgL_bgl_string3476za700za7za7t3500za7, "}", 1);
	      DEFINE_STRING(BGl_string3477z00zztools_shapez00,
		BgL_bgl_string3477za700za7za7t3501za7, "~a<<~a>>", 8);
	      DEFINE_STRING(BGl_string3478z00zztools_shapez00,
		BgL_bgl_string3478za700za7za7t3502za7, "@", 1);
	      DEFINE_STRING(BGl_string3480z00zztools_shapez00,
		BgL_bgl_string3480za700za7za7t3503za7, "global-shape:", 13);
	      DEFINE_STRING(BGl_string3479z00zztools_shapez00,
		BgL_bgl_string3479za700za7za7t3504za7, "Can't find global anymore -- ", 29);
	      DEFINE_STRING(BGl_string3481z00zztools_shapez00,
		BgL_bgl_string3481za700za7za7t3505za7, "tools_shape", 11);
	      DEFINE_STRING(BGl_string3482z00zztools_shapez00,
		BgL_bgl_string3482za700za7za7t3506za7, "@ _ a-tvector ", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long
		BgL_checksumz00_1548, char *BgL_fromz00_1549)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_shapez00))
				{
					BGl_requirezd2initializa7ationz75zztools_shapez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztools_shapez00();
					BGl_cnstzd2initzd2zztools_shapez00();
					BGl_importedzd2moduleszd2initz00zztools_shapez00();
					BGl_genericzd2initzd2zztools_shapez00();
					BGl_methodzd2initzd2zztools_shapez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_shapez00()
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_shape");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_shape");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_shapez00()
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			{	/* Tools/shape.scm 16 */
				obj_t BgL_cportz00_1539;

				BgL_cportz00_1539 =
					bgl_open_input_string(BGl_string3482z00zztools_shapez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1540;

					BgL_iz00_1540 = ((long) 2);
				BgL_loopz00_1541:
					if ((BgL_iz00_1540 == ((long) -1)))
						{	/* Tools/shape.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Tools/shape.scm 16 */
							{	/* Tools/shape.scm 16 */
								obj_t BgL_arg3484z00_1543;

								{	/* Tools/shape.scm 16 */

									{	/* Tools/shape.scm 16 */
										obj_t BgL_locationz00_1545;

										BgL_locationz00_1545 = BBOOL(((bool_t) 0));
										{	/* Tools/shape.scm 16 */

											BgL_arg3484z00_1543 =
												BGl_readz00zz__readerz00(BgL_cportz00_1539,
												BgL_locationz00_1545);
										}
									}
								}
								{	/* Tools/shape.scm 16 */
									int BgL_auxz00_1572;

									BgL_auxz00_1572 = (int) (BgL_iz00_1540);
									CNST_TABLE_SET(BgL_auxz00_1572, BgL_arg3484z00_1543);
							}}
							{	/* Tools/shape.scm 16 */
								int BgL_auxz00_1546;

								BgL_auxz00_1546 = (int) ((BgL_iz00_1540 - ((long) 1)));
								{
									long BgL_iz00_1577;

									BgL_iz00_1577 = (long) (BgL_auxz00_1546);
									BgL_iz00_1540 = BgL_iz00_1577;
									goto BgL_loopz00_1541;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_shapez00()
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_shapez00()
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00,
				BGl_shapezd2default3244zd2envz00zztools_shapez00, BFALSE,
				BGl_string3463z00zztools_shapez00);
		}
	}



/* shape */
	BGL_EXPORTED_DEF obj_t BGl_shapez00zztools_shapez00(obj_t BgL_expz00_11)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 28 */
			{

				if (BGL_OBJECTP(BgL_expz00_11))
					{	/* Tools/shape.scm 28 */
						obj_t BgL_method3245z00_1175;

						{	/* Tools/shape.scm 28 */
							BgL_objectz00_bglt BgL_objz00_1386;

							BgL_objz00_1386 = (BgL_objectz00_bglt) (BgL_expz00_11);
							{	/* Tools/shape.scm 28 */
								long BgL_objzd2classzd2numz00_1387;

								BgL_objzd2classzd2numz00_1387 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1386);
								{	/* Tools/shape.scm 28 */
									obj_t BgL_arg2643z00_1388;

									BgL_arg2643z00_1388 =
										PROCEDURE_REF(BGl_shapezd2envzd2zztools_shapez00,
										(int) (((long) 1)));
									{	/* Tools/shape.scm 28 */
										obj_t BgL_arrayz00_1390;

										int BgL_offsetz00_1391;

										BgL_arrayz00_1390 = BgL_arg2643z00_1388;
										BgL_offsetz00_1391 = (int) (BgL_objzd2classzd2numz00_1387);
										{	/* Tools/shape.scm 28 */
											long BgL_offsetz00_1392;

											BgL_offsetz00_1392 =
												((long) (BgL_offsetz00_1391) - OBJECT_TYPE);
											{	/* Tools/shape.scm 28 */
												long BgL_modz00_1393;

												{	/* Tools/shape.scm 28 */
													int BgL_arg2645z00_1394;

													BgL_arg2645z00_1394 = (int) (((long) 16));
													{	/* Tools/shape.scm 28 */
														long BgL_auxz00_1590;

														BgL_auxz00_1590 = (long) (BgL_arg2645z00_1394);
														BgL_modz00_1393 =
															(BgL_offsetz00_1392 / BgL_auxz00_1590);
												}}
												{	/* Tools/shape.scm 28 */
													long BgL_restz00_1395;

													{	/* Tools/shape.scm 28 */
														int BgL_arg2644z00_1396;

														BgL_arg2644z00_1396 = (int) (((long) 16));
														{	/* Tools/shape.scm 28 */
															long BgL_auxz00_1594;

															BgL_auxz00_1594 = (long) (BgL_arg2644z00_1396);
															BgL_restz00_1395 =
																(BgL_offsetz00_1392 % BgL_auxz00_1594);
													}}
													{	/* Tools/shape.scm 28 */

														BgL_method3245z00_1175 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1390,
																(int) (BgL_modz00_1393)),
															(int) (BgL_restz00_1395));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3245z00_1175) (BgL_method3245z00_1175,
							BgL_expz00_11, BEOA);
					}
				else
					{	/* Tools/shape.scm 28 */
						{	/* Tools/shape.scm 28 */
							obj_t BgL_fun3311z00_1177;

							BgL_fun3311z00_1177 =
								PROCEDURE_REF(BGl_shapezd2envzd2zztools_shapez00,
								(int) (((long) 0)));
							return
								PROCEDURE_ENTRY(BgL_fun3311z00_1177) (BgL_fun3311z00_1177,
								BgL_expz00_11, BEOA);
						}
					}
			}
		}
	}



/* _shape */
	obj_t BGl__shapez00zztools_shapez00(obj_t BgL_envz00_1522,
		obj_t BgL_expz00_1523)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 28 */
			return BGl_shapez00zztools_shapez00(BgL_expz00_1523);
		}
	}



/* shape-default3244 */
	obj_t BGl_shapezd2default3244zd2zztools_shapez00(obj_t BgL_expz00_12)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			if (BGl_classzf3zf3zz__objectz00(BgL_expz00_12))
				{	/* Tools/shape.scm 31 */
					obj_t BgL_arg3314z00_1180;

					BgL_arg3314z00_1180 = BGl_classzd2namezd2zz__objectz00(BgL_expz00_12);
					{	/* Tools/shape.scm 31 */
						obj_t BgL_list3315z00_1181;

						BgL_list3315z00_1181 = MAKE_PAIR(BgL_arg3314z00_1180, BNIL);
						return
							BGl_formatz00zz__r4_output_6_10_3z00
							(BGl_string3464z00zztools_shapez00, BgL_list3315z00_1181);
					}
				}
			else
				{	/* Tools/shape.scm 30 */
					if (PAIRP(BgL_expz00_12))
						{	/* Tools/shape.scm 32 */
							return BGl_loopz00zztools_shapez00(BgL_expz00_12);
						}
					else
						{	/* Tools/shape.scm 32 */
							if (VECTORP(BgL_expz00_12))
								{	/* Tools/shape.scm 44 */
									int BgL_lenz00_1200;

									BgL_lenz00_1200 = VECTOR_LENGTH(BgL_expz00_12);
									{	/* Tools/shape.scm 44 */
										obj_t BgL_resz00_1201;

										BgL_resz00_1201 = make_vector(BgL_lenz00_1200, BNIL);
										{	/* Tools/shape.scm 45 */

											{
												long BgL_indicez00_1203;

												BgL_indicez00_1203 = ((long) 0);
											BgL_zc3anonymousza33333ze3z83_1204:
												if ((BgL_indicez00_1203 == (long) (BgL_lenz00_1200)))
													{	/* Tools/shape.scm 47 */
														return BgL_resz00_1201;
													}
												else
													{	/* Tools/shape.scm 47 */
														VECTOR_SET(BgL_resz00_1201,
															(int) (BgL_indicez00_1203),
															BGl_shapez00zztools_shapez00(VECTOR_REF
																(BgL_expz00_12, (int) (BgL_indicez00_1203))));
														{
															long BgL_indicez00_1628;

															BgL_indicez00_1628 =
																(BgL_indicez00_1203 + ((long) 1));
															BgL_indicez00_1203 = BgL_indicez00_1628;
															goto BgL_zc3anonymousza33333ze3z83_1204;
														}
													}
											}
										}
									}
								}
							else
								{	/* Tools/shape.scm 54 */
									bool_t BgL_testz00_1630;

									if (STRUCTP(BgL_expz00_12))
										{	/* Tools/shape.scm 54 */
											BgL_testz00_1630 =
												(STRUCT_KEY(BgL_expz00_12) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* Tools/shape.scm 54 */
											BgL_testz00_1630 = ((bool_t) 0);
										}
									if (BgL_testz00_1630)
										{	/* Tools/shape.scm 55 */
											obj_t BgL_arg3339z00_1211;

											obj_t BgL_arg3340z00_1212;

											BgL_arg3339z00_1211 =
												BGl_shapez00zztools_shapez00(STRUCT_REF(BgL_expz00_12,
													(int) (((long) 0))));
											BgL_arg3340z00_1212 =
												BGl_shapez00zztools_shapez00(STRUCT_REF(BgL_expz00_12,
													(int) (((long) 1))));
											{	/* Tools/shape.scm 55 */
												obj_t BgL_newz00_1451;

												BgL_newz00_1451 =
													create_struct(CNST_TABLE_REF(((long) 0)),
													(int) (((long) 2)));
												{	/* Tools/shape.scm 55 */
													int BgL_auxz00_1645;

													BgL_auxz00_1645 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_1451, BgL_auxz00_1645,
														BgL_arg3340z00_1212);
												}
												{	/* Tools/shape.scm 55 */
													int BgL_auxz00_1648;

													BgL_auxz00_1648 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_1451, BgL_auxz00_1648,
														BgL_arg3339z00_1211);
												}
												return BgL_newz00_1451;
											}
										}
									else
										{	/* Tools/shape.scm 54 */
											if (STRUCTP(BgL_expz00_12))
												{	/* Tools/shape.scm 57 */
													obj_t BgL_keyz00_1216;

													BgL_keyz00_1216 = STRUCT_KEY(BgL_expz00_12);
													{	/* Tools/shape.scm 57 */
														int BgL_lenz00_1217;

														BgL_lenz00_1217 = STRUCT_LENGTH(BgL_expz00_12);
														{	/* Tools/shape.scm 58 */
															obj_t BgL_resz00_1218;

															BgL_resz00_1218 =
																make_struct(BgL_keyz00_1216, BgL_lenz00_1217,
																BNIL);
															{	/* Tools/shape.scm 59 */

																{
																	long BgL_indicez00_1220;

																	BgL_indicez00_1220 = ((long) 0);
																BgL_zc3anonymousza33344ze3z83_1221:
																	if (
																		(BgL_indicez00_1220 ==
																			(long) (BgL_lenz00_1217)))
																		{	/* Tools/shape.scm 61 */
																			return BgL_resz00_1218;
																		}
																	else
																		{	/* Tools/shape.scm 61 */
																			{	/* Tools/shape.scm 64 */
																				obj_t BgL_auxz00_1661;

																				int BgL_auxz00_1659;

																				BgL_auxz00_1661 =
																					BGl_shapez00zztools_shapez00
																					(STRUCT_REF(BgL_expz00_12,
																						(int) (BgL_indicez00_1220)));
																				BgL_auxz00_1659 =
																					(int) (BgL_indicez00_1220);
																				STRUCT_SET(BgL_resz00_1218,
																					BgL_auxz00_1659, BgL_auxz00_1661);
																			}
																			{
																				long BgL_indicez00_1666;

																				BgL_indicez00_1666 =
																					(BgL_indicez00_1220 + ((long) 1));
																				BgL_indicez00_1220 = BgL_indicez00_1666;
																				goto BgL_zc3anonymousza33344ze3z83_1221;
																			}
																		}
																}
															}
														}
													}
												}
											else
												{	/* Tools/shape.scm 56 */
													return BgL_expz00_12;
												}
										}
								}
						}
				}
		}
	}



/* loop */
	obj_t BGl_loopz00zztools_shapez00(obj_t BgL_expz00_1184)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 33 */
			if (NULLP(BgL_expz00_1184))
				{	/* Tools/shape.scm 35 */
					return BNIL;
				}
			else
				{	/* Tools/shape.scm 35 */
					if (PAIRP(BgL_expz00_1184))
						{	/* Tools/shape.scm 37 */
							if (EXTENDED_PAIRP(BgL_expz00_1184))
								{	/* Tools/shape.scm 40 */
									obj_t BgL_arg3321z00_1189;

									obj_t BgL_arg3324z00_1190;

									obj_t BgL_arg3325z00_1191;

									BgL_arg3321z00_1189 =
										BGl_shapez00zztools_shapez00(CAR(BgL_expz00_1184));
									BgL_arg3324z00_1190 =
										BGl_loopz00zztools_shapez00(CDR(BgL_expz00_1184));
									BgL_arg3325z00_1191 = CER(BgL_expz00_1184);
									{	/* Tools/shape.scm 40 */
										obj_t BgL_res3454z00_1422;

										BgL_res3454z00_1422 =
											MAKE_EXTENDED_PAIR(BgL_arg3321z00_1189,
											BgL_arg3324z00_1190, BgL_arg3325z00_1191);
										return BgL_res3454z00_1422;
									}
								}
							else
								{	/* Tools/shape.scm 39 */
									return
										MAKE_PAIR(BGl_shapez00zztools_shapez00(CAR
											(BgL_expz00_1184)),
										BGl_loopz00zztools_shapez00(CDR(BgL_expz00_1184)));
								}
						}
					else
						{	/* Tools/shape.scm 37 */
							return BGl_shapez00zztools_shapez00(BgL_expz00_1184);
						}
				}
		}
	}



/* _shape-default3244 */
	obj_t BGl__shapezd2default3244zd2zztools_shapez00(obj_t BgL_envz00_1524,
		obj_t BgL_expz00_1525)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			return BGl_shapezd2default3244zd2zztools_shapez00(BgL_expz00_1525);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_shapez00()
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_globalz00zzast_varz00,
				BGl_proc3465z00zztools_shapez00, BGl_string3463z00zztools_shapez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_localz00zzast_varz00,
				BGl_proc3466z00zztools_shapez00, BGl_string3463z00zztools_shapez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_typez00zztype_typez00,
				BGl_proc3467z00zztools_shapez00, BGl_string3463z00zztools_shapez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_nodez00zzast_nodez00,
				BGl_proc3468z00zztools_shapez00, BGl_string3463z00zztools_shapez00);
		}
	}



/* shape-node3253 */
	obj_t BGl_shapezd2node3253zd2zztools_shapez00(obj_t BgL_envz00_1530,
		obj_t BgL_nodez00_1531)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 161 */
			return
				BGl_nodezd2ze3sexpz31zzast_dumpz00(
				(BgL_nodez00_bglt) (BgL_nodez00_1531));
		}
	}



/* shape-type3251 */
	obj_t BGl_shapezd2type3251zd2zztools_shapez00(obj_t BgL_envz00_1532,
		obj_t BgL_typez00_1533)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 143 */
			{
				BgL_typez00_bglt BgL_typez00_1333;

				BgL_typez00_1333 = (BgL_typez00_bglt) (BgL_typez00_1533);
				{	/* Tools/shape.scm 144 */
					obj_t BgL_spz00_1336;

					{	/* Tools/shape.scm 144 */
						obj_t BgL_arg3446z00_1349;

						BgL_arg3446z00_1349 =
							(((BgL_typez00_bglt) CREF(BgL_typez00_1333))->BgL_idz00);
						{	/* Tools/shape.scm 144 */
							obj_t BgL_res3462z00_1520;

							{	/* Tools/shape.scm 144 */
								obj_t BgL_arg2063z00_1519;

								BgL_arg2063z00_1519 = SYMBOL_TO_STRING(BgL_arg3446z00_1349);
								BgL_res3462z00_1520 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1519);
							}
							BgL_spz00_1336 = BgL_res3462z00_1520;
						}
					}
					{	/* Tools/shape.scm 144 */
						obj_t BgL_sz00_1337;

						if (CBOOL(BGl_za2keyzd2shapezf3za2z21zzengine_paramz00))
							{	/* Tools/shape.scm 146 */
								obj_t BgL_arg3443z00_1346;

								{	/* Tools/shape.scm 151 */
									long BgL_arg3444z00_1347;

									BgL_arg3444z00_1347 = (long) (BgL_typez00_1333);
									BgL_arg3443z00_1346 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_arg3444z00_1347, ((long) 16));
								}
								BgL_sz00_1337 =
									string_append_3(BgL_spz00_1336,
									BGl_string3469z00zztools_shapez00, BgL_arg3443z00_1346);
							}
						else
							{	/* Tools/shape.scm 145 */
								BgL_sz00_1337 = BgL_spz00_1336;
							}
						{	/* Tools/shape.scm 145 */

							if (CBOOL(BGl_za2typenamezd2shapezf3za2z21zzengine_paramz00))
								{	/* Tools/shape.scm 155 */
									obj_t BgL_arg3435z00_1339;

									BgL_arg3435z00_1339 =
										(((BgL_typez00_bglt) CREF(BgL_typez00_1333))->BgL_namez00);
									{	/* Tools/shape.scm 155 */
										obj_t BgL_list3437z00_1341;

										{	/* Tools/shape.scm 155 */
											obj_t BgL_arg3438z00_1342;

											{	/* Tools/shape.scm 155 */
												obj_t BgL_arg3439z00_1343;

												{	/* Tools/shape.scm 155 */
													obj_t BgL_arg3440z00_1344;

													BgL_arg3440z00_1344 =
														MAKE_PAIR(BGl_string3470z00zztools_shapez00, BNIL);
													BgL_arg3439z00_1343 =
														MAKE_PAIR(BgL_arg3435z00_1339, BgL_arg3440z00_1344);
												}
												BgL_arg3438z00_1342 =
													MAKE_PAIR(BGl_string3470z00zztools_shapez00,
													BgL_arg3439z00_1343);
											}
											BgL_list3437z00_1341 =
												MAKE_PAIR(BgL_sz00_1337, BgL_arg3438z00_1342);
										}
										return
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list3437z00_1341);
									}
								}
							else
								{	/* Tools/shape.scm 154 */
									return BgL_sz00_1337;
								}
						}
					}
				}
			}
		}
	}



/* shape-local3249 */
	obj_t BGl_shapezd2local3249zd2zztools_shapez00(obj_t BgL_envz00_1534,
		obj_t BgL_varz00_1535)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 115 */
			{
				BgL_localz00_bglt BgL_varz00_1300;

				BgL_varz00_1300 = (BgL_localz00_bglt) (BgL_varz00_1535);
				{	/* Tools/shape.scm 116 */
					obj_t BgL_symz00_1303;

					if (CBOOL(BGl_za2keyzd2shapezf3za2z21zzengine_paramz00))
						{	/* Tools/shape.scm 117 */
							obj_t BgL_arg3422z00_1321;

							obj_t BgL_arg3424z00_1322;

							obj_t BgL_arg3425z00_1323;

							{
								BgL_variablez00_bglt BgL_auxz00_1712;

								BgL_auxz00_1712 = (BgL_variablez00_bglt) (BgL_varz00_1300);
								BgL_arg3422z00_1321 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1712))->BgL_idz00);
							}
							BgL_arg3424z00_1322 = CNST_TABLE_REF(((long) 1));
							{	/* Tools/shape.scm 120 */
								obj_t BgL_arg3431z00_1327;

								{	/* Tools/shape.scm 120 */

									BgL_arg3431z00_1327 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(
										(((BgL_localz00_bglt) CREF(BgL_varz00_1300))->BgL_keyz00),
										((long) 10));
								}
								BgL_arg3425z00_1323 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg3431z00_1327));
							}
							{	/* Tools/shape.scm 117 */
								obj_t BgL_list3426z00_1324;

								{	/* Tools/shape.scm 117 */
									obj_t BgL_arg3427z00_1325;

									{	/* Tools/shape.scm 117 */
										obj_t BgL_arg3430z00_1326;

										BgL_arg3430z00_1326 = MAKE_PAIR(BgL_arg3425z00_1323, BNIL);
										BgL_arg3427z00_1325 =
											MAKE_PAIR(BgL_arg3424z00_1322, BgL_arg3430z00_1326);
									}
									BgL_list3426z00_1324 =
										MAKE_PAIR(BgL_arg3422z00_1321, BgL_arg3427z00_1325);
								}
								BgL_symz00_1303 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list3426z00_1324);
						}}
					else
						{
							BgL_variablez00_bglt BgL_auxz00_1724;

							BgL_auxz00_1724 = (BgL_variablez00_bglt) (BgL_varz00_1300);
							BgL_symz00_1303 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_1724))->BgL_idz00);
						}
					{	/* Tools/shape.scm 116 */
						obj_t BgL_symz00_1304;

						{	/* Tools/shape.scm 122 */
							obj_t BgL_res3460z00_1509;

							{	/* Tools/shape.scm 122 */
								obj_t BgL_arg2063z00_1508;

								BgL_arg2063z00_1508 = SYMBOL_TO_STRING(BgL_symz00_1303);
								BgL_res3460z00_1509 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_1508);
							}
							BgL_symz00_1304 = BgL_res3460z00_1509;
						}
						{	/* Tools/shape.scm 122 */
							BgL_typez00_bglt BgL_typez00_1305;

							{
								BgL_variablez00_bglt BgL_auxz00_1729;

								BgL_auxz00_1729 = (BgL_variablez00_bglt) (BgL_varz00_1300);
								BgL_typez00_1305 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1729))->BgL_typez00);
							}
							{	/* Tools/shape.scm 123 */
								obj_t BgL_tshapez00_1306;

								if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
									{	/* Tools/shape.scm 124 */
										BgL_tshapez00_1306 =
											string_append(BGl_string3471z00zztools_shapez00,
											BGl_shapez00zztools_shapez00((obj_t) (BgL_typez00_1305)));
									}
								else
									{	/* Tools/shape.scm 124 */
										BgL_tshapez00_1306 = BGl_string3472z00zztools_shapez00;
									}
								{	/* Tools/shape.scm 124 */
									obj_t BgL_ushapez00_1307;

									if (CBOOL(BGl_za2userzd2shapezf3za2z21zzengine_paramz00))
										{	/* Tools/shape.scm 127 */
											if (
												(((BgL_localz00_bglt) CREF(BgL_varz00_1300))->
													BgL_userzf3zf3))
												{	/* Tools/shape.scm 129 */
													BgL_ushapez00_1307 =
														BGl_string3473z00zztools_shapez00;
												}
											else
												{	/* Tools/shape.scm 129 */
													BgL_ushapez00_1307 =
														BGl_string3474z00zztools_shapez00;
												}
										}
									else
										{	/* Tools/shape.scm 127 */
											BgL_ushapez00_1307 = BGl_string3472z00zztools_shapez00;
										}
									{	/* Tools/shape.scm 127 */
										obj_t BgL_ashapez00_1308;

										if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
											{	/* Tools/shape.scm 136 */
												obj_t BgL_arg3416z00_1315;

												{	/* Tools/shape.scm 136 */
													obj_t BgL_arg3418z00_1317;

													{
														BgL_variablez00_bglt BgL_auxz00_1743;

														BgL_auxz00_1743 =
															(BgL_variablez00_bglt) (BgL_varz00_1300);
														BgL_arg3418z00_1317 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1743))->
															BgL_accessz00);
													}
													{	/* Tools/shape.scm 136 */
														obj_t BgL_res3461z00_1515;

														{	/* Tools/shape.scm 136 */
															obj_t BgL_symbolz00_1513;

															BgL_symbolz00_1513 = BgL_arg3418z00_1317;
															{	/* Tools/shape.scm 136 */
																obj_t BgL_arg2063z00_1514;

																BgL_arg2063z00_1514 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1513);
																BgL_res3461z00_1515 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1514);
															}
														}
														BgL_arg3416z00_1315 = BgL_res3461z00_1515;
													}
												}
												BgL_ashapez00_1308 =
													string_append_3(BGl_string3475z00zztools_shapez00,
													BgL_arg3416z00_1315,
													BGl_string3476z00zztools_shapez00);
											}
										else
											{	/* Tools/shape.scm 133 */
												BgL_ashapez00_1308 = BGl_string3472z00zztools_shapez00;
											}
										{	/* Tools/shape.scm 132 */

											{	/* Tools/shape.scm 138 */
												obj_t BgL_arg3410z00_1309;

												{	/* Tools/shape.scm 138 */
													obj_t BgL_list3411z00_1310;

													{	/* Tools/shape.scm 138 */
														obj_t BgL_arg3412z00_1311;

														{	/* Tools/shape.scm 138 */
															obj_t BgL_arg3413z00_1312;

															{	/* Tools/shape.scm 138 */
																obj_t BgL_arg3414z00_1313;

																BgL_arg3414z00_1313 =
																	MAKE_PAIR(BgL_ashapez00_1308, BNIL);
																BgL_arg3413z00_1312 =
																	MAKE_PAIR(BgL_ushapez00_1307,
																	BgL_arg3414z00_1313);
															}
															BgL_arg3412z00_1311 =
																MAKE_PAIR(BgL_tshapez00_1306,
																BgL_arg3413z00_1312);
														}
														BgL_list3411z00_1310 =
															MAKE_PAIR(BgL_symz00_1304, BgL_arg3412z00_1311);
													}
													BgL_arg3410z00_1309 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list3411z00_1310);
												}
												return
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg3410z00_1309));
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



/* shape-global3247 */
	obj_t BGl_shapezd2global3247zd2zztools_shapez00(obj_t BgL_envz00_1536,
		obj_t BgL_varz00_1537)
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 74 */
			{
				BgL_globalz00_bglt BgL_varz00_1227;

				BgL_varz00_1227 = (BgL_globalz00_bglt) (BgL_varz00_1537);
				{	/* Tools/shape.scm 75 */
					obj_t BgL_strzd2idzd2_1230;

					if (CBOOL(BGl_za2namezd2shapezf3za2z21zzengine_paramz00))
						{	/* Tools/shape.scm 77 */
							obj_t BgL_arg3404z00_1293;

							obj_t BgL_arg3405z00_1294;

							{
								BgL_variablez00_bglt BgL_auxz00_1759;

								BgL_auxz00_1759 = (BgL_variablez00_bglt) (BgL_varz00_1227);
								BgL_arg3404z00_1293 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1759))->BgL_idz00);
							}
							{
								BgL_variablez00_bglt BgL_auxz00_1762;

								BgL_auxz00_1762 = (BgL_variablez00_bglt) (BgL_varz00_1227);
								BgL_arg3405z00_1294 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1762))->BgL_namez00);
							}
							{	/* Tools/shape.scm 77 */
								obj_t BgL_list3406z00_1295;

								{	/* Tools/shape.scm 77 */
									obj_t BgL_arg3407z00_1296;

									BgL_arg3407z00_1296 = MAKE_PAIR(BgL_arg3405z00_1294, BNIL);
									BgL_list3406z00_1295 =
										MAKE_PAIR(BgL_arg3404z00_1293, BgL_arg3407z00_1296);
								}
								BgL_strzd2idzd2_1230 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string3477z00zztools_shapez00, BgL_list3406z00_1295);
							}
						}
					else
						{	/* Tools/shape.scm 76 */
							obj_t BgL_arg3408z00_1297;

							{
								BgL_variablez00_bglt BgL_auxz00_1768;

								BgL_auxz00_1768 = (BgL_variablez00_bglt) (BgL_varz00_1227);
								BgL_arg3408z00_1297 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1768))->BgL_idz00);
							}
							{	/* Tools/shape.scm 76 */
								obj_t BgL_res3457z00_1483;

								{	/* Tools/shape.scm 76 */
									obj_t BgL_arg2063z00_1482;

									BgL_arg2063z00_1482 = SYMBOL_TO_STRING(BgL_arg3408z00_1297);
									BgL_res3457z00_1483 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1482);
								}
								BgL_strzd2idzd2_1230 = BgL_res3457z00_1483;
							}
						}
					{	/* Tools/shape.scm 75 */
						obj_t BgL_modulez00_1231;

						{	/* Tools/shape.scm 78 */
							obj_t BgL_arg3402z00_1291;

							BgL_arg3402z00_1291 =
								(((BgL_globalz00_bglt) CREF(BgL_varz00_1227))->BgL_modulez00);
							{	/* Tools/shape.scm 78 */
								obj_t BgL_res3458z00_1487;

								{	/* Tools/shape.scm 78 */
									obj_t BgL_arg2063z00_1486;

									BgL_arg2063z00_1486 = SYMBOL_TO_STRING(BgL_arg3402z00_1291);
									BgL_res3458z00_1487 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_1486);
								}
								BgL_modulez00_1231 = BgL_res3458z00_1487;
							}
						}
						{	/* Tools/shape.scm 78 */
							BgL_typez00_bglt BgL_typez00_1232;

							{
								BgL_variablez00_bglt BgL_auxz00_1776;

								BgL_auxz00_1776 = (BgL_variablez00_bglt) (BgL_varz00_1227);
								BgL_typez00_1232 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_1776))->BgL_typez00);
							}
							{	/* Tools/shape.scm 79 */
								obj_t BgL_tshapez00_1233;

								if (CBOOL(BGl_za2typezd2shapezf3za2z21zzengine_paramz00))
									{	/* Tools/shape.scm 80 */
										BgL_tshapez00_1233 =
											string_append(BGl_string3471z00zztools_shapez00,
											BGl_shapez00zztools_shapez00((obj_t) (BgL_typez00_1232)));
									}
								else
									{	/* Tools/shape.scm 80 */
										BgL_tshapez00_1233 = BGl_string3472z00zztools_shapez00;
									}
								{	/* Tools/shape.scm 80 */
									obj_t BgL_ushapez00_1234;

									if (CBOOL(BGl_za2userzd2shapezf3za2z21zzengine_paramz00))
										{	/* Tools/shape.scm 83 */
											if (
												(((BgL_globalz00_bglt) CREF(BgL_varz00_1227))->
													BgL_userzf3zf3))
												{	/* Tools/shape.scm 85 */
													BgL_ushapez00_1234 =
														BGl_string3473z00zztools_shapez00;
												}
											else
												{	/* Tools/shape.scm 85 */
													BgL_ushapez00_1234 =
														BGl_string3474z00zztools_shapez00;
												}
										}
									else
										{	/* Tools/shape.scm 83 */
											BgL_ushapez00_1234 = BGl_string3472z00zztools_shapez00;
										}
									{	/* Tools/shape.scm 83 */
										obj_t BgL_ashapez00_1235;

										if (CBOOL(BGl_za2accesszd2shapezf3za2z21zzengine_paramz00))
											{	/* Tools/shape.scm 92 */
												obj_t BgL_arg3396z00_1285;

												{	/* Tools/shape.scm 92 */
													obj_t BgL_arg3398z00_1287;

													{
														BgL_variablez00_bglt BgL_auxz00_1790;

														BgL_auxz00_1790 =
															(BgL_variablez00_bglt) (BgL_varz00_1227);
														BgL_arg3398z00_1287 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_1790))->
															BgL_accessz00);
													}
													{	/* Tools/shape.scm 92 */
														obj_t BgL_res3459z00_1493;

														{	/* Tools/shape.scm 92 */
															obj_t BgL_symbolz00_1491;

															BgL_symbolz00_1491 = BgL_arg3398z00_1287;
															{	/* Tools/shape.scm 92 */
																obj_t BgL_arg2063z00_1492;

																BgL_arg2063z00_1492 =
																	SYMBOL_TO_STRING(BgL_symbolz00_1491);
																BgL_res3459z00_1493 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_1492);
															}
														}
														BgL_arg3396z00_1285 = BgL_res3459z00_1493;
													}
												}
												BgL_ashapez00_1235 =
													string_append_3(BGl_string3475z00zztools_shapez00,
													BgL_arg3396z00_1285,
													BGl_string3476z00zztools_shapez00);
											}
										else
											{	/* Tools/shape.scm 89 */
												BgL_ashapez00_1235 = BGl_string3472z00zztools_shapez00;
											}
										{	/* Tools/shape.scm 88 */

											if (CBOOL
												(BGl_za2modulezd2shapezf3za2z21zzengine_paramz00))
												{	/* Tools/shape.scm 97 */
													obj_t BgL_arg3349z00_1236;

													{	/* Tools/shape.scm 97 */
														obj_t BgL_list3350z00_1237;

														{	/* Tools/shape.scm 97 */
															obj_t BgL_arg3351z00_1238;

															{	/* Tools/shape.scm 97 */
																obj_t BgL_arg3353z00_1240;

																{	/* Tools/shape.scm 97 */
																	obj_t BgL_arg3354z00_1241;

																	{	/* Tools/shape.scm 97 */
																		obj_t BgL_arg3355z00_1242;

																		{	/* Tools/shape.scm 97 */
																			obj_t BgL_arg3356z00_1243;

																			BgL_arg3356z00_1243 =
																				MAKE_PAIR(BgL_ashapez00_1235, BNIL);
																			BgL_arg3355z00_1242 =
																				MAKE_PAIR(BgL_ushapez00_1234,
																				BgL_arg3356z00_1243);
																		}
																		BgL_arg3354z00_1241 =
																			MAKE_PAIR(BgL_tshapez00_1233,
																			BgL_arg3355z00_1242);
																	}
																	BgL_arg3353z00_1240 =
																		MAKE_PAIR(BgL_modulez00_1231,
																		BgL_arg3354z00_1241);
																}
																BgL_arg3351z00_1238 =
																	MAKE_PAIR(BGl_string3478z00zztools_shapez00,
																	BgL_arg3353z00_1240);
															}
															BgL_list3350z00_1237 =
																MAKE_PAIR(BgL_strzd2idzd2_1230,
																BgL_arg3351z00_1238);
														}
														BgL_arg3349z00_1236 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list3350z00_1237);
													}
													return
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg3349z00_1236));
												}
											else
												{

													{	/* Tools/shape.scm 99 */
														obj_t BgL_aux3243z00_1245;

														{	/* Tools/shape.scm 99 */
															obj_t BgL_arg3382z00_1270;

															obj_t BgL_arg3383z00_1271;

															{
																BgL_variablez00_bglt BgL_auxz00_1807;

																BgL_auxz00_1807 =
																	(BgL_variablez00_bglt) (BgL_varz00_1227);
																BgL_arg3382z00_1270 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_1807))->BgL_idz00);
															}
															BgL_arg3383z00_1271 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1227))->
																BgL_modulez00);
															BgL_aux3243z00_1245 =
																BGl_globalzd2bucketzd2positionz00zzast_envz00
																(BgL_arg3382z00_1270, BgL_arg3383z00_1271);
														}
														if (INTEGERP(BgL_aux3243z00_1245))
															{	/* Tools/shape.scm 99 */
																switch ((long) CINT(BgL_aux3243z00_1245))
																	{
																	case ((long) -1):

																		{	/* Tools/shape.scm 101 */
																			obj_t BgL_arg3360z00_1249;

																			{	/* Tools/shape.scm 103 */
																				obj_t BgL_arg3364z00_1253;

																				obj_t BgL_arg3365z00_1254;

																				BgL_arg3364z00_1253 =
																					CNST_TABLE_REF(((long) 2));
																				{	/* Tools/shape.scm 103 */
																					obj_t BgL_arg3366z00_1255;

																					obj_t BgL_arg3367z00_1256;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_1815;
																						BgL_auxz00_1815 =
																							(BgL_variablez00_bglt)
																							(BgL_varz00_1227);
																						BgL_arg3366z00_1255 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_1815))->
																							BgL_idz00);
																					}
																					BgL_arg3367z00_1256 =
																						(((BgL_globalz00_bglt)
																							CREF(BgL_varz00_1227))->
																						BgL_modulez00);
																					{	/* Tools/shape.scm 103 */
																						obj_t BgL_list3369z00_1258;

																						{	/* Tools/shape.scm 103 */
																							obj_t BgL_arg3371z00_1259;

																							BgL_arg3371z00_1259 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3369z00_1258 =
																								MAKE_PAIR(BgL_arg3367z00_1256,
																								BgL_arg3371z00_1259);
																						}
																						BgL_arg3365z00_1254 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3366z00_1255,
																							BgL_list3369z00_1258);
																				}}
																				BgL_arg3360z00_1249 =
																					MAKE_PAIR(BgL_arg3364z00_1253,
																					BgL_arg3365z00_1254);
																			}
																			{	/* Tools/shape.scm 101 */
																				obj_t BgL_list3361z00_1250;

																				{	/* Tools/shape.scm 101 */
																					obj_t BgL_arg3362z00_1251;

																					{	/* Tools/shape.scm 101 */
																						obj_t BgL_arg3363z00_1252;

																						BgL_arg3363z00_1252 =
																							MAKE_PAIR(BgL_arg3360z00_1249,
																							BNIL);
																						BgL_arg3362z00_1251 =
																							MAKE_PAIR
																							(BGl_string3479z00zztools_shapez00,
																							BgL_arg3363z00_1252);
																					}
																					BgL_list3361z00_1250 =
																						MAKE_PAIR
																						(BGl_string3480z00zztools_shapez00,
																						BgL_arg3362z00_1251);
																				}
																				BGl_warningz00zz__errorz00
																					(BgL_list3361z00_1250);
																		}}
																		{	/* Tools/shape.scm 104 */
																			obj_t BgL_arg3372z00_1260;

																			{	/* Tools/shape.scm 104 */
																				obj_t BgL_list3373z00_1261;

																				{	/* Tools/shape.scm 104 */
																					obj_t BgL_arg3374z00_1262;

																					{	/* Tools/shape.scm 104 */
																						obj_t BgL_arg3375z00_1263;

																						{	/* Tools/shape.scm 104 */
																							obj_t BgL_arg3376z00_1264;

																							BgL_arg3376z00_1264 =
																								MAKE_PAIR(BgL_ashapez00_1235,
																								BNIL);
																							BgL_arg3375z00_1263 =
																								MAKE_PAIR(BgL_ushapez00_1234,
																								BgL_arg3376z00_1264);
																						}
																						BgL_arg3374z00_1262 =
																							MAKE_PAIR(BgL_tshapez00_1233,
																							BgL_arg3375z00_1263);
																					}
																					BgL_list3373z00_1261 =
																						MAKE_PAIR(BgL_strzd2idzd2_1230,
																						BgL_arg3374z00_1262);
																				}
																				BgL_arg3372z00_1260 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list3373z00_1261);
																			}
																			return
																				string_to_symbol(BSTRING_TO_STRING
																				(BgL_arg3372z00_1260));
																		}
																		break;
																	case ((long) 0):

																		{	/* Tools/shape.scm 106 */
																			obj_t BgL_arg3377z00_1265;

																			{	/* Tools/shape.scm 106 */
																				obj_t BgL_list3378z00_1266;

																				{	/* Tools/shape.scm 106 */
																					obj_t BgL_arg3379z00_1267;

																					{	/* Tools/shape.scm 106 */
																						obj_t BgL_arg3380z00_1268;

																						{	/* Tools/shape.scm 106 */
																							obj_t BgL_arg3381z00_1269;

																							BgL_arg3381z00_1269 =
																								MAKE_PAIR(BgL_ashapez00_1235,
																								BNIL);
																							BgL_arg3380z00_1268 =
																								MAKE_PAIR(BgL_ushapez00_1234,
																								BgL_arg3381z00_1269);
																						}
																						BgL_arg3379z00_1267 =
																							MAKE_PAIR(BgL_tshapez00_1233,
																							BgL_arg3380z00_1268);
																					}
																					BgL_list3378z00_1266 =
																						MAKE_PAIR(BgL_strzd2idzd2_1230,
																						BgL_arg3379z00_1267);
																				}
																				BgL_arg3377z00_1265 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list3378z00_1266);
																			}
																			return
																				string_to_symbol(BSTRING_TO_STRING
																				(BgL_arg3377z00_1265));
																		}
																		break;
																	default:
																	BgL_case_else3242z00_1244:
																		{	/* Tools/shape.scm 108 */
																			obj_t BgL_symz00_1272;

																			{	/* Tools/shape.scm 109 */
																				obj_t BgL_arg3390z00_1279;

																				{	/* Tools/shape.scm 109 */
																					obj_t BgL_list3391z00_1280;

																					{	/* Tools/shape.scm 109 */
																						obj_t BgL_arg3392z00_1281;

																						{	/* Tools/shape.scm 109 */
																							obj_t BgL_arg3393z00_1282;

																							{	/* Tools/shape.scm 109 */
																								obj_t BgL_arg3394z00_1283;

																								BgL_arg3394z00_1283 =
																									MAKE_PAIR(BgL_ashapez00_1235,
																									BNIL);
																								BgL_arg3393z00_1282 =
																									MAKE_PAIR(BgL_ushapez00_1234,
																									BgL_arg3394z00_1283);
																							}
																							BgL_arg3392z00_1281 =
																								MAKE_PAIR(BgL_tshapez00_1233,
																								BgL_arg3393z00_1282);
																						}
																						BgL_list3391z00_1280 =
																							MAKE_PAIR(BgL_strzd2idzd2_1230,
																							BgL_arg3392z00_1281);
																					}
																					BgL_arg3390z00_1279 =
																						BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																						(BgL_list3391z00_1280);
																				}
																				BgL_symz00_1272 =
																					string_to_symbol(BSTRING_TO_STRING
																					(BgL_arg3390z00_1279));
																			}
																			{	/* Tools/shape.scm 110 */
																				obj_t BgL_arg3384z00_1273;

																				obj_t BgL_arg3385z00_1274;

																				BgL_arg3384z00_1273 =
																					CNST_TABLE_REF(((long) 2));
																				{	/* Tools/shape.scm 110 */
																					obj_t BgL_arg3386z00_1275;

																					BgL_arg3386z00_1275 =
																						string_to_symbol(BSTRING_TO_STRING
																						(BgL_modulez00_1231));
																					{	/* Tools/shape.scm 110 */
																						obj_t BgL_list3388z00_1277;

																						{	/* Tools/shape.scm 110 */
																							obj_t BgL_arg3389z00_1278;

																							BgL_arg3389z00_1278 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3388z00_1277 =
																								MAKE_PAIR(BgL_arg3386z00_1275,
																								BgL_arg3389z00_1278);
																						}
																						BgL_arg3385z00_1274 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_symz00_1272,
																							BgL_list3388z00_1277);
																				}}
																				return
																					MAKE_PAIR(BgL_arg3384z00_1273,
																					BgL_arg3385z00_1274);
																			}
																		}
																	}
															}
														else
															{	/* Tools/shape.scm 99 */
																goto BgL_case_else3242z00_1244;
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
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_shapez00()
	{
		AN_OBJECT;
		{	/* Tools/shape.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 239222528),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3481z00zztools_shapez00));
		}
	}

#ifdef __cplusplus
}
#endif
