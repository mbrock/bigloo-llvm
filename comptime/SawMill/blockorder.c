/*===========================================================================*/
/*   (SawMill/blockorder.scm)                                                */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/blockorder.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_lastz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                  *BgL_rtl_lastz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_donez00_bgl
	{
		char dummy;
	}              *BgL_donez00_bglt;

	typedef struct BgL_rdonez00_bgl
	{
		char dummy;
	}               *BgL_rdonez00_bglt;

	typedef struct BgL_dfsz00_bgl
	{
		int BgL_nz00;
	}             *BgL_dfsz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static BgL_rdonez00_bglt BGl_wideningzd2rdonezd2zzsaw_blockorderz00();
	static bool_t BGl_lengthuncolsucczc3zd3zf3ze3zzsaw_blockorderz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__blockzd2orderingzd2zzsaw_blockorderz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_predecessorsz00zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_za2blockorderingza2z00zzsaw_blockorderz00 = BUNSPEC;
	static BgL_donez00_bglt BGl_wideningzd2donezd2zzsaw_blockorderz00();
	static BgL_donez00_bglt BGl_donezd2nilzd2zzsaw_blockorderz00();
	extern obj_t BGl_rtl_returnz00zzsaw_defsz00;
	static obj_t BGl_objectzd2ze3structzd2done4104ze3zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2ze3structzd2rdone4100ze3zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_blockorderz00();
	static bool_t BGl_dfsz72z72zzsaw_blockorderz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34163ze3z83zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34172ze3z83zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4102z83zzsaw_blockorderz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4107z83zzsaw_blockorderz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4098z83zzsaw_blockorderz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzsaw_blockorderz00();
	static obj_t BGl__donezd2nilzd2zzsaw_blockorderz00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00 = BUNSPEC;
	static obj_t BGl_dfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static bool_t BGl_dfsz72z72z00zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl__rdonezf3zf3zzsaw_blockorderz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_dfsz00zzsaw_blockorderz00 = BUNSPEC;
	static bool_t BGl_visitz00zzsaw_blockorderz00(obj_t, BgL_blockz00_bglt);
	static obj_t BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00 = BUNSPEC;
	static BgL_dfsz00_bglt BGl_dfszd2nilzd2zzsaw_blockorderz00();
	static BgL_rdonez00_bglt BGl_rdonezd2nilzd2zzsaw_blockorderz00();
	static obj_t BGl_methodzd2initzd2zzsaw_blockorderz00();
	static obj_t BGl__dfszf3zf3zzsaw_blockorderz00(obj_t, obj_t);
	static obj_t BGl_donez00zzsaw_blockorderz00 = BUNSPEC;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_blockorderz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_blockorderz00();
	static obj_t BGl__z52allocatezd2rdonez80zzsaw_blockorderz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_blockorderz00();
	static bool_t BGl_dfsz72z72z72z72zzsaw_blockorderz00(obj_t, obj_t);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl__z52allocatezd2dfsz80zzsaw_blockorderz00(obj_t);
	static obj_t BGl__dfszd2nilzd2zzsaw_blockorderz00(obj_t);
	static obj_t BGl__z52allocatezd2donez80zzsaw_blockorderz00(obj_t);
	static obj_t BGl_rdonez00zzsaw_blockorderz00 = BUNSPEC;
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	static obj_t BGl__rdonezd2nilzd2zzsaw_blockorderz00(obj_t);
	static long BGl_lengthuncolsuccz00zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl__donezf3zf3zzsaw_blockorderz00(obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	static obj_t BGl_findzd2exitzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_rdfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_blockorderz00();
	static obj_t BGl__lengthuncolsucczc3zd3zf3ze3zzsaw_blockorderz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_blockorderz00();
	static obj_t BGl_objectzd2ze3structzd2dfs4096ze3zzsaw_blockorderz00(obj_t,
		obj_t);
	static obj_t BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00 = BUNSPEC;
	static obj_t __cnst[4];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4390z00zzsaw_blockorderz00,
		BgL_bgl_za7c3anonymousza7a344407z00,
		BGl_zc3anonymousza34163ze3z83zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4391z00zzsaw_blockorderz00,
		BgL_bgl_za7c3anonymousza7a344408z00,
		BGl_zc3anonymousza34172ze3z83zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4392z00zzsaw_blockorderz00,
		BgL_bgl_objectza7d2za7e3stru4409z00,
		BGl_objectzd2ze3structzd2dfs4096ze3zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4394z00zzsaw_blockorderz00,
		BgL_bgl_structza7b2objectza74410z00,
		BGl_structzb2objectzd2ze3objec4098z83zzsaw_blockorderz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4396z00zzsaw_blockorderz00,
		BgL_bgl_objectza7d2za7e3stru4411z00,
		BGl_objectzd2ze3structzd2rdone4100ze3zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4397z00zzsaw_blockorderz00,
		BgL_bgl_structza7b2objectza74412z00,
		BGl_structzb2objectzd2ze3objec4102z83zzsaw_blockorderz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4398z00zzsaw_blockorderz00,
		BgL_bgl_objectza7d2za7e3stru4413z00,
		BGl_objectzd2ze3structzd2done4104ze3zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4399z00zzsaw_blockorderz00,
		BgL_bgl_structza7b2objectza74414z00,
		BGl_structzb2objectzd2ze3objec4107z83zzsaw_blockorderz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_rdonezd2nilzd2envz00zzsaw_blockorderz00,
		BgL_bgl__rdoneza7d2nilza7d2za74415za7,
		BGl__rdonezd2nilzd2zzsaw_blockorderz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4400z00zzsaw_blockorderz00,
		BgL_bgl_string4400za700za7za7s4416za7, "saw_blockorder", 14);
	      DEFINE_STRING(BGl_string4401z00zzsaw_blockorderz00,
		BgL_bgl_string4401za700za7za7s4417za7, "dfs rdone done reverse-dfs ", 27);
	      DEFINE_STRING(BGl_string4393z00zzsaw_blockorderz00,
		BgL_bgl_string4393za700za7za7s4418za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4395z00zzsaw_blockorderz00,
		BgL_bgl_string4395za700za7za7s4419za7, "struct+object->object::object", 29);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2dfszd2envz52zzsaw_blockorderz00,
		BgL_bgl__za752allocateza7d2d4420z00,
		BGl__z52allocatezd2dfsz80zzsaw_blockorderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_lengthuncolsucczc3zd3zf3zd2envz31zzsaw_blockorderz00,
		BgL_bgl__lengthuncolsucc4421z00,
		BGl__lengthuncolsucczc3zd3zf3ze3zzsaw_blockorderz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_donezf3zd2envz21zzsaw_blockorderz00,
		BgL_bgl__doneza7f3za7f3za7za7saw4422z00, BGl__donezf3zf3zzsaw_blockorderz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_donezd2nilzd2envz00zzsaw_blockorderz00,
		BgL_bgl__doneza7d2nilza7d2za7za74423z00,
		BGl__donezd2nilzd2zzsaw_blockorderz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2orderingzd2envz00zzsaw_blockorderz00,
		BgL_bgl__blockza7d2orderin4424za7,
		BGl__blockzd2orderingzd2zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2donezd2envz52zzsaw_blockorderz00,
		BgL_bgl__za752allocateza7d2d4425z00,
		BGl__z52allocatezd2donez80zzsaw_blockorderz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_dfszf3zd2envz21zzsaw_blockorderz00,
		BgL_bgl__dfsza7f3za7f3za7za7saw_4426z00, BGl__dfszf3zf3zzsaw_blockorderz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_rdonezf3zd2envz21zzsaw_blockorderz00,
		BgL_bgl__rdoneza7f3za7f3za7za7sa4427z00,
		BGl__rdonezf3zf3zzsaw_blockorderz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_dfszd2nilzd2envz00zzsaw_blockorderz00,
		BgL_bgl__dfsza7d2nilza7d2za7za7s4428z00,
		BGl__dfszd2nilzd2zzsaw_blockorderz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2rdonezd2envz52zzsaw_blockorderz00,
		BgL_bgl__za752allocateza7d2r4429z00,
		BGl__z52allocatezd2rdonez80zzsaw_blockorderz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_blockorderz00(long
		BgL_checksumz00_2327, char *BgL_fromz00_2328)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_blockorderz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_blockorderz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_blockorderz00();
					BGl_cnstzd2initzd2zzsaw_blockorderz00();
					BGl_importedzd2moduleszd2initz00zzsaw_blockorderz00();
					BGl_objectzd2initzd2zzsaw_blockorderz00();
					BGl_methodzd2initzd2zzsaw_blockorderz00();
					BGl_toplevelzd2initzd2zzsaw_blockorderz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_blockorder");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_blockorder");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			{	/* SawMill/blockorder.scm 1 */
				obj_t BgL_cportz00_2295;

				BgL_cportz00_2295 =
					bgl_open_input_string(BGl_string4401z00zzsaw_blockorderz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2296;

					BgL_iz00_2296 = ((long) 3);
				BgL_loopz00_2297:
					if ((BgL_iz00_2296 == ((long) -1)))
						{	/* SawMill/blockorder.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/blockorder.scm 1 */
							{	/* SawMill/blockorder.scm 1 */
								obj_t BgL_arg4403z00_2299;

								{	/* SawMill/blockorder.scm 1 */

									{	/* SawMill/blockorder.scm 1 */
										obj_t BgL_locationz00_2301;

										BgL_locationz00_2301 = BBOOL(((bool_t) 0));
										{	/* SawMill/blockorder.scm 1 */

											BgL_arg4403z00_2299 =
												BGl_readz00zz__readerz00(BgL_cportz00_2295,
												BgL_locationz00_2301);
										}
									}
								}
								{	/* SawMill/blockorder.scm 1 */
									int BgL_auxz00_2349;

									BgL_auxz00_2349 = (int) (BgL_iz00_2296);
									CNST_TABLE_SET(BgL_auxz00_2349, BgL_arg4403z00_2299);
							}}
							{	/* SawMill/blockorder.scm 1 */
								int BgL_auxz00_2302;

								BgL_auxz00_2302 = (int) ((BgL_iz00_2296 - ((long) 1)));
								{
									long BgL_iz00_2354;

									BgL_iz00_2354 = (long) (BgL_auxz00_2302);
									BgL_iz00_2296 = BgL_iz00_2354;
									goto BgL_loopz00_2297;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			return (BGl_za2blockorderingza2z00zzsaw_blockorderz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}
	}



/* block-ordering */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_1)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 11 */
			{	/* SawMill/blockorder.scm 12 */
				obj_t BgL_casezd2valuezd2_1132;

				BgL_casezd2valuezd2_1132 =
					BGl_za2blockorderingza2z00zzsaw_blockorderz00;
				if ((BgL_casezd2valuezd2_1132 == CNST_TABLE_REF(((long) 0))))
					{	/* SawMill/blockorder.scm 12 */
						return BGl_rdfszd2orderingzd2zzsaw_blockorderz00(BgL_bz00_1);
					}
				else
					{	/* SawMill/blockorder.scm 12 */
						return BGl_dfszd2orderingzd2zzsaw_blockorderz00(BgL_bz00_1);
					}
			}
		}
	}



/* _block-ordering */
	obj_t BGl__blockzd2orderingzd2zzsaw_blockorderz00(obj_t BgL_envz00_2234,
		obj_t BgL_bz00_2235)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 11 */
			return
				BGl_blockzd2orderingzd2zzsaw_blockorderz00(
				(BgL_blockz00_bglt) (BgL_bz00_2235));
		}
	}



