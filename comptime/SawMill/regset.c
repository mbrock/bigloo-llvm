/*===========================================================================*/
/*   (SawMill/regset.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/regset.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_rtl_regzf2razf2_bgl
	{
		int BgL_numz00;
		obj_t BgL_colorz00;
		obj_t BgL_coalescez00;
		int BgL_occurrencesz00;
		obj_t BgL_interferez00;
		obj_t BgL_interfere2z00;
	}                      *BgL_rtl_regzf2razf2_bglt;

	typedef struct BgL_regsetz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_lengthz00;
		int BgL_msiza7eza7;
		obj_t BgL_regvz00;
		obj_t BgL_reglz00;
		obj_t BgL_stringz00;
	}                *BgL_regsetz00_bglt;


	static obj_t BGl__regsetzd2filterzd2zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__regsetzd2memberzf3z21zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_regsetzd2filterzd2zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_regsetz00();
	BGL_EXPORTED_DEF obj_t BGl_regsetz00zzsaw_regsetz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_duplicatezd2regsetzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2addza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl__regsetzd2nilzd2zzsaw_regsetz00(obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4190z83zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl__regsetzd2unionz12zc0zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_regsetz00();
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34211ze3z83zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_regsetz00_bglt);
	static obj_t BGl__regsetzd2unionza2z12z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl__makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2removez12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regzf2razf2_bglt);
	static obj_t BGl_loopz00zzsaw_regsetz00(obj_t, BgL_regsetz00_bglt, long);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_regsetz00(int,
		int, obj_t, obj_t, obj_t);
	static obj_t BGl__regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl__duplicatezd2regsetzd2zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt);
	static obj_t BGl__regsetzd2emptyzf3z21zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl__listzd2ze3regsetz31zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_regsetz00();
	static obj_t BGl_z52thezd2regsetzd2nilz52zzsaw_regsetz00 = BUNSPEC;
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_fillzd2regsetz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt, int, int, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2emptyzf3z21zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_regsetz00 = BUNSPEC;
	static obj_t BGl__makezd2regsetzd2zzsaw_regsetz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_regsetz00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2dumpzd2zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl__regsetzd2addza2z12z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_z52allocatezd2regsetz80zzsaw_regsetz00();
	static obj_t BGl_zc3anonymousza34310ze3z83zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regzf2razf2_bglt,
		BgL_regsetz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_regsetz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_regsetz00(obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	static obj_t BGl__regsetzd2removez12zc0zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl__regsetzd2dumpzd2zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regzf2razf2_bglt);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t make_vector(int, obj_t);
	static obj_t BGl_objectzd2ze3structzd2regse4188ze3zzsaw_regsetz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_regsetz00();
	static obj_t BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 = BUNSPEC;
	static obj_t BGl__z52allocatezd2regsetz80zzsaw_regsetz00(obj_t);
	static obj_t BGl__regsetzd2ze3listz31zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl__regsetzf3zf3zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_regsetz00();
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl__regsetzd2addz12zc0zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_regsetz00();
	static obj_t BGl__fillzd2regsetz12zc0zzsaw_regsetz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2emptyzd2regsetzd2envzd2zzsaw_regsetz00,
		BgL_bgl__makeza7d2emptyza7d24453z00,
		BGl__makezd2emptyzd2regsetz00zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzf3zd2envz21zzsaw_regsetz00,
		BgL_bgl__regsetza7f3za7f3za7za7s4454z00, BGl__regsetzf3zf3zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2filterzd2envz00zzsaw_regsetz00,
		BgL_bgl__regsetza7d2filter4455za7, BGl__regsetzd2filterzd2zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4443z00zzsaw_regsetz00,
		BgL_bgl_objectza7d2za7e3stru4456z00,
		BGl_objectzd2ze3structzd2regse4188ze3zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4445z00zzsaw_regsetz00,
		BgL_bgl_structza7b2objectza74457z00,
		BGl_structzb2objectzd2ze3objec4190z83zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4440z00zzsaw_regsetz00,
		BgL_bgl_string4440za700za7za7s4458za7, "}", 1);
	      DEFINE_STRING(BGl_string4439z00zzsaw_regsetz00,
		BgL_bgl_string4439za700za7za7s4459za7, "{", 1);
	      DEFINE_STRING(BGl_string4441z00zzsaw_regsetz00,
		BgL_bgl_string4441za700za7za7s4460za7, " ", 1);
	      DEFINE_STRING(BGl_string4442z00zzsaw_regsetz00,
		BgL_bgl_string4442za700za7za7s4461za7, "", 0);
	      DEFINE_STRING(BGl_string4444z00zzsaw_regsetz00,
		BgL_bgl_string4444za700za7za7s4462za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4446z00zzsaw_regsetz00,
		BgL_bgl_string4446za700za7za7s4463za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4447z00zzsaw_regsetz00,
		BgL_bgl_string4447za700za7za7s4464za7, "saw_regset", 10);
	      DEFINE_STRING(BGl_string4448z00zzsaw_regsetz00,
		BgL_bgl_string4448za700za7za7s4465za7, "#() regset ", 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3regsetzd2envze3zzsaw_regsetz00,
		BgL_bgl__listza7d2za7e3regse4466z00,
		BGl__listzd2ze3regsetz31zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2memberzf3zd2envzf3zzsaw_regsetz00,
		BgL_bgl__regsetza7d2member4467za7,
		BGl__regsetzd2memberzf3z21zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2forzd2eachzd2envzd2zzsaw_regsetz00,
		BgL_bgl__regsetza7d2forza7d24468z00,
		BGl__regsetzd2forzd2eachz00zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2unionz12zd2envz12zzsaw_regsetz00,
		BgL_bgl__regsetza7d2unionza74469z00,
		BGl__regsetzd2unionz12zc0zzsaw_regsetz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2addz12zd2envz12zzsaw_regsetz00,
		BgL_bgl__regsetza7d2addza7124470z00, BGl__regsetzd2addz12zc0zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2nilzd2envz00zzsaw_regsetz00,
		BgL_bgl__regsetza7d2nilza7d24471z00, BGl__regsetzd2nilzd2zzsaw_regsetz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2regsetzd2envz00zzsaw_regsetz00,
		BgL_bgl__makeza7d2regsetza7d4472z00, BGl__makezd2regsetzd2zzsaw_regsetz00,
		0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2ze3listzd2envze3zzsaw_regsetz00,
		BgL_bgl__regsetza7d2za7e3lis4473z00,
		BGl__regsetzd2ze3listz31zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2addza2z12zd2envzb0zzsaw_regsetz00,
		BgL_bgl__regsetza7d2addza7a24474z00,
		BGl__regsetzd2addza2z12z62zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2emptyzf3zd2envzf3zzsaw_regsetz00,
		BgL_bgl__regsetza7d2emptyza74475z00,
		BGl__regsetzd2emptyzf3z21zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2removez12zd2envz12zzsaw_regsetz00,
		BgL_bgl__regsetza7d2remove4476za7,
		BGl__regsetzd2removez12zc0zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2dumpzd2envz00zzsaw_regsetz00,
		BgL_bgl__regsetza7d2dumpza7d4477z00, va_generic_entry,
		BGl__regsetzd2dumpzd2zzsaw_regsetz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2unionza2z12zd2envzb0zzsaw_regsetz00,
		BgL_bgl__regsetza7d2unionza74478z00,
		BGl__regsetzd2unionza2z12z62zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2regsetz12zd2envz12zzsaw_regsetz00,
		BgL_bgl__fillza7d2regsetza714479z00,
		BGl__fillzd2regsetz12zc0zzsaw_regsetz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_duplicatezd2regsetzd2envz00zzsaw_regsetz00,
		BgL_bgl__duplicateza7d2reg4480za7,
		BGl__duplicatezd2regsetzd2zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2regsetzd2envz52zzsaw_regsetz00,
		BgL_bgl__za752allocateza7d2r4481z00,
		BGl__z52allocatezd2regsetz80zzsaw_regsetz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long
		BgL_checksumz00_2498, char *BgL_fromz00_2499)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_regsetz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_regsetz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_regsetz00();
					BGl_cnstzd2initzd2zzsaw_regsetz00();
					BGl_importedzd2moduleszd2initz00zzsaw_regsetz00();
					BGl_objectzd2initzd2zzsaw_regsetz00();
					BGl_methodzd2initzd2zzsaw_regsetz00();
					BGl_toplevelzd2initzd2zzsaw_regsetz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_regset");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_regset");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			{	/* SawMill/regset.scm 15 */
				obj_t BgL_cportz00_2467;

				BgL_cportz00_2467 =
					bgl_open_input_string(BGl_string4448z00zzsaw_regsetz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2468;

					BgL_iz00_2468 = ((long) 1);
				BgL_loopz00_2469:
					if ((BgL_iz00_2468 == ((long) -1)))
						{	/* SawMill/regset.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/regset.scm 15 */
							{	/* SawMill/regset.scm 15 */
								obj_t BgL_arg4450z00_2471;

								{	/* SawMill/regset.scm 15 */

									{	/* SawMill/regset.scm 15 */
										obj_t BgL_locationz00_2473;

										BgL_locationz00_2473 = BBOOL(((bool_t) 0));
										{	/* SawMill/regset.scm 15 */

											BgL_arg4450z00_2471 =
												BGl_readz00zz__readerz00(BgL_cportz00_2467,
												BgL_locationz00_2473);
										}
									}
								}
								{	/* SawMill/regset.scm 15 */
									int BgL_auxz00_2518;

									BgL_auxz00_2518 = (int) (BgL_iz00_2468);
									CNST_TABLE_SET(BgL_auxz00_2518, BgL_arg4450z00_2471);
							}}
							{	/* SawMill/regset.scm 15 */
								int BgL_auxz00_2474;

								BgL_auxz00_2474 = (int) ((BgL_iz00_2468 - ((long) 1)));
								{
									long BgL_iz00_2523;

									BgL_iz00_2523 = (long) (BgL_auxz00_2474);
									BgL_iz00_2468 = BgL_iz00_2523;
									goto BgL_loopz00_2469;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 = BFALSE;
			return (BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00 =
				BFALSE, BUNSPEC);
		}
	}



/* make-empty-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t BgL_registersz00_6)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 69 */
			{	/* SawMill/regset.scm 70 */
				long BgL_lz00_1257;

				BgL_lz00_1257 = bgl_list_length(BgL_registersz00_6);
				{	/* SawMill/regset.scm 70 */
					obj_t BgL_vecz00_1258;

					if (
						(BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 ==
							BgL_registersz00_6))
						{	/* SawMill/regset.scm 71 */
							BgL_vecz00_1258 =
								BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00;
						}
					else
						{	/* SawMill/regset.scm 73 */
							obj_t BgL_vz00_1266;

							BgL_vz00_1266 = make_vector((int) (BgL_lz00_1257), BUNSPEC);
							{
								obj_t BgL_l4180z00_1268;

								BgL_l4180z00_1268 = BgL_registersz00_6;
							BgL_zc3anonymousza34202ze3z83_1269:
								if (PAIRP(BgL_l4180z00_1268))
									{	/* SawMill/regset.scm 74 */
										{	/* SawMill/regset.scm 75 */
											obj_t BgL_rz00_1271;

											BgL_rz00_1271 = CAR(BgL_l4180z00_1268);
											{	/* SawMill/regset.scm 75 */
												int BgL_arg4204z00_1272;

												{	/* SawMill/regset.scm 75 */
													BgL_rtl_regzf2razf2_bglt BgL_obj4080z00_2058;

													BgL_obj4080z00_2058 =
														(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1271);
													{
														obj_t BgL_auxz00_2534;

														{	/* SawMill/regset.scm 75 */
															BgL_objectz00_bglt BgL_auxz00_2535;

															BgL_auxz00_2535 =
																(BgL_objectz00_bglt) (BgL_obj4080z00_2058);
															BgL_auxz00_2534 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2535);
														}
														BgL_arg4204z00_1272 =
															(((BgL_rtl_regzf2razf2_bglt)
																CREF(BgL_auxz00_2534))->BgL_numz00);
												}}
												VECTOR_SET(BgL_vz00_1266, BgL_arg4204z00_1272,
													BgL_rz00_1271);
										}}
										{
											obj_t BgL_l4180z00_2540;

											BgL_l4180z00_2540 = CDR(BgL_l4180z00_1268);
											BgL_l4180z00_1268 = BgL_l4180z00_2540;
											goto BgL_zc3anonymousza34202ze3z83_1269;
										}
									}
								else
									{	/* SawMill/regset.scm 74 */
										((bool_t) 1);
									}
							}
							BgL_vecz00_1258 = BgL_vz00_1266;
						}
					{	/* SawMill/regset.scm 71 */

						BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 = BgL_registersz00_6;
						BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00 =
							BgL_vecz00_1258;
						{	/* SawMill/regset.scm 82 */
							obj_t BgL_arg4196z00_1260;

							{	/* SawMill/regset.scm 85 */
								long BgL_arg4197z00_1261;

								BgL_arg4197z00_1261 =
									(((long) 1) + (BgL_lz00_1257 / ((long) 8)));
								{	/* SawMill/regset.scm 85 */
									obj_t BgL_list4198z00_1262;

									BgL_list4198z00_1262 =
										MAKE_PAIR(BCHAR(((unsigned char) '\000')), BNIL);
									{	/* SawMill/regset.scm 85 */
										obj_t BgL_res4425z00_2073;

										{	/* SawMill/regset.scm 85 */
											obj_t BgL_arg2006z00_2070;

											BgL_arg2006z00_2070 = CAR(BgL_list4198z00_1262);
											BgL_res4425z00_2073 =
												make_string(BgL_arg4197z00_1261,
												CCHAR(BgL_arg2006z00_2070));
										}
										BgL_arg4196z00_1260 = BgL_res4425z00_2073;
							}}}
							{	/* SawMill/regset.scm 82 */
								BgL_regsetz00_bglt BgL_res4428z00_2097;

								{	/* SawMill/regset.scm 82 */
									int BgL_length4119z00_2074;

									int BgL_msiza7e4120za7_2075;

									obj_t BgL_regv4121z00_2076;

									BgL_length4119z00_2074 = (int) (((long) 0));
									BgL_msiza7e4120za7_2075 = (int) (BgL_lz00_1257);
									BgL_regv4121z00_2076 = BgL_vecz00_1258;
									{	/* SawMill/regset.scm 82 */
										BgL_regsetz00_bglt BgL_new4124z00_2079;

										{	/* SawMill/regset.scm 82 */
											BgL_regsetz00_bglt BgL_res4426z00_2084;

											{	/* SawMill/regset.scm 82 */
												BgL_regsetz00_bglt BgL_new4138z00_2080;

												BgL_new4138z00_2080 =
													((BgL_regsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_regsetz00_bgl))));
												BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
													(BgL_new4138z00_2080),
													BGl_classzd2numzd2zz__objectz00
													(BGl_regsetz00zzsaw_regsetz00));
												{	/* SawMill/regset.scm 82 */
													BgL_objectz00_bglt BgL_auxz00_2555;

													BgL_auxz00_2555 =
														(BgL_objectz00_bglt) (BgL_new4138z00_2080);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_2555, BFALSE);
												}
												BgL_res4426z00_2084 = BgL_new4138z00_2080;
											}
											BgL_new4124z00_2079 = BgL_res4426z00_2084;
										}
										{	/* SawMill/regset.scm 82 */
											BgL_regsetz00_bglt BgL_res4427z00_2096;

											{	/* SawMill/regset.scm 82 */
												BgL_regsetz00_bglt BgL_new4131z00_2085;

												BgL_new4131z00_2085 = BgL_new4124z00_2079;
												{	/* SawMill/regset.scm 82 */
													int BgL_length4126z00_2091;

													int BgL_msiza7e4127za7_2092;

													obj_t BgL_regv4128z00_2093;

													obj_t BgL_regl4129z00_2094;

													obj_t BgL_string4130z00_2095;

													BgL_length4126z00_2091 = BgL_length4119z00_2074;
													BgL_msiza7e4127za7_2092 = BgL_msiza7e4120za7_2075;
													BgL_regv4128z00_2093 = BgL_regv4121z00_2076;
													BgL_regl4129z00_2094 = BgL_registersz00_6;
													BgL_string4130z00_2095 = BgL_arg4196z00_1260;
													((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2085))->
															BgL_lengthz00) =
														((int) BgL_length4126z00_2091), BUNSPEC);
													((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2085))->
															BgL_msiza7eza7) =
														((int) BgL_msiza7e4127za7_2092), BUNSPEC);
													((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2085))->
															BgL_regvz00) =
														((obj_t) BgL_regv4128z00_2093), BUNSPEC);
													((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2085))->
															BgL_reglz00) =
														((obj_t) BgL_regl4129z00_2094), BUNSPEC);
													((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2085))->
															BgL_stringz00) =
														((obj_t) BgL_string4130z00_2095), BUNSPEC);
													BgL_res4427z00_2096 = BgL_new4131z00_2085;
											}} BgL_res4427z00_2096;
										}
										BgL_res4428z00_2097 = BgL_new4124z00_2079;
								}}
								return BgL_res4428z00_2097;
							}
						}
					}
				}
			}
		}
	}



