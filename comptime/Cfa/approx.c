/*===========================================================================*/
/*   (Cfa/approx.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/approx.scm)*/
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

	typedef struct BgL_localz00_bgl
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
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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

	typedef struct BgL_reshapedzd2localzd2_bgl
	{
		obj_t BgL_bindingzd2valuezd2;
	}                          *BgL_reshapedzd2localzd2_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2keyzd2zzcfa_approxz00(BgL_nodezf2effectzf2_bglt);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_declarezd2setz12zc0zzcfa_setz00(obj_t);
	static obj_t BGl__getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(obj_t, obj_t);
	static obj_t BGl_shapezd2approx4687zd2zzcfa_approxz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl__nodezd2keyzd2zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzcfa_approxz00();
	extern obj_t BGl_setzd2forzd2eachz00zzcfa_setz00(obj_t, obj_t);
	extern obj_t BGl_reshapedzd2localzd2zzcfa_infoz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_setzd2extendz12zc0zzcfa_setz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_procedurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_collectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_approxz00();
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_getzd2nodezd2atomzd2valuezd24691z00zzcfa_approxz00(obj_t,
		obj_t);
	static obj_t BGl_getzd2nodezd2atomzd2valuezd24693z00zzcfa_approxz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2alloczd2approxz00zzcfa_approxz00(BgL_appz00_bglt);
	static obj_t BGl__approxzd2setzd2typez12z12zzcfa_approxz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2setz12zc0zzcfa_setz00(obj_t);
	static obj_t BGl__declarezd2approxzd2setsz12z12zzcfa_approxz00(obj_t);
	static obj_t BGl__approxzd2setzd2topz12z12zzcfa_approxz00(obj_t, obj_t);
	static obj_t BGl__unionzd2approxz12zc0zzcfa_approxz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl__makezd2alloczd2approxz00zzcfa_approxz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	extern obj_t BGl_continuezd2cfaz12zc0zzcfa_iteratez00(obj_t);
	extern obj_t BGl_approxz00zzcfa_infoz00;
	static obj_t BGl_methodzd2initzd2zzcfa_approxz00();
	static obj_t BGl__nodezd2keyzd2setz12z12zzcfa_approxz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_approxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_approxz00();
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2keyzd2setz12z12zzcfa_approxz00(BgL_nodezf2effectzf2_bglt, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_setzd2unionz12zc0zzcfa_setz00(obj_t, obj_t);
	static obj_t BGl__getzd2nodezd2atomzd2valuezd24688z00zzcfa_approxz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2emptyzd2approxz00zzcfa_approxz00(obj_t);
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_approxz00();
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern BgL_approxz00_bglt BGl_makezd2approxzd2zzcfa_infoz00(BgL_typez00_bglt,
		bool_t, obj_t, bool_t, long);
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	extern obj_t BGl_getzd2allocszd2zzcfa_collectz00();
	extern obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2alloczd2setza2zd2zzcfa_approxz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
	static obj_t BGl__makezd2typezd2alloczd2approxzd2zzcfa_approxz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	static obj_t BGl__forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2typezd2approxz00zzcfa_approxz00(obj_t, obj_t);
	extern obj_t BGl_setzd2ze3vectorz31zzcfa_setz00(obj_t);
	extern obj_t BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_approxz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_approxz00();
	static obj_t __cnst[5];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2approxzd2setsz12zd2envzc0zzcfa_approxz00,
		BgL_bgl__declareza7d2appro4861za7,
		BGl__declarezd2approxzd2setsz12z12zzcfa_approxz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2keyzd2setz12zd2envzc0zzcfa_approxz00,
		BgL_bgl__nodeza7d2keyza7d2se4862z00,
		BGl__nodezd2keyzd2setz12z12zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2setzd2topz12zd2envzc0zzcfa_approxz00,
		BgL_bgl__approxza7d2setza7d24863z00,
		BGl__approxzd2setzd2topz12z12zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4852z00zzcfa_approxz00,
		BgL_bgl_shapeza7d2approx464864za7, BGl_shapezd2approx4687zd2zzcfa_approxz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4854z00zzcfa_approxz00,
		BgL_bgl_getza7d2nodeza7d2ato4865z00,
		BGl_getzd2nodezd2atomzd2valuezd24691z00zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4855z00zzcfa_approxz00,
		BgL_bgl_getza7d2nodeza7d2ato4866z00,
		BGl_getzd2nodezd2atomzd2valuezd24693z00zzcfa_approxz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4851z00zzcfa_approxz00,
		BgL_bgl_string4851za700za7za7c4867za7, "get-node-atom-value", 19);
	      DEFINE_STRING(BGl_string4853z00zzcfa_approxz00,
		BgL_bgl_string4853za700za7za7c4868za7, "shape", 5);
	      DEFINE_STRING(BGl_string4856z00zzcfa_approxz00,
		BgL_bgl_string4856za700za7za7c4869za7, "cfa_approx", 10);
	      DEFINE_STRING(BGl_string4857z00zzcfa_approxz00,
		BgL_bgl_string4857za700za7za7c4870za7,
		"top (no-atom-value) approx-set-top! approx-set-type! union ", 59);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typezd2approxzd2envzd2zzcfa_approxz00,
		BgL_bgl__makeza7d2typeza7d2a4871z00,
		BGl__makezd2typezd2approxz00zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
		BgL_bgl__getza7d2nodeza7d2at4872z00,
		BGl__getzd2nodezd2atomzd2valuezd2zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2nodezd2atomzd2valuezd24688zd2envzd2zzcfa_approxz00,
		BgL_bgl__getza7d2nodeza7d2at4873z00,
		BGl__getzd2nodezd2atomzd2valuezd24688z00zzcfa_approxz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2typezd2alloczd2approxzd2envz00zzcfa_approxz00,
		BgL_bgl__makeza7d2typeza7d2a4874z00,
		BGl__makezd2typezd2alloczd2approxzd2zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2alloczd2approxzd2envzd2zzcfa_approxz00,
		BgL_bgl__makeza7d2allocza7d24875z00,
		BGl__makezd2alloczd2approxz00zzcfa_approxz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2emptyzd2approxzd2envzd2zzcfa_approxz00,
		BgL_bgl__makeza7d2emptyza7d24876z00,
		BGl__makezd2emptyzd2approxz00zzcfa_approxz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_forzd2eachzd2approxzd2alloczd2envz00zzcfa_approxz00,
		BgL_bgl__forza7d2eachza7d2ap4877z00,
		BGl__forzd2eachzd2approxzd2alloczd2zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_approxzd2setzd2typez12zd2envzc0zzcfa_approxz00,
		BgL_bgl__approxza7d2setza7d24878z00,
		BGl__approxzd2setzd2typez12z12zzcfa_approxz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unionzd2approxz12zd2envz12zzcfa_approxz00,
		BgL_bgl__unionza7d2approxza74879z00,
		BGl__unionzd2approxz12zc0zzcfa_approxz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nodezd2keyzd2envz00zzcfa_approxz00,
		BgL_bgl__nodeza7d2keyza7d2za7za74880z00, BGl__nodezd2keyzd2zzcfa_approxz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long
		BgL_checksumz00_1832, char *BgL_fromz00_1833)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_approxz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_approxz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_approxz00();
					BGl_cnstzd2initzd2zzcfa_approxz00();
					BGl_importedzd2moduleszd2initz00zzcfa_approxz00();
					BGl_genericzd2initzd2zzcfa_approxz00();
					BGl_methodzd2initzd2zzcfa_approxz00();
					BGl_toplevelzd2initzd2zzcfa_approxz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_approx");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_approx");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_approx");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			{	/* Cfa/approx.scm 15 */
				obj_t BgL_cportz00_1818;

				BgL_cportz00_1818 =
					bgl_open_input_string(BGl_string4857z00zzcfa_approxz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1819;

					BgL_iz00_1819 = ((long) 4);
				BgL_loopz00_1820:
					if ((BgL_iz00_1819 == ((long) -1)))
						{	/* Cfa/approx.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/approx.scm 15 */
							{	/* Cfa/approx.scm 15 */
								obj_t BgL_arg4859z00_1822;

								{	/* Cfa/approx.scm 15 */

									{	/* Cfa/approx.scm 15 */
										obj_t BgL_locationz00_1824;

										BgL_locationz00_1824 = BBOOL(((bool_t) 0));
										{	/* Cfa/approx.scm 15 */

											BgL_arg4859z00_1822 =
												BGl_readz00zz__readerz00(BgL_cportz00_1818,
												BgL_locationz00_1824);
										}
									}
								}
								{	/* Cfa/approx.scm 15 */
									int BgL_auxz00_1852;

									BgL_auxz00_1852 = (int) (BgL_iz00_1819);
									CNST_TABLE_SET(BgL_auxz00_1852, BgL_arg4859z00_1822);
							}}
							{	/* Cfa/approx.scm 15 */
								int BgL_auxz00_1825;

								BgL_auxz00_1825 = (int) ((BgL_iz00_1819 - ((long) 1)));
								{
									long BgL_iz00_1857;

									BgL_iz00_1857 = (long) (BgL_auxz00_1825);
									BgL_iz00_1819 = BgL_iz00_1857;
									goto BgL_loopz00_1820;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			BGl_za2alloczd2setza2zd2zzcfa_approxz00 = BUNSPEC;
			return BUNSPEC;
		}
	}



/* declare-approx-sets! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 52 */
			return (BGl_za2alloczd2setza2zd2zzcfa_approxz00 =
				BGl_declarezd2setz12zc0zzcfa_setz00
				(BGl_listzd2ze3vectorz31zz__r4_vectors_6_8z00
					(BGl_getzd2allocszd2zzcfa_collectz00())), BUNSPEC);
		}
	}



