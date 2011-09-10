/*===========================================================================*/
/*   (Cfa/box.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/box.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

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

	typedef struct BgL_prezd2makezd2boxz00_bgl
	{
		char dummy;
	}                          *BgL_prezd2makezd2boxz00_bglt;

	typedef struct BgL_makezd2boxzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_makezd2boxzf2cinfoz20_bglt;

	typedef struct BgL_makezd2boxzf2ozd2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
	}                                *BgL_makezd2boxzf2ozd2cinfozf2_bglt;

	typedef struct BgL_boxzd2refzf2cinfoz20_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                           *BgL_boxzd2refzf2cinfoz20_bglt;

	typedef struct BgL_boxzd2setz12zf2ozd2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                                  *BgL_boxzd2setz12zf2ozd2cinfoze0_bglt;

	typedef struct BgL_boxzd2refzf2ozd2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_boxzd2refzf2ozd2cinfozf2_bglt;


	extern obj_t
		BGl_wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2setupz12zd2boxzd2ref4713zc0zzcfa_boxz00(obj_t, obj_t);
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	extern obj_t
		BGl_wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_boxz00();
	extern obj_t BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_nodezd2setupz12zd2prezd2make4709zc0zzcfa_boxz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_boxz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_nodezd2setupz12zd2makezd2box4707zc0zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcfa_boxz00();
	extern obj_t BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00;
	extern obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern obj_t BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00(BgL_approxz00_bglt);
	extern obj_t BGl_prezd2makezd2boxz00zzcfa_infoz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t
		BGl_wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt);
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_boxz00();
	extern obj_t
		BGl_wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_boxz00 = BUNSPEC;
	static obj_t BGl_cfaz12zd2boxzd2refzf2Ozd2Cinfo4717z32zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_boxz00();
	static obj_t BGl_zc3anonymousza34861ze3z83zzcfa_boxz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_boxz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	static obj_t BGl_zc3anonymousza34873ze3z83zzcfa_boxz00(obj_t, obj_t);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00;
	static obj_t BGl_loosezd2allocz12zd2makezd2bo4721zc0zzcfa_boxz00(obj_t,
		obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern obj_t BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	extern obj_t
		BGl_wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00(BgL_approxz00_bglt);
	static obj_t BGl_cfaz12zd2boxzd2setz12zf2Ozd2Cinf4719z20zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_boxz00();
	static obj_t BGl_nodezd2setupz12zd2boxzd2setz124711zd2zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t BGl_cfaz12zd2makezd2boxzf2Ozd2Cinf4715z32zzcfa_boxz00(obj_t,
		obj_t);
	static obj_t __cnst[1];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4887z00zzcfa_boxz00,
		BgL_bgl_nodeza7d2setupza712za74904za7,
		BGl_nodezd2setupz12zd2makezd2box4707zc0zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4890z00zzcfa_boxz00,
		BgL_bgl_nodeza7d2setupza712za74905za7,
		BGl_nodezd2setupz12zd2boxzd2setz124711zd2zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4889z00zzcfa_boxz00,
		BgL_bgl_nodeza7d2setupza712za74906za7,
		BGl_nodezd2setupz12zd2prezd2make4709zc0zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4891z00zzcfa_boxz00,
		BgL_bgl_nodeza7d2setupza712za74907za7,
		BGl_nodezd2setupz12zd2boxzd2ref4713zc0zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4892z00zzcfa_boxz00,
		BgL_bgl_cfaza712za7d2makeza7d24908za7,
		BGl_cfaz12zd2makezd2boxzf2Ozd2Cinf4715z32zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4894z00zzcfa_boxz00,
		BgL_bgl_cfaza712za7d2boxza7d2r4909za7,
		BGl_cfaz12zd2boxzd2refzf2Ozd2Cinfo4717z32zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4895z00zzcfa_boxz00,
		BgL_bgl_cfaza712za7d2boxza7d2s4910za7,
		BGl_cfaz12zd2boxzd2setz12zf2Ozd2Cinf4719z20zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4896z00zzcfa_boxz00,
		BgL_bgl_looseza7d2allocza7124911z00,
		BGl_loosezd2allocz12zd2makezd2bo4721zc0zzcfa_boxz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4888z00zzcfa_boxz00,
		BgL_bgl_string4888za700za7za7c4912za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string4900z00zzcfa_boxz00,
		BgL_bgl_string4900za700za7za7c4913za7, "cfa_box", 7);
	      DEFINE_STRING(BGl_string4901z00zzcfa_boxz00,
		BgL_bgl_string4901za700za7za7c4914za7, "all ", 4);
	      DEFINE_STRING(BGl_string4893z00zzcfa_boxz00,
		BgL_bgl_string4893za700za7za7c4915za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string4897z00zzcfa_boxz00,
		BgL_bgl_string4897za700za7za7c4916za7, "loose-alloc!", 12);
	      DEFINE_STRING(BGl_string4898z00zzcfa_boxz00,
		BgL_bgl_string4898za700za7za7c4917za7, "box-ref", 7);
	      DEFINE_STRING(BGl_string4899z00zzcfa_boxz00,
		BgL_bgl_string4899za700za7za7c4918za7,
		"Illegal mixed of optimized and unoptimize `make-box'", 52);
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_boxz00(long
		BgL_checksumz00_1798, char *BgL_fromz00_1799)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_boxz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_boxz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_boxz00();
					BGl_cnstzd2initzd2zzcfa_boxz00();
					BGl_importedzd2moduleszd2initz00zzcfa_boxz00();
					BGl_methodzd2initzd2zzcfa_boxz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_boxz00()
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_box");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_box");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_boxz00()
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 15 */
			{	/* Cfa/box.scm 15 */
				obj_t BgL_cportz00_1789;

				BgL_cportz00_1789 =
					bgl_open_input_string(BGl_string4901z00zzcfa_boxz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1790;

					BgL_iz00_1790 = ((long) 0);
				BgL_loopz00_1791:
					if ((BgL_iz00_1790 == ((long) -1)))
						{	/* Cfa/box.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/box.scm 15 */
							{	/* Cfa/box.scm 15 */
								obj_t BgL_arg4903z00_1793;

								{	/* Cfa/box.scm 15 */

									{	/* Cfa/box.scm 15 */
										obj_t BgL_locationz00_1795;

										BgL_locationz00_1795 = BBOOL(((bool_t) 0));
										{	/* Cfa/box.scm 15 */

											BgL_arg4903z00_1793 =
												BGl_readz00zz__readerz00(BgL_cportz00_1789,
												BgL_locationz00_1795);
										}
									}
								}
								{	/* Cfa/box.scm 15 */
									int BgL_auxz00_1815;

									BgL_auxz00_1815 = (int) (BgL_iz00_1790);
									CNST_TABLE_SET(BgL_auxz00_1815, BgL_arg4903z00_1793);
							}}
							{	/* Cfa/box.scm 15 */
								int BgL_auxz00_1796;

								BgL_auxz00_1796 = (int) ((BgL_iz00_1790 - ((long) 1)));
								{
									long BgL_iz00_1820;

									BgL_iz00_1820 = (long) (BgL_auxz00_1796);
									BgL_iz00_1790 = BgL_iz00_1820;
									goto BgL_loopz00_1791;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_boxz00()
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 15 */
			return BUNSPEC;
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_boxz00()
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_boxz00()
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4887z00zzcfa_boxz00,
				BGl_string4888z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2boxz00zzcfa_infoz00, BGl_proc4889z00zzcfa_boxz00,
				BGl_string4888z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4890z00zzcfa_boxz00,
				BGl_string4888z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4891z00zzcfa_boxz00,
				BGl_string4888z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00, BGl_proc4892z00zzcfa_boxz00,
				BGl_string4893z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00, BGl_proc4894z00zzcfa_boxz00,
				BGl_string4893z00zzcfa_boxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00,
				BGl_proc4895z00zzcfa_boxz00, BGl_string4893z00zzcfa_boxz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4896z00zzcfa_boxz00,
				BGl_string4897z00zzcfa_boxz00);
		}
	}



/* loose-alloc!-make-bo4721 */
	obj_t BGl_loosezd2allocz12zd2makezd2bo4721zc0zzcfa_boxz00(obj_t
		BgL_envz00_1759, obj_t BgL_allocz00_1760)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 145 */
			return BUNSPEC;
		}
	}



