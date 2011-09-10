/*===========================================================================*/
/*   (BackEnd/dotnet_class.scm)                                              */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/dotnet_class.scm)*/
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

	typedef struct BgL_dotnetz00_bgl
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
		obj_t BgL_outz00;
		obj_t BgL_qnamez00;
	}                *BgL_dotnetz00_bglt;


	static obj_t
		BGl_structzb2objectzd2ze3objec2089z83zzbackend_dotnet_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z52thezd2dotnetzd2nilz52zzbackend_dotnet_classz00 = BUNSPEC;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_dotnet_classz00 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_dotnet_classz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_dotnet_classz00();
	extern obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_dotnet_classz00();
	static obj_t BGl__z52allocatezd2dotnetz80zzbackend_dotnet_classz00(obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__dotnetzd2nilzd2zzbackend_dotnet_classz00(obj_t);
	BGL_EXPORTED_DECL BgL_dotnetz00_bglt
		BGl_makezd2dotnetzd2zzbackend_dotnet_classz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t,
		bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl__dotnetzf3zf3zzbackend_dotnet_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbackend_dotnet_classz00();
	static obj_t BGl__fillzd2dotnetz12zc0zzbackend_dotnet_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_dotnetz00_bglt
		BGl_fillzd2dotnetz12zc0zzbackend_dotnet_classz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_dotnetz00_bglt
		BGl_dotnetzd2nilzd2zzbackend_dotnet_classz00();
	static obj_t BGl__makezd2dotnetzd2zzbackend_dotnet_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_dotnet_classz00();
	extern obj_t BGl_bvmz00zzbackend_bvmz00;
	BGL_EXPORTED_DECL BgL_dotnetz00_bglt
		BGl_z52allocatezd2dotnetz80zzbackend_dotnet_classz00();
	static obj_t
		BGl_objectzd2ze3structzd2dotne2087ze3zzbackend_dotnet_classz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_dotnet_classz00();
	BGL_EXPORTED_DECL bool_t BGl_dotnetzf3zf3zzbackend_dotnet_classz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_dotnet_classz00();
	BGL_EXPORTED_DEF obj_t BGl_dotnetz00zzbackend_dotnet_classz00 = BUNSPEC;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string2471z00zzbackend_dotnet_classz00,
		BgL_bgl_string2471za700za7za7b2494za7, "", 0);
	      DEFINE_STRING(BGl_string2473z00zzbackend_dotnet_classz00,
		BgL_bgl_string2473za700za7za7b2495za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2475z00zzbackend_dotnet_classz00,
		BgL_bgl_string2475za700za7za7b2496za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string2476z00zzbackend_dotnet_classz00,
		BgL_bgl_string2476za700za7za7b2497za7, "backend_dotnet_class", 20);
	      DEFINE_STRING(BGl_string2477z00zzbackend_dotnet_classz00,
		BgL_bgl_string2477za700za7za7b2498za7, "_ dotnet ", 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dotnetzf3zd2envz21zzbackend_dotnet_classz00,
		BgL_bgl__dotnetza7f3za7f3za7za7b2499z00,
		BGl__dotnetzf3zf3zzbackend_dotnet_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_dotnetzd2nilzd2envz00zzbackend_dotnet_classz00,
		BgL_bgl__dotnetza7d2nilza7d22500z00,
		BGl__dotnetzd2nilzd2zzbackend_dotnet_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2dotnetz12zd2envz12zzbackend_dotnet_classz00,
		BgL_bgl__fillza7d2dotnetza712501z00,
		BGl__fillzd2dotnetz12zc0zzbackend_dotnet_classz00, 0L, BUNSPEC, 31);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2dotnetzd2envz52zzbackend_dotnet_classz00,
		BgL_bgl__za752allocateza7d2d2502z00,
		BGl__z52allocatezd2dotnetz80zzbackend_dotnet_classz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2dotnetzd2envz00zzbackend_dotnet_classz00,
		BgL_bgl__makeza7d2dotnetza7d2503z00,
		BGl__makezd2dotnetzd2zzbackend_dotnet_classz00, 0L, BUNSPEC, 30);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2472z00zzbackend_dotnet_classz00,
		BgL_bgl_objectza7d2za7e3stru2504z00,
		BGl_objectzd2ze3structzd2dotne2087ze3zzbackend_dotnet_classz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2474z00zzbackend_dotnet_classz00,
		BgL_bgl_structza7b2objectza72505z00,
		BGl_structzb2objectzd2ze3objec2089z83zzbackend_dotnet_classz00, 0L, BUNSPEC,
		2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long
		BgL_checksumz00_1018, char *BgL_fromz00_1019)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_dotnet_classz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_dotnet_classz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_dotnet_classz00();
					BGl_cnstzd2initzd2zzbackend_dotnet_classz00();
					BGl_importedzd2moduleszd2initz00zzbackend_dotnet_classz00();
					BGl_objectzd2initzd2zzbackend_dotnet_classz00();
					BGl_methodzd2initzd2zzbackend_dotnet_classz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_dotnet_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_dotnet_class");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			{	/* BackEnd/dotnet_class.scm 15 */
				obj_t BgL_cportz00_912;

				BgL_cportz00_912 =
					bgl_open_input_string(BGl_string2477z00zzbackend_dotnet_classz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_913;

					BgL_iz00_913 = ((long) 1);
				BgL_loopz00_914:
					if ((BgL_iz00_913 == ((long) -1)))
						{	/* BackEnd/dotnet_class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/dotnet_class.scm 15 */
							{	/* BackEnd/dotnet_class.scm 15 */
								obj_t BgL_arg2491z00_916;

								{	/* BackEnd/dotnet_class.scm 15 */

									{	/* BackEnd/dotnet_class.scm 15 */
										obj_t BgL_locationz00_918;

										BgL_locationz00_918 = BBOOL(((bool_t) 0));
										{	/* BackEnd/dotnet_class.scm 15 */

											BgL_arg2491z00_916 =
												BGl_readz00zz__readerz00(BgL_cportz00_912,
												BgL_locationz00_918);
										}
									}
								}
								{	/* BackEnd/dotnet_class.scm 15 */
									int BgL_auxz00_1036;

									BgL_auxz00_1036 = (int) (BgL_iz00_913);
									CNST_TABLE_SET(BgL_auxz00_1036, BgL_arg2491z00_916);
							}}
							{	/* BackEnd/dotnet_class.scm 15 */
								int BgL_auxz00_919;

								BgL_auxz00_919 = (int) ((BgL_iz00_913 - ((long) 1)));
								{
									long BgL_iz00_1041;

									BgL_iz00_1041 = (long) (BgL_auxz00_919);
									BgL_iz00_913 = BgL_iz00_1041;
									goto BgL_loopz00_914;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			{	/* BackEnd/dotnet_class.scm 19 */
				obj_t BgL_arg2118z00_303;

				obj_t BgL_arg2119z00_304;

				obj_t BgL_arg2127z00_307;

				BgL_arg2118z00_303 = CNST_TABLE_REF(((long) 0));
				BgL_arg2119z00_304 = BGl_bvmz00zzbackend_bvmz00;
				{	/* BackEnd/dotnet_class.scm 19 */
					obj_t BgL_v2085z00_308;

					BgL_v2085z00_308 = create_vector((int) (((long) 0)));
					BgL_arg2127z00_307 = BgL_v2085z00_308;
				}
				BGl_dotnetz00zzbackend_dotnet_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2118z00_303,
					BgL_arg2119z00_304, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2dotnetzd2envz52zzbackend_dotnet_classz00,
					BGl_dotnetzd2nilzd2envz00zzbackend_dotnet_classz00,
					BGl_dotnetzf3zd2envz21zzbackend_dotnet_classz00, ((long) 92868103),
					BFALSE, BFALSE, BgL_arg2127z00_307);
			}
			return (BGl_z52thezd2dotnetzd2nilz52zzbackend_dotnet_classz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* dotnet? */
	BGL_EXPORTED_DEF bool_t BGl_dotnetzf3zf3zzbackend_dotnet_classz00(obj_t
		BgL_obj2084z00_1)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2084z00_1,
				BGl_dotnetz00zzbackend_dotnet_classz00);
		}
	}



/* _dotnet? */
	obj_t BGl__dotnetzf3zf3zzbackend_dotnet_classz00(obj_t BgL_envz00_835,
		obj_t BgL_obj2084z00_836)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2084z00_836,
					BGl_dotnetz00zzbackend_dotnet_classz00));
		}
	}



