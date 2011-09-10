/*===========================================================================*/
/*   (Foreign/jtype.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/jtype.scm)*/
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

	typedef struct BgL_jarrayz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_jarrayz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_jarrayz00_bglt
		BGl_fillzd2jarrayz12zc0zzforeign_jtypez00(BgL_jarrayz00_bglt,
		BgL_typez00_bglt);
	extern BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, int);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_z52allocatezd2jarrayz80zzforeign_jtypez00();
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2219z83zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_jtypez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_jarrayz00zzforeign_jtypez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzforeign_jtypez00();
	static obj_t BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jarrayz00_bglt
		BGl_wideningzd2jarrayzd2zzforeign_jtypez00(BgL_typez00_bglt);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_jtypez00();
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	BGL_EXPORTED_DECL bool_t BGl_jarrayzf3zf3zzforeign_jtypez00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_jtypez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__wideningzd2jarrayzd2zzforeign_jtypez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_makezd2ctypezd2accessesz122215z12zzforeign_jtypez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl__jarrayzd2nilzd2zzforeign_jtypez00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_jtypez00();
	static obj_t BGl__z52allocatezd2jarrayz80zzforeign_jtypez00(obj_t);
	extern obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jarrayz00_bglt
		BGl_makezd2jarrayzd2zzforeign_jtypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__jarrayzf3zf3zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2jarra2217ze3zzforeign_jtypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_jarrayz00_bglt BGl_jarrayzd2nilzd2zzforeign_jtypez00();
	static obj_t BGl_objectzd2initzd2zzforeign_jtypez00();
	static obj_t BGl__makezd2jarrayzd2zzforeign_jtypez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__fillzd2jarrayz12zc0zzforeign_jtypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_jtypez00();
	static obj_t BGl_methodzd2initzd2zzforeign_jtypez00();
	static obj_t __cnst[35];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jarrayzd2envz00zzforeign_jtypez00,
		BgL_bgl__makeza7d2jarrayza7d2894z00,
		BGl__makezd2jarrayzd2zzforeign_jtypez00, 0L, BUNSPEC, 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzf3zd2envz21zzforeign_jtypez00,
		BgL_bgl__jarrayza7f3za7f3za7za7f2895z00,
		BGl__jarrayzf3zf3zzforeign_jtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2881z00zzforeign_jtypez00,
		BgL_bgl_makeza7d2ctypeza7d2a2896z00,
		BGl_makezd2ctypezd2accessesz122215z12zzforeign_jtypez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2883z00zzforeign_jtypez00,
		BgL_bgl_objectza7d2za7e3stru2897z00,
		BGl_objectzd2ze3structzd2jarra2217ze3zzforeign_jtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2885z00zzforeign_jtypez00,
		BgL_bgl_structza7b2objectza72898z00,
		BGl_structzb2objectzd2ze3objec2219z83zzforeign_jtypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2nilzd2envz00zzforeign_jtypez00,
		BgL_bgl__jarrayza7d2nilza7d22899z00, BGl__jarrayzd2nilzd2zzforeign_jtypez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2882z00zzforeign_jtypez00,
		BgL_bgl_string2882za700za7za7f2900za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string2884z00zzforeign_jtypez00,
		BgL_bgl_string2884za700za7za7f2901za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2886z00zzforeign_jtypez00,
		BgL_bgl_string2886za700za7za7f2902za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string2887z00zzforeign_jtypez00,
		BgL_bgl_string2887za700za7za7f2903za7, "", 0);
	      DEFINE_STRING(BGl_string2888z00zzforeign_jtypez00,
		BgL_bgl_string2888za700za7za7f2904za7, "foreign_jtype", 13);
	      DEFINE_STRING(BGl_string2889z00zzforeign_jtypez00,
		BgL_bgl_string2889za700za7za7f2905za7,
		"::int ::obj inline static object cast isa o::obj vlength valloc len len::int vref vset! offset offset::int define-inline -set! -ref make- val int -length bool ->obj o _ jarray ? obj coerce type bigloo (obj) obj-> ",
		213);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2jarrayzd2envz00zzforeign_jtypez00,
		BgL_bgl__wideningza7d2jarr2906za7,
		BGl__wideningzd2jarrayzd2zzforeign_jtypez00, 0L, BUNSPEC, 1);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2jarrayz12zd2envz12zzforeign_jtypez00,
		BgL_bgl__fillza7d2jarrayza712907z00,
		BGl__fillzd2jarrayz12zc0zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2jvmzd2typez12zd2envzc0zzforeign_jtypez00,
		BgL_bgl__declareza7d2jvmza7d2908z00,
		BGl__declarezd2jvmzd2typez12z12zzforeign_jtypez00, 0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2jarrayzd2envz52zzforeign_jtypez00,
		BgL_bgl__za752allocateza7d2j2909z00,
		BGl__z52allocatezd2jarrayz80zzforeign_jtypez00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long
		BgL_checksumz00_910, char *BgL_fromz00_911)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_jtypez00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_jtypez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzforeign_jtypez00();
					BGl_cnstzd2initzd2zzforeign_jtypez00();
					BGl_importedzd2moduleszd2initz00zzforeign_jtypez00();
					BGl_objectzd2initzd2zzforeign_jtypez00();
					BGl_methodzd2initzd2zzforeign_jtypez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_jtype");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			{	/* Foreign/jtype.scm 17 */
				obj_t BgL_cportz00_891;

				BgL_cportz00_891 =
					bgl_open_input_string(BGl_string2889z00zzforeign_jtypez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_892;

					BgL_iz00_892 = ((long) 34);
				BgL_loopz00_893:
					if ((BgL_iz00_892 == ((long) -1)))
						{	/* Foreign/jtype.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/jtype.scm 17 */
							{	/* Foreign/jtype.scm 17 */
								obj_t BgL_arg2891z00_895;

								{	/* Foreign/jtype.scm 17 */

									{	/* Foreign/jtype.scm 17 */
										obj_t BgL_locationz00_897;

										BgL_locationz00_897 = BBOOL(((bool_t) 0));
										{	/* Foreign/jtype.scm 17 */

											BgL_arg2891z00_895 =
												BGl_readz00zz__readerz00(BgL_cportz00_891,
												BgL_locationz00_897);
										}
									}
								}
								{	/* Foreign/jtype.scm 17 */
									int BgL_auxz00_930;

									BgL_auxz00_930 = (int) (BgL_iz00_892);
									CNST_TABLE_SET(BgL_auxz00_930, BgL_arg2891z00_895);
							}}
							{	/* Foreign/jtype.scm 17 */
								int BgL_auxz00_898;

								BgL_auxz00_898 = (int) ((BgL_iz00_892 - ((long) 1)));
								{
									long BgL_iz00_935;

									BgL_iz00_935 = (long) (BgL_auxz00_898);
									BgL_iz00_892 = BgL_iz00_935;
									goto BgL_loopz00_893;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			return BUNSPEC;
		}
	}



/* declare-jvm-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t BgL_idz00_1,
		obj_t BgL_ofz00_2, obj_t BgL_srcz00_3)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 45 */
			{	/* Foreign/jtype.scm 47 */
				BgL_typez00_bglt BgL_pointedz00_236;

				BgL_pointedz00_236 =
					BGl_usezd2typez12zc0zztype_envz00(BgL_ofz00_2,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_3));
				{	/* Foreign/jtype.scm 47 */
					obj_t BgL_pointerz00_237;

					BgL_pointerz00_237 =
						(((BgL_typez00_bglt) CREF(BgL_pointedz00_236))->
						BgL_pointedzd2tozd2byz00);
					{	/* Foreign/jtype.scm 48 */
						obj_t BgL_namez00_238;

						{	/* Foreign/jtype.scm 49 */
							obj_t BgL_res2843z00_640;

							{	/* Foreign/jtype.scm 49 */
								obj_t BgL_arg2063z00_639;

								BgL_arg2063z00_639 = SYMBOL_TO_STRING(BgL_idz00_1);
								BgL_res2843z00_640 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_639);
							}
							BgL_namez00_238 = BgL_res2843z00_640;
						}
						{	/* Foreign/jtype.scm 49 */
							obj_t BgL_objzd2ze3idz31_239;

							{	/* Foreign/jtype.scm 50 */
								obj_t BgL_arg2370z00_279;

								{	/* Foreign/jtype.scm 50 */
									obj_t BgL_arg2377z00_280;

									obj_t BgL_arg2383z00_281;

									{	/* Foreign/jtype.scm 50 */
										obj_t BgL_res2844z00_643;

										{	/* Foreign/jtype.scm 50 */
											obj_t BgL_symbolz00_641;

											BgL_symbolz00_641 = CNST_TABLE_REF(((long) 0));
											{	/* Foreign/jtype.scm 50 */
												obj_t BgL_arg2063z00_642;

												BgL_arg2063z00_642 =
													SYMBOL_TO_STRING(BgL_symbolz00_641);
												BgL_res2844z00_643 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_642);
										}}
										BgL_arg2377z00_280 = BgL_res2844z00_643;
									}
									{	/* Foreign/jtype.scm 50 */
										obj_t BgL_res2845z00_646;

										{	/* Foreign/jtype.scm 50 */
											obj_t BgL_arg2063z00_645;

											BgL_arg2063z00_645 = SYMBOL_TO_STRING(BgL_idz00_1);
											BgL_res2845z00_646 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_645);
										}
										BgL_arg2383z00_281 = BgL_res2845z00_646;
									}
									{	/* Foreign/jtype.scm 50 */
										obj_t BgL_list2384z00_282;

										{	/* Foreign/jtype.scm 50 */
											obj_t BgL_arg2390z00_283;

											BgL_arg2390z00_283 = MAKE_PAIR(BgL_arg2383z00_281, BNIL);
											BgL_list2384z00_282 =
												MAKE_PAIR(BgL_arg2377z00_280, BgL_arg2390z00_283);
										}
										BgL_arg2370z00_279 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list2384z00_282);
								}}
								BgL_objzd2ze3idz31_239 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg2370z00_279));
							}
							{	/* Foreign/jtype.scm 50 */

								if (BGl_iszd2azf3z21zz__objectz00(BgL_pointerz00_237,
										BGl_typez00zztype_typez00))
									{	/* Foreign/jtype.scm 53 */
										return
											BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00
											(BgL_idz00_1, BgL_ofz00_2, BgL_namez00_238);
									}
								else
									{	/* Foreign/jtype.scm 57 */
										BgL_typez00_bglt BgL_typez00_241;

										BgL_typez00_241 =
											BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_1,
											BgL_namez00_238, CNST_TABLE_REF(((long) 1)),
											CNST_TABLE_REF(((long) 2)));
										{	/* Foreign/jtype.scm 57 */

											{	/* Foreign/jtype.scm 59 */
												obj_t BgL_arg2222z00_242;

												{	/* Foreign/jtype.scm 59 */
													obj_t BgL_arg2226z00_243;

													obj_t BgL_arg2227z00_244;

													BgL_arg2226z00_243 = CNST_TABLE_REF(((long) 3));
													{	/* Foreign/jtype.scm 60 */
														obj_t BgL_arg2233z00_245;

														obj_t BgL_arg2237z00_246;

														{	/* Foreign/jtype.scm 60 */
															obj_t BgL_arg2243z00_250;

															obj_t BgL_arg2245z00_251;

															BgL_arg2243z00_250 = CNST_TABLE_REF(((long) 4));
															{	/* Foreign/jtype.scm 60 */
																obj_t BgL_list2246z00_252;

																{	/* Foreign/jtype.scm 60 */
																	obj_t BgL_arg2252z00_253;

																	obj_t BgL_arg2255z00_254;

																	BgL_arg2252z00_253 =
																		CNST_TABLE_REF(((long) 5));
																	{	/* Foreign/jtype.scm 60 */
																		obj_t BgL_arg2260z00_256;

																		{	/* Foreign/jtype.scm 60 */
																			obj_t BgL_arg2274z00_258;

																			BgL_arg2274z00_258 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg2260z00_256 =
																				MAKE_PAIR(BNIL, BgL_arg2274z00_258);
																		}
																		BgL_arg2255z00_254 =
																			MAKE_PAIR(BNIL, BgL_arg2260z00_256);
																	}
																	BgL_list2246z00_252 =
																		MAKE_PAIR(BgL_arg2252z00_253,
																		BgL_arg2255z00_254);
																}
																BgL_arg2245z00_251 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_idz00_1, BgL_list2246z00_252);
															}
															BgL_arg2233z00_245 =
																MAKE_PAIR(BgL_arg2243z00_250,
																BgL_arg2245z00_251);
														}
														{	/* Foreign/jtype.scm 61 */
															obj_t BgL_arg2275z00_259;

															obj_t BgL_arg2282z00_260;

															BgL_arg2275z00_259 = CNST_TABLE_REF(((long) 4));
															{	/* Foreign/jtype.scm 61 */
																obj_t BgL_arg2285z00_261;

																obj_t BgL_arg2286z00_262;

																BgL_arg2285z00_261 = CNST_TABLE_REF(((long) 5));
																{	/* Foreign/jtype.scm 61 */
																	obj_t BgL_arg2318z00_269;

																	{	/* Foreign/jtype.scm 61 */
																		obj_t BgL_arg2331z00_271;

																		{	/* Foreign/jtype.scm 61 */
																			obj_t BgL_arg2338z00_272;

																			obj_t BgL_arg2344z00_273;

																			{	/* Foreign/jtype.scm 61 */
																				obj_t BgL_res2846z00_651;

																				{	/* Foreign/jtype.scm 61 */
																					obj_t BgL_arg2063z00_650;

																					BgL_arg2063z00_650 =
																						SYMBOL_TO_STRING(BgL_idz00_1);
																					BgL_res2846z00_651 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_650);
																				}
																				BgL_arg2338z00_272 = BgL_res2846z00_651;
																			}
																			{	/* Foreign/jtype.scm 61 */
																				obj_t BgL_res2847z00_654;

																				{	/* Foreign/jtype.scm 61 */
																					obj_t BgL_symbolz00_652;

																					BgL_symbolz00_652 =
																						CNST_TABLE_REF(((long) 6));
																					{	/* Foreign/jtype.scm 61 */
																						obj_t BgL_arg2063z00_653;

																						BgL_arg2063z00_653 =
																							SYMBOL_TO_STRING
																							(BgL_symbolz00_652);
																						BgL_res2847z00_654 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg2063z00_653);
																				}}
																				BgL_arg2344z00_273 = BgL_res2847z00_654;
																			}
																			{	/* Foreign/jtype.scm 61 */
																				obj_t BgL_list2345z00_274;

																				{	/* Foreign/jtype.scm 61 */
																					obj_t BgL_arg2351z00_275;

																					BgL_arg2351z00_275 =
																						MAKE_PAIR(BgL_arg2344z00_273, BNIL);
																					BgL_list2345z00_274 =
																						MAKE_PAIR(BgL_arg2338z00_272,
																						BgL_arg2351z00_275);
																				}
																				BgL_arg2331z00_271 =
																					BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																					(BgL_list2345z00_274);
																		}}
																		BgL_arg2318z00_269 =
																			string_to_symbol(BSTRING_TO_STRING
																			(BgL_arg2331z00_271));
																	}
																	BgL_arg2286z00_262 =
																		MAKE_PAIR(BgL_arg2318z00_269, BNIL);
																}
																{	/* Foreign/jtype.scm 61 */
																	obj_t BgL_list2296z00_265;

																	{	/* Foreign/jtype.scm 61 */
																		obj_t BgL_arg2297z00_266;

																		{	/* Foreign/jtype.scm 61 */
																			obj_t BgL_arg2305z00_267;

																			{	/* Foreign/jtype.scm 61 */
																				obj_t BgL_arg2312z00_268;

																				BgL_arg2312z00_268 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg2305z00_267 =
																					MAKE_PAIR(BNIL, BgL_arg2312z00_268);
																			}
																			BgL_arg2297z00_266 =
																				MAKE_PAIR(BgL_arg2286z00_262,
																				BgL_arg2305z00_267);
																		}
																		BgL_list2296z00_265 =
																			MAKE_PAIR(BgL_idz00_1,
																			BgL_arg2297z00_266);
																	}
																	BgL_arg2282z00_260 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg2285z00_261, BgL_list2296z00_265);
															}}
															BgL_arg2237z00_246 =
																MAKE_PAIR(BgL_arg2275z00_259,
																BgL_arg2282z00_260);
														}
														{	/* Foreign/jtype.scm 59 */
															obj_t BgL_list2240z00_248;

															{	/* Foreign/jtype.scm 59 */
																obj_t BgL_arg2242z00_249;

																BgL_arg2242z00_249 = MAKE_PAIR(BNIL, BNIL);
																BgL_list2240z00_248 =
																	MAKE_PAIR(BgL_arg2237z00_246,
																	BgL_arg2242z00_249);
															}
															BgL_arg2227z00_244 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg2233z00_245, BgL_list2240z00_248);
													}}
													BgL_arg2222z00_242 =
														MAKE_PAIR(BgL_arg2226z00_243, BgL_arg2227z00_244);
												}
												BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
													(BgL_arg2222z00_242);
											}
											{
												obj_t BgL_auxz00_991;

												BgL_auxz00_991 = (obj_t) (BgL_typez00_241);
												((((BgL_typez00_bglt) CREF(BgL_pointedz00_236))->
														BgL_pointedzd2tozd2byz00) =
													((obj_t) BgL_auxz00_991), BUNSPEC);
											}
											{	/* Foreign/jtype.scm 64 */
												BgL_typez00_bglt BgL_obj2212z00_276;

												BgL_obj2212z00_276 =
													((BgL_typez00_bglt) BgL_typez00_241);
												{	/* Foreign/jtype.scm 64 */
													BgL_jarrayz00_bglt BgL_arg2357z00_277;

													{	/* Foreign/jtype.scm 64 */
														BgL_jarrayz00_bglt BgL_res2849z00_664;

														{	/* Foreign/jtype.scm 64 */
															BgL_jarrayz00_bglt BgL_new2131z00_659;

															BgL_new2131z00_659 =
																((BgL_jarrayz00_bglt)
																BREF(GC_MALLOC(sizeof(struct
																			BgL_jarrayz00_bgl))));
															{	/* Foreign/jtype.scm 64 */
																BgL_jarrayz00_bglt BgL_res2848z00_663;

																{	/* Foreign/jtype.scm 64 */
																	BgL_jarrayz00_bglt BgL_new2152z00_660;

																	BgL_new2152z00_660 = BgL_new2131z00_659;
																	{	/* Foreign/jtype.scm 64 */
																		BgL_typez00_bglt BgL_itemzd2type2151zd2_662;

																		BgL_itemzd2type2151zd2_662 =
																			BgL_pointedz00_236;
																		((((BgL_jarrayz00_bglt)
																					CREF(BgL_new2152z00_660))->
																				BgL_itemzd2typezd2) =
																			((BgL_typez00_bglt)
																				BgL_itemzd2type2151zd2_662), BUNSPEC);
																		BgL_res2848z00_663 = BgL_new2152z00_660;
																}} BgL_res2848z00_663;
															}
															BgL_res2849z00_664 = BgL_new2131z00_659;
														}
														BgL_arg2357z00_277 = BgL_res2849z00_664;
													}
													{	/* Foreign/jtype.scm 64 */
														obj_t BgL_auxz00_999;

														BgL_objectz00_bglt BgL_auxz00_997;

														BgL_auxz00_999 = (obj_t) (BgL_arg2357z00_277);
														BgL_auxz00_997 =
															(BgL_objectz00_bglt) (BgL_obj2212z00_276);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_997,
															BgL_auxz00_999);
												}}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj2212z00_276),
													BGl_classzd2numzd2zz__objectz00
													(BGl_jarrayz00zzforeign_jtypez00));
												BgL_obj2212z00_276;
											}
											return BgL_typez00_241;
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* _declare-jvm-type! */
	obj_t BGl__declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t BgL_envz00_840,
		obj_t BgL_idz00_841, obj_t BgL_ofz00_842, obj_t BgL_srcz00_843)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 45 */
			return
				(obj_t) (BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(BgL_idz00_841,
					BgL_ofz00_842, BgL_srcz00_843));
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			{	/* Foreign/jtype.scm 37 */
				obj_t BgL_arg2403z00_285;

				obj_t BgL_arg2409z00_286;

				obj_t BgL_arg2429z00_289;

				BgL_arg2403z00_285 = CNST_TABLE_REF(((long) 7));
				BgL_arg2409z00_286 = BGl_typez00zztype_typez00;
				{	/* Foreign/jtype.scm 37 */
					obj_t BgL_v2213z00_290;

					BgL_v2213z00_290 = create_vector((int) (((long) 0)));
					BgL_arg2429z00_289 = BgL_v2213z00_290;
				}
				BGl_jarrayz00zzforeign_jtypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2403z00_285,
					BgL_arg2409z00_286, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jarrayzd2envz52zzforeign_jtypez00,
					BGl_jarrayzd2nilzd2envz00zzforeign_jtypez00,
					BGl_jarrayzf3zd2envz21zzforeign_jtypez00, ((long) 523048079), BFALSE,
					BFALSE, BgL_arg2429z00_289);
			}
			return (BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* jarray? */
	BGL_EXPORTED_DEF bool_t BGl_jarrayzf3zf3zzforeign_jtypez00(obj_t
		BgL_obj2163z00_7)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2163z00_7,
				BGl_jarrayz00zzforeign_jtypez00);
		}
	}



