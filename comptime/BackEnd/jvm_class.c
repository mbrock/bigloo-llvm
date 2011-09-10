/*===========================================================================*/
/*   (BackEnd/jvm_class.scm)                                                 */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/jvm_class.scm)*/
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

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;


	static obj_t BGl__fillzd2jvmz12zc0zzbackend_jvm_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2jvmz80zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z52thezd2jvmzd2nilz52zzbackend_jvm_classz00 = BUNSPEC;
	static obj_t
		BGl_structzb2objectzd2ze3objec2160z83zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_jvmz00_bglt
		BGl_makezd2jvmzd2zzbackend_jvm_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t, bool_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jvmz00_bglt BGl_jvmzd2nilzd2zzbackend_jvm_classz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00 =
		BUNSPEC;
	BGL_EXPORTED_DECL BgL_jvmz00_bglt
		BGl_z52allocatezd2jvmz80zzbackend_jvm_classz00();
	static obj_t BGl_genericzd2initzd2zzbackend_jvm_classz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_jvm_classz00();
	extern obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl__makezd2jvmzd2zzbackend_jvm_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvm_classz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL BgL_jvmz00_bglt
		BGl_fillzd2jvmz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__jvmzf3zf3zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_jvm_classz00();
	BGL_EXPORTED_DEF obj_t BGl_jvmz00zzbackend_jvm_classz00 = BUNSPEC;
	static obj_t BGl__jvmzd2nilzd2zzbackend_jvm_classz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2jvm2158ze3zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_jvmzf3zf3zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_jvm_classz00();
	extern obj_t BGl_bvmz00zzbackend_bvmz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvm_classz00();
	static obj_t BGl_methodzd2initzd2zzbackend_jvm_classz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string2538z00zzbackend_jvm_classz00,
		BgL_bgl_string2538za700za7za7b2553za7, "", 0);
	      DEFINE_STRING(BGl_string2540z00zzbackend_jvm_classz00,
		BgL_bgl_string2540za700za7za7b2554za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2542z00zzbackend_jvm_classz00,
		BgL_bgl_string2542za700za7za7b2555za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string2543z00zzbackend_jvm_classz00,
		BgL_bgl_string2543za700za7za7b2556za7, "backend_jvm_class", 17);
	      DEFINE_STRING(BGl_string2544z00zzbackend_jvm_classz00,
		BgL_bgl_string2544za700za7za7b2557za7, "_ jvm ", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jvmzd2envz00zzbackend_jvm_classz00,
		BgL_bgl__makeza7d2jvmza7d2za7za72558z00,
		BGl__makezd2jvmzd2zzbackend_jvm_classz00, 0L, BUNSPEC, 37);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2nilzd2envz00zzbackend_jvm_classz00,
		BgL_bgl__jvmza7d2nilza7d2za7za7b2559z00,
		BGl__jvmzd2nilzd2zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzf3zd2envz21zzbackend_jvm_classz00,
		BgL_bgl__jvmza7f3za7f3za7za7back2560z00,
		BGl__jvmzf3zf3zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2jvmzd2envz52zzbackend_jvm_classz00,
		BgL_bgl__za752allocateza7d2j2561z00,
		BGl__z52allocatezd2jvmz80zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2jvmz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl__fillza7d2jvmza712za7c2562za7,
		BGl__fillzd2jvmz12zc0zzbackend_jvm_classz00, 0L, BUNSPEC, 38);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2539z00zzbackend_jvm_classz00,
		BgL_bgl_objectza7d2za7e3stru2563z00,
		BGl_objectzd2ze3structzd2jvm2158ze3zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2541z00zzbackend_jvm_classz00,
		BgL_bgl_structza7b2objectza72564z00,
		BGl_structzb2objectzd2ze3objec2160z83zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long
		BgL_checksumz00_1180, char *BgL_fromz00_1181)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_jvm_classz00();
					BGl_cnstzd2initzd2zzbackend_jvm_classz00();
					BGl_importedzd2moduleszd2initz00zzbackend_jvm_classz00();
					BGl_objectzd2initzd2zzbackend_jvm_classz00();
					BGl_methodzd2initzd2zzbackend_jvm_classz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_jvm_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_jvm_class");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			{	/* BackEnd/jvm_class.scm 15 */
				obj_t BgL_cportz00_1053;

				BgL_cportz00_1053 =
					bgl_open_input_string(BGl_string2544z00zzbackend_jvm_classz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1054;

					BgL_iz00_1054 = ((long) 1);
				BgL_loopz00_1055:
					if ((BgL_iz00_1054 == ((long) -1)))
						{	/* BackEnd/jvm_class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/jvm_class.scm 15 */
							{	/* BackEnd/jvm_class.scm 15 */
								obj_t BgL_arg2550z00_1057;

								{	/* BackEnd/jvm_class.scm 15 */

									{	/* BackEnd/jvm_class.scm 15 */
										obj_t BgL_locationz00_1059;

										BgL_locationz00_1059 = BBOOL(((bool_t) 0));
										{	/* BackEnd/jvm_class.scm 15 */

											BgL_arg2550z00_1057 =
												BGl_readz00zz__readerz00(BgL_cportz00_1053,
												BgL_locationz00_1059);
										}
									}
								}
								{	/* BackEnd/jvm_class.scm 15 */
									int BgL_auxz00_1198;

									BgL_auxz00_1198 = (int) (BgL_iz00_1054);
									CNST_TABLE_SET(BgL_auxz00_1198, BgL_arg2550z00_1057);
							}}
							{	/* BackEnd/jvm_class.scm 15 */
								int BgL_auxz00_1060;

								BgL_auxz00_1060 = (int) ((BgL_iz00_1054 - ((long) 1)));
								{
									long BgL_iz00_1203;

									BgL_iz00_1203 = (long) (BgL_auxz00_1060);
									BgL_iz00_1054 = BgL_iz00_1203;
									goto BgL_loopz00_1055;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			{	/* BackEnd/jvm_class.scm 19 */
				obj_t BgL_arg2165z00_338;

				obj_t BgL_arg2172z00_339;

				obj_t BgL_arg2187z00_342;

				BgL_arg2165z00_338 = CNST_TABLE_REF(((long) 0));
				BgL_arg2172z00_339 = BGl_bvmz00zzbackend_bvmz00;
				{	/* BackEnd/jvm_class.scm 19 */
					obj_t BgL_v2156z00_343;

					BgL_v2156z00_343 = create_vector((int) (((long) 0)));
					BgL_arg2187z00_342 = BgL_v2156z00_343;
				}
				BGl_jvmz00zzbackend_jvm_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2165z00_338,
					BgL_arg2172z00_339, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2jvmzd2envz52zzbackend_jvm_classz00,
					BGl_jvmzd2nilzd2envz00zzbackend_jvm_classz00,
					BGl_jvmzf3zd2envz21zzbackend_jvm_classz00, ((long) 127314684), BFALSE,
					BFALSE, BgL_arg2187z00_342);
			}
			return (BGl_z52thezd2jvmzd2nilz52zzbackend_jvm_classz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* jvm? */
	BGL_EXPORTED_DEF bool_t BGl_jvmzf3zf3zzbackend_jvm_classz00(obj_t
		BgL_obj2155z00_1)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2155z00_1,
				BGl_jvmz00zzbackend_jvm_classz00);
		}
	}



/* _jvm? */
	obj_t BGl__jvmzf3zf3zzbackend_jvm_classz00(obj_t BgL_envz00_962,
		obj_t BgL_obj2155z00_963)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2155z00_963,
					BGl_jvmz00zzbackend_jvm_classz00));
		}
	}