/* _declare-approx-sets! */
	obj_t BGl__declarezd2approxzd2setsz12z12zzcfa_approxz00(obj_t BgL_envz00_1778)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 52 */
			return BGl_declarezd2approxzd2setsz12z12zzcfa_approxz00();
		}
	}



/* node-key */
	BGL_EXPORTED_DEF obj_t
		BGl_nodezd2keyzd2zzcfa_approxz00(BgL_nodezf2effectzf2_bglt BgL_nodez00_1)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 58 */
			return (((BgL_nodezf2effectzf2_bglt) CREF(BgL_nodez00_1))->BgL_keyz00);
		}
	}



/* _node-key */
	obj_t BGl__nodezd2keyzd2zzcfa_approxz00(obj_t BgL_envz00_1779,
		obj_t BgL_nodez00_1780)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 58 */
			{
				BgL_nodezf2effectzf2_bglt BgL_auxz00_1864;

				BgL_auxz00_1864 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1780);
				return
					(((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_1864))->BgL_keyz00);
			}
		}
	}



/* node-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_nodezd2keyzd2setz12z12zzcfa_approxz00(BgL_nodezf2effectzf2_bglt
		BgL_nodez00_2, obj_t BgL_keyz00_3)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 64 */
			return
				((((BgL_nodezf2effectzf2_bglt) CREF(BgL_nodez00_2))->BgL_keyz00) =
				((obj_t) BgL_keyz00_3), BUNSPEC);
		}
	}



