/*===========================================================================*/
/*   (Effect/effect.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/effect.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_sidezd2effectzf3zd2appzd2ly3263z21zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_sidezd2effectzf3zd2node3247zf3zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_sidezd2effectzf3zd2setq3253zf3zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t
		BGl_sidezd2effectzf3zd2setzd2exzd23257zf3zzeffect_effectz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzeffect_effectz00();
	extern obj_t BGl_nodezf2effectzf2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_sidezd2effectzf3zd2var3249zf3zzeffect_effectz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzeffect_effectz00();
	static obj_t BGl_sidezd2effectzf3zd2jumpzd2ex3259z21zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_sidezd2effectzf3zd2fail3255zf3zzeffect_effectz00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_sidezd2effectzf3zd2boxzd2set3261z21zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_sidezd2effectzf3zd2nodezf2ef3251z01zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_effectz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_effectz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzeffect_effectz00();
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	static obj_t
		BGl_sidezd2effectzf3zd2default3244zf3zzeffect_effectz00(BgL_nodez00_bglt);
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl__sidezd2effectzf3z21zzeffect_effectz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_effectz00();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_sidezd2effectzf3zd2funcall3265zf3zzeffect_effectz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_sidezd2effectzf3zd2cast3267zf3zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_effectz00();
	static obj_t BGl__sidezd2effectzf3zd2default3244zf3zzeffect_effectz00(obj_t,
		obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_sidezd2effectzf3zd2default3244zd2envz21zzeffect_effectz00,
		BgL_bgl__sideza7d2effectza7f3353z00,
		BGl__sidezd2effectzf3zd2default3244zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
		BgL_bgl__sideza7d2effectza7f3354z00,
		BGl__sidezd2effectzf3z21zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3338z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33355z00,
		BGl_sidezd2effectzf3zd2node3247zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3340z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33356z00,
		BGl_sidezd2effectzf3zd2nodezf2ef3251z01zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3339z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33357z00,
		BGl_sidezd2effectzf3zd2var3249zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3341z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33358z00,
		BGl_sidezd2effectzf3zd2setq3253zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3342z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33359z00,
		BGl_sidezd2effectzf3zd2fail3255zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3343z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33360z00,
		BGl_sidezd2effectzf3zd2setzd2exzd23257zf3zzeffect_effectz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3344z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33361z00,
		BGl_sidezd2effectzf3zd2jumpzd2ex3259z21zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3345z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33362z00,
		BGl_sidezd2effectzf3zd2boxzd2set3261z21zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3346z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33363z00,
		BGl_sidezd2effectzf3zd2appzd2ly3263z21zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3347z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33364z00,
		BGl_sidezd2effectzf3zd2funcall3265zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3348z00zzeffect_effectz00,
		BgL_bgl_sideza7d2effectza7f33365z00,
		BGl_sidezd2effectzf3zd2cast3267zf3zzeffect_effectz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3336z00zzeffect_effectz00,
		BgL_bgl_string3336za700za7za7e3366za7, "side-effect?", 12);
	      DEFINE_STRING(BGl_string3337z00zzeffect_effectz00,
		BgL_bgl_string3337za700za7za7e3367za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3350z00zzeffect_effectz00,
		BgL_bgl_string3350za700za7za7e3368za7, "read side-effect?-default3244 ",
		30);
	      DEFINE_STRING(BGl_string3349z00zzeffect_effectz00,
		BgL_bgl_string3349za700za7za7e3369za7, "effect_effect", 13);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long
		BgL_checksumz00_1336, char *BgL_fromz00_1337)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_effectz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_effectz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzeffect_effectz00();
					BGl_cnstzd2initzd2zzeffect_effectz00();
					BGl_importedzd2moduleszd2initz00zzeffect_effectz00();
					BGl_genericzd2initzd2zzeffect_effectz00();
					BGl_methodzd2initzd2zzeffect_effectz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_effectz00()
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"effect_effect");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "effect_effect");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"effect_effect");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_effectz00()
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			{	/* Effect/effect.scm 19 */
				obj_t BgL_cportz00_1320;

				BgL_cportz00_1320 =
					bgl_open_input_string(BGl_string3350z00zzeffect_effectz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1321;

					BgL_iz00_1321 = ((long) 1);
				BgL_loopz00_1322:
					if ((BgL_iz00_1321 == ((long) -1)))
						{	/* Effect/effect.scm 19 */
							return BUNSPEC;
						}
					else
						{	/* Effect/effect.scm 19 */
							{	/* Effect/effect.scm 19 */
								obj_t BgL_arg3352z00_1324;

								{	/* Effect/effect.scm 19 */

									{	/* Effect/effect.scm 19 */
										obj_t BgL_locationz00_1326;

										BgL_locationz00_1326 = BBOOL(((bool_t) 0));
										{	/* Effect/effect.scm 19 */

											BgL_arg3352z00_1324 =
												BGl_readz00zz__readerz00(BgL_cportz00_1320,
												BgL_locationz00_1326);
										}
									}
								}
								{	/* Effect/effect.scm 19 */
									int BgL_auxz00_1355;

									BgL_auxz00_1355 = (int) (BgL_iz00_1321);
									CNST_TABLE_SET(BgL_auxz00_1355, BgL_arg3352z00_1324);
							}}
							{	/* Effect/effect.scm 19 */
								int BgL_auxz00_1327;

								BgL_auxz00_1327 = (int) ((BgL_iz00_1321 - ((long) 1)));
								{
									long BgL_iz00_1360;

									BgL_iz00_1360 = (long) (BgL_auxz00_1327);
									BgL_iz00_1321 = BgL_iz00_1360;
									goto BgL_loopz00_1322;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzeffect_effectz00()
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_effectz00()
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_sidezd2effectzf3zd2default3244zd2envz21zzeffect_effectz00,
				BGl_nodez00zzast_nodez00, BGl_string3336z00zzeffect_effectz00);
		}
	}



/* side-effect? */
	BGL_EXPORTED_DEF bool_t
		BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 26 */
			{	/* Effect/effect.scm 26 */
				obj_t BgL_method3245z00_1224;

				{	/* Effect/effect.scm 26 */
					BgL_objectz00_bglt BgL_objz00_1225;

					BgL_objz00_1225 = (BgL_objectz00_bglt) (BgL_nodez00_1);
					{	/* Effect/effect.scm 26 */
						long BgL_objzd2classzd2numz00_1226;

						BgL_objzd2classzd2numz00_1226 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1225);
						{	/* Effect/effect.scm 26 */
							obj_t BgL_arg2643z00_1227;

							BgL_arg2643z00_1227 =
								PROCEDURE_REF(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
								(int) (((long) 1)));
							{	/* Effect/effect.scm 26 */
								obj_t BgL_arrayz00_1229;

								int BgL_offsetz00_1230;

								BgL_arrayz00_1229 = BgL_arg2643z00_1227;
								BgL_offsetz00_1230 = (int) (BgL_objzd2classzd2numz00_1226);
								{	/* Effect/effect.scm 26 */
									long BgL_offsetz00_1231;

									BgL_offsetz00_1231 =
										((long) (BgL_offsetz00_1230) - OBJECT_TYPE);
									{	/* Effect/effect.scm 26 */
										long BgL_modz00_1232;

										{	/* Effect/effect.scm 26 */
											int BgL_arg2645z00_1233;

											BgL_arg2645z00_1233 = (int) (((long) 16));
											{	/* Effect/effect.scm 26 */
												long BgL_auxz00_1371;

												BgL_auxz00_1371 = (long) (BgL_arg2645z00_1233);
												BgL_modz00_1232 =
													(BgL_offsetz00_1231 / BgL_auxz00_1371);
										}}
										{	/* Effect/effect.scm 26 */
											long BgL_restz00_1234;

											{	/* Effect/effect.scm 26 */
												int BgL_arg2644z00_1235;

												BgL_arg2644z00_1235 = (int) (((long) 16));
												{	/* Effect/effect.scm 26 */
													long BgL_auxz00_1375;

													BgL_auxz00_1375 = (long) (BgL_arg2644z00_1235);
													BgL_restz00_1234 =
														(BgL_offsetz00_1231 % BgL_auxz00_1375);
											}}
											{	/* Effect/effect.scm 26 */

												BgL_method3245z00_1224 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1229,
														(int) (BgL_modz00_1232)), (int) (BgL_restz00_1234));
				}}}}}}}}
				return
					CBOOL(PROCEDURE_ENTRY(BgL_method3245z00_1224) (BgL_method3245z00_1224,
						(obj_t) (BgL_nodez00_1), BEOA));
			}
		}
	}



