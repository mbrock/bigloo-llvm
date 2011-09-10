/*===========================================================================*/
/*   (BackEnd/cvm.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/cvm.scm)*/
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

	typedef struct BgL_cvmz00_bgl
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
	}             *BgL_cvmz00_bglt;

	typedef struct BgL_sawcz00_bgl
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
	}              *BgL_sawcz00_bglt;

	typedef struct BgL_cgenz00_bgl
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
	}              *BgL_cgenz00_bglt;


	static obj_t BGl_objectzd2ze3structzd2cgen2420ze3zzbackend_cvmz00(obj_t,
		obj_t);
	static obj_t BGl__makezd2sawczd2zzbackend_cvmz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__fillzd2cvmz12zc0zzbackend_cvmz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__z52allocatezd2cgenz80zzbackend_cvmz00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	static obj_t BGl__z52allocatezd2sawcz80zzbackend_cvmz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl_z52thezd2cvmzd2nilz52zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbackend_cvmz00();
	BGL_EXPORTED_DECL BgL_cgenz00_bglt BGl_cgenzd2nilzd2zzbackend_cvmz00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cvmz00_bglt BGl_cvmzd2nilzd2zzbackend_cvmz00();
	static obj_t BGl__fillzd2sawcz12zc0zzbackend_cvmz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_sawczf3zf3zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL BgL_cgenz00_bglt
		BGl_z52allocatezd2cgenz80zzbackend_cvmz00();
	static obj_t BGl_structzb2objectzd2ze3objec2422z83zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2426z83zzbackend_cvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_sawcz00_bglt
		BGl_z52allocatezd2sawcz80zzbackend_cvmz00();
	static obj_t BGl_cnstzd2initzd2zzbackend_cvmz00();
	extern obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_cvmz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_z52thezd2sawczd2nilz52zzbackend_cvmz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl__sawczf3zf3zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cgenz00_bglt BGl_makezd2cgenzd2zzbackend_cvmz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	static obj_t BGl__cgenzd2nilzd2zzbackend_cvmz00(obj_t);
	static obj_t BGl__z52allocatezd2cvmz80zzbackend_cvmz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2sawc2424ze3zzbackend_cvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_sawcz00_bglt BGl_makezd2sawczd2zzbackend_cvmz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t,
		bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	BGL_EXPORTED_DECL BgL_sawcz00_bglt
		BGl_fillzd2sawcz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	BGL_EXPORTED_DECL BgL_cvmz00_bglt
		BGl_fillzd2cvmz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl__cvmzf3zf3zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32445ze3z83zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbackend_cvmz00();
	static obj_t BGl_zc3anonymousza32446ze3z83zzbackend_cvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_cvmz00_bglt BGl_z52allocatezd2cvmz80zzbackend_cvmz00();
	extern obj_t BGl_backendz00zzbackend_backendz00;
	BGL_EXPORTED_DEF obj_t BGl_cgenz00zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl__fillzd2cgenz12zc0zzbackend_cvmz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL BgL_sawcz00_bglt BGl_sawczd2nilzd2zzbackend_cvmz00();
	static obj_t BGl__cvmzd2nilzd2zzbackend_cvmz00(obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_cgenzf3zf3zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_sawcz00zzbackend_cvmz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_cvmzf3zf3zzbackend_cvmz00(obj_t);
	static obj_t BGl__cgenzf3zf3zzbackend_cvmz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_cvmz00();
	static obj_t BGl_z52thezd2cgenzd2nilz52zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl__sawczd2nilzd2zzbackend_cvmz00(obj_t);
	BGL_EXPORTED_DECL BgL_cgenz00_bglt
		BGl_fillzd2cgenz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t,
		bool_t, bool_t, obj_t, obj_t, bool_t, bool_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cvmz00();
	static obj_t BGl__makezd2cgenzd2zzbackend_cvmz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_cvmz00zzbackend_cvmz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzbackend_cvmz00();
	static obj_t __cnst[5];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2756z00zzbackend_cvmz00,
		BgL_bgl_za7c3anonymousza7a322777z00,
		BGl_zc3anonymousza32445ze3z83zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2757z00zzbackend_cvmz00,
		BgL_bgl_za7c3anonymousza7a322778z00,
		BGl_zc3anonymousza32446ze3z83zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2761z00zzbackend_cvmz00,
		BgL_bgl_objectza7d2za7e3stru2779z00,
		BGl_objectzd2ze3structzd2cgen2420ze3zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2763z00zzbackend_cvmz00,
		BgL_bgl_structza7b2objectza72780z00,
		BGl_structzb2objectzd2ze3objec2422z83zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2765z00zzbackend_cvmz00,
		BgL_bgl_objectza7d2za7e3stru2781z00,
		BGl_objectzd2ze3structzd2sawc2424ze3zzbackend_cvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2766z00zzbackend_cvmz00,
		BgL_bgl_structza7b2objectza72782z00,
		BGl_structzb2objectzd2ze3objec2426z83zzbackend_cvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzd2nilzd2envz00zzbackend_cvmz00,
		BgL_bgl__cvmza7d2nilza7d2za7za7b2783z00, BGl__cvmzd2nilzd2zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2cgenzd2envz00zzbackend_cvmz00,
		BgL_bgl__makeza7d2cgenza7d2za72784za7, BGl__makezd2cgenzd2zzbackend_cvmz00,
		0L, BUNSPEC, 28);
	      DEFINE_STRING(BGl_string2758z00zzbackend_cvmz00,
		BgL_bgl_string2758za700za7za7b2785za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string2760z00zzbackend_cvmz00,
		BgL_bgl_string2760za700za7za7b2786za7, "", 0);
	      DEFINE_STRING(BGl_string2759z00zzbackend_cvmz00,
		BgL_bgl_string2759za700za7za7b2787za7,
		"Can't make instance of abstract classes", 39);
	      DEFINE_STRING(BGl_string2762z00zzbackend_cvmz00,
		BgL_bgl_string2762za700za7za7b2788za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string2764z00zzbackend_cvmz00,
		BgL_bgl_string2764za700za7za7b2789za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string2767z00zzbackend_cvmz00,
		BgL_bgl_string2767za700za7za7b2790za7, "backend_cvm", 11);
	      DEFINE_STRING(BGl_string2768z00zzbackend_cvmz00,
		BgL_bgl_string2768za700za7za7b2791za7, "_ %allocate-cvm cgen sawc cvm ",
		30);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cgenz12zd2envz12zzbackend_cvmz00,
		BgL_bgl__fillza7d2cgenza712za72792za7,
		BGl__fillzd2cgenz12zc0zzbackend_cvmz00, 0L, BUNSPEC, 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzf3zd2envz21zzbackend_cvmz00,
		BgL_bgl__cgenza7f3za7f3za7za7bac2793z00, BGl__cgenzf3zf3zzbackend_cvmz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczd2nilzd2envz00zzbackend_cvmz00,
		BgL_bgl__sawcza7d2nilza7d2za7za72794z00, BGl__sawczd2nilzd2zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cgenzd2envz52zzbackend_cvmz00,
		BgL_bgl__za752allocateza7d2c2795z00,
		BGl__z52allocatezd2cgenz80zzbackend_cvmz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cvmzf3zd2envz21zzbackend_cvmz00,
		BgL_bgl__cvmza7f3za7f3za7za7back2796z00, BGl__cvmzf3zf3zzbackend_cvmz00, 0L,
		BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_cgenzd2nilzd2envz00zzbackend_cvmz00,
		BgL_bgl__cgenza7d2nilza7d2za7za72797z00, BGl__cgenzd2nilzd2zzbackend_cvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2sawcz12zd2envz12zzbackend_cvmz00,
		BgL_bgl__fillza7d2sawcza712za72798za7,
		BGl__fillzd2sawcz12zc0zzbackend_cvmz00, 0L, BUNSPEC, 29);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_sawczf3zd2envz21zzbackend_cvmz00,
		BgL_bgl__sawcza7f3za7f3za7za7bac2799z00, BGl__sawczf3zf3zzbackend_cvmz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2cvmzd2envz52zzbackend_cvmz00,
		BgL_bgl__za752allocateza7d2c2800z00,
		BGl__z52allocatezd2cvmz80zzbackend_cvmz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2sawczd2envz00zzbackend_cvmz00,
		BgL_bgl__makeza7d2sawcza7d2za72801za7, BGl__makezd2sawczd2zzbackend_cvmz00,
		0L, BUNSPEC, 28);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2cvmz12zd2envz12zzbackend_cvmz00,
		BgL_bgl__fillza7d2cvmza712za7c2802za7,
		BGl__fillzd2cvmz12zc0zzbackend_cvmz00, 0L, BUNSPEC, 29);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_z52allocatezd2sawczd2envz52zzbackend_cvmz00,
		BgL_bgl__za752allocateza7d2s2803z00,
		BGl__z52allocatezd2sawcz80zzbackend_cvmz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_cvmz00(long
		BgL_checksumz00_1948, char *BgL_fromz00_1949)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_cvmz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_cvmz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbackend_cvmz00();
					BGl_cnstzd2initzd2zzbackend_cvmz00();
					BGl_importedzd2moduleszd2initz00zzbackend_cvmz00();
					BGl_objectzd2initzd2zzbackend_cvmz00();
					BGl_methodzd2initzd2zzbackend_cvmz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_cvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_cvm");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "backend_cvm");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			{	/* BackEnd/cvm.scm 15 */
				obj_t BgL_cportz00_1664;

				BgL_cportz00_1664 =
					bgl_open_input_string(BGl_string2768z00zzbackend_cvmz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1665;

					BgL_iz00_1665 = ((long) 4);
				BgL_loopz00_1666:
					if ((BgL_iz00_1665 == ((long) -1)))
						{	/* BackEnd/cvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/cvm.scm 15 */
							{	/* BackEnd/cvm.scm 15 */
								obj_t BgL_arg2770z00_1668;

								{	/* BackEnd/cvm.scm 15 */

									{	/* BackEnd/cvm.scm 15 */
										obj_t BgL_locationz00_1670;

										BgL_locationz00_1670 = BBOOL(((bool_t) 0));
										{	/* BackEnd/cvm.scm 15 */

											BgL_arg2770z00_1668 =
												BGl_readz00zz__readerz00(BgL_cportz00_1664,
												BgL_locationz00_1670);
										}
									}
								}
								{	/* BackEnd/cvm.scm 15 */
									int BgL_auxz00_1967;

									BgL_auxz00_1967 = (int) (BgL_iz00_1665);
									CNST_TABLE_SET(BgL_auxz00_1967, BgL_arg2770z00_1668);
							}}
							{	/* BackEnd/cvm.scm 15 */
								int BgL_auxz00_1671;

								BgL_auxz00_1671 = (int) ((BgL_iz00_1665 - ((long) 1)));
								{
									long BgL_iz00_1972;

									BgL_iz00_1972 = (long) (BgL_auxz00_1671);
									BgL_iz00_1665 = BgL_iz00_1972;
									goto BgL_loopz00_1666;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			return BUNSPEC;
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			{	/* BackEnd/cvm.scm 18 */
				obj_t BgL_arg2429z00_383;

				obj_t BgL_arg2430z00_384;

				obj_t BgL_arg2444z00_388;

				BgL_arg2429z00_383 = CNST_TABLE_REF(((long) 0));
				BgL_arg2430z00_384 = BGl_backendz00zzbackend_backendz00;
				{	/* BackEnd/cvm.scm 18 */
					obj_t BgL_v2416z00_393;

					BgL_v2416z00_393 = create_vector((int) (((long) 0)));
					BgL_arg2444z00_388 = BgL_v2416z00_393;
				}
				BGl_cvmz00zzbackend_cvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2429z00_383,
					BgL_arg2430z00_384, ((bool_t) 1), BGl_proc2756z00zzbackend_cvmz00,
					BGl_proc2757z00zzbackend_cvmz00,
					BGl_cvmzd2nilzd2envz00zzbackend_cvmz00,
					BGl_cvmzf3zd2envz21zzbackend_cvmz00, ((long) 9191), BFALSE, BFALSE,
					BgL_arg2444z00_388);
			}
			{	/* BackEnd/cvm.scm 19 */
				obj_t BgL_arg2448z00_396;

				obj_t BgL_arg2451z00_397;

				obj_t BgL_arg2454z00_400;

				BgL_arg2448z00_396 = CNST_TABLE_REF(((long) 1));
				BgL_arg2451z00_397 = BGl_cvmz00zzbackend_cvmz00;
				{	/* BackEnd/cvm.scm 19 */
					obj_t BgL_v2417z00_401;

					BgL_v2417z00_401 = create_vector((int) (((long) 0)));
					BgL_arg2454z00_400 = BgL_v2417z00_401;
				}
				BGl_sawcz00zzbackend_cvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2448z00_396,
					BgL_arg2451z00_397, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2sawczd2envz52zzbackend_cvmz00,
					BGl_sawczd2nilzd2envz00zzbackend_cvmz00,
					BGl_sawczf3zd2envz21zzbackend_cvmz00, ((long) 92863), BFALSE, BFALSE,
					BgL_arg2454z00_400);
			}
			{	/* BackEnd/cvm.scm 20 */
				obj_t BgL_arg2459z00_402;

				obj_t BgL_arg2460z00_403;

				obj_t BgL_arg2471z00_406;

				BgL_arg2459z00_402 = CNST_TABLE_REF(((long) 2));
				BgL_arg2460z00_403 = BGl_cvmz00zzbackend_cvmz00;
				{	/* BackEnd/cvm.scm 20 */
					obj_t BgL_v2418z00_407;

					BgL_v2418z00_407 = create_vector((int) (((long) 0)));
					BgL_arg2471z00_406 = BgL_v2418z00_407;
				}
				BGl_cgenz00zzbackend_cvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg2459z00_402,
					BgL_arg2460z00_403, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2cgenzd2envz52zzbackend_cvmz00,
					BGl_cgenzd2nilzd2envz00zzbackend_cvmz00,
					BGl_cgenzf3zd2envz21zzbackend_cvmz00, ((long) 81534), BFALSE, BFALSE,
					BgL_arg2471z00_406);
			}
			BGl_z52thezd2cgenzd2nilz52zzbackend_cvmz00 = BUNSPEC;
			BGl_z52thezd2sawczd2nilz52zzbackend_cvmz00 = BUNSPEC;
			return (BGl_z52thezd2cvmzd2nilz52zzbackend_cvmz00 = BUNSPEC, BUNSPEC);
		}
	}



/* <anonymous:2446> */
	obj_t BGl_zc3anonymousza32446ze3z83zzbackend_cvmz00(obj_t BgL_envz00_1481,
		obj_t BgL_xz00_1482)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			{
				obj_t BgL_xz00_391;

				BgL_xz00_391 = BgL_xz00_1482;
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 3)),
					BGl_string2758z00zzbackend_cvmz00, CNST_TABLE_REF(((long) 0)));
		}}
	}



/* <anonymous:2445> */
	obj_t BGl_zc3anonymousza32445ze3z83zzbackend_cvmz00(obj_t BgL_envz00_1483,
		obj_t BgL_xz00_1484)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			{
				obj_t BgL_xz00_389;

				BgL_xz00_389 = BgL_xz00_1484;
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
					BGl_string2759z00zzbackend_cvmz00, CNST_TABLE_REF(((long) 0)));
		}}
	}



/* cgen? */
	BGL_EXPORTED_DEF bool_t BGl_cgenzf3zf3zzbackend_cvmz00(obj_t BgL_obj2415z00_1)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2415z00_1,
				BGl_cgenz00zzbackend_cvmz00);
		}
	}



/* _cgen? */
	obj_t BGl__cgenzf3zf3zzbackend_cvmz00(obj_t BgL_envz00_1494,
		obj_t BgL_obj2415z00_1495)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2415z00_1495,
					BGl_cgenz00zzbackend_cvmz00));
		}
	}



/* make-cgen */
	BGL_EXPORTED_DEF BgL_cgenz00_bglt BGl_makezd2cgenzd2zzbackend_cvmz00(obj_t
		BgL_language2212z00_5, obj_t BgL_srfi02213z00_6, obj_t BgL_name2214z00_7,
		obj_t BgL_externzd2variables2215zd2_8,
		obj_t BgL_externzd2functions2216zd2_9, obj_t BgL_externzd2types2217zd2_10,
		obj_t BgL_variables2218z00_11, obj_t BgL_functions2219z00_12,
		obj_t BgL_types2220z00_13, bool_t BgL_typed2221z00_14,
		obj_t BgL_heapzd2suffix2222zd2_15, obj_t BgL_heapzd2compatible2223zd2_16,
		bool_t BgL_callcc2224z00_17, bool_t BgL_qualifiedzd2types2225zd2_18,
		bool_t BgL_effectzb22226zb2_19, bool_t BgL_removezd2emptyzd2let2227z00_20,
		bool_t BgL_foreignzd2closure2228zd2_21, bool_t BgL_typedzd2eq2229zd2_22,
		bool_t BgL_tracezd2support2230zd2_23,
		obj_t BgL_foreignzd2clausezd2suppo2231z00_24,
		obj_t BgL_debugzd2support2232zd2_25, bool_t BgL_pragmazd2support2233zd2_26,
		bool_t BgL_tvectorzd2descrzd2suppor2234z00_27,
		bool_t BgL_requirezd2tailc2235zd2_28, obj_t BgL_registers2236z00_29,
		obj_t BgL_pregisters2237z00_30, bool_t BgL_boundzd2check2238zd2_31,
		bool_t BgL_typezd2check2239zd2_32)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				BgL_cgenz00_bglt BgL_new2240z00_714;

				{	/* BackEnd/cvm.scm 20 */
					BgL_cgenz00_bglt BgL_res2732z00_719;

					{	/* BackEnd/cvm.scm 20 */
						BgL_cgenz00_bglt BgL_new2300z00_715;

						BgL_new2300z00_715 =
							((BgL_cgenz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cgenz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2300z00_715),
							BGl_classzd2numzd2zz__objectz00(BGl_cgenz00zzbackend_cvmz00));
						{	/* BackEnd/cvm.scm 20 */
							BgL_objectz00_bglt BgL_auxz00_1999;

							BgL_auxz00_1999 = (BgL_objectz00_bglt) (BgL_new2300z00_715);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_1999, BFALSE);
						}
						BgL_res2732z00_719 = BgL_new2300z00_715;
					}
					BgL_new2240z00_714 = BgL_res2732z00_719;
				}
				{	/* BackEnd/cvm.scm 20 */
					BgL_cgenz00_bglt BgL_res2733z00_777;

					{	/* BackEnd/cvm.scm 20 */
						BgL_cgenz00_bglt BgL_new2270z00_720;

						BgL_new2270z00_720 = BgL_new2240z00_714;
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_language2242z00_749;

							obj_t BgL_srfi02243z00_750;

							obj_t BgL_name2244z00_751;

							obj_t BgL_externzd2variables2245zd2_752;

							obj_t BgL_externzd2functions2246zd2_753;

							obj_t BgL_externzd2types2247zd2_754;

							obj_t BgL_variables2248z00_755;

							obj_t BgL_functions2249z00_756;

							obj_t BgL_types2250z00_757;

							bool_t BgL_typed2251z00_758;

							obj_t BgL_heapzd2suffix2252zd2_759;

							obj_t BgL_heapzd2compatible2253zd2_760;

							bool_t BgL_callcc2254z00_761;

							bool_t BgL_qualifiedzd2types2255zd2_762;

							bool_t BgL_effectzb22256zb2_763;

							bool_t BgL_removezd2emptyzd2let2257z00_764;

							bool_t BgL_foreignzd2closure2258zd2_765;

							bool_t BgL_typedzd2eq2259zd2_766;

							bool_t BgL_tracezd2support2260zd2_767;

							obj_t BgL_foreignzd2clausezd2suppo2261z00_768;

							obj_t BgL_debugzd2support2262zd2_769;

							bool_t BgL_pragmazd2support2263zd2_770;

							bool_t BgL_tvectorzd2descrzd2suppor2264z00_771;

							bool_t BgL_requirezd2tailc2265zd2_772;

							obj_t BgL_registers2266z00_773;

							obj_t BgL_pregisters2267z00_774;

							bool_t BgL_boundzd2check2268zd2_775;

							bool_t BgL_typezd2check2269zd2_776;

							BgL_language2242z00_749 = BgL_language2212z00_5;
							BgL_srfi02243z00_750 = BgL_srfi02213z00_6;
							BgL_name2244z00_751 = BgL_name2214z00_7;
							BgL_externzd2variables2245zd2_752 =
								BgL_externzd2variables2215zd2_8;
							BgL_externzd2functions2246zd2_753 =
								BgL_externzd2functions2216zd2_9;
							BgL_externzd2types2247zd2_754 = BgL_externzd2types2217zd2_10;
							BgL_variables2248z00_755 = BgL_variables2218z00_11;
							BgL_functions2249z00_756 = BgL_functions2219z00_12;
							BgL_types2250z00_757 = BgL_types2220z00_13;
							BgL_typed2251z00_758 = BgL_typed2221z00_14;
							BgL_heapzd2suffix2252zd2_759 = BgL_heapzd2suffix2222zd2_15;
							BgL_heapzd2compatible2253zd2_760 =
								BgL_heapzd2compatible2223zd2_16;
							BgL_callcc2254z00_761 = BgL_callcc2224z00_17;
							BgL_qualifiedzd2types2255zd2_762 =
								BgL_qualifiedzd2types2225zd2_18;
							BgL_effectzb22256zb2_763 = BgL_effectzb22226zb2_19;
							BgL_removezd2emptyzd2let2257z00_764 =
								BgL_removezd2emptyzd2let2227z00_20;
							BgL_foreignzd2closure2258zd2_765 =
								BgL_foreignzd2closure2228zd2_21;
							BgL_typedzd2eq2259zd2_766 = BgL_typedzd2eq2229zd2_22;
							BgL_tracezd2support2260zd2_767 = BgL_tracezd2support2230zd2_23;
							BgL_foreignzd2clausezd2suppo2261z00_768 =
								BgL_foreignzd2clausezd2suppo2231z00_24;
							BgL_debugzd2support2262zd2_769 = BgL_debugzd2support2232zd2_25;
							BgL_pragmazd2support2263zd2_770 = BgL_pragmazd2support2233zd2_26;
							BgL_tvectorzd2descrzd2suppor2264z00_771 =
								BgL_tvectorzd2descrzd2suppor2234z00_27;
							BgL_requirezd2tailc2265zd2_772 = BgL_requirezd2tailc2235zd2_28;
							BgL_registers2266z00_773 = BgL_registers2236z00_29;
							BgL_pregisters2267z00_774 = BgL_pregisters2237z00_30;
							BgL_boundzd2check2268zd2_775 = BgL_boundzd2check2238zd2_31;
							BgL_typezd2check2269zd2_776 = BgL_typezd2check2239zd2_32;
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_languagez00) =
								((obj_t) BgL_language2242z00_749), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->BgL_srfi0z00) =
								((obj_t) BgL_srfi02243z00_750), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->BgL_namez00) =
								((obj_t) BgL_name2244z00_751), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables2245zd2_752), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions2246zd2_753), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types2247zd2_754), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_variablesz00) =
								((obj_t) BgL_variables2248z00_755), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_functionsz00) =
								((obj_t) BgL_functions2249z00_756), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->BgL_typesz00) =
								((obj_t) BgL_types2250z00_757), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->BgL_typedz00) =
								((bool_t) BgL_typed2251z00_758), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix2252zd2_759), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible2253zd2_760), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->BgL_callccz00) =
								((bool_t) BgL_callcc2254z00_761), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types2255zd2_762), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb22256zb2_763), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let2257z00_764), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure2258zd2_765), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq2259zd2_766), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support2260zd2_767), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo2261z00_768), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support2262zd2_769), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support2263zd2_770), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor2264z00_771), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc2265zd2_772), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_registersz00) =
								((obj_t) BgL_registers2266z00_773), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters2267z00_774), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check2268zd2_775), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_720))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check2269zd2_776), BUNSPEC);
							BgL_res2733z00_777 = BgL_new2270z00_720;
					}} BgL_res2733z00_777;
				}
				BGl_backendzd2initializa7ez12z67zzbackend_backendz00(
					(BgL_backendz00_bglt) (BgL_new2240z00_714));
				return BgL_new2240z00_714;
			}
		}
	}



