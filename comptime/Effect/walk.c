/*===========================================================================*/
/*   (Effect/walk.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Effect/walk.scm)*/
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

	typedef struct BgL_feffectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_readz00;
		obj_t BgL_writez00;
	}                 *BgL_feffectz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_localzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                      *BgL_localzf2fromzf2_bglt;

	typedef struct BgL_globalzf2fromzf2_bgl
	{
		obj_t BgL_fromz00;
	}                       *BgL_globalzf2fromzf2_bglt;


	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_getzd2varzf2allz20zzeffect_cgraphz00();
	static obj_t BGl_zc3exitza33459ze3z83zzeffect_walkz00(obj_t);
	extern obj_t BGl_globalzf2fromzf2zzeffect_cgraphz00;
	extern obj_t
		BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(BgL_variablez00_bglt);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_feffectz12z12zzeffect_feffectz00(obj_t);
	static obj_t BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzeffect_walkz00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__effectzd2walkz12zc0zzeffect_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzeffect_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_feffectz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_spreadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__writezd2effectzd2zzeffect_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzeffect_walkz00();
	BGL_IMPORT obj_t BGl_displayza2za2zz__r4_output_6_10_3z00(obj_t);
	extern bool_t
		BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(BgL_nodez00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzeffect_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzeffect_walkz00();
	extern obj_t BGl_localzf2fromzf2zzeffect_cgraphz00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzeffect_walkz00();
	extern obj_t BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_effectzd2walkz12zc0zzeffect_walkz00(obj_t,
		bool_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_feffectz00zzast_varz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzeffect_walkz00();
	BGL_EXPORTED_DECL obj_t BGl_writezd2effectzd2zzeffect_walkz00(obj_t);
	static obj_t __cnst[4];


	extern obj_t BGl_resetzd2effectzd2tablesz12zd2envzc0zzeffect_cgraphz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_writezd2effectzd2envz00zzeffect_walkz00,
		BgL_bgl__writeza7d2effectza73589z00, BGl__writezd2effectzd2zzeffect_walkz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_effectzd2walkz12zd2envz12zzeffect_walkz00,
		BgL_bgl__effectza7d2walkza713590z00,
		BGl__effectzd2walkz12zc0zzeffect_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3566z00zzeffect_walkz00,
		BgL_bgl_string3566za700za7za7e3591za7, "Effect", 6);
	      DEFINE_STRING(BGl_string3567z00zzeffect_walkz00,
		BgL_bgl_string3567za700za7za7e3592za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3568z00zzeffect_walkz00,
		BgL_bgl_string3568za700za7za7e3593za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3570z00zzeffect_walkz00,
		BgL_bgl_string3570za700za7za7e3594za7, "s", 1);
	      DEFINE_STRING(BGl_string3569z00zzeffect_walkz00,
		BgL_bgl_string3569za700za7za7e3595za7, " error", 6);
	      DEFINE_STRING(BGl_string3571z00zzeffect_walkz00,
		BgL_bgl_string3571za700za7za7e3596za7, "", 0);
	      DEFINE_STRING(BGl_string3572z00zzeffect_walkz00,
		BgL_bgl_string3572za700za7za7e3597za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3573z00zzeffect_walkz00,
		BgL_bgl_string3573za700za7za7e3598za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3574z00zzeffect_walkz00,
		BgL_bgl_string3574za700za7za7e3599za7, ".sch", 4);
	      DEFINE_STRING(BGl_string3575z00zzeffect_walkz00,
		BgL_bgl_string3575za700za7za7e3600za7, "write-effect", 12);
	      DEFINE_STRING(BGl_string3576z00zzeffect_walkz00,
		BgL_bgl_string3576za700za7za7e3601za7, "Can't open output file", 22);
	      DEFINE_STRING(BGl_string3577z00zzeffect_walkz00,
		BgL_bgl_string3577za700za7za7e3602za7, " (effect", 8);
	      DEFINE_STRING(BGl_string3578z00zzeffect_walkz00,
		BgL_bgl_string3578za700za7za7e3603za7, "   (", 4);
	      DEFINE_STRING(BGl_string3580z00zzeffect_walkz00,
		BgL_bgl_string3580za700za7za7e3604za7, " (read ", 7);
	      DEFINE_STRING(BGl_string3579z00zzeffect_walkz00,
		BgL_bgl_string3579za700za7za7e3605za7, ")", 1);
	      DEFINE_STRING(BGl_string3581z00zzeffect_walkz00,
		BgL_bgl_string3581za700za7za7e3606za7, " (write ", 8);
	      DEFINE_STRING(BGl_string3582z00zzeffect_walkz00,
		BgL_bgl_string3582za700za7za7e3607za7, "))", 2);
	      DEFINE_STRING(BGl_string3583z00zzeffect_walkz00,
		BgL_bgl_string3583za700za7za7e3608za7, "(directives\n (pragma\n", 21);
	      DEFINE_STRING(BGl_string3584z00zzeffect_walkz00,
		BgL_bgl_string3584za700za7za7e3609za7, " ))\n", 4);
	      DEFINE_STRING(BGl_string3585z00zzeffect_walkz00,
		BgL_bgl_string3585za700za7za7e3610za7, "effect_walk", 11);
	      DEFINE_STRING(BGl_string3586z00zzeffect_walkz00,
		BgL_bgl_string3586za700za7za7e3611za7,
		"top done (reset-effect-tables!) pass-started ", 45);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzeffect_walkz00(long
		BgL_checksumz00_1431, char *BgL_fromz00_1432)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzeffect_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzeffect_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzeffect_walkz00();
					BGl_cnstzd2initzd2zzeffect_walkz00();
					BGl_importedzd2moduleszd2initz00zzeffect_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzeffect_walkz00()
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "effect_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"effect_walk");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "effect_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzeffect_walkz00()
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 15 */
			{	/* Effect/walk.scm 15 */
				obj_t BgL_cportz00_1423;

				BgL_cportz00_1423 =
					bgl_open_input_string(BGl_string3586z00zzeffect_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1424;

					BgL_iz00_1424 = ((long) 3);
				BgL_loopz00_1425:
					if ((BgL_iz00_1424 == ((long) -1)))
						{	/* Effect/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Effect/walk.scm 15 */
							{	/* Effect/walk.scm 15 */
								obj_t BgL_arg3588z00_1427;

								{	/* Effect/walk.scm 15 */

									{	/* Effect/walk.scm 15 */
										obj_t BgL_locationz00_1429;

										BgL_locationz00_1429 = BBOOL(((bool_t) 0));
										{	/* Effect/walk.scm 15 */

											BgL_arg3588z00_1427 =
												BGl_readz00zz__readerz00(BgL_cportz00_1423,
												BgL_locationz00_1429);
										}
									}
								}
								{	/* Effect/walk.scm 15 */
									int BgL_auxz00_1454;

									BgL_auxz00_1454 = (int) (BgL_iz00_1424);
									CNST_TABLE_SET(BgL_auxz00_1454, BgL_arg3588z00_1427);
							}}
							{	/* Effect/walk.scm 15 */
								int BgL_auxz00_1430;

								BgL_auxz00_1430 = (int) ((BgL_iz00_1424 - ((long) 1)));
								{
									long BgL_iz00_1459;

									BgL_iz00_1459 = (long) (BgL_auxz00_1430);
									BgL_iz00_1424 = BgL_iz00_1459;
									goto BgL_loopz00_1425;
								}
							}
						}
				}
			}
		}
	}