/* _side-effect? */
	obj_t BGl__sidezd2effectzf3z21zzeffect_effectz00(obj_t BgL_envz00_1283,
		obj_t BgL_nodez00_1284)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 26 */
			return
				BBOOL(BGl_sidezd2effectzf3z21zzeffect_effectz00(
					(BgL_nodez00_bglt) (BgL_nodez00_1284)));
		}
	}



/* side-effect?-default3244 */
	obj_t BGl_sidezd2effectzf3zd2default3244zf3zzeffect_effectz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3337z00zzeffect_effectz00, (obj_t) (BgL_nodez00_2));
		}
	}



/* _side-effect?-default3244 */
	obj_t BGl__sidezd2effectzf3zd2default3244zf3zzeffect_effectz00(obj_t
		BgL_envz00_1285, obj_t BgL_nodez00_1286)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			return
				BGl_sidezd2effectzf3zd2default3244zf3zzeffect_effectz00(
				(BgL_nodez00_bglt) (BgL_nodez00_1286));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_effectz00()
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_nodez00zzast_nodez00, BGl_proc3338z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_varz00zzast_nodez00, BGl_proc3339z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_nodezf2effectzf2zzast_nodez00, BGl_proc3340z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_setqz00zzast_nodez00, BGl_proc3341z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_failz00zzast_nodez00, BGl_proc3342z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3343z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3344z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3345z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3346z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3347z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
				BGl_castz00zzast_nodez00, BGl_proc3348z00zzeffect_effectz00,
				BGl_string3336z00zzeffect_effectz00);
		}
	}



