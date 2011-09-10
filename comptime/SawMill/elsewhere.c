/*===========================================================================*/
/*   (SawMill/elsewhere.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/elsewhere.scm)*/
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

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_cnstzd2initzd2zzsaw_elsewherez00();
	BGL_EXPORTED_DECL obj_t
		BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_elsewherez00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_elsewherez00 = BUNSPEC;
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_genericzd2initzd2zzsaw_elsewherez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_elsewherez00();
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern bool_t
		BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00(BgL_globalz00_bglt);
	static obj_t BGl__needzd2functionzd2pointerz00zzsaw_elsewherez00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_elsewherez00();
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_needzd2functionzd2pointerzd2envzd2zzsaw_elsewherez00,
		BgL_bgl__needza7d2function3319za7,
		BGl__needzd2functionzd2pointerz00zzsaw_elsewherez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3315z00zzsaw_elsewherez00,
		BgL_bgl_string3315za700za7za7s3320za7, "saw_elsewhere", 13);
	      DEFINE_STRING(BGl_string3316z00zzsaw_elsewherez00,
		BgL_bgl_string3316za700za7za7s3321za7, "(sfun sgfun) ", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_elsewherez00(long
		BgL_checksumz00_1185, char *BgL_fromz00_1186)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_elsewherez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_elsewherez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_elsewherez00();
					BGl_cnstzd2initzd2zzsaw_elsewherez00();
					BGl_importedzd2moduleszd2initz00zzsaw_elsewherez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_elsewherez00()
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_elsewhere");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_elsewhere");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_elsewhere");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_elsewherez00()
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 1 */
			{	/* SawMill/elsewhere.scm 1 */
				obj_t BgL_cportz00_1177;

				BgL_cportz00_1177 =
					bgl_open_input_string(BGl_string3316z00zzsaw_elsewherez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1178;

					BgL_iz00_1178 = ((long) 0);
				BgL_loopz00_1179:
					if ((BgL_iz00_1178 == ((long) -1)))
						{	/* SawMill/elsewhere.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/elsewhere.scm 1 */
							{	/* SawMill/elsewhere.scm 1 */
								obj_t BgL_arg3318z00_1181;

								{	/* SawMill/elsewhere.scm 1 */

									{	/* SawMill/elsewhere.scm 1 */
										obj_t BgL_locationz00_1183;

										BgL_locationz00_1183 = BBOOL(((bool_t) 0));
										{	/* SawMill/elsewhere.scm 1 */

											BgL_arg3318z00_1181 =
												BGl_readz00zz__readerz00(BgL_cportz00_1177,
												BgL_locationz00_1183);
										}
									}
								}
								{	/* SawMill/elsewhere.scm 1 */
									int BgL_auxz00_1202;

									BgL_auxz00_1202 = (int) (BgL_iz00_1178);
									CNST_TABLE_SET(BgL_auxz00_1202, BgL_arg3318z00_1181);
							}}
							{	/* SawMill/elsewhere.scm 1 */
								int BgL_auxz00_1184;

								BgL_auxz00_1184 = (int) ((BgL_iz00_1178 - ((long) 1)));
								{
									long BgL_iz00_1207;

									BgL_iz00_1207 = (long) (BgL_auxz00_1184);
									BgL_iz00_1178 = BgL_iz00_1207;
									goto BgL_loopz00_1179;
								}
							}
						}
				}
			}
		}
	}



/* need-function-pointer */
	BGL_EXPORTED_DEF obj_t
		BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(BgL_globalz00_bglt
		BgL_varz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 7 */
			{	/* SawMill/elsewhere.scm 8 */
				BgL_valuez00_bglt BgL_valz00_784;

				{
					BgL_variablez00_bglt BgL_auxz00_1209;

					BgL_auxz00_1209 = (BgL_variablez00_bglt) (BgL_varz00_1);
					BgL_valz00_784 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_1209))->BgL_valuez00);
				}
				{	/* SawMill/elsewhere.scm 9 */
					bool_t BgL_testz00_1212;

					{	/* SawMill/elsewhere.scm 9 */
						obj_t BgL_arg3267z00_790;

						BgL_arg3267z00_790 =
							(((BgL_globalz00_bglt) CREF(BgL_varz00_1))->BgL_modulez00);
						BgL_testz00_1212 =
							(BgL_arg3267z00_790 == BGl_za2moduleza2z00zzmodule_modulez00);
					}
					if (BgL_testz00_1212)
						{	/* SawMill/elsewhere.scm 9 */
							if (BGl_requirezd2prototypezf3z21zzbackend_c_prototypez00
								(BgL_varz00_1))
								{	/* SawMill/elsewhere.scm 11 */
									bool_t BgL_testz00_1217;

									{	/* SawMill/elsewhere.scm 11 */
										obj_t BgL_obj2049z00_1173;

										BgL_obj2049z00_1173 = (obj_t) (BgL_valz00_784);
										BgL_testz00_1217 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2049z00_1173,
											BGl_scnstz00zzast_varz00);
									}
									if (BgL_testz00_1217)
										{	/* SawMill/elsewhere.scm 12 */
											obj_t BgL_auxz00_1220;

											{
												BgL_scnstz00_bglt BgL_auxz00_1221;

												BgL_auxz00_1221 = (BgL_scnstz00_bglt) (BgL_valz00_784);
												BgL_auxz00_1220 =
													(((BgL_scnstz00_bglt) CREF(BgL_auxz00_1221))->
													BgL_classz00);
											}
											return
												BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_1220, CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* SawMill/elsewhere.scm 11 */
											return BFALSE;
										}
								}
							else
								{	/* SawMill/elsewhere.scm 10 */
									return BFALSE;
								}
						}
					else
						{	/* SawMill/elsewhere.scm 9 */
							return BFALSE;
						}
				}
			}
		}
	}



/* _need-function-pointer */
	obj_t BGl__needzd2functionzd2pointerz00zzsaw_elsewherez00(obj_t
		BgL_envz00_1175, obj_t BgL_varz00_1176)
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 7 */
			return
				BGl_needzd2functionzd2pointerz00zzsaw_elsewherez00(
				(BgL_globalz00_bglt) (BgL_varz00_1176));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_elsewherez00()
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_elsewherez00()
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_elsewherez00()
	{
		AN_OBJECT;
		{	/* SawMill/elsewhere.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3315z00zzsaw_elsewherez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3315z00zzsaw_elsewherez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3315z00zzsaw_elsewherez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3315z00zzsaw_elsewherez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_c_prototypez00(((long)
					14608757), BSTRING_TO_STRING(BGl_string3315z00zzsaw_elsewherez00));
		}
	}

#ifdef __cplusplus
}
#endif
