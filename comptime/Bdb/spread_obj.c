/*===========================================================================*/
/*   (Bdb/spread_obj.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Bdb/spread_obj.scm)*/
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

	typedef struct BgL_appzd2lyzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_funz00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}                  *BgL_appzd2lyzd2_bglt;

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

	typedef struct BgL_castz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_argz00;
	}              *BgL_castz00_bglt;

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

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

	typedef struct BgL_failz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_procz00;
		struct BgL_nodez00_bgl *BgL_msgz00;
		struct BgL_nodez00_bgl *BgL_objz00;
	}              *BgL_failz00_bglt;

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

	typedef struct BgL_setzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
	}                       *BgL_setzd2exzd2itz00_bglt;

	typedef struct BgL_jumpzd2exzd2itz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_nodez00_bgl *BgL_exitz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                        *BgL_jumpzd2exzd2itz00_bglt;

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


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2con3299zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzbdb_spreadzd2objzd2();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2sel3303zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2seq3285zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzbdb_spreadzd2objzd2();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl__spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(obj_t,
		obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2jum3311zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2app3287zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2app3289zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2let3305zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2let3307zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t BGl__bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2cas3295zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbdb_spreadzd2objzd2();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2fun3291zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzbdb_spreadzd2objzd2();
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2box3315zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2box3317zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2mak3313zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2ext3293zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2set3297zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2set3309zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl_spreadzd2objzd2nodez12zd2fai3301zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t
		BGl__spreadzd2objzd2nodez12zd2def3282zc0zzbdb_spreadzd2objzd2(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_GENERIC
		(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
		BgL_bgl__spreadza7d2objza7d23557z00,
		BGl__spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3536z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3558z00,
		BGl_spreadzd2objzd2nodez12zd2seq3285zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3537z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3559z00,
		BGl_spreadzd2objzd2nodez12zd2app3287zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3538z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3560z00,
		BGl_spreadzd2objzd2nodez12zd2app3289zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3540z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3561z00,
		BGl_spreadzd2objzd2nodez12zd2ext3293zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3539z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3562z00,
		BGl_spreadzd2objzd2nodez12zd2fun3291zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3541z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3563z00,
		BGl_spreadzd2objzd2nodez12zd2cas3295zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3542z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3564z00,
		BGl_spreadzd2objzd2nodez12zd2set3297zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3543z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3565z00,
		BGl_spreadzd2objzd2nodez12zd2con3299zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3544z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3566z00,
		BGl_spreadzd2objzd2nodez12zd2fai3301zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3545z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3567z00,
		BGl_spreadzd2objzd2nodez12zd2sel3303zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3546z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3568z00,
		BGl_spreadzd2objzd2nodez12zd2let3305zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3547z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3569z00,
		BGl_spreadzd2objzd2nodez12zd2let3307zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3548z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3570z00,
		BGl_spreadzd2objzd2nodez12zd2set3309zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3550z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3571z00,
		BGl_spreadzd2objzd2nodez12zd2mak3313zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3549z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3572z00,
		BGl_spreadzd2objzd2nodez12zd2jum3311zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3551z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3573z00,
		BGl_spreadzd2objzd2nodez12zd2box3315zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3552z00zzbdb_spreadzd2objzd2,
		BgL_bgl_spreadza7d2objza7d2n3574z00,
		BGl_spreadzd2objzd2nodez12zd2box3317zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bdbzd2spreadzd2objz12zd2envzc0zzbdb_spreadzd2objzd2,
		BgL_bgl__bdbza7d2spreadza7d23575z00,
		BGl__bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3527z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3527za700za7za7b3576za7, "Bdb (obj spreading)", 19);
	      DEFINE_STRING(BGl_string3528z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3528za700za7za7b3577za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3530z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3530za700za7za7b3578za7, " error", 6);
	      DEFINE_STRING(BGl_string3529z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3529za700za7za7b3579za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3531z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3531za700za7za7b3580za7, "s", 1);
	      DEFINE_STRING(BGl_string3532z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3532za700za7za7b3581za7, "", 0);
	      DEFINE_STRING(BGl_string3533z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3533za700za7za7b3582za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string3534z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3534za700za7za7b3583za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string3535z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3535za700za7za7b3584za7, "spread-obj-node!", 16);
	      DEFINE_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3553za700za7za7b3585za7, "bdb_spread-obj", 14);
	      DEFINE_STRING(BGl_string3554z00zzbdb_spreadzd2objzd2,
		BgL_bgl_string3554za700za7za7b3586za7, "done pass-started ", 18);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_spreadzd2objzd2nodez12zd2def3282zd2envz12zzbdb_spreadzd2objzd2,
		BgL_bgl__spreadza7d2objza7d23587z00,
		BGl__spreadzd2objzd2nodez12zd2def3282zc0zzbdb_spreadzd2objzd2, 0L, BUNSPEC,
		1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbdb_spreadzd2objzd2(long
		BgL_checksumz00_2225, char *BgL_fromz00_2226)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2))
				{
					BGl_requirezd2initializa7ationz75zzbdb_spreadzd2objzd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
					BGl_cnstzd2initzd2zzbdb_spreadzd2objzd2();
					BGl_importedzd2moduleszd2initz00zzbdb_spreadzd2objzd2();
					BGl_genericzd2initzd2zzbdb_spreadzd2objzd2();
					BGl_methodzd2initzd2zzbdb_spreadzd2objzd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbdb_spreadzd2objzd2()
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"bdb_spread-obj");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"bdb_spread-obj");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbdb_spreadzd2objzd2()
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			{	/* Bdb/spread_obj.scm 15 */
				obj_t BgL_cportz00_2216;

				BgL_cportz00_2216 =
					bgl_open_input_string(BGl_string3554z00zzbdb_spreadzd2objzd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_2217;

					BgL_iz00_2217 = ((long) 1);
				BgL_loopz00_2218:
					if ((BgL_iz00_2217 == ((long) -1)))
						{	/* Bdb/spread_obj.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Bdb/spread_obj.scm 15 */
							{	/* Bdb/spread_obj.scm 15 */
								obj_t BgL_arg3556z00_2220;

								{	/* Bdb/spread_obj.scm 15 */

									{	/* Bdb/spread_obj.scm 15 */
										obj_t BgL_locationz00_2222;

										BgL_locationz00_2222 = BBOOL(((bool_t) 0));
										{	/* Bdb/spread_obj.scm 15 */

											BgL_arg3556z00_2220 =
												BGl_readz00zz__readerz00(BgL_cportz00_2216,
												BgL_locationz00_2222);
										}
									}
								}
								{	/* Bdb/spread_obj.scm 15 */
									int BgL_auxz00_2247;

									BgL_auxz00_2247 = (int) (BgL_iz00_2217);
									CNST_TABLE_SET(BgL_auxz00_2247, BgL_arg3556z00_2220);
							}}
							{	/* Bdb/spread_obj.scm 15 */
								int BgL_auxz00_2223;

								BgL_auxz00_2223 = (int) ((BgL_iz00_2217 - ((long) 1)));
								{
									long BgL_iz00_2252;

									BgL_iz00_2252 = (long) (BgL_auxz00_2223);
									BgL_iz00_2217 = BgL_iz00_2252;
									goto BgL_loopz00_2218;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbdb_spreadzd2objzd2()
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			return BUNSPEC;
		}
	}



/* bdb-spread-obj! */
	BGL_EXPORTED_DEF obj_t BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 30 */
			{	/* Bdb/spread_obj.scm 31 */
				obj_t BgL_list3318z00_795;

				{	/* Bdb/spread_obj.scm 31 */
					obj_t BgL_arg3320z00_797;

					{	/* Bdb/spread_obj.scm 31 */
						obj_t BgL_arg3324z00_799;

						BgL_arg3324z00_799 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3320z00_797 =
							MAKE_PAIR(BGl_string3527z00zzbdb_spreadzd2objzd2,
							BgL_arg3324z00_799);
					}
					BgL_list3318z00_795 =
						MAKE_PAIR(BGl_string3528z00zzbdb_spreadzd2objzd2,
						BgL_arg3320z00_797);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3318z00_795);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3527z00zzbdb_spreadzd2objzd2;
			{
				obj_t BgL_hooksz00_803;

				obj_t BgL_hnamesz00_804;

				BgL_hooksz00_803 = BNIL;
				BgL_hnamesz00_804 = BNIL;
			BgL_zc3anonymousza33325ze3z83_805:
				if (NULLP(BgL_hooksz00_803))
					{	/* Bdb/spread_obj.scm 31 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Bdb/spread_obj.scm 31 */
						bool_t BgL_testz00_2264;

						{	/* Bdb/spread_obj.scm 31 */
							obj_t BgL_fun3333z00_813;

							BgL_fun3333z00_813 = CAR(BgL_hooksz00_803);
							BgL_testz00_2264 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3333z00_813) (BgL_fun3333z00_813,
									BEOA));
						}
						if (BgL_testz00_2264)
							{
								obj_t BgL_hnamesz00_2271;

								obj_t BgL_hooksz00_2269;

								BgL_hooksz00_2269 = CDR(BgL_hooksz00_803);
								BgL_hnamesz00_2271 = CDR(BgL_hnamesz00_804);
								BgL_hnamesz00_804 = BgL_hnamesz00_2271;
								BgL_hooksz00_803 = BgL_hooksz00_2269;
								goto BgL_zc3anonymousza33325ze3z83_805;
							}
						else
							{	/* Bdb/spread_obj.scm 31 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3527z00zzbdb_spreadzd2objzd2,
									BGl_string3529z00zzbdb_spreadzd2objzd2,
									CAR(BgL_hnamesz00_804));
							}
					}
			}
			{
				obj_t BgL_l3268z00_817;

				BgL_l3268z00_817 = BgL_globalsz00_1;
			BgL_zc3anonymousza33335ze3z83_818:
				if (PAIRP(BgL_l3268z00_817))
					{	/* Bdb/spread_obj.scm 32 */
						BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(CAR
							(BgL_l3268z00_817));
						{
							obj_t BgL_l3268z00_2279;

							BgL_l3268z00_2279 = CDR(BgL_l3268z00_817);
							BgL_l3268z00_817 = BgL_l3268z00_2279;
							goto BgL_zc3anonymousza33335ze3z83_818;
						}
					}
				else
					{	/* Bdb/spread_obj.scm 32 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Bdb/spread_obj.scm 33 */
					{	/* Bdb/spread_obj.scm 33 */
						obj_t BgL_port3270z00_825;

						{	/* Bdb/spread_obj.scm 33 */
							obj_t BgL_res3473z00_1401;

							{	/* Bdb/spread_obj.scm 33 */
								obj_t BgL_auxz00_2284;

								BgL_auxz00_2284 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3473z00_1401 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_2284);
							}
							BgL_port3270z00_825 = BgL_res3473z00_1401;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3270z00_825);
						bgl_display_string(BGl_string3530z00zzbdb_spreadzd2objzd2,
							BgL_port3270z00_825);
						{	/* Bdb/spread_obj.scm 33 */
							obj_t BgL_arg3340z00_826;

							{	/* Bdb/spread_obj.scm 33 */
								bool_t BgL_testz00_2289;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Bdb/spread_obj.scm 33 */
										BgL_testz00_2289 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Bdb/spread_obj.scm 33 */
										BgL_testz00_2289 = ((bool_t) 0);
									}
								if (BgL_testz00_2289)
									{	/* Bdb/spread_obj.scm 33 */
										BgL_arg3340z00_826 = BGl_string3531z00zzbdb_spreadzd2objzd2;
									}
								else
									{	/* Bdb/spread_obj.scm 33 */
										BgL_arg3340z00_826 = BGl_string3532z00zzbdb_spreadzd2objzd2;
									}
							}
							bgl_display_obj(BgL_arg3340z00_826, BgL_port3270z00_825);
						}
						bgl_display_string(BGl_string3533z00zzbdb_spreadzd2objzd2,
							BgL_port3270z00_825);
						bgl_display_char(((unsigned char) '\n'), BgL_port3270z00_825);
					}
					{	/* Bdb/spread_obj.scm 33 */
						obj_t BgL_list3343z00_829;

						BgL_list3343z00_829 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3343z00_829);
					}
				}
			else
				{
					obj_t BgL_hooksz00_833;

					obj_t BgL_hnamesz00_834;

					BgL_hooksz00_833 = BNIL;
					BgL_hnamesz00_834 = BNIL;
				BgL_zc3anonymousza33344ze3z83_835:
					if (NULLP(BgL_hooksz00_833))
						{	/* Bdb/spread_obj.scm 33 */
							return BgL_globalsz00_1;
						}
					else
						{	/* Bdb/spread_obj.scm 33 */
							bool_t BgL_testz00_2302;

							{	/* Bdb/spread_obj.scm 33 */
								obj_t BgL_fun3351z00_842;

								BgL_fun3351z00_842 = CAR(BgL_hooksz00_833);
								BgL_testz00_2302 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3351z00_842) (BgL_fun3351z00_842,
										BEOA));
							}
							if (BgL_testz00_2302)
								{
									obj_t BgL_hnamesz00_2309;

									obj_t BgL_hooksz00_2307;

									BgL_hooksz00_2307 = CDR(BgL_hooksz00_833);
									BgL_hnamesz00_2309 = CDR(BgL_hnamesz00_834);
									BgL_hnamesz00_834 = BgL_hnamesz00_2309;
									BgL_hooksz00_833 = BgL_hooksz00_2307;
									goto BgL_zc3anonymousza33344ze3z83_835;
								}
							else
								{	/* Bdb/spread_obj.scm 33 */
									obj_t BgL_arg3350z00_841;

									BgL_arg3350z00_841 = CAR(BgL_hnamesz00_834);
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_za2currentzd2passza2zd2zzengine_passz00,
										BGl_string3534z00zzbdb_spreadzd2objzd2, BgL_arg3350z00_841);
								}
						}
				}
		}
	}



