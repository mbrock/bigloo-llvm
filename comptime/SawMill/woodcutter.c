/*===========================================================================*/
/*   (SawMill/woodcutter.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/woodcutter.scm)*/
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;


	extern obj_t BGl_collapsez00zzsaw_collapsez00(BgL_blockz00_bglt);
	extern BgL_blockz00_bglt BGl_removez00zzsaw_removez00(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_castz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_gotosz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_collapsez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_woodcutterz00();
	static obj_t BGl__globalzd2ze3blocksz31zzsaw_woodcutterz00(obj_t, obj_t,
		obj_t);
	static bool_t BGl_za2removeza2z00zzsaw_woodcutterz00;
	static bool_t BGl_za2backendza2z00zzsaw_woodcutterz00;
	extern obj_t BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_blockz00_bglt);
	static bool_t BGl_za2collapseza2z00zzsaw_woodcutterz00;
	extern BgL_blockz00_bglt
		BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_globalz00_bglt);
	static obj_t BGl_methodzd2initzd2zzsaw_woodcutterz00();
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_woodcutterz00();
	extern obj_t BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_woodcutterz00();
	extern obj_t BGl_addzd2gotoszd2zzsaw_gotosz00(obj_t);
	static bool_t BGl_za2castza2z00zzsaw_woodcutterz00;
	BGL_EXPORTED_DECL obj_t
		BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_addzd2castszd2zzsaw_castz00(BgL_backendz00_bglt, obj_t);
	extern BgL_rtl_regz00_bglt
		BGl_localzd2ze3regz31zzsaw_node2rtlz00(BgL_localz00_bglt);
	static bool_t BGl_za2saw_inline_returnsza2z00zzsaw_woodcutterz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_woodcutterz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_globalzd2ze3blockszd2envze3zzsaw_woodcutterz00,
		BgL_bgl__globalza7d2za7e3blo4527z00,
		BGl__globalzd2ze3blocksz31zzsaw_woodcutterz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4526z00zzsaw_woodcutterz00,
		BgL_bgl_string4526za700za7za7s4528za7, "saw_woodcutter", 14);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_woodcutterz00(long
		BgL_checksumz00_1901, char *BgL_fromz00_1902)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_woodcutterz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_woodcutterz00();
					BGl_importedzd2moduleszd2initz00zzsaw_woodcutterz00();
					BGl_toplevelzd2initzd2zzsaw_woodcutterz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_woodcutterz00()
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_woodcutter");
			return BUNSPEC;
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_woodcutterz00()
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 1 */
			BGl_za2backendza2z00zzsaw_woodcutterz00 = ((bool_t) 0);
			BGl_za2collapseza2z00zzsaw_woodcutterz00 = ((bool_t) 1);
			BGl_za2removeza2z00zzsaw_woodcutterz00 = ((bool_t) 1);
			BGl_za2saw_inline_returnsza2z00zzsaw_woodcutterz00 = ((bool_t) 1);
			return (BGl_za2castza2z00zzsaw_woodcutterz00 = ((bool_t) 1), BUNSPEC);
		}
	}



