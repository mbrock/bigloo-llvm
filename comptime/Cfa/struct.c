/*===========================================================================*/
/*   (Cfa/struct.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/struct.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_appz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}             *BgL_appz00_bglt;

	typedef struct BgL_approxz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		bool_t BgL_typezd2lockedzf3z21;
		obj_t BgL_allocsz00;
		bool_t BgL_topzf3zf3;
		long BgL_lostzd2stampzd2;
	}                *BgL_approxz00_bglt;

	typedef struct BgL_prezd2makezd2structzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2structzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2refzd2appzd2_bgl
	{
		char dummy;
	}                                  *BgL_prezd2structzd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2setz12zd2appzc0_bgl
	{
		char dummy;
	}                                    
		*BgL_prezd2structzd2setz12zd2appzc0_bglt;

	typedef struct BgL_makezd2structzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                             *BgL_makezd2structzd2appz00_bglt;

	typedef struct BgL_structzd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_structzd2refzd2appz00_bglt;

	typedef struct BgL_structzd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_structzd2setz12zd2appz12_bglt;


	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	extern obj_t BGl_structzd2refzd2appz00zzcfa_info2z00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcfa_structz00();
	extern obj_t BGl_makezd2structzd2appz00zzcfa_info2z00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t BGl_cfaz12zd2structzd2refzd2app4714zc0zzcfa_structz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2setupz12zd2prezd2make4706zc0zzcfa_structz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_structz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_structz00();
	static obj_t BGl_nodezd2setupz12zd2prezd2stru4708zc0zzcfa_structz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2setupz12zd2prezd2stru4710zc0zzcfa_structz00(obj_t,
		obj_t);
	static obj_t BGl_cfaz12zd2makezd2structzd2app4712zc0zzcfa_structz00(obj_t,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_structz00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_structz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzcfa_structz00();
	static obj_t BGl_cfaz12zd2structzd2setz12zd2app4716zd2zzcfa_structz00(obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34857ze3z83zzcfa_structz00(obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00(BgL_approxz00_bglt);
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_structz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	static obj_t BGl_zc3anonymousza34871ze3z83zzcfa_structz00(obj_t, obj_t);
	extern obj_t BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00;
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	extern obj_t BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00;
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2makezd2structzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t
		BGl_wideningzd2structzd2refzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt);
	extern obj_t BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00;
	static obj_t BGl_loosezd2allocz12zd2makezd2st4718zc0zzcfa_structz00(obj_t,
		obj_t);
	extern obj_t BGl_structzd2setz12zd2appz12zzcfa_info2z00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_structz00();
	static obj_t __cnst[1];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4888z00zzcfa_structz00,
		BgL_bgl_nodeza7d2setupza712za74902za7,
		BGl_nodezd2setupz12zd2prezd2make4706zc0zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4890z00zzcfa_structz00,
		BgL_bgl_nodeza7d2setupza712za74903za7,
		BGl_nodezd2setupz12zd2prezd2stru4708zc0zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4891z00zzcfa_structz00,
		BgL_bgl_nodeza7d2setupza712za74904za7,
		BGl_nodezd2setupz12zd2prezd2stru4710zc0zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4892z00zzcfa_structz00,
		BgL_bgl_cfaza712za7d2makeza7d24905za7,
		BGl_cfaz12zd2makezd2structzd2app4712zc0zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4894z00zzcfa_structz00,
		BgL_bgl_cfaza712za7d2structza74906za7,
		BGl_cfaz12zd2structzd2refzd2app4714zc0zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4895z00zzcfa_structz00,
		BgL_bgl_cfaza712za7d2structza74907za7,
		BGl_cfaz12zd2structzd2setz12zd2app4716zd2zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4896z00zzcfa_structz00,
		BgL_bgl_looseza7d2allocza7124908z00,
		BGl_loosezd2allocz12zd2makezd2st4718zc0zzcfa_structz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4889z00zzcfa_structz00,
		BgL_bgl_string4889za700za7za7c4909za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string4893z00zzcfa_structz00,
		BgL_bgl_string4893za700za7za7c4910za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string4897z00zzcfa_structz00,
		BgL_bgl_string4897za700za7za7c4911za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string4898z00zzcfa_structz00,
		BgL_bgl_string4898za700za7za7c4912za7, "cfa_struct", 10);
	      DEFINE_STRING(BGl_string4899z00zzcfa_structz00,
		BgL_bgl_string4899za700za7za7c4913za7, "all ", 4);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_structz00(long
		BgL_checksumz00_1835, char *BgL_fromz00_1836)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_structz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_structz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_structz00();
					BGl_cnstzd2initzd2zzcfa_structz00();
					BGl_importedzd2moduleszd2initz00zzcfa_structz00();
					BGl_methodzd2initzd2zzcfa_structz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_structz00()
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 17 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_struct");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_struct");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_structz00()
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 17 */
			{	/* Cfa/struct.scm 17 */
				obj_t BgL_cportz00_1827;

				BgL_cportz00_1827 =
					bgl_open_input_string(BGl_string4899z00zzcfa_structz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1828;

					BgL_iz00_1828 = ((long) 0);
				BgL_loopz00_1829:
					if ((BgL_iz00_1828 == ((long) -1)))
						{	/* Cfa/struct.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/struct.scm 17 */
							{	/* Cfa/struct.scm 17 */
								obj_t BgL_arg4901z00_1831;

								{	/* Cfa/struct.scm 17 */

									{	/* Cfa/struct.scm 17 */
										obj_t BgL_locationz00_1833;

										BgL_locationz00_1833 = BBOOL(((bool_t) 0));
										{	/* Cfa/struct.scm 17 */

											BgL_arg4901z00_1831 =
												BGl_readz00zz__readerz00(BgL_cportz00_1827,
												BgL_locationz00_1833);
										}
									}
								}
								{	/* Cfa/struct.scm 17 */
									int BgL_auxz00_1852;

									BgL_auxz00_1852 = (int) (BgL_iz00_1828);
									CNST_TABLE_SET(BgL_auxz00_1852, BgL_arg4901z00_1831);
							}}
							{	/* Cfa/struct.scm 17 */
								int BgL_auxz00_1834;

								BgL_auxz00_1834 = (int) ((BgL_iz00_1828 - ((long) 1)));
								{
									long BgL_iz00_1857;

									BgL_iz00_1857 = (long) (BgL_auxz00_1834);
									BgL_iz00_1828 = BgL_iz00_1857;
									goto BgL_loopz00_1829;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_structz00()
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 17 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_structz00()
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_structz00()
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00,
				BGl_proc4888z00zzcfa_structz00, BGl_string4889z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00,
				BGl_proc4890z00zzcfa_structz00, BGl_string4889z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00,
				BGl_proc4891z00zzcfa_structz00, BGl_string4889z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2structzd2appz00zzcfa_info2z00,
				BGl_proc4892z00zzcfa_structz00, BGl_string4893z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_structzd2refzd2appz00zzcfa_info2z00, BGl_proc4894z00zzcfa_structz00,
				BGl_string4893z00zzcfa_structz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_structzd2setz12zd2appz12zzcfa_info2z00,
				BGl_proc4895z00zzcfa_structz00, BGl_string4893z00zzcfa_structz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2structzd2appz00zzcfa_info2z00,
				BGl_proc4896z00zzcfa_structz00, BGl_string4897z00zzcfa_structz00);
		}
	}



/* loose-alloc!-make-st4718 */
	obj_t BGl_loosezd2allocz12zd2makezd2st4718zc0zzcfa_structz00(obj_t
		BgL_envz00_1803, obj_t BgL_allocz00_1804)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 136 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_allocz00_1688;

				BgL_allocz00_1688 =
					(BgL_makezd2structzd2appz00_bglt) (BgL_allocz00_1804);
				{	/* Cfa/struct.scm 138 */
					bool_t BgL_testz00_1866;

					{	/* Cfa/struct.scm 138 */
						long BgL_n2z00_1786;

						BgL_n2z00_1786 =
							(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
						{	/* Cfa/struct.scm 138 */
							long BgL_auxz00_1868;

							{
								obj_t BgL_auxz00_1869;

								{	/* Cfa/struct.scm 138 */
									BgL_objectz00_bglt BgL_auxz00_1870;

									BgL_auxz00_1870 = (BgL_objectz00_bglt) (BgL_allocz00_1688);
									BgL_auxz00_1869 = BGL_OBJECT_WIDENING(BgL_auxz00_1870);
								}
								BgL_auxz00_1868 =
									(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_1869))->
									BgL_lostzd2stampzd2);
							}
							BgL_testz00_1866 = (BgL_auxz00_1868 == BgL_n2z00_1786);
					}}
					if (BgL_testz00_1866)
						{	/* Cfa/struct.scm 138 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/struct.scm 138 */
							{
								long BgL_auxz00_1879;

								obj_t BgL_auxz00_1875;

								BgL_auxz00_1879 =
									(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
								{	/* Cfa/struct.scm 142 */
									BgL_objectz00_bglt BgL_auxz00_1876;

									BgL_auxz00_1876 = (BgL_objectz00_bglt) (BgL_allocz00_1688);
									BgL_auxz00_1875 = BGL_OBJECT_WIDENING(BgL_auxz00_1876);
								}
								((((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_1875))->
										BgL_lostzd2stampzd2) = ((long) BgL_auxz00_1879), BUNSPEC);
							}
							{	/* Cfa/struct.scm 143 */
								BgL_approxz00_bglt BgL_arg4880z00_1693;

								{
									obj_t BgL_auxz00_1882;

									{	/* Cfa/struct.scm 143 */
										BgL_objectz00_bglt BgL_auxz00_1883;

										BgL_auxz00_1883 = (BgL_objectz00_bglt) (BgL_allocz00_1688);
										BgL_auxz00_1882 = BGL_OBJECT_WIDENING(BgL_auxz00_1883);
									}
									BgL_arg4880z00_1693 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_1882))->
										BgL_valuezd2approxzd2);
								}
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
									BgL_arg4880z00_1693);
							}
							{	/* Cfa/struct.scm 144 */
								BgL_approxz00_bglt BgL_arg4881z00_1694;

								{
									obj_t BgL_auxz00_1888;

									{	/* Cfa/struct.scm 144 */
										BgL_objectz00_bglt BgL_auxz00_1889;

										BgL_auxz00_1889 = (BgL_objectz00_bglt) (BgL_allocz00_1688);
										BgL_auxz00_1888 = BGL_OBJECT_WIDENING(BgL_auxz00_1889);
									}
									BgL_arg4881z00_1694 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_1888))->
										BgL_valuezd2approxzd2);
								}
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00
									(BgL_arg4881z00_1694,
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
							}
							{	/* Cfa/struct.scm 145 */
								BgL_approxz00_bglt BgL_arg4882z00_1695;

								{
									obj_t BgL_auxz00_1895;

									{	/* Cfa/struct.scm 145 */
										BgL_objectz00_bglt BgL_auxz00_1896;

										BgL_auxz00_1896 = (BgL_objectz00_bglt) (BgL_allocz00_1688);
										BgL_auxz00_1895 = BGL_OBJECT_WIDENING(BgL_auxz00_1896);
									}
									BgL_arg4882z00_1695 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_1895))->
										BgL_valuezd2approxzd2);
								}
								return
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg4882z00_1695);
							}
						}
				}
			}
		}
	}