/* effect-walk! */
	BGL_EXPORTED_DEF obj_t BGl_effectzd2walkz12zc0zzeffect_walkz00(obj_t
		BgL_globalsz00_1, bool_t BgL_feffectz00_2)
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 33 */
			{	/* Effect/walk.scm 34 */
				obj_t BgL_list3397z00_789;

				{	/* Effect/walk.scm 34 */
					obj_t BgL_arg3399z00_791;

					{	/* Effect/walk.scm 34 */
						obj_t BgL_arg3401z00_793;

						BgL_arg3401z00_793 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3399z00_791 =
							MAKE_PAIR(BGl_string3566z00zzeffect_walkz00, BgL_arg3401z00_793);
					}
					BgL_list3397z00_789 =
						MAKE_PAIR(BGl_string3567z00zzeffect_walkz00, BgL_arg3399z00_791);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3397z00_789);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3566z00zzeffect_walkz00;
			{
				obj_t BgL_hooksz00_797;

				obj_t BgL_hnamesz00_798;

				BgL_hooksz00_797 = BNIL;
				BgL_hnamesz00_798 = BNIL;
			BgL_zc3anonymousza33402ze3z83_799:
				if (NULLP(BgL_hooksz00_797))
					{	/* Effect/walk.scm 34 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Effect/walk.scm 34 */
						bool_t BgL_testz00_1471;

						{	/* Effect/walk.scm 34 */
							obj_t BgL_fun3410z00_807;

							BgL_fun3410z00_807 = CAR(BgL_hooksz00_797);
							BgL_testz00_1471 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3410z00_807) (BgL_fun3410z00_807,
									BEOA));
						}
						if (BgL_testz00_1471)
							{
								obj_t BgL_hnamesz00_1478;

								obj_t BgL_hooksz00_1476;

								BgL_hooksz00_1476 = CDR(BgL_hooksz00_797);
								BgL_hnamesz00_1478 = CDR(BgL_hnamesz00_798);
								BgL_hnamesz00_798 = BgL_hnamesz00_1478;
								BgL_hooksz00_797 = BgL_hooksz00_1476;
								goto BgL_zc3anonymousza33402ze3z83_799;
							}
						else
							{	/* Effect/walk.scm 34 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3566z00zzeffect_walkz00,
									BGl_string3568z00zzeffect_walkz00, CAR(BgL_hnamesz00_798));
							}
					}
			}
			{
				obj_t BgL_l3384z00_811;

				BgL_l3384z00_811 = BgL_globalsz00_1;
			BgL_zc3anonymousza33412ze3z83_812:
				if (PAIRP(BgL_l3384z00_811))
					{	/* Effect/walk.scm 37 */
						{	/* Effect/walk.scm 38 */
							obj_t BgL_globalz00_814;

							BgL_globalz00_814 = CAR(BgL_l3384z00_811);
							BGl_funzd2callzd2graphz12z12zzeffect_cgraphz00(
								(BgL_variablez00_bglt) (BgL_globalz00_814));
						}
						{
							obj_t BgL_l3384z00_1487;

							BgL_l3384z00_1487 = CDR(BgL_l3384z00_811);
							BgL_l3384z00_811 = BgL_l3384z00_1487;
							goto BgL_zc3anonymousza33412ze3z83_812;
						}
					}
				else
					{	/* Effect/walk.scm 37 */
						((bool_t) 1);
					}
			}
			BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00
				(BGl_getzd2varzf2sidezd2effectzf2zzeffect_cgraphz00());
			{	/* Effect/walk.scm 44 */
				obj_t BgL_g3388z00_818;

				BgL_g3388z00_818 = BGl_getzd2varzf2allz20zzeffect_cgraphz00();
				{
					obj_t BgL_l3386z00_820;

					BgL_l3386z00_820 = BgL_g3388z00_818;
				BgL_zc3anonymousza33416ze3z83_821:
					if (PAIRP(BgL_l3386z00_820))
						{	/* Effect/walk.scm 48 */
							{	/* Effect/walk.scm 45 */
								obj_t BgL_varz00_823;

								BgL_varz00_823 = CAR(BgL_l3386z00_820);
								{	/* Effect/walk.scm 45 */
									BgL_valuez00_bglt BgL_funz00_824;

									{
										BgL_variablez00_bglt BgL_auxz00_1495;

										BgL_auxz00_1495 = (BgL_variablez00_bglt) (BgL_varz00_823);
										BgL_funz00_824 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_1495))->
											BgL_valuez00);
									}
									{	/* Effect/walk.scm 46 */
										bool_t BgL_testz00_1498;

										{	/* Effect/walk.scm 46 */
											obj_t BgL_auxz00_1499;

											{
												BgL_funz00_bglt BgL_auxz00_1500;

												BgL_auxz00_1500 = (BgL_funz00_bglt) (BgL_funz00_824);
												BgL_auxz00_1499 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_1500))->
													BgL_sidezd2effectzf3z21);
											}
											BgL_testz00_1498 = (BgL_auxz00_1499 == BUNSPEC);
										}
										if (BgL_testz00_1498)
											{
												BgL_funz00_bglt BgL_auxz00_1504;

												BgL_auxz00_1504 = (BgL_funz00_bglt) (BgL_funz00_824);
												((((BgL_funz00_bglt) CREF(BgL_auxz00_1504))->
														BgL_sidezd2effectzf3z21) =
													((obj_t) BFALSE), BUNSPEC);
											}
										else
											{	/* Effect/walk.scm 46 */
												BFALSE;
											}
									}
								}
							}
							{
								obj_t BgL_l3386z00_1507;

								BgL_l3386z00_1507 = CDR(BgL_l3386z00_820);
								BgL_l3386z00_820 = BgL_l3386z00_1507;
								goto BgL_zc3anonymousza33416ze3z83_821;
							}
						}
					else
						{	/* Effect/walk.scm 48 */
							((bool_t) 1);
						}
				}
			}
			{
				obj_t BgL_l3389z00_830;

				BgL_l3389z00_830 = BgL_globalsz00_1;
			BgL_zc3anonymousza33421ze3z83_831:
				if (PAIRP(BgL_l3389z00_830))
					{	/* Effect/walk.scm 51 */
						{	/* Effect/walk.scm 52 */
							obj_t BgL_globalz00_833;

							BgL_globalz00_833 = CAR(BgL_l3389z00_830);
							{	/* Effect/walk.scm 52 */
								obj_t BgL_arg3424z00_834;

								{	/* Effect/walk.scm 52 */
									BgL_sfunz00_bglt BgL_obj1884z00_1345;

									{	/* Effect/walk.scm 52 */
										BgL_variablez00_bglt BgL_obj1611z00_1344;

										BgL_obj1611z00_1344 =
											(BgL_variablez00_bglt) (BgL_globalz00_833);
										BgL_obj1884z00_1345 =
											(BgL_sfunz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1344))->
												BgL_valuez00));
									}
									BgL_arg3424z00_834 =
										(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1345))->
										BgL_bodyz00);
								}
								BGl_spreadzd2sidezd2effectz12z12zzeffect_spreadz00(
									(BgL_nodez00_bglt) (BgL_arg3424z00_834));
							}
						}
						{
							obj_t BgL_l3389z00_1518;

							BgL_l3389z00_1518 = CDR(BgL_l3389z00_830);
							BgL_l3389z00_830 = BgL_l3389z00_1518;
							goto BgL_zc3anonymousza33421ze3z83_831;
						}
					}
				else
					{	/* Effect/walk.scm 51 */
						((bool_t) 1);
					}
			}
			if (BgL_feffectz00_2)
				{	/* Effect/walk.scm 57 */
					BGl_feffectz12z12zzeffect_feffectz00(BgL_globalsz00_1);
				}
			else
				{	/* Effect/walk.scm 57 */
					BFALSE;
				}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Effect/walk.scm 60 */
					{	/* Effect/walk.scm 60 */
						obj_t BgL_port3391z00_840;

						{	/* Effect/walk.scm 60 */
							obj_t BgL_res3559z00_1350;

							{	/* Effect/walk.scm 60 */
								obj_t BgL_auxz00_1525;

								BgL_auxz00_1525 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3559z00_1350 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_1525);
							}
							BgL_port3391z00_840 = BgL_res3559z00_1350;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3391z00_840);
						bgl_display_string(BGl_string3569z00zzeffect_walkz00,
							BgL_port3391z00_840);
						{	/* Effect/walk.scm 60 */
							obj_t BgL_arg3430z00_841;

							{	/* Effect/walk.scm 60 */
								bool_t BgL_testz00_1530;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Effect/walk.scm 60 */
										BgL_testz00_1530 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Effect/walk.scm 60 */
										BgL_testz00_1530 = ((bool_t) 0);
									}
								if (BgL_testz00_1530)
									{	/* Effect/walk.scm 60 */
										BgL_arg3430z00_841 = BGl_string3570z00zzeffect_walkz00;
									}
								else
									{	/* Effect/walk.scm 60 */
										BgL_arg3430z00_841 = BGl_string3571z00zzeffect_walkz00;
									}
							}
							bgl_display_obj(BgL_arg3430z00_841, BgL_port3391z00_840);
						}
						bgl_display_string(BGl_string3572z00zzeffect_walkz00,
							BgL_port3391z00_840);
						bgl_display_char(((unsigned char) '\n'), BgL_port3391z00_840);
					}
					{	/* Effect/walk.scm 60 */
						obj_t BgL_list3433z00_844;

						BgL_list3433z00_844 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3433z00_844);
					}
				}
			else
				{	/* Effect/walk.scm 60 */
					obj_t BgL_g3377z00_845;

					obj_t BgL_g3378z00_846;

					{	/* Effect/walk.scm 60 */
						obj_t BgL_list3442z00_859;

						BgL_list3442z00_859 =
							MAKE_PAIR
							(BGl_resetzd2effectzd2tablesz12zd2envzc0zzeffect_cgraphz00, BNIL);
						BgL_g3377z00_845 = BgL_list3442z00_859;
					}
					BgL_g3378z00_846 = CNST_TABLE_REF(((long) 1));
					{
						obj_t BgL_hooksz00_848;

						obj_t BgL_hnamesz00_849;

						BgL_hooksz00_848 = BgL_g3377z00_845;
						BgL_hnamesz00_849 = BgL_g3378z00_846;
					BgL_zc3anonymousza33434ze3z83_850:
						if (NULLP(BgL_hooksz00_848))
							{	/* Effect/walk.scm 60 */
								return BgL_globalsz00_1;
							}
						else
							{	/* Effect/walk.scm 60 */
								bool_t BgL_testz00_1545;

								{	/* Effect/walk.scm 60 */
									obj_t BgL_fun3441z00_857;

									BgL_fun3441z00_857 = CAR(BgL_hooksz00_848);
									BgL_testz00_1545 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun3441z00_857)
										(BgL_fun3441z00_857, BEOA));
								}
								if (BgL_testz00_1545)
									{
										obj_t BgL_hnamesz00_1552;

										obj_t BgL_hooksz00_1550;

										BgL_hooksz00_1550 = CDR(BgL_hooksz00_848);
										BgL_hnamesz00_1552 = CDR(BgL_hnamesz00_849);
										BgL_hnamesz00_849 = BgL_hnamesz00_1552;
										BgL_hooksz00_848 = BgL_hooksz00_1550;
										goto BgL_zc3anonymousza33434ze3z83_850;
									}
								else
									{	/* Effect/walk.scm 60 */
										obj_t BgL_arg3440z00_856;

										BgL_arg3440z00_856 = CAR(BgL_hnamesz00_849);
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string3573z00zzeffect_walkz00, BgL_arg3440z00_856);
									}
							}
					}
				}
		}
	}