/* dfs-ordering */
	obj_t BGl_dfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_2)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 19 */
			{	/* SawMill/blockorder.scm 20 */
				obj_t BgL_rz00_1134;

				BgL_rz00_1134 = MAKE_CELL(BNIL);
				BGl_dfsz72z72z72z72zzsaw_blockorderz00(BgL_rz00_1134,
					(obj_t) (BgL_bz00_2));
				return bgl_reverse_bang(CELL_REF(BgL_rz00_1134));
			}
		}
	}



/* dfs''' */
	bool_t BGl_dfsz72z72z72z72zzsaw_blockorderz00(obj_t BgL_rz00_2293,
		obj_t BgL_bz00_1136)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 21 */
			{	/* SawMill/blockorder.scm 22 */
				BgL_blockz00_bglt BgL_obj4063z00_1138;

				BgL_obj4063z00_1138 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1136));
				{	/* SawMill/blockorder.scm 22 */
					BgL_donez00_bglt BgL_arg4110z00_1139;

					BgL_arg4110z00_1139 = BGl_wideningzd2donezd2zzsaw_blockorderz00();
					{	/* SawMill/blockorder.scm 22 */
						obj_t BgL_auxz00_2372;

						BgL_objectz00_bglt BgL_auxz00_2370;

						BgL_auxz00_2372 = (obj_t) (BgL_arg4110z00_1139);
						BgL_auxz00_2370 = (BgL_objectz00_bglt) (BgL_obj4063z00_1138);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2370, BgL_auxz00_2372);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4063z00_1138),
					BGl_classzd2numzd2zz__objectz00(BGl_donez00zzsaw_blockorderz00));
				BgL_obj4063z00_1138;
			}
			{	/* SawMill/blockorder.scm 23 */
				obj_t BgL_auxz00_2294;

				BgL_auxz00_2294 = MAKE_PAIR(BgL_bz00_1136, CELL_REF(BgL_rz00_2293));
				CELL_SET(BgL_rz00_2293, BgL_auxz00_2294);
			}
			{	/* SawMill/blockorder.scm 24 */
				obj_t BgL_g4076z00_1141;

				{
					BgL_blockz00_bglt BgL_auxz00_2379;

					BgL_auxz00_2379 = (BgL_blockz00_bglt) (BgL_bz00_1136);
					BgL_g4076z00_1141 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2379))->BgL_succsz00);
				}
				{
					obj_t BgL_l4074z00_1143;

					BgL_l4074z00_1143 = BgL_g4076z00_1141;
				BgL_zc3anonymousza34112ze3z83_1144:
					if (PAIRP(BgL_l4074z00_1143))
						{	/* SawMill/blockorder.scm 25 */
							{	/* SawMill/blockorder.scm 24 */
								obj_t BgL_sz00_1146;

								BgL_sz00_1146 = CAR(BgL_l4074z00_1143);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1146,
										BGl_donez00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 24 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 24 */
										BGl_dfsz72z72z72z72zzsaw_blockorderz00(BgL_rz00_2293,
											BgL_sz00_1146);
									}
							}
							{
								obj_t BgL_l4074z00_2388;

								BgL_l4074z00_2388 = CDR(BgL_l4074z00_1143);
								BgL_l4074z00_1143 = BgL_l4074z00_2388;
								goto BgL_zc3anonymousza34112ze3z83_1144;
							}
						}
					else
						{	/* SawMill/blockorder.scm 25 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* rdfs-ordering */
	obj_t BGl_rdfszd2orderingzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_3)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 32 */
			{	/* SawMill/blockorder.scm 33 */
				obj_t BgL_rz00_1151;

				BgL_rz00_1151 = MAKE_CELL(BNIL);
				{	/* SawMill/blockorder.scm 41 */
					obj_t BgL_g4082z00_1153;

					BgL_g4082z00_1153 = BGl_findzd2exitzd2zzsaw_blockorderz00(BgL_bz00_3);
					{
						obj_t BgL_l4080z00_1155;

						BgL_l4080z00_1155 = BgL_g4082z00_1153;
					BgL_zc3anonymousza34116ze3z83_1156:
						if (PAIRP(BgL_l4080z00_1155))
							{	/* SawMill/blockorder.scm 41 */
								{	/* SawMill/blockorder.scm 41 */
									obj_t BgL_sz00_1158;

									BgL_sz00_1158 = CAR(BgL_l4080z00_1155);
									if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1158,
											BGl_rdonez00zzsaw_blockorderz00))
										{	/* SawMill/blockorder.scm 41 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/blockorder.scm 41 */
											BGl_visitz00zzsaw_blockorderz00(BgL_rz00_1151,
												(BgL_blockz00_bglt) (BgL_sz00_1158));
										}
								}
								{
									obj_t BgL_l4080z00_2398;

									BgL_l4080z00_2398 = CDR(BgL_l4080z00_1155);
									BgL_l4080z00_1155 = BgL_l4080z00_2398;
									goto BgL_zc3anonymousza34116ze3z83_1156;
								}
							}
						else
							{	/* SawMill/blockorder.scm 41 */
								((bool_t) 1);
							}
					}
				}
				BGl_dfsz72z72z00zzsaw_blockorderz00(BgL_rz00_1151,
					(obj_t) (BgL_bz00_3));
				{
					obj_t BgL_lz00_1182;

					obj_t BgL_prevz00_1183;

					obj_t BgL_lastfailz00_1184;

					BgL_lz00_1182 = CELL_REF(BgL_rz00_1151);
					BgL_prevz00_1183 = BNIL;
					BgL_lastfailz00_1184 = BNIL;
				BgL_zc3anonymousza34128ze3z83_1185:
					{	/* SawMill/blockorder.scm 49 */
						obj_t BgL_xz00_1186;

						BgL_xz00_1186 = CAR(BgL_lz00_1182);
						if ((BgL_xz00_1186 == (obj_t) (BgL_bz00_3)))
							{	/* SawMill/blockorder.scm 50 */
								if (NULLP(BgL_prevz00_1183))
									{	/* SawMill/blockorder.scm 51 */
										BFALSE;
									}
								else
									{	/* SawMill/blockorder.scm 52 */
										obj_t BgL_endz00_1189;

										BgL_endz00_1189 =
											BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
											(BgL_lz00_1182);
										{	/* SawMill/blockorder.scm 53 */
											bool_t BgL_testz00_2409;

											if (NULLP(BgL_lastfailz00_1184))
												{	/* SawMill/blockorder.scm 53 */
													BgL_testz00_2409 = ((bool_t) 1);
												}
											else
												{	/* SawMill/blockorder.scm 53 */
													BgL_testz00_2409 =
														(BgL_prevz00_1183 == BgL_lastfailz00_1184);
												}
											if (BgL_testz00_2409)
												{	/* SawMill/blockorder.scm 53 */
													{	/* SawMill/blockorder.scm 54 */
														obj_t BgL_objz00_2029;

														BgL_objz00_2029 = CELL_REF(BgL_rz00_1151);
														SET_CDR(BgL_endz00_1189, BgL_objz00_2029);
													}
													SET_CDR(BgL_prevz00_1183, BNIL);
												}
											else
												{	/* SawMill/blockorder.scm 53 */
													{	/* SawMill/blockorder.scm 56 */
														obj_t BgL_auxz00_2415;

														BgL_auxz00_2415 = CDR(BgL_lastfailz00_1184);
														SET_CDR(BgL_endz00_1189, BgL_auxz00_2415);
													}
													{	/* SawMill/blockorder.scm 57 */
														obj_t BgL_pairz00_2035;

														obj_t BgL_objz00_2036;

														BgL_pairz00_2035 = BgL_prevz00_1183;
														BgL_objz00_2036 = CELL_REF(BgL_rz00_1151);
														SET_CDR(BgL_pairz00_2035, BgL_objz00_2036);
													}
													SET_CDR(BgL_lastfailz00_1184, BNIL);
												}
										}
									}
								return BgL_lz00_1182;
							}
						else
							{	/* SawMill/blockorder.scm 60 */
								BgL_rtl_funz00_bglt BgL_funz00_1193;

								{	/* SawMill/blockorder.scm 60 */
									BgL_rtl_insz00_bglt BgL_obj3906z00_2041;

									{	/* SawMill/blockorder.scm 60 */
										obj_t BgL_auxz00_2420;

										{	/* SawMill/blockorder.scm 60 */
											obj_t BgL_auxz00_2421;

											{	/* SawMill/blockorder.scm 60 */
												obj_t BgL_auxz00_2422;

												{
													BgL_blockz00_bglt BgL_auxz00_2423;

													BgL_auxz00_2423 = (BgL_blockz00_bglt) (BgL_xz00_1186);
													BgL_auxz00_2422 =
														(((BgL_blockz00_bglt) CREF(BgL_auxz00_2423))->
														BgL_firstz00);
												}
												BgL_auxz00_2421 =
													BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
													(BgL_auxz00_2422);
											}
											BgL_auxz00_2420 = CAR(BgL_auxz00_2421);
										}
										BgL_obj3906z00_2041 =
											(BgL_rtl_insz00_bglt) (BgL_auxz00_2420);
									}
									BgL_funz00_1193 =
										(((BgL_rtl_insz00_bglt) CREF(BgL_obj3906z00_2041))->
										BgL_funz00);
								}
								{	/* SawMill/blockorder.scm 61 */
									bool_t BgL_testz00_2430;

									{	/* SawMill/blockorder.scm 61 */
										bool_t BgL_testz00_2431;

										{	/* SawMill/blockorder.scm 61 */
											obj_t BgL_obj3296z00_2042;

											BgL_obj3296z00_2042 = (obj_t) (BgL_funz00_1193);
											BgL_testz00_2431 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj3296z00_2042,
												BGl_rtl_lastz00zzsaw_defsz00);
										}
										if (BgL_testz00_2431)
											{	/* SawMill/blockorder.scm 61 */
												obj_t BgL_obj3312z00_2043;

												BgL_obj3312z00_2043 =
													(obj_t) ((BgL_rtl_lastz00_bglt) (BgL_funz00_1193));
												BgL_testz00_2430 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj3312z00_2043,
													BGl_rtl_returnz00zzsaw_defsz00);
											}
										else
											{	/* SawMill/blockorder.scm 61 */
												BgL_testz00_2430 = ((bool_t) 1);
											}
									}
									if (BgL_testz00_2430)
										{
											obj_t BgL_prevz00_2439;

											obj_t BgL_lz00_2437;

											BgL_lz00_2437 = CDR(BgL_lz00_1182);
											BgL_prevz00_2439 = BgL_lz00_1182;
											BgL_prevz00_1183 = BgL_prevz00_2439;
											BgL_lz00_1182 = BgL_lz00_2437;
											goto BgL_zc3anonymousza34128ze3z83_1185;
										}
									else
										{
											obj_t BgL_lastfailz00_2443;

											obj_t BgL_prevz00_2442;

											obj_t BgL_lz00_2440;

											BgL_lz00_2440 = CDR(BgL_lz00_1182);
											BgL_prevz00_2442 = BgL_lz00_1182;
											BgL_lastfailz00_2443 = BgL_lz00_1182;
											BgL_lastfailz00_1184 = BgL_lastfailz00_2443;
											BgL_prevz00_1183 = BgL_prevz00_2442;
											BgL_lz00_1182 = BgL_lz00_2440;
											goto BgL_zc3anonymousza34128ze3z83_1185;
										}
								}
							}
					}
				}
			}
		}
	}