/* cfa!-struct-set!-app4716 */
	obj_t BGl_cfaz12zd2structzd2setz12zd2app4716zd2zzcfa_structz00(obj_t
		BgL_envz00_1805, obj_t BgL_nodez00_1806)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 109 */
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_nodez00_1666;

				{	/* Cfa/struct.scm 110 */
					BgL_approxz00_bglt BgL_auxz00_1902;

					BgL_nodez00_1666 =
						(BgL_structzd2setz12zd2appz12_bglt) (BgL_nodez00_1806);
					{	/* Cfa/struct.scm 113 */
						obj_t BgL_arg4867z00_1670;

						{	/* Cfa/struct.scm 113 */
							obj_t BgL_pairz00_1767;

							{
								BgL_appz00_bglt BgL_auxz00_1903;

								BgL_auxz00_1903 = (BgL_appz00_bglt) (BgL_nodez00_1666);
								BgL_pairz00_1767 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_1903))->BgL_argsz00);
							}
							BgL_arg4867z00_1670 = CAR(CDR(BgL_pairz00_1767));
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg4867z00_1670));
					}
					{	/* Cfa/struct.scm 114 */
						BgL_approxz00_bglt BgL_structzd2approxzd2_1672;

						BgL_approxz00_bglt BgL_valzd2approxzd2_1673;

						{	/* Cfa/struct.scm 114 */
							obj_t BgL_arg4874z00_1682;

							{	/* Cfa/struct.scm 114 */
								obj_t BgL_pairz00_1772;

								{
									BgL_appz00_bglt BgL_auxz00_1910;

									BgL_auxz00_1910 = (BgL_appz00_bglt) (BgL_nodez00_1666);
									BgL_pairz00_1772 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_1910))->BgL_argsz00);
								}
								BgL_arg4874z00_1682 = CAR(BgL_pairz00_1772);
							}
							BgL_structzd2approxzd2_1672 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4874z00_1682));
						}
						{	/* Cfa/struct.scm 115 */
							obj_t BgL_arg4876z00_1684;

							{	/* Cfa/struct.scm 115 */
								obj_t BgL_pairz00_1774;

								{
									BgL_appz00_bglt BgL_auxz00_1916;

									BgL_auxz00_1916 = (BgL_appz00_bglt) (BgL_nodez00_1666);
									BgL_pairz00_1774 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_1916))->BgL_argsz00);
								}
								BgL_arg4876z00_1684 = CAR(CDR(CDR(BgL_pairz00_1774)));
							}
							BgL_valzd2approxzd2_1673 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4876z00_1684));
						}
						if (
							(((BgL_approxz00_bglt) CREF(BgL_structzd2approxzd2_1672))->
								BgL_topzf3zf3))
							{	/* Cfa/struct.scm 118 */
								(obj_t) (BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_1673,
										CNST_TABLE_REF(((long) 0))));
							}
						else
							{	/* Cfa/struct.scm 123 */
								obj_t BgL_zc3anonymousza34871ze3z83_1795;

								BgL_zc3anonymousza34871ze3z83_1795 =
									make_fx_procedure
									(BGl_zc3anonymousza34871ze3z83zzcfa_structz00,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3anonymousza34871ze3z83_1795,
									(int) (((long) 0)), (obj_t) (BgL_valzd2approxzd2_1673));
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BgL_zc3anonymousza34871ze3z83_1795,
									BgL_structzd2approxzd2_1672);
					}}
					{
						obj_t BgL_auxz00_1936;

						{	/* Cfa/struct.scm 127 */
							BgL_objectz00_bglt BgL_auxz00_1937;

							BgL_auxz00_1937 = (BgL_objectz00_bglt) (BgL_nodez00_1666);
							BgL_auxz00_1936 = BGL_OBJECT_WIDENING(BgL_auxz00_1937);
						}
						BgL_auxz00_1902 =
							(((BgL_structzd2setz12zd2appz12_bglt) CREF(BgL_auxz00_1936))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_1902);
				}
			}
		}
	}