/* _make-cgen */
	obj_t BGl__makezd2cgenzd2zzbackend_cvmz00(obj_t BgL_envz00_1496,
		obj_t BgL_language2212z00_1497, obj_t BgL_srfi02213z00_1498,
		obj_t BgL_name2214z00_1499, obj_t BgL_externzd2variables2215zd2_1500,
		obj_t BgL_externzd2functions2216zd2_1501,
		obj_t BgL_externzd2types2217zd2_1502, obj_t BgL_variables2218z00_1503,
		obj_t BgL_functions2219z00_1504, obj_t BgL_types2220z00_1505,
		obj_t BgL_typed2221z00_1506, obj_t BgL_heapzd2suffix2222zd2_1507,
		obj_t BgL_heapzd2compatible2223zd2_1508, obj_t BgL_callcc2224z00_1509,
		obj_t BgL_qualifiedzd2types2225zd2_1510, obj_t BgL_effectzb22226zb2_1511,
		obj_t BgL_removezd2emptyzd2let2227z00_1512,
		obj_t BgL_foreignzd2closure2228zd2_1513, obj_t BgL_typedzd2eq2229zd2_1514,
		obj_t BgL_tracezd2support2230zd2_1515,
		obj_t BgL_foreignzd2clausezd2suppo2231z00_1516,
		obj_t BgL_debugzd2support2232zd2_1517,
		obj_t BgL_pragmazd2support2233zd2_1518,
		obj_t BgL_tvectorzd2descrzd2suppor2234z00_1519,
		obj_t BgL_requirezd2tailc2235zd2_1520, obj_t BgL_registers2236z00_1521,
		obj_t BgL_pregisters2237z00_1522, obj_t BgL_boundzd2check2238zd2_1523,
		obj_t BgL_typezd2check2239zd2_1524)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			return
				(obj_t) (BGl_makezd2cgenzd2zzbackend_cvmz00(BgL_language2212z00_1497,
					BgL_srfi02213z00_1498, BgL_name2214z00_1499,
					BgL_externzd2variables2215zd2_1500,
					BgL_externzd2functions2216zd2_1501, BgL_externzd2types2217zd2_1502,
					BgL_variables2218z00_1503, BgL_functions2219z00_1504,
					BgL_types2220z00_1505, CBOOL(BgL_typed2221z00_1506),
					BgL_heapzd2suffix2222zd2_1507, BgL_heapzd2compatible2223zd2_1508,
					CBOOL(BgL_callcc2224z00_1509),
					CBOOL(BgL_qualifiedzd2types2225zd2_1510),
					CBOOL(BgL_effectzb22226zb2_1511),
					CBOOL(BgL_removezd2emptyzd2let2227z00_1512),
					CBOOL(BgL_foreignzd2closure2228zd2_1513),
					CBOOL(BgL_typedzd2eq2229zd2_1514),
					CBOOL(BgL_tracezd2support2230zd2_1515),
					BgL_foreignzd2clausezd2suppo2231z00_1516,
					BgL_debugzd2support2232zd2_1517,
					CBOOL(BgL_pragmazd2support2233zd2_1518),
					CBOOL(BgL_tvectorzd2descrzd2suppor2234z00_1519),
					CBOOL(BgL_requirezd2tailc2235zd2_1520), BgL_registers2236z00_1521,
					BgL_pregisters2237z00_1522, CBOOL(BgL_boundzd2check2238zd2_1523),
					CBOOL(BgL_typezd2check2239zd2_1524)));
		}
	}



/* fill-cgen! */
	BGL_EXPORTED_DEF BgL_cgenz00_bglt
		BGl_fillzd2cgenz12zc0zzbackend_cvmz00(BgL_cgenz00_bglt BgL_new2270z00_33,
		obj_t BgL_language2242z00_34, obj_t BgL_srfi02243z00_35,
		obj_t BgL_name2244z00_36, obj_t BgL_externzd2variables2245zd2_37,
		obj_t BgL_externzd2functions2246zd2_38, obj_t BgL_externzd2types2247zd2_39,
		obj_t BgL_variables2248z00_40, obj_t BgL_functions2249z00_41,
		obj_t BgL_types2250z00_42, bool_t BgL_typed2251z00_43,
		obj_t BgL_heapzd2suffix2252zd2_44, obj_t BgL_heapzd2compatible2253zd2_45,
		bool_t BgL_callcc2254z00_46, bool_t BgL_qualifiedzd2types2255zd2_47,
		bool_t BgL_effectzb22256zb2_48, bool_t BgL_removezd2emptyzd2let2257z00_49,
		bool_t BgL_foreignzd2closure2258zd2_50, bool_t BgL_typedzd2eq2259zd2_51,
		bool_t BgL_tracezd2support2260zd2_52,
		obj_t BgL_foreignzd2clausezd2suppo2261z00_53,
		obj_t BgL_debugzd2support2262zd2_54, bool_t BgL_pragmazd2support2263zd2_55,
		bool_t BgL_tvectorzd2descrzd2suppor2264z00_56,
		bool_t BgL_requirezd2tailc2265zd2_57, obj_t BgL_registers2266z00_58,
		obj_t BgL_pregisters2267z00_59, bool_t BgL_boundzd2check2268zd2_60,
		bool_t BgL_typezd2check2269zd2_61)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				obj_t BgL_language2242z00_1673;

				obj_t BgL_srfi02243z00_1674;

				obj_t BgL_name2244z00_1675;

				obj_t BgL_externzd2variables2245zd2_1676;

				obj_t BgL_externzd2functions2246zd2_1677;

				obj_t BgL_externzd2types2247zd2_1678;

				obj_t BgL_variables2248z00_1679;

				obj_t BgL_functions2249z00_1680;

				obj_t BgL_types2250z00_1681;

				bool_t BgL_typed2251z00_1682;

				obj_t BgL_heapzd2suffix2252zd2_1683;

				obj_t BgL_heapzd2compatible2253zd2_1684;

				bool_t BgL_callcc2254z00_1685;

				bool_t BgL_qualifiedzd2types2255zd2_1686;

				bool_t BgL_effectzb22256zb2_1687;

				bool_t BgL_removezd2emptyzd2let2257z00_1688;

				bool_t BgL_foreignzd2closure2258zd2_1689;

				bool_t BgL_typedzd2eq2259zd2_1690;

				bool_t BgL_tracezd2support2260zd2_1691;

				obj_t BgL_foreignzd2clausezd2suppo2261z00_1692;

				obj_t BgL_debugzd2support2262zd2_1693;

				bool_t BgL_pragmazd2support2263zd2_1694;

				bool_t BgL_tvectorzd2descrzd2suppor2264z00_1695;

				bool_t BgL_requirezd2tailc2265zd2_1696;

				obj_t BgL_registers2266z00_1697;

				obj_t BgL_pregisters2267z00_1698;

				bool_t BgL_boundzd2check2268zd2_1699;

				bool_t BgL_typezd2check2269zd2_1700;

				BgL_language2242z00_1673 = BgL_language2242z00_34;
				BgL_srfi02243z00_1674 = BgL_srfi02243z00_35;
				BgL_name2244z00_1675 = BgL_name2244z00_36;
				BgL_externzd2variables2245zd2_1676 = BgL_externzd2variables2245zd2_37;
				BgL_externzd2functions2246zd2_1677 = BgL_externzd2functions2246zd2_38;
				BgL_externzd2types2247zd2_1678 = BgL_externzd2types2247zd2_39;
				BgL_variables2248z00_1679 = BgL_variables2248z00_40;
				BgL_functions2249z00_1680 = BgL_functions2249z00_41;
				BgL_types2250z00_1681 = BgL_types2250z00_42;
				BgL_typed2251z00_1682 = BgL_typed2251z00_43;
				BgL_heapzd2suffix2252zd2_1683 = BgL_heapzd2suffix2252zd2_44;
				BgL_heapzd2compatible2253zd2_1684 = BgL_heapzd2compatible2253zd2_45;
				BgL_callcc2254z00_1685 = BgL_callcc2254z00_46;
				BgL_qualifiedzd2types2255zd2_1686 = BgL_qualifiedzd2types2255zd2_47;
				BgL_effectzb22256zb2_1687 = BgL_effectzb22256zb2_48;
				BgL_removezd2emptyzd2let2257z00_1688 =
					BgL_removezd2emptyzd2let2257z00_49;
				BgL_foreignzd2closure2258zd2_1689 = BgL_foreignzd2closure2258zd2_50;
				BgL_typedzd2eq2259zd2_1690 = BgL_typedzd2eq2259zd2_51;
				BgL_tracezd2support2260zd2_1691 = BgL_tracezd2support2260zd2_52;
				BgL_foreignzd2clausezd2suppo2261z00_1692 =
					BgL_foreignzd2clausezd2suppo2261z00_53;
				BgL_debugzd2support2262zd2_1693 = BgL_debugzd2support2262zd2_54;
				BgL_pragmazd2support2263zd2_1694 = BgL_pragmazd2support2263zd2_55;
				BgL_tvectorzd2descrzd2suppor2264z00_1695 =
					BgL_tvectorzd2descrzd2suppor2264z00_56;
				BgL_requirezd2tailc2265zd2_1696 = BgL_requirezd2tailc2265zd2_57;
				BgL_registers2266z00_1697 = BgL_registers2266z00_58;
				BgL_pregisters2267z00_1698 = BgL_pregisters2267z00_59;
				BgL_boundzd2check2268zd2_1699 = BgL_boundzd2check2268zd2_60;
				BgL_typezd2check2269zd2_1700 = BgL_typezd2check2269zd2_61;
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_languagez00) =
					((obj_t) BgL_language2242z00_1673), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_srfi0z00) =
					((obj_t) BgL_srfi02243z00_1674), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_namez00) =
					((obj_t) BgL_name2244z00_1675), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables2245zd2_1676), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions2246zd2_1677), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types2247zd2_1678), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_variablesz00) =
					((obj_t) BgL_variables2248z00_1679), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_functionsz00) =
					((obj_t) BgL_functions2249z00_1680), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_typesz00) =
					((obj_t) BgL_types2250z00_1681), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_typedz00) =
					((bool_t) BgL_typed2251z00_1682), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix2252zd2_1683), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible2253zd2_1684), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_callccz00) =
					((bool_t) BgL_callcc2254z00_1685), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types2255zd2_1686), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb22256zb2_1687), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let2257z00_1688), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure2258zd2_1689), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq2259zd2_1690), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support2260zd2_1691), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo2261z00_1692), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support2262zd2_1693), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support2263zd2_1694), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor2264z00_1695), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->
						BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc2265zd2_1696), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_registersz00) =
					((obj_t) BgL_registers2266z00_1697), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters2267z00_1698), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check2268zd2_1699), BUNSPEC);
				((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_33))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check2269zd2_1700), BUNSPEC);
				return BgL_new2270z00_33;
			}
		}
	}



/* _fill-cgen! */
	obj_t BGl__fillzd2cgenz12zc0zzbackend_cvmz00(obj_t BgL_envz00_1525,
		obj_t BgL_new2270z00_1526, obj_t BgL_language2242z00_1527,
		obj_t BgL_srfi02243z00_1528, obj_t BgL_name2244z00_1529,
		obj_t BgL_externzd2variables2245zd2_1530,
		obj_t BgL_externzd2functions2246zd2_1531,
		obj_t BgL_externzd2types2247zd2_1532, obj_t BgL_variables2248z00_1533,
		obj_t BgL_functions2249z00_1534, obj_t BgL_types2250z00_1535,
		obj_t BgL_typed2251z00_1536, obj_t BgL_heapzd2suffix2252zd2_1537,
		obj_t BgL_heapzd2compatible2253zd2_1538, obj_t BgL_callcc2254z00_1539,
		obj_t BgL_qualifiedzd2types2255zd2_1540, obj_t BgL_effectzb22256zb2_1541,
		obj_t BgL_removezd2emptyzd2let2257z00_1542,
		obj_t BgL_foreignzd2closure2258zd2_1543, obj_t BgL_typedzd2eq2259zd2_1544,
		obj_t BgL_tracezd2support2260zd2_1545,
		obj_t BgL_foreignzd2clausezd2suppo2261z00_1546,
		obj_t BgL_debugzd2support2262zd2_1547,
		obj_t BgL_pragmazd2support2263zd2_1548,
		obj_t BgL_tvectorzd2descrzd2suppor2264z00_1549,
		obj_t BgL_requirezd2tailc2265zd2_1550, obj_t BgL_registers2266z00_1551,
		obj_t BgL_pregisters2267z00_1552, obj_t BgL_boundzd2check2268zd2_1553,
		obj_t BgL_typezd2check2269zd2_1554)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				BgL_cgenz00_bglt BgL_auxz00_2075;

				{	/* BackEnd/cvm.scm 20 */
					BgL_cgenz00_bglt BgL_res2771z00_1758;

					{	/* BackEnd/cvm.scm 20 */
						BgL_cgenz00_bglt BgL_new2270z00_1701;

						obj_t BgL_language2242z00_1702;

						obj_t BgL_srfi02243z00_1703;

						obj_t BgL_name2244z00_1704;

						bool_t BgL_typed2251z00_1711;

						obj_t BgL_heapzd2suffix2252zd2_1712;

						obj_t BgL_heapzd2compatible2253zd2_1713;

						bool_t BgL_callcc2254z00_1714;

						bool_t BgL_qualifiedzd2types2255zd2_1715;

						bool_t BgL_effectzb22256zb2_1716;

						bool_t BgL_removezd2emptyzd2let2257z00_1717;

						bool_t BgL_foreignzd2closure2258zd2_1718;

						bool_t BgL_typedzd2eq2259zd2_1719;

						bool_t BgL_tracezd2support2260zd2_1720;

						obj_t BgL_foreignzd2clausezd2suppo2261z00_1721;

						obj_t BgL_debugzd2support2262zd2_1722;

						bool_t BgL_pragmazd2support2263zd2_1723;

						bool_t BgL_tvectorzd2descrzd2suppor2264z00_1724;

						bool_t BgL_requirezd2tailc2265zd2_1725;

						obj_t BgL_registers2266z00_1726;

						obj_t BgL_pregisters2267z00_1727;

						bool_t BgL_boundzd2check2268zd2_1728;

						bool_t BgL_typezd2check2269zd2_1729;

						BgL_new2270z00_1701 = (BgL_cgenz00_bglt) (BgL_new2270z00_1526);
						BgL_language2242z00_1702 = BgL_language2242z00_1527;
						BgL_srfi02243z00_1703 = BgL_srfi02243z00_1528;
						BgL_name2244z00_1704 = BgL_name2244z00_1529;
						BgL_typed2251z00_1711 = CBOOL(BgL_typed2251z00_1536);
						BgL_heapzd2suffix2252zd2_1712 = BgL_heapzd2suffix2252zd2_1537;
						BgL_heapzd2compatible2253zd2_1713 =
							BgL_heapzd2compatible2253zd2_1538;
						BgL_callcc2254z00_1714 = CBOOL(BgL_callcc2254z00_1539);
						BgL_qualifiedzd2types2255zd2_1715 =
							CBOOL(BgL_qualifiedzd2types2255zd2_1540);
						BgL_effectzb22256zb2_1716 = CBOOL(BgL_effectzb22256zb2_1541);
						BgL_removezd2emptyzd2let2257z00_1717 =
							CBOOL(BgL_removezd2emptyzd2let2257z00_1542);
						BgL_foreignzd2closure2258zd2_1718 =
							CBOOL(BgL_foreignzd2closure2258zd2_1543);
						BgL_typedzd2eq2259zd2_1719 = CBOOL(BgL_typedzd2eq2259zd2_1544);
						BgL_tracezd2support2260zd2_1720 =
							CBOOL(BgL_tracezd2support2260zd2_1545);
						BgL_foreignzd2clausezd2suppo2261z00_1721 =
							BgL_foreignzd2clausezd2suppo2261z00_1546;
						BgL_debugzd2support2262zd2_1722 = BgL_debugzd2support2262zd2_1547;
						BgL_pragmazd2support2263zd2_1723 =
							CBOOL(BgL_pragmazd2support2263zd2_1548);
						BgL_tvectorzd2descrzd2suppor2264z00_1724 =
							CBOOL(BgL_tvectorzd2descrzd2suppor2264z00_1549);
						BgL_requirezd2tailc2265zd2_1725 =
							CBOOL(BgL_requirezd2tailc2265zd2_1550);
						BgL_registers2266z00_1726 = BgL_registers2266z00_1551;
						BgL_pregisters2267z00_1727 = BgL_pregisters2267z00_1552;
						BgL_boundzd2check2268zd2_1728 =
							CBOOL(BgL_boundzd2check2268zd2_1553);
						BgL_typezd2check2269zd2_1729 = CBOOL(BgL_typezd2check2269zd2_1554);
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_language2242z00_1730;

							obj_t BgL_srfi02243z00_1731;

							obj_t BgL_name2244z00_1732;

							obj_t BgL_externzd2variables2245zd2_1733;

							obj_t BgL_externzd2functions2246zd2_1734;

							obj_t BgL_externzd2types2247zd2_1735;

							obj_t BgL_variables2248z00_1736;

							obj_t BgL_functions2249z00_1737;

							obj_t BgL_types2250z00_1738;

							bool_t BgL_typed2251z00_1739;

							obj_t BgL_heapzd2suffix2252zd2_1740;

							obj_t BgL_heapzd2compatible2253zd2_1741;

							bool_t BgL_callcc2254z00_1742;

							bool_t BgL_qualifiedzd2types2255zd2_1743;

							bool_t BgL_effectzb22256zb2_1744;

							bool_t BgL_removezd2emptyzd2let2257z00_1745;

							bool_t BgL_foreignzd2closure2258zd2_1746;

							bool_t BgL_typedzd2eq2259zd2_1747;

							bool_t BgL_tracezd2support2260zd2_1748;

							obj_t BgL_foreignzd2clausezd2suppo2261z00_1749;

							obj_t BgL_debugzd2support2262zd2_1750;

							bool_t BgL_pragmazd2support2263zd2_1751;

							bool_t BgL_tvectorzd2descrzd2suppor2264z00_1752;

							bool_t BgL_requirezd2tailc2265zd2_1753;

							obj_t BgL_registers2266z00_1754;

							obj_t BgL_pregisters2267z00_1755;

							bool_t BgL_boundzd2check2268zd2_1756;

							bool_t BgL_typezd2check2269zd2_1757;

							BgL_language2242z00_1730 = BgL_language2242z00_1702;
							BgL_srfi02243z00_1731 = BgL_srfi02243z00_1703;
							BgL_name2244z00_1732 = BgL_name2244z00_1704;
							BgL_externzd2variables2245zd2_1733 =
								BgL_externzd2variables2245zd2_1530;
							BgL_externzd2functions2246zd2_1734 =
								BgL_externzd2functions2246zd2_1531;
							BgL_externzd2types2247zd2_1735 = BgL_externzd2types2247zd2_1532;
							BgL_variables2248z00_1736 = BgL_variables2248z00_1533;
							BgL_functions2249z00_1737 = BgL_functions2249z00_1534;
							BgL_types2250z00_1738 = BgL_types2250z00_1535;
							BgL_typed2251z00_1739 = BgL_typed2251z00_1711;
							BgL_heapzd2suffix2252zd2_1740 = BgL_heapzd2suffix2252zd2_1712;
							BgL_heapzd2compatible2253zd2_1741 =
								BgL_heapzd2compatible2253zd2_1713;
							BgL_callcc2254z00_1742 = BgL_callcc2254z00_1714;
							BgL_qualifiedzd2types2255zd2_1743 =
								BgL_qualifiedzd2types2255zd2_1715;
							BgL_effectzb22256zb2_1744 = BgL_effectzb22256zb2_1716;
							BgL_removezd2emptyzd2let2257z00_1745 =
								BgL_removezd2emptyzd2let2257z00_1717;
							BgL_foreignzd2closure2258zd2_1746 =
								BgL_foreignzd2closure2258zd2_1718;
							BgL_typedzd2eq2259zd2_1747 = BgL_typedzd2eq2259zd2_1719;
							BgL_tracezd2support2260zd2_1748 = BgL_tracezd2support2260zd2_1720;
							BgL_foreignzd2clausezd2suppo2261z00_1749 =
								BgL_foreignzd2clausezd2suppo2261z00_1721;
							BgL_debugzd2support2262zd2_1750 = BgL_debugzd2support2262zd2_1722;
							BgL_pragmazd2support2263zd2_1751 =
								BgL_pragmazd2support2263zd2_1723;
							BgL_tvectorzd2descrzd2suppor2264z00_1752 =
								BgL_tvectorzd2descrzd2suppor2264z00_1724;
							BgL_requirezd2tailc2265zd2_1753 = BgL_requirezd2tailc2265zd2_1725;
							BgL_registers2266z00_1754 = BgL_registers2266z00_1726;
							BgL_pregisters2267z00_1755 = BgL_pregisters2267z00_1727;
							BgL_boundzd2check2268zd2_1756 = BgL_boundzd2check2268zd2_1728;
							BgL_typezd2check2269zd2_1757 = BgL_typezd2check2269zd2_1729;
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_languagez00) =
								((obj_t) BgL_language2242z00_1730), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->BgL_srfi0z00) =
								((obj_t) BgL_srfi02243z00_1731), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->BgL_namez00) =
								((obj_t) BgL_name2244z00_1732), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables2245zd2_1733), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions2246zd2_1734), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types2247zd2_1735), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_variablesz00) =
								((obj_t) BgL_variables2248z00_1736), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_functionsz00) =
								((obj_t) BgL_functions2249z00_1737), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->BgL_typesz00) =
								((obj_t) BgL_types2250z00_1738), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->BgL_typedz00) =
								((bool_t) BgL_typed2251z00_1739), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix2252zd2_1740), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible2253zd2_1741), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->BgL_callccz00) =
								((bool_t) BgL_callcc2254z00_1742), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types2255zd2_1743), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb22256zb2_1744), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let2257z00_1745), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure2258zd2_1746), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq2259zd2_1747), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support2260zd2_1748), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo2261z00_1749), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support2262zd2_1750), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support2263zd2_1751), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor2264z00_1752), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc2265zd2_1753), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_registersz00) =
								((obj_t) BgL_registers2266z00_1754), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters2267z00_1755), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check2268zd2_1756), BUNSPEC);
							((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_1701))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check2269zd2_1757), BUNSPEC);
							BgL_res2771z00_1758 = BgL_new2270z00_1701;
						}
					}
					BgL_auxz00_2075 = BgL_res2771z00_1758;
				}
				return (obj_t) (BgL_auxz00_2075);
			}
		}
	}