/* _bdb-spread-obj! */
	obj_t BGl__bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2159, obj_t BgL_globalsz00_2160)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 30 */
			return
				BGl_bdbzd2spreadzd2objz12z12zzbdb_spreadzd2objzd2(BgL_globalsz00_2160);
		}
	}



/* spread-obj-fun! */
	obj_t BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(obj_t BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 38 */
			{	/* Bdb/spread_obj.scm 39 */
				obj_t BgL_arg3353z00_845;

				{
					BgL_variablez00_bglt BgL_auxz00_2314;

					BgL_auxz00_2314 = (BgL_variablez00_bglt) (BgL_varz00_2);
					BgL_arg3353z00_845 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2314))->BgL_idz00);
				}
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg3353z00_845);
			}
			{	/* Bdb/spread_obj.scm 40 */
				BgL_valuez00_bglt BgL_funz00_846;

				{
					BgL_variablez00_bglt BgL_auxz00_2318;

					BgL_auxz00_2318 = (BgL_variablez00_bglt) (BgL_varz00_2);
					BgL_funz00_846 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2318))->BgL_valuez00);
				}
				{	/* Bdb/spread_obj.scm 40 */
					obj_t BgL_bodyz00_847;

					{
						BgL_sfunz00_bglt BgL_auxz00_2321;

						BgL_auxz00_2321 = (BgL_sfunz00_bglt) (BgL_funz00_846);
						BgL_bodyz00_847 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2321))->BgL_bodyz00);
					}
					{	/* Bdb/spread_obj.scm 41 */
						BgL_typez00_bglt BgL_typez00_848;

						{
							BgL_variablez00_bglt BgL_auxz00_2324;

							BgL_auxz00_2324 = (BgL_variablez00_bglt) (BgL_varz00_2);
							BgL_typez00_848 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_2324))->BgL_typez00);
						}
						{	/* Bdb/spread_obj.scm 42 */
							obj_t BgL_argsz00_849;

							{
								BgL_sfunz00_bglt BgL_auxz00_2327;

								BgL_auxz00_2327 = (BgL_sfunz00_bglt) (BgL_funz00_846);
								BgL_argsz00_849 =
									(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2327))->BgL_argsz00);
							}
							{	/* Bdb/spread_obj.scm 43 */

								if (
									((obj_t) (BgL_typez00_848) == BGl_za2_za2z00zztype_cachez00))
									{
										BgL_typez00_bglt BgL_auxz00_2335;

										BgL_variablez00_bglt BgL_auxz00_2333;

										BgL_auxz00_2335 =
											(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
										BgL_auxz00_2333 = (BgL_variablez00_bglt) (BgL_varz00_2);
										((((BgL_variablez00_bglt) CREF(BgL_auxz00_2333))->
												BgL_typez00) =
											((BgL_typez00_bglt) BgL_auxz00_2335), BUNSPEC);
									}
								else
									{	/* Bdb/spread_obj.scm 44 */
										BFALSE;
									}
								{
									obj_t BgL_l3271z00_852;

									BgL_l3271z00_852 = BgL_argsz00_849;
								BgL_zc3anonymousza33355ze3z83_853:
									if (PAIRP(BgL_l3271z00_852))
										{	/* Bdb/spread_obj.scm 46 */
											{	/* Bdb/spread_obj.scm 47 */
												obj_t BgL_argsz00_855;

												BgL_argsz00_855 = CAR(BgL_l3271z00_852);
												{	/* Bdb/spread_obj.scm 47 */
													bool_t BgL_testz00_2341;

													{	/* Bdb/spread_obj.scm 47 */
														BgL_typez00_bglt BgL_arg3358z00_857;

														{
															BgL_variablez00_bglt BgL_auxz00_2342;

															BgL_auxz00_2342 =
																(BgL_variablez00_bglt) (BgL_argsz00_855);
															BgL_arg3358z00_857 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2342))->BgL_typez00);
														}
														BgL_testz00_2341 =
															(
															(obj_t) (BgL_arg3358z00_857) ==
															BGl_za2_za2z00zztype_cachez00);
													}
													if (BgL_testz00_2341)
														{
															BgL_typez00_bglt BgL_auxz00_2349;

															BgL_variablez00_bglt BgL_auxz00_2347;

															BgL_auxz00_2349 =
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00);
															BgL_auxz00_2347 =
																(BgL_variablez00_bglt) (BgL_argsz00_855);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2347))->
																	BgL_typez00) =
																((BgL_typez00_bglt) BgL_auxz00_2349), BUNSPEC);
														}
													else
														{	/* Bdb/spread_obj.scm 47 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l3271z00_2352;

												BgL_l3271z00_2352 = CDR(BgL_l3271z00_852);
												BgL_l3271z00_852 = BgL_l3271z00_2352;
												goto BgL_zc3anonymousza33355ze3z83_853;
											}
										}
									else
										{	/* Bdb/spread_obj.scm 46 */
											((bool_t) 1);
										}
								}
								if (
									((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
										((long) 3)))
									{	/* Bdb/spread_obj.scm 51 */
										BgL_nodez00_bglt BgL_nodez00_1429;

										BgL_nodez00_1429 = (BgL_nodez00_bglt) (BgL_bodyz00_847);
										{	/* Bdb/spread_obj.scm 51 */
											obj_t BgL_method3283z00_1430;

											{	/* Bdb/spread_obj.scm 51 */
												BgL_objectz00_bglt BgL_objz00_1431;

												BgL_objz00_1431 =
													(BgL_objectz00_bglt) (BgL_nodez00_1429);
												{	/* Bdb/spread_obj.scm 51 */
													long BgL_objzd2classzd2numz00_1432;

													BgL_objzd2classzd2numz00_1432 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1431);
													{	/* Bdb/spread_obj.scm 51 */
														obj_t BgL_arg2643z00_1433;

														BgL_arg2643z00_1433 =
															PROCEDURE_REF
															(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
															(int) (((long) 1)));
														{	/* Bdb/spread_obj.scm 51 */
															obj_t BgL_arrayz00_1435;

															int BgL_offsetz00_1436;

															BgL_arrayz00_1435 = BgL_arg2643z00_1433;
															BgL_offsetz00_1436 =
																(int) (BgL_objzd2classzd2numz00_1432);
															{	/* Bdb/spread_obj.scm 51 */
																long BgL_offsetz00_1437;

																BgL_offsetz00_1437 =
																	((long) (BgL_offsetz00_1436) - OBJECT_TYPE);
																{	/* Bdb/spread_obj.scm 51 */
																	long BgL_modz00_1438;

																	{	/* Bdb/spread_obj.scm 51 */
																		int BgL_arg2645z00_1439;

																		BgL_arg2645z00_1439 = (int) (((long) 16));
																		{	/* Bdb/spread_obj.scm 51 */
																			long BgL_auxz00_2366;

																			BgL_auxz00_2366 =
																				(long) (BgL_arg2645z00_1439);
																			BgL_modz00_1438 =
																				(BgL_offsetz00_1437 / BgL_auxz00_2366);
																	}}
																	{	/* Bdb/spread_obj.scm 51 */
																		long BgL_restz00_1440;

																		{	/* Bdb/spread_obj.scm 51 */
																			int BgL_arg2644z00_1441;

																			BgL_arg2644z00_1441 = (int) (((long) 16));
																			{	/* Bdb/spread_obj.scm 51 */
																				long BgL_auxz00_2370;

																				BgL_auxz00_2370 =
																					(long) (BgL_arg2644z00_1441);
																				BgL_restz00_1440 =
																					(BgL_offsetz00_1437 %
																					BgL_auxz00_2370);
																		}}
																		{	/* Bdb/spread_obj.scm 51 */

																			BgL_method3283z00_1430 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1435,
																					(int) (BgL_modz00_1438)),
																				(int) (BgL_restz00_1440));
											}}}}}}}}
											PROCEDURE_ENTRY(BgL_method3283z00_1430)
												(BgL_method3283z00_1430, (obj_t) (BgL_nodez00_1429),
												BEOA);
									}}
								else
									{	/* Bdb/spread_obj.scm 50 */
										BFALSE;
									}
								return BGl_leavezd2functionzd2zztools_errorz00();
							}
						}
					}
				}
			}
		}
	}



/* spread-obj-node*! */
	obj_t BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2(obj_t
		BgL_nodeza2za2_22)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 194 */
		BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2:
			if (NULLP(BgL_nodeza2za2_22))
				{	/* Bdb/spread_obj.scm 195 */
					return CNST_TABLE_REF(((long) 1));
				}
			else
				{	/* Bdb/spread_obj.scm 195 */
					{	/* Bdb/spread_obj.scm 198 */
						obj_t BgL_arg3362z00_862;

						BgL_arg3362z00_862 = CAR(BgL_nodeza2za2_22);
						{	/* Bdb/spread_obj.scm 198 */
							BgL_nodez00_bglt BgL_nodez00_1457;

							BgL_nodez00_1457 = (BgL_nodez00_bglt) (BgL_arg3362z00_862);
							{	/* Bdb/spread_obj.scm 198 */
								obj_t BgL_method3283z00_1458;

								{	/* Bdb/spread_obj.scm 198 */
									BgL_objectz00_bglt BgL_objz00_1459;

									BgL_objz00_1459 = (BgL_objectz00_bglt) (BgL_nodez00_1457);
									{	/* Bdb/spread_obj.scm 198 */
										long BgL_objzd2classzd2numz00_1460;

										BgL_objzd2classzd2numz00_1460 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1459);
										{	/* Bdb/spread_obj.scm 198 */
											obj_t BgL_arg2643z00_1461;

											BgL_arg2643z00_1461 =
												PROCEDURE_REF
												(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
												(int) (((long) 1)));
											{	/* Bdb/spread_obj.scm 198 */
												obj_t BgL_arrayz00_1463;

												int BgL_offsetz00_1464;

												BgL_arrayz00_1463 = BgL_arg2643z00_1461;
												BgL_offsetz00_1464 =
													(int) (BgL_objzd2classzd2numz00_1460);
												{	/* Bdb/spread_obj.scm 198 */
													long BgL_offsetz00_1465;

													BgL_offsetz00_1465 =
														((long) (BgL_offsetz00_1464) - OBJECT_TYPE);
													{	/* Bdb/spread_obj.scm 198 */
														long BgL_modz00_1466;

														{	/* Bdb/spread_obj.scm 198 */
															int BgL_arg2645z00_1467;

															BgL_arg2645z00_1467 = (int) (((long) 16));
															{	/* Bdb/spread_obj.scm 198 */
																long BgL_auxz00_2394;

																BgL_auxz00_2394 = (long) (BgL_arg2645z00_1467);
																BgL_modz00_1466 =
																	(BgL_offsetz00_1465 / BgL_auxz00_2394);
														}}
														{	/* Bdb/spread_obj.scm 198 */
															long BgL_restz00_1468;

															{	/* Bdb/spread_obj.scm 198 */
																int BgL_arg2644z00_1469;

																BgL_arg2644z00_1469 = (int) (((long) 16));
																{	/* Bdb/spread_obj.scm 198 */
																	long BgL_auxz00_2398;

																	BgL_auxz00_2398 =
																		(long) (BgL_arg2644z00_1469);
																	BgL_restz00_1468 =
																		(BgL_offsetz00_1465 % BgL_auxz00_2398);
															}}
															{	/* Bdb/spread_obj.scm 198 */

																BgL_method3283z00_1458 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1463,
																		(int) (BgL_modz00_1466)),
																	(int) (BgL_restz00_1468));
								}}}}}}}}
								PROCEDURE_ENTRY(BgL_method3283z00_1458) (BgL_method3283z00_1458,
									(obj_t) (BgL_nodez00_1457), BEOA);
					}}}
					{
						obj_t BgL_nodeza2za2_2408;

						BgL_nodeza2za2_2408 = CDR(BgL_nodeza2za2_22);
						BgL_nodeza2za2_22 = BgL_nodeza2za2_2408;
						goto BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2;
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbdb_spreadzd2objzd2()
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_spreadzd2objzd2nodez12zd2def3282zd2envz12zzbdb_spreadzd2objzd2,
				BGl_nodez00zzast_nodez00, BGl_string3535z00zzbdb_spreadzd2objzd2);
		}
	}