/* visit */
	bool_t BGl_visitz00zzsaw_blockorderz00(obj_t BgL_rz00_2289,
		BgL_blockz00_bglt BgL_bz00_1202)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 35 */
			{	/* SawMill/blockorder.scm 35 */
				BgL_blockz00_bglt BgL_obj4064z00_1204;

				BgL_obj4064z00_1204 = ((BgL_blockz00_bglt) BgL_bz00_1202);
				{	/* SawMill/blockorder.scm 35 */
					BgL_rdonez00_bglt BgL_arg4142z00_1205;

					BgL_arg4142z00_1205 = BGl_wideningzd2rdonezd2zzsaw_blockorderz00();
					{	/* SawMill/blockorder.scm 35 */
						obj_t BgL_auxz00_2448;

						BgL_objectz00_bglt BgL_auxz00_2446;

						BgL_auxz00_2448 = (obj_t) (BgL_arg4142z00_1205);
						BgL_auxz00_2446 = (BgL_objectz00_bglt) (BgL_obj4064z00_1204);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2446, BgL_auxz00_2448);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4064z00_1204),
					BGl_classzd2numzd2zz__objectz00(BGl_rdonez00zzsaw_blockorderz00));
				BgL_obj4064z00_1204;
			}
			{	/* SawMill/blockorder.scm 36 */
				obj_t BgL_auxz00_2290;

				BgL_auxz00_2290 =
					MAKE_PAIR((obj_t) (BgL_bz00_1202), CELL_REF(BgL_rz00_2289));
				CELL_SET(BgL_rz00_2289, BgL_auxz00_2290);
			}
			{	/* SawMill/blockorder.scm 38 */
				obj_t BgL_g4079z00_1207;

				BgL_g4079z00_1207 =
					BGl_predecessorsz00zzsaw_blockorderz00(BgL_bz00_1202);
				{
					obj_t BgL_l4077z00_1209;

					BgL_l4077z00_1209 = BgL_g4079z00_1207;
				BgL_zc3anonymousza34144ze3z83_1210:
					if (PAIRP(BgL_l4077z00_1209))
						{	/* SawMill/blockorder.scm 39 */
							{	/* SawMill/blockorder.scm 38 */
								obj_t BgL_sz00_1212;

								BgL_sz00_1212 = CAR(BgL_l4077z00_1209);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1212,
										BGl_rdonez00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 38 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 38 */
										BGl_visitz00zzsaw_blockorderz00(BgL_rz00_2289,
											(BgL_blockz00_bglt) (BgL_sz00_1212));
									}
							}
							{
								obj_t BgL_l4077z00_2464;

								BgL_l4077z00_2464 = CDR(BgL_l4077z00_1209);
								BgL_l4077z00_1209 = BgL_l4077z00_2464;
								goto BgL_zc3anonymousza34144ze3z83_1210;
							}
						}
					else
						{	/* SawMill/blockorder.scm 39 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* dfs'' */
	bool_t BGl_dfsz72z72z00zzsaw_blockorderz00(obj_t BgL_rz00_2291,
		obj_t BgL_bz00_1163)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 43 */
			if (BGl_iszd2azf3z21zz__objectz00(BgL_bz00_1163,
					BGl_rdonez00zzsaw_blockorderz00))
				{	/* SawMill/blockorder.scm 44 */
					BFALSE;
				}
			else
				{	/* SawMill/blockorder.scm 44 */
					obj_t BgL_auxz00_2292;

					BgL_auxz00_2292 = MAKE_PAIR(BgL_bz00_1163, CELL_REF(BgL_rz00_2291));
					CELL_SET(BgL_rz00_2291, BgL_auxz00_2292);
				}
			{	/* SawMill/blockorder.scm 45 */
				BgL_blockz00_bglt BgL_obj4065z00_1166;

				BgL_obj4065z00_1166 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1163));
				{	/* SawMill/blockorder.scm 45 */
					BgL_donez00_bglt BgL_arg4122z00_1167;

					BgL_arg4122z00_1167 = BGl_wideningzd2donezd2zzsaw_blockorderz00();
					{	/* SawMill/blockorder.scm 45 */
						obj_t BgL_auxz00_2474;

						BgL_objectz00_bglt BgL_auxz00_2472;

						BgL_auxz00_2474 = (obj_t) (BgL_arg4122z00_1167);
						BgL_auxz00_2472 = (BgL_objectz00_bglt) (BgL_obj4065z00_1166);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2472, BgL_auxz00_2474);
					}
				}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4065z00_1166),
					BGl_classzd2numzd2zz__objectz00(BGl_donez00zzsaw_blockorderz00));
				BgL_obj4065z00_1166;
			}
			{	/* SawMill/blockorder.scm 46 */
				obj_t BgL_g4085z00_1169;

				{
					BgL_blockz00_bglt BgL_auxz00_2480;

					BgL_auxz00_2480 = (BgL_blockz00_bglt) (BgL_bz00_1163);
					BgL_g4085z00_1169 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2480))->BgL_succsz00);
				}
				{
					obj_t BgL_l4083z00_1171;

					BgL_l4083z00_1171 = BgL_g4085z00_1169;
				BgL_zc3anonymousza34124ze3z83_1172:
					if (PAIRP(BgL_l4083z00_1171))
						{	/* SawMill/blockorder.scm 46 */
							{	/* SawMill/blockorder.scm 46 */
								obj_t BgL_sz00_1174;

								BgL_sz00_1174 = CAR(BgL_l4083z00_1171);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1174,
										BGl_donez00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 46 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 46 */
										BGl_dfsz72z72z00zzsaw_blockorderz00(BgL_rz00_2291,
											BgL_sz00_1174);
									}
							}
							{
								obj_t BgL_l4083z00_2489;

								BgL_l4083z00_2489 = CDR(BgL_l4083z00_1171);
								BgL_l4083z00_1171 = BgL_l4083z00_2489;
								goto BgL_zc3anonymousza34124ze3z83_1172;
							}
						}
					else
						{	/* SawMill/blockorder.scm 46 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* find-exit */
	obj_t BGl_findzd2exitzd2zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_4)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 72 */
			{	/* SawMill/blockorder.scm 73 */
				obj_t BgL_retsz00_1217;

				obj_t BgL_failsz00_1218;

				obj_t BgL_nz00_1219;

				BgL_retsz00_1217 = MAKE_CELL(BNIL);
				BgL_failsz00_1218 = MAKE_CELL(BNIL);
				{	/* SawMill/blockorder.scm 73 */
					obj_t BgL_cellvalz00_2491;

					BgL_cellvalz00_2491 = BINT(((long) 0));
					BgL_nz00_1219 = MAKE_CELL(BgL_cellvalz00_2491);
				}
				BGl_dfsz72z72zzsaw_blockorderz00(BgL_retsz00_1217, BgL_failsz00_1218,
					BgL_nz00_1219, (obj_t) (BgL_bz00_4));
				return bgl_append2(CELL_REF(BgL_retsz00_1217),
					CELL_REF(BgL_failsz00_1218));
			}
		}
	}