/* %allocate-cgen */
	BGL_EXPORTED_DEF BgL_cgenz00_bglt BGl_z52allocatezd2cgenz80zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				BgL_cgenz00_bglt BgL_new2300z00_1759;

				BgL_new2300z00_1759 =
					((BgL_cgenz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cgenz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2300z00_1759),
					BGl_classzd2numzd2zz__objectz00(BGl_cgenz00zzbackend_cvmz00));
				{	/* BackEnd/cvm.scm 20 */
					BgL_objectz00_bglt BgL_auxz00_2123;

					BgL_auxz00_2123 = (BgL_objectz00_bglt) (BgL_new2300z00_1759);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2123, BFALSE);
				}
				return BgL_new2300z00_1759;
			}
		}
	}



/* _%allocate-cgen */
	obj_t BGl__z52allocatezd2cgenz80zzbackend_cvmz00(obj_t BgL_envz00_1492)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{	/* BackEnd/cvm.scm 20 */
				BgL_cgenz00_bglt BgL_auxz00_2126;

				{	/* BackEnd/cvm.scm 20 */
					BgL_cgenz00_bglt BgL_res2772z00_1763;

					{	/* BackEnd/cvm.scm 20 */
						BgL_cgenz00_bglt BgL_new2300z00_1761;

						BgL_new2300z00_1761 =
							((BgL_cgenz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cgenz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2300z00_1761),
							BGl_classzd2numzd2zz__objectz00(BGl_cgenz00zzbackend_cvmz00));
						{	/* BackEnd/cvm.scm 20 */
							BgL_objectz00_bglt BgL_auxz00_2131;

							BgL_auxz00_2131 = (BgL_objectz00_bglt) (BgL_new2300z00_1761);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2131, BFALSE);
						}
						BgL_res2772z00_1763 = BgL_new2300z00_1761;
					}
					BgL_auxz00_2126 = BgL_res2772z00_1763;
				}
				return (obj_t) (BgL_auxz00_2126);
			}
		}
	}



/* cgen-nil */
	BGL_EXPORTED_DEF BgL_cgenz00_bglt BGl_cgenzd2nilzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			if ((BGl_z52thezd2cgenzd2nilz52zzbackend_cvmz00 == BUNSPEC))
				{	/* BackEnd/cvm.scm 20 */
					{	/* BackEnd/cvm.scm 20 */
						BgL_cgenz00_bglt BgL_res2734z00_814;

						{	/* BackEnd/cvm.scm 20 */
							BgL_cgenz00_bglt BgL_new2300z00_810;

							BgL_new2300z00_810 =
								((BgL_cgenz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cgenz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2300z00_810),
								BGl_classzd2numzd2zz__objectz00(BGl_cgenz00zzbackend_cvmz00));
							{	/* BackEnd/cvm.scm 20 */
								BgL_objectz00_bglt BgL_auxz00_2141;

								BgL_auxz00_2141 = (BgL_objectz00_bglt) (BgL_new2300z00_810);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2141, BFALSE);
							}
							BgL_res2734z00_814 = BgL_new2300z00_810;
						}
						BGl_z52thezd2cgenzd2nilz52zzbackend_cvmz00 =
							(obj_t) (BgL_res2734z00_814);
					}
					{	/* BackEnd/cvm.scm 20 */
						BgL_cgenz00_bglt BgL_res2735z00_872;

						{	/* BackEnd/cvm.scm 20 */
							BgL_cgenz00_bglt BgL_new2270z00_815;

							obj_t BgL_language2242z00_816;

							obj_t BgL_srfi02243z00_817;

							obj_t BgL_heapzd2compatible2253zd2_827;

							BgL_new2270z00_815 =
								(BgL_cgenz00_bglt) (BGl_z52thezd2cgenzd2nilz52zzbackend_cvmz00);
							BgL_language2242z00_816 = CNST_TABLE_REF(((long) 4));
							BgL_srfi02243z00_817 = CNST_TABLE_REF(((long) 4));
							BgL_heapzd2compatible2253zd2_827 = CNST_TABLE_REF(((long) 4));
							{	/* BackEnd/cvm.scm 20 */
								obj_t BgL_language2242z00_844;

								obj_t BgL_srfi02243z00_845;

								obj_t BgL_name2244z00_846;

								obj_t BgL_externzd2variables2245zd2_847;

								obj_t BgL_externzd2functions2246zd2_848;

								obj_t BgL_externzd2types2247zd2_849;

								obj_t BgL_variables2248z00_850;

								obj_t BgL_functions2249z00_851;

								obj_t BgL_types2250z00_852;

								bool_t BgL_typed2251z00_853;

								obj_t BgL_heapzd2suffix2252zd2_854;

								obj_t BgL_heapzd2compatible2253zd2_855;

								bool_t BgL_callcc2254z00_856;

								bool_t BgL_qualifiedzd2types2255zd2_857;

								bool_t BgL_effectzb22256zb2_858;

								bool_t BgL_removezd2emptyzd2let2257z00_859;

								bool_t BgL_foreignzd2closure2258zd2_860;

								bool_t BgL_typedzd2eq2259zd2_861;

								bool_t BgL_tracezd2support2260zd2_862;

								obj_t BgL_foreignzd2clausezd2suppo2261z00_863;

								obj_t BgL_debugzd2support2262zd2_864;

								bool_t BgL_pragmazd2support2263zd2_865;

								bool_t BgL_tvectorzd2descrzd2suppor2264z00_866;

								bool_t BgL_requirezd2tailc2265zd2_867;

								obj_t BgL_registers2266z00_868;

								obj_t BgL_pregisters2267z00_869;

								bool_t BgL_boundzd2check2268zd2_870;

								bool_t BgL_typezd2check2269zd2_871;

								BgL_language2242z00_844 = BgL_language2242z00_816;
								BgL_srfi02243z00_845 = BgL_srfi02243z00_817;
								BgL_name2244z00_846 = BGl_string2760z00zzbackend_cvmz00;
								BgL_externzd2variables2245zd2_847 = BUNSPEC;
								BgL_externzd2functions2246zd2_848 = BUNSPEC;
								BgL_externzd2types2247zd2_849 = BUNSPEC;
								BgL_variables2248z00_850 = BUNSPEC;
								BgL_functions2249z00_851 = BUNSPEC;
								BgL_types2250z00_852 = BUNSPEC;
								BgL_typed2251z00_853 = ((bool_t) 0);
								BgL_heapzd2suffix2252zd2_854 =
									BGl_string2760z00zzbackend_cvmz00;
								BgL_heapzd2compatible2253zd2_855 =
									BgL_heapzd2compatible2253zd2_827;
								BgL_callcc2254z00_856 = ((bool_t) 0);
								BgL_qualifiedzd2types2255zd2_857 = ((bool_t) 0);
								BgL_effectzb22256zb2_858 = ((bool_t) 0);
								BgL_removezd2emptyzd2let2257z00_859 = ((bool_t) 0);
								BgL_foreignzd2closure2258zd2_860 = ((bool_t) 0);
								BgL_typedzd2eq2259zd2_861 = ((bool_t) 0);
								BgL_tracezd2support2260zd2_862 = ((bool_t) 0);
								BgL_foreignzd2clausezd2suppo2261z00_863 = BNIL;
								BgL_debugzd2support2262zd2_864 = BNIL;
								BgL_pragmazd2support2263zd2_865 = ((bool_t) 0);
								BgL_tvectorzd2descrzd2suppor2264z00_866 = ((bool_t) 0);
								BgL_requirezd2tailc2265zd2_867 = ((bool_t) 0);
								BgL_registers2266z00_868 = BNIL;
								BgL_pregisters2267z00_869 = BNIL;
								BgL_boundzd2check2268zd2_870 = ((bool_t) 0);
								BgL_typezd2check2269zd2_871 = ((bool_t) 0);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_languagez00) =
									((obj_t) BgL_language2242z00_844), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->BgL_srfi0z00) =
									((obj_t) BgL_srfi02243z00_845), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->BgL_namez00) =
									((obj_t) BgL_name2244z00_846), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_externzd2variableszd2) =
									((obj_t) BgL_externzd2variables2245zd2_847), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_externzd2functionszd2) =
									((obj_t) BgL_externzd2functions2246zd2_848), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_externzd2typeszd2) =
									((obj_t) BgL_externzd2types2247zd2_849), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_variablesz00) =
									((obj_t) BgL_variables2248z00_850), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_functionsz00) =
									((obj_t) BgL_functions2249z00_851), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->BgL_typesz00) =
									((obj_t) BgL_types2250z00_852), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->BgL_typedz00) =
									((bool_t) BgL_typed2251z00_853), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_heapzd2suffixzd2) =
									((obj_t) BgL_heapzd2suffix2252zd2_854), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_heapzd2compatiblezd2) =
									((obj_t) BgL_heapzd2compatible2253zd2_855), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_callccz00) = ((bool_t) BgL_callcc2254z00_856), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_qualifiedzd2typeszd2) =
									((bool_t) BgL_qualifiedzd2types2255zd2_857), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_effectzb2zb2) =
									((bool_t) BgL_effectzb22256zb2_858), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_removezd2emptyzd2letz00) =
									((bool_t) BgL_removezd2emptyzd2let2257z00_859), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_foreignzd2closurezd2) =
									((bool_t) BgL_foreignzd2closure2258zd2_860), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_typedzd2eqzd2) =
									((bool_t) BgL_typedzd2eq2259zd2_861), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_tracezd2supportzd2) =
									((bool_t) BgL_tracezd2support2260zd2_862), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_foreignzd2clausezd2supportz00) =
									((obj_t) BgL_foreignzd2clausezd2suppo2261z00_863), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_debugzd2supportzd2) =
									((obj_t) BgL_debugzd2support2262zd2_864), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_pragmazd2supportzd2) =
									((bool_t) BgL_pragmazd2support2263zd2_865), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_tvectorzd2descrzd2supportz00) =
									((bool_t) BgL_tvectorzd2descrzd2suppor2264z00_866), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_requirezd2tailczd2) =
									((bool_t) BgL_requirezd2tailc2265zd2_867), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_registersz00) =
									((obj_t) BgL_registers2266z00_868), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_pregistersz00) =
									((obj_t) BgL_pregisters2267z00_869), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_boundzd2checkzd2) =
									((bool_t) BgL_boundzd2check2268zd2_870), BUNSPEC);
								((((BgL_cgenz00_bglt) CREF(BgL_new2270z00_815))->
										BgL_typezd2checkzd2) =
									((bool_t) BgL_typezd2check2269zd2_871), BUNSPEC);
								BgL_res2735z00_872 = BgL_new2270z00_815;
						}}
						(obj_t) (BgL_res2735z00_872);
				}}
			else
				{	/* BackEnd/cvm.scm 20 */
					BFALSE;
				}
			return (BgL_cgenz00_bglt) (BGl_z52thezd2cgenzd2nilz52zzbackend_cvmz00);
		}
	}



/* _cgen-nil */
	obj_t BGl__cgenzd2nilzd2zzbackend_cvmz00(obj_t BgL_envz00_1493)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			return (obj_t) (BGl_cgenzd2nilzd2zzbackend_cvmz00());
		}
	}



/* sawc? */
	BGL_EXPORTED_DEF bool_t BGl_sawczf3zf3zzbackend_cvmz00(obj_t
		BgL_obj2125z00_62)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj2125z00_62,
				BGl_sawcz00zzbackend_cvmz00);
		}
	}



/* _sawc? */
	obj_t BGl__sawczf3zf3zzbackend_cvmz00(obj_t BgL_envz00_1490,
		obj_t BgL_obj2125z00_1491)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2125z00_1491,
					BGl_sawcz00zzbackend_cvmz00));
		}
	}



/* make-sawc */
	BGL_EXPORTED_DEF BgL_sawcz00_bglt BGl_makezd2sawczd2zzbackend_cvmz00(obj_t
		BgL_language1922z00_66, obj_t BgL_srfi01923z00_67, obj_t BgL_name1924z00_68,
		obj_t BgL_externzd2variables1925zd2_69,
		obj_t BgL_externzd2functions1926zd2_70, obj_t BgL_externzd2types1927zd2_71,
		obj_t BgL_variables1928z00_72, obj_t BgL_functions1929z00_73,
		obj_t BgL_types1930z00_74, bool_t BgL_typed1931z00_75,
		obj_t BgL_heapzd2suffix1932zd2_76, obj_t BgL_heapzd2compatible1933zd2_77,
		bool_t BgL_callcc1934z00_78, bool_t BgL_qualifiedzd2types1935zd2_79,
		bool_t BgL_effectzb21936zb2_80, bool_t BgL_removezd2emptyzd2let1937z00_81,
		bool_t BgL_foreignzd2closure1938zd2_82, bool_t BgL_typedzd2eq1939zd2_83,
		bool_t BgL_tracezd2support1940zd2_84,
		obj_t BgL_foreignzd2clausezd2suppo1941z00_85,
		obj_t BgL_debugzd2support1942zd2_86, bool_t BgL_pragmazd2support1943zd2_87,
		bool_t BgL_tvectorzd2descrzd2suppor1944z00_88,
		bool_t BgL_requirezd2tailc1945zd2_89, obj_t BgL_registers1946z00_90,
		obj_t BgL_pregisters1947z00_91, bool_t BgL_boundzd2check1948zd2_92,
		bool_t BgL_typezd2check1949zd2_93)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{	/* BackEnd/cvm.scm 19 */
				BgL_sawcz00_bglt BgL_new1950z00_873;

				{	/* BackEnd/cvm.scm 19 */
					BgL_sawcz00_bglt BgL_res2736z00_878;

					{	/* BackEnd/cvm.scm 19 */
						BgL_sawcz00_bglt BgL_new2010z00_874;

						BgL_new2010z00_874 =
							((BgL_sawcz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sawcz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2010z00_874),
							BGl_classzd2numzd2zz__objectz00(BGl_sawcz00zzbackend_cvmz00));
						{	/* BackEnd/cvm.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_2188;

							BgL_auxz00_2188 = (BgL_objectz00_bglt) (BgL_new2010z00_874);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2188, BFALSE);
						}
						BgL_res2736z00_878 = BgL_new2010z00_874;
					}
					BgL_new1950z00_873 = BgL_res2736z00_878;
				}
				{	/* BackEnd/cvm.scm 19 */
					BgL_sawcz00_bglt BgL_res2737z00_936;

					{	/* BackEnd/cvm.scm 19 */
						BgL_sawcz00_bglt BgL_new1980z00_879;

						BgL_new1980z00_879 = BgL_new1950z00_873;
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_language1952z00_908;

							obj_t BgL_srfi01953z00_909;

							obj_t BgL_name1954z00_910;

							obj_t BgL_externzd2variables1955zd2_911;

							obj_t BgL_externzd2functions1956zd2_912;

							obj_t BgL_externzd2types1957zd2_913;

							obj_t BgL_variables1958z00_914;

							obj_t BgL_functions1959z00_915;

							obj_t BgL_types1960z00_916;

							bool_t BgL_typed1961z00_917;

							obj_t BgL_heapzd2suffix1962zd2_918;

							obj_t BgL_heapzd2compatible1963zd2_919;

							bool_t BgL_callcc1964z00_920;

							bool_t BgL_qualifiedzd2types1965zd2_921;

							bool_t BgL_effectzb21966zb2_922;

							bool_t BgL_removezd2emptyzd2let1967z00_923;

							bool_t BgL_foreignzd2closure1968zd2_924;

							bool_t BgL_typedzd2eq1969zd2_925;

							bool_t BgL_tracezd2support1970zd2_926;

							obj_t BgL_foreignzd2clausezd2suppo1971z00_927;

							obj_t BgL_debugzd2support1972zd2_928;

							bool_t BgL_pragmazd2support1973zd2_929;

							bool_t BgL_tvectorzd2descrzd2suppor1974z00_930;

							bool_t BgL_requirezd2tailc1975zd2_931;

							obj_t BgL_registers1976z00_932;

							obj_t BgL_pregisters1977z00_933;

							bool_t BgL_boundzd2check1978zd2_934;

							bool_t BgL_typezd2check1979zd2_935;

							BgL_language1952z00_908 = BgL_language1922z00_66;
							BgL_srfi01953z00_909 = BgL_srfi01923z00_67;
							BgL_name1954z00_910 = BgL_name1924z00_68;
							BgL_externzd2variables1955zd2_911 =
								BgL_externzd2variables1925zd2_69;
							BgL_externzd2functions1956zd2_912 =
								BgL_externzd2functions1926zd2_70;
							BgL_externzd2types1957zd2_913 = BgL_externzd2types1927zd2_71;
							BgL_variables1958z00_914 = BgL_variables1928z00_72;
							BgL_functions1959z00_915 = BgL_functions1929z00_73;
							BgL_types1960z00_916 = BgL_types1930z00_74;
							BgL_typed1961z00_917 = BgL_typed1931z00_75;
							BgL_heapzd2suffix1962zd2_918 = BgL_heapzd2suffix1932zd2_76;
							BgL_heapzd2compatible1963zd2_919 =
								BgL_heapzd2compatible1933zd2_77;
							BgL_callcc1964z00_920 = BgL_callcc1934z00_78;
							BgL_qualifiedzd2types1965zd2_921 =
								BgL_qualifiedzd2types1935zd2_79;
							BgL_effectzb21966zb2_922 = BgL_effectzb21936zb2_80;
							BgL_removezd2emptyzd2let1967z00_923 =
								BgL_removezd2emptyzd2let1937z00_81;
							BgL_foreignzd2closure1968zd2_924 =
								BgL_foreignzd2closure1938zd2_82;
							BgL_typedzd2eq1969zd2_925 = BgL_typedzd2eq1939zd2_83;
							BgL_tracezd2support1970zd2_926 = BgL_tracezd2support1940zd2_84;
							BgL_foreignzd2clausezd2suppo1971z00_927 =
								BgL_foreignzd2clausezd2suppo1941z00_85;
							BgL_debugzd2support1972zd2_928 = BgL_debugzd2support1942zd2_86;
							BgL_pragmazd2support1973zd2_929 = BgL_pragmazd2support1943zd2_87;
							BgL_tvectorzd2descrzd2suppor1974z00_930 =
								BgL_tvectorzd2descrzd2suppor1944z00_88;
							BgL_requirezd2tailc1975zd2_931 = BgL_requirezd2tailc1945zd2_89;
							BgL_registers1976z00_932 = BgL_registers1946z00_90;
							BgL_pregisters1977z00_933 = BgL_pregisters1947z00_91;
							BgL_boundzd2check1978zd2_934 = BgL_boundzd2check1948zd2_92;
							BgL_typezd2check1979zd2_935 = BgL_typezd2check1949zd2_93;
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_languagez00) =
								((obj_t) BgL_language1952z00_908), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01953z00_909), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->BgL_namez00) =
								((obj_t) BgL_name1954z00_910), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1955zd2_911), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1956zd2_912), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1957zd2_913), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1958z00_914), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1959z00_915), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->BgL_typesz00) =
								((obj_t) BgL_types1960z00_916), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->BgL_typedz00) =
								((bool_t) BgL_typed1961z00_917), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1962zd2_918), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1963zd2_919), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->BgL_callccz00) =
								((bool_t) BgL_callcc1964z00_920), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1965zd2_921), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21966zb2_922), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1967z00_923), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1968zd2_924), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1969zd2_925), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1970zd2_926), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1971z00_927), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1972zd2_928), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1973zd2_929), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1974z00_930), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1975zd2_931), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_registersz00) =
								((obj_t) BgL_registers1976z00_932), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1977z00_933), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1978zd2_934), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_879))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1979zd2_935), BUNSPEC);
							BgL_res2737z00_936 = BgL_new1980z00_879;
					}} BgL_res2737z00_936;
				}
				BGl_backendzd2initializa7ez12z67zzbackend_backendz00(
					(BgL_backendz00_bglt) (BgL_new1950z00_873));
				return BgL_new1950z00_873;
			}
		}
	}