/* spread-obj-node! */
	obj_t BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 57 */
			{	/* Bdb/spread_obj.scm 57 */
				obj_t BgL_method3283z00_1484;

				{	/* Bdb/spread_obj.scm 57 */
					BgL_objectz00_bglt BgL_objz00_1485;

					BgL_objz00_1485 = (BgL_objectz00_bglt) (BgL_nodez00_3);
					{	/* Bdb/spread_obj.scm 57 */
						long BgL_objzd2classzd2numz00_1486;

						BgL_objzd2classzd2numz00_1486 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1485);
						{	/* Bdb/spread_obj.scm 57 */
							obj_t BgL_arg2643z00_1487;

							BgL_arg2643z00_1487 =
								PROCEDURE_REF
								(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
								(int) (((long) 1)));
							{	/* Bdb/spread_obj.scm 57 */
								obj_t BgL_arrayz00_1489;

								int BgL_offsetz00_1490;

								BgL_arrayz00_1489 = BgL_arg2643z00_1487;
								BgL_offsetz00_1490 = (int) (BgL_objzd2classzd2numz00_1486);
								{	/* Bdb/spread_obj.scm 57 */
									long BgL_offsetz00_1491;

									BgL_offsetz00_1491 =
										((long) (BgL_offsetz00_1490) - OBJECT_TYPE);
									{	/* Bdb/spread_obj.scm 57 */
										long BgL_modz00_1492;

										{	/* Bdb/spread_obj.scm 57 */
											int BgL_arg2645z00_1493;

											BgL_arg2645z00_1493 = (int) (((long) 16));
											{	/* Bdb/spread_obj.scm 57 */
												long BgL_auxz00_2419;

												BgL_auxz00_2419 = (long) (BgL_arg2645z00_1493);
												BgL_modz00_1492 =
													(BgL_offsetz00_1491 / BgL_auxz00_2419);
										}}
										{	/* Bdb/spread_obj.scm 57 */
											long BgL_restz00_1494;

											{	/* Bdb/spread_obj.scm 57 */
												int BgL_arg2644z00_1495;

												BgL_arg2644z00_1495 = (int) (((long) 16));
												{	/* Bdb/spread_obj.scm 57 */
													long BgL_auxz00_2423;

													BgL_auxz00_2423 = (long) (BgL_arg2644z00_1495);
													BgL_restz00_1494 =
														(BgL_offsetz00_1491 % BgL_auxz00_2423);
											}}
											{	/* Bdb/spread_obj.scm 57 */

												BgL_method3283z00_1484 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1489,
														(int) (BgL_modz00_1492)), (int) (BgL_restz00_1494));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3283z00_1484) (BgL_method3283z00_1484,
					(obj_t) (BgL_nodez00_3), BEOA);
			}
		}
	}



/* _spread-obj-node! */
	obj_t BGl__spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2161, obj_t BgL_nodez00_2162)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 57 */
			return
				BGl_spreadzd2objzd2nodez12z12zzbdb_spreadzd2objzd2(
				(BgL_nodez00_bglt) (BgL_nodez00_2162));
		}
	}



/* _spread-obj-node!-def3282 */
	obj_t BGl__spreadzd2objzd2nodez12zd2def3282zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2163, obj_t BgL_nodez00_2164)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_2164));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbdb_spreadzd2objzd2()
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_sequencez00zzast_nodez00, BGl_proc3536z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_appz00zzast_nodez00, BGl_proc3537z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3538z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_funcallz00zzast_nodez00, BGl_proc3539z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_externz00zzast_nodez00, BGl_proc3540z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_castz00zzast_nodez00, BGl_proc3541z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_setqz00zzast_nodez00, BGl_proc3542z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_conditionalz00zzast_nodez00, BGl_proc3543z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_failz00zzast_nodez00, BGl_proc3544z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_selectz00zzast_nodez00, BGl_proc3545z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3546z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3547z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3548z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3549z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3550z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3551z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3552z00zzbdb_spreadzd2objzd2,
				BGl_string3535z00zzbdb_spreadzd2objzd2);
		}
	}



/* spread-obj-node!-box3317 */
	obj_t BGl_spreadzd2objzd2nodez12zd2box3317zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2182, obj_t BgL_nodez00_2183)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 186 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1380;

				BgL_nodez00_1380 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2183);
				{	/* Bdb/spread_obj.scm 188 */
					BgL_varz00_bglt BgL_arg3469z00_1384;

					BgL_arg3469z00_1384 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1380))->BgL_varz00);
					{	/* Bdb/spread_obj.scm 188 */
						BgL_nodez00_bglt BgL_nodez00_2106;

						BgL_nodez00_2106 = (BgL_nodez00_bglt) (BgL_arg3469z00_1384);
						{	/* Bdb/spread_obj.scm 188 */
							obj_t BgL_method3283z00_2107;

							{	/* Bdb/spread_obj.scm 188 */
								BgL_objectz00_bglt BgL_objz00_2108;

								BgL_objz00_2108 = (BgL_objectz00_bglt) (BgL_nodez00_2106);
								{	/* Bdb/spread_obj.scm 188 */
									long BgL_objzd2classzd2numz00_2109;

									BgL_objzd2classzd2numz00_2109 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2108);
									{	/* Bdb/spread_obj.scm 188 */
										obj_t BgL_arg2643z00_2110;

										BgL_arg2643z00_2110 =
											PROCEDURE_REF
											(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
											(int) (((long) 1)));
										{	/* Bdb/spread_obj.scm 188 */
											obj_t BgL_arrayz00_2112;

											int BgL_offsetz00_2113;

											BgL_arrayz00_2112 = BgL_arg2643z00_2110;
											BgL_offsetz00_2113 =
												(int) (BgL_objzd2classzd2numz00_2109);
											{	/* Bdb/spread_obj.scm 188 */
												long BgL_offsetz00_2114;

												BgL_offsetz00_2114 =
													((long) (BgL_offsetz00_2113) - OBJECT_TYPE);
												{	/* Bdb/spread_obj.scm 188 */
													long BgL_modz00_2115;

													{	/* Bdb/spread_obj.scm 188 */
														int BgL_arg2645z00_2116;

														BgL_arg2645z00_2116 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 188 */
															long BgL_auxz00_2464;

															BgL_auxz00_2464 = (long) (BgL_arg2645z00_2116);
															BgL_modz00_2115 =
																(BgL_offsetz00_2114 / BgL_auxz00_2464);
													}}
													{	/* Bdb/spread_obj.scm 188 */
														long BgL_restz00_2117;

														{	/* Bdb/spread_obj.scm 188 */
															int BgL_arg2644z00_2118;

															BgL_arg2644z00_2118 = (int) (((long) 16));
															{	/* Bdb/spread_obj.scm 188 */
																long BgL_auxz00_2468;

																BgL_auxz00_2468 = (long) (BgL_arg2644z00_2118);
																BgL_restz00_2117 =
																	(BgL_offsetz00_2114 % BgL_auxz00_2468);
														}}
														{	/* Bdb/spread_obj.scm 188 */

															BgL_method3283z00_2107 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2112,
																	(int) (BgL_modz00_2115)),
																(int) (BgL_restz00_2117));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3283z00_2107) (BgL_method3283z00_2107,
								(obj_t) (BgL_nodez00_2106), BEOA);
				}}}
				{	/* Bdb/spread_obj.scm 189 */
					BgL_nodez00_bglt BgL_arg3470z00_1385;

					BgL_arg3470z00_1385 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1380))->BgL_valuez00);
					{	/* Bdb/spread_obj.scm 189 */
						obj_t BgL_method3283z00_2134;

						{	/* Bdb/spread_obj.scm 189 */
							BgL_objectz00_bglt BgL_objz00_2135;

							BgL_objz00_2135 = (BgL_objectz00_bglt) (BgL_arg3470z00_1385);
							{	/* Bdb/spread_obj.scm 189 */
								long BgL_objzd2classzd2numz00_2136;

								BgL_objzd2classzd2numz00_2136 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2135);
								{	/* Bdb/spread_obj.scm 189 */
									obj_t BgL_arg2643z00_2137;

									BgL_arg2643z00_2137 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 189 */
										obj_t BgL_arrayz00_2139;

										int BgL_offsetz00_2140;

										BgL_arrayz00_2139 = BgL_arg2643z00_2137;
										BgL_offsetz00_2140 = (int) (BgL_objzd2classzd2numz00_2136);
										{	/* Bdb/spread_obj.scm 189 */
											long BgL_offsetz00_2141;

											BgL_offsetz00_2141 =
												((long) (BgL_offsetz00_2140) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 189 */
												long BgL_modz00_2142;

												{	/* Bdb/spread_obj.scm 189 */
													int BgL_arg2645z00_2143;

													BgL_arg2645z00_2143 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 189 */
														long BgL_auxz00_2487;

														BgL_auxz00_2487 = (long) (BgL_arg2645z00_2143);
														BgL_modz00_2142 =
															(BgL_offsetz00_2141 / BgL_auxz00_2487);
												}}
												{	/* Bdb/spread_obj.scm 189 */
													long BgL_restz00_2144;

													{	/* Bdb/spread_obj.scm 189 */
														int BgL_arg2644z00_2145;

														BgL_arg2644z00_2145 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 189 */
															long BgL_auxz00_2491;

															BgL_auxz00_2491 = (long) (BgL_arg2644z00_2145);
															BgL_restz00_2144 =
																(BgL_offsetz00_2141 % BgL_auxz00_2491);
													}}
													{	/* Bdb/spread_obj.scm 189 */

														BgL_method3283z00_2134 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2139,
																(int) (BgL_modz00_2142)),
															(int) (BgL_restz00_2144));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_2134) (BgL_method3283z00_2134,
							(obj_t) (BgL_arg3470z00_1385), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-box3315 */
	obj_t BGl_spreadzd2objzd2nodez12zd2box3315zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2184, obj_t BgL_nodez00_2185)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 180 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1374;

				BgL_nodez00_1374 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2185);
				{	/* Bdb/spread_obj.scm 181 */
					BgL_varz00_bglt BgL_arg3467z00_2077;

					BgL_arg3467z00_2077 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1374))->BgL_varz00);
					{	/* Bdb/spread_obj.scm 181 */
						BgL_nodez00_bglt BgL_nodez00_2079;

						BgL_nodez00_2079 = (BgL_nodez00_bglt) (BgL_arg3467z00_2077);
						{	/* Bdb/spread_obj.scm 181 */
							obj_t BgL_method3283z00_2080;

							{	/* Bdb/spread_obj.scm 181 */
								BgL_objectz00_bglt BgL_objz00_2081;

								BgL_objz00_2081 = (BgL_objectz00_bglt) (BgL_nodez00_2079);
								{	/* Bdb/spread_obj.scm 181 */
									long BgL_objzd2classzd2numz00_2082;

									BgL_objzd2classzd2numz00_2082 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2081);
									{	/* Bdb/spread_obj.scm 181 */
										obj_t BgL_arg2643z00_2083;

										BgL_arg2643z00_2083 =
											PROCEDURE_REF
											(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
											(int) (((long) 1)));
										{	/* Bdb/spread_obj.scm 181 */
											obj_t BgL_arrayz00_2085;

											int BgL_offsetz00_2086;

											BgL_arrayz00_2085 = BgL_arg2643z00_2083;
											BgL_offsetz00_2086 =
												(int) (BgL_objzd2classzd2numz00_2082);
											{	/* Bdb/spread_obj.scm 181 */
												long BgL_offsetz00_2087;

												BgL_offsetz00_2087 =
													((long) (BgL_offsetz00_2086) - OBJECT_TYPE);
												{	/* Bdb/spread_obj.scm 181 */
													long BgL_modz00_2088;

													{	/* Bdb/spread_obj.scm 181 */
														int BgL_arg2645z00_2089;

														BgL_arg2645z00_2089 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 181 */
															long BgL_auxz00_2512;

															BgL_auxz00_2512 = (long) (BgL_arg2645z00_2089);
															BgL_modz00_2088 =
																(BgL_offsetz00_2087 / BgL_auxz00_2512);
													}}
													{	/* Bdb/spread_obj.scm 181 */
														long BgL_restz00_2090;

														{	/* Bdb/spread_obj.scm 181 */
															int BgL_arg2644z00_2091;

															BgL_arg2644z00_2091 = (int) (((long) 16));
															{	/* Bdb/spread_obj.scm 181 */
																long BgL_auxz00_2516;

																BgL_auxz00_2516 = (long) (BgL_arg2644z00_2091);
																BgL_restz00_2090 =
																	(BgL_offsetz00_2087 % BgL_auxz00_2516);
														}}
														{	/* Bdb/spread_obj.scm 181 */

															BgL_method3283z00_2080 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2085,
																	(int) (BgL_modz00_2088)),
																(int) (BgL_restz00_2090));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3283z00_2080) (BgL_method3283z00_2080,
								(obj_t) (BgL_nodez00_2079), BEOA);
						}
					}
				}
			}
		}
	}