/* <anonymous:4871> */
	obj_t BGl_zc3anonymousza34871ze3z83zzcfa_structz00(obj_t BgL_envz00_1807,
		obj_t BgL_appz00_1809)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 122 */
			{	/* Cfa/struct.scm 123 */
				obj_t BgL_valzd2approxzd2_1808;

				BgL_valzd2approxzd2_1808 =
					PROCEDURE_REF(BgL_envz00_1807, (int) (((long) 0)));
				{
					obj_t BgL_appz00_1676;

					BgL_appz00_1676 = BgL_appz00_1809;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1676,
							BGl_makezd2structzd2appz00zzcfa_info2z00))
						{	/* Cfa/struct.scm 124 */
							BgL_makezd2structzd2appz00_bglt BgL_instance4701z00_1679;

							BgL_instance4701z00_1679 =
								(BgL_makezd2structzd2appz00_bglt) (BgL_appz00_1676);
							{	/* Cfa/struct.scm 125 */
								BgL_approxz00_bglt BgL_arg4873z00_1680;

								{
									obj_t BgL_auxz00_1948;

									{	/* Cfa/struct.scm 125 */
										BgL_objectz00_bglt BgL_auxz00_1949;

										BgL_auxz00_1949 =
											(BgL_objectz00_bglt) (BgL_instance4701z00_1679);
										BgL_auxz00_1948 = BGL_OBJECT_WIDENING(BgL_auxz00_1949);
									}
									BgL_arg4873z00_1680 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_1948))->
										BgL_valuezd2approxzd2);
								}
								return
									(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00
									(BgL_arg4873z00_1680,
										(BgL_approxz00_bglt) (BgL_valzd2approxzd2_1808)));
							}
						}
					else
						{	/* Cfa/struct.scm 123 */
							return BFALSE;
						}
				}
			}
		}
	}