/* make-jvm */
	BGL_EXPORTED_DEF BgL_jvmz00_bglt BGl_makezd2jvmzd2zzbackend_jvm_classz00(obj_t
		BgL_language1889z00_5, obj_t BgL_srfi01890z00_6, obj_t BgL_name1891z00_7,
		obj_t BgL_externzd2variables1892zd2_8,
		obj_t BgL_externzd2functions1893zd2_9, obj_t BgL_externzd2types1894zd2_10,
		obj_t BgL_variables1895z00_11, obj_t BgL_functions1896z00_12,
		obj_t BgL_types1897z00_13, bool_t BgL_typed1898z00_14,
		obj_t BgL_heapzd2suffix1899zd2_15, obj_t BgL_heapzd2compatible1900zd2_16,
		bool_t BgL_callcc1901z00_17, bool_t BgL_qualifiedzd2types1902zd2_18,
		bool_t BgL_effectzb21903zb2_19, bool_t BgL_removezd2emptyzd2let1904z00_20,
		bool_t BgL_foreignzd2closure1905zd2_21, bool_t BgL_typedzd2eq1906zd2_22,
		bool_t BgL_tracezd2support1907zd2_23,
		obj_t BgL_foreignzd2clausezd2suppo1908z00_24,
		obj_t BgL_debugzd2support1909zd2_25, bool_t BgL_pragmazd2support1910zd2_26,
		bool_t BgL_tvectorzd2descrzd2suppor1911z00_27,
		bool_t BgL_requirezd2tailc1912zd2_28, obj_t BgL_registers1913z00_29,
		obj_t BgL_pregisters1914z00_30, bool_t BgL_boundzd2check1915zd2_31,
		bool_t BgL_typezd2check1916zd2_32, obj_t BgL_qname1917z00_33,
		obj_t BgL_classes1918z00_34, obj_t BgL_currentzd2class1919zd2_35,
		obj_t BgL_declarations1920z00_36, obj_t BgL_fields1921z00_37,
		obj_t BgL_methods1922z00_38, obj_t BgL_currentzd2method1923zd2_39,
		obj_t BgL_code1924z00_40, obj_t BgL_inline1925z00_41)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{	/* BackEnd/jvm_class.scm 19 */
				BgL_jvmz00_bglt BgL_new1926z00_526;

				{	/* BackEnd/jvm_class.scm 19 */
					BgL_jvmz00_bglt BgL_res2531z00_531;

					{	/* BackEnd/jvm_class.scm 19 */
						BgL_jvmz00_bglt BgL_new2004z00_527;

						BgL_new2004z00_527 =
							((BgL_jvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jvmz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2004z00_527),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jvmz00zzbackend_jvm_classz00));
						{	/* BackEnd/jvm_class.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_1216;

							BgL_auxz00_1216 = (BgL_objectz00_bglt) (BgL_new2004z00_527);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1216, BFALSE);
						}
						BgL_res2531z00_531 = BgL_new2004z00_527;
					}
					BgL_new1926z00_526 = BgL_res2531z00_531;
				}
				{	/* BackEnd/jvm_class.scm 19 */
					BgL_jvmz00_bglt BgL_res2532z00_607;

					{	/* BackEnd/jvm_class.scm 19 */
						BgL_jvmz00_bglt BgL_new1965z00_532;

						BgL_new1965z00_532 = BgL_new1926z00_526;
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_language1928z00_570;

							obj_t BgL_srfi01929z00_571;

							obj_t BgL_name1930z00_572;

							obj_t BgL_externzd2variables1931zd2_573;

							obj_t BgL_externzd2functions1932zd2_574;

							obj_t BgL_externzd2types1933zd2_575;

							obj_t BgL_variables1934z00_576;

							obj_t BgL_functions1935z00_577;

							obj_t BgL_types1936z00_578;

							bool_t BgL_typed1937z00_579;

							obj_t BgL_heapzd2suffix1938zd2_580;

							obj_t BgL_heapzd2compatible1939zd2_581;

							bool_t BgL_callcc1940z00_582;

							bool_t BgL_qualifiedzd2types1941zd2_583;

							bool_t BgL_effectzb21942zb2_584;

							bool_t BgL_removezd2emptyzd2let1943z00_585;

							bool_t BgL_foreignzd2closure1944zd2_586;

							bool_t BgL_typedzd2eq1945zd2_587;

							bool_t BgL_tracezd2support1946zd2_588;

							obj_t BgL_foreignzd2clausezd2suppo1947z00_589;

							obj_t BgL_debugzd2support1948zd2_590;

							bool_t BgL_pragmazd2support1949zd2_591;

							bool_t BgL_tvectorzd2descrzd2suppor1950z00_592;

							bool_t BgL_requirezd2tailc1951zd2_593;

							obj_t BgL_registers1952z00_594;

							obj_t BgL_pregisters1953z00_595;

							bool_t BgL_boundzd2check1954zd2_596;

							bool_t BgL_typezd2check1955zd2_597;

							obj_t BgL_qname1956z00_598;

							obj_t BgL_classes1957z00_599;

							obj_t BgL_currentzd2class1958zd2_600;

							obj_t BgL_declarations1959z00_601;

							obj_t BgL_fields1960z00_602;

							obj_t BgL_methods1961z00_603;

							obj_t BgL_currentzd2method1962zd2_604;

							obj_t BgL_code1963z00_605;

							obj_t BgL_inline1964z00_606;

							BgL_language1928z00_570 = BgL_language1889z00_5;
							BgL_srfi01929z00_571 = BgL_srfi01890z00_6;
							BgL_name1930z00_572 = BgL_name1891z00_7;
							BgL_externzd2variables1931zd2_573 =
								BgL_externzd2variables1892zd2_8;
							BgL_externzd2functions1932zd2_574 =
								BgL_externzd2functions1893zd2_9;
							BgL_externzd2types1933zd2_575 = BgL_externzd2types1894zd2_10;
							BgL_variables1934z00_576 = BgL_variables1895z00_11;
							BgL_functions1935z00_577 = BgL_functions1896z00_12;
							BgL_types1936z00_578 = BgL_types1897z00_13;
							BgL_typed1937z00_579 = BgL_typed1898z00_14;
							BgL_heapzd2suffix1938zd2_580 = BgL_heapzd2suffix1899zd2_15;
							BgL_heapzd2compatible1939zd2_581 =
								BgL_heapzd2compatible1900zd2_16;
							BgL_callcc1940z00_582 = BgL_callcc1901z00_17;
							BgL_qualifiedzd2types1941zd2_583 =
								BgL_qualifiedzd2types1902zd2_18;
							BgL_effectzb21942zb2_584 = BgL_effectzb21903zb2_19;
							BgL_removezd2emptyzd2let1943z00_585 =
								BgL_removezd2emptyzd2let1904z00_20;
							BgL_foreignzd2closure1944zd2_586 =
								BgL_foreignzd2closure1905zd2_21;
							BgL_typedzd2eq1945zd2_587 = BgL_typedzd2eq1906zd2_22;
							BgL_tracezd2support1946zd2_588 = BgL_tracezd2support1907zd2_23;
							BgL_foreignzd2clausezd2suppo1947z00_589 =
								BgL_foreignzd2clausezd2suppo1908z00_24;
							BgL_debugzd2support1948zd2_590 = BgL_debugzd2support1909zd2_25;
							BgL_pragmazd2support1949zd2_591 = BgL_pragmazd2support1910zd2_26;
							BgL_tvectorzd2descrzd2suppor1950z00_592 =
								BgL_tvectorzd2descrzd2suppor1911z00_27;
							BgL_requirezd2tailc1951zd2_593 = BgL_requirezd2tailc1912zd2_28;
							BgL_registers1952z00_594 = BgL_registers1913z00_29;
							BgL_pregisters1953z00_595 = BgL_pregisters1914z00_30;
							BgL_boundzd2check1954zd2_596 = BgL_boundzd2check1915zd2_31;
							BgL_typezd2check1955zd2_597 = BgL_typezd2check1916zd2_32;
							BgL_qname1956z00_598 = BgL_qname1917z00_33;
							BgL_classes1957z00_599 = BgL_classes1918z00_34;
							BgL_currentzd2class1958zd2_600 = BgL_currentzd2class1919zd2_35;
							BgL_declarations1959z00_601 = BgL_declarations1920z00_36;
							BgL_fields1960z00_602 = BgL_fields1921z00_37;
							BgL_methods1961z00_603 = BgL_methods1922z00_38;
							BgL_currentzd2method1962zd2_604 = BgL_currentzd2method1923zd2_39;
							BgL_code1963z00_605 = BgL_code1924z00_40;
							BgL_inline1964z00_606 = BgL_inline1925z00_41;
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_languagez00) =
								((obj_t) BgL_language1928z00_570), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01929z00_571), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_namez00) =
								((obj_t) BgL_name1930z00_572), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1931zd2_573), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1932zd2_574), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1933zd2_575), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1934z00_576), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1935z00_577), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_typesz00) =
								((obj_t) BgL_types1936z00_578), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_typedz00) =
								((bool_t) BgL_typed1937z00_579), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1938zd2_580), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1939zd2_581), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_callccz00) =
								((bool_t) BgL_callcc1940z00_582), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1941zd2_583), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21942zb2_584), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1943z00_585), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1944zd2_586), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1945zd2_587), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1946zd2_588), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1947z00_589), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1948zd2_590), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1949zd2_591), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1950z00_592), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1951zd2_593), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_registersz00) =
								((obj_t) BgL_registers1952z00_594), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1953z00_595), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1954zd2_596), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1955zd2_597), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_qnamez00) =
								((obj_t) BgL_qname1956z00_598), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_classesz00) =
								((obj_t) BgL_classes1957z00_599), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_currentzd2classzd2) =
								((obj_t) BgL_currentzd2class1958zd2_600), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_declarationsz00) =
								((obj_t) BgL_declarations1959z00_601), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_fieldsz00) =
								((obj_t) BgL_fields1960z00_602), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_methodsz00) =
								((obj_t) BgL_methods1961z00_603), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->
									BgL_currentzd2methodzd2) =
								((obj_t) BgL_currentzd2method1962zd2_604), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_codez00) =
								((obj_t) BgL_code1963z00_605), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_532))->BgL_inlinez00) =
								((obj_t) BgL_inline1964z00_606), BUNSPEC);
							BgL_res2532z00_607 = BgL_new1965z00_532;
					}} BgL_res2532z00_607;
				}
				BGl_backendzd2initializa7ez12z67zzbackend_backendz00(
					(BgL_backendz00_bglt) (BgL_new1926z00_526));
				return BgL_new1926z00_526;
			}
		}
	}



/* _make-jvm */
	obj_t BGl__makezd2jvmzd2zzbackend_jvm_classz00(obj_t BgL_envz00_964,
		obj_t BgL_language1889z00_965, obj_t BgL_srfi01890z00_966,
		obj_t BgL_name1891z00_967, obj_t BgL_externzd2variables1892zd2_968,
		obj_t BgL_externzd2functions1893zd2_969,
		obj_t BgL_externzd2types1894zd2_970, obj_t BgL_variables1895z00_971,
		obj_t BgL_functions1896z00_972, obj_t BgL_types1897z00_973,
		obj_t BgL_typed1898z00_974, obj_t BgL_heapzd2suffix1899zd2_975,
		obj_t BgL_heapzd2compatible1900zd2_976, obj_t BgL_callcc1901z00_977,
		obj_t BgL_qualifiedzd2types1902zd2_978, obj_t BgL_effectzb21903zb2_979,
		obj_t BgL_removezd2emptyzd2let1904z00_980,
		obj_t BgL_foreignzd2closure1905zd2_981, obj_t BgL_typedzd2eq1906zd2_982,
		obj_t BgL_tracezd2support1907zd2_983,
		obj_t BgL_foreignzd2clausezd2suppo1908z00_984,
		obj_t BgL_debugzd2support1909zd2_985, obj_t BgL_pragmazd2support1910zd2_986,
		obj_t BgL_tvectorzd2descrzd2suppor1911z00_987,
		obj_t BgL_requirezd2tailc1912zd2_988, obj_t BgL_registers1913z00_989,
		obj_t BgL_pregisters1914z00_990, obj_t BgL_boundzd2check1915zd2_991,
		obj_t BgL_typezd2check1916zd2_992, obj_t BgL_qname1917z00_993,
		obj_t BgL_classes1918z00_994, obj_t BgL_currentzd2class1919zd2_995,
		obj_t BgL_declarations1920z00_996, obj_t BgL_fields1921z00_997,
		obj_t BgL_methods1922z00_998, obj_t BgL_currentzd2method1923zd2_999,
		obj_t BgL_code1924z00_1000, obj_t BgL_inline1925z00_1001)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			return
				(obj_t) (BGl_makezd2jvmzd2zzbackend_jvm_classz00
				(BgL_language1889z00_965, BgL_srfi01890z00_966, BgL_name1891z00_967,
					BgL_externzd2variables1892zd2_968, BgL_externzd2functions1893zd2_969,
					BgL_externzd2types1894zd2_970, BgL_variables1895z00_971,
					BgL_functions1896z00_972, BgL_types1897z00_973,
					CBOOL(BgL_typed1898z00_974), BgL_heapzd2suffix1899zd2_975,
					BgL_heapzd2compatible1900zd2_976, CBOOL(BgL_callcc1901z00_977),
					CBOOL(BgL_qualifiedzd2types1902zd2_978),
					CBOOL(BgL_effectzb21903zb2_979),
					CBOOL(BgL_removezd2emptyzd2let1904z00_980),
					CBOOL(BgL_foreignzd2closure1905zd2_981),
					CBOOL(BgL_typedzd2eq1906zd2_982),
					CBOOL(BgL_tracezd2support1907zd2_983),
					BgL_foreignzd2clausezd2suppo1908z00_984,
					BgL_debugzd2support1909zd2_985,
					CBOOL(BgL_pragmazd2support1910zd2_986),
					CBOOL(BgL_tvectorzd2descrzd2suppor1911z00_987),
					CBOOL(BgL_requirezd2tailc1912zd2_988), BgL_registers1913z00_989,
					BgL_pregisters1914z00_990, CBOOL(BgL_boundzd2check1915zd2_991),
					CBOOL(BgL_typezd2check1916zd2_992), BgL_qname1917z00_993,
					BgL_classes1918z00_994, BgL_currentzd2class1919zd2_995,
					BgL_declarations1920z00_996, BgL_fields1921z00_997,
					BgL_methods1922z00_998, BgL_currentzd2method1923zd2_999,
					BgL_code1924z00_1000, BgL_inline1925z00_1001));
		}
	}