/* dfs' */
	bool_t BGl_dfsz72z72zzsaw_blockorderz00(obj_t BgL_retsz00_2285,
		obj_t BgL_failsz00_2284, obj_t BgL_nz00_2283, obj_t BgL_bz00_1221)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 74 */
			{	/* SawMill/blockorder.scm 75 */
				BgL_blockz00_bglt BgL_obj4068z00_1223;

				BgL_obj4068z00_1223 =
					((BgL_blockz00_bglt) (BgL_blockz00_bglt) (BgL_bz00_1221));
				{	/* SawMill/blockorder.scm 75 */
					BgL_dfsz00_bglt BgL_arg4149z00_1224;

					{	/* SawMill/blockorder.scm 75 */
						BgL_dfsz00_bglt BgL_res4372z00_2058;

						{	/* SawMill/blockorder.scm 75 */
							int BgL_n4023z00_2052;

							BgL_n4023z00_2052 = CINT(CELL_REF(BgL_nz00_2283));
							{	/* SawMill/blockorder.scm 75 */
								BgL_dfsz00_bglt BgL_new4024z00_2053;

								BgL_new4024z00_2053 =
									((BgL_dfsz00_bglt) BREF(GC_MALLOC(sizeof(struct
												BgL_dfsz00_bgl))));
								{	/* SawMill/blockorder.scm 75 */
									BgL_dfsz00_bglt BgL_res4371z00_2057;

									{	/* SawMill/blockorder.scm 75 */
										BgL_dfsz00_bglt BgL_new4034z00_2054;

										BgL_new4034z00_2054 = BgL_new4024z00_2053;
										{	/* SawMill/blockorder.scm 75 */
											int BgL_n4033z00_2056;

											BgL_n4033z00_2056 = BgL_n4023z00_2052;
											((((BgL_dfsz00_bglt) CREF(BgL_new4034z00_2054))->
													BgL_nz00) = ((int) BgL_n4033z00_2056), BUNSPEC);
											BgL_res4371z00_2057 = BgL_new4034z00_2054;
									}} BgL_res4371z00_2057;
								}
								BgL_res4372z00_2058 = BgL_new4024z00_2053;
						}}
						BgL_arg4149z00_1224 = BgL_res4372z00_2058;
					}
					{	/* SawMill/blockorder.scm 75 */
						obj_t BgL_auxz00_2503;

						BgL_objectz00_bglt BgL_auxz00_2501;

						BgL_auxz00_2503 = (obj_t) (BgL_arg4149z00_1224);
						BgL_auxz00_2501 = (BgL_objectz00_bglt) (BgL_obj4068z00_1223);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2501, BgL_auxz00_2503);
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_obj4068z00_1223),
					BGl_classzd2numzd2zz__objectz00(BGl_dfsz00zzsaw_blockorderz00));
				BgL_obj4068z00_1223;
			}
			{	/* SawMill/blockorder.scm 76 */
				obj_t BgL_auxz00_2286;

				{	/* SawMill/blockorder.scm 76 */
					long BgL_za71za7_2061;

					BgL_za71za7_2061 = (long) CINT(CELL_REF(BgL_nz00_2283));
					BgL_auxz00_2286 = BINT((BgL_za71za7_2061 + ((long) 1)));
				}
				CELL_SET(BgL_nz00_2283, BgL_auxz00_2286);
			}
			{	/* SawMill/blockorder.scm 79 */
				BgL_rtl_funz00_bglt BgL_funz00_1226;

				{	/* SawMill/blockorder.scm 79 */
					BgL_rtl_insz00_bglt BgL_obj3906z00_2065;

					{	/* SawMill/blockorder.scm 79 */
						obj_t BgL_auxz00_2512;

						{	/* SawMill/blockorder.scm 79 */
							obj_t BgL_auxz00_2513;

							{	/* SawMill/blockorder.scm 79 */
								obj_t BgL_auxz00_2514;

								{
									BgL_blockz00_bglt BgL_auxz00_2515;

									BgL_auxz00_2515 = (BgL_blockz00_bglt) (BgL_bz00_1221);
									BgL_auxz00_2514 =
										(((BgL_blockz00_bglt) CREF(BgL_auxz00_2515))->BgL_firstz00);
								}
								BgL_auxz00_2513 =
									BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
									(BgL_auxz00_2514);
							}
							BgL_auxz00_2512 = CAR(BgL_auxz00_2513);
						}
						BgL_obj3906z00_2065 = (BgL_rtl_insz00_bglt) (BgL_auxz00_2512);
					}
					BgL_funz00_1226 =
						(((BgL_rtl_insz00_bglt) CREF(BgL_obj3906z00_2065))->BgL_funz00);
				}
				{	/* SawMill/blockorder.scm 80 */
					bool_t BgL_testz00_2522;

					{	/* SawMill/blockorder.scm 80 */
						obj_t BgL_obj3296z00_2066;

						BgL_obj3296z00_2066 = (obj_t) (BgL_funz00_1226);
						BgL_testz00_2522 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3296z00_2066,
							BGl_rtl_lastz00zzsaw_defsz00);
					}
					if (BgL_testz00_2522)
						{	/* SawMill/blockorder.scm 81 */
							bool_t BgL_testz00_2525;

							{	/* SawMill/blockorder.scm 81 */
								obj_t BgL_obj3312z00_2067;

								BgL_obj3312z00_2067 =
									(obj_t) ((BgL_rtl_lastz00_bglt) (BgL_funz00_1226));
								BgL_testz00_2525 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3312z00_2067,
									BGl_rtl_returnz00zzsaw_defsz00);
							}
							if (BgL_testz00_2525)
								{	/* SawMill/blockorder.scm 82 */
									obj_t BgL_auxz00_2287;

									BgL_auxz00_2287 =
										MAKE_PAIR(BgL_bz00_1221, CELL_REF(BgL_retsz00_2285));
									CELL_SET(BgL_retsz00_2285, BgL_auxz00_2287);
								}
							else
								{	/* SawMill/blockorder.scm 83 */
									obj_t BgL_auxz00_2288;

									BgL_auxz00_2288 =
										MAKE_PAIR(BgL_bz00_1221, CELL_REF(BgL_failsz00_2284));
									CELL_SET(BgL_failsz00_2284, BgL_auxz00_2288);
								}
						}
					else
						{	/* SawMill/blockorder.scm 80 */
							BFALSE;
						}
				}
			}
			{	/* SawMill/blockorder.scm 84 */
				obj_t BgL_g4088z00_1232;

				{
					BgL_blockz00_bglt BgL_auxz00_2531;

					BgL_auxz00_2531 = (BgL_blockz00_bglt) (BgL_bz00_1221);
					BgL_g4088z00_1232 =
						(((BgL_blockz00_bglt) CREF(BgL_auxz00_2531))->BgL_succsz00);
				}
				{
					obj_t BgL_l4086z00_1234;

					BgL_l4086z00_1234 = BgL_g4088z00_1232;
				BgL_zc3anonymousza34156ze3z83_1235:
					if (PAIRP(BgL_l4086z00_1234))
						{	/* SawMill/blockorder.scm 84 */
							{	/* SawMill/blockorder.scm 84 */
								obj_t BgL_sz00_1237;

								BgL_sz00_1237 = CAR(BgL_l4086z00_1234);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_sz00_1237,
										BGl_dfsz00zzsaw_blockorderz00))
									{	/* SawMill/blockorder.scm 84 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/blockorder.scm 84 */
										BGl_dfsz72z72zzsaw_blockorderz00(BgL_retsz00_2285,
											BgL_failsz00_2284, BgL_nz00_2283, BgL_sz00_1237);
									}
							}
							{
								obj_t BgL_l4086z00_2540;

								BgL_l4086z00_2540 = CDR(BgL_l4086z00_1234);
								BgL_l4086z00_1234 = BgL_l4086z00_2540;
								goto BgL_zc3anonymousza34156ze3z83_1235;
							}
						}
					else
						{	/* SawMill/blockorder.scm 84 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* predecessors */
	obj_t BGl_predecessorsz00zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_5)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 88 */
			{	/* SawMill/blockorder.scm 89 */
				obj_t BgL_arg4160z00_1242;

				{	/* SawMill/blockorder.scm 89 */
					obj_t BgL_arg4162z00_1244;

					BgL_arg4162z00_1244 =
						(((BgL_blockz00_bglt) CREF(BgL_bz00_5))->BgL_predsz00);
					BgL_arg4160z00_1242 =
						BGl_filterz00zz__r4_control_features_6_9z00
						(BGl_proc4390z00zzsaw_blockorderz00, BgL_arg4162z00_1244);
				}
				return
					BGl_sortz00zz__r4_vectors_6_8z00(BgL_arg4160z00_1242,
					BGl_lengthuncolsucczc3zd3zf3zd2envz31zzsaw_blockorderz00);
			}
		}
	}



/* <anonymous:4163> */
	obj_t BGl_zc3anonymousza34163ze3z83zzsaw_blockorderz00(obj_t BgL_envz00_2237,
		obj_t BgL_xz00_2238)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 89 */
			{
				obj_t BgL_xz00_1245;

				{	/* SawMill/blockorder.scm 89 */
					bool_t BgL_auxz00_2545;

					BgL_xz00_1245 = BgL_xz00_2238;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_xz00_1245,
							BGl_rdonez00zzsaw_blockorderz00))
						{	/* SawMill/blockorder.scm 89 */
							BgL_auxz00_2545 = ((bool_t) 0);
						}
					else
						{	/* SawMill/blockorder.scm 89 */
							BgL_auxz00_2545 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_2545);
				}
			}
		}
	}



/* lengthuncolsucc<=? */
	bool_t BGl_lengthuncolsucczc3zd3zf3ze3zzsaw_blockorderz00(obj_t BgL_b1z00_6,
		obj_t BgL_b2z00_7)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 92 */
			{	/* SawMill/blockorder.scm 93 */
				long BgL_n1z00_1249;

				long BgL_n2z00_1250;

				BgL_n1z00_1249 =
					BGl_lengthuncolsuccz00zzsaw_blockorderz00(
					(BgL_blockz00_bglt) (BgL_b1z00_6));
				BgL_n2z00_1250 =
					BGl_lengthuncolsuccz00zzsaw_blockorderz00(
					(BgL_blockz00_bglt) (BgL_b2z00_7));
				if ((BgL_n1z00_1249 < BgL_n2z00_1250))
					{	/* SawMill/blockorder.scm 94 */
						return ((bool_t) 1);
					}
				else
					{	/* SawMill/blockorder.scm 94 */
						if ((BgL_n1z00_1249 > BgL_n2z00_1250))
							{	/* SawMill/blockorder.scm 95 */
								return ((bool_t) 0);
							}
						else
							{	/* SawMill/blockorder.scm 96 */
								long BgL_auxz00_2566;

								long BgL_auxz00_2557;

								{	/* SawMill/blockorder.scm 96 */
									int BgL_auxz00_2567;

									{	/* SawMill/blockorder.scm 96 */
										BgL_dfsz00_bglt BgL_obj4045z00_2077;

										BgL_obj4045z00_2077 = (BgL_dfsz00_bglt) (BgL_b2z00_7);
										{
											obj_t BgL_auxz00_2569;

											{	/* SawMill/blockorder.scm 96 */
												BgL_objectz00_bglt BgL_auxz00_2570;

												BgL_auxz00_2570 =
													(BgL_objectz00_bglt) (BgL_obj4045z00_2077);
												BgL_auxz00_2569 = BGL_OBJECT_WIDENING(BgL_auxz00_2570);
											}
											BgL_auxz00_2567 =
												(((BgL_dfsz00_bglt) CREF(BgL_auxz00_2569))->BgL_nz00);
									}}
									BgL_auxz00_2566 = (long) (BgL_auxz00_2567);
								}
								{	/* SawMill/blockorder.scm 96 */
									int BgL_auxz00_2558;

									{	/* SawMill/blockorder.scm 96 */
										BgL_dfsz00_bglt BgL_obj4045z00_2076;

										BgL_obj4045z00_2076 = (BgL_dfsz00_bglt) (BgL_b1z00_6);
										{
											obj_t BgL_auxz00_2560;

											{	/* SawMill/blockorder.scm 96 */
												BgL_objectz00_bglt BgL_auxz00_2561;

												BgL_auxz00_2561 =
													(BgL_objectz00_bglt) (BgL_obj4045z00_2076);
												BgL_auxz00_2560 = BGL_OBJECT_WIDENING(BgL_auxz00_2561);
											}
											BgL_auxz00_2558 =
												(((BgL_dfsz00_bglt) CREF(BgL_auxz00_2560))->BgL_nz00);
									}}
									BgL_auxz00_2557 = (long) (BgL_auxz00_2558);
								}
								return (BgL_auxz00_2557 > BgL_auxz00_2566);
							}
					}
			}
		}
	}