/* global->blocks */
	BGL_EXPORTED_DEF obj_t
		BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(BgL_backendz00_bglt
		BgL_backz00_1, BgL_globalz00_bglt BgL_vz00_2)
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 37 */
			{	/* SawMill/woodcutter.scm 42 */
				BgL_blockz00_bglt BgL_bz00_1260;

				obj_t BgL_argsz00_1261;

				BgL_bz00_1260 = BGl_globalzd2ze3rtlz31zzsaw_node2rtlz00(BgL_vz00_2);
				{	/* SawMill/woodcutter.scm 43 */
					obj_t BgL_l4408z00_1272;

					{	/* SawMill/woodcutter.scm 43 */
						BgL_sfunz00_bglt BgL_obj1880z00_1878;

						{	/* SawMill/woodcutter.scm 43 */
							BgL_variablez00_bglt BgL_obj1611z00_1877;

							BgL_obj1611z00_1877 = (BgL_variablez00_bglt) (BgL_vz00_2);
							BgL_obj1880z00_1878 =
								(BgL_sfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1877))->
									BgL_valuez00));
						}
						BgL_l4408z00_1272 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj1880z00_1878))->BgL_argsz00);
					}
					if (NULLP(BgL_l4408z00_1272))
						{	/* SawMill/woodcutter.scm 43 */
							BgL_argsz00_1261 = BNIL;
						}
					else
						{	/* SawMill/woodcutter.scm 43 */
							obj_t BgL_head4410z00_1274;

							{	/* SawMill/woodcutter.scm 43 */
								BgL_rtl_regz00_bglt BgL_arg4426z00_1287;

								{	/* SawMill/woodcutter.scm 43 */
									obj_t BgL_arg4428z00_1289;

									BgL_arg4428z00_1289 = CAR(BgL_l4408z00_1272);
									BgL_arg4426z00_1287 =
										BGl_localzd2ze3regz31zzsaw_node2rtlz00(
										(BgL_localz00_bglt) (BgL_arg4428z00_1289));
								}
								BgL_head4410z00_1274 =
									MAKE_PAIR((obj_t) (BgL_arg4426z00_1287), BNIL);
							}
							{	/* SawMill/woodcutter.scm 43 */
								obj_t BgL_g4413z00_1275;

								BgL_g4413z00_1275 = CDR(BgL_l4408z00_1272);
								{
									obj_t BgL_l4408z00_1277;

									obj_t BgL_tail4411z00_1278;

									BgL_l4408z00_1277 = BgL_g4413z00_1275;
									BgL_tail4411z00_1278 = BgL_head4410z00_1274;
								BgL_zc3anonymousza34420ze3z83_1279:
									if (NULLP(BgL_l4408z00_1277))
										{	/* SawMill/woodcutter.scm 43 */
											BgL_argsz00_1261 = BgL_head4410z00_1274;
										}
									else
										{	/* SawMill/woodcutter.scm 43 */
											obj_t BgL_newtail4412z00_1281;

											{	/* SawMill/woodcutter.scm 43 */
												BgL_rtl_regz00_bglt BgL_arg4423z00_1283;

												{	/* SawMill/woodcutter.scm 43 */
													obj_t BgL_arg4425z00_1285;

													BgL_arg4425z00_1285 = CAR(BgL_l4408z00_1277);
													BgL_arg4423z00_1283 =
														BGl_localzd2ze3regz31zzsaw_node2rtlz00(
														(BgL_localz00_bglt) (BgL_arg4425z00_1285));
												}
												BgL_newtail4412z00_1281 =
													MAKE_PAIR((obj_t) (BgL_arg4423z00_1283), BNIL);
											}
											SET_CDR(BgL_tail4411z00_1278, BgL_newtail4412z00_1281);
											{
												obj_t BgL_tail4411z00_1933;

												obj_t BgL_l4408z00_1931;

												BgL_l4408z00_1931 = CDR(BgL_l4408z00_1277);
												BgL_tail4411z00_1933 = BgL_newtail4412z00_1281;
												BgL_tail4411z00_1278 = BgL_tail4411z00_1933;
												BgL_l4408z00_1277 = BgL_l4408z00_1931;
												goto BgL_zc3anonymousza34420ze3z83_1279;
											}
										}
								}
							}
						}
				}
				if (BGl_za2collapseza2z00zzsaw_woodcutterz00)
					{	/* SawMill/woodcutter.scm 44 */
						BGl_collapsez00zzsaw_collapsez00(BgL_bz00_1260);
					}
				else
					{	/* SawMill/woodcutter.scm 44 */
						BFALSE;
					}
				if (BGl_za2removeza2z00zzsaw_woodcutterz00)
					{	/* SawMill/woodcutter.scm 45 */
						BgL_bz00_1260 = BGl_removez00zzsaw_removez00(BgL_bz00_1260);
					}
				else
					{	/* SawMill/woodcutter.scm 45 */
						BFALSE;
					}
				if (BGl_za2saw_inline_returnsza2z00zzsaw_woodcutterz00)
					{	/* SawMill/woodcutter.scm 46 */
						BGl_inlinezd2returnszd2zzsaw_inline_returnz00(BgL_bz00_1260);
					}
				else
					{	/* SawMill/woodcutter.scm 46 */
						BFALSE;
					}
				{	/* SawMill/woodcutter.scm 47 */
					obj_t BgL_lz00_1262;

					BgL_lz00_1262 =
						BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_bz00_1260);
					{
						long BgL_iz00_1264;

						obj_t BgL_lz00_1265;

						BgL_iz00_1264 = ((long) 0);
						BgL_lz00_1265 = BgL_lz00_1262;
					BgL_zc3anonymousza34414ze3z83_1266:
						if (PAIRP(BgL_lz00_1265))
							{	/* SawMill/woodcutter.scm 49 */
								{	/* SawMill/woodcutter.scm 50 */
									obj_t BgL_arg4416z00_1268;

									BgL_arg4416z00_1268 = CAR(BgL_lz00_1265);
									{
										int BgL_auxz00_1946;

										BgL_blockz00_bglt BgL_auxz00_1944;

										BgL_auxz00_1946 = (int) (BgL_iz00_1264);
										BgL_auxz00_1944 = (BgL_blockz00_bglt) (BgL_arg4416z00_1268);
										((((BgL_blockz00_bglt) CREF(BgL_auxz00_1944))->
												BgL_labelz00) = ((int) BgL_auxz00_1946), BUNSPEC);
								}}
								{
									obj_t BgL_lz00_1951;

									long BgL_iz00_1949;

									BgL_iz00_1949 = (BgL_iz00_1264 + ((long) 1));
									BgL_lz00_1951 = CDR(BgL_lz00_1265);
									BgL_lz00_1265 = BgL_lz00_1951;
									BgL_iz00_1264 = BgL_iz00_1949;
									goto BgL_zc3anonymousza34414ze3z83_1266;
								}
							}
						else
							{	/* SawMill/woodcutter.scm 49 */
								((bool_t) 0);
							}
					}
					BGl_addzd2gotoszd2zzsaw_gotosz00(BgL_lz00_1262);
					if (BGl_za2castza2z00zzsaw_woodcutterz00)
						{	/* SawMill/woodcutter.scm 53 */
							BGl_addzd2castszd2zzsaw_castz00(BgL_backz00_1, BgL_lz00_1262);
						}
					else
						{	/* SawMill/woodcutter.scm 53 */
							BFALSE;
						}
					return BgL_lz00_1262;
				}
			}
		}
	}



/* _global->blocks */
	obj_t BGl__globalzd2ze3blocksz31zzsaw_woodcutterz00(obj_t BgL_envz00_1898,
		obj_t BgL_backz00_1899, obj_t BgL_vz00_1900)
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 37 */
			return
				BGl_globalzd2ze3blocksz31zzsaw_woodcutterz00(
				(BgL_backendz00_bglt) (BgL_backz00_1899),
				(BgL_globalz00_bglt) (BgL_vz00_1900));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_woodcutterz00()
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_woodcutterz00()
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_woodcutterz00()
	{
		AN_OBJECT;
		{	/* SawMill/woodcutter.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 345795750),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_collapsez00(((long) 233346093),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_removez00(((long) 500779248),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_inline_returnz00(((long) 109425268),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(((long) 487336250),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_gotosz00(((long) 494400540),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			BGl_modulezd2initializa7ationz75zzsaw_castz00(((long) 478540107),
				BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					167519689), BSTRING_TO_STRING(BGl_string4526z00zzsaw_woodcutterz00));
		}
	}

#ifdef __cplusplus
}
#endif