/* _node-key-set! */
	obj_t BGl__nodezd2keyzd2setz12z12zzcfa_approxz00(obj_t BgL_envz00_1781,
		obj_t BgL_nodez00_1782, obj_t BgL_keyz00_1783)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 64 */
			{
				BgL_nodezf2effectzf2_bglt BgL_auxz00_1868;

				BgL_auxz00_1868 = (BgL_nodezf2effectzf2_bglt) (BgL_nodez00_1782);
				return
					((((BgL_nodezf2effectzf2_bglt) CREF(BgL_auxz00_1868))->BgL_keyz00) =
					((obj_t) BgL_keyz00_1783), BUNSPEC);
			}
		}
	}



/* union-approx! */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt BgL_dstz00_4,
		BgL_approxz00_bglt BgL_srcz00_5)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 70 */
			{	/* Cfa/approx.scm 72 */
				BgL_typez00_bglt BgL_arg4696z00_1058;

				BgL_arg4696z00_1058 =
					(((BgL_approxz00_bglt) CREF(BgL_srcz00_5))->BgL_typez00);
				BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_dstz00_4,
					BgL_arg4696z00_1058);
			}
			{	/* Cfa/approx.scm 74 */
				bool_t BgL_testz00_1873;

				{	/* Cfa/approx.scm 74 */
					bool_t BgL_testz00_1874;

					{	/* Cfa/approx.scm 74 */
						BgL_typez00_bglt BgL_arg4701z00_1062;

						BgL_arg4701z00_1062 =
							(((BgL_approxz00_bglt) CREF(BgL_dstz00_4))->BgL_typez00);
						BgL_testz00_1874 =
							(
							(obj_t) (BgL_arg4701z00_1062) ==
							BGl_za2procedureza2z00zztype_cachez00);
					}
					if (BgL_testz00_1874)
						{	/* Cfa/approx.scm 74 */
							BgL_testz00_1873 = ((bool_t) 1);
						}
					else
						{	/* Cfa/approx.scm 75 */
							BgL_typez00_bglt BgL_arg4700z00_1061;

							BgL_arg4700z00_1061 =
								(((BgL_approxz00_bglt) CREF(BgL_dstz00_4))->BgL_typez00);
							BgL_testz00_1873 =
								(
								(obj_t) (BgL_arg4700z00_1061) == BGl_za2_za2z00zztype_cachez00);
						}
				}
				if (BgL_testz00_1873)
					{	/* Cfa/approx.scm 74 */
						BFALSE;
					}
				else
					{	/* Cfa/approx.scm 74 */
						BGl_disablezd2Xzd2Tz12z12zzcfa_procedurez00(BgL_srcz00_5);
					}
			}
			if ((((BgL_approxz00_bglt) CREF(BgL_srcz00_5))->BgL_topzf3zf3))
				{	/* Cfa/approx.scm 78 */
					BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_dstz00_4);
				}
			else
				{	/* Cfa/approx.scm 78 */
					BFALSE;
				}
			{	/* Cfa/approx.scm 81 */
				bool_t BgL_testz00_1885;

				{	/* Cfa/approx.scm 81 */
					obj_t BgL_arg4704z00_1065;

					obj_t BgL_arg4705z00_1066;

					BgL_arg4704z00_1065 =
						(((BgL_approxz00_bglt) CREF(BgL_dstz00_4))->BgL_allocsz00);
					BgL_arg4705z00_1066 =
						(((BgL_approxz00_bglt) CREF(BgL_srcz00_5))->BgL_allocsz00);
					{	/* Cfa/approx.scm 81 */
						obj_t BgL_list4706z00_1067;

						BgL_list4706z00_1067 = MAKE_PAIR(BgL_arg4705z00_1066, BNIL);
						BgL_testz00_1885 =
							CBOOL(BGl_setzd2unionz12zc0zzcfa_setz00(BgL_arg4704z00_1065,
								BgL_list4706z00_1067));
					}
				}
				if (BgL_testz00_1885)
					{	/* Cfa/approx.scm 81 */
						BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF(((long)
									0)));
					}
				else
					{	/* Cfa/approx.scm 81 */
						BFALSE;
					}
			}
			return BgL_dstz00_4;
		}
	}



/* _union-approx! */
	obj_t BGl__unionzd2approxz12zc0zzcfa_approxz00(obj_t BgL_envz00_1784,
		obj_t BgL_dstz00_1785, obj_t BgL_srcz00_1786)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 70 */
			return
				(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00(
					(BgL_approxz00_bglt) (BgL_dstz00_1785),
					(BgL_approxz00_bglt) (BgL_srcz00_1786)));
		}
	}



