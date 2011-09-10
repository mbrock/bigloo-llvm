/*===========================================================================*/
/*   (Cfa/vector.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/vector.scm)*/
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

	typedef struct BgL_externz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
	}                *BgL_externz00_bglt;

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

	typedef struct BgL_vsetz12z12_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                 *BgL_vlengthz00_bglt;

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

	typedef struct BgL_prezd2makezd2vectorzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2vectorzd2appzd2_bglt;

	typedef struct BgL_makezd2vectorzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                             *BgL_makezd2vectorzd2appz00_bglt;

	typedef struct BgL_vrefzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                      *BgL_vrefzf2cinfozf2_bglt;

	typedef struct BgL_vsetz12zf2cinfoze0_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vsetz12zf2cinfoze0_bglt;

	typedef struct BgL_vlengthzf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		bool_t BgL_tvectorzf3zf3;
	}                         *BgL_vlengthzf2cinfozf2_bglt;

	typedef struct BgL_prezd2valloczf2cinfoz20_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                              *BgL_prezd2valloczf2cinfoz20_bglt;

	typedef struct BgL_valloczf2cinfozf2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                        *BgL_valloczf2cinfozf2_bglt;

	typedef struct BgL_valloczf2cinfozb2optimz40_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		bool_t BgL_stackablezf3zf3;
		obj_t BgL_stackzd2stampzd2;
		bool_t BgL_seenzf3zf3;
	}                                *BgL_valloczf2cinfozb2optimz40_bglt;


	extern obj_t BGl_vrefz00zzast_nodez00;
	extern BgL_approxz00_bglt BGl_loosez12z12zzcfa_loosez00(BgL_approxz00_bglt,
		obj_t);
	extern obj_t
		BGl_wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00(BgL_approxz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t
		BGl_wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt, bool_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_approxzd2setzd2typez12z12zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_za2cfazd2stampza2zd2zzcfa_iteratez00;
	extern obj_t BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00;
	static obj_t BGl_nodezd2setupz12zd2vlength5218z12zzcfa_vectorz00(obj_t,
		obj_t);
	extern obj_t BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00(obj_t,
		BgL_approxz00_bglt);
	static obj_t BGl_cfaz12zd2valloczf2Cinfo5228z32zzcfa_vectorz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcfa_vectorz00();
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t BGl_loosezd2allocz12zd2valloczf25238ze0zzcfa_vectorz00(obj_t,
		obj_t);
	extern obj_t BGl_vallocz00zzast_nodez00;
	static obj_t BGl_cfaz12zd2vlengthzf2Cinfo5230z32zzcfa_vectorz00(obj_t, obj_t);
	static obj_t BGl_cfaz12zd2makezd2vectorzd2app5224zc0zzcfa_vectorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_vectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_approxz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_setupz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_cfaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_iteratez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_loosez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzcfa_vectorz00();
	extern obj_t BGl_vsetz12zf2Cinfoze0zzcfa_info3z00;
	extern obj_t BGl_nodezd2setupz12zc0zzcfa_setupz00(BgL_nodez00_bglt);
	extern obj_t
		BGl_wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t, bool_t);
	extern obj_t BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00;
	static obj_t BGl_zc3anonymousza35433ze3z83zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00;
	static obj_t BGl__vectorzd2optimzf3z21zzcfa_vectorz00(obj_t);
	static obj_t BGl_nodezd2setupz12zd2prezd2make5212zc0zzcfa_vectorz00(obj_t,
		obj_t);
	extern obj_t BGl_vlengthz00zzast_nodez00;
	static obj_t BGl_cfaz12zd2vsetz12zf2Cinfo5234z20zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_vrefzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_zc3anonymousza35458ze3z83zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL bool_t BGl_vectorzd2optimzf3z21zzcfa_vectorz00();
	extern BgL_approxz00_bglt
		BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_approxz00_bglt,
		BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_vsetz12z12zzast_nodez00;
	static obj_t BGl_methodzd2initzd2zzcfa_vectorz00();
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl_nodezd2setupz12zd2prezd2vall5214zc0zzcfa_vectorz00(obj_t,
		obj_t);
	extern BgL_approxz00_bglt BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_vectorz00 = BUNSPEC;
	static obj_t BGl_cfaz12zd2vrefzf2Cinfo5232z32zzcfa_vectorz00(obj_t, obj_t);
	static obj_t BGl_loosezd2allocz12zd2makezd2ve5236zc0zzcfa_vectorz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcfa_vectorz00();
	extern obj_t BGl_wideningzd2vrefzf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt,
		bool_t);
	extern obj_t
		BGl_wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00(BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, bool_t, obj_t, bool_t);
	extern obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00;
	extern obj_t BGl_nodezd2setupza2z12z62zzcfa_setupz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_vectorz00();
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_typez00_bglt);
	extern BgL_approxz00_bglt BGl_cfaz12z12zzcfa_cfaz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2setupz12zd2vref5220z12zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_bglt);
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t
		BGl_wideningzd2valloczf2Cinfoz20zzcfa_info3z00(BgL_approxz00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cfaz12zd2valloczf2Cinfozb2op5226z80zzcfa_vectorz00(obj_t,
		obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t BGl_nodezd2setupz12zd2vsetz125222z00zzcfa_vectorz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern BgL_approxz00_bglt
		BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(BgL_typez00_bglt,
		BgL_nodez00_bglt);
	static obj_t BGl_nodezd2setupz12zd2valloc5216z12zzcfa_vectorz00(obj_t, obj_t);
	extern obj_t BGl_valloczf2Cinfozf2zzcfa_info3z00;
	extern obj_t BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(BgL_nodez00_bglt);
	extern obj_t BGl_vlengthzf2Cinfozf2zzcfa_info3z00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_vectorz00();
	static obj_t __cnst[2];


	extern obj_t BGl_cfaz12zd2envzc0zzcfa_cfaz00;
	extern obj_t BGl_nodezd2setupz12zd2envz12zzcfa_setupz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5483z00zzcfa_vectorz00,
		BgL_bgl_nodeza7d2setupza712za75504za7,
		BGl_nodezd2setupz12zd2prezd2make5212zc0zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5485z00zzcfa_vectorz00,
		BgL_bgl_nodeza7d2setupza712za75505za7,
		BGl_nodezd2setupz12zd2prezd2vall5214zc0zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5486z00zzcfa_vectorz00,
		BgL_bgl_nodeza7d2setupza712za75506za7,
		BGl_nodezd2setupz12zd2valloc5216z12zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5487z00zzcfa_vectorz00,
		BgL_bgl_nodeza7d2setupza712za75507za7,
		BGl_nodezd2setupz12zd2vlength5218z12zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5488z00zzcfa_vectorz00,
		BgL_bgl_nodeza7d2setupza712za75508za7,
		BGl_nodezd2setupz12zd2vref5220z12zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5490z00zzcfa_vectorz00,
		BgL_bgl_cfaza712za7d2makeza7d25509za7,
		BGl_cfaz12zd2makezd2vectorzd2app5224zc0zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5489z00zzcfa_vectorz00,
		BgL_bgl_nodeza7d2setupza712za75510za7,
		BGl_nodezd2setupz12zd2vsetz125222z00zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5492z00zzcfa_vectorz00,
		BgL_bgl_cfaza712za7d2vallocza75511za7,
		BGl_cfaz12zd2valloczf2Cinfozb2op5226z80zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5493z00zzcfa_vectorz00,
		BgL_bgl_cfaza712za7d2vallocza75512za7,
		BGl_cfaz12zd2valloczf2Cinfo5228z32zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5494z00zzcfa_vectorz00,
		BgL_bgl_cfaza712za7d2vlength5513z00,
		BGl_cfaz12zd2vlengthzf2Cinfo5230z32zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5495z00zzcfa_vectorz00,
		BgL_bgl_cfaza712za7d2vrefza7f25514za7,
		BGl_cfaz12zd2vrefzf2Cinfo5232z32zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5496z00zzcfa_vectorz00,
		BgL_bgl_cfaza712za7d2vsetza7125515za7,
		BGl_cfaz12zd2vsetz12zf2Cinfo5234z20zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5497z00zzcfa_vectorz00,
		BgL_bgl_looseza7d2allocza7125516z00,
		BGl_loosezd2allocz12zd2makezd2ve5236zc0zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5499z00zzcfa_vectorz00,
		BgL_bgl_looseza7d2allocza7125517z00,
		BGl_loosezd2allocz12zd2valloczf25238ze0zzcfa_vectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5484z00zzcfa_vectorz00,
		BgL_bgl_string5484za700za7za7c5518za7, "node-setup!", 11);
	      DEFINE_STRING(BGl_string5500z00zzcfa_vectorz00,
		BgL_bgl_string5500za700za7za7c5519za7, "cfa_vector", 10);
	      DEFINE_STRING(BGl_string5501z00zzcfa_vectorz00,
		BgL_bgl_string5501za700za7za7c5520za7, "all nothing ", 12);
	      DEFINE_STRING(BGl_string5491z00zzcfa_vectorz00,
		BgL_bgl_string5491za700za7za7c5521za7, "cfa!::approx", 12);
	      DEFINE_STRING(BGl_string5498z00zzcfa_vectorz00,
		BgL_bgl_string5498za700za7za7c5522za7, "loose-alloc!", 12);
	extern obj_t BGl_loosezd2allocz12zd2envz12zzcfa_loosez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectorzd2optimzf3zd2envzf3zzcfa_vectorz00,
		BgL_bgl__vectorza7d2optimza75523z00,
		BGl__vectorzd2optimzf3z21zzcfa_vectorz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_vectorz00(long
		BgL_checksumz00_2183, char *BgL_fromz00_2184)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_vectorz00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_vectorz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcfa_vectorz00();
					BGl_cnstzd2initzd2zzcfa_vectorz00();
					BGl_importedzd2moduleszd2initz00zzcfa_vectorz00();
					BGl_methodzd2initzd2zzcfa_vectorz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 17 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_vector");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_vector");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 17 */
			{	/* Cfa/vector.scm 17 */
				obj_t BgL_cportz00_2175;

				BgL_cportz00_2175 =
					bgl_open_input_string(BGl_string5501z00zzcfa_vectorz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2176;

					BgL_iz00_2176 = ((long) 1);
				BgL_loopz00_2177:
					if ((BgL_iz00_2176 == ((long) -1)))
						{	/* Cfa/vector.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/vector.scm 17 */
							{	/* Cfa/vector.scm 17 */
								obj_t BgL_arg5503z00_2179;

								{	/* Cfa/vector.scm 17 */

									{	/* Cfa/vector.scm 17 */
										obj_t BgL_locationz00_2181;

										BgL_locationz00_2181 = BBOOL(((bool_t) 0));
										{	/* Cfa/vector.scm 17 */

											BgL_arg5503z00_2179 =
												BGl_readz00zz__readerz00(BgL_cportz00_2175,
												BgL_locationz00_2181);
										}
									}
								}
								{	/* Cfa/vector.scm 17 */
									int BgL_auxz00_2200;

									BgL_auxz00_2200 = (int) (BgL_iz00_2176);
									CNST_TABLE_SET(BgL_auxz00_2200, BgL_arg5503z00_2179);
							}}
							{	/* Cfa/vector.scm 17 */
								int BgL_auxz00_2182;

								BgL_auxz00_2182 = (int) ((BgL_iz00_2176 - ((long) 1)));
								{
									long BgL_iz00_2205;

									BgL_iz00_2205 = (long) (BgL_auxz00_2182);
									BgL_iz00_2176 = BgL_iz00_2205;
									goto BgL_loopz00_2177;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 17 */
			return BUNSPEC;
		}
	}



/* vector-optim? */
	BGL_EXPORTED_DEF bool_t BGl_vectorzd2optimzf3z21zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 40 */
			return ((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2));
		}
	}



/* _vector-optim? */
	obj_t BGl__vectorzd2optimzf3z21zzcfa_vectorz00(obj_t BgL_envz00_2118)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 40 */
			return BBOOL(BGl_vectorzd2optimzf3z21zzcfa_vectorz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 17 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 17 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00,
				BGl_proc5483z00zzcfa_vectorz00, BGl_string5484z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_prezd2valloczf2Cinfoz20zzcfa_info3z00,
				BGl_proc5485z00zzcfa_vectorz00, BGl_string5484z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_vallocz00zzast_nodez00,
				BGl_proc5486z00zzcfa_vectorz00, BGl_string5484z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_vlengthz00zzast_nodez00, BGl_proc5487z00zzcfa_vectorz00,
				BGl_string5484z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00, BGl_vrefz00zzast_nodez00,
				BGl_proc5488z00zzcfa_vectorz00, BGl_string5484z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2setupz12zd2envz12zzcfa_setupz00,
				BGl_vsetz12z12zzast_nodez00, BGl_proc5489z00zzcfa_vectorz00,
				BGl_string5484z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc5490z00zzcfa_vectorz00, BGl_string5491z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc5492z00zzcfa_vectorz00, BGl_string5491z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_valloczf2Cinfozf2zzcfa_info3z00,
				BGl_proc5493z00zzcfa_vectorz00, BGl_string5491z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_vlengthzf2Cinfozf2zzcfa_info3z00,
				BGl_proc5494z00zzcfa_vectorz00, BGl_string5491z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_vrefzf2Cinfozf2zzcfa_info3z00,
				BGl_proc5495z00zzcfa_vectorz00, BGl_string5491z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_cfaz12zd2envzc0zzcfa_cfaz00, BGl_vsetz12zf2Cinfoze0zzcfa_info3z00,
				BGl_proc5496z00zzcfa_vectorz00, BGl_string5491z00zzcfa_vectorz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00,
				BGl_proc5497z00zzcfa_vectorz00, BGl_string5498z00zzcfa_vectorz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
				BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00,
				BGl_proc5499z00zzcfa_vectorz00, BGl_string5498z00zzcfa_vectorz00);
		}
	}