/* cfa!-struct-ref-app4714 */
	obj_t BGl_cfaz12zd2structzd2refzd2app4714zc0zzcfa_structz00(obj_t
		BgL_envz00_1810, obj_t BgL_nodez00_1811)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 87 */
			{
				BgL_structzd2refzd2appz00_bglt BgL_nodez00_1642;

				{	/* Cfa/struct.scm 88 */
					BgL_approxz00_bglt BgL_auxz00_1956;

					BgL_nodez00_1642 =
						(BgL_structzd2refzd2appz00_bglt) (BgL_nodez00_1811);
					{	/* Cfa/struct.scm 91 */
						obj_t BgL_arg4852z00_1646;

						{	/* Cfa/struct.scm 91 */
							obj_t BgL_pairz00_1751;

							{
								BgL_appz00_bglt BgL_auxz00_1957;

								BgL_auxz00_1957 = (BgL_appz00_bglt) (BgL_nodez00_1642);
								BgL_pairz00_1751 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_1957))->BgL_argsz00);
							}
							BgL_arg4852z00_1646 = CAR(CDR(BgL_pairz00_1751));
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg4852z00_1646));
					}
					{	/* Cfa/struct.scm 92 */
						BgL_approxz00_bglt BgL_structzd2approxzd2_1648;

						{	/* Cfa/struct.scm 92 */
							obj_t BgL_arg4864z00_1662;

							{	/* Cfa/struct.scm 92 */
								obj_t BgL_pairz00_1756;

								{
									BgL_appz00_bglt BgL_auxz00_1964;

									BgL_auxz00_1964 = (BgL_appz00_bglt) (BgL_nodez00_1642);
									BgL_pairz00_1756 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_1964))->BgL_argsz00);
								}
								BgL_arg4864z00_1662 = CAR(BgL_pairz00_1756);
							}
							BgL_structzd2approxzd2_1648 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4864z00_1662));
						}
						if (
							(((BgL_approxz00_bglt) CREF(BgL_structzd2approxzd2_1648))->
								BgL_topzf3zf3))
							{	/* Cfa/struct.scm 96 */
								BgL_approxz00_bglt BgL_arg4855z00_1650;

								{
									obj_t BgL_auxz00_1972;

									{	/* Cfa/struct.scm 96 */
										BgL_objectz00_bglt BgL_auxz00_1973;

										BgL_auxz00_1973 = (BgL_objectz00_bglt) (BgL_nodez00_1642);
										BgL_auxz00_1972 = BGL_OBJECT_WIDENING(BgL_auxz00_1973);
									}
									BgL_arg4855z00_1650 =
										(((BgL_structzd2refzd2appz00_bglt) CREF(BgL_auxz00_1972))->
										BgL_approxz00);
								}
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg4855z00_1650);
							}
						else
							{	/* Cfa/struct.scm 95 */
								BFALSE;
							}
						{	/* Cfa/struct.scm 99 */
							obj_t BgL_zc3anonymousza34857ze3z83_1797;

							BgL_zc3anonymousza34857ze3z83_1797 =
								make_fx_procedure(BGl_zc3anonymousza34857ze3z83zzcfa_structz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3anonymousza34857ze3z83_1797,
								(int) (((long) 0)), (obj_t) (BgL_nodez00_1642));
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BgL_zc3anonymousza34857ze3z83_1797,
								BgL_structzd2approxzd2_1648);
					}}
					{
						obj_t BgL_auxz00_1985;

						{	/* Cfa/struct.scm 104 */
							BgL_objectz00_bglt BgL_auxz00_1986;

							BgL_auxz00_1986 = (BgL_objectz00_bglt) (BgL_nodez00_1642);
							BgL_auxz00_1985 = BGL_OBJECT_WIDENING(BgL_auxz00_1986);
						}
						BgL_auxz00_1956 =
							(((BgL_structzd2refzd2appz00_bglt) CREF(BgL_auxz00_1985))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_1956);
				}
			}
		}
	}