/* spread-obj-node!-mak3313 */
	obj_t BGl_spreadzd2objzd2nodez12zd2mak3313zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2186, obj_t BgL_nodez00_2187)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 174 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1368;

				BgL_nodez00_1368 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2187);
				{	/* Bdb/spread_obj.scm 175 */
					BgL_nodez00_bglt BgL_arg3465z00_2049;

					BgL_arg3465z00_2049 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1368))->BgL_valuez00);
					{	/* Bdb/spread_obj.scm 175 */
						obj_t BgL_method3283z00_2052;

						{	/* Bdb/spread_obj.scm 175 */
							BgL_objectz00_bglt BgL_objz00_2053;

							BgL_objz00_2053 = (BgL_objectz00_bglt) (BgL_arg3465z00_2049);
							{	/* Bdb/spread_obj.scm 175 */
								long BgL_objzd2classzd2numz00_2054;

								BgL_objzd2classzd2numz00_2054 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2053);
								{	/* Bdb/spread_obj.scm 175 */
									obj_t BgL_arg2643z00_2055;

									BgL_arg2643z00_2055 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 175 */
										obj_t BgL_arrayz00_2057;

										int BgL_offsetz00_2058;

										BgL_arrayz00_2057 = BgL_arg2643z00_2055;
										BgL_offsetz00_2058 = (int) (BgL_objzd2classzd2numz00_2054);
										{	/* Bdb/spread_obj.scm 175 */
											long BgL_offsetz00_2059;

											BgL_offsetz00_2059 =
												((long) (BgL_offsetz00_2058) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 175 */
												long BgL_modz00_2060;

												{	/* Bdb/spread_obj.scm 175 */
													int BgL_arg2645z00_2061;

													BgL_arg2645z00_2061 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 175 */
														long BgL_auxz00_2536;

														BgL_auxz00_2536 = (long) (BgL_arg2645z00_2061);
														BgL_modz00_2060 =
															(BgL_offsetz00_2059 / BgL_auxz00_2536);
												}}
												{	/* Bdb/spread_obj.scm 175 */
													long BgL_restz00_2062;

													{	/* Bdb/spread_obj.scm 175 */
														int BgL_arg2644z00_2063;

														BgL_arg2644z00_2063 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 175 */
															long BgL_auxz00_2540;

															BgL_auxz00_2540 = (long) (BgL_arg2644z00_2063);
															BgL_restz00_2062 =
																(BgL_offsetz00_2059 % BgL_auxz00_2540);
													}}
													{	/* Bdb/spread_obj.scm 175 */

														BgL_method3283z00_2052 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2057,
																(int) (BgL_modz00_2060)),
															(int) (BgL_restz00_2062));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_2052) (BgL_method3283z00_2052,
							(obj_t) (BgL_arg3465z00_2049), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-jum3311 */
	obj_t BGl_spreadzd2objzd2nodez12zd2jum3311zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2188, obj_t BgL_nodez00_2189)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 165 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1360;

				{	/* Bdb/spread_obj.scm 166 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2551;

					BgL_nodez00_1360 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2189);
					{	/* Bdb/spread_obj.scm 167 */
						BgL_nodez00_bglt BgL_arg3462z00_1364;

						BgL_arg3462z00_1364 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1360))->
							BgL_exitz00);
						{	/* Bdb/spread_obj.scm 167 */
							obj_t BgL_method3283z00_1997;

							{	/* Bdb/spread_obj.scm 167 */
								BgL_objectz00_bglt BgL_objz00_1998;

								BgL_objz00_1998 = (BgL_objectz00_bglt) (BgL_arg3462z00_1364);
								{	/* Bdb/spread_obj.scm 167 */
									long BgL_objzd2classzd2numz00_1999;

									BgL_objzd2classzd2numz00_1999 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1998);
									{	/* Bdb/spread_obj.scm 167 */
										obj_t BgL_arg2643z00_2000;

										BgL_arg2643z00_2000 =
											PROCEDURE_REF
											(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
											(int) (((long) 1)));
										{	/* Bdb/spread_obj.scm 167 */
											obj_t BgL_arrayz00_2002;

											int BgL_offsetz00_2003;

											BgL_arrayz00_2002 = BgL_arg2643z00_2000;
											BgL_offsetz00_2003 =
												(int) (BgL_objzd2classzd2numz00_1999);
											{	/* Bdb/spread_obj.scm 167 */
												long BgL_offsetz00_2004;

												BgL_offsetz00_2004 =
													((long) (BgL_offsetz00_2003) - OBJECT_TYPE);
												{	/* Bdb/spread_obj.scm 167 */
													long BgL_modz00_2005;

													{	/* Bdb/spread_obj.scm 167 */
														int BgL_arg2645z00_2006;

														BgL_arg2645z00_2006 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 167 */
															long BgL_auxz00_2561;

															BgL_auxz00_2561 = (long) (BgL_arg2645z00_2006);
															BgL_modz00_2005 =
																(BgL_offsetz00_2004 / BgL_auxz00_2561);
													}}
													{	/* Bdb/spread_obj.scm 167 */
														long BgL_restz00_2007;

														{	/* Bdb/spread_obj.scm 167 */
															int BgL_arg2644z00_2008;

															BgL_arg2644z00_2008 = (int) (((long) 16));
															{	/* Bdb/spread_obj.scm 167 */
																long BgL_auxz00_2565;

																BgL_auxz00_2565 = (long) (BgL_arg2644z00_2008);
																BgL_restz00_2007 =
																	(BgL_offsetz00_2004 % BgL_auxz00_2565);
														}}
														{	/* Bdb/spread_obj.scm 167 */

															BgL_method3283z00_1997 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2002,
																	(int) (BgL_modz00_2005)),
																(int) (BgL_restz00_2007));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3283z00_1997) (BgL_method3283z00_1997,
								(obj_t) (BgL_arg3462z00_1364), BEOA);
					}}
					{	/* Bdb/spread_obj.scm 168 */
						BgL_nodez00_bglt BgL_arg3463z00_1365;

						BgL_arg3463z00_1365 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1360))->
							BgL_valuez00);
						{	/* Bdb/spread_obj.scm 168 */
							obj_t BgL_method3283z00_2024;

							{	/* Bdb/spread_obj.scm 168 */
								BgL_objectz00_bglt BgL_objz00_2025;

								BgL_objz00_2025 = (BgL_objectz00_bglt) (BgL_arg3463z00_1365);
								{	/* Bdb/spread_obj.scm 168 */
									long BgL_objzd2classzd2numz00_2026;

									BgL_objzd2classzd2numz00_2026 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2025);
									{	/* Bdb/spread_obj.scm 168 */
										obj_t BgL_arg2643z00_2027;

										BgL_arg2643z00_2027 =
											PROCEDURE_REF
											(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
											(int) (((long) 1)));
										{	/* Bdb/spread_obj.scm 168 */
											obj_t BgL_arrayz00_2029;

											int BgL_offsetz00_2030;

											BgL_arrayz00_2029 = BgL_arg2643z00_2027;
											BgL_offsetz00_2030 =
												(int) (BgL_objzd2classzd2numz00_2026);
											{	/* Bdb/spread_obj.scm 168 */
												long BgL_offsetz00_2031;

												BgL_offsetz00_2031 =
													((long) (BgL_offsetz00_2030) - OBJECT_TYPE);
												{	/* Bdb/spread_obj.scm 168 */
													long BgL_modz00_2032;

													{	/* Bdb/spread_obj.scm 168 */
														int BgL_arg2645z00_2033;

														BgL_arg2645z00_2033 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 168 */
															long BgL_auxz00_2584;

															BgL_auxz00_2584 = (long) (BgL_arg2645z00_2033);
															BgL_modz00_2032 =
																(BgL_offsetz00_2031 / BgL_auxz00_2584);
													}}
													{	/* Bdb/spread_obj.scm 168 */
														long BgL_restz00_2034;

														{	/* Bdb/spread_obj.scm 168 */
															int BgL_arg2644z00_2035;

															BgL_arg2644z00_2035 = (int) (((long) 16));
															{	/* Bdb/spread_obj.scm 168 */
																long BgL_auxz00_2588;

																BgL_auxz00_2588 = (long) (BgL_arg2644z00_2035);
																BgL_restz00_2034 =
																	(BgL_offsetz00_2031 % BgL_auxz00_2588);
														}}
														{	/* Bdb/spread_obj.scm 168 */

															BgL_method3283z00_2024 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2029,
																	(int) (BgL_modz00_2032)),
																(int) (BgL_restz00_2034));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3283z00_2024) (BgL_method3283z00_2024,
								(obj_t) (BgL_arg3463z00_1365), BEOA);
					}}
					BgL_auxz00_2551 = BgL_nodez00_1360;
					return (obj_t) (BgL_auxz00_2551);
				}
			}
		}
	}



