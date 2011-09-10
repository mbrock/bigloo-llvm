/*===========================================================================*/
/*   (Module/type.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/type.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	BGL_EXPORTED_DECL obj_t BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
	extern obj_t
		BGl_makezd2tvectorzd2accessesz00zztvector_accessz00(BgL_tvecz00_bglt,
		obj_t);
	static obj_t BGl_zc3anonymousza32659ze3z83zzmodule_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_typez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzmodule_typez00();
	static obj_t BGl__typezd2producerzf2consumerz20zzmodule_typez00(obj_t, obj_t);
	static obj_t BGl_typezd2producerzf2consumerz20zzmodule_typez00(obj_t);
	static obj_t BGl__delayzd2tvectorz12zc0zzmodule_typez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__tvectorzd2finaliza7erz75zzmodule_typez00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_typez00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_delayzd2tvectorz12zc0zzmodule_typez00(obj_t,
		obj_t);
	static obj_t BGl__typezd2finaliza7erz75zzmodule_typez00(obj_t);
	extern obj_t BGl_addzd2coercionz12zc0zztype_coercionz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t, obj_t);
	static obj_t BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_typez00();
	BGL_IMPORT obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_typezd2finaliza7erz75zzmodule_typez00();
	static obj_t BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 = BUNSPEC;
	static obj_t BGl__makezd2typezd2compilerz00zzmodule_typez00(obj_t);
	extern BgL_tvecz00_bglt
		BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_typezd2parserzd2zzmodule_typez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2typezd2compilerz00zzmodule_typez00();
	extern BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t,
		obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_typez00();
	static obj_t BGl__modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza31709ze3z83zzmodule_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_typez00();
	static obj_t BGl_za2tvectorsza2z00zzmodule_typez00 = BUNSPEC;
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2672z00zzmodule_typez00,
		BgL_bgl_za7c3anonymousza7a312688z00,
		BGl_zc3anonymousza31709ze3z83zzmodule_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tvectorzd2finaliza7erzd2envza7zzmodule_typez00,
		BgL_bgl__tvectorza7d2final2689za7,
		BGl__tvectorzd2finaliza7erz75zzmodule_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2683z00zzmodule_typez00,
		BgL_bgl_za7c3anonymousza7a322690z00,
		BGl_zc3anonymousza32659ze3z83zzmodule_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_delayzd2tvectorz12zd2envz12zzmodule_typez00,
		BgL_bgl__delayza7d2tvector2691za7,
		BGl__delayzd2tvectorz12zc0zzmodule_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_typezd2finaliza7erzd2envza7zzmodule_typez00,
		BgL_bgl__typeza7d2finaliza7a2692z00,
		BGl__typezd2finaliza7erz75zzmodule_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2673z00zzmodule_typez00,
		BgL_bgl_string2673za700za7za7m2693za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2674z00zzmodule_typez00,
		BgL_bgl_string2674za700za7za7m2694za7, "Illegal `type' clause", 21);
	      DEFINE_STRING(BGl_string2675z00zzmodule_typez00,
		BgL_bgl_string2675za700za7za7m2695za7, "Subtype", 7);
	      DEFINE_STRING(BGl_string2676z00zzmodule_typez00,
		BgL_bgl_string2676za700za7za7m2696za7, "Parents are of different classes",
		32);
	      DEFINE_STRING(BGl_string2677z00zzmodule_typez00,
		BgL_bgl_string2677za700za7za7m2697za7, "Unknow parent type", 18);
	      DEFINE_STRING(BGl_string2678z00zzmodule_typez00,
		BgL_bgl_string2678za700za7za7m2698za7, "Illegal type declaration", 24);
	      DEFINE_STRING(BGl_string2680z00zzmodule_typez00,
		BgL_bgl_string2680za700za7za7m2699za7, "Illegal clause", 14);
	      DEFINE_STRING(BGl_string2679z00zzmodule_typez00,
		BgL_bgl_string2679za700za7za7m2700za7, "Coercion", 8);
	      DEFINE_STRING(BGl_string2681z00zzmodule_typez00,
		BgL_bgl_string2681za700za7za7m2701za7, "type coercion", 13);
	      DEFINE_STRING(BGl_string2682z00zzmodule_typez00,
		BgL_bgl_string2682za700za7za7m2702za7, "Unknow type", 11);
	      DEFINE_STRING(BGl_string2684z00zzmodule_typez00,
		BgL_bgl_string2684za700za7za7m2703za7, "module_type", 11);
	      DEFINE_STRING(BGl_string2685z00zzmodule_typez00,
		BgL_bgl_string2685za700za7za7m2704za7,
		"void unit tvector coerce subtype magic bigloo lambda type ", 58);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typezd2compilerzd2envzd2zzmodule_typez00,
		BgL_bgl__makeza7d2typeza7d2c2705z00,
		BGl__makezd2typezd2compilerz00zzmodule_typez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_typezd2producerzf2consumerzd2envzf2zzmodule_typez00,
		BgL_bgl__typeza7d2producer2706za7,
		BGl__typezd2producerzf2consumerz20zzmodule_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2tvectorzd2clausezd2envzd2zzmodule_typez00,
		BgL_bgl__moduleza7d2tvecto2707za7,
		BGl__modulezd2tvectorzd2clausez00zzmodule_typez00, 0L, BUNSPEC, 3);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_typez00(long
		BgL_checksumz00_2098, char *BgL_fromz00_2099)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_typez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_typez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_typez00();
					BGl_cnstzd2initzd2zzmodule_typez00();
					BGl_importedzd2moduleszd2initz00zzmodule_typez00();
					BGl_toplevelzd2initzd2zzmodule_typez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_type");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_type");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_type");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_type");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 15 */
			{	/* Module/type.scm 15 */
				obj_t BgL_cportz00_2088;

				BgL_cportz00_2088 =
					bgl_open_input_string(BGl_string2685z00zzmodule_typez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2089;

					BgL_iz00_2089 = ((long) 8);
				BgL_loopz00_2090:
					if ((BgL_iz00_2089 == ((long) -1)))
						{	/* Module/type.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/type.scm 15 */
							{	/* Module/type.scm 15 */
								obj_t BgL_arg2687z00_2092;

								{	/* Module/type.scm 15 */

									{	/* Module/type.scm 15 */
										obj_t BgL_locationz00_2094;

										BgL_locationz00_2094 = BBOOL(((bool_t) 0));
										{	/* Module/type.scm 15 */

											BgL_arg2687z00_2092 =
												BGl_readz00zz__readerz00(BgL_cportz00_2088,
												BgL_locationz00_2094);
										}
									}
								}
								{	/* Module/type.scm 15 */
									int BgL_auxz00_2118;

									BgL_auxz00_2118 = (int) (BgL_iz00_2089);
									CNST_TABLE_SET(BgL_auxz00_2118, BgL_arg2687z00_2092);
							}}
							{	/* Module/type.scm 15 */
								int BgL_auxz00_2095;

								BgL_auxz00_2095 = (int) ((BgL_iz00_2089 - ((long) 1)));
								{
									long BgL_iz00_2123;

									BgL_iz00_2123 = (long) (BgL_auxz00_2095);
									BgL_iz00_2089 = BgL_iz00_2123;
									goto BgL_loopz00_2090;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 15 */
			BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 = BNIL;
			return (BGl_za2tvectorsza2z00zzmodule_typez00 = BNIL, BUNSPEC);
		}
	}



/* make-type-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2typezd2compilerz00zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 35 */
			{	/* Module/type.scm 37 */
				obj_t BgL_arg1707z00_203;

				BgL_arg1707z00_203 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg1707z00_203,
						BGl_typezd2producerzf2consumerzd2envzf2zzmodule_typez00,
						BGl_proc2672z00zzmodule_typez00,
						BGl_typezd2finaliza7erzd2envza7zzmodule_typez00));
			}
		}
	}



/* _make-type-compiler */
	obj_t BGl__makezd2typezd2compilerz00zzmodule_typez00(obj_t BgL_envz00_2069)
	{
		AN_OBJECT;
		{	/* Module/type.scm 35 */
			return BGl_makezd2typezd2compilerz00zzmodule_typez00();
		}
	}



/* <anonymous:1709> */
	obj_t BGl_zc3anonymousza31709ze3z83zzmodule_typez00(obj_t BgL_envz00_2070,
		obj_t BgL_mz00_2071, obj_t BgL_cz00_2072)
	{
		AN_OBJECT;
		{	/* Module/type.scm 39 */
			return BGl_typezd2producerzf2consumerz20zzmodule_typez00(BgL_cz00_2072);
		}
	}