/* _make-empty-regset */
	obj_t BGl__makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t BgL_envz00_2386,
		obj_t BgL_registersz00_2387)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 69 */
			return
				(obj_t) (BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
				(BgL_registersz00_2387));
		}
	}



/* list->regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t BgL_lstz00_7,
		obj_t BgL_registersz00_8)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 92 */
			{	/* SawMill/regset.scm 93 */
				BgL_regsetz00_bglt BgL_sz00_1276;

				BgL_sz00_1276 =
					BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_registersz00_8);
				{
					obj_t BgL_l4182z00_1278;

					BgL_l4182z00_1278 = BgL_lstz00_7;
				BgL_zc3anonymousza34207ze3z83_1279:
					if (PAIRP(BgL_l4182z00_1278))
						{	/* SawMill/regset.scm 94 */
							{	/* SawMill/regset.scm 94 */
								obj_t BgL_ez00_1281;

								BgL_ez00_1281 = CAR(BgL_l4182z00_1278);
								BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_sz00_1276,
									(BgL_rtl_regzf2razf2_bglt) (BgL_ez00_1281));
							}
							{
								obj_t BgL_l4182z00_2571;

								BgL_l4182z00_2571 = CDR(BgL_l4182z00_1278);
								BgL_l4182z00_1278 = BgL_l4182z00_2571;
								goto BgL_zc3anonymousza34207ze3z83_1279;
							}
						}
					else
						{	/* SawMill/regset.scm 94 */
							((bool_t) 1);
						}
				}
				return BgL_sz00_1276;
			}
		}
	}