/* fill-jvm! */
	BGL_EXPORTED_DEF BgL_jvmz00_bglt
		BGl_fillzd2jvmz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_new1965z00_42, obj_t BgL_language1928z00_43, obj_t BgL_srfi01929z00_44,
		obj_t BgL_name1930z00_45, obj_t BgL_externzd2variables1931zd2_46,
		obj_t BgL_externzd2functions1932zd2_47, obj_t BgL_externzd2types1933zd2_48,
		obj_t BgL_variables1934z00_49, obj_t BgL_functions1935z00_50,
		obj_t BgL_types1936z00_51, bool_t BgL_typed1937z00_52,
		obj_t BgL_heapzd2suffix1938zd2_53, obj_t BgL_heapzd2compatible1939zd2_54,
		bool_t BgL_callcc1940z00_55, bool_t BgL_qualifiedzd2types1941zd2_56,
		bool_t BgL_effectzb21942zb2_57, bool_t BgL_removezd2emptyzd2let1943z00_58,
		bool_t BgL_foreignzd2closure1944zd2_59, bool_t BgL_typedzd2eq1945zd2_60,
		bool_t BgL_tracezd2support1946zd2_61,
		obj_t BgL_foreignzd2clausezd2suppo1947z00_62,
		obj_t BgL_debugzd2support1948zd2_63, bool_t BgL_pragmazd2support1949zd2_64,
		bool_t BgL_tvectorzd2descrzd2suppor1950z00_65,
		bool_t BgL_requirezd2tailc1951zd2_66, obj_t BgL_registers1952z00_67,
		obj_t BgL_pregisters1953z00_68, bool_t BgL_boundzd2check1954zd2_69,
		bool_t BgL_typezd2check1955zd2_70, obj_t BgL_qname1956z00_71,
		obj_t BgL_classes1957z00_72, obj_t BgL_currentzd2class1958zd2_73,
		obj_t BgL_declarations1959z00_74, obj_t BgL_fields1960z00_75,
		obj_t BgL_methods1961z00_76, obj_t BgL_currentzd2method1962zd2_77,
		obj_t BgL_code1963z00_78, obj_t BgL_inline1964z00_79)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{	/* BackEnd/jvm_class.scm 19 */
				obj_t BgL_language1928z00_1062;

				obj_t BgL_srfi01929z00_1063;

				obj_t BgL_name1930z00_1064;

				obj_t BgL_externzd2variables1931zd2_1065;

				obj_t BgL_externzd2functions1932zd2_1066;

				obj_t BgL_externzd2types1933zd2_1067;

				obj_t BgL_variables1934z00_1068;

				obj_t BgL_functions1935z00_1069;

				obj_t BgL_types1936z00_1070;

				bool_t BgL_typed1937z00_1071;

				obj_t BgL_heapzd2suffix1938zd2_1072;

				obj_t BgL_heapzd2compatible1939zd2_1073;

				bool_t BgL_callcc1940z00_1074;

				bool_t BgL_qualifiedzd2types1941zd2_1075;

				bool_t BgL_effectzb21942zb2_1076;

				bool_t BgL_removezd2emptyzd2let1943z00_1077;

				bool_t BgL_foreignzd2closure1944zd2_1078;

				bool_t BgL_typedzd2eq1945zd2_1079;

				bool_t BgL_tracezd2support1946zd2_1080;

				obj_t BgL_foreignzd2clausezd2suppo1947z00_1081;

				obj_t BgL_debugzd2support1948zd2_1082;

				bool_t BgL_pragmazd2support1949zd2_1083;

				bool_t BgL_tvectorzd2descrzd2suppor1950z00_1084;

				bool_t BgL_requirezd2tailc1951zd2_1085;

				obj_t BgL_registers1952z00_1086;

				obj_t BgL_pregisters1953z00_1087;

				bool_t BgL_boundzd2check1954zd2_1088;

				bool_t BgL_typezd2check1955zd2_1089;

				obj_t BgL_qname1956z00_1090;

				obj_t BgL_classes1957z00_1091;

				obj_t BgL_currentzd2class1958zd2_1092;

				obj_t BgL_declarations1959z00_1093;

				obj_t BgL_fields1960z00_1094;

				obj_t BgL_methods1961z00_1095;

				obj_t BgL_currentzd2method1962zd2_1096;

				obj_t BgL_code1963z00_1097;

				obj_t BgL_inline1964z00_1098;

				BgL_language1928z00_1062 = BgL_language1928z00_43;
				BgL_srfi01929z00_1063 = BgL_srfi01929z00_44;
				BgL_name1930z00_1064 = BgL_name1930z00_45;
				BgL_externzd2variables1931zd2_1065 = BgL_externzd2variables1931zd2_46;
				BgL_externzd2functions1932zd2_1066 = BgL_externzd2functions1932zd2_47;
				BgL_externzd2types1933zd2_1067 = BgL_externzd2types1933zd2_48;
				BgL_variables1934z00_1068 = BgL_variables1934z00_49;
				BgL_functions1935z00_1069 = BgL_functions1935z00_50;
				BgL_types1936z00_1070 = BgL_types1936z00_51;
				BgL_typed1937z00_1071 = BgL_typed1937z00_52;
				BgL_heapzd2suffix1938zd2_1072 = BgL_heapzd2suffix1938zd2_53;
				BgL_heapzd2compatible1939zd2_1073 = BgL_heapzd2compatible1939zd2_54;
				BgL_callcc1940z00_1074 = BgL_callcc1940z00_55;
				BgL_qualifiedzd2types1941zd2_1075 = BgL_qualifiedzd2types1941zd2_56;
				BgL_effectzb21942zb2_1076 = BgL_effectzb21942zb2_57;
				BgL_removezd2emptyzd2let1943z00_1077 =
					BgL_removezd2emptyzd2let1943z00_58;
				BgL_foreignzd2closure1944zd2_1078 = BgL_foreignzd2closure1944zd2_59;
				BgL_typedzd2eq1945zd2_1079 = BgL_typedzd2eq1945zd2_60;
				BgL_tracezd2support1946zd2_1080 = BgL_tracezd2support1946zd2_61;
				BgL_foreignzd2clausezd2suppo1947z00_1081 =
					BgL_foreignzd2clausezd2suppo1947z00_62;
				BgL_debugzd2support1948zd2_1082 = BgL_debugzd2support1948zd2_63;
				BgL_pragmazd2support1949zd2_1083 = BgL_pragmazd2support1949zd2_64;
				BgL_tvectorzd2descrzd2suppor1950z00_1084 =
					BgL_tvectorzd2descrzd2suppor1950z00_65;
				BgL_requirezd2tailc1951zd2_1085 = BgL_requirezd2tailc1951zd2_66;
				BgL_registers1952z00_1086 = BgL_registers1952z00_67;
				BgL_pregisters1953z00_1087 = BgL_pregisters1953z00_68;
				BgL_boundzd2check1954zd2_1088 = BgL_boundzd2check1954zd2_69;
				BgL_typezd2check1955zd2_1089 = BgL_typezd2check1955zd2_70;
				BgL_qname1956z00_1090 = BgL_qname1956z00_71;
				BgL_classes1957z00_1091 = BgL_classes1957z00_72;
				BgL_currentzd2class1958zd2_1092 = BgL_currentzd2class1958zd2_73;
				BgL_declarations1959z00_1093 = BgL_declarations1959z00_74;
				BgL_fields1960z00_1094 = BgL_fields1960z00_75;
				BgL_methods1961z00_1095 = BgL_methods1961z00_76;
				BgL_currentzd2method1962zd2_1096 = BgL_currentzd2method1962zd2_77;
				BgL_code1963z00_1097 = BgL_code1963z00_78;
				BgL_inline1964z00_1098 = BgL_inline1964z00_79;
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_languagez00) =
					((obj_t) BgL_language1928z00_1062), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01929z00_1063), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_namez00) =
					((obj_t) BgL_name1930z00_1064), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1931zd2_1065), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1932zd2_1066), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1933zd2_1067), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_variablesz00) =
					((obj_t) BgL_variables1934z00_1068), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_functionsz00) =
					((obj_t) BgL_functions1935z00_1069), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_typesz00) =
					((obj_t) BgL_types1936z00_1070), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_typedz00) =
					((bool_t) BgL_typed1937z00_1071), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1938zd2_1072), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1939zd2_1073), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_callccz00) =
					((bool_t) BgL_callcc1940z00_1074), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1941zd2_1075), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21942zb2_1076), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1943z00_1077), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1944zd2_1078), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1945zd2_1079), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1946zd2_1080), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1947z00_1081), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1948zd2_1082), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1949zd2_1083), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1950z00_1084), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1951zd2_1085), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_registersz00) =
					((obj_t) BgL_registers1952z00_1086), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1953z00_1087), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1954zd2_1088), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1955zd2_1089), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_qnamez00) =
					((obj_t) BgL_qname1956z00_1090), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_classesz00) =
					((obj_t) BgL_classes1957z00_1091), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_currentzd2classzd2) =
					((obj_t) BgL_currentzd2class1958zd2_1092), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_declarationsz00) =
					((obj_t) BgL_declarations1959z00_1093), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_fieldsz00) =
					((obj_t) BgL_fields1960z00_1094), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_methodsz00) =
					((obj_t) BgL_methods1961z00_1095), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->
						BgL_currentzd2methodzd2) =
					((obj_t) BgL_currentzd2method1962zd2_1096), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_codez00) =
					((obj_t) BgL_code1963z00_1097), BUNSPEC);
				((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_42))->BgL_inlinez00) =
					((obj_t) BgL_inline1964z00_1098), BUNSPEC);
				return BgL_new1965z00_42;
			}
		}
	}