/* _jarray? */
	obj_t BGl__jarrayzf3zf3zzforeign_jtypez00(obj_t BgL_envz00_846,
		obj_t BgL_obj2163z00_847)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2163z00_847,
					BGl_jarrayz00zzforeign_jtypez00));
		}
	}



/* widening-jarray */
	BGL_EXPORTED_DEF BgL_jarrayz00_bglt
		BGl_wideningzd2jarrayzd2zzforeign_jtypez00(BgL_typez00_bglt
		BgL_itemzd2type2130zd2_11)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{	/* Foreign/jtype.scm 37 */
				BgL_jarrayz00_bglt BgL_new2131z00_667;

				BgL_new2131z00_667 =
					((BgL_jarrayz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_jarrayz00_bgl))));
				{	/* Foreign/jtype.scm 37 */
					BgL_jarrayz00_bglt BgL_res2850z00_671;

					{	/* Foreign/jtype.scm 37 */
						BgL_jarrayz00_bglt BgL_new2152z00_668;

						BgL_new2152z00_668 = BgL_new2131z00_667;
						{	/* Foreign/jtype.scm 37 */
							BgL_typez00_bglt BgL_itemzd2type2151zd2_670;

							BgL_itemzd2type2151zd2_670 = BgL_itemzd2type2130zd2_11;
							((((BgL_jarrayz00_bglt) CREF(BgL_new2152z00_668))->
									BgL_itemzd2typezd2) =
								((BgL_typez00_bglt) BgL_itemzd2type2151zd2_670), BUNSPEC);
							BgL_res2850z00_671 = BgL_new2152z00_668;
					}} BgL_res2850z00_671;
				}
				return BgL_new2131z00_667;
			}
		}
	}



/* _widening-jarray */
	obj_t BGl__wideningzd2jarrayzd2zzforeign_jtypez00(obj_t BgL_envz00_848,
		obj_t BgL_itemzd2type2130zd2_849)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			return
				(obj_t) (BGl_wideningzd2jarrayzd2zzforeign_jtypez00(
					(BgL_typez00_bglt) (BgL_itemzd2type2130zd2_849)));
		}
	}



/* make-jarray */
	BGL_EXPORTED_DEF BgL_jarrayz00_bglt
		BGl_makezd2jarrayzd2zzforeign_jtypez00(obj_t BgL_id2134z00_12,
		obj_t BgL_name2135z00_13, obj_t BgL_siza7e2136za7_14,
		obj_t BgL_class2137z00_15, obj_t BgL_coercezd2to2138zd2_16,
		obj_t BgL_parents2139z00_17, bool_t BgL_initzf32140zf3_18,
		bool_t BgL_magiczf32141zf3_19, obj_t BgL_z422142z42_20,
		obj_t BgL_alias2143z00_21, obj_t BgL_pointedzd2tozd2by2144z00_22,
		obj_t BgL_tvector2145z00_23, obj_t BgL_location2146z00_24,
		obj_t BgL_importzd2location2147zd2_25, int BgL_occurrence2148z00_26,
		BgL_typez00_bglt BgL_itemzd2type2133zd2_27)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{	/* Foreign/jtype.scm 37 */
				BgL_typez00_bglt BgL_aux2149z00_672;

				BgL_aux2149z00_672 =
					BGl_makezd2typezd2zztype_typez00(BgL_id2134z00_12, BgL_name2135z00_13,
					BgL_siza7e2136za7_14, BgL_class2137z00_15, BgL_coercezd2to2138zd2_16,
					BgL_parents2139z00_17, BgL_initzf32140zf3_18, BgL_magiczf32141zf3_19,
					BgL_z422142z42_20, BgL_alias2143z00_21,
					BgL_pointedzd2tozd2by2144z00_22, BgL_tvector2145z00_23,
					BgL_location2146z00_24, BgL_importzd2location2147zd2_25,
					BgL_occurrence2148z00_26);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux2149z00_672),
					BGl_classzd2numzd2zz__objectz00(BGl_jarrayz00zzforeign_jtypez00));
				{	/* Foreign/jtype.scm 37 */
					BgL_jarrayz00_bglt BgL_arg2431z00_674;

					{	/* Foreign/jtype.scm 37 */
						BgL_jarrayz00_bglt BgL_res2852z00_684;

						{	/* Foreign/jtype.scm 37 */
							BgL_jarrayz00_bglt BgL_new2131z00_679;

							BgL_new2131z00_679 =
								((BgL_jarrayz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jarrayz00_bgl))));
							{	/* Foreign/jtype.scm 37 */
								BgL_jarrayz00_bglt BgL_res2851z00_683;

								{	/* Foreign/jtype.scm 37 */
									BgL_jarrayz00_bglt BgL_new2152z00_680;

									BgL_new2152z00_680 = BgL_new2131z00_679;
									{	/* Foreign/jtype.scm 37 */
										BgL_typez00_bglt BgL_itemzd2type2151zd2_682;

										BgL_itemzd2type2151zd2_682 = BgL_itemzd2type2133zd2_27;
										((((BgL_jarrayz00_bglt) CREF(BgL_new2152z00_680))->
												BgL_itemzd2typezd2) =
											((BgL_typez00_bglt) BgL_itemzd2type2151zd2_682), BUNSPEC);
										BgL_res2851z00_683 = BgL_new2152z00_680;
								}} BgL_res2851z00_683;
							}
							BgL_res2852z00_684 = BgL_new2131z00_679;
						}
						BgL_arg2431z00_674 = BgL_res2852z00_684;
					}
					{	/* Foreign/jtype.scm 37 */
						obj_t BgL_auxz00_1027;

						BgL_objectz00_bglt BgL_auxz00_1025;

						BgL_auxz00_1027 = (obj_t) (BgL_arg2431z00_674);
						BgL_auxz00_1025 = (BgL_objectz00_bglt) (BgL_aux2149z00_672);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_1025, BgL_auxz00_1027);
				}}
				return ((BgL_jarrayz00_bglt) (BgL_jarrayz00_bglt) (BgL_aux2149z00_672));
			}
		}
	}