/* _make-sawc */
	obj_t BGl__makezd2sawczd2zzbackend_cvmz00(obj_t BgL_envz00_1555,
		obj_t BgL_language1922z00_1556, obj_t BgL_srfi01923z00_1557,
		obj_t BgL_name1924z00_1558, obj_t BgL_externzd2variables1925zd2_1559,
		obj_t BgL_externzd2functions1926zd2_1560,
		obj_t BgL_externzd2types1927zd2_1561, obj_t BgL_variables1928z00_1562,
		obj_t BgL_functions1929z00_1563, obj_t BgL_types1930z00_1564,
		obj_t BgL_typed1931z00_1565, obj_t BgL_heapzd2suffix1932zd2_1566,
		obj_t BgL_heapzd2compatible1933zd2_1567, obj_t BgL_callcc1934z00_1568,
		obj_t BgL_qualifiedzd2types1935zd2_1569, obj_t BgL_effectzb21936zb2_1570,
		obj_t BgL_removezd2emptyzd2let1937z00_1571,
		obj_t BgL_foreignzd2closure1938zd2_1572, obj_t BgL_typedzd2eq1939zd2_1573,
		obj_t BgL_tracezd2support1940zd2_1574,
		obj_t BgL_foreignzd2clausezd2suppo1941z00_1575,
		obj_t BgL_debugzd2support1942zd2_1576,
		obj_t BgL_pragmazd2support1943zd2_1577,
		obj_t BgL_tvectorzd2descrzd2suppor1944z00_1578,
		obj_t BgL_requirezd2tailc1945zd2_1579, obj_t BgL_registers1946z00_1580,
		obj_t BgL_pregisters1947z00_1581, obj_t BgL_boundzd2check1948zd2_1582,
		obj_t BgL_typezd2check1949zd2_1583)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			return
				(obj_t) (BGl_makezd2sawczd2zzbackend_cvmz00(BgL_language1922z00_1556,
					BgL_srfi01923z00_1557, BgL_name1924z00_1558,
					BgL_externzd2variables1925zd2_1559,
					BgL_externzd2functions1926zd2_1560, BgL_externzd2types1927zd2_1561,
					BgL_variables1928z00_1562, BgL_functions1929z00_1563,
					BgL_types1930z00_1564, CBOOL(BgL_typed1931z00_1565),
					BgL_heapzd2suffix1932zd2_1566, BgL_heapzd2compatible1933zd2_1567,
					CBOOL(BgL_callcc1934z00_1568),
					CBOOL(BgL_qualifiedzd2types1935zd2_1569),
					CBOOL(BgL_effectzb21936zb2_1570),
					CBOOL(BgL_removezd2emptyzd2let1937z00_1571),
					CBOOL(BgL_foreignzd2closure1938zd2_1572),
					CBOOL(BgL_typedzd2eq1939zd2_1573),
					CBOOL(BgL_tracezd2support1940zd2_1574),
					BgL_foreignzd2clausezd2suppo1941z00_1575,
					BgL_debugzd2support1942zd2_1576,
					CBOOL(BgL_pragmazd2support1943zd2_1577),
					CBOOL(BgL_tvectorzd2descrzd2suppor1944z00_1578),
					CBOOL(BgL_requirezd2tailc1945zd2_1579), BgL_registers1946z00_1580,
					BgL_pregisters1947z00_1581, CBOOL(BgL_boundzd2check1948zd2_1582),
					CBOOL(BgL_typezd2check1949zd2_1583)));
		}
	}



/* fill-sawc! */
	BGL_EXPORTED_DEF BgL_sawcz00_bglt
		BGl_fillzd2sawcz12zc0zzbackend_cvmz00(BgL_sawcz00_bglt BgL_new1980z00_94,
		obj_t BgL_language1952z00_95, obj_t BgL_srfi01953z00_96,
		obj_t BgL_name1954z00_97, obj_t BgL_externzd2variables1955zd2_98,
		obj_t BgL_externzd2functions1956zd2_99, obj_t BgL_externzd2types1957zd2_100,
		obj_t BgL_variables1958z00_101, obj_t BgL_functions1959z00_102,
		obj_t BgL_types1960z00_103, bool_t BgL_typed1961z00_104,
		obj_t BgL_heapzd2suffix1962zd2_105, obj_t BgL_heapzd2compatible1963zd2_106,
		bool_t BgL_callcc1964z00_107, bool_t BgL_qualifiedzd2types1965zd2_108,
		bool_t BgL_effectzb21966zb2_109, bool_t BgL_removezd2emptyzd2let1967z00_110,
		bool_t BgL_foreignzd2closure1968zd2_111, bool_t BgL_typedzd2eq1969zd2_112,
		bool_t BgL_tracezd2support1970zd2_113,
		obj_t BgL_foreignzd2clausezd2suppo1971z00_114,
		obj_t BgL_debugzd2support1972zd2_115,
		bool_t BgL_pragmazd2support1973zd2_116,
		bool_t BgL_tvectorzd2descrzd2suppor1974z00_117,
		bool_t BgL_requirezd2tailc1975zd2_118, obj_t BgL_registers1976z00_119,
		obj_t BgL_pregisters1977z00_120, bool_t BgL_boundzd2check1978zd2_121,
		bool_t BgL_typezd2check1979zd2_122)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{	/* BackEnd/cvm.scm 19 */
				obj_t BgL_language1952z00_1765;

				obj_t BgL_srfi01953z00_1766;

				obj_t BgL_name1954z00_1767;

				obj_t BgL_externzd2variables1955zd2_1768;

				obj_t BgL_externzd2functions1956zd2_1769;

				obj_t BgL_externzd2types1957zd2_1770;

				obj_t BgL_variables1958z00_1771;

				obj_t BgL_functions1959z00_1772;

				obj_t BgL_types1960z00_1773;

				bool_t BgL_typed1961z00_1774;

				obj_t BgL_heapzd2suffix1962zd2_1775;

				obj_t BgL_heapzd2compatible1963zd2_1776;

				bool_t BgL_callcc1964z00_1777;

				bool_t BgL_qualifiedzd2types1965zd2_1778;

				bool_t BgL_effectzb21966zb2_1779;

				bool_t BgL_removezd2emptyzd2let1967z00_1780;

				bool_t BgL_foreignzd2closure1968zd2_1781;

				bool_t BgL_typedzd2eq1969zd2_1782;

				bool_t BgL_tracezd2support1970zd2_1783;

				obj_t BgL_foreignzd2clausezd2suppo1971z00_1784;

				obj_t BgL_debugzd2support1972zd2_1785;

				bool_t BgL_pragmazd2support1973zd2_1786;

				bool_t BgL_tvectorzd2descrzd2suppor1974z00_1787;

				bool_t BgL_requirezd2tailc1975zd2_1788;

				obj_t BgL_registers1976z00_1789;

				obj_t BgL_pregisters1977z00_1790;

				bool_t BgL_boundzd2check1978zd2_1791;

				bool_t BgL_typezd2check1979zd2_1792;

				BgL_language1952z00_1765 = BgL_language1952z00_95;
				BgL_srfi01953z00_1766 = BgL_srfi01953z00_96;
				BgL_name1954z00_1767 = BgL_name1954z00_97;
				BgL_externzd2variables1955zd2_1768 = BgL_externzd2variables1955zd2_98;
				BgL_externzd2functions1956zd2_1769 = BgL_externzd2functions1956zd2_99;
				BgL_externzd2types1957zd2_1770 = BgL_externzd2types1957zd2_100;
				BgL_variables1958z00_1771 = BgL_variables1958z00_101;
				BgL_functions1959z00_1772 = BgL_functions1959z00_102;
				BgL_types1960z00_1773 = BgL_types1960z00_103;
				BgL_typed1961z00_1774 = BgL_typed1961z00_104;
				BgL_heapzd2suffix1962zd2_1775 = BgL_heapzd2suffix1962zd2_105;
				BgL_heapzd2compatible1963zd2_1776 = BgL_heapzd2compatible1963zd2_106;
				BgL_callcc1964z00_1777 = BgL_callcc1964z00_107;
				BgL_qualifiedzd2types1965zd2_1778 = BgL_qualifiedzd2types1965zd2_108;
				BgL_effectzb21966zb2_1779 = BgL_effectzb21966zb2_109;
				BgL_removezd2emptyzd2let1967z00_1780 =
					BgL_removezd2emptyzd2let1967z00_110;
				BgL_foreignzd2closure1968zd2_1781 = BgL_foreignzd2closure1968zd2_111;
				BgL_typedzd2eq1969zd2_1782 = BgL_typedzd2eq1969zd2_112;
				BgL_tracezd2support1970zd2_1783 = BgL_tracezd2support1970zd2_113;
				BgL_foreignzd2clausezd2suppo1971z00_1784 =
					BgL_foreignzd2clausezd2suppo1971z00_114;
				BgL_debugzd2support1972zd2_1785 = BgL_debugzd2support1972zd2_115;
				BgL_pragmazd2support1973zd2_1786 = BgL_pragmazd2support1973zd2_116;
				BgL_tvectorzd2descrzd2suppor1974z00_1787 =
					BgL_tvectorzd2descrzd2suppor1974z00_117;
				BgL_requirezd2tailc1975zd2_1788 = BgL_requirezd2tailc1975zd2_118;
				BgL_registers1976z00_1789 = BgL_registers1976z00_119;
				BgL_pregisters1977z00_1790 = BgL_pregisters1977z00_120;
				BgL_boundzd2check1978zd2_1791 = BgL_boundzd2check1978zd2_121;
				BgL_typezd2check1979zd2_1792 = BgL_typezd2check1979zd2_122;
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_languagez00) =
					((obj_t) BgL_language1952z00_1765), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01953z00_1766), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_namez00) =
					((obj_t) BgL_name1954z00_1767), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1955zd2_1768), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1956zd2_1769), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1957zd2_1770), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_variablesz00) =
					((obj_t) BgL_variables1958z00_1771), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_functionsz00) =
					((obj_t) BgL_functions1959z00_1772), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_typesz00) =
					((obj_t) BgL_types1960z00_1773), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_typedz00) =
					((bool_t) BgL_typed1961z00_1774), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1962zd2_1775), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1963zd2_1776), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_callccz00) =
					((bool_t) BgL_callcc1964z00_1777), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1965zd2_1778), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21966zb2_1779), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1967z00_1780), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1968zd2_1781), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1969zd2_1782), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1970zd2_1783), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1971z00_1784), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1972zd2_1785), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1973zd2_1786), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1974z00_1787), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->
						BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1975zd2_1788), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_registersz00) =
					((obj_t) BgL_registers1976z00_1789), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1977z00_1790), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1978zd2_1791), BUNSPEC);
				((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_94))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1979zd2_1792), BUNSPEC);
				return BgL_new1980z00_94;
			}
		}
	}



/* _fill-sawc! */
	obj_t BGl__fillzd2sawcz12zc0zzbackend_cvmz00(obj_t BgL_envz00_1584,
		obj_t BgL_new1980z00_1585, obj_t BgL_language1952z00_1586,
		obj_t BgL_srfi01953z00_1587, obj_t BgL_name1954z00_1588,
		obj_t BgL_externzd2variables1955zd2_1589,
		obj_t BgL_externzd2functions1956zd2_1590,
		obj_t BgL_externzd2types1957zd2_1591, obj_t BgL_variables1958z00_1592,
		obj_t BgL_functions1959z00_1593, obj_t BgL_types1960z00_1594,
		obj_t BgL_typed1961z00_1595, obj_t BgL_heapzd2suffix1962zd2_1596,
		obj_t BgL_heapzd2compatible1963zd2_1597, obj_t BgL_callcc1964z00_1598,
		obj_t BgL_qualifiedzd2types1965zd2_1599, obj_t BgL_effectzb21966zb2_1600,
		obj_t BgL_removezd2emptyzd2let1967z00_1601,
		obj_t BgL_foreignzd2closure1968zd2_1602, obj_t BgL_typedzd2eq1969zd2_1603,
		obj_t BgL_tracezd2support1970zd2_1604,
		obj_t BgL_foreignzd2clausezd2suppo1971z00_1605,
		obj_t BgL_debugzd2support1972zd2_1606,
		obj_t BgL_pragmazd2support1973zd2_1607,
		obj_t BgL_tvectorzd2descrzd2suppor1974z00_1608,
		obj_t BgL_requirezd2tailc1975zd2_1609, obj_t BgL_registers1976z00_1610,
		obj_t BgL_pregisters1977z00_1611, obj_t BgL_boundzd2check1978zd2_1612,
		obj_t BgL_typezd2check1979zd2_1613)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{	/* BackEnd/cvm.scm 19 */
				BgL_sawcz00_bglt BgL_auxz00_2264;

				{	/* BackEnd/cvm.scm 19 */
					BgL_sawcz00_bglt BgL_res2773z00_1850;

					{	/* BackEnd/cvm.scm 19 */
						BgL_sawcz00_bglt BgL_new1980z00_1793;

						obj_t BgL_language1952z00_1794;

						obj_t BgL_srfi01953z00_1795;

						obj_t BgL_name1954z00_1796;

						bool_t BgL_typed1961z00_1803;

						obj_t BgL_heapzd2suffix1962zd2_1804;

						obj_t BgL_heapzd2compatible1963zd2_1805;

						bool_t BgL_callcc1964z00_1806;

						bool_t BgL_qualifiedzd2types1965zd2_1807;

						bool_t BgL_effectzb21966zb2_1808;

						bool_t BgL_removezd2emptyzd2let1967z00_1809;

						bool_t BgL_foreignzd2closure1968zd2_1810;

						bool_t BgL_typedzd2eq1969zd2_1811;

						bool_t BgL_tracezd2support1970zd2_1812;

						obj_t BgL_foreignzd2clausezd2suppo1971z00_1813;

						obj_t BgL_debugzd2support1972zd2_1814;

						bool_t BgL_pragmazd2support1973zd2_1815;

						bool_t BgL_tvectorzd2descrzd2suppor1974z00_1816;

						bool_t BgL_requirezd2tailc1975zd2_1817;

						obj_t BgL_registers1976z00_1818;

						obj_t BgL_pregisters1977z00_1819;

						bool_t BgL_boundzd2check1978zd2_1820;

						bool_t BgL_typezd2check1979zd2_1821;

						BgL_new1980z00_1793 = (BgL_sawcz00_bglt) (BgL_new1980z00_1585);
						BgL_language1952z00_1794 = BgL_language1952z00_1586;
						BgL_srfi01953z00_1795 = BgL_srfi01953z00_1587;
						BgL_name1954z00_1796 = BgL_name1954z00_1588;
						BgL_typed1961z00_1803 = CBOOL(BgL_typed1961z00_1595);
						BgL_heapzd2suffix1962zd2_1804 = BgL_heapzd2suffix1962zd2_1596;
						BgL_heapzd2compatible1963zd2_1805 =
							BgL_heapzd2compatible1963zd2_1597;
						BgL_callcc1964z00_1806 = CBOOL(BgL_callcc1964z00_1598);
						BgL_qualifiedzd2types1965zd2_1807 =
							CBOOL(BgL_qualifiedzd2types1965zd2_1599);
						BgL_effectzb21966zb2_1808 = CBOOL(BgL_effectzb21966zb2_1600);
						BgL_removezd2emptyzd2let1967z00_1809 =
							CBOOL(BgL_removezd2emptyzd2let1967z00_1601);
						BgL_foreignzd2closure1968zd2_1810 =
							CBOOL(BgL_foreignzd2closure1968zd2_1602);
						BgL_typedzd2eq1969zd2_1811 = CBOOL(BgL_typedzd2eq1969zd2_1603);
						BgL_tracezd2support1970zd2_1812 =
							CBOOL(BgL_tracezd2support1970zd2_1604);
						BgL_foreignzd2clausezd2suppo1971z00_1813 =
							BgL_foreignzd2clausezd2suppo1971z00_1605;
						BgL_debugzd2support1972zd2_1814 = BgL_debugzd2support1972zd2_1606;
						BgL_pragmazd2support1973zd2_1815 =
							CBOOL(BgL_pragmazd2support1973zd2_1607);
						BgL_tvectorzd2descrzd2suppor1974z00_1816 =
							CBOOL(BgL_tvectorzd2descrzd2suppor1974z00_1608);
						BgL_requirezd2tailc1975zd2_1817 =
							CBOOL(BgL_requirezd2tailc1975zd2_1609);
						BgL_registers1976z00_1818 = BgL_registers1976z00_1610;
						BgL_pregisters1977z00_1819 = BgL_pregisters1977z00_1611;
						BgL_boundzd2check1978zd2_1820 =
							CBOOL(BgL_boundzd2check1978zd2_1612);
						BgL_typezd2check1979zd2_1821 = CBOOL(BgL_typezd2check1979zd2_1613);
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_language1952z00_1822;

							obj_t BgL_srfi01953z00_1823;

							obj_t BgL_name1954z00_1824;

							obj_t BgL_externzd2variables1955zd2_1825;

							obj_t BgL_externzd2functions1956zd2_1826;

							obj_t BgL_externzd2types1957zd2_1827;

							obj_t BgL_variables1958z00_1828;

							obj_t BgL_functions1959z00_1829;

							obj_t BgL_types1960z00_1830;

							bool_t BgL_typed1961z00_1831;

							obj_t BgL_heapzd2suffix1962zd2_1832;

							obj_t BgL_heapzd2compatible1963zd2_1833;

							bool_t BgL_callcc1964z00_1834;

							bool_t BgL_qualifiedzd2types1965zd2_1835;

							bool_t BgL_effectzb21966zb2_1836;

							bool_t BgL_removezd2emptyzd2let1967z00_1837;

							bool_t BgL_foreignzd2closure1968zd2_1838;

							bool_t BgL_typedzd2eq1969zd2_1839;

							bool_t BgL_tracezd2support1970zd2_1840;

							obj_t BgL_foreignzd2clausezd2suppo1971z00_1841;

							obj_t BgL_debugzd2support1972zd2_1842;

							bool_t BgL_pragmazd2support1973zd2_1843;

							bool_t BgL_tvectorzd2descrzd2suppor1974z00_1844;

							bool_t BgL_requirezd2tailc1975zd2_1845;

							obj_t BgL_registers1976z00_1846;

							obj_t BgL_pregisters1977z00_1847;

							bool_t BgL_boundzd2check1978zd2_1848;

							bool_t BgL_typezd2check1979zd2_1849;

							BgL_language1952z00_1822 = BgL_language1952z00_1794;
							BgL_srfi01953z00_1823 = BgL_srfi01953z00_1795;
							BgL_name1954z00_1824 = BgL_name1954z00_1796;
							BgL_externzd2variables1955zd2_1825 =
								BgL_externzd2variables1955zd2_1589;
							BgL_externzd2functions1956zd2_1826 =
								BgL_externzd2functions1956zd2_1590;
							BgL_externzd2types1957zd2_1827 = BgL_externzd2types1957zd2_1591;
							BgL_variables1958z00_1828 = BgL_variables1958z00_1592;
							BgL_functions1959z00_1829 = BgL_functions1959z00_1593;
							BgL_types1960z00_1830 = BgL_types1960z00_1594;
							BgL_typed1961z00_1831 = BgL_typed1961z00_1803;
							BgL_heapzd2suffix1962zd2_1832 = BgL_heapzd2suffix1962zd2_1804;
							BgL_heapzd2compatible1963zd2_1833 =
								BgL_heapzd2compatible1963zd2_1805;
							BgL_callcc1964z00_1834 = BgL_callcc1964z00_1806;
							BgL_qualifiedzd2types1965zd2_1835 =
								BgL_qualifiedzd2types1965zd2_1807;
							BgL_effectzb21966zb2_1836 = BgL_effectzb21966zb2_1808;
							BgL_removezd2emptyzd2let1967z00_1837 =
								BgL_removezd2emptyzd2let1967z00_1809;
							BgL_foreignzd2closure1968zd2_1838 =
								BgL_foreignzd2closure1968zd2_1810;
							BgL_typedzd2eq1969zd2_1839 = BgL_typedzd2eq1969zd2_1811;
							BgL_tracezd2support1970zd2_1840 = BgL_tracezd2support1970zd2_1812;
							BgL_foreignzd2clausezd2suppo1971z00_1841 =
								BgL_foreignzd2clausezd2suppo1971z00_1813;
							BgL_debugzd2support1972zd2_1842 = BgL_debugzd2support1972zd2_1814;
							BgL_pragmazd2support1973zd2_1843 =
								BgL_pragmazd2support1973zd2_1815;
							BgL_tvectorzd2descrzd2suppor1974z00_1844 =
								BgL_tvectorzd2descrzd2suppor1974z00_1816;
							BgL_requirezd2tailc1975zd2_1845 = BgL_requirezd2tailc1975zd2_1817;
							BgL_registers1976z00_1846 = BgL_registers1976z00_1818;
							BgL_pregisters1977z00_1847 = BgL_pregisters1977z00_1819;
							BgL_boundzd2check1978zd2_1848 = BgL_boundzd2check1978zd2_1820;
							BgL_typezd2check1979zd2_1849 = BgL_typezd2check1979zd2_1821;
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_languagez00) =
								((obj_t) BgL_language1952z00_1822), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01953z00_1823), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->BgL_namez00) =
								((obj_t) BgL_name1954z00_1824), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1955zd2_1825), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1956zd2_1826), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1957zd2_1827), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1958z00_1828), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1959z00_1829), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->BgL_typesz00) =
								((obj_t) BgL_types1960z00_1830), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->BgL_typedz00) =
								((bool_t) BgL_typed1961z00_1831), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1962zd2_1832), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1963zd2_1833), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->BgL_callccz00) =
								((bool_t) BgL_callcc1964z00_1834), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1965zd2_1835), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21966zb2_1836), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1967z00_1837), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1968zd2_1838), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1969zd2_1839), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1970zd2_1840), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1971z00_1841), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1972zd2_1842), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1973zd2_1843), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1974z00_1844), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1975zd2_1845), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_registersz00) =
								((obj_t) BgL_registers1976z00_1846), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1977z00_1847), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1978zd2_1848), BUNSPEC);
							((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_1793))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1979zd2_1849), BUNSPEC);
							BgL_res2773z00_1850 = BgL_new1980z00_1793;
						}
					}
					BgL_auxz00_2264 = BgL_res2773z00_1850;
				}
				return (obj_t) (BgL_auxz00_2264);
			}
		}
	}