/* loose-alloc!-valloc/5238 */
	obj_t BGl_loosezd2allocz12zd2valloczf25238ze0zzcfa_vectorz00(obj_t
		BgL_envz00_2137, obj_t BgL_allocz00_2138)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 282 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_allocz00_1947;

				BgL_allocz00_1947 =
					(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_allocz00_2138);
				{	/* Cfa/vector.scm 284 */
					bool_t BgL_testz00_2225;

					{	/* Cfa/vector.scm 284 */
						long BgL_n2z00_2112;

						BgL_n2z00_2112 =
							(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
						{	/* Cfa/vector.scm 284 */
							long BgL_auxz00_2227;

							{
								obj_t BgL_auxz00_2228;

								{	/* Cfa/vector.scm 284 */
									BgL_objectz00_bglt BgL_auxz00_2229;

									BgL_auxz00_2229 = (BgL_objectz00_bglt) (BgL_allocz00_1947);
									BgL_auxz00_2228 = BGL_OBJECT_WIDENING(BgL_auxz00_2229);
								}
								BgL_auxz00_2227 =
									(((BgL_valloczf2cinfozb2optimz40_bglt)
										CREF(BgL_auxz00_2228))->BgL_lostzd2stampzd2);
							}
							BgL_testz00_2225 = (BgL_auxz00_2227 == BgL_n2z00_2112);
					}}
					if (BgL_testz00_2225)
						{	/* Cfa/vector.scm 284 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/vector.scm 284 */
							{
								long BgL_auxz00_2238;

								obj_t BgL_auxz00_2234;

								BgL_auxz00_2238 =
									(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
								{	/* Cfa/vector.scm 289 */
									BgL_objectz00_bglt BgL_auxz00_2235;

									BgL_auxz00_2235 = (BgL_objectz00_bglt) (BgL_allocz00_1947);
									BgL_auxz00_2234 = BGL_OBJECT_WIDENING(BgL_auxz00_2235);
								}
								((((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_auxz00_2234))->
										BgL_lostzd2stampzd2) = ((long) BgL_auxz00_2238), BUNSPEC);
							}
							{	/* Cfa/vector.scm 290 */
								BgL_approxz00_bglt BgL_arg5475z00_1952;

								{
									obj_t BgL_auxz00_2241;

									{	/* Cfa/vector.scm 290 */
										BgL_objectz00_bglt BgL_auxz00_2242;

										BgL_auxz00_2242 = (BgL_objectz00_bglt) (BgL_allocz00_1947);
										BgL_auxz00_2241 = BGL_OBJECT_WIDENING(BgL_auxz00_2242);
									}
									BgL_arg5475z00_1952 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_2241))->BgL_valuezd2approxzd2);
								}
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
									BgL_arg5475z00_1952);
							}
							{	/* Cfa/vector.scm 291 */
								BgL_approxz00_bglt BgL_arg5476z00_1953;

								{
									obj_t BgL_auxz00_2247;

									{	/* Cfa/vector.scm 291 */
										BgL_objectz00_bglt BgL_auxz00_2248;

										BgL_auxz00_2248 = (BgL_objectz00_bglt) (BgL_allocz00_1947);
										BgL_auxz00_2247 = BGL_OBJECT_WIDENING(BgL_auxz00_2248);
									}
									BgL_arg5476z00_1953 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_2247))->BgL_valuezd2approxzd2);
								}
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00
									(BgL_arg5476z00_1953,
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
							}
							{	/* Cfa/vector.scm 292 */
								BgL_approxz00_bglt BgL_arg5477z00_1954;

								{
									obj_t BgL_auxz00_2254;

									{	/* Cfa/vector.scm 292 */
										BgL_objectz00_bglt BgL_auxz00_2255;

										BgL_auxz00_2255 = (BgL_objectz00_bglt) (BgL_allocz00_1947);
										BgL_auxz00_2254 = BGL_OBJECT_WIDENING(BgL_auxz00_2255);
									}
									BgL_arg5477z00_1954 =
										(((BgL_valloczf2cinfozb2optimz40_bglt)
											CREF(BgL_auxz00_2254))->BgL_valuezd2approxzd2);
								}
								return
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg5477z00_1954);
							}
						}
				}
			}
		}
	}



/* loose-alloc!-make-ve5236 */
	obj_t BGl_loosezd2allocz12zd2makezd2ve5236zc0zzcfa_vectorz00(obj_t
		BgL_envz00_2139, obj_t BgL_allocz00_2140)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 264 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_allocz00_1936;

				BgL_allocz00_1936 =
					(BgL_makezd2vectorzd2appz00_bglt) (BgL_allocz00_2140);
				{	/* Cfa/vector.scm 266 */
					bool_t BgL_testz00_2261;

					{	/* Cfa/vector.scm 266 */
						long BgL_n2z00_2104;

						BgL_n2z00_2104 =
							(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
						{	/* Cfa/vector.scm 266 */
							long BgL_auxz00_2263;

							{
								obj_t BgL_auxz00_2264;

								{	/* Cfa/vector.scm 266 */
									BgL_objectz00_bglt BgL_auxz00_2265;

									BgL_auxz00_2265 = (BgL_objectz00_bglt) (BgL_allocz00_1936);
									BgL_auxz00_2264 = BGL_OBJECT_WIDENING(BgL_auxz00_2265);
								}
								BgL_auxz00_2263 =
									(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2264))->
									BgL_lostzd2stampzd2);
							}
							BgL_testz00_2261 = (BgL_auxz00_2263 == BgL_n2z00_2104);
					}}
					if (BgL_testz00_2261)
						{	/* Cfa/vector.scm 266 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/vector.scm 266 */
							{
								long BgL_auxz00_2274;

								obj_t BgL_auxz00_2270;

								BgL_auxz00_2274 =
									(long) CINT(BGl_za2cfazd2stampza2zd2zzcfa_iteratez00);
								{	/* Cfa/vector.scm 270 */
									BgL_objectz00_bglt BgL_auxz00_2271;

									BgL_auxz00_2271 = (BgL_objectz00_bglt) (BgL_allocz00_1936);
									BgL_auxz00_2270 = BGL_OBJECT_WIDENING(BgL_auxz00_2271);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2270))->
										BgL_lostzd2stampzd2) = ((long) BgL_auxz00_2274), BUNSPEC);
							}
							{	/* Cfa/vector.scm 271 */
								BgL_approxz00_bglt BgL_arg5469z00_1941;

								{
									obj_t BgL_auxz00_2277;

									{	/* Cfa/vector.scm 271 */
										BgL_objectz00_bglt BgL_auxz00_2278;

										BgL_auxz00_2278 = (BgL_objectz00_bglt) (BgL_allocz00_1936);
										BgL_auxz00_2277 = BGL_OBJECT_WIDENING(BgL_auxz00_2278);
									}
									BgL_arg5469z00_1941 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2277))->
										BgL_valuezd2approxzd2);
								}
								BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
									(BGl_loosezd2allocz12zd2envz12zzcfa_loosez00,
									BgL_arg5469z00_1941);
							}
							{	/* Cfa/vector.scm 272 */
								BgL_approxz00_bglt BgL_arg5470z00_1942;

								{
									obj_t BgL_auxz00_2283;

									{	/* Cfa/vector.scm 272 */
										BgL_objectz00_bglt BgL_auxz00_2284;

										BgL_auxz00_2284 = (BgL_objectz00_bglt) (BgL_allocz00_1936);
										BgL_auxz00_2283 = BGL_OBJECT_WIDENING(BgL_auxz00_2284);
									}
									BgL_arg5470z00_1942 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2283))->
										BgL_valuezd2approxzd2);
								}
								BGl_approxzd2setzd2typez12z12zzcfa_approxz00
									(BgL_arg5470z00_1942,
									(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
							}
							{	/* Cfa/vector.scm 273 */
								BgL_approxz00_bglt BgL_arg5471z00_1943;

								{
									obj_t BgL_auxz00_2290;

									{	/* Cfa/vector.scm 273 */
										BgL_objectz00_bglt BgL_auxz00_2291;

										BgL_auxz00_2291 = (BgL_objectz00_bglt) (BgL_allocz00_1936);
										BgL_auxz00_2290 = BGL_OBJECT_WIDENING(BgL_auxz00_2291);
									}
									BgL_arg5471z00_1943 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2290))->
										BgL_valuezd2approxzd2);
								}
								return
									BGl_approxzd2setzd2topz12z12zzcfa_approxz00
									(BgL_arg5471z00_1943);
							}
						}
				}
			}
		}
	}