/* type-producer/consumer */
	obj_t BGl_typezd2producerzf2consumerz20zzmodule_typez00(obj_t
		BgL_clausez00_23)
	{
		AN_OBJECT;
		{	/* Module/type.scm 45 */
			{
				obj_t BgL_protosz00_209;

				if (PAIRP(BgL_clausez00_23))
					{	/* Module/type.scm 46 */
						BgL_protosz00_209 = CDR(BgL_clausez00_23);
						{
							obj_t BgL_l1693z00_216;

							BgL_l1693z00_216 = BgL_protosz00_209;
						BgL_zc3anonymousza31712ze3z83_217:
							if (PAIRP(BgL_l1693z00_216))
								{	/* Module/type.scm 48 */
									BGl_typezd2parserzd2zzmodule_typez00(CAR(BgL_l1693z00_216),
										BgL_clausez00_23);
									{
										obj_t BgL_l1693z00_2136;

										BgL_l1693z00_2136 = CDR(BgL_l1693z00_216);
										BgL_l1693z00_216 = BgL_l1693z00_2136;
										goto BgL_zc3anonymousza31712ze3z83_217;
									}
								}
							else
								{	/* Module/type.scm 48 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/type.scm 46 */
						{	/* Module/type.scm 51 */
							obj_t BgL_list1715z00_222;

							BgL_list1715z00_222 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string2673z00zzmodule_typez00,
								BGl_string2674z00zzmodule_typez00, BgL_clausez00_23,
								BgL_list1715z00_222);
						}
					}
			}
		}
	}



/* _type-producer/consumer */
	obj_t BGl__typezd2producerzf2consumerz20zzmodule_typez00(obj_t
		BgL_envz00_2073, obj_t BgL_clausez00_2074)
	{
		AN_OBJECT;
		{	/* Module/type.scm 45 */
			return
				BGl_typezd2producerzf2consumerz20zzmodule_typez00(BgL_clausez00_2074);
		}
	}



/* type-parser */
	obj_t BGl_typezd2parserzd2zzmodule_typez00(obj_t BgL_clausez00_24,
		obj_t BgL_clausesz00_25)
	{
		AN_OBJECT;
		{	/* Module/type.scm 56 */
			{
				obj_t BgL_fromz00_241;

				obj_t BgL_toz00_242;

				obj_t BgL_checkz00_243;

				obj_t BgL_coercez00_244;

				obj_t BgL_childz00_234;

				obj_t BgL_namez00_235;

				obj_t BgL_parentz00_236;

				if (PAIRP(BgL_clausez00_24))
					{	/* Module/type.scm 58 */
						obj_t BgL_carzd21675zd2_249;

						obj_t BgL_cdrzd21676zd2_250;

						BgL_carzd21675zd2_249 = CAR(BgL_clausez00_24);
						BgL_cdrzd21676zd2_250 = CDR(BgL_clausez00_24);
						if (SYMBOLP(BgL_carzd21675zd2_249))
							{	/* Module/type.scm 58 */
								if (PAIRP(BgL_cdrzd21676zd2_250))
									{	/* Module/type.scm 58 */
										obj_t BgL_carzd21680zd2_253;

										BgL_carzd21680zd2_253 = CAR(BgL_cdrzd21676zd2_250);
										if (STRINGP(BgL_carzd21680zd2_253))
											{	/* Module/type.scm 58 */
												if (NULLP(CDR(BgL_cdrzd21676zd2_250)))
													{	/* Module/type.scm 58 */
														obj_t BgL_idz00_1205;

														obj_t BgL_namez00_1206;

														BgL_idz00_1205 = BgL_carzd21675zd2_249;
														BgL_namez00_1206 = BgL_carzd21680zd2_253;
														return
															(obj_t) (BGl_declarezd2typez12zc0zztype_envz00
															(BgL_idz00_1205, BgL_namez00_1206,
																CNST_TABLE_REF(((long) 2))));
													}
												else
													{	/* Module/type.scm 58 */
														obj_t BgL_carzd21708zd2_259;

														obj_t BgL_cdrzd21709zd2_260;

														BgL_carzd21708zd2_259 = CAR(BgL_cdrzd21676zd2_250);
														BgL_cdrzd21709zd2_260 = CDR(BgL_cdrzd21676zd2_250);
														if (STRINGP(BgL_carzd21708zd2_259))
															{	/* Module/type.scm 58 */
																if (PAIRP(BgL_cdrzd21709zd2_260))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd21715zd2_263;

																		BgL_carzd21715zd2_263 =
																			CAR(BgL_cdrzd21709zd2_260);
																		if (SYMBOLP(BgL_carzd21715zd2_263))
																			{	/* Module/type.scm 58 */
																				if (NULLP(CDR(BgL_cdrzd21709zd2_260)))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_idz00_1218;

																						obj_t BgL_namez00_1219;

																						obj_t BgL_classz00_1220;

																						BgL_idz00_1218 =
																							BgL_carzd21675zd2_249;
																						BgL_namez00_1219 =
																							BgL_carzd21708zd2_259;
																						BgL_classz00_1220 =
																							BgL_carzd21715zd2_263;
																						return (obj_t)
																							(BGl_declarezd2typez12zc0zztype_envz00
																							(BgL_idz00_1218, BgL_namez00_1219,
																								BgL_classz00_1220));
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_24) ==
																								CNST_TABLE_REF(((long) 3))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd21741zd2_268;

																								obj_t BgL_cdrzd21742zd2_269;

																								BgL_carzd21741zd2_268 =
																									CAR(BgL_cdrzd21676zd2_250);
																								BgL_cdrzd21742zd2_269 =
																									CDR(BgL_cdrzd21676zd2_250);
																								if (SYMBOLP
																									(BgL_carzd21741zd2_268))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd21750zd2_271;

																										obj_t BgL_cdrzd21751zd2_272;

																										BgL_carzd21750zd2_271 =
																											CAR
																											(BgL_cdrzd21742zd2_269);
																										BgL_cdrzd21751zd2_272 =
																											CDR
																											(BgL_cdrzd21742zd2_269);
																										if (STRINGP
																											(BgL_carzd21750zd2_271))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd21751zd2_272))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd21757zd2_275;
																														BgL_carzd21757zd2_275
																															=
																															CAR
																															(BgL_cdrzd21751zd2_272);
																														if (SYMBOLP
																															(BgL_carzd21757zd2_275))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21751zd2_272)))
																																	{	/* Module/type.scm 58 */
																																		obj_t
																																			BgL_idz00_1234;
																																		obj_t
																																			BgL_namez00_1235;
																																		obj_t
																																			BgL_classz00_1236;
																																		BgL_idz00_1234
																																			=
																																			BgL_carzd21741zd2_268;
																																		BgL_namez00_1235
																																			=
																																			BgL_carzd21750zd2_271;
																																		BgL_classz00_1236
																																			=
																																			BgL_carzd21757zd2_275;
																																		{	/* Module/type.scm 58 */
																																			BgL_typez00_bglt
																																				BgL_typez00_1237;
																																			BgL_typez00_1237
																																				=
																																				BGl_declarezd2typez12zc0zztype_envz00
																																				(BgL_idz00_1234,
																																				BgL_namez00_1235,
																																				BgL_classz00_1236);
																																			((((BgL_typez00_bglt) CREF(BgL_typez00_1237))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																			return
																																				(obj_t)
																																				(BgL_typez00_1237);
																																		}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																	BgL_tagzd21661zd2_246:
																																		{	/* Module/type.scm 128 */
																																			obj_t
																																				BgL_list2603z00_1080;
																																			BgL_list2603z00_1080
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			return
																																				BGl_userzd2errorzd2zztools_errorz00
																																				(BGl_string2673z00zzmodule_typez00,
																																				BGl_string2678z00zzmodule_typez00,
																																				BgL_clausez00_24,
																																				BgL_list2603z00_1080);
																																		}
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								if (
																									(CAR(BgL_clausez00_24) ==
																										CNST_TABLE_REF(((long) 4))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd21922zd2_281;

																										obj_t BgL_cdrzd21923zd2_282;

																										BgL_carzd21922zd2_281 =
																											CAR
																											(BgL_cdrzd21676zd2_250);
																										BgL_cdrzd21923zd2_282 =
																											CDR
																											(BgL_cdrzd21676zd2_250);
																										if (SYMBOLP
																											(BgL_carzd21922zd2_281))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd21932zd2_284;
																												obj_t
																													BgL_cdrzd21933zd2_285;
																												BgL_carzd21932zd2_284 =
																													CAR
																													(BgL_cdrzd21923zd2_282);
																												BgL_cdrzd21933zd2_285 =
																													CDR
																													(BgL_cdrzd21923zd2_282);
																												if (STRINGP
																													(BgL_carzd21932zd2_284))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd21933zd2_285))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_carzd21939zd2_288;
																																BgL_carzd21939zd2_288
																																	=
																																	CAR
																																	(BgL_cdrzd21933zd2_285);
																																if (PAIRP
																																	(BgL_carzd21939zd2_288))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd21933zd2_285)))
																																			{	/* Module/type.scm 58 */
																																				BgL_childz00_234
																																					=
																																					BgL_carzd21922zd2_281;
																																				BgL_namez00_235
																																					=
																																					BgL_carzd21932zd2_284;
																																				BgL_parentz00_236
																																					=
																																					BgL_carzd21939zd2_288;
																																			BgL_tagzd21658zd2_237:
																																				{
																																					obj_t
																																						BgL_walkz00_1020;
																																					obj_t
																																						BgL_classz00_1021;
																																					BgL_walkz00_1020
																																						=
																																						BgL_parentz00_236;
																																					BgL_classz00_1021
																																						=
																																						BUNSPEC;
																																				BgL_zc3anonymousza32545ze3z83_1022:
																																					if (NULLP(BgL_walkz00_1020))
																																						{	/* Module/type.scm 77 */
																																							return
																																								(obj_t)
																																								(BGl_declarezd2subtypez12zc0zztype_envz00
																																								(BgL_childz00_234,
																																									BgL_namez00_235,
																																									BgL_parentz00_236,
																																									BgL_classz00_1021));
																																						}
																																					else
																																						{	/* Module/type.scm 79 */
																																							bool_t
																																								BgL_testz00_2222;
																																							{	/* Module/type.scm 79 */
																																								obj_t
																																									BgL_auxz00_2223;
																																								BgL_auxz00_2223
																																									=
																																									CAR
																																									(BgL_walkz00_1020);
																																								BgL_testz00_2222
																																									=
																																									SYMBOLP
																																									(BgL_auxz00_2223);
																																							}
																																							if (BgL_testz00_2222)
																																								{	/* Module/type.scm 82 */
																																									BgL_typez00_bglt
																																										BgL_tparentz00_1025;
																																									BgL_tparentz00_1025
																																										=
																																										BGl_findzd2typezd2zztype_envz00
																																										(CAR
																																										(BgL_walkz00_1020));
																																									{	/* Module/type.scm 84 */
																																										bool_t
																																											BgL_testz00_2228;
																																										{	/* Module/type.scm 84 */
																																											obj_t
																																												BgL_obj1620z00_1984;
																																											BgL_obj1620z00_1984
																																												=
																																												(obj_t)
																																												(BgL_tparentz00_1025);
																																											BgL_testz00_2228
																																												=
																																												BGl_iszd2azf3z21zz__objectz00
																																												(BgL_obj1620z00_1984,
																																												BGl_typez00zztype_typez00);
																																										}
																																										if (BgL_testz00_2228)
																																											{	/* Module/type.scm 86 */
																																												bool_t
																																													BgL_testz00_2231;
																																												if (SYMBOLP(BgL_classz00_1021))
																																													{	/* Module/type.scm 86 */
																																														if ((BgL_classz00_1021 == (((BgL_typez00_bglt) CREF(BgL_tparentz00_1025))->BgL_classz00)))
																																															{	/* Module/type.scm 87 */
																																																BgL_testz00_2231
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														else
																																															{	/* Module/type.scm 87 */
																																																BgL_testz00_2231
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																													}
																																												else
																																													{	/* Module/type.scm 86 */
																																														BgL_testz00_2231
																																															=
																																															(
																																															(bool_t)
																																															0);
																																													}
																																												if (BgL_testz00_2231)
																																													{	/* Module/type.scm 86 */
																																														return
																																															BGl_userzd2errorzd2zztools_errorz00
																																															(BGl_string2675z00zzmodule_typez00,
																																															BGl_string2676z00zzmodule_typez00,
																																															BgL_clausez00_24,
																																															BNIL);
																																													}
																																												else
																																													{	/* Module/type.scm 92 */
																																														obj_t
																																															BgL_arg2554z00_1029;
																																														obj_t
																																															BgL_arg2555z00_1030;
																																														BgL_arg2554z00_1029
																																															=
																																															CDR
																																															(BgL_walkz00_1020);
																																														BgL_arg2555z00_1030
																																															=
																																															(
																																															((BgL_typez00_bglt) CREF(BgL_tparentz00_1025))->BgL_classz00);
																																														{
																																															obj_t
																																																BgL_classz00_2241;
																																															obj_t
																																																BgL_walkz00_2240;
																																															BgL_walkz00_2240
																																																=
																																																BgL_arg2554z00_1029;
																																															BgL_classz00_2241
																																																=
																																																BgL_arg2555z00_1030;
																																															BgL_classz00_1021
																																																=
																																																BgL_classz00_2241;
																																															BgL_walkz00_1020
																																																=
																																																BgL_walkz00_2240;
																																															goto
																																																BgL_zc3anonymousza32545ze3z83_1022;
																																														}
																																													}
																																											}
																																										else
																																											{	/* Module/type.scm 84 */
																																												return
																																													BGl_userzd2errorzd2zztools_errorz00
																																													(BGl_string2675z00zzmodule_typez00,
																																													BGl_string2677z00zzmodule_typez00,
																																													BgL_clausez00_24,
																																													BNIL);
																																											}
																																									}
																																								}
																																							else
																																								{	/* Module/type.scm 79 */
																																									return
																																										BGl_userzd2errorzd2zztools_errorz00
																																										(BGl_string2673z00zzmodule_typez00,
																																										BGl_string2678z00zzmodule_typez00,
																																										BgL_clausez00_24,
																																										BNIL);
																																								}
																																						}
																																				}
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										obj_t BgL_cdrzd22043zd2_292;

																										BgL_cdrzd22043zd2_292 =
																											CDR(BgL_clausez00_24);
																										if (
																											(CAR(BgL_clausez00_24) ==
																												CNST_TABLE_REF(((long)
																														5))))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22050zd2_294;
																												obj_t
																													BgL_cdrzd22051zd2_295;
																												BgL_carzd22050zd2_294 =
																													CAR
																													(BgL_cdrzd22043zd2_292);
																												BgL_cdrzd22051zd2_295 =
																													CDR
																													(BgL_cdrzd22043zd2_292);
																												if (SYMBOLP
																													(BgL_carzd22050zd2_294))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd22061zd2_297;
																														obj_t
																															BgL_cdrzd22062zd2_298;
																														BgL_carzd22061zd2_297
																															=
																															CAR
																															(BgL_cdrzd22051zd2_295);
																														BgL_cdrzd22062zd2_298
																															=
																															CDR
																															(BgL_cdrzd22051zd2_295);
																														if (SYMBOLP
																															(BgL_carzd22061zd2_297))
																															{	/* Module/type.scm 58 */
																																if (PAIRP
																																	(BgL_cdrzd22062zd2_298))
																																	{	/* Module/type.scm 58 */
																																		obj_t
																																			BgL_cdrzd22071zd2_301;
																																		BgL_cdrzd22071zd2_301
																																			=
																																			CDR
																																			(BgL_cdrzd22062zd2_298);
																																		if (PAIRP
																																			(BgL_cdrzd22071zd2_301))
																																			{	/* Module/type.scm 58 */
																																				if (NULLP(CDR(BgL_cdrzd22071zd2_301)))
																																					{	/* Module/type.scm 58 */
																																						BgL_fromz00_241
																																							=
																																							BgL_carzd22050zd2_294;
																																						BgL_toz00_242
																																							=
																																							BgL_carzd22061zd2_297;
																																						BgL_checkz00_243
																																							=
																																							CAR
																																							(BgL_cdrzd22062zd2_298);
																																						BgL_coercez00_244
																																							=
																																							CAR
																																							(BgL_cdrzd22071zd2_301);
																																					BgL_tagzd21660zd2_245:
																																						{	/* Module/type.scm 97 */
																																							bool_t
																																								BgL_testz00_2265;
																																							{	/* Module/type.scm 97 */
																																								bool_t
																																									BgL_testz00_2266;
																																								{
																																									obj_t
																																										BgL_checkz00_1072;
																																									{	/* Module/type.scm 97 */
																																										obj_t
																																											BgL_auxz00_2267;
																																										BgL_checkz00_1072
																																											=
																																											BgL_checkz00_243;
																																									BgL_zc3anonymousza32590ze3z83_1073:
																																										if (NULLP(BgL_checkz00_1072))
																																											{	/* Module/type.scm 99 */
																																												BgL_auxz00_2267
																																													=
																																													BTRUE;
																																											}
																																										else
																																											{	/* Module/type.scm 101 */
																																												bool_t
																																													BgL_testz00_2270;
																																												{	/* Module/type.scm 101 */
																																													obj_t
																																														BgL_auxz00_2271;
																																													BgL_auxz00_2271
																																														=
																																														CAR
																																														(BgL_checkz00_1072);
																																													BgL_testz00_2270
																																														=
																																														SYMBOLP
																																														(BgL_auxz00_2271);
																																												}
																																												if (BgL_testz00_2270)
																																													{
																																														obj_t
																																															BgL_checkz00_2274;
																																														BgL_checkz00_2274
																																															=
																																															CDR
																																															(BgL_checkz00_1072);
																																														BgL_checkz00_1072
																																															=
																																															BgL_checkz00_2274;
																																														goto
																																															BgL_zc3anonymousza32590ze3z83_1073;
																																													}
																																												else
																																													{	/* Module/type.scm 102 */
																																														obj_t
																																															BgL_list2595z00_1077;
																																														BgL_list2595z00_1077
																																															=
																																															MAKE_PAIR
																																															(BFALSE,
																																															BNIL);
																																														BgL_auxz00_2267
																																															=
																																															BGl_userzd2errorzd2zztools_errorz00
																																															(BGl_string2679z00zzmodule_typez00,
																																															BGl_string2680z00zzmodule_typez00,
																																															BgL_clausez00_24,
																																															BgL_list2595z00_1077);
																																													}
																																											}
																																										BgL_testz00_2266
																																											=
																																											CBOOL
																																											(BgL_auxz00_2267);
																																									}
																																								}
																																								if (BgL_testz00_2266)
																																									{
																																										obj_t
																																											BgL_coercez00_1049;
																																										{	/* Module/type.scm 105 */
																																											obj_t
																																												BgL_auxz00_2279;
																																											BgL_coercez00_1049
																																												=
																																												BgL_coercez00_244;
																																										BgL_zc3anonymousza32570ze3z83_1050:
																																											if (NULLP(BgL_coercez00_1049))
																																												{	/* Module/type.scm 107 */
																																													BgL_auxz00_2279
																																														=
																																														BTRUE;
																																												}
																																											else
																																												{	/* Module/type.scm 109 */
																																													bool_t
																																														BgL_testz00_2282;
																																													{	/* Module/type.scm 109 */
																																														obj_t
																																															BgL_ezd27176zd2_1058;
																																														BgL_ezd27176zd2_1058
																																															=
																																															CAR
																																															(BgL_coercez00_1049);
																																														if (SYMBOLP(BgL_ezd27176zd2_1058))
																																															{	/* Module/type.scm 109 */
																																																BgL_testz00_2282
																																																	=
																																																	(
																																																	(bool_t)
																																																	0);
																																															}
																																														else
																																															{	/* Module/type.scm 109 */
																																																if (PAIRP(BgL_ezd27176zd2_1058))
																																																	{	/* Module/type.scm 109 */
																																																		obj_t
																																																			BgL_cdrzd27178zd2_1061;
																																																		BgL_cdrzd27178zd2_1061
																																																			=
																																																			CDR
																																																			(BgL_ezd27176zd2_1058);
																																																		if ((CAR(BgL_ezd27176zd2_1058) == CNST_TABLE_REF(((long) 1))))
																																																			{	/* Module/type.scm 109 */
																																																				if (PAIRP(BgL_cdrzd27178zd2_1061))
																																																					{	/* Module/type.scm 109 */
																																																						obj_t
																																																							BgL_carzd27179zd2_1064;
																																																						BgL_carzd27179zd2_1064
																																																							=
																																																							CAR
																																																							(BgL_cdrzd27178zd2_1061);
																																																						if (PAIRP(BgL_carzd27179zd2_1064))
																																																							{	/* Module/type.scm 109 */
																																																								if (NULLP(CDR(BgL_carzd27179zd2_1064)))
																																																									{	/* Module/type.scm 109 */
																																																										BgL_testz00_2282
																																																											=
																																																											(
																																																											(bool_t)
																																																											0);
																																																									}
																																																								else
																																																									{	/* Module/type.scm 109 */
																																																										BgL_testz00_2282
																																																											=
																																																											(
																																																											(bool_t)
																																																											1);
																																																									}
																																																							}
																																																						else
																																																							{	/* Module/type.scm 109 */
																																																								BgL_testz00_2282
																																																									=
																																																									(
																																																									(bool_t)
																																																									1);
																																																							}
																																																					}
																																																				else
																																																					{	/* Module/type.scm 109 */
																																																						BgL_testz00_2282
																																																							=
																																																							(
																																																							(bool_t)
																																																							1);
																																																					}
																																																			}
																																																		else
																																																			{	/* Module/type.scm 109 */
																																																				BgL_testz00_2282
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																	}
																																																else
																																																	{	/* Module/type.scm 109 */
																																																		BgL_testz00_2282
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																															}
																																													}
																																													if (BgL_testz00_2282)
																																														{	/* Module/type.scm 113 */
																																															obj_t
																																																BgL_list2573z00_1053;
																																															BgL_list2573z00_1053
																																																=
																																																MAKE_PAIR
																																																(BFALSE,
																																																BNIL);
																																															BgL_auxz00_2279
																																																=
																																																BGl_userzd2errorzd2zztools_errorz00
																																																(BGl_string2679z00zzmodule_typez00,
																																																BGl_string2680z00zzmodule_typez00,
																																																BgL_clausez00_24,
																																																BgL_list2573z00_1053);
																																														}
																																													else
																																														{
																																															obj_t
																																																BgL_coercez00_2303;
																																															BgL_coercez00_2303
																																																=
																																																CDR
																																																(BgL_coercez00_1049);
																																															BgL_coercez00_1049
																																																=
																																																BgL_coercez00_2303;
																																															goto
																																																BgL_zc3anonymousza32570ze3z83_1050;
																																														}
																																												}
																																											BgL_testz00_2265
																																												=
																																												CBOOL
																																												(BgL_auxz00_2279);
																																										}
																																									}
																																								else
																																									{	/* Module/type.scm 97 */
																																										BgL_testz00_2265
																																											=
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																							if (BgL_testz00_2265)
																																								{	/* Module/type.scm 116 */
																																									obj_t
																																										BgL_locz00_1040;
																																									BgL_locz00_1040
																																										=
																																										BGl_findzd2locationzd2zztools_locationz00
																																										(BgL_clausez00_24);
																																									{	/* Module/type.scm 116 */
																																										BgL_typez00_bglt
																																											BgL_tfromz00_1041;
																																										BgL_tfromz00_1041
																																											=
																																											BGl_usezd2typez12zc0zztype_envz00
																																											(BgL_fromz00_241,
																																											BgL_locz00_1040);
																																										{	/* Module/type.scm 117 */
																																											BgL_typez00_bglt
																																												BgL_ttoz00_1042;
																																											BgL_ttoz00_1042
																																												=
																																												BGl_usezd2typez12zc0zztype_envz00
																																												(BgL_toz00_242,
																																												BgL_locz00_1040);
																																											{	/* Module/type.scm 118 */

																																												{	/* Module/type.scm 120 */
																																													bool_t
																																														BgL_testz00_2309;
																																													{	/* Module/type.scm 120 */
																																														obj_t
																																															BgL_obj1620z00_2005;
																																														BgL_obj1620z00_2005
																																															=
																																															(obj_t)
																																															(BgL_tfromz00_1041);
																																														BgL_testz00_2309
																																															=
																																															BGl_iszd2azf3z21zz__objectz00
																																															(BgL_obj1620z00_2005,
																																															BGl_typez00zztype_typez00);
																																													}
																																													if (BgL_testz00_2309)
																																														{	/* Module/type.scm 122 */
																																															bool_t
																																																BgL_testz00_2312;
																																															{	/* Module/type.scm 122 */
																																																obj_t
																																																	BgL_obj1620z00_2006;
																																																BgL_obj1620z00_2006
																																																	=
																																																	(obj_t)
																																																	(BgL_ttoz00_1042);
																																																BgL_testz00_2312
																																																	=
																																																	BGl_iszd2azf3z21zz__objectz00
																																																	(BgL_obj1620z00_2006,
																																																	BGl_typez00zztype_typez00);
																																															}
																																															if (BgL_testz00_2312)
																																																{	/* Module/type.scm 122 */
																																																	return
																																																		BGl_addzd2coercionz12zc0zztype_coercionz00
																																																		(BgL_tfromz00_1041,
																																																		BgL_ttoz00_1042,
																																																		BgL_checkz00_243,
																																																		BgL_coercez00_244);
																																																}
																																															else
																																																{	/* Module/type.scm 123 */
																																																	obj_t
																																																		BgL_list2567z00_1045;
																																																	BgL_list2567z00_1045
																																																		=
																																																		MAKE_PAIR
																																																		(BNIL,
																																																		BNIL);
																																																	return
																																																		BGl_userzd2errorzd2zztools_errorz00
																																																		(BGl_string2681z00zzmodule_typez00,
																																																		BGl_string2682z00zzmodule_typez00,
																																																		BgL_toz00_242,
																																																		BgL_list2567z00_1045);
																																																}
																																														}
																																													else
																																														{	/* Module/type.scm 121 */
																																															obj_t
																																																BgL_list2568z00_1046;
																																															BgL_list2568z00_1046
																																																=
																																																MAKE_PAIR
																																																(BNIL,
																																																BNIL);
																																															return
																																																BGl_userzd2errorzd2zztools_errorz00
																																																(BGl_string2681z00zzmodule_typez00,
																																																BGl_string2682z00zzmodule_typez00,
																																																BgL_fromz00_241,
																																																BgL_list2568z00_1046);
																																														}
																																												}
																																											}
																																										}
																																									}
																																								}
																																							else
																																								{	/* Module/type.scm 97 */
																																									return
																																										BNIL;
																																								}
																																						}
																																					}
																																				else
																																					{	/* Module/type.scm 58 */
																																						goto
																																							BgL_tagzd21661zd2_246;
																																					}
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																							}
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_24) ==
																						CNST_TABLE_REF(((long) 3))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd22099zd2_316;

																						obj_t BgL_cdrzd22100zd2_317;

																						BgL_carzd22099zd2_316 =
																							CAR(BgL_cdrzd21676zd2_250);
																						BgL_cdrzd22100zd2_317 =
																							CDR(BgL_cdrzd21676zd2_250);
																						if (SYMBOLP(BgL_carzd22099zd2_316))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22108zd2_319;

																								obj_t BgL_cdrzd22109zd2_320;

																								BgL_carzd22108zd2_319 =
																									CAR(BgL_cdrzd22100zd2_317);
																								BgL_cdrzd22109zd2_320 =
																									CDR(BgL_cdrzd22100zd2_317);
																								if (STRINGP
																									(BgL_carzd22108zd2_319))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd22109zd2_320))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22115zd2_323;
																												BgL_carzd22115zd2_323 =
																													CAR
																													(BgL_cdrzd22109zd2_320);
																												if (SYMBOLP
																													(BgL_carzd22115zd2_323))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd22109zd2_320)))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_idz00_1281;
																																obj_t
																																	BgL_namez00_1282;
																																obj_t
																																	BgL_classz00_1283;
																																BgL_idz00_1281 =
																																	BgL_carzd22099zd2_316;
																																BgL_namez00_1282
																																	=
																																	BgL_carzd22108zd2_319;
																																BgL_classz00_1283
																																	=
																																	BgL_carzd22115zd2_323;
																																{	/* Module/type.scm 58 */
																																	BgL_typez00_bglt
																																		BgL_typez00_1284;
																																	BgL_typez00_1284
																																		=
																																		BGl_declarezd2typez12zc0zztype_envz00
																																		(BgL_idz00_1281,
																																		BgL_namez00_1282,
																																		BgL_classz00_1283);
																																	((((BgL_typez00_bglt) CREF(BgL_typez00_1284))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																	return
																																		(obj_t)
																																		(BgL_typez00_1284);
																																}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_24) ==
																								CNST_TABLE_REF(((long) 4))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22280zd2_329;

																								obj_t BgL_cdrzd22281zd2_330;

																								BgL_carzd22280zd2_329 =
																									CAR(BgL_cdrzd21676zd2_250);
																								BgL_cdrzd22281zd2_330 =
																									CDR(BgL_cdrzd21676zd2_250);
																								if (SYMBOLP
																									(BgL_carzd22280zd2_329))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22290zd2_332;

																										obj_t BgL_cdrzd22291zd2_333;

																										BgL_carzd22290zd2_332 =
																											CAR
																											(BgL_cdrzd22281zd2_330);
																										BgL_cdrzd22291zd2_333 =
																											CDR
																											(BgL_cdrzd22281zd2_330);
																										if (STRINGP
																											(BgL_carzd22290zd2_332))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd22291zd2_333))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd22297zd2_336;
																														BgL_carzd22297zd2_336
																															=
																															CAR
																															(BgL_cdrzd22291zd2_333);
																														if (PAIRP
																															(BgL_carzd22297zd2_336))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd22291zd2_333)))
																																	{
																																		obj_t
																																			BgL_parentz00_2367;
																																		obj_t
																																			BgL_namez00_2366;
																																		obj_t
																																			BgL_childz00_2365;
																																		BgL_childz00_2365
																																			=
																																			BgL_carzd22280zd2_329;
																																		BgL_namez00_2366
																																			=
																																			BgL_carzd22290zd2_332;
																																		BgL_parentz00_2367
																																			=
																																			BgL_carzd22297zd2_336;
																																		BgL_parentz00_236
																																			=
																																			BgL_parentz00_2367;
																																		BgL_namez00_235
																																			=
																																			BgL_namez00_2366;
																																		BgL_childz00_234
																																			=
																																			BgL_childz00_2365;
																																		goto
																																			BgL_tagzd21658zd2_237;
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								obj_t BgL_cdrzd22391zd2_340;

																								BgL_cdrzd22391zd2_340 =
																									CDR(BgL_clausez00_24);
																								if (
																									(CAR(BgL_clausez00_24) ==
																										CNST_TABLE_REF(((long) 6))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22395zd2_342;

																										obj_t BgL_cdrzd22396zd2_343;

																										BgL_carzd22395zd2_342 =
																											CAR
																											(BgL_cdrzd22391zd2_340);
																										BgL_cdrzd22396zd2_343 =
																											CDR
																											(BgL_cdrzd22391zd2_340);
																										if (SYMBOLP
																											(BgL_carzd22395zd2_342))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22403zd2_345;
																												BgL_carzd22403zd2_345 =
																													CAR
																													(BgL_cdrzd22396zd2_343);
																												if (PAIRP
																													(BgL_carzd22403zd2_345))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd22406zd2_347;
																														BgL_carzd22406zd2_347
																															=
																															CAR
																															(BgL_carzd22403zd2_345);
																														if (SYMBOLP
																															(BgL_carzd22406zd2_347))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_carzd22403zd2_345)))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd22396zd2_343)))
																																			{	/* Module/type.scm 58 */
																																				return
																																					BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																					(BgL_carzd22395zd2_342,
																																					BgL_carzd22406zd2_347,
																																					BgL_clausez00_24);
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										if (
																											(CAR(BgL_clausez00_24) ==
																												CNST_TABLE_REF(((long)
																														5))))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22469zd2_355;
																												obj_t
																													BgL_cdrzd22470zd2_356;
																												BgL_carzd22469zd2_355 =
																													CAR
																													(BgL_cdrzd22391zd2_340);
																												BgL_cdrzd22470zd2_356 =
																													CDR
																													(BgL_cdrzd22391zd2_340);
																												if (SYMBOLP
																													(BgL_carzd22469zd2_355))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd22480zd2_358;
																														obj_t
																															BgL_cdrzd22481zd2_359;
																														BgL_carzd22480zd2_358
																															=
																															CAR
																															(BgL_cdrzd22470zd2_356);
																														BgL_cdrzd22481zd2_359
																															=
																															CDR
																															(BgL_cdrzd22470zd2_356);
																														if (SYMBOLP
																															(BgL_carzd22480zd2_358))
																															{	/* Module/type.scm 58 */
																																if (PAIRP
																																	(BgL_cdrzd22481zd2_359))
																																	{	/* Module/type.scm 58 */
																																		obj_t
																																			BgL_cdrzd22490zd2_362;
																																		BgL_cdrzd22490zd2_362
																																			=
																																			CDR
																																			(BgL_cdrzd22481zd2_359);
																																		if (PAIRP
																																			(BgL_cdrzd22490zd2_362))
																																			{	/* Module/type.scm 58 */
																																				if (NULLP(CDR(BgL_cdrzd22490zd2_362)))
																																					{
																																						obj_t
																																							BgL_coercez00_2414;
																																						obj_t
																																							BgL_checkz00_2412;
																																						obj_t
																																							BgL_toz00_2411;
																																						obj_t
																																							BgL_fromz00_2410;
																																						BgL_fromz00_2410
																																							=
																																							BgL_carzd22469zd2_355;
																																						BgL_toz00_2411
																																							=
																																							BgL_carzd22480zd2_358;
																																						BgL_checkz00_2412
																																							=
																																							CAR
																																							(BgL_cdrzd22481zd2_359);
																																						BgL_coercez00_2414
																																							=
																																							CAR
																																							(BgL_cdrzd22490zd2_362);
																																						BgL_coercez00_244
																																							=
																																							BgL_coercez00_2414;
																																						BgL_checkz00_243
																																							=
																																							BgL_checkz00_2412;
																																						BgL_toz00_242
																																							=
																																							BgL_toz00_2411;
																																						BgL_fromz00_241
																																							=
																																							BgL_fromz00_2410;
																																						goto
																																							BgL_tagzd21660zd2_245;
																																					}
																																				else
																																					{	/* Module/type.scm 58 */
																																						goto
																																							BgL_tagzd21661zd2_246;
																																					}
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																							}
																					}
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd21661zd2_246;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																if (
																	(CAR(BgL_clausez00_24) ==
																		CNST_TABLE_REF(((long) 3))))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd22561zd2_378;

																		obj_t BgL_cdrzd22562zd2_379;

																		BgL_carzd22561zd2_378 =
																			CAR(BgL_cdrzd21676zd2_250);
																		BgL_cdrzd22562zd2_379 =
																			CDR(BgL_cdrzd21676zd2_250);
																		if (SYMBOLP(BgL_carzd22561zd2_378))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd22562zd2_379))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd22569zd2_382;

																						obj_t BgL_cdrzd22570zd2_383;

																						BgL_carzd22569zd2_382 =
																							CAR(BgL_cdrzd22562zd2_379);
																						BgL_cdrzd22570zd2_383 =
																							CDR(BgL_cdrzd22562zd2_379);
																						if (STRINGP(BgL_carzd22569zd2_382))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd22570zd2_383))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22574zd2_386;

																										BgL_carzd22574zd2_386 =
																											CAR
																											(BgL_cdrzd22570zd2_383);
																										if (SYMBOLP
																											(BgL_carzd22574zd2_386))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd22570zd2_383)))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_idz00_1344;
																														obj_t
																															BgL_namez00_1345;
																														obj_t
																															BgL_classz00_1346;
																														BgL_idz00_1344 =
																															BgL_carzd22561zd2_378;
																														BgL_namez00_1345 =
																															BgL_carzd22569zd2_382;
																														BgL_classz00_1346 =
																															BgL_carzd22574zd2_386;
																														{	/* Module/type.scm 58 */
																															BgL_typez00_bglt
																																BgL_typez00_1347;
																															BgL_typez00_1347 =
																																BGl_declarezd2typez12zc0zztype_envz00
																																(BgL_idz00_1344,
																																BgL_namez00_1345,
																																BgL_classz00_1346);
																															((((BgL_typez00_bglt) CREF(BgL_typez00_1347))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																															return
																																(obj_t)
																																(BgL_typez00_1347);
																														}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		if (
																			(CAR(BgL_clausez00_24) ==
																				CNST_TABLE_REF(((long) 4))))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd22765zd2_392;

																				obj_t BgL_cdrzd22766zd2_393;

																				BgL_carzd22765zd2_392 =
																					CAR(BgL_cdrzd21676zd2_250);
																				BgL_cdrzd22766zd2_393 =
																					CDR(BgL_cdrzd21676zd2_250);
																				if (SYMBOLP(BgL_carzd22765zd2_392))
																					{	/* Module/type.scm 58 */
																						if (PAIRP(BgL_cdrzd22766zd2_393))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22774zd2_396;

																								obj_t BgL_cdrzd22775zd2_397;

																								BgL_carzd22774zd2_396 =
																									CAR(BgL_cdrzd22766zd2_393);
																								BgL_cdrzd22775zd2_397 =
																									CDR(BgL_cdrzd22766zd2_393);
																								if (STRINGP
																									(BgL_carzd22774zd2_396))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd22775zd2_397))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22779zd2_400;
																												BgL_carzd22779zd2_400 =
																													CAR
																													(BgL_cdrzd22775zd2_397);
																												if (PAIRP
																													(BgL_carzd22779zd2_400))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd22775zd2_397)))
																															{
																																obj_t
																																	BgL_parentz00_2465;
																																obj_t
																																	BgL_namez00_2464;
																																obj_t
																																	BgL_childz00_2463;
																																BgL_childz00_2463
																																	=
																																	BgL_carzd22765zd2_392;
																																BgL_namez00_2464
																																	=
																																	BgL_carzd22774zd2_396;
																																BgL_parentz00_2465
																																	=
																																	BgL_carzd22779zd2_400;
																																BgL_parentz00_236
																																	=
																																	BgL_parentz00_2465;
																																BgL_namez00_235
																																	=
																																	BgL_namez00_2464;
																																BgL_childz00_234
																																	=
																																	BgL_childz00_2463;
																																goto
																																	BgL_tagzd21658zd2_237;
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				obj_t BgL_cdrzd22889zd2_404;

																				BgL_cdrzd22889zd2_404 =
																					CDR(BgL_clausez00_24);
																				if (
																					(CAR(BgL_clausez00_24) ==
																						CNST_TABLE_REF(((long) 6))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd22893zd2_406;

																						obj_t BgL_cdrzd22894zd2_407;

																						BgL_carzd22893zd2_406 =
																							CAR(BgL_cdrzd22889zd2_404);
																						BgL_cdrzd22894zd2_407 =
																							CDR(BgL_cdrzd22889zd2_404);
																						if (SYMBOLP(BgL_carzd22893zd2_406))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd22894zd2_407))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd22901zd2_410;

																										BgL_carzd22901zd2_410 =
																											CAR
																											(BgL_cdrzd22894zd2_407);
																										if (PAIRP
																											(BgL_carzd22901zd2_410))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22904zd2_412;
																												BgL_carzd22904zd2_412 =
																													CAR
																													(BgL_carzd22901zd2_410);
																												if (SYMBOLP
																													(BgL_carzd22904zd2_412))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_carzd22901zd2_410)))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd22894zd2_407)))
																																	{	/* Module/type.scm 58 */
																																		return
																																			BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																			(BgL_carzd22893zd2_406,
																																			BgL_carzd22904zd2_412,
																																			BgL_clausez00_24);
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_24) ==
																								CNST_TABLE_REF(((long) 5))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd22973zd2_420;

																								obj_t BgL_cdrzd22974zd2_421;

																								BgL_carzd22973zd2_420 =
																									CAR(BgL_cdrzd22889zd2_404);
																								BgL_cdrzd22974zd2_421 =
																									CDR(BgL_cdrzd22889zd2_404);
																								if (SYMBOLP
																									(BgL_carzd22973zd2_420))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd22974zd2_421))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd22983zd2_424;
																												obj_t
																													BgL_cdrzd22984zd2_425;
																												BgL_carzd22983zd2_424 =
																													CAR
																													(BgL_cdrzd22974zd2_421);
																												BgL_cdrzd22984zd2_425 =
																													CDR
																													(BgL_cdrzd22974zd2_421);
																												if (SYMBOLP
																													(BgL_carzd22983zd2_424))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd22984zd2_425))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_cdrzd22991zd2_428;
																																BgL_cdrzd22991zd2_428
																																	=
																																	CDR
																																	(BgL_cdrzd22984zd2_425);
																																if (PAIRP
																																	(BgL_cdrzd22991zd2_428))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd22991zd2_428)))
																																			{
																																				obj_t
																																					BgL_coercez00_2516;
																																				obj_t
																																					BgL_checkz00_2514;
																																				obj_t
																																					BgL_toz00_2513;
																																				obj_t
																																					BgL_fromz00_2512;
																																				BgL_fromz00_2512
																																					=
																																					BgL_carzd22973zd2_420;
																																				BgL_toz00_2513
																																					=
																																					BgL_carzd22983zd2_424;
																																				BgL_checkz00_2514
																																					=
																																					CAR
																																					(BgL_cdrzd22984zd2_425);
																																				BgL_coercez00_2516
																																					=
																																					CAR
																																					(BgL_cdrzd22991zd2_428);
																																				BgL_coercez00_244
																																					=
																																					BgL_coercez00_2516;
																																				BgL_checkz00_243
																																					=
																																					BgL_checkz00_2514;
																																				BgL_toz00_242
																																					=
																																					BgL_toz00_2513;
																																				BgL_fromz00_241
																																					=
																																					BgL_fromz00_2512;
																																				goto
																																					BgL_tagzd21660zd2_245;
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																			}
																	}
															}
													}
											}
										else
											{	/* Module/type.scm 58 */
												obj_t BgL_carzd23477zd2_512;

												obj_t BgL_cdrzd23478zd2_513;

												BgL_carzd23477zd2_512 = CAR(BgL_cdrzd21676zd2_250);
												BgL_cdrzd23478zd2_513 = CDR(BgL_cdrzd21676zd2_250);
												if (STRINGP(BgL_carzd23477zd2_512))
													{	/* Module/type.scm 58 */
														if (PAIRP(BgL_cdrzd23478zd2_513))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd23484zd2_516;

																BgL_carzd23484zd2_516 =
																	CAR(BgL_cdrzd23478zd2_513);
																if (SYMBOLP(BgL_carzd23484zd2_516))
																	{	/* Module/type.scm 58 */
																		if (NULLP(CDR(BgL_cdrzd23478zd2_513)))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_idz00_1473;

																				obj_t BgL_namez00_1474;

																				obj_t BgL_classz00_1475;

																				BgL_idz00_1473 = BgL_carzd21675zd2_249;
																				BgL_namez00_1474 =
																					BgL_carzd23477zd2_512;
																				BgL_classz00_1475 =
																					BgL_carzd23484zd2_516;
																				return (obj_t)
																					(BGl_declarezd2typez12zc0zztype_envz00
																					(BgL_idz00_1473, BgL_namez00_1474,
																						BgL_classz00_1475));
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_24) ==
																						CNST_TABLE_REF(((long) 3))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd23510zd2_521;

																						obj_t BgL_cdrzd23511zd2_522;

																						BgL_carzd23510zd2_521 =
																							CAR(BgL_cdrzd21676zd2_250);
																						BgL_cdrzd23511zd2_522 =
																							CDR(BgL_cdrzd21676zd2_250);
																						if (SYMBOLP(BgL_carzd23510zd2_521))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd23519zd2_524;

																								obj_t BgL_cdrzd23520zd2_525;

																								BgL_carzd23519zd2_524 =
																									CAR(BgL_cdrzd23511zd2_522);
																								BgL_cdrzd23520zd2_525 =
																									CDR(BgL_cdrzd23511zd2_522);
																								if (STRINGP
																									(BgL_carzd23519zd2_524))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd23520zd2_525))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd23526zd2_528;
																												BgL_carzd23526zd2_528 =
																													CAR
																													(BgL_cdrzd23520zd2_525);
																												if (SYMBOLP
																													(BgL_carzd23526zd2_528))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd23520zd2_525)))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_idz00_1489;
																																obj_t
																																	BgL_namez00_1490;
																																obj_t
																																	BgL_classz00_1491;
																																BgL_idz00_1489 =
																																	BgL_carzd23510zd2_521;
																																BgL_namez00_1490
																																	=
																																	BgL_carzd23519zd2_524;
																																BgL_classz00_1491
																																	=
																																	BgL_carzd23526zd2_528;
																																{	/* Module/type.scm 58 */
																																	BgL_typez00_bglt
																																		BgL_typez00_1492;
																																	BgL_typez00_1492
																																		=
																																		BGl_declarezd2typez12zc0zztype_envz00
																																		(BgL_idz00_1489,
																																		BgL_namez00_1490,
																																		BgL_classz00_1491);
																																	((((BgL_typez00_bglt) CREF(BgL_typez00_1492))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																																	return
																																		(obj_t)
																																		(BgL_typez00_1492);
																																}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						if (
																							(CAR(BgL_clausez00_24) ==
																								CNST_TABLE_REF(((long) 4))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd23691zd2_534;

																								obj_t BgL_cdrzd23692zd2_535;

																								BgL_carzd23691zd2_534 =
																									CAR(BgL_cdrzd21676zd2_250);
																								BgL_cdrzd23692zd2_535 =
																									CDR(BgL_cdrzd21676zd2_250);
																								if (SYMBOLP
																									(BgL_carzd23691zd2_534))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd23701zd2_537;

																										obj_t BgL_cdrzd23702zd2_538;

																										BgL_carzd23701zd2_537 =
																											CAR
																											(BgL_cdrzd23692zd2_535);
																										BgL_cdrzd23702zd2_538 =
																											CDR
																											(BgL_cdrzd23692zd2_535);
																										if (STRINGP
																											(BgL_carzd23701zd2_537))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd23702zd2_538))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_carzd23708zd2_541;
																														BgL_carzd23708zd2_541
																															=
																															CAR
																															(BgL_cdrzd23702zd2_538);
																														if (PAIRP
																															(BgL_carzd23708zd2_541))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd23702zd2_538)))
																																	{
																																		obj_t
																																			BgL_parentz00_2577;
																																		obj_t
																																			BgL_namez00_2576;
																																		obj_t
																																			BgL_childz00_2575;
																																		BgL_childz00_2575
																																			=
																																			BgL_carzd23691zd2_534;
																																		BgL_namez00_2576
																																			=
																																			BgL_carzd23701zd2_537;
																																		BgL_parentz00_2577
																																			=
																																			BgL_carzd23708zd2_541;
																																		BgL_parentz00_236
																																			=
																																			BgL_parentz00_2577;
																																		BgL_namez00_235
																																			=
																																			BgL_namez00_2576;
																																		BgL_childz00_234
																																			=
																																			BgL_childz00_2575;
																																		goto
																																			BgL_tagzd21658zd2_237;
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								obj_t BgL_cdrzd23812zd2_545;

																								BgL_cdrzd23812zd2_545 =
																									CDR(BgL_clausez00_24);
																								if (
																									(CAR(BgL_clausez00_24) ==
																										CNST_TABLE_REF(((long) 5))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd23819zd2_547;

																										obj_t BgL_cdrzd23820zd2_548;

																										BgL_carzd23819zd2_547 =
																											CAR
																											(BgL_cdrzd23812zd2_545);
																										BgL_cdrzd23820zd2_548 =
																											CDR
																											(BgL_cdrzd23812zd2_545);
																										if (SYMBOLP
																											(BgL_carzd23819zd2_547))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd23830zd2_550;
																												obj_t
																													BgL_cdrzd23831zd2_551;
																												BgL_carzd23830zd2_550 =
																													CAR
																													(BgL_cdrzd23820zd2_548);
																												BgL_cdrzd23831zd2_551 =
																													CDR
																													(BgL_cdrzd23820zd2_548);
																												if (SYMBOLP
																													(BgL_carzd23830zd2_550))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd23831zd2_551))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_cdrzd23840zd2_554;
																																BgL_cdrzd23840zd2_554
																																	=
																																	CDR
																																	(BgL_cdrzd23831zd2_551);
																																if (PAIRP
																																	(BgL_cdrzd23840zd2_554))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd23840zd2_554)))
																																			{
																																				obj_t
																																					BgL_coercez00_2603;
																																				obj_t
																																					BgL_checkz00_2601;
																																				obj_t
																																					BgL_toz00_2600;
																																				obj_t
																																					BgL_fromz00_2599;
																																				BgL_fromz00_2599
																																					=
																																					BgL_carzd23819zd2_547;
																																				BgL_toz00_2600
																																					=
																																					BgL_carzd23830zd2_550;
																																				BgL_checkz00_2601
																																					=
																																					CAR
																																					(BgL_cdrzd23831zd2_551);
																																				BgL_coercez00_2603
																																					=
																																					CAR
																																					(BgL_cdrzd23840zd2_554);
																																				BgL_coercez00_244
																																					=
																																					BgL_coercez00_2603;
																																				BgL_checkz00_243
																																					=
																																					BgL_checkz00_2601;
																																				BgL_toz00_242
																																					=
																																					BgL_toz00_2600;
																																				BgL_fromz00_241
																																					=
																																					BgL_fromz00_2599;
																																				goto
																																					BgL_tagzd21660zd2_245;
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																					}
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		if (
																			(CAR(BgL_clausez00_24) ==
																				CNST_TABLE_REF(((long) 3))))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd23868zd2_569;

																				obj_t BgL_cdrzd23869zd2_570;

																				BgL_carzd23868zd2_569 =
																					CAR(BgL_cdrzd21676zd2_250);
																				BgL_cdrzd23869zd2_570 =
																					CDR(BgL_cdrzd21676zd2_250);
																				if (SYMBOLP(BgL_carzd23868zd2_569))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd23877zd2_572;

																						obj_t BgL_cdrzd23878zd2_573;

																						BgL_carzd23877zd2_572 =
																							CAR(BgL_cdrzd23869zd2_570);
																						BgL_cdrzd23878zd2_573 =
																							CDR(BgL_cdrzd23869zd2_570);
																						if (STRINGP(BgL_carzd23877zd2_572))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd23878zd2_573))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd23884zd2_576;

																										BgL_carzd23884zd2_576 =
																											CAR
																											(BgL_cdrzd23878zd2_573);
																										if (SYMBOLP
																											(BgL_carzd23884zd2_576))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd23878zd2_573)))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_idz00_1536;
																														obj_t
																															BgL_namez00_1537;
																														obj_t
																															BgL_classz00_1538;
																														BgL_idz00_1536 =
																															BgL_carzd23868zd2_569;
																														BgL_namez00_1537 =
																															BgL_carzd23877zd2_572;
																														BgL_classz00_1538 =
																															BgL_carzd23884zd2_576;
																														{	/* Module/type.scm 58 */
																															BgL_typez00_bglt
																																BgL_typez00_1539;
																															BgL_typez00_1539 =
																																BGl_declarezd2typez12zc0zztype_envz00
																																(BgL_idz00_1536,
																																BgL_namez00_1537,
																																BgL_classz00_1538);
																															((((BgL_typez00_bglt) CREF(BgL_typez00_1539))->BgL_magiczf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																															return
																																(obj_t)
																																(BgL_typez00_1539);
																														}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_24) ==
																						CNST_TABLE_REF(((long) 4))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd24049zd2_582;

																						obj_t BgL_cdrzd24050zd2_583;

																						BgL_carzd24049zd2_582 =
																							CAR(BgL_cdrzd21676zd2_250);
																						BgL_cdrzd24050zd2_583 =
																							CDR(BgL_cdrzd21676zd2_250);
																						if (SYMBOLP(BgL_carzd24049zd2_582))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd24059zd2_585;

																								obj_t BgL_cdrzd24060zd2_586;

																								BgL_carzd24059zd2_585 =
																									CAR(BgL_cdrzd24050zd2_583);
																								BgL_cdrzd24060zd2_586 =
																									CDR(BgL_cdrzd24050zd2_583);
																								if (STRINGP
																									(BgL_carzd24059zd2_585))
																									{	/* Module/type.scm 58 */
																										if (PAIRP
																											(BgL_cdrzd24060zd2_586))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd24066zd2_589;
																												BgL_carzd24066zd2_589 =
																													CAR
																													(BgL_cdrzd24060zd2_586);
																												if (PAIRP
																													(BgL_carzd24066zd2_589))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd24060zd2_586)))
																															{
																																obj_t
																																	BgL_parentz00_2650;
																																obj_t
																																	BgL_namez00_2649;
																																obj_t
																																	BgL_childz00_2648;
																																BgL_childz00_2648
																																	=
																																	BgL_carzd24049zd2_582;
																																BgL_namez00_2649
																																	=
																																	BgL_carzd24059zd2_585;
																																BgL_parentz00_2650
																																	=
																																	BgL_carzd24066zd2_589;
																																BgL_parentz00_236
																																	=
																																	BgL_parentz00_2650;
																																BgL_namez00_235
																																	=
																																	BgL_namez00_2649;
																																BgL_childz00_234
																																	=
																																	BgL_childz00_2648;
																																goto
																																	BgL_tagzd21658zd2_237;
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						obj_t BgL_cdrzd24160zd2_593;

																						BgL_cdrzd24160zd2_593 =
																							CDR(BgL_clausez00_24);
																						if (
																							(CAR(BgL_clausez00_24) ==
																								CNST_TABLE_REF(((long) 6))))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd24164zd2_595;

																								obj_t BgL_cdrzd24165zd2_596;

																								BgL_carzd24164zd2_595 =
																									CAR(BgL_cdrzd24160zd2_593);
																								BgL_cdrzd24165zd2_596 =
																									CDR(BgL_cdrzd24160zd2_593);
																								if (SYMBOLP
																									(BgL_carzd24164zd2_595))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd24172zd2_598;

																										BgL_carzd24172zd2_598 =
																											CAR
																											(BgL_cdrzd24165zd2_596);
																										if (PAIRP
																											(BgL_carzd24172zd2_598))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd24175zd2_600;
																												BgL_carzd24175zd2_600 =
																													CAR
																													(BgL_carzd24172zd2_598);
																												if (SYMBOLP
																													(BgL_carzd24175zd2_600))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_carzd24172zd2_598)))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd24165zd2_596)))
																																	{	/* Module/type.scm 58 */
																																		return
																																			BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																			(BgL_carzd24164zd2_595,
																																			BgL_carzd24175zd2_600,
																																			BgL_clausez00_24);
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								if (
																									(CAR(BgL_clausez00_24) ==
																										CNST_TABLE_REF(((long) 5))))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd24238zd2_608;

																										obj_t BgL_cdrzd24239zd2_609;

																										BgL_carzd24238zd2_608 =
																											CAR
																											(BgL_cdrzd24160zd2_593);
																										BgL_cdrzd24239zd2_609 =
																											CDR
																											(BgL_cdrzd24160zd2_593);
																										if (SYMBOLP
																											(BgL_carzd24238zd2_608))
																											{	/* Module/type.scm 58 */
																												obj_t
																													BgL_carzd24249zd2_611;
																												obj_t
																													BgL_cdrzd24250zd2_612;
																												BgL_carzd24249zd2_611 =
																													CAR
																													(BgL_cdrzd24239zd2_609);
																												BgL_cdrzd24250zd2_612 =
																													CDR
																													(BgL_cdrzd24239zd2_609);
																												if (SYMBOLP
																													(BgL_carzd24249zd2_611))
																													{	/* Module/type.scm 58 */
																														if (PAIRP
																															(BgL_cdrzd24250zd2_612))
																															{	/* Module/type.scm 58 */
																																obj_t
																																	BgL_cdrzd24259zd2_615;
																																BgL_cdrzd24259zd2_615
																																	=
																																	CDR
																																	(BgL_cdrzd24250zd2_612);
																																if (PAIRP
																																	(BgL_cdrzd24259zd2_615))
																																	{	/* Module/type.scm 58 */
																																		if (NULLP
																																			(CDR
																																				(BgL_cdrzd24259zd2_615)))
																																			{
																																				obj_t
																																					BgL_coercez00_2697;
																																				obj_t
																																					BgL_checkz00_2695;
																																				obj_t
																																					BgL_toz00_2694;
																																				obj_t
																																					BgL_fromz00_2693;
																																				BgL_fromz00_2693
																																					=
																																					BgL_carzd24238zd2_608;
																																				BgL_toz00_2694
																																					=
																																					BgL_carzd24249zd2_611;
																																				BgL_checkz00_2695
																																					=
																																					CAR
																																					(BgL_cdrzd24250zd2_612);
																																				BgL_coercez00_2697
																																					=
																																					CAR
																																					(BgL_cdrzd24259zd2_615);
																																				BgL_coercez00_244
																																					=
																																					BgL_coercez00_2697;
																																				BgL_checkz00_243
																																					=
																																					BgL_checkz00_2695;
																																				BgL_toz00_242
																																					=
																																					BgL_toz00_2694;
																																				BgL_fromz00_241
																																					=
																																					BgL_fromz00_2693;
																																				goto
																																					BgL_tagzd21660zd2_245;
																																			}
																																		else
																																			{	/* Module/type.scm 58 */
																																				goto
																																					BgL_tagzd21661zd2_246;
																																			}
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																					}
																			}
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd21661zd2_246;
															}
													}
												else
													{	/* Module/type.scm 58 */
														if (
															(CAR(BgL_clausez00_24) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd24330zd2_631;

																obj_t BgL_cdrzd24331zd2_632;

																BgL_carzd24330zd2_631 =
																	CAR(BgL_cdrzd21676zd2_250);
																BgL_cdrzd24331zd2_632 =
																	CDR(BgL_cdrzd21676zd2_250);
																if (SYMBOLP(BgL_carzd24330zd2_631))
																	{	/* Module/type.scm 58 */
																		if (PAIRP(BgL_cdrzd24331zd2_632))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd24338zd2_635;

																				obj_t BgL_cdrzd24339zd2_636;

																				BgL_carzd24338zd2_635 =
																					CAR(BgL_cdrzd24331zd2_632);
																				BgL_cdrzd24339zd2_636 =
																					CDR(BgL_cdrzd24331zd2_632);
																				if (STRINGP(BgL_carzd24338zd2_635))
																					{	/* Module/type.scm 58 */
																						if (PAIRP(BgL_cdrzd24339zd2_636))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd24343zd2_639;

																								BgL_carzd24343zd2_639 =
																									CAR(BgL_cdrzd24339zd2_636);
																								if (SYMBOLP
																									(BgL_carzd24343zd2_639))
																									{	/* Module/type.scm 58 */
																										if (NULLP(CDR
																												(BgL_cdrzd24339zd2_636)))
																											{	/* Module/type.scm 58 */
																												obj_t BgL_idz00_1599;

																												obj_t BgL_namez00_1600;

																												obj_t BgL_classz00_1601;

																												BgL_idz00_1599 =
																													BgL_carzd24330zd2_631;
																												BgL_namez00_1600 =
																													BgL_carzd24338zd2_635;
																												BgL_classz00_1601 =
																													BgL_carzd24343zd2_639;
																												{	/* Module/type.scm 58 */
																													BgL_typez00_bglt
																														BgL_typez00_1602;
																													BgL_typez00_1602 =
																														BGl_declarezd2typez12zc0zztype_envz00
																														(BgL_idz00_1599,
																														BgL_namez00_1600,
																														BgL_classz00_1601);
																													((((BgL_typez00_bglt)
																																CREF
																																(BgL_typez00_1602))->
																															BgL_magiczf3zf3) =
																														((bool_t) ((bool_t)
																																1)), BUNSPEC);
																													return (obj_t)
																														(BgL_typez00_1602);
																												}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd21661zd2_246;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																if (
																	(CAR(BgL_clausez00_24) ==
																		CNST_TABLE_REF(((long) 4))))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd24534zd2_645;

																		obj_t BgL_cdrzd24535zd2_646;

																		BgL_carzd24534zd2_645 =
																			CAR(BgL_cdrzd21676zd2_250);
																		BgL_cdrzd24535zd2_646 =
																			CDR(BgL_cdrzd21676zd2_250);
																		if (SYMBOLP(BgL_carzd24534zd2_645))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd24535zd2_646))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd24543zd2_649;

																						obj_t BgL_cdrzd24544zd2_650;

																						BgL_carzd24543zd2_649 =
																							CAR(BgL_cdrzd24535zd2_646);
																						BgL_cdrzd24544zd2_650 =
																							CDR(BgL_cdrzd24535zd2_646);
																						if (STRINGP(BgL_carzd24543zd2_649))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd24544zd2_650))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd24548zd2_653;

																										BgL_carzd24548zd2_653 =
																											CAR
																											(BgL_cdrzd24544zd2_650);
																										if (PAIRP
																											(BgL_carzd24548zd2_653))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd24544zd2_650)))
																													{
																														obj_t
																															BgL_parentz00_2748;
																														obj_t
																															BgL_namez00_2747;
																														obj_t
																															BgL_childz00_2746;
																														BgL_childz00_2746 =
																															BgL_carzd24534zd2_645;
																														BgL_namez00_2747 =
																															BgL_carzd24543zd2_649;
																														BgL_parentz00_2748 =
																															BgL_carzd24548zd2_653;
																														BgL_parentz00_236 =
																															BgL_parentz00_2748;
																														BgL_namez00_235 =
																															BgL_namez00_2747;
																														BgL_childz00_234 =
																															BgL_childz00_2746;
																														goto
																															BgL_tagzd21658zd2_237;
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		obj_t BgL_cdrzd24658zd2_657;

																		BgL_cdrzd24658zd2_657 =
																			CDR(BgL_clausez00_24);
																		if (
																			(CAR(BgL_clausez00_24) ==
																				CNST_TABLE_REF(((long) 6))))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd24662zd2_659;

																				obj_t BgL_cdrzd24663zd2_660;

																				BgL_carzd24662zd2_659 =
																					CAR(BgL_cdrzd24658zd2_657);
																				BgL_cdrzd24663zd2_660 =
																					CDR(BgL_cdrzd24658zd2_657);
																				if (SYMBOLP(BgL_carzd24662zd2_659))
																					{	/* Module/type.scm 58 */
																						if (PAIRP(BgL_cdrzd24663zd2_660))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_carzd24670zd2_663;

																								BgL_carzd24670zd2_663 =
																									CAR(BgL_cdrzd24663zd2_660);
																								if (PAIRP
																									(BgL_carzd24670zd2_663))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd24673zd2_665;

																										BgL_carzd24673zd2_665 =
																											CAR
																											(BgL_carzd24670zd2_663);
																										if (SYMBOLP
																											(BgL_carzd24673zd2_665))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_carzd24670zd2_663)))
																													{	/* Module/type.scm 58 */
																														if (NULLP(CDR
																																(BgL_cdrzd24663zd2_660)))
																															{	/* Module/type.scm 58 */
																																return
																																	BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																																	(BgL_carzd24662zd2_659,
																																	BgL_carzd24673zd2_665,
																																	BgL_clausez00_24);
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				if (
																					(CAR(BgL_clausez00_24) ==
																						CNST_TABLE_REF(((long) 5))))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd24742zd2_673;

																						obj_t BgL_cdrzd24743zd2_674;

																						BgL_carzd24742zd2_673 =
																							CAR(BgL_cdrzd24658zd2_657);
																						BgL_cdrzd24743zd2_674 =
																							CDR(BgL_cdrzd24658zd2_657);
																						if (SYMBOLP(BgL_carzd24742zd2_673))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd24743zd2_674))
																									{	/* Module/type.scm 58 */
																										obj_t BgL_carzd24752zd2_677;

																										obj_t BgL_cdrzd24753zd2_678;

																										BgL_carzd24752zd2_677 =
																											CAR
																											(BgL_cdrzd24743zd2_674);
																										BgL_cdrzd24753zd2_678 =
																											CDR
																											(BgL_cdrzd24743zd2_674);
																										if (SYMBOLP
																											(BgL_carzd24752zd2_677))
																											{	/* Module/type.scm 58 */
																												if (PAIRP
																													(BgL_cdrzd24753zd2_678))
																													{	/* Module/type.scm 58 */
																														obj_t
																															BgL_cdrzd24760zd2_681;
																														BgL_cdrzd24760zd2_681
																															=
																															CDR
																															(BgL_cdrzd24753zd2_678);
																														if (PAIRP
																															(BgL_cdrzd24760zd2_681))
																															{	/* Module/type.scm 58 */
																																if (NULLP(CDR
																																		(BgL_cdrzd24760zd2_681)))
																																	{
																																		obj_t
																																			BgL_coercez00_2799;
																																		obj_t
																																			BgL_checkz00_2797;
																																		obj_t
																																			BgL_toz00_2796;
																																		obj_t
																																			BgL_fromz00_2795;
																																		BgL_fromz00_2795
																																			=
																																			BgL_carzd24742zd2_673;
																																		BgL_toz00_2796
																																			=
																																			BgL_carzd24752zd2_677;
																																		BgL_checkz00_2797
																																			=
																																			CAR
																																			(BgL_cdrzd24753zd2_678);
																																		BgL_coercez00_2799
																																			=
																																			CAR
																																			(BgL_cdrzd24760zd2_681);
																																		BgL_coercez00_244
																																			=
																																			BgL_coercez00_2799;
																																		BgL_checkz00_243
																																			=
																																			BgL_checkz00_2797;
																																		BgL_toz00_242
																																			=
																																			BgL_toz00_2796;
																																		BgL_fromz00_241
																																			=
																																			BgL_fromz00_2795;
																																		goto
																																			BgL_tagzd21660zd2_245;
																																	}
																																else
																																	{	/* Module/type.scm 58 */
																																		goto
																																			BgL_tagzd21661zd2_246;
																																	}
																															}
																														else
																															{	/* Module/type.scm 58 */
																																goto
																																	BgL_tagzd21661zd2_246;
																															}
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																	}
															}
													}
											}
									}
								else
									{	/* Module/type.scm 58 */
										goto BgL_tagzd21661zd2_246;
									}
							}
						else
							{	/* Module/type.scm 58 */
								if ((CAR(BgL_clausez00_24) == CNST_TABLE_REF(((long) 3))))
									{	/* Module/type.scm 58 */
										if (PAIRP(BgL_cdrzd21676zd2_250))
											{	/* Module/type.scm 58 */
												obj_t BgL_carzd26645zd2_951;

												obj_t BgL_cdrzd26646zd2_952;

												BgL_carzd26645zd2_951 = CAR(BgL_cdrzd21676zd2_250);
												BgL_cdrzd26646zd2_952 = CDR(BgL_cdrzd21676zd2_250);
												if (SYMBOLP(BgL_carzd26645zd2_951))
													{	/* Module/type.scm 58 */
														if (PAIRP(BgL_cdrzd26646zd2_952))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd26651zd2_955;

																obj_t BgL_cdrzd26652zd2_956;

																BgL_carzd26651zd2_955 =
																	CAR(BgL_cdrzd26646zd2_952);
																BgL_cdrzd26652zd2_956 =
																	CDR(BgL_cdrzd26646zd2_952);
																if (STRINGP(BgL_carzd26651zd2_955))
																	{	/* Module/type.scm 58 */
																		if (PAIRP(BgL_cdrzd26652zd2_956))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd26656zd2_959;

																				BgL_carzd26656zd2_959 =
																					CAR(BgL_cdrzd26652zd2_956);
																				if (SYMBOLP(BgL_carzd26656zd2_959))
																					{	/* Module/type.scm 58 */
																						if (NULLP(CDR
																								(BgL_cdrzd26652zd2_956)))
																							{	/* Module/type.scm 58 */
																								obj_t BgL_idz00_1922;

																								obj_t BgL_namez00_1923;

																								obj_t BgL_classz00_1924;

																								BgL_idz00_1922 =
																									BgL_carzd26645zd2_951;
																								BgL_namez00_1923 =
																									BgL_carzd26651zd2_955;
																								BgL_classz00_1924 =
																									BgL_carzd26656zd2_959;
																								{	/* Module/type.scm 58 */
																									BgL_typez00_bglt
																										BgL_typez00_1925;
																									BgL_typez00_1925 =
																										BGl_declarezd2typez12zc0zztype_envz00
																										(BgL_idz00_1922,
																										BgL_namez00_1923,
																										BgL_classz00_1924);
																									((((BgL_typez00_bglt)
																												CREF
																												(BgL_typez00_1925))->
																											BgL_magiczf3zf3) =
																										((bool_t) ((bool_t) 1)),
																										BUNSPEC);
																									return (obj_t)
																										(BgL_typez00_1925);
																								}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd21661zd2_246;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd21661zd2_246;
															}
													}
												else
													{	/* Module/type.scm 58 */
														goto BgL_tagzd21661zd2_246;
													}
											}
										else
											{	/* Module/type.scm 58 */
												goto BgL_tagzd21661zd2_246;
											}
									}
								else
									{	/* Module/type.scm 58 */
										if ((CAR(BgL_clausez00_24) == CNST_TABLE_REF(((long) 4))))
											{	/* Module/type.scm 58 */
												if (PAIRP(BgL_cdrzd21676zd2_250))
													{	/* Module/type.scm 58 */
														obj_t BgL_carzd26873zd2_966;

														obj_t BgL_cdrzd26874zd2_967;

														BgL_carzd26873zd2_966 = CAR(BgL_cdrzd21676zd2_250);
														BgL_cdrzd26874zd2_967 = CDR(BgL_cdrzd21676zd2_250);
														if (SYMBOLP(BgL_carzd26873zd2_966))
															{	/* Module/type.scm 58 */
																if (PAIRP(BgL_cdrzd26874zd2_967))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd26880zd2_970;

																		obj_t BgL_cdrzd26881zd2_971;

																		BgL_carzd26880zd2_970 =
																			CAR(BgL_cdrzd26874zd2_967);
																		BgL_cdrzd26881zd2_971 =
																			CDR(BgL_cdrzd26874zd2_967);
																		if (STRINGP(BgL_carzd26880zd2_970))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd26881zd2_971))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd26885zd2_974;

																						BgL_carzd26885zd2_974 =
																							CAR(BgL_cdrzd26881zd2_971);
																						if (PAIRP(BgL_carzd26885zd2_974))
																							{	/* Module/type.scm 58 */
																								if (NULLP(CDR
																										(BgL_cdrzd26881zd2_971)))
																									{
																										obj_t BgL_parentz00_2854;

																										obj_t BgL_namez00_2853;

																										obj_t BgL_childz00_2852;

																										BgL_childz00_2852 =
																											BgL_carzd26873zd2_966;
																										BgL_namez00_2853 =
																											BgL_carzd26880zd2_970;
																										BgL_parentz00_2854 =
																											BgL_carzd26885zd2_974;
																										BgL_parentz00_236 =
																											BgL_parentz00_2854;
																										BgL_namez00_235 =
																											BgL_namez00_2853;
																										BgL_childz00_234 =
																											BgL_childz00_2852;
																										goto BgL_tagzd21658zd2_237;
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd21661zd2_246;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd21661zd2_246;
															}
													}
												else
													{	/* Module/type.scm 58 */
														goto BgL_tagzd21661zd2_246;
													}
											}
										else
											{	/* Module/type.scm 58 */
												obj_t BgL_cdrzd27010zd2_978;

												BgL_cdrzd27010zd2_978 = CDR(BgL_clausez00_24);
												if (
													(CAR(BgL_clausez00_24) == CNST_TABLE_REF(((long) 6))))
													{	/* Module/type.scm 58 */
														if (PAIRP(BgL_cdrzd27010zd2_978))
															{	/* Module/type.scm 58 */
																obj_t BgL_carzd27013zd2_981;

																obj_t BgL_cdrzd27014zd2_982;

																BgL_carzd27013zd2_981 =
																	CAR(BgL_cdrzd27010zd2_978);
																BgL_cdrzd27014zd2_982 =
																	CDR(BgL_cdrzd27010zd2_978);
																if (SYMBOLP(BgL_carzd27013zd2_981))
																	{	/* Module/type.scm 58 */
																		if (PAIRP(BgL_cdrzd27014zd2_982))
																			{	/* Module/type.scm 58 */
																				obj_t BgL_carzd27019zd2_985;

																				BgL_carzd27019zd2_985 =
																					CAR(BgL_cdrzd27014zd2_982);
																				if (PAIRP(BgL_carzd27019zd2_985))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd27022zd2_987;

																						BgL_carzd27022zd2_987 =
																							CAR(BgL_carzd27019zd2_985);
																						if (SYMBOLP(BgL_carzd27022zd2_987))
																							{	/* Module/type.scm 58 */
																								if (NULLP(CDR
																										(BgL_carzd27019zd2_985)))
																									{	/* Module/type.scm 58 */
																										if (NULLP(CDR
																												(BgL_cdrzd27014zd2_982)))
																											{	/* Module/type.scm 58 */
																												return
																													BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00
																													(BgL_carzd27013zd2_981,
																													BgL_carzd27022zd2_987,
																													BgL_clausez00_24);
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd21661zd2_246;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd21661zd2_246;
															}
													}
												else
													{	/* Module/type.scm 58 */
														if (
															(CAR(BgL_clausez00_24) ==
																CNST_TABLE_REF(((long) 5))))
															{	/* Module/type.scm 58 */
																if (PAIRP(BgL_cdrzd27010zd2_978))
																	{	/* Module/type.scm 58 */
																		obj_t BgL_carzd27097zd2_996;

																		obj_t BgL_cdrzd27098zd2_997;

																		BgL_carzd27097zd2_996 =
																			CAR(BgL_cdrzd27010zd2_978);
																		BgL_cdrzd27098zd2_997 =
																			CDR(BgL_cdrzd27010zd2_978);
																		if (SYMBOLP(BgL_carzd27097zd2_996))
																			{	/* Module/type.scm 58 */
																				if (PAIRP(BgL_cdrzd27098zd2_997))
																					{	/* Module/type.scm 58 */
																						obj_t BgL_carzd27105zd2_1000;

																						obj_t BgL_cdrzd27106zd2_1001;

																						BgL_carzd27105zd2_1000 =
																							CAR(BgL_cdrzd27098zd2_997);
																						BgL_cdrzd27106zd2_1001 =
																							CDR(BgL_cdrzd27098zd2_997);
																						if (SYMBOLP(BgL_carzd27105zd2_1000))
																							{	/* Module/type.scm 58 */
																								if (PAIRP
																									(BgL_cdrzd27106zd2_1001))
																									{	/* Module/type.scm 58 */
																										obj_t
																											BgL_cdrzd27113zd2_1004;
																										BgL_cdrzd27113zd2_1004 =
																											CDR
																											(BgL_cdrzd27106zd2_1001);
																										if (PAIRP
																											(BgL_cdrzd27113zd2_1004))
																											{	/* Module/type.scm 58 */
																												if (NULLP(CDR
																														(BgL_cdrzd27113zd2_1004)))
																													{
																														obj_t
																															BgL_coercez00_2909;
																														obj_t
																															BgL_checkz00_2907;
																														obj_t
																															BgL_toz00_2906;
																														obj_t
																															BgL_fromz00_2905;
																														BgL_fromz00_2905 =
																															BgL_carzd27097zd2_996;
																														BgL_toz00_2906 =
																															BgL_carzd27105zd2_1000;
																														BgL_checkz00_2907 =
																															CAR
																															(BgL_cdrzd27106zd2_1001);
																														BgL_coercez00_2909 =
																															CAR
																															(BgL_cdrzd27113zd2_1004);
																														BgL_coercez00_244 =
																															BgL_coercez00_2909;
																														BgL_checkz00_243 =
																															BgL_checkz00_2907;
																														BgL_toz00_242 =
																															BgL_toz00_2906;
																														BgL_fromz00_241 =
																															BgL_fromz00_2905;
																														goto
																															BgL_tagzd21660zd2_245;
																													}
																												else
																													{	/* Module/type.scm 58 */
																														goto
																															BgL_tagzd21661zd2_246;
																													}
																											}
																										else
																											{	/* Module/type.scm 58 */
																												goto
																													BgL_tagzd21661zd2_246;
																											}
																									}
																								else
																									{	/* Module/type.scm 58 */
																										goto BgL_tagzd21661zd2_246;
																									}
																							}
																						else
																							{	/* Module/type.scm 58 */
																								goto BgL_tagzd21661zd2_246;
																							}
																					}
																				else
																					{	/* Module/type.scm 58 */
																						goto BgL_tagzd21661zd2_246;
																					}
																			}
																		else
																			{	/* Module/type.scm 58 */
																				goto BgL_tagzd21661zd2_246;
																			}
																	}
																else
																	{	/* Module/type.scm 58 */
																		goto BgL_tagzd21661zd2_246;
																	}
															}
														else
															{	/* Module/type.scm 58 */
																goto BgL_tagzd21661zd2_246;
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/type.scm 58 */
						goto BgL_tagzd21661zd2_246;
					}
			}
		}
	}



/* module-tvector-clause */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t
		BgL_idz00_26, obj_t BgL_itemzd2typezd2_27, obj_t BgL_clausez00_28)
	{
		AN_OBJECT;
		{	/* Module/type.scm 133 */
			{	/* Module/type.scm 134 */
				BgL_tvecz00_bglt BgL_arg2608z00_2007;

				BgL_arg2608z00_2007 =
					BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(BgL_idz00_26,
					BgL_itemzd2typezd2_27, BgL_clausez00_28);
				return
					BGl_delayzd2tvectorz12zc0zzmodule_typez00((obj_t)
					(BgL_arg2608z00_2007), BgL_clausez00_28);
			}
		}
	}



/* _module-tvector-clause */
	obj_t BGl__modulezd2tvectorzd2clausez00zzmodule_typez00(obj_t BgL_envz00_2076,
		obj_t BgL_idz00_2077, obj_t BgL_itemzd2typezd2_2078,
		obj_t BgL_clausez00_2079)
	{
		AN_OBJECT;
		{	/* Module/type.scm 133 */
			return
				BGl_modulezd2tvectorzd2clausez00zzmodule_typez00(BgL_idz00_2077,
				BgL_itemzd2typezd2_2078, BgL_clausez00_2079);
		}
	}



/* type-finalizer */
	obj_t BGl_typezd2finaliza7erz75zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 142 */
			{	/* Module/type.scm 143 */
				obj_t BgL_tvfz00_1082;

				BgL_tvfz00_1082 = BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
				{	/* Module/type.scm 144 */
					bool_t BgL_testz00_2916;

					if (STRUCTP(BgL_tvfz00_1082))
						{	/* Module/type.scm 144 */
							BgL_testz00_2916 =
								(STRUCT_KEY(BgL_tvfz00_1082) == CNST_TABLE_REF(((long) 7)));
						}
					else
						{	/* Module/type.scm 144 */
							BgL_testz00_2916 = ((bool_t) 0);
						}
					if (BgL_testz00_2916)
						{	/* Module/type.scm 145 */
							obj_t BgL_list2610z00_1084;

							BgL_list2610z00_1084 = MAKE_PAIR(BgL_tvfz00_1082, BNIL);
							return BgL_list2610z00_1084;
						}
					else
						{	/* Module/type.scm 144 */
							return CNST_TABLE_REF(((long) 8));
		}}}}
	}



/* _type-finalizer */
	obj_t BGl__typezd2finaliza7erz75zzmodule_typez00(obj_t BgL_envz00_2075)
	{
		AN_OBJECT;
		{	/* Module/type.scm 142 */
			return BGl_typezd2finaliza7erz75zzmodule_typez00();
		}
	}



/* delay-tvector-type! */
	obj_t BGl_delayzd2tvectorzd2typez12z12zzmodule_typez00(obj_t BgL_idz00_29,
		obj_t BgL_itemzd2typezd2_30, obj_t BgL_clausez00_31)
	{
		AN_OBJECT;
		{	/* Module/type.scm 156 */
			{	/* Module/type.scm 157 */
				obj_t BgL_arg2615z00_1085;

				{	/* Module/type.scm 157 */
					obj_t BgL_list2616z00_1086;

					{	/* Module/type.scm 157 */
						obj_t BgL_arg2621z00_1087;

						{	/* Module/type.scm 157 */
							obj_t BgL_arg2628z00_1088;

							BgL_arg2628z00_1088 = MAKE_PAIR(BgL_clausez00_31, BNIL);
							BgL_arg2621z00_1087 =
								MAKE_PAIR(BgL_itemzd2typezd2_30, BgL_arg2628z00_1088);
						}
						BgL_list2616z00_1086 = MAKE_PAIR(BgL_idz00_29, BgL_arg2621z00_1087);
					}
					BgL_arg2615z00_1085 = BgL_list2616z00_1086;
				}
				return (BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 =
					MAKE_PAIR(BgL_arg2615z00_1085,
						BGl_za2tvectorzd2typesza2zd2zzmodule_typez00), BUNSPEC);
			}
		}
	}



/* delay-tvector! */
	BGL_EXPORTED_DEF obj_t BGl_delayzd2tvectorz12zc0zzmodule_typez00(obj_t
		BgL_tvz00_32, obj_t BgL_clausez00_33)
	{
		AN_OBJECT;
		{	/* Module/type.scm 167 */
			{	/* Module/type.scm 168 */
				obj_t BgL_arg2629z00_1089;

				{	/* Module/type.scm 168 */
					obj_t BgL_list2630z00_1090;

					{	/* Module/type.scm 168 */
						obj_t BgL_arg2642z00_1091;

						BgL_arg2642z00_1091 = MAKE_PAIR(BgL_clausez00_33, BNIL);
						BgL_list2630z00_1090 = MAKE_PAIR(BgL_tvz00_32, BgL_arg2642z00_1091);
					}
					BgL_arg2629z00_1089 = BgL_list2630z00_1090;
				}
				BGl_za2tvectorsza2z00zzmodule_typez00 =
					MAKE_PAIR(BgL_arg2629z00_1089, BGl_za2tvectorsza2z00zzmodule_typez00);
			}
			return BgL_tvz00_32;
		}
	}



/* _delay-tvector! */
	obj_t BGl__delayzd2tvectorz12zc0zzmodule_typez00(obj_t BgL_envz00_2080,
		obj_t BgL_tvz00_2081, obj_t BgL_clausez00_2082)
	{
		AN_OBJECT;
		{	/* Module/type.scm 167 */
			return
				BGl_delayzd2tvectorz12zc0zzmodule_typez00(BgL_tvz00_2081,
				BgL_clausez00_2082);
		}
	}



/* tvector-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_tvectorzd2finaliza7erz75zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 174 */
			{
				obj_t BgL_l1695z00_1093;

				BgL_l1695z00_1093 = BGl_za2tvectorzd2typesza2zd2zzmodule_typez00;
			BgL_zc3anonymousza32643ze3z83_1094:
				if (PAIRP(BgL_l1695z00_1093))
					{	/* Module/type.scm 176 */
						{	/* Module/type.scm 176 */
							obj_t BgL_tz00_1096;

							BgL_tz00_1096 = CAR(BgL_l1695z00_1093);
							{	/* Module/type.scm 176 */
								obj_t BgL_runner2648z00_1100;

								BgL_runner2648z00_1100 = BgL_tz00_1096;
								{	/* Module/type.scm 176 */
									obj_t BgL_aux2645z00_1097;

									BgL_aux2645z00_1097 = CAR(BgL_runner2648z00_1100);
									BgL_runner2648z00_1100 = CDR(BgL_runner2648z00_1100);
									{	/* Module/type.scm 176 */
										obj_t BgL_aux2646z00_1098;

										BgL_aux2646z00_1098 = CAR(BgL_runner2648z00_1100);
										BgL_runner2648z00_1100 = CDR(BgL_runner2648z00_1100);
										{	/* Module/type.scm 176 */
											obj_t BgL_aux2647z00_1099;

											BgL_aux2647z00_1099 = CAR(BgL_runner2648z00_1100);
											{	/* Module/type.scm 176 */
												BgL_tvecz00_bglt BgL_arg2608z00_2031;

												BgL_arg2608z00_2031 =
													BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00
													(BgL_aux2645z00_1097, BgL_aux2646z00_1098,
													BgL_aux2647z00_1099);
												BGl_delayzd2tvectorz12zc0zzmodule_typez00((obj_t)
													(BgL_arg2608z00_2031), BgL_aux2647z00_1099);
											}
										}
									}
								}
							}
						}
						{
							obj_t BgL_l1695z00_2944;

							BgL_l1695z00_2944 = CDR(BgL_l1695z00_1093);
							BgL_l1695z00_1093 = BgL_l1695z00_2944;
							goto BgL_zc3anonymousza32643ze3z83_1094;
						}
					}
				else
					{	/* Module/type.scm 176 */
						((bool_t) 1);
					}
			}
			BGl_za2tvectorzd2typesza2zd2zzmodule_typez00 = BNIL;
			if (NULLP(BGl_za2tvectorsza2z00zzmodule_typez00))
				{	/* Module/type.scm 179 */
					return CNST_TABLE_REF(((long) 8));
				}
			else
				{	/* Module/type.scm 181 */
					obj_t BgL_accessesz00_1104;

					{	/* Module/type.scm 181 */
						obj_t BgL_list2658z00_1110;

						BgL_list2658z00_1110 =
							MAKE_PAIR(BGl_za2tvectorsza2z00zzmodule_typez00, BNIL);
						BgL_accessesz00_1104 =
							BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
							(BGl_proc2683z00zzmodule_typez00, BgL_list2658z00_1110);
					}
					{	/* Module/type.scm 184 */
						obj_t BgL_resz00_1105;

						{	/* Module/type.scm 184 */
							obj_t BgL_arg2652z00_1106;

							obj_t BgL_arg2656z00_1108;

							BgL_arg2652z00_1106 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 6)));
							BgL_arg2656z00_1108 = bgl_reverse_bang(BgL_accessesz00_1104);
							{	/* Module/type.scm 184 */
								obj_t BgL_newz00_2042;

								BgL_newz00_2042 =
									create_struct(CNST_TABLE_REF(((long) 7)), (int) (((long) 5)));
								{	/* Module/type.scm 184 */
									int BgL_auxz00_2957;

									BgL_auxz00_2957 = (int) (((long) 4));
									STRUCT_SET(BgL_newz00_2042, BgL_auxz00_2957, BFALSE);
								}
								{	/* Module/type.scm 184 */
									int BgL_auxz00_2960;

									BgL_auxz00_2960 = (int) (((long) 3));
									STRUCT_SET(BgL_newz00_2042, BgL_auxz00_2960, BTRUE);
								}
								{	/* Module/type.scm 184 */
									int BgL_auxz00_2963;

									BgL_auxz00_2963 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_2042, BgL_auxz00_2963,
										BgL_arg2656z00_1108);
								}
								{	/* Module/type.scm 184 */
									obj_t BgL_auxz00_2968;

									int BgL_auxz00_2966;

									BgL_auxz00_2968 = BINT(((long) 6));
									BgL_auxz00_2966 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2042, BgL_auxz00_2966, BgL_auxz00_2968);
								}
								{	/* Module/type.scm 184 */
									int BgL_auxz00_2971;

									BgL_auxz00_2971 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2042, BgL_auxz00_2971,
										BgL_arg2652z00_1106);
								}
								BgL_resz00_1105 = BgL_newz00_2042;
						}}
						BGl_za2tvectorsza2z00zzmodule_typez00 = BNIL;
						return BgL_resz00_1105;
					}
				}
		}
	}