/* %allocate-sawc */
	BGL_EXPORTED_DEF BgL_sawcz00_bglt BGl_z52allocatezd2sawcz80zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{	/* BackEnd/cvm.scm 19 */
				BgL_sawcz00_bglt BgL_new2010z00_1851;

				BgL_new2010z00_1851 =
					((BgL_sawcz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_sawcz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new2010z00_1851),
					BGl_classzd2numzd2zz__objectz00(BGl_sawcz00zzbackend_cvmz00));
				{	/* BackEnd/cvm.scm 19 */
					BgL_objectz00_bglt BgL_auxz00_2312;

					BgL_auxz00_2312 = (BgL_objectz00_bglt) (BgL_new2010z00_1851);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2312, BFALSE);
				}
				return BgL_new2010z00_1851;
			}
		}
	}



/* _%allocate-sawc */
	obj_t BGl__z52allocatezd2sawcz80zzbackend_cvmz00(obj_t BgL_envz00_1488)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{	/* BackEnd/cvm.scm 19 */
				BgL_sawcz00_bglt BgL_auxz00_2315;

				{	/* BackEnd/cvm.scm 19 */
					BgL_sawcz00_bglt BgL_res2774z00_1855;

					{	/* BackEnd/cvm.scm 19 */
						BgL_sawcz00_bglt BgL_new2010z00_1853;

						BgL_new2010z00_1853 =
							((BgL_sawcz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_sawcz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2010z00_1853),
							BGl_classzd2numzd2zz__objectz00(BGl_sawcz00zzbackend_cvmz00));
						{	/* BackEnd/cvm.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_2320;

							BgL_auxz00_2320 = (BgL_objectz00_bglt) (BgL_new2010z00_1853);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2320, BFALSE);
						}
						BgL_res2774z00_1855 = BgL_new2010z00_1853;
					}
					BgL_auxz00_2315 = BgL_res2774z00_1855;
				}
				return (obj_t) (BgL_auxz00_2315);
			}
		}
	}



/* sawc-nil */
	BGL_EXPORTED_DEF BgL_sawcz00_bglt BGl_sawczd2nilzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			if ((BGl_z52thezd2sawczd2nilz52zzbackend_cvmz00 == BUNSPEC))
				{	/* BackEnd/cvm.scm 19 */
					{	/* BackEnd/cvm.scm 19 */
						BgL_sawcz00_bglt BgL_res2738z00_973;

						{	/* BackEnd/cvm.scm 19 */
							BgL_sawcz00_bglt BgL_new2010z00_969;

							BgL_new2010z00_969 =
								((BgL_sawcz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_sawcz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2010z00_969),
								BGl_classzd2numzd2zz__objectz00(BGl_sawcz00zzbackend_cvmz00));
							{	/* BackEnd/cvm.scm 19 */
								BgL_objectz00_bglt BgL_auxz00_2330;

								BgL_auxz00_2330 = (BgL_objectz00_bglt) (BgL_new2010z00_969);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2330, BFALSE);
							}
							BgL_res2738z00_973 = BgL_new2010z00_969;
						}
						BGl_z52thezd2sawczd2nilz52zzbackend_cvmz00 =
							(obj_t) (BgL_res2738z00_973);
					}
					{	/* BackEnd/cvm.scm 19 */
						BgL_sawcz00_bglt BgL_res2739z00_1031;

						{	/* BackEnd/cvm.scm 19 */
							BgL_sawcz00_bglt BgL_new1980z00_974;

							obj_t BgL_language1952z00_975;

							obj_t BgL_srfi01953z00_976;

							obj_t BgL_heapzd2compatible1963zd2_986;

							BgL_new1980z00_974 =
								(BgL_sawcz00_bglt) (BGl_z52thezd2sawczd2nilz52zzbackend_cvmz00);
							BgL_language1952z00_975 = CNST_TABLE_REF(((long) 4));
							BgL_srfi01953z00_976 = CNST_TABLE_REF(((long) 4));
							BgL_heapzd2compatible1963zd2_986 = CNST_TABLE_REF(((long) 4));
							{	/* BackEnd/cvm.scm 19 */
								obj_t BgL_language1952z00_1003;

								obj_t BgL_srfi01953z00_1004;

								obj_t BgL_name1954z00_1005;

								obj_t BgL_externzd2variables1955zd2_1006;

								obj_t BgL_externzd2functions1956zd2_1007;

								obj_t BgL_externzd2types1957zd2_1008;

								obj_t BgL_variables1958z00_1009;

								obj_t BgL_functions1959z00_1010;

								obj_t BgL_types1960z00_1011;

								bool_t BgL_typed1961z00_1012;

								obj_t BgL_heapzd2suffix1962zd2_1013;

								obj_t BgL_heapzd2compatible1963zd2_1014;

								bool_t BgL_callcc1964z00_1015;

								bool_t BgL_qualifiedzd2types1965zd2_1016;

								bool_t BgL_effectzb21966zb2_1017;

								bool_t BgL_removezd2emptyzd2let1967z00_1018;

								bool_t BgL_foreignzd2closure1968zd2_1019;

								bool_t BgL_typedzd2eq1969zd2_1020;

								bool_t BgL_tracezd2support1970zd2_1021;

								obj_t BgL_foreignzd2clausezd2suppo1971z00_1022;

								obj_t BgL_debugzd2support1972zd2_1023;

								bool_t BgL_pragmazd2support1973zd2_1024;

								bool_t BgL_tvectorzd2descrzd2suppor1974z00_1025;

								bool_t BgL_requirezd2tailc1975zd2_1026;

								obj_t BgL_registers1976z00_1027;

								obj_t BgL_pregisters1977z00_1028;

								bool_t BgL_boundzd2check1978zd2_1029;

								bool_t BgL_typezd2check1979zd2_1030;

								BgL_language1952z00_1003 = BgL_language1952z00_975;
								BgL_srfi01953z00_1004 = BgL_srfi01953z00_976;
								BgL_name1954z00_1005 = BGl_string2760z00zzbackend_cvmz00;
								BgL_externzd2variables1955zd2_1006 = BUNSPEC;
								BgL_externzd2functions1956zd2_1007 = BUNSPEC;
								BgL_externzd2types1957zd2_1008 = BUNSPEC;
								BgL_variables1958z00_1009 = BUNSPEC;
								BgL_functions1959z00_1010 = BUNSPEC;
								BgL_types1960z00_1011 = BUNSPEC;
								BgL_typed1961z00_1012 = ((bool_t) 0);
								BgL_heapzd2suffix1962zd2_1013 =
									BGl_string2760z00zzbackend_cvmz00;
								BgL_heapzd2compatible1963zd2_1014 =
									BgL_heapzd2compatible1963zd2_986;
								BgL_callcc1964z00_1015 = ((bool_t) 0);
								BgL_qualifiedzd2types1965zd2_1016 = ((bool_t) 0);
								BgL_effectzb21966zb2_1017 = ((bool_t) 0);
								BgL_removezd2emptyzd2let1967z00_1018 = ((bool_t) 0);
								BgL_foreignzd2closure1968zd2_1019 = ((bool_t) 0);
								BgL_typedzd2eq1969zd2_1020 = ((bool_t) 0);
								BgL_tracezd2support1970zd2_1021 = ((bool_t) 0);
								BgL_foreignzd2clausezd2suppo1971z00_1022 = BNIL;
								BgL_debugzd2support1972zd2_1023 = BNIL;
								BgL_pragmazd2support1973zd2_1024 = ((bool_t) 0);
								BgL_tvectorzd2descrzd2suppor1974z00_1025 = ((bool_t) 0);
								BgL_requirezd2tailc1975zd2_1026 = ((bool_t) 0);
								BgL_registers1976z00_1027 = BNIL;
								BgL_pregisters1977z00_1028 = BNIL;
								BgL_boundzd2check1978zd2_1029 = ((bool_t) 0);
								BgL_typezd2check1979zd2_1030 = ((bool_t) 0);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_languagez00) =
									((obj_t) BgL_language1952z00_1003), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->BgL_srfi0z00) =
									((obj_t) BgL_srfi01953z00_1004), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->BgL_namez00) =
									((obj_t) BgL_name1954z00_1005), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_externzd2variableszd2) =
									((obj_t) BgL_externzd2variables1955zd2_1006), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_externzd2functionszd2) =
									((obj_t) BgL_externzd2functions1956zd2_1007), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_externzd2typeszd2) =
									((obj_t) BgL_externzd2types1957zd2_1008), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_variablesz00) =
									((obj_t) BgL_variables1958z00_1009), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_functionsz00) =
									((obj_t) BgL_functions1959z00_1010), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->BgL_typesz00) =
									((obj_t) BgL_types1960z00_1011), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->BgL_typedz00) =
									((bool_t) BgL_typed1961z00_1012), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_heapzd2suffixzd2) =
									((obj_t) BgL_heapzd2suffix1962zd2_1013), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_heapzd2compatiblezd2) =
									((obj_t) BgL_heapzd2compatible1963zd2_1014), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_callccz00) =
									((bool_t) BgL_callcc1964z00_1015), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_qualifiedzd2typeszd2) =
									((bool_t) BgL_qualifiedzd2types1965zd2_1016), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_effectzb2zb2) =
									((bool_t) BgL_effectzb21966zb2_1017), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_removezd2emptyzd2letz00) =
									((bool_t) BgL_removezd2emptyzd2let1967z00_1018), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_foreignzd2closurezd2) =
									((bool_t) BgL_foreignzd2closure1968zd2_1019), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_typedzd2eqzd2) =
									((bool_t) BgL_typedzd2eq1969zd2_1020), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_tracezd2supportzd2) =
									((bool_t) BgL_tracezd2support1970zd2_1021), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_foreignzd2clausezd2supportz00) =
									((obj_t) BgL_foreignzd2clausezd2suppo1971z00_1022), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_debugzd2supportzd2) =
									((obj_t) BgL_debugzd2support1972zd2_1023), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_pragmazd2supportzd2) =
									((bool_t) BgL_pragmazd2support1973zd2_1024), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_tvectorzd2descrzd2supportz00) =
									((bool_t) BgL_tvectorzd2descrzd2suppor1974z00_1025), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_requirezd2tailczd2) =
									((bool_t) BgL_requirezd2tailc1975zd2_1026), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_registersz00) =
									((obj_t) BgL_registers1976z00_1027), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_pregistersz00) =
									((obj_t) BgL_pregisters1977z00_1028), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_boundzd2checkzd2) =
									((bool_t) BgL_boundzd2check1978zd2_1029), BUNSPEC);
								((((BgL_sawcz00_bglt) CREF(BgL_new1980z00_974))->
										BgL_typezd2checkzd2) =
									((bool_t) BgL_typezd2check1979zd2_1030), BUNSPEC);
								BgL_res2739z00_1031 = BgL_new1980z00_974;
						}}
						(obj_t) (BgL_res2739z00_1031);
				}}
			else
				{	/* BackEnd/cvm.scm 19 */
					BFALSE;
				}
			return (BgL_sawcz00_bglt) (BGl_z52thezd2sawczd2nilz52zzbackend_cvmz00);
		}
	}



/* _sawc-nil */
	obj_t BGl__sawczd2nilzd2zzbackend_cvmz00(obj_t BgL_envz00_1489)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			return (obj_t) (BGl_sawczd2nilzd2zzbackend_cvmz00());
		}
	}



/* cvm? */
	BGL_EXPORTED_DEF bool_t BGl_cvmzf3zf3zzbackend_cvmz00(obj_t
		BgL_obj1835z00_123)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj1835z00_123,
				BGl_cvmz00zzbackend_cvmz00);
		}
	}



/* _cvm? */
	obj_t BGl__cvmzf3zf3zzbackend_cvmz00(obj_t BgL_envz00_1486,
		obj_t BgL_obj1835z00_1487)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj1835z00_1487,
					BGl_cvmz00zzbackend_cvmz00));
		}
	}



/* fill-cvm! */
	BGL_EXPORTED_DEF BgL_cvmz00_bglt
		BGl_fillzd2cvmz12zc0zzbackend_cvmz00(BgL_cvmz00_bglt BgL_new1804z00_124,
		obj_t BgL_language1776z00_125, obj_t BgL_srfi01777z00_126,
		obj_t BgL_name1778z00_127, obj_t BgL_externzd2variables1779zd2_128,
		obj_t BgL_externzd2functions1780zd2_129,
		obj_t BgL_externzd2types1781zd2_130, obj_t BgL_variables1782z00_131,
		obj_t BgL_functions1783z00_132, obj_t BgL_types1784z00_133,
		bool_t BgL_typed1785z00_134, obj_t BgL_heapzd2suffix1786zd2_135,
		obj_t BgL_heapzd2compatible1787zd2_136, bool_t BgL_callcc1788z00_137,
		bool_t BgL_qualifiedzd2types1789zd2_138, bool_t BgL_effectzb21790zb2_139,
		bool_t BgL_removezd2emptyzd2let1791z00_140,
		bool_t BgL_foreignzd2closure1792zd2_141, bool_t BgL_typedzd2eq1793zd2_142,
		bool_t BgL_tracezd2support1794zd2_143,
		obj_t BgL_foreignzd2clausezd2suppo1795z00_144,
		obj_t BgL_debugzd2support1796zd2_145,
		bool_t BgL_pragmazd2support1797zd2_146,
		bool_t BgL_tvectorzd2descrzd2suppor1798z00_147,
		bool_t BgL_requirezd2tailc1799zd2_148, obj_t BgL_registers1800z00_149,
		obj_t BgL_pregisters1801z00_150, bool_t BgL_boundzd2check1802zd2_151,
		bool_t BgL_typezd2check1803zd2_152)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			{	/* BackEnd/cvm.scm 18 */
				obj_t BgL_language1776z00_1857;

				obj_t BgL_srfi01777z00_1858;

				obj_t BgL_name1778z00_1859;

				obj_t BgL_externzd2variables1779zd2_1860;

				obj_t BgL_externzd2functions1780zd2_1861;

				obj_t BgL_externzd2types1781zd2_1862;

				obj_t BgL_variables1782z00_1863;

				obj_t BgL_functions1783z00_1864;

				obj_t BgL_types1784z00_1865;

				bool_t BgL_typed1785z00_1866;

				obj_t BgL_heapzd2suffix1786zd2_1867;

				obj_t BgL_heapzd2compatible1787zd2_1868;

				bool_t BgL_callcc1788z00_1869;

				bool_t BgL_qualifiedzd2types1789zd2_1870;

				bool_t BgL_effectzb21790zb2_1871;

				bool_t BgL_removezd2emptyzd2let1791z00_1872;

				bool_t BgL_foreignzd2closure1792zd2_1873;

				bool_t BgL_typedzd2eq1793zd2_1874;

				bool_t BgL_tracezd2support1794zd2_1875;

				obj_t BgL_foreignzd2clausezd2suppo1795z00_1876;

				obj_t BgL_debugzd2support1796zd2_1877;

				bool_t BgL_pragmazd2support1797zd2_1878;

				bool_t BgL_tvectorzd2descrzd2suppor1798z00_1879;

				bool_t BgL_requirezd2tailc1799zd2_1880;

				obj_t BgL_registers1800z00_1881;

				obj_t BgL_pregisters1801z00_1882;

				bool_t BgL_boundzd2check1802zd2_1883;

				bool_t BgL_typezd2check1803zd2_1884;

				BgL_language1776z00_1857 = BgL_language1776z00_125;
				BgL_srfi01777z00_1858 = BgL_srfi01777z00_126;
				BgL_name1778z00_1859 = BgL_name1778z00_127;
				BgL_externzd2variables1779zd2_1860 = BgL_externzd2variables1779zd2_128;
				BgL_externzd2functions1780zd2_1861 = BgL_externzd2functions1780zd2_129;
				BgL_externzd2types1781zd2_1862 = BgL_externzd2types1781zd2_130;
				BgL_variables1782z00_1863 = BgL_variables1782z00_131;
				BgL_functions1783z00_1864 = BgL_functions1783z00_132;
				BgL_types1784z00_1865 = BgL_types1784z00_133;
				BgL_typed1785z00_1866 = BgL_typed1785z00_134;
				BgL_heapzd2suffix1786zd2_1867 = BgL_heapzd2suffix1786zd2_135;
				BgL_heapzd2compatible1787zd2_1868 = BgL_heapzd2compatible1787zd2_136;
				BgL_callcc1788z00_1869 = BgL_callcc1788z00_137;
				BgL_qualifiedzd2types1789zd2_1870 = BgL_qualifiedzd2types1789zd2_138;
				BgL_effectzb21790zb2_1871 = BgL_effectzb21790zb2_139;
				BgL_removezd2emptyzd2let1791z00_1872 =
					BgL_removezd2emptyzd2let1791z00_140;
				BgL_foreignzd2closure1792zd2_1873 = BgL_foreignzd2closure1792zd2_141;
				BgL_typedzd2eq1793zd2_1874 = BgL_typedzd2eq1793zd2_142;
				BgL_tracezd2support1794zd2_1875 = BgL_tracezd2support1794zd2_143;
				BgL_foreignzd2clausezd2suppo1795z00_1876 =
					BgL_foreignzd2clausezd2suppo1795z00_144;
				BgL_debugzd2support1796zd2_1877 = BgL_debugzd2support1796zd2_145;
				BgL_pragmazd2support1797zd2_1878 = BgL_pragmazd2support1797zd2_146;
				BgL_tvectorzd2descrzd2suppor1798z00_1879 =
					BgL_tvectorzd2descrzd2suppor1798z00_147;
				BgL_requirezd2tailc1799zd2_1880 = BgL_requirezd2tailc1799zd2_148;
				BgL_registers1800z00_1881 = BgL_registers1800z00_149;
				BgL_pregisters1801z00_1882 = BgL_pregisters1801z00_150;
				BgL_boundzd2check1802zd2_1883 = BgL_boundzd2check1802zd2_151;
				BgL_typezd2check1803zd2_1884 = BgL_typezd2check1803zd2_152;
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_languagez00) =
					((obj_t) BgL_language1776z00_1857), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01777z00_1858), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_namez00) =
					((obj_t) BgL_name1778z00_1859), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1779zd2_1860), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1780zd2_1861), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1781zd2_1862), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_variablesz00) =
					((obj_t) BgL_variables1782z00_1863), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_functionsz00) =
					((obj_t) BgL_functions1783z00_1864), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_typesz00) =
					((obj_t) BgL_types1784z00_1865), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_typedz00) =
					((bool_t) BgL_typed1785z00_1866), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1786zd2_1867), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1787zd2_1868), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_callccz00) =
					((bool_t) BgL_callcc1788z00_1869), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1789zd2_1870), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21790zb2_1871), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1791z00_1872), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1792zd2_1873), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1793zd2_1874), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1794zd2_1875), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1795z00_1876), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1796zd2_1877), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1797zd2_1878), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1798z00_1879), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->
						BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1799zd2_1880), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_registersz00) =
					((obj_t) BgL_registers1800z00_1881), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1801z00_1882), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1802zd2_1883), BUNSPEC);
				((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_124))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1803zd2_1884), BUNSPEC);
				return BgL_new1804z00_124;
			}
		}
	}