/* _lengthuncolsucc<=? */
	obj_t BGl__lengthuncolsucczc3zd3zf3ze3zzsaw_blockorderz00(obj_t
		BgL_envz00_2239, obj_t BgL_b1z00_2240, obj_t BgL_b2z00_2241)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 92 */
			return
				BBOOL(BGl_lengthuncolsucczc3zd3zf3ze3zzsaw_blockorderz00(BgL_b1z00_2240,
					BgL_b2z00_2241));
		}
	}



/* lengthuncolsucc */
	long BGl_lengthuncolsuccz00zzsaw_blockorderz00(BgL_blockz00_bglt BgL_bz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 98 */
			{	/* SawMill/blockorder.scm 99 */
				obj_t BgL_arg4169z00_1255;

				{	/* SawMill/blockorder.scm 99 */
					obj_t BgL_arg4171z00_1257;

					BgL_arg4171z00_1257 =
						(((BgL_blockz00_bglt) CREF(BgL_bz00_8))->BgL_succsz00);
					BgL_arg4169z00_1255 =
						BGl_filterz00zz__r4_control_features_6_9z00
						(BGl_proc4391z00zzsaw_blockorderz00, BgL_arg4171z00_1257);
				}
				return bgl_list_length(BgL_arg4169z00_1255);
			}
		}
	}



/* <anonymous:4172> */
	obj_t BGl_zc3anonymousza34172ze3z83zzsaw_blockorderz00(obj_t BgL_envz00_2243,
		obj_t BgL_xz00_2244)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 99 */
			{
				obj_t BgL_xz00_1258;

				{	/* SawMill/blockorder.scm 99 */
					bool_t BgL_auxz00_2581;

					BgL_xz00_1258 = BgL_xz00_2244;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_xz00_1258,
							BGl_rdonez00zzsaw_blockorderz00))
						{	/* SawMill/blockorder.scm 99 */
							BgL_auxz00_2581 = ((bool_t) 0);
						}
					else
						{	/* SawMill/blockorder.scm 99 */
							BgL_auxz00_2581 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_2581);
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			{	/* SawMill/blockorder.scm 5 */
				obj_t BgL_arg4211z00_1331;

				obj_t BgL_arg4212z00_1332;

				obj_t BgL_arg4215z00_1335;

				BgL_arg4211z00_1331 = CNST_TABLE_REF(((long) 1));
				BgL_arg4212z00_1332 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/blockorder.scm 5 */
					obj_t BgL_v4092z00_1336;

					BgL_v4092z00_1336 = create_vector((int) (((long) 0)));
					BgL_arg4215z00_1335 = BgL_v4092z00_1336;
				}
				BGl_donez00zzsaw_blockorderz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4211z00_1331,
					BgL_arg4212z00_1332, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2donezd2envz52zzsaw_blockorderz00,
					BGl_donezd2nilzd2envz00zzsaw_blockorderz00,
					BGl_donezf3zd2envz21zzsaw_blockorderz00, ((long) 82983), BFALSE,
					BFALSE, BgL_arg4215z00_1335);
			}
			{	/* SawMill/blockorder.scm 6 */
				obj_t BgL_arg4216z00_1337;

				obj_t BgL_arg4217z00_1338;

				obj_t BgL_arg4220z00_1341;

				BgL_arg4216z00_1337 = CNST_TABLE_REF(((long) 2));
				BgL_arg4217z00_1338 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/blockorder.scm 6 */
					obj_t BgL_v4093z00_1342;

					BgL_v4093z00_1342 = create_vector((int) (((long) 0)));
					BgL_arg4220z00_1341 = BgL_v4093z00_1342;
				}
				BGl_rdonez00zzsaw_blockorderz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4216z00_1337,
					BgL_arg4217z00_1338, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2rdonezd2envz52zzsaw_blockorderz00,
					BGl_rdonezd2nilzd2envz00zzsaw_blockorderz00,
					BGl_rdonezf3zd2envz21zzsaw_blockorderz00, ((long) 830937), BFALSE,
					BFALSE, BgL_arg4220z00_1341);
			}
			{	/* SawMill/blockorder.scm 7 */
				obj_t BgL_arg4221z00_1343;

				obj_t BgL_arg4222z00_1344;

				obj_t BgL_arg4225z00_1347;

				BgL_arg4221z00_1343 = CNST_TABLE_REF(((long) 3));
				BgL_arg4222z00_1344 = BGl_blockz00zzsaw_defsz00;
				{	/* SawMill/blockorder.scm 7 */
					obj_t BgL_v4094z00_1348;

					BgL_v4094z00_1348 = create_vector((int) (((long) 0)));
					BgL_arg4225z00_1347 = BgL_v4094z00_1348;
				}
				BGl_dfsz00zzsaw_blockorderz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4221z00_1343,
					BgL_arg4222z00_1344, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2dfszd2envz52zzsaw_blockorderz00,
					BGl_dfszd2nilzd2envz00zzsaw_blockorderz00,
					BGl_dfszf3zd2envz21zzsaw_blockorderz00, ((long) 6919776), BFALSE,
					BFALSE, BgL_arg4225z00_1347);
			}
			BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00 = BUNSPEC;
			BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00 = BUNSPEC;
			return (BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00 = BUNSPEC, BUNSPEC);
		}
	}



/* _dfs? */
	obj_t BGl__dfszf3zf3zzsaw_blockorderz00(obj_t BgL_envz00_2255,
		obj_t BgL_obj4044z00_2256)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 7 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4044z00_2256,
					BGl_dfsz00zzsaw_blockorderz00));
		}
	}



/* _%allocate-dfs */
	obj_t BGl__z52allocatezd2dfsz80zzsaw_blockorderz00(obj_t BgL_envz00_2253)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 7 */
			{	/* SawMill/blockorder.scm 7 */
				BgL_blockz00_bglt BgL_auxz00_2599;

				{	/* SawMill/blockorder.scm 7 */
					BgL_blockz00_bglt BgL_res4404z00_2314;

					{	/* SawMill/blockorder.scm 7 */
						BgL_blockz00_bglt BgL_new4037z00_2312;

						BgL_new4037z00_2312 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4037z00_2312),
							BGl_classzd2numzd2zz__objectz00(BGl_dfsz00zzsaw_blockorderz00));
						{	/* SawMill/blockorder.scm 7 */
							BgL_objectz00_bglt BgL_auxz00_2604;

							BgL_auxz00_2604 = (BgL_objectz00_bglt) (BgL_new4037z00_2312);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2604, BFALSE);
						}
						BgL_res4404z00_2314 = BgL_new4037z00_2312;
					}
					BgL_auxz00_2599 = BgL_res4404z00_2314;
				}
				return (obj_t) (BgL_auxz00_2599);
			}
		}
	}



/* dfs-nil */
	BgL_dfsz00_bglt BGl_dfszd2nilzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 7 */
			if ((BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00 == BUNSPEC))
				{	/* SawMill/blockorder.scm 7 */
					{	/* SawMill/blockorder.scm 7 */
						BgL_blockz00_bglt BgL_res4374z00_2095;

						{	/* SawMill/blockorder.scm 7 */
							BgL_blockz00_bglt BgL_new3957z00_2091;

							BgL_new3957z00_2091 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2091),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/blockorder.scm 7 */
								BgL_objectz00_bglt BgL_auxz00_2614;

								BgL_auxz00_2614 = (BgL_objectz00_bglt) (BgL_new3957z00_2091);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2614, BFALSE);
							}
							BgL_res4374z00_2095 = BgL_new3957z00_2091;
						}
						BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00 =
							(obj_t) (BgL_res4374z00_2095);
					}
					{	/* SawMill/blockorder.scm 7 */
						obj_t BgL_arg4234z00_1361;

						BgL_arg4234z00_1361 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/blockorder.scm 7 */
							BgL_blockz00_bglt BgL_res4375z00_2105;

							{	/* SawMill/blockorder.scm 7 */
								BgL_blockz00_bglt BgL_new3951z00_2096;

								int BgL_label3947z00_2097;

								BgL_new3951z00_2096 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00);
								BgL_label3947z00_2097 = (int) (((long) 0));
								{	/* SawMill/blockorder.scm 7 */
									int BgL_label3947z00_2101;

									obj_t BgL_preds3948z00_2102;

									obj_t BgL_succs3949z00_2103;

									obj_t BgL_first3950z00_2104;

									BgL_label3947z00_2101 = BgL_label3947z00_2097;
									BgL_preds3948z00_2102 = BNIL;
									BgL_succs3949z00_2103 = BNIL;
									BgL_first3950z00_2104 = BgL_arg4234z00_1361;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2096))->
											BgL_labelz00) = ((int) BgL_label3947z00_2101), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2096))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2102), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2096))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2103), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2096))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2104), BUNSPEC);
									BgL_res4375z00_2105 = BgL_new3951z00_2096;
							}} BgL_res4375z00_2105;
					}}
					{	/* SawMill/blockorder.scm 7 */
						long BgL_arg4235z00_1362;

						BgL_arg4235z00_1362 =
							BGl_classzd2numzd2zz__objectz00(BGl_dfsz00zzsaw_blockorderz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00),
							BgL_arg4235z00_1362);
					}
					{	/* SawMill/blockorder.scm 7 */
						BgL_dfsz00_bglt BgL_arg4236z00_1363;

						{	/* SawMill/blockorder.scm 7 */
							BgL_dfsz00_bglt BgL_res4377z00_2114;

							{	/* SawMill/blockorder.scm 7 */
								int BgL_n4023z00_2108;

								BgL_n4023z00_2108 = (int) (((long) 0));
								{	/* SawMill/blockorder.scm 7 */
									BgL_dfsz00_bglt BgL_new4024z00_2109;

									BgL_new4024z00_2109 =
										((BgL_dfsz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_dfsz00_bgl))));
									{	/* SawMill/blockorder.scm 7 */
										BgL_dfsz00_bglt BgL_res4376z00_2113;

										{	/* SawMill/blockorder.scm 7 */
											BgL_dfsz00_bglt BgL_new4034z00_2110;

											BgL_new4034z00_2110 = BgL_new4024z00_2109;
											{	/* SawMill/blockorder.scm 7 */
												int BgL_n4033z00_2112;

												BgL_n4033z00_2112 = BgL_n4023z00_2108;
												((((BgL_dfsz00_bglt) CREF(BgL_new4034z00_2110))->
														BgL_nz00) = ((int) BgL_n4033z00_2112), BUNSPEC);
												BgL_res4376z00_2113 = BgL_new4034z00_2110;
										}} BgL_res4376z00_2113;
									}
									BgL_res4377z00_2114 = BgL_new4024z00_2109;
							}}
							BgL_arg4236z00_1363 = BgL_res4377z00_2114;
						}
						{	/* SawMill/blockorder.scm 7 */
							obj_t BgL_auxz00_2633;

							BgL_objectz00_bglt BgL_auxz00_2631;

							BgL_auxz00_2633 = (obj_t) (BgL_arg4236z00_1363);
							BgL_auxz00_2631 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2631, BgL_auxz00_2633);
				}}}
			else
				{	/* SawMill/blockorder.scm 7 */
					BFALSE;
				}
			return (BgL_dfsz00_bglt) (BGl_z52thezd2dfszd2nilz52zzsaw_blockorderz00);
		}
	}



