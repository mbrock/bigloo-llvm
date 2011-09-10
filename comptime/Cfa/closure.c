/*===========================================================================*/
/*   (Cfa/closure.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/closure.scm)*/
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

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

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

	typedef struct BgL_funcallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
		obj_t BgL_strengthz00;
	}                 *BgL_funcallz00_bglt;

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

	typedef struct BgL_makezd2procedurezd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_valueszd2approxzd2;
		long BgL_lostzd2stampzd2;
		bool_t BgL_xzd2tzf3z21;
		bool_t BgL_xz00;
		bool_t BgL_tz00;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                                *BgL_makezd2procedurezd2appz00_bglt;


	static obj_t BGl__addzd2funcallz12zc0zzcfa_closurez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_Tzd2fixzd2pointz12z12zzcfa_closurez00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_za2funcallzd2listza2zd2zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_startzd2cachezd2zzcfa_closurez00();
	static obj_t BGl__approxzd2procedurezd2elzf3zf3zzcfa_closurez00(obj_t, obj_t);
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static obj_t BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcfa_closurez00();
	static obj_t BGl_za2procedurezd21zd2elzd2setz12za2zc0zzcfa_closurez00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_ltypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_closurez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34753ze3z83zzcfa_closurez00(obj_t, obj_t);
	static obj_t BGl_za2makezd2elzd2procedurezd21za2zd2zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34758ze3z83zzcfa_closurez00(obj_t, obj_t);
	static bool_t BGl_lightzd2funcallz12zc0zzcfa_closurez00();
	static bool_t BGl_lightzd2makezd2procedurez12z12zzcfa_closurez00();
	static obj_t BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl__addzd2procedurezd2refz12z12zzcfa_closurez00(obj_t, obj_t);
	static bool_t BGl_Xz12z12zzcfa_closurez00(obj_t);
	static obj_t BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzcfa_closurez00();
	extern obj_t BGl_setzd2ze3listz31zzcfa_setz00(obj_t);
	static obj_t BGl__addzd2makezd2procedurez12z12zzcfa_closurez00(obj_t, obj_t);
	static obj_t BGl_showzd2Xzd2Tz00zzcfa_closurez00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_closurez00 = BUNSPEC;
	extern obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt);
	extern obj_t BGl_scnstz00zzast_varz00;
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2funcallz12zc0zzcfa_closurez00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_closurez00();
	static obj_t BGl_stopzd2cachezd2zzcfa_closurez00();
	static obj_t BGl__closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t,
		obj_t);
	extern obj_t BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
	static bool_t BGl_showz00zzcfa_closurez00(obj_t, obj_t);
	static obj_t BGl__closurezd2optimiza7ationzf3z86zzcfa_closurez00(obj_t);
	static obj_t BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl__approxzd2procedurezd2el1zf3zf3zzcfa_closurez00(obj_t,
		obj_t);
	static obj_t BGl_za2procedurezd2refza2zd2zzcfa_closurez00 = BUNSPEC;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_closurez00();
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 = BUNSPEC;
	extern obj_t BGl_lightzd2typez12zc0zzcfa_ltypez00(obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_za2procedurezd21zd2elzd2refza2zd2zzcfa_closurez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_closurezd2optimiza7ationzf3z86zzcfa_closurez00();
	BGL_EXPORTED_DECL bool_t
		BGl_approxzd2procedurezd2el1zf3zf3zzcfa_closurez00(BgL_approxz00_bglt);
	extern obj_t BGl_setzd2lengthzd2zzcfa_setz00(obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static bool_t BGl_lightzd2accessz12zc0zzcfa_closurez00();
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	extern obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_closurez00();
	static obj_t BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 = BUNSPEC;
	static obj_t __cnst[21];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5010z00zzcfa_closurez00,
		BgL_bgl_za7c3anonymousza7a345018z00,
		BGl_zc3anonymousza34758ze3z83zzcfa_closurez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5009z00zzcfa_closurez00,
		BgL_bgl_za7c3anonymousza7a345019z00,
		BGl_zc3anonymousza34753ze3z83zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2procedurezd2elzf3zd2envz21zzcfa_closurez00,
		BgL_bgl__approxza7d2proced5020za7,
		BGl__approxzd2procedurezd2elzf3zf3zzcfa_closurez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5008z00zzcfa_closurez00,
		BgL_bgl_string5008za700za7za7c5021za7, "   . Light closures", 19);
	      DEFINE_STRING(BGl_string5011z00zzcfa_closurez00,
		BgL_bgl_string5011za700za7za7c5022za7, ": ", 2);
	      DEFINE_STRING(BGl_string5012z00zzcfa_closurez00,
		BgL_bgl_string5012za700za7za7c5023za7, "     ", 5);
	      DEFINE_STRING(BGl_string5013z00zzcfa_closurez00,
		BgL_bgl_string5013za700za7za7c5024za7, "        ", 8);
	      DEFINE_STRING(BGl_string5014z00zzcfa_closurez00,
		BgL_bgl_string5014za700za7za7c5025za7, "cfa_closure", 11);
	      DEFINE_STRING(BGl_string5015z00zzcfa_closurez00,
		BgL_bgl_string5015za700za7za7c5026za7,
		"make-l-procedure make-el-procedure-1 make-el-procedure procedure-1-el-set! procedure-1-el-ref procedure-el-set! procedure-el-ref procedure-l-set! procedure-l-ref procedure-set! foreign procedure-ref T X light elight nothing-to-do sefun selfun done ok ",
		251);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2procedurezd2refz12zd2envzc0zzcfa_closurez00,
		BgL_bgl__addza7d2procedure5027za7,
		BGl__addzd2procedurezd2refz12z12zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closurezd2optimiza7ationz12zd2envzb5zzcfa_closurez00,
		BgL_bgl__closureza7d2optim5028za7,
		BGl__closurezd2optimiza7ationz12z67zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_addzd2funcallz12zd2envz12zzcfa_closurez00,
		BgL_bgl__addza7d2funcallza715029z00,
		BGl__addzd2funcallz12zc0zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_closurezd2optimiza7ationzf3zd2envz54zzcfa_closurez00,
		BgL_bgl__closureza7d2optim5030za7,
		BGl__closurezd2optimiza7ationzf3z86zzcfa_closurez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2makezd2procedurez12zd2envzc0zzcfa_closurez00,
		BgL_bgl__addza7d2makeza7d2pr5031z00,
		BGl__addzd2makezd2procedurez12z12zzcfa_closurez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2procedurezd2el1zf3zd2envz21zzcfa_closurez00,
		BgL_bgl__approxza7d2proced5032za7,
		BGl__approxzd2procedurezd2el1zf3zf3zzcfa_closurez00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_closurez00(long
		BgL_checksumz00_2142, char *BgL_fromz00_2143)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_closurez00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_closurez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_closurez00();
					BGl_cnstzd2initzd2zzcfa_closurez00();
					BGl_importedzd2moduleszd2initz00zzcfa_closurez00();
					BGl_toplevelzd2initzd2zzcfa_closurez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 25 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_closure");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_closure");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 25 */
			{	/* Cfa/closure.scm 25 */
				obj_t BgL_cportz00_2134;

				BgL_cportz00_2134 =
					bgl_open_input_string(BGl_string5015z00zzcfa_closurez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2135;

					BgL_iz00_2135 = ((long) 20);
				BgL_loopz00_2136:
					if ((BgL_iz00_2135 == ((long) -1)))
						{	/* Cfa/closure.scm 25 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/closure.scm 25 */
							{	/* Cfa/closure.scm 25 */
								obj_t BgL_arg5017z00_2138;

								{	/* Cfa/closure.scm 25 */

									{	/* Cfa/closure.scm 25 */
										obj_t BgL_locationz00_2140;

										BgL_locationz00_2140 = BBOOL(((bool_t) 0));
										{	/* Cfa/closure.scm 25 */

											BgL_arg5017z00_2138 =
												BGl_readz00zz__readerz00(BgL_cportz00_2134,
												BgL_locationz00_2140);
										}
									}
								}
								{	/* Cfa/closure.scm 25 */
									int BgL_auxz00_2159;

									BgL_auxz00_2159 = (int) (BgL_iz00_2135);
									CNST_TABLE_SET(BgL_auxz00_2159, BgL_arg5017z00_2138);
							}}
							{	/* Cfa/closure.scm 25 */
								int BgL_auxz00_2141;

								BgL_auxz00_2141 = (int) ((BgL_iz00_2135 - ((long) 1)));
								{
									long BgL_iz00_2164;

									BgL_iz00_2164 = (long) (BgL_auxz00_2141);
									BgL_iz00_2135 = BgL_iz00_2164;
									goto BgL_loopz00_2136;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 25 */
			BGl_za2funcallzd2listza2zd2zzcfa_closurez00 = BNIL;
			BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00 = BNIL;
			BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00 = BNIL;
			BGl_za2procedurezd2refza2zd2zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd21zd2elzd2refza2zd2zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd21zd2elzd2setz12za2zc0zzcfa_closurez00 = BFALSE;
			BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2makezd2elzd2procedurezd21za2zd2zzcfa_closurez00 = BFALSE;
			return (BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 =
				BFALSE, BUNSPEC);
		}
	}



/* closure-optimization? */
	BGL_EXPORTED_DEF obj_t BGl_closurezd2optimiza7ationzf3z86zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 52 */
			{	/* Cfa/closure.scm 53 */
				long BgL_n1z00_1873;

				BgL_n1z00_1873 = (long) CINT(BGl_za2optimza2z00zzengine_paramz00);
				return BBOOL((BgL_n1z00_1873 >= ((long) 2)));
		}}
	}



/* _closure-optimization? */
	obj_t BGl__closurezd2optimiza7ationzf3z86zzcfa_closurez00(obj_t
		BgL_envz00_2115)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 52 */
			return BGl_closurezd2optimiza7ationzf3z86zzcfa_closurez00();
		}
	}