/* _list->regset */
	obj_t BGl__listzd2ze3regsetz31zzsaw_regsetz00(obj_t BgL_envz00_2388,
		obj_t BgL_lstz00_2389, obj_t BgL_registersz00_2390)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 92 */
			return
				(obj_t) (BGl_listzd2ze3regsetz31zzsaw_regsetz00(BgL_lstz00_2389,
					BgL_registersz00_2390));
		}
	}



/* regset->list */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_9)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 100 */
			{	/* SawMill/regset.scm 101 */
				obj_t BgL_rz00_1284;

				BgL_rz00_1284 = MAKE_CELL(BNIL);
				{	/* SawMill/regset.scm 102 */
					obj_t BgL_zc3anonymousza34211ze3z83_2391;

					BgL_zc3anonymousza34211ze3z83_2391 =
						make_fx_procedure(BGl_zc3anonymousza34211ze3z83zzsaw_regsetz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34211ze3z83_2391,
						(int) (((long) 0)), BgL_rz00_1284);
					BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3anonymousza34211ze3z83_2391, BgL_sz00_9);
				}
				return bgl_reverse_bang(CELL_REF(BgL_rz00_1284));
			}
		}
	}



/* _regset->list */
	obj_t BGl__regsetzd2ze3listz31zzsaw_regsetz00(obj_t BgL_envz00_2392,
		obj_t BgL_sz00_2393)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 100 */
			return
				BGl_regsetzd2ze3listz31zzsaw_regsetz00(
				(BgL_regsetz00_bglt) (BgL_sz00_2393));
		}
	}



/* <anonymous:4211> */
	obj_t BGl_zc3anonymousza34211ze3z83zzsaw_regsetz00(obj_t BgL_envz00_2394,
		obj_t BgL_ez00_2396)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 102 */
			{	/* SawMill/regset.scm 102 */
				obj_t BgL_rz00_2395;

				BgL_rz00_2395 = PROCEDURE_REF(BgL_envz00_2394, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1286;

					BgL_ez00_1286 = BgL_ez00_2396;
					{	/* SawMill/regset.scm 102 */
						obj_t BgL_auxz00_2397;

						BgL_auxz00_2397 = MAKE_PAIR(BgL_ez00_1286, CELL_REF(BgL_rz00_2395));
						return CELL_SET(BgL_rz00_2395, BgL_auxz00_2397);
					}
				}
			}
		}
	}



/* duplicate-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_duplicatezd2regsetzd2zzsaw_regsetz00(BgL_regsetz00_bglt BgL_s0z00_10)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 108 */
			{	/* SawMill/regset.scm 109 */
				BgL_regsetz00_bglt BgL_sz00_1289;

				{	/* SawMill/regset.scm 109 */
					obj_t BgL_arg4212z00_1290;

					BgL_arg4212z00_1290 =
						(((BgL_regsetz00_bglt) CREF(BgL_s0z00_10))->BgL_reglz00);
					BgL_sz00_1289 =
						BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_arg4212z00_1290);
				}
				BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_sz00_1289, BgL_s0z00_10);
				return BgL_sz00_1289;
			}
		}
	}



/* _duplicate-regset */
	obj_t BGl__duplicatezd2regsetzd2zzsaw_regsetz00(obj_t BgL_envz00_2398,
		obj_t BgL_s0z00_2399)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 108 */
			return
				(obj_t) (BGl_duplicatezd2regsetzd2zzsaw_regsetz00(
					(BgL_regsetz00_bglt) (BgL_s0z00_2399)));
		}
	}



/* regset-member? */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regzf2razf2_bglt
		BgL_regz00_11, BgL_regsetz00_bglt BgL_sz00_12)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 116 */
			{	/* SawMill/regset.scm 118 */
				long BgL_basez00_1292;

				long BgL_bitz00_1293;

				{	/* SawMill/regset.scm 118 */
					long BgL_auxz00_2593;

					{	/* SawMill/regset.scm 118 */
						int BgL_auxz00_2594;

						{
							obj_t BgL_auxz00_2595;

							{	/* SawMill/regset.scm 118 */
								BgL_objectz00_bglt BgL_auxz00_2596;

								BgL_auxz00_2596 = (BgL_objectz00_bglt) (BgL_regz00_11);
								BgL_auxz00_2595 = BGL_OBJECT_WIDENING(BgL_auxz00_2596);
							}
							BgL_auxz00_2594 =
								(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_2595))->
								BgL_numz00);
						}
						BgL_auxz00_2593 = (long) (BgL_auxz00_2594);
					}
					BgL_basez00_1292 = (BgL_auxz00_2593 / ((long) 8));
				}
				{	/* SawMill/regset.scm 119 */
					int BgL_arg4222z00_1303;

					{
						obj_t BgL_auxz00_2602;

						{	/* SawMill/regset.scm 119 */
							BgL_objectz00_bglt BgL_auxz00_2603;

							BgL_auxz00_2603 = (BgL_objectz00_bglt) (BgL_regz00_11);
							BgL_auxz00_2602 = BGL_OBJECT_WIDENING(BgL_auxz00_2603);
						}
						BgL_arg4222z00_1303 =
							(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_2602))->BgL_numz00);
					}
					{	/* SawMill/regset.scm 119 */
						long BgL_auxz00_2607;

						BgL_auxz00_2607 = (long) (BgL_arg4222z00_1303);
						BgL_bitz00_1293 = (BgL_auxz00_2607 % ((long) 8));
				}}
				if (
					(BgL_basez00_1292 <
						STRING_LENGTH(
							(((BgL_regsetz00_bglt) CREF(BgL_sz00_12))->BgL_stringz00))))
					{	/* SawMill/regset.scm 120 */
						return
							(
							((STRING_REF(
										(((BgL_regsetz00_bglt) CREF(BgL_sz00_12))->BgL_stringz00),
										BgL_basez00_1292)) & (((long) 1) <<
									(int) (BgL_bitz00_1293))) > ((long) 0));
					}
				else
					{	/* SawMill/regset.scm 120 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _regset-member? */
	obj_t BGl__regsetzd2memberzf3z21zzsaw_regsetz00(obj_t BgL_envz00_2400,
		obj_t BgL_regz00_2401, obj_t BgL_sz00_2402)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 116 */
			return
				BBOOL(BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
					(BgL_rtl_regzf2razf2_bglt) (BgL_regz00_2401),
					(BgL_regsetz00_bglt) (BgL_sz00_2402)));
		}
	}



/* regset-empty? */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2emptyzf3z21zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_13)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 126 */
			return
				BBOOL(
				((long) (
						(((BgL_regsetz00_bglt) CREF(BgL_sz00_13))->BgL_lengthz00)) ==
					((long) 0)));
		}
	}



/* _regset-empty? */
	obj_t BGl__regsetzd2emptyzf3z21zzsaw_regsetz00(obj_t BgL_envz00_2403,
		obj_t BgL_sz00_2404)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 126 */
			return
				BGl_regsetzd2emptyzf3z21zzsaw_regsetz00(
				(BgL_regsetz00_bglt) (BgL_sz00_2404));
		}
	}



/* regset-add! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_14,
		BgL_rtl_regzf2razf2_bglt BgL_regz00_15)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 132 */
			{	/* SawMill/regset.scm 133 */
				bool_t BgL_testz00_2631;

				if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_regz00_15,
						BgL_sz00_14))
					{	/* SawMill/regset.scm 133 */
						BgL_testz00_2631 = ((bool_t) 0);
					}
				else
					{	/* SawMill/regset.scm 133 */
						BgL_testz00_2631 = ((bool_t) 1);
					}
				if (BgL_testz00_2631)
					{	/* SawMill/regset.scm 135 */
						long BgL_basez00_1309;

						long BgL_bitz00_1310;

						{	/* SawMill/regset.scm 135 */
							long BgL_auxz00_2634;

							{	/* SawMill/regset.scm 135 */
								int BgL_auxz00_2635;

								{
									obj_t BgL_auxz00_2636;

									{	/* SawMill/regset.scm 135 */
										BgL_objectz00_bglt BgL_auxz00_2637;

										BgL_auxz00_2637 = (BgL_objectz00_bglt) (BgL_regz00_15);
										BgL_auxz00_2636 = BGL_OBJECT_WIDENING(BgL_auxz00_2637);
									}
									BgL_auxz00_2635 =
										(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_2636))->
										BgL_numz00);
								}
								BgL_auxz00_2634 = (long) (BgL_auxz00_2635);
							}
							BgL_basez00_1309 = (BgL_auxz00_2634 / ((long) 8));
						}
						{	/* SawMill/regset.scm 136 */
							int BgL_arg4234z00_1320;

							{
								obj_t BgL_auxz00_2643;

								{	/* SawMill/regset.scm 136 */
									BgL_objectz00_bglt BgL_auxz00_2644;

									BgL_auxz00_2644 = (BgL_objectz00_bglt) (BgL_regz00_15);
									BgL_auxz00_2643 = BGL_OBJECT_WIDENING(BgL_auxz00_2644);
								}
								BgL_arg4234z00_1320 =
									(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_2643))->
									BgL_numz00);
							}
							{	/* SawMill/regset.scm 136 */
								long BgL_auxz00_2648;

								BgL_auxz00_2648 = (long) (BgL_arg4234z00_1320);
								BgL_bitz00_1310 = (BgL_auxz00_2648 % ((long) 8));
						}}
						{	/* SawMill/regset.scm 138 */
							long BgL_arg4226z00_1312;

							BgL_arg4226z00_1312 =
								(
								(long) (
									(((BgL_regsetz00_bglt) CREF(BgL_sz00_14))->BgL_lengthz00)) +
								((long) 1));
							{
								int BgL_auxz00_2654;

								BgL_auxz00_2654 = (int) (BgL_arg4226z00_1312);
								((((BgL_regsetz00_bglt) CREF(BgL_sz00_14))->BgL_lengthz00) =
									((int) BgL_auxz00_2654), BUNSPEC);
						}}
						{	/* SawMill/regset.scm 139 */
							long BgL_nvalz00_1315;

							BgL_nvalz00_1315 =
								(
								(STRING_REF(
										(((BgL_regsetz00_bglt) CREF(BgL_sz00_14))->BgL_stringz00),
										BgL_basez00_1309)) | (((long) 1) <<
									(int) (BgL_bitz00_1310)));
							{	/* SawMill/regset.scm 140 */
								obj_t BgL_arg4193z00_2157;

								unsigned char BgL_arg4194z00_2158;

								BgL_arg4193z00_2157 =
									(((BgL_regsetz00_bglt) CREF(BgL_sz00_14))->BgL_stringz00);
								BgL_arg4194z00_2158 = (BgL_nvalz00_1315);
								STRING_SET(BgL_arg4193z00_2157, BgL_basez00_1309,
									BgL_arg4194z00_2158);
							}
							return ((bool_t) 1);
						}
					}
				else
					{	/* SawMill/regset.scm 133 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _regset-add! */
	obj_t BGl__regsetzd2addz12zc0zzsaw_regsetz00(obj_t BgL_envz00_2405,
		obj_t BgL_sz00_2406, obj_t BgL_regz00_2407)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 132 */
			return
				BBOOL(BGl_regsetzd2addz12zc0zzsaw_regsetz00(
					(BgL_regsetz00_bglt) (BgL_sz00_2406),
					(BgL_rtl_regzf2razf2_bglt) (BgL_regz00_2407)));
		}
	}