/* _dfs-nil */
	obj_t BGl__dfszd2nilzd2zzsaw_blockorderz00(obj_t BgL_envz00_2254)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 7 */
			return (obj_t) (BGl_dfszd2nilzd2zzsaw_blockorderz00());
		}
	}



/* _rdone? */
	obj_t BGl__rdonezf3zf3zzsaw_blockorderz00(obj_t BgL_envz00_2251,
		obj_t BgL_obj4008z00_2252)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4008z00_2252,
					BGl_rdonez00zzsaw_blockorderz00));
		}
	}



/* widening-rdone */
	BgL_rdonez00_bglt BGl_wideningzd2rdonezd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			{	/* SawMill/blockorder.scm 6 */
				BgL_rdonez00_bglt BgL_new3991z00_1364;

				BgL_new3991z00_1364 =
					((BgL_rdonez00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_rdonez00_bgl))));
				return BgL_new3991z00_1364;
			}
		}
	}



/* _%allocate-rdone */
	obj_t BGl__z52allocatezd2rdonez80zzsaw_blockorderz00(obj_t BgL_envz00_2249)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			{	/* SawMill/blockorder.scm 6 */
				BgL_blockz00_bglt BgL_auxz00_2642;

				{	/* SawMill/blockorder.scm 6 */
					BgL_blockz00_bglt BgL_res4405z00_2320;

					{	/* SawMill/blockorder.scm 6 */
						BgL_blockz00_bglt BgL_new4001z00_2318;

						BgL_new4001z00_2318 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4001z00_2318),
							BGl_classzd2numzd2zz__objectz00(BGl_rdonez00zzsaw_blockorderz00));
						{	/* SawMill/blockorder.scm 6 */
							BgL_objectz00_bglt BgL_auxz00_2647;

							BgL_auxz00_2647 = (BgL_objectz00_bglt) (BgL_new4001z00_2318);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2647, BFALSE);
						}
						BgL_res4405z00_2320 = BgL_new4001z00_2318;
					}
					BgL_auxz00_2642 = BgL_res4405z00_2320;
				}
				return (obj_t) (BgL_auxz00_2642);
			}
		}
	}



/* rdone-nil */
	BgL_rdonez00_bglt BGl_rdonezd2nilzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			if ((BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00 == BUNSPEC))
				{	/* SawMill/blockorder.scm 6 */
					{	/* SawMill/blockorder.scm 6 */
						BgL_blockz00_bglt BgL_res4378z00_2124;

						{	/* SawMill/blockorder.scm 6 */
							BgL_blockz00_bglt BgL_new3957z00_2120;

							BgL_new3957z00_2120 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2120),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/blockorder.scm 6 */
								BgL_objectz00_bglt BgL_auxz00_2657;

								BgL_auxz00_2657 = (BgL_objectz00_bglt) (BgL_new3957z00_2120);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2657, BFALSE);
							}
							BgL_res4378z00_2124 = BgL_new3957z00_2120;
						}
						BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00 =
							(obj_t) (BgL_res4378z00_2124);
					}
					{	/* SawMill/blockorder.scm 6 */
						obj_t BgL_arg4244z00_1375;

						BgL_arg4244z00_1375 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/blockorder.scm 6 */
							BgL_blockz00_bglt BgL_res4379z00_2134;

							{	/* SawMill/blockorder.scm 6 */
								BgL_blockz00_bglt BgL_new3951z00_2125;

								int BgL_label3947z00_2126;

								BgL_new3951z00_2125 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00);
								BgL_label3947z00_2126 = (int) (((long) 0));
								{	/* SawMill/blockorder.scm 6 */
									int BgL_label3947z00_2130;

									obj_t BgL_preds3948z00_2131;

									obj_t BgL_succs3949z00_2132;

									obj_t BgL_first3950z00_2133;

									BgL_label3947z00_2130 = BgL_label3947z00_2126;
									BgL_preds3948z00_2131 = BNIL;
									BgL_succs3949z00_2132 = BNIL;
									BgL_first3950z00_2133 = BgL_arg4244z00_1375;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2125))->
											BgL_labelz00) = ((int) BgL_label3947z00_2130), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2125))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2131), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2125))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2132), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2125))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2133), BUNSPEC);
									BgL_res4379z00_2134 = BgL_new3951z00_2125;
							}} BgL_res4379z00_2134;
					}}
					{	/* SawMill/blockorder.scm 6 */
						long BgL_arg4245z00_1376;

						BgL_arg4245z00_1376 =
							BGl_classzd2numzd2zz__objectz00(BGl_rdonez00zzsaw_blockorderz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00),
							BgL_arg4245z00_1376);
					}
					{	/* SawMill/blockorder.scm 6 */
						BgL_rdonez00_bglt BgL_arg4246z00_1377;

						BgL_arg4246z00_1377 = BGl_wideningzd2rdonezd2zzsaw_blockorderz00();
						{	/* SawMill/blockorder.scm 6 */
							obj_t BgL_auxz00_2674;

							BgL_objectz00_bglt BgL_auxz00_2672;

							BgL_auxz00_2674 = (obj_t) (BgL_arg4246z00_1377);
							BgL_auxz00_2672 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2672, BgL_auxz00_2674);
				}}}
			else
				{	/* SawMill/blockorder.scm 6 */
					BFALSE;
				}
			return
				(BgL_rdonez00_bglt) (BGl_z52thezd2rdonezd2nilz52zzsaw_blockorderz00);
		}
	}



/* _rdone-nil */
	obj_t BGl__rdonezd2nilzd2zzsaw_blockorderz00(obj_t BgL_envz00_2250)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			return (obj_t) (BGl_rdonezd2nilzd2zzsaw_blockorderz00());
		}
	}



/* _done? */
	obj_t BGl__donezf3zf3zzsaw_blockorderz00(obj_t BgL_envz00_2247,
		obj_t BgL_obj3976z00_2248)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3976z00_2248,
					BGl_donez00zzsaw_blockorderz00));
		}
	}



/* widening-done */
	BgL_donez00_bglt BGl_wideningzd2donezd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			{	/* SawMill/blockorder.scm 5 */
				BgL_donez00_bglt BgL_new3959z00_1378;

				BgL_new3959z00_1378 =
					((BgL_donez00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_donez00_bgl))));
				return BgL_new3959z00_1378;
			}
		}
	}



/* _%allocate-done */
	obj_t BGl__z52allocatezd2donez80zzsaw_blockorderz00(obj_t BgL_envz00_2245)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			{	/* SawMill/blockorder.scm 5 */
				BgL_blockz00_bglt BgL_auxz00_2683;

				{	/* SawMill/blockorder.scm 5 */
					BgL_blockz00_bglt BgL_res4406z00_2326;

					{	/* SawMill/blockorder.scm 5 */
						BgL_blockz00_bglt BgL_new3969z00_2324;

						BgL_new3969z00_2324 =
							((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_blockz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3969z00_2324),
							BGl_classzd2numzd2zz__objectz00(BGl_donez00zzsaw_blockorderz00));
						{	/* SawMill/blockorder.scm 5 */
							BgL_objectz00_bglt BgL_auxz00_2688;

							BgL_auxz00_2688 = (BgL_objectz00_bglt) (BgL_new3969z00_2324);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2688, BFALSE);
						}
						BgL_res4406z00_2326 = BgL_new3969z00_2324;
					}
					BgL_auxz00_2683 = BgL_res4406z00_2326;
				}
				return (obj_t) (BgL_auxz00_2683);
			}
		}
	}



/* done-nil */
	BgL_donez00_bglt BGl_donezd2nilzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			if ((BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00 == BUNSPEC))
				{	/* SawMill/blockorder.scm 5 */
					{	/* SawMill/blockorder.scm 5 */
						BgL_blockz00_bglt BgL_res4380z00_2146;

						{	/* SawMill/blockorder.scm 5 */
							BgL_blockz00_bglt BgL_new3957z00_2142;

							BgL_new3957z00_2142 =
								((BgL_blockz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new3957z00_2142),
								BGl_classzd2numzd2zz__objectz00(BGl_blockz00zzsaw_defsz00));
							{	/* SawMill/blockorder.scm 5 */
								BgL_objectz00_bglt BgL_auxz00_2698;

								BgL_auxz00_2698 = (BgL_objectz00_bglt) (BgL_new3957z00_2142);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2698, BFALSE);
							}
							BgL_res4380z00_2146 = BgL_new3957z00_2142;
						}
						BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00 =
							(obj_t) (BgL_res4380z00_2146);
					}
					{	/* SawMill/blockorder.scm 5 */
						obj_t BgL_arg4254z00_1389;

						BgL_arg4254z00_1389 = MAKE_PAIR(BFALSE, BFALSE);
						{	/* SawMill/blockorder.scm 5 */
							BgL_blockz00_bglt BgL_res4381z00_2156;

							{	/* SawMill/blockorder.scm 5 */
								BgL_blockz00_bglt BgL_new3951z00_2147;

								int BgL_label3947z00_2148;

								BgL_new3951z00_2147 =
									(BgL_blockz00_bglt)
									(BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00);
								BgL_label3947z00_2148 = (int) (((long) 0));
								{	/* SawMill/blockorder.scm 5 */
									int BgL_label3947z00_2152;

									obj_t BgL_preds3948z00_2153;

									obj_t BgL_succs3949z00_2154;

									obj_t BgL_first3950z00_2155;

									BgL_label3947z00_2152 = BgL_label3947z00_2148;
									BgL_preds3948z00_2153 = BNIL;
									BgL_succs3949z00_2154 = BNIL;
									BgL_first3950z00_2155 = BgL_arg4254z00_1389;
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2147))->
											BgL_labelz00) = ((int) BgL_label3947z00_2152), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2147))->
											BgL_predsz00) = ((obj_t) BgL_preds3948z00_2153), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2147))->
											BgL_succsz00) = ((obj_t) BgL_succs3949z00_2154), BUNSPEC);
									((((BgL_blockz00_bglt) CREF(BgL_new3951z00_2147))->
											BgL_firstz00) = ((obj_t) BgL_first3950z00_2155), BUNSPEC);
									BgL_res4381z00_2156 = BgL_new3951z00_2147;
							}} BgL_res4381z00_2156;
					}}
					{	/* SawMill/blockorder.scm 5 */
						long BgL_arg4255z00_1390;

						BgL_arg4255z00_1390 =
							BGl_classzd2numzd2zz__objectz00(BGl_donez00zzsaw_blockorderz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00),
							BgL_arg4255z00_1390);
					}
					{	/* SawMill/blockorder.scm 5 */
						BgL_donez00_bglt BgL_arg4257z00_1391;

						BgL_arg4257z00_1391 = BGl_wideningzd2donezd2zzsaw_blockorderz00();
						{	/* SawMill/blockorder.scm 5 */
							obj_t BgL_auxz00_2715;

							BgL_objectz00_bglt BgL_auxz00_2713;

							BgL_auxz00_2715 = (obj_t) (BgL_arg4257z00_1391);
							BgL_auxz00_2713 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2713, BgL_auxz00_2715);
				}}}
			else
				{	/* SawMill/blockorder.scm 5 */
					BFALSE;
				}
			return (BgL_donez00_bglt) (BGl_z52thezd2donezd2nilz52zzsaw_blockorderz00);
		}
	}