/* side-effect?-cast3267 */
	obj_t BGl_sidezd2effectzf3zd2cast3267zf3zzeffect_effectz00(obj_t
		BgL_envz00_1298, obj_t BgL_nodez00_1299)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 94 */
			{
				BgL_castz00_bglt BgL_nodez00_1217;

				{	/* Effect/effect.scm 95 */
					bool_t BgL_auxz00_1405;

					BgL_nodez00_1217 = (BgL_castz00_bglt) (BgL_nodez00_1299);
					{	/* Effect/effect.scm 95 */
						BgL_nodez00_bglt BgL_arg3329z00_1254;

						BgL_arg3329z00_1254 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1217))->BgL_argz00);
						{	/* Effect/effect.scm 95 */
							bool_t BgL_res3335z00_1282;

							{	/* Effect/effect.scm 95 */
								obj_t BgL_method3245z00_1257;

								{	/* Effect/effect.scm 95 */
									BgL_objectz00_bglt BgL_objz00_1258;

									BgL_objz00_1258 = (BgL_objectz00_bglt) (BgL_arg3329z00_1254);
									{	/* Effect/effect.scm 95 */
										long BgL_objzd2classzd2numz00_1259;

										BgL_objzd2classzd2numz00_1259 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1258);
										{	/* Effect/effect.scm 95 */
											obj_t BgL_arg2643z00_1260;

											BgL_arg2643z00_1260 =
												PROCEDURE_REF
												(BGl_sidezd2effectzf3zd2envzf3zzeffect_effectz00,
												(int) (((long) 1)));
											{	/* Effect/effect.scm 95 */
												obj_t BgL_arrayz00_1262;

												int BgL_offsetz00_1263;

												BgL_arrayz00_1262 = BgL_arg2643z00_1260;
												BgL_offsetz00_1263 =
													(int) (BgL_objzd2classzd2numz00_1259);
												{	/* Effect/effect.scm 95 */
													long BgL_offsetz00_1264;

													BgL_offsetz00_1264 =
														((long) (BgL_offsetz00_1263) - OBJECT_TYPE);
													{	/* Effect/effect.scm 95 */
														long BgL_modz00_1265;

														{	/* Effect/effect.scm 95 */
															int BgL_arg2645z00_1266;

															BgL_arg2645z00_1266 = (int) (((long) 16));
															{	/* Effect/effect.scm 95 */
																long BgL_auxz00_1415;

																BgL_auxz00_1415 = (long) (BgL_arg2645z00_1266);
																BgL_modz00_1265 =
																	(BgL_offsetz00_1264 / BgL_auxz00_1415);
														}}
														{	/* Effect/effect.scm 95 */
															long BgL_restz00_1267;

															{	/* Effect/effect.scm 95 */
																int BgL_arg2644z00_1268;

																BgL_arg2644z00_1268 = (int) (((long) 16));
																{	/* Effect/effect.scm 95 */
																	long BgL_auxz00_1419;

																	BgL_auxz00_1419 =
																		(long) (BgL_arg2644z00_1268);
																	BgL_restz00_1267 =
																		(BgL_offsetz00_1264 % BgL_auxz00_1419);
															}}
															{	/* Effect/effect.scm 95 */

																BgL_method3245z00_1257 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1262,
																		(int) (BgL_modz00_1265)),
																	(int) (BgL_restz00_1267));
								}}}}}}}}
								BgL_res3335z00_1282 =
									CBOOL(PROCEDURE_ENTRY(BgL_method3245z00_1257)
									(BgL_method3245z00_1257, (obj_t) (BgL_arg3329z00_1254),
										BEOA));
							}
							BgL_auxz00_1405 = BgL_res3335z00_1282;
					}}
					return BBOOL(BgL_auxz00_1405);
				}
			}
		}
	}



