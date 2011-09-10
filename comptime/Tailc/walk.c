/*===========================================================================*/
/*   (Tailc/walk.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tailc/walk.scm)*/
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

	typedef struct BgL_sfunz00_bgl
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
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

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

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

	typedef struct BgL_sequencez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_nodesz00;
	}                  *BgL_sequencez00_bglt;

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

	typedef struct BgL_conditionalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		struct BgL_nodez00_bgl *BgL_truez00;
		struct BgL_nodez00_bgl *BgL_falsez00;
	}                     *BgL_conditionalz00_bglt;

	typedef struct BgL_selectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_testz00;
		obj_t BgL_clausesz00;
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_selectz00_bglt;

	typedef struct BgL_letzd2funzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_localsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                   *BgL_letzd2funzd2_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_localzd2tailzd2_bgl
	{
		char dummy;
	}                      *BgL_localzd2tailzd2_bglt;


	extern BgL_localz00_bglt BGl_clonezd2localzd2zzast_localz00(BgL_localz00_bglt,
		BgL_valuez00_bglt);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static BgL_localzd2tailzd2_bglt BGl_localzd2tailzd2nilz00zztailc_walkz00();
	static obj_t BGl_getzd2tailzd2callszd2letzd2v3357z00zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tailczd2walkz12zc0zztailc_walkz00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl__getzd2tailzd2callsz00zztailc_walkz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zztailc_walkz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl_getzd2tailzd2callszd2selec3353zd2zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_tailczd2globalzd2zztailc_walkz00(obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztailc_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztailc_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl__getzd2tailzd2callszd2defau3341zd2zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__tailczd2walkz12zc0zztailc_walkz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2sfunz00zzast_localz00(obj_t,
		BgL_typez00_bglt, BgL_sfunz00_bglt);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_getzd2tailzd2callszd2seque3346zd2zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl__z52allocatezd2localzd2tailz52zztailc_walkz00(obj_t);
	static obj_t BGl_getzd2tailzd2callszd2condi3351zd2zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	static obj_t BGl__localzd2tailzd2nilz00zztailc_walkz00(obj_t);
	static obj_t BGl_globalzd2ze3localz12z23zztailc_walkz00(obj_t, obj_t);
	static obj_t BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00 = BUNSPEC;
	extern BgL_sfunz00_bglt BGl_makezd2sfunzd2zzast_varz00(long, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_localzd2tailzd2zztailc_walkz00 = BUNSPEC;
	static obj_t BGl__localzd2tailzf3z21zztailc_walkz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztailc_walkz00();
	static obj_t BGl_getzd2tailzd2callszd2closu3344zd2zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztailc_walkz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztailc_walkz00();
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static BgL_localzd2tailzd2_bglt
		BGl_wideningzd2localzd2tailz00zztailc_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztailc_walkz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	static obj_t BGl_getzd2tailzd2callszd2app3348zd2zztailc_walkz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_getzd2tailzd2callszd2letzd2f3355z00zztailc_walkz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_objectzd2ze3structzd2local3359ze3zztailc_walkz00(obj_t,
		obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_objectzd2initzd2zztailc_walkz00();
	static obj_t BGl_structzb2objectzd2ze3objec3361z83zztailc_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztailc_walkz00();
	extern BgL_svarz00_bglt BGl_makezd2svarzd2zzast_varz00(obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2tailzd2callszd2defau3341zd2envz00zztailc_walkz00,
		BgL_bgl__getza7d2tailza7d2ca3607z00,
		BGl__getzd2tailzd2callszd2defau3341zd2zztailc_walkz00, 0L, BUNSPEC, 3);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_localzd2tailzd2nilzd2envzd2zztailc_walkz00,
		BgL_bgl__localza7d2tailza7d23608z00,
		BGl__localzd2tailzd2nilz00zztailc_walkz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2localzd2tailzd2envz80zztailc_walkz00,
		BgL_bgl__za752allocateza7d2l3609z00,
		BGl__z52allocatezd2localzd2tailz52zztailc_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_localzd2tailzf3zd2envzf3zztailc_walkz00,
		BgL_bgl__localza7d2tailza7f33610z00, BGl__localzd2tailzf3z21zztailc_walkz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
		BgL_bgl__getza7d2tailza7d2ca3611z00,
		BGl__getzd2tailzd2callsz00zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3590z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3612z00,
		BGl_getzd2tailzd2callszd2closu3344zd2zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3591z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3613z00,
		BGl_getzd2tailzd2callszd2seque3346zd2zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3592z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3614z00,
		BGl_getzd2tailzd2callszd2app3348zd2zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3593z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3615z00,
		BGl_getzd2tailzd2callszd2condi3351zd2zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3594z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3616z00,
		BGl_getzd2tailzd2callszd2selec3353zd2zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3595z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3617z00,
		BGl_getzd2tailzd2callszd2letzd2f3355z00zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3596z00zztailc_walkz00,
		BgL_bgl_getza7d2tailza7d2cal3618z00,
		BGl_getzd2tailzd2callszd2letzd2v3357z00zztailc_walkz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3597z00zztailc_walkz00,
		BgL_bgl_objectza7d2za7e3stru3619z00,
		BGl_objectzd2ze3structzd2local3359ze3zztailc_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3599z00zztailc_walkz00,
		BgL_bgl_structza7b2objectza73620z00,
		BGl_structzb2objectzd2ze3objec3361z83zztailc_walkz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_STRING(BGl_string3583z00zztailc_walkz00,
		BgL_bgl_string3583za700za7za7t3621za7, "Tailc", 5);
	      DEFINE_STRING(BGl_string3584z00zztailc_walkz00,
		BgL_bgl_string3584za700za7za7t3622za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3585z00zztailc_walkz00,
		BgL_bgl_string3585za700za7za7t3623za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3586z00zztailc_walkz00,
		BgL_bgl_string3586za700za7za7t3624za7, " self tail call(s)", 18);
	      DEFINE_STRING(BGl_string3587z00zztailc_walkz00,
		BgL_bgl_string3587za700za7za7t3625za7, ": ", 2);
	      DEFINE_STRING(BGl_string3588z00zztailc_walkz00,
		BgL_bgl_string3588za700za7za7t3626za7, "        ", 8);
	      DEFINE_STRING(BGl_string3600z00zztailc_walkz00,
		BgL_bgl_string3600za700za7za7t3627za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3589z00zztailc_walkz00,
		BgL_bgl_string3589za700za7za7t3628za7, "get-tail-calls", 14);
	      DEFINE_STRING(BGl_string3601z00zztailc_walkz00,
		BgL_bgl_string3601za700za7za7t3629za7, "Unexpected closure", 18);
	      DEFINE_STRING(BGl_string3602z00zztailc_walkz00,
		BgL_bgl_string3602za700za7za7t3630za7, "tailc_walk", 10);
	      DEFINE_STRING(BGl_string3603z00zztailc_walkz00,
		BgL_bgl_string3603za700za7za7t3631za7, "_ local-tail pass-started ", 26);
	      DEFINE_STRING(BGl_string3598z00zztailc_walkz00,
		BgL_bgl_string3598za700za7za7t3632za7, "object->struct::struct", 22);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tailczd2walkz12zd2envz12zztailc_walkz00,
		BgL_bgl__tailcza7d2walkza7123633z00, BGl__tailczd2walkz12zc0zztailc_walkz00,
		0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztailc_walkz00(long
		BgL_checksumz00_1953, char *BgL_fromz00_1954)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztailc_walkz00))
				{
					BGl_requirezd2initializa7ationz75zztailc_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztailc_walkz00();
					BGl_cnstzd2initzd2zztailc_walkz00();
					BGl_importedzd2moduleszd2initz00zztailc_walkz00();
					BGl_objectzd2initzd2zztailc_walkz00();
					BGl_genericzd2initzd2zztailc_walkz00();
					BGl_methodzd2initzd2zztailc_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tailc_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tailc_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tailc_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			{	/* Tailc/walk.scm 15 */
				obj_t BgL_cportz00_1936;

				BgL_cportz00_1936 =
					bgl_open_input_string(BGl_string3603z00zztailc_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1937;

					BgL_iz00_1937 = ((long) 2);
				BgL_loopz00_1938:
					if ((BgL_iz00_1937 == ((long) -1)))
						{	/* Tailc/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tailc/walk.scm 15 */
							{	/* Tailc/walk.scm 15 */
								obj_t BgL_arg3605z00_1940;

								{	/* Tailc/walk.scm 15 */

									{	/* Tailc/walk.scm 15 */
										obj_t BgL_locationz00_1942;

										BgL_locationz00_1942 = BBOOL(((bool_t) 0));
										{	/* Tailc/walk.scm 15 */

											BgL_arg3605z00_1940 =
												BGl_readz00zz__readerz00(BgL_cportz00_1936,
												BgL_locationz00_1942);
										}
									}
								}
								{	/* Tailc/walk.scm 15 */
									int BgL_auxz00_1973;

									BgL_auxz00_1973 = (int) (BgL_iz00_1937);
									CNST_TABLE_SET(BgL_auxz00_1973, BgL_arg3605z00_1940);
							}}
							{	/* Tailc/walk.scm 15 */
								int BgL_auxz00_1943;

								BgL_auxz00_1943 = (int) ((BgL_iz00_1937 - ((long) 1)));
								{
									long BgL_iz00_1978;

									BgL_iz00_1978 = (long) (BgL_auxz00_1943);
									BgL_iz00_1937 = BgL_iz00_1978;
									goto BgL_loopz00_1938;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* tailc-walk! */
	BGL_EXPORTED_DEF obj_t BGl_tailczd2walkz12zc0zztailc_walkz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 31 */
			{	/* Tailc/walk.scm 32 */
				obj_t BgL_list3362z00_819;

				{	/* Tailc/walk.scm 32 */
					obj_t BgL_arg3364z00_821;

					{	/* Tailc/walk.scm 32 */
						obj_t BgL_arg3366z00_823;

						BgL_arg3366z00_823 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3364z00_821 =
							MAKE_PAIR(BGl_string3583z00zztailc_walkz00, BgL_arg3366z00_823);
					}
					BgL_list3362z00_819 =
						MAKE_PAIR(BGl_string3584z00zztailc_walkz00, BgL_arg3364z00_821);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3362z00_819);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3583z00zztailc_walkz00;
			{
				obj_t BgL_hooksz00_827;

				obj_t BgL_hnamesz00_828;

				BgL_hooksz00_827 = BNIL;
				BgL_hnamesz00_828 = BNIL;
			BgL_zc3anonymousza33367ze3z83_829:
				if (NULLP(BgL_hooksz00_827))
					{	/* Tailc/walk.scm 32 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Tailc/walk.scm 32 */
						bool_t BgL_testz00_1990;

						{	/* Tailc/walk.scm 32 */
							obj_t BgL_fun3376z00_837;

							BgL_fun3376z00_837 = CAR(BgL_hooksz00_827);
							BgL_testz00_1990 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3376z00_837) (BgL_fun3376z00_837,
									BEOA));
						}
						if (BgL_testz00_1990)
							{
								obj_t BgL_hnamesz00_1997;

								obj_t BgL_hooksz00_1995;

								BgL_hooksz00_1995 = CDR(BgL_hooksz00_827);
								BgL_hnamesz00_1997 = CDR(BgL_hnamesz00_828);
								BgL_hnamesz00_828 = BgL_hnamesz00_1997;
								BgL_hooksz00_827 = BgL_hooksz00_1995;
								goto BgL_zc3anonymousza33367ze3z83_829;
							}
						else
							{	/* Tailc/walk.scm 32 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3583z00zztailc_walkz00,
									BGl_string3585z00zztailc_walkz00, CAR(BgL_hnamesz00_828));
							}
					}
			}
			{
				obj_t BgL_l3326z00_841;

				BgL_l3326z00_841 = BgL_globalsz00_1;
			BgL_zc3anonymousza33378ze3z83_842:
				if (PAIRP(BgL_l3326z00_841))
					{	/* Tailc/walk.scm 33 */
						BGl_tailczd2globalzd2zztailc_walkz00(CAR(BgL_l3326z00_841));
						{
							obj_t BgL_l3326z00_2005;

							BgL_l3326z00_2005 = CDR(BgL_l3326z00_841);
							BgL_l3326z00_841 = BgL_l3326z00_2005;
							goto BgL_zc3anonymousza33378ze3z83_842;
						}
					}
				else
					{	/* Tailc/walk.scm 33 */
						((bool_t) 1);
					}
			}
			return BgL_globalsz00_1;
		}
	}



/* _tailc-walk! */
	obj_t BGl__tailczd2walkz12zc0zztailc_walkz00(obj_t BgL_envz00_1875,
		obj_t BgL_globalsz00_1876)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 31 */
			return BGl_tailczd2walkz12zc0zztailc_walkz00(BgL_globalsz00_1876);
		}
	}



/* tailc-global */
	obj_t BGl_tailczd2globalzd2zztailc_walkz00(obj_t BgL_globalz00_2)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 39 */
			{	/* Tailc/walk.scm 40 */
				obj_t BgL_arg3382z00_847;

				{
					BgL_variablez00_bglt BgL_auxz00_2008;

					BgL_auxz00_2008 = (BgL_variablez00_bglt) (BgL_globalz00_2);
					BgL_arg3382z00_847 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2008))->BgL_idz00);
				}
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3382z00_847);
			}
			{	/* Tailc/walk.scm 41 */
				obj_t BgL_callsz00_848;

				{	/* Tailc/walk.scm 41 */
					obj_t BgL_arg3396z00_862;

					{	/* Tailc/walk.scm 41 */
						BgL_sfunz00_bglt BgL_obj1884z00_1459;

						{	/* Tailc/walk.scm 41 */
							BgL_variablez00_bglt BgL_obj1611z00_1458;

							BgL_obj1611z00_1458 = (BgL_variablez00_bglt) (BgL_globalz00_2);
							BgL_obj1884z00_1459 =
								(BgL_sfunz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1458))->
									BgL_valuez00));
						}
						BgL_arg3396z00_862 =
							(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1459))->BgL_bodyz00);
					}
					{	/* Tailc/walk.scm 41 */
						obj_t BgL_res3552z00_1488;

						{	/* Tailc/walk.scm 41 */
							BgL_nodez00_bglt BgL_nz00_1460;

							BgL_variablez00_bglt BgL_hz00_1461;

							BgL_nz00_1460 = (BgL_nodez00_bglt) (BgL_arg3396z00_862);
							BgL_hz00_1461 = (BgL_variablez00_bglt) (BgL_globalz00_2);
							{	/* Tailc/walk.scm 41 */
								obj_t BgL_method3342z00_1463;

								{	/* Tailc/walk.scm 41 */
									BgL_objectz00_bglt BgL_objz00_1464;

									BgL_objz00_1464 = (BgL_objectz00_bglt) (BgL_nz00_1460);
									{	/* Tailc/walk.scm 41 */
										long BgL_objzd2classzd2numz00_1465;

										BgL_objzd2classzd2numz00_1465 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1464);
										{	/* Tailc/walk.scm 41 */
											obj_t BgL_arg2643z00_1466;

											BgL_arg2643z00_1466 =
												PROCEDURE_REF
												(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
												(int) (((long) 1)));
											{	/* Tailc/walk.scm 41 */
												obj_t BgL_arrayz00_1468;

												int BgL_offsetz00_1469;

												BgL_arrayz00_1468 = BgL_arg2643z00_1466;
												BgL_offsetz00_1469 =
													(int) (BgL_objzd2classzd2numz00_1465);
												{	/* Tailc/walk.scm 41 */
													long BgL_offsetz00_1470;

													BgL_offsetz00_1470 =
														((long) (BgL_offsetz00_1469) - OBJECT_TYPE);
													{	/* Tailc/walk.scm 41 */
														long BgL_modz00_1471;

														{	/* Tailc/walk.scm 41 */
															int BgL_arg2645z00_1472;

															BgL_arg2645z00_1472 = (int) (((long) 16));
															{	/* Tailc/walk.scm 41 */
																long BgL_auxz00_2026;

																BgL_auxz00_2026 = (long) (BgL_arg2645z00_1472);
																BgL_modz00_1471 =
																	(BgL_offsetz00_1470 / BgL_auxz00_2026);
														}}
														{	/* Tailc/walk.scm 41 */
															long BgL_restz00_1473;

															{	/* Tailc/walk.scm 41 */
																int BgL_arg2644z00_1474;

																BgL_arg2644z00_1474 = (int) (((long) 16));
																{	/* Tailc/walk.scm 41 */
																	long BgL_auxz00_2030;

																	BgL_auxz00_2030 =
																		(long) (BgL_arg2644z00_1474);
																	BgL_restz00_1473 =
																		(BgL_offsetz00_1470 % BgL_auxz00_2030);
															}}
															{	/* Tailc/walk.scm 41 */

																BgL_method3342z00_1463 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1468,
																		(int) (BgL_modz00_1471)),
																	(int) (BgL_restz00_1473));
								}}}}}}}}
								BgL_res3552z00_1488 =
									PROCEDURE_ENTRY(BgL_method3342z00_1463)
									(BgL_method3342z00_1463, (obj_t) (BgL_nz00_1460),
									(obj_t) (BgL_hz00_1461), BNIL, BEOA);
						}}
						BgL_callsz00_848 = BgL_res3552z00_1488;
				}}
				if (PAIRP(BgL_callsz00_848))
					{	/* Tailc/walk.scm 42 */
						{	/* Tailc/walk.scm 43 */
							obj_t BgL_arg3386z00_852;

							long BgL_arg3388z00_854;

							BgL_arg3386z00_852 =
								BGl_shapez00zztools_shapez00(BgL_globalz00_2);
							BgL_arg3388z00_854 = bgl_list_length(BgL_callsz00_848);
							{	/* Tailc/walk.scm 43 */
								obj_t BgL_list3390z00_856;

								{	/* Tailc/walk.scm 43 */
									obj_t BgL_arg3391z00_857;

									{	/* Tailc/walk.scm 43 */
										obj_t BgL_arg3392z00_858;

										{	/* Tailc/walk.scm 43 */
											obj_t BgL_arg3393z00_859;

											{	/* Tailc/walk.scm 43 */
												obj_t BgL_arg3394z00_860;

												{	/* Tailc/walk.scm 43 */
													obj_t BgL_arg3395z00_861;

													BgL_arg3395z00_861 =
														MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
													BgL_arg3394z00_860 =
														MAKE_PAIR(BGl_string3586z00zztailc_walkz00,
														BgL_arg3395z00_861);
												}
												BgL_arg3393z00_859 =
													MAKE_PAIR(BINT(BgL_arg3388z00_854),
													BgL_arg3394z00_860);
											}
											BgL_arg3392z00_858 =
												MAKE_PAIR(BGl_string3587z00zztailc_walkz00,
												BgL_arg3393z00_859);
										}
										BgL_arg3391z00_857 =
											MAKE_PAIR(BgL_arg3386z00_852, BgL_arg3392z00_858);
									}
									BgL_list3390z00_856 =
										MAKE_PAIR(BGl_string3588z00zztailc_walkz00,
										BgL_arg3391z00_857);
								}
								BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
									BgL_list3390z00_856);
						}}
						BGl_globalzd2ze3localz12z23zztailc_walkz00(BgL_globalz00_2,
							BgL_callsz00_848);
					}
				else
					{	/* Tailc/walk.scm 42 */
						BFALSE;
					}
			}
			return BGl_leavezd2functionzd2zztools_errorz00();
		}
	}