/* _make-jarray */
	obj_t BGl__makezd2jarrayzd2zzforeign_jtypez00(obj_t BgL_envz00_850,
		obj_t BgL_id2134z00_851, obj_t BgL_name2135z00_852,
		obj_t BgL_siza7e2136za7_853, obj_t BgL_class2137z00_854,
		obj_t BgL_coercezd2to2138zd2_855, obj_t BgL_parents2139z00_856,
		obj_t BgL_initzf32140zf3_857, obj_t BgL_magiczf32141zf3_858,
		obj_t BgL_z422142z42_859, obj_t BgL_alias2143z00_860,
		obj_t BgL_pointedzd2tozd2by2144z00_861, obj_t BgL_tvector2145z00_862,
		obj_t BgL_location2146z00_863, obj_t BgL_importzd2location2147zd2_864,
		obj_t BgL_occurrence2148z00_865, obj_t BgL_itemzd2type2133zd2_866)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			return
				(obj_t) (BGl_makezd2jarrayzd2zzforeign_jtypez00(BgL_id2134z00_851,
					BgL_name2135z00_852, BgL_siza7e2136za7_853, BgL_class2137z00_854,
					BgL_coercezd2to2138zd2_855, BgL_parents2139z00_856,
					CBOOL(BgL_initzf32140zf3_857), CBOOL(BgL_magiczf32141zf3_858),
					BgL_z422142z42_859, BgL_alias2143z00_860,
					BgL_pointedzd2tozd2by2144z00_861, BgL_tvector2145z00_862,
					BgL_location2146z00_863, BgL_importzd2location2147zd2_864,
					CINT(BgL_occurrence2148z00_865),
					(BgL_typez00_bglt) (BgL_itemzd2type2133zd2_866)));
		}
	}



/* fill-jarray! */
	BGL_EXPORTED_DEF BgL_jarrayz00_bglt
		BGl_fillzd2jarrayz12zc0zzforeign_jtypez00(BgL_jarrayz00_bglt
		BgL_new2152z00_28, BgL_typez00_bglt BgL_itemzd2type2151zd2_29)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{	/* Foreign/jtype.scm 37 */
				BgL_typez00_bglt BgL_itemzd2type2151zd2_900;

				BgL_itemzd2type2151zd2_900 = BgL_itemzd2type2151zd2_29;
				((((BgL_jarrayz00_bglt) CREF(BgL_new2152z00_28))->BgL_itemzd2typezd2) =
					((BgL_typez00_bglt) BgL_itemzd2type2151zd2_900), BUNSPEC);
				return BgL_new2152z00_28;
			}
		}
	}



/* _fill-jarray! */
	obj_t BGl__fillzd2jarrayz12zc0zzforeign_jtypez00(obj_t BgL_envz00_867,
		obj_t BgL_new2152z00_868, obj_t BgL_itemzd2type2151zd2_869)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{	/* Foreign/jtype.scm 37 */
				BgL_jarrayz00_bglt BgL_auxz00_1039;

				{	/* Foreign/jtype.scm 37 */
					BgL_jarrayz00_bglt BgL_res2892z00_904;

					{	/* Foreign/jtype.scm 37 */
						BgL_jarrayz00_bglt BgL_new2152z00_901;

						BgL_typez00_bglt BgL_itemzd2type2151zd2_902;

						BgL_new2152z00_901 = (BgL_jarrayz00_bglt) (BgL_new2152z00_868);
						BgL_itemzd2type2151zd2_902 =
							(BgL_typez00_bglt) (BgL_itemzd2type2151zd2_869);
						{	/* Foreign/jtype.scm 37 */
							BgL_typez00_bglt BgL_itemzd2type2151zd2_903;

							BgL_itemzd2type2151zd2_903 = BgL_itemzd2type2151zd2_902;
							((((BgL_jarrayz00_bglt) CREF(BgL_new2152z00_901))->
									BgL_itemzd2typezd2) =
								((BgL_typez00_bglt) BgL_itemzd2type2151zd2_903), BUNSPEC);
							BgL_res2892z00_904 = BgL_new2152z00_901;
						}
					}
					BgL_auxz00_1039 = BgL_res2892z00_904;
				}
				return (obj_t) (BgL_auxz00_1039);
			}
		}
	}



/* %allocate-jarray */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_z52allocatezd2jarrayz80zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{	/* Foreign/jtype.scm 37 */
				BgL_typez00_bglt BgL_new2155z00_905;

				BgL_new2155z00_905 =
					((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_typez00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2155z00_905),
					BGl_classzd2numzd2zz__objectz00(BGl_jarrayz00zzforeign_jtypez00));
				{	/* Foreign/jtype.scm 37 */
					BgL_objectz00_bglt BgL_auxz00_1048;

					BgL_auxz00_1048 = (BgL_objectz00_bglt) (BgL_new2155z00_905);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_1048, BFALSE);
				}
				return BgL_new2155z00_905;
			}
		}
	}



/* _%allocate-jarray */
	obj_t BGl__z52allocatezd2jarrayz80zzforeign_jtypez00(obj_t BgL_envz00_844)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{	/* Foreign/jtype.scm 37 */
				BgL_typez00_bglt BgL_auxz00_1051;

				{	/* Foreign/jtype.scm 37 */
					BgL_typez00_bglt BgL_res2893z00_909;

					{	/* Foreign/jtype.scm 37 */
						BgL_typez00_bglt BgL_new2155z00_907;

						BgL_new2155z00_907 =
							((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2155z00_907),
							BGl_classzd2numzd2zz__objectz00(BGl_jarrayz00zzforeign_jtypez00));
						{	/* Foreign/jtype.scm 37 */
							BgL_objectz00_bglt BgL_auxz00_1056;

							BgL_auxz00_1056 = (BgL_objectz00_bglt) (BgL_new2155z00_907);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1056, BFALSE);
						}
						BgL_res2893z00_909 = BgL_new2155z00_907;
					}
					BgL_auxz00_1051 = BgL_res2893z00_909;
				}
				return (obj_t) (BgL_auxz00_1051);
			}
		}
	}



/* jarray-nil */
	BGL_EXPORTED_DEF BgL_jarrayz00_bglt BGl_jarrayzd2nilzd2zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			if ((BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00 == BUNSPEC))
				{	/* Foreign/jtype.scm 37 */
					{	/* Foreign/jtype.scm 37 */
						BgL_typez00_bglt BgL_res2853z00_694;

						{	/* Foreign/jtype.scm 37 */
							BgL_typez00_bglt BgL_new1598z00_690;

							BgL_new1598z00_690 =
								((BgL_typez00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1598z00_690),
								BGl_classzd2numzd2zz__objectz00(BGl_typez00zztype_typez00));
							{	/* Foreign/jtype.scm 37 */
								BgL_objectz00_bglt BgL_auxz00_1066;

								BgL_auxz00_1066 = (BgL_objectz00_bglt) (BgL_new1598z00_690);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1066, BFALSE);
							}
							BgL_res2853z00_694 = BgL_new1598z00_690;
						}
						BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00 =
							(obj_t) (BgL_res2853z00_694);
					}
					{	/* Foreign/jtype.scm 37 */
						BgL_typez00_bglt BgL_res2854z00_726;

						{	/* Foreign/jtype.scm 37 */
							BgL_typez00_bglt BgL_new1581z00_695;

							obj_t BgL_id1566z00_696;

							int BgL_occurrence1580z00_710;

							BgL_new1581z00_695 =
								(BgL_typez00_bglt)
								(BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00);
							BgL_id1566z00_696 = CNST_TABLE_REF(((long) 8));
							BgL_occurrence1580z00_710 = (int) (((long) 0));
							{	/* Foreign/jtype.scm 37 */
								obj_t BgL_id1566z00_711;

								obj_t BgL_name1567z00_712;

								obj_t BgL_siza7e1568za7_713;

								obj_t BgL_class1569z00_714;

								obj_t BgL_coercezd2to1570zd2_715;

								obj_t BgL_parents1571z00_716;

								bool_t BgL_initzf31572zf3_717;

								bool_t BgL_magiczf31573zf3_718;

								obj_t BgL_z421574z42_719;

								obj_t BgL_alias1575z00_720;

								obj_t BgL_pointedzd2tozd2by1576z00_721;

								obj_t BgL_tvector1577z00_722;

								obj_t BgL_location1578z00_723;

								obj_t BgL_importzd2location1579zd2_724;

								int BgL_occurrence1580z00_725;

								BgL_id1566z00_711 = BgL_id1566z00_696;
								BgL_name1567z00_712 = BUNSPEC;
								BgL_siza7e1568za7_713 = BUNSPEC;
								BgL_class1569z00_714 = BUNSPEC;
								BgL_coercezd2to1570zd2_715 = BUNSPEC;
								BgL_parents1571z00_716 = BUNSPEC;
								BgL_initzf31572zf3_717 = ((bool_t) 0);
								BgL_magiczf31573zf3_718 = ((bool_t) 0);
								BgL_z421574z42_719 = BUNSPEC;
								BgL_alias1575z00_720 = BUNSPEC;
								BgL_pointedzd2tozd2by1576z00_721 = BUNSPEC;
								BgL_tvector1577z00_722 = BUNSPEC;
								BgL_location1578z00_723 = BUNSPEC;
								BgL_importzd2location1579zd2_724 = BUNSPEC;
								BgL_occurrence1580z00_725 = BgL_occurrence1580z00_710;
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->BgL_idz00) =
									((obj_t) BgL_id1566z00_711), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->BgL_namez00) =
									((obj_t) BgL_name1567z00_712), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_siza7eza7) = ((obj_t) BgL_siza7e1568za7_713), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->BgL_classz00) =
									((obj_t) BgL_class1569z00_714), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_coercezd2tozd2) =
									((obj_t) BgL_coercezd2to1570zd2_715), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_parentsz00) =
									((obj_t) BgL_parents1571z00_716), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_initzf3zf3) =
									((bool_t) BgL_initzf31572zf3_717), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_magiczf3zf3) =
									((bool_t) BgL_magiczf31573zf3_718), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->BgL_z42z42) =
									((obj_t) BgL_z421574z42_719), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->BgL_aliasz00) =
									((obj_t) BgL_alias1575z00_720), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_pointedzd2tozd2byz00) =
									((obj_t) BgL_pointedzd2tozd2by1576z00_721), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_tvectorz00) =
									((obj_t) BgL_tvector1577z00_722), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_locationz00) =
									((obj_t) BgL_location1578z00_723), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_importzd2locationzd2) =
									((obj_t) BgL_importzd2location1579zd2_724), BUNSPEC);
								((((BgL_typez00_bglt) CREF(BgL_new1581z00_695))->
										BgL_occurrencez00) =
									((int) BgL_occurrence1580z00_725), BUNSPEC);
								BgL_res2854z00_726 = BgL_new1581z00_695;
						}} BgL_res2854z00_726;
					}
					{	/* Foreign/jtype.scm 37 */
						long BgL_arg2444z00_300;

						BgL_arg2444z00_300 =
							BGl_classzd2numzd2zz__objectz00(BGl_jarrayz00zzforeign_jtypez00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00),
							BgL_arg2444z00_300);
					}
					{	/* Foreign/jtype.scm 37 */
						BgL_jarrayz00_bglt BgL_arg2445z00_301;

						{	/* Foreign/jtype.scm 37 */
							BgL_typez00_bglt BgL_arg2448z00_302;

							BgL_arg2448z00_302 = BGl_typezd2nilzd2zztype_typez00();
							{	/* Foreign/jtype.scm 37 */
								BgL_jarrayz00_bglt BgL_res2856z00_735;

								{	/* Foreign/jtype.scm 37 */
									BgL_jarrayz00_bglt BgL_new2131z00_730;

									BgL_new2131z00_730 =
										((BgL_jarrayz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_jarrayz00_bgl))));
									{	/* Foreign/jtype.scm 37 */
										BgL_jarrayz00_bglt BgL_res2855z00_734;

										{	/* Foreign/jtype.scm 37 */
											BgL_jarrayz00_bglt BgL_new2152z00_731;

											BgL_new2152z00_731 = BgL_new2131z00_730;
											{	/* Foreign/jtype.scm 37 */
												BgL_typez00_bglt BgL_itemzd2type2151zd2_733;

												BgL_itemzd2type2151zd2_733 = BgL_arg2448z00_302;
												((((BgL_jarrayz00_bglt) CREF(BgL_new2152z00_731))->
														BgL_itemzd2typezd2) =
													((BgL_typez00_bglt) BgL_itemzd2type2151zd2_733),
													BUNSPEC);
												BgL_res2855z00_734 = BgL_new2152z00_731;
										}} BgL_res2855z00_734;
									}
									BgL_res2856z00_735 = BgL_new2131z00_730;
								}
								BgL_arg2445z00_301 = BgL_res2856z00_735;
						}}
						{	/* Foreign/jtype.scm 37 */
							obj_t BgL_auxz00_1096;

							BgL_objectz00_bglt BgL_auxz00_1094;

							BgL_auxz00_1096 = (obj_t) (BgL_arg2445z00_301);
							BgL_auxz00_1094 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1094, BgL_auxz00_1096);
				}}}
			else
				{	/* Foreign/jtype.scm 37 */
					BFALSE;
				}
			return
				(BgL_jarrayz00_bglt) (BGl_z52thezd2jarrayzd2nilz52zzforeign_jtypez00);
		}
	}