/* cfa!-box-set!/O-Cinf4719 */
	obj_t BGl_cfaz12zd2boxzd2setz12zf2Ozd2Cinf4719z20zzcfa_boxz00(obj_t
		BgL_envz00_1761, obj_t BgL_nodez00_1762)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 117 */
			{
				BgL_boxzd2setz12zf2ozd2cinfoze0_bglt BgL_nodez00_1671;

				{	/* Cfa/box.scm 118 */
					BgL_approxz00_bglt BgL_auxz00_1830;

					BgL_nodez00_1671 =
						(BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) (BgL_nodez00_1762);
					{	/* Cfa/box.scm 119 */
						BgL_approxz00_bglt BgL_boxzd2approxzd2_1675;

						BgL_approxz00_bglt BgL_valzd2approxzd2_1676;

						{	/* Cfa/box.scm 119 */
							BgL_varz00_bglt BgL_arg4880z00_1689;

							{
								BgL_boxzd2setz12zc0_bglt BgL_auxz00_1831;

								BgL_auxz00_1831 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_1671);
								BgL_arg4880z00_1689 =
									(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_auxz00_1831))->
									BgL_varz00);
							}
							BgL_boxzd2approxzd2_1675 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4880z00_1689));
						}
						{	/* Cfa/box.scm 120 */
							BgL_nodez00_bglt BgL_arg4881z00_1690;

							{
								BgL_boxzd2setz12zc0_bglt BgL_auxz00_1836;

								BgL_auxz00_1836 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_1671);
								BgL_arg4881z00_1690 =
									(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_auxz00_1836))->
									BgL_valuez00);
							}
							BgL_valzd2approxzd2_1676 =
								BGl_cfaz12z12zzcfa_cfaz00(BgL_arg4881z00_1690);
						}
						if (
							(((BgL_approxz00_bglt) CREF(BgL_boxzd2approxzd2_1675))->
								BgL_topzf3zf3))
							{	/* Cfa/box.scm 122 */
								(obj_t) (BGl_loosez12z12zzcfa_loosez00(BgL_valzd2approxzd2_1676,
										CNST_TABLE_REF(((long) 0))));
							}
						else
							{	/* Cfa/box.scm 128 */
								obj_t BgL_zc3anonymousza34873ze3z83_1750;

								BgL_zc3anonymousza34873ze3z83_1750 =
									make_fx_procedure(BGl_zc3anonymousza34873ze3z83zzcfa_boxz00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3anonymousza34873ze3z83_1750,
									(int) (((long) 0)), (obj_t) (BgL_nodez00_1671));
								PROCEDURE_SET(BgL_zc3anonymousza34873ze3z83_1750,
									(int) (((long) 1)), (obj_t) (BgL_valzd2approxzd2_1676));
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BgL_zc3anonymousza34873ze3z83_1750,
									BgL_boxzd2approxzd2_1675);
					}}
					{
						obj_t BgL_auxz00_1855;

						{	/* Cfa/box.scm 137 */
							BgL_objectz00_bglt BgL_auxz00_1856;

							BgL_auxz00_1856 = (BgL_objectz00_bglt) (BgL_nodez00_1671);
							BgL_auxz00_1855 = BGL_OBJECT_WIDENING(BgL_auxz00_1856);
						}
						BgL_auxz00_1830 =
							(((BgL_boxzd2setz12zf2ozd2cinfoze0_bglt) CREF(BgL_auxz00_1855))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_1830);
				}
			}
		}
	}