/* _fill-cvm! */
	obj_t BGl__fillzd2cvmz12zc0zzbackend_cvmz00(obj_t BgL_envz00_1614,
		obj_t BgL_new1804z00_1615, obj_t BgL_language1776z00_1616,
		obj_t BgL_srfi01777z00_1617, obj_t BgL_name1778z00_1618,
		obj_t BgL_externzd2variables1779zd2_1619,
		obj_t BgL_externzd2functions1780zd2_1620,
		obj_t BgL_externzd2types1781zd2_1621, obj_t BgL_variables1782z00_1622,
		obj_t BgL_functions1783z00_1623, obj_t BgL_types1784z00_1624,
		obj_t BgL_typed1785z00_1625, obj_t BgL_heapzd2suffix1786zd2_1626,
		obj_t BgL_heapzd2compatible1787zd2_1627, obj_t BgL_callcc1788z00_1628,
		obj_t BgL_qualifiedzd2types1789zd2_1629, obj_t BgL_effectzb21790zb2_1630,
		obj_t BgL_removezd2emptyzd2let1791z00_1631,
		obj_t BgL_foreignzd2closure1792zd2_1632, obj_t BgL_typedzd2eq1793zd2_1633,
		obj_t BgL_tracezd2support1794zd2_1634,
		obj_t BgL_foreignzd2clausezd2suppo1795z00_1635,
		obj_t BgL_debugzd2support1796zd2_1636,
		obj_t BgL_pragmazd2support1797zd2_1637,
		obj_t BgL_tvectorzd2descrzd2suppor1798z00_1638,
		obj_t BgL_requirezd2tailc1799zd2_1639, obj_t BgL_registers1800z00_1640,
		obj_t BgL_pregisters1801z00_1641, obj_t BgL_boundzd2check1802zd2_1642,
		obj_t BgL_typezd2check1803zd2_1643)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			{	/* BackEnd/cvm.scm 18 */
				BgL_cvmz00_bglt BgL_auxz00_2401;

				{	/* BackEnd/cvm.scm 18 */
					BgL_cvmz00_bglt BgL_res2775z00_1942;

					{	/* BackEnd/cvm.scm 18 */
						BgL_cvmz00_bglt BgL_new1804z00_1885;

						obj_t BgL_language1776z00_1886;

						obj_t BgL_srfi01777z00_1887;

						obj_t BgL_name1778z00_1888;

						bool_t BgL_typed1785z00_1895;

						obj_t BgL_heapzd2suffix1786zd2_1896;

						obj_t BgL_heapzd2compatible1787zd2_1897;

						bool_t BgL_callcc1788z00_1898;

						bool_t BgL_qualifiedzd2types1789zd2_1899;

						bool_t BgL_effectzb21790zb2_1900;

						bool_t BgL_removezd2emptyzd2let1791z00_1901;

						bool_t BgL_foreignzd2closure1792zd2_1902;

						bool_t BgL_typedzd2eq1793zd2_1903;

						bool_t BgL_tracezd2support1794zd2_1904;

						obj_t BgL_foreignzd2clausezd2suppo1795z00_1905;

						obj_t BgL_debugzd2support1796zd2_1906;

						bool_t BgL_pragmazd2support1797zd2_1907;

						bool_t BgL_tvectorzd2descrzd2suppor1798z00_1908;

						bool_t BgL_requirezd2tailc1799zd2_1909;

						obj_t BgL_registers1800z00_1910;

						obj_t BgL_pregisters1801z00_1911;

						bool_t BgL_boundzd2check1802zd2_1912;

						bool_t BgL_typezd2check1803zd2_1913;

						BgL_new1804z00_1885 = (BgL_cvmz00_bglt) (BgL_new1804z00_1615);
						BgL_language1776z00_1886 = BgL_language1776z00_1616;
						BgL_srfi01777z00_1887 = BgL_srfi01777z00_1617;
						BgL_name1778z00_1888 = BgL_name1778z00_1618;
						BgL_typed1785z00_1895 = CBOOL(BgL_typed1785z00_1625);
						BgL_heapzd2suffix1786zd2_1896 = BgL_heapzd2suffix1786zd2_1626;
						BgL_heapzd2compatible1787zd2_1897 =
							BgL_heapzd2compatible1787zd2_1627;
						BgL_callcc1788z00_1898 = CBOOL(BgL_callcc1788z00_1628);
						BgL_qualifiedzd2types1789zd2_1899 =
							CBOOL(BgL_qualifiedzd2types1789zd2_1629);
						BgL_effectzb21790zb2_1900 = CBOOL(BgL_effectzb21790zb2_1630);
						BgL_removezd2emptyzd2let1791z00_1901 =
							CBOOL(BgL_removezd2emptyzd2let1791z00_1631);
						BgL_foreignzd2closure1792zd2_1902 =
							CBOOL(BgL_foreignzd2closure1792zd2_1632);
						BgL_typedzd2eq1793zd2_1903 = CBOOL(BgL_typedzd2eq1793zd2_1633);
						BgL_tracezd2support1794zd2_1904 =
							CBOOL(BgL_tracezd2support1794zd2_1634);
						BgL_foreignzd2clausezd2suppo1795z00_1905 =
							BgL_foreignzd2clausezd2suppo1795z00_1635;
						BgL_debugzd2support1796zd2_1906 = BgL_debugzd2support1796zd2_1636;
						BgL_pragmazd2support1797zd2_1907 =
							CBOOL(BgL_pragmazd2support1797zd2_1637);
						BgL_tvectorzd2descrzd2suppor1798z00_1908 =
							CBOOL(BgL_tvectorzd2descrzd2suppor1798z00_1638);
						BgL_requirezd2tailc1799zd2_1909 =
							CBOOL(BgL_requirezd2tailc1799zd2_1639);
						BgL_registers1800z00_1910 = BgL_registers1800z00_1640;
						BgL_pregisters1801z00_1911 = BgL_pregisters1801z00_1641;
						BgL_boundzd2check1802zd2_1912 =
							CBOOL(BgL_boundzd2check1802zd2_1642);
						BgL_typezd2check1803zd2_1913 = CBOOL(BgL_typezd2check1803zd2_1643);
						{	/* BackEnd/cvm.scm 18 */
							obj_t BgL_language1776z00_1914;

							obj_t BgL_srfi01777z00_1915;

							obj_t BgL_name1778z00_1916;

							obj_t BgL_externzd2variables1779zd2_1917;

							obj_t BgL_externzd2functions1780zd2_1918;

							obj_t BgL_externzd2types1781zd2_1919;

							obj_t BgL_variables1782z00_1920;

							obj_t BgL_functions1783z00_1921;

							obj_t BgL_types1784z00_1922;

							bool_t BgL_typed1785z00_1923;

							obj_t BgL_heapzd2suffix1786zd2_1924;

							obj_t BgL_heapzd2compatible1787zd2_1925;

							bool_t BgL_callcc1788z00_1926;

							bool_t BgL_qualifiedzd2types1789zd2_1927;

							bool_t BgL_effectzb21790zb2_1928;

							bool_t BgL_removezd2emptyzd2let1791z00_1929;

							bool_t BgL_foreignzd2closure1792zd2_1930;

							bool_t BgL_typedzd2eq1793zd2_1931;

							bool_t BgL_tracezd2support1794zd2_1932;

							obj_t BgL_foreignzd2clausezd2suppo1795z00_1933;

							obj_t BgL_debugzd2support1796zd2_1934;

							bool_t BgL_pragmazd2support1797zd2_1935;

							bool_t BgL_tvectorzd2descrzd2suppor1798z00_1936;

							bool_t BgL_requirezd2tailc1799zd2_1937;

							obj_t BgL_registers1800z00_1938;

							obj_t BgL_pregisters1801z00_1939;

							bool_t BgL_boundzd2check1802zd2_1940;

							bool_t BgL_typezd2check1803zd2_1941;

							BgL_language1776z00_1914 = BgL_language1776z00_1886;
							BgL_srfi01777z00_1915 = BgL_srfi01777z00_1887;
							BgL_name1778z00_1916 = BgL_name1778z00_1888;
							BgL_externzd2variables1779zd2_1917 =
								BgL_externzd2variables1779zd2_1619;
							BgL_externzd2functions1780zd2_1918 =
								BgL_externzd2functions1780zd2_1620;
							BgL_externzd2types1781zd2_1919 = BgL_externzd2types1781zd2_1621;
							BgL_variables1782z00_1920 = BgL_variables1782z00_1622;
							BgL_functions1783z00_1921 = BgL_functions1783z00_1623;
							BgL_types1784z00_1922 = BgL_types1784z00_1624;
							BgL_typed1785z00_1923 = BgL_typed1785z00_1895;
							BgL_heapzd2suffix1786zd2_1924 = BgL_heapzd2suffix1786zd2_1896;
							BgL_heapzd2compatible1787zd2_1925 =
								BgL_heapzd2compatible1787zd2_1897;
							BgL_callcc1788z00_1926 = BgL_callcc1788z00_1898;
							BgL_qualifiedzd2types1789zd2_1927 =
								BgL_qualifiedzd2types1789zd2_1899;
							BgL_effectzb21790zb2_1928 = BgL_effectzb21790zb2_1900;
							BgL_removezd2emptyzd2let1791z00_1929 =
								BgL_removezd2emptyzd2let1791z00_1901;
							BgL_foreignzd2closure1792zd2_1930 =
								BgL_foreignzd2closure1792zd2_1902;
							BgL_typedzd2eq1793zd2_1931 = BgL_typedzd2eq1793zd2_1903;
							BgL_tracezd2support1794zd2_1932 = BgL_tracezd2support1794zd2_1904;
							BgL_foreignzd2clausezd2suppo1795z00_1933 =
								BgL_foreignzd2clausezd2suppo1795z00_1905;
							BgL_debugzd2support1796zd2_1934 = BgL_debugzd2support1796zd2_1906;
							BgL_pragmazd2support1797zd2_1935 =
								BgL_pragmazd2support1797zd2_1907;
							BgL_tvectorzd2descrzd2suppor1798z00_1936 =
								BgL_tvectorzd2descrzd2suppor1798z00_1908;
							BgL_requirezd2tailc1799zd2_1937 = BgL_requirezd2tailc1799zd2_1909;
							BgL_registers1800z00_1938 = BgL_registers1800z00_1910;
							BgL_pregisters1801z00_1939 = BgL_pregisters1801z00_1911;
							BgL_boundzd2check1802zd2_1940 = BgL_boundzd2check1802zd2_1912;
							BgL_typezd2check1803zd2_1941 = BgL_typezd2check1803zd2_1913;
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_languagez00) =
								((obj_t) BgL_language1776z00_1914), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->BgL_srfi0z00) =
								((obj_t) BgL_srfi01777z00_1915), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->BgL_namez00) =
								((obj_t) BgL_name1778z00_1916), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_externzd2variableszd2) =
								((obj_t) BgL_externzd2variables1779zd2_1917), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_externzd2functionszd2) =
								((obj_t) BgL_externzd2functions1780zd2_1918), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_externzd2typeszd2) =
								((obj_t) BgL_externzd2types1781zd2_1919), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_variablesz00) =
								((obj_t) BgL_variables1782z00_1920), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_functionsz00) =
								((obj_t) BgL_functions1783z00_1921), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->BgL_typesz00) =
								((obj_t) BgL_types1784z00_1922), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->BgL_typedz00) =
								((bool_t) BgL_typed1785z00_1923), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_heapzd2suffixzd2) =
								((obj_t) BgL_heapzd2suffix1786zd2_1924), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_heapzd2compatiblezd2) =
								((obj_t) BgL_heapzd2compatible1787zd2_1925), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->BgL_callccz00) =
								((bool_t) BgL_callcc1788z00_1926), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_qualifiedzd2typeszd2) =
								((bool_t) BgL_qualifiedzd2types1789zd2_1927), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_effectzb2zb2) =
								((bool_t) BgL_effectzb21790zb2_1928), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_removezd2emptyzd2letz00) =
								((bool_t) BgL_removezd2emptyzd2let1791z00_1929), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_foreignzd2closurezd2) =
								((bool_t) BgL_foreignzd2closure1792zd2_1930), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_typedzd2eqzd2) =
								((bool_t) BgL_typedzd2eq1793zd2_1931), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_tracezd2supportzd2) =
								((bool_t) BgL_tracezd2support1794zd2_1932), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_foreignzd2clausezd2supportz00) =
								((obj_t) BgL_foreignzd2clausezd2suppo1795z00_1933), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_debugzd2supportzd2) =
								((obj_t) BgL_debugzd2support1796zd2_1934), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_pragmazd2supportzd2) =
								((bool_t) BgL_pragmazd2support1797zd2_1935), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_tvectorzd2descrzd2supportz00) =
								((bool_t) BgL_tvectorzd2descrzd2suppor1798z00_1936), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_requirezd2tailczd2) =
								((bool_t) BgL_requirezd2tailc1799zd2_1937), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_registersz00) =
								((obj_t) BgL_registers1800z00_1938), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_pregistersz00) =
								((obj_t) BgL_pregisters1801z00_1939), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_boundzd2checkzd2) =
								((bool_t) BgL_boundzd2check1802zd2_1940), BUNSPEC);
							((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1885))->
									BgL_typezd2checkzd2) =
								((bool_t) BgL_typezd2check1803zd2_1941), BUNSPEC);
							BgL_res2775z00_1942 = BgL_new1804z00_1885;
						}
					}
					BgL_auxz00_2401 = BgL_res2775z00_1942;
				}
				return (obj_t) (BgL_auxz00_2401);
			}
		}
	}



/* %allocate-cvm */
	BGL_EXPORTED_DEF BgL_cvmz00_bglt BGl_z52allocatezd2cvmz80zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			{	/* BackEnd/cvm.scm 18 */
				BgL_cvmz00_bglt BgL_new1834z00_1943;

				BgL_new1834z00_1943 =
					((BgL_cvmz00_bglt) BREF(GC_MALLOC(sizeof(struct BgL_cvmz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET(
					(BgL_objectz00_bglt) (BgL_new1834z00_1943),
					BGl_classzd2numzd2zz__objectz00(BGl_cvmz00zzbackend_cvmz00));
				{	/* BackEnd/cvm.scm 18 */
					BgL_objectz00_bglt BgL_auxz00_2449;

					BgL_auxz00_2449 = (BgL_objectz00_bglt) (BgL_new1834z00_1943);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2449, BFALSE);
				}
				return BgL_new1834z00_1943;
			}
		}
	}



/* _%allocate-cvm */
	obj_t BGl__z52allocatezd2cvmz80zzbackend_cvmz00(obj_t BgL_envz00_1644)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			{	/* BackEnd/cvm.scm 18 */
				BgL_cvmz00_bglt BgL_auxz00_2452;

				{	/* BackEnd/cvm.scm 18 */
					BgL_cvmz00_bglt BgL_res2776z00_1947;

					{	/* BackEnd/cvm.scm 18 */
						BgL_cvmz00_bglt BgL_new1834z00_1945;

						BgL_new1834z00_1945 =
							((BgL_cvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_cvmz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new1834z00_1945),
							BGl_classzd2numzd2zz__objectz00(BGl_cvmz00zzbackend_cvmz00));
						{	/* BackEnd/cvm.scm 18 */
							BgL_objectz00_bglt BgL_auxz00_2457;

							BgL_auxz00_2457 = (BgL_objectz00_bglt) (BgL_new1834z00_1945);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2457, BFALSE);
						}
						BgL_res2776z00_1947 = BgL_new1834z00_1945;
					}
					BgL_auxz00_2452 = BgL_res2776z00_1947;
				}
				return (obj_t) (BgL_auxz00_2452);
			}
		}
	}