/* spread-obj-node!-set3309 */
	obj_t BGl_spreadzd2objzd2nodez12zd2set3309zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2190, obj_t BgL_nodez00_2191)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 159 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1354;

				BgL_nodez00_1354 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2191);
				{	/* Bdb/spread_obj.scm 160 */
					BgL_nodez00_bglt BgL_arg3460z00_1967;

					BgL_arg3460z00_1967 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1354))->BgL_bodyz00);
					{	/* Bdb/spread_obj.scm 160 */
						obj_t BgL_method3283z00_1970;

						{	/* Bdb/spread_obj.scm 160 */
							BgL_objectz00_bglt BgL_objz00_1971;

							BgL_objz00_1971 = (BgL_objectz00_bglt) (BgL_arg3460z00_1967);
							{	/* Bdb/spread_obj.scm 160 */
								long BgL_objzd2classzd2numz00_1972;

								BgL_objzd2classzd2numz00_1972 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1971);
								{	/* Bdb/spread_obj.scm 160 */
									obj_t BgL_arg2643z00_1973;

									BgL_arg2643z00_1973 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 160 */
										obj_t BgL_arrayz00_1975;

										int BgL_offsetz00_1976;

										BgL_arrayz00_1975 = BgL_arg2643z00_1973;
										BgL_offsetz00_1976 = (int) (BgL_objzd2classzd2numz00_1972);
										{	/* Bdb/spread_obj.scm 160 */
											long BgL_offsetz00_1977;

											BgL_offsetz00_1977 =
												((long) (BgL_offsetz00_1976) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 160 */
												long BgL_modz00_1978;

												{	/* Bdb/spread_obj.scm 160 */
													int BgL_arg2645z00_1979;

													BgL_arg2645z00_1979 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 160 */
														long BgL_auxz00_2609;

														BgL_auxz00_2609 = (long) (BgL_arg2645z00_1979);
														BgL_modz00_1978 =
															(BgL_offsetz00_1977 / BgL_auxz00_2609);
												}}
												{	/* Bdb/spread_obj.scm 160 */
													long BgL_restz00_1980;

													{	/* Bdb/spread_obj.scm 160 */
														int BgL_arg2644z00_1981;

														BgL_arg2644z00_1981 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 160 */
															long BgL_auxz00_2613;

															BgL_auxz00_2613 = (long) (BgL_arg2644z00_1981);
															BgL_restz00_1980 =
																(BgL_offsetz00_1977 % BgL_auxz00_2613);
													}}
													{	/* Bdb/spread_obj.scm 160 */

														BgL_method3283z00_1970 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1975,
																(int) (BgL_modz00_1978)),
															(int) (BgL_restz00_1980));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1970) (BgL_method3283z00_1970,
							(obj_t) (BgL_arg3460z00_1967), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-let3307 */
	obj_t BGl_spreadzd2objzd2nodez12zd2let3307zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2192, obj_t BgL_nodez00_2193)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 145 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1334;

				BgL_nodez00_1334 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2193);
				{	/* Bdb/spread_obj.scm 147 */
					obj_t BgL_g3281z00_1338;

					BgL_g3281z00_1338 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1334))->BgL_bindingsz00);
					{
						obj_t BgL_l3279z00_1340;

						BgL_l3279z00_1340 = BgL_g3281z00_1338;
					BgL_zc3anonymousza33451ze3z83_1341:
						if (PAIRP(BgL_l3279z00_1340))
							{	/* Bdb/spread_obj.scm 147 */
								{	/* Bdb/spread_obj.scm 152 */
									obj_t BgL_bindingz00_1343;

									BgL_bindingz00_1343 = CAR(BgL_l3279z00_1340);
									{	/* Bdb/spread_obj.scm 148 */
										obj_t BgL_variablez00_1344;

										BgL_variablez00_1344 = CAR(BgL_bindingz00_1343);
										{	/* Bdb/spread_obj.scm 149 */
											bool_t BgL_testz00_2629;

											{	/* Bdb/spread_obj.scm 149 */
												bool_t BgL_testz00_2630;

												{	/* Bdb/spread_obj.scm 149 */
													BgL_typez00_bglt BgL_arg3455z00_1347;

													{
														BgL_variablez00_bglt BgL_auxz00_2631;

														BgL_auxz00_2631 =
															(BgL_variablez00_bglt) (BgL_variablez00_1344);
														BgL_arg3455z00_1347 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2631))->
															BgL_typez00);
													}
													BgL_testz00_2630 =
														(
														(obj_t) (BgL_arg3455z00_1347) ==
														BGl_za2_za2z00zztype_cachez00);
												}
												if (BgL_testz00_2630)
													{
														BgL_localz00_bglt BgL_auxz00_2636;

														BgL_auxz00_2636 =
															(BgL_localz00_bglt) (BgL_variablez00_1344);
														BgL_testz00_2629 =
															(((BgL_localz00_bglt) CREF(BgL_auxz00_2636))->
															BgL_userzf3zf3);
													}
												else
													{	/* Bdb/spread_obj.scm 149 */
														BgL_testz00_2629 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_2629)
												{
													BgL_typez00_bglt BgL_auxz00_2641;

													BgL_variablez00_bglt BgL_auxz00_2639;

													BgL_auxz00_2641 =
														(BgL_typez00_bglt)
														(BGl_za2objza2z00zztype_cachez00);
													BgL_auxz00_2639 =
														(BgL_variablez00_bglt) (BgL_variablez00_1344);
													((((BgL_variablez00_bglt) CREF(BgL_auxz00_2639))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_2641), BUNSPEC);
												}
											else
												{	/* Bdb/spread_obj.scm 149 */
													BFALSE;
												}
										}
									}
									{	/* Bdb/spread_obj.scm 152 */
										obj_t BgL_arg3456z00_1348;

										BgL_arg3456z00_1348 = CDR(BgL_bindingz00_1343);
										{	/* Bdb/spread_obj.scm 152 */
											BgL_nodez00_bglt BgL_nodez00_1913;

											BgL_nodez00_1913 =
												(BgL_nodez00_bglt) (BgL_arg3456z00_1348);
											{	/* Bdb/spread_obj.scm 152 */
												obj_t BgL_method3283z00_1914;

												{	/* Bdb/spread_obj.scm 152 */
													BgL_objectz00_bglt BgL_objz00_1915;

													BgL_objz00_1915 =
														(BgL_objectz00_bglt) (BgL_nodez00_1913);
													{	/* Bdb/spread_obj.scm 152 */
														long BgL_objzd2classzd2numz00_1916;

														BgL_objzd2classzd2numz00_1916 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1915);
														{	/* Bdb/spread_obj.scm 152 */
															obj_t BgL_arg2643z00_1917;

															BgL_arg2643z00_1917 =
																PROCEDURE_REF
																(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
																(int) (((long) 1)));
															{	/* Bdb/spread_obj.scm 152 */
																obj_t BgL_arrayz00_1919;

																int BgL_offsetz00_1920;

																BgL_arrayz00_1919 = BgL_arg2643z00_1917;
																BgL_offsetz00_1920 =
																	(int) (BgL_objzd2classzd2numz00_1916);
																{	/* Bdb/spread_obj.scm 152 */
																	long BgL_offsetz00_1921;

																	BgL_offsetz00_1921 =
																		((long) (BgL_offsetz00_1920) - OBJECT_TYPE);
																	{	/* Bdb/spread_obj.scm 152 */
																		long BgL_modz00_1922;

																		{	/* Bdb/spread_obj.scm 152 */
																			int BgL_arg2645z00_1923;

																			BgL_arg2645z00_1923 = (int) (((long) 16));
																			{	/* Bdb/spread_obj.scm 152 */
																				long BgL_auxz00_2654;

																				BgL_auxz00_2654 =
																					(long) (BgL_arg2645z00_1923);
																				BgL_modz00_1922 =
																					(BgL_offsetz00_1921 /
																					BgL_auxz00_2654);
																		}}
																		{	/* Bdb/spread_obj.scm 152 */
																			long BgL_restz00_1924;

																			{	/* Bdb/spread_obj.scm 152 */
																				int BgL_arg2644z00_1925;

																				BgL_arg2644z00_1925 =
																					(int) (((long) 16));
																				{	/* Bdb/spread_obj.scm 152 */
																					long BgL_auxz00_2658;

																					BgL_auxz00_2658 =
																						(long) (BgL_arg2644z00_1925);
																					BgL_restz00_1924 =
																						(BgL_offsetz00_1921 %
																						BgL_auxz00_2658);
																			}}
																			{	/* Bdb/spread_obj.scm 152 */

																				BgL_method3283z00_1914 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1919,
																						(int) (BgL_modz00_1922)),
																					(int) (BgL_restz00_1924));
												}}}}}}}}
												PROCEDURE_ENTRY(BgL_method3283z00_1914)
													(BgL_method3283z00_1914, (obj_t) (BgL_nodez00_1913),
													BEOA);
								}}}}
								{
									obj_t BgL_l3279z00_2668;

									BgL_l3279z00_2668 = CDR(BgL_l3279z00_1340);
									BgL_l3279z00_1340 = BgL_l3279z00_2668;
									goto BgL_zc3anonymousza33451ze3z83_1341;
								}
							}
						else
							{	/* Bdb/spread_obj.scm 147 */
								((bool_t) 1);
							}
					}
				}
				{	/* Bdb/spread_obj.scm 154 */
					BgL_nodez00_bglt BgL_arg3458z00_1351;

					BgL_arg3458z00_1351 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1334))->BgL_bodyz00);
					{	/* Bdb/spread_obj.scm 154 */
						obj_t BgL_method3283z00_1942;

						{	/* Bdb/spread_obj.scm 154 */
							BgL_objectz00_bglt BgL_objz00_1943;

							BgL_objz00_1943 = (BgL_objectz00_bglt) (BgL_arg3458z00_1351);
							{	/* Bdb/spread_obj.scm 154 */
								long BgL_objzd2classzd2numz00_1944;

								BgL_objzd2classzd2numz00_1944 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1943);
								{	/* Bdb/spread_obj.scm 154 */
									obj_t BgL_arg2643z00_1945;

									BgL_arg2643z00_1945 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 154 */
										obj_t BgL_arrayz00_1947;

										int BgL_offsetz00_1948;

										BgL_arrayz00_1947 = BgL_arg2643z00_1945;
										BgL_offsetz00_1948 = (int) (BgL_objzd2classzd2numz00_1944);
										{	/* Bdb/spread_obj.scm 154 */
											long BgL_offsetz00_1949;

											BgL_offsetz00_1949 =
												((long) (BgL_offsetz00_1948) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 154 */
												long BgL_modz00_1950;

												{	/* Bdb/spread_obj.scm 154 */
													int BgL_arg2645z00_1951;

													BgL_arg2645z00_1951 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 154 */
														long BgL_auxz00_2679;

														BgL_auxz00_2679 = (long) (BgL_arg2645z00_1951);
														BgL_modz00_1950 =
															(BgL_offsetz00_1949 / BgL_auxz00_2679);
												}}
												{	/* Bdb/spread_obj.scm 154 */
													long BgL_restz00_1952;

													{	/* Bdb/spread_obj.scm 154 */
														int BgL_arg2644z00_1953;

														BgL_arg2644z00_1953 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 154 */
															long BgL_auxz00_2683;

															BgL_auxz00_2683 = (long) (BgL_arg2644z00_1953);
															BgL_restz00_1952 =
																(BgL_offsetz00_1949 % BgL_auxz00_2683);
													}}
													{	/* Bdb/spread_obj.scm 154 */

														BgL_method3283z00_1942 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1947,
																(int) (BgL_modz00_1950)),
															(int) (BgL_restz00_1952));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1942) (BgL_method3283z00_1942,
							(obj_t) (BgL_arg3458z00_1351), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-let3305 */
	obj_t BGl_spreadzd2objzd2nodez12zd2let3305zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2194, obj_t BgL_nodez00_2195)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 137 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1319;

				BgL_nodez00_1319 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2195);
				{	/* Bdb/spread_obj.scm 139 */
					obj_t BgL_g3278z00_1323;

					BgL_g3278z00_1323 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1319))->BgL_localsz00);
					{
						obj_t BgL_l3276z00_1325;

						BgL_l3276z00_1325 = BgL_g3278z00_1323;
					BgL_zc3anonymousza33445ze3z83_1326:
						if (PAIRP(BgL_l3276z00_1325))
							{	/* Bdb/spread_obj.scm 139 */
								BGl_spreadzd2objzd2funz12z12zzbdb_spreadzd2objzd2(CAR
									(BgL_l3276z00_1325));
								{
									obj_t BgL_l3276z00_2699;

									BgL_l3276z00_2699 = CDR(BgL_l3276z00_1325);
									BgL_l3276z00_1325 = BgL_l3276z00_2699;
									goto BgL_zc3anonymousza33445ze3z83_1326;
								}
							}
						else
							{	/* Bdb/spread_obj.scm 139 */
								((bool_t) 1);
							}
					}
				}
				{	/* Bdb/spread_obj.scm 140 */
					BgL_nodez00_bglt BgL_arg3449z00_1331;

					BgL_arg3449z00_1331 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1319))->BgL_bodyz00);
					{	/* Bdb/spread_obj.scm 140 */
						obj_t BgL_method3283z00_1879;

						{	/* Bdb/spread_obj.scm 140 */
							BgL_objectz00_bglt BgL_objz00_1880;

							BgL_objz00_1880 = (BgL_objectz00_bglt) (BgL_arg3449z00_1331);
							{	/* Bdb/spread_obj.scm 140 */
								long BgL_objzd2classzd2numz00_1881;

								BgL_objzd2classzd2numz00_1881 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1880);
								{	/* Bdb/spread_obj.scm 140 */
									obj_t BgL_arg2643z00_1882;

									BgL_arg2643z00_1882 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 140 */
										obj_t BgL_arrayz00_1884;

										int BgL_offsetz00_1885;

										BgL_arrayz00_1884 = BgL_arg2643z00_1882;
										BgL_offsetz00_1885 = (int) (BgL_objzd2classzd2numz00_1881);
										{	/* Bdb/spread_obj.scm 140 */
											long BgL_offsetz00_1886;

											BgL_offsetz00_1886 =
												((long) (BgL_offsetz00_1885) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 140 */
												long BgL_modz00_1887;

												{	/* Bdb/spread_obj.scm 140 */
													int BgL_arg2645z00_1888;

													BgL_arg2645z00_1888 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 140 */
														long BgL_auxz00_2710;

														BgL_auxz00_2710 = (long) (BgL_arg2645z00_1888);
														BgL_modz00_1887 =
															(BgL_offsetz00_1886 / BgL_auxz00_2710);
												}}
												{	/* Bdb/spread_obj.scm 140 */
													long BgL_restz00_1889;

													{	/* Bdb/spread_obj.scm 140 */
														int BgL_arg2644z00_1890;

														BgL_arg2644z00_1890 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 140 */
															long BgL_auxz00_2714;

															BgL_auxz00_2714 = (long) (BgL_arg2644z00_1890);
															BgL_restz00_1889 =
																(BgL_offsetz00_1886 % BgL_auxz00_2714);
													}}
													{	/* Bdb/spread_obj.scm 140 */

														BgL_method3283z00_1879 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1884,
																(int) (BgL_modz00_1887)),
															(int) (BgL_restz00_1889));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1879) (BgL_method3283z00_1879,
							(obj_t) (BgL_arg3449z00_1331), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-sel3303 */
	obj_t BGl_spreadzd2objzd2nodez12zd2sel3303zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2196, obj_t BgL_nodez00_2197)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 127 */
			{
				BgL_selectz00_bglt BgL_nodez00_1303;

				{	/* Bdb/spread_obj.scm 128 */
					bool_t BgL_auxz00_2725;

					BgL_nodez00_1303 = (BgL_selectz00_bglt) (BgL_nodez00_2197);
					{	/* Bdb/spread_obj.scm 129 */
						BgL_nodez00_bglt BgL_arg3438z00_1307;

						BgL_arg3438z00_1307 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1303))->BgL_testz00);
						{	/* Bdb/spread_obj.scm 129 */
							obj_t BgL_method3283z00_1817;

							{	/* Bdb/spread_obj.scm 129 */
								BgL_objectz00_bglt BgL_objz00_1818;

								BgL_objz00_1818 = (BgL_objectz00_bglt) (BgL_arg3438z00_1307);
								{	/* Bdb/spread_obj.scm 129 */
									long BgL_objzd2classzd2numz00_1819;

									BgL_objzd2classzd2numz00_1819 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1818);
									{	/* Bdb/spread_obj.scm 129 */
										obj_t BgL_arg2643z00_1820;

										BgL_arg2643z00_1820 =
											PROCEDURE_REF
											(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
											(int) (((long) 1)));
										{	/* Bdb/spread_obj.scm 129 */
											obj_t BgL_arrayz00_1822;

											int BgL_offsetz00_1823;

											BgL_arrayz00_1822 = BgL_arg2643z00_1820;
											BgL_offsetz00_1823 =
												(int) (BgL_objzd2classzd2numz00_1819);
											{	/* Bdb/spread_obj.scm 129 */
												long BgL_offsetz00_1824;

												BgL_offsetz00_1824 =
													((long) (BgL_offsetz00_1823) - OBJECT_TYPE);
												{	/* Bdb/spread_obj.scm 129 */
													long BgL_modz00_1825;

													{	/* Bdb/spread_obj.scm 129 */
														int BgL_arg2645z00_1826;

														BgL_arg2645z00_1826 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 129 */
															long BgL_auxz00_2735;

															BgL_auxz00_2735 = (long) (BgL_arg2645z00_1826);
															BgL_modz00_1825 =
																(BgL_offsetz00_1824 / BgL_auxz00_2735);
													}}
													{	/* Bdb/spread_obj.scm 129 */
														long BgL_restz00_1827;

														{	/* Bdb/spread_obj.scm 129 */
															int BgL_arg2644z00_1828;

															BgL_arg2644z00_1828 = (int) (((long) 16));
															{	/* Bdb/spread_obj.scm 129 */
																long BgL_auxz00_2739;

																BgL_auxz00_2739 = (long) (BgL_arg2644z00_1828);
																BgL_restz00_1827 =
																	(BgL_offsetz00_1824 % BgL_auxz00_2739);
														}}
														{	/* Bdb/spread_obj.scm 129 */

															BgL_method3283z00_1817 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1822,
																	(int) (BgL_modz00_1825)),
																(int) (BgL_restz00_1827));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3283z00_1817) (BgL_method3283z00_1817,
								(obj_t) (BgL_arg3438z00_1307), BEOA);
					}}
					{	/* Bdb/spread_obj.scm 130 */
						obj_t BgL_g3275z00_1308;

						BgL_g3275z00_1308 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1303))->BgL_clausesz00);
						{
							obj_t BgL_l3273z00_1310;

							BgL_l3273z00_1310 = BgL_g3275z00_1308;
						BgL_zc3anonymousza33439ze3z83_1311:
							if (PAIRP(BgL_l3273z00_1310))
								{	/* Bdb/spread_obj.scm 130 */
									{	/* Bdb/spread_obj.scm 131 */
										obj_t BgL_clausez00_1313;

										BgL_clausez00_1313 = CAR(BgL_l3273z00_1310);
										{	/* Bdb/spread_obj.scm 131 */
											obj_t BgL_arg3441z00_1314;

											BgL_arg3441z00_1314 = CDR(BgL_clausez00_1313);
											{	/* Bdb/spread_obj.scm 131 */
												BgL_nodez00_bglt BgL_nodez00_1846;

												BgL_nodez00_1846 =
													(BgL_nodez00_bglt) (BgL_arg3441z00_1314);
												{	/* Bdb/spread_obj.scm 131 */
													obj_t BgL_method3283z00_1847;

													{	/* Bdb/spread_obj.scm 131 */
														BgL_objectz00_bglt BgL_objz00_1848;

														BgL_objz00_1848 =
															(BgL_objectz00_bglt) (BgL_nodez00_1846);
														{	/* Bdb/spread_obj.scm 131 */
															long BgL_objzd2classzd2numz00_1849;

															BgL_objzd2classzd2numz00_1849 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1848);
															{	/* Bdb/spread_obj.scm 131 */
																obj_t BgL_arg2643z00_1850;

																BgL_arg2643z00_1850 =
																	PROCEDURE_REF
																	(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
																	(int) (((long) 1)));
																{	/* Bdb/spread_obj.scm 131 */
																	obj_t BgL_arrayz00_1852;

																	int BgL_offsetz00_1853;

																	BgL_arrayz00_1852 = BgL_arg2643z00_1850;
																	BgL_offsetz00_1853 =
																		(int) (BgL_objzd2classzd2numz00_1849);
																	{	/* Bdb/spread_obj.scm 131 */
																		long BgL_offsetz00_1854;

																		BgL_offsetz00_1854 =
																			(
																			(long) (BgL_offsetz00_1853) -
																			OBJECT_TYPE);
																		{	/* Bdb/spread_obj.scm 131 */
																			long BgL_modz00_1855;

																			{	/* Bdb/spread_obj.scm 131 */
																				int BgL_arg2645z00_1856;

																				BgL_arg2645z00_1856 =
																					(int) (((long) 16));
																				{	/* Bdb/spread_obj.scm 131 */
																					long BgL_auxz00_2763;

																					BgL_auxz00_2763 =
																						(long) (BgL_arg2645z00_1856);
																					BgL_modz00_1855 =
																						(BgL_offsetz00_1854 /
																						BgL_auxz00_2763);
																			}}
																			{	/* Bdb/spread_obj.scm 131 */
																				long BgL_restz00_1857;

																				{	/* Bdb/spread_obj.scm 131 */
																					int BgL_arg2644z00_1858;

																					BgL_arg2644z00_1858 =
																						(int) (((long) 16));
																					{	/* Bdb/spread_obj.scm 131 */
																						long BgL_auxz00_2767;

																						BgL_auxz00_2767 =
																							(long) (BgL_arg2644z00_1858);
																						BgL_restz00_1857 =
																							(BgL_offsetz00_1854 %
																							BgL_auxz00_2767);
																				}}
																				{	/* Bdb/spread_obj.scm 131 */

																					BgL_method3283z00_1847 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1852,
																							(int) (BgL_modz00_1855)),
																						(int) (BgL_restz00_1857));
													}}}}}}}}
													PROCEDURE_ENTRY(BgL_method3283z00_1847)
														(BgL_method3283z00_1847, (obj_t) (BgL_nodez00_1846),
														BEOA);
									}}}}
									{
										obj_t BgL_l3273z00_2777;

										BgL_l3273z00_2777 = CDR(BgL_l3273z00_1310);
										BgL_l3273z00_1310 = BgL_l3273z00_2777;
										goto BgL_zc3anonymousza33439ze3z83_1311;
									}
								}
							else
								{	/* Bdb/spread_obj.scm 130 */
									BgL_auxz00_2725 = ((bool_t) 1);
								}
						}
					}
					return BBOOL(BgL_auxz00_2725);
				}
			}
		}
	}