/* <anonymous:4873> */
	obj_t BGl_zc3anonymousza34873ze3z83zzcfa_boxz00(obj_t BgL_envz00_1763,
		obj_t BgL_boxz00_1766)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 126 */
			{	/* Cfa/box.scm 128 */
				obj_t BgL_nodez00_1764;

				obj_t BgL_valzd2approxzd2_1765;

				BgL_nodez00_1764 = PROCEDURE_REF(BgL_envz00_1763, (int) (((long) 0)));
				BgL_valzd2approxzd2_1765 =
					PROCEDURE_REF(BgL_envz00_1763, (int) (((long) 1)));
				{
					obj_t BgL_boxz00_1679;

					BgL_boxz00_1679 = BgL_boxz00_1766;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_boxz00_1679,
							BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00))
						{	/* Cfa/box.scm 129 */
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_instance4704z00_1682;

							BgL_instance4704z00_1682 =
								(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_boxz00_1679);
							{	/* Cfa/box.scm 130 */
								BgL_approxz00_bglt BgL_arg4875z00_1683;

								{
									obj_t BgL_auxz00_1869;

									{	/* Cfa/box.scm 130 */
										BgL_objectz00_bglt BgL_auxz00_1870;

										BgL_auxz00_1870 =
											(BgL_objectz00_bglt) (BgL_instance4704z00_1682);
										BgL_auxz00_1869 = BGL_OBJECT_WIDENING(BgL_auxz00_1870);
									}
									BgL_arg4875z00_1683 =
										(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
											CREF(BgL_auxz00_1869))->BgL_valuezd2approxzd2);
								}
								return
									(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00
									(BgL_arg4875z00_1683,
										(BgL_approxz00_bglt) (BgL_valzd2approxzd2_1765)));
							}
						}
					else
						{	/* Cfa/box.scm 128 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_boxz00_1679,
									BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00))
								{	/* Cfa/box.scm 131 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string4898z00zzcfa_boxz00,
										BGl_string4899z00zzcfa_boxz00,
										BGl_shapez00zztools_shapez00(BgL_nodez00_1764));
								}
							else
								{	/* Cfa/box.scm 131 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* cfa!-box-ref/O-Cinfo4717 */
	obj_t BGl_cfaz12zd2boxzd2refzf2Ozd2Cinfo4717z32zzcfa_boxz00(obj_t
		BgL_envz00_1767, obj_t BgL_nodez00_1768)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 97 */
			{
				BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_nodez00_1651;

				{	/* Cfa/box.scm 98 */
					BgL_approxz00_bglt BgL_auxz00_1881;

					BgL_nodez00_1651 =
						(BgL_boxzd2refzf2ozd2cinfozf2_bglt) (BgL_nodez00_1768);
					{	/* Cfa/box.scm 99 */
						BgL_approxz00_bglt BgL_boxzd2approxzd2_1655;

						{	/* Cfa/box.scm 99 */
							BgL_varz00_bglt BgL_arg4869z00_1668;

							{
								BgL_boxzd2refzd2_bglt BgL_auxz00_1882;

								BgL_auxz00_1882 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_1651);
								BgL_arg4869z00_1668 =
									(((BgL_boxzd2refzd2_bglt) CREF(BgL_auxz00_1882))->BgL_varz00);
							}
							BgL_boxzd2approxzd2_1655 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg4869z00_1668));
						}
						{	/* Cfa/box.scm 103 */
							obj_t BgL_zc3anonymousza34861ze3z83_1752;

							BgL_zc3anonymousza34861ze3z83_1752 =
								make_fx_procedure(BGl_zc3anonymousza34861ze3z83zzcfa_boxz00,
								(int) (((long) 1)), (int) (((long) 2)));
							PROCEDURE_SET(BgL_zc3anonymousza34861ze3z83_1752,
								(int) (((long) 0)), (obj_t) (BgL_nodez00_1651));
							PROCEDURE_SET(BgL_zc3anonymousza34861ze3z83_1752,
								(int) (((long) 1)), (obj_t) (BgL_nodez00_1651));
							BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
								(BgL_zc3anonymousza34861ze3z83_1752, BgL_boxzd2approxzd2_1655);
					}}
					{
						obj_t BgL_auxz00_1897;

						{	/* Cfa/box.scm 112 */
							BgL_objectz00_bglt BgL_auxz00_1898;

							BgL_auxz00_1898 = (BgL_objectz00_bglt) (BgL_nodez00_1651);
							BgL_auxz00_1897 = BGL_OBJECT_WIDENING(BgL_auxz00_1898);
						}
						BgL_auxz00_1881 =
							(((BgL_boxzd2refzf2ozd2cinfozf2_bglt) CREF(BgL_auxz00_1897))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_1881);
				}
			}
		}
	}