/* cfa!-vset!/Cinfo5234 */
	obj_t BGl_cfaz12zd2vsetz12zf2Cinfo5234z20zzcfa_vectorz00(obj_t
		BgL_envz00_2141, obj_t BgL_nodez00_2142)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 219 */
			{
				BgL_vsetz12zf2cinfoze0_bglt BgL_nodez00_1907;

				{	/* Cfa/vector.scm 220 */
					BgL_approxz00_bglt BgL_auxz00_2297;

					BgL_nodez00_1907 = (BgL_vsetz12zf2cinfoze0_bglt) (BgL_nodez00_2142);
					{	/* Cfa/vector.scm 223 */
						obj_t BgL_arg5450z00_1911;

						{	/* Cfa/vector.scm 223 */
							obj_t BgL_pairz00_2075;

							{
								BgL_externz00_bglt BgL_auxz00_2298;

								BgL_auxz00_2298 = (BgL_externz00_bglt) (BgL_nodez00_1907);
								BgL_pairz00_2075 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_2298))->
									BgL_exprza2za2);
							}
							BgL_arg5450z00_1911 = CAR(CDR(BgL_pairz00_2075));
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg5450z00_1911));
					}
					{	/* Cfa/vector.scm 224 */
						BgL_approxz00_bglt BgL_veczd2approxzd2_1913;

						BgL_approxz00_bglt BgL_valzd2approxzd2_1914;

						{	/* Cfa/vector.scm 224 */
							obj_t BgL_arg5463z00_1930;

							{	/* Cfa/vector.scm 224 */
								obj_t BgL_pairz00_2080;

								{
									BgL_externz00_bglt BgL_auxz00_2305;

									BgL_auxz00_2305 = (BgL_externz00_bglt) (BgL_nodez00_1907);
									BgL_pairz00_2080 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_2305))->
										BgL_exprza2za2);
								}
								BgL_arg5463z00_1930 = CAR(BgL_pairz00_2080);
							}
							BgL_veczd2approxzd2_1913 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg5463z00_1930));
						}
						{	/* Cfa/vector.scm 225 */
							obj_t BgL_arg5465z00_1932;

							{	/* Cfa/vector.scm 225 */
								obj_t BgL_pairz00_2082;

								{
									BgL_externz00_bglt BgL_auxz00_2311;

									BgL_auxz00_2311 = (BgL_externz00_bglt) (BgL_nodez00_1907);
									BgL_pairz00_2082 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_2311))->
										BgL_exprza2za2);
								}
								BgL_arg5465z00_1932 = CAR(CDR(CDR(BgL_pairz00_2082)));
							}
							BgL_valzd2approxzd2_1914 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg5465z00_1932));
						}
						{	/* Cfa/vector.scm 227 */
							bool_t BgL_testz00_2319;

							{
								obj_t BgL_auxz00_2320;

								{	/* Cfa/vector.scm 227 */
									BgL_objectz00_bglt BgL_auxz00_2321;

									BgL_auxz00_2321 = (BgL_objectz00_bglt) (BgL_nodez00_1907);
									BgL_auxz00_2320 = BGL_OBJECT_WIDENING(BgL_auxz00_2321);
								}
								BgL_testz00_2319 =
									(((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_auxz00_2320))->
									BgL_tvectorzf3zf3);
							}
							if (BgL_testz00_2319)
								{	/* Cfa/vector.scm 227 */
									CNST_TABLE_REF(((long) 0));
								}
							else
								{	/* Cfa/vector.scm 227 */
									if (
										((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
											((long) 2)))
										{	/* Cfa/vector.scm 229 */
											{	/* Cfa/vector.scm 233 */
												bool_t BgL_testz00_2329;

												{	/* Cfa/vector.scm 233 */
													BgL_typez00_bglt BgL_arg5455z00_1918;

													BgL_arg5455z00_1918 =
														(((BgL_approxz00_bglt)
															CREF(BgL_veczd2approxzd2_1913))->BgL_typez00);
													BgL_testz00_2329 =
														((obj_t) (BgL_arg5455z00_1918) ==
														BGl_za2vectorza2z00zztype_cachez00);
												}
												if (BgL_testz00_2329)
													{	/* Cfa/vector.scm 233 */
														BFALSE;
													}
												else
													{	/* Cfa/vector.scm 233 */
														BGl_approxzd2setzd2typez12z12zzcfa_approxz00
															(BgL_valzd2approxzd2_1914,
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00));
													}
											}
											if (
												(((BgL_approxz00_bglt) CREF(BgL_veczd2approxzd2_1913))->
													BgL_topzf3zf3))
												{	/* Cfa/vector.scm 236 */
													(obj_t) (BGl_loosez12z12zzcfa_loosez00
														(BgL_valzd2approxzd2_1914,
															CNST_TABLE_REF(((long) 1))));
												}
											else
												{	/* Cfa/vector.scm 243 */
													obj_t BgL_zc3anonymousza35458ze3z83_2123;

													BgL_zc3anonymousza35458ze3z83_2123 =
														make_fx_procedure
														(BGl_zc3anonymousza35458ze3z83zzcfa_vectorz00,
														(int) (((long) 1)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3anonymousza35458ze3z83_2123,
														(int) (((long) 0)),
														(obj_t) (BgL_valzd2approxzd2_1914));
													BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
														(BgL_zc3anonymousza35458ze3z83_2123,
														BgL_veczd2approxzd2_1913);
										}}
									else
										{	/* Cfa/vector.scm 229 */
											BGl_loosez12z12zzcfa_loosez00(BgL_veczd2approxzd2_1913,
												CNST_TABLE_REF(((long) 1)));
											(obj_t) (BGl_loosez12z12zzcfa_loosez00
												(BgL_valzd2approxzd2_1914, CNST_TABLE_REF(((long) 1))));
					}}}}
					{
						obj_t BgL_auxz00_2352;

						{	/* Cfa/vector.scm 255 */
							BgL_objectz00_bglt BgL_auxz00_2353;

							BgL_auxz00_2353 = (BgL_objectz00_bglt) (BgL_nodez00_1907);
							BgL_auxz00_2352 = BGL_OBJECT_WIDENING(BgL_auxz00_2353);
						}
						BgL_auxz00_2297 =
							(((BgL_vsetz12zf2cinfoze0_bglt) CREF(BgL_auxz00_2352))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_2297);
				}
			}
		}
	}