/* closure-optimization! */
	BGL_EXPORTED_DEF obj_t
		BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 58 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 59 */
					{	/* Cfa/closure.scm 60 */
						obj_t BgL_list4731z00_1052;

						{	/* Cfa/closure.scm 60 */
							obj_t BgL_arg4733z00_1054;

							BgL_arg4733z00_1054 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_list4731z00_1052 =
								MAKE_PAIR(BGl_string5008z00zzcfa_closurez00,
								BgL_arg4733z00_1054);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list4731z00_1052);
					}
					BGl_startzd2cachezd2zzcfa_closurez00();
					{
						obj_t BgL_l4713z00_1056;

						BgL_l4713z00_1056 =
							BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
					BgL_zc3anonymousza34734ze3z83_1057:
						if (PAIRP(BgL_l4713z00_1056))
							{	/* Cfa/closure.scm 69 */
								{	/* Cfa/closure.scm 71 */
									obj_t BgL_appz00_1059;

									BgL_appz00_1059 = CAR(BgL_l4713z00_1056);
									{	/* Cfa/closure.scm 72 */
										BgL_variablez00_bglt BgL_funz00_1061;

										bool_t BgL_lostzf3zf3_1062;

										obj_t BgL_siza7eza7_1063;

										{	/* Cfa/closure.scm 72 */
											BgL_varz00_bglt BgL_obj2155z00_1881;

											{	/* Cfa/closure.scm 72 */
												obj_t BgL_auxz00_2182;

												{	/* Cfa/closure.scm 72 */
													obj_t BgL_pairz00_1880;

													{
														BgL_appz00_bglt BgL_auxz00_2183;

														BgL_auxz00_2183 =
															(BgL_appz00_bglt) (BgL_appz00_1059);
														BgL_pairz00_1880 =
															(((BgL_appz00_bglt) CREF(BgL_auxz00_2183))->
															BgL_argsz00);
													}
													BgL_auxz00_2182 = CAR(BgL_pairz00_1880);
												}
												BgL_obj2155z00_1881 =
													(BgL_varz00_bglt) (BgL_auxz00_2182);
											}
											BgL_funz00_1061 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1881))->
												BgL_variablez00);
										}
										{	/* Cfa/closure.scm 73 */
											long BgL_auxz00_2189;

											{	/* Cfa/closure.scm 73 */
												BgL_makezd2procedurezd2appz00_bglt BgL_obj4295z00_1882;

												BgL_obj4295z00_1882 =
													(BgL_makezd2procedurezd2appz00_bglt)
													(BgL_appz00_1059);
												{
													obj_t BgL_auxz00_2191;

													{	/* Cfa/closure.scm 73 */
														BgL_objectz00_bglt BgL_auxz00_2192;

														BgL_auxz00_2192 =
															(BgL_objectz00_bglt) (BgL_obj4295z00_1882);
														BgL_auxz00_2191 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2192);
													}
													BgL_auxz00_2189 =
														(((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_auxz00_2191))->BgL_lostzd2stampzd2);
											}}
											BgL_lostzf3zf3_1062 = (BgL_auxz00_2189 > ((long) -1));
										}
										{	/* Cfa/closure.scm 74 */
											obj_t BgL_arg4747z00_1075;

											{	/* Cfa/closure.scm 74 */
												obj_t BgL_pairz00_1886;

												{
													BgL_appz00_bglt BgL_auxz00_2197;

													BgL_auxz00_2197 = (BgL_appz00_bglt) (BgL_appz00_1059);
													BgL_pairz00_1886 =
														(((BgL_appz00_bglt) CREF(BgL_auxz00_2197))->
														BgL_argsz00);
												}
												BgL_arg4747z00_1075 = CAR(CDR(CDR(BgL_pairz00_1886)));
											}
											BgL_siza7eza7_1063 =
												BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
												(BgL_nodez00_bglt) (BgL_arg4747z00_1075));
										}
										{	/* Cfa/closure.scm 76 */
											bool_t BgL_testz00_2205;

											if (BgL_lostzf3zf3_1062)
												{	/* Cfa/closure.scm 76 */
													BgL_testz00_2205 = ((bool_t) 1);
												}
											else
												{	/* Cfa/closure.scm 77 */
													bool_t BgL_testz00_2207;

													{	/* Cfa/closure.scm 77 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_obj4298z00_1892;
														BgL_obj4298z00_1892 =
															(BgL_makezd2procedurezd2appz00_bglt)
															(BgL_appz00_1059);
														{
															obj_t BgL_auxz00_2209;

															{	/* Cfa/closure.scm 77 */
																BgL_objectz00_bglt BgL_auxz00_2210;

																BgL_auxz00_2210 =
																	(BgL_objectz00_bglt) (BgL_obj4298z00_1892);
																BgL_auxz00_2209 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2210);
															}
															BgL_testz00_2207 =
																(((BgL_makezd2procedurezd2appz00_bglt)
																	CREF(BgL_auxz00_2209))->BgL_xzd2tzf3z21);
														}
													}
													if (BgL_testz00_2207)
														{	/* Cfa/closure.scm 78 */
															bool_t BgL_testz00_2214;

															{	/* Cfa/closure.scm 78 */
																long BgL_auxz00_2215;

																{	/* Cfa/closure.scm 78 */
																	BgL_funz00_bglt BgL_obj1813z00_1894;

																	BgL_obj1813z00_1894 =
																		(BgL_funz00_bglt) (
																		(((BgL_variablez00_bglt)
																				CREF(BgL_funz00_1061))->BgL_valuez00));
																	BgL_auxz00_2215 =
																		(((BgL_funz00_bglt)
																			CREF(BgL_obj1813z00_1894))->BgL_arityz00);
																}
																BgL_testz00_2214 =
																	(BgL_auxz00_2215 < ((long) 0));
															}
															if (BgL_testz00_2214)
																{	/* Cfa/closure.scm 78 */
																	BgL_testz00_2205 = ((bool_t) 1);
																}
															else
																{	/* Cfa/closure.scm 78 */
																	if (INTEGERP(BgL_siza7eza7_1063))
																		{	/* Cfa/closure.scm 79 */
																			BgL_testz00_2205 =
																				(
																				(long) CINT(BgL_siza7eza7_1063) ==
																				((long) 0));
																		}
																	else
																		{	/* Cfa/closure.scm 79 */
																			BgL_testz00_2205 = ((bool_t) 1);
																		}
																}
														}
													else
														{	/* Cfa/closure.scm 77 */
															BgL_testz00_2205 = ((bool_t) 1);
														}
												}
											if (BgL_testz00_2205)
												{	/* Cfa/closure.scm 76 */
													BNIL;
												}
											else
												{	/* Cfa/closure.scm 76 */
													{	/* Cfa/closure.scm 87 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_obj4303z00_1900;
														bool_t BgL_val4302z00_1901;

														BgL_obj4303z00_1900 =
															(BgL_makezd2procedurezd2appz00_bglt)
															(BgL_appz00_1059);
														BgL_val4302z00_1901 = ((bool_t) 1);
														{
															obj_t BgL_auxz00_2225;

															{	/* Cfa/closure.scm 87 */
																BgL_objectz00_bglt BgL_auxz00_2226;

																BgL_auxz00_2226 =
																	(BgL_objectz00_bglt) (BgL_obj4303z00_1900);
																BgL_auxz00_2225 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2226);
															}
															((((BgL_makezd2procedurezd2appz00_bglt)
																		CREF(BgL_auxz00_2225))->BgL_xz00) =
																((bool_t) BgL_val4302z00_1901), BUNSPEC);
														}
													}
													{	/* Cfa/closure.scm 88 */
														BgL_makezd2procedurezd2appz00_bglt
															BgL_obj4306z00_1902;
														bool_t BgL_val4305z00_1903;

														BgL_obj4306z00_1902 =
															(BgL_makezd2procedurezd2appz00_bglt)
															(BgL_appz00_1059);
														BgL_val4305z00_1903 = ((bool_t) 1);
														{
															obj_t BgL_auxz00_2231;

															{	/* Cfa/closure.scm 88 */
																BgL_objectz00_bglt BgL_auxz00_2232;

																BgL_auxz00_2232 =
																	(BgL_objectz00_bglt) (BgL_obj4306z00_1902);
																BgL_auxz00_2231 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2232);
															}
															((((BgL_makezd2procedurezd2appz00_bglt)
																		CREF(BgL_auxz00_2231))->BgL_tz00) =
																((bool_t) BgL_val4305z00_1903), BUNSPEC);
														}
													}
												}
										}
									}
								}
								{
									obj_t BgL_l4713z00_2236;

									BgL_l4713z00_2236 = CDR(BgL_l4713z00_1056);
									BgL_l4713z00_1056 = BgL_l4713z00_2236;
									goto BgL_zc3anonymousza34734ze3z83_1057;
								}
							}
						else
							{	/* Cfa/closure.scm 69 */
								((bool_t) 1);
							}
					}
					BGl_Xz12z12zzcfa_closurez00
						(BGl_za2funcallzd2listza2zd2zzcfa_closurez00);
					BGl_Tzd2fixzd2pointz12z12zzcfa_closurez00
						(BGl_za2funcallzd2listza2zd2zzcfa_closurez00);
					BGl_showzd2Xzd2Tz00zzcfa_closurez00
						(BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00);
					BGl_lightzd2funcallz12zc0zzcfa_closurez00();
					BGl_lightzd2accessz12zc0zzcfa_closurez00();
					BGl_lightzd2makezd2procedurez12z12zzcfa_closurez00();
					BGl_lightzd2typez12zc0zzcfa_ltypez00(BgL_globalsz00_1);
					return BGl_stopzd2cachezd2zzcfa_closurez00();
				}
			else
				{	/* Cfa/closure.scm 59 */
					return BFALSE;
				}
		}
	}



/* _closure-optimization! */
	obj_t BGl__closurezd2optimiza7ationz12z67zzcfa_closurez00(obj_t
		BgL_envz00_2116, obj_t BgL_globalsz00_2117)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 58 */
			return
				BGl_closurezd2optimiza7ationz12z67zzcfa_closurez00(BgL_globalsz00_2117);
		}
	}