/* make-dotnet */
	BGL_EXPORTED_DEF BgL_dotnetz00_bglt
		BGl_makezd2dotnetzd2zzbackend_dotnet_classz00(obj_t BgL_language1867z00_5,
		obj_t BgL_srfi01868z00_6, obj_t BgL_name1869z00_7,
		obj_t BgL_externzd2variables1870zd2_8,
		obj_t BgL_externzd2functions1871zd2_9, obj_t BgL_externzd2types1872zd2_10,
		obj_t BgL_variables1873z00_11, obj_t BgL_functions1874z00_12,
		obj_t BgL_types1875z00_13, bool_t BgL_typed1876z00_14,
		obj_t BgL_heapzd2suffix1877zd2_15, obj_t BgL_heapzd2compatible1878zd2_16,
		bool_t BgL_callcc1879z00_17, bool_t BgL_qualifiedzd2types1880zd2_18,
		bool_t BgL_effectzb21881zb2_19, bool_t BgL_removezd2emptyzd2let1882z00_20,
		bool_t BgL_foreignzd2closure1883zd2_21, bool_t BgL_typedzd2eq1884zd2_22,
		bool_t BgL_tracezd2support1885zd2_23,
		obj_t BgL_foreignzd2clausezd2suppo1886z00_24,
		obj_t BgL_debugzd2support1887zd2_25, bool_t BgL_pragmazd2support1888zd2_26,
		bool_t BgL_tvectorzd2descrzd2suppor1889z00_27,
		bool_t BgL_requirezd2tailc1890zd2_28, obj_t BgL_registers1891z00_29,
		obj_t BgL_pregisters1892z00_30, bool_t BgL_boundzd2check1893zd2_31,
		bool_t BgL_typezd2check1894zd2_32, obj_t BgL_out1895z00_33,
		obj_t BgL_qname1896z00_34)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{	/* BackEnd/dotnet_class.scm 19 */
				BgL_dotnetz00_bglt BgL_new1897z00_474;

				{	/* BackEnd/dotnet_class.scm 19 */
					BgL_dotnetz00_bglt BgL_res2463z00_479;

					{	/* BackEnd/dotnet_class.scm 19 */
						BgL_dotnetz00_bglt BgL_new1961z00_475;

						BgL_new1961z00_475 =
							((BgL_dotnetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_dotnetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1961z00_475),
							BGl_classzd2numzd2zz__objectz00
							(BGl_dotnetz00zzbackend_dotnet_classz00));
						{	/* BackEnd/dotnet_class.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_1054;

							BgL_auxz00_1054 = (BgL_objectz00_bglt) (BgL_new1961z00_475);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1054, BFALSE);
						}
						BgL_res2463z00_479 = BgL_new1961z00_475;
					}
					BgL_new1897z00_474 = BgL_res2463z00_479;
				}
				{	/* BackEnd/dotnet_class.scm 19 */
					BgL_dotnetz00_bglt BgL_res2464z00_541;

					{	/* BackEnd/dotnet_class.scm 19 */
						BgL_dotnetz00_bglt BgL_new1929z00_480;

						BgL_new1929z00_480 = BgL_new1897z00_474;
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_language1899z00_511;

							obj_t BgL_srfi01900z00_512;

							obj_t BgL_name1901z00_513;

							obj_t BgL_externzd2variables1902zd2_514;

							obj_t BgL_externzd2functions1903zd2_515;

							obj_t BgL_externzd2types1904zd2_516;

							obj_t BgL_variables1905z00_517;

							obj_t BgL_functions1906z00_518;

							obj_t BgL_types1907z00_519;

							bool_t BgL_typed1908z00_520;

							obj_t BgL_heapzd2suffix1909zd2_521;

							obj_t BgL_heapzd2compatible1910zd2_522;

							bool_t BgL_callcc1911z00_523;

							bool_t BgL_qualifiedzd2types1912zd2_524;

							bool_t BgL_effectzb21913zb2_525;

							bool_t BgL_removezd2emptyzd2let1914z00_526;

							bool_t BgL_foreignzd2closure1915zd2_527;

							bool_t BgL_typedzd2eq1916zd2_528;

							bool_t BgL_tracezd2support1917zd2_529;

							obj_t BgL_foreignzd2clausezd2suppo1918z00_530;

							obj_t BgL_debugzd2support1919zd2_531;

							bool_t BgL_pragmazd2support1920zd2_532;

							bool_t BgL_tvectorzd2descrzd2suppor1921z00_533;

							bool_t BgL_requirezd2tailc1922zd2_534;

							obj_t BgL_registers1923z00_535;

							obj_t BgL_pregisters1924z00_536;

							bool_t BgL_boundzd2check1925zd2_537;

							bool_t BgL_typezd2check1926zd2_538;

							obj_t BgL_out1927z00_539;

							obj_t BgL_qname1928z00_540;

							BgL_language1899z00_511 = BgL_language1867z00_5;
							BgL_srfi01900z00_512 = BgL_srfi01868z00_6;
							BgL_name1901z00_513 = BgL_name1869z00_7;
							BgL_externzd2variables1902zd2_514 =
								BgL_externzd2variables1870zd2_8;
							BgL_externzd2functions1903zd2_515 =
								BgL_externzd2functions1871zd2_9;
							BgL_externzd2types1904zd2_516 = BgL_externzd2types1872zd2_10;
							BgL_variables1905z00_517 = BgL_variables1873z00_11;
							BgL_functions1906z00_518 = BgL_functions1874z00_12;
							BgL_types1907z00_519 = BgL_types1875z00_13;
							BgL_typed1908z00_520 = BgL_typed1876z00_14;
							BgL_heapzd2suffix1909zd2_521 = BgL_heapzd2suffix1877zd2_15;
							BgL_heapzd2compatible1910zd2_522 =
								BgL_heapzd2compatible1878zd2_16;
							BgL_callcc1911z00_523 = BgL_callcc1879z00_17;
							BgL_qualifiedzd2types1912zd2_524 =
								BgL_qualifiedzd2types1880zd2_18;
							BgL_effectzb21913zb2_525 = BgL_effectzb21881zb2_19;
							BgL_removezd2emptyzd2let1914z00_526 =
								BgL_removezd2emptyzd2let1882z00_20;
							BgL_foreignzd2closure1915zd2_527 =
								BgL_foreignzd2closure1883zd2_21;
							BgL_typedzd2eq1916zd2_528 = BgL_typedzd2eq1884zd2_22;
							BgL_tracezd2support1917zd2_529 = BgL_tracezd2support1885zd2_23;
							BgL_foreignzd2clausezd2suppo1918z00_530 =
								BgL_foreignzd2clausezd2suppo1886z00_24;
							BgL_debugzd2support1919zd2_531 = BgL_debugzd2support1887zd2_25;
							BgL_pragmazd2support1920zd2_532 = BgL_pragmazd2support1888zd2_26;
							BgL_tvectorzd2descrzd2suppor1921z00_533 =
								BgL_tvectorzd2descrzd2suppor1889z00_27;
							BgL_requirezd2tailc1922zd2_534 = BgL_requirezd2tailc1890zd2_28;
							BgL_registers1923z00_535 = BgL_registers1891z00_29;
							BgL_pregisters1924z00_536 = BgL_pregisters1892z00_30;
							BgL_boundzd2check1925zd2_537 = BgL_boundzd2check1893zd2_31;
							BgL_typezd2check1926zd2_538 = BgL_typezd2check1894zd2_32;
							BgL_out1927z00_539 = BgL_out1895z00_33;
							BgL_qname1928z00_540 = BgL_qname1896z00_34;
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_languagez00) =
								((obj_t) BgL_language1899z00_511), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01900z00_512), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->BgL_namez00) =
								((obj_t) BgL_name1901z00_513), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1902zd2_514), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1903zd2_515), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1904zd2_516), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1905z00_517), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1906z00_518), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->BgL_typesz00) =
								((obj_t) BgL_types1907z00_519), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->BgL_typedz00) =
								((bool_t) BgL_typed1908z00_520), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1909zd2_521), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1910zd2_522), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_callccz00) = ((bool_t) BgL_callcc1911z00_523), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1912zd2_524), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21913zb2_525), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1914z00_526), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1915zd2_527), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1916zd2_528), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1917zd2_529), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1918z00_530), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1919zd2_531), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1920zd2_532), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1921z00_533), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1922zd2_534), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_registersz00) =
								((obj_t) BgL_registers1923z00_535), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1924z00_536), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1925zd2_537), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1926zd2_538), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->BgL_outz00) =
								((obj_t) BgL_out1927z00_539), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_480))->BgL_qnamez00) =
								((obj_t) BgL_qname1928z00_540), BUNSPEC);
							BgL_res2464z00_541 = BgL_new1929z00_480;
					}} BgL_res2464z00_541;
				}
				BGl_backendzd2initializa7ez12z67zzbackend_backendz00(
					(BgL_backendz00_bglt) (BgL_new1897z00_474));
				return BgL_new1897z00_474;
			}
		}
	}