/* regset-add*! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2addza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_16,
		obj_t BgL_regsz00_17)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 146 */
			{
				obj_t BgL_l4184z00_1324;

				BgL_l4184z00_1324 = BgL_regsz00_17;
			BgL_zc3anonymousza34237ze3z83_1325:
				if (PAIRP(BgL_l4184z00_1324))
					{	/* SawMill/regset.scm 147 */
						{	/* SawMill/regset.scm 147 */
							obj_t BgL_rz00_1327;

							BgL_rz00_1327 = CAR(BgL_l4184z00_1324);
							BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_sz00_16,
								(BgL_rtl_regzf2razf2_bglt) (BgL_rz00_1327));
						}
						{
							obj_t BgL_l4184z00_2675;

							BgL_l4184z00_2675 = CDR(BgL_l4184z00_1324);
							BgL_l4184z00_1324 = BgL_l4184z00_2675;
							goto BgL_zc3anonymousza34237ze3z83_1325;
						}
					}
				else
					{	/* SawMill/regset.scm 147 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* _regset-add*! */
	obj_t BGl__regsetzd2addza2z12z62zzsaw_regsetz00(obj_t BgL_envz00_2408,
		obj_t BgL_sz00_2409, obj_t BgL_regsz00_2410)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 146 */
			return
				BBOOL(BGl_regsetzd2addza2z12z62zzsaw_regsetz00(
					(BgL_regsetz00_bglt) (BgL_sz00_2409), BgL_regsz00_2410));
		}
	}



/* regset-remove! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2removez12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_18,
		BgL_rtl_regzf2razf2_bglt BgL_regz00_19)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 152 */
			if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_regz00_19, BgL_sz00_18))
				{	/* SawMill/regset.scm 155 */
					long BgL_basez00_1332;

					long BgL_bitz00_1333;

					{	/* SawMill/regset.scm 155 */
						long BgL_auxz00_2682;

						{	/* SawMill/regset.scm 155 */
							int BgL_auxz00_2683;

							{
								obj_t BgL_auxz00_2684;

								{	/* SawMill/regset.scm 155 */
									BgL_objectz00_bglt BgL_auxz00_2685;

									BgL_auxz00_2685 = (BgL_objectz00_bglt) (BgL_regz00_19);
									BgL_auxz00_2684 = BGL_OBJECT_WIDENING(BgL_auxz00_2685);
								}
								BgL_auxz00_2683 =
									(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_2684))->
									BgL_numz00);
							}
							BgL_auxz00_2682 = (long) (BgL_auxz00_2683);
						}
						BgL_basez00_1332 = (BgL_auxz00_2682 / ((long) 8));
					}
					{	/* SawMill/regset.scm 156 */
						int BgL_arg4248z00_1344;

						{
							obj_t BgL_auxz00_2691;

							{	/* SawMill/regset.scm 156 */
								BgL_objectz00_bglt BgL_auxz00_2692;

								BgL_auxz00_2692 = (BgL_objectz00_bglt) (BgL_regz00_19);
								BgL_auxz00_2691 = BGL_OBJECT_WIDENING(BgL_auxz00_2692);
							}
							BgL_arg4248z00_1344 =
								(((BgL_rtl_regzf2razf2_bglt) CREF(BgL_auxz00_2691))->
								BgL_numz00);
						}
						{	/* SawMill/regset.scm 156 */
							long BgL_auxz00_2696;

							BgL_auxz00_2696 = (long) (BgL_arg4248z00_1344);
							BgL_bitz00_1333 = (BgL_auxz00_2696 % ((long) 8));
					}}
					{	/* SawMill/regset.scm 158 */
						long BgL_arg4240z00_1335;

						BgL_arg4240z00_1335 =
							(
							(long) (
								(((BgL_regsetz00_bglt) CREF(BgL_sz00_18))->BgL_lengthz00)) -
							((long) 1));
						{
							int BgL_auxz00_2702;

							BgL_auxz00_2702 = (int) (BgL_arg4240z00_1335);
							((((BgL_regsetz00_bglt) CREF(BgL_sz00_18))->BgL_lengthz00) =
								((int) BgL_auxz00_2702), BUNSPEC);
					}}
					{	/* SawMill/regset.scm 159 */
						long BgL_nvalz00_1338;

						BgL_nvalz00_1338 =
							(
							(STRING_REF(
									(((BgL_regsetz00_bglt) CREF(BgL_sz00_18))->BgL_stringz00),
									BgL_basez00_1332)) & ~((((long) 1) <<
									(int) (BgL_bitz00_1333))));
						{	/* SawMill/regset.scm 161 */
							obj_t BgL_arg4193z00_2194;

							unsigned char BgL_arg4194z00_2195;

							BgL_arg4193z00_2194 =
								(((BgL_regsetz00_bglt) CREF(BgL_sz00_18))->BgL_stringz00);
							BgL_arg4194z00_2195 = (BgL_nvalz00_1338);
							STRING_SET(BgL_arg4193z00_2194, BgL_basez00_1332,
								BgL_arg4194z00_2195);
						}
						return ((bool_t) 1);
					}
				}
			else
				{	/* SawMill/regset.scm 153 */
					return ((bool_t) 0);
				}
		}
	}



/* _regset-remove! */
	obj_t BGl__regsetzd2removez12zc0zzsaw_regsetz00(obj_t BgL_envz00_2411,
		obj_t BgL_sz00_2412, obj_t BgL_regz00_2413)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 152 */
			return
				BBOOL(BGl_regsetzd2removez12zc0zzsaw_regsetz00(
					(BgL_regsetz00_bglt) (BgL_sz00_2412),
					(BgL_rtl_regzf2razf2_bglt) (BgL_regz00_2413)));
		}
	}