/* X! */
	bool_t BGl_Xz12z12zzcfa_closurez00(obj_t BgL_funcallzd2listzd2_2)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 119 */
			{
				obj_t BgL_l4715z00_1080;

				BgL_l4715z00_1080 = BgL_funcallzd2listzd2_2;
			BgL_zc3anonymousza34750ze3z83_1081:
				if (PAIRP(BgL_l4715z00_1080))
					{	/* Cfa/closure.scm 121 */
						{	/* Cfa/closure.scm 157 */
							BgL_funcallz00_bglt BgL_appz00_1083;

							BgL_appz00_1083 = (BgL_funcallz00_bglt) (CAR(BgL_l4715z00_1080));
							{	/* Cfa/closure.scm 123 */
								BgL_nodez00_bglt BgL_funz00_1084;

								BgL_funz00_1084 =
									(((BgL_funcallz00_bglt) CREF(BgL_appz00_1083))->BgL_funz00);
								{	/* Cfa/closure.scm 123 */
									BgL_approxz00_bglt BgL_approxz00_1085;

									BgL_approxz00_1085 =
										BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_1084);
									{	/* Cfa/closure.scm 124 */
										obj_t BgL_allocz00_1086;

										BgL_allocz00_1086 =
											(((BgL_approxz00_bglt) CREF(BgL_approxz00_1085))->
											BgL_allocsz00);
										{	/* Cfa/closure.scm 125 */
											BgL_typez00_bglt BgL_typez00_1087;

											BgL_typez00_1087 =
												(((BgL_approxz00_bglt) CREF(BgL_approxz00_1085))->
												BgL_typez00);
											{	/* Cfa/closure.scm 126 */
												bool_t BgL_topzf3zf3_1088;

												BgL_topzf3zf3_1088 =
													(((BgL_approxz00_bglt) CREF(BgL_approxz00_1085))->
													BgL_topzf3zf3);
												{	/* Cfa/closure.scm 127 */

													if (BgL_topzf3zf3_1088)
														{	/* Cfa/closure.scm 129 */
															BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
																(BGl_proc5009z00zzcfa_closurez00,
																BgL_approxz00_1085);
														}
													else
														{	/* Cfa/closure.scm 140 */
															bool_t BgL_testz00_2258;

															{	/* Cfa/closure.scm 140 */
																obj_t BgL_arg4763z00_1105;

																BgL_arg4763z00_1105 =
																	BGl_setzd2lengthzd2zzcfa_setz00
																	(BgL_allocz00_1086);
																BgL_testz00_2258 =
																	((long) CINT(BgL_arg4763z00_1105) ==
																	((long) 0));
															}
															if (BgL_testz00_2258)
																{	/* Cfa/closure.scm 140 */
																	CNST_TABLE_REF(((long) 0));
																}
															else
																{	/* Cfa/closure.scm 143 */
																	bool_t BgL_testz00_2263;

																	{	/* Cfa/closure.scm 143 */
																		bool_t BgL_testz00_2264;

																		{	/* Cfa/closure.scm 143 */
																			obj_t BgL_arg4761z00_1103;

																			BgL_arg4761z00_1103 =
																				BGl_setzd2lengthzd2zzcfa_setz00
																				(BgL_allocz00_1086);
																			BgL_testz00_2264 =
																				((long) CINT(BgL_arg4761z00_1103) ==
																				((long) 1));
																		}
																		if (BgL_testz00_2264)
																			{	/* Cfa/closure.scm 144 */
																				obj_t BgL__ortest_4683z00_1102;

																				BgL__ortest_4683z00_1102 =
																					BGl_za2unsafezd2typeza2zd2zzengine_paramz00;
																				if (CBOOL(BgL__ortest_4683z00_1102))
																					{	/* Cfa/closure.scm 144 */
																						BgL_testz00_2263 =
																							CBOOL(BgL__ortest_4683z00_1102);
																					}
																				else
																					{	/* Cfa/closure.scm 144 */
																						BgL_testz00_2263 =
																							(
																							(obj_t) (BgL_typez00_1087) ==
																							BGl_za2procedureza2z00zztype_cachez00);
																					}
																			}
																		else
																			{	/* Cfa/closure.scm 143 */
																				BgL_testz00_2263 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_2263)
																		{	/* Cfa/closure.scm 143 */
																			CNST_TABLE_REF(((long) 0));
																		}
																	else
																		{	/* Cfa/closure.scm 143 */
																			BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
																				(BGl_proc5010z00zzcfa_closurez00,
																				BgL_approxz00_1085);
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
						{
							obj_t BgL_l4715z00_2275;

							BgL_l4715z00_2275 = CDR(BgL_l4715z00_1080);
							BgL_l4715z00_1080 = BgL_l4715z00_2275;
							goto BgL_zc3anonymousza34750ze3z83_1081;
						}
					}
				else
					{	/* Cfa/closure.scm 121 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* <anonymous:4753> */
	obj_t BGl_zc3anonymousza34753ze3z83zzcfa_closurez00(obj_t BgL_envz00_2120,
		obj_t BgL_allocz00_2121)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 132 */
			{
				obj_t BgL_allocz00_1090;

				BgL_allocz00_1090 = BgL_allocz00_2121;
				if (BGl_iszd2azf3z21zz__objectz00(BgL_allocz00_1090,
						BGl_makezd2procedurezd2appz00zzcfa_info2z00))
					{	/* Cfa/closure.scm 133 */
						{	/* Cfa/closure.scm 137 */
							BgL_makezd2procedurezd2appz00_bglt BgL_obj4306z00_1913;

							bool_t BgL_val4305z00_1914;

							BgL_obj4306z00_1913 =
								(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1090);
							BgL_val4305z00_1914 = ((bool_t) 0);
							{
								obj_t BgL_auxz00_2280;

								{	/* Cfa/closure.scm 137 */
									BgL_objectz00_bglt BgL_auxz00_2281;

									BgL_auxz00_2281 = (BgL_objectz00_bglt) (BgL_obj4306z00_1913);
									BgL_auxz00_2280 = BGL_OBJECT_WIDENING(BgL_auxz00_2281);
								}
								((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2280))->
										BgL_tz00) = ((bool_t) BgL_val4305z00_1914), BUNSPEC);
							}
						}
						{	/* Cfa/closure.scm 138 */
							BgL_makezd2procedurezd2appz00_bglt BgL_obj4303z00_1915;

							bool_t BgL_val4302z00_1916;

							BgL_obj4303z00_1915 =
								(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1090);
							BgL_val4302z00_1916 = ((bool_t) 0);
							{
								obj_t BgL_auxz00_2286;

								{	/* Cfa/closure.scm 138 */
									BgL_objectz00_bglt BgL_auxz00_2287;

									BgL_auxz00_2287 = (BgL_objectz00_bglt) (BgL_obj4303z00_1915);
									BgL_auxz00_2286 = BGL_OBJECT_WIDENING(BgL_auxz00_2287);
								}
								return
									((((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_2286))->BgL_xz00) =
									((bool_t) BgL_val4302z00_1916), BUNSPEC);
							}
						}
					}
				else
					{	/* Cfa/closure.scm 133 */
						return BFALSE;
					}
			}
		}
	}



/* <anonymous:4758> */
	obj_t BGl_zc3anonymousza34758ze3z83zzcfa_closurez00(obj_t BgL_envz00_2122,
		obj_t BgL_allocz00_2123)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 151 */
			{
				obj_t BgL_allocz00_1097;

				BgL_allocz00_1097 = BgL_allocz00_2123;
				if (BGl_iszd2azf3z21zz__objectz00(BgL_allocz00_1097,
						BGl_makezd2procedurezd2appz00zzcfa_info2z00))
					{	/* Cfa/closure.scm 152 */
						{	/* Cfa/closure.scm 156 */
							BgL_makezd2procedurezd2appz00_bglt BgL_obj4303z00_1922;

							bool_t BgL_val4302z00_1923;

							BgL_obj4303z00_1922 =
								(BgL_makezd2procedurezd2appz00_bglt) (BgL_allocz00_1097);
							BgL_val4302z00_1923 = ((bool_t) 0);
							{
								obj_t BgL_auxz00_2294;

								{	/* Cfa/closure.scm 156 */
									BgL_objectz00_bglt BgL_auxz00_2295;

									BgL_auxz00_2295 = (BgL_objectz00_bglt) (BgL_obj4303z00_1922);
									BgL_auxz00_2294 = BGL_OBJECT_WIDENING(BgL_auxz00_2295);
								}
								return
									((((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_2294))->BgL_xz00) =
									((bool_t) BgL_val4302z00_1923), BUNSPEC);
							}
						}
					}
				else
					{	/* Cfa/closure.scm 152 */
						return BFALSE;
					}
			}
		}
	}



/* T-fix-point! */
	obj_t BGl_Tzd2fixzd2pointz12z12zzcfa_closurez00(obj_t BgL_funcallzd2listzd2_3)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 169 */
			{
				bool_t BgL_continuezf3zf3_1110;

				BgL_continuezf3zf3_1110 = ((bool_t) 1);
			BgL_zc3anonymousza34766ze3z83_1111:
				if (BgL_continuezf3zf3_1110)
					{	/* Cfa/closure.scm 174 */
						bool_t BgL_continuezf3zf3_1112;

						BgL_continuezf3zf3_1112 = ((bool_t) 0);
						{
							obj_t BgL_l4719z00_1114;

							BgL_l4719z00_1114 = BgL_funcallzd2listzd2_3;
						BgL_zc3anonymousza34767ze3z83_1115:
							if (PAIRP(BgL_l4719z00_1114))
								{	/* Cfa/closure.scm 175 */
									{	/* Cfa/closure.scm 211 */
										obj_t BgL_appz00_1117;

										BgL_appz00_1117 = CAR(BgL_l4719z00_1114);
										{	/* Cfa/closure.scm 178 */
											BgL_nodez00_bglt BgL_funz00_1118;

											{
												BgL_funcallz00_bglt BgL_auxz00_2303;

												BgL_auxz00_2303 =
													(BgL_funcallz00_bglt) (BgL_appz00_1117);
												BgL_funz00_1118 =
													(((BgL_funcallz00_bglt) CREF(BgL_auxz00_2303))->
													BgL_funz00);
											}
											{	/* Cfa/closure.scm 178 */
												BgL_approxz00_bglt BgL_approxz00_1119;

												BgL_approxz00_1119 =
													BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_1118);
												{	/* Cfa/closure.scm 179 */
													obj_t BgL_allocz00_1120;

													{	/* Cfa/closure.scm 180 */
														obj_t BgL_arg4785z00_1148;

														BgL_arg4785z00_1148 =
															(((BgL_approxz00_bglt) CREF(BgL_approxz00_1119))->
															BgL_allocsz00);
														BgL_allocz00_1120 =
															BGl_setzd2ze3listz31zzcfa_setz00
															(BgL_arg4785z00_1148);
													}
													{	/* Cfa/closure.scm 180 */
														BgL_typez00_bglt BgL_typez00_1121;

														BgL_typez00_1121 =
															(((BgL_approxz00_bglt) CREF(BgL_approxz00_1119))->
															BgL_typez00);
														{	/* Cfa/closure.scm 181 */
															bool_t BgL_tzd2initzf3z21_1122;

															{	/* Cfa/closure.scm 182 */
																bool_t BgL__ortest_4684z00_1145;

																BgL__ortest_4684z00_1145 =
																	(((BgL_approxz00_bglt)
																		CREF(BgL_approxz00_1119))->BgL_topzf3zf3);
																if (BgL__ortest_4684z00_1145)
																	{	/* Cfa/closure.scm 182 */
																		BgL_tzd2initzf3z21_1122 =
																			BgL__ortest_4684z00_1145;
																	}
																else
																	{	/* Cfa/closure.scm 183 */
																		bool_t BgL_testz00_2312;

																		if (
																			((obj_t) (BgL_typez00_1121) ==
																				BGl_za2procedureza2z00zztype_cachez00))
																			{	/* Cfa/closure.scm 183 */
																				BgL_testz00_2312 = ((bool_t) 1);
																			}
																		else
																			{	/* Cfa/closure.scm 183 */
																				BgL_testz00_2312 =
																					CBOOL
																					(BGl_za2unsafezd2typeza2zd2zzengine_paramz00);
																			}
																		if (BgL_testz00_2312)
																			{	/* Cfa/closure.scm 183 */
																				BgL_tzd2initzf3z21_1122 = ((bool_t) 0);
																			}
																		else
																			{	/* Cfa/closure.scm 183 */
																				BgL_tzd2initzf3z21_1122 = ((bool_t) 1);
																			}
																	}
															}
															{	/* Cfa/closure.scm 182 */

																{
																	bool_t BgL_onezd2nonzd2tzf3zf3_1124;

																	obj_t BgL_allocsz00_1125;

																	BgL_onezd2nonzd2tzf3zf3_1124 =
																		BgL_tzd2initzf3z21_1122;
																	BgL_allocsz00_1125 = BgL_allocz00_1120;
																BgL_zc3anonymousza34769ze3z83_1126:
																	if (NULLP(BgL_allocsz00_1125))
																		{	/* Cfa/closure.scm 191 */
																			CNST_TABLE_REF(((long) 1));
																		}
																	else
																		{	/* Cfa/closure.scm 191 */
																			if (BgL_onezd2nonzd2tzf3zf3_1124)
																				{
																					obj_t BgL_l4717z00_1129;

																					{	/* Cfa/closure.scm 194 */
																						bool_t BgL_auxz00_2321;

																						BgL_l4717z00_1129 =
																							BgL_allocz00_1120;
																					BgL_zc3anonymousza34771ze3z83_1130:
																						if (PAIRP(BgL_l4717z00_1129))
																							{	/* Cfa/closure.scm 194 */
																								{	/* Cfa/closure.scm 196 */
																									obj_t BgL_allocz00_1132;

																									BgL_allocz00_1132 =
																										CAR(BgL_l4717z00_1129);
																									if (BGl_iszd2azf3z21zz__objectz00(BgL_allocz00_1132, BGl_makezd2procedurezd2appz00zzcfa_info2z00))
																										{	/* Cfa/closure.scm 197 */
																											BgL_makezd2procedurezd2appz00_bglt
																												BgL_instance4685z00_1134;
																											BgL_instance4685z00_1134 =
																												(BgL_makezd2procedurezd2appz00_bglt)
																												(BgL_allocz00_1132);
																											{	/* Cfa/closure.scm 198 */
																												bool_t BgL_testz00_2328;

																												{
																													obj_t BgL_auxz00_2329;

																													{	/* Cfa/closure.scm 198 */
																														BgL_objectz00_bglt
																															BgL_auxz00_2330;
																														BgL_auxz00_2330 =
																															(BgL_objectz00_bglt)
																															(BgL_instance4685z00_1134);
																														BgL_auxz00_2329 =
																															BGL_OBJECT_WIDENING
																															(BgL_auxz00_2330);
																													}
																													BgL_testz00_2328 =
																														(((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2329))->BgL_tz00);
																												}
																												if (BgL_testz00_2328)
																													{	/* Cfa/closure.scm 198 */
																														{
																															obj_t
																																BgL_auxz00_2334;
																															{	/* Cfa/closure.scm 200 */
																																BgL_objectz00_bglt
																																	BgL_auxz00_2335;
																																BgL_auxz00_2335
																																	=
																																	(BgL_objectz00_bglt)
																																	(BgL_instance4685z00_1134);
																																BgL_auxz00_2334
																																	=
																																	BGL_OBJECT_WIDENING
																																	(BgL_auxz00_2335);
																															}
																															((((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2334))->BgL_tz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
																														}
																														BgL_continuezf3zf3_1112
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Cfa/closure.scm 198 */
																														BFALSE;
																													}
																											}
																										}
																									else
																										{	/* Cfa/closure.scm 196 */
																											BFALSE;
																										}
																								}
																								{
																									obj_t BgL_l4717z00_2339;

																									BgL_l4717z00_2339 =
																										CDR(BgL_l4717z00_1129);
																									BgL_l4717z00_1129 =
																										BgL_l4717z00_2339;
																									goto
																										BgL_zc3anonymousza34771ze3z83_1130;
																								}
																							}
																						else
																							{	/* Cfa/closure.scm 194 */
																								BgL_auxz00_2321 = ((bool_t) 1);
																							}
																						BBOOL(BgL_auxz00_2321);
																					}
																				}
																			else
																				{	/* Cfa/closure.scm 203 */
																					bool_t BgL_testz00_2342;

																					{	/* Cfa/closure.scm 203 */
																						obj_t BgL_arg4782z00_1143;

																						BgL_arg4782z00_1143 =
																							CAR(BgL_allocsz00_1125);
																						BgL_testz00_2342 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_arg4782z00_1143,
																							BGl_makezd2procedurezd2appz00zzcfa_info2z00);
																					}
																					if (BgL_testz00_2342)
																						{	/* Cfa/closure.scm 204 */
																							obj_t BgL_instance4687z00_1139;

																							BgL_instance4687z00_1139 =
																								CAR(BgL_allocsz00_1125);
																							{	/* Cfa/closure.scm 205 */
																								bool_t BgL_testz00_2346;

																								{	/* Cfa/closure.scm 205 */
																									BgL_makezd2procedurezd2appz00_bglt
																										BgL_obj4304z00_1942;
																									BgL_obj4304z00_1942 =
																										(BgL_makezd2procedurezd2appz00_bglt)
																										(BgL_instance4687z00_1139);
																									{
																										obj_t BgL_auxz00_2348;

																										{	/* Cfa/closure.scm 205 */
																											BgL_objectz00_bglt
																												BgL_auxz00_2349;
																											BgL_auxz00_2349 =
																												(BgL_objectz00_bglt)
																												(BgL_obj4304z00_1942);
																											BgL_auxz00_2348 =
																												BGL_OBJECT_WIDENING
																												(BgL_auxz00_2349);
																										}
																										BgL_testz00_2346 =
																											(((BgL_makezd2procedurezd2appz00_bglt) CREF(BgL_auxz00_2348))->BgL_tz00);
																									}
																								}
																								if (BgL_testz00_2346)
																									{
																										obj_t BgL_allocsz00_2353;

																										BgL_allocsz00_2353 =
																											CDR(BgL_allocsz00_1125);
																										BgL_allocsz00_1125 =
																											BgL_allocsz00_2353;
																										goto
																											BgL_zc3anonymousza34769ze3z83_1126;
																									}
																								else
																									{
																										bool_t
																											BgL_onezd2nonzd2tzf3zf3_2355;
																										BgL_onezd2nonzd2tzf3zf3_2355
																											= ((bool_t) 1);
																										BgL_onezd2nonzd2tzf3zf3_1124
																											=
																											BgL_onezd2nonzd2tzf3zf3_2355;
																										goto
																											BgL_zc3anonymousza34769ze3z83_1126;
																									}
																							}
																						}
																					else
																						{	/* Cfa/closure.scm 203 */
																							if (CBOOL
																								(BGl_za2unsafezd2typeza2zd2zzengine_paramz00))
																								{
																									obj_t BgL_allocsz00_2358;

																									BgL_allocsz00_2358 =
																										CDR(BgL_allocsz00_1125);
																									BgL_allocsz00_1125 =
																										BgL_allocsz00_2358;
																									goto
																										BgL_zc3anonymousza34769ze3z83_1126;
																								}
																							else
																								{
																									bool_t
																										BgL_onezd2nonzd2tzf3zf3_2360;
																									BgL_onezd2nonzd2tzf3zf3_2360 =
																										((bool_t) 1);
																									BgL_onezd2nonzd2tzf3zf3_1124 =
																										BgL_onezd2nonzd2tzf3zf3_2360;
																									goto
																										BgL_zc3anonymousza34769ze3z83_1126;
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
									{
										obj_t BgL_l4719z00_2361;

										BgL_l4719z00_2361 = CDR(BgL_l4719z00_1114);
										BgL_l4719z00_1114 = BgL_l4719z00_2361;
										goto BgL_zc3anonymousza34767ze3z83_1115;
									}
								}
							else
								{	/* Cfa/closure.scm 175 */
									((bool_t) 1);
								}
						}
						{
							bool_t BgL_continuezf3zf3_2363;

							BgL_continuezf3zf3_2363 = BgL_continuezf3zf3_1112;
							BgL_continuezf3zf3_1110 = BgL_continuezf3zf3_2363;
							goto BgL_zc3anonymousza34766ze3z83_1111;
						}
					}
				else
					{	/* Cfa/closure.scm 172 */
						return BUNSPEC;
					}
			}
		}
	}



/* light-make-procedure! */
	bool_t BGl_lightzd2makezd2procedurez12z12zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 240 */
			{
				obj_t BgL_appz00_1191;

				obj_t BgL_appz00_1167;

				{
					obj_t BgL_l4721z00_1158;

					BgL_l4721z00_1158 =
						BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00;
				BgL_zc3anonymousza34789ze3z83_1159:
					if (PAIRP(BgL_l4721z00_1158))
						{	/* Cfa/closure.scm 272 */
							{	/* Cfa/closure.scm 273 */
								obj_t BgL_appz00_1161;

								BgL_appz00_1161 = CAR(BgL_l4721z00_1158);
								{	/* Cfa/closure.scm 275 */
									bool_t BgL_testz00_2367;

									{	/* Cfa/closure.scm 275 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4301z00_1948;

										BgL_obj4301z00_1948 =
											(BgL_makezd2procedurezd2appz00_bglt) (BgL_appz00_1161);
										{
											obj_t BgL_auxz00_2369;

											{	/* Cfa/closure.scm 275 */
												BgL_objectz00_bglt BgL_auxz00_2370;

												BgL_auxz00_2370 =
													(BgL_objectz00_bglt) (BgL_obj4301z00_1948);
												BgL_auxz00_2369 = BGL_OBJECT_WIDENING(BgL_auxz00_2370);
											}
											BgL_testz00_2367 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2369))->BgL_xz00);
										}
									}
									if (BgL_testz00_2367)
										{	/* Cfa/closure.scm 275 */
											BgL_appz00_1167 = BgL_appz00_1161;
											{	/* Cfa/closure.scm 243 */
												obj_t BgL_siza7eza7_1170;

												{	/* Cfa/closure.scm 243 */
													obj_t BgL_arg4811z00_1187;

													{	/* Cfa/closure.scm 243 */
														obj_t BgL_pairz00_1952;

														{
															BgL_appz00_bglt BgL_auxz00_2374;

															BgL_auxz00_2374 =
																(BgL_appz00_bglt) (BgL_appz00_1167);
															BgL_pairz00_1952 =
																(((BgL_appz00_bglt) CREF(BgL_auxz00_2374))->
																BgL_argsz00);
														}
														BgL_arg4811z00_1187 =
															CAR(CDR(CDR(BgL_pairz00_1952)));
													}
													BgL_siza7eza7_1170 =
														BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
														(BgL_nodez00_bglt) (BgL_arg4811z00_1187));
												}
												{	/* Cfa/closure.scm 243 */
													BgL_variablez00_bglt BgL_ffunz00_1171;

													{	/* Cfa/closure.scm 244 */
														BgL_varz00_bglt BgL_obj2155z00_1960;

														{	/* Cfa/closure.scm 244 */
															obj_t BgL_auxz00_2382;

															{	/* Cfa/closure.scm 244 */
																obj_t BgL_pairz00_1959;

																{
																	BgL_appz00_bglt BgL_auxz00_2383;

																	BgL_auxz00_2383 =
																		(BgL_appz00_bglt) (BgL_appz00_1167);
																	BgL_pairz00_1959 =
																		(((BgL_appz00_bglt) CREF(BgL_auxz00_2383))->
																		BgL_argsz00);
																}
																BgL_auxz00_2382 = CAR(BgL_pairz00_1959);
															}
															BgL_obj2155z00_1960 =
																(BgL_varz00_bglt) (BgL_auxz00_2382);
														}
														BgL_ffunz00_1171 =
															(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1960))->
															BgL_variablez00);
													}
													{	/* Cfa/closure.scm 244 */
														BgL_valuez00_bglt BgL_sfunz00_1172;

														BgL_sfunz00_1172 =
															(((BgL_variablez00_bglt) CREF(BgL_ffunz00_1171))->
															BgL_valuez00);
														{	/* Cfa/closure.scm 245 */

															if (
																((long) CINT(BgL_siza7eza7_1170) == ((long) 1)))
																{	/* Cfa/closure.scm 247 */
																	{	/* Cfa/closure.scm 248 */
																		bool_t BgL_testz00_2393;

																		{	/* Cfa/closure.scm 248 */
																			bool_t BgL_testz00_2394;

																			{	/* Cfa/closure.scm 248 */
																				obj_t BgL_obj1751z00_1964;

																				BgL_obj1751z00_1964 =
																					(obj_t) (BgL_ffunz00_1171);
																				BgL_testz00_2394 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj1751z00_1964,
																					BGl_globalz00zzast_varz00);
																			}
																			if (BgL_testz00_2394)
																				{	/* Cfa/closure.scm 249 */
																					bool_t BgL_testz00_2397;

																					{	/* Cfa/closure.scm 249 */
																						obj_t BgL_arg4805z00_1182;

																						{
																							BgL_funz00_bglt BgL_auxz00_2398;

																							BgL_auxz00_2398 =
																								(BgL_funz00_bglt)
																								(BgL_sfunz00_1172);
																							BgL_arg4805z00_1182 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2398))->
																								BgL_thezd2closurezd2);
																						}
																						BgL_testz00_2397 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_arg4805z00_1182,
																							BGl_globalz00zzast_varz00);
																					}
																					if (BgL_testz00_2397)
																						{	/* Cfa/closure.scm 250 */
																							BgL_valuez00_bglt
																								BgL_arg4802z00_1180;
																							{	/* Cfa/closure.scm 250 */
																								BgL_variablez00_bglt
																									BgL_obj1611z00_1968;
																								{	/* Cfa/closure.scm 250 */
																									BgL_funz00_bglt
																										BgL_obj1826z00_1967;
																									BgL_obj1826z00_1967 =
																										(BgL_funz00_bglt)
																										(BgL_sfunz00_1172);
																									BgL_obj1611z00_1968 =
																										(BgL_variablez00_bglt) (((
																												(BgL_funz00_bglt)
																												CREF
																												(BgL_obj1826z00_1967))->
																											BgL_thezd2closurezd2));
																								}
																								BgL_arg4802z00_1180 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_obj1611z00_1968))->
																									BgL_valuez00);
																							}
																							{	/* Cfa/closure.scm 250 */
																								obj_t BgL_obj2049z00_1969;

																								BgL_obj2049z00_1969 =
																									(obj_t) (BgL_arg4802z00_1180);
																								BgL_testz00_2393 =
																									BGl_iszd2azf3z21zz__objectz00
																									(BgL_obj2049z00_1969,
																									BGl_scnstz00zzast_varz00);
																							}
																						}
																					else
																						{	/* Cfa/closure.scm 249 */
																							BgL_testz00_2393 = ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cfa/closure.scm 248 */
																					BgL_testz00_2393 = ((bool_t) 0);
																				}
																		}
																		if (BgL_testz00_2393)
																			{	/* Cfa/closure.scm 251 */
																				BgL_valuez00_bglt BgL_arg4797z00_1175;

																				obj_t BgL_arg4798z00_1176;

																				{	/* Cfa/closure.scm 251 */
																					BgL_variablez00_bglt
																						BgL_obj1611z00_1971;
																					{	/* Cfa/closure.scm 251 */
																						BgL_funz00_bglt BgL_obj1826z00_1970;

																						BgL_obj1826z00_1970 =
																							(BgL_funz00_bglt)
																							(BgL_sfunz00_1172);
																						BgL_obj1611z00_1971 =
																							(BgL_variablez00_bglt) (((
																									(BgL_funz00_bglt)
																									CREF(BgL_obj1826z00_1970))->
																								BgL_thezd2closurezd2));
																					}
																					BgL_arg4797z00_1175 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_obj1611z00_1971))->
																						BgL_valuez00);
																				}
																				BgL_arg4798z00_1176 =
																					CNST_TABLE_REF(((long) 2));
																				{
																					BgL_scnstz00_bglt BgL_auxz00_2413;

																					BgL_auxz00_2413 =
																						(BgL_scnstz00_bglt)
																						(BgL_arg4797z00_1175);
																					((((BgL_scnstz00_bglt)
																								CREF(BgL_auxz00_2413))->
																							BgL_classz00) =
																						((obj_t) BgL_arg4798z00_1176),
																						BUNSPEC);
																			}}
																		else
																			{	/* Cfa/closure.scm 248 */
																				BFALSE;
																			}
																	}
																	{	/* Cfa/closure.scm 253 */
																		BgL_varz00_bglt BgL_arg4806z00_1183;

																		{
																			BgL_appz00_bglt BgL_auxz00_2416;

																			BgL_auxz00_2416 =
																				(BgL_appz00_bglt) (BgL_appz00_1167);
																			BgL_arg4806z00_1183 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_auxz00_2416))->BgL_funz00);
																		}
																		{
																			BgL_variablez00_bglt BgL_auxz00_2419;

																			BgL_auxz00_2419 =
																				(BgL_variablez00_bglt)
																				(BGl_za2makezd2elzd2procedurezd21za2zd2zzcfa_closurez00);
																			((((BgL_varz00_bglt)
																						CREF(BgL_arg4806z00_1183))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt)
																					BgL_auxz00_2419), BUNSPEC);
																		}
																	}
																}
															else
																{	/* Cfa/closure.scm 255 */
																	BgL_varz00_bglt BgL_arg4807z00_1184;

																	{
																		BgL_appz00_bglt BgL_auxz00_2422;

																		BgL_auxz00_2422 =
																			(BgL_appz00_bglt) (BgL_appz00_1167);
																		BgL_arg4807z00_1184 =
																			(((BgL_appz00_bglt)
																				CREF(BgL_auxz00_2422))->BgL_funz00);
																	}
																	{
																		BgL_variablez00_bglt BgL_auxz00_2425;

																		BgL_auxz00_2425 =
																			(BgL_variablez00_bglt)
																			(BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00);
																		((((BgL_varz00_bglt)
																					CREF(BgL_arg4807z00_1184))->
																				BgL_variablez00) =
																			((BgL_variablez00_bglt) BgL_auxz00_2425),
																			BUNSPEC);
																	}
																}
														}
													}
												}
											}
											{	/* Cfa/closure.scm 256 */
												obj_t BgL_arg4813z00_1189;

												{	/* Cfa/closure.scm 256 */
													obj_t BgL_pairz00_1981;

													{
														BgL_appz00_bglt BgL_auxz00_2428;

														BgL_auxz00_2428 =
															(BgL_appz00_bglt) (BgL_appz00_1167);
														BgL_pairz00_1981 =
															(((BgL_appz00_bglt) CREF(BgL_auxz00_2428))->
															BgL_argsz00);
													}
													BgL_arg4813z00_1189 = CDR(CDR(BgL_pairz00_1981));
												}
												{
													BgL_appz00_bglt BgL_auxz00_2433;

													BgL_auxz00_2433 = (BgL_appz00_bglt) (BgL_appz00_1167);
													((((BgL_appz00_bglt) CREF(BgL_auxz00_2433))->
															BgL_argsz00) =
														((obj_t) BgL_arg4813z00_1189), BUNSPEC);
												}
											}
											BgL_appz00_1167;
										}
									else
										{	/* Cfa/closure.scm 276 */
											bool_t BgL_testz00_2436;

											{	/* Cfa/closure.scm 276 */
												BgL_makezd2procedurezd2appz00_bglt BgL_obj4304z00_1949;

												BgL_obj4304z00_1949 =
													(BgL_makezd2procedurezd2appz00_bglt)
													(BgL_appz00_1161);
												{
													obj_t BgL_auxz00_2438;

													{	/* Cfa/closure.scm 276 */
														BgL_objectz00_bglt BgL_auxz00_2439;

														BgL_auxz00_2439 =
															(BgL_objectz00_bglt) (BgL_obj4304z00_1949);
														BgL_auxz00_2438 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2439);
													}
													BgL_testz00_2436 =
														(((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_auxz00_2438))->BgL_tz00);
												}
											}
											if (BgL_testz00_2436)
												{	/* Cfa/closure.scm 276 */
													BgL_appz00_1191 = BgL_appz00_1161;
													{	/* Cfa/closure.scm 260 */
														obj_t BgL_siza7eza7_1194;

														{	/* Cfa/closure.scm 260 */
															obj_t BgL_arg4832z00_1212;

															{	/* Cfa/closure.scm 260 */
																obj_t BgL_pairz00_1988;

																{
																	BgL_appz00_bglt BgL_auxz00_2443;

																	BgL_auxz00_2443 =
																		(BgL_appz00_bglt) (BgL_appz00_1191);
																	BgL_pairz00_1988 =
																		(((BgL_appz00_bglt) CREF(BgL_auxz00_2443))->
																		BgL_argsz00);
																}
																BgL_arg4832z00_1212 =
																	CAR(CDR(CDR(BgL_pairz00_1988)));
															}
															BgL_siza7eza7_1194 =
																BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
																(BgL_nodez00_bglt) (BgL_arg4832z00_1212));
														}
														{	/* Cfa/closure.scm 260 */
															BgL_variablez00_bglt BgL_ffunz00_1195;

															{	/* Cfa/closure.scm 261 */
																BgL_varz00_bglt BgL_obj2155z00_1996;

																{	/* Cfa/closure.scm 261 */
																	obj_t BgL_auxz00_2451;

																	{	/* Cfa/closure.scm 261 */
																		obj_t BgL_pairz00_1995;

																		{
																			BgL_appz00_bglt BgL_auxz00_2452;

																			BgL_auxz00_2452 =
																				(BgL_appz00_bglt) (BgL_appz00_1191);
																			BgL_pairz00_1995 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_auxz00_2452))->BgL_argsz00);
																		}
																		BgL_auxz00_2451 = CAR(BgL_pairz00_1995);
																	}
																	BgL_obj2155z00_1996 =
																		(BgL_varz00_bglt) (BgL_auxz00_2451);
																}
																BgL_ffunz00_1195 =
																	(((BgL_varz00_bglt)
																		CREF(BgL_obj2155z00_1996))->
																	BgL_variablez00);
															}
															{	/* Cfa/closure.scm 261 */
																BgL_valuez00_bglt BgL_sfunz00_1196;

																BgL_sfunz00_1196 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_ffunz00_1195))->BgL_valuez00);
																{	/* Cfa/closure.scm 262 */

																	{	/* Cfa/closure.scm 263 */
																		bool_t BgL_testz00_2459;

																		{	/* Cfa/closure.scm 263 */
																			bool_t BgL_testz00_2460;

																			{	/* Cfa/closure.scm 263 */
																				obj_t BgL_obj1751z00_1998;

																				BgL_obj1751z00_1998 =
																					(obj_t) (BgL_ffunz00_1195);
																				BgL_testz00_2460 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj1751z00_1998,
																					BGl_globalz00zzast_varz00);
																			}
																			if (BgL_testz00_2460)
																				{	/* Cfa/closure.scm 264 */
																					bool_t BgL_testz00_2463;

																					{	/* Cfa/closure.scm 264 */
																						obj_t BgL_arg4825z00_1205;

																						{
																							BgL_funz00_bglt BgL_auxz00_2464;

																							BgL_auxz00_2464 =
																								(BgL_funz00_bglt)
																								(BgL_sfunz00_1196);
																							BgL_arg4825z00_1205 =
																								(((BgL_funz00_bglt)
																									CREF(BgL_auxz00_2464))->
																								BgL_thezd2closurezd2);
																						}
																						BgL_testz00_2463 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_arg4825z00_1205,
																							BGl_globalz00zzast_varz00);
																					}
																					if (BgL_testz00_2463)
																						{	/* Cfa/closure.scm 265 */
																							BgL_valuez00_bglt
																								BgL_arg4823z00_1203;
																							{	/* Cfa/closure.scm 265 */
																								BgL_variablez00_bglt
																									BgL_obj1611z00_2002;
																								{	/* Cfa/closure.scm 265 */
																									BgL_funz00_bglt
																										BgL_obj1826z00_2001;
																									BgL_obj1826z00_2001 =
																										(BgL_funz00_bglt)
																										(BgL_sfunz00_1196);
																									BgL_obj1611z00_2002 =
																										(BgL_variablez00_bglt) (((
																												(BgL_funz00_bglt)
																												CREF
																												(BgL_obj1826z00_2001))->
																											BgL_thezd2closurezd2));
																								}
																								BgL_arg4823z00_1203 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_obj1611z00_2002))->
																									BgL_valuez00);
																							}
																							{	/* Cfa/closure.scm 265 */
																								obj_t BgL_obj2049z00_2003;

																								BgL_obj2049z00_2003 =
																									(obj_t) (BgL_arg4823z00_1203);
																								BgL_testz00_2459 =
																									BGl_iszd2azf3z21zz__objectz00
																									(BgL_obj2049z00_2003,
																									BGl_scnstz00zzast_varz00);
																							}
																						}
																					else
																						{	/* Cfa/closure.scm 264 */
																							BgL_testz00_2459 = ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cfa/closure.scm 263 */
																					BgL_testz00_2459 = ((bool_t) 0);
																				}
																		}
																		if (BgL_testz00_2459)
																			{	/* Cfa/closure.scm 266 */
																				BgL_valuez00_bglt BgL_arg4817z00_1198;

																				obj_t BgL_arg4819z00_1199;

																				{	/* Cfa/closure.scm 266 */
																					BgL_variablez00_bglt
																						BgL_obj1611z00_2005;
																					{	/* Cfa/closure.scm 266 */
																						BgL_funz00_bglt BgL_obj1826z00_2004;

																						BgL_obj1826z00_2004 =
																							(BgL_funz00_bglt)
																							(BgL_sfunz00_1196);
																						BgL_obj1611z00_2005 =
																							(BgL_variablez00_bglt) (((
																									(BgL_funz00_bglt)
																									CREF(BgL_obj1826z00_2004))->
																								BgL_thezd2closurezd2));
																					}
																					BgL_arg4817z00_1198 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_obj1611z00_2005))->
																						BgL_valuez00);
																				}
																				BgL_arg4819z00_1199 =
																					CNST_TABLE_REF(((long) 3));
																				{
																					BgL_scnstz00_bglt BgL_auxz00_2479;

																					BgL_auxz00_2479 =
																						(BgL_scnstz00_bglt)
																						(BgL_arg4817z00_1198);
																					((((BgL_scnstz00_bglt)
																								CREF(BgL_auxz00_2479))->
																							BgL_classz00) =
																						((obj_t) BgL_arg4819z00_1199),
																						BUNSPEC);
																			}}
																		else
																			{	/* Cfa/closure.scm 263 */
																				BFALSE;
																			}
																	}
																	{	/* Cfa/closure.scm 268 */
																		BgL_varz00_bglt BgL_arg4826z00_1206;

																		{
																			BgL_appz00_bglt BgL_auxz00_2482;

																			BgL_auxz00_2482 =
																				(BgL_appz00_bglt) (BgL_appz00_1191);
																			BgL_arg4826z00_1206 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_auxz00_2482))->BgL_funz00);
																		}
																		{
																			BgL_variablez00_bglt BgL_auxz00_2485;

																			BgL_auxz00_2485 =
																				(BgL_variablez00_bglt)
																				(BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00);
																			((((BgL_varz00_bglt)
																						CREF(BgL_arg4826z00_1206))->
																					BgL_variablez00) =
																				((BgL_variablez00_bglt)
																					BgL_auxz00_2485), BUNSPEC);
																		}
																	}
																	{	/* Cfa/closure.scm 269 */
																		obj_t BgL_arg4827z00_1207;

																		obj_t BgL_arg4828z00_1208;

																		{
																			BgL_appz00_bglt BgL_auxz00_2488;

																			BgL_auxz00_2488 =
																				(BgL_appz00_bglt) (BgL_appz00_1191);
																			BgL_arg4827z00_1207 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_auxz00_2488))->BgL_argsz00);
																		}
																		{	/* Cfa/closure.scm 269 */
																			obj_t BgL_pairz00_2013;

																			{
																				BgL_appz00_bglt BgL_auxz00_2491;

																				BgL_auxz00_2491 =
																					(BgL_appz00_bglt) (BgL_appz00_1191);
																				BgL_pairz00_2013 =
																					(((BgL_appz00_bglt)
																						CREF(BgL_auxz00_2491))->
																					BgL_argsz00);
																			}
																			BgL_arg4828z00_1208 =
																				CDR(CDR(BgL_pairz00_2013));
																		}
																		SET_CDR(BgL_arg4827z00_1207,
																			BgL_arg4828z00_1208);
																	}
																	BgL_appz00_1191;
																}
															}
														}
													}
												}
											else
												{	/* Cfa/closure.scm 276 */
													BFALSE;
												}
										}
								}
							}
							{
								obj_t BgL_l4721z00_2497;

								BgL_l4721z00_2497 = CDR(BgL_l4721z00_1158);
								BgL_l4721z00_1158 = BgL_l4721z00_2497;
								goto BgL_zc3anonymousza34789ze3z83_1159;
							}
						}
					else
						{	/* Cfa/closure.scm 272 */
							return ((bool_t) 1);
						}
				}
			}
		}
	}



