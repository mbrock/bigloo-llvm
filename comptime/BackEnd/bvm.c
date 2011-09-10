/*===========================================================================*/
/*   (BackEnd/bvm.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/bvm.scm)*/
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

	typedef struct BgL_bvmz00_bgl
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
	}             *BgL_bvmz00_bglt;


	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_bvmz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_bvmzf3zf3zzbackend_bvmz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_bvmz00();
	static obj_t BGl_z52thezd2bvmzd2nilz52zzbackend_bvmz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bvmz00_bglt BGl_bvmzd2nilzd2zzbackend_bvmz00();
	static obj_t BGl_backendzd2initializa7ez12zd21838zb5zzbackend_bvmz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_bvmz00();
	static obj_t BGl__fillzd2bvmz12zc0zzbackend_bvmz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_bvmz00();
	static obj_t BGl__z52allocatezd2bvmz80zzbackend_bvmz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL BgL_bvmz00_bglt BGl_z52allocatezd2bvmz80zzbackend_bvmz00();
	static obj_t BGl_toplevelzd2initzd2zzbackend_bvmz00();
	extern obj_t BGl_backendz00zzbackend_backendz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__bvmzd2nilzd2zzbackend_bvmz00(obj_t);
	BGL_EXPORTED_DECL BgL_bvmz00_bglt
		BGl_fillzd2bvmz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	static obj_t BGl__bvmzf3zf3zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_bvmz00();
	BGL_EXPORTED_DEF obj_t BGl_bvmz00zzbackend_bvmz00 = BUNSPEC;
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_bvmz00();
	static obj_t BGl_zc3anonymousza31847ze3z83zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_bvmz00();
	static obj_t BGl_zc3anonymousza31848ze3z83zzbackend_bvmz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2nilzd2envz00zzbackend_bvmz00,
		BgL_bgl__bvmza7d2nilza7d2za7za7b1869z00, BGl__bvmzd2nilzd2zzbackend_bvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1856z00zzbackend_bvmz00,
		BgL_bgl_za7c3anonymousza7a311870z00,
		BGl_zc3anonymousza31847ze3z83zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1857z00zzbackend_bvmz00,
		BgL_bgl_za7c3anonymousza7a311871z00,
		BGl_zc3anonymousza31848ze3z83zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1861z00zzbackend_bvmz00,
		BgL_bgl_backendza7d2initia1872za7,
		BGl_backendzd2initializa7ez12zd21838zb5zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzf3zd2envz21zzbackend_bvmz00,
		BgL_bgl__bvmza7f3za7f3za7za7back1873z00, BGl__bvmzf3zf3zzbackend_bvmz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1858z00zzbackend_bvmz00,
		BgL_bgl_string1858za700za7za7b1874za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string1860z00zzbackend_bvmz00,
		BgL_bgl_string1860za700za7za7b1875za7, "", 0);
	      DEFINE_STRING(BGl_string1859z00zzbackend_bvmz00,
		BgL_bgl_string1859za700za7za7b1876za7,
		"Can't make instance of abstract classes", 39);
	extern obj_t BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00;
	   
		 
		DEFINE_STRING(BGl_string1862z00zzbackend_bvmz00,
		BgL_bgl_string1862za700za7za7b1877za7, "backend-initialize!", 19);
	      DEFINE_STRING(BGl_string1863z00zzbackend_bvmz00,
		BgL_bgl_string1863za700za7za7b1878za7, "backend_bvm", 11);
	      DEFINE_STRING(BGl_string1864z00zzbackend_bvmz00,
		BgL_bgl_string1864za700za7za7b1879za7, "_ %allocate-bvm bvm ", 20);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2bvmzd2envz52zzbackend_bvmz00,
		BgL_bgl__za752allocateza7d2b1880z00,
		BGl__z52allocatezd2bvmz80zzbackend_bvmz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2bvmz12zd2envz12zzbackend_bvmz00,
		BgL_bgl__fillza7d2bvmza712za7c1881za7,
		BGl__fillzd2bvmz12zc0zzbackend_bvmz00, 0L, BUNSPEC, 29);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long
		BgL_checksumz00_590, char *BgL_fromz00_591)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_bvmz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_bvmz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_bvmz00();
					BGl_cnstzd2initzd2zzbackend_bvmz00();
					BGl_importedzd2moduleszd2initz00zzbackend_bvmz00();
					BGl_objectzd2initzd2zzbackend_bvmz00();
					BGl_methodzd2initzd2zzbackend_bvmz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_bvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_bvm");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_bvm");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			{	/* BackEnd/bvm.scm 15 */
				obj_t BgL_cportz00_490;

				BgL_cportz00_490 =
					bgl_open_input_string(BGl_string1864z00zzbackend_bvmz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_491;

					BgL_iz00_491 = ((long) 2);
				BgL_loopz00_492:
					if ((BgL_iz00_491 == ((long) -1)))
						{	/* BackEnd/bvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/bvm.scm 15 */
							{	/* BackEnd/bvm.scm 15 */
								obj_t BgL_arg1866z00_494;

								{	/* BackEnd/bvm.scm 15 */

									{	/* BackEnd/bvm.scm 15 */
										obj_t BgL_locationz00_496;

										BgL_locationz00_496 = BBOOL(((bool_t) 0));
										{	/* BackEnd/bvm.scm 15 */

											BgL_arg1866z00_494 =
												BGl_readz00zz__readerz00(BgL_cportz00_490,
												BgL_locationz00_496);
										}
									}
								}
								{	/* BackEnd/bvm.scm 15 */
									int BgL_auxz00_609;

									BgL_auxz00_609 = (int) (BgL_iz00_491);
									CNST_TABLE_SET(BgL_auxz00_609, BgL_arg1866z00_494);
							}}
							{	/* BackEnd/bvm.scm 15 */
								int BgL_auxz00_497;

								BgL_auxz00_497 = (int) ((BgL_iz00_491 - ((long) 1)));
								{
									long BgL_iz00_614;

									BgL_iz00_614 = (long) (BgL_auxz00_497);
									BgL_iz00_491 = BgL_iz00_614;
									goto BgL_loopz00_492;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			{	/* BackEnd/bvm.scm 18 */
				obj_t BgL_arg1839z00_262;

				obj_t BgL_arg1840z00_263;

				obj_t BgL_arg1846z00_267;

				BgL_arg1839z00_262 = CNST_TABLE_REF(((long) 0));
				BgL_arg1840z00_263 = BGl_backendz00zzbackend_backendz00;
				{	/* BackEnd/bvm.scm 18 */
					obj_t BgL_v1836z00_272;

					BgL_v1836z00_272 = create_vector((int) (((long) 0)));
					BgL_arg1846z00_267 = BgL_v1836z00_272;
				}
				BGl_bvmz00zzbackend_bvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg1839z00_262,
					BgL_arg1840z00_263, ((bool_t) 1), BGl_proc1856z00zzbackend_bvmz00,
					BGl_proc1857z00zzbackend_bvmz00,
					BGl_bvmzd2nilzd2envz00zzbackend_bvmz00,
					BGl_bvmzf3zd2envz21zzbackend_bvmz00, ((long) 9110), BFALSE, BFALSE,
					BgL_arg1846z00_267);
			}
			return (BGl_z52thezd2bvmzd2nilz52zzbackend_bvmz00 = BUNSPEC, BUNSPEC);
		}
	}



/* <anonymous:1848> */
	obj_t BGl_zc3anonymousza31848ze3z83zzbackend_bvmz00(obj_t BgL_envz00_447,
		obj_t BgL_xz00_448)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			{
				obj_t BgL_xz00_270;

				BgL_xz00_270 = BgL_xz00_448;
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string1858z00zzbackend_bvmz00, CNST_TABLE_REF(((long) 0)));
		}}
	}