/* spread-obj-node!-fai3301 */
	obj_t BGl_spreadzd2objzd2nodez12zd2fai3301zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2198, obj_t BgL_nodez00_2199)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 118 */
			{
				BgL_failz00_bglt BgL_nodez00_1294;

				BgL_nodez00_1294 = (BgL_failz00_bglt) (BgL_nodez00_2199);
				{	/* Bdb/spread_obj.scm 120 */
					BgL_nodez00_bglt BgL_arg3434z00_1298;

					BgL_arg3434z00_1298 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1294))->BgL_procz00);
					{	/* Bdb/spread_obj.scm 120 */
						obj_t BgL_method3283z00_1736;

						{	/* Bdb/spread_obj.scm 120 */
							BgL_objectz00_bglt BgL_objz00_1737;

							BgL_objz00_1737 = (BgL_objectz00_bglt) (BgL_arg3434z00_1298);
							{	/* Bdb/spread_obj.scm 120 */
								long BgL_objzd2classzd2numz00_1738;

								BgL_objzd2classzd2numz00_1738 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1737);
								{	/* Bdb/spread_obj.scm 120 */
									obj_t BgL_arg2643z00_1739;

									BgL_arg2643z00_1739 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 120 */
										obj_t BgL_arrayz00_1741;

										int BgL_offsetz00_1742;

										BgL_arrayz00_1741 = BgL_arg2643z00_1739;
										BgL_offsetz00_1742 = (int) (BgL_objzd2classzd2numz00_1738);
										{	/* Bdb/spread_obj.scm 120 */
											long BgL_offsetz00_1743;

											BgL_offsetz00_1743 =
												((long) (BgL_offsetz00_1742) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 120 */
												long BgL_modz00_1744;

												{	/* Bdb/spread_obj.scm 120 */
													int BgL_arg2645z00_1745;

													BgL_arg2645z00_1745 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 120 */
														long BgL_auxz00_2790;

														BgL_auxz00_2790 = (long) (BgL_arg2645z00_1745);
														BgL_modz00_1744 =
															(BgL_offsetz00_1743 / BgL_auxz00_2790);
												}}
												{	/* Bdb/spread_obj.scm 120 */
													long BgL_restz00_1746;

													{	/* Bdb/spread_obj.scm 120 */
														int BgL_arg2644z00_1747;

														BgL_arg2644z00_1747 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 120 */
															long BgL_auxz00_2794;

															BgL_auxz00_2794 = (long) (BgL_arg2644z00_1747);
															BgL_restz00_1746 =
																(BgL_offsetz00_1743 % BgL_auxz00_2794);
													}}
													{	/* Bdb/spread_obj.scm 120 */

														BgL_method3283z00_1736 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1741,
																(int) (BgL_modz00_1744)),
															(int) (BgL_restz00_1746));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3283z00_1736) (BgL_method3283z00_1736,
							(obj_t) (BgL_arg3434z00_1298), BEOA);
				}}
				{	/* Bdb/spread_obj.scm 121 */
					BgL_nodez00_bglt BgL_arg3435z00_1299;

					BgL_arg3435z00_1299 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1294))->BgL_msgz00);
					{	/* Bdb/spread_obj.scm 121 */
						obj_t BgL_method3283z00_1763;

						{	/* Bdb/spread_obj.scm 121 */
							BgL_objectz00_bglt BgL_objz00_1764;

							BgL_objz00_1764 = (BgL_objectz00_bglt) (BgL_arg3435z00_1299);
							{	/* Bdb/spread_obj.scm 121 */
								long BgL_objzd2classzd2numz00_1765;

								BgL_objzd2classzd2numz00_1765 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1764);
								{	/* Bdb/spread_obj.scm 121 */
									obj_t BgL_arg2643z00_1766;

									BgL_arg2643z00_1766 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 121 */
										obj_t BgL_arrayz00_1768;

										int BgL_offsetz00_1769;

										BgL_arrayz00_1768 = BgL_arg2643z00_1766;
										BgL_offsetz00_1769 = (int) (BgL_objzd2classzd2numz00_1765);
										{	/* Bdb/spread_obj.scm 121 */
											long BgL_offsetz00_1770;

											BgL_offsetz00_1770 =
												((long) (BgL_offsetz00_1769) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 121 */
												long BgL_modz00_1771;

												{	/* Bdb/spread_obj.scm 121 */
													int BgL_arg2645z00_1772;

													BgL_arg2645z00_1772 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 121 */
														long BgL_auxz00_2813;

														BgL_auxz00_2813 = (long) (BgL_arg2645z00_1772);
														BgL_modz00_1771 =
															(BgL_offsetz00_1770 / BgL_auxz00_2813);
												}}
												{	/* Bdb/spread_obj.scm 121 */
													long BgL_restz00_1773;

													{	/* Bdb/spread_obj.scm 121 */
														int BgL_arg2644z00_1774;

														BgL_arg2644z00_1774 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 121 */
															long BgL_auxz00_2817;

															BgL_auxz00_2817 = (long) (BgL_arg2644z00_1774);
															BgL_restz00_1773 =
																(BgL_offsetz00_1770 % BgL_auxz00_2817);
													}}
													{	/* Bdb/spread_obj.scm 121 */

														BgL_method3283z00_1763 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1768,
																(int) (BgL_modz00_1771)),
															(int) (BgL_restz00_1773));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3283z00_1763) (BgL_method3283z00_1763,
							(obj_t) (BgL_arg3435z00_1299), BEOA);
				}}
				{	/* Bdb/spread_obj.scm 122 */
					BgL_nodez00_bglt BgL_arg3436z00_1300;

					BgL_arg3436z00_1300 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1294))->BgL_objz00);
					{	/* Bdb/spread_obj.scm 122 */
						obj_t BgL_method3283z00_1790;

						{	/* Bdb/spread_obj.scm 122 */
							BgL_objectz00_bglt BgL_objz00_1791;

							BgL_objz00_1791 = (BgL_objectz00_bglt) (BgL_arg3436z00_1300);
							{	/* Bdb/spread_obj.scm 122 */
								long BgL_objzd2classzd2numz00_1792;

								BgL_objzd2classzd2numz00_1792 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1791);
								{	/* Bdb/spread_obj.scm 122 */
									obj_t BgL_arg2643z00_1793;

									BgL_arg2643z00_1793 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 122 */
										obj_t BgL_arrayz00_1795;

										int BgL_offsetz00_1796;

										BgL_arrayz00_1795 = BgL_arg2643z00_1793;
										BgL_offsetz00_1796 = (int) (BgL_objzd2classzd2numz00_1792);
										{	/* Bdb/spread_obj.scm 122 */
											long BgL_offsetz00_1797;

											BgL_offsetz00_1797 =
												((long) (BgL_offsetz00_1796) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 122 */
												long BgL_modz00_1798;

												{	/* Bdb/spread_obj.scm 122 */
													int BgL_arg2645z00_1799;

													BgL_arg2645z00_1799 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 122 */
														long BgL_auxz00_2836;

														BgL_auxz00_2836 = (long) (BgL_arg2645z00_1799);
														BgL_modz00_1798 =
															(BgL_offsetz00_1797 / BgL_auxz00_2836);
												}}
												{	/* Bdb/spread_obj.scm 122 */
													long BgL_restz00_1800;

													{	/* Bdb/spread_obj.scm 122 */
														int BgL_arg2644z00_1801;

														BgL_arg2644z00_1801 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 122 */
															long BgL_auxz00_2840;

															BgL_auxz00_2840 = (long) (BgL_arg2644z00_1801);
															BgL_restz00_1800 =
																(BgL_offsetz00_1797 % BgL_auxz00_2840);
													}}
													{	/* Bdb/spread_obj.scm 122 */

														BgL_method3283z00_1790 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1795,
																(int) (BgL_modz00_1798)),
															(int) (BgL_restz00_1800));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1790) (BgL_method3283z00_1790,
							(obj_t) (BgL_arg3436z00_1300), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-con3299 */
	obj_t BGl_spreadzd2objzd2nodez12zd2con3299zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2200, obj_t BgL_nodez00_2201)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 109 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1285;

				BgL_nodez00_1285 = (BgL_conditionalz00_bglt) (BgL_nodez00_2201);
				{	/* Bdb/spread_obj.scm 111 */
					BgL_nodez00_bglt BgL_arg3430z00_1289;

					BgL_arg3430z00_1289 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1285))->BgL_testz00);
					{	/* Bdb/spread_obj.scm 111 */
						obj_t BgL_method3283z00_1655;

						{	/* Bdb/spread_obj.scm 111 */
							BgL_objectz00_bglt BgL_objz00_1656;

							BgL_objz00_1656 = (BgL_objectz00_bglt) (BgL_arg3430z00_1289);
							{	/* Bdb/spread_obj.scm 111 */
								long BgL_objzd2classzd2numz00_1657;

								BgL_objzd2classzd2numz00_1657 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1656);
								{	/* Bdb/spread_obj.scm 111 */
									obj_t BgL_arg2643z00_1658;

									BgL_arg2643z00_1658 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 111 */
										obj_t BgL_arrayz00_1660;

										int BgL_offsetz00_1661;

										BgL_arrayz00_1660 = BgL_arg2643z00_1658;
										BgL_offsetz00_1661 = (int) (BgL_objzd2classzd2numz00_1657);
										{	/* Bdb/spread_obj.scm 111 */
											long BgL_offsetz00_1662;

											BgL_offsetz00_1662 =
												((long) (BgL_offsetz00_1661) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 111 */
												long BgL_modz00_1663;

												{	/* Bdb/spread_obj.scm 111 */
													int BgL_arg2645z00_1664;

													BgL_arg2645z00_1664 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 111 */
														long BgL_auxz00_2860;

														BgL_auxz00_2860 = (long) (BgL_arg2645z00_1664);
														BgL_modz00_1663 =
															(BgL_offsetz00_1662 / BgL_auxz00_2860);
												}}
												{	/* Bdb/spread_obj.scm 111 */
													long BgL_restz00_1665;

													{	/* Bdb/spread_obj.scm 111 */
														int BgL_arg2644z00_1666;

														BgL_arg2644z00_1666 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 111 */
															long BgL_auxz00_2864;

															BgL_auxz00_2864 = (long) (BgL_arg2644z00_1666);
															BgL_restz00_1665 =
																(BgL_offsetz00_1662 % BgL_auxz00_2864);
													}}
													{	/* Bdb/spread_obj.scm 111 */

														BgL_method3283z00_1655 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1660,
																(int) (BgL_modz00_1663)),
															(int) (BgL_restz00_1665));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3283z00_1655) (BgL_method3283z00_1655,
							(obj_t) (BgL_arg3430z00_1289), BEOA);
				}}
				{	/* Bdb/spread_obj.scm 112 */
					BgL_nodez00_bglt BgL_arg3431z00_1290;

					BgL_arg3431z00_1290 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1285))->BgL_truez00);
					{	/* Bdb/spread_obj.scm 112 */
						obj_t BgL_method3283z00_1682;

						{	/* Bdb/spread_obj.scm 112 */
							BgL_objectz00_bglt BgL_objz00_1683;

							BgL_objz00_1683 = (BgL_objectz00_bglt) (BgL_arg3431z00_1290);
							{	/* Bdb/spread_obj.scm 112 */
								long BgL_objzd2classzd2numz00_1684;

								BgL_objzd2classzd2numz00_1684 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1683);
								{	/* Bdb/spread_obj.scm 112 */
									obj_t BgL_arg2643z00_1685;

									BgL_arg2643z00_1685 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 112 */
										obj_t BgL_arrayz00_1687;

										int BgL_offsetz00_1688;

										BgL_arrayz00_1687 = BgL_arg2643z00_1685;
										BgL_offsetz00_1688 = (int) (BgL_objzd2classzd2numz00_1684);
										{	/* Bdb/spread_obj.scm 112 */
											long BgL_offsetz00_1689;

											BgL_offsetz00_1689 =
												((long) (BgL_offsetz00_1688) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 112 */
												long BgL_modz00_1690;

												{	/* Bdb/spread_obj.scm 112 */
													int BgL_arg2645z00_1691;

													BgL_arg2645z00_1691 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 112 */
														long BgL_auxz00_2883;

														BgL_auxz00_2883 = (long) (BgL_arg2645z00_1691);
														BgL_modz00_1690 =
															(BgL_offsetz00_1689 / BgL_auxz00_2883);
												}}
												{	/* Bdb/spread_obj.scm 112 */
													long BgL_restz00_1692;

													{	/* Bdb/spread_obj.scm 112 */
														int BgL_arg2644z00_1693;

														BgL_arg2644z00_1693 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 112 */
															long BgL_auxz00_2887;

															BgL_auxz00_2887 = (long) (BgL_arg2644z00_1693);
															BgL_restz00_1692 =
																(BgL_offsetz00_1689 % BgL_auxz00_2887);
													}}
													{	/* Bdb/spread_obj.scm 112 */

														BgL_method3283z00_1682 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1687,
																(int) (BgL_modz00_1690)),
															(int) (BgL_restz00_1692));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3283z00_1682) (BgL_method3283z00_1682,
							(obj_t) (BgL_arg3431z00_1290), BEOA);
				}}
				{	/* Bdb/spread_obj.scm 113 */
					BgL_nodez00_bglt BgL_arg3432z00_1291;

					BgL_arg3432z00_1291 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1285))->BgL_falsez00);
					{	/* Bdb/spread_obj.scm 113 */
						obj_t BgL_method3283z00_1709;

						{	/* Bdb/spread_obj.scm 113 */
							BgL_objectz00_bglt BgL_objz00_1710;

							BgL_objz00_1710 = (BgL_objectz00_bglt) (BgL_arg3432z00_1291);
							{	/* Bdb/spread_obj.scm 113 */
								long BgL_objzd2classzd2numz00_1711;

								BgL_objzd2classzd2numz00_1711 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1710);
								{	/* Bdb/spread_obj.scm 113 */
									obj_t BgL_arg2643z00_1712;

									BgL_arg2643z00_1712 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 113 */
										obj_t BgL_arrayz00_1714;

										int BgL_offsetz00_1715;

										BgL_arrayz00_1714 = BgL_arg2643z00_1712;
										BgL_offsetz00_1715 = (int) (BgL_objzd2classzd2numz00_1711);
										{	/* Bdb/spread_obj.scm 113 */
											long BgL_offsetz00_1716;

											BgL_offsetz00_1716 =
												((long) (BgL_offsetz00_1715) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 113 */
												long BgL_modz00_1717;

												{	/* Bdb/spread_obj.scm 113 */
													int BgL_arg2645z00_1718;

													BgL_arg2645z00_1718 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 113 */
														long BgL_auxz00_2906;

														BgL_auxz00_2906 = (long) (BgL_arg2645z00_1718);
														BgL_modz00_1717 =
															(BgL_offsetz00_1716 / BgL_auxz00_2906);
												}}
												{	/* Bdb/spread_obj.scm 113 */
													long BgL_restz00_1719;

													{	/* Bdb/spread_obj.scm 113 */
														int BgL_arg2644z00_1720;

														BgL_arg2644z00_1720 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 113 */
															long BgL_auxz00_2910;

															BgL_auxz00_2910 = (long) (BgL_arg2644z00_1720);
															BgL_restz00_1719 =
																(BgL_offsetz00_1716 % BgL_auxz00_2910);
													}}
													{	/* Bdb/spread_obj.scm 113 */

														BgL_method3283z00_1709 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1714,
																(int) (BgL_modz00_1717)),
															(int) (BgL_restz00_1719));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1709) (BgL_method3283z00_1709,
							(obj_t) (BgL_arg3432z00_1291), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-set3297 */
	obj_t BGl_spreadzd2objzd2nodez12zd2set3297zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2202, obj_t BgL_nodez00_2203)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 103 */
			{
				BgL_setqz00_bglt BgL_nodez00_1279;

				BgL_nodez00_1279 = (BgL_setqz00_bglt) (BgL_nodez00_2203);
				{	/* Bdb/spread_obj.scm 104 */
					BgL_nodez00_bglt BgL_arg3426z00_1625;

					BgL_arg3426z00_1625 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1279))->BgL_valuez00);
					{	/* Bdb/spread_obj.scm 104 */
						obj_t BgL_method3283z00_1628;

						{	/* Bdb/spread_obj.scm 104 */
							BgL_objectz00_bglt BgL_objz00_1629;

							BgL_objz00_1629 = (BgL_objectz00_bglt) (BgL_arg3426z00_1625);
							{	/* Bdb/spread_obj.scm 104 */
								long BgL_objzd2classzd2numz00_1630;

								BgL_objzd2classzd2numz00_1630 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1629);
								{	/* Bdb/spread_obj.scm 104 */
									obj_t BgL_arg2643z00_1631;

									BgL_arg2643z00_1631 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 104 */
										obj_t BgL_arrayz00_1633;

										int BgL_offsetz00_1634;

										BgL_arrayz00_1633 = BgL_arg2643z00_1631;
										BgL_offsetz00_1634 = (int) (BgL_objzd2classzd2numz00_1630);
										{	/* Bdb/spread_obj.scm 104 */
											long BgL_offsetz00_1635;

											BgL_offsetz00_1635 =
												((long) (BgL_offsetz00_1634) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 104 */
												long BgL_modz00_1636;

												{	/* Bdb/spread_obj.scm 104 */
													int BgL_arg2645z00_1637;

													BgL_arg2645z00_1637 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 104 */
														long BgL_auxz00_2930;

														BgL_auxz00_2930 = (long) (BgL_arg2645z00_1637);
														BgL_modz00_1636 =
															(BgL_offsetz00_1635 / BgL_auxz00_2930);
												}}
												{	/* Bdb/spread_obj.scm 104 */
													long BgL_restz00_1638;

													{	/* Bdb/spread_obj.scm 104 */
														int BgL_arg2644z00_1639;

														BgL_arg2644z00_1639 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 104 */
															long BgL_auxz00_2934;

															BgL_auxz00_2934 = (long) (BgL_arg2644z00_1639);
															BgL_restz00_1638 =
																(BgL_offsetz00_1635 % BgL_auxz00_2934);
													}}
													{	/* Bdb/spread_obj.scm 104 */

														BgL_method3283z00_1628 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1633,
																(int) (BgL_modz00_1636)),
															(int) (BgL_restz00_1638));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1628) (BgL_method3283z00_1628,
							(obj_t) (BgL_arg3426z00_1625), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-cas3295 */
	obj_t BGl_spreadzd2objzd2nodez12zd2cas3295zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2204, obj_t BgL_nodez00_2205)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 97 */
			{
				BgL_castz00_bglt BgL_nodez00_1273;

				BgL_nodez00_1273 = (BgL_castz00_bglt) (BgL_nodez00_2205);
				{	/* Bdb/spread_obj.scm 98 */
					BgL_nodez00_bglt BgL_arg3424z00_1597;

					BgL_arg3424z00_1597 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1273))->BgL_argz00);
					{	/* Bdb/spread_obj.scm 98 */
						obj_t BgL_method3283z00_1600;

						{	/* Bdb/spread_obj.scm 98 */
							BgL_objectz00_bglt BgL_objz00_1601;

							BgL_objz00_1601 = (BgL_objectz00_bglt) (BgL_arg3424z00_1597);
							{	/* Bdb/spread_obj.scm 98 */
								long BgL_objzd2classzd2numz00_1602;

								BgL_objzd2classzd2numz00_1602 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1601);
								{	/* Bdb/spread_obj.scm 98 */
									obj_t BgL_arg2643z00_1603;

									BgL_arg2643z00_1603 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 98 */
										obj_t BgL_arrayz00_1605;

										int BgL_offsetz00_1606;

										BgL_arrayz00_1605 = BgL_arg2643z00_1603;
										BgL_offsetz00_1606 = (int) (BgL_objzd2classzd2numz00_1602);
										{	/* Bdb/spread_obj.scm 98 */
											long BgL_offsetz00_1607;

											BgL_offsetz00_1607 =
												((long) (BgL_offsetz00_1606) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 98 */
												long BgL_modz00_1608;

												{	/* Bdb/spread_obj.scm 98 */
													int BgL_arg2645z00_1609;

													BgL_arg2645z00_1609 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 98 */
														long BgL_auxz00_2954;

														BgL_auxz00_2954 = (long) (BgL_arg2645z00_1609);
														BgL_modz00_1608 =
															(BgL_offsetz00_1607 / BgL_auxz00_2954);
												}}
												{	/* Bdb/spread_obj.scm 98 */
													long BgL_restz00_1610;

													{	/* Bdb/spread_obj.scm 98 */
														int BgL_arg2644z00_1611;

														BgL_arg2644z00_1611 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 98 */
															long BgL_auxz00_2958;

															BgL_auxz00_2958 = (long) (BgL_arg2644z00_1611);
															BgL_restz00_1610 =
																(BgL_offsetz00_1607 % BgL_auxz00_2958);
													}}
													{	/* Bdb/spread_obj.scm 98 */

														BgL_method3283z00_1600 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1605,
																(int) (BgL_modz00_1608)),
															(int) (BgL_restz00_1610));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1600) (BgL_method3283z00_1600,
							(obj_t) (BgL_arg3424z00_1597), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-ext3293 */
	obj_t BGl_spreadzd2objzd2nodez12zd2ext3293zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2206, obj_t BgL_nodez00_2207)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 91 */
			{
				BgL_externz00_bglt BgL_nodez00_1267;

				BgL_nodez00_1267 = (BgL_externz00_bglt) (BgL_nodez00_2207);
				{	/* Bdb/spread_obj.scm 92 */
					obj_t BgL_arg3421z00_1595;

					BgL_arg3421z00_1595 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1267))->BgL_exprza2za2);
					return
						BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2
						(BgL_arg3421z00_1595);
				}
			}
		}
	}