/* global->local! */
	obj_t BGl_globalzd2ze3localz12z23zztailc_walkz00(obj_t BgL_globalz00_3,
		obj_t BgL_callsz00_4)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 51 */
			{	/* Tailc/walk.scm 52 */
				BgL_valuez00_bglt BgL_gfunz00_865;

				{
					BgL_variablez00_bglt BgL_auxz00_2057;

					BgL_auxz00_2057 = (BgL_variablez00_bglt) (BgL_globalz00_3);
					BgL_gfunz00_865 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2057))->BgL_valuez00);
				}
				{	/* Tailc/walk.scm 52 */
					BgL_typez00_bglt BgL_gtypez00_866;

					{
						BgL_variablez00_bglt BgL_auxz00_2060;

						BgL_auxz00_2060 = (BgL_variablez00_bglt) (BgL_globalz00_3);
						BgL_gtypez00_866 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2060))->BgL_typez00);
					}
					{	/* Tailc/walk.scm 53 */
						obj_t BgL_lbodyz00_867;

						{
							BgL_sfunz00_bglt BgL_auxz00_2063;

							BgL_auxz00_2063 = (BgL_sfunz00_bglt) (BgL_gfunz00_865);
							BgL_lbodyz00_867 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2063))->BgL_bodyz00);
						}
						{	/* Tailc/walk.scm 54 */
							obj_t BgL_largsz00_868;

							{
								BgL_sfunz00_bglt BgL_auxz00_2066;

								BgL_auxz00_2066 = (BgL_sfunz00_bglt) (BgL_gfunz00_865);
								BgL_largsz00_868 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2066))->BgL_argsz00);
							}
							{	/* Tailc/walk.scm 55 */
								obj_t BgL_gargsz00_869;

								if (NULLP(BgL_largsz00_868))
									{	/* Tailc/walk.scm 56 */
										BgL_gargsz00_869 = BNIL;
									}
								else
									{	/* Tailc/walk.scm 56 */
										obj_t BgL_head3330z00_927;

										BgL_head3330z00_927 = MAKE_PAIR(BNIL, BNIL);
										{
											obj_t BgL_l3328z00_929;

											obj_t BgL_tail3331z00_930;

											BgL_l3328z00_929 = BgL_largsz00_868;
											BgL_tail3331z00_930 = BgL_head3330z00_927;
										BgL_zc3anonymousza33437ze3z83_931:
											if (NULLP(BgL_l3328z00_929))
												{	/* Tailc/walk.scm 56 */
													BgL_gargsz00_869 = CDR(BgL_head3330z00_927);
												}
											else
												{	/* Tailc/walk.scm 56 */
													obj_t BgL_newtail3332z00_933;

													{	/* Tailc/walk.scm 56 */
														BgL_localz00_bglt BgL_arg3440z00_935;

														{	/* Tailc/walk.scm 56 */
															obj_t BgL_oldz00_937;

															BgL_oldz00_937 = CAR(BgL_l3328z00_929);
															{	/* Tailc/walk.scm 58 */
																BgL_svarz00_bglt BgL_arg3443z00_938;

																{	/* Tailc/walk.scm 58 */
																	BgL_svarz00_bglt BgL_duplicated3301z00_939;

																	{	/* Tailc/walk.scm 59 */
																		BgL_variablez00_bglt BgL_obj1611z00_1500;

																		BgL_obj1611z00_1500 =
																			(BgL_variablez00_bglt) (BgL_oldz00_937);
																		BgL_duplicated3301z00_939 =
																			(BgL_svarz00_bglt) (
																			(((BgL_variablez00_bglt)
																					CREF(BgL_obj1611z00_1500))->
																				BgL_valuez00));
																	}
																	{	/* Tailc/walk.scm 58 */
																		BgL_svarz00_bglt BgL_new3302z00_940;

																		{	/* Tailc/walk.scm 58 */
																			obj_t BgL_arg3444z00_941;

																			BgL_arg3444z00_941 =
																				(((BgL_svarz00_bglt)
																					CREF(BgL_duplicated3301z00_939))->
																				BgL_locz00);
																			BgL_new3302z00_940 =
																				BGl_makezd2svarzd2zzast_varz00
																				(BgL_arg3444z00_941);
																		}
																		{	/* Tailc/walk.scm 58 */

																			BgL_arg3443z00_938 = BgL_new3302z00_940;
																		}
																	}
																}
																BgL_arg3440z00_935 =
																	BGl_clonezd2localzd2zzast_localz00(
																	(BgL_localz00_bglt) (BgL_oldz00_937),
																	(BgL_valuez00_bglt) (BgL_arg3443z00_938));
															}
														}
														BgL_newtail3332z00_933 =
															MAKE_PAIR((obj_t) (BgL_arg3440z00_935), BNIL);
													}
													SET_CDR(BgL_tail3331z00_930, BgL_newtail3332z00_933);
													{
														obj_t BgL_tail3331z00_2089;

														obj_t BgL_l3328z00_2087;

														BgL_l3328z00_2087 = CDR(BgL_l3328z00_929);
														BgL_tail3331z00_2089 = BgL_newtail3332z00_933;
														BgL_tail3331z00_930 = BgL_tail3331z00_2089;
														BgL_l3328z00_929 = BgL_l3328z00_2087;
														goto BgL_zc3anonymousza33437ze3z83_931;
													}
												}
										}
									}
								{	/* Tailc/walk.scm 56 */
									BgL_sfunz00_bglt BgL_lfunz00_870;

									{	/* Tailc/walk.scm 61 */
										BgL_sfunz00_bglt BgL_duplicated3303z00_908;

										BgL_duplicated3303z00_908 =
											(BgL_sfunz00_bglt) (BgL_gfunz00_865);
										{	/* Tailc/walk.scm 62 */
											BgL_sfunz00_bglt BgL_new3304z00_909;

											{	/* Tailc/walk.scm 62 */
												long BgL_arg3418z00_910;

												obj_t BgL_arg3419z00_911;

												obj_t BgL_arg3420z00_912;

												obj_t BgL_arg3421z00_913;

												bool_t BgL_arg3422z00_914;

												obj_t BgL_arg3424z00_915;

												obj_t BgL_arg3425z00_916;

												obj_t BgL_arg3426z00_917;

												obj_t BgL_arg3427z00_918;

												obj_t BgL_arg3430z00_919;

												obj_t BgL_arg3431z00_920;

												obj_t BgL_arg3432z00_921;

												obj_t BgL_arg3433z00_922;

												obj_t BgL_arg3434z00_923;

												obj_t BgL_arg3435z00_924;

												{
													BgL_funz00_bglt BgL_auxz00_2091;

													BgL_auxz00_2091 = (BgL_funz00_bglt) (BgL_gfunz00_865);
													BgL_arg3418z00_910 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2091))->
														BgL_arityz00);
												}
												{
													BgL_funz00_bglt BgL_auxz00_2094;

													BgL_auxz00_2094 =
														(BgL_funz00_bglt) (BgL_duplicated3303z00_908);
													BgL_arg3419z00_911 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2094))->
														BgL_sidezd2effectzf3z21);
												}
												{
													BgL_funz00_bglt BgL_auxz00_2097;

													BgL_auxz00_2097 =
														(BgL_funz00_bglt) (BgL_duplicated3303z00_908);
													BgL_arg3420z00_912 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2097))->
														BgL_predicatezd2ofzd2);
												}
												{
													BgL_funz00_bglt BgL_auxz00_2100;

													BgL_auxz00_2100 =
														(BgL_funz00_bglt) (BgL_duplicated3303z00_908);
													BgL_arg3421z00_913 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2100))->
														BgL_stackzd2allocatorzd2);
												}
												{
													BgL_funz00_bglt BgL_auxz00_2103;

													BgL_auxz00_2103 =
														(BgL_funz00_bglt) (BgL_duplicated3303z00_908);
													BgL_arg3422z00_914 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2103))->
														BgL_topzf3zf3);
												}
												{
													BgL_funz00_bglt BgL_auxz00_2106;

													BgL_auxz00_2106 =
														(BgL_funz00_bglt) (BgL_duplicated3303z00_908);
													BgL_arg3424z00_915 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2106))->
														BgL_thezd2closurezd2);
												}
												{
													BgL_funz00_bglt BgL_auxz00_2109;

													BgL_auxz00_2109 =
														(BgL_funz00_bglt) (BgL_duplicated3303z00_908);
													BgL_arg3425z00_916 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_2109))->
														BgL_effectz00);
												}
												BgL_arg3426z00_917 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->BgL_propertyz00);
												BgL_arg3427z00_918 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->
													BgL_argszd2namezd2);
												BgL_arg3430z00_919 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->BgL_classz00);
												BgL_arg3431z00_920 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->
													BgL_dssslzd2keywordszd2);
												BgL_arg3432z00_921 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->BgL_locz00);
												BgL_arg3433z00_922 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->BgL_optionalsz00);
												BgL_arg3434z00_923 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->BgL_keysz00);
												BgL_arg3435z00_924 =
													(((BgL_sfunz00_bglt)
														CREF(BgL_duplicated3303z00_908))->
													BgL_thezd2closurezd2globalz00);
												BgL_new3304z00_909 =
													BGl_makezd2sfunzd2zzast_varz00(BgL_arg3418z00_910,
													BgL_arg3419z00_911, BgL_arg3420z00_912,
													BgL_arg3421z00_913, BgL_arg3422z00_914,
													BgL_arg3424z00_915, BgL_arg3425z00_916,
													BgL_arg3426z00_917, BgL_largsz00_868,
													BgL_arg3427z00_918, BgL_lbodyz00_867,
													BgL_arg3430z00_919, BgL_arg3431z00_920,
													BgL_arg3432z00_921, BgL_arg3433z00_922,
													BgL_arg3434z00_923, BgL_arg3435z00_924);
											}
											{	/* Tailc/walk.scm 61 */

												BgL_lfunz00_870 = BgL_new3304z00_909;
									}}}
									{	/* Tailc/walk.scm 61 */
										BgL_localz00_bglt BgL_localz00_871;

										{	/* Tailc/walk.scm 65 */
											obj_t BgL_arg3417z00_907;

											{
												BgL_variablez00_bglt BgL_auxz00_2121;

												BgL_auxz00_2121 =
													(BgL_variablez00_bglt) (BgL_globalz00_3);
												BgL_arg3417z00_907 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2121))->
													BgL_idz00);
											}
											BgL_localz00_871 =
												BGl_makezd2localzd2sfunz00zzast_localz00
												(BgL_arg3417z00_907, BgL_gtypez00_866, BgL_lfunz00_870);
										}
										{	/* Tailc/walk.scm 65 */
											obj_t BgL_locz00_872;

											{
												BgL_nodez00_bglt BgL_auxz00_2125;

												BgL_auxz00_2125 = (BgL_nodez00_bglt) (BgL_lbodyz00_867);
												BgL_locz00_872 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_2125))->
													BgL_locz00);
											}
											{	/* Tailc/walk.scm 66 */
												BgL_letzd2funzd2_bglt BgL_gbodyz00_873;

												{	/* Tailc/walk.scm 67 */
													obj_t BgL_arg3404z00_886;

													BgL_appz00_bglt BgL_arg3405z00_887;

													{	/* Tailc/walk.scm 70 */
														obj_t BgL_list3406z00_888;

														BgL_list3406z00_888 =
															MAKE_PAIR((obj_t) (BgL_localz00_871), BNIL);
														BgL_arg3404z00_886 = BgL_list3406z00_888;
													}
													{	/* Tailc/walk.scm 71 */
														BgL_varz00_bglt BgL_arg3408z00_890;

														obj_t BgL_arg3409z00_891;

														BgL_arg3408z00_890 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_872,
															BgL_gtypez00_866,
															(BgL_variablez00_bglt) (BgL_localz00_871));
														if (NULLP(BgL_gargsz00_869))
															{	/* Tailc/walk.scm 78 */
																BgL_arg3409z00_891 = BNIL;
															}
														else
															{	/* Tailc/walk.scm 78 */
																obj_t BgL_head3335z00_894;

																BgL_head3335z00_894 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l3333z00_896;

																	obj_t BgL_tail3336z00_897;

																	BgL_l3333z00_896 = BgL_gargsz00_869;
																	BgL_tail3336z00_897 = BgL_head3335z00_894;
																BgL_zc3anonymousza33411ze3z83_898:
																	if (NULLP(BgL_l3333z00_896))
																		{	/* Tailc/walk.scm 78 */
																			BgL_arg3409z00_891 =
																				CDR(BgL_head3335z00_894);
																		}
																	else
																		{	/* Tailc/walk.scm 78 */
																			obj_t BgL_newtail3337z00_900;

																			{	/* Tailc/walk.scm 78 */
																				BgL_varz00_bglt BgL_arg3414z00_902;

																				{	/* Tailc/walk.scm 78 */
																					obj_t BgL_vz00_904;

																					BgL_vz00_904 = CAR(BgL_l3333z00_896);
																					{	/* Tailc/walk.scm 81 */
																						BgL_typez00_bglt BgL_arg3416z00_905;

																						{
																							BgL_variablez00_bglt
																								BgL_auxz00_2139;
																							BgL_auxz00_2139 =
																								(BgL_variablez00_bglt)
																								(BgL_vz00_904);
																							BgL_arg3416z00_905 =
																								(((BgL_variablez00_bglt)
																									CREF(BgL_auxz00_2139))->
																								BgL_typez00);
																						}
																						BgL_arg3414z00_902 =
																							BGl_makezd2varzd2zzast_nodez00
																							(BgL_locz00_872,
																							BgL_arg3416z00_905,
																							(BgL_variablez00_bglt)
																							(BgL_vz00_904));
																					}
																				}
																				BgL_newtail3337z00_900 =
																					MAKE_PAIR(
																					(obj_t) (BgL_arg3414z00_902), BNIL);
																			}
																			SET_CDR(BgL_tail3336z00_897,
																				BgL_newtail3337z00_900);
																			{
																				obj_t BgL_tail3336z00_2149;

																				obj_t BgL_l3333z00_2147;

																				BgL_l3333z00_2147 =
																					CDR(BgL_l3333z00_896);
																				BgL_tail3336z00_2149 =
																					BgL_newtail3337z00_900;
																				BgL_tail3336z00_897 =
																					BgL_tail3336z00_2149;
																				BgL_l3333z00_896 = BgL_l3333z00_2147;
																				goto BgL_zc3anonymousza33411ze3z83_898;
																			}
																		}
																}
															}
														BgL_arg3405z00_887 =
															BGl_makezd2appzd2zzast_nodez00(BgL_locz00_872,
															BgL_gtypez00_866, BUNSPEC, BINT(((long) -1)),
															BgL_arg3408z00_890, BgL_arg3409z00_891);
													}
													BgL_gbodyz00_873 =
														BGl_makezd2letzd2funz00zzast_nodez00(BgL_locz00_872,
														BgL_gtypez00_866, BUNSPEC, BINT(((long) -1)),
														BgL_arg3404z00_886,
														(BgL_nodez00_bglt) (BgL_arg3405z00_887));
												}
												{	/* Tailc/walk.scm 67 */

													{
														BgL_sfunz00_bglt BgL_auxz00_2155;

														BgL_auxz00_2155 =
															(BgL_sfunz00_bglt) (BgL_gfunz00_865);
														((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2155))->
																BgL_argsz00) =
															((obj_t) BgL_gargsz00_869), BUNSPEC);
													}
													{
														obj_t BgL_auxz00_2160;

														BgL_sfunz00_bglt BgL_auxz00_2158;

														BgL_auxz00_2160 = (obj_t) (BgL_gbodyz00_873);
														BgL_auxz00_2158 =
															(BgL_sfunz00_bglt) (BgL_gfunz00_865);
														((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2158))->
																BgL_bodyz00) =
															((obj_t) BgL_auxz00_2160), BUNSPEC);
													}
													{
														obj_t BgL_l3338z00_875;

														BgL_l3338z00_875 = BgL_callsz00_4;
													BgL_zc3anonymousza33399ze3z83_876:
														if (PAIRP(BgL_l3338z00_875))
															{	/* Tailc/walk.scm 88 */
																{	/* Tailc/walk.scm 89 */
																	obj_t BgL_callz00_878;

																	BgL_callz00_878 = CAR(BgL_l3338z00_875);
																	{	/* Tailc/walk.scm 89 */
																		obj_t BgL_locz00_879;

																		{
																			BgL_nodez00_bglt BgL_auxz00_2166;

																			BgL_auxz00_2166 =
																				(BgL_nodez00_bglt) (BgL_callz00_878);
																			BgL_locz00_879 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_2166))->BgL_locz00);
																		}
																		{	/* Tailc/walk.scm 89 */
																			BgL_varz00_bglt BgL_varz00_880;

																			{	/* Tailc/walk.scm 92 */
																				BgL_typez00_bglt BgL_arg3401z00_882;

																				{
																					BgL_variablez00_bglt BgL_auxz00_2169;

																					BgL_auxz00_2169 =
																						(BgL_variablez00_bglt)
																						(BgL_localz00_871);
																					BgL_arg3401z00_882 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_2169))->
																						BgL_typez00);
																				}
																				BgL_varz00_880 =
																					BGl_makezd2varzd2zzast_nodez00
																					(BgL_locz00_879, BgL_arg3401z00_882,
																					(BgL_variablez00_bglt)
																					(BgL_localz00_871));
																			}
																			{	/* Tailc/walk.scm 90 */

																				{
																					BgL_appz00_bglt BgL_auxz00_2174;

																					BgL_auxz00_2174 =
																						(BgL_appz00_bglt) (BgL_callz00_878);
																					((((BgL_appz00_bglt)
																								CREF(BgL_auxz00_2174))->
																							BgL_funz00) =
																						((BgL_varz00_bglt) BgL_varz00_880),
																						BUNSPEC);
																				}
																			}
																		}
																	}
																}
																{
																	obj_t BgL_l3338z00_2177;

																	BgL_l3338z00_2177 = CDR(BgL_l3338z00_875);
																	BgL_l3338z00_875 = BgL_l3338z00_2177;
																	goto BgL_zc3anonymousza33399ze3z83_876;
																}
															}
														else
															{	/* Tailc/walk.scm 88 */
																((bool_t) 1);
															}
													}
													return BGl_funz00zzast_varz00;
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