/* cvm-nil */
	BGL_EXPORTED_DEF BgL_cvmz00_bglt BGl_cvmzd2nilzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			if ((BGl_z52thezd2cvmzd2nilz52zzbackend_cvmz00 == BUNSPEC))
				{	/* BackEnd/cvm.scm 18 */
					{	/* BackEnd/cvm.scm 18 */
						BgL_cvmz00_bglt BgL_res2740z00_1068;

						{	/* BackEnd/cvm.scm 18 */
							BgL_cvmz00_bglt BgL_new1834z00_1064;

							BgL_new1834z00_1064 =
								((BgL_cvmz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_cvmz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1834z00_1064),
								BGl_classzd2numzd2zz__objectz00(BGl_cvmz00zzbackend_cvmz00));
							{	/* BackEnd/cvm.scm 18 */
								BgL_objectz00_bglt BgL_auxz00_2467;

								BgL_auxz00_2467 = (BgL_objectz00_bglt) (BgL_new1834z00_1064);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2467, BFALSE);
							}
							BgL_res2740z00_1068 = BgL_new1834z00_1064;
						}
						BGl_z52thezd2cvmzd2nilz52zzbackend_cvmz00 =
							(obj_t) (BgL_res2740z00_1068);
					}
					{	/* BackEnd/cvm.scm 18 */
						BgL_cvmz00_bglt BgL_res2741z00_1126;

						{	/* BackEnd/cvm.scm 18 */
							BgL_cvmz00_bglt BgL_new1804z00_1069;

							obj_t BgL_language1776z00_1070;

							obj_t BgL_srfi01777z00_1071;

							obj_t BgL_heapzd2compatible1787zd2_1081;

							BgL_new1804z00_1069 =
								(BgL_cvmz00_bglt) (BGl_z52thezd2cvmzd2nilz52zzbackend_cvmz00);
							BgL_language1776z00_1070 = CNST_TABLE_REF(((long) 4));
							BgL_srfi01777z00_1071 = CNST_TABLE_REF(((long) 4));
							BgL_heapzd2compatible1787zd2_1081 = CNST_TABLE_REF(((long) 4));
							{	/* BackEnd/cvm.scm 18 */
								obj_t BgL_language1776z00_1098;

								obj_t BgL_srfi01777z00_1099;

								obj_t BgL_name1778z00_1100;

								obj_t BgL_externzd2variables1779zd2_1101;

								obj_t BgL_externzd2functions1780zd2_1102;

								obj_t BgL_externzd2types1781zd2_1103;

								obj_t BgL_variables1782z00_1104;

								obj_t BgL_functions1783z00_1105;

								obj_t BgL_types1784z00_1106;

								bool_t BgL_typed1785z00_1107;

								obj_t BgL_heapzd2suffix1786zd2_1108;

								obj_t BgL_heapzd2compatible1787zd2_1109;

								bool_t BgL_callcc1788z00_1110;

								bool_t BgL_qualifiedzd2types1789zd2_1111;

								bool_t BgL_effectzb21790zb2_1112;

								bool_t BgL_removezd2emptyzd2let1791z00_1113;

								bool_t BgL_foreignzd2closure1792zd2_1114;

								bool_t BgL_typedzd2eq1793zd2_1115;

								bool_t BgL_tracezd2support1794zd2_1116;

								obj_t BgL_foreignzd2clausezd2suppo1795z00_1117;

								obj_t BgL_debugzd2support1796zd2_1118;

								bool_t BgL_pragmazd2support1797zd2_1119;

								bool_t BgL_tvectorzd2descrzd2suppor1798z00_1120;

								bool_t BgL_requirezd2tailc1799zd2_1121;

								obj_t BgL_registers1800z00_1122;

								obj_t BgL_pregisters1801z00_1123;

								bool_t BgL_boundzd2check1802zd2_1124;

								bool_t BgL_typezd2check1803zd2_1125;

								BgL_language1776z00_1098 = BgL_language1776z00_1070;
								BgL_srfi01777z00_1099 = BgL_srfi01777z00_1071;
								BgL_name1778z00_1100 = BGl_string2760z00zzbackend_cvmz00;
								BgL_externzd2variables1779zd2_1101 = BUNSPEC;
								BgL_externzd2functions1780zd2_1102 = BUNSPEC;
								BgL_externzd2types1781zd2_1103 = BUNSPEC;
								BgL_variables1782z00_1104 = BUNSPEC;
								BgL_functions1783z00_1105 = BUNSPEC;
								BgL_types1784z00_1106 = BUNSPEC;
								BgL_typed1785z00_1107 = ((bool_t) 0);
								BgL_heapzd2suffix1786zd2_1108 =
									BGl_string2760z00zzbackend_cvmz00;
								BgL_heapzd2compatible1787zd2_1109 =
									BgL_heapzd2compatible1787zd2_1081;
								BgL_callcc1788z00_1110 = ((bool_t) 0);
								BgL_qualifiedzd2types1789zd2_1111 = ((bool_t) 0);
								BgL_effectzb21790zb2_1112 = ((bool_t) 0);
								BgL_removezd2emptyzd2let1791z00_1113 = ((bool_t) 0);
								BgL_foreignzd2closure1792zd2_1114 = ((bool_t) 0);
								BgL_typedzd2eq1793zd2_1115 = ((bool_t) 0);
								BgL_tracezd2support1794zd2_1116 = ((bool_t) 0);
								BgL_foreignzd2clausezd2suppo1795z00_1117 = BNIL;
								BgL_debugzd2support1796zd2_1118 = BNIL;
								BgL_pragmazd2support1797zd2_1119 = ((bool_t) 0);
								BgL_tvectorzd2descrzd2suppor1798z00_1120 = ((bool_t) 0);
								BgL_requirezd2tailc1799zd2_1121 = ((bool_t) 0);
								BgL_registers1800z00_1122 = BNIL;
								BgL_pregisters1801z00_1123 = BNIL;
								BgL_boundzd2check1802zd2_1124 = ((bool_t) 0);
								BgL_typezd2check1803zd2_1125 = ((bool_t) 0);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_languagez00) =
									((obj_t) BgL_language1776z00_1098), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->BgL_srfi0z00) =
									((obj_t) BgL_srfi01777z00_1099), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->BgL_namez00) =
									((obj_t) BgL_name1778z00_1100), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_externzd2variableszd2) =
									((obj_t) BgL_externzd2variables1779zd2_1101), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_externzd2functionszd2) =
									((obj_t) BgL_externzd2functions1780zd2_1102), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_externzd2typeszd2) =
									((obj_t) BgL_externzd2types1781zd2_1103), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_variablesz00) =
									((obj_t) BgL_variables1782z00_1104), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_functionsz00) =
									((obj_t) BgL_functions1783z00_1105), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->BgL_typesz00) =
									((obj_t) BgL_types1784z00_1106), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->BgL_typedz00) =
									((bool_t) BgL_typed1785z00_1107), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_heapzd2suffixzd2) =
									((obj_t) BgL_heapzd2suffix1786zd2_1108), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_heapzd2compatiblezd2) =
									((obj_t) BgL_heapzd2compatible1787zd2_1109), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_callccz00) =
									((bool_t) BgL_callcc1788z00_1110), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_qualifiedzd2typeszd2) =
									((bool_t) BgL_qualifiedzd2types1789zd2_1111), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_effectzb2zb2) =
									((bool_t) BgL_effectzb21790zb2_1112), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_removezd2emptyzd2letz00) =
									((bool_t) BgL_removezd2emptyzd2let1791z00_1113), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_foreignzd2closurezd2) =
									((bool_t) BgL_foreignzd2closure1792zd2_1114), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_typedzd2eqzd2) =
									((bool_t) BgL_typedzd2eq1793zd2_1115), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_tracezd2supportzd2) =
									((bool_t) BgL_tracezd2support1794zd2_1116), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_foreignzd2clausezd2supportz00) =
									((obj_t) BgL_foreignzd2clausezd2suppo1795z00_1117), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_debugzd2supportzd2) =
									((obj_t) BgL_debugzd2support1796zd2_1118), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_pragmazd2supportzd2) =
									((bool_t) BgL_pragmazd2support1797zd2_1119), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_tvectorzd2descrzd2supportz00) =
									((bool_t) BgL_tvectorzd2descrzd2suppor1798z00_1120), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_requirezd2tailczd2) =
									((bool_t) BgL_requirezd2tailc1799zd2_1121), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_registersz00) =
									((obj_t) BgL_registers1800z00_1122), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_pregistersz00) =
									((obj_t) BgL_pregisters1801z00_1123), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_boundzd2checkzd2) =
									((bool_t) BgL_boundzd2check1802zd2_1124), BUNSPEC);
								((((BgL_cvmz00_bglt) CREF(BgL_new1804z00_1069))->
										BgL_typezd2checkzd2) =
									((bool_t) BgL_typezd2check1803zd2_1125), BUNSPEC);
								BgL_res2741z00_1126 = BgL_new1804z00_1069;
						}}
						(obj_t) (BgL_res2741z00_1126);
				}}
			else
				{	/* BackEnd/cvm.scm 18 */
					BFALSE;
				}
			return (BgL_cvmz00_bglt) (BGl_z52thezd2cvmzd2nilz52zzbackend_cvmz00);
		}
	}



/* _cvm-nil */
	obj_t BGl__cvmzd2nilzd2zzbackend_cvmz00(obj_t BgL_envz00_1485)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 18 */
			return (obj_t) (BGl_cvmzd2nilzd2zzbackend_cvmz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_cgenz00zzbackend_cvmz00, BGl_proc2761z00zzbackend_cvmz00,
				BGl_string2762z00zzbackend_cvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_cgenz00zzbackend_cvmz00, BGl_proc2763z00zzbackend_cvmz00,
				BGl_string2764z00zzbackend_cvmz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_sawcz00zzbackend_cvmz00, BGl_proc2765z00zzbackend_cvmz00,
				BGl_string2762z00zzbackend_cvmz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_sawcz00zzbackend_cvmz00, BGl_proc2766z00zzbackend_cvmz00,
				BGl_string2764z00zzbackend_cvmz00);
		}
	}



/* struct+object->objec2426 */
	obj_t BGl_structzb2objectzd2ze3objec2426z83zzbackend_cvmz00(obj_t
		BgL_envz00_1649, obj_t BgL_oz00_1650, obj_t BgL_sz00_1651)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{
				BgL_sawcz00_bglt BgL_oz00_679;

				obj_t BgL_sz00_680;

				{	/* BackEnd/cvm.scm 19 */
					BgL_sawcz00_bglt BgL_auxz00_2511;

					BgL_oz00_679 = (BgL_sawcz00_bglt) (BgL_oz00_1650);
					BgL_sz00_680 = BgL_sz00_1651;
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2730z00_683;

						BgL_arg2730z00_683 = STRUCT_REF(BgL_sz00_680, (int) (((long) 0)));
						{	/* BackEnd/cvm.scm 19 */
							BgL_objectz00_bglt BgL_auxz00_2514;

							BgL_auxz00_2514 = (BgL_objectz00_bglt) (BgL_oz00_679);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2514, BgL_arg2730z00_683);
					}}
					{
						obj_t BgL_auxz00_2517;

						BgL_auxz00_2517 = STRUCT_REF(BgL_sz00_680, (int) (((long) 1)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_languagez00) =
							((obj_t) BgL_auxz00_2517), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2521;

						BgL_auxz00_2521 = STRUCT_REF(BgL_sz00_680, (int) (((long) 2)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_srfi0z00) =
							((obj_t) BgL_auxz00_2521), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2525;

						BgL_auxz00_2525 = STRUCT_REF(BgL_sz00_680, (int) (((long) 3)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_namez00) =
							((obj_t) BgL_auxz00_2525), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2529;

						BgL_auxz00_2529 = STRUCT_REF(BgL_sz00_680, (int) (((long) 4)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_externzd2variableszd2) =
							((obj_t) BgL_auxz00_2529), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2533;

						BgL_auxz00_2533 = STRUCT_REF(BgL_sz00_680, (int) (((long) 5)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_externzd2functionszd2) =
							((obj_t) BgL_auxz00_2533), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2537;

						BgL_auxz00_2537 = STRUCT_REF(BgL_sz00_680, (int) (((long) 6)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_externzd2typeszd2) =
							((obj_t) BgL_auxz00_2537), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2541;

						BgL_auxz00_2541 = STRUCT_REF(BgL_sz00_680, (int) (((long) 7)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_variablesz00) =
							((obj_t) BgL_auxz00_2541), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2545;

						BgL_auxz00_2545 = STRUCT_REF(BgL_sz00_680, (int) (((long) 8)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_functionsz00) =
							((obj_t) BgL_auxz00_2545), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2549;

						BgL_auxz00_2549 = STRUCT_REF(BgL_sz00_680, (int) (((long) 9)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_typesz00) =
							((obj_t) BgL_auxz00_2549), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2553;

						BgL_auxz00_2553 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 10))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_typedz00) =
							((bool_t) BgL_auxz00_2553), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2558;

						BgL_auxz00_2558 = STRUCT_REF(BgL_sz00_680, (int) (((long) 11)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_heapzd2suffixzd2) =
							((obj_t) BgL_auxz00_2558), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2562;

						BgL_auxz00_2562 = STRUCT_REF(BgL_sz00_680, (int) (((long) 12)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_heapzd2compatiblezd2) = ((obj_t) BgL_auxz00_2562), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2566;

						BgL_auxz00_2566 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 13))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_callccz00) =
							((bool_t) BgL_auxz00_2566), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2571;

						BgL_auxz00_2571 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 14))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_qualifiedzd2typeszd2) =
							((bool_t) BgL_auxz00_2571), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2576;

						BgL_auxz00_2576 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 15))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_effectzb2zb2) =
							((bool_t) BgL_auxz00_2576), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2581;

						BgL_auxz00_2581 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 16))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_removezd2emptyzd2letz00) =
							((bool_t) BgL_auxz00_2581), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2586;

						BgL_auxz00_2586 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 17))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_foreignzd2closurezd2) =
							((bool_t) BgL_auxz00_2586), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2591;

						BgL_auxz00_2591 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 18))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_typedzd2eqzd2) =
							((bool_t) BgL_auxz00_2591), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2596;

						BgL_auxz00_2596 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 19))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_tracezd2supportzd2) =
							((bool_t) BgL_auxz00_2596), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2601;

						BgL_auxz00_2601 = STRUCT_REF(BgL_sz00_680, (int) (((long) 20)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_foreignzd2clausezd2supportz00) =
							((obj_t) BgL_auxz00_2601), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2605;

						BgL_auxz00_2605 = STRUCT_REF(BgL_sz00_680, (int) (((long) 21)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_debugzd2supportzd2) =
							((obj_t) BgL_auxz00_2605), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2609;

						BgL_auxz00_2609 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 22))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_pragmazd2supportzd2) = ((bool_t) BgL_auxz00_2609), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2614;

						BgL_auxz00_2614 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 23))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->
								BgL_tvectorzd2descrzd2supportz00) =
							((bool_t) BgL_auxz00_2614), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2619;

						BgL_auxz00_2619 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 24))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_requirezd2tailczd2) =
							((bool_t) BgL_auxz00_2619), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2624;

						BgL_auxz00_2624 = STRUCT_REF(BgL_sz00_680, (int) (((long) 25)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_registersz00) =
							((obj_t) BgL_auxz00_2624), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2628;

						BgL_auxz00_2628 = STRUCT_REF(BgL_sz00_680, (int) (((long) 26)));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_pregistersz00) =
							((obj_t) BgL_auxz00_2628), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2632;

						BgL_auxz00_2632 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 27))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_boundzd2checkzd2) =
							((bool_t) BgL_auxz00_2632), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2637;

						BgL_auxz00_2637 =
							CBOOL(STRUCT_REF(BgL_sz00_680, (int) (((long) 28))));
						((((BgL_sawcz00_bglt) CREF(BgL_oz00_679))->BgL_typezd2checkzd2) =
							((bool_t) BgL_auxz00_2637), BUNSPEC);
					}
					BgL_auxz00_2511 = BgL_oz00_679;
					return (obj_t) (BgL_auxz00_2511);
				}
			}
		}
	}



/* object->struct-sawc2424 */
	obj_t BGl_objectzd2ze3structzd2sawc2424ze3zzbackend_cvmz00(obj_t
		BgL_envz00_1652, obj_t BgL_obj2011z00_1653)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 19 */
			{
				BgL_sawcz00_bglt BgL_obj2011z00_617;

				BgL_obj2011z00_617 = (BgL_sawcz00_bglt) (BgL_obj2011z00_1653);
				{	/* BackEnd/cvm.scm 19 */
					obj_t BgL_res2012z00_620;

					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_keyz00_1303;

						BgL_keyz00_1303 = CNST_TABLE_REF(((long) 1));
						BgL_res2012z00_620 =
							make_struct(BgL_keyz00_1303, (int) (((long) 29)), BUNSPEC);
					}
					{	/* BackEnd/cvm.scm 19 */
						int BgL_auxz00_2647;

						BgL_auxz00_2647 = (int) (((long) 0));
						STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2647, BFALSE);
					}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2672z00_622;

						{
							BgL_backendz00_bglt BgL_auxz00_2650;

							BgL_auxz00_2650 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2672z00_622 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2650))->
								BgL_languagez00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2653;

							BgL_auxz00_2653 = (int) (((long) 1));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2653,
								BgL_arg2672z00_622);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2674z00_624;

						{
							BgL_backendz00_bglt BgL_auxz00_2656;

							BgL_auxz00_2656 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2674z00_624 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2656))->BgL_srfi0z00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2659;

							BgL_auxz00_2659 = (int) (((long) 2));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2659,
								BgL_arg2674z00_624);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2676z00_626;

						{
							BgL_backendz00_bglt BgL_auxz00_2662;

							BgL_auxz00_2662 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2676z00_626 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2662))->BgL_namez00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2665;

							BgL_auxz00_2665 = (int) (((long) 3));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2665,
								BgL_arg2676z00_626);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2678z00_628;

						{
							BgL_backendz00_bglt BgL_auxz00_2668;

							BgL_auxz00_2668 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2678z00_628 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2668))->
								BgL_externzd2variableszd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2671;

							BgL_auxz00_2671 = (int) (((long) 4));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2671,
								BgL_arg2678z00_628);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2680z00_630;

						{
							BgL_backendz00_bglt BgL_auxz00_2674;

							BgL_auxz00_2674 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2680z00_630 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2674))->
								BgL_externzd2functionszd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2677;

							BgL_auxz00_2677 = (int) (((long) 5));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2677,
								BgL_arg2680z00_630);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2682z00_632;

						{
							BgL_backendz00_bglt BgL_auxz00_2680;

							BgL_auxz00_2680 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2682z00_632 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2680))->
								BgL_externzd2typeszd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2683;

							BgL_auxz00_2683 = (int) (((long) 6));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2683,
								BgL_arg2682z00_632);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2684z00_634;

						{
							BgL_backendz00_bglt BgL_auxz00_2686;

							BgL_auxz00_2686 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2684z00_634 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2686))->
								BgL_variablesz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2689;

							BgL_auxz00_2689 = (int) (((long) 7));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2689,
								BgL_arg2684z00_634);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2686z00_636;

						{
							BgL_backendz00_bglt BgL_auxz00_2692;

							BgL_auxz00_2692 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2686z00_636 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2692))->
								BgL_functionsz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2695;

							BgL_auxz00_2695 = (int) (((long) 8));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2695,
								BgL_arg2686z00_636);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2688z00_638;

						{
							BgL_backendz00_bglt BgL_auxz00_2698;

							BgL_auxz00_2698 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2688z00_638 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2698))->BgL_typesz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2701;

							BgL_auxz00_2701 = (int) (((long) 9));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2701,
								BgL_arg2688z00_638);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2690z00_640;

						{
							BgL_backendz00_bglt BgL_auxz00_2704;

							BgL_auxz00_2704 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2690z00_640 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2704))->BgL_typedz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2709;

							int BgL_auxz00_2707;

							BgL_auxz00_2709 = BBOOL(BgL_arg2690z00_640);
							BgL_auxz00_2707 = (int) (((long) 10));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2707, BgL_auxz00_2709);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2692z00_642;

						{
							BgL_backendz00_bglt BgL_auxz00_2712;

							BgL_auxz00_2712 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2692z00_642 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2712))->
								BgL_heapzd2suffixzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2715;

							BgL_auxz00_2715 = (int) (((long) 11));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2715,
								BgL_arg2692z00_642);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2694z00_644;

						{
							BgL_backendz00_bglt BgL_auxz00_2718;

							BgL_auxz00_2718 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2694z00_644 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2718))->
								BgL_heapzd2compatiblezd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2721;

							BgL_auxz00_2721 = (int) (((long) 12));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2721,
								BgL_arg2694z00_644);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2696z00_646;

						{
							BgL_backendz00_bglt BgL_auxz00_2724;

							BgL_auxz00_2724 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2696z00_646 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2724))->BgL_callccz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2729;

							int BgL_auxz00_2727;

							BgL_auxz00_2729 = BBOOL(BgL_arg2696z00_646);
							BgL_auxz00_2727 = (int) (((long) 13));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2727, BgL_auxz00_2729);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2698z00_648;

						{
							BgL_backendz00_bglt BgL_auxz00_2732;

							BgL_auxz00_2732 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2698z00_648 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2732))->
								BgL_qualifiedzd2typeszd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2737;

							int BgL_auxz00_2735;

							BgL_auxz00_2737 = BBOOL(BgL_arg2698z00_648);
							BgL_auxz00_2735 = (int) (((long) 14));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2735, BgL_auxz00_2737);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2700z00_650;

						{
							BgL_backendz00_bglt BgL_auxz00_2740;

							BgL_auxz00_2740 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2700z00_650 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2740))->
								BgL_effectzb2zb2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2745;

							int BgL_auxz00_2743;

							BgL_auxz00_2745 = BBOOL(BgL_arg2700z00_650);
							BgL_auxz00_2743 = (int) (((long) 15));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2743, BgL_auxz00_2745);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2702z00_652;

						{
							BgL_backendz00_bglt BgL_auxz00_2748;

							BgL_auxz00_2748 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2702z00_652 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2748))->
								BgL_removezd2emptyzd2letz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2753;

							int BgL_auxz00_2751;

							BgL_auxz00_2753 = BBOOL(BgL_arg2702z00_652);
							BgL_auxz00_2751 = (int) (((long) 16));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2751, BgL_auxz00_2753);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2704z00_654;

						{
							BgL_backendz00_bglt BgL_auxz00_2756;

							BgL_auxz00_2756 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2704z00_654 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2756))->
								BgL_foreignzd2closurezd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2761;

							int BgL_auxz00_2759;

							BgL_auxz00_2761 = BBOOL(BgL_arg2704z00_654);
							BgL_auxz00_2759 = (int) (((long) 17));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2759, BgL_auxz00_2761);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2706z00_656;

						{
							BgL_backendz00_bglt BgL_auxz00_2764;

							BgL_auxz00_2764 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2706z00_656 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2764))->
								BgL_typedzd2eqzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2769;

							int BgL_auxz00_2767;

							BgL_auxz00_2769 = BBOOL(BgL_arg2706z00_656);
							BgL_auxz00_2767 = (int) (((long) 18));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2767, BgL_auxz00_2769);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2708z00_658;

						{
							BgL_backendz00_bglt BgL_auxz00_2772;

							BgL_auxz00_2772 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2708z00_658 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2772))->
								BgL_tracezd2supportzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2777;

							int BgL_auxz00_2775;

							BgL_auxz00_2777 = BBOOL(BgL_arg2708z00_658);
							BgL_auxz00_2775 = (int) (((long) 19));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2775, BgL_auxz00_2777);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2710z00_660;

						{
							BgL_backendz00_bglt BgL_auxz00_2780;

							BgL_auxz00_2780 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2710z00_660 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2780))->
								BgL_foreignzd2clausezd2supportz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2783;

							BgL_auxz00_2783 = (int) (((long) 20));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2783,
								BgL_arg2710z00_660);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2712z00_662;

						{
							BgL_backendz00_bglt BgL_auxz00_2786;

							BgL_auxz00_2786 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2712z00_662 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2786))->
								BgL_debugzd2supportzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2789;

							BgL_auxz00_2789 = (int) (((long) 21));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2789,
								BgL_arg2712z00_662);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2714z00_664;

						{
							BgL_backendz00_bglt BgL_auxz00_2792;

							BgL_auxz00_2792 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2714z00_664 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2792))->
								BgL_pragmazd2supportzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2797;

							int BgL_auxz00_2795;

							BgL_auxz00_2797 = BBOOL(BgL_arg2714z00_664);
							BgL_auxz00_2795 = (int) (((long) 22));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2795, BgL_auxz00_2797);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2717z00_666;

						{
							BgL_backendz00_bglt BgL_auxz00_2800;

							BgL_auxz00_2800 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2717z00_666 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2800))->
								BgL_tvectorzd2descrzd2supportz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2805;

							int BgL_auxz00_2803;

							BgL_auxz00_2805 = BBOOL(BgL_arg2717z00_666);
							BgL_auxz00_2803 = (int) (((long) 23));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2803, BgL_auxz00_2805);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2719z00_668;

						{
							BgL_backendz00_bglt BgL_auxz00_2808;

							BgL_auxz00_2808 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2719z00_668 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2808))->
								BgL_requirezd2tailczd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2813;

							int BgL_auxz00_2811;

							BgL_auxz00_2813 = BBOOL(BgL_arg2719z00_668);
							BgL_auxz00_2811 = (int) (((long) 24));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2811, BgL_auxz00_2813);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2721z00_670;

						{
							BgL_backendz00_bglt BgL_auxz00_2816;

							BgL_auxz00_2816 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2721z00_670 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2816))->
								BgL_registersz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2819;

							BgL_auxz00_2819 = (int) (((long) 25));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2819,
								BgL_arg2721z00_670);
					}}
					{	/* BackEnd/cvm.scm 19 */
						obj_t BgL_arg2724z00_672;

						{
							BgL_backendz00_bglt BgL_auxz00_2822;

							BgL_auxz00_2822 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2724z00_672 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2822))->
								BgL_pregistersz00);
						}
						{	/* BackEnd/cvm.scm 19 */
							int BgL_auxz00_2825;

							BgL_auxz00_2825 = (int) (((long) 26));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2825,
								BgL_arg2724z00_672);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2726z00_674;

						{
							BgL_backendz00_bglt BgL_auxz00_2828;

							BgL_auxz00_2828 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2726z00_674 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2828))->
								BgL_boundzd2checkzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2833;

							int BgL_auxz00_2831;

							BgL_auxz00_2833 = BBOOL(BgL_arg2726z00_674);
							BgL_auxz00_2831 = (int) (((long) 27));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2831, BgL_auxz00_2833);
					}}
					{	/* BackEnd/cvm.scm 19 */
						bool_t BgL_arg2728z00_676;

						{
							BgL_backendz00_bglt BgL_auxz00_2836;

							BgL_auxz00_2836 = (BgL_backendz00_bglt) (BgL_obj2011z00_617);
							BgL_arg2728z00_676 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2836))->
								BgL_typezd2checkzd2);
						}
						{	/* BackEnd/cvm.scm 19 */
							obj_t BgL_auxz00_2841;

							int BgL_auxz00_2839;

							BgL_auxz00_2841 = BBOOL(BgL_arg2728z00_676);
							BgL_auxz00_2839 = (int) (((long) 28));
							STRUCT_SET(BgL_res2012z00_620, BgL_auxz00_2839, BgL_auxz00_2841);
					}}
					return BgL_res2012z00_620;
				}
			}
		}
	}