/* side-effect?-funcall3265 */
	obj_t BGl_sidezd2effectzf3zd2funcall3265zf3zzeffect_effectz00(obj_t
		BgL_envz00_1300, obj_t BgL_nodez00_1301)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 88 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-app-ly3263 */
	obj_t BGl_sidezd2effectzf3zd2appzd2ly3263z21zzeffect_effectz00(obj_t
		BgL_envz00_1302, obj_t BgL_nodez00_1303)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 82 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-box-set3261 */
	obj_t BGl_sidezd2effectzf3zd2boxzd2set3261z21zzeffect_effectz00(obj_t
		BgL_envz00_1304, obj_t BgL_nodez00_1305)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 76 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-jump-ex3259 */
	obj_t BGl_sidezd2effectzf3zd2jumpzd2ex3259z21zzeffect_effectz00(obj_t
		BgL_envz00_1306, obj_t BgL_nodez00_1307)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 70 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-set-ex-3257 */
	obj_t BGl_sidezd2effectzf3zd2setzd2exzd23257zf3zzeffect_effectz00(obj_t
		BgL_envz00_1308, obj_t BgL_nodez00_1309)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 64 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-fail3255 */
	obj_t BGl_sidezd2effectzf3zd2fail3255zf3zzeffect_effectz00(obj_t
		BgL_envz00_1310, obj_t BgL_nodez00_1311)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 58 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-setq3253 */
	obj_t BGl_sidezd2effectzf3zd2setq3253zf3zzeffect_effectz00(obj_t
		BgL_envz00_1312, obj_t BgL_nodez00_1313)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 52 */
			return BBOOL(((bool_t) 1));
		}
	}



/* side-effect?-node/ef3251 */
	obj_t BGl_sidezd2effectzf3zd2nodezf2ef3251z01zzeffect_effectz00(obj_t
		BgL_envz00_1314, obj_t BgL_nodez00_1315)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 43 */
			{
				BgL_nodezf2effectzf2_bglt BgL_nodez00_1175;

				BgL_nodez00_1175 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1315);
				{	/* Effect/effect.scm 44 */
					obj_t BgL_effectz00_1178;

					BgL_effectz00_1178 =
						(((BgL_nodezf2effectzf2_bglt) CREF(BgL_nodez00_1175))->
						BgL_sidezd2effectzf3z21);
					if (BOOLEANP(BgL_effectz00_1178))
						{	/* Effect/effect.scm 45 */
							return BgL_effectz00_1178;
						}
					else
						{	/* Effect/effect.scm 45 */
							return BTRUE;
						}
				}
			}
		}
	}



/* side-effect?-var3249 */
	obj_t BGl_sidezd2effectzf3zd2var3249zf3zzeffect_effectz00(obj_t
		BgL_envz00_1316, obj_t BgL_nodez00_1317)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 37 */
			{
				BgL_varz00_bglt BgL_nodez00_1166;

				{	/* Effect/effect.scm 38 */
					bool_t BgL_auxz00_1443;

					BgL_nodez00_1166 = (BgL_varz00_bglt) (BgL_nodez00_1317);
					{	/* Effect/effect.scm 38 */
						bool_t BgL_testz00_1444;

						{	/* Effect/effect.scm 38 */
							obj_t BgL_auxz00_1445;

							{	/* Effect/effect.scm 38 */
								BgL_variablez00_bglt BgL_obj1614z00_1250;

								BgL_obj1614z00_1250 =
									(((BgL_varz00_bglt) CREF(BgL_nodez00_1166))->BgL_variablez00);
								BgL_auxz00_1445 =
									(((BgL_variablez00_bglt) CREF(BgL_obj1614z00_1250))->
									BgL_accessz00);
							}
							BgL_testz00_1444 =
								(BgL_auxz00_1445 == CNST_TABLE_REF(((long) 1)));
						}
						if (BgL_testz00_1444)
							{	/* Effect/effect.scm 38 */
								BgL_auxz00_1443 = ((bool_t) 0);
							}
						else
							{	/* Effect/effect.scm 38 */
								BgL_auxz00_1443 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_auxz00_1443);
				}
			}
		}
	}



/* side-effect?-node3247 */
	obj_t BGl_sidezd2effectzf3zd2node3247zf3zzeffect_effectz00(obj_t
		BgL_envz00_1318, obj_t BgL_nodez00_1319)
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 31 */
			return BBOOL(((bool_t) 0));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_effectz00()
	{
		AN_OBJECT;
		{	/* Effect/effect.scm 19 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3349z00zzeffect_effectz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3349z00zzeffect_effectz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3349z00zzeffect_effectz00));
		}
	}

#ifdef __cplusplus
}
#endif