/* _jarray-nil */
	obj_t BGl__jarrayzd2nilzd2zzforeign_jtypez00(obj_t BgL_envz00_845)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			return (obj_t) (BGl_jarrayzd2nilzd2zzforeign_jtypez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_jarrayz00zzforeign_jtypez00, BGl_proc2881z00zzforeign_jtypez00,
				BGl_string2882z00zzforeign_jtypez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jarrayz00zzforeign_jtypez00, BGl_proc2883z00zzforeign_jtypez00,
				BGl_string2884z00zzforeign_jtypez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jarrayz00zzforeign_jtypez00, BGl_proc2885z00zzforeign_jtypez00,
				BGl_string2886z00zzforeign_jtypez00);
		}
	}



/* struct+object->objec2219 */
	obj_t BGl_structzb2objectzd2ze3objec2219z83zzforeign_jtypez00(obj_t
		BgL_envz00_878, obj_t BgL_oz00_879, obj_t BgL_sz00_880)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{
				BgL_jarrayz00_bglt BgL_oz00_625;

				obj_t BgL_sz00_626;

				{	/* Foreign/jtype.scm 37 */
					BgL_jarrayz00_bglt BgL_auxz00_1105;

					BgL_oz00_625 = (BgL_jarrayz00_bglt) (BgL_oz00_879);
					BgL_sz00_626 = BgL_sz00_880;
					{

						{	/* Foreign/jtype.scm 37 */
							obj_t BgL_old2160z00_629;

							obj_t BgL_aux2161z00_630;

							{	/* Foreign/jtype.scm 37 */
								obj_t BgL_nextzd2method2218zd2_635;

								BgL_nextzd2method2218zd2_635 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_625),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_jarrayz00zzforeign_jtypez00);
								if (PROCEDUREP(BgL_nextzd2method2218zd2_635))
									{	/* Foreign/jtype.scm 37 */
										BgL_old2160z00_629 =
											PROCEDURE_ENTRY(BgL_nextzd2method2218zd2_635)
											(BgL_nextzd2method2218zd2_635, (obj_t) (BgL_oz00_625),
											BgL_sz00_626, BEOA);
									}
								else
									{	/* Foreign/jtype.scm 37 */
										BgL_old2160z00_629 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_625), BgL_sz00_626));
									}
							}
							BgL_aux2161z00_630 = STRUCT_REF(BgL_sz00_626, (int) (((long) 0)));
							{	/* Foreign/jtype.scm 37 */
								BgL_jarrayz00_bglt BgL_new2162z00_631;

								BgL_new2162z00_631 =
									((BgL_jarrayz00_bglt) (BgL_old2160z00_629));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new2162z00_631),
									BGl_classzd2numzd2zz__objectz00
									(BGl_jarrayz00zzforeign_jtypez00));
								{	/* Foreign/jtype.scm 37 */
									BgL_jarrayz00_bglt BgL_arg2839z00_633;

									{	/* Foreign/jtype.scm 37 */
										obj_t BgL_arg2841z00_634;

										BgL_arg2841z00_634 =
											STRUCT_REF(BgL_aux2161z00_630, (int) (((long) 0)));
										{	/* Foreign/jtype.scm 37 */
											BgL_jarrayz00_bglt BgL_res2874z00_838;

											{	/* Foreign/jtype.scm 37 */
												BgL_typez00_bglt BgL_itemzd2type2130zd2_832;

												BgL_itemzd2type2130zd2_832 =
													(BgL_typez00_bglt) (BgL_arg2841z00_634);
												{	/* Foreign/jtype.scm 37 */
													BgL_jarrayz00_bglt BgL_new2131z00_833;

													BgL_new2131z00_833 =
														((BgL_jarrayz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_jarrayz00_bgl))));
													{	/* Foreign/jtype.scm 37 */
														BgL_jarrayz00_bglt BgL_res2873z00_837;

														{	/* Foreign/jtype.scm 37 */
															BgL_jarrayz00_bglt BgL_new2152z00_834;

															BgL_new2152z00_834 = BgL_new2131z00_833;
															{	/* Foreign/jtype.scm 37 */
																BgL_typez00_bglt BgL_itemzd2type2151zd2_836;

																BgL_itemzd2type2151zd2_836 =
																	BgL_itemzd2type2130zd2_832;
																((((BgL_jarrayz00_bglt)
																			CREF(BgL_new2152z00_834))->
																		BgL_itemzd2typezd2) =
																	((BgL_typez00_bglt)
																		BgL_itemzd2type2151zd2_836), BUNSPEC);
																BgL_res2873z00_837 = BgL_new2152z00_834;
														}} BgL_res2873z00_837;
													}
													BgL_res2874z00_838 = BgL_new2131z00_833;
											}}
											BgL_arg2839z00_633 = BgL_res2874z00_838;
									}}
									{	/* Foreign/jtype.scm 37 */
										obj_t BgL_auxz00_1129;

										BgL_objectz00_bglt BgL_auxz00_1127;

										BgL_auxz00_1129 = (obj_t) (BgL_arg2839z00_633);
										BgL_auxz00_1127 = (BgL_objectz00_bglt) (BgL_new2162z00_631);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_1127, BgL_auxz00_1129);
								}}
								BgL_auxz00_1105 = BgL_new2162z00_631;
					}}}
					return (obj_t) (BgL_auxz00_1105);
				}
			}
		}
	}



/* object->struct-jarra2217 */
	obj_t BGl_objectzd2ze3structzd2jarra2217ze3zzforeign_jtypez00(obj_t
		BgL_envz00_881, obj_t BgL_obj2157z00_882)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 37 */
			{
				BgL_jarrayz00_bglt BgL_obj2157z00_615;

				BgL_obj2157z00_615 = (BgL_jarrayz00_bglt) (BgL_obj2157z00_882);
				{

					{	/* Foreign/jtype.scm 37 */
						obj_t BgL_res2158z00_618;

						{	/* Foreign/jtype.scm 37 */
							obj_t BgL_nextzd2method2216zd2_623;

							BgL_nextzd2method2216zd2_623 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj2157z00_615),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_jarrayz00zzforeign_jtypez00);
							if (PROCEDUREP(BgL_nextzd2method2216zd2_623))
								{	/* Foreign/jtype.scm 37 */
									BgL_res2158z00_618 =
										PROCEDURE_ENTRY(BgL_nextzd2method2216zd2_623)
										(BgL_nextzd2method2216zd2_623, (obj_t) (BgL_obj2157z00_615),
										BEOA);
								}
							else
								{	/* Foreign/jtype.scm 37 */
									BgL_res2158z00_618 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj2157z00_615));
								}
						}
						{	/* Foreign/jtype.scm 37 */
							obj_t BgL_aux2159z00_619;

							{	/* Foreign/jtype.scm 37 */
								obj_t BgL_keyz00_809;

								BgL_keyz00_809 = CNST_TABLE_REF(((long) 7));
								BgL_aux2159z00_619 =
									make_struct(BgL_keyz00_809, (int) (((long) 1)), BUNSPEC);
							}
							{	/* Foreign/jtype.scm 37 */
								BgL_typez00_bglt BgL_arg2835z00_621;

								{
									obj_t BgL_auxz00_1146;

									{	/* Foreign/jtype.scm 37 */
										BgL_objectz00_bglt BgL_auxz00_1147;

										BgL_auxz00_1147 = (BgL_objectz00_bglt) (BgL_obj2157z00_615);
										BgL_auxz00_1146 = BGL_OBJECT_WIDENING(BgL_auxz00_1147);
									}
									BgL_arg2835z00_621 =
										(((BgL_jarrayz00_bglt) CREF(BgL_auxz00_1146))->
										BgL_itemzd2typezd2);
								}
								{	/* Foreign/jtype.scm 37 */
									obj_t BgL_auxz00_1153;

									int BgL_auxz00_1151;

									BgL_auxz00_1153 = (obj_t) (BgL_arg2835z00_621);
									BgL_auxz00_1151 = (int) (((long) 0));
									STRUCT_SET(BgL_aux2159z00_619, BgL_auxz00_1151,
										BgL_auxz00_1153);
							}}
							{	/* Foreign/jtype.scm 37 */
								int BgL_auxz00_1156;

								BgL_auxz00_1156 = (int) (((long) 0));
								STRUCT_SET(BgL_res2158z00_618, BgL_auxz00_1156,
									BgL_aux2159z00_619);
							}
							{	/* Foreign/jtype.scm 37 */
								obj_t BgL_auxz00_1159;

								BgL_auxz00_1159 = STRUCT_KEY(BgL_res2158z00_618);
								STRUCT_KEY_SET(BgL_aux2159z00_619, BgL_auxz00_1159);
							}
							{	/* Foreign/jtype.scm 37 */
								obj_t BgL_kz00_824;

								BgL_kz00_824 = CNST_TABLE_REF(((long) 7));
								STRUCT_KEY_SET(BgL_res2158z00_618, BgL_kz00_824);
							}
							return BgL_res2158z00_618;
						}
					}
				}
			}
		}
	}