/* _make-dotnet */
	obj_t BGl__makezd2dotnetzd2zzbackend_dotnet_classz00(obj_t BgL_envz00_837,
		obj_t BgL_language1867z00_838, obj_t BgL_srfi01868z00_839,
		obj_t BgL_name1869z00_840, obj_t BgL_externzd2variables1870zd2_841,
		obj_t BgL_externzd2functions1871zd2_842,
		obj_t BgL_externzd2types1872zd2_843, obj_t BgL_variables1873z00_844,
		obj_t BgL_functions1874z00_845, obj_t BgL_types1875z00_846,
		obj_t BgL_typed1876z00_847, obj_t BgL_heapzd2suffix1877zd2_848,
		obj_t BgL_heapzd2compatible1878zd2_849, obj_t BgL_callcc1879z00_850,
		obj_t BgL_qualifiedzd2types1880zd2_851, obj_t BgL_effectzb21881zb2_852,
		obj_t BgL_removezd2emptyzd2let1882z00_853,
		obj_t BgL_foreignzd2closure1883zd2_854, obj_t BgL_typedzd2eq1884zd2_855,
		obj_t BgL_tracezd2support1885zd2_856,
		obj_t BgL_foreignzd2clausezd2suppo1886z00_857,
		obj_t BgL_debugzd2support1887zd2_858, obj_t BgL_pragmazd2support1888zd2_859,
		obj_t BgL_tvectorzd2descrzd2suppor1889z00_860,
		obj_t BgL_requirezd2tailc1890zd2_861, obj_t BgL_registers1891z00_862,
		obj_t BgL_pregisters1892z00_863, obj_t BgL_boundzd2check1893zd2_864,
		obj_t BgL_typezd2check1894zd2_865, obj_t BgL_out1895z00_866,
		obj_t BgL_qname1896z00_867)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			return
				(obj_t) (BGl_makezd2dotnetzd2zzbackend_dotnet_classz00
				(BgL_language1867z00_838, BgL_srfi01868z00_839, BgL_name1869z00_840,
					BgL_externzd2variables1870zd2_841, BgL_externzd2functions1871zd2_842,
					BgL_externzd2types1872zd2_843, BgL_variables1873z00_844,
					BgL_functions1874z00_845, BgL_types1875z00_846,
					CBOOL(BgL_typed1876z00_847), BgL_heapzd2suffix1877zd2_848,
					BgL_heapzd2compatible1878zd2_849, CBOOL(BgL_callcc1879z00_850),
					CBOOL(BgL_qualifiedzd2types1880zd2_851),
					CBOOL(BgL_effectzb21881zb2_852),
					CBOOL(BgL_removezd2emptyzd2let1882z00_853),
					CBOOL(BgL_foreignzd2closure1883zd2_854),
					CBOOL(BgL_typedzd2eq1884zd2_855),
					CBOOL(BgL_tracezd2support1885zd2_856),
					BgL_foreignzd2clausezd2suppo1886z00_857,
					BgL_debugzd2support1887zd2_858,
					CBOOL(BgL_pragmazd2support1888zd2_859),
					CBOOL(BgL_tvectorzd2descrzd2suppor1889z00_860),
					CBOOL(BgL_requirezd2tailc1890zd2_861), BgL_registers1891z00_862,
					BgL_pregisters1892z00_863, CBOOL(BgL_boundzd2check1893zd2_864),
					CBOOL(BgL_typezd2check1894zd2_865), BgL_out1895z00_866,
					BgL_qname1896z00_867));
		}
	}



/* fill-dotnet! */
	BGL_EXPORTED_DEF BgL_dotnetz00_bglt
		BGl_fillzd2dotnetz12zc0zzbackend_dotnet_classz00(BgL_dotnetz00_bglt
		BgL_new1929z00_35, obj_t BgL_language1899z00_36, obj_t BgL_srfi01900z00_37,
		obj_t BgL_name1901z00_38, obj_t BgL_externzd2variables1902zd2_39,
		obj_t BgL_externzd2functions1903zd2_40, obj_t BgL_externzd2types1904zd2_41,
		obj_t BgL_variables1905z00_42, obj_t BgL_functions1906z00_43,
		obj_t BgL_types1907z00_44, bool_t BgL_typed1908z00_45,
		obj_t BgL_heapzd2suffix1909zd2_46, obj_t BgL_heapzd2compatible1910zd2_47,
		bool_t BgL_callcc1911z00_48, bool_t BgL_qualifiedzd2types1912zd2_49,
		bool_t BgL_effectzb21913zb2_50, bool_t BgL_removezd2emptyzd2let1914z00_51,
		bool_t BgL_foreignzd2closure1915zd2_52, bool_t BgL_typedzd2eq1916zd2_53,
		bool_t BgL_tracezd2support1917zd2_54,
		obj_t BgL_foreignzd2clausezd2suppo1918z00_55,
		obj_t BgL_debugzd2support1919zd2_56, bool_t BgL_pragmazd2support1920zd2_57,
		bool_t BgL_tvectorzd2descrzd2suppor1921z00_58,
		bool_t BgL_requirezd2tailc1922zd2_59, obj_t BgL_registers1923z00_60,
		obj_t BgL_pregisters1924z00_61, bool_t BgL_boundzd2check1925zd2_62,
		bool_t BgL_typezd2check1926zd2_63, obj_t BgL_out1927z00_64,
		obj_t BgL_qname1928z00_65)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{	/* BackEnd/dotnet_class.scm 19 */
				obj_t BgL_language1899z00_921;

				obj_t BgL_srfi01900z00_922;

				obj_t BgL_name1901z00_923;

				obj_t BgL_externzd2variables1902zd2_924;

				obj_t BgL_externzd2functions1903zd2_925;

				obj_t BgL_externzd2types1904zd2_926;

				obj_t BgL_variables1905z00_927;

				obj_t BgL_functions1906z00_928;

				obj_t BgL_types1907z00_929;

				bool_t BgL_typed1908z00_930;

				obj_t BgL_heapzd2suffix1909zd2_931;

				obj_t BgL_heapzd2compatible1910zd2_932;

				bool_t BgL_callcc1911z00_933;

				bool_t BgL_qualifiedzd2types1912zd2_934;

				bool_t BgL_effectzb21913zb2_935;

				bool_t BgL_removezd2emptyzd2let1914z00_936;

				bool_t BgL_foreignzd2closure1915zd2_937;

				bool_t BgL_typedzd2eq1916zd2_938;

				bool_t BgL_tracezd2support1917zd2_939;

				obj_t BgL_foreignzd2clausezd2suppo1918z00_940;

				obj_t BgL_debugzd2support1919zd2_941;

				bool_t BgL_pragmazd2support1920zd2_942;

				bool_t BgL_tvectorzd2descrzd2suppor1921z00_943;

				bool_t BgL_requirezd2tailc1922zd2_944;

				obj_t BgL_registers1923z00_945;

				obj_t BgL_pregisters1924z00_946;

				bool_t BgL_boundzd2check1925zd2_947;

				bool_t BgL_typezd2check1926zd2_948;

				obj_t BgL_out1927z00_949;

				obj_t BgL_qname1928z00_950;

				BgL_language1899z00_921 = BgL_language1899z00_36;
				BgL_srfi01900z00_922 = BgL_srfi01900z00_37;
				BgL_name1901z00_923 = BgL_name1901z00_38;
				BgL_externzd2variables1902zd2_924 = BgL_externzd2variables1902zd2_39;
				BgL_externzd2functions1903zd2_925 = BgL_externzd2functions1903zd2_40;
				BgL_externzd2types1904zd2_926 = BgL_externzd2types1904zd2_41;
				BgL_variables1905z00_927 = BgL_variables1905z00_42;
				BgL_functions1906z00_928 = BgL_functions1906z00_43;
				BgL_types1907z00_929 = BgL_types1907z00_44;
				BgL_typed1908z00_930 = BgL_typed1908z00_45;
				BgL_heapzd2suffix1909zd2_931 = BgL_heapzd2suffix1909zd2_46;
				BgL_heapzd2compatible1910zd2_932 = BgL_heapzd2compatible1910zd2_47;
				BgL_callcc1911z00_933 = BgL_callcc1911z00_48;
				BgL_qualifiedzd2types1912zd2_934 = BgL_qualifiedzd2types1912zd2_49;
				BgL_effectzb21913zb2_935 = BgL_effectzb21913zb2_50;
				BgL_removezd2emptyzd2let1914z00_936 =
					BgL_removezd2emptyzd2let1914z00_51;
				BgL_foreignzd2closure1915zd2_937 = BgL_foreignzd2closure1915zd2_52;
				BgL_typedzd2eq1916zd2_938 = BgL_typedzd2eq1916zd2_53;
				BgL_tracezd2support1917zd2_939 = BgL_tracezd2support1917zd2_54;
				BgL_foreignzd2clausezd2suppo1918z00_940 =
					BgL_foreignzd2clausezd2suppo1918z00_55;
				BgL_debugzd2support1919zd2_941 = BgL_debugzd2support1919zd2_56;
				BgL_pragmazd2support1920zd2_942 = BgL_pragmazd2support1920zd2_57;
				BgL_tvectorzd2descrzd2suppor1921z00_943 =
					BgL_tvectorzd2descrzd2suppor1921z00_58;
				BgL_requirezd2tailc1922zd2_944 = BgL_requirezd2tailc1922zd2_59;
				BgL_registers1923z00_945 = BgL_registers1923z00_60;
				BgL_pregisters1924z00_946 = BgL_pregisters1924z00_61;
				BgL_boundzd2check1925zd2_947 = BgL_boundzd2check1925zd2_62;
				BgL_typezd2check1926zd2_948 = BgL_typezd2check1926zd2_63;
				BgL_out1927z00_949 = BgL_out1927z00_64;
				BgL_qname1928z00_950 = BgL_qname1928z00_65;
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_languagez00) =
					((obj_t) BgL_language1899z00_921), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01900z00_922), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_namez00) =
					((obj_t) BgL_name1901z00_923), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1902zd2_924), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1903zd2_925), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1904zd2_926), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_variablesz00) =
					((obj_t) BgL_variables1905z00_927), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_functionsz00) =
					((obj_t) BgL_functions1906z00_928), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_typesz00) =
					((obj_t) BgL_types1907z00_929), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_typedz00) =
					((bool_t) BgL_typed1908z00_930), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1909zd2_931), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1910zd2_932), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_callccz00) =
					((bool_t) BgL_callcc1911z00_933), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1912zd2_934), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21913zb2_935), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1914z00_936), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1915zd2_937), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1916zd2_938), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1917zd2_939), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1918z00_940), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1919zd2_941), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1920zd2_942), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1921z00_943), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1922zd2_944), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_registersz00) =
					((obj_t) BgL_registers1923z00_945), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1924z00_946), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->
						BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1925zd2_947), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1926zd2_948), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_outz00) =
					((obj_t) BgL_out1927z00_949), BUNSPEC);
				((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_35))->BgL_qnamez00) =
					((obj_t) BgL_qname1928z00_950), BUNSPEC);
				return BgL_new1929z00_35;
			}
		}
	}