/* regset-union! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_s1z00_20,
		BgL_regsetz00_bglt BgL_s2z00_21)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 167 */
			{	/* SawMill/regset.scm 168 */
				obj_t BgL_st1z00_1346;

				obj_t BgL_st2z00_1347;

				BgL_st1z00_1346 =
					(((BgL_regsetz00_bglt) CREF(BgL_s1z00_20))->BgL_stringz00);
				BgL_st2z00_1347 =
					(((BgL_regsetz00_bglt) CREF(BgL_s2z00_21))->BgL_stringz00);
				{	/* SawMill/regset.scm 170 */
					long BgL_g4175z00_1348;

					BgL_g4175z00_1348 = (STRING_LENGTH(BgL_st1z00_1346) - ((long) 1));
					{
						long BgL_iz00_1350;

						bool_t BgL_resz00_1351;

						BgL_iz00_1350 = BgL_g4175z00_1348;
						BgL_resz00_1351 = ((bool_t) 0);
					BgL_zc3anonymousza34250ze3z83_1352:
						if ((BgL_iz00_1350 == ((long) -1)))
							{	/* SawMill/regset.scm 173 */
								return BgL_resz00_1351;
							}
						else
							{	/* SawMill/regset.scm 173 */
								if (
									(STRING_REF(BgL_st1z00_1346, BgL_iz00_1350) ==
										STRING_REF(BgL_st2z00_1347, BgL_iz00_1350)))
									{
										long BgL_iz00_2729;

										BgL_iz00_2729 = (BgL_iz00_1350 - ((long) 1));
										BgL_iz00_1350 = BgL_iz00_2729;
										goto BgL_zc3anonymousza34250ze3z83_1352;
									}
								else
									{	/* SawMill/regset.scm 178 */
										long BgL_n2z00_1356;

										BgL_n2z00_1356 =
											(STRING_REF(
												(((BgL_regsetz00_bglt) CREF(BgL_s2z00_21))->
													BgL_stringz00), BgL_iz00_1350));
										{	/* SawMill/regset.scm 179 */
											long BgL_g4176z00_1357;

											BgL_g4176z00_1357 =
												(STRING_REF(
													(((BgL_regsetz00_bglt) CREF(BgL_s1z00_20))->
														BgL_stringz00), BgL_iz00_1350));
											{
												long BgL_jz00_1359;

												bool_t BgL_resz00_1360;

												long BgL_n1z00_1361;

												BgL_jz00_1359 = ((long) 1);
												BgL_resz00_1360 = BgL_resz00_1351;
												BgL_n1z00_1361 = BgL_g4176z00_1357;
											BgL_zc3anonymousza34254ze3z83_1362:
												if ((BgL_jz00_1359 == ((long) 256)))
													{
														bool_t BgL_resz00_2741;

														long BgL_iz00_2739;

														BgL_iz00_2739 = (BgL_iz00_1350 - ((long) 1));
														BgL_resz00_2741 = BgL_resz00_1360;
														BgL_resz00_1351 = BgL_resz00_2741;
														BgL_iz00_1350 = BgL_iz00_2739;
														goto BgL_zc3anonymousza34250ze3z83_1352;
													}
												else
													{	/* SawMill/regset.scm 183 */
														if (
															((BgL_n1z00_1361 & BgL_jz00_1359) ==
																(BgL_n2z00_1356 & BgL_jz00_1359)))
															{
																long BgL_jz00_2746;

																BgL_jz00_2746 =
																	(BgL_jz00_1359 << (int) (((long) 1)));
																BgL_jz00_1359 = BgL_jz00_2746;
																goto BgL_zc3anonymousza34254ze3z83_1362;
															}
														else
															{	/* SawMill/regset.scm 185 */
																if (
																	((BgL_n1z00_1361 & BgL_jz00_1359) ==
																		((long) 0)))
																	{	/* SawMill/regset.scm 187 */
																		{	/* SawMill/regset.scm 189 */
																			long BgL_arg4261z00_1369;

																			BgL_arg4261z00_1369 =
																				(
																				(long) (
																					(((BgL_regsetz00_bglt)
																							CREF(BgL_s1z00_20))->
																						BgL_lengthz00)) + ((long) 1));
																			{
																				int BgL_auxz00_2755;

																				BgL_auxz00_2755 =
																					(int) (BgL_arg4261z00_1369);
																				((((BgL_regsetz00_bglt)
																							CREF(BgL_s1z00_20))->
																						BgL_lengthz00) =
																					((int) BgL_auxz00_2755), BUNSPEC);
																		}}
																		{	/* SawMill/regset.scm 190 */
																			long BgL_n1z00_1372;

																			BgL_n1z00_1372 =
																				(BgL_n1z00_1361 | BgL_jz00_1359);
																			{	/* SawMill/regset.scm 191 */
																				obj_t BgL_arg4193z00_2258;

																				unsigned char BgL_arg4194z00_2259;

																				BgL_arg4193z00_2258 =
																					(((BgL_regsetz00_bglt)
																						CREF(BgL_s1z00_20))->BgL_stringz00);
																				BgL_arg4194z00_2259 = (BgL_n1z00_1372);
																				STRING_SET(BgL_arg4193z00_2258,
																					BgL_iz00_1350, BgL_arg4194z00_2259);
																			}
																			{
																				long BgL_n1z00_2766;

																				bool_t BgL_resz00_2765;

																				long BgL_jz00_2762;

																				BgL_jz00_2762 =
																					(BgL_jz00_1359 << (int) (((long) 1)));
																				BgL_resz00_2765 = ((bool_t) 1);
																				BgL_n1z00_2766 = BgL_n1z00_1372;
																				BgL_n1z00_1361 = BgL_n1z00_2766;
																				BgL_resz00_1360 = BgL_resz00_2765;
																				BgL_jz00_1359 = BgL_jz00_2762;
																				goto BgL_zc3anonymousza34254ze3z83_1362;
																			}
																		}
																	}
																else
																	{
																		long BgL_jz00_2767;

																		BgL_jz00_2767 =
																			(BgL_jz00_1359 << (int) (((long) 1)));
																		BgL_jz00_1359 = BgL_jz00_2767;
																		goto BgL_zc3anonymousza34254ze3z83_1362;
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



/* _regset-union! */
	obj_t BGl__regsetzd2unionz12zc0zzsaw_regsetz00(obj_t BgL_envz00_2414,
		obj_t BgL_s1z00_2415, obj_t BgL_s2z00_2416)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 167 */
			return
				BBOOL(BGl_regsetzd2unionz12zc0zzsaw_regsetz00(
					(BgL_regsetz00_bglt) (BgL_s1z00_2415),
					(BgL_regsetz00_bglt) (BgL_s2z00_2416)));
		}
	}



/* regset-union*! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_22,
		obj_t BgL_ssz00_23)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 199 */
			if (NULLP(BgL_ssz00_23))
				{	/* SawMill/regset.scm 201 */
					return ((bool_t) 0);
				}
			else
				{	/* SawMill/regset.scm 201 */
					if (NULLP(CDR(BgL_ssz00_23)))
						{	/* SawMill/regset.scm 204 */
							obj_t BgL_arg4277z00_1387;

							BgL_arg4277z00_1387 = CAR(BgL_ssz00_23);
							return
								BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_sz00_22,
								(BgL_regsetz00_bglt) (BgL_arg4277z00_1387));
						}
					else
						{
							obj_t BgL_ssz00_1389;

							bool_t BgL_resz00_1390;

							BgL_ssz00_1389 = BgL_ssz00_23;
							BgL_resz00_1390 = ((bool_t) 0);
						BgL_zc3anonymousza34278ze3z83_1391:
							if (NULLP(BgL_ssz00_1389))
								{	/* SawMill/regset.scm 208 */
									return BgL_resz00_1390;
								}
							else
								{	/* SawMill/regset.scm 210 */
									obj_t BgL_arg4280z00_1393;

									bool_t BgL_arg4282z00_1394;

									BgL_arg4280z00_1393 = CDR(BgL_ssz00_1389);
									{	/* SawMill/regset.scm 210 */
										bool_t BgL__ortest_4179z00_1395;

										{	/* SawMill/regset.scm 210 */
											obj_t BgL_arg4283z00_1396;

											BgL_arg4283z00_1396 = CAR(BgL_ssz00_1389);
											BgL__ortest_4179z00_1395 =
												BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_sz00_22,
												(BgL_regsetz00_bglt) (BgL_arg4283z00_1396));
										}
										if (BgL__ortest_4179z00_1395)
											{	/* SawMill/regset.scm 210 */
												BgL_arg4282z00_1394 = BgL__ortest_4179z00_1395;
											}
										else
											{	/* SawMill/regset.scm 210 */
												BgL_arg4282z00_1394 = BgL_resz00_1390;
											}
									}
									{
										bool_t BgL_resz00_2790;

										obj_t BgL_ssz00_2789;

										BgL_ssz00_2789 = BgL_arg4280z00_1393;
										BgL_resz00_2790 = BgL_arg4282z00_1394;
										BgL_resz00_1390 = BgL_resz00_2790;
										BgL_ssz00_1389 = BgL_ssz00_2789;
										goto BgL_zc3anonymousza34278ze3z83_1391;
									}
								}
						}
				}
		}
	}



/* _regset-union*! */
	obj_t BGl__regsetzd2unionza2z12z62zzsaw_regsetz00(obj_t BgL_envz00_2417,
		obj_t BgL_sz00_2418, obj_t BgL_ssz00_2419)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 199 */
			return
				BBOOL(BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(
					(BgL_regsetz00_bglt) (BgL_sz00_2418), BgL_ssz00_2419));
		}
	}



/* regset-for-each */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t
		BgL_procz00_24, BgL_regsetz00_bglt BgL_sz00_25)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 215 */
			{
				long BgL_iz00_1400;

				{	/* SawMill/regset.scm 216 */
					bool_t BgL_auxz00_2794;

					BgL_iz00_1400 = ((long) 0);
				BgL_zc3anonymousza34286ze3z83_1401:
					if (
						(BgL_iz00_1400 <
							(long) (
								(((BgL_regsetz00_bglt) CREF(BgL_sz00_25))->BgL_msiza7eza7))))
						{	/* SawMill/regset.scm 218 */
							obj_t BgL_ez00_1403;

							{	/* SawMill/regset.scm 218 */
								obj_t BgL_arg4291z00_1406;

								BgL_arg4291z00_1406 =
									(((BgL_regsetz00_bglt) CREF(BgL_sz00_25))->BgL_regvz00);
								BgL_ez00_1403 =
									VECTOR_REF(BgL_arg4291z00_1406, (int) (BgL_iz00_1400));
							}
							if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
									(BgL_rtl_regzf2razf2_bglt) (BgL_ez00_1403), BgL_sz00_25))
								{	/* SawMill/regset.scm 219 */
									PROCEDURE_ENTRY(BgL_procz00_24) (BgL_procz00_24,
										BgL_ez00_1403, BEOA);
								}
							else
								{	/* SawMill/regset.scm 219 */
									BFALSE;
								}
							{
								long BgL_iz00_2807;

								BgL_iz00_2807 = (BgL_iz00_1400 + ((long) 1));
								BgL_iz00_1400 = BgL_iz00_2807;
								goto BgL_zc3anonymousza34286ze3z83_1401;
							}
						}
					else
						{	/* SawMill/regset.scm 217 */
							BgL_auxz00_2794 = ((bool_t) 0);
						}
					return BBOOL(BgL_auxz00_2794);
				}
			}
		}
	}