/* <anonymous:5458> */
	obj_t BGl_zc3anonymousza35458ze3z83zzcfa_vectorz00(obj_t BgL_envz00_2143,
		obj_t BgL_appz00_2145)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 241 */
			{	/* Cfa/vector.scm 243 */
				obj_t BgL_valzd2approxzd2_2144;

				BgL_valzd2approxzd2_2144 =
					PROCEDURE_REF(BgL_envz00_2143, (int) (((long) 0)));
				{
					obj_t BgL_appz00_1921;

					BgL_appz00_1921 = BgL_appz00_2145;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1921,
							BGl_makezd2vectorzd2appz00zzcfa_info2z00))
						{	/* Cfa/vector.scm 244 */
							BgL_makezd2vectorzd2appz00_bglt BgL_instance5197z00_1924;

							BgL_instance5197z00_1924 =
								(BgL_makezd2vectorzd2appz00_bglt) (BgL_appz00_1921);
							{
								obj_t BgL_auxz00_2364;

								{	/* Cfa/vector.scm 245 */
									BgL_objectz00_bglt BgL_auxz00_2365;

									BgL_auxz00_2365 =
										(BgL_objectz00_bglt) (BgL_instance5197z00_1924);
									BgL_auxz00_2364 = BGL_OBJECT_WIDENING(BgL_auxz00_2365);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2364))->
										BgL_seenzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
							}
							{	/* Cfa/vector.scm 246 */
								BgL_approxz00_bglt BgL_arg5460z00_1925;

								{
									obj_t BgL_auxz00_2369;

									{	/* Cfa/vector.scm 246 */
										BgL_objectz00_bglt BgL_auxz00_2370;

										BgL_auxz00_2370 =
											(BgL_objectz00_bglt) (BgL_instance5197z00_1924);
										BgL_auxz00_2369 = BGL_OBJECT_WIDENING(BgL_auxz00_2370);
									}
									BgL_arg5460z00_1925 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2369))->
										BgL_valuezd2approxzd2);
								}
								return
									(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00
									(BgL_arg5460z00_1925,
										(BgL_approxz00_bglt) (BgL_valzd2approxzd2_2144)));
							}
						}
					else
						{	/* Cfa/vector.scm 243 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1921,
									BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00))
								{	/* Cfa/vector.scm 248 */
									BgL_valloczf2cinfozb2optimz40_bglt BgL_instance5199z00_1927;

									BgL_instance5199z00_1927 =
										(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_appz00_1921);
									{
										obj_t BgL_auxz00_2380;

										{	/* Cfa/vector.scm 249 */
											BgL_objectz00_bglt BgL_auxz00_2381;

											BgL_auxz00_2381 =
												(BgL_objectz00_bglt) (BgL_instance5199z00_1927);
											BgL_auxz00_2380 = BGL_OBJECT_WIDENING(BgL_auxz00_2381);
										}
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_auxz00_2380))->BgL_seenzf3zf3) =
											((bool_t) ((bool_t) 1)), BUNSPEC);
									}
									{	/* Cfa/vector.scm 250 */
										BgL_approxz00_bglt BgL_arg5462z00_1928;

										{
											obj_t BgL_auxz00_2385;

											{	/* Cfa/vector.scm 250 */
												BgL_objectz00_bglt BgL_auxz00_2386;

												BgL_auxz00_2386 =
													(BgL_objectz00_bglt) (BgL_instance5199z00_1927);
												BgL_auxz00_2385 = BGL_OBJECT_WIDENING(BgL_auxz00_2386);
											}
											BgL_arg5462z00_1928 =
												(((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_auxz00_2385))->BgL_valuezd2approxzd2);
										}
										return
											(obj_t) (BGl_unionzd2approxz12zc0zzcfa_approxz00
											(BgL_arg5462z00_1928,
												(BgL_approxz00_bglt) (BgL_valzd2approxzd2_2144)));
									}
								}
							else
								{	/* Cfa/vector.scm 247 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* cfa!-vref/Cinfo5232 */
	obj_t BGl_cfaz12zd2vrefzf2Cinfo5232z32zzcfa_vectorz00(obj_t BgL_envz00_2146,
		obj_t BgL_nodez00_2147)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 175 */
			{
				BgL_vrefzf2cinfozf2_bglt BgL_nodez00_1870;

				{	/* Cfa/vector.scm 176 */
					BgL_approxz00_bglt BgL_auxz00_2393;

					BgL_nodez00_1870 = (BgL_vrefzf2cinfozf2_bglt) (BgL_nodez00_2147);
					{	/* Cfa/vector.scm 179 */
						obj_t BgL_arg5422z00_1874;

						{	/* Cfa/vector.scm 179 */
							obj_t BgL_pairz00_2042;

							{
								BgL_externz00_bglt BgL_auxz00_2394;

								BgL_auxz00_2394 = (BgL_externz00_bglt) (BgL_nodez00_1870);
								BgL_pairz00_2042 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_2394))->
									BgL_exprza2za2);
							}
							BgL_arg5422z00_1874 = CAR(CDR(BgL_pairz00_2042));
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg5422z00_1874));
					}
					{	/* Cfa/vector.scm 180 */
						BgL_approxz00_bglt BgL_veczd2approxzd2_1876;

						{	/* Cfa/vector.scm 180 */
							obj_t BgL_arg5447z00_1903;

							{	/* Cfa/vector.scm 180 */
								obj_t BgL_pairz00_2047;

								{
									BgL_externz00_bglt BgL_auxz00_2401;

									BgL_auxz00_2401 = (BgL_externz00_bglt) (BgL_nodez00_1870);
									BgL_pairz00_2047 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_2401))->
										BgL_exprza2za2);
								}
								BgL_arg5447z00_1903 = CAR(BgL_pairz00_2047);
							}
							BgL_veczd2approxzd2_1876 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg5447z00_1903));
						}
						{	/* Cfa/vector.scm 182 */
							bool_t BgL_testz00_2407;

							{
								obj_t BgL_auxz00_2408;

								{	/* Cfa/vector.scm 182 */
									BgL_objectz00_bglt BgL_auxz00_2409;

									BgL_auxz00_2409 = (BgL_objectz00_bglt) (BgL_nodez00_1870);
									BgL_auxz00_2408 = BGL_OBJECT_WIDENING(BgL_auxz00_2409);
								}
								BgL_testz00_2407 =
									(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_2408))->
									BgL_tvectorzf3zf3);
							}
							if (BgL_testz00_2407)
								{	/* Cfa/vector.scm 182 */
									BgL_approxz00_bglt BgL_auxz00_2413;

									{
										obj_t BgL_auxz00_2414;

										{	/* Cfa/vector.scm 182 */
											BgL_objectz00_bglt BgL_auxz00_2415;

											BgL_auxz00_2415 = (BgL_objectz00_bglt) (BgL_nodez00_1870);
											BgL_auxz00_2414 = BGL_OBJECT_WIDENING(BgL_auxz00_2415);
										}
										BgL_auxz00_2413 =
											(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_2414))->
											BgL_approxz00);
									}
									(obj_t) (BgL_auxz00_2413);
								}
							else
								{	/* Cfa/vector.scm 182 */
									if (
										((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
											((long) 2)))
										{	/* Cfa/vector.scm 184 */
											{	/* Cfa/vector.scm 189 */
												bool_t BgL_testz00_2423;

												{	/* Cfa/vector.scm 189 */
													bool_t BgL_testz00_2424;

													{	/* Cfa/vector.scm 189 */
														BgL_typez00_bglt BgL_arg5429z00_1882;

														BgL_arg5429z00_1882 =
															(((BgL_approxz00_bglt)
																CREF(BgL_veczd2approxzd2_1876))->BgL_typez00);
														BgL_testz00_2424 =
															((obj_t) (BgL_arg5429z00_1882) ==
															BGl_za2vectorza2z00zztype_cachez00);
													}
													if (BgL_testz00_2424)
														{	/* Cfa/vector.scm 189 */
															BgL_testz00_2423 =
																(((BgL_approxz00_bglt)
																	CREF(BgL_veczd2approxzd2_1876))->
																BgL_topzf3zf3);
														}
													else
														{	/* Cfa/vector.scm 189 */
															BgL_testz00_2423 = ((bool_t) 1);
														}
												}
												if (BgL_testz00_2423)
													{	/* Cfa/vector.scm 191 */
														BgL_approxz00_bglt BgL_arg5427z00_1880;

														{
															obj_t BgL_auxz00_2429;

															{	/* Cfa/vector.scm 191 */
																BgL_objectz00_bglt BgL_auxz00_2430;

																BgL_auxz00_2430 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1870);
																BgL_auxz00_2429 =
																	BGL_OBJECT_WIDENING(BgL_auxz00_2430);
															}
															BgL_arg5427z00_1880 =
																(((BgL_vrefzf2cinfozf2_bglt)
																	CREF(BgL_auxz00_2429))->BgL_approxz00);
														}
														BGl_approxzd2setzd2typez12z12zzcfa_approxz00
															(BgL_arg5427z00_1880,
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00));
													}
												else
													{	/* Cfa/vector.scm 189 */
														BFALSE;
													}
											}
											if (
												(((BgL_approxz00_bglt) CREF(BgL_veczd2approxzd2_1876))->
													BgL_topzf3zf3))
												{	/* Cfa/vector.scm 194 */
													BgL_approxz00_bglt BgL_arg5431z00_1884;

													{
														obj_t BgL_auxz00_2438;

														{	/* Cfa/vector.scm 194 */
															BgL_objectz00_bglt BgL_auxz00_2439;

															BgL_auxz00_2439 =
																(BgL_objectz00_bglt) (BgL_nodez00_1870);
															BgL_auxz00_2438 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2439);
														}
														BgL_arg5431z00_1884 =
															(((BgL_vrefzf2cinfozf2_bglt)
																CREF(BgL_auxz00_2438))->BgL_approxz00);
													}
													BGl_approxzd2setzd2topz12z12zzcfa_approxz00
														(BgL_arg5431z00_1884);
												}
											else
												{	/* Cfa/vector.scm 193 */
													BFALSE;
												}
											{	/* Cfa/vector.scm 199 */
												obj_t BgL_zc3anonymousza35433ze3z83_2125;

												BgL_zc3anonymousza35433ze3z83_2125 =
													make_fx_procedure
													(BGl_zc3anonymousza35433ze3z83zzcfa_vectorz00,
													(int) (((long) 1)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3anonymousza35433ze3z83_2125,
													(int) (((long) 0)), (obj_t) (BgL_nodez00_1870));
												BGl_forzd2eachzd2approxzd2alloczd2zzcfa_approxz00
													(BgL_zc3anonymousza35433ze3z83_2125,
													BgL_veczd2approxzd2_1876);
										}}
									else
										{	/* Cfa/vector.scm 184 */
											(obj_t) (BGl_loosez12z12zzcfa_loosez00
												(BgL_veczd2approxzd2_1876, CNST_TABLE_REF(((long) 1))));
						}}}
						{
							obj_t BgL_auxz00_2454;

							{	/* Cfa/vector.scm 214 */
								BgL_objectz00_bglt BgL_auxz00_2455;

								BgL_auxz00_2455 = (BgL_objectz00_bglt) (BgL_nodez00_1870);
								BgL_auxz00_2454 = BGL_OBJECT_WIDENING(BgL_auxz00_2455);
							}
							BgL_auxz00_2393 =
								(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_2454))->
								BgL_approxz00);
					}}
					return (obj_t) (BgL_auxz00_2393);
				}
			}
		}
	}