/* <anonymous:4857> */
	obj_t BGl_zc3anonymousza34857ze3z83zzcfa_structz00(obj_t BgL_envz00_1812,
		obj_t BgL_appz00_1814)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 98 */
			{	/* Cfa/struct.scm 99 */
				obj_t BgL_instance4695z00_1813;

				BgL_instance4695z00_1813 =
					PROCEDURE_REF(BgL_envz00_1812, (int) (((long) 0)));
				{
					obj_t BgL_appz00_1652;

					BgL_appz00_1652 = BgL_appz00_1814;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1652,
							BGl_makezd2structzd2appz00zzcfa_info2z00))
						{	/* Cfa/struct.scm 100 */
							BgL_makezd2structzd2appz00_bglt BgL_instance4697z00_1655;

							BgL_instance4697z00_1655 =
								(BgL_makezd2structzd2appz00_bglt) (BgL_appz00_1652);
							{	/* Cfa/struct.scm 101 */
								BgL_approxz00_bglt BgL_arg4859z00_1656;

								BgL_approxz00_bglt BgL_arg4860z00_1657;

								{	/* Cfa/struct.scm 101 */
									BgL_structzd2refzd2appz00_bglt BgL_obj4628z00_1760;

									BgL_obj4628z00_1760 =
										(BgL_structzd2refzd2appz00_bglt) (BgL_instance4695z00_1813);
									{
										obj_t BgL_auxz00_1998;

										{	/* Cfa/struct.scm 101 */
											BgL_objectz00_bglt BgL_auxz00_1999;

											BgL_auxz00_1999 =
												(BgL_objectz00_bglt) (BgL_obj4628z00_1760);
											BgL_auxz00_1998 = BGL_OBJECT_WIDENING(BgL_auxz00_1999);
										}
										BgL_arg4859z00_1656 =
											(((BgL_structzd2refzd2appz00_bglt)
												CREF(BgL_auxz00_1998))->BgL_approxz00);
									}
								}
								{
									obj_t BgL_auxz00_2003;

									{	/* Cfa/struct.scm 101 */
										BgL_objectz00_bglt BgL_auxz00_2004;

										BgL_auxz00_2004 =
											(BgL_objectz00_bglt) (BgL_instance4697z00_1655);
										BgL_auxz00_2003 = BGL_OBJECT_WIDENING(BgL_auxz00_2004);
									}
									BgL_arg4860z00_1657 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_2003))->
										BgL_valuezd2approxzd2);
								}
								BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4859z00_1656,
									BgL_arg4860z00_1657);
							}
							{	/* Cfa/struct.scm 102 */
								BgL_approxz00_bglt BgL_arg4861z00_1658;

								BgL_typez00_bglt BgL_arg4862z00_1659;

								{
									obj_t BgL_auxz00_2009;

									{	/* Cfa/struct.scm 102 */
										BgL_objectz00_bglt BgL_auxz00_2010;

										BgL_auxz00_2010 =
											(BgL_objectz00_bglt) (BgL_instance4697z00_1655);
										BgL_auxz00_2009 = BGL_OBJECT_WIDENING(BgL_auxz00_2010);
									}
									BgL_arg4861z00_1658 =
										(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_2009))->
										BgL_valuezd2approxzd2);
								}
								{	/* Cfa/struct.scm 102 */
									BgL_approxz00_bglt BgL_obj3242z00_1764;

									{	/* Cfa/struct.scm 102 */
										BgL_structzd2refzd2appz00_bglt BgL_obj4628z00_1763;

										BgL_obj4628z00_1763 =
											(BgL_structzd2refzd2appz00_bglt)
											(BgL_instance4695z00_1813);
										{
											obj_t BgL_auxz00_2015;

											{	/* Cfa/struct.scm 102 */
												BgL_objectz00_bglt BgL_auxz00_2016;

												BgL_auxz00_2016 =
													(BgL_objectz00_bglt) (BgL_obj4628z00_1763);
												BgL_auxz00_2015 = BGL_OBJECT_WIDENING(BgL_auxz00_2016);
											}
											BgL_obj3242z00_1764 =
												(((BgL_structzd2refzd2appz00_bglt)
													CREF(BgL_auxz00_2015))->BgL_approxz00);
										}
									}
									BgL_arg4862z00_1659 =
										(((BgL_approxz00_bglt) CREF(BgL_obj3242z00_1764))->
										BgL_typez00);
								}
								return
									BGl_approxzd2setzd2typez12z12zzcfa_approxz00
									(BgL_arg4861z00_1658, BgL_arg4862z00_1659);
							}
						}
					else
						{	/* Cfa/struct.scm 99 */
							return BFALSE;
						}
				}
			}
		}
	}