/* _fill-dotnet! */
	obj_t BGl__fillzd2dotnetz12zc0zzbackend_dotnet_classz00(obj_t BgL_envz00_868,
		obj_t BgL_new1929z00_869, obj_t BgL_language1899z00_870,
		obj_t BgL_srfi01900z00_871, obj_t BgL_name1901z00_872,
		obj_t BgL_externzd2variables1902zd2_873,
		obj_t BgL_externzd2functions1903zd2_874,
		obj_t BgL_externzd2types1904zd2_875, obj_t BgL_variables1905z00_876,
		obj_t BgL_functions1906z00_877, obj_t BgL_types1907z00_878,
		obj_t BgL_typed1908z00_879, obj_t BgL_heapzd2suffix1909zd2_880,
		obj_t BgL_heapzd2compatible1910zd2_881, obj_t BgL_callcc1911z00_882,
		obj_t BgL_qualifiedzd2types1912zd2_883, obj_t BgL_effectzb21913zb2_884,
		obj_t BgL_removezd2emptyzd2let1914z00_885,
		obj_t BgL_foreignzd2closure1915zd2_886, obj_t BgL_typedzd2eq1916zd2_887,
		obj_t BgL_tracezd2support1917zd2_888,
		obj_t BgL_foreignzd2clausezd2suppo1918z00_889,
		obj_t BgL_debugzd2support1919zd2_890, obj_t BgL_pragmazd2support1920zd2_891,
		obj_t BgL_tvectorzd2descrzd2suppor1921z00_892,
		obj_t BgL_requirezd2tailc1922zd2_893, obj_t BgL_registers1923z00_894,
		obj_t BgL_pregisters1924z00_895, obj_t BgL_boundzd2check1925zd2_896,
		obj_t BgL_typezd2check1926zd2_897, obj_t BgL_out1927z00_898,
		obj_t BgL_qname1928z00_899)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{	/* BackEnd/dotnet_class.scm 19 */
				BgL_dotnetz00_bglt BgL_auxz00_1134;

				{	/* BackEnd/dotnet_class.scm 19 */
					BgL_dotnetz00_bglt BgL_res2492z00_1012;

					{	/* BackEnd/dotnet_class.scm 19 */
						BgL_dotnetz00_bglt BgL_new1929z00_951;

						obj_t BgL_language1899z00_952;

						obj_t BgL_srfi01900z00_953;

						obj_t BgL_name1901z00_954;

						bool_t BgL_typed1908z00_961;

						obj_t BgL_heapzd2suffix1909zd2_962;

						obj_t BgL_heapzd2compatible1910zd2_963;

						bool_t BgL_callcc1911z00_964;

						bool_t BgL_qualifiedzd2types1912zd2_965;

						bool_t BgL_effectzb21913zb2_966;

						bool_t BgL_removezd2emptyzd2let1914z00_967;

						bool_t BgL_foreignzd2closure1915zd2_968;

						bool_t BgL_typedzd2eq1916zd2_969;

						bool_t BgL_tracezd2support1917zd2_970;

						obj_t BgL_foreignzd2clausezd2suppo1918z00_971;

						obj_t BgL_debugzd2support1919zd2_972;

						bool_t BgL_pragmazd2support1920zd2_973;

						bool_t BgL_tvectorzd2descrzd2suppor1921z00_974;

						bool_t BgL_requirezd2tailc1922zd2_975;

						obj_t BgL_registers1923z00_976;

						obj_t BgL_pregisters1924z00_977;

						bool_t BgL_boundzd2check1925zd2_978;

						bool_t BgL_typezd2check1926zd2_979;

						obj_t BgL_out1927z00_980;

						obj_t BgL_qname1928z00_981;

						BgL_new1929z00_951 = (BgL_dotnetz00_bglt) (BgL_new1929z00_869);
						BgL_language1899z00_952 = BgL_language1899z00_870;
						BgL_srfi01900z00_953 = BgL_srfi01900z00_871;
						BgL_name1901z00_954 = BgL_name1901z00_872;
						BgL_typed1908z00_961 = CBOOL(BgL_typed1908z00_879);
						BgL_heapzd2suffix1909zd2_962 = BgL_heapzd2suffix1909zd2_880;
						BgL_heapzd2compatible1910zd2_963 = BgL_heapzd2compatible1910zd2_881;
						BgL_callcc1911z00_964 = CBOOL(BgL_callcc1911z00_882);
						BgL_qualifiedzd2types1912zd2_965 =
							CBOOL(BgL_qualifiedzd2types1912zd2_883);
						BgL_effectzb21913zb2_966 = CBOOL(BgL_effectzb21913zb2_884);
						BgL_removezd2emptyzd2let1914z00_967 =
							CBOOL(BgL_removezd2emptyzd2let1914z00_885);
						BgL_foreignzd2closure1915zd2_968 =
							CBOOL(BgL_foreignzd2closure1915zd2_886);
						BgL_typedzd2eq1916zd2_969 = CBOOL(BgL_typedzd2eq1916zd2_887);
						BgL_tracezd2support1917zd2_970 =
							CBOOL(BgL_tracezd2support1917zd2_888);
						BgL_foreignzd2clausezd2suppo1918z00_971 =
							BgL_foreignzd2clausezd2suppo1918z00_889;
						BgL_debugzd2support1919zd2_972 = BgL_debugzd2support1919zd2_890;
						BgL_pragmazd2support1920zd2_973 =
							CBOOL(BgL_pragmazd2support1920zd2_891);
						BgL_tvectorzd2descrzd2suppor1921z00_974 =
							CBOOL(BgL_tvectorzd2descrzd2suppor1921z00_892);
						BgL_requirezd2tailc1922zd2_975 =
							CBOOL(BgL_requirezd2tailc1922zd2_893);
						BgL_registers1923z00_976 = BgL_registers1923z00_894;
						BgL_pregisters1924z00_977 = BgL_pregisters1924z00_895;
						BgL_boundzd2check1925zd2_978 = CBOOL(BgL_boundzd2check1925zd2_896);
						BgL_typezd2check1926zd2_979 = CBOOL(BgL_typezd2check1926zd2_897);
						BgL_out1927z00_980 = BgL_out1927z00_898;
						BgL_qname1928z00_981 = BgL_qname1928z00_899;
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_language1899z00_982;

							obj_t BgL_srfi01900z00_983;

							obj_t BgL_name1901z00_984;

							obj_t BgL_externzd2variables1902zd2_985;

							obj_t BgL_externzd2functions1903zd2_986;

							obj_t BgL_externzd2types1904zd2_987;

							obj_t BgL_variables1905z00_988;

							obj_t BgL_functions1906z00_989;

							obj_t BgL_types1907z00_990;

							bool_t BgL_typed1908z00_991;

							obj_t BgL_heapzd2suffix1909zd2_992;

							obj_t BgL_heapzd2compatible1910zd2_993;

							bool_t BgL_callcc1911z00_994;

							bool_t BgL_qualifiedzd2types1912zd2_995;

							bool_t BgL_effectzb21913zb2_996;

							bool_t BgL_removezd2emptyzd2let1914z00_997;

							bool_t BgL_foreignzd2closure1915zd2_998;

							bool_t BgL_typedzd2eq1916zd2_999;

							bool_t BgL_tracezd2support1917zd2_1000;

							obj_t BgL_foreignzd2clausezd2suppo1918z00_1001;

							obj_t BgL_debugzd2support1919zd2_1002;

							bool_t BgL_pragmazd2support1920zd2_1003;

							bool_t BgL_tvectorzd2descrzd2suppor1921z00_1004;

							bool_t BgL_requirezd2tailc1922zd2_1005;

							obj_t BgL_registers1923z00_1006;

							obj_t BgL_pregisters1924z00_1007;

							bool_t BgL_boundzd2check1925zd2_1008;

							bool_t BgL_typezd2check1926zd2_1009;

							obj_t BgL_out1927z00_1010;

							obj_t BgL_qname1928z00_1011;

							BgL_language1899z00_982 = BgL_language1899z00_952;
							BgL_srfi01900z00_983 = BgL_srfi01900z00_953;
							BgL_name1901z00_984 = BgL_name1901z00_954;
							BgL_externzd2variables1902zd2_985 =
								BgL_externzd2variables1902zd2_873;
							BgL_externzd2functions1903zd2_986 =
								BgL_externzd2functions1903zd2_874;
							BgL_externzd2types1904zd2_987 = BgL_externzd2types1904zd2_875;
							BgL_variables1905z00_988 = BgL_variables1905z00_876;
							BgL_functions1906z00_989 = BgL_functions1906z00_877;
							BgL_types1907z00_990 = BgL_types1907z00_878;
							BgL_typed1908z00_991 = BgL_typed1908z00_961;
							BgL_heapzd2suffix1909zd2_992 = BgL_heapzd2suffix1909zd2_962;
							BgL_heapzd2compatible1910zd2_993 =
								BgL_heapzd2compatible1910zd2_963;
							BgL_callcc1911z00_994 = BgL_callcc1911z00_964;
							BgL_qualifiedzd2types1912zd2_995 =
								BgL_qualifiedzd2types1912zd2_965;
							BgL_effectzb21913zb2_996 = BgL_effectzb21913zb2_966;
							BgL_removezd2emptyzd2let1914z00_997 =
								BgL_removezd2emptyzd2let1914z00_967;
							BgL_foreignzd2closure1915zd2_998 =
								BgL_foreignzd2closure1915zd2_968;
							BgL_typedzd2eq1916zd2_999 = BgL_typedzd2eq1916zd2_969;
							BgL_tracezd2support1917zd2_1000 = BgL_tracezd2support1917zd2_970;
							BgL_foreignzd2clausezd2suppo1918z00_1001 =
								BgL_foreignzd2clausezd2suppo1918z00_971;
							BgL_debugzd2support1919zd2_1002 = BgL_debugzd2support1919zd2_972;
							BgL_pragmazd2support1920zd2_1003 =
								BgL_pragmazd2support1920zd2_973;
							BgL_tvectorzd2descrzd2suppor1921z00_1004 =
								BgL_tvectorzd2descrzd2suppor1921z00_974;
							BgL_requirezd2tailc1922zd2_1005 = BgL_requirezd2tailc1922zd2_975;
							BgL_registers1923z00_1006 = BgL_registers1923z00_976;
							BgL_pregisters1924z00_1007 = BgL_pregisters1924z00_977;
							BgL_boundzd2check1925zd2_1008 = BgL_boundzd2check1925zd2_978;
							BgL_typezd2check1926zd2_1009 = BgL_typezd2check1926zd2_979;
							BgL_out1927z00_1010 = BgL_out1927z00_980;
							BgL_qname1928z00_1011 = BgL_qname1928z00_981;
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_languagez00) =
								((obj_t) BgL_language1899z00_982), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01900z00_983), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->BgL_namez00) =
								((obj_t) BgL_name1901z00_984), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1902zd2_985), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1903zd2_986), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1904zd2_987), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1905z00_988), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1906z00_989), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->BgL_typesz00) =
								((obj_t) BgL_types1907z00_990), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->BgL_typedz00) =
								((bool_t) BgL_typed1908z00_991), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1909zd2_992), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1910zd2_993), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_callccz00) = ((bool_t) BgL_callcc1911z00_994), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1912zd2_995), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21913zb2_996), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1914z00_997), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1915zd2_998), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1916zd2_999), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1917zd2_1000), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1918z00_1001), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1919zd2_1002), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1920zd2_1003), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1921z00_1004), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1922zd2_1005), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_registersz00) =
								((obj_t) BgL_registers1923z00_1006), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1924z00_1007), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1925zd2_1008), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1926zd2_1009), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->BgL_outz00) =
								((obj_t) BgL_out1927z00_1010), BUNSPEC);
							((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_951))->BgL_qnamez00) =
								((obj_t) BgL_qname1928z00_1011), BUNSPEC);
							BgL_res2492z00_1012 = BgL_new1929z00_951;
						}
					}
					BgL_auxz00_1134 = BgL_res2492z00_1012;
				}
				return (obj_t) (BgL_auxz00_1134);
			}
		}
	}