/* _regset-for-each */
	obj_t BGl__regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t BgL_envz00_2420,
		obj_t BgL_procz00_2421, obj_t BgL_sz00_2422)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 215 */
			return
				BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(BgL_procz00_2421,
				(BgL_regsetz00_bglt) (BgL_sz00_2422));
		}
	}



/* regset-filter */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2filterzd2zzsaw_regsetz00(obj_t
		BgL_procz00_26, BgL_regsetz00_bglt BgL_sz00_27)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 225 */
			return
				BGl_loopz00zzsaw_regsetz00(BgL_procz00_26, BgL_sz00_27, ((long) 0));
		}
	}



/* loop */
	obj_t BGl_loopz00zzsaw_regsetz00(obj_t BgL_procz00_2465,
		BgL_regsetz00_bglt BgL_sz00_2464, long BgL_iz00_1410)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 226 */
		BGl_loopz00zzsaw_regsetz00:
			if (
				(BgL_iz00_1410 <
					(long) (
						(((BgL_regsetz00_bglt) CREF(BgL_sz00_2464))->BgL_msiza7eza7))))
				{	/* SawMill/regset.scm 228 */
					obj_t BgL_ez00_1413;

					{	/* SawMill/regset.scm 228 */
						obj_t BgL_arg4300z00_1419;

						BgL_arg4300z00_1419 =
							(((BgL_regsetz00_bglt) CREF(BgL_sz00_2464))->BgL_regvz00);
						BgL_ez00_1413 =
							VECTOR_REF(BgL_arg4300z00_1419, (int) (BgL_iz00_1410));
					}
					{	/* SawMill/regset.scm 229 */
						bool_t BgL_testz00_2820;

						if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
								(BgL_rtl_regzf2razf2_bglt) (BgL_ez00_1413), BgL_sz00_2464))
							{	/* SawMill/regset.scm 229 */
								BgL_testz00_2820 =
									CBOOL(PROCEDURE_ENTRY(BgL_procz00_2465) (BgL_procz00_2465,
										BgL_ez00_1413, BEOA));
							}
						else
							{	/* SawMill/regset.scm 229 */
								BgL_testz00_2820 = ((bool_t) 0);
							}
						if (BgL_testz00_2820)
							{	/* SawMill/regset.scm 229 */
								return
									MAKE_PAIR(BgL_ez00_1413,
									BGl_loopz00zzsaw_regsetz00(BgL_procz00_2465, BgL_sz00_2464,
										(BgL_iz00_1410 + ((long) 1))));
							}
						else
							{
								long BgL_iz00_2830;

								BgL_iz00_2830 = (BgL_iz00_1410 + ((long) 1));
								BgL_iz00_1410 = BgL_iz00_2830;
								goto BGl_loopz00zzsaw_regsetz00;
							}
					}
				}
			else
				{	/* SawMill/regset.scm 227 */
					return BNIL;
				}
		}
	}



/* _regset-filter */
	obj_t BGl__regsetzd2filterzd2zzsaw_regsetz00(obj_t BgL_envz00_2423,
		obj_t BgL_procz00_2424, obj_t BgL_sz00_2425)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 225 */
			return
				BGl_regsetzd2filterzd2zzsaw_regsetz00(BgL_procz00_2424,
				(BgL_regsetz00_bglt) (BgL_sz00_2425));
		}
	}



/* regset-dump */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2dumpzd2zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_sz00_30, obj_t BgL_pz00_31)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 249 */
			{	/* SawMill/regset.scm 250 */
				obj_t BgL_pz00_1433;

				if (PAIRP(BgL_pz00_31))
					{	/* SawMill/regset.scm 250 */
						BgL_pz00_1433 = CAR(BgL_pz00_31);
					}
				else
					{	/* SawMill/regset.scm 250 */
						obj_t BgL_res4429z00_2297;

						{	/* SawMill/regset.scm 250 */
							obj_t BgL_auxz00_2837;

							BgL_auxz00_2837 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res4429z00_2297 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_auxz00_2837);
						}
						BgL_pz00_1433 = BgL_res4429z00_2297;
					}
				bgl_display_string(BGl_string4439z00zzsaw_regsetz00, BgL_pz00_1433);
				{	/* SawMill/regset.scm 253 */
					obj_t BgL_zc3anonymousza34310ze3z83_2426;

					BgL_zc3anonymousza34310ze3z83_2426 =
						make_fx_procedure(BGl_zc3anonymousza34310ze3z83zzsaw_regsetz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34310ze3z83_2426,
						(int) (((long) 0)), BgL_pz00_1433);
					BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3anonymousza34310ze3z83_2426, BgL_sz00_30);
				}
				return
					bgl_display_string(BGl_string4440z00zzsaw_regsetz00, BgL_pz00_1433);
			}
		}
	}



/* _regset-dump */
	obj_t BGl__regsetzd2dumpzd2zzsaw_regsetz00(obj_t BgL_envz00_2427,
		obj_t BgL_sz00_2428, obj_t BgL_pz00_2429)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 249 */
			return
				BGl_regsetzd2dumpzd2zzsaw_regsetz00(
				(BgL_regsetz00_bglt) (BgL_sz00_2428), BgL_pz00_2429);
		}
	}



/* <anonymous:4310> */
	obj_t BGl_zc3anonymousza34310ze3z83zzsaw_regsetz00(obj_t BgL_envz00_2430,
		obj_t BgL_ez00_2432)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 252 */
			{	/* SawMill/regset.scm 253 */
				obj_t BgL_pz00_2431;

				BgL_pz00_2431 = PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 0)));
				{
					obj_t BgL_ez00_1435;

					BgL_ez00_1435 = BgL_ez00_2432;
					bgl_display_string(BGl_string4441z00zzsaw_regsetz00, BgL_pz00_2431);
					return
						BGl_dumpz00zzsaw_defsz00(BgL_ez00_1435, BgL_pz00_2431,
						(int) (((long) 0)));
		}}}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			{	/* SawMill/regset.scm 27 */
				obj_t BgL_arg4312z00_1439;

				obj_t BgL_arg4313z00_1440;

				obj_t BgL_arg4316z00_1443;

				BgL_arg4312z00_1439 = CNST_TABLE_REF(((long) 0));
				BgL_arg4313z00_1440 = BGl_objectz00zz__objectz00;
				{	/* SawMill/regset.scm 27 */
					obj_t BgL_v4186z00_1444;

					BgL_v4186z00_1444 = create_vector((int) (((long) 0)));
					BgL_arg4316z00_1443 = BgL_v4186z00_1444;
				}
				BGl_regsetz00zzsaw_regsetz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4312z00_1439,
					BgL_arg4313z00_1440, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2regsetzd2envz52zzsaw_regsetz00,
					BGl_regsetzd2nilzd2envz00zzsaw_regsetz00,
					BGl_regsetzf3zd2envz21zzsaw_regsetz00, ((long) 143126315), BFALSE,
					BFALSE, BgL_arg4316z00_1443);
			}
			return (BGl_z52thezd2regsetzd2nilz52zzsaw_regsetz00 = BUNSPEC, BUNSPEC);
		}
	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_regsetz00(obj_t
		BgL_obj4161z00_32)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4161z00_32,
				BGl_regsetz00zzsaw_regsetz00);
		}
	}



/* _regset? */
	obj_t BGl__regsetzf3zf3zzsaw_regsetz00(obj_t BgL_envz00_2435,
		obj_t BgL_obj4161z00_2436)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4161z00_2436,
					BGl_regsetz00zzsaw_regsetz00));
		}
	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_regsetz00(int
		BgL_length4119z00_36, int BgL_msiza7e4120za7_37, obj_t BgL_regv4121z00_38,
		obj_t BgL_regl4122z00_39, obj_t BgL_string4123z00_40)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{	/* SawMill/regset.scm 27 */
				BgL_regsetz00_bglt BgL_new4124z00_2304;

				{	/* SawMill/regset.scm 27 */
					BgL_regsetz00_bglt BgL_res4430z00_2309;

					{	/* SawMill/regset.scm 27 */
						BgL_regsetz00_bglt BgL_new4138z00_2305;

						BgL_new4138z00_2305 =
							((BgL_regsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_regsetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4138z00_2305),
							BGl_classzd2numzd2zz__objectz00(BGl_regsetz00zzsaw_regsetz00));
						{	/* SawMill/regset.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_2866;

							BgL_auxz00_2866 = (BgL_objectz00_bglt) (BgL_new4138z00_2305);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2866, BFALSE);
						}
						BgL_res4430z00_2309 = BgL_new4138z00_2305;
					}
					BgL_new4124z00_2304 = BgL_res4430z00_2309;
				}
				{	/* SawMill/regset.scm 27 */
					BgL_regsetz00_bglt BgL_res4431z00_2321;

					{	/* SawMill/regset.scm 27 */
						BgL_regsetz00_bglt BgL_new4131z00_2310;

						BgL_new4131z00_2310 = BgL_new4124z00_2304;
						{	/* SawMill/regset.scm 27 */
							int BgL_length4126z00_2316;

							int BgL_msiza7e4127za7_2317;

							obj_t BgL_regv4128z00_2318;

							obj_t BgL_regl4129z00_2319;

							obj_t BgL_string4130z00_2320;

							BgL_length4126z00_2316 = BgL_length4119z00_36;
							BgL_msiza7e4127za7_2317 = BgL_msiza7e4120za7_37;
							BgL_regv4128z00_2318 = BgL_regv4121z00_38;
							BgL_regl4129z00_2319 = BgL_regl4122z00_39;
							BgL_string4130z00_2320 = BgL_string4123z00_40;
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2310))->
									BgL_lengthz00) = ((int) BgL_length4126z00_2316), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2310))->
									BgL_msiza7eza7) = ((int) BgL_msiza7e4127za7_2317), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2310))->BgL_regvz00) =
								((obj_t) BgL_regv4128z00_2318), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2310))->BgL_reglz00) =
								((obj_t) BgL_regl4129z00_2319), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2310))->
									BgL_stringz00) = ((obj_t) BgL_string4130z00_2320), BUNSPEC);
							BgL_res4431z00_2321 = BgL_new4131z00_2310;
					}} BgL_res4431z00_2321;
				}
				return BgL_new4124z00_2304;
			}
		}
	}