/* <anonymous:1847> */
	obj_t BGl_zc3anonymousza31847ze3z83zzbackend_bvmz00(obj_t BgL_envz00_449,
		obj_t BgL_xz00_450)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			{
				obj_t BgL_xz00_268;

				BgL_xz00_268 = BgL_xz00_450;
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
					BGl_string1859z00zzbackend_bvmz00, CNST_TABLE_REF(((long) 0)));
		}}
	}



/* bvm? */
	BGL_EXPORTED_DEF bool_t BGl_bvmzf3zf3zzbackend_bvmz00(obj_t BgL_obj1835z00_2)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1835z00_2,
				BGl_bvmz00zzbackend_bvmz00);
		}
	}



/* _bvm? */
	obj_t BGl__bvmzf3zf3zzbackend_bvmz00(obj_t BgL_envz00_452,
		obj_t BgL_obj1835z00_453)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1835z00_453,
					BGl_bvmz00zzbackend_bvmz00));
		}
	}



/* fill-bvm! */
	BGL_EXPORTED_DEF BgL_bvmz00_bglt
		BGl_fillzd2bvmz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt BgL_new1804z00_3,
		obj_t BgL_language1776z00_4, obj_t BgL_srfi01777z00_5,
		obj_t BgL_name1778z00_6, obj_t BgL_externzd2variables1779zd2_7,
		obj_t BgL_externzd2functions1780zd2_8, obj_t BgL_externzd2types1781zd2_9,
		obj_t BgL_variables1782z00_10, obj_t BgL_functions1783z00_11,
		obj_t BgL_types1784z00_12, bool_t BgL_typed1785z00_13,
		obj_t BgL_heapzd2suffix1786zd2_14, obj_t BgL_heapzd2compatible1787zd2_15,
		bool_t BgL_callcc1788z00_16, bool_t BgL_qualifiedzd2types1789zd2_17,
		bool_t BgL_effectzb21790zb2_18, bool_t BgL_removezd2emptyzd2let1791z00_19,
		bool_t BgL_foreignzd2closure1792zd2_20, bool_t BgL_typedzd2eq1793zd2_21,
		bool_t BgL_tracezd2support1794zd2_22,
		obj_t BgL_foreignzd2clausezd2suppo1795z00_23,
		obj_t BgL_debugzd2support1796zd2_24, bool_t BgL_pragmazd2support1797zd2_25,
		bool_t BgL_tvectorzd2descrzd2suppor1798z00_26,
		bool_t BgL_requirezd2tailc1799zd2_27, obj_t BgL_registers1800z00_28,
		obj_t BgL_pregisters1801z00_29, bool_t BgL_boundzd2check1802zd2_30,
		bool_t BgL_typezd2check1803zd2_31)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			{	/* BackEnd/bvm.scm 18 */
				obj_t BgL_language1776z00_499;

				obj_t BgL_srfi01777z00_500;

				obj_t BgL_name1778z00_501;

				obj_t BgL_externzd2variables1779zd2_502;

				obj_t BgL_externzd2functions1780zd2_503;

				obj_t BgL_externzd2types1781zd2_504;

				obj_t BgL_variables1782z00_505;

				obj_t BgL_functions1783z00_506;

				obj_t BgL_types1784z00_507;

				bool_t BgL_typed1785z00_508;

				obj_t BgL_heapzd2suffix1786zd2_509;

				obj_t BgL_heapzd2compatible1787zd2_510;

				bool_t BgL_callcc1788z00_511;

				bool_t BgL_qualifiedzd2types1789zd2_512;

				bool_t BgL_effectzb21790zb2_513;

				bool_t BgL_removezd2emptyzd2let1791z00_514;

				bool_t BgL_foreignzd2closure1792zd2_515;

				bool_t BgL_typedzd2eq1793zd2_516;

				bool_t BgL_tracezd2support1794zd2_517;

				obj_t BgL_foreignzd2clausezd2suppo1795z00_518;

				obj_t BgL_debugzd2support1796zd2_519;

				bool_t BgL_pragmazd2support1797zd2_520;

				bool_t BgL_tvectorzd2descrzd2suppor1798z00_521;

				bool_t BgL_requirezd2tailc1799zd2_522;

				obj_t BgL_registers1800z00_523;

				obj_t BgL_pregisters1801z00_524;

				bool_t BgL_boundzd2check1802zd2_525;

				bool_t BgL_typezd2check1803zd2_526;

				BgL_language1776z00_499 = BgL_language1776z00_4;
				BgL_srfi01777z00_500 = BgL_srfi01777z00_5;
				BgL_name1778z00_501 = BgL_name1778z00_6;
				BgL_externzd2variables1779zd2_502 = BgL_externzd2variables1779zd2_7;
				BgL_externzd2functions1780zd2_503 = BgL_externzd2functions1780zd2_8;
				BgL_externzd2types1781zd2_504 = BgL_externzd2types1781zd2_9;
				BgL_variables1782z00_505 = BgL_variables1782z00_10;
				BgL_functions1783z00_506 = BgL_functions1783z00_11;
				BgL_types1784z00_507 = BgL_types1784z00_12;
				BgL_typed1785z00_508 = BgL_typed1785z00_13;
				BgL_heapzd2suffix1786zd2_509 = BgL_heapzd2suffix1786zd2_14;
				BgL_heapzd2compatible1787zd2_510 = BgL_heapzd2compatible1787zd2_15;
				BgL_callcc1788z00_511 = BgL_callcc1788z00_16;
				BgL_qualifiedzd2types1789zd2_512 = BgL_qualifiedzd2types1789zd2_17;
				BgL_effectzb21790zb2_513 = BgL_effectzb21790zb2_18;
				BgL_removezd2emptyzd2let1791z00_514 =
					BgL_removezd2emptyzd2let1791z00_19;
				BgL_foreignzd2closure1792zd2_515 = BgL_foreignzd2closure1792zd2_20;
				BgL_typedzd2eq1793zd2_516 = BgL_typedzd2eq1793zd2_21;
				BgL_tracezd2support1794zd2_517 = BgL_tracezd2support1794zd2_22;
				BgL_foreignzd2clausezd2suppo1795z00_518 =
					BgL_foreignzd2clausezd2suppo1795z00_23;
				BgL_debugzd2support1796zd2_519 = BgL_debugzd2support1796zd2_24;
				BgL_pragmazd2support1797zd2_520 = BgL_pragmazd2support1797zd2_25;
				BgL_tvectorzd2descrzd2suppor1798z00_521 =
					BgL_tvectorzd2descrzd2suppor1798z00_26;
				BgL_requirezd2tailc1799zd2_522 = BgL_requirezd2tailc1799zd2_27;
				BgL_registers1800z00_523 = BgL_registers1800z00_28;
				BgL_pregisters1801z00_524 = BgL_pregisters1801z00_29;
				BgL_boundzd2check1802zd2_525 = BgL_boundzd2check1802zd2_30;
				BgL_typezd2check1803zd2_526 = BgL_typezd2check1803zd2_31;
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_languagez00) =
					((obj_t) BgL_language1776z00_499), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01777z00_500), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_namez00) =
					((obj_t) BgL_name1778z00_501), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1779zd2_502), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1780zd2_503), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1781zd2_504), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_variablesz00) =
					((obj_t) BgL_variables1782z00_505), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_functionsz00) =
					((obj_t) BgL_functions1783z00_506), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_typesz00) =
					((obj_t) BgL_types1784z00_507), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_typedz00) =
					((bool_t) BgL_typed1785z00_508), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1786zd2_509), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1787zd2_510), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_callccz00) =
					((bool_t) BgL_callcc1788z00_511), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1789zd2_512), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21790zb2_513), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1791z00_514), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1792zd2_515), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1793zd2_516), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1794zd2_517), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1795z00_518), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1796zd2_519), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1797zd2_520), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1798z00_521), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1799zd2_522), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_registersz00) =
					((obj_t) BgL_registers1800z00_523), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1801z00_524), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1802zd2_525), BUNSPEC);
				((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_3))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1803zd2_526), BUNSPEC);
				return BgL_new1804z00_3;
			}
		}
	}