/* approx-set-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt
		BgL_dstz00_6, BgL_typez00_bglt BgL_typez00_7)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 89 */
			if ((((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->BgL_typezd2lockedzf3z21))
				{	/* Cfa/approx.scm 91 */
					return BFALSE;
				}
			else
				{	/* Cfa/approx.scm 91 */
					if (((obj_t) (BgL_typez00_7) == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/approx.scm 93 */
							return BFALSE;
						}
					else
						{	/* Cfa/approx.scm 93 */
							if (
								((obj_t) (
										(((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->BgL_typez00)) ==
									(obj_t) (BgL_typez00_7)))
								{	/* Cfa/approx.scm 95 */
									return BFALSE;
								}
							else
								{	/* Cfa/approx.scm 97 */
									bool_t BgL_testz00_1907;

									{	/* Cfa/approx.scm 97 */
										bool_t BgL_testz00_1908;

										{	/* Cfa/approx.scm 97 */
											BgL_typez00_bglt BgL_arg4719z00_1080;

											BgL_arg4719z00_1080 =
												(((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->
												BgL_typez00);
											BgL_testz00_1908 =
												((obj_t) (BgL_arg4719z00_1080) ==
												BGl_za2longza2z00zztype_cachez00);
										}
										if (BgL_testz00_1908)
											{	/* Cfa/approx.scm 97 */
												BgL_testz00_1907 =
													(
													(obj_t) (BgL_typez00_7) ==
													BGl_za2intza2z00zztype_cachez00);
											}
										else
											{	/* Cfa/approx.scm 97 */
												BgL_testz00_1907 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_1907)
										{	/* Cfa/approx.scm 97 */
											return BFALSE;
										}
									else
										{	/* Cfa/approx.scm 99 */
											bool_t BgL_testz00_1914;

											{	/* Cfa/approx.scm 99 */
												bool_t BgL_testz00_1915;

												{	/* Cfa/approx.scm 99 */
													BgL_typez00_bglt BgL_arg4717z00_1078;

													BgL_arg4717z00_1078 =
														(((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->
														BgL_typez00);
													BgL_testz00_1915 =
														((obj_t) (BgL_arg4717z00_1078) ==
														BGl_za2intza2z00zztype_cachez00);
												}
												if (BgL_testz00_1915)
													{	/* Cfa/approx.scm 99 */
														BgL_testz00_1914 =
															(
															(obj_t) (BgL_typez00_7) ==
															BGl_za2longza2z00zztype_cachez00);
													}
												else
													{	/* Cfa/approx.scm 99 */
														BgL_testz00_1914 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_1914)
												{	/* Cfa/approx.scm 99 */
													return BFALSE;
												}
											else
												{	/* Cfa/approx.scm 101 */
													bool_t BgL_testz00_1921;

													{	/* Cfa/approx.scm 101 */
														BgL_typez00_bglt BgL_arg4715z00_1076;

														BgL_arg4715z00_1076 =
															(((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->
															BgL_typez00);
														BgL_testz00_1921 =
															((obj_t) (BgL_arg4715z00_1076) ==
															BGl_za2objza2z00zztype_cachez00);
													}
													if (BgL_testz00_1921)
														{	/* Cfa/approx.scm 101 */
															return BFALSE;
														}
													else
														{	/* Cfa/approx.scm 103 */
															bool_t BgL_testz00_1925;

															{	/* Cfa/approx.scm 103 */
																BgL_typez00_bglt BgL_arg4714z00_1075;

																BgL_arg4714z00_1075 =
																	(((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->
																	BgL_typez00);
																BgL_testz00_1925 =
																	((obj_t) (BgL_arg4714z00_1075) ==
																	BGl_za2_za2z00zztype_cachez00);
															}
															if (BgL_testz00_1925)
																{	/* Cfa/approx.scm 103 */
																	((((BgL_approxz00_bglt) CREF(BgL_dstz00_6))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_typez00_7),
																		BUNSPEC);
																	return
																		BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																		(CNST_TABLE_REF(((long) 1)));
																}
															else
																{	/* Cfa/approx.scm 103 */
																	{
																		BgL_typez00_bglt BgL_auxz00_1932;

																		BgL_auxz00_1932 =
																			(BgL_typez00_bglt)
																			(BGl_za2objza2z00zztype_cachez00);
																		((((BgL_approxz00_bglt)
																					CREF(BgL_dstz00_6))->BgL_typez00) =
																			((BgL_typez00_bglt) BgL_auxz00_1932),
																			BUNSPEC);
																	}
																	return
																		BGl_continuezd2cfaz12zc0zzcfa_iteratez00
																		(CNST_TABLE_REF(((long) 1)));
		}}}}}}}}
	}



/* _approx-set-type! */
	obj_t BGl__approxzd2setzd2typez12z12zzcfa_approxz00(obj_t BgL_envz00_1787,
		obj_t BgL_dstz00_1788, obj_t BgL_typez00_1789)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 89 */
			return
				BGl_approxzd2setzd2typez12z12zzcfa_approxz00(
				(BgL_approxz00_bglt) (BgL_dstz00_1788),
				(BgL_typez00_bglt) (BgL_typez00_1789));
		}
	}



/* approx-set-top! */
	BGL_EXPORTED_DEF obj_t
		BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt BgL_dstz00_8)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 113 */
			if ((((BgL_approxz00_bglt) CREF(BgL_dstz00_8))->BgL_topzf3zf3))
				{	/* Cfa/approx.scm 114 */
					return BFALSE;
				}
			else
				{	/* Cfa/approx.scm 114 */
					((((BgL_approxz00_bglt) CREF(BgL_dstz00_8))->BgL_topzf3zf3) =
						((bool_t) ((bool_t) 1)), BUNSPEC);
					return BGl_continuezd2cfaz12zc0zzcfa_iteratez00(CNST_TABLE_REF(((long)
								2)));
		}}
	}



/* _approx-set-top! */
	obj_t BGl__approxzd2setzd2topz12z12zzcfa_approxz00(obj_t BgL_envz00_1790,
		obj_t BgL_dstz00_1791)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 113 */
			return
				BGl_approxzd2setzd2topz12z12zzcfa_approxz00(
				(BgL_approxz00_bglt) (BgL_dstz00_1791));
		}
	}



/* make-empty-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2emptyzd2approxz00zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 122 */
			{	/* Cfa/approx.scm 123 */
				obj_t BgL_allocsz00_1083;

				BgL_allocsz00_1083 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				return
					BGl_makezd2approxzd2zzcfa_infoz00((BgL_typez00_bglt)
					(BGl_za2_za2z00zztype_cachez00), ((bool_t) 0), BgL_allocsz00_1083,
					((bool_t) 0), ((long) -1));
		}}
	}



/* _make-empty-approx */
	obj_t BGl__makezd2emptyzd2approxz00zzcfa_approxz00(obj_t BgL_envz00_1792)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 122 */
			return (obj_t) (BGl_makezd2emptyzd2approxz00zzcfa_approxz00());
		}
	}



/* make-type-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt BgL_typez00_9)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 131 */
			{	/* Cfa/approx.scm 132 */
				obj_t BgL_allocsz00_1084;

				BgL_allocsz00_1084 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				{	/* Cfa/approx.scm 134 */
					bool_t BgL_arg4722z00_1085;

					if (((obj_t) (BgL_typez00_9) == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/approx.scm 134 */
							BgL_arg4722z00_1085 = ((bool_t) 0);
						}
					else
						{	/* Cfa/approx.scm 134 */
							BgL_arg4722z00_1085 = ((bool_t) 1);
						}
					return
						BGl_makezd2approxzd2zzcfa_infoz00(BgL_typez00_9,
						BgL_arg4722z00_1085, BgL_allocsz00_1084, ((bool_t) 0), ((long) -1));
		}}}
	}



/* _make-type-approx */
	obj_t BGl__makezd2typezd2approxz00zzcfa_approxz00(obj_t BgL_envz00_1793,
		obj_t BgL_typez00_1794)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 131 */
			return
				(obj_t) (BGl_makezd2typezd2approxz00zzcfa_approxz00(
					(BgL_typez00_bglt) (BgL_typez00_1794)));
		}
	}