/* object-init */
	obj_t BGl_objectzd2initzd2zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			{	/* Tailc/walk.scm 25 */
				obj_t BgL_arg3445z00_943;

				obj_t BgL_arg3446z00_944;

				obj_t BgL_arg3449z00_947;

				BgL_arg3445z00_943 = CNST_TABLE_REF(((long) 1));
				BgL_arg3446z00_944 = BGl_localz00zzast_varz00;
				{	/* Tailc/walk.scm 25 */
					obj_t BgL_v3340z00_948;

					BgL_v3340z00_948 = create_vector((int) (((long) 0)));
					BgL_arg3449z00_947 = BgL_v3340z00_948;
				}
				BGl_localzd2tailzd2zztailc_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3445z00_943,
					BgL_arg3446z00_944, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2localzd2tailzd2envz80zztailc_walkz00,
					BGl_localzd2tailzd2nilzd2envzd2zztailc_walkz00,
					BGl_localzd2tailzf3zd2envzf3zztailc_walkz00, ((long) 443659219),
					BFALSE, BFALSE, BgL_arg3449z00_947);
			}
			return (BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _local-tail? */
	obj_t BGl__localzd2tailzf3z21zztailc_walkz00(obj_t BgL_envz00_1883,
		obj_t BgL_obj3265z00_1884)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3265z00_1884,
					BGl_localzd2tailzd2zztailc_walkz00));
		}
	}