/* _tvector-finalizer */
	obj_t BGl__tvectorzd2finaliza7erz75zzmodule_typez00(obj_t BgL_envz00_2084)
	{
		AN_OBJECT;
		{	/* Module/type.scm 174 */
			return BGl_tvectorzd2finaliza7erz75zzmodule_typez00();
		}
	}



/* <anonymous:2659> */
	obj_t BGl_zc3anonymousza32659ze3z83zzmodule_typez00(obj_t BgL_envz00_2085,
		obj_t BgL_tvz00_2086)
	{
		AN_OBJECT;
		{	/* Module/type.scm 181 */
			{
				obj_t BgL_tvz00_1111;

				BgL_tvz00_1111 = BgL_tvz00_2086;
				{	/* Module/type.scm 182 */
					obj_t BgL_runner2662z00_1115;

					BgL_runner2662z00_1115 = BgL_tvz00_1111;
					{	/* Module/type.scm 182 */
						BgL_tvecz00_bglt BgL_aux2660z00_1113;

						{	/* Module/type.scm 182 */
							obj_t BgL_pairz00_2034;

							BgL_pairz00_2034 = BgL_runner2662z00_1115;
							BgL_aux2660z00_1113 = (BgL_tvecz00_bglt) (CAR(BgL_pairz00_2034));
						}
						BgL_runner2662z00_1115 = CDR(BgL_runner2662z00_1115);
						return
							BGl_makezd2tvectorzd2accessesz00zztvector_accessz00
							(BgL_aux2660z00_1113, CAR(BgL_runner2662z00_1115));
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_typez00()
	{
		AN_OBJECT;
		{	/* Module/type.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 451733024),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztvector_accessz00(((long) 457342318),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2684z00zzmodule_typez00));
		}
	}

#ifdef __cplusplus
}
#endif