/* make-alloc-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2alloczd2approxz00zzcfa_approxz00(BgL_appz00_bglt BgL_allocz00_10)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 141 */
			{	/* Cfa/approx.scm 142 */
				obj_t BgL_allocsz00_1088;

				BgL_allocsz00_1088 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				BGl_setzd2extendz12zc0zzcfa_setz00(BgL_allocsz00_1088,
					(obj_t) (BgL_allocz00_10));
				return
					BGl_makezd2approxzd2zzcfa_infoz00((BgL_typez00_bglt)
					(BGl_typez00zztype_typez00), ((bool_t) 0), BgL_allocsz00_1088,
					((bool_t) 0), ((long) -1));
		}}
	}



/* _make-alloc-approx */
	obj_t BGl__makezd2alloczd2approxz00zzcfa_approxz00(obj_t BgL_envz00_1795,
		obj_t BgL_allocz00_1796)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 141 */
			return
				(obj_t) (BGl_makezd2alloczd2approxz00zzcfa_approxz00(
					(BgL_appz00_bglt) (BgL_allocz00_1796)));
		}
	}



/* make-type-alloc-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt
		BgL_typez00_11, BgL_nodez00_bglt BgL_allocz00_12)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 151 */
			{	/* Cfa/approx.scm 152 */
				obj_t BgL_allocsz00_1089;

				BgL_allocsz00_1089 =
					BGl_makezd2setz12zc0zzcfa_setz00
					(BGl_za2alloczd2setza2zd2zzcfa_approxz00);
				BGl_setzd2extendz12zc0zzcfa_setz00(BgL_allocsz00_1089,
					(obj_t) (BgL_allocz00_12));
				{	/* Cfa/approx.scm 155 */
					bool_t BgL_arg4725z00_1090;

					if (((obj_t) (BgL_typez00_11) == BGl_za2_za2z00zztype_cachez00))
						{	/* Cfa/approx.scm 155 */
							BgL_arg4725z00_1090 = ((bool_t) 0);
						}
					else
						{	/* Cfa/approx.scm 155 */
							BgL_arg4725z00_1090 = ((bool_t) 1);
						}
					return
						BGl_makezd2approxzd2zzcfa_infoz00(BgL_typez00_11,
						BgL_arg4725z00_1090, BgL_allocsz00_1089, ((bool_t) 0), ((long) -1));
		}}}
	}



/* _make-type-alloc-approx */
	obj_t BGl__makezd2typezd2alloczd2approxzd2zzcfa_approxz00(obj_t
		BgL_envz00_1797, obj_t BgL_typez00_1798, obj_t BgL_allocz00_1799)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 151 */
			return
				(obj_t) (BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
					(BgL_typez00_bglt) (BgL_typez00_1798),
					(BgL_nodez00_bglt) (BgL_allocz00_1799)));
		}
	}



/* for-each-approx-alloc */
	BGL_EXPORTED_DEF obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t
		BgL_procz00_14, BgL_approxz00_bglt BgL_approxz00_15)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 181 */
			{	/* Cfa/approx.scm 182 */
				obj_t BgL_arg4728z00_1691;

				BgL_arg4728z00_1691 =
					(((BgL_approxz00_bglt) CREF(BgL_approxz00_15))->BgL_allocsz00);
				return
					BGl_setzd2forzd2eachz00zzcfa_setz00(BgL_procz00_14,
					BgL_arg4728z00_1691);
			}
		}
	}



/* _for-each-approx-alloc */
	obj_t BGl__forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t
		BgL_envz00_1800, obj_t BgL_procz00_1801, obj_t BgL_approxz00_1802)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 181 */
			return
				BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(BgL_procz00_1801,
				(BgL_approxz00_bglt) (BgL_approxz00_1802));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
				BGl_getzd2nodezd2atomzd2valuezd24688zd2envzd2zzcfa_approxz00,
				BGl_nodez00zzast_nodez00, BGl_string4851z00zzcfa_approxz00);
		}
	}