/* widening-local-tail */
	BgL_localzd2tailzd2_bglt BGl_wideningzd2localzd2tailz00zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			{	/* Tailc/walk.scm 25 */
				BgL_localzd2tailzd2_bglt BgL_new3242z00_949;

				BgL_new3242z00_949 =
					((BgL_localzd2tailzd2_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_localzd2tailzd2_bgl))));
				return BgL_new3242z00_949;
			}
		}
	}



/* _%allocate-local-tail */
	obj_t BGl__z52allocatezd2localzd2tailz52zztailc_walkz00(obj_t BgL_envz00_1881)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			{	/* Tailc/walk.scm 25 */
				BgL_localz00_bglt BgL_auxz00_2186;

				{	/* Tailc/walk.scm 25 */
					BgL_localz00_bglt BgL_res3606z00_1949;

					{	/* Tailc/walk.scm 25 */
						BgL_localz00_bglt BgL_new3258z00_1947;

						BgL_new3258z00_1947 =
							((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_localz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3258z00_1947),
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzd2tailzd2zztailc_walkz00));
						{	/* Tailc/walk.scm 25 */
							BgL_objectz00_bglt BgL_auxz00_2191;

							BgL_auxz00_2191 = (BgL_objectz00_bglt) (BgL_new3258z00_1947);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2191, BFALSE);
						}
						BgL_res3606z00_1949 = BgL_new3258z00_1947;
					}
					BgL_auxz00_2186 = BgL_res3606z00_1949;
				}
				return (obj_t) (BgL_auxz00_2186);
			}
		}
	}



/* local-tail-nil */
	BgL_localzd2tailzd2_bglt BGl_localzd2tailzd2nilz00zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			if ((BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00 == BUNSPEC))
				{	/* Tailc/walk.scm 25 */
					{	/* Tailc/walk.scm 25 */
						BgL_localz00_bglt BgL_res3554z00_1558;

						{	/* Tailc/walk.scm 25 */
							BgL_localz00_bglt BgL_new1810z00_1554;

							BgL_new1810z00_1554 =
								((BgL_localz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1810z00_1554),
								BGl_classzd2numzd2zz__objectz00(BGl_localz00zzast_varz00));
							{	/* Tailc/walk.scm 25 */
								BgL_objectz00_bglt BgL_auxz00_2201;

								BgL_auxz00_2201 = (BgL_objectz00_bglt) (BgL_new1810z00_1554);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2201, BFALSE);
							}
							BgL_res3554z00_1558 = BgL_new1810z00_1554;
						}
						BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00 =
							(obj_t) (BgL_res3554z00_1558);
					}
					{	/* Tailc/walk.scm 25 */
						obj_t BgL_arg3454z00_957;

						BgL_typez00_bglt BgL_arg3455z00_958;

						BgL_valuez00_bglt BgL_arg3456z00_959;

						BgL_arg3454z00_957 = CNST_TABLE_REF(((long) 2));
						BgL_arg3455z00_958 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg3456z00_959 = BGl_valuezd2nilzd2zzast_varz00();
						{	/* Tailc/walk.scm 25 */
							BgL_localz00_bglt BgL_res3555z00_1580;

							{	/* Tailc/walk.scm 25 */
								BgL_localz00_bglt BgL_new1798z00_1559;

								BgL_new1798z00_1559 =
									(BgL_localz00_bglt)
									(BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00);
								{	/* Tailc/walk.scm 25 */
									obj_t BgL_id1788z00_1570;

									obj_t BgL_name1789z00_1571;

									BgL_typez00_bglt BgL_type1790z00_1572;

									BgL_valuez00_bglt BgL_value1791z00_1573;

									obj_t BgL_access1792z00_1574;

									obj_t BgL_fastzd2alpha1793zd2_1575;

									obj_t BgL_removable1794z00_1576;

									long BgL_occurrence1795z00_1577;

									bool_t BgL_userzf31796zf3_1578;

									long BgL_key1797z00_1579;

									BgL_id1788z00_1570 = BgL_arg3454z00_957;
									BgL_name1789z00_1571 = BUNSPEC;
									BgL_type1790z00_1572 = BgL_arg3455z00_958;
									BgL_value1791z00_1573 = BgL_arg3456z00_959;
									BgL_access1792z00_1574 = BUNSPEC;
									BgL_fastzd2alpha1793zd2_1575 = BUNSPEC;
									BgL_removable1794z00_1576 = BUNSPEC;
									BgL_occurrence1795z00_1577 = ((long) 0);
									BgL_userzf31796zf3_1578 = ((bool_t) 0);
									BgL_key1797z00_1579 = ((long) 0);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_idz00) = ((obj_t) BgL_id1788z00_1570), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_namez00) = ((obj_t) BgL_name1789z00_1571), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1790z00_1572), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1791z00_1573), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_accessz00) =
										((obj_t) BgL_access1792z00_1574), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1793zd2_1575), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_removablez00) =
										((obj_t) BgL_removable1794z00_1576), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1795z00_1577), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31796zf3_1578), BUNSPEC);
									((((BgL_localz00_bglt) CREF(BgL_new1798z00_1559))->
											BgL_keyz00) = ((long) BgL_key1797z00_1579), BUNSPEC);
									BgL_res3555z00_1580 = BgL_new1798z00_1559;
							}} BgL_res3555z00_1580;
					}}
					{	/* Tailc/walk.scm 25 */
						long BgL_arg3459z00_962;

						BgL_arg3459z00_962 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_localzd2tailzd2zztailc_walkz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00),
							BgL_arg3459z00_962);
					}
					{	/* Tailc/walk.scm 25 */
						BgL_localzd2tailzd2_bglt BgL_arg3460z00_963;

						BgL_arg3460z00_963 =
							BGl_wideningzd2localzd2tailz00zztailc_walkz00();
						{	/* Tailc/walk.scm 25 */
							obj_t BgL_auxz00_2225;

							BgL_objectz00_bglt BgL_auxz00_2223;

							BgL_auxz00_2225 = (obj_t) (BgL_arg3460z00_963);
							BgL_auxz00_2223 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2223, BgL_auxz00_2225);
				}}}
			else
				{	/* Tailc/walk.scm 25 */
					BFALSE;
				}
			return
				(BgL_localzd2tailzd2_bglt)
				(BGl_z52thezd2localzd2tailzd2nilz80zztailc_walkz00);
		}
	}