/* light-funcall! */
	bool_t BGl_lightzd2funcallz12zc0zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 282 */
			{
				obj_t BgL_l4723z00_1217;

				BgL_l4723z00_1217 = BGl_za2funcallzd2listza2zd2zzcfa_closurez00;
			BgL_zc3anonymousza34834ze3z83_1218:
				if (PAIRP(BgL_l4723z00_1217))
					{	/* Cfa/closure.scm 283 */
						{	/* Cfa/closure.scm 307 */
							BgL_funcallz00_bglt BgL_appz00_1220;

							BgL_appz00_1220 = (BgL_funcallz00_bglt) (CAR(BgL_l4723z00_1217));
							{	/* Cfa/closure.scm 285 */
								BgL_nodez00_bglt BgL_funz00_1221;

								BgL_funz00_1221 =
									(((BgL_funcallz00_bglt) CREF(BgL_appz00_1220))->BgL_funz00);
								{	/* Cfa/closure.scm 285 */
									BgL_approxz00_bglt BgL_approxz00_1222;

									BgL_approxz00_1222 =
										BGl_cfaz12z12zzcfa_cfaz00(BgL_funz00_1221);
									{	/* Cfa/closure.scm 286 */
										obj_t BgL_alloczd2listzd2_1223;

										{	/* Cfa/closure.scm 287 */
											obj_t BgL_arg4847z00_1239;

											BgL_arg4847z00_1239 =
												(((BgL_approxz00_bglt) CREF(BgL_approxz00_1222))->
												BgL_allocsz00);
											BgL_alloczd2listzd2_1223 =
												BGl_setzd2ze3listz31zzcfa_setz00(BgL_arg4847z00_1239);
										}
										{	/* Cfa/closure.scm 287 */

											{	/* Cfa/closure.scm 288 */
												bool_t BgL_testz00_2507;

												if (PAIRP(BgL_alloczd2listzd2_1223))
													{	/* Cfa/closure.scm 289 */
														bool_t BgL_testz00_2510;

														{	/* Cfa/closure.scm 289 */
															obj_t BgL_arg4846z00_1238;

															BgL_arg4846z00_1238 =
																CAR(BgL_alloczd2listzd2_1223);
															BgL_testz00_2510 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_arg4846z00_1238,
																BGl_makezd2procedurezd2appz00zzcfa_info2z00);
														}
														if (BgL_testz00_2510)
															{	/* Cfa/closure.scm 289 */
																BgL_testz00_2507 = ((bool_t) 0);
															}
														else
															{	/* Cfa/closure.scm 289 */
																BgL_testz00_2507 = ((bool_t) 1);
															}
													}
												else
													{	/* Cfa/closure.scm 288 */
														BgL_testz00_2507 = ((bool_t) 1);
													}
												if (BgL_testz00_2507)
													{	/* Cfa/closure.scm 288 */
														CNST_TABLE_REF(((long) 4));
													}
												else
													{	/* Cfa/closure.scm 293 */
														BgL_appz00_bglt BgL_allocz00_1225;

														{	/* Cfa/closure.scm 293 */
															obj_t BgL_pairz00_2026;

															BgL_pairz00_2026 = BgL_alloczd2listzd2_1223;
															BgL_allocz00_1225 =
																(BgL_appz00_bglt) (CAR(BgL_pairz00_2026));
														}
														{	/* Cfa/closure.scm 296 */
															bool_t BgL_testz00_2516;

															{	/* Cfa/closure.scm 296 */
																BgL_makezd2procedurezd2appz00_bglt
																	BgL_obj4301z00_2027;
																BgL_obj4301z00_2027 =
																	(BgL_makezd2procedurezd2appz00_bglt)
																	(BgL_allocz00_1225);
																{
																	obj_t BgL_auxz00_2518;

																	{	/* Cfa/closure.scm 296 */
																		BgL_objectz00_bglt BgL_auxz00_2519;

																		BgL_auxz00_2519 =
																			(BgL_objectz00_bglt)
																			(BgL_obj4301z00_2027);
																		BgL_auxz00_2518 =
																			BGL_OBJECT_WIDENING(BgL_auxz00_2519);
																	}
																	BgL_testz00_2516 =
																		(((BgL_makezd2procedurezd2appz00_bglt)
																			CREF(BgL_auxz00_2518))->BgL_xz00);
																}
															}
															if (BgL_testz00_2516)
																{	/* Cfa/closure.scm 296 */
																	{	/* Cfa/closure.scm 300 */
																		BgL_varz00_bglt BgL_arg4838z00_1228;

																		{	/* Cfa/closure.scm 300 */
																			BgL_varz00_bglt
																				BgL_duplicated4699z00_1229;
																			{	/* Cfa/closure.scm 300 */
																				obj_t BgL_pairz00_2029;

																				BgL_pairz00_2029 =
																					(((BgL_appz00_bglt)
																						CREF(BgL_allocz00_1225))->
																					BgL_argsz00);
																				BgL_duplicated4699z00_1229 =
																					(BgL_varz00_bglt) (CAR
																					(BgL_pairz00_2029));
																			}
																			{	/* Cfa/closure.scm 300 */
																				BgL_varz00_bglt BgL_new4700z00_1230;

																				{	/* Cfa/closure.scm 300 */
																					obj_t BgL_arg4839z00_1231;

																					BgL_typez00_bglt BgL_arg4840z00_1232;

																					BgL_variablez00_bglt
																						BgL_arg4841z00_1233;
																					{
																						BgL_nodez00_bglt BgL_auxz00_2526;

																						BgL_auxz00_2526 =
																							(BgL_nodez00_bglt)
																							(BgL_duplicated4699z00_1229);
																						BgL_arg4839z00_1231 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2526))->
																							BgL_locz00);
																					}
																					{
																						BgL_nodez00_bglt BgL_auxz00_2529;

																						BgL_auxz00_2529 =
																							(BgL_nodez00_bglt)
																							(BgL_duplicated4699z00_1229);
																						BgL_arg4840z00_1232 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2529))->
																							BgL_typez00);
																					}
																					BgL_arg4841z00_1233 =
																						(((BgL_varz00_bglt)
																							CREF
																							(BgL_duplicated4699z00_1229))->
																						BgL_variablez00);
																					BgL_new4700z00_1230 =
																						BGl_makezd2varzd2zzast_nodez00
																						(BgL_arg4839z00_1231,
																						BgL_arg4840z00_1232,
																						BgL_arg4841z00_1233);
																				}
																				{	/* Cfa/closure.scm 300 */

																					BgL_arg4838z00_1228 =
																						BgL_new4700z00_1230;
																				}
																			}
																		}
																		{
																			BgL_nodez00_bglt BgL_auxz00_2534;

																			BgL_auxz00_2534 =
																				(BgL_nodez00_bglt)
																				(BgL_arg4838z00_1228);
																			((((BgL_funcallz00_bglt)
																						CREF(BgL_appz00_1220))->
																					BgL_funz00) =
																				((BgL_nodez00_bglt) BgL_auxz00_2534),
																				BUNSPEC);
																		}
																	}
																	{	/* Cfa/closure.scm 301 */
																		BgL_funcallz00_bglt BgL_obj2316z00_2035;

																		obj_t BgL_val2315z00_2036;

																		BgL_obj2316z00_2035 = BgL_appz00_1220;
																		BgL_val2315z00_2036 =
																			CNST_TABLE_REF(((long) 5));
																		((((BgL_funcallz00_bglt)
																					CREF(BgL_obj2316z00_2035))->
																				BgL_strengthz00) =
																			((obj_t) BgL_val2315z00_2036), BUNSPEC);
																}}
															else
																{	/* Cfa/closure.scm 302 */
																	bool_t BgL_testz00_2539;

																	{	/* Cfa/closure.scm 302 */
																		BgL_makezd2procedurezd2appz00_bglt
																			BgL_obj4304z00_2037;
																		BgL_obj4304z00_2037 =
																			(BgL_makezd2procedurezd2appz00_bglt)
																			(BgL_allocz00_1225);
																		{
																			obj_t BgL_auxz00_2541;

																			{	/* Cfa/closure.scm 302 */
																				BgL_objectz00_bglt BgL_auxz00_2542;

																				BgL_auxz00_2542 =
																					(BgL_objectz00_bglt)
																					(BgL_obj4304z00_2037);
																				BgL_auxz00_2541 =
																					BGL_OBJECT_WIDENING(BgL_auxz00_2542);
																			}
																			BgL_testz00_2539 =
																				(((BgL_makezd2procedurezd2appz00_bglt)
																					CREF(BgL_auxz00_2541))->BgL_tz00);
																		}
																	}
																	if (BgL_testz00_2539)
																		{	/* Cfa/closure.scm 302 */
																			{	/* Cfa/closure.scm 304 */
																				BgL_funcallz00_bglt BgL_obj2316z00_2038;

																				obj_t BgL_val2315z00_2039;

																				BgL_obj2316z00_2038 = BgL_appz00_1220;
																				BgL_val2315z00_2039 =
																					CNST_TABLE_REF(((long) 6));
																				((((BgL_funcallz00_bglt)
																							CREF(BgL_obj2316z00_2038))->
																						BgL_strengthz00) =
																					((obj_t) BgL_val2315z00_2039),
																					BUNSPEC);
																		}}
																	else
																		{	/* Cfa/closure.scm 302 */
																			CNST_TABLE_REF(((long) 4));
						}}}}}}}}}}
						{
							obj_t BgL_l4723z00_2549;

							BgL_l4723z00_2549 = CDR(BgL_l4723z00_1217);
							BgL_l4723z00_1217 = BgL_l4723z00_2549;
							goto BgL_zc3anonymousza34834ze3z83_1218;
						}
					}
				else
					{	/* Cfa/closure.scm 283 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* light-access! */
	bool_t BGl_lightzd2accessz12zc0zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 313 */
			{
				obj_t BgL_l4725z00_1243;

				BgL_l4725z00_1243 = BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00;
			BgL_zc3anonymousza34849ze3z83_1244:
				if (PAIRP(BgL_l4725z00_1243))
					{	/* Cfa/closure.scm 314 */
						{	/* Cfa/closure.scm 316 */
							obj_t BgL_appz00_1246;

							BgL_appz00_1246 = CAR(BgL_l4725z00_1243);
							{	/* Cfa/closure.scm 316 */
								BgL_approxz00_bglt BgL_approxz00_1248;

								{	/* Cfa/closure.scm 317 */
									obj_t BgL_arg4866z00_1269;

									{	/* Cfa/closure.scm 317 */
										obj_t BgL_pairz00_2045;

										{
											BgL_appz00_bglt BgL_auxz00_2554;

											BgL_auxz00_2554 = (BgL_appz00_bglt) (BgL_appz00_1246);
											BgL_pairz00_2045 =
												(((BgL_appz00_bglt) CREF(BgL_auxz00_2554))->
												BgL_argsz00);
										}
										BgL_arg4866z00_1269 = CAR(BgL_pairz00_2045);
									}
									BgL_approxz00_1248 =
										BGl_cfaz12z12zzcfa_cfaz00(
										(BgL_nodez00_bglt) (BgL_arg4866z00_1269));
								}
								{	/* Cfa/closure.scm 317 */
									obj_t BgL_alloczd2listzd2_1249;

									{	/* Cfa/closure.scm 318 */
										obj_t BgL_arg4865z00_1268;

										BgL_arg4865z00_1268 =
											(((BgL_approxz00_bglt) CREF(BgL_approxz00_1248))->
											BgL_allocsz00);
										BgL_alloczd2listzd2_1249 =
											BGl_setzd2ze3listz31zzcfa_setz00(BgL_arg4865z00_1268);
									}
									{	/* Cfa/closure.scm 318 */
										BgL_varz00_bglt BgL_funz00_1250;

										{
											BgL_appz00_bglt BgL_auxz00_2562;

											BgL_auxz00_2562 = (BgL_appz00_bglt) (BgL_appz00_1246);
											BgL_funz00_1250 =
												(((BgL_appz00_bglt) CREF(BgL_auxz00_2562))->BgL_funz00);
										}
										{	/* Cfa/closure.scm 319 */
											BgL_variablez00_bglt BgL_vfunz00_1251;

											BgL_vfunz00_1251 =
												(((BgL_varz00_bglt) CREF(BgL_funz00_1250))->
												BgL_variablez00);
											{	/* Cfa/closure.scm 320 */

												{	/* Cfa/closure.scm 321 */
													bool_t BgL_testz00_2566;

													if (PAIRP(BgL_alloczd2listzd2_1249))
														{	/* Cfa/closure.scm 322 */
															bool_t BgL_testz00_2569;

															{	/* Cfa/closure.scm 322 */
																obj_t BgL_arg4864z00_1267;

																BgL_arg4864z00_1267 =
																	CAR(BgL_alloczd2listzd2_1249);
																BgL_testz00_2569 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_arg4864z00_1267,
																	BGl_makezd2procedurezd2appz00zzcfa_info2z00);
															}
															if (BgL_testz00_2569)
																{	/* Cfa/closure.scm 322 */
																	BgL_testz00_2566 = ((bool_t) 0);
																}
															else
																{	/* Cfa/closure.scm 322 */
																	BgL_testz00_2566 = ((bool_t) 1);
																}
														}
													else
														{	/* Cfa/closure.scm 321 */
															BgL_testz00_2566 = ((bool_t) 1);
														}
													if (BgL_testz00_2566)
														{	/* Cfa/closure.scm 321 */
															CNST_TABLE_REF(((long) 4));
														}
													else
														{	/* Cfa/closure.scm 324 */
															BgL_appz00_bglt BgL_allocz00_1253;

															{	/* Cfa/closure.scm 324 */
																obj_t BgL_pairz00_2052;

																BgL_pairz00_2052 = BgL_alloczd2listzd2_1249;
																BgL_allocz00_1253 =
																	(BgL_appz00_bglt) (CAR(BgL_pairz00_2052));
															}
															{	/* Cfa/closure.scm 327 */
																bool_t BgL_testz00_2575;

																{	/* Cfa/closure.scm 327 */
																	BgL_makezd2procedurezd2appz00_bglt
																		BgL_obj4301z00_2053;
																	BgL_obj4301z00_2053 =
																		(BgL_makezd2procedurezd2appz00_bglt)
																		(BgL_allocz00_1253);
																	{
																		obj_t BgL_auxz00_2577;

																		{	/* Cfa/closure.scm 327 */
																			BgL_objectz00_bglt BgL_auxz00_2578;

																			BgL_auxz00_2578 =
																				(BgL_objectz00_bglt)
																				(BgL_obj4301z00_2053);
																			BgL_auxz00_2577 =
																				BGL_OBJECT_WIDENING(BgL_auxz00_2578);
																		}
																		BgL_testz00_2575 =
																			(((BgL_makezd2procedurezd2appz00_bglt)
																				CREF(BgL_auxz00_2577))->BgL_xz00);
																	}
																}
																if (BgL_testz00_2575)
																	{	/* Cfa/closure.scm 328 */
																		bool_t BgL_testz00_2582;

																		{	/* Cfa/closure.scm 328 */
																			obj_t BgL_arg4856z00_1259;

																			{	/* Cfa/closure.scm 328 */
																				obj_t BgL_arg4858z00_1261;

																				{	/* Cfa/closure.scm 328 */
																					obj_t BgL_pairz00_2055;

																					BgL_pairz00_2055 =
																						(((BgL_appz00_bglt)
																							CREF(BgL_allocz00_1253))->
																						BgL_argsz00);
																					BgL_arg4858z00_1261 =
																						CAR(CDR(CDR(BgL_pairz00_2055)));
																				}
																				BgL_arg4856z00_1259 =
																					BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00
																					((BgL_nodez00_bglt)
																					(BgL_arg4858z00_1261));
																			}
																			BgL_testz00_2582 =
																				(
																				(long) CINT(BgL_arg4856z00_1259) ==
																				((long) 1));
																		}
																		if (BgL_testz00_2582)
																			{	/* Cfa/closure.scm 328 */
																				if (
																					((obj_t) (BgL_vfunz00_1251) ==
																						BGl_za2procedurezd2refza2zd2zzcfa_closurez00))
																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2594;
																						BgL_auxz00_2594 =
																							(BgL_variablez00_bglt)
																							(BGl_za2procedurezd21zd2elzd2refza2zd2zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									CREF(BgL_funz00_1250))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_auxz00_2594), BUNSPEC);
																					}
																				else
																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2597;
																						BgL_auxz00_2597 =
																							(BgL_variablez00_bglt)
																							(BGl_za2procedurezd21zd2elzd2setz12za2zc0zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									CREF(BgL_funz00_1250))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_auxz00_2597), BUNSPEC);
																					}
																			}
																		else
																			{	/* Cfa/closure.scm 328 */
																				if (
																					((obj_t) (BgL_vfunz00_1251) ==
																						BGl_za2procedurezd2refza2zd2zzcfa_closurez00))
																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2603;
																						BgL_auxz00_2603 =
																							(BgL_variablez00_bglt)
																							(BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									CREF(BgL_funz00_1250))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_auxz00_2603), BUNSPEC);
																					}
																				else
																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2606;
																						BgL_auxz00_2606 =
																							(BgL_variablez00_bglt)
																							(BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									CREF(BgL_funz00_1250))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_auxz00_2606), BUNSPEC);
																					}
																			}
																	}
																else
																	{	/* Cfa/closure.scm 335 */
																		bool_t BgL_testz00_2609;

																		{	/* Cfa/closure.scm 335 */
																			BgL_makezd2procedurezd2appz00_bglt
																				BgL_obj4304z00_2071;
																			BgL_obj4304z00_2071 =
																				(BgL_makezd2procedurezd2appz00_bglt)
																				(BgL_allocz00_1253);
																			{
																				obj_t BgL_auxz00_2611;

																				{	/* Cfa/closure.scm 335 */
																					BgL_objectz00_bglt BgL_auxz00_2612;

																					BgL_auxz00_2612 =
																						(BgL_objectz00_bglt)
																						(BgL_obj4304z00_2071);
																					BgL_auxz00_2611 =
																						BGL_OBJECT_WIDENING
																						(BgL_auxz00_2612);
																				}
																				BgL_testz00_2609 =
																					(((BgL_makezd2procedurezd2appz00_bglt)
																						CREF(BgL_auxz00_2611))->BgL_tz00);
																			}
																		}
																		if (BgL_testz00_2609)
																			{	/* Cfa/closure.scm 335 */
																				if (
																					((obj_t) (BgL_vfunz00_1251) ==
																						BGl_za2procedurezd2refza2zd2zzcfa_closurez00))
																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2619;
																						BgL_auxz00_2619 =
																							(BgL_variablez00_bglt)
																							(BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									CREF(BgL_funz00_1250))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_auxz00_2619), BUNSPEC);
																					}
																				else
																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2622;
																						BgL_auxz00_2622 =
																							(BgL_variablez00_bglt)
																							(BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00);
																						((((BgL_varz00_bglt)
																									CREF(BgL_funz00_1250))->
																								BgL_variablez00) =
																							((BgL_variablez00_bglt)
																								BgL_auxz00_2622), BUNSPEC);
																					}
																			}
																		else
																			{	/* Cfa/closure.scm 335 */
																				BFALSE;
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
						{
							obj_t BgL_l4725z00_2625;

							BgL_l4725z00_2625 = CDR(BgL_l4725z00_1243);
							BgL_l4725z00_1243 = BgL_l4725z00_2625;
							goto BgL_zc3anonymousza34849ze3z83_1244;
						}
					}
				else
					{	/* Cfa/closure.scm 314 */
						return ((bool_t) 1);
					}
			}
		}
	}