/* get-node-atom-value */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(BgL_nodez00_bglt
		BgL_nodez00_16)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 190 */
			{	/* Cfa/approx.scm 190 */
				obj_t BgL_method4689z00_1693;

				{	/* Cfa/approx.scm 190 */
					BgL_objectz00_bglt BgL_objz00_1694;

					BgL_objz00_1694 = (BgL_objectz00_bglt) (BgL_nodez00_16);
					{	/* Cfa/approx.scm 190 */
						long BgL_objzd2classzd2numz00_1695;

						BgL_objzd2classzd2numz00_1695 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1694);
						{	/* Cfa/approx.scm 190 */
							obj_t BgL_arg2643z00_1696;

							BgL_arg2643z00_1696 =
								PROCEDURE_REF
								(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
								(int) (((long) 1)));
							{	/* Cfa/approx.scm 190 */
								obj_t BgL_arrayz00_1698;

								int BgL_offsetz00_1699;

								BgL_arrayz00_1698 = BgL_arg2643z00_1696;
								BgL_offsetz00_1699 = (int) (BgL_objzd2classzd2numz00_1695);
								{	/* Cfa/approx.scm 190 */
									long BgL_offsetz00_1700;

									BgL_offsetz00_1700 =
										((long) (BgL_offsetz00_1699) - OBJECT_TYPE);
									{	/* Cfa/approx.scm 190 */
										long BgL_modz00_1701;

										{	/* Cfa/approx.scm 190 */
											int BgL_arg2645z00_1702;

											BgL_arg2645z00_1702 = (int) (((long) 16));
											{	/* Cfa/approx.scm 190 */
												long BgL_auxz00_1992;

												BgL_auxz00_1992 = (long) (BgL_arg2645z00_1702);
												BgL_modz00_1701 =
													(BgL_offsetz00_1700 / BgL_auxz00_1992);
										}}
										{	/* Cfa/approx.scm 190 */
											long BgL_restz00_1703;

											{	/* Cfa/approx.scm 190 */
												int BgL_arg2644z00_1704;

												BgL_arg2644z00_1704 = (int) (((long) 16));
												{	/* Cfa/approx.scm 190 */
													long BgL_auxz00_1996;

													BgL_auxz00_1996 = (long) (BgL_arg2644z00_1704);
													BgL_restz00_1703 =
														(BgL_offsetz00_1700 % BgL_auxz00_1996);
											}}
											{	/* Cfa/approx.scm 190 */

												BgL_method4689z00_1693 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1698,
														(int) (BgL_modz00_1701)), (int) (BgL_restz00_1703));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method4689z00_1693) (BgL_method4689z00_1693,
					(obj_t) (BgL_nodez00_16), BEOA);
			}
		}
	}



/* _get-node-atom-value */
	obj_t BGl__getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(obj_t BgL_envz00_1803,
		obj_t BgL_nodez00_1804)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 190 */
			return
				BGl_getzd2nodezd2atomzd2valuezd2zzcfa_approxz00(
				(BgL_nodez00_bglt) (BgL_nodez00_1804));
		}
	}



/* _get-node-atom-value-4688 */
	obj_t BGl__getzd2nodezd2atomzd2valuezd24688z00zzcfa_approxz00(obj_t
		BgL_envz00_1805, obj_t BgL_nodez00_1806)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			{	/* Cfa/approx.scm 191 */
				obj_t BgL_res4860z00_1830;

				BgL_res4860z00_1830 = CNST_TABLE_REF(((long) 3));
				return BgL_res4860z00_1830;
			}
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_approxz00zzcfa_infoz00,
				BGl_proc4852z00zzcfa_approxz00, BGl_string4853z00zzcfa_approxz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
				BGl_atomz00zzast_nodez00, BGl_proc4854z00zzcfa_approxz00,
				BGl_string4851z00zzcfa_approxz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
				BGl_varz00zzast_nodez00, BGl_proc4855z00zzcfa_approxz00,
				BGl_string4851z00zzcfa_approxz00);
		}
	}