/* make-ctype-accesses!2215 */
	obj_t BGl_makezd2ctypezd2accessesz122215z12zzforeign_jtypez00(obj_t
		BgL_envz00_883, obj_t BgL_whatz00_884, obj_t BgL_whoz00_885,
		obj_t BgL_locz00_886)
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 71 */
			{
				BgL_jarrayz00_bglt BgL_whatz00_356;

				BgL_typez00_bglt BgL_whoz00_357;

				obj_t BgL_locz00_358;

				BgL_whatz00_356 = (BgL_jarrayz00_bglt) (BgL_whatz00_884);
				BgL_whoz00_357 = (BgL_typez00_bglt) (BgL_whoz00_885);
				BgL_locz00_358 = BgL_locz00_886;
				{	/* Foreign/jtype.scm 74 */
					obj_t BgL_idz00_361;

					{
						BgL_typez00_bglt BgL_auxz00_1165;

						BgL_auxz00_1165 = (BgL_typez00_bglt) (BgL_whatz00_356);
						BgL_idz00_361 =
							(((BgL_typez00_bglt) CREF(BgL_auxz00_1165))->BgL_idz00);
					}
					{	/* Foreign/jtype.scm 74 */
						obj_t BgL_oidz00_362;

						BgL_oidz00_362 =
							BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
									9)), BgL_idz00_361);
						{	/* Foreign/jtype.scm 75 */
							obj_t BgL_tidz00_363;

							BgL_tidz00_363 =
								BGl_makezd2typedzd2formalz00zzast_identz00(BgL_idz00_361);
							{	/* Foreign/jtype.scm 76 */
								obj_t BgL_idzd2ze3objz31_364;

								{	/* Foreign/jtype.scm 77 */
									obj_t BgL_arg2828z00_608;

									{	/* Foreign/jtype.scm 77 */
										obj_t BgL_arg2829z00_609;

										obj_t BgL_arg2830z00_610;

										{	/* Foreign/jtype.scm 77 */
											obj_t BgL_res2857z00_758;

											{	/* Foreign/jtype.scm 77 */
												obj_t BgL_arg2063z00_757;

												BgL_arg2063z00_757 = SYMBOL_TO_STRING(BgL_idz00_361);
												BgL_res2857z00_758 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_757);
											}
											BgL_arg2829z00_609 = BgL_res2857z00_758;
										}
										{	/* Foreign/jtype.scm 77 */
											obj_t BgL_res2858z00_761;

											{	/* Foreign/jtype.scm 77 */
												obj_t BgL_symbolz00_759;

												BgL_symbolz00_759 = CNST_TABLE_REF(((long) 10));
												{	/* Foreign/jtype.scm 77 */
													obj_t BgL_arg2063z00_760;

													BgL_arg2063z00_760 =
														SYMBOL_TO_STRING(BgL_symbolz00_759);
													BgL_res2858z00_761 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_760);
											}}
											BgL_arg2830z00_610 = BgL_res2858z00_761;
										}
										{	/* Foreign/jtype.scm 77 */
											obj_t BgL_list2831z00_611;

											{	/* Foreign/jtype.scm 77 */
												obj_t BgL_arg2832z00_612;

												BgL_arg2832z00_612 =
													MAKE_PAIR(BgL_arg2830z00_610, BNIL);
												BgL_list2831z00_611 =
													MAKE_PAIR(BgL_arg2829z00_609, BgL_arg2832z00_612);
											}
											BgL_arg2828z00_608 =
												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
												(BgL_list2831z00_611);
									}}
									BgL_idzd2ze3objz31_364 =
										string_to_symbol(BSTRING_TO_STRING(BgL_arg2828z00_608));
								}
								{	/* Foreign/jtype.scm 77 */
									obj_t BgL_objzd2ze3idz31_365;

									{	/* Foreign/jtype.scm 78 */
										obj_t BgL_arg2822z00_603;

										{	/* Foreign/jtype.scm 78 */
											obj_t BgL_arg2823z00_604;

											obj_t BgL_arg2825z00_605;

											{	/* Foreign/jtype.scm 78 */
												obj_t BgL_res2859z00_765;

												{	/* Foreign/jtype.scm 78 */
													obj_t BgL_symbolz00_763;

													BgL_symbolz00_763 = CNST_TABLE_REF(((long) 0));
													{	/* Foreign/jtype.scm 78 */
														obj_t BgL_arg2063z00_764;

														BgL_arg2063z00_764 =
															SYMBOL_TO_STRING(BgL_symbolz00_763);
														BgL_res2859z00_765 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_764);
												}}
												BgL_arg2823z00_604 = BgL_res2859z00_765;
											}
											{	/* Foreign/jtype.scm 78 */
												obj_t BgL_res2860z00_768;

												{	/* Foreign/jtype.scm 78 */
													obj_t BgL_arg2063z00_767;

													BgL_arg2063z00_767 = SYMBOL_TO_STRING(BgL_idz00_361);
													BgL_res2860z00_768 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_767);
												}
												BgL_arg2825z00_605 = BgL_res2860z00_768;
											}
											{	/* Foreign/jtype.scm 78 */
												obj_t BgL_list2826z00_606;

												{	/* Foreign/jtype.scm 78 */
													obj_t BgL_arg2827z00_607;

													BgL_arg2827z00_607 =
														MAKE_PAIR(BgL_arg2825z00_605, BNIL);
													BgL_list2826z00_606 =
														MAKE_PAIR(BgL_arg2823z00_604, BgL_arg2827z00_607);
												}
												BgL_arg2822z00_603 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list2826z00_606);
										}}
										BgL_objzd2ze3idz31_365 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg2822z00_603));
									}
									{	/* Foreign/jtype.scm 78 */
										obj_t BgL_tobjzd2ze3idz31_366;

										BgL_tobjzd2ze3idz31_366 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_objzd2ze3idz31_365, BgL_idz00_361);
										{	/* Foreign/jtype.scm 79 */
											obj_t BgL_idzf3zf3_367;

											{	/* Foreign/jtype.scm 80 */
												obj_t BgL_arg2816z00_598;

												{	/* Foreign/jtype.scm 80 */
													obj_t BgL_arg2818z00_599;

													obj_t BgL_arg2819z00_600;

													{	/* Foreign/jtype.scm 80 */
														obj_t BgL_res2861z00_772;

														{	/* Foreign/jtype.scm 80 */
															obj_t BgL_arg2063z00_771;

															BgL_arg2063z00_771 =
																SYMBOL_TO_STRING(BgL_idz00_361);
															BgL_res2861z00_772 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_771);
														}
														BgL_arg2818z00_599 = BgL_res2861z00_772;
													}
													{	/* Foreign/jtype.scm 80 */
														obj_t BgL_res2862z00_775;

														{	/* Foreign/jtype.scm 80 */
															obj_t BgL_symbolz00_773;

															BgL_symbolz00_773 = CNST_TABLE_REF(((long) 6));
															{	/* Foreign/jtype.scm 80 */
																obj_t BgL_arg2063z00_774;

																BgL_arg2063z00_774 =
																	SYMBOL_TO_STRING(BgL_symbolz00_773);
																BgL_res2862z00_775 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_774);
														}}
														BgL_arg2819z00_600 = BgL_res2862z00_775;
													}
													{	/* Foreign/jtype.scm 80 */
														obj_t BgL_list2820z00_601;

														{	/* Foreign/jtype.scm 80 */
															obj_t BgL_arg2821z00_602;

															BgL_arg2821z00_602 =
																MAKE_PAIR(BgL_arg2819z00_600, BNIL);
															BgL_list2820z00_601 =
																MAKE_PAIR(BgL_arg2818z00_599,
																BgL_arg2821z00_602);
														}
														BgL_arg2816z00_598 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list2820z00_601);
												}}
												BgL_idzf3zf3_367 =
													string_to_symbol(BSTRING_TO_STRING
													(BgL_arg2816z00_598));
											}
											{	/* Foreign/jtype.scm 80 */
												obj_t BgL_tidzf3zf3_368;

												BgL_tidzf3zf3_368 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_idzf3zf3_367, CNST_TABLE_REF(((long) 11)));
												{	/* Foreign/jtype.scm 81 */
													obj_t BgL_idzd2lengthzd2_369;

													{	/* Foreign/jtype.scm 82 */
														obj_t BgL_arg2811z00_593;

														{	/* Foreign/jtype.scm 82 */
															obj_t BgL_arg2812z00_594;

															obj_t BgL_arg2813z00_595;

															{	/* Foreign/jtype.scm 82 */
																obj_t BgL_res2863z00_779;

																{	/* Foreign/jtype.scm 82 */
																	obj_t BgL_arg2063z00_778;

																	BgL_arg2063z00_778 =
																		SYMBOL_TO_STRING(BgL_idz00_361);
																	BgL_res2863z00_779 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg2063z00_778);
																}
																BgL_arg2812z00_594 = BgL_res2863z00_779;
															}
															{	/* Foreign/jtype.scm 82 */
																obj_t BgL_res2864z00_782;

																{	/* Foreign/jtype.scm 82 */
																	obj_t BgL_symbolz00_780;

																	BgL_symbolz00_780 =
																		CNST_TABLE_REF(((long) 12));
																	{	/* Foreign/jtype.scm 82 */
																		obj_t BgL_arg2063z00_781;

																		BgL_arg2063z00_781 =
																			SYMBOL_TO_STRING(BgL_symbolz00_780);
																		BgL_res2864z00_782 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg2063z00_781);
																}}
																BgL_arg2813z00_595 = BgL_res2864z00_782;
															}
															{	/* Foreign/jtype.scm 82 */
																obj_t BgL_list2814z00_596;

																{	/* Foreign/jtype.scm 82 */
																	obj_t BgL_arg2815z00_597;

																	BgL_arg2815z00_597 =
																		MAKE_PAIR(BgL_arg2813z00_595, BNIL);
																	BgL_list2814z00_596 =
																		MAKE_PAIR(BgL_arg2812z00_594,
																		BgL_arg2815z00_597);
																}
																BgL_arg2811z00_593 =
																	BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																	(BgL_list2814z00_596);
														}}
														BgL_idzd2lengthzd2_369 =
															string_to_symbol(BSTRING_TO_STRING
															(BgL_arg2811z00_593));
													}
													{	/* Foreign/jtype.scm 82 */
														obj_t BgL_tidzd2lengthzd2_370;

														BgL_tidzd2lengthzd2_370 =
															BGl_makezd2typedzd2identz00zzast_identz00
															(BgL_idzd2lengthzd2_369,
															CNST_TABLE_REF(((long) 13)));
														{	/* Foreign/jtype.scm 83 */
															BgL_typez00_bglt BgL_itemzd2typezd2_371;

															{
																obj_t BgL_auxz00_1216;

																{	/* Foreign/jtype.scm 84 */
																	BgL_objectz00_bglt BgL_auxz00_1217;

																	BgL_auxz00_1217 =
																		(BgL_objectz00_bglt) (BgL_whatz00_356);
																	BgL_auxz00_1216 =
																		BGL_OBJECT_WIDENING(BgL_auxz00_1217);
																}
																BgL_itemzd2typezd2_371 =
																	(((BgL_jarrayz00_bglt)
																		CREF(BgL_auxz00_1216))->BgL_itemzd2typezd2);
															}
															{	/* Foreign/jtype.scm 84 */
																obj_t BgL_itemzd2typezd2idz00_372;

																BgL_itemzd2typezd2idz00_372 =
																	(((BgL_typez00_bglt)
																		CREF(BgL_itemzd2typezd2_371))->BgL_idz00);
																{	/* Foreign/jtype.scm 85 */
																	obj_t BgL_fitemzd2typezd2idz00_373;

																	BgL_fitemzd2typezd2idz00_373 =
																		BGl_makezd2typedzd2formalz00zzast_identz00
																		(BgL_itemzd2typezd2idz00_372);
																	{	/* Foreign/jtype.scm 86 */
																		obj_t BgL_oitemzd2typezd2idz00_374;

																		BgL_oitemzd2typezd2idz00_374 =
																			BGl_makezd2typedzd2identz00zzast_identz00
																			(CNST_TABLE_REF(((long) 14)),
																			BgL_itemzd2typezd2idz00_372);
																		{	/* Foreign/jtype.scm 87 */
																			obj_t BgL_makezd2idzd2_375;

																			{	/* Foreign/jtype.scm 88 */
																				obj_t BgL_arg2806z00_588;

																				{	/* Foreign/jtype.scm 88 */
																					obj_t BgL_arg2807z00_589;

																					obj_t BgL_arg2808z00_590;

																					{	/* Foreign/jtype.scm 88 */
																						obj_t BgL_res2865z00_788;

																						{	/* Foreign/jtype.scm 88 */
																							obj_t BgL_symbolz00_786;

																							BgL_symbolz00_786 =
																								CNST_TABLE_REF(((long) 15));
																							{	/* Foreign/jtype.scm 88 */
																								obj_t BgL_arg2063z00_787;

																								BgL_arg2063z00_787 =
																									SYMBOL_TO_STRING
																									(BgL_symbolz00_786);
																								BgL_res2865z00_788 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg2063z00_787);
																						}}
																						BgL_arg2807z00_589 =
																							BgL_res2865z00_788;
																					}
																					{	/* Foreign/jtype.scm 88 */
																						obj_t BgL_res2866z00_791;

																						{	/* Foreign/jtype.scm 88 */
																							obj_t BgL_arg2063z00_790;

																							BgL_arg2063z00_790 =
																								SYMBOL_TO_STRING(BgL_idz00_361);
																							BgL_res2866z00_791 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg2063z00_790);
																						}
																						BgL_arg2808z00_590 =
																							BgL_res2866z00_791;
																					}
																					{	/* Foreign/jtype.scm 88 */
																						obj_t BgL_list2809z00_591;

																						{	/* Foreign/jtype.scm 88 */
																							obj_t BgL_arg2810z00_592;

																							BgL_arg2810z00_592 =
																								MAKE_PAIR(BgL_arg2808z00_590,
																								BNIL);
																							BgL_list2809z00_591 =
																								MAKE_PAIR(BgL_arg2807z00_589,
																								BgL_arg2810z00_592);
																						}
																						BgL_arg2806z00_588 =
																							BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																							(BgL_list2809z00_591);
																				}}
																				BgL_makezd2idzd2_375 =
																					string_to_symbol(BSTRING_TO_STRING
																					(BgL_arg2806z00_588));
																			}
																			{	/* Foreign/jtype.scm 88 */
																				obj_t BgL_tmakezd2idzd2_376;

																				BgL_tmakezd2idzd2_376 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(BgL_makezd2idzd2_375, BgL_idz00_361);
																				{	/* Foreign/jtype.scm 89 */
																					obj_t BgL_idzd2refzd2_377;

																					{	/* Foreign/jtype.scm 90 */
																						obj_t BgL_arg2801z00_583;

																						{	/* Foreign/jtype.scm 90 */
																							obj_t BgL_arg2802z00_584;

																							obj_t BgL_arg2803z00_585;

																							{	/* Foreign/jtype.scm 90 */
																								obj_t BgL_res2867z00_795;

																								{	/* Foreign/jtype.scm 90 */
																									obj_t BgL_arg2063z00_794;

																									BgL_arg2063z00_794 =
																										SYMBOL_TO_STRING
																										(BgL_idz00_361);
																									BgL_res2867z00_795 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg2063z00_794);
																								}
																								BgL_arg2802z00_584 =
																									BgL_res2867z00_795;
																							}
																							{	/* Foreign/jtype.scm 90 */
																								obj_t BgL_res2868z00_798;

																								{	/* Foreign/jtype.scm 90 */
																									obj_t BgL_symbolz00_796;

																									BgL_symbolz00_796 =
																										CNST_TABLE_REF(((long) 16));
																									{	/* Foreign/jtype.scm 90 */
																										obj_t BgL_arg2063z00_797;

																										BgL_arg2063z00_797 =
																											SYMBOL_TO_STRING
																											(BgL_symbolz00_796);
																										BgL_res2868z00_798 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg2063z00_797);
																								}}
																								BgL_arg2803z00_585 =
																									BgL_res2868z00_798;
																							}
																							{	/* Foreign/jtype.scm 90 */
																								obj_t BgL_list2804z00_586;

																								{	/* Foreign/jtype.scm 90 */
																									obj_t BgL_arg2805z00_587;

																									BgL_arg2805z00_587 =
																										MAKE_PAIR
																										(BgL_arg2803z00_585, BNIL);
																									BgL_list2804z00_586 =
																										MAKE_PAIR
																										(BgL_arg2802z00_584,
																										BgL_arg2805z00_587);
																								}
																								BgL_arg2801z00_583 =
																									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																									(BgL_list2804z00_586);
																						}}
																						BgL_idzd2refzd2_377 =
																							string_to_symbol(BSTRING_TO_STRING
																							(BgL_arg2801z00_583));
																					}
																					{	/* Foreign/jtype.scm 90 */
																						obj_t BgL_tidzd2refzd2_378;

																						BgL_tidzd2refzd2_378 =
																							BGl_makezd2typedzd2identz00zzast_identz00
																							(BgL_idzd2refzd2_377,
																							BgL_itemzd2typezd2idz00_372);
																						{	/* Foreign/jtype.scm 91 */
																							obj_t BgL_idzd2setz12zc0_379;

																							{	/* Foreign/jtype.scm 92 */
																								obj_t BgL_arg2796z00_578;

																								{	/* Foreign/jtype.scm 92 */
																									obj_t BgL_arg2797z00_579;

																									obj_t BgL_arg2798z00_580;

																									{	/* Foreign/jtype.scm 92 */
																										obj_t BgL_res2869z00_802;

																										{	/* Foreign/jtype.scm 92 */
																											obj_t BgL_arg2063z00_801;

																											BgL_arg2063z00_801 =
																												SYMBOL_TO_STRING
																												(BgL_idz00_361);
																											BgL_res2869z00_802 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg2063z00_801);
																										}
																										BgL_arg2797z00_579 =
																											BgL_res2869z00_802;
																									}
																									{	/* Foreign/jtype.scm 92 */
																										obj_t BgL_res2870z00_805;

																										{	/* Foreign/jtype.scm 92 */
																											obj_t BgL_symbolz00_803;

																											BgL_symbolz00_803 =
																												CNST_TABLE_REF(((long)
																													17));
																											{	/* Foreign/jtype.scm 92 */
																												obj_t
																													BgL_arg2063z00_804;
																												BgL_arg2063z00_804 =
																													SYMBOL_TO_STRING
																													(BgL_symbolz00_803);
																												BgL_res2870z00_805 =
																													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																													(BgL_arg2063z00_804);
																										}}
																										BgL_arg2798z00_580 =
																											BgL_res2870z00_805;
																									}
																									{	/* Foreign/jtype.scm 92 */
																										obj_t BgL_list2799z00_581;

																										{	/* Foreign/jtype.scm 92 */
																											obj_t BgL_arg2800z00_582;

																											BgL_arg2800z00_582 =
																												MAKE_PAIR
																												(BgL_arg2798z00_580,
																												BNIL);
																											BgL_list2799z00_581 =
																												MAKE_PAIR
																												(BgL_arg2797z00_579,
																												BgL_arg2800z00_582);
																										}
																										BgL_arg2796z00_578 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list2799z00_581);
																								}}
																								BgL_idzd2setz12zc0_379 =
																									string_to_symbol
																									(BSTRING_TO_STRING
																									(BgL_arg2796z00_578));
																							}
																							{	/* Foreign/jtype.scm 92 */

																								{

																									{	/* Foreign/jtype.scm 133 */
																										obj_t BgL_list2472z00_387;

																										{	/* Foreign/jtype.scm 133 */
																											obj_t BgL_arg2476z00_388;

																											{	/* Foreign/jtype.scm 133 */
																												obj_t
																													BgL_arg2477z00_389;
																												{	/* Foreign/jtype.scm 133 */
																													obj_t
																														BgL_arg2491z00_390;
																													{	/* Foreign/jtype.scm 133 */
																														obj_t
																															BgL_arg2492z00_391;
																														BgL_arg2492z00_391 =
																															MAKE_PAIR
																															(BgL_idzd2setz12zc0_379,
																															BNIL);
																														BgL_arg2491z00_390 =
																															MAKE_PAIR
																															(BgL_idzd2refzd2_377,
																															BgL_arg2492z00_391);
																													}
																													BgL_arg2477z00_389 =
																														MAKE_PAIR
																														(BgL_makezd2idzd2_375,
																														BgL_arg2491z00_390);
																												}
																												BgL_arg2476z00_388 =
																													MAKE_PAIR
																													(BgL_idzd2lengthzd2_369,
																													BgL_arg2477z00_389);
																											}
																											BgL_list2472z00_387 =
																												MAKE_PAIR
																												(BgL_idzf3zf3_367,
																												BgL_arg2476z00_388);
																										}
																										BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																											(BgL_list2472z00_387);
																									}
																									{	/* Foreign/jtype.scm 136 */
																										obj_t BgL_arg2493z00_392;

																										{	/* Foreign/jtype.scm 136 */
																											obj_t BgL_arg2503z00_393;

																											obj_t BgL_arg2504z00_394;

																											BgL_arg2503z00_393 =
																												CNST_TABLE_REF(((long)
																													31));
																											{	/* Foreign/jtype.scm 137 */
																												obj_t
																													BgL_arg2505z00_395;
																												obj_t
																													BgL_arg2523z00_396;
																												obj_t
																													BgL_arg2529z00_397;
																												obj_t
																													BgL_arg2531z00_398;
																												obj_t
																													BgL_arg2536z00_399;
																												obj_t
																													BgL_arg2544z00_400;
																												obj_t
																													BgL_arg2550z00_401;
																												{	/* Foreign/jtype.scm 137 */
																													obj_t
																														BgL_arg2562z00_410;
																													obj_t
																														BgL_arg2563z00_411;
																													BgL_arg2562z00_410 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 137 */
																														obj_t
																															BgL_list2564z00_412;
																														{	/* Foreign/jtype.scm 137 */
																															obj_t
																																BgL_arg2565z00_413;
																															BgL_arg2565z00_413
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2564z00_412
																																=
																																MAKE_PAIR
																																(BgL_tidz00_363,
																																BgL_arg2565z00_413);
																														}
																														BgL_arg2563z00_411 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_idzd2ze3objz31_364,
																															BgL_list2564z00_412);
																													}
																													BgL_arg2505z00_395 =
																														MAKE_PAIR
																														(BgL_arg2562z00_410,
																														BgL_arg2563z00_411);
																												}
																												{	/* Foreign/jtype.scm 138 */
																													obj_t
																														BgL_arg2566z00_414;
																													obj_t
																														BgL_arg2571z00_415;
																													BgL_arg2566z00_414 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 138 */
																														obj_t
																															BgL_list2572z00_416;
																														{	/* Foreign/jtype.scm 138 */
																															obj_t
																																BgL_arg2576z00_417;
																															obj_t
																																BgL_arg2586z00_418;
																															BgL_arg2576z00_417
																																=
																																CNST_TABLE_REF((
																																	(long) 33));
																															BgL_arg2586z00_418
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2572z00_416
																																=
																																MAKE_PAIR
																																(BgL_arg2576z00_417,
																																BgL_arg2586z00_418);
																														}
																														BgL_arg2571z00_415 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_tobjzd2ze3idz31_366,
																															BgL_list2572z00_416);
																													}
																													BgL_arg2523z00_396 =
																														MAKE_PAIR
																														(BgL_arg2566z00_414,
																														BgL_arg2571z00_415);
																												}
																												{	/* Foreign/jtype.scm 139 */
																													obj_t
																														BgL_arg2587z00_419;
																													obj_t
																														BgL_arg2589z00_420;
																													BgL_arg2587z00_419 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 139 */
																														obj_t
																															BgL_list2590z00_421;
																														{	/* Foreign/jtype.scm 139 */
																															obj_t
																																BgL_arg2594z00_422;
																															obj_t
																																BgL_arg2595z00_423;
																															BgL_arg2594z00_422
																																=
																																CNST_TABLE_REF((
																																	(long) 33));
																															BgL_arg2595z00_423
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2590z00_421
																																=
																																MAKE_PAIR
																																(BgL_arg2594z00_422,
																																BgL_arg2595z00_423);
																														}
																														BgL_arg2589z00_420 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_tidzf3zf3_368,
																															BgL_list2590z00_421);
																													}
																													BgL_arg2529z00_397 =
																														MAKE_PAIR
																														(BgL_arg2587z00_419,
																														BgL_arg2589z00_420);
																												}
																												{	/* Foreign/jtype.scm 140 */
																													obj_t
																														BgL_arg2602z00_424;
																													obj_t
																														BgL_arg2608z00_425;
																													BgL_arg2602z00_424 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 140 */
																														obj_t
																															BgL_list2609z00_426;
																														{	/* Foreign/jtype.scm 140 */
																															obj_t
																																BgL_arg2615z00_427;
																															BgL_arg2615z00_427
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2609z00_426
																																=
																																MAKE_PAIR
																																(BgL_tidz00_363,
																																BgL_arg2615z00_427);
																														}
																														BgL_arg2608z00_425 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_tidzd2lengthzd2_370,
																															BgL_list2609z00_426);
																													}
																													BgL_arg2531z00_398 =
																														MAKE_PAIR
																														(BgL_arg2602z00_424,
																														BgL_arg2608z00_425);
																												}
																												{	/* Foreign/jtype.scm 141 */
																													obj_t
																														BgL_arg2621z00_428;
																													obj_t
																														BgL_arg2628z00_429;
																													BgL_arg2621z00_428 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 141 */
																														obj_t
																															BgL_list2629z00_430;
																														{	/* Foreign/jtype.scm 141 */
																															obj_t
																																BgL_arg2630z00_431;
																															obj_t
																																BgL_arg2642z00_432;
																															BgL_arg2630z00_431
																																=
																																CNST_TABLE_REF((
																																	(long) 34));
																															BgL_arg2642z00_432
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2629z00_430
																																=
																																MAKE_PAIR
																																(BgL_arg2630z00_431,
																																BgL_arg2642z00_432);
																														}
																														BgL_arg2628z00_429 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_tmakezd2idzd2_376,
																															BgL_list2629z00_430);
																													}
																													BgL_arg2536z00_399 =
																														MAKE_PAIR
																														(BgL_arg2621z00_428,
																														BgL_arg2628z00_429);
																												}
																												{	/* Foreign/jtype.scm 142 */
																													obj_t
																														BgL_arg2648z00_433;
																													obj_t
																														BgL_arg2649z00_434;
																													BgL_arg2648z00_433 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 142 */
																														obj_t
																															BgL_list2650z00_435;
																														{	/* Foreign/jtype.scm 142 */
																															obj_t
																																BgL_arg2651z00_436;
																															{	/* Foreign/jtype.scm 142 */
																																obj_t
																																	BgL_arg2652z00_437;
																																obj_t
																																	BgL_arg2655z00_438;
																																BgL_arg2652z00_437
																																	=
																																	CNST_TABLE_REF
																																	(((long) 34));
																																BgL_arg2655z00_438
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2651z00_436
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2652z00_437,
																																	BgL_arg2655z00_438);
																															}
																															BgL_list2650z00_435
																																=
																																MAKE_PAIR
																																(BgL_tidz00_363,
																																BgL_arg2651z00_436);
																														}
																														BgL_arg2649z00_434 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_tidzd2refzd2_378,
																															BgL_list2650z00_435);
																													}
																													BgL_arg2544z00_400 =
																														MAKE_PAIR
																														(BgL_arg2648z00_433,
																														BgL_arg2649z00_434);
																												}
																												{	/* Foreign/jtype.scm 143 */
																													obj_t
																														BgL_arg2656z00_439;
																													obj_t
																														BgL_arg2657z00_440;
																													BgL_arg2656z00_439 =
																														CNST_TABLE_REF((
																															(long) 32));
																													{	/* Foreign/jtype.scm 143 */
																														obj_t
																															BgL_list2658z00_441;
																														{	/* Foreign/jtype.scm 143 */
																															obj_t
																																BgL_arg2659z00_442;
																															{	/* Foreign/jtype.scm 143 */
																																obj_t
																																	BgL_arg2660z00_443;
																																obj_t
																																	BgL_arg2661z00_444;
																																BgL_arg2660z00_443
																																	=
																																	CNST_TABLE_REF
																																	(((long) 34));
																																{	/* Foreign/jtype.scm 143 */
																																	obj_t
																																		BgL_arg2663z00_445;
																																	BgL_arg2663z00_445
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg2661z00_444
																																		=
																																		MAKE_PAIR
																																		(BgL_fitemzd2typezd2idz00_373,
																																		BgL_arg2663z00_445);
																																}
																																BgL_arg2659z00_442
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2660z00_443,
																																	BgL_arg2661z00_444);
																															}
																															BgL_list2658z00_441
																																=
																																MAKE_PAIR
																																(BgL_tidz00_363,
																																BgL_arg2659z00_442);
																														}
																														BgL_arg2657z00_440 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_idzd2setz12zc0_379,
																															BgL_list2658z00_441);
																													}
																													BgL_arg2550z00_401 =
																														MAKE_PAIR
																														(BgL_arg2656z00_439,
																														BgL_arg2657z00_440);
																												}
																												{	/* Foreign/jtype.scm 136 */
																													obj_t
																														BgL_list2555z00_403;
																													{	/* Foreign/jtype.scm 136 */
																														obj_t
																															BgL_arg2556z00_404;
																														{	/* Foreign/jtype.scm 136 */
																															obj_t
																																BgL_arg2557z00_405;
																															{	/* Foreign/jtype.scm 136 */
																																obj_t
																																	BgL_arg2558z00_406;
																																{	/* Foreign/jtype.scm 136 */
																																	obj_t
																																		BgL_arg2559z00_407;
																																	{	/* Foreign/jtype.scm 136 */
																																		obj_t
																																			BgL_arg2560z00_408;
																																		{	/* Foreign/jtype.scm 136 */
																																			obj_t
																																				BgL_arg2561z00_409;
																																			BgL_arg2561z00_409
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg2560z00_408
																																				=
																																				MAKE_PAIR
																																				(BgL_arg2550z00_401,
																																				BgL_arg2561z00_409);
																																		}
																																		BgL_arg2559z00_407
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2544z00_400,
																																			BgL_arg2560z00_408);
																																	}
																																	BgL_arg2558z00_406
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2536z00_399,
																																		BgL_arg2559z00_407);
																																}
																																BgL_arg2557z00_405
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2531z00_398,
																																	BgL_arg2558z00_406);
																															}
																															BgL_arg2556z00_404
																																=
																																MAKE_PAIR
																																(BgL_arg2529z00_397,
																																BgL_arg2557z00_405);
																														}
																														BgL_list2555z00_403
																															=
																															MAKE_PAIR
																															(BgL_arg2523z00_396,
																															BgL_arg2556z00_404);
																													}
																													BgL_arg2504z00_394 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2505z00_395,
																														BgL_list2555z00_403);
																											}}
																											BgL_arg2493z00_392 =
																												MAKE_PAIR
																												(BgL_arg2503z00_393,
																												BgL_arg2504z00_394);
																										}
																										BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																											(BgL_arg2493z00_392);
																									}
																									{	/* Foreign/jtype.scm 145 */
																										obj_t BgL_arg2664z00_446;

																										obj_t BgL_arg2665z00_447;

																										obj_t BgL_arg2666z00_448;

																										obj_t BgL_arg2667z00_449;

																										obj_t BgL_arg2668z00_450;

																										obj_t BgL_arg2669z00_451;

																										obj_t BgL_arg2670z00_452;

																										{	/* Foreign/jtype.scm 96 */
																											obj_t BgL_arg2679z00_461;

																											obj_t BgL_arg2680z00_462;

																											BgL_arg2679z00_461 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 96 */
																												obj_t
																													BgL_arg2681z00_463;
																												obj_t
																													BgL_arg2682z00_464;
																												{	/* Foreign/jtype.scm 96 */
																													obj_t
																														BgL_arg2686z00_468;
																													{	/* Foreign/jtype.scm 96 */
																														obj_t
																															BgL_list2687z00_469;
																														BgL_list2687z00_469
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2686z00_468 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_oidz00_362,
																															BgL_list2687z00_469);
																													}
																													BgL_arg2681z00_463 =
																														MAKE_PAIR
																														(BgL_idzd2ze3objz31_364,
																														BgL_arg2686z00_468);
																												}
																												{	/* Foreign/jtype.scm 97 */
																													obj_t
																														BgL_list2688z00_470;
																													BgL_list2688z00_470 =
																														MAKE_PAIR
																														(CNST_TABLE_REF((
																																(long) 9)),
																														BNIL);
																													BgL_arg2682z00_464 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 29)),
																														CNST_TABLE_REF((
																																(long) 30)),
																														BgL_list2688z00_470);
																												}
																												{	/* Foreign/jtype.scm 96 */
																													obj_t
																														BgL_list2684z00_466;
																													{	/* Foreign/jtype.scm 96 */
																														obj_t
																															BgL_arg2685z00_467;
																														BgL_arg2685z00_467 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2684z00_466
																															=
																															MAKE_PAIR
																															(BgL_arg2682z00_464,
																															BgL_arg2685z00_467);
																													}
																													BgL_arg2680z00_462 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2681z00_463,
																														BgL_list2684z00_466);
																											}}
																											BgL_arg2664z00_446 =
																												MAKE_PAIR
																												(BgL_arg2679z00_461,
																												BgL_arg2680z00_462);
																										}
																										{	/* Foreign/jtype.scm 100 */
																											obj_t BgL_arg2690z00_472;

																											obj_t BgL_arg2691z00_473;

																											BgL_arg2690z00_472 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 100 */
																												obj_t
																													BgL_arg2692z00_474;
																												obj_t
																													BgL_arg2693z00_475;
																												{	/* Foreign/jtype.scm 100 */
																													obj_t
																														BgL_arg2697z00_479;
																													{	/* Foreign/jtype.scm 100 */
																														obj_t
																															BgL_list2698z00_480;
																														BgL_list2698z00_480
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2697z00_479 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 9)),
																															BgL_list2698z00_480);
																													}
																													BgL_arg2692z00_474 =
																														MAKE_PAIR
																														(BgL_tobjzd2ze3idz31_366,
																														BgL_arg2697z00_479);
																												}
																												{	/* Foreign/jtype.scm 101 */
																													obj_t
																														BgL_list2699z00_481;
																													BgL_list2699z00_481 =
																														MAKE_PAIR
																														(CNST_TABLE_REF((
																																(long) 9)),
																														BNIL);
																													BgL_arg2693z00_475 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 29)),
																														BgL_idz00_361,
																														BgL_list2699z00_481);
																												}
																												{	/* Foreign/jtype.scm 100 */
																													obj_t
																														BgL_list2695z00_477;
																													{	/* Foreign/jtype.scm 100 */
																														obj_t
																															BgL_arg2696z00_478;
																														BgL_arg2696z00_478 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2695z00_477
																															=
																															MAKE_PAIR
																															(BgL_arg2693z00_475,
																															BgL_arg2696z00_478);
																													}
																													BgL_arg2691z00_473 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2692z00_474,
																														BgL_list2695z00_477);
																											}}
																											BgL_arg2665z00_447 =
																												MAKE_PAIR
																												(BgL_arg2690z00_472,
																												BgL_arg2691z00_473);
																										}
																										{	/* Foreign/jtype.scm 105 */
																											obj_t BgL_arg2701z00_483;

																											obj_t BgL_arg2702z00_484;

																											BgL_arg2701z00_483 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 105 */
																												obj_t
																													BgL_arg2703z00_485;
																												obj_t
																													BgL_arg2704z00_486;
																												{	/* Foreign/jtype.scm 105 */
																													obj_t
																														BgL_arg2708z00_490;
																													{	/* Foreign/jtype.scm 105 */
																														obj_t
																															BgL_list2709z00_491;
																														BgL_list2709z00_491
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2708z00_490 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 27)),
																															BgL_list2709z00_491);
																													}
																													BgL_arg2703z00_485 =
																														MAKE_PAIR
																														(BgL_tidzf3zf3_368,
																														BgL_arg2708z00_490);
																												}
																												{	/* Foreign/jtype.scm 106 */
																													obj_t
																														BgL_list2710z00_492;
																													BgL_list2710z00_492 =
																														MAKE_PAIR
																														(CNST_TABLE_REF((
																																(long) 9)),
																														BNIL);
																													BgL_arg2704z00_486 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 28)),
																														BgL_idz00_361,
																														BgL_list2710z00_492);
																												}
																												{	/* Foreign/jtype.scm 105 */
																													obj_t
																														BgL_list2706z00_488;
																													{	/* Foreign/jtype.scm 105 */
																														obj_t
																															BgL_arg2707z00_489;
																														BgL_arg2707z00_489 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2706z00_488
																															=
																															MAKE_PAIR
																															(BgL_arg2704z00_486,
																															BgL_arg2707z00_489);
																													}
																													BgL_arg2702z00_484 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2703z00_485,
																														BgL_list2706z00_488);
																											}}
																											BgL_arg2666z00_448 =
																												MAKE_PAIR
																												(BgL_arg2701z00_483,
																												BgL_arg2702z00_484);
																										}
																										{	/* Foreign/jtype.scm 110 */
																											obj_t BgL_arg2712z00_494;

																											obj_t BgL_arg2713z00_495;

																											BgL_arg2712z00_494 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 110 */
																												obj_t
																													BgL_arg2714z00_496;
																												obj_t
																													BgL_arg2716z00_497;
																												{	/* Foreign/jtype.scm 110 */
																													obj_t
																														BgL_arg2720z00_501;
																													{	/* Foreign/jtype.scm 110 */
																														obj_t
																															BgL_list2721z00_502;
																														BgL_list2721z00_502
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2720z00_501 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_oidz00_362,
																															BgL_list2721z00_502);
																													}
																													BgL_arg2714z00_496 =
																														MAKE_PAIR
																														(BgL_tidzd2lengthzd2_370,
																														BgL_arg2720z00_501);
																												}
																												{	/* Foreign/jtype.scm 111 */
																													obj_t
																														BgL_list2722z00_503;
																													{	/* Foreign/jtype.scm 111 */
																														obj_t
																															BgL_arg2724z00_504;
																														{	/* Foreign/jtype.scm 111 */
																															obj_t
																																BgL_arg2725z00_505;
																															obj_t
																																BgL_arg2726z00_506;
																															BgL_arg2725z00_505
																																=
																																CNST_TABLE_REF((
																																	(long) 13));
																															{	/* Foreign/jtype.scm 111 */
																																obj_t
																																	BgL_arg2728z00_508;
																																BgL_arg2728z00_508
																																	=
																																	MAKE_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 9)),
																																	BNIL);
																																BgL_arg2726z00_506
																																	=
																																	MAKE_PAIR
																																	(BGl_string2887z00zzforeign_jtypez00,
																																	BgL_arg2728z00_508);
																															}
																															BgL_arg2724z00_504
																																=
																																MAKE_PAIR
																																(BgL_arg2725z00_505,
																																BgL_arg2726z00_506);
																														}
																														BgL_list2722z00_503
																															=
																															MAKE_PAIR
																															(BgL_itemzd2typezd2idz00_372,
																															BgL_arg2724z00_504);
																													}
																													BgL_arg2716z00_497 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 26)),
																														BgL_idz00_361,
																														BgL_list2722z00_503);
																												}
																												{	/* Foreign/jtype.scm 110 */
																													obj_t
																														BgL_list2718z00_499;
																													{	/* Foreign/jtype.scm 110 */
																														obj_t
																															BgL_arg2719z00_500;
																														BgL_arg2719z00_500 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2718z00_499
																															=
																															MAKE_PAIR
																															(BgL_arg2716z00_497,
																															BgL_arg2719z00_500);
																													}
																													BgL_arg2713z00_495 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2714z00_496,
																														BgL_list2718z00_499);
																											}}
																											BgL_arg2667z00_449 =
																												MAKE_PAIR
																												(BgL_arg2712z00_494,
																												BgL_arg2713z00_495);
																										}
																										{	/* Foreign/jtype.scm 116 */
																											obj_t BgL_arg2730z00_510;

																											obj_t BgL_arg2731z00_511;

																											BgL_arg2730z00_510 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 116 */
																												obj_t
																													BgL_arg2732z00_512;
																												obj_t
																													BgL_arg2733z00_513;
																												{	/* Foreign/jtype.scm 116 */
																													obj_t
																														BgL_arg2737z00_517;
																													{	/* Foreign/jtype.scm 116 */
																														obj_t
																															BgL_list2738z00_518;
																														BgL_list2738z00_518
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg2737z00_517 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 23)),
																															BgL_list2738z00_518);
																													}
																													BgL_arg2732z00_512 =
																														MAKE_PAIR
																														(BgL_tmakezd2idzd2_376,
																														BgL_arg2737z00_517);
																												}
																												{	/* Foreign/jtype.scm 117 */
																													obj_t
																														BgL_list2739z00_519;
																													{	/* Foreign/jtype.scm 117 */
																														obj_t
																															BgL_arg2740z00_520;
																														{	/* Foreign/jtype.scm 117 */
																															obj_t
																																BgL_arg2741z00_521;
																															obj_t
																																BgL_arg2742z00_522;
																															BgL_arg2741z00_521
																																=
																																CNST_TABLE_REF((
																																	(long) 13));
																															{	/* Foreign/jtype.scm 117 */
																																obj_t
																																	BgL_arg2745z00_524;
																																{	/* Foreign/jtype.scm 117 */
																																	obj_t
																																		BgL_arg2747z00_526;
																																	{	/* Foreign/jtype.scm 117 */
																																		obj_t
																																			BgL_arg2748z00_527;
																																		BgL_arg2748z00_527
																																			=
																																			MAKE_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					24)),
																																			BNIL);
																																		BgL_arg2747z00_526
																																			=
																																			MAKE_PAIR
																																			(BFALSE,
																																			BgL_arg2748z00_527);
																																	}
																																	BgL_arg2745z00_524
																																		=
																																		MAKE_PAIR
																																		(BGl_string2887z00zzforeign_jtypez00,
																																		BgL_arg2747z00_526);
																																}
																																BgL_arg2742z00_522
																																	=
																																	MAKE_PAIR
																																	(BGl_string2887z00zzforeign_jtypez00,
																																	BgL_arg2745z00_524);
																															}
																															BgL_arg2740z00_520
																																=
																																MAKE_PAIR
																																(BgL_arg2741z00_521,
																																BgL_arg2742z00_522);
																														}
																														BgL_list2739z00_519
																															=
																															MAKE_PAIR
																															(BgL_itemzd2typezd2idz00_372,
																															BgL_arg2740z00_520);
																													}
																													BgL_arg2733z00_513 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 25)),
																														BgL_idz00_361,
																														BgL_list2739z00_519);
																												}
																												{	/* Foreign/jtype.scm 116 */
																													obj_t
																														BgL_list2735z00_515;
																													{	/* Foreign/jtype.scm 116 */
																														obj_t
																															BgL_arg2736z00_516;
																														BgL_arg2736z00_516 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2735z00_515
																															=
																															MAKE_PAIR
																															(BgL_arg2733z00_513,
																															BgL_arg2736z00_516);
																													}
																													BgL_arg2731z00_511 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2732z00_512,
																														BgL_list2735z00_515);
																											}}
																											BgL_arg2668z00_450 =
																												MAKE_PAIR
																												(BgL_arg2730z00_510,
																												BgL_arg2731z00_511);
																										}
																										{	/* Foreign/jtype.scm 123 */
																											obj_t BgL_arg2750z00_529;

																											obj_t BgL_arg2752z00_530;

																											BgL_arg2750z00_529 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 123 */
																												obj_t
																													BgL_arg2753z00_531;
																												obj_t
																													BgL_arg2754z00_532;
																												{	/* Foreign/jtype.scm 123 */
																													obj_t
																														BgL_arg2759z00_536;
																													{	/* Foreign/jtype.scm 123 */
																														obj_t
																															BgL_list2760z00_537;
																														{	/* Foreign/jtype.scm 123 */
																															obj_t
																																BgL_arg2761z00_538;
																															obj_t
																																BgL_arg2762z00_539;
																															BgL_arg2761z00_538
																																=
																																CNST_TABLE_REF((
																																	(long) 19));
																															BgL_arg2762z00_539
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list2760z00_537
																																=
																																MAKE_PAIR
																																(BgL_arg2761z00_538,
																																BgL_arg2762z00_539);
																														}
																														BgL_arg2759z00_536 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_oidz00_362,
																															BgL_list2760z00_537);
																													}
																													BgL_arg2753z00_531 =
																														MAKE_PAIR
																														(BgL_tidzd2refzd2_378,
																														BgL_arg2759z00_536);
																												}
																												{	/* Foreign/jtype.scm 124 */
																													obj_t
																														BgL_list2763z00_540;
																													{	/* Foreign/jtype.scm 124 */
																														obj_t
																															BgL_arg2764z00_541;
																														{	/* Foreign/jtype.scm 124 */
																															obj_t
																																BgL_arg2765z00_542;
																															obj_t
																																BgL_arg2766z00_543;
																															BgL_arg2765z00_542
																																=
																																CNST_TABLE_REF((
																																	(long) 13));
																															{	/* Foreign/jtype.scm 124 */
																																obj_t
																																	BgL_arg2768z00_545;
																																{	/* Foreign/jtype.scm 125 */
																																	obj_t
																																		BgL_arg2769z00_546;
																																	obj_t
																																		BgL_arg2770z00_547;
																																	BgL_arg2769z00_546
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			9));
																																	BgL_arg2770z00_547
																																		=
																																		MAKE_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				20)),
																																		BNIL);
																																	BgL_arg2768z00_545
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2769z00_546,
																																		BgL_arg2770z00_547);
																																}
																																BgL_arg2766z00_543
																																	=
																																	MAKE_PAIR
																																	(BGl_string2887z00zzforeign_jtypez00,
																																	BgL_arg2768z00_545);
																															}
																															BgL_arg2764z00_541
																																=
																																MAKE_PAIR
																																(BgL_arg2765z00_542,
																																BgL_arg2766z00_543);
																														}
																														BgL_list2763z00_540
																															=
																															MAKE_PAIR
																															(BgL_itemzd2typezd2idz00_372,
																															BgL_arg2764z00_541);
																													}
																													BgL_arg2754z00_532 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 22)),
																														BgL_idz00_361,
																														BgL_list2763z00_540);
																												}
																												{	/* Foreign/jtype.scm 123 */
																													obj_t
																														BgL_list2756z00_534;
																													{	/* Foreign/jtype.scm 123 */
																														obj_t
																															BgL_arg2758z00_535;
																														BgL_arg2758z00_535 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2756z00_534
																															=
																															MAKE_PAIR
																															(BgL_arg2754z00_532,
																															BgL_arg2758z00_535);
																													}
																													BgL_arg2752z00_530 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2753z00_531,
																														BgL_list2756z00_534);
																											}}
																											BgL_arg2669z00_451 =
																												MAKE_PAIR
																												(BgL_arg2750z00_529,
																												BgL_arg2752z00_530);
																										}
																										{	/* Foreign/jtype.scm 128 */
																											obj_t BgL_arg2773z00_549;

																											obj_t BgL_arg2774z00_550;

																											BgL_arg2773z00_549 =
																												CNST_TABLE_REF(((long)
																													18));
																											{	/* Foreign/jtype.scm 128 */
																												obj_t
																													BgL_arg2775z00_551;
																												obj_t
																													BgL_arg2776z00_552;
																												{	/* Foreign/jtype.scm 128 */
																													obj_t
																														BgL_arg2780z00_556;
																													{	/* Foreign/jtype.scm 128 */
																														obj_t
																															BgL_list2781z00_557;
																														{	/* Foreign/jtype.scm 128 */
																															obj_t
																																BgL_arg2782z00_558;
																															obj_t
																																BgL_arg2783z00_559;
																															BgL_arg2782z00_558
																																=
																																CNST_TABLE_REF((
																																	(long) 19));
																															{	/* Foreign/jtype.scm 128 */
																																obj_t
																																	BgL_arg2784z00_560;
																																BgL_arg2784z00_560
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_arg2783z00_559
																																	=
																																	MAKE_PAIR
																																	(BgL_oitemzd2typezd2idz00_374,
																																	BgL_arg2784z00_560);
																															}
																															BgL_list2781z00_557
																																=
																																MAKE_PAIR
																																(BgL_arg2782z00_558,
																																BgL_arg2783z00_559);
																														}
																														BgL_arg2780z00_556 =
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_oidz00_362,
																															BgL_list2781z00_557);
																													}
																													BgL_arg2775z00_551 =
																														MAKE_PAIR
																														(BgL_idzd2setz12zc0_379,
																														BgL_arg2780z00_556);
																												}
																												{	/* Foreign/jtype.scm 129 */
																													obj_t
																														BgL_list2785z00_561;
																													{	/* Foreign/jtype.scm 129 */
																														obj_t
																															BgL_arg2786z00_562;
																														{	/* Foreign/jtype.scm 129 */
																															obj_t
																																BgL_arg2787z00_563;
																															obj_t
																																BgL_arg2789z00_564;
																															BgL_arg2787z00_563
																																=
																																CNST_TABLE_REF((
																																	(long) 13));
																															{	/* Foreign/jtype.scm 129 */
																																obj_t
																																	BgL_arg2791z00_566;
																																{	/* Foreign/jtype.scm 130 */
																																	obj_t
																																		BgL_arg2792z00_567;
																																	obj_t
																																		BgL_arg2793z00_568;
																																	BgL_arg2792z00_567
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			9));
																																	{	/* Foreign/jtype.scm 130 */
																																		obj_t
																																			BgL_arg2794z00_569;
																																		obj_t
																																			BgL_arg2795z00_570;
																																		BgL_arg2794z00_569
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				20));
																																		BgL_arg2795z00_570
																																			=
																																			MAKE_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					14)),
																																			BNIL);
																																		BgL_arg2793z00_568
																																			=
																																			MAKE_PAIR
																																			(BgL_arg2794z00_569,
																																			BgL_arg2795z00_570);
																																	}
																																	BgL_arg2791z00_566
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2792z00_567,
																																		BgL_arg2793z00_568);
																																}
																																BgL_arg2789z00_564
																																	=
																																	MAKE_PAIR
																																	(BGl_string2887z00zzforeign_jtypez00,
																																	BgL_arg2791z00_566);
																															}
																															BgL_arg2786z00_562
																																=
																																MAKE_PAIR
																																(BgL_arg2787z00_563,
																																BgL_arg2789z00_564);
																														}
																														BgL_list2785z00_561
																															=
																															MAKE_PAIR
																															(BgL_itemzd2typezd2idz00_372,
																															BgL_arg2786z00_562);
																													}
																													BgL_arg2776z00_552 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 21)),
																														BgL_idz00_361,
																														BgL_list2785z00_561);
																												}
																												{	/* Foreign/jtype.scm 128 */
																													obj_t
																														BgL_list2778z00_554;
																													{	/* Foreign/jtype.scm 128 */
																														obj_t
																															BgL_arg2779z00_555;
																														BgL_arg2779z00_555 =
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list2778z00_554
																															=
																															MAKE_PAIR
																															(BgL_arg2776z00_552,
																															BgL_arg2779z00_555);
																													}
																													BgL_arg2774z00_550 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg2775z00_551,
																														BgL_list2778z00_554);
																											}}
																											BgL_arg2670z00_452 =
																												MAKE_PAIR
																												(BgL_arg2773z00_549,
																												BgL_arg2774z00_550);
																										}
																										{	/* Foreign/jtype.scm 145 */
																											obj_t BgL_list2671z00_453;

																											{	/* Foreign/jtype.scm 145 */
																												obj_t
																													BgL_arg2672z00_454;
																												{	/* Foreign/jtype.scm 145 */
																													obj_t
																														BgL_arg2673z00_455;
																													{	/* Foreign/jtype.scm 145 */
																														obj_t
																															BgL_arg2674z00_456;
																														{	/* Foreign/jtype.scm 145 */
																															obj_t
																																BgL_arg2675z00_457;
																															{	/* Foreign/jtype.scm 145 */
																																obj_t
																																	BgL_arg2676z00_458;
																																{	/* Foreign/jtype.scm 145 */
																																	obj_t
																																		BgL_arg2677z00_459;
																																	BgL_arg2677z00_459
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2670z00_452,
																																		BNIL);
																																	BgL_arg2676z00_458
																																		=
																																		MAKE_PAIR
																																		(BgL_arg2669z00_451,
																																		BgL_arg2677z00_459);
																																}
																																BgL_arg2675z00_457
																																	=
																																	MAKE_PAIR
																																	(BgL_arg2668z00_450,
																																	BgL_arg2676z00_458);
																															}
																															BgL_arg2674z00_456
																																=
																																MAKE_PAIR
																																(BgL_arg2667z00_449,
																																BgL_arg2675z00_457);
																														}
																														BgL_arg2673z00_455 =
																															MAKE_PAIR
																															(BgL_arg2666z00_448,
																															BgL_arg2674z00_456);
																													}
																													BgL_arg2672z00_454 =
																														MAKE_PAIR
																														(BgL_arg2665z00_447,
																														BgL_arg2673z00_455);
																												}
																												BgL_list2671z00_453 =
																													MAKE_PAIR
																													(BgL_arg2664z00_446,
																													BgL_arg2672z00_454);
																											}
																											return
																												BgL_list2671z00_453;
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
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_jtypez00()
	{
		AN_OBJECT;
		{	/* Foreign/jtype.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 195902195),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 453255680),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 178768066),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 477377954),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 477408199),
				BSTRING_TO_STRING(BGl_string2888z00zzforeign_jtypez00));
		}
	}

#ifdef __cplusplus
}
#endif