/* <anonymous:5433> */
	obj_t BGl_zc3anonymousza35433ze3z83zzcfa_vectorz00(obj_t BgL_envz00_2148,
		obj_t BgL_appz00_2150)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 197 */
			{	/* Cfa/vector.scm 199 */
				obj_t BgL_instance5189z00_2149;

				BgL_instance5189z00_2149 =
					PROCEDURE_REF(BgL_envz00_2148, (int) (((long) 0)));
				{
					obj_t BgL_appz00_1886;

					BgL_appz00_1886 = BgL_appz00_2150;
					if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1886,
							BGl_makezd2vectorzd2appz00zzcfa_info2z00))
						{	/* Cfa/vector.scm 200 */
							BgL_makezd2vectorzd2appz00_bglt BgL_instance5191z00_1889;

							BgL_instance5191z00_1889 =
								(BgL_makezd2vectorzd2appz00_bglt) (BgL_appz00_1886);
							{
								obj_t BgL_auxz00_2466;

								{	/* Cfa/vector.scm 201 */
									BgL_objectz00_bglt BgL_auxz00_2467;

									BgL_auxz00_2467 =
										(BgL_objectz00_bglt) (BgL_instance5191z00_1889);
									BgL_auxz00_2466 = BGL_OBJECT_WIDENING(BgL_auxz00_2467);
								}
								((((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2466))->
										BgL_seenzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
							}
							{	/* Cfa/vector.scm 202 */
								BgL_approxz00_bglt BgL_arg5435z00_1890;

								BgL_approxz00_bglt BgL_arg5436z00_1891;

								{	/* Cfa/vector.scm 202 */
									BgL_vrefzf2cinfozf2_bglt BgL_obj4900z00_2060;

									BgL_obj4900z00_2060 =
										(BgL_vrefzf2cinfozf2_bglt) (BgL_instance5189z00_2149);
									{
										obj_t BgL_auxz00_2472;

										{	/* Cfa/vector.scm 202 */
											BgL_objectz00_bglt BgL_auxz00_2473;

											BgL_auxz00_2473 =
												(BgL_objectz00_bglt) (BgL_obj4900z00_2060);
											BgL_auxz00_2472 = BGL_OBJECT_WIDENING(BgL_auxz00_2473);
										}
										BgL_arg5435z00_1890 =
											(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_2472))->
											BgL_approxz00);
									}
								}
								{
									obj_t BgL_auxz00_2477;

									{	/* Cfa/vector.scm 202 */
										BgL_objectz00_bglt BgL_auxz00_2478;

										BgL_auxz00_2478 =
											(BgL_objectz00_bglt) (BgL_instance5191z00_1889);
										BgL_auxz00_2477 = BGL_OBJECT_WIDENING(BgL_auxz00_2478);
									}
									BgL_arg5436z00_1891 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2477))->
										BgL_valuezd2approxzd2);
								}
								BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg5435z00_1890,
									BgL_arg5436z00_1891);
							}
							{	/* Cfa/vector.scm 203 */
								BgL_approxz00_bglt BgL_arg5438z00_1892;

								BgL_typez00_bglt BgL_arg5439z00_1893;

								{
									obj_t BgL_auxz00_2483;

									{	/* Cfa/vector.scm 203 */
										BgL_objectz00_bglt BgL_auxz00_2484;

										BgL_auxz00_2484 =
											(BgL_objectz00_bglt) (BgL_instance5191z00_1889);
										BgL_auxz00_2483 = BGL_OBJECT_WIDENING(BgL_auxz00_2484);
									}
									BgL_arg5438z00_1892 =
										(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2483))->
										BgL_valuezd2approxzd2);
								}
								{	/* Cfa/vector.scm 204 */
									BgL_approxz00_bglt BgL_obj3242z00_2064;

									{	/* Cfa/vector.scm 204 */
										BgL_vrefzf2cinfozf2_bglt BgL_obj4900z00_2063;

										BgL_obj4900z00_2063 =
											(BgL_vrefzf2cinfozf2_bglt) (BgL_instance5189z00_2149);
										{
											obj_t BgL_auxz00_2489;

											{	/* Cfa/vector.scm 204 */
												BgL_objectz00_bglt BgL_auxz00_2490;

												BgL_auxz00_2490 =
													(BgL_objectz00_bglt) (BgL_obj4900z00_2063);
												BgL_auxz00_2489 = BGL_OBJECT_WIDENING(BgL_auxz00_2490);
											}
											BgL_obj3242z00_2064 =
												(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_2489))->
												BgL_approxz00);
										}
									}
									BgL_arg5439z00_1893 =
										(((BgL_approxz00_bglt) CREF(BgL_obj3242z00_2064))->
										BgL_typez00);
								}
								return
									BGl_approxzd2setzd2typez12z12zzcfa_approxz00
									(BgL_arg5438z00_1892, BgL_arg5439z00_1893);
							}
						}
					else
						{	/* Cfa/vector.scm 199 */
							if (BGl_iszd2azf3z21zz__objectz00(BgL_appz00_1886,
									BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00))
								{	/* Cfa/vector.scm 206 */
									BgL_valloczf2cinfozb2optimz40_bglt BgL_instance5193z00_1896;

									BgL_instance5193z00_1896 =
										(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_appz00_1886);
									{
										obj_t BgL_auxz00_2499;

										{	/* Cfa/vector.scm 207 */
											BgL_objectz00_bglt BgL_auxz00_2500;

											BgL_auxz00_2500 =
												(BgL_objectz00_bglt) (BgL_instance5193z00_1896);
											BgL_auxz00_2499 = BGL_OBJECT_WIDENING(BgL_auxz00_2500);
										}
										((((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_auxz00_2499))->BgL_seenzf3zf3) =
											((bool_t) ((bool_t) 1)), BUNSPEC);
									}
									{	/* Cfa/vector.scm 208 */
										BgL_approxz00_bglt BgL_arg5442z00_1897;

										BgL_approxz00_bglt BgL_arg5443z00_1898;

										{	/* Cfa/vector.scm 208 */
											BgL_vrefzf2cinfozf2_bglt BgL_obj4900z00_2068;

											BgL_obj4900z00_2068 =
												(BgL_vrefzf2cinfozf2_bglt) (BgL_instance5189z00_2149);
											{
												obj_t BgL_auxz00_2505;

												{	/* Cfa/vector.scm 208 */
													BgL_objectz00_bglt BgL_auxz00_2506;

													BgL_auxz00_2506 =
														(BgL_objectz00_bglt) (BgL_obj4900z00_2068);
													BgL_auxz00_2505 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2506);
												}
												BgL_arg5442z00_1897 =
													(((BgL_vrefzf2cinfozf2_bglt) CREF(BgL_auxz00_2505))->
													BgL_approxz00);
											}
										}
										{
											obj_t BgL_auxz00_2510;

											{	/* Cfa/vector.scm 208 */
												BgL_objectz00_bglt BgL_auxz00_2511;

												BgL_auxz00_2511 =
													(BgL_objectz00_bglt) (BgL_instance5193z00_1896);
												BgL_auxz00_2510 = BGL_OBJECT_WIDENING(BgL_auxz00_2511);
											}
											BgL_arg5443z00_1898 =
												(((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_auxz00_2510))->BgL_valuezd2approxzd2);
										}
										BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg5442z00_1897,
											BgL_arg5443z00_1898);
									}
									{	/* Cfa/vector.scm 209 */
										BgL_approxz00_bglt BgL_arg5444z00_1899;

										BgL_typez00_bglt BgL_arg5445z00_1900;

										{
											obj_t BgL_auxz00_2516;

											{	/* Cfa/vector.scm 209 */
												BgL_objectz00_bglt BgL_auxz00_2517;

												BgL_auxz00_2517 =
													(BgL_objectz00_bglt) (BgL_instance5193z00_1896);
												BgL_auxz00_2516 = BGL_OBJECT_WIDENING(BgL_auxz00_2517);
											}
											BgL_arg5444z00_1899 =
												(((BgL_valloczf2cinfozb2optimz40_bglt)
													CREF(BgL_auxz00_2516))->BgL_valuezd2approxzd2);
										}
										{	/* Cfa/vector.scm 210 */
											BgL_approxz00_bglt BgL_obj3242z00_2072;

											{	/* Cfa/vector.scm 210 */
												BgL_vrefzf2cinfozf2_bglt BgL_obj4900z00_2071;

												BgL_obj4900z00_2071 =
													(BgL_vrefzf2cinfozf2_bglt) (BgL_instance5189z00_2149);
												{
													obj_t BgL_auxz00_2522;

													{	/* Cfa/vector.scm 210 */
														BgL_objectz00_bglt BgL_auxz00_2523;

														BgL_auxz00_2523 =
															(BgL_objectz00_bglt) (BgL_obj4900z00_2071);
														BgL_auxz00_2522 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2523);
													}
													BgL_obj3242z00_2072 =
														(((BgL_vrefzf2cinfozf2_bglt)
															CREF(BgL_auxz00_2522))->BgL_approxz00);
												}
											}
											BgL_arg5445z00_1900 =
												(((BgL_approxz00_bglt) CREF(BgL_obj3242z00_2072))->
												BgL_typez00);
										}
										return
											BGl_approxzd2setzd2typez12z12zzcfa_approxz00
											(BgL_arg5444z00_1899, BgL_arg5445z00_1900);
									}
								}
							else
								{	/* Cfa/vector.scm 205 */
									return BFALSE;
								}
						}
				}
			}
		}
	}



/* cfa!-vlength/Cinfo5230 */
	obj_t BGl_cfaz12zd2vlengthzf2Cinfo5230z32zzcfa_vectorz00(obj_t
		BgL_envz00_2151, obj_t BgL_nodez00_2152)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 164 */
			{
				BgL_vlengthzf2cinfozf2_bglt BgL_nodez00_1860;

				{	/* Cfa/vector.scm 165 */
					BgL_approxz00_bglt BgL_auxz00_2529;

					BgL_nodez00_1860 = (BgL_vlengthzf2cinfozf2_bglt) (BgL_nodez00_2152);
					{	/* Cfa/vector.scm 167 */
						BgL_approxz00_bglt BgL_veczd2approxzd2_1864;

						{	/* Cfa/vector.scm 167 */
							obj_t BgL_arg5419z00_1866;

							{	/* Cfa/vector.scm 167 */
								obj_t BgL_pairz00_2037;

								{
									BgL_externz00_bglt BgL_auxz00_2530;

									BgL_auxz00_2530 = (BgL_externz00_bglt) (BgL_nodez00_1860);
									BgL_pairz00_2037 =
										(((BgL_externz00_bglt) CREF(BgL_auxz00_2530))->
										BgL_exprza2za2);
								}
								BgL_arg5419z00_1866 = CAR(BgL_pairz00_2037);
							}
							BgL_veczd2approxzd2_1864 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg5419z00_1866));
						}
						if (
							((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
							{	/* Cfa/vector.scm 168 */
								BFALSE;
							}
						else
							{	/* Cfa/vector.scm 168 */
								(obj_t) (BGl_loosez12z12zzcfa_loosez00(BgL_veczd2approxzd2_1864,
										CNST_TABLE_REF(((long) 1))));
					}}
					{
						obj_t BgL_auxz00_2542;

						{	/* Cfa/vector.scm 170 */
							BgL_objectz00_bglt BgL_auxz00_2543;

							BgL_auxz00_2543 = (BgL_objectz00_bglt) (BgL_nodez00_1860);
							BgL_auxz00_2542 = BGL_OBJECT_WIDENING(BgL_auxz00_2543);
						}
						BgL_auxz00_2529 =
							(((BgL_vlengthzf2cinfozf2_bglt) CREF(BgL_auxz00_2542))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_2529);
				}
			}
		}
	}



/* cfa!-valloc/Cinfo5228 */
	obj_t BGl_cfaz12zd2valloczf2Cinfo5228z32zzcfa_vectorz00(obj_t BgL_envz00_2153,
		obj_t BgL_nodez00_2154)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 155 */
			{
				BgL_valloczf2cinfozf2_bglt BgL_nodez00_1844;

				{	/* Cfa/vector.scm 156 */
					BgL_approxz00_bglt BgL_auxz00_2549;

					BgL_nodez00_1844 = (BgL_valloczf2cinfozf2_bglt) (BgL_nodez00_2154);
					{	/* Cfa/vector.scm 158 */
						obj_t BgL_g5210z00_1848;

						{
							BgL_externz00_bglt BgL_auxz00_2550;

							BgL_auxz00_2550 = (BgL_externz00_bglt) (BgL_nodez00_1844);
							BgL_g5210z00_1848 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_2550))->BgL_exprza2za2);
						}
						{
							obj_t BgL_l5208z00_1850;

							BgL_l5208z00_1850 = BgL_g5210z00_1848;
						BgL_zc3anonymousza35412ze3z83_1851:
							if (PAIRP(BgL_l5208z00_1850))
								{	/* Cfa/vector.scm 158 */
									{	/* Cfa/vector.scm 158 */
										obj_t BgL_xz00_1853;

										BgL_xz00_1853 = CAR(BgL_l5208z00_1850);
										{	/* Cfa/vector.scm 158 */
											BgL_approxz00_bglt BgL_arg5414z00_1854;

											obj_t BgL_arg5415z00_1855;

											BgL_arg5414z00_1854 =
												BGl_cfaz12z12zzcfa_cfaz00(
												(BgL_nodez00_bglt) (BgL_xz00_1853));
											BgL_arg5415z00_1855 = CNST_TABLE_REF(((long) 1));
											BGl_loosez12z12zzcfa_loosez00(BgL_arg5414z00_1854,
												BgL_arg5415z00_1855);
									}}
									{
										obj_t BgL_l5208z00_2560;

										BgL_l5208z00_2560 = CDR(BgL_l5208z00_1850);
										BgL_l5208z00_1850 = BgL_l5208z00_2560;
										goto BgL_zc3anonymousza35412ze3z83_1851;
									}
								}
							else
								{	/* Cfa/vector.scm 158 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_2562;

						{	/* Cfa/vector.scm 159 */
							BgL_objectz00_bglt BgL_auxz00_2563;

							BgL_auxz00_2563 = (BgL_objectz00_bglt) (BgL_nodez00_1844);
							BgL_auxz00_2562 = BGL_OBJECT_WIDENING(BgL_auxz00_2563);
						}
						BgL_auxz00_2549 =
							(((BgL_valloczf2cinfozf2_bglt) CREF(BgL_auxz00_2562))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_2549);
				}
			}
		}
	}



/* cfa!-valloc/Cinfo+op5226 */
	obj_t BGl_cfaz12zd2valloczf2Cinfozb2op5226z80zzcfa_vectorz00(obj_t
		BgL_envz00_2155, obj_t BgL_nodez00_2156)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 146 */
			{
				BgL_valloczf2cinfozb2optimz40_bglt BgL_nodez00_1830;

				{	/* Cfa/vector.scm 147 */
					BgL_approxz00_bglt BgL_auxz00_2569;

					BgL_nodez00_1830 =
						(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_nodez00_2156);
					{	/* Cfa/vector.scm 149 */
						obj_t BgL_g5207z00_1834;

						{
							BgL_externz00_bglt BgL_auxz00_2570;

							BgL_auxz00_2570 = (BgL_externz00_bglt) (BgL_nodez00_1830);
							BgL_g5207z00_1834 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_2570))->BgL_exprza2za2);
						}
						{
							obj_t BgL_l5205z00_1836;

							BgL_l5205z00_1836 = BgL_g5207z00_1834;
						BgL_zc3anonymousza35407ze3z83_1837:
							if (PAIRP(BgL_l5205z00_1836))
								{	/* Cfa/vector.scm 149 */
									{	/* Cfa/vector.scm 149 */
										obj_t BgL_arg5409z00_1839;

										BgL_arg5409z00_1839 = CAR(BgL_l5205z00_1836);
										BGl_cfaz12z12zzcfa_cfaz00(
											(BgL_nodez00_bglt) (BgL_arg5409z00_1839));
									}
									{
										obj_t BgL_l5205z00_2578;

										BgL_l5205z00_2578 = CDR(BgL_l5205z00_1836);
										BgL_l5205z00_1836 = BgL_l5205z00_2578;
										goto BgL_zc3anonymousza35407ze3z83_1837;
									}
								}
							else
								{	/* Cfa/vector.scm 149 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_auxz00_2580;

						{	/* Cfa/vector.scm 150 */
							BgL_objectz00_bglt BgL_auxz00_2581;

							BgL_auxz00_2581 = (BgL_objectz00_bglt) (BgL_nodez00_1830);
							BgL_auxz00_2580 = BGL_OBJECT_WIDENING(BgL_auxz00_2581);
						}
						BgL_auxz00_2569 =
							(((BgL_valloczf2cinfozb2optimz40_bglt) CREF(BgL_auxz00_2580))->
							BgL_approxz00);
					}
					return (obj_t) (BgL_auxz00_2569);
				}
			}
		}
	}