/* struct+object->objec2422 */
	obj_t BGl_structzb2objectzd2ze3objec2422z83zzbackend_cvmz00(obj_t
		BgL_envz00_1654, obj_t BgL_oz00_1655, obj_t BgL_sz00_1656)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{
				BgL_cgenz00_bglt BgL_oz00_582;

				obj_t BgL_sz00_583;

				{	/* BackEnd/cvm.scm 20 */
					BgL_cgenz00_bglt BgL_auxz00_2845;

					BgL_oz00_582 = (BgL_cgenz00_bglt) (BgL_oz00_1655);
					BgL_sz00_583 = BgL_sz00_1656;
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2669z00_586;

						BgL_arg2669z00_586 = STRUCT_REF(BgL_sz00_583, (int) (((long) 0)));
						{	/* BackEnd/cvm.scm 20 */
							BgL_objectz00_bglt BgL_auxz00_2848;

							BgL_auxz00_2848 = (BgL_objectz00_bglt) (BgL_oz00_582);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2848, BgL_arg2669z00_586);
					}}
					{
						obj_t BgL_auxz00_2851;

						BgL_auxz00_2851 = STRUCT_REF(BgL_sz00_583, (int) (((long) 1)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_languagez00) =
							((obj_t) BgL_auxz00_2851), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2855;

						BgL_auxz00_2855 = STRUCT_REF(BgL_sz00_583, (int) (((long) 2)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_srfi0z00) =
							((obj_t) BgL_auxz00_2855), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2859;

						BgL_auxz00_2859 = STRUCT_REF(BgL_sz00_583, (int) (((long) 3)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_namez00) =
							((obj_t) BgL_auxz00_2859), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2863;

						BgL_auxz00_2863 = STRUCT_REF(BgL_sz00_583, (int) (((long) 4)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_externzd2variableszd2) =
							((obj_t) BgL_auxz00_2863), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2867;

						BgL_auxz00_2867 = STRUCT_REF(BgL_sz00_583, (int) (((long) 5)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_externzd2functionszd2) =
							((obj_t) BgL_auxz00_2867), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2871;

						BgL_auxz00_2871 = STRUCT_REF(BgL_sz00_583, (int) (((long) 6)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_externzd2typeszd2) =
							((obj_t) BgL_auxz00_2871), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2875;

						BgL_auxz00_2875 = STRUCT_REF(BgL_sz00_583, (int) (((long) 7)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_variablesz00) =
							((obj_t) BgL_auxz00_2875), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2879;

						BgL_auxz00_2879 = STRUCT_REF(BgL_sz00_583, (int) (((long) 8)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_functionsz00) =
							((obj_t) BgL_auxz00_2879), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2883;

						BgL_auxz00_2883 = STRUCT_REF(BgL_sz00_583, (int) (((long) 9)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_typesz00) =
							((obj_t) BgL_auxz00_2883), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2887;

						BgL_auxz00_2887 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 10))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_typedz00) =
							((bool_t) BgL_auxz00_2887), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2892;

						BgL_auxz00_2892 = STRUCT_REF(BgL_sz00_583, (int) (((long) 11)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_heapzd2suffixzd2) =
							((obj_t) BgL_auxz00_2892), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2896;

						BgL_auxz00_2896 = STRUCT_REF(BgL_sz00_583, (int) (((long) 12)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_heapzd2compatiblezd2) = ((obj_t) BgL_auxz00_2896), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2900;

						BgL_auxz00_2900 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 13))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_callccz00) =
							((bool_t) BgL_auxz00_2900), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2905;

						BgL_auxz00_2905 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 14))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_qualifiedzd2typeszd2) =
							((bool_t) BgL_auxz00_2905), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2910;

						BgL_auxz00_2910 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 15))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_effectzb2zb2) =
							((bool_t) BgL_auxz00_2910), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2915;

						BgL_auxz00_2915 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 16))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_removezd2emptyzd2letz00) =
							((bool_t) BgL_auxz00_2915), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2920;

						BgL_auxz00_2920 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 17))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_foreignzd2closurezd2) =
							((bool_t) BgL_auxz00_2920), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2925;

						BgL_auxz00_2925 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 18))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_typedzd2eqzd2) =
							((bool_t) BgL_auxz00_2925), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2930;

						BgL_auxz00_2930 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 19))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_tracezd2supportzd2) =
							((bool_t) BgL_auxz00_2930), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2935;

						BgL_auxz00_2935 = STRUCT_REF(BgL_sz00_583, (int) (((long) 20)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_foreignzd2clausezd2supportz00) =
							((obj_t) BgL_auxz00_2935), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2939;

						BgL_auxz00_2939 = STRUCT_REF(BgL_sz00_583, (int) (((long) 21)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_debugzd2supportzd2) =
							((obj_t) BgL_auxz00_2939), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2943;

						BgL_auxz00_2943 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 22))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_pragmazd2supportzd2) = ((bool_t) BgL_auxz00_2943), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2948;

						BgL_auxz00_2948 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 23))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->
								BgL_tvectorzd2descrzd2supportz00) =
							((bool_t) BgL_auxz00_2948), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2953;

						BgL_auxz00_2953 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 24))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_requirezd2tailczd2) =
							((bool_t) BgL_auxz00_2953), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2958;

						BgL_auxz00_2958 = STRUCT_REF(BgL_sz00_583, (int) (((long) 25)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_registersz00) =
							((obj_t) BgL_auxz00_2958), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_2962;

						BgL_auxz00_2962 = STRUCT_REF(BgL_sz00_583, (int) (((long) 26)));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_pregistersz00) =
							((obj_t) BgL_auxz00_2962), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2966;

						BgL_auxz00_2966 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 27))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_boundzd2checkzd2) =
							((bool_t) BgL_auxz00_2966), BUNSPEC);
					}
					{
						bool_t BgL_auxz00_2971;

						BgL_auxz00_2971 =
							CBOOL(STRUCT_REF(BgL_sz00_583, (int) (((long) 28))));
						((((BgL_cgenz00_bglt) CREF(BgL_oz00_582))->BgL_typezd2checkzd2) =
							((bool_t) BgL_auxz00_2971), BUNSPEC);
					}
					BgL_auxz00_2845 = BgL_oz00_582;
					return (obj_t) (BgL_auxz00_2845);
				}
			}
		}
	}



/* object->struct-cgen2420 */
	obj_t BGl_objectzd2ze3structzd2cgen2420ze3zzbackend_cvmz00(obj_t
		BgL_envz00_1657, obj_t BgL_obj2301z00_1658)
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 20 */
			{
				BgL_cgenz00_bglt BgL_obj2301z00_520;

				BgL_obj2301z00_520 = (BgL_cgenz00_bglt) (BgL_obj2301z00_1658);
				{	/* BackEnd/cvm.scm 20 */
					obj_t BgL_res2302z00_523;

					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_keyz00_1127;

						BgL_keyz00_1127 = CNST_TABLE_REF(((long) 2));
						BgL_res2302z00_523 =
							make_struct(BgL_keyz00_1127, (int) (((long) 29)), BUNSPEC);
					}
					{	/* BackEnd/cvm.scm 20 */
						int BgL_auxz00_2981;

						BgL_auxz00_2981 = (int) (((long) 0));
						STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_2981, BFALSE);
					}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2504z00_525;

						{
							BgL_backendz00_bglt BgL_auxz00_2984;

							BgL_auxz00_2984 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2504z00_525 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2984))->
								BgL_languagez00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_2987;

							BgL_auxz00_2987 = (int) (((long) 1));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_2987,
								BgL_arg2504z00_525);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2523z00_527;

						{
							BgL_backendz00_bglt BgL_auxz00_2990;

							BgL_auxz00_2990 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2523z00_527 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2990))->BgL_srfi0z00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_2993;

							BgL_auxz00_2993 = (int) (((long) 2));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_2993,
								BgL_arg2523z00_527);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2531z00_529;

						{
							BgL_backendz00_bglt BgL_auxz00_2996;

							BgL_auxz00_2996 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2531z00_529 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2996))->BgL_namez00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_2999;

							BgL_auxz00_2999 = (int) (((long) 3));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_2999,
								BgL_arg2531z00_529);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2544z00_531;

						{
							BgL_backendz00_bglt BgL_auxz00_3002;

							BgL_auxz00_3002 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2544z00_531 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3002))->
								BgL_externzd2variableszd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3005;

							BgL_auxz00_3005 = (int) (((long) 4));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3005,
								BgL_arg2544z00_531);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2554z00_533;

						{
							BgL_backendz00_bglt BgL_auxz00_3008;

							BgL_auxz00_3008 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2554z00_533 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3008))->
								BgL_externzd2functionszd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3011;

							BgL_auxz00_3011 = (int) (((long) 5));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3011,
								BgL_arg2554z00_533);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2556z00_535;

						{
							BgL_backendz00_bglt BgL_auxz00_3014;

							BgL_auxz00_3014 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2556z00_535 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3014))->
								BgL_externzd2typeszd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3017;

							BgL_auxz00_3017 = (int) (((long) 6));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3017,
								BgL_arg2556z00_535);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2558z00_537;

						{
							BgL_backendz00_bglt BgL_auxz00_3020;

							BgL_auxz00_3020 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2558z00_537 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3020))->
								BgL_variablesz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3023;

							BgL_auxz00_3023 = (int) (((long) 7));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3023,
								BgL_arg2558z00_537);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2560z00_539;

						{
							BgL_backendz00_bglt BgL_auxz00_3026;

							BgL_auxz00_3026 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2560z00_539 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3026))->
								BgL_functionsz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3029;

							BgL_auxz00_3029 = (int) (((long) 8));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3029,
								BgL_arg2560z00_539);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2562z00_541;

						{
							BgL_backendz00_bglt BgL_auxz00_3032;

							BgL_auxz00_3032 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2562z00_541 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3032))->BgL_typesz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3035;

							BgL_auxz00_3035 = (int) (((long) 9));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3035,
								BgL_arg2562z00_541);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2564z00_543;

						{
							BgL_backendz00_bglt BgL_auxz00_3038;

							BgL_auxz00_3038 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2564z00_543 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3038))->BgL_typedz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3043;

							int BgL_auxz00_3041;

							BgL_auxz00_3043 = BBOOL(BgL_arg2564z00_543);
							BgL_auxz00_3041 = (int) (((long) 10));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3041, BgL_auxz00_3043);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2566z00_545;

						{
							BgL_backendz00_bglt BgL_auxz00_3046;

							BgL_auxz00_3046 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2566z00_545 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3046))->
								BgL_heapzd2suffixzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3049;

							BgL_auxz00_3049 = (int) (((long) 11));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3049,
								BgL_arg2566z00_545);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2572z00_547;

						{
							BgL_backendz00_bglt BgL_auxz00_3052;

							BgL_auxz00_3052 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2572z00_547 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3052))->
								BgL_heapzd2compatiblezd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3055;

							BgL_auxz00_3055 = (int) (((long) 12));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3055,
								BgL_arg2572z00_547);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2586z00_549;

						{
							BgL_backendz00_bglt BgL_auxz00_3058;

							BgL_auxz00_3058 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2586z00_549 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3058))->BgL_callccz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3063;

							int BgL_auxz00_3061;

							BgL_auxz00_3063 = BBOOL(BgL_arg2586z00_549);
							BgL_auxz00_3061 = (int) (((long) 13));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3061, BgL_auxz00_3063);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2589z00_551;

						{
							BgL_backendz00_bglt BgL_auxz00_3066;

							BgL_auxz00_3066 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2589z00_551 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3066))->
								BgL_qualifiedzd2typeszd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3071;

							int BgL_auxz00_3069;

							BgL_auxz00_3071 = BBOOL(BgL_arg2589z00_551);
							BgL_auxz00_3069 = (int) (((long) 14));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3069, BgL_auxz00_3071);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2594z00_553;

						{
							BgL_backendz00_bglt BgL_auxz00_3074;

							BgL_auxz00_3074 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2594z00_553 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3074))->
								BgL_effectzb2zb2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3079;

							int BgL_auxz00_3077;

							BgL_auxz00_3079 = BBOOL(BgL_arg2594z00_553);
							BgL_auxz00_3077 = (int) (((long) 15));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3077, BgL_auxz00_3079);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2602z00_555;

						{
							BgL_backendz00_bglt BgL_auxz00_3082;

							BgL_auxz00_3082 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2602z00_555 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3082))->
								BgL_removezd2emptyzd2letz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3087;

							int BgL_auxz00_3085;

							BgL_auxz00_3087 = BBOOL(BgL_arg2602z00_555);
							BgL_auxz00_3085 = (int) (((long) 16));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3085, BgL_auxz00_3087);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2615z00_557;

						{
							BgL_backendz00_bglt BgL_auxz00_3090;

							BgL_auxz00_3090 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2615z00_557 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3090))->
								BgL_foreignzd2closurezd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3095;

							int BgL_auxz00_3093;

							BgL_auxz00_3095 = BBOOL(BgL_arg2615z00_557);
							BgL_auxz00_3093 = (int) (((long) 17));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3093, BgL_auxz00_3095);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2628z00_559;

						{
							BgL_backendz00_bglt BgL_auxz00_3098;

							BgL_auxz00_3098 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2628z00_559 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3098))->
								BgL_typedzd2eqzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3103;

							int BgL_auxz00_3101;

							BgL_auxz00_3103 = BBOOL(BgL_arg2628z00_559);
							BgL_auxz00_3101 = (int) (((long) 18));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3101, BgL_auxz00_3103);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2630z00_561;

						{
							BgL_backendz00_bglt BgL_auxz00_3106;

							BgL_auxz00_3106 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2630z00_561 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3106))->
								BgL_tracezd2supportzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3111;

							int BgL_auxz00_3109;

							BgL_auxz00_3111 = BBOOL(BgL_arg2630z00_561);
							BgL_auxz00_3109 = (int) (((long) 19));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3109, BgL_auxz00_3111);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2648z00_563;

						{
							BgL_backendz00_bglt BgL_auxz00_3114;

							BgL_auxz00_3114 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2648z00_563 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3114))->
								BgL_foreignzd2clausezd2supportz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3117;

							BgL_auxz00_3117 = (int) (((long) 20));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3117,
								BgL_arg2648z00_563);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2650z00_565;

						{
							BgL_backendz00_bglt BgL_auxz00_3120;

							BgL_auxz00_3120 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2650z00_565 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3120))->
								BgL_debugzd2supportzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3123;

							BgL_auxz00_3123 = (int) (((long) 21));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3123,
								BgL_arg2650z00_565);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2652z00_567;

						{
							BgL_backendz00_bglt BgL_auxz00_3126;

							BgL_auxz00_3126 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2652z00_567 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3126))->
								BgL_pragmazd2supportzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3131;

							int BgL_auxz00_3129;

							BgL_auxz00_3131 = BBOOL(BgL_arg2652z00_567);
							BgL_auxz00_3129 = (int) (((long) 22));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3129, BgL_auxz00_3131);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2656z00_569;

						{
							BgL_backendz00_bglt BgL_auxz00_3134;

							BgL_auxz00_3134 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2656z00_569 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3134))->
								BgL_tvectorzd2descrzd2supportz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3139;

							int BgL_auxz00_3137;

							BgL_auxz00_3139 = BBOOL(BgL_arg2656z00_569);
							BgL_auxz00_3137 = (int) (((long) 23));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3137, BgL_auxz00_3139);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2658z00_571;

						{
							BgL_backendz00_bglt BgL_auxz00_3142;

							BgL_auxz00_3142 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2658z00_571 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3142))->
								BgL_requirezd2tailczd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3147;

							int BgL_auxz00_3145;

							BgL_auxz00_3147 = BBOOL(BgL_arg2658z00_571);
							BgL_auxz00_3145 = (int) (((long) 24));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3145, BgL_auxz00_3147);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2660z00_573;

						{
							BgL_backendz00_bglt BgL_auxz00_3150;

							BgL_auxz00_3150 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2660z00_573 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3150))->
								BgL_registersz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3153;

							BgL_auxz00_3153 = (int) (((long) 25));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3153,
								BgL_arg2660z00_573);
					}}
					{	/* BackEnd/cvm.scm 20 */
						obj_t BgL_arg2663z00_575;

						{
							BgL_backendz00_bglt BgL_auxz00_3156;

							BgL_auxz00_3156 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2663z00_575 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3156))->
								BgL_pregistersz00);
						}
						{	/* BackEnd/cvm.scm 20 */
							int BgL_auxz00_3159;

							BgL_auxz00_3159 = (int) (((long) 26));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3159,
								BgL_arg2663z00_575);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2665z00_577;

						{
							BgL_backendz00_bglt BgL_auxz00_3162;

							BgL_auxz00_3162 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2665z00_577 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3162))->
								BgL_boundzd2checkzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3167;

							int BgL_auxz00_3165;

							BgL_auxz00_3167 = BBOOL(BgL_arg2665z00_577);
							BgL_auxz00_3165 = (int) (((long) 27));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3165, BgL_auxz00_3167);
					}}
					{	/* BackEnd/cvm.scm 20 */
						bool_t BgL_arg2667z00_579;

						{
							BgL_backendz00_bglt BgL_auxz00_3170;

							BgL_auxz00_3170 = (BgL_backendz00_bglt) (BgL_obj2301z00_520);
							BgL_arg2667z00_579 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_3170))->
								BgL_typezd2checkzd2);
						}
						{	/* BackEnd/cvm.scm 20 */
							obj_t BgL_auxz00_3175;

							int BgL_auxz00_3173;

							BgL_auxz00_3175 = BBOOL(BgL_arg2667z00_579);
							BgL_auxz00_3173 = (int) (((long) 28));
							STRUCT_SET(BgL_res2302z00_523, BgL_auxz00_3173, BgL_auxz00_3175);
					}}
					return BgL_res2302z00_523;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_cvmz00()
	{
		AN_OBJECT;
		{	/* BackEnd/cvm.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string2767z00zzbackend_cvmz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string2767z00zzbackend_cvmz00));
		}
	}

#ifdef __cplusplus
}
#endif