/* <anonymous:4861> */
	obj_t BGl_zc3anonymousza34861ze3z83zzcfa_boxz00(obj_t BgL_envz00_1769,
		obj_t BgL_boxz00_1772)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 101 */
			{	/* Cfa/box.scm 103 */
				obj_t BgL_nodez00_1770;

				obj_t BgL_instance4698z00_1771;

				BgL_nodez00_1770 = PROCEDURE_REF(BgL_envz00_1769, (int) (((long) 0)));
				BgL_instance4698z00_1771 =
					PROCEDURE_REF(BgL_envz00_1769, (int) (((long) 1)));
				{
					obj_t BgL_boxz00_1657;

					BgL_boxz00_1657 = BgL_boxz00_1772;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_boxz00_1657,
							BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00))
						{	/* Cfa/box.scm 104 */
							BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_instance4700z00_1660;

							BgL_instance4700z00_1660 =
								(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_boxz00_1657);
							{	/* Cfa/box.scm 105 */
								BgL_approxz00_bglt BgL_arg4863z00_1661;

								BgL_approxz00_bglt BgL_arg4864z00_1662;

								{	/* Cfa/box.scm 105 */
									BgL_boxzd2refzf2ozd2cinfozf2_bglt BgL_obj4088z00_1738;

									BgL_obj4088z00_1738 =
										(BgL_boxzd2refzf2ozd2cinfozf2_bglt)
										(BgL_instance4698z00_1771);
									{
										obj_t BgL_auxz00_1912;

										{	/* Cfa/box.scm 105 */
											BgL_objectz00_bglt BgL_auxz00_1913;

											BgL_auxz00_1913 =
												(BgL_objectz00_bglt) (BgL_obj4088z00_1738);
											BgL_auxz00_1912 = BGL_OBJECT_WIDENING(BgL_auxz00_1913);
										}
										BgL_arg4863z00_1661 =
											(((BgL_boxzd2refzf2ozd2cinfozf2_bglt)
												CREF(BgL_auxz00_1912))->BgL_approxz00);
									}
								}
								{
									obj_t BgL_auxz00_1917;

									{	/* Cfa/box.scm 105 */
										BgL_objectz00_bglt BgL_auxz00_1918;

										BgL_auxz00_1918 =
											(BgL_objectz00_bglt) (BgL_instance4700z00_1660);
										BgL_auxz00_1917 = BGL_OBJECT_WIDENING(BgL_auxz00_1918);
									}
									BgL_arg4864z00_1662 =
										(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
											CREF(BgL_auxz00_1917))->BgL_valuezd2approxzd2);
								}
								return
									(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00
									(BgL_arg4863z00_1661, BgL_arg4864z00_1662));
							}
						}
					else
						{	/* Cfa/box.scm 103 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_boxz00_1657,
									BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00))
								{	/* Cfa/box.scm 106 */
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string4898z00zzcfa_boxz00,
										BGl_string4899z00zzcfa_boxz00,
										BGl_shapez00zztools_shapez00(BgL_nodez00_1770));
								}
							else
								{	/* Cfa/box.scm 106 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* cfa!-make-box/O-Cinf4715 */
	obj_t BGl_cfaz12zd2makezd2boxzf2Ozd2Cinf4715z32zzcfa_boxz00(obj_t
		BgL_envz00_1773, obj_t BgL_nodez00_1774)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 87 */
			{
				BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_nodez00_1642;

				{	/* Cfa/box.scm 88 */
					BgL_approxz00_bglt BgL_auxz00_1928;

					BgL_nodez00_1642 =
						(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_nodez00_1774);
					{	/* Cfa/box.scm 90 */
						BgL_approxz00_bglt BgL_initzd2valuezd2approxz00_1646;

						{	/* Cfa/box.scm 90 */
							BgL_nodez00_bglt BgL_arg4858z00_1648;

							{
								BgL_makezd2boxzd2_bglt BgL_auxz00_1929;

								BgL_auxz00_1929 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_1642);
								BgL_arg4858z00_1648 =
									(((BgL_makezd2boxzd2_bglt) CREF(BgL_auxz00_1929))->
									BgL_valuez00);
							}
							BgL_initzd2valuezd2approxz00_1646 =
								BGl_cfaz12z12zzcfa_cfaz00(BgL_arg4858z00_1648);
						}
						{	/* Cfa/box.scm 91 */
							BgL_approxz00_bglt BgL_arg4857z00_1647;

							{
								obj_t BgL_auxz00_1933;

								{	/* Cfa/box.scm 91 */
									BgL_objectz00_bglt BgL_auxz00_1934;

									BgL_auxz00_1934 = (BgL_objectz00_bglt) (BgL_nodez00_1642);
									BgL_auxz00_1933 = BGL_OBJECT_WIDENING(BgL_auxz00_1934);
								}
								BgL_arg4857z00_1647 =
									(((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
										CREF(BgL_auxz00_1933))->BgL_valuezd2approxzd2);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg4857z00_1647,
								BgL_initzd2valuezd2approxz00_1646);
						}
						{
							obj_t BgL_auxz00_1939;

							{	/* Cfa/box.scm 92 */
								BgL_objectz00_bglt BgL_auxz00_1940;

								BgL_auxz00_1940 = (BgL_objectz00_bglt) (BgL_nodez00_1642);
								BgL_auxz00_1939 = BGL_OBJECT_WIDENING(BgL_auxz00_1940);
							}
							BgL_auxz00_1928 =
								(((BgL_makezd2boxzf2ozd2cinfozf2_bglt) CREF(BgL_auxz00_1939))->
								BgL_approxz00);
						}
					}
					return (obj_t) (BgL_auxz00_1928);
				}
			}
		}
	}