/* _fill-bvm! */
	obj_t BGl__fillzd2bvmz12zc0zzbackend_bvmz00(obj_t BgL_envz00_454,
		obj_t BgL_new1804z00_455, obj_t BgL_language1776z00_456,
		obj_t BgL_srfi01777z00_457, obj_t BgL_name1778z00_458,
		obj_t BgL_externzd2variables1779zd2_459,
		obj_t BgL_externzd2functions1780zd2_460,
		obj_t BgL_externzd2types1781zd2_461, obj_t BgL_variables1782z00_462,
		obj_t BgL_functions1783z00_463, obj_t BgL_types1784z00_464,
		obj_t BgL_typed1785z00_465, obj_t BgL_heapzd2suffix1786zd2_466,
		obj_t BgL_heapzd2compatible1787zd2_467, obj_t BgL_callcc1788z00_468,
		obj_t BgL_qualifiedzd2types1789zd2_469, obj_t BgL_effectzb21790zb2_470,
		obj_t BgL_removezd2emptyzd2let1791z00_471,
		obj_t BgL_foreignzd2closure1792zd2_472, obj_t BgL_typedzd2eq1793zd2_473,
		obj_t BgL_tracezd2support1794zd2_474,
		obj_t BgL_foreignzd2clausezd2suppo1795z00_475,
		obj_t BgL_debugzd2support1796zd2_476, obj_t BgL_pragmazd2support1797zd2_477,
		obj_t BgL_tvectorzd2descrzd2suppor1798z00_478,
		obj_t BgL_requirezd2tailc1799zd2_479, obj_t BgL_registers1800z00_480,
		obj_t BgL_pregisters1801z00_481, obj_t BgL_boundzd2check1802zd2_482,
		obj_t BgL_typezd2check1803zd2_483)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			{	/* BackEnd/bvm.scm 18 */
				BgL_bvmz00_bglt BgL_auxz00_657;

				{	/* BackEnd/bvm.scm 18 */
					BgL_bvmz00_bglt BgL_res1867z00_584;

					{	/* BackEnd/bvm.scm 18 */
						BgL_bvmz00_bglt BgL_new1804z00_527;

						obj_t BgL_language1776z00_528;

						obj_t BgL_srfi01777z00_529;

						obj_t BgL_name1778z00_530;

						bool_t BgL_typed1785z00_537;

						obj_t BgL_heapzd2suffix1786zd2_538;

						obj_t BgL_heapzd2compatible1787zd2_539;

						bool_t BgL_callcc1788z00_540;

						bool_t BgL_qualifiedzd2types1789zd2_541;

						bool_t BgL_effectzb21790zb2_542;

						bool_t BgL_removezd2emptyzd2let1791z00_543;

						bool_t BgL_foreignzd2closure1792zd2_544;

						bool_t BgL_typedzd2eq1793zd2_545;

						bool_t BgL_tracezd2support1794zd2_546;

						obj_t BgL_foreignzd2clausezd2suppo1795z00_547;

						obj_t BgL_debugzd2support1796zd2_548;

						bool_t BgL_pragmazd2support1797zd2_549;

						bool_t BgL_tvectorzd2descrzd2suppor1798z00_550;

						bool_t BgL_requirezd2tailc1799zd2_551;

						obj_t BgL_registers1800z00_552;

						obj_t BgL_pregisters1801z00_553;

						bool_t BgL_boundzd2check1802zd2_554;

						bool_t BgL_typezd2check1803zd2_555;

						BgL_new1804z00_527 = (BgL_bvmz00_bglt) (BgL_new1804z00_455);
						BgL_language1776z00_528 = BgL_language1776z00_456;
						BgL_srfi01777z00_529 = BgL_srfi01777z00_457;
						BgL_name1778z00_530 = BgL_name1778z00_458;
						BgL_typed1785z00_537 = CBOOL(BgL_typed1785z00_465);
						BgL_heapzd2suffix1786zd2_538 = BgL_heapzd2suffix1786zd2_466;
						BgL_heapzd2compatible1787zd2_539 = BgL_heapzd2compatible1787zd2_467;
						BgL_callcc1788z00_540 = CBOOL(BgL_callcc1788z00_468);
						BgL_qualifiedzd2types1789zd2_541 =
							CBOOL(BgL_qualifiedzd2types1789zd2_469);
						BgL_effectzb21790zb2_542 = CBOOL(BgL_effectzb21790zb2_470);
						BgL_removezd2emptyzd2let1791z00_543 =
							CBOOL(BgL_removezd2emptyzd2let1791z00_471);
						BgL_foreignzd2closure1792zd2_544 =
							CBOOL(BgL_foreignzd2closure1792zd2_472);
						BgL_typedzd2eq1793zd2_545 = CBOOL(BgL_typedzd2eq1793zd2_473);
						BgL_tracezd2support1794zd2_546 =
							CBOOL(BgL_tracezd2support1794zd2_474);
						BgL_foreignzd2clausezd2suppo1795z00_547 =
							BgL_foreignzd2clausezd2suppo1795z00_475;
						BgL_debugzd2support1796zd2_548 = BgL_debugzd2support1796zd2_476;
						BgL_pragmazd2support1797zd2_549 =
							CBOOL(BgL_pragmazd2support1797zd2_477);
						BgL_tvectorzd2descrzd2suppor1798z00_550 =
							CBOOL(BgL_tvectorzd2descrzd2suppor1798z00_478);
						BgL_requirezd2tailc1799zd2_551 =
							CBOOL(BgL_requirezd2tailc1799zd2_479);
						BgL_registers1800z00_552 = BgL_registers1800z00_480;
						BgL_pregisters1801z00_553 = BgL_pregisters1801z00_481;
						BgL_boundzd2check1802zd2_554 = CBOOL(BgL_boundzd2check1802zd2_482);
						BgL_typezd2check1803zd2_555 = CBOOL(BgL_typezd2check1803zd2_483);
						{	/* BackEnd/bvm.scm 18 */
							obj_t BgL_language1776z00_556;

							obj_t BgL_srfi01777z00_557;

							obj_t BgL_name1778z00_558;

							obj_t BgL_externzd2variables1779zd2_559;

							obj_t BgL_externzd2functions1780zd2_560;

							obj_t BgL_externzd2types1781zd2_561;

							obj_t BgL_variables1782z00_562;

							obj_t BgL_functions1783z00_563;

							obj_t BgL_types1784z00_564;

							bool_t BgL_typed1785z00_565;

							obj_t BgL_heapzd2suffix1786zd2_566;

							obj_t BgL_heapzd2compatible1787zd2_567;

							bool_t BgL_callcc1788z00_568;

							bool_t BgL_qualifiedzd2types1789zd2_569;

							bool_t BgL_effectzb21790zb2_570;

							bool_t BgL_removezd2emptyzd2let1791z00_571;

							bool_t BgL_foreignzd2closure1792zd2_572;

							bool_t BgL_typedzd2eq1793zd2_573;

							bool_t BgL_tracezd2support1794zd2_574;

							obj_t BgL_foreignzd2clausezd2suppo1795z00_575;

							obj_t BgL_debugzd2support1796zd2_576;

							bool_t BgL_pragmazd2support1797zd2_577;

							bool_t BgL_tvectorzd2descrzd2suppor1798z00_578;

							bool_t BgL_requirezd2tailc1799zd2_579;

							obj_t BgL_registers1800z00_580;

							obj_t BgL_pregisters1801z00_581;

							bool_t BgL_boundzd2check1802zd2_582;

							bool_t BgL_typezd2check1803zd2_583;

							BgL_language1776z00_556 = BgL_language1776z00_528;
							BgL_srfi01777z00_557 = BgL_srfi01777z00_529;
							BgL_name1778z00_558 = BgL_name1778z00_530;
							BgL_externzd2variables1779zd2_559 =
								BgL_externzd2variables1779zd2_459;
							BgL_externzd2functions1780zd2_560 =
								BgL_externzd2functions1780zd2_460;
							BgL_externzd2types1781zd2_561 = BgL_externzd2types1781zd2_461;
							BgL_variables1782z00_562 = BgL_variables1782z00_462;
							BgL_functions1783z00_563 = BgL_functions1783z00_463;
							BgL_types1784z00_564 = BgL_types1784z00_464;
							BgL_typed1785z00_565 = BgL_typed1785z00_537;
							BgL_heapzd2suffix1786zd2_566 = BgL_heapzd2suffix1786zd2_538;
							BgL_heapzd2compatible1787zd2_567 =
								BgL_heapzd2compatible1787zd2_539;
							BgL_callcc1788z00_568 = BgL_callcc1788z00_540;
							BgL_qualifiedzd2types1789zd2_569 =
								BgL_qualifiedzd2types1789zd2_541;
							BgL_effectzb21790zb2_570 = BgL_effectzb21790zb2_542;
							BgL_removezd2emptyzd2let1791z00_571 =
								BgL_removezd2emptyzd2let1791z00_543;
							BgL_foreignzd2closure1792zd2_572 =
								BgL_foreignzd2closure1792zd2_544;
							BgL_typedzd2eq1793zd2_573 = BgL_typedzd2eq1793zd2_545;
							BgL_tracezd2support1794zd2_574 = BgL_tracezd2support1794zd2_546;
							BgL_foreignzd2clausezd2suppo1795z00_575 =
								BgL_foreignzd2clausezd2suppo1795z00_547;
							BgL_debugzd2support1796zd2_576 = BgL_debugzd2support1796zd2_548;
							BgL_pragmazd2support1797zd2_577 = BgL_pragmazd2support1797zd2_549;
							BgL_tvectorzd2descrzd2suppor1798z00_578 =
								BgL_tvectorzd2descrzd2suppor1798z00_550;
							BgL_requirezd2tailc1799zd2_579 = BgL_requirezd2tailc1799zd2_551;
							BgL_registers1800z00_580 = BgL_registers1800z00_552;
							BgL_pregisters1801z00_581 = BgL_pregisters1801z00_553;
							BgL_boundzd2check1802zd2_582 = BgL_boundzd2check1802zd2_554;
							BgL_typezd2check1803zd2_583 = BgL_typezd2check1803zd2_555;
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->BgL_languagez00) =
								((obj_t) BgL_language1776z00_556), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01777z00_557), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->BgL_namez00) =
								((obj_t) BgL_name1778z00_558), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1779zd2_559), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1780zd2_560), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1781zd2_561), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1782z00_562), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1783z00_563), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->BgL_typesz00) =
								((obj_t) BgL_types1784z00_564), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->BgL_typedz00) =
								((bool_t) BgL_typed1785z00_565), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1786zd2_566), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1787zd2_567), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->BgL_callccz00) =
								((bool_t) BgL_callcc1788z00_568), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1789zd2_569), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21790zb2_570), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1791z00_571), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1792zd2_572), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1793zd2_573), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1794zd2_574), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1795z00_575), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1796zd2_576), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1797zd2_577), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1798z00_578), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1799zd2_579), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_registersz00) =
								((obj_t) BgL_registers1800z00_580), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1801z00_581), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1802zd2_582), BUNSPEC);
							((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_527))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1803zd2_583), BUNSPEC);
							BgL_res1867z00_584 = BgL_new1804z00_527;
						}
					}
					BgL_auxz00_657 = BgL_res1867z00_584;
				}
				return (obj_t) (BgL_auxz00_657);
			}
		}
	}