/* spread-obj-node!-fun3291 */
	obj_t BGl_spreadzd2objzd2nodez12zd2fun3291zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2208, obj_t BgL_nodez00_2209)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 83 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1259;

				BgL_nodez00_1259 = (BgL_funcallz00_bglt) (BgL_nodez00_2209);
				{	/* Bdb/spread_obj.scm 85 */
					BgL_nodez00_bglt BgL_arg3418z00_1263;

					BgL_arg3418z00_1263 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1259))->BgL_funz00);
					{	/* Bdb/spread_obj.scm 85 */
						obj_t BgL_method3283z00_1569;

						{	/* Bdb/spread_obj.scm 85 */
							BgL_objectz00_bglt BgL_objz00_1570;

							BgL_objz00_1570 = (BgL_objectz00_bglt) (BgL_arg3418z00_1263);
							{	/* Bdb/spread_obj.scm 85 */
								long BgL_objzd2classzd2numz00_1571;

								BgL_objzd2classzd2numz00_1571 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1570);
								{	/* Bdb/spread_obj.scm 85 */
									obj_t BgL_arg2643z00_1572;

									BgL_arg2643z00_1572 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 85 */
										obj_t BgL_arrayz00_1574;

										int BgL_offsetz00_1575;

										BgL_arrayz00_1574 = BgL_arg2643z00_1572;
										BgL_offsetz00_1575 = (int) (BgL_objzd2classzd2numz00_1571);
										{	/* Bdb/spread_obj.scm 85 */
											long BgL_offsetz00_1576;

											BgL_offsetz00_1576 =
												((long) (BgL_offsetz00_1575) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 85 */
												long BgL_modz00_1577;

												{	/* Bdb/spread_obj.scm 85 */
													int BgL_arg2645z00_1578;

													BgL_arg2645z00_1578 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 85 */
														long BgL_auxz00_2981;

														BgL_auxz00_2981 = (long) (BgL_arg2645z00_1578);
														BgL_modz00_1577 =
															(BgL_offsetz00_1576 / BgL_auxz00_2981);
												}}
												{	/* Bdb/spread_obj.scm 85 */
													long BgL_restz00_1579;

													{	/* Bdb/spread_obj.scm 85 */
														int BgL_arg2644z00_1580;

														BgL_arg2644z00_1580 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 85 */
															long BgL_auxz00_2985;

															BgL_auxz00_2985 = (long) (BgL_arg2644z00_1580);
															BgL_restz00_1579 =
																(BgL_offsetz00_1576 % BgL_auxz00_2985);
													}}
													{	/* Bdb/spread_obj.scm 85 */

														BgL_method3283z00_1569 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1574,
																(int) (BgL_modz00_1577)),
															(int) (BgL_restz00_1579));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3283z00_1569) (BgL_method3283z00_1569,
							(obj_t) (BgL_arg3418z00_1263), BEOA);
				}}
				{	/* Bdb/spread_obj.scm 86 */
					obj_t BgL_arg3419z00_1264;

					BgL_arg3419z00_1264 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1259))->BgL_argsz00);
					return
						BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2
						(BgL_arg3419z00_1264);
				}
			}
		}
	}