/* _local-tail-nil */
	obj_t BGl__localzd2tailzd2nilz00zztailc_walkz00(obj_t BgL_envz00_1882)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			return (obj_t) (BGl_localzd2tailzd2nilz00zztailc_walkz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_getzd2tailzd2callszd2defau3341zd2envz00zztailc_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string3589z00zztailc_walkz00);
		}
	}



/* get-tail-calls */
	obj_t BGl_getzd2tailzd2callsz00zztailc_walkz00(BgL_nodez00_bglt BgL_nz00_5,
		BgL_variablez00_bglt BgL_hz00_6, obj_t BgL_tailsz00_7)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 105 */
			{	/* Tailc/walk.scm 105 */
				obj_t BgL_method3342z00_1597;

				{	/* Tailc/walk.scm 105 */
					BgL_objectz00_bglt BgL_objz00_1598;

					BgL_objz00_1598 = (BgL_objectz00_bglt) (BgL_nz00_5);
					{	/* Tailc/walk.scm 105 */
						long BgL_objzd2classzd2numz00_1599;

						BgL_objzd2classzd2numz00_1599 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1598);
						{	/* Tailc/walk.scm 105 */
							obj_t BgL_arg2643z00_1600;

							BgL_arg2643z00_1600 =
								PROCEDURE_REF(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
								(int) (((long) 1)));
							{	/* Tailc/walk.scm 105 */
								obj_t BgL_arrayz00_1602;

								int BgL_offsetz00_1603;

								BgL_arrayz00_1602 = BgL_arg2643z00_1600;
								BgL_offsetz00_1603 = (int) (BgL_objzd2classzd2numz00_1599);
								{	/* Tailc/walk.scm 105 */
									long BgL_offsetz00_1604;

									BgL_offsetz00_1604 =
										((long) (BgL_offsetz00_1603) - OBJECT_TYPE);
									{	/* Tailc/walk.scm 105 */
										long BgL_modz00_1605;

										{	/* Tailc/walk.scm 105 */
											int BgL_arg2645z00_1606;

											BgL_arg2645z00_1606 = (int) (((long) 16));
											{	/* Tailc/walk.scm 105 */
												long BgL_auxz00_2240;

												BgL_auxz00_2240 = (long) (BgL_arg2645z00_1606);
												BgL_modz00_1605 =
													(BgL_offsetz00_1604 / BgL_auxz00_2240);
										}}
										{	/* Tailc/walk.scm 105 */
											long BgL_restz00_1607;

											{	/* Tailc/walk.scm 105 */
												int BgL_arg2644z00_1608;

												BgL_arg2644z00_1608 = (int) (((long) 16));
												{	/* Tailc/walk.scm 105 */
													long BgL_auxz00_2244;

													BgL_auxz00_2244 = (long) (BgL_arg2644z00_1608);
													BgL_restz00_1607 =
														(BgL_offsetz00_1604 % BgL_auxz00_2244);
											}}
											{	/* Tailc/walk.scm 105 */

												BgL_method3342z00_1597 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1602,
														(int) (BgL_modz00_1605)), (int) (BgL_restz00_1607));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3342z00_1597) (BgL_method3342z00_1597,
					(obj_t) (BgL_nz00_5), (obj_t) (BgL_hz00_6), BgL_tailsz00_7, BEOA);
			}
		}
	}



/* _get-tail-calls */
	obj_t BGl__getzd2tailzd2callsz00zztailc_walkz00(obj_t BgL_envz00_1877,
		obj_t BgL_nz00_1878, obj_t BgL_hz00_1879, obj_t BgL_tailsz00_1880)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 105 */
			return
				BGl_getzd2tailzd2callsz00zztailc_walkz00(
				(BgL_nodez00_bglt) (BgL_nz00_1878),
				(BgL_variablez00_bglt) (BgL_hz00_1879), BgL_tailsz00_1880);
		}
	}



/* _get-tail-calls-defau3341 */
	obj_t BGl__getzd2tailzd2callszd2defau3341zd2zztailc_walkz00(obj_t
		BgL_envz00_1885, obj_t BgL_nz00_1886, obj_t BgL_hz00_1887,
		obj_t BgL_tailsz00_1888)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			return BgL_tailsz00_1888;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_closurez00zzast_nodez00, BGl_proc3590z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3591z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc3592z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3593z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_selectz00zzast_nodez00, BGl_proc3594z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3595z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3596z00zztailc_walkz00,
				BGl_string3589z00zztailc_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_localzd2tailzd2zztailc_walkz00, BGl_proc3597z00zztailc_walkz00,
				BGl_string3598z00zztailc_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_localzd2tailzd2zztailc_walkz00, BGl_proc3599z00zztailc_walkz00,
				BGl_string3600z00zztailc_walkz00);
		}
	}



/* struct+object->objec3361 */
	obj_t BGl_structzb2objectzd2ze3objec3361z83zztailc_walkz00(obj_t
		BgL_envz00_1903, obj_t BgL_oz00_1904, obj_t BgL_sz00_1905)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			{
				BgL_localzd2tailzd2_bglt BgL_oz00_1436;

				obj_t BgL_sz00_1437;

				{	/* Tailc/walk.scm 25 */
					BgL_localzd2tailzd2_bglt BgL_auxz00_2267;

					BgL_oz00_1436 = (BgL_localzd2tailzd2_bglt) (BgL_oz00_1904);
					BgL_sz00_1437 = BgL_sz00_1905;
					{

						{	/* Tailc/walk.scm 25 */
							obj_t BgL_old3262z00_1440;

							{	/* Tailc/walk.scm 25 */
								obj_t BgL_nextzd2method3360zd2_1445;

								BgL_nextzd2method3360zd2_1445 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1436),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_localzd2tailzd2zztailc_walkz00);
								if (PROCEDUREP(BgL_nextzd2method3360zd2_1445))
									{	/* Tailc/walk.scm 25 */
										BgL_old3262z00_1440 =
											PROCEDURE_ENTRY(BgL_nextzd2method3360zd2_1445)
											(BgL_nextzd2method3360zd2_1445, (obj_t) (BgL_oz00_1436),
											BgL_sz00_1437, BEOA);
									}
								else
									{	/* Tailc/walk.scm 25 */
										BgL_old3262z00_1440 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1436), BgL_sz00_1437));
									}
							}
							{	/* Tailc/walk.scm 25 */
								BgL_localzd2tailzd2_bglt BgL_new3264z00_1442;

								BgL_new3264z00_1442 =
									((BgL_localzd2tailzd2_bglt) (BgL_old3262z00_1440));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3264z00_1442),
									BGl_classzd2numzd2zz__objectz00
									(BGl_localzd2tailzd2zztailc_walkz00));
								{	/* Tailc/walk.scm 25 */
									BgL_localzd2tailzd2_bglt BgL_arg3547z00_1444;

									BgL_arg3547z00_1444 =
										BGl_wideningzd2localzd2tailz00zztailc_walkz00();
									{	/* Tailc/walk.scm 25 */
										obj_t BgL_auxz00_2285;

										BgL_objectz00_bglt BgL_auxz00_2283;

										BgL_auxz00_2285 = (obj_t) (BgL_arg3547z00_1444);
										BgL_auxz00_2283 =
											(BgL_objectz00_bglt) (BgL_new3264z00_1442);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2283, BgL_auxz00_2285);
									}
								}
								BgL_auxz00_2267 = BgL_new3264z00_1442;
							}
						}
					}
					return (obj_t) (BgL_auxz00_2267);
				}
			}
		}
	}



/* object->struct-local3359 */
	obj_t BGl_objectzd2ze3structzd2local3359ze3zztailc_walkz00(obj_t
		BgL_envz00_1906, obj_t BgL_obj3259z00_1907)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 25 */
			{
				BgL_localzd2tailzd2_bglt BgL_obj3259z00_1428;

				BgL_obj3259z00_1428 = (BgL_localzd2tailzd2_bglt) (BgL_obj3259z00_1907);
				{

					{	/* Tailc/walk.scm 25 */
						obj_t BgL_res3260z00_1431;

						{	/* Tailc/walk.scm 25 */
							obj_t BgL_nextzd2method3358zd2_1434;

							BgL_nextzd2method3358zd2_1434 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3259z00_1428),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_localzd2tailzd2zztailc_walkz00);
							if (PROCEDUREP(BgL_nextzd2method3358zd2_1434))
								{	/* Tailc/walk.scm 25 */
									BgL_res3260z00_1431 =
										PROCEDURE_ENTRY(BgL_nextzd2method3358zd2_1434)
										(BgL_nextzd2method3358zd2_1434,
										(obj_t) (BgL_obj3259z00_1428), BEOA);
								}
							else
								{	/* Tailc/walk.scm 25 */
									BgL_res3260z00_1431 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3259z00_1428));
								}
						}
						{	/* Tailc/walk.scm 25 */
							obj_t BgL_aux3261z00_1432;

							{	/* Tailc/walk.scm 25 */
								obj_t BgL_keyz00_1857;

								BgL_keyz00_1857 = CNST_TABLE_REF(((long) 1));
								BgL_aux3261z00_1432 =
									make_struct(BgL_keyz00_1857, (int) (((long) 0)), BUNSPEC);
							}
							{	/* Tailc/walk.scm 25 */
								int BgL_auxz00_2302;

								BgL_auxz00_2302 = (int) (((long) 0));
								STRUCT_SET(BgL_res3260z00_1431, BgL_auxz00_2302,
									BgL_aux3261z00_1432);
							}
							{	/* Tailc/walk.scm 25 */
								obj_t BgL_auxz00_2305;

								BgL_auxz00_2305 = STRUCT_KEY(BgL_res3260z00_1431);
								STRUCT_KEY_SET(BgL_aux3261z00_1432, BgL_auxz00_2305);
							}
							{	/* Tailc/walk.scm 25 */
								obj_t BgL_kz00_1868;

								BgL_kz00_1868 = CNST_TABLE_REF(((long) 1));
								STRUCT_KEY_SET(BgL_res3260z00_1431, BgL_kz00_1868);
							}
							return BgL_res3260z00_1431;
						}
					}
				}
			}
		}
	}