/* _effect-walk! */
	obj_t BGl__effectzd2walkz12zc0zzeffect_walkz00(obj_t BgL_envz00_1416,
		obj_t BgL_globalsz00_1417, obj_t BgL_feffectz00_1418)
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 33 */
			return
				BGl_effectzd2walkz12zc0zzeffect_walkz00(BgL_globalsz00_1417,
				CBOOL(BgL_feffectz00_1418));
		}
	}



/* iterate-to-fix-point! */
	obj_t BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00(obj_t BgL_wz00_3)
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 65 */
			if (NULLP(BgL_wz00_3))
				{	/* Effect/walk.scm 66 */
					return CNST_TABLE_REF(((long) 2));
				}
			else
				{
					obj_t BgL_l3392z00_862;

					{	/* Effect/walk.scm 68 */
						bool_t BgL_auxz00_1561;

						BgL_l3392z00_862 = BgL_wz00_3;
					BgL_zc3anonymousza33444ze3z83_863:
						if (PAIRP(BgL_l3392z00_862))
							{	/* Effect/walk.scm 68 */
								{	/* Effect/walk.scm 70 */
									obj_t BgL_varz00_865;

									BgL_varz00_865 = CAR(BgL_l3392z00_862);
									{	/* Effect/walk.scm 70 */
										BgL_valuez00_bglt BgL_funz00_866;

										{
											BgL_variablez00_bglt BgL_auxz00_1565;

											BgL_auxz00_1565 = (BgL_variablez00_bglt) (BgL_varz00_865);
											BgL_funz00_866 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_1565))->
												BgL_valuez00);
										}
										{	/* Effect/walk.scm 71 */
											bool_t BgL_testz00_1568;

											{	/* Effect/walk.scm 71 */
												obj_t BgL_auxz00_1569;

												{
													BgL_funz00_bglt BgL_auxz00_1570;

													BgL_auxz00_1570 = (BgL_funz00_bglt) (BgL_funz00_866);
													BgL_auxz00_1569 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_1570))->
														BgL_sidezd2effectzf3z21);
												}
												BgL_testz00_1568 = (BgL_auxz00_1569 == BTRUE);
											}
											if (BgL_testz00_1568)
												{	/* Effect/walk.scm 71 */
													BFALSE;
												}
											else
												{	/* Effect/walk.scm 71 */
													{
														BgL_funz00_bglt BgL_auxz00_1574;

														BgL_auxz00_1574 =
															(BgL_funz00_bglt) (BgL_funz00_866);
														((((BgL_funz00_bglt) CREF(BgL_auxz00_1574))->
																BgL_sidezd2effectzf3z21) =
															((obj_t) BTRUE), BUNSPEC);
													}
													if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_865,
															BGl_localzf2fromzf2zzeffect_cgraphz00))
														{	/* Effect/walk.scm 76 */
															obj_t BgL_arg3448z00_869;

															{	/* Effect/walk.scm 76 */
																BgL_localzf2fromzf2_bglt BgL_obj3259z00_1371;

																BgL_obj3259z00_1371 =
																	(BgL_localzf2fromzf2_bglt) (BgL_varz00_865);
																{
																	obj_t BgL_auxz00_1580;

																	{	/* Effect/walk.scm 76 */
																		BgL_objectz00_bglt BgL_auxz00_1581;

																		BgL_auxz00_1581 =
																			(BgL_objectz00_bglt)
																			(BgL_obj3259z00_1371);
																		BgL_auxz00_1580 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_1581);
																	}
																	BgL_arg3448z00_869 =
																		(((BgL_localzf2fromzf2_bglt)
																			CREF(BgL_auxz00_1580))->BgL_fromz00);
																}
															}
															BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00
																(BgL_arg3448z00_869);
														}
													else
														{	/* Effect/walk.scm 75 */
															if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_865,
																	BGl_globalzf2fromzf2zzeffect_cgraphz00))
																{	/* Effect/walk.scm 78 */
																	obj_t BgL_arg3450z00_871;

																	{	/* Effect/walk.scm 78 */
																		BgL_globalzf2fromzf2_bglt
																			BgL_obj3315z00_1373;
																		BgL_obj3315z00_1373 =
																			(BgL_globalzf2fromzf2_bglt)
																			(BgL_varz00_865);
																		{
																			obj_t BgL_auxz00_1589;

																			{	/* Effect/walk.scm 78 */
																				BgL_objectz00_bglt BgL_auxz00_1590;

																				BgL_auxz00_1590 =
																					(BgL_objectz00_bglt)
																					(BgL_obj3315z00_1373);
																				BgL_auxz00_1589 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_1590);
																			}
																			BgL_arg3450z00_871 =
																				(((BgL_globalzf2fromzf2_bglt)
																					CREF(BgL_auxz00_1589))->BgL_fromz00);
																		}
																	}
																	BGl_iteratezd2tozd2fixzd2pointz12zc0zzeffect_walkz00
																		(BgL_arg3450z00_871);
																}
															else
																{	/* Effect/walk.scm 77 */
																	BFALSE;
																}
														}
												}
										}
									}
								}
								{
									obj_t BgL_l3392z00_1595;

									BgL_l3392z00_1595 = CDR(BgL_l3392z00_862);
									BgL_l3392z00_862 = BgL_l3392z00_1595;
									goto BgL_zc3anonymousza33444ze3z83_863;
								}
							}
						else
							{	/* Effect/walk.scm 68 */
								BgL_auxz00_1561 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_1561);
					}
				}
		}
	}