/* %allocate-bvm */
	BGL_EXPORTED_DEF BgL_bvmz00_bglt BGl_z52allocatezd2bvmz80zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			{	/* BackEnd/bvm.scm 18 */
				BgL_bvmz00_bglt BgL_new1834z00_585;

				BgL_new1834z00_585 =
					((BgL_bvmz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_bvmz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1834z00_585),
					BGl_classzd2numzd2zz__objectz00(BGl_bvmz00zzbackend_bvmz00));
				{	/* BackEnd/bvm.scm 18 */
					BgL_objectz00_bglt BgL_auxz00_705;

					BgL_auxz00_705 = (BgL_objectz00_bglt) (BgL_new1834z00_585);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_705, BFALSE);
				}
				return BgL_new1834z00_585;
			}
		}
	}



/* _%allocate-bvm */
	obj_t BGl__z52allocatezd2bvmz80zzbackend_bvmz00(obj_t BgL_envz00_484)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			{	/* BackEnd/bvm.scm 18 */
				BgL_bvmz00_bglt BgL_auxz00_708;

				{	/* BackEnd/bvm.scm 18 */
					BgL_bvmz00_bglt BgL_res1868z00_589;

					{	/* BackEnd/bvm.scm 18 */
						BgL_bvmz00_bglt BgL_new1834z00_587;

						BgL_new1834z00_587 =
							((BgL_bvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_bvmz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1834z00_587),
							BGl_classzd2numzd2zz__objectz00(BGl_bvmz00zzbackend_bvmz00));
						{	/* BackEnd/bvm.scm 18 */
							BgL_objectz00_bglt BgL_auxz00_713;

							BgL_auxz00_713 = (BgL_objectz00_bglt) (BgL_new1834z00_587);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_713, BFALSE);
						}
						BgL_res1868z00_589 = BgL_new1834z00_587;
					}
					BgL_auxz00_708 = BgL_res1868z00_589;
				}
				return (obj_t) (BgL_auxz00_708);
			}
		}
	}