/* cfa!-make-vector-app5224 */
	obj_t BGl_cfaz12zd2makezd2vectorzd2app5224zc0zzcfa_vectorz00(obj_t
		BgL_envz00_2157, obj_t BgL_nodez00_2158)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 135 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_nodez00_1818;

				{	/* Cfa/vector.scm 136 */
					BgL_approxz00_bglt BgL_auxz00_2587;

					BgL_nodez00_1818 =
						(BgL_makezd2vectorzd2appz00_bglt) (BgL_nodez00_2158);
					{	/* Cfa/vector.scm 138 */
						obj_t BgL_arg5401z00_1822;

						{	/* Cfa/vector.scm 138 */
							obj_t BgL_pairz00_2018;

							{
								BgL_appz00_bglt BgL_auxz00_2588;

								BgL_auxz00_2588 = (BgL_appz00_bglt) (BgL_nodez00_1818);
								BgL_pairz00_2018 =
									(((BgL_appz00_bglt) CREF(BgL_auxz00_2588))->BgL_argsz00);
							}
							BgL_arg5401z00_1822 = CAR(BgL_pairz00_2018);
						}
						BGl_cfaz12z12zzcfa_cfaz00((BgL_nodez00_bglt) (BgL_arg5401z00_1822));
					}
					{	/* Cfa/vector.scm 139 */
						BgL_approxz00_bglt BgL_initzd2valuezd2approxz00_1824;

						{	/* Cfa/vector.scm 139 */
							obj_t BgL_arg5404z00_1826;

							{	/* Cfa/vector.scm 139 */
								obj_t BgL_pairz00_2020;

								{
									BgL_appz00_bglt BgL_auxz00_2594;

									BgL_auxz00_2594 = (BgL_appz00_bglt) (BgL_nodez00_1818);
									BgL_pairz00_2020 =
										(((BgL_appz00_bglt) CREF(BgL_auxz00_2594))->BgL_argsz00);
								}
								BgL_arg5404z00_1826 = CAR(CDR(BgL_pairz00_2020));
							}
							BgL_initzd2valuezd2approxz00_1824 =
								BGl_cfaz12z12zzcfa_cfaz00(
								(BgL_nodez00_bglt) (BgL_arg5404z00_1826));
						}
						{	/* Cfa/vector.scm 140 */
							BgL_approxz00_bglt BgL_arg5403z00_1825;

							{
								obj_t BgL_auxz00_2601;

								{	/* Cfa/vector.scm 140 */
									BgL_objectz00_bglt BgL_auxz00_2602;

									BgL_auxz00_2602 = (BgL_objectz00_bglt) (BgL_nodez00_1818);
									BgL_auxz00_2601 = BGL_OBJECT_WIDENING(BgL_auxz00_2602);
								}
								BgL_arg5403z00_1825 =
									(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2601))->
									BgL_valuezd2approxzd2);
							}
							BGl_unionzd2approxz12zc0zzcfa_approxz00(BgL_arg5403z00_1825,
								BgL_initzd2valuezd2approxz00_1824);
						}
						{
							obj_t BgL_auxz00_2607;

							{	/* Cfa/vector.scm 141 */
								BgL_objectz00_bglt BgL_auxz00_2608;

								BgL_auxz00_2608 = (BgL_objectz00_bglt) (BgL_nodez00_1818);
								BgL_auxz00_2607 = BGL_OBJECT_WIDENING(BgL_auxz00_2608);
							}
							BgL_auxz00_2587 =
								(((BgL_makezd2vectorzd2appz00_bglt) CREF(BgL_auxz00_2607))->
								BgL_approxz00);
						}
					}
					return (obj_t) (BgL_auxz00_2587);
				}
			}
		}
	}



/* node-setup!-vset!5222 */
	obj_t BGl_nodezd2setupz12zd2vsetz125222z00zzcfa_vectorz00(obj_t
		BgL_envz00_2159, obj_t BgL_nodez00_2160)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 125 */
			{
				BgL_vsetz12z12_bglt BgL_nodez00_1802;

				{	/* Cfa/vector.scm 126 */
					BgL_vsetz12z12_bglt BgL_auxz00_2614;

					BgL_nodez00_1802 = (BgL_vsetz12z12_bglt) (BgL_nodez00_2160);
					{	/* Cfa/vector.scm 127 */
						obj_t BgL_arg5391z00_1806;

						{
							BgL_externz00_bglt BgL_auxz00_2615;

							BgL_auxz00_2615 = (BgL_externz00_bglt) (BgL_nodez00_1802);
							BgL_arg5391z00_1806 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_2615))->BgL_exprza2za2);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5391z00_1806);
					}
					{	/* Cfa/vector.scm 128 */
						BgL_vsetz12z12_bglt BgL_obj5180z00_1807;

						BgL_obj5180z00_1807 = ((BgL_vsetz12z12_bglt) BgL_nodez00_1802);
						{	/* Cfa/vector.scm 129 */
							obj_t BgL_arg5392z00_1808;

							{	/* Cfa/vector.scm 129 */
								BgL_approxz00_bglt BgL_arg5393z00_1809;

								bool_t BgL_arg5394z00_1810;

								BgL_arg5393z00_1809 =
									BGl_makezd2typezd2approxz00zzcfa_approxz00(
									(BgL_typez00_bglt) (BGl_za2unspecza2z00zztype_cachez00));
								{	/* Cfa/vector.scm 130 */
									bool_t BgL_testz00_2622;

									{	/* Cfa/vector.scm 130 */
										bool_t BgL_testz00_2623;

										{	/* Cfa/vector.scm 130 */
											BgL_typez00_bglt BgL_arg5398z00_1814;

											BgL_arg5398z00_1814 =
												(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1802))->
												BgL_ftypez00);
											BgL_testz00_2623 =
												((obj_t) (BgL_arg5398z00_1814) ==
												BGl_za2_za2z00zztype_cachez00);
										}
										if (BgL_testz00_2623)
											{	/* Cfa/vector.scm 130 */
												BgL_testz00_2622 = ((bool_t) 1);
											}
										else
											{	/* Cfa/vector.scm 130 */
												BgL_typez00_bglt BgL_arg5397z00_1813;

												BgL_arg5397z00_1813 =
													(((BgL_vsetz12z12_bglt) CREF(BgL_nodez00_1802))->
													BgL_ftypez00);
												BgL_testz00_2622 =
													((obj_t) (BgL_arg5397z00_1813) ==
													BGl_za2objza2z00zztype_cachez00);
											}
									}
									if (BgL_testz00_2622)
										{	/* Cfa/vector.scm 130 */
											BgL_arg5394z00_1810 = ((bool_t) 0);
										}
									else
										{	/* Cfa/vector.scm 130 */
											BgL_arg5394z00_1810 = ((bool_t) 1);
										}
								}
								BgL_arg5392z00_1808 =
									BGl_wideningzd2vsetz12zf2Cinfoz32zzcfa_info3z00
									(BgL_arg5393z00_1809, BgL_arg5394z00_1810);
							}
							{	/* Cfa/vector.scm 128 */
								BgL_objectz00_bglt BgL_auxz00_2631;

								BgL_auxz00_2631 = (BgL_objectz00_bglt) (BgL_obj5180z00_1807);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2631, BgL_arg5392z00_1808);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5180z00_1807),
							BGl_classzd2numzd2zz__objectz00
							(BGl_vsetz12zf2Cinfoze0zzcfa_info3z00));
						BgL_auxz00_2614 = BgL_obj5180z00_1807;
					}
					return (obj_t) (BgL_auxz00_2614);
				}
			}
		}
	}



/* node-setup!-vref5220 */
	obj_t BGl_nodezd2setupz12zd2vref5220z12zzcfa_vectorz00(obj_t BgL_envz00_2161,
		obj_t BgL_nodez00_2162)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 105 */
			{
				BgL_vrefz00_bglt BgL_nodez00_1783;

				{	/* Cfa/vector.scm 106 */
					BgL_vrefz00_bglt BgL_auxz00_2639;

					BgL_nodez00_1783 = (BgL_vrefz00_bglt) (BgL_nodez00_2162);
					{	/* Cfa/vector.scm 107 */
						obj_t BgL_arg5381z00_1787;

						{
							BgL_externz00_bglt BgL_auxz00_2640;

							BgL_auxz00_2640 = (BgL_externz00_bglt) (BgL_nodez00_1783);
							BgL_arg5381z00_1787 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_2640))->BgL_exprza2za2);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5381z00_1787);
					}
					{	/* Cfa/vector.scm 108 */
						bool_t BgL_tvectorzf3zf3_1788;

						{	/* Cfa/vector.scm 108 */
							bool_t BgL_testz00_2644;

							{	/* Cfa/vector.scm 108 */
								bool_t BgL_testz00_2645;

								{	/* Cfa/vector.scm 108 */
									BgL_typez00_bglt BgL_arg5389z00_1799;

									BgL_arg5389z00_1799 =
										(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1783))->BgL_ftypez00);
									BgL_testz00_2645 =
										(
										(obj_t) (BgL_arg5389z00_1799) ==
										BGl_za2_za2z00zztype_cachez00);
								}
								if (BgL_testz00_2645)
									{	/* Cfa/vector.scm 108 */
										BgL_testz00_2644 = ((bool_t) 1);
									}
								else
									{	/* Cfa/vector.scm 108 */
										BgL_typez00_bglt BgL_arg5388z00_1798;

										BgL_arg5388z00_1798 =
											(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1783))->
											BgL_ftypez00);
										BgL_testz00_2644 =
											((obj_t) (BgL_arg5388z00_1798) ==
											BGl_za2objza2z00zztype_cachez00);
									}
							}
							if (BgL_testz00_2644)
								{	/* Cfa/vector.scm 108 */
									BgL_tvectorzf3zf3_1788 = ((bool_t) 0);
								}
							else
								{	/* Cfa/vector.scm 108 */
									BgL_tvectorzf3zf3_1788 = ((bool_t) 1);
								}
						}
						{	/* Cfa/vector.scm 108 */
							BgL_approxz00_bglt BgL_approxz00_1789;

							if (BgL_tvectorzf3zf3_1788)
								{	/* Cfa/vector.scm 111 */
									BgL_typez00_bglt BgL_arg5384z00_1793;

									BgL_arg5384z00_1793 =
										(((BgL_vrefz00_bglt) CREF(BgL_nodez00_1783))->BgL_ftypez00);
									BgL_approxz00_1789 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5384z00_1793);
								}
							else
								{	/* Cfa/vector.scm 110 */
									if (
										((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
											((long) 2)))
										{	/* Cfa/vector.scm 112 */
											BgL_approxz00_1789 =
												BGl_makezd2emptyzd2approxz00zzcfa_approxz00();
										}
									else
										{	/* Cfa/vector.scm 115 */
											BgL_approxz00_bglt BgL_approxz00_1795;

											BgL_approxz00_1795 =
												BGl_makezd2typezd2approxz00zzcfa_approxz00(
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00));
											BGl_approxzd2setzd2topz12z12zzcfa_approxz00
												(BgL_approxz00_1795);
											BgL_approxz00_1789 = BgL_approxz00_1795;
										}
								}
							{	/* Cfa/vector.scm 109 */

								{	/* Cfa/vector.scm 118 */
									BgL_vrefz00_bglt BgL_obj5177z00_1790;

									BgL_obj5177z00_1790 = ((BgL_vrefz00_bglt) BgL_nodez00_1783);
									{	/* Cfa/vector.scm 118 */
										obj_t BgL_auxz00_2665;

										BgL_objectz00_bglt BgL_auxz00_2663;

										BgL_auxz00_2665 =
											BGl_wideningzd2vrefzf2Cinfoz20zzcfa_info3z00
											(BgL_approxz00_1789, BgL_tvectorzf3zf3_1788);
										BgL_auxz00_2663 =
											(BgL_objectz00_bglt) (BgL_obj5177z00_1790);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2663, BgL_auxz00_2665);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5177z00_1790),
										BGl_classzd2numzd2zz__objectz00
										(BGl_vrefzf2Cinfozf2zzcfa_info3z00));
									BgL_auxz00_2639 = BgL_obj5177z00_1790;
								}
							}
						}
					}
					return (obj_t) (BgL_auxz00_2639);
				}
			}
		}
	}