/* _done-nil */
	obj_t BGl__donezd2nilzd2zzsaw_blockorderz00(obj_t BgL_envz00_2246)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			return (obj_t) (BGl_donezd2nilzd2zzsaw_blockorderz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_dfsz00zzsaw_blockorderz00, BGl_proc4392z00zzsaw_blockorderz00,
				BGl_string4393z00zzsaw_blockorderz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_dfsz00zzsaw_blockorderz00, BGl_proc4394z00zzsaw_blockorderz00,
				BGl_string4395z00zzsaw_blockorderz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_rdonez00zzsaw_blockorderz00, BGl_proc4396z00zzsaw_blockorderz00,
				BGl_string4393z00zzsaw_blockorderz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_rdonez00zzsaw_blockorderz00, BGl_proc4397z00zzsaw_blockorderz00,
				BGl_string4395z00zzsaw_blockorderz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_donez00zzsaw_blockorderz00, BGl_proc4398z00zzsaw_blockorderz00,
				BGl_string4393z00zzsaw_blockorderz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_donez00zzsaw_blockorderz00, BGl_proc4399z00zzsaw_blockorderz00,
				BGl_string4395z00zzsaw_blockorderz00);
		}
	}



/* struct+object->objec4107 */
	obj_t BGl_structzb2objectzd2ze3objec4107z83zzsaw_blockorderz00(obj_t
		BgL_envz00_2268, obj_t BgL_oz00_2269, obj_t BgL_sz00_2270)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			{
				BgL_donez00_bglt BgL_oz00_1993;

				obj_t BgL_sz00_1994;

				{	/* SawMill/blockorder.scm 5 */
					BgL_donez00_bglt BgL_auxz00_2727;

					BgL_oz00_1993 = (BgL_donez00_bglt) (BgL_oz00_2269);
					BgL_sz00_1994 = BgL_sz00_2270;
					{

						{	/* SawMill/blockorder.scm 5 */
							obj_t BgL_old3973z00_1997;

							{	/* SawMill/blockorder.scm 5 */
								obj_t BgL_nextzd2method4106zd2_2002;

								BgL_nextzd2method4106zd2_2002 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1993),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_donez00zzsaw_blockorderz00);
								if (PROCEDUREP(BgL_nextzd2method4106zd2_2002))
									{	/* SawMill/blockorder.scm 5 */
										BgL_old3973z00_1997 =
											PROCEDURE_ENTRY(BgL_nextzd2method4106zd2_2002)
											(BgL_nextzd2method4106zd2_2002, (obj_t) (BgL_oz00_1993),
											BgL_sz00_1994, BEOA);
									}
								else
									{	/* SawMill/blockorder.scm 5 */
										BgL_old3973z00_1997 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1993), BgL_sz00_1994));
									}
							}
							{	/* SawMill/blockorder.scm 5 */
								BgL_donez00_bglt BgL_new3975z00_1999;

								BgL_new3975z00_1999 =
									((BgL_donez00_bglt) (BgL_old3973z00_1997));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3975z00_1999),
									BGl_classzd2numzd2zz__objectz00
									(BGl_donez00zzsaw_blockorderz00));
								{	/* SawMill/blockorder.scm 5 */
									BgL_donez00_bglt BgL_arg4369z00_2001;

									BgL_arg4369z00_2001 =
										BGl_wideningzd2donezd2zzsaw_blockorderz00();
									{	/* SawMill/blockorder.scm 5 */
										obj_t BgL_auxz00_2745;

										BgL_objectz00_bglt BgL_auxz00_2743;

										BgL_auxz00_2745 = (obj_t) (BgL_arg4369z00_2001);
										BgL_auxz00_2743 =
											(BgL_objectz00_bglt) (BgL_new3975z00_1999);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2743, BgL_auxz00_2745);
									}
								}
								BgL_auxz00_2727 = BgL_new3975z00_1999;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2727);
				}
			}
		}
	}



/* object->struct-done4104 */
	obj_t BGl_objectzd2ze3structzd2done4104ze3zzsaw_blockorderz00(obj_t
		BgL_envz00_2271, obj_t BgL_obj3970z00_2272)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 5 */
			{
				BgL_donez00_bglt BgL_obj3970z00_1985;

				BgL_obj3970z00_1985 = (BgL_donez00_bglt) (BgL_obj3970z00_2272);
				{

					{	/* SawMill/blockorder.scm 5 */
						obj_t BgL_res3971z00_1988;

						{	/* SawMill/blockorder.scm 5 */
							obj_t BgL_nextzd2method4103zd2_1991;

							BgL_nextzd2method4103zd2_1991 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3970z00_1985),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_donez00zzsaw_blockorderz00);
							if (PROCEDUREP(BgL_nextzd2method4103zd2_1991))
								{	/* SawMill/blockorder.scm 5 */
									BgL_res3971z00_1988 =
										PROCEDURE_ENTRY(BgL_nextzd2method4103zd2_1991)
										(BgL_nextzd2method4103zd2_1991,
										(obj_t) (BgL_obj3970z00_1985), BEOA);
								}
							else
								{	/* SawMill/blockorder.scm 5 */
									BgL_res3971z00_1988 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3970z00_1985));
								}
						}
						{	/* SawMill/blockorder.scm 5 */
							obj_t BgL_aux3972z00_1989;

							{	/* SawMill/blockorder.scm 5 */
								obj_t BgL_keyz00_2216;

								BgL_keyz00_2216 = CNST_TABLE_REF(((long) 1));
								BgL_aux3972z00_1989 =
									make_struct(BgL_keyz00_2216, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/blockorder.scm 5 */
								int BgL_auxz00_2762;

								BgL_auxz00_2762 = (int) (((long) 0));
								STRUCT_SET(BgL_res3971z00_1988, BgL_auxz00_2762,
									BgL_aux3972z00_1989);
							}
							{	/* SawMill/blockorder.scm 5 */
								obj_t BgL_auxz00_2765;

								BgL_auxz00_2765 = STRUCT_KEY(BgL_res3971z00_1988);
								STRUCT_KEY_SET(BgL_aux3972z00_1989, BgL_auxz00_2765);
							}
							{	/* SawMill/blockorder.scm 5 */
								obj_t BgL_kz00_2227;

								BgL_kz00_2227 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3971z00_1988, BgL_kz00_2227);
							}
							return BgL_res3971z00_1988;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4102 */
	obj_t BGl_structzb2objectzd2ze3objec4102z83zzsaw_blockorderz00(obj_t
		BgL_envz00_2273, obj_t BgL_oz00_2274, obj_t BgL_sz00_2275)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			{
				BgL_rdonez00_bglt BgL_oz00_1974;

				obj_t BgL_sz00_1975;

				{	/* SawMill/blockorder.scm 6 */
					BgL_rdonez00_bglt BgL_auxz00_2771;

					BgL_oz00_1974 = (BgL_rdonez00_bglt) (BgL_oz00_2274);
					BgL_sz00_1975 = BgL_sz00_2275;
					{

						{	/* SawMill/blockorder.scm 6 */
							obj_t BgL_old4005z00_1978;

							{	/* SawMill/blockorder.scm 6 */
								obj_t BgL_nextzd2method4101zd2_1983;

								BgL_nextzd2method4101zd2_1983 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1974),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_rdonez00zzsaw_blockorderz00);
								if (PROCEDUREP(BgL_nextzd2method4101zd2_1983))
									{	/* SawMill/blockorder.scm 6 */
										BgL_old4005z00_1978 =
											PROCEDURE_ENTRY(BgL_nextzd2method4101zd2_1983)
											(BgL_nextzd2method4101zd2_1983, (obj_t) (BgL_oz00_1974),
											BgL_sz00_1975, BEOA);
									}
								else
									{	/* SawMill/blockorder.scm 6 */
										BgL_old4005z00_1978 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1974), BgL_sz00_1975));
									}
							}
							{	/* SawMill/blockorder.scm 6 */
								BgL_rdonez00_bglt BgL_new4007z00_1980;

								BgL_new4007z00_1980 =
									((BgL_rdonez00_bglt) (BgL_old4005z00_1978));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4007z00_1980),
									BGl_classzd2numzd2zz__objectz00
									(BGl_rdonez00zzsaw_blockorderz00));
								{	/* SawMill/blockorder.scm 6 */
									BgL_rdonez00_bglt BgL_arg4364z00_1982;

									BgL_arg4364z00_1982 =
										BGl_wideningzd2rdonezd2zzsaw_blockorderz00();
									{	/* SawMill/blockorder.scm 6 */
										obj_t BgL_auxz00_2789;

										BgL_objectz00_bglt BgL_auxz00_2787;

										BgL_auxz00_2789 = (obj_t) (BgL_arg4364z00_1982);
										BgL_auxz00_2787 =
											(BgL_objectz00_bglt) (BgL_new4007z00_1980);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2787, BgL_auxz00_2789);
									}
								}
								BgL_auxz00_2771 = BgL_new4007z00_1980;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2771);
				}
			}
		}
	}