/* cfa!-make-struct-app4712 */
	obj_t BGl_cfaz12zd2makezd2structzd2app4712zc0zzcfa_structz00(obj_t
		BgL_envz00_1815, obj_t BgL_nodez00_1816)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 71 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_nodez00_1630;

				{	/* Cfa/struct.scm 72 */
					BgL_approxz00_bglt BgL_auxz00_2022;

					BgL_nodez00_1630 =
						(BgL_makezd2structzd2appz00_bglt) (BgL_nodez00_1816);
					{	/* Cfa/struct.scm 74 */
						obj_t BgL_arg4846z00_1634;

						{	/* Cfa/struct.scm 74 */
							obj_t BgL_pairz00_1742;

							{
								BgL_appz00_bglt BgL_auxz00_2023;

								BgL_auxz00_2023 = (BgL_appz00_bglt) (BgL_nodez00_1630);
								BgL_pairz00_1742 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2023))->BgL_argsz00);
							}
							BgL_arg4846z00_1634 = CAR(BgL_pairz00_1742);
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg4846z00_1634));
					}
					{	/* Cfa/struct.scm 75 */
						BgL_approxz00_bglt BgL_initzd2valuezd2approxz00_1636;

						{	/* Cfa/struct.scm 75 */
							obj_t BgL_arg4849z00_1638;

							{	/* Cfa/struct.scm 75 */
								obj_t BgL_pairz00_1744;

								{
									BgL_appz00_bglt BgL_auxz00_2029;

									BgL_auxz00_2029 = (BgL_appz00_bglt) (BgL_nodez00_1630);
									BgL_pairz00_1744 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2029))->BgL_argsz00);
								}
								BgL_arg4849z00_1638 = CAR(CDR(BgL_pairz00_1744));
							}
							BgL_initzd2valuezd2approxz00_1636 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4849z00_1638));
						}
						{	/* Cfa/struct.scm 76 */
							BgL_approxz00_bglt BgL_arg4848z00_1637;

							{
								obj_t BgL_auxz00_2036;

								{	/* Cfa/struct.scm 76 */
									BgL_objectz00_bglt BgL_auxz00_2037;

									BgL_auxz00_2037 = (BgL_objectz00_bglt) (BgL_nodez00_1630);
									BgL_auxz00_2036 = BGL_OBJECT_WIDENING(BgL_auxz00_2037);
								}
								BgL_arg4848z00_1637 =
									(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_2036))->
									BgL_valuezd2approxzd2);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4848z00_1637,
								BgL_initzd2valuezd2approxz00_1636);
						}
						{
							obj_t BgL_auxz00_2042;

							{	/* Cfa/struct.scm 77 */
								BgL_objectz00_bglt BgL_auxz00_2043;

								BgL_auxz00_2043 = (BgL_objectz00_bglt) (BgL_nodez00_1630);
								BgL_auxz00_2042 = BGL_OBJECT_WIDENING(BgL_auxz00_2043);
							}
							BgL_auxz00_2022 =
								(((BgL_makezd2structzd2appz00_bglt) CREF(BgL_auxz00_2042))->
								BgL_approxz00);
						}
					}
					return (obj_t) (BgL_auxz00_2022);
				}
			}
		}
	}



/* node-setup!-pre-stru4710 */
	obj_t BGl_nodezd2setupz12zd2prezd2stru4710zc0zzcfa_structz00(obj_t
		BgL_envz00_1817, obj_t BgL_nodez00_1818)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 62 */
			{
				BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_nodez00_1614;

				{	/* Cfa/struct.scm 63 */
					BgL_appz00_bglt BgL_auxz00_2049;

					BgL_nodez00_1614 =
						(BgL_prezd2structzd2setz12zd2appzc0_bglt) (BgL_nodez00_1818);
					{	/* Cfa/struct.scm 64 */
						obj_t BgL_arg4837z00_1618;

						{
							BgL_appz00_bglt BgL_auxz00_2050;

							BgL_auxz00_2050 = (BgL_appz00_bglt) (BgL_nodez00_1614);
							BgL_arg4837z00_1618 =
								(((BgL_appz00_bglt) CREF(BgL_auxz00_2050))->BgL_argsz00);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4837z00_1618);
					}
					{	/* Cfa/struct.scm 65 */
						BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_nodez00_1619;

						{	/* Cfa/struct.scm 65 */
							long BgL_arg4841z00_1625;

							{	/* Cfa/struct.scm 65 */
								obj_t BgL_arg4842z00_1626;

								{	/* Cfa/struct.scm 65 */
									obj_t BgL_arg4844z00_1627;

									{	/* Cfa/struct.scm 65 */
										BgL_objectz00_bglt BgL_objectz00_1729;

										BgL_objectz00_1729 =
											(BgL_objectz00_bglt) (BgL_nodez00_1614);
										{	/* Cfa/struct.scm 65 */
											long BgL_arg2646z00_1730;

											{	/* Cfa/struct.scm 65 */
												long BgL_arg2647z00_1731;

												BgL_arg2647z00_1731 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1729);
												BgL_arg2646z00_1730 =
													(BgL_arg2647z00_1731 - OBJECT_TYPE);
											}
											BgL_arg4844z00_1627 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1730));
									}}
									BgL_arg4842z00_1626 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg4844z00_1627);
								}
								BgL_arg4841z00_1625 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg4842z00_1626);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1614), BgL_arg4841z00_1625);
						}
						{	/* Cfa/struct.scm 65 */
							BgL_objectz00_bglt BgL_auxz00_2063;

							BgL_auxz00_2063 = (BgL_objectz00_bglt) (BgL_nodez00_1614);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2063, BFALSE);
						}
						BgL_nodez00_1619 = BgL_nodez00_1614;
						{	/* Cfa/struct.scm 66 */
							BgL_appz00_bglt BgL_obj4692z00_1620;

							BgL_obj4692z00_1620 =
								((BgL_appz00_bglt) (BgL_appz00_bglt) (BgL_nodez00_1619));
							{	/* Cfa/struct.scm 66 */
								obj_t BgL_auxz00_2070;

								BgL_objectz00_bglt BgL_auxz00_2068;

								BgL_auxz00_2070 =
									BGl_wideningzd2structzd2setz12zd2appzc0zzcfa_info2z00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2unspecza2z00zztype_cachez00)));
								BgL_auxz00_2068 = (BgL_objectz00_bglt) (BgL_obj4692z00_1620);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2068, BgL_auxz00_2070);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4692z00_1620),
								BGl_classzd2numzd2zz__objectz00
								(BGl_structzd2setz12zd2appz12zzcfa_info2z00));
							BgL_auxz00_2049 = BgL_obj4692z00_1620;
					}}
					return (obj_t) (BgL_auxz00_2049);
				}
			}
		}
	}