/* node-setup!-vlength5218 */
	obj_t BGl_nodezd2setupz12zd2vlength5218z12zzcfa_vectorz00(obj_t
		BgL_envz00_2163, obj_t BgL_nodez00_2164)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 95 */
			{
				BgL_vlengthz00_bglt BgL_nodez00_1768;

				{	/* Cfa/vector.scm 96 */
					BgL_vlengthz00_bglt BgL_auxz00_2673;

					BgL_nodez00_1768 = (BgL_vlengthz00_bglt) (BgL_nodez00_2164);
					{	/* Cfa/vector.scm 97 */
						obj_t BgL_arg5372z00_1772;

						{	/* Cfa/vector.scm 97 */
							obj_t BgL_pairz00_1998;

							{
								BgL_externz00_bglt BgL_auxz00_2674;

								BgL_auxz00_2674 = (BgL_externz00_bglt) (BgL_nodez00_1768);
								BgL_pairz00_1998 =
									(((BgL_externz00_bglt) CREF(BgL_auxz00_2674))->
									BgL_exprza2za2);
							}
							BgL_arg5372z00_1772 = CAR(BgL_pairz00_1998);
						}
						BGl_nodezd2setupz12zc0zzcfa_setupz00(
							(BgL_nodez00_bglt) (BgL_arg5372z00_1772));
					}
					{	/* Cfa/vector.scm 98 */
						BgL_vlengthz00_bglt BgL_obj5174z00_1774;

						BgL_obj5174z00_1774 = ((BgL_vlengthz00_bglt) BgL_nodez00_1768);
						{	/* Cfa/vector.scm 99 */
							obj_t BgL_arg5374z00_1775;

							{	/* Cfa/vector.scm 99 */
								BgL_approxz00_bglt BgL_arg5375z00_1776;

								bool_t BgL_arg5376z00_1777;

								{	/* Cfa/vector.scm 99 */
									BgL_typez00_bglt BgL_arg5377z00_1778;

									{
										BgL_nodez00_bglt BgL_auxz00_2681;

										BgL_auxz00_2681 = (BgL_nodez00_bglt) (BgL_nodez00_1768);
										BgL_arg5377z00_1778 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_2681))->BgL_typez00);
									}
									BgL_arg5375z00_1776 =
										BGl_makezd2typezd2approxz00zzcfa_approxz00
										(BgL_arg5377z00_1778);
								}
								{	/* Cfa/vector.scm 100 */
									obj_t BgL_auxz00_2685;

									BgL_auxz00_2685 =
										(obj_t) (
										(((BgL_vlengthz00_bglt) CREF(BgL_nodez00_1768))->
											BgL_vtypez00));
									BgL_arg5376z00_1777 = TVECTORP(BgL_auxz00_2685);
								}
								BgL_arg5374z00_1775 =
									BGl_wideningzd2vlengthzf2Cinfoz20zzcfa_info3z00
									(BgL_arg5375z00_1776, BgL_arg5376z00_1777);
							}
							{	/* Cfa/vector.scm 98 */
								BgL_objectz00_bglt BgL_auxz00_2690;

								BgL_auxz00_2690 = (BgL_objectz00_bglt) (BgL_obj5174z00_1774);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2690, BgL_arg5374z00_1775);
							}
						}
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt) (BgL_obj5174z00_1774),
							BGl_classzd2numzd2zz__objectz00
							(BGl_vlengthzf2Cinfozf2zzcfa_info3z00));
						BgL_auxz00_2673 = BgL_obj5174z00_1774;
					}
					return (obj_t) (BgL_auxz00_2673);
				}
			}
		}
	}



/* node-setup!-valloc5216 */
	obj_t BGl_nodezd2setupz12zd2valloc5216z12zzcfa_vectorz00(obj_t
		BgL_envz00_2165, obj_t BgL_nodez00_2166)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 82 */
			{
				BgL_vallocz00_bglt BgL_nodez00_1755;

				{	/* Cfa/vector.scm 83 */
					BgL_vallocz00_bglt BgL_auxz00_2698;

					BgL_nodez00_1755 = (BgL_vallocz00_bglt) (BgL_nodez00_2166);
					{	/* Cfa/vector.scm 84 */
						obj_t BgL_arg5367z00_1759;

						{
							BgL_externz00_bglt BgL_auxz00_2699;

							BgL_auxz00_2699 = (BgL_externz00_bglt) (BgL_nodez00_1755);
							BgL_arg5367z00_1759 =
								(((BgL_externz00_bglt) CREF(BgL_auxz00_2699))->BgL_exprza2za2);
						}
						BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5367z00_1759);
					}
					{	/* Cfa/vector.scm 86 */
						BgL_approxz00_bglt BgL_approxz00_1760;

						{	/* Cfa/vector.scm 86 */
							BgL_typez00_bglt BgL_arg5370z00_1765;

							{
								BgL_nodez00_bglt BgL_auxz00_2703;

								BgL_auxz00_2703 = (BgL_nodez00_bglt) (BgL_nodez00_1755);
								BgL_arg5370z00_1765 =
									(((BgL_nodez00_bglt) CREF(BgL_auxz00_2703))->BgL_typez00);
							}
							BgL_approxz00_1760 =
								BGl_makezd2typezd2approxz00zzcfa_approxz00(BgL_arg5370z00_1765);
						}
						{	/* Cfa/vector.scm 86 */
							BgL_vallocz00_bglt BgL_wnodez00_1761;

							{	/* Cfa/vector.scm 87 */
								BgL_vallocz00_bglt BgL_obj5171z00_1762;

								BgL_obj5171z00_1762 = ((BgL_vallocz00_bglt) BgL_nodez00_1755);
								{	/* Cfa/vector.scm 87 */
									obj_t BgL_auxz00_2710;

									BgL_objectz00_bglt BgL_auxz00_2708;

									BgL_auxz00_2710 =
										BGl_wideningzd2valloczf2Cinfoz20zzcfa_info3z00
										(BgL_approxz00_1760);
									BgL_auxz00_2708 = (BgL_objectz00_bglt) (BgL_obj5171z00_1762);
									BGL_OBJECT_WIDENING_SET(BgL_auxz00_2708, BgL_auxz00_2710);
								}
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_obj5171z00_1762),
									BGl_classzd2numzd2zz__objectz00
									(BGl_valloczf2Cinfozf2zzcfa_info3z00));
								BgL_wnodez00_1761 = BgL_obj5171z00_1762;
							}
							{	/* Cfa/vector.scm 87 */

								BGl_approxzd2setzd2topz12z12zzcfa_approxz00(BgL_approxz00_1760);
								BgL_auxz00_2698 = BgL_wnodez00_1761;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2698);
				}
			}
		}
	}