/* object->struct-rdone4100 */
	obj_t BGl_objectzd2ze3structzd2rdone4100ze3zzsaw_blockorderz00(obj_t
		BgL_envz00_2276, obj_t BgL_obj4002z00_2277)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 6 */
			{
				BgL_rdonez00_bglt BgL_obj4002z00_1966;

				BgL_obj4002z00_1966 = (BgL_rdonez00_bglt) (BgL_obj4002z00_2277);
				{

					{	/* SawMill/blockorder.scm 6 */
						obj_t BgL_res4003z00_1969;

						{	/* SawMill/blockorder.scm 6 */
							obj_t BgL_nextzd2method4099zd2_1972;

							BgL_nextzd2method4099zd2_1972 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4002z00_1966),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_rdonez00zzsaw_blockorderz00);
							if (PROCEDUREP(BgL_nextzd2method4099zd2_1972))
								{	/* SawMill/blockorder.scm 6 */
									BgL_res4003z00_1969 =
										PROCEDURE_ENTRY(BgL_nextzd2method4099zd2_1972)
										(BgL_nextzd2method4099zd2_1972,
										(obj_t) (BgL_obj4002z00_1966), BEOA);
								}
							else
								{	/* SawMill/blockorder.scm 6 */
									BgL_res4003z00_1969 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4002z00_1966));
								}
						}
						{	/* SawMill/blockorder.scm 6 */
							obj_t BgL_aux4004z00_1970;

							{	/* SawMill/blockorder.scm 6 */
								obj_t BgL_keyz00_2198;

								BgL_keyz00_2198 = CNST_TABLE_REF(((long) 2));
								BgL_aux4004z00_1970 =
									make_struct(BgL_keyz00_2198, (int) (((long) 0)), BUNSPEC);
							}
							{	/* SawMill/blockorder.scm 6 */
								int BgL_auxz00_2806;

								BgL_auxz00_2806 = (int) (((long) 0));
								STRUCT_SET(BgL_res4003z00_1969, BgL_auxz00_2806,
									BgL_aux4004z00_1970);
							}
							{	/* SawMill/blockorder.scm 6 */
								obj_t BgL_auxz00_2809;

								BgL_auxz00_2809 = STRUCT_KEY(BgL_res4003z00_1969);
								STRUCT_KEY_SET(BgL_aux4004z00_1970, BgL_auxz00_2809);
							}
							{	/* SawMill/blockorder.scm 6 */
								obj_t BgL_kz00_2209;

								BgL_kz00_2209 = CNST_TABLE_REF(((long) 2));
								STRUCT_KEY_SET(BgL_res4003z00_1969, BgL_kz00_2209);
							}
							return BgL_res4003z00_1969;
						}
					}
				}
			}
		}
	}



/* struct+object->objec4098 */
	obj_t BGl_structzb2objectzd2ze3objec4098z83zzsaw_blockorderz00(obj_t
		BgL_envz00_2278, obj_t BgL_oz00_2279, obj_t BgL_sz00_2280)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 7 */
			{
				BgL_dfsz00_bglt BgL_oz00_1954;

				obj_t BgL_sz00_1955;

				{	/* SawMill/blockorder.scm 7 */
					BgL_dfsz00_bglt BgL_auxz00_2815;

					BgL_oz00_1954 = (BgL_dfsz00_bglt) (BgL_oz00_2279);
					BgL_sz00_1955 = BgL_sz00_2280;
					{

						{	/* SawMill/blockorder.scm 7 */
							obj_t BgL_old4041z00_1958;

							obj_t BgL_aux4042z00_1959;

							{	/* SawMill/blockorder.scm 7 */
								obj_t BgL_nextzd2method4097zd2_1964;

								BgL_nextzd2method4097zd2_1964 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1954),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_dfsz00zzsaw_blockorderz00);
								if (PROCEDUREP(BgL_nextzd2method4097zd2_1964))
									{	/* SawMill/blockorder.scm 7 */
										BgL_old4041z00_1958 =
											PROCEDURE_ENTRY(BgL_nextzd2method4097zd2_1964)
											(BgL_nextzd2method4097zd2_1964, (obj_t) (BgL_oz00_1954),
											BgL_sz00_1955, BEOA);
									}
								else
									{	/* SawMill/blockorder.scm 7 */
										BgL_old4041z00_1958 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1954), BgL_sz00_1955));
									}
							}
							BgL_aux4042z00_1959 =
								STRUCT_REF(BgL_sz00_1955, (int) (((long) 0)));
							{	/* SawMill/blockorder.scm 7 */
								BgL_dfsz00_bglt BgL_new4043z00_1960;

								BgL_new4043z00_1960 = ((BgL_dfsz00_bglt) (BgL_old4041z00_1958));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4043z00_1960),
									BGl_classzd2numzd2zz__objectz00
									(BGl_dfsz00zzsaw_blockorderz00));
								{	/* SawMill/blockorder.scm 7 */
									BgL_dfsz00_bglt BgL_arg4358z00_1962;

									{	/* SawMill/blockorder.scm 7 */
										obj_t BgL_arg4359z00_1963;

										BgL_arg4359z00_1963 =
											STRUCT_REF(BgL_aux4042z00_1959, (int) (((long) 0)));
										{	/* SawMill/blockorder.scm 7 */
											BgL_dfsz00_bglt BgL_res4384z00_2196;

											{	/* SawMill/blockorder.scm 7 */
												int BgL_n4023z00_2190;

												BgL_n4023z00_2190 = CINT(BgL_arg4359z00_1963);
												{	/* SawMill/blockorder.scm 7 */
													BgL_dfsz00_bglt BgL_new4024z00_2191;

													BgL_new4024z00_2191 =
														((BgL_dfsz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_dfsz00_bgl))));
													{	/* SawMill/blockorder.scm 7 */
														BgL_dfsz00_bglt BgL_res4383z00_2195;

														{	/* SawMill/blockorder.scm 7 */
															BgL_dfsz00_bglt BgL_new4034z00_2192;

															BgL_new4034z00_2192 = BgL_new4024z00_2191;
															{	/* SawMill/blockorder.scm 7 */
																int BgL_n4033z00_2194;

																BgL_n4033z00_2194 = BgL_n4023z00_2190;
																((((BgL_dfsz00_bglt)
																			CREF(BgL_new4034z00_2192))->BgL_nz00) =
																	((int) BgL_n4033z00_2194), BUNSPEC);
																BgL_res4383z00_2195 = BgL_new4034z00_2192;
														}} BgL_res4383z00_2195;
													}
													BgL_res4384z00_2196 = BgL_new4024z00_2191;
											}}
											BgL_arg4358z00_1962 = BgL_res4384z00_2196;
									}}
									{	/* SawMill/blockorder.scm 7 */
										obj_t BgL_auxz00_2839;

										BgL_objectz00_bglt BgL_auxz00_2837;

										BgL_auxz00_2839 = (obj_t) (BgL_arg4358z00_1962);
										BgL_auxz00_2837 =
											(BgL_objectz00_bglt) (BgL_new4043z00_1960);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2837, BgL_auxz00_2839);
								}}
								BgL_auxz00_2815 = BgL_new4043z00_1960;
					}}}
					return (obj_t) (BgL_auxz00_2815);
				}
			}
		}
	}



/* object->struct-dfs4096 */
	obj_t BGl_objectzd2ze3structzd2dfs4096ze3zzsaw_blockorderz00(obj_t
		BgL_envz00_2281, obj_t BgL_obj4038z00_2282)
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 7 */
			{
				BgL_dfsz00_bglt BgL_obj4038z00_1944;

				BgL_obj4038z00_1944 = (BgL_dfsz00_bglt) (BgL_obj4038z00_2282);
				{

					{	/* SawMill/blockorder.scm 7 */
						obj_t BgL_res4039z00_1947;

						{	/* SawMill/blockorder.scm 7 */
							obj_t BgL_nextzd2method4095zd2_1952;

							BgL_nextzd2method4095zd2_1952 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj4038z00_1944),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_dfsz00zzsaw_blockorderz00);
							if (PROCEDUREP(BgL_nextzd2method4095zd2_1952))
								{	/* SawMill/blockorder.scm 7 */
									BgL_res4039z00_1947 =
										PROCEDURE_ENTRY(BgL_nextzd2method4095zd2_1952)
										(BgL_nextzd2method4095zd2_1952,
										(obj_t) (BgL_obj4038z00_1944), BEOA);
								}
							else
								{	/* SawMill/blockorder.scm 7 */
									BgL_res4039z00_1947 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj4038z00_1944));
								}
						}
						{	/* SawMill/blockorder.scm 7 */
							obj_t BgL_aux4040z00_1948;

							{	/* SawMill/blockorder.scm 7 */
								obj_t BgL_keyz00_2167;

								BgL_keyz00_2167 = CNST_TABLE_REF(((long) 3));
								BgL_aux4040z00_1948 =
									make_struct(BgL_keyz00_2167, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawMill/blockorder.scm 7 */
								int BgL_arg4354z00_1950;

								{
									obj_t BgL_auxz00_2856;

									{	/* SawMill/blockorder.scm 7 */
										BgL_objectz00_bglt BgL_auxz00_2857;

										BgL_auxz00_2857 =
											(BgL_objectz00_bglt) (BgL_obj4038z00_1944);
										BgL_auxz00_2856 = BGL_OBJECT_WIDENING(BgL_auxz00_2857);
									}
									BgL_arg4354z00_1950 =
										(((BgL_dfsz00_bglt) CREF(BgL_auxz00_2856))->BgL_nz00);
								}
								{	/* SawMill/blockorder.scm 7 */
									obj_t BgL_auxz00_2863;

									int BgL_auxz00_2861;

									BgL_auxz00_2863 = BINT(BgL_arg4354z00_1950);
									BgL_auxz00_2861 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4040z00_1948, BgL_auxz00_2861,
										BgL_auxz00_2863);
							}}
							{	/* SawMill/blockorder.scm 7 */
								int BgL_auxz00_2866;

								BgL_auxz00_2866 = (int) (((long) 0));
								STRUCT_SET(BgL_res4039z00_1947, BgL_auxz00_2866,
									BgL_aux4040z00_1948);
							}
							{	/* SawMill/blockorder.scm 7 */
								obj_t BgL_auxz00_2869;

								BgL_auxz00_2869 = STRUCT_KEY(BgL_res4039z00_1947);
								STRUCT_KEY_SET(BgL_aux4040z00_1948, BgL_auxz00_2869);
							}
							{	/* SawMill/blockorder.scm 7 */
								obj_t BgL_kz00_2182;

								BgL_kz00_2182 = CNST_TABLE_REF(((long) 3));
								STRUCT_KEY_SET(BgL_res4039z00_1947, BgL_kz00_2182);
							}
							return BgL_res4039z00_1947;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_blockorderz00()
	{
		AN_OBJECT;
		{	/* SawMill/blockorder.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4400z00zzsaw_blockorderz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4400z00zzsaw_blockorderz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4400z00zzsaw_blockorderz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4400z00zzsaw_blockorderz00));
		}
	}

#ifdef __cplusplus
}
#endif