/* show-X-T */
	obj_t BGl_showzd2Xzd2Tz00zzcfa_closurez00(obj_t BgL_allocsz00_6)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 344 */
			{
				obj_t BgL_xpz00_1277;

				obj_t BgL_tpz00_1278;

				obj_t BgL_allocsz00_1279;

				BgL_xpz00_1277 = BNIL;
				BgL_tpz00_1278 = BNIL;
				BgL_allocsz00_1279 = BgL_allocsz00_6;
			BgL_zc3anonymousza34869ze3z83_1280:
				if (NULLP(BgL_allocsz00_1279))
					{	/* Cfa/closure.scm 355 */
						BGl_showz00zzcfa_closurez00(CNST_TABLE_REF(((long) 7)),
							BgL_xpz00_1277);
						BGl_showz00zzcfa_closurez00(CNST_TABLE_REF(((long) 8)),
							BgL_tpz00_1278);
						return BUNSPEC;
					}
				else
					{	/* Cfa/closure.scm 360 */
						obj_t BgL_instance4705z00_1282;

						BgL_instance4705z00_1282 = CAR(BgL_allocsz00_1279);
						{	/* Cfa/closure.scm 362 */
							bool_t BgL_testz00_2634;

							{	/* Cfa/closure.scm 362 */
								BgL_makezd2procedurezd2appz00_bglt BgL_obj4301z00_2079;

								BgL_obj4301z00_2079 =
									(BgL_makezd2procedurezd2appz00_bglt)
									(BgL_instance4705z00_1282);
								{
									obj_t BgL_auxz00_2636;

									{	/* Cfa/closure.scm 362 */
										BgL_objectz00_bglt BgL_auxz00_2637;

										BgL_auxz00_2637 =
											(BgL_objectz00_bglt) (BgL_obj4301z00_2079);
										BgL_auxz00_2636 = BGL_OBJECT_WIDENING(BgL_auxz00_2637);
									}
									BgL_testz00_2634 =
										(((BgL_makezd2procedurezd2appz00_bglt)
											CREF(BgL_auxz00_2636))->BgL_xz00);
								}
							}
							if (BgL_testz00_2634)
								{	/* Cfa/closure.scm 363 */
									obj_t BgL_arg4872z00_1284;

									obj_t BgL_arg4873z00_1285;

									{	/* Cfa/closure.scm 363 */
										BgL_variablez00_bglt BgL_arg4874z00_1286;

										{	/* Cfa/closure.scm 363 */
											BgL_varz00_bglt BgL_obj2155z00_2082;

											{	/* Cfa/closure.scm 363 */
												obj_t BgL_auxz00_2641;

												{	/* Cfa/closure.scm 363 */
													obj_t BgL_pairz00_2081;

													{
														BgL_appz00_bglt BgL_auxz00_2642;

														BgL_auxz00_2642 =
															(BgL_appz00_bglt) (BgL_instance4705z00_1282);
														BgL_pairz00_2081 =
															(((BgL_appz00_bglt) CREF(BgL_auxz00_2642))->
															BgL_argsz00);
													}
													BgL_auxz00_2641 = CAR(BgL_pairz00_2081);
												}
												BgL_obj2155z00_2082 =
													(BgL_varz00_bglt) (BgL_auxz00_2641);
											}
											BgL_arg4874z00_1286 =
												(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2082))->
												BgL_variablez00);
										}
										BgL_arg4872z00_1284 =
											MAKE_PAIR((obj_t) (BgL_arg4874z00_1286), BgL_xpz00_1277);
									}
									BgL_arg4873z00_1285 = CDR(BgL_allocsz00_1279);
									{
										obj_t BgL_allocsz00_2652;

										obj_t BgL_xpz00_2651;

										BgL_xpz00_2651 = BgL_arg4872z00_1284;
										BgL_allocsz00_2652 = BgL_arg4873z00_1285;
										BgL_allocsz00_1279 = BgL_allocsz00_2652;
										BgL_xpz00_1277 = BgL_xpz00_2651;
										goto BgL_zc3anonymousza34869ze3z83_1280;
									}
								}
							else
								{	/* Cfa/closure.scm 364 */
									bool_t BgL_testz00_2653;

									{	/* Cfa/closure.scm 364 */
										BgL_makezd2procedurezd2appz00_bglt BgL_obj4304z00_2084;

										BgL_obj4304z00_2084 =
											(BgL_makezd2procedurezd2appz00_bglt)
											(BgL_instance4705z00_1282);
										{
											obj_t BgL_auxz00_2655;

											{	/* Cfa/closure.scm 364 */
												BgL_objectz00_bglt BgL_auxz00_2656;

												BgL_auxz00_2656 =
													(BgL_objectz00_bglt) (BgL_obj4304z00_2084);
												BgL_auxz00_2655 = BGL_OBJECT_WIDENING(BgL_auxz00_2656);
											}
											BgL_testz00_2653 =
												(((BgL_makezd2procedurezd2appz00_bglt)
													CREF(BgL_auxz00_2655))->BgL_tz00);
										}
									}
									if (BgL_testz00_2653)
										{	/* Cfa/closure.scm 365 */
											obj_t BgL_arg4878z00_1290;

											obj_t BgL_arg4879z00_1291;

											{	/* Cfa/closure.scm 365 */
												BgL_variablez00_bglt BgL_arg4880z00_1292;

												{	/* Cfa/closure.scm 365 */
													BgL_varz00_bglt BgL_obj2155z00_2087;

													{	/* Cfa/closure.scm 365 */
														obj_t BgL_auxz00_2660;

														{	/* Cfa/closure.scm 365 */
															obj_t BgL_pairz00_2086;

															{
																BgL_appz00_bglt BgL_auxz00_2661;

																BgL_auxz00_2661 =
																	(BgL_appz00_bglt) (BgL_instance4705z00_1282);
																BgL_pairz00_2086 =
																	(((BgL_appz00_bglt) CREF(BgL_auxz00_2661))->
																	BgL_argsz00);
															}
															BgL_auxz00_2660 = CAR(BgL_pairz00_2086);
														}
														BgL_obj2155z00_2087 =
															(BgL_varz00_bglt) (BgL_auxz00_2660);
													}
													BgL_arg4880z00_1292 =
														(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2087))->
														BgL_variablez00);
												}
												BgL_arg4878z00_1290 =
													MAKE_PAIR(
													(obj_t) (BgL_arg4880z00_1292), BgL_tpz00_1278);
											}
											BgL_arg4879z00_1291 = CDR(BgL_allocsz00_1279);
											{
												obj_t BgL_allocsz00_2671;

												obj_t BgL_tpz00_2670;

												BgL_tpz00_2670 = BgL_arg4878z00_1290;
												BgL_allocsz00_2671 = BgL_arg4879z00_1291;
												BgL_allocsz00_1279 = BgL_allocsz00_2671;
												BgL_tpz00_1278 = BgL_tpz00_2670;
												goto BgL_zc3anonymousza34869ze3z83_1280;
											}
										}
									else
										{
											obj_t BgL_allocsz00_2672;

											BgL_allocsz00_2672 = CDR(BgL_allocsz00_1279);
											BgL_allocsz00_1279 = BgL_allocsz00_2672;
											goto BgL_zc3anonymousza34869ze3z83_1280;
										}
								}
						}
					}
			}
		}
	}