/* get-tail-calls-let-v3357 */
	obj_t BGl_getzd2tailzd2callszd2letzd2v3357z00zztailc_walkz00(obj_t
		BgL_envz00_1908, obj_t BgL_nodez00_1909, obj_t BgL_hostz00_1910,
		obj_t BgL_tailsz00_1911)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 172 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1419;

				obj_t BgL_hostz00_1420;

				obj_t BgL_tailsz00_1421;

				BgL_nodez00_1419 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_1909);
				BgL_hostz00_1420 = BgL_hostz00_1910;
				BgL_tailsz00_1421 = BgL_tailsz00_1911;
				{	/* Tailc/walk.scm 173 */
					BgL_nodez00_bglt BgL_arg3542z00_1826;

					BgL_arg3542z00_1826 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1419))->BgL_bodyz00);
					{	/* Tailc/walk.scm 173 */
						obj_t BgL_res3578z00_1856;

						{	/* Tailc/walk.scm 173 */
							BgL_variablez00_bglt BgL_hz00_1829;

							obj_t BgL_tailsz00_1830;

							BgL_hz00_1829 = (BgL_variablez00_bglt) (BgL_hostz00_1420);
							BgL_tailsz00_1830 = BgL_tailsz00_1421;
							{	/* Tailc/walk.scm 173 */
								obj_t BgL_method3342z00_1831;

								{	/* Tailc/walk.scm 173 */
									BgL_objectz00_bglt BgL_objz00_1832;

									BgL_objz00_1832 = (BgL_objectz00_bglt) (BgL_arg3542z00_1826);
									{	/* Tailc/walk.scm 173 */
										long BgL_objzd2classzd2numz00_1833;

										BgL_objzd2classzd2numz00_1833 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1832);
										{	/* Tailc/walk.scm 173 */
											obj_t BgL_arg2643z00_1834;

											BgL_arg2643z00_1834 =
												PROCEDURE_REF
												(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
												(int) (((long) 1)));
											{	/* Tailc/walk.scm 173 */
												obj_t BgL_arrayz00_1836;

												int BgL_offsetz00_1837;

												BgL_arrayz00_1836 = BgL_arg2643z00_1834;
												BgL_offsetz00_1837 =
													(int) (BgL_objzd2classzd2numz00_1833);
												{	/* Tailc/walk.scm 173 */
													long BgL_offsetz00_1838;

													BgL_offsetz00_1838 =
														((long) (BgL_offsetz00_1837) - OBJECT_TYPE);
													{	/* Tailc/walk.scm 173 */
														long BgL_modz00_1839;

														{	/* Tailc/walk.scm 173 */
															int BgL_arg2645z00_1840;

															BgL_arg2645z00_1840 = (int) (((long) 16));
															{	/* Tailc/walk.scm 173 */
																long BgL_auxz00_2321;

																BgL_auxz00_2321 = (long) (BgL_arg2645z00_1840);
																BgL_modz00_1839 =
																	(BgL_offsetz00_1838 / BgL_auxz00_2321);
														}}
														{	/* Tailc/walk.scm 173 */
															long BgL_restz00_1841;

															{	/* Tailc/walk.scm 173 */
																int BgL_arg2644z00_1842;

																BgL_arg2644z00_1842 = (int) (((long) 16));
																{	/* Tailc/walk.scm 173 */
																	long BgL_auxz00_2325;

																	BgL_auxz00_2325 =
																		(long) (BgL_arg2644z00_1842);
																	BgL_restz00_1841 =
																		(BgL_offsetz00_1838 % BgL_auxz00_2325);
															}}
															{	/* Tailc/walk.scm 173 */

																BgL_method3342z00_1831 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1836,
																		(int) (BgL_modz00_1839)),
																	(int) (BgL_restz00_1841));
								}}}}}}}}
								BgL_res3578z00_1856 =
									PROCEDURE_ENTRY(BgL_method3342z00_1831)
									(BgL_method3342z00_1831, (obj_t) (BgL_arg3542z00_1826),
									(obj_t) (BgL_hz00_1829), BgL_tailsz00_1830, BEOA);
						}}
						return BgL_res3578z00_1856;
					}
				}
			}
		}
	}



/* get-tail-calls-let-f3355 */
	obj_t BGl_getzd2tailzd2callszd2letzd2f3355z00zztailc_walkz00(obj_t
		BgL_envz00_1912, obj_t BgL_nodez00_1913, obj_t BgL_hostz00_1914,
		obj_t BgL_tailsz00_1915)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 162 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1410;

				obj_t BgL_hostz00_1411;

				obj_t BgL_tailsz00_1412;

				BgL_nodez00_1410 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_1913);
				BgL_hostz00_1411 = BgL_hostz00_1914;
				BgL_tailsz00_1412 = BgL_tailsz00_1915;
				{	/* Tailc/walk.scm 163 */
					BgL_nodez00_bglt BgL_arg3540z00_1794;

					BgL_arg3540z00_1794 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1410))->BgL_bodyz00);
					{	/* Tailc/walk.scm 163 */
						obj_t BgL_res3575z00_1824;

						{	/* Tailc/walk.scm 163 */
							BgL_variablez00_bglt BgL_hz00_1797;

							obj_t BgL_tailsz00_1798;

							BgL_hz00_1797 = (BgL_variablez00_bglt) (BgL_hostz00_1411);
							BgL_tailsz00_1798 = BgL_tailsz00_1412;
							{	/* Tailc/walk.scm 163 */
								obj_t BgL_method3342z00_1799;

								{	/* Tailc/walk.scm 163 */
									BgL_objectz00_bglt BgL_objz00_1800;

									BgL_objz00_1800 = (BgL_objectz00_bglt) (BgL_arg3540z00_1794);
									{	/* Tailc/walk.scm 163 */
										long BgL_objzd2classzd2numz00_1801;

										BgL_objzd2classzd2numz00_1801 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1800);
										{	/* Tailc/walk.scm 163 */
											obj_t BgL_arg2643z00_1802;

											BgL_arg2643z00_1802 =
												PROCEDURE_REF
												(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
												(int) (((long) 1)));
											{	/* Tailc/walk.scm 163 */
												obj_t BgL_arrayz00_1804;

												int BgL_offsetz00_1805;

												BgL_arrayz00_1804 = BgL_arg2643z00_1802;
												BgL_offsetz00_1805 =
													(int) (BgL_objzd2classzd2numz00_1801);
												{	/* Tailc/walk.scm 163 */
													long BgL_offsetz00_1806;

													BgL_offsetz00_1806 =
														((long) (BgL_offsetz00_1805) - OBJECT_TYPE);
													{	/* Tailc/walk.scm 163 */
														long BgL_modz00_1807;

														{	/* Tailc/walk.scm 163 */
															int BgL_arg2645z00_1808;

															BgL_arg2645z00_1808 = (int) (((long) 16));
															{	/* Tailc/walk.scm 163 */
																long BgL_auxz00_2347;

																BgL_auxz00_2347 = (long) (BgL_arg2645z00_1808);
																BgL_modz00_1807 =
																	(BgL_offsetz00_1806 / BgL_auxz00_2347);
														}}
														{	/* Tailc/walk.scm 163 */
															long BgL_restz00_1809;

															{	/* Tailc/walk.scm 163 */
																int BgL_arg2644z00_1810;

																BgL_arg2644z00_1810 = (int) (((long) 16));
																{	/* Tailc/walk.scm 163 */
																	long BgL_auxz00_2351;

																	BgL_auxz00_2351 =
																		(long) (BgL_arg2644z00_1810);
																	BgL_restz00_1809 =
																		(BgL_offsetz00_1806 % BgL_auxz00_2351);
															}}
															{	/* Tailc/walk.scm 163 */

																BgL_method3342z00_1799 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1804,
																		(int) (BgL_modz00_1807)),
																	(int) (BgL_restz00_1809));
								}}}}}}}}
								BgL_res3575z00_1824 =
									PROCEDURE_ENTRY(BgL_method3342z00_1799)
									(BgL_method3342z00_1799, (obj_t) (BgL_arg3540z00_1794),
									(obj_t) (BgL_hz00_1797), BgL_tailsz00_1798, BEOA);
						}}
						return BgL_res3575z00_1824;
					}
				}
			}
		}
	}



/* get-tail-calls-selec3353 */
	obj_t BGl_getzd2tailzd2callszd2selec3353zd2zztailc_walkz00(obj_t
		BgL_envz00_1916, obj_t BgL_nodez00_1917, obj_t BgL_hostz00_1918,
		obj_t BgL_tailsz00_1919)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 150 */
			{
				BgL_selectz00_bglt BgL_nodez00_1391;

				obj_t BgL_hostz00_1392;

				obj_t BgL_tailsz00_1393;

				BgL_nodez00_1391 = (BgL_selectz00_bglt) (BgL_nodez00_1917);
				BgL_hostz00_1392 = BgL_hostz00_1918;
				BgL_tailsz00_1393 = BgL_tailsz00_1919;
				{	/* Tailc/walk.scm 152 */
					obj_t BgL_g3321z00_1397;

					BgL_g3321z00_1397 =
						(((BgL_selectz00_bglt) CREF(BgL_nodez00_1391))->BgL_clausesz00);
					{
						obj_t BgL_clausesz00_1399;

						obj_t BgL_tailsz00_1400;

						BgL_clausesz00_1399 = BgL_g3321z00_1397;
						BgL_tailsz00_1400 = BgL_tailsz00_1393;
					BgL_zc3anonymousza33532ze3z83_1401:
						if (NULLP(BgL_clausesz00_1399))
							{	/* Tailc/walk.scm 154 */
								return BgL_tailsz00_1400;
							}
						else
							{	/* Tailc/walk.scm 156 */
								obj_t BgL_arg3535z00_1403;

								obj_t BgL_arg3536z00_1404;

								BgL_arg3535z00_1403 = CDR(BgL_clausesz00_1399);
								{	/* Tailc/walk.scm 157 */
									obj_t BgL_arg3537z00_1405;

									BgL_arg3537z00_1405 = CDR(CAR(BgL_clausesz00_1399));
									{	/* Tailc/walk.scm 157 */
										obj_t BgL_res3572z00_1792;

										{	/* Tailc/walk.scm 157 */
											BgL_nodez00_bglt BgL_nz00_1764;

											BgL_variablez00_bglt BgL_hz00_1765;

											obj_t BgL_tailsz00_1766;

											BgL_nz00_1764 = (BgL_nodez00_bglt) (BgL_arg3537z00_1405);
											BgL_hz00_1765 = (BgL_variablez00_bglt) (BgL_hostz00_1392);
											BgL_tailsz00_1766 = BgL_tailsz00_1400;
											{	/* Tailc/walk.scm 157 */
												obj_t BgL_method3342z00_1767;

												{	/* Tailc/walk.scm 157 */
													BgL_objectz00_bglt BgL_objz00_1768;

													BgL_objz00_1768 =
														(BgL_objectz00_bglt) (BgL_nz00_1764);
													{	/* Tailc/walk.scm 157 */
														long BgL_objzd2classzd2numz00_1769;

														BgL_objzd2classzd2numz00_1769 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1768);
														{	/* Tailc/walk.scm 157 */
															obj_t BgL_arg2643z00_1770;

															BgL_arg2643z00_1770 =
																PROCEDURE_REF
																(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
																(int) (((long) 1)));
															{	/* Tailc/walk.scm 157 */
																obj_t BgL_arrayz00_1772;

																int BgL_offsetz00_1773;

																BgL_arrayz00_1772 = BgL_arg2643z00_1770;
																BgL_offsetz00_1773 =
																	(int) (BgL_objzd2classzd2numz00_1769);
																{	/* Tailc/walk.scm 157 */
																	long BgL_offsetz00_1774;

																	BgL_offsetz00_1774 =
																		((long) (BgL_offsetz00_1773) - OBJECT_TYPE);
																	{	/* Tailc/walk.scm 157 */
																		long BgL_modz00_1775;

																		{	/* Tailc/walk.scm 157 */
																			int BgL_arg2645z00_1776;

																			BgL_arg2645z00_1776 = (int) (((long) 16));
																			{	/* Tailc/walk.scm 157 */
																				long BgL_auxz00_2379;

																				BgL_auxz00_2379 =
																					(long) (BgL_arg2645z00_1776);
																				BgL_modz00_1775 =
																					(BgL_offsetz00_1774 /
																					BgL_auxz00_2379);
																		}}
																		{	/* Tailc/walk.scm 157 */
																			long BgL_restz00_1777;

																			{	/* Tailc/walk.scm 157 */
																				int BgL_arg2644z00_1778;

																				BgL_arg2644z00_1778 =
																					(int) (((long) 16));
																				{	/* Tailc/walk.scm 157 */
																					long BgL_auxz00_2383;

																					BgL_auxz00_2383 =
																						(long) (BgL_arg2644z00_1778);
																					BgL_restz00_1777 =
																						(BgL_offsetz00_1774 %
																						BgL_auxz00_2383);
																			}}
																			{	/* Tailc/walk.scm 157 */

																				BgL_method3342z00_1767 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1772,
																						(int) (BgL_modz00_1775)),
																					(int) (BgL_restz00_1777));
												}}}}}}}}
												BgL_res3572z00_1792 =
													PROCEDURE_ENTRY(BgL_method3342z00_1767)
													(BgL_method3342z00_1767, (obj_t) (BgL_nz00_1764),
													(obj_t) (BgL_hz00_1765), BgL_tailsz00_1766, BEOA);
										}}
										BgL_arg3536z00_1404 = BgL_res3572z00_1792;
								}}
								{
									obj_t BgL_tailsz00_2395;

									obj_t BgL_clausesz00_2394;

									BgL_clausesz00_2394 = BgL_arg3535z00_1403;
									BgL_tailsz00_2395 = BgL_arg3536z00_1404;
									BgL_tailsz00_1400 = BgL_tailsz00_2395;
									BgL_clausesz00_1399 = BgL_clausesz00_2394;
									goto BgL_zc3anonymousza33532ze3z83_1401;
								}
							}
					}
				}
			}
		}
	}