/* get-node-atom-value-4693 */
	obj_t BGl_getzd2nodezd2atomzd2valuezd24693z00zzcfa_approxz00(obj_t
		BgL_envz00_1810, obj_t BgL_nodez00_1811)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 202 */
			{
				BgL_varz00_bglt BgL_nodez00_1658;

				BgL_nodez00_1658 = (BgL_varz00_bglt) (BgL_nodez00_1811);
				{	/* Cfa/approx.scm 203 */
					BgL_variablez00_bglt BgL_vz00_1661;

					BgL_vz00_1661 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1658))->BgL_variablez00);
					{	/* Cfa/approx.scm 204 */
						bool_t BgL_testz00_2013;

						{	/* Cfa/approx.scm 204 */
							bool_t BgL_testz00_2014;

							{	/* Cfa/approx.scm 204 */
								obj_t BgL_obj3551z00_1748;

								BgL_obj3551z00_1748 = (obj_t) (BgL_vz00_1661);
								BgL_testz00_2014 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3551z00_1748,
									BGl_reshapedzd2localzd2zzcfa_infoz00);
							}
							if (BgL_testz00_2014)
								{	/* Cfa/approx.scm 204 */
									obj_t BgL_arg4844z00_1665;

									{	/* Cfa/approx.scm 204 */
										BgL_reshapedzd2localzd2_bglt BgL_obj3552z00_1749;

										BgL_obj3552z00_1749 =
											(BgL_reshapedzd2localzd2_bglt) (BgL_vz00_1661);
										{
											obj_t BgL_auxz00_2018;

											{	/* Cfa/approx.scm 204 */
												BgL_objectz00_bglt BgL_auxz00_2019;

												BgL_auxz00_2019 =
													(BgL_objectz00_bglt) (BgL_obj3552z00_1749);
												BgL_auxz00_2018 = BGL_OBJECT_WIDENING(BgL_auxz00_2019);
											}
											BgL_arg4844z00_1665 =
												(((BgL_reshapedzd2localzd2_bglt)
													CREF(BgL_auxz00_2018))->BgL_bindingzd2valuezd2);
										}
									}
									BgL_testz00_2013 =
										BGl_iszd2azf3z21zz__objectz00(BgL_arg4844z00_1665,
										BGl_nodez00zzast_nodez00);
								}
							else
								{	/* Cfa/approx.scm 204 */
									BgL_testz00_2013 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_2013)
							{	/* Cfa/approx.scm 205 */
								obj_t BgL_arg4842z00_1663;

								{	/* Cfa/approx.scm 205 */
									BgL_reshapedzd2localzd2_bglt BgL_obj3552z00_1751;

									BgL_obj3552z00_1751 =
										(BgL_reshapedzd2localzd2_bglt) (BgL_vz00_1661);
									{
										obj_t BgL_auxz00_2025;

										{	/* Cfa/approx.scm 205 */
											BgL_objectz00_bglt BgL_auxz00_2026;

											BgL_auxz00_2026 =
												(BgL_objectz00_bglt) (BgL_obj3552z00_1751);
											BgL_auxz00_2025 = BGL_OBJECT_WIDENING(BgL_auxz00_2026);
										}
										BgL_arg4842z00_1663 =
											(((BgL_reshapedzd2localzd2_bglt) CREF(BgL_auxz00_2025))->
											BgL_bindingzd2valuezd2);
									}
								}
								{	/* Cfa/approx.scm 205 */
									BgL_nodez00_bglt BgL_nodez00_1752;

									BgL_nodez00_1752 = (BgL_nodez00_bglt) (BgL_arg4842z00_1663);
									{	/* Cfa/approx.scm 205 */
										obj_t BgL_method4689z00_1753;

										{	/* Cfa/approx.scm 205 */
											BgL_objectz00_bglt BgL_objz00_1754;

											BgL_objz00_1754 = (BgL_objectz00_bglt) (BgL_nodez00_1752);
											{	/* Cfa/approx.scm 205 */
												long BgL_objzd2classzd2numz00_1755;

												BgL_objzd2classzd2numz00_1755 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1754);
												{	/* Cfa/approx.scm 205 */
													obj_t BgL_arg2643z00_1756;

													BgL_arg2643z00_1756 =
														PROCEDURE_REF
														(BGl_getzd2nodezd2atomzd2valuezd2envz00zzcfa_approxz00,
														(int) (((long) 1)));
													{	/* Cfa/approx.scm 205 */
														obj_t BgL_arrayz00_1758;

														int BgL_offsetz00_1759;

														BgL_arrayz00_1758 = BgL_arg2643z00_1756;
														BgL_offsetz00_1759 =
															(int) (BgL_objzd2classzd2numz00_1755);
														{	/* Cfa/approx.scm 205 */
															long BgL_offsetz00_1760;

															BgL_offsetz00_1760 =
																((long) (BgL_offsetz00_1759) - OBJECT_TYPE);
															{	/* Cfa/approx.scm 205 */
																long BgL_modz00_1761;

																{	/* Cfa/approx.scm 205 */
																	int BgL_arg2645z00_1762;

																	BgL_arg2645z00_1762 = (int) (((long) 16));
																	{	/* Cfa/approx.scm 205 */
																		long BgL_auxz00_2039;

																		BgL_auxz00_2039 =
																			(long) (BgL_arg2645z00_1762);
																		BgL_modz00_1761 =
																			(BgL_offsetz00_1760 / BgL_auxz00_2039);
																}}
																{	/* Cfa/approx.scm 205 */
																	long BgL_restz00_1763;

																	{	/* Cfa/approx.scm 205 */
																		int BgL_arg2644z00_1764;

																		BgL_arg2644z00_1764 = (int) (((long) 16));
																		{	/* Cfa/approx.scm 205 */
																			long BgL_auxz00_2043;

																			BgL_auxz00_2043 =
																				(long) (BgL_arg2644z00_1764);
																			BgL_restz00_1763 =
																				(BgL_offsetz00_1760 % BgL_auxz00_2043);
																	}}
																	{	/* Cfa/approx.scm 205 */

																		BgL_method4689z00_1753 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1758,
																				(int) (BgL_modz00_1761)),
																			(int) (BgL_restz00_1763));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method4689z00_1753)
											(BgL_method4689z00_1753, (obj_t) (BgL_nodez00_1752),
											BEOA);
									}
								}
							}
						else
							{	/* Cfa/approx.scm 204 */
								return CNST_TABLE_REF(((long) 3));
		}}}}}
	}



/* get-node-atom-value-4691 */
	obj_t BGl_getzd2nodezd2atomzd2valuezd24691z00zzcfa_approxz00(obj_t
		BgL_envz00_1812, obj_t BgL_nodez00_1813)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 196 */
			{
				BgL_atomz00_bglt BgL_auxz00_2055;

				BgL_auxz00_2055 = (BgL_atomz00_bglt) (BgL_nodez00_1813);
				return (((BgL_atomz00_bglt) CREF(BgL_auxz00_2055))->BgL_valuez00);
			}
		}
	}