/* show */
	bool_t BGl_showz00zzcfa_closurez00(obj_t BgL_propz00_1297,
		obj_t BgL_lz00_1298)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 351 */
			if (PAIRP(BgL_lz00_1298))
				{	/* Cfa/closure.scm 346 */
					{	/* Cfa/closure.scm 348 */
						obj_t BgL_arg4889z00_1304;

						BgL_arg4889z00_1304 =
							BGl_shapez00zztools_shapez00(CAR(BgL_lz00_1298));
						{	/* Cfa/closure.scm 348 */
							obj_t BgL_list4890z00_1305;

							{	/* Cfa/closure.scm 348 */
								obj_t BgL_arg4891z00_1306;

								{	/* Cfa/closure.scm 348 */
									obj_t BgL_arg4892z00_1307;

									{	/* Cfa/closure.scm 348 */
										obj_t BgL_arg4893z00_1308;

										{	/* Cfa/closure.scm 348 */
											obj_t BgL_arg4894z00_1309;

											BgL_arg4894z00_1309 =
												MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
											BgL_arg4893z00_1308 =
												MAKE_PAIR(BgL_arg4889z00_1304, BgL_arg4894z00_1309);
										}
										BgL_arg4892z00_1307 =
											MAKE_PAIR(BGl_string5011z00zzcfa_closurez00,
											BgL_arg4893z00_1308);
									}
									BgL_arg4891z00_1306 =
										MAKE_PAIR(BgL_propz00_1297, BgL_arg4892z00_1307);
								}
								BgL_list4890z00_1305 =
									MAKE_PAIR(BGl_string5012z00zzcfa_closurez00,
									BgL_arg4891z00_1306);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
								BgL_list4890z00_1305);
					}}
					{	/* Cfa/closure.scm 349 */
						obj_t BgL_g4729z00_1311;

						BgL_g4729z00_1311 = CDR(BgL_lz00_1298);
						{
							obj_t BgL_l4727z00_1313;

							BgL_l4727z00_1313 = BgL_g4729z00_1311;
						BgL_zc3anonymousza34896ze3z83_1314:
							if (PAIRP(BgL_l4727z00_1313))
								{	/* Cfa/closure.scm 351 */
									{	/* Cfa/closure.scm 350 */
										obj_t BgL_xz00_1316;

										BgL_xz00_1316 = CAR(BgL_l4727z00_1313);
										{	/* Cfa/closure.scm 350 */
											obj_t BgL_arg4900z00_1319;

											BgL_arg4900z00_1319 =
												BGl_shapez00zztools_shapez00(BgL_xz00_1316);
											{	/* Cfa/closure.scm 350 */
												obj_t BgL_list4901z00_1320;

												{	/* Cfa/closure.scm 350 */
													obj_t BgL_arg4902z00_1321;

													{	/* Cfa/closure.scm 350 */
														obj_t BgL_arg4903z00_1322;

														BgL_arg4903z00_1322 =
															MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
														BgL_arg4902z00_1321 =
															MAKE_PAIR(BgL_arg4900z00_1319,
															BgL_arg4903z00_1322);
													}
													BgL_list4901z00_1320 =
														MAKE_PAIR(BGl_string5013z00zzcfa_closurez00,
														BgL_arg4902z00_1321);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
													BgL_list4901z00_1320);
									}}}
									{
										obj_t BgL_l4727z00_2697;

										BgL_l4727z00_2697 = CDR(BgL_l4727z00_1313);
										BgL_l4727z00_1313 = BgL_l4727z00_2697;
										goto BgL_zc3anonymousza34896ze3z83_1314;
									}
								}
							else
								{	/* Cfa/closure.scm 351 */
									return ((bool_t) 1);
								}
						}
					}
				}
			else
				{	/* Cfa/closure.scm 346 */
					return ((bool_t) 0);
				}
		}
	}