/* node-setup!-pre-stru4708 */
	obj_t BGl_nodezd2setupz12zd2prezd2stru4708zc0zzcfa_structz00(obj_t
		BgL_envz00_1819, obj_t BgL_nodez00_1820)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 53 */
			{
				BgL_prezd2structzd2refzd2appzd2_bglt BgL_nodez00_1598;

				{	/* Cfa/struct.scm 54 */
					BgL_appz00_bglt BgL_auxz00_2080;

					BgL_nodez00_1598 =
						(BgL_prezd2structzd2refzd2appzd2_bglt) (BgL_nodez00_1820);
					{	/* Cfa/struct.scm 55 */
						obj_t BgL_arg4829z00_1602;

						{
							BgL_appz00_bglt BgL_auxz00_2081;

							BgL_auxz00_2081 = (BgL_appz00_bglt) (BgL_nodez00_1598);
							BgL_arg4829z00_1602 =
								(((BgL_appz00_bglt) CREF(BgL_auxz00_2081))->BgL_argsz00);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4829z00_1602);
					}
					{	/* Cfa/struct.scm 56 */
						BgL_prezd2structzd2refzd2appzd2_bglt BgL_nodez00_1603;

						{	/* Cfa/struct.scm 56 */
							long BgL_arg4833z00_1609;

							{	/* Cfa/struct.scm 56 */
								obj_t BgL_arg4834z00_1610;

								{	/* Cfa/struct.scm 56 */
									obj_t BgL_arg4835z00_1611;

									{	/* Cfa/struct.scm 56 */
										BgL_objectz00_bglt BgL_objectz00_1716;

										BgL_objectz00_1716 =
											(BgL_objectz00_bglt) (BgL_nodez00_1598);
										{	/* Cfa/struct.scm 56 */
											long BgL_arg2646z00_1717;

											{	/* Cfa/struct.scm 56 */
												long BgL_arg2647z00_1718;

												BgL_arg2647z00_1718 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1716);
												BgL_arg2646z00_1717 =
													(BgL_arg2647z00_1718 - OBJECT_TYPE);
											}
											BgL_arg4835z00_1611 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1717));
									}}
									BgL_arg4834z00_1610 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg4835z00_1611);
								}
								BgL_arg4833z00_1609 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg4834z00_1610);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1598), BgL_arg4833z00_1609);
						}
						{	/* Cfa/struct.scm 56 */
							BgL_objectz00_bglt BgL_auxz00_2094;

							BgL_auxz00_2094 = (BgL_objectz00_bglt) (BgL_nodez00_1598);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2094, BFALSE);
						}
						BgL_nodez00_1603 = BgL_nodez00_1598;
						{	/* Cfa/struct.scm 57 */
							BgL_appz00_bglt BgL_obj4688z00_1604;

							BgL_obj4688z00_1604 =
								((BgL_appz00_bglt) (BgL_appz00_bglt) (BgL_nodez00_1603));
							{	/* Cfa/struct.scm 57 */
								obj_t BgL_auxz00_2101;

								BgL_objectz00_bglt BgL_auxz00_2099;

								BgL_auxz00_2101 =
									BGl_wideningzd2structzd2refzd2appzd2zzcfa_info2z00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2objza2z00zztype_cachez00)));
								BgL_auxz00_2099 = (BgL_objectz00_bglt) (BgL_obj4688z00_1604);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2099, BgL_auxz00_2101);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4688z00_1604),
								BGl_classzd2numzd2zz__objectz00
								(BGl_structzd2refzd2appz00zzcfa_info2z00));
							BgL_auxz00_2080 = BgL_obj4688z00_1604;
					}}
					return (obj_t) (BgL_auxz00_2080);
				}
			}
		}
	}