/* node-setup!-box-ref4713 */
	obj_t BGl_nodezd2setupz12zd2boxzd2ref4713zc0zzcfa_boxz00(obj_t
		BgL_envz00_1775, obj_t BgL_nodez00_1776)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 73 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1625;

				BgL_nodez00_1625 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_1776);
				{	/* Cfa/box.scm 75 */
					BgL_varz00_bglt BgL_arg4847z00_1629;

					BgL_arg4847z00_1629 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1625))->BgL_varz00);
					BGl_nodezd2setupz12zc0zzcfa_setupz00(
						(BgL_nodez00_bglt) (BgL_arg4847z00_1629));
				}
				if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
					{	/* Cfa/box.scm 77 */
						BgL_boxzd2refzd2_bglt BgL_obj4694z00_1631;

						BgL_obj4694z00_1631 = ((BgL_boxzd2refzd2_bglt) BgL_nodez00_1625);
						{	/* Cfa/box.scm 77 */
							obj_t BgL_auxz00_1955;

							BgL_objectz00_bglt BgL_auxz00_1953;

							BgL_auxz00_1955 =
								BGl_wideningzd2boxzd2refzf2Ozd2Cinfoz20zzcfa_infoz00
								(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
									(BGl_za2objza2z00zztype_cachez00)));
							BgL_auxz00_1953 = (BgL_objectz00_bglt) (BgL_obj4694z00_1631);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1953, BgL_auxz00_1955);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj4694z00_1631),
							BGl_classzd2numzd2zz__objectz00
							(BGl_boxzd2refzf2Ozd2Cinfozf2zzcfa_infoz00));
						return (obj_t) (BgL_obj4694z00_1631);
					}
				else
					{	/* Cfa/box.scm 76 */
						{	/* Cfa/box.scm 80 */
							BgL_boxzd2refzd2_bglt BgL_obj4695z00_1635;

							BgL_obj4695z00_1635 = ((BgL_boxzd2refzd2_bglt) BgL_nodez00_1625);
							{	/* Cfa/box.scm 80 */
								obj_t BgL_auxz00_1967;

								BgL_objectz00_bglt BgL_auxz00_1965;

								BgL_auxz00_1967 =
									BGl_wideningzd2boxzd2refzf2Cinfozf2zzcfa_infoz00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2objza2z00zztype_cachez00)));
								BgL_auxz00_1965 = (BgL_objectz00_bglt) (BgL_obj4695z00_1635);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1965, BgL_auxz00_1967);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4695z00_1635),
								BGl_classzd2numzd2zz__objectz00
								(BGl_boxzd2refzf2Cinfoz20zzcfa_infoz00));
							BgL_obj4695z00_1635;
						}
						{	/* Cfa/box.scm 82 */
							BgL_approxz00_bglt BgL_arg4855z00_1639;

							{	/* Cfa/box.scm 82 */
								BgL_boxzd2refzf2cinfoz20_bglt BgL_obj4038z00_1732;

								BgL_obj4038z00_1732 =
									(BgL_boxzd2refzf2cinfoz20_bglt) (BgL_nodez00_1625);
								{
									obj_t BgL_auxz00_1976;

									{	/* Cfa/box.scm 82 */
										BgL_objectz00_bglt BgL_auxz00_1977;

										BgL_auxz00_1977 =
											(BgL_objectz00_bglt) (BgL_obj4038z00_1732);
										BgL_auxz00_1976 = BGL_OBJECT_WIDENING(BgL_auxz00_1977);
									}
									BgL_arg4855z00_1639 =
										(((BgL_boxzd2refzf2cinfoz20_bglt) CREF(BgL_auxz00_1976))->
										BgL_approxz00);
								}
							}
							return
								BGl_approxzd2setzd2topz12z12zzcfa_approxz00
								(BgL_arg4855z00_1639);
						}
					}
			}
		}
	}