/* get-tail-calls-condi3351 */
	obj_t BGl_getzd2tailzd2callszd2condi3351zd2zztailc_walkz00(obj_t
		BgL_envz00_1920, obj_t BgL_nodez00_1921, obj_t BgL_hostz00_1922,
		obj_t BgL_tailsz00_1923)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 143 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1380;

				obj_t BgL_hostz00_1381;

				obj_t BgL_tailsz00_1382;

				BgL_nodez00_1380 = (BgL_conditionalz00_bglt) (BgL_nodez00_1921);
				BgL_hostz00_1381 = BgL_hostz00_1922;
				BgL_tailsz00_1382 = BgL_tailsz00_1923;
				{	/* Tailc/walk.scm 144 */
					BgL_nodez00_bglt BgL_arg3528z00_1696;

					obj_t BgL_arg3529z00_1697;

					BgL_arg3528z00_1696 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1380))->BgL_truez00);
					{	/* Tailc/walk.scm 144 */
						BgL_nodez00_bglt BgL_arg3530z00_1698;

						BgL_arg3530z00_1698 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1380))->
							BgL_falsez00);
						{	/* Tailc/walk.scm 144 */
							obj_t BgL_res3566z00_1729;

							{	/* Tailc/walk.scm 144 */
								BgL_variablez00_bglt BgL_hz00_1702;

								obj_t BgL_tailsz00_1703;

								BgL_hz00_1702 = (BgL_variablez00_bglt) (BgL_hostz00_1381);
								BgL_tailsz00_1703 = BgL_tailsz00_1382;
								{	/* Tailc/walk.scm 144 */
									obj_t BgL_method3342z00_1704;

									{	/* Tailc/walk.scm 144 */
										BgL_objectz00_bglt BgL_objz00_1705;

										BgL_objz00_1705 =
											(BgL_objectz00_bglt) (BgL_arg3530z00_1698);
										{	/* Tailc/walk.scm 144 */
											long BgL_objzd2classzd2numz00_1706;

											BgL_objzd2classzd2numz00_1706 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1705);
											{	/* Tailc/walk.scm 144 */
												obj_t BgL_arg2643z00_1707;

												BgL_arg2643z00_1707 =
													PROCEDURE_REF
													(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
													(int) (((long) 1)));
												{	/* Tailc/walk.scm 144 */
													obj_t BgL_arrayz00_1709;

													int BgL_offsetz00_1710;

													BgL_arrayz00_1709 = BgL_arg2643z00_1707;
													BgL_offsetz00_1710 =
														(int) (BgL_objzd2classzd2numz00_1706);
													{	/* Tailc/walk.scm 144 */
														long BgL_offsetz00_1711;

														BgL_offsetz00_1711 =
															((long) (BgL_offsetz00_1710) - OBJECT_TYPE);
														{	/* Tailc/walk.scm 144 */
															long BgL_modz00_1712;

															{	/* Tailc/walk.scm 144 */
																int BgL_arg2645z00_1713;

																BgL_arg2645z00_1713 = (int) (((long) 16));
																{	/* Tailc/walk.scm 144 */
																	long BgL_auxz00_2408;

																	BgL_auxz00_2408 =
																		(long) (BgL_arg2645z00_1713);
																	BgL_modz00_1712 =
																		(BgL_offsetz00_1711 / BgL_auxz00_2408);
															}}
															{	/* Tailc/walk.scm 144 */
																long BgL_restz00_1714;

																{	/* Tailc/walk.scm 144 */
																	int BgL_arg2644z00_1715;

																	BgL_arg2644z00_1715 = (int) (((long) 16));
																	{	/* Tailc/walk.scm 144 */
																		long BgL_auxz00_2412;

																		BgL_auxz00_2412 =
																			(long) (BgL_arg2644z00_1715);
																		BgL_restz00_1714 =
																			(BgL_offsetz00_1711 % BgL_auxz00_2412);
																}}
																{	/* Tailc/walk.scm 144 */

																	BgL_method3342z00_1704 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1709,
																			(int) (BgL_modz00_1712)),
																		(int) (BgL_restz00_1714));
									}}}}}}}}
									BgL_res3566z00_1729 =
										PROCEDURE_ENTRY(BgL_method3342z00_1704)
										(BgL_method3342z00_1704, (obj_t) (BgL_arg3530z00_1698),
										(obj_t) (BgL_hz00_1702), BgL_tailsz00_1703, BEOA);
							}}
							BgL_arg3529z00_1697 = BgL_res3566z00_1729;
					}}
					{	/* Tailc/walk.scm 144 */
						obj_t BgL_res3569z00_1758;

						{	/* Tailc/walk.scm 144 */
							BgL_variablez00_bglt BgL_hz00_1731;

							BgL_hz00_1731 = (BgL_variablez00_bglt) (BgL_hostz00_1381);
							{	/* Tailc/walk.scm 144 */
								obj_t BgL_method3342z00_1733;

								{	/* Tailc/walk.scm 144 */
									BgL_objectz00_bglt BgL_objz00_1734;

									BgL_objz00_1734 = (BgL_objectz00_bglt) (BgL_arg3528z00_1696);
									{	/* Tailc/walk.scm 144 */
										long BgL_objzd2classzd2numz00_1735;

										BgL_objzd2classzd2numz00_1735 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1734);
										{	/* Tailc/walk.scm 144 */
											obj_t BgL_arg2643z00_1736;

											BgL_arg2643z00_1736 =
												PROCEDURE_REF
												(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
												(int) (((long) 1)));
											{	/* Tailc/walk.scm 144 */
												obj_t BgL_arrayz00_1738;

												int BgL_offsetz00_1739;

												BgL_arrayz00_1738 = BgL_arg2643z00_1736;
												BgL_offsetz00_1739 =
													(int) (BgL_objzd2classzd2numz00_1735);
												{	/* Tailc/walk.scm 144 */
													long BgL_offsetz00_1740;

													BgL_offsetz00_1740 =
														((long) (BgL_offsetz00_1739) - OBJECT_TYPE);
													{	/* Tailc/walk.scm 144 */
														long BgL_modz00_1741;

														{	/* Tailc/walk.scm 144 */
															int BgL_arg2645z00_1742;

															BgL_arg2645z00_1742 = (int) (((long) 16));
															{	/* Tailc/walk.scm 144 */
																long BgL_auxz00_2432;

																BgL_auxz00_2432 = (long) (BgL_arg2645z00_1742);
																BgL_modz00_1741 =
																	(BgL_offsetz00_1740 / BgL_auxz00_2432);
														}}
														{	/* Tailc/walk.scm 144 */
															long BgL_restz00_1743;

															{	/* Tailc/walk.scm 144 */
																int BgL_arg2644z00_1744;

																BgL_arg2644z00_1744 = (int) (((long) 16));
																{	/* Tailc/walk.scm 144 */
																	long BgL_auxz00_2436;

																	BgL_auxz00_2436 =
																		(long) (BgL_arg2644z00_1744);
																	BgL_restz00_1743 =
																		(BgL_offsetz00_1740 % BgL_auxz00_2436);
															}}
															{	/* Tailc/walk.scm 144 */

																BgL_method3342z00_1733 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1738,
																		(int) (BgL_modz00_1741)),
																	(int) (BgL_restz00_1743));
								}}}}}}}}
								BgL_res3569z00_1758 =
									PROCEDURE_ENTRY(BgL_method3342z00_1733)
									(BgL_method3342z00_1733, (obj_t) (BgL_arg3528z00_1696),
									(obj_t) (BgL_hz00_1731), BgL_arg3529z00_1697, BEOA);
						}}
						return BgL_res3569z00_1758;
					}
				}
			}
		}
	}