/* node-setup!-pre-vall5214 */
	obj_t BGl_nodezd2setupz12zd2prezd2vall5214zc0zzcfa_vectorz00(obj_t
		BgL_envz00_2167, obj_t BgL_nodez00_2168)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 64 */
			{
				BgL_prezd2valloczf2cinfoz20_bglt BgL_nodez00_1732;

				BgL_nodez00_1732 =
					(BgL_prezd2valloczf2cinfoz20_bglt) (BgL_nodez00_2168);
				BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(
					(BgL_nodez00_bglt) (BgL_nodez00_1732));
				{	/* Cfa/vector.scm 67 */
					obj_t BgL_arg5354z00_1736;

					{
						BgL_externz00_bglt BgL_auxz00_2721;

						BgL_auxz00_2721 = (BgL_externz00_bglt) (BgL_nodez00_1732);
						BgL_arg5354z00_1736 =
							(((BgL_externz00_bglt) CREF(BgL_auxz00_2721))->BgL_exprza2za2);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5354z00_1736);
				}
				{	/* Cfa/vector.scm 68 */
					BgL_variablez00_bglt BgL_ownerz00_1737;

					{
						obj_t BgL_auxz00_2725;

						{	/* Cfa/vector.scm 68 */
							BgL_objectz00_bglt BgL_auxz00_2726;

							BgL_auxz00_2726 = (BgL_objectz00_bglt) (BgL_nodez00_1732);
							BgL_auxz00_2725 = BGL_OBJECT_WIDENING(BgL_auxz00_2726);
						}
						BgL_ownerz00_1737 =
							(((BgL_prezd2valloczf2cinfoz20_bglt) CREF(BgL_auxz00_2725))->
							BgL_ownerz00);
					}
					{	/* Cfa/vector.scm 68 */
						BgL_prezd2valloczf2cinfoz20_bglt BgL_nodez00_1738;

						{	/* Cfa/vector.scm 69 */
							long BgL_arg5363z00_1750;

							{	/* Cfa/vector.scm 69 */
								obj_t BgL_arg5364z00_1751;

								{	/* Cfa/vector.scm 69 */
									obj_t BgL_arg5365z00_1752;

									{	/* Cfa/vector.scm 69 */
										BgL_objectz00_bglt BgL_objectz00_1978;

										BgL_objectz00_1978 =
											(BgL_objectz00_bglt) (BgL_nodez00_1732);
										{	/* Cfa/vector.scm 69 */
											long BgL_arg2646z00_1979;

											{	/* Cfa/vector.scm 69 */
												long BgL_arg2647z00_1980;

												BgL_arg2647z00_1980 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1978);
												BgL_arg2646z00_1979 =
													(BgL_arg2647z00_1980 - OBJECT_TYPE);
											}
											BgL_arg5365z00_1752 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1979));
									}}
									BgL_arg5364z00_1751 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg5365z00_1752);
								}
								BgL_arg5363z00_1750 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg5364z00_1751);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1732), BgL_arg5363z00_1750);
						}
						{	/* Cfa/vector.scm 69 */
							BgL_objectz00_bglt BgL_auxz00_2739;

							BgL_auxz00_2739 = (BgL_objectz00_bglt) (BgL_nodez00_1732);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2739, BFALSE);
						}
						BgL_nodez00_1738 = BgL_nodez00_1732;
						{	/* Cfa/vector.scm 69 */

							{	/* Cfa/vector.scm 70 */
								BgL_vallocz00_bglt BgL_wnodez00_1739;

								{	/* Cfa/vector.scm 70 */
									BgL_vallocz00_bglt BgL_obj5168z00_1742;

									BgL_obj5168z00_1742 =
										((BgL_vallocz00_bglt)
										(BgL_vallocz00_bglt) (BgL_nodez00_1738));
									{	/* Cfa/vector.scm 70 */
										obj_t BgL_auxz00_2746;

										BgL_objectz00_bglt BgL_auxz00_2744;

										BgL_auxz00_2746 =
											BGl_wideningzd2valloczf2Cinfozb2optimz92zzcfa_info3z00
											(BGl_makezd2emptyzd2approxz00zzcfa_approxz00(),
											BGl_makezd2emptyzd2approxz00zzcfa_approxz00(),
											((long) -1), BgL_ownerz00_1737, ((bool_t) 1), BNIL,
											((bool_t) 0));
										BgL_auxz00_2744 =
											(BgL_objectz00_bglt) (BgL_obj5168z00_1742);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2744, BgL_auxz00_2746);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5168z00_1742),
										BGl_classzd2numzd2zz__objectz00
										(BGl_valloczf2Cinfozb2optimz40zzcfa_info3z00));
									BgL_wnodez00_1739 = BgL_obj5168z00_1742;
								}
								{	/* Cfa/vector.scm 77 */
									BgL_approxz00_bglt BgL_arg5355z00_1740;

									{	/* Cfa/vector.scm 77 */
										BgL_typez00_bglt BgL_arg5356z00_1741;

										{
											BgL_nodez00_bglt BgL_auxz00_2754;

											BgL_auxz00_2754 = (BgL_nodez00_bglt) (BgL_nodez00_1732);
											BgL_arg5356z00_1741 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_2754))->
												BgL_typez00);
										}
										BgL_arg5355z00_1740 =
											BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00
											(BgL_arg5356z00_1741,
											(BgL_nodez00_bglt) (BgL_nodez00_1738));
									}
									{	/* Cfa/vector.scm 75 */
										BgL_valloczf2cinfozb2optimz40_bglt BgL_obj5123z00_1991;

										BgL_approxz00_bglt BgL_val5122z00_1992;

										BgL_obj5123z00_1991 =
											(BgL_valloczf2cinfozb2optimz40_bglt) (BgL_wnodez00_1739);
										BgL_val5122z00_1992 = BgL_arg5355z00_1740;
										{
											obj_t BgL_auxz00_2760;

											{	/* Cfa/vector.scm 75 */
												BgL_objectz00_bglt BgL_auxz00_2761;

												BgL_auxz00_2761 =
													(BgL_objectz00_bglt) (BgL_obj5123z00_1991);
												BgL_auxz00_2760 = BGL_OBJECT_WIDENING(BgL_auxz00_2761);
											}
											return
												((((BgL_valloczf2cinfozb2optimz40_bglt)
														CREF(BgL_auxz00_2760))->BgL_approxz00) =
												((BgL_approxz00_bglt) BgL_val5122z00_1992), BUNSPEC);
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



/* node-setup!-pre-make5212 */
	obj_t BGl_nodezd2setupz12zd2prezd2make5212zc0zzcfa_vectorz00(obj_t
		BgL_envz00_2169, obj_t BgL_nodez00_2170)
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 46 */
			{
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_nodez00_1710;

				BgL_nodez00_1710 =
					(BgL_prezd2makezd2vectorzd2appzd2_bglt) (BgL_nodez00_2170);
				BGl_addzd2makezd2vectorz12z12zzcfa_tvectorz00(
					(BgL_nodez00_bglt) (BgL_nodez00_1710));
				{	/* Cfa/vector.scm 49 */
					obj_t BgL_arg5342z00_1714;

					{
						BgL_appz00_bglt BgL_auxz00_2768;

						BgL_auxz00_2768 = (BgL_appz00_bglt) (BgL_nodez00_1710);
						BgL_arg5342z00_1714 =
							(((BgL_appz00_bglt) CREF(BgL_auxz00_2768))->BgL_argsz00);
					}
					BGl_nodezd2setupza2z12z62zzcfa_setupz00(BgL_arg5342z00_1714);
				}
				{	/* Cfa/vector.scm 50 */
					BgL_variablez00_bglt BgL_ownerz00_1715;

					{
						obj_t BgL_auxz00_2772;

						{	/* Cfa/vector.scm 50 */
							BgL_objectz00_bglt BgL_auxz00_2773;

							BgL_auxz00_2773 = (BgL_objectz00_bglt) (BgL_nodez00_1710);
							BgL_auxz00_2772 = BGL_OBJECT_WIDENING(BgL_auxz00_2773);
						}
						BgL_ownerz00_1715 =
							(((BgL_prezd2makezd2vectorzd2appzd2_bglt) CREF(BgL_auxz00_2772))->
							BgL_ownerz00);
					}
					{	/* Cfa/vector.scm 50 */
						BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_nodez00_1716;

						{	/* Cfa/vector.scm 51 */
							long BgL_arg5350z00_1727;

							{	/* Cfa/vector.scm 51 */
								obj_t BgL_arg5351z00_1728;

								{	/* Cfa/vector.scm 51 */
									obj_t BgL_arg5352z00_1729;

									{	/* Cfa/vector.scm 51 */
										BgL_objectz00_bglt BgL_objectz00_1962;

										BgL_objectz00_1962 =
											(BgL_objectz00_bglt) (BgL_nodez00_1710);
										{	/* Cfa/vector.scm 51 */
											long BgL_arg2646z00_1963;

											{	/* Cfa/vector.scm 51 */
												long BgL_arg2647z00_1964;

												BgL_arg2647z00_1964 =
													BGL_OBJECT_CLASS_NUM(BgL_objectz00_1962);
												BgL_arg2646z00_1963 =
													(BgL_arg2647z00_1964 - OBJECT_TYPE);
											}
											BgL_arg5352z00_1729 =
												VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
												(int) (BgL_arg2646z00_1963));
									}}
									BgL_arg5351z00_1728 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg5352z00_1729);
								}
								BgL_arg5350z00_1727 =
									BGl_classzd2numzd2zz__objectz00(BgL_arg5351z00_1728);
							}
							BGL_OBJECT_CLASS_NUM_SET(
								(BgL_objectz00_bglt) (BgL_nodez00_1710), BgL_arg5350z00_1727);
						}
						{	/* Cfa/vector.scm 51 */
							BgL_objectz00_bglt BgL_auxz00_2786;

							BgL_auxz00_2786 = (BgL_objectz00_bglt) (BgL_nodez00_1710);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2786, BFALSE);
						}
						BgL_nodez00_1716 = BgL_nodez00_1710;
						{	/* Cfa/vector.scm 51 */

							{	/* Cfa/vector.scm 52 */
								BgL_appz00_bglt BgL_wnodez00_1717;

								{	/* Cfa/vector.scm 52 */
									BgL_appz00_bglt BgL_obj5164z00_1719;

									BgL_obj5164z00_1719 =
										((BgL_appz00_bglt) (BgL_appz00_bglt) (BgL_nodez00_1716));
									{	/* Cfa/vector.scm 52 */
										obj_t BgL_auxz00_2793;

										BgL_objectz00_bglt BgL_auxz00_2791;

										BgL_auxz00_2793 =
											BGl_wideningzd2makezd2vectorzd2appzd2zzcfa_info2z00
											(BGl_makezd2emptyzd2approxz00zzcfa_approxz00(),
											BGl_makezd2emptyzd2approxz00zzcfa_approxz00(),
											((long) -1), BgL_ownerz00_1715, BNIL, ((bool_t) 0));
										BgL_auxz00_2791 =
											(BgL_objectz00_bglt) (BgL_obj5164z00_1719);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2791, BgL_auxz00_2793);
									}
									BGL_OBJECT_CLASS_NUM_SET(
										(BgL_objectz00_bglt) (BgL_obj5164z00_1719),
										BGl_classzd2numzd2zz__objectz00
										(BGl_makezd2vectorzd2appz00zzcfa_info2z00));
									BgL_wnodez00_1717 = BgL_obj5164z00_1719;
								}
								{	/* Cfa/vector.scm 58 */
									BgL_approxz00_bglt BgL_arg5343z00_1718;

									BgL_arg5343z00_1718 =
										BGl_makezd2typezd2alloczd2approxzd2zzcfa_approxz00(
										(BgL_typez00_bglt) (BGl_za2vectorza2z00zztype_cachez00),
										(BgL_nodez00_bglt) (BgL_nodez00_1716));
									{	/* Cfa/vector.scm 57 */
										BgL_makezd2vectorzd2appz00_bglt BgL_obj4450z00_1974;

										BgL_approxz00_bglt BgL_val4449z00_1975;

										BgL_obj4450z00_1974 =
											(BgL_makezd2vectorzd2appz00_bglt) (BgL_wnodez00_1717);
										BgL_val4449z00_1975 = BgL_arg5343z00_1718;
										{
											obj_t BgL_auxz00_2805;

											{	/* Cfa/vector.scm 57 */
												BgL_objectz00_bglt BgL_auxz00_2806;

												BgL_auxz00_2806 =
													(BgL_objectz00_bglt) (BgL_obj4450z00_1974);
												BgL_auxz00_2805 = BGL_OBJECT_WIDENING(BgL_auxz00_2806);
											}
											return
												((((BgL_makezd2vectorzd2appz00_bglt)
														CREF(BgL_auxz00_2805))->BgL_approxz00) =
												((BgL_approxz00_bglt) BgL_val4449z00_1975), BUNSPEC);
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
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_vectorz00()
	{
		AN_OBJECT;
		{	/* Cfa/vector.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 243010053),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info2z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_info3z00(((long) 0),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_loosez00(((long) 235614963),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_iteratez00(((long) 319050990),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_cfaz00(((long) 42139303),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_setupz00(((long) 212645849),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			BGl_modulezd2initializa7ationz75zzcfa_approxz00(((long) 535144917),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_tvectorz00(((long) 249450490),
				BSTRING_TO_STRING(BGl_string5500z00zzcfa_vectorz00));
		}
	}

#ifdef __cplusplus
}
#endif