/* node-setup!-box-set!4711 */
	obj_t BGl_nodezd2setupz12zd2boxzd2setz124711zd2zzcfa_boxz00(obj_t
		BgL_envz00_1777, obj_t BgL_nodez00_1778)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 60 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1608;

				{	/* Cfa/box.scm 61 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_1983;

					BgL_nodez00_1608 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_1778);
					{	/* Cfa/box.scm 62 */
						BgL_varz00_bglt BgL_arg4836z00_1612;

						BgL_arg4836z00_1612 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1608))->BgL_varz00);
						BGl_nodezd2setupz12zc0zzcfa_setupz00(
							(BgL_nodez00_bglt) (BgL_arg4836z00_1612));
					}
					{	/* Cfa/box.scm 63 */
						BgL_nodez00_bglt BgL_arg4837z00_1613;

						BgL_arg4837z00_1613 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1608))->
							BgL_valuez00);
						BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_arg4837z00_1613);
					}
					if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 1)))
						{	/* Cfa/box.scm 65 */
							BgL_boxzd2setz12zc0_bglt BgL_obj4690z00_1615;

							BgL_obj4690z00_1615 =
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1608);
							{	/* Cfa/box.scm 65 */
								obj_t BgL_auxz00_1995;

								BgL_objectz00_bglt BgL_auxz00_1993;

								BgL_auxz00_1995 =
									BGl_wideningzd2boxzd2setz12zf2Ozd2Cinfoz32zzcfa_infoz00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2unspecza2z00zztype_cachez00)));
								BgL_auxz00_1993 = (BgL_objectz00_bglt) (BgL_obj4690z00_1615);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_1993, BgL_auxz00_1995);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4690z00_1615),
								BGl_classzd2numzd2zz__objectz00
								(BGl_boxzd2setz12zf2Ozd2Cinfoze0zzcfa_infoz00));
							BgL_auxz00_1983 = BgL_obj4690z00_1615;
						}
					else
						{	/* Cfa/box.scm 67 */
							BgL_boxzd2setz12zc0_bglt BgL_obj4691z00_1619;

							BgL_obj4691z00_1619 =
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_1608);
							{	/* Cfa/box.scm 67 */
								obj_t BgL_auxz00_2006;

								BgL_objectz00_bglt BgL_auxz00_2004;

								BgL_auxz00_2006 =
									BGl_wideningzd2boxzd2setz12zf2Cinfoze0zzcfa_infoz00
									(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
										(BGl_za2unspecza2z00zztype_cachez00)));
								BgL_auxz00_2004 = (BgL_objectz00_bglt) (BgL_obj4691z00_1619);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2004, BgL_auxz00_2006);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_obj4691z00_1619),
								BGl_classzd2numzd2zz__objectz00
								(BGl_boxzd2setz12zf2Cinfoz32zzcfa_infoz00));
							BgL_auxz00_1983 = BgL_obj4691z00_1619;
						}
					return (obj_t) (BgL_auxz00_1983);
				}
			}
		}
	}