/* _fill-jvm! */
	obj_t BGl__fillzd2jvmz12zc0zzbackend_jvm_classz00(obj_t BgL_envz00_1002,
		obj_t BgL_new1965z00_1003, obj_t BgL_language1928z00_1004,
		obj_t BgL_srfi01929z00_1005, obj_t BgL_name1930z00_1006,
		obj_t BgL_externzd2variables1931zd2_1007,
		obj_t BgL_externzd2functions1932zd2_1008,
		obj_t BgL_externzd2types1933zd2_1009, obj_t BgL_variables1934z00_1010,
		obj_t BgL_functions1935z00_1011, obj_t BgL_types1936z00_1012,
		obj_t BgL_typed1937z00_1013, obj_t BgL_heapzd2suffix1938zd2_1014,
		obj_t BgL_heapzd2compatible1939zd2_1015, obj_t BgL_callcc1940z00_1016,
		obj_t BgL_qualifiedzd2types1941zd2_1017, obj_t BgL_effectzb21942zb2_1018,
		obj_t BgL_removezd2emptyzd2let1943z00_1019,
		obj_t BgL_foreignzd2closure1944zd2_1020, obj_t BgL_typedzd2eq1945zd2_1021,
		obj_t BgL_tracezd2support1946zd2_1022,
		obj_t BgL_foreignzd2clausezd2suppo1947z00_1023,
		obj_t BgL_debugzd2support1948zd2_1024,
		obj_t BgL_pragmazd2support1949zd2_1025,
		obj_t BgL_tvectorzd2descrzd2suppor1950z00_1026,
		obj_t BgL_requirezd2tailc1951zd2_1027, obj_t BgL_registers1952z00_1028,
		obj_t BgL_pregisters1953z00_1029, obj_t BgL_boundzd2check1954zd2_1030,
		obj_t BgL_typezd2check1955zd2_1031, obj_t BgL_qname1956z00_1032,
		obj_t BgL_classes1957z00_1033, obj_t BgL_currentzd2class1958zd2_1034,
		obj_t BgL_declarations1959z00_1035, obj_t BgL_fields1960z00_1036,
		obj_t BgL_methods1961z00_1037, obj_t BgL_currentzd2method1962zd2_1038,
		obj_t BgL_code1963z00_1039, obj_t BgL_inline1964z00_1040)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{	/* BackEnd/jvm_class.scm 19 */
				BgL_jvmz00_bglt BgL_auxz00_1310;

				{	/* BackEnd/jvm_class.scm 19 */
					BgL_jvmz00_bglt BgL_res2551z00_1174;

					{	/* BackEnd/jvm_class.scm 19 */
						BgL_jvmz00_bglt BgL_new1965z00_1099;

						obj_t BgL_language1928z00_1100;

						obj_t BgL_srfi01929z00_1101;

						obj_t BgL_name1930z00_1102;

						bool_t BgL_typed1937z00_1109;

						obj_t BgL_heapzd2suffix1938zd2_1110;

						obj_t BgL_heapzd2compatible1939zd2_1111;

						bool_t BgL_callcc1940z00_1112;

						bool_t BgL_qualifiedzd2types1941zd2_1113;

						bool_t BgL_effectzb21942zb2_1114;

						bool_t BgL_removezd2emptyzd2let1943z00_1115;

						bool_t BgL_foreignzd2closure1944zd2_1116;

						bool_t BgL_typedzd2eq1945zd2_1117;

						bool_t BgL_tracezd2support1946zd2_1118;

						obj_t BgL_foreignzd2clausezd2suppo1947z00_1119;

						obj_t BgL_debugzd2support1948zd2_1120;

						bool_t BgL_pragmazd2support1949zd2_1121;

						bool_t BgL_tvectorzd2descrzd2suppor1950z00_1122;

						bool_t BgL_requirezd2tailc1951zd2_1123;

						obj_t BgL_registers1952z00_1124;

						obj_t BgL_pregisters1953z00_1125;

						bool_t BgL_boundzd2check1954zd2_1126;

						bool_t BgL_typezd2check1955zd2_1127;

						BgL_new1965z00_1099 = (BgL_jvmz00_bglt) (BgL_new1965z00_1003);
						BgL_language1928z00_1100 = BgL_language1928z00_1004;
						BgL_srfi01929z00_1101 = BgL_srfi01929z00_1005;
						BgL_name1930z00_1102 = BgL_name1930z00_1006;
						BgL_typed1937z00_1109 = CBOOL(BgL_typed1937z00_1013);
						BgL_heapzd2suffix1938zd2_1110 = BgL_heapzd2suffix1938zd2_1014;
						BgL_heapzd2compatible1939zd2_1111 =
							BgL_heapzd2compatible1939zd2_1015;
						BgL_callcc1940z00_1112 = CBOOL(BgL_callcc1940z00_1016);
						BgL_qualifiedzd2types1941zd2_1113 =
							CBOOL(BgL_qualifiedzd2types1941zd2_1017);
						BgL_effectzb21942zb2_1114 = CBOOL(BgL_effectzb21942zb2_1018);
						BgL_removezd2emptyzd2let1943z00_1115 =
							CBOOL(BgL_removezd2emptyzd2let1943z00_1019);
						BgL_foreignzd2closure1944zd2_1116 =
							CBOOL(BgL_foreignzd2closure1944zd2_1020);
						BgL_typedzd2eq1945zd2_1117 = CBOOL(BgL_typedzd2eq1945zd2_1021);
						BgL_tracezd2support1946zd2_1118 =
							CBOOL(BgL_tracezd2support1946zd2_1022);
						BgL_foreignzd2clausezd2suppo1947z00_1119 =
							BgL_foreignzd2clausezd2suppo1947z00_1023;
						BgL_debugzd2support1948zd2_1120 = BgL_debugzd2support1948zd2_1024;
						BgL_pragmazd2support1949zd2_1121 =
							CBOOL(BgL_pragmazd2support1949zd2_1025);
						BgL_tvectorzd2descrzd2suppor1950z00_1122 =
							CBOOL(BgL_tvectorzd2descrzd2suppor1950z00_1026);
						BgL_requirezd2tailc1951zd2_1123 =
							CBOOL(BgL_requirezd2tailc1951zd2_1027);
						BgL_registers1952z00_1124 = BgL_registers1952z00_1028;
						BgL_pregisters1953z00_1125 = BgL_pregisters1953z00_1029;
						BgL_boundzd2check1954zd2_1126 =
							CBOOL(BgL_boundzd2check1954zd2_1030);
						BgL_typezd2check1955zd2_1127 = CBOOL(BgL_typezd2check1955zd2_1031);
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_language1928z00_1137;

							obj_t BgL_srfi01929z00_1138;

							obj_t BgL_name1930z00_1139;

							obj_t BgL_externzd2variables1931zd2_1140;

							obj_t BgL_externzd2functions1932zd2_1141;

							obj_t BgL_externzd2types1933zd2_1142;

							obj_t BgL_variables1934z00_1143;

							obj_t BgL_functions1935z00_1144;

							obj_t BgL_types1936z00_1145;

							bool_t BgL_typed1937z00_1146;

							obj_t BgL_heapzd2suffix1938zd2_1147;

							obj_t BgL_heapzd2compatible1939zd2_1148;

							bool_t BgL_callcc1940z00_1149;

							bool_t BgL_qualifiedzd2types1941zd2_1150;

							bool_t BgL_effectzb21942zb2_1151;

							bool_t BgL_removezd2emptyzd2let1943z00_1152;

							bool_t BgL_foreignzd2closure1944zd2_1153;

							bool_t BgL_typedzd2eq1945zd2_1154;

							bool_t BgL_tracezd2support1946zd2_1155;

							obj_t BgL_foreignzd2clausezd2suppo1947z00_1156;

							obj_t BgL_debugzd2support1948zd2_1157;

							bool_t BgL_pragmazd2support1949zd2_1158;

							bool_t BgL_tvectorzd2descrzd2suppor1950z00_1159;

							bool_t BgL_requirezd2tailc1951zd2_1160;

							obj_t BgL_registers1952z00_1161;

							obj_t BgL_pregisters1953z00_1162;

							bool_t BgL_boundzd2check1954zd2_1163;

							bool_t BgL_typezd2check1955zd2_1164;

							obj_t BgL_qname1956z00_1165;

							obj_t BgL_classes1957z00_1166;

							obj_t BgL_currentzd2class1958zd2_1167;

							obj_t BgL_declarations1959z00_1168;

							obj_t BgL_fields1960z00_1169;

							obj_t BgL_methods1961z00_1170;

							obj_t BgL_currentzd2method1962zd2_1171;

							obj_t BgL_code1963z00_1172;

							obj_t BgL_inline1964z00_1173;

							BgL_language1928z00_1137 = BgL_language1928z00_1100;
							BgL_srfi01929z00_1138 = BgL_srfi01929z00_1101;
							BgL_name1930z00_1139 = BgL_name1930z00_1102;
							BgL_externzd2variables1931zd2_1140 =
								BgL_externzd2variables1931zd2_1007;
							BgL_externzd2functions1932zd2_1141 =
								BgL_externzd2functions1932zd2_1008;
							BgL_externzd2types1933zd2_1142 = BgL_externzd2types1933zd2_1009;
							BgL_variables1934z00_1143 = BgL_variables1934z00_1010;
							BgL_functions1935z00_1144 = BgL_functions1935z00_1011;
							BgL_types1936z00_1145 = BgL_types1936z00_1012;
							BgL_typed1937z00_1146 = BgL_typed1937z00_1109;
							BgL_heapzd2suffix1938zd2_1147 = BgL_heapzd2suffix1938zd2_1110;
							BgL_heapzd2compatible1939zd2_1148 =
								BgL_heapzd2compatible1939zd2_1111;
							BgL_callcc1940z00_1149 = BgL_callcc1940z00_1112;
							BgL_qualifiedzd2types1941zd2_1150 =
								BgL_qualifiedzd2types1941zd2_1113;
							BgL_effectzb21942zb2_1151 = BgL_effectzb21942zb2_1114;
							BgL_removezd2emptyzd2let1943z00_1152 =
								BgL_removezd2emptyzd2let1943z00_1115;
							BgL_foreignzd2closure1944zd2_1153 =
								BgL_foreignzd2closure1944zd2_1116;
							BgL_typedzd2eq1945zd2_1154 = BgL_typedzd2eq1945zd2_1117;
							BgL_tracezd2support1946zd2_1155 = BgL_tracezd2support1946zd2_1118;
							BgL_foreignzd2clausezd2suppo1947z00_1156 =
								BgL_foreignzd2clausezd2suppo1947z00_1119;
							BgL_debugzd2support1948zd2_1157 = BgL_debugzd2support1948zd2_1120;
							BgL_pragmazd2support1949zd2_1158 =
								BgL_pragmazd2support1949zd2_1121;
							BgL_tvectorzd2descrzd2suppor1950z00_1159 =
								BgL_tvectorzd2descrzd2suppor1950z00_1122;
							BgL_requirezd2tailc1951zd2_1160 = BgL_requirezd2tailc1951zd2_1123;
							BgL_registers1952z00_1161 = BgL_registers1952z00_1124;
							BgL_pregisters1953z00_1162 = BgL_pregisters1953z00_1125;
							BgL_boundzd2check1954zd2_1163 = BgL_boundzd2check1954zd2_1126;
							BgL_typezd2check1955zd2_1164 = BgL_typezd2check1955zd2_1127;
							BgL_qname1956z00_1165 = BgL_qname1956z00_1032;
							BgL_classes1957z00_1166 = BgL_classes1957z00_1033;
							BgL_currentzd2class1958zd2_1167 = BgL_currentzd2class1958zd2_1034;
							BgL_declarations1959z00_1168 = BgL_declarations1959z00_1035;
							BgL_fields1960z00_1169 = BgL_fields1960z00_1036;
							BgL_methods1961z00_1170 = BgL_methods1961z00_1037;
							BgL_currentzd2method1962zd2_1171 =
								BgL_currentzd2method1962zd2_1038;
							BgL_code1963z00_1172 = BgL_code1963z00_1039;
							BgL_inline1964z00_1173 = BgL_inline1964z00_1040;
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_languagez00) =
								((obj_t) BgL_language1928z00_1137), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01929z00_1138), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_namez00) =
								((obj_t) BgL_name1930z00_1139), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1931zd2_1140), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1932zd2_1141), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1933zd2_1142), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1934z00_1143), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1935z00_1144), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_typesz00) =
								((obj_t) BgL_types1936z00_1145), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_typedz00) =
								((bool_t) BgL_typed1937z00_1146), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1938zd2_1147), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1939zd2_1148), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_callccz00) =
								((bool_t) BgL_callcc1940z00_1149), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1941zd2_1150), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21942zb2_1151), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1943z00_1152), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1944zd2_1153), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1945zd2_1154), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1946zd2_1155), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1947z00_1156), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1948zd2_1157), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1949zd2_1158), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1950z00_1159), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1951zd2_1160), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_registersz00) =
								((obj_t) BgL_registers1952z00_1161), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1953z00_1162), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1954zd2_1163), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1955zd2_1164), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_qnamez00) =
								((obj_t) BgL_qname1956z00_1165), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_classesz00) =
								((obj_t) BgL_classes1957z00_1166), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_currentzd2classzd2) =
								((obj_t) BgL_currentzd2class1958zd2_1167), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_declarationsz00) =
								((obj_t) BgL_declarations1959z00_1168), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_fieldsz00) =
								((obj_t) BgL_fields1960z00_1169), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_methodsz00) =
								((obj_t) BgL_methods1961z00_1170), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->
									BgL_currentzd2methodzd2) =
								((obj_t) BgL_currentzd2method1962zd2_1171), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_codez00) =
								((obj_t) BgL_code1963z00_1172), BUNSPEC);
							((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_1099))->BgL_inlinez00) =
								((obj_t) BgL_inline1964z00_1173), BUNSPEC);
							BgL_res2551z00_1174 = BgL_new1965z00_1099;
						}
					}
					BgL_auxz00_1310 = BgL_res2551z00_1174;
				}
				return (obj_t) (BgL_auxz00_1310);
			}
		}
	}