/* bvm-nil */
	BGL_EXPORTED_DEF BgL_bvmz00_bglt BGl_bvmzd2nilzd2zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			if ((BGl_z52thezd2bvmzd2nilz52zzbackend_bvmz00 == BUNSPEC))
				{	/* BackEnd/bvm.scm 18 */
					{	/* BackEnd/bvm.scm 18 */
						BgL_bvmz00_bglt BgL_res1853z00_364;

						{	/* BackEnd/bvm.scm 18 */
							BgL_bvmz00_bglt BgL_new1834z00_360;

							BgL_new1834z00_360 =
								((BgL_bvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_bvmz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1834z00_360),
								BGl_classzd2numzd2zz__objectz00(BGl_bvmz00zzbackend_bvmz00));
							{	/* BackEnd/bvm.scm 18 */
								BgL_objectz00_bglt BgL_auxz00_723;

								BgL_auxz00_723 = (BgL_objectz00_bglt) (BgL_new1834z00_360);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_723, BFALSE);
							}
							BgL_res1853z00_364 = BgL_new1834z00_360;
						}
						BGl_z52thezd2bvmzd2nilz52zzbackend_bvmz00 =
							(obj_t) (BgL_res1853z00_364);
					}
					{	/* BackEnd/bvm.scm 18 */
						BgL_bvmz00_bglt BgL_res1854z00_422;

						{	/* BackEnd/bvm.scm 18 */
							BgL_bvmz00_bglt BgL_new1804z00_365;

							obj_t BgL_language1776z00_366;

							obj_t BgL_srfi01777z00_367;

							obj_t BgL_heapzd2compatible1787zd2_377;

							BgL_new1804z00_365 =
								(BgL_bvmz00_bglt) (BGl_z52thezd2bvmzd2nilz52zzbackend_bvmz00);
							BgL_language1776z00_366 = CNST_TABLE_REF(((long) 2));
							BgL_srfi01777z00_367 = CNST_TABLE_REF(((long) 2));
							BgL_heapzd2compatible1787zd2_377 = CNST_TABLE_REF(((long) 2));
							{	/* BackEnd/bvm.scm 18 */
								obj_t BgL_language1776z00_394;

								obj_t BgL_srfi01777z00_395;

								obj_t BgL_name1778z00_396;

								obj_t BgL_externzd2variables1779zd2_397;

								obj_t BgL_externzd2functions1780zd2_398;

								obj_t BgL_externzd2types1781zd2_399;

								obj_t BgL_variables1782z00_400;

								obj_t BgL_functions1783z00_401;

								obj_t BgL_types1784z00_402;

								bool_t BgL_typed1785z00_403;

								obj_t BgL_heapzd2suffix1786zd2_404;

								obj_t BgL_heapzd2compatible1787zd2_405;

								bool_t BgL_callcc1788z00_406;

								bool_t BgL_qualifiedzd2types1789zd2_407;

								bool_t BgL_effectzb21790zb2_408;

								bool_t BgL_removezd2emptyzd2let1791z00_409;

								bool_t BgL_foreignzd2closure1792zd2_410;

								bool_t BgL_typedzd2eq1793zd2_411;

								bool_t BgL_tracezd2support1794zd2_412;

								obj_t BgL_foreignzd2clausezd2suppo1795z00_413;

								obj_t BgL_debugzd2support1796zd2_414;

								bool_t BgL_pragmazd2support1797zd2_415;

								bool_t BgL_tvectorzd2descrzd2suppor1798z00_416;

								bool_t BgL_requirezd2tailc1799zd2_417;

								obj_t BgL_registers1800z00_418;

								obj_t BgL_pregisters1801z00_419;

								bool_t BgL_boundzd2check1802zd2_420;

								bool_t BgL_typezd2check1803zd2_421;

								BgL_language1776z00_394 = BgL_language1776z00_366;
								BgL_srfi01777z00_395 = BgL_srfi01777z00_367;
								BgL_name1778z00_396 = BGl_string1860z00zzbackend_bvmz00;
								BgL_externzd2variables1779zd2_397 = BUNSPEC;
								BgL_externzd2functions1780zd2_398 = BUNSPEC;
								BgL_externzd2types1781zd2_399 = BUNSPEC;
								BgL_variables1782z00_400 = BUNSPEC;
								BgL_functions1783z00_401 = BUNSPEC;
								BgL_types1784z00_402 = BUNSPEC;
								BgL_typed1785z00_403 = ((bool_t) 0);
								BgL_heapzd2suffix1786zd2_404 =
									BGl_string1860z00zzbackend_bvmz00;
								BgL_heapzd2compatible1787zd2_405 =
									BgL_heapzd2compatible1787zd2_377;
								BgL_callcc1788z00_406 = ((bool_t) 0);
								BgL_qualifiedzd2types1789zd2_407 = ((bool_t) 0);
								BgL_effectzb21790zb2_408 = ((bool_t) 0);
								BgL_removezd2emptyzd2let1791z00_409 = ((bool_t) 0);
								BgL_foreignzd2closure1792zd2_410 = ((bool_t) 0);
								BgL_typedzd2eq1793zd2_411 = ((bool_t) 0);
								BgL_tracezd2support1794zd2_412 = ((bool_t) 0);
								BgL_foreignzd2clausezd2suppo1795z00_413 = BNIL;
								BgL_debugzd2support1796zd2_414 = BNIL;
								BgL_pragmazd2support1797zd2_415 = ((bool_t) 0);
								BgL_tvectorzd2descrzd2suppor1798z00_416 = ((bool_t) 0);
								BgL_requirezd2tailc1799zd2_417 = ((bool_t) 0);
								BgL_registers1800z00_418 = BNIL;
								BgL_pregisters1801z00_419 = BNIL;
								BgL_boundzd2check1802zd2_420 = ((bool_t) 0);
								BgL_typezd2check1803zd2_421 = ((bool_t) 0);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_languagez00) =
									((obj_t) BgL_language1776z00_394), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->BgL_srfi0z00) =
									((obj_t) BgL_srfi01777z00_395), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->BgL_namez00) =
									((obj_t) BgL_name1778z00_396), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_externzd2variableszd2) =
									((obj_t) BgL_externzd2variables1779zd2_397), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_externzd2functionszd2) =
									((obj_t) BgL_externzd2functions1780zd2_398), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_externzd2typeszd2) =
									((obj_t) BgL_externzd2types1781zd2_399), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_variablesz00) =
									((obj_t) BgL_variables1782z00_400), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_functionsz00) =
									((obj_t) BgL_functions1783z00_401), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->BgL_typesz00) =
									((obj_t) BgL_types1784z00_402), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->BgL_typedz00) =
									((bool_t) BgL_typed1785z00_403), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_heapzd2suffixzd2) =
									((obj_t) BgL_heapzd2suffix1786zd2_404), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_heapzd2compatiblezd2) =
									((obj_t) BgL_heapzd2compatible1787zd2_405), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->BgL_callccz00) =
									((bool_t) BgL_callcc1788z00_406), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_qualifiedzd2typeszd2) =
									((bool_t) BgL_qualifiedzd2types1789zd2_407), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_effectzb2zb2) =
									((bool_t) BgL_effectzb21790zb2_408), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_removezd2emptyzd2letz00) =
									((bool_t) BgL_removezd2emptyzd2let1791z00_409), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_foreignzd2closurezd2) =
									((bool_t) BgL_foreignzd2closure1792zd2_410), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_typedzd2eqzd2) =
									((bool_t) BgL_typedzd2eq1793zd2_411), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_tracezd2supportzd2) =
									((bool_t) BgL_tracezd2support1794zd2_412), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_foreignzd2clausezd2supportz00) =
									((obj_t) BgL_foreignzd2clausezd2suppo1795z00_413), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_debugzd2supportzd2) =
									((obj_t) BgL_debugzd2support1796zd2_414), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_pragmazd2supportzd2) =
									((bool_t) BgL_pragmazd2support1797zd2_415), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_tvectorzd2descrzd2supportz00) =
									((bool_t) BgL_tvectorzd2descrzd2suppor1798z00_416), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_requirezd2tailczd2) =
									((bool_t) BgL_requirezd2tailc1799zd2_417), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_registersz00) =
									((obj_t) BgL_registers1800z00_418), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_pregistersz00) =
									((obj_t) BgL_pregisters1801z00_419), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_boundzd2checkzd2) =
									((bool_t) BgL_boundzd2check1802zd2_420), BUNSPEC);
								((((BgL_bvmz00_bglt) CREF(BgL_new1804z00_365))->
										BgL_typezd2checkzd2) =
									((bool_t) BgL_typezd2check1803zd2_421), BUNSPEC);
								BgL_res1854z00_422 = BgL_new1804z00_365;
						}}
						(obj_t) (BgL_res1854z00_422);
				}}
			else
				{	/* BackEnd/bvm.scm 18 */
					BFALSE;
				}
			return (BgL_bvmz00_bglt) (BGl_z52thezd2bvmzd2nilz52zzbackend_bvmz00);
		}
	}