/* node-setup!-pre-make4709 */
	obj_t BGl_nodezd2setupz12zd2prezd2make4709zc0zzcfa_boxz00(obj_t
		BgL_envz00_1779, obj_t BgL_nodez00_1780)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 46 */
			{
				BgL_prezd2makezd2boxz00_bglt BgL_nodez00_1589;

				BgL_nodez00_1589 = (BgL_prezd2makezd2boxz00_bglt) (BgL_nodez00_1780);
				{	/* Cfa/box.scm 48 */
					BgL_nodez00_bglt BgL_arg4826z00_1593;

					{
						BgL_makezd2boxzd2_bglt BgL_auxz00_2016;

						BgL_auxz00_2016 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_1589);
						BgL_arg4826z00_1593 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_auxz00_2016))->BgL_valuez00);
					}
					BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_arg4826z00_1593);
				}
				{	/* Cfa/box.scm 49 */
					BgL_prezd2makezd2boxz00_bglt BgL_nodez00_1594;

					{	/* Cfa/box.scm 49 */
						long BgL_arg4832z00_1603;

						{	/* Cfa/box.scm 49 */
							obj_t BgL_arg4833z00_1604;

							{	/* Cfa/box.scm 49 */
								obj_t BgL_arg4834z00_1605;

								{	/* Cfa/box.scm 49 */
									BgL_objectz00_bglt BgL_objectz00_1703;

									BgL_objectz00_1703 = (BgL_objectz00_bglt) (BgL_nodez00_1589);
									{	/* Cfa/box.scm 49 */
										long BgL_arg2646z00_1704;

										{	/* Cfa/box.scm 49 */
											long BgL_arg2647z00_1705;

											BgL_arg2647z00_1705 =
												BGL_OBJECT_CLASS_NUM(BgL_objectz00_1703);
											BgL_arg2646z00_1704 = (BgL_arg2647z00_1705 - OBJECT_TYPE);
										}
										BgL_arg4834z00_1605 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											(int) (BgL_arg2646z00_1704));
								}}
								BgL_arg4833z00_1604 =
									BGl_classzd2superzd2zz__objectz00(BgL_arg4834z00_1605);
							}
							BgL_arg4832z00_1603 =
								BGl_classzd2numzd2zz__objectz00(BgL_arg4833z00_1604);
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_nodez00_1589), BgL_arg4832z00_1603);
					}
					{	/* Cfa/box.scm 49 */
						BgL_objectz00_bglt BgL_auxz00_2029;

						BgL_auxz00_2029 = (BgL_objectz00_bglt) (BgL_nodez00_1589);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2029, BFALSE);
					}
					BgL_nodez00_1594 = BgL_nodez00_1589;
					{	/* Cfa/box.scm 49 */

						{	/* Cfa/box.scm 50 */
							BgL_makezd2boxzd2_bglt BgL_nodez00_1595;

							{	/* Cfa/box.scm 50 */
								BgL_makezd2boxzd2_bglt BgL_obj4687z00_1597;

								BgL_obj4687z00_1597 =
									((BgL_makezd2boxzd2_bglt)
									(BgL_makezd2boxzd2_bglt) (BgL_nodez00_1594));
								{	/* Cfa/box.scm 50 */
									obj_t BgL_auxz00_2036;

									BgL_objectz00_bglt BgL_auxz00_2034;

									BgL_auxz00_2036 =
										BGl_wideningzd2makezd2boxzf2Ozd2Cinfoz20zzcfa_infoz00
										(BGl_makezd2typezd2approxz00zzcfa_approxz00(
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00)),
										BGl_makezd2emptyzd2approxz00zzcfa_approxz00());
									BgL_auxz00_2034 = (BgL_objectz00_bglt) (BgL_obj4687z00_1597);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_2034, BgL_auxz00_2036);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj4687z00_1597),
									BGl_classzd2numzd2zz__objectz00
									(BGl_makezd2boxzf2Ozd2Cinfozf2zzcfa_infoz00));
								BgL_nodez00_1595 = BgL_obj4687z00_1597;
							}
							{	/* Cfa/box.scm 55 */
								BgL_approxz00_bglt BgL_arg4827z00_1596;

								BgL_arg4827z00_1596 =
									BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
									(BgL_nodez00_bglt) (BgL_nodez00_1595));
								{	/* Cfa/box.scm 53 */
									BgL_makezd2boxzf2ozd2cinfozf2_bglt BgL_obj3988z00_1715;

									BgL_approxz00_bglt BgL_val3986z00_1716;

									BgL_obj3988z00_1715 =
										(BgL_makezd2boxzf2ozd2cinfozf2_bglt) (BgL_nodez00_1595);
									BgL_val3986z00_1716 = BgL_arg4827z00_1596;
									{
										obj_t BgL_auxz00_2049;

										{	/* Cfa/box.scm 53 */
											BgL_objectz00_bglt BgL_auxz00_2050;

											BgL_auxz00_2050 =
												(BgL_objectz00_bglt) (BgL_obj3988z00_1715);
											BgL_auxz00_2049 = BGL_OBJECT_WIDENING(BgL_auxz00_2050);
										}
										return
											((((BgL_makezd2boxzf2ozd2cinfozf2_bglt)
													CREF(BgL_auxz00_2049))->BgL_approxz00) =
											((BgL_approxz00_bglt) BgL_val3986z00_1716), BUNSPEC);
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* node-setup!-make-box4707 */
	obj_t BGl_nodezd2setupz12zd2makezd2box4707zc0zzcfa_boxz00(obj_t
		BgL_envz00_1781, obj_t BgL_nodez00_1782)
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 36 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1577;

				BgL_nodez00_1577 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_1782);
				{	/* Cfa/box.scm 38 */
					BgL_nodez00_bglt BgL_arg4820z00_1581;

					BgL_arg4820z00_1581 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1577))->BgL_valuez00);
					BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_arg4820z00_1581);
				}
				{	/* Cfa/box.scm 39 */
					BgL_makezd2boxzd2_bglt BgL_obj4683z00_1582;

					BgL_obj4683z00_1582 = ((BgL_makezd2boxzd2_bglt) BgL_nodez00_1577);
					{	/* Cfa/box.scm 39 */
						obj_t BgL_auxz00_2060;

						BgL_objectz00_bglt BgL_auxz00_2058;

						BgL_auxz00_2060 =
							BGl_wideningzd2makezd2boxzf2Cinfozf2zzcfa_infoz00
							(BGl_makezd2typezd2approxz00zzcfa_approxz00((BgL_typez00_bglt)
								(BGl_za2objza2z00zztype_cachez00)));
						BgL_auxz00_2058 = (BgL_objectz00_bglt) (BgL_obj4683z00_1582);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2058, BgL_auxz00_2060);
					}
					BGL_OBJECT_CLASS_NUM_SET(
						(BgL_objectz00_bglt) (BgL_obj4683z00_1582),
						BGl_classzd2numzd2zz__objectz00
						(BGl_makezd2boxzf2Cinfoz20zzcfa_infoz00));
					BgL_obj4683z00_1582;
				}
				{	/* Cfa/box.scm 41 */
					BgL_approxz00_bglt BgL_arg4824z00_1586;

					{	/* Cfa/box.scm 41 */
						BgL_makezd2boxzf2cinfoz20_bglt BgL_obj3955z00_1701;

						BgL_obj3955z00_1701 =
							(BgL_makezd2boxzf2cinfoz20_bglt) (BgL_nodez00_1577);
						{
							obj_t BgL_auxz00_2069;

							{	/* Cfa/box.scm 41 */
								BgL_objectz00_bglt BgL_auxz00_2070;

								BgL_auxz00_2070 = (BgL_objectz00_bglt) (BgL_obj3955z00_1701);
								BgL_auxz00_2069 = BGL_OBJECT_WIDENING(BgL_auxz00_2070);
							}
							BgL_arg4824z00_1586 =
								(((BgL_makezd2boxzf2cinfoz20_bglt) CREF(BgL_auxz00_2069))->
								BgL_approxz00);
						}
					}
					return
						BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_arg4824z00_1586);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_boxz00()
	{
		AN_OBJECT;
		{	/* Cfa/box.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 212645849),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_closurez00(((long) 416995938),
				BSTRING_TO_STRING(BGl_string4900z00zzcfa_boxz00));
		}
	}

#ifdef __cplusplus
}
#endif