/* node-setup!-pre-make4706 */
	obj_t BGl_nodezd2setupz12zd2prezd2make4706zc0zzcfa_structz00(obj_t
		BgL_envz00_1821, obj_t BgL_nodez00_1822)
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 36 */
			{
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_nodez00_1576;

				BgL_nodez00_1576 =
					(BgL_prezd2makezd2structzd2appzd2_bglt) (BgL_nodez00_1822);
				{	/* Cfa/struct.scm 38 */
					obj_t BgL_arg4816z00_1580;

					{
						BgL_appz00_bglt BgL_auxz00_2111;

						BgL_auxz00_2111 = (BgL_appz00_bglt) (BgL_nodez00_1576);
						BgL_arg4816z00_1580 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_2111))->BgL_argsz00);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg4816z00_1580);
				}
				{	/* Cfa/struct.scm 39 */
					BgL_variablez00_bglt BgL_ownerz00_1581;

					{
						obj_t BgL_auxz00_2115;

						{	/* Cfa/struct.scm 39 */
							BgL_objectz00_bglt BgL_auxz00_2116;

							BgL_auxz00_2116 = (BgL_objectz00_bglt) (BgL_nodez00_1576);
							BgL_auxz00_2115 = BGL_OBJECT_WIDENING(BgL_auxz00_2116);
						}
						BgL_ownerz00_1581 =
							(((BgL_prezd2makezd2structzd2appzd2_bglt) CREF(BgL_auxz00_2115))->
							BgL_ownerz00);
					}
					{	/* Cfa/struct.scm 39 */
						BgL_prezd2makezd2structzd2appzd2_bglt BgL_nodez00_1582;

						{	/* Cfa/struct.scm 40 */
							long BgL_arg4825z00_1593;

							{	/* Cfa/struct.scm 40 */
								obj_t BgL_arg4826z00_1594;

								{	/* Cfa/struct.scm 40 */
									obj_t BgL_arg4827z00_1595;

									{	/* Cfa/struct.scm 40 */
										BgL_objectz00_bglt BgL_objectz00_1701;

										BgL_objectz00_1701 =
											(BgL_objectz00_bglt) (BgL_nodez00_1576);
										{	/* Cfa/struct.scm 40 */
											long BgL_arg2646z00_1702;

											{	/* Cfa/struct.scm 40 */
												long BgL_arg2647z00_1703;

												BgL_arg2647z00_1703 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1701);
												BgL_arg2646z00_1702 =
													(BgL_arg2647z00_1703 - OBJECT_TYPE);
											}
											BgL_arg4827z00_1595 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1702));
									}}
									BgL_arg4826z00_1594 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg4827z00_1595);
								}
								BgL_arg4825z00_1593 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg4826z00_1594);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1576), BgL_arg4825z00_1593);
						}
						{	/* Cfa/struct.scm 40 */
							BgL_objectz00_bglt BgL_auxz00_2129;

							BgL_auxz00_2129 = (BgL_objectz00_bglt) (BgL_nodez00_1576);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2129, BFALSE);
						}
						BgL_nodez00_1582 = BgL_nodez00_1576;
						{	/* Cfa/struct.scm 40 */

							{	/* Cfa/struct.scm 41 */
								BgL_appz00_bglt BgL_wnodez00_1583;

								{	/* Cfa/struct.scm 41 */
									BgL_appz00_bglt BgL_obj4684z00_1585;

									BgL_obj4684z00_1585 =
										((BgL_appz00_bglt) (BgL_appz00_bglt) (BgL_nodez00_1582));
									{	/* Cfa/struct.scm 41 */
										obj_t BgL_auxz00_2136;

										BgL_objectz00_bglt BgL_auxz00_2134;

										BgL_auxz00_2136 =
											BGl_wideningzd2makezd2structzd2appzd2zzcfa_info2z00
											(BGl_makezd2emptyzd2approxz00zzcfa_approxz00(),
											BGl_makezd2emptyzd2approxz00zzcfa_approxz00(),
											((long) -1), BgL_ownerz00_1581, BNIL);
										BgL_auxz00_2134 =
											(BgL_objectz00_bglt) (BgL_obj4684z00_1585);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2134, BgL_auxz00_2136);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj4684z00_1585),
										BGl_classzd2numzd2zz__objectz00
										(BGl_makezd2structzd2appz00zzcfa_info2z00));
									BgL_wnodez00_1583 = BgL_obj4684z00_1585;
								}
								{	/* Cfa/struct.scm 47 */
									BgL_approxz00_bglt BgL_arg4817z00_1584;

									BgL_arg4817z00_1584 =
										BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
										(BgL_typez00_bglt) (BGl_za2structza2z00zztype_cachez00),
										(BgL_nodez00_bglt) (BgL_nodez00_1582));
									{	/* Cfa/struct.scm 46 */
										BgL_makezd2structzd2appz00_bglt BgL_obj4588z00_1713;

										BgL_approxz00_bglt BgL_val4587z00_1714;

										BgL_obj4588z00_1713 =
											(BgL_makezd2structzd2appz00_bglt) (BgL_wnodez00_1583);
										BgL_val4587z00_1714 = BgL_arg4817z00_1584;
										{
											obj_t BgL_auxz00_2148;

											{	/* Cfa/struct.scm 46 */
												BgL_objectz00_bglt BgL_auxz00_2149;

												BgL_auxz00_2149 =
													(BgL_objectz00_bglt) (BgL_obj4588z00_1713);
												BgL_auxz00_2148 = BGL_OBJECT_WIDENING(BgL_auxz00_2149);
											}
											return
												((((BgL_makezd2structzd2appz00_bglt)
														CREF(BgL_auxz00_2148))->BgL_approxz00) =
												((BgL_approxz00_bglt) BgL_val4587z00_1714), BUNSPEC);
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
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_structz00()
	{
		AN_OBJECT;
		{	/* Cfa/struct.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 212645849),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4898z00zzcfa_structz00));
		}
	}

#ifdef __cplusplus
}
#endif