/* _make-regset */
	obj_t BGl__makezd2regsetzd2zzsaw_regsetz00(obj_t BgL_envz00_2437,
		obj_t BgL_length4119z00_2438, obj_t BgL_msiza7e4120za7_2439,
		obj_t BgL_regv4121z00_2440, obj_t BgL_regl4122z00_2441,
		obj_t BgL_string4123z00_2442)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			return
				(obj_t) (BGl_makezd2regsetzd2zzsaw_regsetz00(CINT
					(BgL_length4119z00_2438), CINT(BgL_msiza7e4120za7_2439),
					BgL_regv4121z00_2440, BgL_regl4122z00_2441, BgL_string4123z00_2442));
		}
	}



/* fill-regset! */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_fillzd2regsetz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_new4131z00_41,
		int BgL_length4126z00_42, int BgL_msiza7e4127za7_43,
		obj_t BgL_regv4128z00_44, obj_t BgL_regl4129z00_45,
		obj_t BgL_string4130z00_46)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{	/* SawMill/regset.scm 27 */
				int BgL_length4126z00_2476;

				int BgL_msiza7e4127za7_2477;

				obj_t BgL_regv4128z00_2478;

				obj_t BgL_regl4129z00_2479;

				obj_t BgL_string4130z00_2480;

				BgL_length4126z00_2476 = BgL_length4126z00_42;
				BgL_msiza7e4127za7_2477 = BgL_msiza7e4127za7_43;
				BgL_regv4128z00_2478 = BgL_regv4128z00_44;
				BgL_regl4129z00_2479 = BgL_regl4129z00_45;
				BgL_string4130z00_2480 = BgL_string4130z00_46;
				((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_41))->BgL_lengthz00) =
					((int) BgL_length4126z00_2476), BUNSPEC);
				((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_41))->BgL_msiza7eza7) =
					((int) BgL_msiza7e4127za7_2477), BUNSPEC);
				((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_41))->BgL_regvz00) =
					((obj_t) BgL_regv4128z00_2478), BUNSPEC);
				((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_41))->BgL_reglz00) =
					((obj_t) BgL_regl4129z00_2479), BUNSPEC);
				((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_41))->BgL_stringz00) =
					((obj_t) BgL_string4130z00_2480), BUNSPEC);
				return BgL_new4131z00_41;
			}
		}
	}



/* _fill-regset! */
	obj_t BGl__fillzd2regsetz12zc0zzsaw_regsetz00(obj_t BgL_envz00_2443,
		obj_t BgL_new4131z00_2444, obj_t BgL_length4126z00_2445,
		obj_t BgL_msiza7e4127za7_2446, obj_t BgL_regv4128z00_2447,
		obj_t BgL_regl4129z00_2448, obj_t BgL_string4130z00_2449)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{	/* SawMill/regset.scm 27 */
				BgL_regsetz00_bglt BgL_auxz00_2883;

				{	/* SawMill/regset.scm 27 */
					BgL_regsetz00_bglt BgL_res4451z00_2492;

					{	/* SawMill/regset.scm 27 */
						BgL_regsetz00_bglt BgL_new4131z00_2481;

						int BgL_length4126z00_2482;

						int BgL_msiza7e4127za7_2483;

						obj_t BgL_regv4128z00_2484;

						obj_t BgL_regl4129z00_2485;

						obj_t BgL_string4130z00_2486;

						BgL_new4131z00_2481 = (BgL_regsetz00_bglt) (BgL_new4131z00_2444);
						BgL_length4126z00_2482 = CINT(BgL_length4126z00_2445);
						BgL_msiza7e4127za7_2483 = CINT(BgL_msiza7e4127za7_2446);
						BgL_regv4128z00_2484 = BgL_regv4128z00_2447;
						BgL_regl4129z00_2485 = BgL_regl4129z00_2448;
						BgL_string4130z00_2486 = BgL_string4130z00_2449;
						{	/* SawMill/regset.scm 27 */
							int BgL_length4126z00_2487;

							int BgL_msiza7e4127za7_2488;

							obj_t BgL_regv4128z00_2489;

							obj_t BgL_regl4129z00_2490;

							obj_t BgL_string4130z00_2491;

							BgL_length4126z00_2487 = BgL_length4126z00_2482;
							BgL_msiza7e4127za7_2488 = BgL_msiza7e4127za7_2483;
							BgL_regv4128z00_2489 = BgL_regv4128z00_2484;
							BgL_regl4129z00_2490 = BgL_regl4129z00_2485;
							BgL_string4130z00_2491 = BgL_string4130z00_2486;
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2481))->
									BgL_lengthz00) = ((int) BgL_length4126z00_2487), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2481))->
									BgL_msiza7eza7) = ((int) BgL_msiza7e4127za7_2488), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2481))->BgL_regvz00) =
								((obj_t) BgL_regv4128z00_2489), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2481))->BgL_reglz00) =
								((obj_t) BgL_regl4129z00_2490), BUNSPEC);
							((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2481))->
									BgL_stringz00) = ((obj_t) BgL_string4130z00_2491), BUNSPEC);
							BgL_res4451z00_2492 = BgL_new4131z00_2481;
					}}
					BgL_auxz00_2883 = BgL_res4451z00_2492;
				}
				return (obj_t) (BgL_auxz00_2883);
			}
		}
	}



/* %allocate-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_z52allocatezd2regsetz80zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{	/* SawMill/regset.scm 27 */
				BgL_regsetz00_bglt BgL_new4138z00_2493;

				BgL_new4138z00_2493 =
					((BgL_regsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_regsetz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4138z00_2493),
					BGl_classzd2numzd2zz__objectz00(BGl_regsetz00zzsaw_regsetz00));
				{	/* SawMill/regset.scm 27 */
					BgL_objectz00_bglt BgL_auxz00_2897;

					BgL_auxz00_2897 = (BgL_objectz00_bglt) (BgL_new4138z00_2493);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2897, BFALSE);
				}
				return BgL_new4138z00_2493;
			}
		}
	}



/* _%allocate-regset */
	obj_t BGl__z52allocatezd2regsetz80zzsaw_regsetz00(obj_t BgL_envz00_2433)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{	/* SawMill/regset.scm 27 */
				BgL_regsetz00_bglt BgL_auxz00_2900;

				{	/* SawMill/regset.scm 27 */
					BgL_regsetz00_bglt BgL_res4452z00_2497;

					{	/* SawMill/regset.scm 27 */
						BgL_regsetz00_bglt BgL_new4138z00_2495;

						BgL_new4138z00_2495 =
							((BgL_regsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_regsetz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new4138z00_2495),
							BGl_classzd2numzd2zz__objectz00(BGl_regsetz00zzsaw_regsetz00));
						{	/* SawMill/regset.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_2905;

							BgL_auxz00_2905 = (BgL_objectz00_bglt) (BgL_new4138z00_2495);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2905, BFALSE);
						}
						BgL_res4452z00_2497 = BgL_new4138z00_2495;
					}
					BgL_auxz00_2900 = BgL_res4452z00_2497;
				}
				return (obj_t) (BgL_auxz00_2900);
			}
		}
	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			if ((BGl_z52thezd2regsetzd2nilz52zzsaw_regsetz00 == BUNSPEC))
				{	/* SawMill/regset.scm 27 */
					{	/* SawMill/regset.scm 27 */
						BgL_regsetz00_bglt BgL_res4432z00_2335;

						{	/* SawMill/regset.scm 27 */
							BgL_regsetz00_bglt BgL_new4138z00_2331;

							BgL_new4138z00_2331 =
								((BgL_regsetz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_regsetz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new4138z00_2331),
								BGl_classzd2numzd2zz__objectz00(BGl_regsetz00zzsaw_regsetz00));
							{	/* SawMill/regset.scm 27 */
								BgL_objectz00_bglt BgL_auxz00_2915;

								BgL_auxz00_2915 = (BgL_objectz00_bglt) (BgL_new4138z00_2331);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2915, BFALSE);
							}
							BgL_res4432z00_2335 = BgL_new4138z00_2331;
						}
						BGl_z52thezd2regsetzd2nilz52zzsaw_regsetz00 =
							(obj_t) (BgL_res4432z00_2335);
					}
					{	/* SawMill/regset.scm 27 */
						BgL_regsetz00_bglt BgL_res4433z00_2347;

						{	/* SawMill/regset.scm 27 */
							BgL_regsetz00_bglt BgL_new4131z00_2336;

							int BgL_length4126z00_2337;

							int BgL_msiza7e4127za7_2338;

							obj_t BgL_regv4128z00_2339;

							BgL_new4131z00_2336 =
								(BgL_regsetz00_bglt)
								(BGl_z52thezd2regsetzd2nilz52zzsaw_regsetz00);
							BgL_length4126z00_2337 = (int) (((long) 0));
							BgL_msiza7e4127za7_2338 = (int) (((long) 0));
							BgL_regv4128z00_2339 = CNST_TABLE_REF(((long) 1));
							{	/* SawMill/regset.scm 27 */
								int BgL_length4126z00_2342;

								int BgL_msiza7e4127za7_2343;

								obj_t BgL_regv4128z00_2344;

								obj_t BgL_regl4129z00_2345;

								obj_t BgL_string4130z00_2346;

								BgL_length4126z00_2342 = BgL_length4126z00_2337;
								BgL_msiza7e4127za7_2343 = BgL_msiza7e4127za7_2338;
								BgL_regv4128z00_2344 = BgL_regv4128z00_2339;
								BgL_regl4129z00_2345 = BNIL;
								BgL_string4130z00_2346 = BGl_string4442z00zzsaw_regsetz00;
								((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2336))->
										BgL_lengthz00) = ((int) BgL_length4126z00_2342), BUNSPEC);
								((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2336))->
										BgL_msiza7eza7) = ((int) BgL_msiza7e4127za7_2343), BUNSPEC);
								((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2336))->
										BgL_regvz00) = ((obj_t) BgL_regv4128z00_2344), BUNSPEC);
								((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2336))->
										BgL_reglz00) = ((obj_t) BgL_regl4129z00_2345), BUNSPEC);
								((((BgL_regsetz00_bglt) CREF(BgL_new4131z00_2336))->
										BgL_stringz00) = ((obj_t) BgL_string4130z00_2346), BUNSPEC);
								BgL_res4433z00_2347 = BgL_new4131z00_2336;
						}}
						(obj_t) (BgL_res4433z00_2347);
				}}
			else
				{	/* SawMill/regset.scm 27 */
					BFALSE;
				}
			return (BgL_regsetz00_bglt) (BGl_z52thezd2regsetzd2nilz52zzsaw_regsetz00);
		}
	}