/* spread-obj-node!-app3289 */
	obj_t BGl_spreadzd2objzd2nodez12zd2app3289zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2210, obj_t BgL_nodez00_2211)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 75 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1251;

				BgL_nodez00_1251 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2211);
				{	/* Bdb/spread_obj.scm 77 */
					BgL_nodez00_bglt BgL_arg3415z00_1255;

					BgL_arg3415z00_1255 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1251))->BgL_funz00);
					{	/* Bdb/spread_obj.scm 77 */
						obj_t BgL_method3283z00_1515;

						{	/* Bdb/spread_obj.scm 77 */
							BgL_objectz00_bglt BgL_objz00_1516;

							BgL_objz00_1516 = (BgL_objectz00_bglt) (BgL_arg3415z00_1255);
							{	/* Bdb/spread_obj.scm 77 */
								long BgL_objzd2classzd2numz00_1517;

								BgL_objzd2classzd2numz00_1517 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1516);
								{	/* Bdb/spread_obj.scm 77 */
									obj_t BgL_arg2643z00_1518;

									BgL_arg2643z00_1518 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 77 */
										obj_t BgL_arrayz00_1520;

										int BgL_offsetz00_1521;

										BgL_arrayz00_1520 = BgL_arg2643z00_1518;
										BgL_offsetz00_1521 = (int) (BgL_objzd2classzd2numz00_1517);
										{	/* Bdb/spread_obj.scm 77 */
											long BgL_offsetz00_1522;

											BgL_offsetz00_1522 =
												((long) (BgL_offsetz00_1521) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 77 */
												long BgL_modz00_1523;

												{	/* Bdb/spread_obj.scm 77 */
													int BgL_arg2645z00_1524;

													BgL_arg2645z00_1524 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 77 */
														long BgL_auxz00_3007;

														BgL_auxz00_3007 = (long) (BgL_arg2645z00_1524);
														BgL_modz00_1523 =
															(BgL_offsetz00_1522 / BgL_auxz00_3007);
												}}
												{	/* Bdb/spread_obj.scm 77 */
													long BgL_restz00_1525;

													{	/* Bdb/spread_obj.scm 77 */
														int BgL_arg2644z00_1526;

														BgL_arg2644z00_1526 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 77 */
															long BgL_auxz00_3011;

															BgL_auxz00_3011 = (long) (BgL_arg2644z00_1526);
															BgL_restz00_1525 =
																(BgL_offsetz00_1522 % BgL_auxz00_3011);
													}}
													{	/* Bdb/spread_obj.scm 77 */

														BgL_method3283z00_1515 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1520,
																(int) (BgL_modz00_1523)),
															(int) (BgL_restz00_1525));
						}}}}}}}}
						PROCEDURE_ENTRY(BgL_method3283z00_1515) (BgL_method3283z00_1515,
							(obj_t) (BgL_arg3415z00_1255), BEOA);
				}}
				{	/* Bdb/spread_obj.scm 78 */
					BgL_nodez00_bglt BgL_arg3416z00_1256;

					BgL_arg3416z00_1256 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1251))->BgL_argz00);
					{	/* Bdb/spread_obj.scm 78 */
						obj_t BgL_method3283z00_1542;

						{	/* Bdb/spread_obj.scm 78 */
							BgL_objectz00_bglt BgL_objz00_1543;

							BgL_objz00_1543 = (BgL_objectz00_bglt) (BgL_arg3416z00_1256);
							{	/* Bdb/spread_obj.scm 78 */
								long BgL_objzd2classzd2numz00_1544;

								BgL_objzd2classzd2numz00_1544 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_1543);
								{	/* Bdb/spread_obj.scm 78 */
									obj_t BgL_arg2643z00_1545;

									BgL_arg2643z00_1545 =
										PROCEDURE_REF
										(BGl_spreadzd2objzd2nodez12zd2envzc0zzbdb_spreadzd2objzd2,
										(int) (((long) 1)));
									{	/* Bdb/spread_obj.scm 78 */
										obj_t BgL_arrayz00_1547;

										int BgL_offsetz00_1548;

										BgL_arrayz00_1547 = BgL_arg2643z00_1545;
										BgL_offsetz00_1548 = (int) (BgL_objzd2classzd2numz00_1544);
										{	/* Bdb/spread_obj.scm 78 */
											long BgL_offsetz00_1549;

											BgL_offsetz00_1549 =
												((long) (BgL_offsetz00_1548) - OBJECT_TYPE);
											{	/* Bdb/spread_obj.scm 78 */
												long BgL_modz00_1550;

												{	/* Bdb/spread_obj.scm 78 */
													int BgL_arg2645z00_1551;

													BgL_arg2645z00_1551 = (int) (((long) 16));
													{	/* Bdb/spread_obj.scm 78 */
														long BgL_auxz00_3030;

														BgL_auxz00_3030 = (long) (BgL_arg2645z00_1551);
														BgL_modz00_1550 =
															(BgL_offsetz00_1549 / BgL_auxz00_3030);
												}}
												{	/* Bdb/spread_obj.scm 78 */
													long BgL_restz00_1552;

													{	/* Bdb/spread_obj.scm 78 */
														int BgL_arg2644z00_1553;

														BgL_arg2644z00_1553 = (int) (((long) 16));
														{	/* Bdb/spread_obj.scm 78 */
															long BgL_auxz00_3034;

															BgL_auxz00_3034 = (long) (BgL_arg2644z00_1553);
															BgL_restz00_1552 =
																(BgL_offsetz00_1549 % BgL_auxz00_3034);
													}}
													{	/* Bdb/spread_obj.scm 78 */

														BgL_method3283z00_1542 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_1547,
																(int) (BgL_modz00_1550)),
															(int) (BgL_restz00_1552));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3283z00_1542) (BgL_method3283z00_1542,
							(obj_t) (BgL_arg3416z00_1256), BEOA);
					}
				}
			}
		}
	}



/* spread-obj-node!-app3287 */
	obj_t BGl_spreadzd2objzd2nodez12zd2app3287zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2212, obj_t BgL_nodez00_2213)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 69 */
			{
				BgL_appz00_bglt BgL_nodez00_1245;

				BgL_nodez00_1245 = (BgL_appz00_bglt) (BgL_nodez00_2213);
				{	/* Bdb/spread_obj.scm 70 */
					obj_t BgL_arg3413z00_1511;

					BgL_arg3413z00_1511 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1245))->BgL_argsz00);
					return
						BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2
						(BgL_arg3413z00_1511);
				}
			}
		}
	}



/* spread-obj-node!-seq3285 */
	obj_t BGl_spreadzd2objzd2nodez12zd2seq3285zc0zzbdb_spreadzd2objzd2(obj_t
		BgL_envz00_2214, obj_t BgL_nodez00_2215)
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 63 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1239;

				BgL_nodez00_1239 = (BgL_sequencez00_bglt) (BgL_nodez00_2215);
				{	/* Bdb/spread_obj.scm 64 */
					obj_t BgL_arg3411z00_1509;

					BgL_arg3411z00_1509 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1239))->BgL_nodesz00);
					return
						BGl_spreadzd2objzd2nodeza2z12zb0zzbdb_spreadzd2objzd2
						(BgL_arg3411z00_1509);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbdb_spreadzd2objzd2()
	{
		AN_OBJECT;
		{	/* Bdb/spread_obj.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3553z00zzbdb_spreadzd2objzd2));
		}
	}

#ifdef __cplusplus
}
#endif