/* get-tail-calls-app3348 */
	obj_t BGl_getzd2tailzd2callszd2app3348zd2zztailc_walkz00(obj_t
		BgL_envz00_1924, obj_t BgL_nodez00_1925, obj_t BgL_hostz00_1926,
		obj_t BgL_tailsz00_1927)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 126 */
			{
				BgL_appz00_bglt BgL_nodez00_1362;

				obj_t BgL_hostz00_1363;

				obj_t BgL_tailsz00_1364;

				BgL_nodez00_1362 = (BgL_appz00_bglt) (BgL_nodez00_1925);
				BgL_hostz00_1363 = BgL_hostz00_1926;
				BgL_tailsz00_1364 = BgL_tailsz00_1927;
				{	/* Tailc/walk.scm 128 */
					BgL_variablez00_bglt BgL_calleez00_1368;

					{	/* Tailc/walk.scm 128 */
						BgL_varz00_bglt BgL_obj2155z00_1659;

						BgL_obj2155z00_1659 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1362))->BgL_funz00);
						BgL_calleez00_1368 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1659))->BgL_variablez00);
					}
					if (((obj_t) (BgL_calleez00_1368) == BgL_hostz00_1363))
						{	/* Tailc/walk.scm 130 */
							return MAKE_PAIR((obj_t) (BgL_nodez00_1362), BgL_tailsz00_1364);
						}
					else
						{	/* Tailc/walk.scm 132 */
							bool_t BgL_testz00_2455;

							{	/* Tailc/walk.scm 132 */
								obj_t BgL_obj3265z00_1660;

								BgL_obj3265z00_1660 = (obj_t) (BgL_calleez00_1368);
								BgL_testz00_2455 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3265z00_1660,
									BGl_localzd2tailzd2zztailc_walkz00);
							}
							if (BgL_testz00_2455)
								{	/* Tailc/walk.scm 132 */
									return BgL_tailsz00_1364;
								}
							else
								{	/* Tailc/walk.scm 134 */
									bool_t BgL_testz00_2458;

									{	/* Tailc/walk.scm 134 */
										obj_t BgL_obj1812z00_1661;

										BgL_obj1812z00_1661 = (obj_t) (BgL_calleez00_1368);
										BgL_testz00_2458 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1661,
											BGl_localz00zzast_varz00);
									}
									if (BgL_testz00_2458)
										{	/* Tailc/walk.scm 134 */
											{	/* Tailc/walk.scm 135 */
												BgL_localz00_bglt BgL_obj3316z00_1372;

												BgL_obj3316z00_1372 =
													((BgL_localz00_bglt)
													(BgL_localz00_bglt) (BgL_calleez00_1368));
												{	/* Tailc/walk.scm 135 */
													BgL_localzd2tailzd2_bglt BgL_arg3522z00_1373;

													BgL_arg3522z00_1373 =
														BGl_wideningzd2localzd2tailz00zztailc_walkz00();
													{	/* Tailc/walk.scm 135 */
														obj_t BgL_auxz00_2466;

														BgL_objectz00_bglt BgL_auxz00_2464;

														BgL_auxz00_2466 = (obj_t) (BgL_arg3522z00_1373);
														BgL_auxz00_2464 =
															(BgL_objectz00_bglt) (BgL_obj3316z00_1372);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2464,
															BgL_auxz00_2466);
													}
												}
												BGL_OBJECT_CLASS_NUM_SET(
													(BgL_objectz00_bglt) (BgL_obj3316z00_1372),
													BGl_classzd2numzd2zz__objectz00
													(BGl_localzd2tailzd2zztailc_walkz00));
												BgL_obj3316z00_1372;
											}
											{	/* Tailc/walk.scm 136 */
												obj_t BgL_arg3524z00_1375;

												{	/* Tailc/walk.scm 136 */
													BgL_sfunz00_bglt BgL_obj1884z00_1665;

													BgL_obj1884z00_1665 =
														(BgL_sfunz00_bglt) (
														(((BgL_variablez00_bglt) CREF(BgL_calleez00_1368))->
															BgL_valuez00));
													BgL_arg3524z00_1375 =
														(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1665))->
														BgL_bodyz00);
												}
												{	/* Tailc/walk.scm 136 */
													obj_t BgL_res3563z00_1694;

													{	/* Tailc/walk.scm 136 */
														BgL_nodez00_bglt BgL_nz00_1666;

														BgL_variablez00_bglt BgL_hz00_1667;

														obj_t BgL_tailsz00_1668;

														BgL_nz00_1666 =
															(BgL_nodez00_bglt) (BgL_arg3524z00_1375);
														BgL_hz00_1667 =
															(BgL_variablez00_bglt) (BgL_hostz00_1363);
														BgL_tailsz00_1668 = BgL_tailsz00_1364;
														{	/* Tailc/walk.scm 136 */
															obj_t BgL_method3342z00_1669;

															{	/* Tailc/walk.scm 136 */
																BgL_objectz00_bglt BgL_objz00_1670;

																BgL_objz00_1670 =
																	(BgL_objectz00_bglt) (BgL_nz00_1666);
																{	/* Tailc/walk.scm 136 */
																	long BgL_objzd2classzd2numz00_1671;

																	BgL_objzd2classzd2numz00_1671 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1670);
																	{	/* Tailc/walk.scm 136 */
																		obj_t BgL_arg2643z00_1672;

																		BgL_arg2643z00_1672 =
																			PROCEDURE_REF
																			(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
																			(int) (((long) 1)));
																		{	/* Tailc/walk.scm 136 */
																			obj_t BgL_arrayz00_1674;

																			int BgL_offsetz00_1675;

																			BgL_arrayz00_1674 = BgL_arg2643z00_1672;
																			BgL_offsetz00_1675 =
																				(int) (BgL_objzd2classzd2numz00_1671);
																			{	/* Tailc/walk.scm 136 */
																				long BgL_offsetz00_1676;

																				BgL_offsetz00_1676 =
																					(
																					(long) (BgL_offsetz00_1675) -
																					OBJECT_TYPE);
																				{	/* Tailc/walk.scm 136 */
																					long BgL_modz00_1677;

																					{	/* Tailc/walk.scm 136 */
																						int BgL_arg2645z00_1678;

																						BgL_arg2645z00_1678 =
																							(int) (((long) 16));
																						{	/* Tailc/walk.scm 136 */
																							long BgL_auxz00_2485;

																							BgL_auxz00_2485 =
																								(long) (BgL_arg2645z00_1678);
																							BgL_modz00_1677 =
																								(BgL_offsetz00_1676 /
																								BgL_auxz00_2485);
																					}}
																					{	/* Tailc/walk.scm 136 */
																						long BgL_restz00_1679;

																						{	/* Tailc/walk.scm 136 */
																							int BgL_arg2644z00_1680;

																							BgL_arg2644z00_1680 =
																								(int) (((long) 16));
																							{	/* Tailc/walk.scm 136 */
																								long BgL_auxz00_2489;

																								BgL_auxz00_2489 =
																									(long) (BgL_arg2644z00_1680);
																								BgL_restz00_1679 =
																									(BgL_offsetz00_1676 %
																									BgL_auxz00_2489);
																						}}
																						{	/* Tailc/walk.scm 136 */

																							BgL_method3342z00_1669 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1674,
																									(int) (BgL_modz00_1677)),
																								(int) (BgL_restz00_1679));
															}}}}}}}}
															BgL_res3563z00_1694 =
																PROCEDURE_ENTRY(BgL_method3342z00_1669)
																(BgL_method3342z00_1669,
																(obj_t) (BgL_nz00_1666),
																(obj_t) (BgL_hz00_1667), BgL_tailsz00_1668,
																BEOA);
													}}
													return BgL_res3563z00_1694;
												}
											}
										}
									else
										{	/* Tailc/walk.scm 134 */
											return BgL_tailsz00_1364;
										}
								}
						}
				}
			}
		}
	}



/* get-tail-calls-seque3346 */
	obj_t BGl_getzd2tailzd2callszd2seque3346zd2zztailc_walkz00(obj_t
		BgL_envz00_1928, obj_t BgL_nodez00_1929, obj_t BgL_hostz00_1930,
		obj_t BgL_tailsz00_1931)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 117 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1349;

				obj_t BgL_hostz00_1350;

				obj_t BgL_tailsz00_1351;

				BgL_nodez00_1349 = (BgL_sequencez00_bglt) (BgL_nodez00_1929);
				BgL_hostz00_1350 = BgL_hostz00_1930;
				BgL_tailsz00_1351 = BgL_tailsz00_1931;
				if (NULLP(
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1349))->BgL_nodesz00)))
					{	/* Tailc/walk.scm 119 */
						return BgL_tailsz00_1351;
					}
				else
					{	/* Tailc/walk.scm 121 */
						obj_t BgL_arg3513z00_1356;

						BgL_arg3513z00_1356 =
							CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
								(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1349))->
									BgL_nodesz00)));
						{	/* Tailc/walk.scm 121 */
							obj_t BgL_res3560z00_1657;

							{	/* Tailc/walk.scm 121 */
								BgL_nodez00_bglt BgL_nz00_1629;

								BgL_variablez00_bglt BgL_hz00_1630;

								obj_t BgL_tailsz00_1631;

								BgL_nz00_1629 = (BgL_nodez00_bglt) (BgL_arg3513z00_1356);
								BgL_hz00_1630 = (BgL_variablez00_bglt) (BgL_hostz00_1350);
								BgL_tailsz00_1631 = BgL_tailsz00_1351;
								{	/* Tailc/walk.scm 121 */
									obj_t BgL_method3342z00_1632;

									{	/* Tailc/walk.scm 121 */
										BgL_objectz00_bglt BgL_objz00_1633;

										BgL_objz00_1633 = (BgL_objectz00_bglt) (BgL_nz00_1629);
										{	/* Tailc/walk.scm 121 */
											long BgL_objzd2classzd2numz00_1634;

											BgL_objzd2classzd2numz00_1634 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1633);
											{	/* Tailc/walk.scm 121 */
												obj_t BgL_arg2643z00_1635;

												BgL_arg2643z00_1635 =
													PROCEDURE_REF
													(BGl_getzd2tailzd2callszd2envzd2zztailc_walkz00,
													(int) (((long) 1)));
												{	/* Tailc/walk.scm 121 */
													obj_t BgL_arrayz00_1637;

													int BgL_offsetz00_1638;

													BgL_arrayz00_1637 = BgL_arg2643z00_1635;
													BgL_offsetz00_1638 =
														(int) (BgL_objzd2classzd2numz00_1634);
													{	/* Tailc/walk.scm 121 */
														long BgL_offsetz00_1639;

														BgL_offsetz00_1639 =
															((long) (BgL_offsetz00_1638) - OBJECT_TYPE);
														{	/* Tailc/walk.scm 121 */
															long BgL_modz00_1640;

															{	/* Tailc/walk.scm 121 */
																int BgL_arg2645z00_1641;

																BgL_arg2645z00_1641 = (int) (((long) 16));
																{	/* Tailc/walk.scm 121 */
																	long BgL_auxz00_2517;

																	BgL_auxz00_2517 =
																		(long) (BgL_arg2645z00_1641);
																	BgL_modz00_1640 =
																		(BgL_offsetz00_1639 / BgL_auxz00_2517);
															}}
															{	/* Tailc/walk.scm 121 */
																long BgL_restz00_1642;

																{	/* Tailc/walk.scm 121 */
																	int BgL_arg2644z00_1643;

																	BgL_arg2644z00_1643 = (int) (((long) 16));
																	{	/* Tailc/walk.scm 121 */
																		long BgL_auxz00_2521;

																		BgL_auxz00_2521 =
																			(long) (BgL_arg2644z00_1643);
																		BgL_restz00_1642 =
																			(BgL_offsetz00_1639 % BgL_auxz00_2521);
																}}
																{	/* Tailc/walk.scm 121 */

																	BgL_method3342z00_1632 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1637,
																			(int) (BgL_modz00_1640)),
																		(int) (BgL_restz00_1642));
									}}}}}}}}
									BgL_res3560z00_1657 =
										PROCEDURE_ENTRY(BgL_method3342z00_1632)
										(BgL_method3342z00_1632, (obj_t) (BgL_nz00_1629),
										(obj_t) (BgL_hz00_1630), BgL_tailsz00_1631, BEOA);
							}}
							return BgL_res3560z00_1657;
						}
					}
			}
		}
	}



/* get-tail-calls-closu3344 */
	obj_t BGl_getzd2tailzd2callszd2closu3344zd2zztailc_walkz00(obj_t
		BgL_envz00_1932, obj_t BgL_nodez00_1933, obj_t BgL_hostz00_1934,
		obj_t BgL_tailsz00_1935)
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 111 */
			{
				BgL_closurez00_bglt BgL_nodez00_1339;

				obj_t BgL_hostz00_1340;

				obj_t BgL_tailsz00_1341;

				BgL_nodez00_1339 = (BgL_closurez00_bglt) (BgL_nodez00_1933);
				BgL_hostz00_1340 = BgL_hostz00_1934;
				BgL_tailsz00_1341 = BgL_tailsz00_1935;
				return
					BGl_internalzd2errorzd2zztools_errorz00
					(BGl_string3589z00zztailc_walkz00, BGl_string3601z00zztailc_walkz00,
					BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_1339)));
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztailc_walkz00()
	{
		AN_OBJECT;
		{	/* Tailc/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3602z00zztailc_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