/* shape-approx4687 */
	obj_t BGl_shapezd2approx4687zd2zzcfa_approxz00(obj_t BgL_envz00_1814,
		obj_t BgL_expz00_1815)
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 162 */
			{
				BgL_approxz00_bglt BgL_expz00_1625;

				BgL_expz00_1625 = (BgL_approxz00_bglt) (BgL_expz00_1815);
				{	/* Cfa/approx.scm 164 */
					obj_t BgL_typezd2idzd2_1629;

					{	/* Cfa/approx.scm 164 */
						obj_t BgL_arg4837z00_1649;

						{	/* Cfa/approx.scm 164 */
							BgL_typez00_bglt BgL_obj1508z00_1719;

							BgL_obj1508z00_1719 =
								(((BgL_approxz00_bglt) CREF(BgL_expz00_1625))->BgL_typez00);
							BgL_arg4837z00_1649 =
								(((BgL_typez00_bglt) CREF(BgL_obj1508z00_1719))->BgL_idz00);
						}
						BgL_typezd2idzd2_1629 =
							BGl_makezd2typedzd2formalz00zzast_identz00(BgL_arg4837z00_1649);
					}
					{	/* Cfa/approx.scm 165 */
						obj_t BgL_keysz00_1630;

						{	/* Cfa/approx.scm 165 */
							obj_t BgL_arg4836z00_1648;

							BgL_arg4836z00_1648 =
								(((BgL_approxz00_bglt) CREF(BgL_expz00_1625))->BgL_allocsz00);
							BgL_keysz00_1630 =
								BGl_setzd2ze3vectorz31zzcfa_setz00(BgL_arg4836z00_1648);
						}
						{	/* Cfa/approx.scm 165 */
							int BgL_lenz00_1631;

							BgL_lenz00_1631 = VECTOR_LENGTH(BgL_keysz00_1630);
							{	/* Cfa/approx.scm 166 */
								long BgL_slenz00_1632;

								if (
									(((BgL_approxz00_bglt) CREF(BgL_expz00_1625))->BgL_topzf3zf3))
									{	/* Cfa/approx.scm 167 */
										BgL_slenz00_1632 = ((long) (BgL_lenz00_1631) + ((long) 1));
									}
								else
									{	/* Cfa/approx.scm 167 */
										BgL_slenz00_1632 = (long) (BgL_lenz00_1631);
									}
								{	/* Cfa/approx.scm 167 */
									obj_t BgL_structz00_1633;

									BgL_structz00_1633 =
										make_struct(BgL_typezd2idzd2_1629,
										(int) (BgL_slenz00_1632), BUNSPEC);
									{	/* Cfa/approx.scm 168 */

										if (
											(((BgL_approxz00_bglt) CREF(BgL_expz00_1625))->
												BgL_topzf3zf3))
											{	/* Cfa/approx.scm 169 */
												obj_t BgL_oz00_1731;

												BgL_oz00_1731 = CNST_TABLE_REF(((long) 4));
												{	/* Cfa/approx.scm 169 */
													int BgL_auxz00_2074;

													BgL_auxz00_2074 = (int) (((long) 0));
													STRUCT_SET(BgL_structz00_1633, BgL_auxz00_2074,
														BgL_oz00_1731);
											}}
										else
											{	/* Cfa/approx.scm 169 */
												BFALSE;
											}
										{	/* Cfa/approx.scm 170 */
											long BgL_g4683z00_1635;

											if (
												(((BgL_approxz00_bglt) CREF(BgL_expz00_1625))->
													BgL_topzf3zf3))
												{	/* Cfa/approx.scm 170 */
													BgL_g4683z00_1635 = ((long) 1);
												}
											else
												{	/* Cfa/approx.scm 170 */
													BgL_g4683z00_1635 = ((long) 0);
												}
											{
												long BgL_rz00_1637;

												long BgL_wz00_1638;

												BgL_rz00_1637 = BgL_g4683z00_1635;
												BgL_wz00_1638 = ((long) 0);
											BgL_zc3anonymousza34828ze3z83_1639:
												if ((BgL_wz00_1638 == (long) (BgL_lenz00_1631)))
													{	/* Cfa/approx.scm 172 */
														return BgL_structz00_1633;
													}
												else
													{	/* Cfa/approx.scm 172 */
														{	/* Cfa/approx.scm 175 */
															obj_t BgL_arg4830z00_1641;

															{	/* Cfa/approx.scm 175 */
																obj_t BgL_arg4831z00_1642;

																BgL_arg4831z00_1642 =
																	VECTOR_REF(BgL_keysz00_1630,
																	(int) (BgL_wz00_1638));
																{
																	BgL_nodezf2effectzf2_bglt BgL_auxz00_2084;

																	BgL_auxz00_2084 =
																		(BgL_nodezf2effectzf2_bglt)
																		(BgL_arg4831z00_1642);
																	BgL_arg4830z00_1641 =
																		(((BgL_nodezf2effectzf2_bglt)
																			CREF(BgL_auxz00_2084))->BgL_keyz00);
															}}
															{	/* Cfa/approx.scm 175 */
																int BgL_auxz00_2087;

																BgL_auxz00_2087 = (int) (BgL_rz00_1637);
																STRUCT_SET(BgL_structz00_1633, BgL_auxz00_2087,
																	BgL_arg4830z00_1641);
														}}
														{
															long BgL_wz00_2092;

															long BgL_rz00_2090;

															BgL_rz00_2090 = (BgL_rz00_1637 + ((long) 1));
															BgL_wz00_2092 = (BgL_wz00_1638 + ((long) 1));
															BgL_wz00_1638 = BgL_wz00_2092;
															BgL_rz00_1637 = BgL_rz00_2090;
															goto BgL_zc3anonymousza34828ze3z83_1639;
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
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_approxz00()
	{
		AN_OBJECT;
		{	/* Cfa/approx.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_collectz00(((long) 25125809),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_setz00(((long) 474371048),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_procedurez00(((long) 526522172),
				BSTRING_TO_STRING(BGl_string4856z00zzcfa_approxz00));
		}
	}

#ifdef __cplusplus
}
#endif