/* %allocate-jvm */
	BGL_EXPORTED_DEF BgL_jvmz00_bglt
		BGl_z52allocatezd2jvmz80zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{	/* BackEnd/jvm_class.scm 19 */
				BgL_jvmz00_bglt BgL_new2004z00_1175;

				BgL_new2004z00_1175 =
					((BgL_jvmz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_jvmz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2004z00_1175),
					BGl_classzd2numzd2zz__objectz00(BGl_jvmz00zzbackend_jvm_classz00));
				{	/* BackEnd/jvm_class.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_1367;

					BgL_auxz00_1367 = (BgL_objectz00_bglt) (BgL_new2004z00_1175);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_1367, BFALSE);
				}
				return BgL_new2004z00_1175;
			}
		}
	}



/* _%allocate-jvm */
	obj_t BGl__z52allocatezd2jvmz80zzbackend_jvm_classz00(obj_t BgL_envz00_960)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{	/* BackEnd/jvm_class.scm 19 */
				BgL_jvmz00_bglt BgL_auxz00_1370;

				{	/* BackEnd/jvm_class.scm 19 */
					BgL_jvmz00_bglt BgL_res2552z00_1179;

					{	/* BackEnd/jvm_class.scm 19 */
						BgL_jvmz00_bglt BgL_new2004z00_1177;

						BgL_new2004z00_1177 =
							((BgL_jvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_jvmz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2004z00_1177),
							BGl_classzd2numzd2zz__objectz00
							(BGl_jvmz00zzbackend_jvm_classz00));
						{	/* BackEnd/jvm_class.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_1375;

							BgL_auxz00_1375 = (BgL_objectz00_bglt) (BgL_new2004z00_1177);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1375, BFALSE);
						}
						BgL_res2552z00_1179 = BgL_new2004z00_1177;
					}
					BgL_auxz00_1370 = BgL_res2552z00_1179;
				}
				return (obj_t) (BgL_auxz00_1370);
			}
		}
	}



/* jvm-nil */
	BGL_EXPORTED_DEF BgL_jvmz00_bglt BGl_jvmzd2nilzd2zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			if ((BGl_z52thezd2jvmzd2nilz52zzbackend_jvm_classz00 == BUNSPEC))
				{	/* BackEnd/jvm_class.scm 19 */
					{	/* BackEnd/jvm_class.scm 19 */
						BgL_jvmz00_bglt BgL_res2533z00_653;

						{	/* BackEnd/jvm_class.scm 19 */
							BgL_jvmz00_bglt BgL_new2004z00_649;

							BgL_new2004z00_649 =
								((BgL_jvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_jvmz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2004z00_649),
								BGl_classzd2numzd2zz__objectz00
								(BGl_jvmz00zzbackend_jvm_classz00));
							{	/* BackEnd/jvm_class.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_1385;

								BgL_auxz00_1385 = (BgL_objectz00_bglt) (BgL_new2004z00_649);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1385, BFALSE);
							}
							BgL_res2533z00_653 = BgL_new2004z00_649;
						}
						BGl_z52thezd2jvmzd2nilz52zzbackend_jvm_classz00 =
							(obj_t) (BgL_res2533z00_653);
					}
					{	/* BackEnd/jvm_class.scm 19 */
						BgL_jvmz00_bglt BgL_res2534z00_729;

						{	/* BackEnd/jvm_class.scm 19 */
							BgL_jvmz00_bglt BgL_new1965z00_654;

							obj_t BgL_language1928z00_655;

							obj_t BgL_srfi01929z00_656;

							obj_t BgL_heapzd2compatible1939zd2_666;

							BgL_new1965z00_654 =
								(BgL_jvmz00_bglt)
								(BGl_z52thezd2jvmzd2nilz52zzbackend_jvm_classz00);
							BgL_language1928z00_655 = CNST_TABLE_REF(((long) 1));
							BgL_srfi01929z00_656 = CNST_TABLE_REF(((long) 1));
							BgL_heapzd2compatible1939zd2_666 = CNST_TABLE_REF(((long) 1));
							{	/* BackEnd/jvm_class.scm 19 */
								obj_t BgL_language1928z00_692;

								obj_t BgL_srfi01929z00_693;

								obj_t BgL_name1930z00_694;

								obj_t BgL_externzd2variables1931zd2_695;

								obj_t BgL_externzd2functions1932zd2_696;

								obj_t BgL_externzd2types1933zd2_697;

								obj_t BgL_variables1934z00_698;

								obj_t BgL_functions1935z00_699;

								obj_t BgL_types1936z00_700;

								bool_t BgL_typed1937z00_701;

								obj_t BgL_heapzd2suffix1938zd2_702;

								obj_t BgL_heapzd2compatible1939zd2_703;

								bool_t BgL_callcc1940z00_704;

								bool_t BgL_qualifiedzd2types1941zd2_705;

								bool_t BgL_effectzb21942zb2_706;

								bool_t BgL_removezd2emptyzd2let1943z00_707;

								bool_t BgL_foreignzd2closure1944zd2_708;

								bool_t BgL_typedzd2eq1945zd2_709;

								bool_t BgL_tracezd2support1946zd2_710;

								obj_t BgL_foreignzd2clausezd2suppo1947z00_711;

								obj_t BgL_debugzd2support1948zd2_712;

								bool_t BgL_pragmazd2support1949zd2_713;

								bool_t BgL_tvectorzd2descrzd2suppor1950z00_714;

								bool_t BgL_requirezd2tailc1951zd2_715;

								obj_t BgL_registers1952z00_716;

								obj_t BgL_pregisters1953z00_717;

								bool_t BgL_boundzd2check1954zd2_718;

								bool_t BgL_typezd2check1955zd2_719;

								obj_t BgL_qname1956z00_720;

								obj_t BgL_classes1957z00_721;

								obj_t BgL_currentzd2class1958zd2_722;

								obj_t BgL_declarations1959z00_723;

								obj_t BgL_fields1960z00_724;

								obj_t BgL_methods1961z00_725;

								obj_t BgL_currentzd2method1962zd2_726;

								obj_t BgL_code1963z00_727;

								obj_t BgL_inline1964z00_728;

								BgL_language1928z00_692 = BgL_language1928z00_655;
								BgL_srfi01929z00_693 = BgL_srfi01929z00_656;
								BgL_name1930z00_694 = BGl_string2538z00zzbackend_jvm_classz00;
								BgL_externzd2variables1931zd2_695 = BUNSPEC;
								BgL_externzd2functions1932zd2_696 = BUNSPEC;
								BgL_externzd2types1933zd2_697 = BUNSPEC;
								BgL_variables1934z00_698 = BUNSPEC;
								BgL_functions1935z00_699 = BUNSPEC;
								BgL_types1936z00_700 = BUNSPEC;
								BgL_typed1937z00_701 = ((bool_t) 0);
								BgL_heapzd2suffix1938zd2_702 =
									BGl_string2538z00zzbackend_jvm_classz00;
								BgL_heapzd2compatible1939zd2_703 =
									BgL_heapzd2compatible1939zd2_666;
								BgL_callcc1940z00_704 = ((bool_t) 0);
								BgL_qualifiedzd2types1941zd2_705 = ((bool_t) 0);
								BgL_effectzb21942zb2_706 = ((bool_t) 0);
								BgL_removezd2emptyzd2let1943z00_707 = ((bool_t) 0);
								BgL_foreignzd2closure1944zd2_708 = ((bool_t) 0);
								BgL_typedzd2eq1945zd2_709 = ((bool_t) 0);
								BgL_tracezd2support1946zd2_710 = ((bool_t) 0);
								BgL_foreignzd2clausezd2suppo1947z00_711 = BNIL;
								BgL_debugzd2support1948zd2_712 = BNIL;
								BgL_pragmazd2support1949zd2_713 = ((bool_t) 0);
								BgL_tvectorzd2descrzd2suppor1950z00_714 = ((bool_t) 0);
								BgL_requirezd2tailc1951zd2_715 = ((bool_t) 0);
								BgL_registers1952z00_716 = BNIL;
								BgL_pregisters1953z00_717 = BNIL;
								BgL_boundzd2check1954zd2_718 = ((bool_t) 0);
								BgL_typezd2check1955zd2_719 = ((bool_t) 0);
								BgL_qname1956z00_720 = BUNSPEC;
								BgL_classes1957z00_721 = BUNSPEC;
								BgL_currentzd2class1958zd2_722 = BUNSPEC;
								BgL_declarations1959z00_723 = BUNSPEC;
								BgL_fields1960z00_724 = BUNSPEC;
								BgL_methods1961z00_725 = BUNSPEC;
								BgL_currentzd2method1962zd2_726 = BUNSPEC;
								BgL_code1963z00_727 = BUNSPEC;
								BgL_inline1964z00_728 = BUNSPEC;
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_languagez00) =
									((obj_t) BgL_language1928z00_692), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_srfi0z00) =
									((obj_t) BgL_srfi01929z00_693), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_namez00) =
									((obj_t) BgL_name1930z00_694), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_externzd2variableszd2) =
									((obj_t) BgL_externzd2variables1931zd2_695), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_externzd2functionszd2) =
									((obj_t) BgL_externzd2functions1932zd2_696), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_externzd2typeszd2) =
									((obj_t) BgL_externzd2types1933zd2_697), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_variablesz00) =
									((obj_t) BgL_variables1934z00_698), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_functionsz00) =
									((obj_t) BgL_functions1935z00_699), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_typesz00) =
									((obj_t) BgL_types1936z00_700), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_typedz00) =
									((bool_t) BgL_typed1937z00_701), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_heapzd2suffixzd2) =
									((obj_t) BgL_heapzd2suffix1938zd2_702), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_heapzd2compatiblezd2) =
									((obj_t) BgL_heapzd2compatible1939zd2_703), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_callccz00) =
									((bool_t) BgL_callcc1940z00_704), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_qualifiedzd2typeszd2) =
									((bool_t) BgL_qualifiedzd2types1941zd2_705), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_effectzb2zb2) =
									((bool_t) BgL_effectzb21942zb2_706), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_removezd2emptyzd2letz00) =
									((bool_t) BgL_removezd2emptyzd2let1943z00_707), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_foreignzd2closurezd2) =
									((bool_t) BgL_foreignzd2closure1944zd2_708), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_typedzd2eqzd2) =
									((bool_t) BgL_typedzd2eq1945zd2_709), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_tracezd2supportzd2) =
									((bool_t) BgL_tracezd2support1946zd2_710), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_foreignzd2clausezd2supportz00) =
									((obj_t) BgL_foreignzd2clausezd2suppo1947z00_711), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_debugzd2supportzd2) =
									((obj_t) BgL_debugzd2support1948zd2_712), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_pragmazd2supportzd2) =
									((bool_t) BgL_pragmazd2support1949zd2_713), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_tvectorzd2descrzd2supportz00) =
									((bool_t) BgL_tvectorzd2descrzd2suppor1950z00_714), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_requirezd2tailczd2) =
									((bool_t) BgL_requirezd2tailc1951zd2_715), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_registersz00) =
									((obj_t) BgL_registers1952z00_716), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_pregistersz00) =
									((obj_t) BgL_pregisters1953z00_717), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_boundzd2checkzd2) =
									((bool_t) BgL_boundzd2check1954zd2_718), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_typezd2checkzd2) =
									((bool_t) BgL_typezd2check1955zd2_719), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_qnamez00) =
									((obj_t) BgL_qname1956z00_720), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_classesz00) =
									((obj_t) BgL_classes1957z00_721), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_currentzd2classzd2) =
									((obj_t) BgL_currentzd2class1958zd2_722), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_declarationsz00) =
									((obj_t) BgL_declarations1959z00_723), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_fieldsz00) =
									((obj_t) BgL_fields1960z00_724), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_methodsz00) =
									((obj_t) BgL_methods1961z00_725), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->
										BgL_currentzd2methodzd2) =
									((obj_t) BgL_currentzd2method1962zd2_726), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_codez00) =
									((obj_t) BgL_code1963z00_727), BUNSPEC);
								((((BgL_jvmz00_bglt) CREF(BgL_new1965z00_654))->BgL_inlinez00) =
									((obj_t) BgL_inline1964z00_728), BUNSPEC);
								BgL_res2534z00_729 = BgL_new1965z00_654;
						}}
						(obj_t) (BgL_res2534z00_729);
				}}
			else
				{	/* BackEnd/jvm_class.scm 19 */
					BFALSE;
				}
			return
				(BgL_jvmz00_bglt) (BGl_z52thezd2jvmzd2nilz52zzbackend_jvm_classz00);
		}
	}