/* %allocate-dotnet */
	BGL_EXPORTED_DEF BgL_dotnetz00_bglt
		BGl_z52allocatezd2dotnetz80zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{	/* BackEnd/dotnet_class.scm 19 */
				BgL_dotnetz00_bglt BgL_new1961z00_1013;

				BgL_new1961z00_1013 =
					((BgL_dotnetz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_dotnetz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1961z00_1013),
					BGl_classzd2numzd2zz__objectz00
					(BGl_dotnetz00zzbackend_dotnet_classz00));
				{	/* BackEnd/dotnet_class.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_1184;

					BgL_auxz00_1184 = (BgL_objectz00_bglt) (BgL_new1961z00_1013);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_1184, BFALSE);
				}
				return BgL_new1961z00_1013;
			}
		}
	}



/* _%allocate-dotnet */
	obj_t BGl__z52allocatezd2dotnetz80zzbackend_dotnet_classz00(obj_t
		BgL_envz00_833)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{	/* BackEnd/dotnet_class.scm 19 */
				BgL_dotnetz00_bglt BgL_auxz00_1187;

				{	/* BackEnd/dotnet_class.scm 19 */
					BgL_dotnetz00_bglt BgL_res2493z00_1017;

					{	/* BackEnd/dotnet_class.scm 19 */
						BgL_dotnetz00_bglt BgL_new1961z00_1015;

						BgL_new1961z00_1015 =
							((BgL_dotnetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_dotnetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1961z00_1015),
							BGl_classzd2numzd2zz__objectz00
							(BGl_dotnetz00zzbackend_dotnet_classz00));
						{	/* BackEnd/dotnet_class.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_1192;

							BgL_auxz00_1192 = (BgL_objectz00_bglt) (BgL_new1961z00_1015);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1192, BFALSE);
						}
						BgL_res2493z00_1017 = BgL_new1961z00_1015;
					}
					BgL_auxz00_1187 = BgL_res2493z00_1017;
				}
				return (obj_t) (BgL_auxz00_1187);
			}
		}
	}



/* dotnet-nil */
	BGL_EXPORTED_DEF BgL_dotnetz00_bglt
		BGl_dotnetzd2nilzd2zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			if ((BGl_z52thezd2dotnetzd2nilz52zzbackend_dotnet_classz00 == BUNSPEC))
				{	/* BackEnd/dotnet_class.scm 19 */
					{	/* BackEnd/dotnet_class.scm 19 */
						BgL_dotnetz00_bglt BgL_res2465z00_580;

						{	/* BackEnd/dotnet_class.scm 19 */
							BgL_dotnetz00_bglt BgL_new1961z00_576;

							BgL_new1961z00_576 =
								((BgL_dotnetz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_dotnetz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1961z00_576),
								BGl_classzd2numzd2zz__objectz00
								(BGl_dotnetz00zzbackend_dotnet_classz00));
							{	/* BackEnd/dotnet_class.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_1202;

								BgL_auxz00_1202 = (BgL_objectz00_bglt) (BgL_new1961z00_576);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1202, BFALSE);
							}
							BgL_res2465z00_580 = BgL_new1961z00_576;
						}
						BGl_z52thezd2dotnetzd2nilz52zzbackend_dotnet_classz00 =
							(obj_t) (BgL_res2465z00_580);
					}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2141z00_343;

						obj_t BgL_arg2145z00_344;

						obj_t BgL_arg2159z00_347;

						obj_t BgL_arg2187z00_352;

						BgL_arg2141z00_343 = CNST_TABLE_REF(((long) 1));
						BgL_arg2145z00_344 = CNST_TABLE_REF(((long) 1));
						BgL_arg2159z00_347 = CNST_TABLE_REF(((long) 1));
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_res2466z00_582;

							{	/* BackEnd/dotnet_class.scm 19 */
								obj_t BgL_auxz00_1209;

								BgL_auxz00_1209 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2466z00_582 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_1209);
							}
							BgL_arg2187z00_352 = BgL_res2466z00_582;
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							BgL_dotnetz00_bglt BgL_res2467z00_644;

							{	/* BackEnd/dotnet_class.scm 19 */
								BgL_dotnetz00_bglt BgL_new1929z00_583;

								BgL_new1929z00_583 =
									(BgL_dotnetz00_bglt)
									(BGl_z52thezd2dotnetzd2nilz52zzbackend_dotnet_classz00);
								{	/* BackEnd/dotnet_class.scm 19 */
									obj_t BgL_language1899z00_614;

									obj_t BgL_srfi01900z00_615;

									obj_t BgL_name1901z00_616;

									obj_t BgL_externzd2variables1902zd2_617;

									obj_t BgL_externzd2functions1903zd2_618;

									obj_t BgL_externzd2types1904zd2_619;

									obj_t BgL_variables1905z00_620;

									obj_t BgL_functions1906z00_621;

									obj_t BgL_types1907z00_622;

									bool_t BgL_typed1908z00_623;

									obj_t BgL_heapzd2suffix1909zd2_624;

									obj_t BgL_heapzd2compatible1910zd2_625;

									bool_t BgL_callcc1911z00_626;

									bool_t BgL_qualifiedzd2types1912zd2_627;

									bool_t BgL_effectzb21913zb2_628;

									bool_t BgL_removezd2emptyzd2let1914z00_629;

									bool_t BgL_foreignzd2closure1915zd2_630;

									bool_t BgL_typedzd2eq1916zd2_631;

									bool_t BgL_tracezd2support1917zd2_632;

									obj_t BgL_foreignzd2clausezd2suppo1918z00_633;

									obj_t BgL_debugzd2support1919zd2_634;

									bool_t BgL_pragmazd2support1920zd2_635;

									bool_t BgL_tvectorzd2descrzd2suppor1921z00_636;

									bool_t BgL_requirezd2tailc1922zd2_637;

									obj_t BgL_registers1923z00_638;

									obj_t BgL_pregisters1924z00_639;

									bool_t BgL_boundzd2check1925zd2_640;

									bool_t BgL_typezd2check1926zd2_641;

									obj_t BgL_out1927z00_642;

									obj_t BgL_qname1928z00_643;

									BgL_language1899z00_614 = BgL_arg2141z00_343;
									BgL_srfi01900z00_615 = BgL_arg2145z00_344;
									BgL_name1901z00_616 =
										BGl_string2471z00zzbackend_dotnet_classz00;
									BgL_externzd2variables1902zd2_617 = BUNSPEC;
									BgL_externzd2functions1903zd2_618 = BUNSPEC;
									BgL_externzd2types1904zd2_619 = BUNSPEC;
									BgL_variables1905z00_620 = BUNSPEC;
									BgL_functions1906z00_621 = BUNSPEC;
									BgL_types1907z00_622 = BUNSPEC;
									BgL_typed1908z00_623 = ((bool_t) 0);
									BgL_heapzd2suffix1909zd2_624 =
										BGl_string2471z00zzbackend_dotnet_classz00;
									BgL_heapzd2compatible1910zd2_625 = BgL_arg2159z00_347;
									BgL_callcc1911z00_626 = ((bool_t) 0);
									BgL_qualifiedzd2types1912zd2_627 = ((bool_t) 0);
									BgL_effectzb21913zb2_628 = ((bool_t) 0);
									BgL_removezd2emptyzd2let1914z00_629 = ((bool_t) 0);
									BgL_foreignzd2closure1915zd2_630 = ((bool_t) 0);
									BgL_typedzd2eq1916zd2_631 = ((bool_t) 0);
									BgL_tracezd2support1917zd2_632 = ((bool_t) 0);
									BgL_foreignzd2clausezd2suppo1918z00_633 = BNIL;
									BgL_debugzd2support1919zd2_634 = BNIL;
									BgL_pragmazd2support1920zd2_635 = ((bool_t) 0);
									BgL_tvectorzd2descrzd2suppor1921z00_636 = ((bool_t) 0);
									BgL_requirezd2tailc1922zd2_637 = ((bool_t) 0);
									BgL_registers1923z00_638 = BNIL;
									BgL_pregisters1924z00_639 = BNIL;
									BgL_boundzd2check1925zd2_640 = ((bool_t) 0);
									BgL_typezd2check1926zd2_641 = ((bool_t) 0);
									BgL_out1927z00_642 = BgL_arg2187z00_352;
									BgL_qname1928z00_643 =
										BGl_string2471z00zzbackend_dotnet_classz00;
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_languagez00) =
										((obj_t) BgL_language1899z00_614), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_srfi0z00) = ((obj_t) BgL_srfi01900z00_615), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_namez00) = ((obj_t) BgL_name1901z00_616), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_externzd2variableszd2) =
										((obj_t) BgL_externzd2variables1902zd2_617), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_externzd2functionszd2) =
										((obj_t) BgL_externzd2functions1903zd2_618), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_externzd2typeszd2) =
										((obj_t) BgL_externzd2types1904zd2_619), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_variablesz00) =
										((obj_t) BgL_variables1905z00_620), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_functionsz00) =
										((obj_t) BgL_functions1906z00_621), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_typesz00) = ((obj_t) BgL_types1907z00_622), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_typedz00) = ((bool_t) BgL_typed1908z00_623), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_heapzd2suffixzd2) =
										((obj_t) BgL_heapzd2suffix1909zd2_624), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_heapzd2compatiblezd2) =
										((obj_t) BgL_heapzd2compatible1910zd2_625), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_callccz00) =
										((bool_t) BgL_callcc1911z00_626), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_qualifiedzd2typeszd2) =
										((bool_t) BgL_qualifiedzd2types1912zd2_627), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_effectzb2zb2) =
										((bool_t) BgL_effectzb21913zb2_628), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_removezd2emptyzd2letz00) =
										((bool_t) BgL_removezd2emptyzd2let1914z00_629), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_foreignzd2closurezd2) =
										((bool_t) BgL_foreignzd2closure1915zd2_630), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_typedzd2eqzd2) =
										((bool_t) BgL_typedzd2eq1916zd2_631), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_tracezd2supportzd2) =
										((bool_t) BgL_tracezd2support1917zd2_632), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_foreignzd2clausezd2supportz00) =
										((obj_t) BgL_foreignzd2clausezd2suppo1918z00_633), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_debugzd2supportzd2) =
										((obj_t) BgL_debugzd2support1919zd2_634), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_pragmazd2supportzd2) =
										((bool_t) BgL_pragmazd2support1920zd2_635), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_tvectorzd2descrzd2supportz00) =
										((bool_t) BgL_tvectorzd2descrzd2suppor1921z00_636),
										BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_requirezd2tailczd2) =
										((bool_t) BgL_requirezd2tailc1922zd2_637), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_registersz00) =
										((obj_t) BgL_registers1923z00_638), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_pregistersz00) =
										((obj_t) BgL_pregisters1924z00_639), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_boundzd2checkzd2) =
										((bool_t) BgL_boundzd2check1925zd2_640), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_typezd2checkzd2) =
										((bool_t) BgL_typezd2check1926zd2_641), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_outz00) = ((obj_t) BgL_out1927z00_642), BUNSPEC);
									((((BgL_dotnetz00_bglt) CREF(BgL_new1929z00_583))->
											BgL_qnamez00) = ((obj_t) BgL_qname1928z00_643), BUNSPEC);
									BgL_res2467z00_644 = BgL_new1929z00_583;
							}}
							(obj_t) (BgL_res2467z00_644);
				}}}
			else
				{	/* BackEnd/dotnet_class.scm 19 */
					BFALSE;
				}
			return
				(BgL_dotnetz00_bglt)
				(BGl_z52thezd2dotnetzd2nilz52zzbackend_dotnet_classz00);
		}
	}