/* write-effect */
	BGL_EXPORTED_DEF obj_t BGl_writezd2effectzd2zzeffect_walkz00(obj_t
		BgL_globalsz00_4)
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 84 */
			{	/* Effect/walk.scm 95 */
				obj_t BgL_onamez00_876;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Effect/walk.scm 95 */
						BgL_onamez00_876 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Effect/walk.scm 97 */
						bool_t BgL_testz00_1600;

						if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
							{	/* Effect/walk.scm 97 */
								obj_t BgL_auxz00_1603;

								BgL_auxz00_1603 =
									CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
								BgL_testz00_1600 = STRINGP(BgL_auxz00_1603);
							}
						else
							{	/* Effect/walk.scm 97 */
								BgL_testz00_1600 = ((bool_t) 0);
							}
						if (BgL_testz00_1600)
							{	/* Effect/walk.scm 97 */
								BgL_onamez00_876 =
									string_append(BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
									BGl_string3574z00zzeffect_walkz00);
							}
						else
							{	/* Effect/walk.scm 97 */
								BgL_onamez00_876 = BFALSE;
							}
					}
				{	/* Effect/walk.scm 95 */
					obj_t BgL_portz00_877;

					if (STRINGP(BgL_onamez00_876))
						{	/* Effect/walk.scm 101 */
							obj_t BgL_g2679z00_900;

							BgL_g2679z00_900 = BgL_onamez00_876;
							{	/* Effect/walk.scm 101 */

								BgL_portz00_877 =
									BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
									(BgL_g2679z00_900, BTRUE);
							}
						}
					else
						{	/* Effect/walk.scm 102 */
							obj_t BgL_res3561z00_1382;

							{	/* Effect/walk.scm 102 */
								obj_t BgL_auxz00_1612;

								BgL_auxz00_1612 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3561z00_1382 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1612);
							}
							BgL_portz00_877 = BgL_res3561z00_1382;
						}
					{	/* Effect/walk.scm 100 */

						if (OUTPUT_PORTP(BgL_portz00_877))
							{	/* Effect/walk.scm 105 */
								obj_t BgL_val3381z00_879;

								BgL_val3381z00_879 =
									BGl_zc3exitza33459ze3z83zzeffect_walkz00(BgL_globalsz00_4);
								{	/* Effect/walk.scm 110 */
									bool_t BgL_testz00_1618;

									{	/* Effect/walk.scm 110 */
										obj_t BgL_arg3455z00_881;

										{	/* Effect/walk.scm 110 */
											obj_t BgL_res3564z00_1396;

											{	/* Effect/walk.scm 110 */
												obj_t BgL_auxz00_1619;

												BgL_auxz00_1619 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res3564z00_1396 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1619);
											}
											BgL_arg3455z00_881 = BgL_res3564z00_1396;
										}
										BgL_testz00_1618 = (BgL_portz00_877 == BgL_arg3455z00_881);
									}
									if (BgL_testz00_1618)
										{	/* Effect/walk.scm 110 */
											BFALSE;
										}
									else
										{	/* Effect/walk.scm 110 */
											bgl_close_output_port(BgL_portz00_877);
										}
								}
								if (CBOOL(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
										(BgL_val3381z00_879)))
									{	/* Effect/walk.scm 110 */
										return
											BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
											(BgL_val3381z00_879), CDR(BgL_val3381z00_879));
									}
								else
									{	/* Effect/walk.scm 110 */
										return BgL_val3381z00_879;
									}
							}
						else
							{	/* Effect/walk.scm 103 */
								return
									BGl_errorz00zz__errorz00(BGl_string3575z00zzeffect_walkz00,
									BGl_string3576z00zzeffect_walkz00, BgL_onamez00_876);
							}
					}
				}
			}
		}
	}