/* _bvm-nil */
	obj_t BGl__bvmzd2nilzd2zzbackend_bvmz00(obj_t BgL_envz00_451)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 18 */
			return (obj_t) (BGl_bvmzd2nilzd2zzbackend_bvmz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
				BGl_bvmz00zzbackend_bvmz00, BGl_proc1861z00zzbackend_bvmz00,
				BGl_string1862z00zzbackend_bvmz00);
		}
	}



/* backend-initialize!-1838 */
	obj_t BGl_backendzd2initializa7ez12zd21838zb5zzbackend_bvmz00(obj_t
		BgL_envz00_486, obj_t BgL_bz00_487)
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 23 */
			{
				BgL_bvmz00_bglt BgL_bz00_323;

				BgL_bz00_323 = (BgL_bvmz00_bglt) (BgL_bz00_487);
				{
					BgL_backendz00_bglt BgL_auxz00_764;

					BgL_auxz00_764 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_764))->BgL_typedz00) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_767;

					BgL_auxz00_767 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_767))->BgL_callccz00) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_770;

					BgL_auxz00_770 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_770))->
							BgL_qualifiedzd2typeszd2) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_773;

					BgL_auxz00_773 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_773))->BgL_effectzb2zb2) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_776;

					BgL_auxz00_776 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_776))->
							BgL_removezd2emptyzd2letz00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_779;

					BgL_auxz00_779 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_779))->
							BgL_foreignzd2closurezd2) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_782;

					BgL_auxz00_782 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_782))->BgL_typedzd2eqzd2) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_785;

					BgL_auxz00_785 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_785))->
							BgL_tracezd2supportzd2) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_788;

					BgL_auxz00_788 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_788))->
							BgL_pragmazd2supportzd2) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_791;

					BgL_auxz00_791 = (BgL_backendz00_bglt) (BgL_bz00_323);
					((((BgL_backendz00_bglt) CREF(BgL_auxz00_791))->
							BgL_tvectorzd2descrzd2supportz00) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_backendz00_bglt BgL_auxz00_794;

					BgL_auxz00_794 = (BgL_backendz00_bglt) (BgL_bz00_323);
					return
						((((BgL_backendz00_bglt) CREF(BgL_auxz00_794))->
							BgL_requirezd2tailczd2) = ((bool_t) ((bool_t) 1)), BUNSPEC);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_bvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/bvm.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string1863z00zzbackend_bvmz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string1863z00zzbackend_bvmz00));
		}
	}

#ifdef __cplusplus
}
#endif