/* add-funcall! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2funcallz12zc0zzcfa_closurez00(BgL_nodez00_bglt BgL_astz00_7)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 379 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 380 */
					return (BGl_za2funcallzd2listza2zd2zzcfa_closurez00 =
						MAKE_PAIR(
							(obj_t) (BgL_astz00_7),
							BGl_za2funcallzd2listza2zd2zzcfa_closurez00), BUNSPEC);
				}
			else
				{	/* Cfa/closure.scm 380 */
					return BFALSE;
				}
		}
	}



/* _add-funcall! */
	obj_t BGl__addzd2funcallz12zc0zzcfa_closurez00(obj_t BgL_envz00_2124,
		obj_t BgL_astz00_2125)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 379 */
			return
				BGl_addzd2funcallz12zc0zzcfa_closurez00(
				(BgL_nodez00_bglt) (BgL_astz00_2125));
		}
	}



/* add-make-procedure! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(BgL_nodez00_bglt
		BgL_astz00_8)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 386 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 387 */
					return (BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00 =
						MAKE_PAIR(
							(obj_t) (BgL_astz00_8),
							BGl_za2makezd2procedurezd2listza2z00zzcfa_closurez00), BUNSPEC);
				}
			else
				{	/* Cfa/closure.scm 387 */
					return BFALSE;
				}
		}
	}