/* _dotnet-nil */
	obj_t BGl__dotnetzd2nilzd2zzbackend_dotnet_classz00(obj_t BgL_envz00_834)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			return (obj_t) (BGl_dotnetzd2nilzd2zzbackend_dotnet_classz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2472z00zzbackend_dotnet_classz00,
				BGl_string2473z00zzbackend_dotnet_classz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_dotnetz00zzbackend_dotnet_classz00,
				BGl_proc2474z00zzbackend_dotnet_classz00,
				BGl_string2475z00zzbackend_dotnet_classz00);
		}
	}



/* struct+object->objec2089 */
	obj_t BGl_structzb2objectzd2ze3objec2089z83zzbackend_dotnet_classz00(obj_t
		BgL_envz00_902, obj_t BgL_oz00_903, obj_t BgL_sz00_904)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{
				BgL_dotnetz00_bglt BgL_oz00_437;

				obj_t BgL_sz00_438;

				{	/* BackEnd/dotnet_class.scm 19 */
					BgL_dotnetz00_bglt BgL_auxz00_1249;

					BgL_oz00_437 = (BgL_dotnetz00_bglt) (BgL_oz00_903);
					BgL_sz00_438 = BgL_sz00_904;
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2461z00_441;

						BgL_arg2461z00_441 = STRUCT_REF(BgL_sz00_438, (int) (((long) 0)));
						{	/* BackEnd/dotnet_class.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_1252;

							BgL_auxz00_1252 = (BgL_objectz00_bglt) (BgL_oz00_437);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1252, BgL_arg2461z00_441);
					}}
					{
						obj_t BgL_auxz00_1255;

						BgL_auxz00_1255 = STRUCT_REF(BgL_sz00_438, (int) (((long) 1)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_languagez00) =
							((obj_t) BgL_auxz00_1255), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1259;

						BgL_auxz00_1259 = STRUCT_REF(BgL_sz00_438, (int) (((long) 2)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_srfi0z00) =
							((obj_t) BgL_auxz00_1259), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1263;

						BgL_auxz00_1263 = STRUCT_REF(BgL_sz00_438, (int) (((long) 3)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_namez00) =
							((obj_t) BgL_auxz00_1263), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1267;

						BgL_auxz00_1267 = STRUCT_REF(BgL_sz00_438, (int) (((long) 4)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_externzd2variableszd2) =
							((obj_t) BgL_auxz00_1267), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1271;

						BgL_auxz00_1271 = STRUCT_REF(BgL_sz00_438, (int) (((long) 5)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_externzd2functionszd2) =
							((obj_t) BgL_auxz00_1271), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1275;

						BgL_auxz00_1275 = STRUCT_REF(BgL_sz00_438, (int) (((long) 6)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_externzd2typeszd2) = ((obj_t) BgL_auxz00_1275), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1279;

						BgL_auxz00_1279 = STRUCT_REF(BgL_sz00_438, (int) (((long) 7)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_variablesz00) =
							((obj_t) BgL_auxz00_1279), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1283;

						BgL_auxz00_1283 = STRUCT_REF(BgL_sz00_438, (int) (((long) 8)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_functionsz00) =
							((obj_t) BgL_auxz00_1283), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1287;

						BgL_auxz00_1287 = STRUCT_REF(BgL_sz00_438, (int) (((long) 9)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_typesz00) =
							((obj_t) BgL_auxz00_1287), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1291;

						BgL_auxz00_1291 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 10))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_typedz00) =
							((bool_t) BgL_auxz00_1291), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1296;

						BgL_auxz00_1296 = STRUCT_REF(BgL_sz00_438, (int) (((long) 11)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_heapzd2suffixzd2) =
							((obj_t) BgL_auxz00_1296), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1300;

						BgL_auxz00_1300 = STRUCT_REF(BgL_sz00_438, (int) (((long) 12)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_heapzd2compatiblezd2) = ((obj_t) BgL_auxz00_1300), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1304;

						BgL_auxz00_1304 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 13))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_callccz00) =
							((bool_t) BgL_auxz00_1304), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1309;

						BgL_auxz00_1309 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 14))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_qualifiedzd2typeszd2) =
							((bool_t) BgL_auxz00_1309), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1314;

						BgL_auxz00_1314 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 15))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_effectzb2zb2) =
							((bool_t) BgL_auxz00_1314), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1319;

						BgL_auxz00_1319 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 16))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_removezd2emptyzd2letz00) =
							((bool_t) BgL_auxz00_1319), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1324;

						BgL_auxz00_1324 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 17))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_foreignzd2closurezd2) =
							((bool_t) BgL_auxz00_1324), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1329;

						BgL_auxz00_1329 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 18))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_typedzd2eqzd2) =
							((bool_t) BgL_auxz00_1329), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1334;

						BgL_auxz00_1334 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 19))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_tracezd2supportzd2) = ((bool_t) BgL_auxz00_1334), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1339;

						BgL_auxz00_1339 = STRUCT_REF(BgL_sz00_438, (int) (((long) 20)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_foreignzd2clausezd2supportz00) =
							((obj_t) BgL_auxz00_1339), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1343;

						BgL_auxz00_1343 = STRUCT_REF(BgL_sz00_438, (int) (((long) 21)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_debugzd2supportzd2) = ((obj_t) BgL_auxz00_1343), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1347;

						BgL_auxz00_1347 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 22))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_pragmazd2supportzd2) = ((bool_t) BgL_auxz00_1347), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1352;

						BgL_auxz00_1352 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 23))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_tvectorzd2descrzd2supportz00) =
							((bool_t) BgL_auxz00_1352), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1357;

						BgL_auxz00_1357 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 24))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->
								BgL_requirezd2tailczd2) = ((bool_t) BgL_auxz00_1357), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1362;

						BgL_auxz00_1362 = STRUCT_REF(BgL_sz00_438, (int) (((long) 25)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_registersz00) =
							((obj_t) BgL_auxz00_1362), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1366;

						BgL_auxz00_1366 = STRUCT_REF(BgL_sz00_438, (int) (((long) 26)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_pregistersz00) =
							((obj_t) BgL_auxz00_1366), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1370;

						BgL_auxz00_1370 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 27))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_boundzd2checkzd2) =
							((bool_t) BgL_auxz00_1370), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_1375;

						BgL_auxz00_1375 =
							CBOOL(STRUCT_REF(BgL_sz00_438, (int) (((long) 28))));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_typezd2checkzd2) =
							((bool_t) BgL_auxz00_1375), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1380;

						BgL_auxz00_1380 = STRUCT_REF(BgL_sz00_438, (int) (((long) 29)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_outz00) =
							((obj_t) BgL_auxz00_1380), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_1384;

						BgL_auxz00_1384 = STRUCT_REF(BgL_sz00_438, (int) (((long) 30)));
						((((BgL_dotnetz00_bglt) CREF(BgL_oz00_437))->BgL_qnamez00) =
							((obj_t) BgL_auxz00_1384), BUNSPEC);
					}
					BgL_auxz00_1249 = BgL_oz00_437;
					return (obj_t) (BgL_auxz00_1249);
				}
			}
		}
	}



/* object->struct-dotne2087 */
	obj_t BGl_objectzd2ze3structzd2dotne2087ze3zzbackend_dotnet_classz00(obj_t
		BgL_envz00_905, obj_t BgL_obj1962z00_906)
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 19 */
			{
				BgL_dotnetz00_bglt BgL_obj1962z00_371;

				BgL_obj1962z00_371 = (BgL_dotnetz00_bglt) (BgL_obj1962z00_906);
				{	/* BackEnd/dotnet_class.scm 19 */
					obj_t BgL_res1963z00_374;

					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_keyz00_645;

						BgL_keyz00_645 = CNST_TABLE_REF(((long) 0));
						BgL_res1963z00_374 =
							make_struct(BgL_keyz00_645, (int) (((long) 31)), BUNSPEC);
					}
					{	/* BackEnd/dotnet_class.scm 19 */
						int BgL_auxz00_1393;

						BgL_auxz00_1393 = (int) (((long) 0));
						STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1393, BFALSE);
					}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2200z00_376;

						{
							BgL_backendz00_bglt BgL_auxz00_1396;

							BgL_auxz00_1396 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2200z00_376 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1396))->
								BgL_languagez00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1399;

							BgL_auxz00_1399 = (int) (((long) 1));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1399,
								BgL_arg2200z00_376);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2213z00_378;

						{
							BgL_backendz00_bglt BgL_auxz00_1402;

							BgL_auxz00_1402 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2213z00_378 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1402))->BgL_srfi0z00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1405;

							BgL_auxz00_1405 = (int) (((long) 2));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1405,
								BgL_arg2213z00_378);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2222z00_380;

						{
							BgL_backendz00_bglt BgL_auxz00_1408;

							BgL_auxz00_1408 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2222z00_380 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1408))->BgL_namez00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1411;

							BgL_auxz00_1411 = (int) (((long) 3));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1411,
								BgL_arg2222z00_380);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2227z00_382;

						{
							BgL_backendz00_bglt BgL_auxz00_1414;

							BgL_auxz00_1414 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2227z00_382 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1414))->
								BgL_externzd2variableszd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1417;

							BgL_auxz00_1417 = (int) (((long) 4));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1417,
								BgL_arg2227z00_382);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2237z00_384;

						{
							BgL_backendz00_bglt BgL_auxz00_1420;

							BgL_auxz00_1420 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2237z00_384 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1420))->
								BgL_externzd2functionszd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1423;

							BgL_auxz00_1423 = (int) (((long) 5));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1423,
								BgL_arg2237z00_384);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2240z00_386;

						{
							BgL_backendz00_bglt BgL_auxz00_1426;

							BgL_auxz00_1426 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2240z00_386 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1426))->
								BgL_externzd2typeszd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1429;

							BgL_auxz00_1429 = (int) (((long) 6));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1429,
								BgL_arg2240z00_386);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2243z00_388;

						{
							BgL_backendz00_bglt BgL_auxz00_1432;

							BgL_auxz00_1432 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2243z00_388 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1432))->
								BgL_variablesz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1435;

							BgL_auxz00_1435 = (int) (((long) 7));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1435,
								BgL_arg2243z00_388);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2252z00_390;

						{
							BgL_backendz00_bglt BgL_auxz00_1438;

							BgL_auxz00_1438 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2252z00_390 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1438))->
								BgL_functionsz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1441;

							BgL_auxz00_1441 = (int) (((long) 8));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1441,
								BgL_arg2252z00_390);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2259z00_392;

						{
							BgL_backendz00_bglt BgL_auxz00_1444;

							BgL_auxz00_1444 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2259z00_392 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1444))->BgL_typesz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1447;

							BgL_auxz00_1447 = (int) (((long) 9));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1447,
								BgL_arg2259z00_392);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2267z00_394;

						{
							BgL_backendz00_bglt BgL_auxz00_1450;

							BgL_auxz00_1450 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2267z00_394 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1450))->BgL_typedz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1455;

							int BgL_auxz00_1453;

							BgL_auxz00_1455 = BBOOL(BgL_arg2267z00_394);
							BgL_auxz00_1453 = (int) (((long) 10));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1453, BgL_auxz00_1455);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2275z00_396;

						{
							BgL_backendz00_bglt BgL_auxz00_1458;

							BgL_auxz00_1458 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2275z00_396 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1458))->
								BgL_heapzd2suffixzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1461;

							BgL_auxz00_1461 = (int) (((long) 11));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1461,
								BgL_arg2275z00_396);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2285z00_398;

						{
							BgL_backendz00_bglt BgL_auxz00_1464;

							BgL_auxz00_1464 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2285z00_398 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1464))->
								BgL_heapzd2compatiblezd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1467;

							BgL_auxz00_1467 = (int) (((long) 12));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1467,
								BgL_arg2285z00_398);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2290z00_400;

						{
							BgL_backendz00_bglt BgL_auxz00_1470;

							BgL_auxz00_1470 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2290z00_400 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1470))->BgL_callccz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1475;

							int BgL_auxz00_1473;

							BgL_auxz00_1475 = BBOOL(BgL_arg2290z00_400);
							BgL_auxz00_1473 = (int) (((long) 13));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1473, BgL_auxz00_1475);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2297z00_402;

						{
							BgL_backendz00_bglt BgL_auxz00_1478;

							BgL_auxz00_1478 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2297z00_402 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1478))->
								BgL_qualifiedzd2typeszd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1483;

							int BgL_auxz00_1481;

							BgL_auxz00_1483 = BBOOL(BgL_arg2297z00_402);
							BgL_auxz00_1481 = (int) (((long) 14));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1481, BgL_auxz00_1483);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2312z00_404;

						{
							BgL_backendz00_bglt BgL_auxz00_1486;

							BgL_auxz00_1486 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2312z00_404 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1486))->
								BgL_effectzb2zb2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1491;

							int BgL_auxz00_1489;

							BgL_auxz00_1491 = BBOOL(BgL_arg2312z00_404);
							BgL_auxz00_1489 = (int) (((long) 15));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1489, BgL_auxz00_1491);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2325z00_406;

						{
							BgL_backendz00_bglt BgL_auxz00_1494;

							BgL_auxz00_1494 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2325z00_406 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1494))->
								BgL_removezd2emptyzd2letz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1499;

							int BgL_auxz00_1497;

							BgL_auxz00_1499 = BBOOL(BgL_arg2325z00_406);
							BgL_auxz00_1497 = (int) (((long) 16));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1497, BgL_auxz00_1499);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2338z00_408;

						{
							BgL_backendz00_bglt BgL_auxz00_1502;

							BgL_auxz00_1502 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2338z00_408 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1502))->
								BgL_foreignzd2closurezd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1507;

							int BgL_auxz00_1505;

							BgL_auxz00_1507 = BBOOL(BgL_arg2338z00_408);
							BgL_auxz00_1505 = (int) (((long) 17));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1505, BgL_auxz00_1507);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2351z00_410;

						{
							BgL_backendz00_bglt BgL_auxz00_1510;

							BgL_auxz00_1510 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2351z00_410 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1510))->
								BgL_typedzd2eqzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1515;

							int BgL_auxz00_1513;

							BgL_auxz00_1515 = BBOOL(BgL_arg2351z00_410);
							BgL_auxz00_1513 = (int) (((long) 18));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1513, BgL_auxz00_1515);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2364z00_412;

						{
							BgL_backendz00_bglt BgL_auxz00_1518;

							BgL_auxz00_1518 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2364z00_412 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1518))->
								BgL_tracezd2supportzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1523;

							int BgL_auxz00_1521;

							BgL_auxz00_1523 = BBOOL(BgL_arg2364z00_412);
							BgL_auxz00_1521 = (int) (((long) 19));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1521, BgL_auxz00_1523);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2377z00_414;

						{
							BgL_backendz00_bglt BgL_auxz00_1526;

							BgL_auxz00_1526 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2377z00_414 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1526))->
								BgL_foreignzd2clausezd2supportz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1529;

							BgL_auxz00_1529 = (int) (((long) 20));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1529,
								BgL_arg2377z00_414);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2390z00_416;

						{
							BgL_backendz00_bglt BgL_auxz00_1532;

							BgL_auxz00_1532 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2390z00_416 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1532))->
								BgL_debugzd2supportzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1535;

							BgL_auxz00_1535 = (int) (((long) 21));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1535,
								BgL_arg2390z00_416);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2403z00_418;

						{
							BgL_backendz00_bglt BgL_auxz00_1538;

							BgL_auxz00_1538 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2403z00_418 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1538))->
								BgL_pragmazd2supportzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1543;

							int BgL_auxz00_1541;

							BgL_auxz00_1543 = BBOOL(BgL_arg2403z00_418);
							BgL_auxz00_1541 = (int) (((long) 22));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1541, BgL_auxz00_1543);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2416z00_420;

						{
							BgL_backendz00_bglt BgL_auxz00_1546;

							BgL_auxz00_1546 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2416z00_420 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1546))->
								BgL_tvectorzd2descrzd2supportz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1551;

							int BgL_auxz00_1549;

							BgL_auxz00_1551 = BBOOL(BgL_arg2416z00_420);
							BgL_auxz00_1549 = (int) (((long) 23));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1549, BgL_auxz00_1551);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2429z00_422;

						{
							BgL_backendz00_bglt BgL_auxz00_1554;

							BgL_auxz00_1554 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2429z00_422 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1554))->
								BgL_requirezd2tailczd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1559;

							int BgL_auxz00_1557;

							BgL_auxz00_1559 = BBOOL(BgL_arg2429z00_422);
							BgL_auxz00_1557 = (int) (((long) 24));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1557, BgL_auxz00_1559);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2431z00_424;

						{
							BgL_backendz00_bglt BgL_auxz00_1562;

							BgL_auxz00_1562 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2431z00_424 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1562))->
								BgL_registersz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1565;

							BgL_auxz00_1565 = (int) (((long) 25));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1565,
								BgL_arg2431z00_424);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2438z00_426;

						{
							BgL_backendz00_bglt BgL_auxz00_1568;

							BgL_auxz00_1568 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2438z00_426 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1568))->
								BgL_pregistersz00);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1571;

							BgL_auxz00_1571 = (int) (((long) 26));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1571,
								BgL_arg2438z00_426);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2445z00_428;

						{
							BgL_backendz00_bglt BgL_auxz00_1574;

							BgL_auxz00_1574 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2445z00_428 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1574))->
								BgL_boundzd2checkzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1579;

							int BgL_auxz00_1577;

							BgL_auxz00_1579 = BBOOL(BgL_arg2445z00_428);
							BgL_auxz00_1577 = (int) (((long) 27));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1577, BgL_auxz00_1579);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						bool_t BgL_arg2451z00_430;

						{
							BgL_backendz00_bglt BgL_auxz00_1582;

							BgL_auxz00_1582 = (BgL_backendz00_bglt) (BgL_obj1962z00_371);
							BgL_arg2451z00_430 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_1582))->
								BgL_typezd2checkzd2);
						}
						{	/* BackEnd/dotnet_class.scm 19 */
							obj_t BgL_auxz00_1587;

							int BgL_auxz00_1585;

							BgL_auxz00_1587 = BBOOL(BgL_arg2451z00_430);
							BgL_auxz00_1585 = (int) (((long) 28));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1585, BgL_auxz00_1587);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2453z00_432;

						BgL_arg2453z00_432 =
							(((BgL_dotnetz00_bglt) CREF(BgL_obj1962z00_371))->BgL_outz00);
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1591;

							BgL_auxz00_1591 = (int) (((long) 29));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1591,
								BgL_arg2453z00_432);
					}}
					{	/* BackEnd/dotnet_class.scm 19 */
						obj_t BgL_arg2459z00_434;

						BgL_arg2459z00_434 =
							(((BgL_dotnetz00_bglt) CREF(BgL_obj1962z00_371))->BgL_qnamez00);
						{	/* BackEnd/dotnet_class.scm 19 */
							int BgL_auxz00_1595;

							BgL_auxz00_1595 = (int) (((long) 30));
							STRUCT_SET(BgL_res1963z00_374, BgL_auxz00_1595,
								BgL_arg2459z00_434);
					}}
					return BgL_res1963z00_374;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_dotnet_classz00()
	{
		AN_OBJECT;
		{	/* BackEnd/dotnet_class.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2476z00zzbackend_dotnet_classz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2476z00zzbackend_dotnet_classz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string2476z00zzbackend_dotnet_classz00));
		}
	}

#ifdef __cplusplus
}
#endif