/* <exit:3459> */
	obj_t BGl_zc3exitza33459ze3z83zzeffect_walkz00(obj_t BgL_globalsz00_1422)
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 110 */
			{
				obj_t BgL_gz00_909;

				jmp_buf_t jmpbuf;

				void *BgL_an_exit3382z00_886;

				if (SET_EXIT(BgL_an_exit3382z00_886))
					{
						return BGL_EXIT_VALUE();
					}
				else
					{
						BgL_an_exit3382z00_886 = (void *) jmpbuf;
						{	/* Effect/walk.scm 110 */

							PUSH_EXIT(BgL_an_exit3382z00_886, ((long) 0));
							{	/* Effect/walk.scm 108 */
								obj_t BgL_val3383z00_887;

								{	/* Effect/walk.scm 107 */
									obj_t BgL_arg3461z00_889;

									{	/* Effect/walk.scm 107 */
										obj_t BgL_res3562z00_1385;

										{	/* Effect/walk.scm 107 */
											obj_t BgL_auxz00_1634;

											BgL_auxz00_1634 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res3562z00_1385 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1634);
										}
										BgL_arg3461z00_889 = BgL_res3562z00_1385;
									}
									bgl_display_string(BGl_string3583z00zzeffect_walkz00,
										BgL_arg3461z00_889);
								}
								{
									obj_t BgL_l3395z00_891;

									BgL_l3395z00_891 = BgL_globalsz00_1422;
								BgL_zc3anonymousza33462ze3z83_892:
									if (PAIRP(BgL_l3395z00_891))
										{	/* Effect/walk.scm 108 */
											BgL_gz00_909 = CAR(BgL_l3395z00_891);
											{	/* Effect/walk.scm 86 */
												obj_t BgL_fez00_911;

												{	/* Effect/walk.scm 86 */
													BgL_funz00_bglt BgL_obj1829z00_1401;

													{	/* Effect/walk.scm 86 */
														BgL_variablez00_bglt BgL_obj1611z00_1400;

														BgL_obj1611z00_1400 =
															(BgL_variablez00_bglt) (BgL_gz00_909);
														BgL_obj1829z00_1401 =
															(BgL_funz00_bglt) (
															(((BgL_variablez00_bglt)
																	CREF(BgL_obj1611z00_1400))->BgL_valuez00));
													}
													BgL_fez00_911 =
														(((BgL_funz00_bglt) CREF(BgL_obj1829z00_1401))->
														BgL_effectz00);
												}
												if (BGl_iszd2azf3z21zz__objectz00(BgL_fez00_911,
														BGl_feffectz00zzast_varz00))
													{	/* Effect/walk.scm 88 */
														BgL_feffectz00_bglt BgL_instance3379z00_913;

														BgL_instance3379z00_913 =
															(BgL_feffectz00_bglt) (BgL_fez00_911);
														{	/* Effect/walk.scm 89 */
															bool_t BgL_testz00_1647;

															if (
																((((BgL_feffectz00_bglt)
																			CREF(BgL_instance3379z00_913))->
																		BgL_readz00) == CNST_TABLE_REF(((long) 3))))
																{	/* Effect/walk.scm 89 */
																	BgL_testz00_1647 =
																		(
																		(((BgL_feffectz00_bglt)
																				CREF(BgL_instance3379z00_913))->
																			BgL_writez00) ==
																		CNST_TABLE_REF(((long) 3)));
																}
															else
																{	/* Effect/walk.scm 89 */
																	BgL_testz00_1647 = ((bool_t) 0);
																}
															if (BgL_testz00_1647)
																{	/* Effect/walk.scm 89 */
																	BFALSE;
																}
															else
																{	/* Effect/walk.scm 89 */
																	{	/* Effect/walk.scm 91 */
																		obj_t BgL_arg3480z00_916;

																		BgL_arg3480z00_916 =
																			BGl_shapez00zztools_shapez00
																			(BgL_gz00_909);
																		{	/* Effect/walk.scm 91 */
																			obj_t BgL_list3483z00_918;

																			{	/* Effect/walk.scm 91 */
																				obj_t BgL_arg3484z00_919;

																				{	/* Effect/walk.scm 91 */
																					obj_t BgL_arg3485z00_920;

																					BgL_arg3485z00_920 =
																						MAKE_PAIR
																						(BGl_string3577z00zzeffect_walkz00,
																						BNIL);
																					BgL_arg3484z00_919 =
																						MAKE_PAIR(BgL_arg3480z00_916,
																						BgL_arg3485z00_920);
																				}
																				BgL_list3483z00_918 =
																					MAKE_PAIR
																					(BGl_string3578z00zzeffect_walkz00,
																					BgL_arg3484z00_919);
																			}
																			BGl_displayza2za2zz__r4_output_6_10_3z00
																				(BgL_list3483z00_918);
																		}
																	}
																	if (NULLP(
																			(((BgL_feffectz00_bglt)
																					CREF(BgL_instance3379z00_913))->
																				BgL_readz00)))
																		{	/* Effect/walk.scm 92 */
																			BFALSE;
																		}
																	else
																		{	/* Effect/walk.scm 92 */
																			obj_t BgL_arg3488z00_923;

																			BgL_arg3488z00_923 =
																				(((BgL_feffectz00_bglt)
																					CREF(BgL_instance3379z00_913))->
																				BgL_readz00);
																			{	/* Effect/walk.scm 92 */
																				obj_t BgL_list3490z00_925;

																				{	/* Effect/walk.scm 92 */
																					obj_t BgL_arg3491z00_926;

																					{	/* Effect/walk.scm 92 */
																						obj_t BgL_arg3492z00_927;

																						BgL_arg3492z00_927 =
																							MAKE_PAIR
																							(BGl_string3579z00zzeffect_walkz00,
																							BNIL);
																						BgL_arg3491z00_926 =
																							MAKE_PAIR(BgL_arg3488z00_923,
																							BgL_arg3492z00_927);
																					}
																					BgL_list3490z00_925 =
																						MAKE_PAIR
																						(BGl_string3580z00zzeffect_walkz00,
																						BgL_arg3491z00_926);
																				}
																				BGl_displayza2za2zz__r4_output_6_10_3z00
																					(BgL_list3490z00_925);
																			}
																		}
																	if (NULLP(
																			(((BgL_feffectz00_bglt)
																					CREF(BgL_instance3379z00_913))->
																				BgL_writez00)))
																		{	/* Effect/walk.scm 93 */
																			BFALSE;
																		}
																	else
																		{	/* Effect/walk.scm 93 */
																			obj_t BgL_arg3496z00_931;

																			BgL_arg3496z00_931 =
																				(((BgL_feffectz00_bglt)
																					CREF(BgL_instance3379z00_913))->
																				BgL_writez00);
																			{	/* Effect/walk.scm 93 */
																				obj_t BgL_list3498z00_933;

																				{	/* Effect/walk.scm 93 */
																					obj_t BgL_arg3499z00_934;

																					{	/* Effect/walk.scm 93 */
																						obj_t BgL_arg3500z00_935;

																						BgL_arg3500z00_935 =
																							MAKE_PAIR
																							(BGl_string3579z00zzeffect_walkz00,
																							BNIL);
																						BgL_arg3499z00_934 =
																							MAKE_PAIR(BgL_arg3496z00_931,
																							BgL_arg3500z00_935);
																					}
																					BgL_list3498z00_933 =
																						MAKE_PAIR
																						(BGl_string3581z00zzeffect_walkz00,
																						BgL_arg3499z00_934);
																				}
																				BGl_displayza2za2zz__r4_output_6_10_3z00
																					(BgL_list3498z00_933);
																			}
																		}
																	{	/* Effect/walk.scm 94 */
																		obj_t BgL_port3394z00_937;

																		{	/* Effect/walk.scm 94 */
																			obj_t BgL_res3565z00_1412;

																			{	/* Effect/walk.scm 94 */
																				obj_t BgL_auxz00_1676;

																				BgL_auxz00_1676 =
																					BGL_CURRENT_DYNAMIC_ENV();
																				BgL_res3565z00_1412 =
																					BGL_ENV_CURRENT_OUTPUT_PORT
																					(BgL_auxz00_1676);
																			}
																			BgL_port3394z00_937 = BgL_res3565z00_1412;
																		}
																		bgl_display_string
																			(BGl_string3582z00zzeffect_walkz00,
																			BgL_port3394z00_937);
																		bgl_display_char(((unsigned char) '\n'),
																			BgL_port3394z00_937);
													}}}}
												else
													{	/* Effect/walk.scm 87 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l3395z00_1682;

												BgL_l3395z00_1682 = CDR(BgL_l3395z00_891);
												BgL_l3395z00_891 = BgL_l3395z00_1682;
												goto BgL_zc3anonymousza33462ze3z83_892;
											}
										}
									else
										{	/* Effect/walk.scm 108 */
											((bool_t) 1);
										}
								}
								{	/* Effect/walk.scm 109 */
									obj_t BgL_arg3467z00_898;

									{	/* Effect/walk.scm 109 */
										obj_t BgL_res3563z00_1392;

										{	/* Effect/walk.scm 109 */
											obj_t BgL_auxz00_1684;

											BgL_auxz00_1684 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res3563z00_1392 =
												BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1684);
										}
										BgL_arg3467z00_898 = BgL_res3563z00_1392;
									}
									BgL_val3383z00_887 =
										bgl_display_string(BGl_string3584z00zzeffect_walkz00,
										BgL_arg3467z00_898);
								}
								POP_EXIT();
								return BgL_val3383z00_887;
							}
						}
					}
			}
		}
	}



/* _write-effect */
	obj_t BGl__writezd2effectzd2zzeffect_walkz00(obj_t BgL_envz00_1420,
		obj_t BgL_globalsz00_1421)
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 84 */
			return BGl_writezd2effectzd2zzeffect_walkz00(BgL_globalsz00_1421);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzeffect_walkz00()
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzeffect_walkz00()
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzeffect_walkz00()
	{
		AN_OBJECT;
		{	/* Effect/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_cgraphz00(((long) 169100475),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_spreadz00(((long) 476444243),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			BGl_modulezd2initializa7ationz75zzeffect_feffectz00(((long) 53594424),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3585z00zzeffect_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