/* _add-make-procedure! */
	obj_t BGl__addzd2makezd2procedurez12z12zzcfa_closurez00(obj_t BgL_envz00_2126,
		obj_t BgL_astz00_2127)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 386 */
			return
				BGl_addzd2makezd2procedurez12z12zzcfa_closurez00(
				(BgL_nodez00_bglt) (BgL_astz00_2127));
		}
	}



/* add-procedure-ref! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(BgL_nodez00_bglt
		BgL_astz00_9)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 393 */
			if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
				{	/* Cfa/closure.scm 394 */
					return (BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00 =
						MAKE_PAIR(
							(obj_t) (BgL_astz00_9),
							BGl_za2procedurezd2refzd2listza2z00zzcfa_closurez00), BUNSPEC);
				}
			else
				{	/* Cfa/closure.scm 394 */
					return BFALSE;
				}
		}
	}



/* _add-procedure-ref! */
	obj_t BGl__addzd2procedurezd2refz12z12zzcfa_closurez00(obj_t BgL_envz00_2128,
		obj_t BgL_astz00_2129)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 393 */
			return
				BGl_addzd2procedurezd2refz12z12zzcfa_closurez00(
				(BgL_nodez00_bglt) (BgL_astz00_2129));
		}
	}



/* approx-procedure-el? */
	BGL_EXPORTED_DEF bool_t
		BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(BgL_approxz00_bglt
		BgL_approxz00_10)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 400 */
			{	/* Cfa/closure.scm 401 */
				BgL_typez00_bglt BgL_typez00_1329;

				obj_t BgL_alloczd2listzd2_1330;

				BgL_typez00_1329 =
					(((BgL_approxz00_bglt) CREF(BgL_approxz00_10))->BgL_typez00);
				{	/* Cfa/closure.scm 402 */
					obj_t BgL_arg4911z00_1338;

					BgL_arg4911z00_1338 =
						(((BgL_approxz00_bglt) CREF(BgL_approxz00_10))->BgL_allocsz00);
					BgL_alloczd2listzd2_1330 =
						BGl_setzd2ze3listz31zzcfa_setz00(BgL_arg4911z00_1338);
				}
				if (
					((obj_t) (BgL_typez00_1329) == BGl_za2procedureza2z00zztype_cachez00))
					{	/* Cfa/closure.scm 403 */
						if (PAIRP(BgL_alloczd2listzd2_1330))
							{	/* Cfa/closure.scm 404 */
								if (NULLP(CDR(BgL_alloczd2listzd2_1330)))
									{	/* Cfa/closure.scm 406 */
										bool_t BgL_testz00_2731;

										{	/* Cfa/closure.scm 406 */
											obj_t BgL_arg4909z00_1336;

											BgL_arg4909z00_1336 = CAR(BgL_alloczd2listzd2_1330);
											BgL_testz00_2731 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg4909z00_1336,
												BGl_makezd2procedurezd2appz00zzcfa_info2z00);
										}
										if (BgL_testz00_2731)
											{	/* Cfa/closure.scm 407 */
												BgL_makezd2procedurezd2appz00_bglt BgL_obj4301z00_2110;

												BgL_obj4301z00_2110 =
													(BgL_makezd2procedurezd2appz00_bglt) (CAR
													(BgL_alloczd2listzd2_1330));
												{
													obj_t BgL_auxz00_2736;

													{	/* Cfa/closure.scm 407 */
														BgL_objectz00_bglt BgL_auxz00_2737;

														BgL_auxz00_2737 =
															(BgL_objectz00_bglt) (BgL_obj4301z00_2110);
														BgL_auxz00_2736 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2737);
													}
													return
														(((BgL_makezd2procedurezd2appz00_bglt)
															CREF(BgL_auxz00_2736))->BgL_xz00);
												}
											}
										else
											{	/* Cfa/closure.scm 406 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Cfa/closure.scm 405 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Cfa/closure.scm 404 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* Cfa/closure.scm 403 */
						return ((bool_t) 0);
					}
			}
		}
	}



/* _approx-procedure-el? */
	obj_t BGl__approxzd2procedurezd2elzf3zf3zzcfa_closurez00(obj_t
		BgL_envz00_2130, obj_t BgL_approxz00_2131)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 400 */
			return
				BBOOL(BGl_approxzd2procedurezd2elzf3zf3zzcfa_closurez00(
					(BgL_approxz00_bglt) (BgL_approxz00_2131)));
		}
	}



/* approx-procedure-el1? */
	BGL_EXPORTED_DEF bool_t
		BGl_approxzd2procedurezd2el1zf3zf3zzcfa_closurez00(BgL_approxz00_bglt
		BgL_approxz00_11)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 412 */
			{	/* Cfa/closure.scm 413 */
				obj_t BgL_alloczd2listzd2_1339;

				{	/* Cfa/closure.scm 413 */
					obj_t BgL_arg4914z00_1343;

					BgL_arg4914z00_1343 =
						(((BgL_approxz00_bglt) CREF(BgL_approxz00_11))->BgL_allocsz00);
					BgL_alloczd2listzd2_1339 =
						BGl_setzd2ze3listz31zzcfa_setz00(BgL_arg4914z00_1343);
				}
				{	/* Cfa/closure.scm 414 */
					obj_t BgL_instance4711z00_1340;

					BgL_instance4711z00_1340 = CAR(BgL_alloczd2listzd2_1339);
					{	/* Cfa/closure.scm 415 */
						BgL_variablez00_bglt BgL_arg4912z00_1341;

						{	/* Cfa/closure.scm 415 */
							BgL_varz00_bglt BgL_obj2155z00_2114;

							{
								BgL_appz00_bglt BgL_auxz00_2747;

								BgL_auxz00_2747 = (BgL_appz00_bglt) (BgL_instance4711z00_1340);
								BgL_obj2155z00_2114 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2747))->BgL_funz00);
							}
							BgL_arg4912z00_1341 =
								(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2114))->
								BgL_variablez00);
						}
						return
							(
							(obj_t) (BgL_arg4912z00_1341) ==
							BGl_za2makezd2elzd2procedurezd21za2zd2zzcfa_closurez00);
					}
				}
			}
		}
	}



/* _approx-procedure-el1? */
	obj_t BGl__approxzd2procedurezd2el1zf3zf3zzcfa_closurez00(obj_t
		BgL_envz00_2132, obj_t BgL_approxz00_2133)
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 412 */
			return
				BBOOL(BGl_approxzd2procedurezd2el1zf3zf3zzcfa_closurez00(
					(BgL_approxz00_bglt) (BgL_approxz00_2133)));
		}
	}



/* start-cache */
	obj_t BGl_startzd2cachezd2zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 435 */
			BGl_za2procedurezd2refza2zd2zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 9)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 11)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 12)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 13)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 14)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 15)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd21zd2elzd2refza2zd2zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 16)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2procedurezd21zd2elzd2setz12za2zc0zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 17)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 18)),
				CNST_TABLE_REF(((long) 10)));
			BGl_za2makezd2elzd2procedurezd21za2zd2zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 19)),
				CNST_TABLE_REF(((long) 10)));
			return (BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 =
				BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 20)),
					CNST_TABLE_REF(((long) 10))), BUNSPEC);
		}
	}



/* stop-cache */
	obj_t BGl_stopzd2cachezd2zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 451 */
			BGl_za2procedurezd2refza2zd2zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2setz12za2zc0zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2lzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2refza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd2elzd2setz12za2z12zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd21zd2elzd2refza2zd2zzcfa_closurez00 = BFALSE;
			BGl_za2procedurezd21zd2elzd2setz12za2zc0zzcfa_closurez00 = BFALSE;
			BGl_za2makezd2elzd2procedureza2z00zzcfa_closurez00 = BFALSE;
			BGl_za2makezd2elzd2procedurezd21za2zd2zzcfa_closurez00 = BFALSE;
			return (BGl_za2makezd2lzd2procedureza2z00zzcfa_closurez00 =
				BFALSE, BUNSPEC);
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 25 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 25 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_closurez00()
	{
		AN_OBJECT;
		{	/* Cfa/closure.scm 25 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 474371048),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_ltypez00(((long) 315510299),
				BSTRING_TO_STRING(BGl_string5014z00zzcfa_closurez00));
		}
	}

#ifdef __cplusplus
}
#endif