/* _regset-nil */
	obj_t BGl__regsetzd2nilzd2zzsaw_regsetz00(obj_t BgL_envz00_2434)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			return (obj_t) (BGl_regsetzd2nilzd2zzsaw_regsetz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_regsetz00zzsaw_regsetz00, BGl_proc4443z00zzsaw_regsetz00,
				BGl_string4444z00zzsaw_regsetz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_regsetz00zzsaw_regsetz00, BGl_proc4445z00zzsaw_regsetz00,
				BGl_string4446z00zzsaw_regsetz00);
		}
	}



/* struct+object->objec4190 */
	obj_t BGl_structzb2objectzd2ze3objec4190z83zzsaw_regsetz00(obj_t
		BgL_envz00_2452, obj_t BgL_oz00_2453, obj_t BgL_sz00_2454)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{
				BgL_regsetz00_bglt BgL_oz00_2030;

				obj_t BgL_sz00_2031;

				{	/* SawMill/regset.scm 27 */
					BgL_regsetz00_bglt BgL_auxz00_2934;

					BgL_oz00_2030 = (BgL_regsetz00_bglt) (BgL_oz00_2453);
					BgL_sz00_2031 = BgL_sz00_2454;
					{	/* SawMill/regset.scm 27 */
						obj_t BgL_arg4422z00_2034;

						BgL_arg4422z00_2034 = STRUCT_REF(BgL_sz00_2031, (int) (((long) 0)));
						{	/* SawMill/regset.scm 27 */
							BgL_objectz00_bglt BgL_auxz00_2937;

							BgL_auxz00_2937 = (BgL_objectz00_bglt) (BgL_oz00_2030);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2937, BgL_arg4422z00_2034);
					}}
					{
						int BgL_auxz00_2940;

						BgL_auxz00_2940 =
							CINT(STRUCT_REF(BgL_sz00_2031, (int) (((long) 1))));
						((((BgL_regsetz00_bglt) CREF(BgL_oz00_2030))->BgL_lengthz00) =
							((int) BgL_auxz00_2940), BUNSPEC);
					}
					{
						int BgL_auxz00_2945;

						BgL_auxz00_2945 =
							CINT(STRUCT_REF(BgL_sz00_2031, (int) (((long) 2))));
						((((BgL_regsetz00_bglt) CREF(BgL_oz00_2030))->BgL_msiza7eza7) =
							((int) BgL_auxz00_2945), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2950;

						BgL_auxz00_2950 = STRUCT_REF(BgL_sz00_2031, (int) (((long) 3)));
						((((BgL_regsetz00_bglt) CREF(BgL_oz00_2030))->BgL_regvz00) =
							((obj_t) BgL_auxz00_2950), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2954;

						BgL_auxz00_2954 = STRUCT_REF(BgL_sz00_2031, (int) (((long) 4)));
						((((BgL_regsetz00_bglt) CREF(BgL_oz00_2030))->BgL_reglz00) =
							((obj_t) BgL_auxz00_2954), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2958;

						BgL_auxz00_2958 = STRUCT_REF(BgL_sz00_2031, (int) (((long) 5)));
						((((BgL_regsetz00_bglt) CREF(BgL_oz00_2030))->BgL_stringz00) =
							((obj_t) BgL_auxz00_2958), BUNSPEC);
					}
					BgL_auxz00_2934 = BgL_oz00_2030;
					return (obj_t) (BgL_auxz00_2934);
				}
			}
		}
	}



/* object->struct-regse4188 */
	obj_t BGl_objectzd2ze3structzd2regse4188ze3zzsaw_regsetz00(obj_t
		BgL_envz00_2455, obj_t BgL_obj4139z00_2456)
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 27 */
			{
				BgL_regsetz00_bglt BgL_obj4139z00_2014;

				BgL_obj4139z00_2014 = (BgL_regsetz00_bglt) (BgL_obj4139z00_2456);
				{	/* SawMill/regset.scm 27 */
					obj_t BgL_res4140z00_2017;

					{	/* SawMill/regset.scm 27 */
						obj_t BgL_keyz00_2348;

						BgL_keyz00_2348 = CNST_TABLE_REF(((long) 0));
						BgL_res4140z00_2017 =
							make_struct(BgL_keyz00_2348, (int) (((long) 6)), BUNSPEC);
					}
					{	/* SawMill/regset.scm 27 */
						int BgL_auxz00_2967;

						BgL_auxz00_2967 = (int) (((long) 0));
						STRUCT_SET(BgL_res4140z00_2017, BgL_auxz00_2967, BFALSE);
					}
					{	/* SawMill/regset.scm 27 */
						int BgL_arg4412z00_2019;

						BgL_arg4412z00_2019 =
							(((BgL_regsetz00_bglt) CREF(BgL_obj4139z00_2014))->BgL_lengthz00);
						{	/* SawMill/regset.scm 27 */
							obj_t BgL_auxz00_2973;

							int BgL_auxz00_2971;

							BgL_auxz00_2973 = BINT(BgL_arg4412z00_2019);
							BgL_auxz00_2971 = (int) (((long) 1));
							STRUCT_SET(BgL_res4140z00_2017, BgL_auxz00_2971, BgL_auxz00_2973);
					}}
					{	/* SawMill/regset.scm 27 */
						int BgL_arg4414z00_2021;

						BgL_arg4414z00_2021 =
							(((BgL_regsetz00_bglt) CREF(BgL_obj4139z00_2014))->
							BgL_msiza7eza7);
						{	/* SawMill/regset.scm 27 */
							obj_t BgL_auxz00_2979;

							int BgL_auxz00_2977;

							BgL_auxz00_2979 = BINT(BgL_arg4414z00_2021);
							BgL_auxz00_2977 = (int) (((long) 2));
							STRUCT_SET(BgL_res4140z00_2017, BgL_auxz00_2977, BgL_auxz00_2979);
					}}
					{	/* SawMill/regset.scm 27 */
						obj_t BgL_arg4416z00_2023;

						BgL_arg4416z00_2023 =
							(((BgL_regsetz00_bglt) CREF(BgL_obj4139z00_2014))->BgL_regvz00);
						{	/* SawMill/regset.scm 27 */
							int BgL_auxz00_2983;

							BgL_auxz00_2983 = (int) (((long) 3));
							STRUCT_SET(BgL_res4140z00_2017, BgL_auxz00_2983,
								BgL_arg4416z00_2023);
					}}
					{	/* SawMill/regset.scm 27 */
						obj_t BgL_arg4418z00_2025;

						BgL_arg4418z00_2025 =
							(((BgL_regsetz00_bglt) CREF(BgL_obj4139z00_2014))->BgL_reglz00);
						{	/* SawMill/regset.scm 27 */
							int BgL_auxz00_2987;

							BgL_auxz00_2987 = (int) (((long) 4));
							STRUCT_SET(BgL_res4140z00_2017, BgL_auxz00_2987,
								BgL_arg4418z00_2025);
					}}
					{	/* SawMill/regset.scm 27 */
						obj_t BgL_arg4420z00_2027;

						BgL_arg4420z00_2027 =
							(((BgL_regsetz00_bglt) CREF(BgL_obj4139z00_2014))->BgL_stringz00);
						{	/* SawMill/regset.scm 27 */
							int BgL_auxz00_2991;

							BgL_auxz00_2991 = (int) (((long) 5));
							STRUCT_SET(BgL_res4140z00_2017, BgL_auxz00_2991,
								BgL_arg4420z00_2027);
					}}
					return BgL_res4140z00_2017;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_regsetz00()
	{
		AN_OBJECT;
		{	/* SawMill/regset.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 123885324),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 345795750),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					167519689), BSTRING_TO_STRING(BGl_string4447z00zzsaw_regsetz00));
		}
	}

#ifdef __cplusplus
}
#endif