/* _jvm-nil */
	obj_t BGl__jvmzd2nilzd2zzbackend_jvm_classz00(obj_t BgL_envz00_961)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			return (obj_t) (BGl_jvmzd2nilzd2zzbackend_jvm_classz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2539z00zzbackend_jvm_classz00,
				BGl_string2540z00zzbackend_jvm_classz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_jvmz00zzbackend_jvm_classz00, BGl_proc2541z00zzbackend_jvm_classz00,
				BGl_string2542z00zzbackend_jvm_classz00);
		}
	}



/* struct+object->objec2160 */
	obj_t BGl_structzb2objectzd2ze3objec2160z83zzbackend_jvm_classz00(obj_t
		BgL_envz00_1043, obj_t BgL_oz00_1044, obj_t BgL_sz00_1045)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{
				BgL_jvmz00_bglt BgL_oz00_482;

				obj_t BgL_sz00_483;

				{	/* BackEnd/jvm_class.scm 19 */
					BgL_jvmz00_bglt BgL_auxz00_1436;

					BgL_oz00_482 = (BgL_jvmz00_bglt) (BgL_oz00_1044);
					BgL_sz00_483 = BgL_sz00_1045;
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2529z00_486;

						BgL_arg2529z00_486 = STRUCT_REF(BgL_sz00_483, (int) (((long) 0)));
						{	/* BackEnd/jvm_class.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_1439;

							BgL_auxz00_1439 = (BgL_objectz00_bglt) (BgL_oz00_482);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1439, BgL_arg2529z00_486);
					}}
					{
						obj_t BgL_auxz00_1442;

						BgL_auxz00_1442 = STRUCT_REF(BgL_sz00_483, (int) (((long) 1)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_languagez00) =
							((obj_t) BgL_auxz00_1442), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1446;

						BgL_auxz00_1446 = STRUCT_REF(BgL_sz00_483, (int) (((long) 2)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_srfi0z00) =
							((obj_t) BgL_auxz00_1446), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1450;

						BgL_auxz00_1450 = STRUCT_REF(BgL_sz00_483, (int) (((long) 3)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_namez00) =
							((obj_t) BgL_auxz00_1450), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1454;

						BgL_auxz00_1454 = STRUCT_REF(BgL_sz00_483, (int) (((long) 4)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_externzd2variableszd2) =
							((obj_t) BgL_auxz00_1454), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1458;

						BgL_auxz00_1458 = STRUCT_REF(BgL_sz00_483, (int) (((long) 5)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_externzd2functionszd2) =
							((obj_t) BgL_auxz00_1458), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1462;

						BgL_auxz00_1462 = STRUCT_REF(BgL_sz00_483, (int) (((long) 6)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_externzd2typeszd2) =
							((obj_t) BgL_auxz00_1462), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1466;

						BgL_auxz00_1466 = STRUCT_REF(BgL_sz00_483, (int) (((long) 7)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_variablesz00) =
							((obj_t) BgL_auxz00_1466), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1470;

						BgL_auxz00_1470 = STRUCT_REF(BgL_sz00_483, (int) (((long) 8)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_functionsz00) =
							((obj_t) BgL_auxz00_1470), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1474;

						BgL_auxz00_1474 = STRUCT_REF(BgL_sz00_483, (int) (((long) 9)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_typesz00) =
							((obj_t) BgL_auxz00_1474), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1478;

						BgL_auxz00_1478 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 10))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_typedz00) =
							((bool_t) BgL_auxz00_1478), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1483;

						BgL_auxz00_1483 = STRUCT_REF(BgL_sz00_483, (int) (((long) 11)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_heapzd2suffixzd2) =
							((obj_t) BgL_auxz00_1483), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1487;

						BgL_auxz00_1487 = STRUCT_REF(BgL_sz00_483, (int) (((long) 12)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_heapzd2compatiblezd2) = ((obj_t) BgL_auxz00_1487), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1491;

						BgL_auxz00_1491 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 13))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_callccz00) =
							((bool_t) BgL_auxz00_1491), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1496;

						BgL_auxz00_1496 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 14))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_qualifiedzd2typeszd2) =
							((bool_t) BgL_auxz00_1496), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1501;

						BgL_auxz00_1501 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 15))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_effectzb2zb2) =
							((bool_t) BgL_auxz00_1501), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1506;

						BgL_auxz00_1506 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 16))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_removezd2emptyzd2letz00) =
							((bool_t) BgL_auxz00_1506), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1511;

						BgL_auxz00_1511 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 17))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_foreignzd2closurezd2) =
							((bool_t) BgL_auxz00_1511), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1516;

						BgL_auxz00_1516 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 18))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_typedzd2eqzd2) =
							((bool_t) BgL_auxz00_1516), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1521;

						BgL_auxz00_1521 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 19))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_tracezd2supportzd2) =
							((bool_t) BgL_auxz00_1521), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1526;

						BgL_auxz00_1526 = STRUCT_REF(BgL_sz00_483, (int) (((long) 20)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_foreignzd2clausezd2supportz00) =
							((obj_t) BgL_auxz00_1526), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1530;

						BgL_auxz00_1530 = STRUCT_REF(BgL_sz00_483, (int) (((long) 21)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_debugzd2supportzd2) =
							((obj_t) BgL_auxz00_1530), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1534;

						BgL_auxz00_1534 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 22))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_pragmazd2supportzd2) =
							((bool_t) BgL_auxz00_1534), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1539;

						BgL_auxz00_1539 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 23))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->
								BgL_tvectorzd2descrzd2supportz00) =
							((bool_t) BgL_auxz00_1539), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1544;

						BgL_auxz00_1544 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 24))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_requirezd2tailczd2) =
							((bool_t) BgL_auxz00_1544), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1549;

						BgL_auxz00_1549 = STRUCT_REF(BgL_sz00_483, (int) (((long) 25)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_registersz00) =
							((obj_t) BgL_auxz00_1549), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1553;

						BgL_auxz00_1553 = STRUCT_REF(BgL_sz00_483, (int) (((long) 26)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_pregistersz00) =
							((obj_t) BgL_auxz00_1553), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1557;

						BgL_auxz00_1557 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 27))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_boundzd2checkzd2) =
							((bool_t) BgL_auxz00_1557), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1562;

						BgL_auxz00_1562 =
							CBOOL(STRUCT_REF(BgL_sz00_483, (int) (((long) 28))));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_typezd2checkzd2) =
							((bool_t) BgL_auxz00_1562), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1567;

						BgL_auxz00_1567 = STRUCT_REF(BgL_sz00_483, (int) (((long) 29)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_qnamez00) =
							((obj_t) BgL_auxz00_1567), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1571;

						BgL_auxz00_1571 = STRUCT_REF(BgL_sz00_483, (int) (((long) 30)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_classesz00) =
							((obj_t) BgL_auxz00_1571), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1575;

						BgL_auxz00_1575 = STRUCT_REF(BgL_sz00_483, (int) (((long) 31)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_currentzd2classzd2) =
							((obj_t) BgL_auxz00_1575), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1579;

						BgL_auxz00_1579 = STRUCT_REF(BgL_sz00_483, (int) (((long) 32)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_declarationsz00) =
							((obj_t) BgL_auxz00_1579), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1583;

						BgL_auxz00_1583 = STRUCT_REF(BgL_sz00_483, (int) (((long) 33)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_fieldsz00) =
							((obj_t) BgL_auxz00_1583), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1587;

						BgL_auxz00_1587 = STRUCT_REF(BgL_sz00_483, (int) (((long) 34)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_methodsz00) =
							((obj_t) BgL_auxz00_1587), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1591;

						BgL_auxz00_1591 = STRUCT_REF(BgL_sz00_483, (int) (((long) 35)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_currentzd2methodzd2) =
							((obj_t) BgL_auxz00_1591), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1595;

						BgL_auxz00_1595 = STRUCT_REF(BgL_sz00_483, (int) (((long) 36)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_codez00) =
							((obj_t) BgL_auxz00_1595), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1599;

						BgL_auxz00_1599 = STRUCT_REF(BgL_sz00_483, (int) (((long) 37)));
						((((BgL_jvmz00_bglt) CREF(BgL_oz00_482))->BgL_inlinez00) =
							((obj_t) BgL_auxz00_1599), BUNSPEC);
					}
					BgL_auxz00_1436 = BgL_oz00_482;
					return (obj_t) (BgL_auxz00_1436);
				}
			}
		}
	}



/* object->struct-jvm2158 */
	obj_t BGl_objectzd2ze3structzd2jvm2158ze3zzbackend_jvm_classz00(obj_t
		BgL_envz00_1046, obj_t BgL_obj2005z00_1047)
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 19 */
			{
				BgL_jvmz00_bglt BgL_obj2005z00_402;

				BgL_obj2005z00_402 = (BgL_jvmz00_bglt) (BgL_obj2005z00_1047);
				{	/* BackEnd/jvm_class.scm 19 */
					obj_t BgL_res2006z00_405;

					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_keyz00_730;

						BgL_keyz00_730 = CNST_TABLE_REF(((long) 0));
						BgL_res2006z00_405 =
							make_struct(BgL_keyz00_730, (int) (((long) 38)), BUNSPEC);
					}
					{	/* BackEnd/jvm_class.scm 19 */
						int BgL_auxz00_1608;

						BgL_auxz00_1608 = (int) (((long) 0));
						STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1608, BFALSE);
					}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2200z00_407;

						{
							BgL_backendz00_bglt BgL_auxz00_1611;

							BgL_auxz00_1611 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2200z00_407 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1611))->
								BgL_languagez00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1614;

							BgL_auxz00_1614 = (int) (((long) 1));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1614,
								BgL_arg2200z00_407);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2213z00_409;

						{
							BgL_backendz00_bglt BgL_auxz00_1617;

							BgL_auxz00_1617 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2213z00_409 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1617))->BgL_srfi0z00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1620;

							BgL_auxz00_1620 = (int) (((long) 2));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1620,
								BgL_arg2213z00_409);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2222z00_411;

						{
							BgL_backendz00_bglt BgL_auxz00_1623;

							BgL_auxz00_1623 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2222z00_411 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1623))->BgL_namez00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1626;

							BgL_auxz00_1626 = (int) (((long) 3));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1626,
								BgL_arg2222z00_411);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2227z00_413;

						{
							BgL_backendz00_bglt BgL_auxz00_1629;

							BgL_auxz00_1629 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2227z00_413 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1629))->
								BgL_externzd2variableszd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1632;

							BgL_auxz00_1632 = (int) (((long) 4));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1632,
								BgL_arg2227z00_413);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2237z00_415;

						{
							BgL_backendz00_bglt BgL_auxz00_1635;

							BgL_auxz00_1635 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2237z00_415 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1635))->
								BgL_externzd2functionszd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1638;

							BgL_auxz00_1638 = (int) (((long) 5));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1638,
								BgL_arg2237z00_415);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2240z00_417;

						{
							BgL_backendz00_bglt BgL_auxz00_1641;

							BgL_auxz00_1641 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2240z00_417 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1641))->
								BgL_externzd2typeszd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1644;

							BgL_auxz00_1644 = (int) (((long) 6));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1644,
								BgL_arg2240z00_417);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2243z00_419;

						{
							BgL_backendz00_bglt BgL_auxz00_1647;

							BgL_auxz00_1647 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2243z00_419 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1647))->
								BgL_variablesz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1650;

							BgL_auxz00_1650 = (int) (((long) 7));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1650,
								BgL_arg2243z00_419);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2252z00_421;

						{
							BgL_backendz00_bglt BgL_auxz00_1653;

							BgL_auxz00_1653 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2252z00_421 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1653))->
								BgL_functionsz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1656;

							BgL_auxz00_1656 = (int) (((long) 8));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1656,
								BgL_arg2252z00_421);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2259z00_423;

						{
							BgL_backendz00_bglt BgL_auxz00_1659;

							BgL_auxz00_1659 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2259z00_423 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1659))->BgL_typesz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1662;

							BgL_auxz00_1662 = (int) (((long) 9));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1662,
								BgL_arg2259z00_423);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2267z00_425;

						{
							BgL_backendz00_bglt BgL_auxz00_1665;

							BgL_auxz00_1665 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2267z00_425 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1665))->BgL_typedz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1670;

							int BgL_auxz00_1668;

							BgL_auxz00_1670 = BBOOL(BgL_arg2267z00_425);
							BgL_auxz00_1668 = (int) (((long) 10));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1668, BgL_auxz00_1670);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2275z00_427;

						{
							BgL_backendz00_bglt BgL_auxz00_1673;

							BgL_auxz00_1673 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2275z00_427 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1673))->
								BgL_heapzd2suffixzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1676;

							BgL_auxz00_1676 = (int) (((long) 11));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1676,
								BgL_arg2275z00_427);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2285z00_429;

						{
							BgL_backendz00_bglt BgL_auxz00_1679;

							BgL_auxz00_1679 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2285z00_429 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1679))->
								BgL_heapzd2compatiblezd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1682;

							BgL_auxz00_1682 = (int) (((long) 12));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1682,
								BgL_arg2285z00_429);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2290z00_431;

						{
							BgL_backendz00_bglt BgL_auxz00_1685;

							BgL_auxz00_1685 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2290z00_431 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1685))->BgL_callccz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1690;

							int BgL_auxz00_1688;

							BgL_auxz00_1690 = BBOOL(BgL_arg2290z00_431);
							BgL_auxz00_1688 = (int) (((long) 13));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1688, BgL_auxz00_1690);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2297z00_433;

						{
							BgL_backendz00_bglt BgL_auxz00_1693;

							BgL_auxz00_1693 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2297z00_433 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1693))->
								BgL_qualifiedzd2typeszd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1698;

							int BgL_auxz00_1696;

							BgL_auxz00_1698 = BBOOL(BgL_arg2297z00_433);
							BgL_auxz00_1696 = (int) (((long) 14));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1696, BgL_auxz00_1698);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2312z00_435;

						{
							BgL_backendz00_bglt BgL_auxz00_1701;

							BgL_auxz00_1701 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2312z00_435 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1701))->
								BgL_effectzb2zb2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1706;

							int BgL_auxz00_1704;

							BgL_auxz00_1706 = BBOOL(BgL_arg2312z00_435);
							BgL_auxz00_1704 = (int) (((long) 15));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1704, BgL_auxz00_1706);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2325z00_437;

						{
							BgL_backendz00_bglt BgL_auxz00_1709;

							BgL_auxz00_1709 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2325z00_437 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1709))->
								BgL_removezd2emptyzd2letz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1714;

							int BgL_auxz00_1712;

							BgL_auxz00_1714 = BBOOL(BgL_arg2325z00_437);
							BgL_auxz00_1712 = (int) (((long) 16));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1712, BgL_auxz00_1714);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2338z00_439;

						{
							BgL_backendz00_bglt BgL_auxz00_1717;

							BgL_auxz00_1717 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2338z00_439 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1717))->
								BgL_foreignzd2closurezd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1722;

							int BgL_auxz00_1720;

							BgL_auxz00_1722 = BBOOL(BgL_arg2338z00_439);
							BgL_auxz00_1720 = (int) (((long) 17));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1720, BgL_auxz00_1722);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2351z00_441;

						{
							BgL_backendz00_bglt BgL_auxz00_1725;

							BgL_auxz00_1725 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2351z00_441 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1725))->
								BgL_typedzd2eqzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1730;

							int BgL_auxz00_1728;

							BgL_auxz00_1730 = BBOOL(BgL_arg2351z00_441);
							BgL_auxz00_1728 = (int) (((long) 18));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1728, BgL_auxz00_1730);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2364z00_443;

						{
							BgL_backendz00_bglt BgL_auxz00_1733;

							BgL_auxz00_1733 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2364z00_443 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1733))->
								BgL_tracezd2supportzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1738;

							int BgL_auxz00_1736;

							BgL_auxz00_1738 = BBOOL(BgL_arg2364z00_443);
							BgL_auxz00_1736 = (int) (((long) 19));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1736, BgL_auxz00_1738);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2377z00_445;

						{
							BgL_backendz00_bglt BgL_auxz00_1741;

							BgL_auxz00_1741 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2377z00_445 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1741))->
								BgL_foreignzd2clausezd2supportz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1744;

							BgL_auxz00_1744 = (int) (((long) 20));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1744,
								BgL_arg2377z00_445);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2390z00_447;

						{
							BgL_backendz00_bglt BgL_auxz00_1747;

							BgL_auxz00_1747 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2390z00_447 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1747))->
								BgL_debugzd2supportzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1750;

							BgL_auxz00_1750 = (int) (((long) 21));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1750,
								BgL_arg2390z00_447);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2403z00_449;

						{
							BgL_backendz00_bglt BgL_auxz00_1753;

							BgL_auxz00_1753 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2403z00_449 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1753))->
								BgL_pragmazd2supportzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1758;

							int BgL_auxz00_1756;

							BgL_auxz00_1758 = BBOOL(BgL_arg2403z00_449);
							BgL_auxz00_1756 = (int) (((long) 22));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1756, BgL_auxz00_1758);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2416z00_451;

						{
							BgL_backendz00_bglt BgL_auxz00_1761;

							BgL_auxz00_1761 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2416z00_451 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1761))->
								BgL_tvectorzd2descrzd2supportz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1766;

							int BgL_auxz00_1764;

							BgL_auxz00_1766 = BBOOL(BgL_arg2416z00_451);
							BgL_auxz00_1764 = (int) (((long) 23));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1764, BgL_auxz00_1766);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2429z00_453;

						{
							BgL_backendz00_bglt BgL_auxz00_1769;

							BgL_auxz00_1769 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2429z00_453 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1769))->
								BgL_requirezd2tailczd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1774;

							int BgL_auxz00_1772;

							BgL_auxz00_1774 = BBOOL(BgL_arg2429z00_453);
							BgL_auxz00_1772 = (int) (((long) 24));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1772, BgL_auxz00_1774);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2431z00_455;

						{
							BgL_backendz00_bglt BgL_auxz00_1777;

							BgL_auxz00_1777 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2431z00_455 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1777))->
								BgL_registersz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1780;

							BgL_auxz00_1780 = (int) (((long) 25));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1780,
								BgL_arg2431z00_455);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2438z00_457;

						{
							BgL_backendz00_bglt BgL_auxz00_1783;

							BgL_auxz00_1783 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2438z00_457 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1783))->
								BgL_pregistersz00);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1786;

							BgL_auxz00_1786 = (int) (((long) 26));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1786,
								BgL_arg2438z00_457);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2445z00_459;

						{
							BgL_backendz00_bglt BgL_auxz00_1789;

							BgL_auxz00_1789 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2445z00_459 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1789))->
								BgL_boundzd2checkzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1794;

							int BgL_auxz00_1792;

							BgL_auxz00_1794 = BBOOL(BgL_arg2445z00_459);
							BgL_auxz00_1792 = (int) (((long) 27));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1792, BgL_auxz00_1794);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						bool_t BgL_arg2451z00_461;

						{
							BgL_backendz00_bglt BgL_auxz00_1797;

							BgL_auxz00_1797 = (BgL_backendz00_bglt) (BgL_obj2005z00_402);
							BgL_arg2451z00_461 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1797))->
								BgL_typezd2checkzd2);
						}
						{	/* BackEnd/jvm_class.scm 19 */
							obj_t BgL_auxz00_1802;

							int BgL_auxz00_1800;

							BgL_auxz00_1802 = BBOOL(BgL_arg2451z00_461);
							BgL_auxz00_1800 = (int) (((long) 28));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1800, BgL_auxz00_1802);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2453z00_463;

						BgL_arg2453z00_463 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->BgL_qnamez00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1806;

							BgL_auxz00_1806 = (int) (((long) 29));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1806,
								BgL_arg2453z00_463);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2459z00_465;

						BgL_arg2459z00_465 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->BgL_classesz00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1810;

							BgL_auxz00_1810 = (int) (((long) 30));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1810,
								BgL_arg2459z00_465);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2461z00_467;

						BgL_arg2461z00_467 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->
							BgL_currentzd2classzd2);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1814;

							BgL_auxz00_1814 = (int) (((long) 31));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1814,
								BgL_arg2461z00_467);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2471z00_469;

						BgL_arg2471z00_469 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->
							BgL_declarationsz00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1818;

							BgL_auxz00_1818 = (int) (((long) 32));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1818,
								BgL_arg2471z00_469);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2476z00_471;

						BgL_arg2476z00_471 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->BgL_fieldsz00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1822;

							BgL_auxz00_1822 = (int) (((long) 33));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1822,
								BgL_arg2476z00_471);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2491z00_473;

						BgL_arg2491z00_473 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->BgL_methodsz00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1826;

							BgL_auxz00_1826 = (int) (((long) 34));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1826,
								BgL_arg2491z00_473);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2493z00_475;

						BgL_arg2493z00_475 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->
							BgL_currentzd2methodzd2);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1830;

							BgL_auxz00_1830 = (int) (((long) 35));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1830,
								BgL_arg2493z00_475);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2504z00_477;

						BgL_arg2504z00_477 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->BgL_codez00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1834;

							BgL_auxz00_1834 = (int) (((long) 36));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1834,
								BgL_arg2504z00_477);
					}}
					{	/* BackEnd/jvm_class.scm 19 */
						obj_t BgL_arg2523z00_479;

						BgL_arg2523z00_479 =
							(((BgL_jvmz00_bglt) CREF(BgL_obj2005z00_402))->BgL_inlinez00);
						{	/* BackEnd/jvm_class.scm 19 */
							int BgL_auxz00_1838;

							BgL_auxz00_1838 = (int) (((long) 37));
							STRUCT_SET(BgL_res2006z00_405, BgL_auxz00_1838,
								BgL_arg2523z00_479);
					}}
					return BgL_res2006z00_405;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvm_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/jvm_class.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2543z00zzbackend_jvm_classz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2543z00zzbackend_jvm_classz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string2543z00zzbackend_jvm_classz00));
		}
	}

#ifdef __cplusplus
}
#endif
