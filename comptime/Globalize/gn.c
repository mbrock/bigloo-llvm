/*===========================================================================*/
/*   (Globalize/gn.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/gn.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_cfunctionz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;

	typedef struct BgL_localzf2ginfozf2_bgl
	{
		bool_t BgL_escapezf3zf3;
		bool_t BgL_globaliza7edzf3z54;
	}                       *BgL_localzf2ginfozf2_bglt;


	static obj_t BGl_Ez00zzglobaliza7e_gnza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_Ezd2kwote3677zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl__Gnz12z12zzglobaliza7e_gnza7(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzglobaliza7e_gnza7();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl__Ezd2default3672zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_savezd2funz12zc0zzglobaliza7e_gnza7(BgL_variablez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl_Ezd2select3701zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_savezd2appz12zc0zzglobaliza7e_gnza7(obj_t,
		BgL_variablez00_bglt);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_Ezd2default3672zd2zzglobaliza7e_gnza7(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzglobaliza7e_gnza7();
	static obj_t BGl_Ezd2jumpzd2exzd2it3709zd2zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_Ezd2atom3675zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_Gnz12z12zzglobaliza7e_gnza7(obj_t,
		BgL_nodez00_bglt, BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_Eza2za2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_Ezd2funcall3689zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_Ezd2sequence3683zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl__Ez00zzglobaliza7e_gnza7(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_Ezd2boxzd2setz123717z12zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_gnza7();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_Ezd2app3685zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7 = BUNSPEC;
	static obj_t BGl_Ezd2conditional3697zd2zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_Ezd2cast3693zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_gnza7();
	static obj_t BGl_Ezd2boxzd2ref3714z00zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_gnza7();
	static obj_t BGl_Ezd2setq3695zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Ezd2makezd2box3711z00zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_Gzd2fromzd2ctoz00zzglobaliza7e_gnza7(obj_t);
	static obj_t BGl_Ezd2var3679zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Ezd2setzd2exzd2it3707zd2zzglobaliza7e_gnza7(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_Ezd2letzd2fun3703z00zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Ezd2closure3681zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Ezd2letzd2var3705z00zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_Ezd2extern3691zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Ezd2fail3699zd2zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_Ezd2appzd2ly3687z00zzglobaliza7e_gnza7(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_gnza7();
	extern obj_t BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
	extern obj_t BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00;
	extern obj_t BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00;
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3947z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2atom3675za7d2za73973za7,
		BGl_Ezd2atom3675zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3948z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2kwote3677za7d23974z00,
		BGl_Ezd2kwote3677zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3950z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2closure3681za73975z00,
		BGl_Ezd2closure3681zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3949z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2var3679za7d2za7za73976z00,
		BGl_Ezd2var3679zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3951z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2sequence36833977za7,
		BGl_Ezd2sequence3683zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3952z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2app3685za7d2za7za73978z00,
		BGl_Ezd2app3685zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3953z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2appza7d2ly36873979z00,
		BGl_Ezd2appzd2ly3687z00zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3954z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2funcall3689za73980z00,
		BGl_Ezd2funcall3689zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3955z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2extern3691za7d3981z00,
		BGl_Ezd2extern3691zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3956z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2cast3693za7d2za73982za7,
		BGl_Ezd2cast3693zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3957z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2setq3695za7d2za73983za7,
		BGl_Ezd2setq3695zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3958z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2conditional33984za7,
		BGl_Ezd2conditional3697zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3960z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2select3701za7d3985z00,
		BGl_Ezd2select3701zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3959z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2fail3699za7d2za73986za7,
		BGl_Ezd2fail3699zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3961z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2letza7d2fun3703987z00,
		BGl_Ezd2letzd2fun3703z00zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3962z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2letza7d2var3703988z00,
		BGl_Ezd2letzd2var3705z00zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3963z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2setza7d2exza7d2i3989za7,
		BGl_Ezd2setzd2exzd2it3707zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3964z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2jumpza7d2exza7d23990za7,
		BGl_Ezd2jumpzd2exzd2it3709zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3965z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2makeza7d2box373991z00,
		BGl_Ezd2makezd2box3711z00zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3966z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2boxza7d2ref3713992z00,
		BGl_Ezd2boxzd2ref3714z00zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3967z00zzglobaliza7e_gnza7,
		BgL_bgl_eza7d2boxza7d2setza7123993za7,
		BGl_Ezd2boxzd2setz123717z12zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string3945z00zzglobaliza7e_gnza7,
		BgL_bgl_string3945za700za7za7g3994za7, "E", 1);
	      DEFINE_STRING(BGl_string3946z00zzglobaliza7e_gnza7,
		BgL_bgl_string3946za700za7za7g3995za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3968z00zzglobaliza7e_gnza7,
		BgL_bgl_string3968za700za7za7g3996za7, "globalize_gn", 12);
	      DEFINE_STRING(BGl_string3969z00zzglobaliza7e_gnza7,
		BgL_bgl_string3969za700za7za7g3997za7, "E-default3672 done ", 19);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_Ezd2default3672zd2envz00zzglobaliza7e_gnza7,
		BgL_bgl__eza7d2default36723998za7,
		BGl__Ezd2default3672zd2zzglobaliza7e_gnza7, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_GENERIC(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
		BgL_bgl__eza700za7za7globaliza7a3999z00, BGl__Ez00zzglobaliza7e_gnza7, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_Gnz12zd2envzc0zzglobaliza7e_gnza7,
		BgL_bgl__gnza712za712za7za7globa4000z00, BGl__Gnz12z12zzglobaliza7e_gnza7,
		0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_gnza7(long
		BgL_checksumz00_2713, char *BgL_fromz00_2714)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_gnza7 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_gnza7();
					BGl_cnstzd2initzd2zzglobaliza7e_gnza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_gnza7();
					BGl_genericzd2initzd2zzglobaliza7e_gnza7();
					BGl_methodzd2initzd2zzglobaliza7e_gnza7();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_gnza7()
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "globalize_gn");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_gn");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzglobaliza7e_gnza7()
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			{	/* Globalize/gn.scm 23 */
				obj_t BgL_cportz00_2696;

				BgL_cportz00_2696 =
					bgl_open_input_string(BGl_string3969z00zzglobaliza7e_gnza7,
					(int) (((long) 0)));
				{
					long BgL_iz00_2697;

					BgL_iz00_2697 = ((long) 1);
				BgL_loopz00_2698:
					if ((BgL_iz00_2697 == ((long) -1)))
						{	/* Globalize/gn.scm 23 */
							return BUNSPEC;
						}
					else
						{	/* Globalize/gn.scm 23 */
							{	/* Globalize/gn.scm 23 */
								obj_t BgL_arg3972z00_2700;

								{	/* Globalize/gn.scm 23 */

									{	/* Globalize/gn.scm 23 */
										obj_t BgL_locationz00_2702;

										BgL_locationz00_2702 = BBOOL(((bool_t) 0));
										{	/* Globalize/gn.scm 23 */

											BgL_arg3972z00_2700 =
												BGl_readz00zz__readerz00(BgL_cportz00_2696,
												BgL_locationz00_2702);
										}
									}
								}
								{	/* Globalize/gn.scm 23 */
									int BgL_auxz00_2733;

									BgL_auxz00_2733 = (int) (BgL_iz00_2697);
									CNST_TABLE_SET(BgL_auxz00_2733, BgL_arg3972z00_2700);
							}}
							{	/* Globalize/gn.scm 23 */
								int BgL_auxz00_2703;

								BgL_auxz00_2703 = (int) ((BgL_iz00_2697 - ((long) 1)));
								{
									long BgL_iz00_2738;

									BgL_iz00_2738 = (long) (BgL_auxz00_2703);
									BgL_iz00_2697 = BgL_iz00_2738;
									goto BgL_loopz00_2698;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzglobaliza7e_gnza7()
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			return BUNSPEC;
		}
	}



/* Gn! */
	BGL_EXPORTED_DEF obj_t BGl_Gnz12z12zzglobaliza7e_gnza7(obj_t BgL_argsz00_1,
		BgL_nodez00_bglt BgL_nodez00_2, BgL_variablez00_bglt BgL_callerz00_3,
		obj_t BgL_gz00_4)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 41 */
			{	/* Globalize/gn.scm 42 */
				obj_t BgL_method3673z00_1707;

				{	/* Globalize/gn.scm 42 */
					BgL_objectz00_bglt BgL_objz00_1708;

					BgL_objz00_1708 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Globalize/gn.scm 42 */
						long BgL_objzd2classzd2numz00_1709;

						BgL_objzd2classzd2numz00_1709 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1708);
						{	/* Globalize/gn.scm 42 */
							obj_t BgL_arg2643z00_1710;

							BgL_arg2643z00_1710 =
								PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
								(int) (((long) 1)));
							{	/* Globalize/gn.scm 42 */
								obj_t BgL_arrayz00_1712;

								int BgL_offsetz00_1713;

								BgL_arrayz00_1712 = BgL_arg2643z00_1710;
								BgL_offsetz00_1713 = (int) (BgL_objzd2classzd2numz00_1709);
								{	/* Globalize/gn.scm 42 */
									long BgL_offsetz00_1714;

									BgL_offsetz00_1714 =
										((long) (BgL_offsetz00_1713) - OBJECT_TYPE);
									{	/* Globalize/gn.scm 42 */
										long BgL_modz00_1715;

										{	/* Globalize/gn.scm 42 */
											int BgL_arg2645z00_1716;

											BgL_arg2645z00_1716 = (int) (((long) 16));
											{	/* Globalize/gn.scm 42 */
												long BgL_auxz00_2748;

												BgL_auxz00_2748 = (long) (BgL_arg2645z00_1716);
												BgL_modz00_1715 =
													(BgL_offsetz00_1714 / BgL_auxz00_2748);
										}}
										{	/* Globalize/gn.scm 42 */
											long BgL_restz00_1717;

											{	/* Globalize/gn.scm 42 */
												int BgL_arg2644z00_1718;

												BgL_arg2644z00_1718 = (int) (((long) 16));
												{	/* Globalize/gn.scm 42 */
													long BgL_auxz00_2752;

													BgL_auxz00_2752 = (long) (BgL_arg2644z00_1718);
													BgL_restz00_1717 =
														(BgL_offsetz00_1714 % BgL_auxz00_2752);
											}}
											{	/* Globalize/gn.scm 42 */

												BgL_method3673z00_1707 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1712,
														(int) (BgL_modz00_1715)), (int) (BgL_restz00_1717));
				}}}}}}}}
				BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00 =
					PROCEDURE_ENTRY(BgL_method3673z00_1707) (BgL_method3673z00_1707,
					(obj_t) (BgL_nodez00_2), (obj_t) (BgL_callerz00_3), BgL_gz00_4, BEOA);
			}
			{
				obj_t BgL_gz00_994;

				obj_t BgL_g1z00_995;

				BgL_gz00_994 = BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00;
				BgL_g1z00_995 = BNIL;
			BgL_zc3anonymousza33718ze3z83_996:
				if (NULLP(BgL_gz00_994))
					{	/* Globalize/gn.scm 45 */
						BGl_za2G0za2z00zzglobaliza7e_globaliza7ez00 =
							bgl_append2(BGl_za2Eza2z00zzglobaliza7e_globaliza7ez00,
							BgL_g1z00_995);
						return (BGl_za2G1za2z00zzglobaliza7e_globaliza7ez00 =
							BgL_g1z00_995, BUNSPEC);
					}
				else
					{	/* Globalize/gn.scm 49 */
						obj_t BgL_newzd2gzd2_998;

						BgL_newzd2gzd2_998 =
							BGl_Gzd2fromzd2ctoz00zzglobaliza7e_gnza7(CAR(BgL_gz00_994));
						{
							obj_t BgL_g1z00_2771;

							obj_t BgL_gz00_2768;

							BgL_gz00_2768 =
								bgl_append2(BgL_newzd2gzd2_998, CDR(BgL_gz00_994));
							BgL_g1z00_2771 = bgl_append2(BgL_newzd2gzd2_998, BgL_g1z00_995);
							BgL_g1z00_995 = BgL_g1z00_2771;
							BgL_gz00_994 = BgL_gz00_2768;
							goto BgL_zc3anonymousza33718ze3z83_996;
						}
					}
			}
		}
	}



/* _Gn! */
	obj_t BGl__Gnz12z12zzglobaliza7e_gnza7(obj_t BgL_envz00_2578,
		obj_t BgL_argsz00_2579, obj_t BgL_nodez00_2580, obj_t BgL_callerz00_2581,
		obj_t BgL_gz00_2582)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 41 */
			return
				BGl_Gnz12z12zzglobaliza7e_gnza7(BgL_argsz00_2579,
				(BgL_nodez00_bglt) (BgL_nodez00_2580),
				(BgL_variablez00_bglt) (BgL_callerz00_2581), BgL_gz00_2582);
		}
	}



/* E* */
	obj_t BGl_Eza2za2zzglobaliza7e_gnza7(obj_t BgL_nodeza2za2_74,
		obj_t BgL_callerz00_75, obj_t BgL_gz00_76)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 229 */
			{
				obj_t BgL_nodeza2za2_1005;

				obj_t BgL_gz00_1006;

				BgL_nodeza2za2_1005 = BgL_nodeza2za2_74;
				BgL_gz00_1006 = BgL_gz00_76;
			BgL_zc3anonymousza33724ze3z83_1007:
				if (NULLP(BgL_nodeza2za2_1005))
					{	/* Globalize/gn.scm 232 */
						return BgL_gz00_1006;
					}
				else
					{	/* Globalize/gn.scm 234 */
						obj_t BgL_arg3726z00_1009;

						obj_t BgL_arg3727z00_1010;

						BgL_arg3726z00_1009 = CDR(BgL_nodeza2za2_1005);
						{	/* Globalize/gn.scm 235 */
							obj_t BgL_arg3728z00_1011;

							BgL_arg3728z00_1011 = CAR(BgL_nodeza2za2_1005);
							{	/* Globalize/gn.scm 235 */
								BgL_nodez00_bglt BgL_nodez00_1738;

								BgL_variablez00_bglt BgL_callerz00_1739;

								BgL_nodez00_1738 = (BgL_nodez00_bglt) (BgL_arg3728z00_1011);
								BgL_callerz00_1739 = (BgL_variablez00_bglt) (BgL_callerz00_75);
								{	/* Globalize/gn.scm 235 */
									obj_t BgL_method3673z00_1741;

									{	/* Globalize/gn.scm 235 */
										BgL_objectz00_bglt BgL_objz00_1742;

										BgL_objz00_1742 = (BgL_objectz00_bglt) (BgL_nodez00_1738);
										{	/* Globalize/gn.scm 235 */
											long BgL_objzd2classzd2numz00_1743;

											BgL_objzd2classzd2numz00_1743 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1742);
											{	/* Globalize/gn.scm 235 */
												obj_t BgL_arg2643z00_1744;

												BgL_arg2643z00_1744 =
													PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
													(int) (((long) 1)));
												{	/* Globalize/gn.scm 235 */
													obj_t BgL_arrayz00_1746;

													int BgL_offsetz00_1747;

													BgL_arrayz00_1746 = BgL_arg2643z00_1744;
													BgL_offsetz00_1747 =
														(int) (BgL_objzd2classzd2numz00_1743);
													{	/* Globalize/gn.scm 235 */
														long BgL_offsetz00_1748;

														BgL_offsetz00_1748 =
															((long) (BgL_offsetz00_1747) - OBJECT_TYPE);
														{	/* Globalize/gn.scm 235 */
															long BgL_modz00_1749;

															{	/* Globalize/gn.scm 235 */
																int BgL_arg2645z00_1750;

																BgL_arg2645z00_1750 = (int) (((long) 16));
																{	/* Globalize/gn.scm 235 */
																	long BgL_auxz00_2790;

																	BgL_auxz00_2790 =
																		(long) (BgL_arg2645z00_1750);
																	BgL_modz00_1749 =
																		(BgL_offsetz00_1748 / BgL_auxz00_2790);
															}}
															{	/* Globalize/gn.scm 235 */
																long BgL_restz00_1751;

																{	/* Globalize/gn.scm 235 */
																	int BgL_arg2644z00_1752;

																	BgL_arg2644z00_1752 = (int) (((long) 16));
																	{	/* Globalize/gn.scm 235 */
																		long BgL_auxz00_2794;

																		BgL_auxz00_2794 =
																			(long) (BgL_arg2644z00_1752);
																		BgL_restz00_1751 =
																			(BgL_offsetz00_1748 % BgL_auxz00_2794);
																}}
																{	/* Globalize/gn.scm 235 */

																	BgL_method3673z00_1741 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1746,
																			(int) (BgL_modz00_1749)),
																		(int) (BgL_restz00_1751));
									}}}}}}}}
									BgL_arg3727z00_1010 =
										PROCEDURE_ENTRY(BgL_method3673z00_1741)
										(BgL_method3673z00_1741, (obj_t) (BgL_nodez00_1738),
										(obj_t) (BgL_callerz00_1739), BgL_gz00_1006, BEOA);
						}}}
						{
							obj_t BgL_gz00_2806;

							obj_t BgL_nodeza2za2_2805;

							BgL_nodeza2za2_2805 = BgL_arg3726z00_1009;
							BgL_gz00_2806 = BgL_arg3727z00_1010;
							BgL_gz00_1006 = BgL_gz00_2806;
							BgL_nodeza2za2_1005 = BgL_nodeza2za2_2805;
							goto BgL_zc3anonymousza33724ze3z83_1007;
						}
					}
			}
		}
	}



/* save-app! */
	obj_t BGl_savezd2appz12zc0zzglobaliza7e_gnza7(obj_t BgL_callerz00_77,
		BgL_variablez00_bglt BgL_calleez00_78)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 240 */
			{	/* Globalize/gn.scm 241 */
				bool_t BgL_testz00_2807;

				{	/* Globalize/gn.scm 241 */
					obj_t BgL_obj1751z00_1766;

					BgL_obj1751z00_1766 = (obj_t) (BgL_calleez00_78);
					BgL_testz00_2807 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1766,
						BGl_globalz00zzast_varz00);
				}
				if (BgL_testz00_2807)
					{	/* Globalize/gn.scm 241 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/gn.scm 243 */
						BgL_valuez00_bglt BgL_calleezd2infozd2_1014;

						BgL_calleezd2infozd2_1014 =
							(((BgL_variablez00_bglt) CREF(BgL_calleez00_78))->BgL_valuez00);
						{	/* Globalize/gn.scm 244 */
							bool_t BgL_testz00_2812;

							{	/* Globalize/gn.scm 244 */
								obj_t BgL_auxz00_2813;

								{	/* Globalize/gn.scm 244 */
									obj_t BgL_auxz00_2814;

									{	/* Globalize/gn.scm 244 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3326z00_1768;

										BgL_obj3326z00_1768 =
											(BgL_sfunzf2ginfozf2_bglt) (BgL_calleezd2infozd2_1014);
										{
											obj_t BgL_auxz00_2816;

											{	/* Globalize/gn.scm 244 */
												BgL_objectz00_bglt BgL_auxz00_2817;

												BgL_auxz00_2817 =
													(BgL_objectz00_bglt) (BgL_obj3326z00_1768);
												BgL_auxz00_2816 = BGL_OBJECT_WIDENING(BgL_auxz00_2817);
											}
											BgL_auxz00_2814 =
												(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2816))->
												BgL_cfromz00);
										}
									}
									BgL_auxz00_2813 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_callerz00_77,
										BgL_auxz00_2814);
								}
								BgL_testz00_2812 = CBOOL(BgL_auxz00_2813);
							}
							if (BgL_testz00_2812)
								{	/* Globalize/gn.scm 244 */
									BFALSE;
								}
							else
								{	/* Globalize/gn.scm 244 */
									{	/* Globalize/gn.scm 248 */
										obj_t BgL_arg3731z00_1016;

										{	/* Globalize/gn.scm 248 */
											obj_t BgL_arg3732z00_1017;

											{	/* Globalize/gn.scm 248 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3326z00_1769;

												BgL_obj3326z00_1769 =
													(BgL_sfunzf2ginfozf2_bglt)
													(BgL_calleezd2infozd2_1014);
												{
													obj_t BgL_auxz00_2824;

													{	/* Globalize/gn.scm 248 */
														BgL_objectz00_bglt BgL_auxz00_2825;

														BgL_auxz00_2825 =
															(BgL_objectz00_bglt) (BgL_obj3326z00_1769);
														BgL_auxz00_2824 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2825);
													}
													BgL_arg3732z00_1017 =
														(((BgL_sfunzf2ginfozf2_bglt)
															CREF(BgL_auxz00_2824))->BgL_cfromz00);
												}
											}
											BgL_arg3731z00_1016 =
												MAKE_PAIR(BgL_callerz00_77, BgL_arg3732z00_1017);
										}
										{	/* Globalize/gn.scm 246 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3329z00_1770;

											obj_t BgL_val3327z00_1771;

											BgL_obj3329z00_1770 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_calleezd2infozd2_1014);
											BgL_val3327z00_1771 = BgL_arg3731z00_1016;
											{
												obj_t BgL_auxz00_2831;

												{	/* Globalize/gn.scm 246 */
													BgL_objectz00_bglt BgL_auxz00_2832;

													BgL_auxz00_2832 =
														(BgL_objectz00_bglt) (BgL_obj3329z00_1770);
													BgL_auxz00_2831 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2832);
												}
												((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2831))->
														BgL_cfromz00) =
													((obj_t) BgL_val3327z00_1771), BUNSPEC);
											}
										}
									}
									{	/* Globalize/gn.scm 249 */
										BgL_valuez00_bglt BgL_callerzd2infozd2_1018;

										{
											BgL_variablez00_bglt BgL_auxz00_2836;

											BgL_auxz00_2836 =
												(BgL_variablez00_bglt) (BgL_callerz00_77);
											BgL_callerzd2infozd2_1018 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2836))->
												BgL_valuez00);
										}
										{	/* Globalize/gn.scm 252 */
											obj_t BgL_arg3733z00_1019;

											{	/* Globalize/gn.scm 252 */
												obj_t BgL_arg3734z00_1020;

												{	/* Globalize/gn.scm 252 */
													BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1773;

													BgL_obj3333z00_1773 =
														(BgL_sfunzf2ginfozf2_bglt)
														(BgL_callerzd2infozd2_1018);
													{
														obj_t BgL_auxz00_2840;

														{	/* Globalize/gn.scm 252 */
															BgL_objectz00_bglt BgL_auxz00_2841;

															BgL_auxz00_2841 =
																(BgL_objectz00_bglt) (BgL_obj3333z00_1773);
															BgL_auxz00_2840 =
																BGL_OBJECT_WIDENING(BgL_auxz00_2841);
														}
														BgL_arg3734z00_1020 =
															(((BgL_sfunzf2ginfozf2_bglt)
																CREF(BgL_auxz00_2840))->BgL_ctoz00);
													}
												}
												BgL_arg3733z00_1019 =
													MAKE_PAIR(
													(obj_t) (BgL_calleez00_78), BgL_arg3734z00_1020);
											}
											{	/* Globalize/gn.scm 250 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3335z00_1774;

												obj_t BgL_val3334z00_1775;

												BgL_obj3335z00_1774 =
													(BgL_sfunzf2ginfozf2_bglt)
													(BgL_callerzd2infozd2_1018);
												BgL_val3334z00_1775 = BgL_arg3733z00_1019;
												{
													obj_t BgL_auxz00_2848;

													{	/* Globalize/gn.scm 250 */
														BgL_objectz00_bglt BgL_auxz00_2849;

														BgL_auxz00_2849 =
															(BgL_objectz00_bglt) (BgL_obj3335z00_1774);
														BgL_auxz00_2848 =
															BGL_OBJECT_WIDENING(BgL_auxz00_2849);
													}
													((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2848))->
															BgL_ctoz00) =
														((obj_t) BgL_val3334z00_1775), BUNSPEC);
												}
											}
										}
									}
								}
						}
						return CNST_TABLE_REF(((long) 0));
		}}}
	}



/* save-fun! */
	obj_t BGl_savezd2funz12zc0zzglobaliza7e_gnza7(BgL_variablez00_bglt
		BgL_callerz00_79, BgL_variablez00_bglt BgL_calleez00_80)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 259 */
			{	/* Globalize/gn.scm 260 */
				bool_t BgL_testz00_2854;

				{	/* Globalize/gn.scm 260 */
					bool_t BgL_testz00_2855;

					{	/* Globalize/gn.scm 260 */
						obj_t BgL_obj1751z00_1776;

						BgL_obj1751z00_1776 = (obj_t) (BgL_callerz00_79);
						BgL_testz00_2855 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1776,
							BGl_globalz00zzast_varz00);
					}
					if (BgL_testz00_2855)
						{	/* Globalize/gn.scm 260 */
							BgL_testz00_2854 = ((bool_t) 1);
						}
					else
						{	/* Globalize/gn.scm 260 */
							obj_t BgL_obj1751z00_1777;

							BgL_obj1751z00_1777 = (obj_t) (BgL_calleez00_80);
							BgL_testz00_2854 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_1777,
								BGl_globalz00zzast_varz00);
						}
				}
				if (BgL_testz00_2854)
					{	/* Globalize/gn.scm 260 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Globalize/gn.scm 262 */
						BgL_valuez00_bglt BgL_callerzd2infozd2_1023;

						BgL_callerzd2infozd2_1023 =
							(((BgL_variablez00_bglt) CREF(BgL_callerz00_79))->BgL_valuez00);
						{	/* Globalize/gn.scm 266 */
							bool_t BgL_testz00_2862;

							{	/* Globalize/gn.scm 266 */
								obj_t BgL_auxz00_2863;

								{	/* Globalize/gn.scm 266 */
									obj_t BgL_auxz00_2864;

									{	/* Globalize/gn.scm 266 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3339z00_1779;

										BgL_obj3339z00_1779 =
											(BgL_sfunzf2ginfozf2_bglt) (BgL_callerzd2infozd2_1023);
										{
											obj_t BgL_auxz00_2867;

											{	/* Globalize/gn.scm 266 */
												BgL_objectz00_bglt BgL_auxz00_2868;

												BgL_auxz00_2868 =
													(BgL_objectz00_bglt) (BgL_obj3339z00_1779);
												BgL_auxz00_2867 = BGL_OBJECT_WIDENING(BgL_auxz00_2868);
											}
											BgL_auxz00_2864 =
												(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2867))->
												BgL_cfunctionz00);
										}
									}
									BgL_auxz00_2863 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
										(obj_t) (BgL_calleez00_80), BgL_auxz00_2864);
								}
								BgL_testz00_2862 = CBOOL(BgL_auxz00_2863);
							}
							if (BgL_testz00_2862)
								{	/* Globalize/gn.scm 266 */
									BFALSE;
								}
							else
								{	/* Globalize/gn.scm 269 */
									obj_t BgL_arg3738z00_1025;

									{	/* Globalize/gn.scm 269 */
										obj_t BgL_arg3739z00_1026;

										{	/* Globalize/gn.scm 269 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3339z00_1780;

											BgL_obj3339z00_1780 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_callerzd2infozd2_1023);
											{
												obj_t BgL_auxz00_2875;

												{	/* Globalize/gn.scm 269 */
													BgL_objectz00_bglt BgL_auxz00_2876;

													BgL_auxz00_2876 =
														(BgL_objectz00_bglt) (BgL_obj3339z00_1780);
													BgL_auxz00_2875 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2876);
												}
												BgL_arg3739z00_1026 =
													(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2875))->
													BgL_cfunctionz00);
											}
										}
										BgL_arg3738z00_1025 =
											MAKE_PAIR(
											(obj_t) (BgL_calleez00_80), BgL_arg3739z00_1026);
									}
									{	/* Globalize/gn.scm 267 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3341z00_1781;

										obj_t BgL_val3340z00_1782;

										BgL_obj3341z00_1781 =
											(BgL_sfunzf2ginfozf2_bglt) (BgL_callerzd2infozd2_1023);
										BgL_val3340z00_1782 = BgL_arg3738z00_1025;
										{
											obj_t BgL_auxz00_2883;

											{	/* Globalize/gn.scm 267 */
												BgL_objectz00_bglt BgL_auxz00_2884;

												BgL_auxz00_2884 =
													(BgL_objectz00_bglt) (BgL_obj3341z00_1781);
												BgL_auxz00_2883 = BGL_OBJECT_WIDENING(BgL_auxz00_2884);
											}
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2883))->
													BgL_cfunctionz00) =
												((obj_t) BgL_val3340z00_1782), BUNSPEC);
										}
									}
								}
						}
						return CNST_TABLE_REF(((long) 0));
		}}}
	}



/* G-from-cto */
	obj_t BGl_Gzd2fromzd2ctoz00zzglobaliza7e_gnza7(obj_t BgL_localz00_81)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 276 */
			{	/* Globalize/gn.scm 277 */
				obj_t BgL_g3670z00_1029;

				{	/* Globalize/gn.scm 277 */
					BgL_sfunzf2ginfozf2_bglt BgL_obj3333z00_1784;

					{	/* Globalize/gn.scm 277 */
						BgL_variablez00_bglt BgL_obj1611z00_1783;

						BgL_obj1611z00_1783 = (BgL_variablez00_bglt) (BgL_localz00_81);
						BgL_obj3333z00_1784 =
							(BgL_sfunzf2ginfozf2_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1783))->
								BgL_valuez00));
					}
					{
						obj_t BgL_auxz00_2892;

						{	/* Globalize/gn.scm 277 */
							BgL_objectz00_bglt BgL_auxz00_2893;

							BgL_auxz00_2893 = (BgL_objectz00_bglt) (BgL_obj3333z00_1784);
							BgL_auxz00_2892 = BGL_OBJECT_WIDENING(BgL_auxz00_2893);
						}
						BgL_g3670z00_1029 =
							(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2892))->BgL_ctoz00);
				}}
				{
					obj_t BgL_ctoz00_1032;

					obj_t BgL_gz00_1033;

					BgL_ctoz00_1032 = BgL_g3670z00_1029;
					BgL_gz00_1033 = BNIL;
				BgL_zc3anonymousza33742ze3z83_1034:
					if (NULLP(BgL_ctoz00_1032))
						{	/* Globalize/gn.scm 280 */
							return BgL_gz00_1033;
						}
					else
						{	/* Globalize/gn.scm 282 */
							bool_t BgL_testz00_2899;

							{	/* Globalize/gn.scm 282 */
								BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_1788;

								{	/* Globalize/gn.scm 282 */
									BgL_valuez00_bglt BgL_auxz00_2900;

									{	/* Globalize/gn.scm 282 */
										BgL_variablez00_bglt BgL_obj1611z00_1787;

										{	/* Globalize/gn.scm 282 */
											obj_t BgL_pairz00_1786;

											BgL_pairz00_1786 = BgL_ctoz00_1032;
											BgL_obj1611z00_1787 =
												(BgL_variablez00_bglt) (CAR(BgL_pairz00_1786));
										}
										BgL_auxz00_2900 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1787))->
											BgL_valuez00);
									}
									BgL_obj3323z00_1788 =
										(BgL_sfunzf2ginfozf2_bglt) (BgL_auxz00_2900);
								}
								{
									obj_t BgL_auxz00_2905;

									{	/* Globalize/gn.scm 282 */
										BgL_objectz00_bglt BgL_auxz00_2906;

										BgL_auxz00_2906 =
											(BgL_objectz00_bglt) (BgL_obj3323z00_1788);
										BgL_auxz00_2905 = BGL_OBJECT_WIDENING(BgL_auxz00_2906);
									}
									BgL_testz00_2899 =
										(((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2905))->
										BgL_gzf3zf3);
								}
							}
							if (BgL_testz00_2899)
								{
									obj_t BgL_ctoz00_2910;

									BgL_ctoz00_2910 = CDR(BgL_ctoz00_1032);
									BgL_ctoz00_1032 = BgL_ctoz00_2910;
									goto BgL_zc3anonymousza33742ze3z83_1034;
								}
							else
								{	/* Globalize/gn.scm 282 */
									{	/* Globalize/gn.scm 285 */
										BgL_valuez00_bglt BgL_arg3746z00_1038;

										{	/* Globalize/gn.scm 285 */
											BgL_variablez00_bglt BgL_obj1611z00_1791;

											{	/* Globalize/gn.scm 285 */
												obj_t BgL_pairz00_1790;

												BgL_pairz00_1790 = BgL_ctoz00_1032;
												BgL_obj1611z00_1791 =
													(BgL_variablez00_bglt) (CAR(BgL_pairz00_1790));
											}
											BgL_arg3746z00_1038 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1791))->
												BgL_valuez00);
										}
										{	/* Globalize/gn.scm 285 */
											BgL_sfunzf2ginfozf2_bglt BgL_obj3325z00_1792;

											bool_t BgL_val3324z00_1793;

											BgL_obj3325z00_1792 =
												(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3746z00_1038);
											BgL_val3324z00_1793 = ((bool_t) 1);
											{
												obj_t BgL_auxz00_2916;

												{	/* Globalize/gn.scm 285 */
													BgL_objectz00_bglt BgL_auxz00_2917;

													BgL_auxz00_2917 =
														(BgL_objectz00_bglt) (BgL_obj3325z00_1792);
													BgL_auxz00_2916 =
														BGL_OBJECT_WIDENING(BgL_auxz00_2917);
												}
												((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_2916))->
														BgL_gzf3zf3) =
													((bool_t) BgL_val3324z00_1793), BUNSPEC);
											}
										}
									}
									{	/* Globalize/gn.scm 286 */
										obj_t BgL_arg3748z00_1040;

										obj_t BgL_arg3749z00_1041;

										BgL_arg3748z00_1040 = CDR(BgL_ctoz00_1032);
										BgL_arg3749z00_1041 =
											MAKE_PAIR(CAR(BgL_ctoz00_1032), BgL_gz00_1033);
										{
											obj_t BgL_gz00_2925;

											obj_t BgL_ctoz00_2924;

											BgL_ctoz00_2924 = BgL_arg3748z00_1040;
											BgL_gz00_2925 = BgL_arg3749z00_1041;
											BgL_gz00_1033 = BgL_gz00_2925;
											BgL_ctoz00_1032 = BgL_ctoz00_2924;
											goto BgL_zc3anonymousza33742ze3z83_1034;
										}
									}
								}
						}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_gnza7()
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
				BGl_Ezd2default3672zd2envz00zzglobaliza7e_gnza7,
				BGl_nodez00zzast_nodez00, BGl_string3945z00zzglobaliza7e_gnza7);
		}
	}



/* E */
	obj_t BGl_Ez00zzglobaliza7e_gnza7(BgL_nodez00_bglt BgL_nodez00_5,
		BgL_variablez00_bglt BgL_callerz00_6, obj_t BgL_gz00_7)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 56 */
			{	/* Globalize/gn.scm 56 */
				obj_t BgL_method3673z00_1796;

				{	/* Globalize/gn.scm 56 */
					BgL_objectz00_bglt BgL_objz00_1797;

					BgL_objz00_1797 = (BgL_objectz00_bglt) (BgL_nodez00_5);
					{	/* Globalize/gn.scm 56 */
						long BgL_objzd2classzd2numz00_1798;

						BgL_objzd2classzd2numz00_1798 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1797);
						{	/* Globalize/gn.scm 56 */
							obj_t BgL_arg2643z00_1799;

							BgL_arg2643z00_1799 =
								PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
								(int) (((long) 1)));
							{	/* Globalize/gn.scm 56 */
								obj_t BgL_arrayz00_1801;

								int BgL_offsetz00_1802;

								BgL_arrayz00_1801 = BgL_arg2643z00_1799;
								BgL_offsetz00_1802 = (int) (BgL_objzd2classzd2numz00_1798);
								{	/* Globalize/gn.scm 56 */
									long BgL_offsetz00_1803;

									BgL_offsetz00_1803 =
										((long) (BgL_offsetz00_1802) - OBJECT_TYPE);
									{	/* Globalize/gn.scm 56 */
										long BgL_modz00_1804;

										{	/* Globalize/gn.scm 56 */
											int BgL_arg2645z00_1805;

											BgL_arg2645z00_1805 = (int) (((long) 16));
											{	/* Globalize/gn.scm 56 */
												long BgL_auxz00_2935;

												BgL_auxz00_2935 = (long) (BgL_arg2645z00_1805);
												BgL_modz00_1804 =
													(BgL_offsetz00_1803 / BgL_auxz00_2935);
										}}
										{	/* Globalize/gn.scm 56 */
											long BgL_restz00_1806;

											{	/* Globalize/gn.scm 56 */
												int BgL_arg2644z00_1807;

												BgL_arg2644z00_1807 = (int) (((long) 16));
												{	/* Globalize/gn.scm 56 */
													long BgL_auxz00_2939;

													BgL_auxz00_2939 = (long) (BgL_arg2644z00_1807);
													BgL_restz00_1806 =
														(BgL_offsetz00_1803 % BgL_auxz00_2939);
											}}
											{	/* Globalize/gn.scm 56 */

												BgL_method3673z00_1796 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1801,
														(int) (BgL_modz00_1804)), (int) (BgL_restz00_1806));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3673z00_1796) (BgL_method3673z00_1796,
					(obj_t) (BgL_nodez00_5), (obj_t) (BgL_callerz00_6), BgL_gz00_7, BEOA);
			}
		}
	}



/* _E */
	obj_t BGl__Ez00zzglobaliza7e_gnza7(obj_t BgL_envz00_2583,
		obj_t BgL_nodez00_2584, obj_t BgL_callerz00_2585, obj_t BgL_gz00_2586)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 56 */
			return
				BGl_Ez00zzglobaliza7e_gnza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2584),
				(BgL_variablez00_bglt) (BgL_callerz00_2585), BgL_gz00_2586);
		}
	}



/* E-default3672 */
	obj_t BGl_Ezd2default3672zd2zzglobaliza7e_gnza7(BgL_nodez00_bglt
		BgL_nodez00_8, BgL_variablez00_bglt BgL_callerz00_9, obj_t BgL_gz00_10)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string3946z00zzglobaliza7e_gnza7, (obj_t) (BgL_nodez00_8));
		}
	}



/* _E-default3672 */
	obj_t BGl__Ezd2default3672zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2587,
		obj_t BgL_nodez00_2588, obj_t BgL_callerz00_2589, obj_t BgL_gz00_2590)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			return
				BGl_Ezd2default3672zd2zzglobaliza7e_gnza7(
				(BgL_nodez00_bglt) (BgL_nodez00_2588),
				(BgL_variablez00_bglt) (BgL_callerz00_2589), BgL_gz00_2590);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_gnza7()
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_atomz00zzast_nodez00,
				BGl_proc3947z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_kwotez00zzast_nodez00,
				BGl_proc3948z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_varz00zzast_nodez00,
				BGl_proc3949z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_closurez00zzast_nodez00,
				BGl_proc3950z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_sequencez00zzast_nodez00,
				BGl_proc3951z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_appz00zzast_nodez00,
				BGl_proc3952z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3953z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_funcallz00zzast_nodez00,
				BGl_proc3954z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_externz00zzast_nodez00,
				BGl_proc3955z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_castz00zzast_nodez00,
				BGl_proc3956z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_setqz00zzast_nodez00,
				BGl_proc3957z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_conditionalz00zzast_nodez00,
				BGl_proc3958z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_failz00zzast_nodez00,
				BGl_proc3959z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_selectz00zzast_nodez00,
				BGl_proc3960z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3961z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3962z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3963z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3964z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_makezd2boxzd2zzast_nodez00,
				BGl_proc3965z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc3966z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_Ezd2envzd2zzglobaliza7e_gnza7, BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3967z00zzglobaliza7e_gnza7,
				BGl_string3945z00zzglobaliza7e_gnza7);
		}
	}



/* E-box-set!3717 */
	obj_t BGl_Ezd2boxzd2setz123717z12zzglobaliza7e_gnza7(obj_t BgL_envz00_2612,
		obj_t BgL_nodez00_2613, obj_t BgL_callerz00_2614, obj_t BgL_gz00_2615)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 222 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1693;

				obj_t BgL_callerz00_1694;

				obj_t BgL_gz00_1695;

				BgL_nodez00_1693 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2613);
				BgL_callerz00_1694 = BgL_callerz00_2614;
				BgL_gz00_1695 = BgL_gz00_2615;
				{	/* Globalize/gn.scm 223 */
					BgL_varz00_bglt BgL_arg3887z00_2517;

					obj_t BgL_arg3888z00_2518;

					BgL_arg3887z00_2517 =
						(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1693))->BgL_varz00);
					{	/* Globalize/gn.scm 223 */
						BgL_nodez00_bglt BgL_arg3889z00_2519;

						BgL_arg3889z00_2519 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1693))->
							BgL_valuez00);
						{	/* Globalize/gn.scm 223 */
							BgL_variablez00_bglt BgL_callerz00_2523;

							BgL_callerz00_2523 = (BgL_variablez00_bglt) (BgL_callerz00_1694);
							{	/* Globalize/gn.scm 223 */
								obj_t BgL_method3673z00_2525;

								{	/* Globalize/gn.scm 223 */
									BgL_objectz00_bglt BgL_objz00_2526;

									BgL_objz00_2526 = (BgL_objectz00_bglt) (BgL_arg3889z00_2519);
									{	/* Globalize/gn.scm 223 */
										long BgL_objzd2classzd2numz00_2527;

										BgL_objzd2classzd2numz00_2527 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2526);
										{	/* Globalize/gn.scm 223 */
											obj_t BgL_arg2643z00_2528;

											BgL_arg2643z00_2528 =
												PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
												(int) (((long) 1)));
											{	/* Globalize/gn.scm 223 */
												obj_t BgL_arrayz00_2530;

												int BgL_offsetz00_2531;

												BgL_arrayz00_2530 = BgL_arg2643z00_2528;
												BgL_offsetz00_2531 =
													(int) (BgL_objzd2classzd2numz00_2527);
												{	/* Globalize/gn.scm 223 */
													long BgL_offsetz00_2532;

													BgL_offsetz00_2532 =
														((long) (BgL_offsetz00_2531) - OBJECT_TYPE);
													{	/* Globalize/gn.scm 223 */
														long BgL_modz00_2533;

														{	/* Globalize/gn.scm 223 */
															int BgL_arg2645z00_2534;

															BgL_arg2645z00_2534 = (int) (((long) 16));
															{	/* Globalize/gn.scm 223 */
																long BgL_auxz00_2991;

																BgL_auxz00_2991 = (long) (BgL_arg2645z00_2534);
																BgL_modz00_2533 =
																	(BgL_offsetz00_2532 / BgL_auxz00_2991);
														}}
														{	/* Globalize/gn.scm 223 */
															long BgL_restz00_2535;

															{	/* Globalize/gn.scm 223 */
																int BgL_arg2644z00_2536;

																BgL_arg2644z00_2536 = (int) (((long) 16));
																{	/* Globalize/gn.scm 223 */
																	long BgL_auxz00_2995;

																	BgL_auxz00_2995 =
																		(long) (BgL_arg2644z00_2536);
																	BgL_restz00_2535 =
																		(BgL_offsetz00_2532 % BgL_auxz00_2995);
															}}
															{	/* Globalize/gn.scm 223 */

																BgL_method3673z00_2525 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2530,
																		(int) (BgL_modz00_2533)),
																	(int) (BgL_restz00_2535));
								}}}}}}}}
								BgL_arg3888z00_2518 =
									PROCEDURE_ENTRY(BgL_method3673z00_2525)
									(BgL_method3673z00_2525, (obj_t) (BgL_arg3889z00_2519),
									(obj_t) (BgL_callerz00_2523), BgL_gz00_1695, BEOA);
					}}}
					{	/* Globalize/gn.scm 223 */
						BgL_nodez00_bglt BgL_nodez00_2550;

						BgL_variablez00_bglt BgL_callerz00_2551;

						BgL_nodez00_2550 = (BgL_nodez00_bglt) (BgL_arg3887z00_2517);
						BgL_callerz00_2551 = (BgL_variablez00_bglt) (BgL_callerz00_1694);
						{	/* Globalize/gn.scm 223 */
							obj_t BgL_method3673z00_2553;

							{	/* Globalize/gn.scm 223 */
								BgL_objectz00_bglt BgL_objz00_2554;

								BgL_objz00_2554 = (BgL_objectz00_bglt) (BgL_nodez00_2550);
								{	/* Globalize/gn.scm 223 */
									long BgL_objzd2classzd2numz00_2555;

									BgL_objzd2classzd2numz00_2555 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2554);
									{	/* Globalize/gn.scm 223 */
										obj_t BgL_arg2643z00_2556;

										BgL_arg2643z00_2556 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 223 */
											obj_t BgL_arrayz00_2558;

											int BgL_offsetz00_2559;

											BgL_arrayz00_2558 = BgL_arg2643z00_2556;
											BgL_offsetz00_2559 =
												(int) (BgL_objzd2classzd2numz00_2555);
											{	/* Globalize/gn.scm 223 */
												long BgL_offsetz00_2560;

												BgL_offsetz00_2560 =
													((long) (BgL_offsetz00_2559) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 223 */
													long BgL_modz00_2561;

													{	/* Globalize/gn.scm 223 */
														int BgL_arg2645z00_2562;

														BgL_arg2645z00_2562 = (int) (((long) 16));
														{	/* Globalize/gn.scm 223 */
															long BgL_auxz00_3016;

															BgL_auxz00_3016 = (long) (BgL_arg2645z00_2562);
															BgL_modz00_2561 =
																(BgL_offsetz00_2560 / BgL_auxz00_3016);
													}}
													{	/* Globalize/gn.scm 223 */
														long BgL_restz00_2563;

														{	/* Globalize/gn.scm 223 */
															int BgL_arg2644z00_2564;

															BgL_arg2644z00_2564 = (int) (((long) 16));
															{	/* Globalize/gn.scm 223 */
																long BgL_auxz00_3020;

																BgL_auxz00_3020 = (long) (BgL_arg2644z00_2564);
																BgL_restz00_2563 =
																	(BgL_offsetz00_2560 % BgL_auxz00_3020);
														}}
														{	/* Globalize/gn.scm 223 */

															BgL_method3673z00_2553 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2558,
																	(int) (BgL_modz00_2561)),
																(int) (BgL_restz00_2563));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2553) (BgL_method3673z00_2553,
								(obj_t) (BgL_nodez00_2550),
								(obj_t) (BgL_callerz00_2551), BgL_arg3888z00_2518, BEOA);
						}
					}
				}
			}
		}
	}



/* E-box-ref3714 */
	obj_t BGl_Ezd2boxzd2ref3714z00zzglobaliza7e_gnza7(obj_t BgL_envz00_2616,
		obj_t BgL_nodez00_2617, obj_t BgL_callerz00_2618, obj_t BgL_gz00_2619)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 215 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1684;

				obj_t BgL_callerz00_1685;

				obj_t BgL_gz00_1686;

				BgL_nodez00_1684 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2617);
				BgL_callerz00_1685 = BgL_callerz00_2618;
				BgL_gz00_1686 = BgL_gz00_2619;
				{	/* Globalize/gn.scm 216 */
					BgL_varz00_bglt BgL_arg3885z00_2486;

					BgL_arg3885z00_2486 =
						(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1684))->BgL_varz00);
					{	/* Globalize/gn.scm 216 */
						BgL_nodez00_bglt BgL_nodez00_2488;

						BgL_variablez00_bglt BgL_callerz00_2489;

						BgL_nodez00_2488 = (BgL_nodez00_bglt) (BgL_arg3885z00_2486);
						BgL_callerz00_2489 = (BgL_variablez00_bglt) (BgL_callerz00_1685);
						{	/* Globalize/gn.scm 216 */
							obj_t BgL_method3673z00_2491;

							{	/* Globalize/gn.scm 216 */
								BgL_objectz00_bglt BgL_objz00_2492;

								BgL_objz00_2492 = (BgL_objectz00_bglt) (BgL_nodez00_2488);
								{	/* Globalize/gn.scm 216 */
									long BgL_objzd2classzd2numz00_2493;

									BgL_objzd2classzd2numz00_2493 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2492);
									{	/* Globalize/gn.scm 216 */
										obj_t BgL_arg2643z00_2494;

										BgL_arg2643z00_2494 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 216 */
											obj_t BgL_arrayz00_2496;

											int BgL_offsetz00_2497;

											BgL_arrayz00_2496 = BgL_arg2643z00_2494;
											BgL_offsetz00_2497 =
												(int) (BgL_objzd2classzd2numz00_2493);
											{	/* Globalize/gn.scm 216 */
												long BgL_offsetz00_2498;

												BgL_offsetz00_2498 =
													((long) (BgL_offsetz00_2497) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 216 */
													long BgL_modz00_2499;

													{	/* Globalize/gn.scm 216 */
														int BgL_arg2645z00_2500;

														BgL_arg2645z00_2500 = (int) (((long) 16));
														{	/* Globalize/gn.scm 216 */
															long BgL_auxz00_3043;

															BgL_auxz00_3043 = (long) (BgL_arg2645z00_2500);
															BgL_modz00_2499 =
																(BgL_offsetz00_2498 / BgL_auxz00_3043);
													}}
													{	/* Globalize/gn.scm 216 */
														long BgL_restz00_2501;

														{	/* Globalize/gn.scm 216 */
															int BgL_arg2644z00_2502;

															BgL_arg2644z00_2502 = (int) (((long) 16));
															{	/* Globalize/gn.scm 216 */
																long BgL_auxz00_3047;

																BgL_auxz00_3047 = (long) (BgL_arg2644z00_2502);
																BgL_restz00_2501 =
																	(BgL_offsetz00_2498 % BgL_auxz00_3047);
														}}
														{	/* Globalize/gn.scm 216 */

															BgL_method3673z00_2491 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2496,
																	(int) (BgL_modz00_2499)),
																(int) (BgL_restz00_2501));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2491) (BgL_method3673z00_2491,
								(obj_t) (BgL_nodez00_2488),
								(obj_t) (BgL_callerz00_2489), BgL_gz00_1686, BEOA);
						}
					}
				}
			}
		}
	}



/* E-make-box3711 */
	obj_t BGl_Ezd2makezd2box3711z00zzglobaliza7e_gnza7(obj_t BgL_envz00_2620,
		obj_t BgL_nodez00_2621, obj_t BgL_callerz00_2622, obj_t BgL_gz00_2623)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 208 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1675;

				obj_t BgL_callerz00_1676;

				obj_t BgL_gz00_1677;

				BgL_nodez00_1675 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2621);
				BgL_callerz00_1676 = BgL_callerz00_2622;
				BgL_gz00_1677 = BgL_gz00_2623;
				{	/* Globalize/gn.scm 209 */
					BgL_nodez00_bglt BgL_arg3883z00_2455;

					BgL_arg3883z00_2455 =
						(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1675))->BgL_valuez00);
					{	/* Globalize/gn.scm 209 */
						BgL_variablez00_bglt BgL_callerz00_2458;

						BgL_callerz00_2458 = (BgL_variablez00_bglt) (BgL_callerz00_1676);
						{	/* Globalize/gn.scm 209 */
							obj_t BgL_method3673z00_2460;

							{	/* Globalize/gn.scm 209 */
								BgL_objectz00_bglt BgL_objz00_2461;

								BgL_objz00_2461 = (BgL_objectz00_bglt) (BgL_arg3883z00_2455);
								{	/* Globalize/gn.scm 209 */
									long BgL_objzd2classzd2numz00_2462;

									BgL_objzd2classzd2numz00_2462 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2461);
									{	/* Globalize/gn.scm 209 */
										obj_t BgL_arg2643z00_2463;

										BgL_arg2643z00_2463 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 209 */
											obj_t BgL_arrayz00_2465;

											int BgL_offsetz00_2466;

											BgL_arrayz00_2465 = BgL_arg2643z00_2463;
											BgL_offsetz00_2466 =
												(int) (BgL_objzd2classzd2numz00_2462);
											{	/* Globalize/gn.scm 209 */
												long BgL_offsetz00_2467;

												BgL_offsetz00_2467 =
													((long) (BgL_offsetz00_2466) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 209 */
													long BgL_modz00_2468;

													{	/* Globalize/gn.scm 209 */
														int BgL_arg2645z00_2469;

														BgL_arg2645z00_2469 = (int) (((long) 16));
														{	/* Globalize/gn.scm 209 */
															long BgL_auxz00_3069;

															BgL_auxz00_3069 = (long) (BgL_arg2645z00_2469);
															BgL_modz00_2468 =
																(BgL_offsetz00_2467 / BgL_auxz00_3069);
													}}
													{	/* Globalize/gn.scm 209 */
														long BgL_restz00_2470;

														{	/* Globalize/gn.scm 209 */
															int BgL_arg2644z00_2471;

															BgL_arg2644z00_2471 = (int) (((long) 16));
															{	/* Globalize/gn.scm 209 */
																long BgL_auxz00_3073;

																BgL_auxz00_3073 = (long) (BgL_arg2644z00_2471);
																BgL_restz00_2470 =
																	(BgL_offsetz00_2467 % BgL_auxz00_3073);
														}}
														{	/* Globalize/gn.scm 209 */

															BgL_method3673z00_2460 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2465,
																	(int) (BgL_modz00_2468)),
																(int) (BgL_restz00_2470));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2460) (BgL_method3673z00_2460,
								(obj_t) (BgL_arg3883z00_2455),
								(obj_t) (BgL_callerz00_2458), BgL_gz00_1677, BEOA);
						}
					}
				}
			}
		}
	}



/* E-jump-ex-it3709 */
	obj_t BGl_Ezd2jumpzd2exzd2it3709zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2624,
		obj_t BgL_nodez00_2625, obj_t BgL_callerz00_2626, obj_t BgL_gz00_2627)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 201 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1664;

				obj_t BgL_callerz00_1665;

				obj_t BgL_gz00_1666;

				BgL_nodez00_1664 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2625);
				BgL_callerz00_1665 = BgL_callerz00_2626;
				BgL_gz00_1666 = BgL_gz00_2627;
				{	/* Globalize/gn.scm 202 */
					BgL_nodez00_bglt BgL_arg3879z00_2393;

					obj_t BgL_arg3880z00_2394;

					BgL_arg3879z00_2393 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1664))->
						BgL_exitz00);
					{	/* Globalize/gn.scm 202 */
						BgL_nodez00_bglt BgL_arg3881z00_2395;

						BgL_arg3881z00_2395 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1664))->
							BgL_valuez00);
						{	/* Globalize/gn.scm 202 */
							BgL_variablez00_bglt BgL_callerz00_2399;

							BgL_callerz00_2399 = (BgL_variablez00_bglt) (BgL_callerz00_1665);
							{	/* Globalize/gn.scm 202 */
								obj_t BgL_method3673z00_2401;

								{	/* Globalize/gn.scm 202 */
									BgL_objectz00_bglt BgL_objz00_2402;

									BgL_objz00_2402 = (BgL_objectz00_bglt) (BgL_arg3881z00_2395);
									{	/* Globalize/gn.scm 202 */
										long BgL_objzd2classzd2numz00_2403;

										BgL_objzd2classzd2numz00_2403 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2402);
										{	/* Globalize/gn.scm 202 */
											obj_t BgL_arg2643z00_2404;

											BgL_arg2643z00_2404 =
												PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
												(int) (((long) 1)));
											{	/* Globalize/gn.scm 202 */
												obj_t BgL_arrayz00_2406;

												int BgL_offsetz00_2407;

												BgL_arrayz00_2406 = BgL_arg2643z00_2404;
												BgL_offsetz00_2407 =
													(int) (BgL_objzd2classzd2numz00_2403);
												{	/* Globalize/gn.scm 202 */
													long BgL_offsetz00_2408;

													BgL_offsetz00_2408 =
														((long) (BgL_offsetz00_2407) - OBJECT_TYPE);
													{	/* Globalize/gn.scm 202 */
														long BgL_modz00_2409;

														{	/* Globalize/gn.scm 202 */
															int BgL_arg2645z00_2410;

															BgL_arg2645z00_2410 = (int) (((long) 16));
															{	/* Globalize/gn.scm 202 */
																long BgL_auxz00_3096;

																BgL_auxz00_3096 = (long) (BgL_arg2645z00_2410);
																BgL_modz00_2409 =
																	(BgL_offsetz00_2408 / BgL_auxz00_3096);
														}}
														{	/* Globalize/gn.scm 202 */
															long BgL_restz00_2411;

															{	/* Globalize/gn.scm 202 */
																int BgL_arg2644z00_2412;

																BgL_arg2644z00_2412 = (int) (((long) 16));
																{	/* Globalize/gn.scm 202 */
																	long BgL_auxz00_3100;

																	BgL_auxz00_3100 =
																		(long) (BgL_arg2644z00_2412);
																	BgL_restz00_2411 =
																		(BgL_offsetz00_2408 % BgL_auxz00_3100);
															}}
															{	/* Globalize/gn.scm 202 */

																BgL_method3673z00_2401 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2406,
																		(int) (BgL_modz00_2409)),
																	(int) (BgL_restz00_2411));
								}}}}}}}}
								BgL_arg3880z00_2394 =
									PROCEDURE_ENTRY(BgL_method3673z00_2401)
									(BgL_method3673z00_2401, (obj_t) (BgL_arg3881z00_2395),
									(obj_t) (BgL_callerz00_2399), BgL_gz00_1666, BEOA);
					}}}
					{	/* Globalize/gn.scm 202 */
						BgL_variablez00_bglt BgL_callerz00_2427;

						BgL_callerz00_2427 = (BgL_variablez00_bglt) (BgL_callerz00_1665);
						{	/* Globalize/gn.scm 202 */
							obj_t BgL_method3673z00_2429;

							{	/* Globalize/gn.scm 202 */
								BgL_objectz00_bglt BgL_objz00_2430;

								BgL_objz00_2430 = (BgL_objectz00_bglt) (BgL_arg3879z00_2393);
								{	/* Globalize/gn.scm 202 */
									long BgL_objzd2classzd2numz00_2431;

									BgL_objzd2classzd2numz00_2431 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2430);
									{	/* Globalize/gn.scm 202 */
										obj_t BgL_arg2643z00_2432;

										BgL_arg2643z00_2432 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 202 */
											obj_t BgL_arrayz00_2434;

											int BgL_offsetz00_2435;

											BgL_arrayz00_2434 = BgL_arg2643z00_2432;
											BgL_offsetz00_2435 =
												(int) (BgL_objzd2classzd2numz00_2431);
											{	/* Globalize/gn.scm 202 */
												long BgL_offsetz00_2436;

												BgL_offsetz00_2436 =
													((long) (BgL_offsetz00_2435) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 202 */
													long BgL_modz00_2437;

													{	/* Globalize/gn.scm 202 */
														int BgL_arg2645z00_2438;

														BgL_arg2645z00_2438 = (int) (((long) 16));
														{	/* Globalize/gn.scm 202 */
															long BgL_auxz00_3120;

															BgL_auxz00_3120 = (long) (BgL_arg2645z00_2438);
															BgL_modz00_2437 =
																(BgL_offsetz00_2436 / BgL_auxz00_3120);
													}}
													{	/* Globalize/gn.scm 202 */
														long BgL_restz00_2439;

														{	/* Globalize/gn.scm 202 */
															int BgL_arg2644z00_2440;

															BgL_arg2644z00_2440 = (int) (((long) 16));
															{	/* Globalize/gn.scm 202 */
																long BgL_auxz00_3124;

																BgL_auxz00_3124 = (long) (BgL_arg2644z00_2440);
																BgL_restz00_2439 =
																	(BgL_offsetz00_2436 % BgL_auxz00_3124);
														}}
														{	/* Globalize/gn.scm 202 */

															BgL_method3673z00_2429 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2434,
																	(int) (BgL_modz00_2437)),
																(int) (BgL_restz00_2439));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2429) (BgL_method3673z00_2429,
								(obj_t) (BgL_arg3879z00_2393),
								(obj_t) (BgL_callerz00_2427), BgL_arg3880z00_2394, BEOA);
						}
					}
				}
			}
		}
	}



/* E-set-ex-it3707 */
	obj_t BGl_Ezd2setzd2exzd2it3707zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2628,
		obj_t BgL_nodez00_2629, obj_t BgL_callerz00_2630, obj_t BgL_gz00_2631)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 194 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1655;

				obj_t BgL_callerz00_1656;

				obj_t BgL_gz00_1657;

				BgL_nodez00_1655 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2629);
				BgL_callerz00_1656 = BgL_callerz00_2630;
				BgL_gz00_1657 = BgL_gz00_2631;
				{	/* Globalize/gn.scm 195 */
					BgL_nodez00_bglt BgL_arg3877z00_2362;

					BgL_arg3877z00_2362 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1655))->BgL_bodyz00);
					{	/* Globalize/gn.scm 195 */
						BgL_variablez00_bglt BgL_callerz00_2365;

						BgL_callerz00_2365 = (BgL_variablez00_bglt) (BgL_callerz00_1656);
						{	/* Globalize/gn.scm 195 */
							obj_t BgL_method3673z00_2367;

							{	/* Globalize/gn.scm 195 */
								BgL_objectz00_bglt BgL_objz00_2368;

								BgL_objz00_2368 = (BgL_objectz00_bglt) (BgL_arg3877z00_2362);
								{	/* Globalize/gn.scm 195 */
									long BgL_objzd2classzd2numz00_2369;

									BgL_objzd2classzd2numz00_2369 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2368);
									{	/* Globalize/gn.scm 195 */
										obj_t BgL_arg2643z00_2370;

										BgL_arg2643z00_2370 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 195 */
											obj_t BgL_arrayz00_2372;

											int BgL_offsetz00_2373;

											BgL_arrayz00_2372 = BgL_arg2643z00_2370;
											BgL_offsetz00_2373 =
												(int) (BgL_objzd2classzd2numz00_2369);
											{	/* Globalize/gn.scm 195 */
												long BgL_offsetz00_2374;

												BgL_offsetz00_2374 =
													((long) (BgL_offsetz00_2373) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 195 */
													long BgL_modz00_2375;

													{	/* Globalize/gn.scm 195 */
														int BgL_arg2645z00_2376;

														BgL_arg2645z00_2376 = (int) (((long) 16));
														{	/* Globalize/gn.scm 195 */
															long BgL_auxz00_3146;

															BgL_auxz00_3146 = (long) (BgL_arg2645z00_2376);
															BgL_modz00_2375 =
																(BgL_offsetz00_2374 / BgL_auxz00_3146);
													}}
													{	/* Globalize/gn.scm 195 */
														long BgL_restz00_2377;

														{	/* Globalize/gn.scm 195 */
															int BgL_arg2644z00_2378;

															BgL_arg2644z00_2378 = (int) (((long) 16));
															{	/* Globalize/gn.scm 195 */
																long BgL_auxz00_3150;

																BgL_auxz00_3150 = (long) (BgL_arg2644z00_2378);
																BgL_restz00_2377 =
																	(BgL_offsetz00_2374 % BgL_auxz00_3150);
														}}
														{	/* Globalize/gn.scm 195 */

															BgL_method3673z00_2367 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2372,
																	(int) (BgL_modz00_2375)),
																(int) (BgL_restz00_2377));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2367) (BgL_method3673z00_2367,
								(obj_t) (BgL_arg3877z00_2362),
								(obj_t) (BgL_callerz00_2365), BgL_gz00_1657, BEOA);
						}
					}
				}
			}
		}
	}



/* E-let-var3705 */
	obj_t BGl_Ezd2letzd2var3705z00zzglobaliza7e_gnza7(obj_t BgL_envz00_2632,
		obj_t BgL_nodez00_2633, obj_t BgL_callerz00_2634, obj_t BgL_gz00_2635)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 182 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1635;

				obj_t BgL_callerz00_1636;

				obj_t BgL_gz00_1637;

				BgL_nodez00_1635 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2633);
				BgL_callerz00_1636 = BgL_callerz00_2634;
				BgL_gz00_1637 = BgL_gz00_2635;
				{
					obj_t BgL_bindingsz00_1643;

					obj_t BgL_gz00_1644;

					{	/* Globalize/gn.scm 184 */
						obj_t BgL_arg3868z00_1642;

						BgL_arg3868z00_1642 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1635))->
							BgL_bindingsz00);
						BgL_bindingsz00_1643 = BgL_arg3868z00_1642;
						BgL_gz00_1644 = BgL_gz00_1637;
					BgL_zc3anonymousza33869ze3z83_1645:
						if (NULLP(BgL_bindingsz00_1643))
							{	/* Globalize/gn.scm 187 */
								BgL_nodez00_bglt BgL_arg3871z00_1647;

								BgL_arg3871z00_1647 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1635))->
									BgL_bodyz00);
								{	/* Globalize/gn.scm 187 */
									BgL_variablez00_bglt BgL_callerz00_2303;

									BgL_callerz00_2303 =
										(BgL_variablez00_bglt) (BgL_callerz00_1636);
									{	/* Globalize/gn.scm 187 */
										obj_t BgL_method3673z00_2305;

										{	/* Globalize/gn.scm 187 */
											BgL_objectz00_bglt BgL_objz00_2306;

											BgL_objz00_2306 =
												(BgL_objectz00_bglt) (BgL_arg3871z00_1647);
											{	/* Globalize/gn.scm 187 */
												long BgL_objzd2classzd2numz00_2307;

												BgL_objzd2classzd2numz00_2307 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2306);
												{	/* Globalize/gn.scm 187 */
													obj_t BgL_arg2643z00_2308;

													BgL_arg2643z00_2308 =
														PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
														(int) (((long) 1)));
													{	/* Globalize/gn.scm 187 */
														obj_t BgL_arrayz00_2310;

														int BgL_offsetz00_2311;

														BgL_arrayz00_2310 = BgL_arg2643z00_2308;
														BgL_offsetz00_2311 =
															(int) (BgL_objzd2classzd2numz00_2307);
														{	/* Globalize/gn.scm 187 */
															long BgL_offsetz00_2312;

															BgL_offsetz00_2312 =
																((long) (BgL_offsetz00_2311) - OBJECT_TYPE);
															{	/* Globalize/gn.scm 187 */
																long BgL_modz00_2313;

																{	/* Globalize/gn.scm 187 */
																	int BgL_arg2645z00_2314;

																	BgL_arg2645z00_2314 = (int) (((long) 16));
																	{	/* Globalize/gn.scm 187 */
																		long BgL_auxz00_3175;

																		BgL_auxz00_3175 =
																			(long) (BgL_arg2645z00_2314);
																		BgL_modz00_2313 =
																			(BgL_offsetz00_2312 / BgL_auxz00_3175);
																}}
																{	/* Globalize/gn.scm 187 */
																	long BgL_restz00_2315;

																	{	/* Globalize/gn.scm 187 */
																		int BgL_arg2644z00_2316;

																		BgL_arg2644z00_2316 = (int) (((long) 16));
																		{	/* Globalize/gn.scm 187 */
																			long BgL_auxz00_3179;

																			BgL_auxz00_3179 =
																				(long) (BgL_arg2644z00_2316);
																			BgL_restz00_2315 =
																				(BgL_offsetz00_2312 % BgL_auxz00_3179);
																	}}
																	{	/* Globalize/gn.scm 187 */

																		BgL_method3673z00_2305 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2310,
																				(int) (BgL_modz00_2313)),
																			(int) (BgL_restz00_2315));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3673z00_2305)
											(BgL_method3673z00_2305, (obj_t) (BgL_arg3871z00_1647),
											(obj_t) (BgL_callerz00_2303), BgL_gz00_1644, BEOA);
									}
								}
							}
						else
							{	/* Globalize/gn.scm 188 */
								obj_t BgL_arg3872z00_1648;

								obj_t BgL_arg3873z00_1649;

								BgL_arg3872z00_1648 = CDR(BgL_bindingsz00_1643);
								{	/* Globalize/gn.scm 189 */
									obj_t BgL_arg3874z00_1650;

									BgL_arg3874z00_1650 = CDR(CAR(BgL_bindingsz00_1643));
									{	/* Globalize/gn.scm 189 */
										BgL_nodez00_bglt BgL_nodez00_2333;

										BgL_variablez00_bglt BgL_callerz00_2334;

										BgL_nodez00_2333 = (BgL_nodez00_bglt) (BgL_arg3874z00_1650);
										BgL_callerz00_2334 =
											(BgL_variablez00_bglt) (BgL_callerz00_1636);
										{	/* Globalize/gn.scm 189 */
											obj_t BgL_method3673z00_2336;

											{	/* Globalize/gn.scm 189 */
												BgL_objectz00_bglt BgL_objz00_2337;

												BgL_objz00_2337 =
													(BgL_objectz00_bglt) (BgL_nodez00_2333);
												{	/* Globalize/gn.scm 189 */
													long BgL_objzd2classzd2numz00_2338;

													BgL_objzd2classzd2numz00_2338 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2337);
													{	/* Globalize/gn.scm 189 */
														obj_t BgL_arg2643z00_2339;

														BgL_arg2643z00_2339 =
															PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
															(int) (((long) 1)));
														{	/* Globalize/gn.scm 189 */
															obj_t BgL_arrayz00_2341;

															int BgL_offsetz00_2342;

															BgL_arrayz00_2341 = BgL_arg2643z00_2339;
															BgL_offsetz00_2342 =
																(int) (BgL_objzd2classzd2numz00_2338);
															{	/* Globalize/gn.scm 189 */
																long BgL_offsetz00_2343;

																BgL_offsetz00_2343 =
																	((long) (BgL_offsetz00_2342) - OBJECT_TYPE);
																{	/* Globalize/gn.scm 189 */
																	long BgL_modz00_2344;

																	{	/* Globalize/gn.scm 189 */
																		int BgL_arg2645z00_2345;

																		BgL_arg2645z00_2345 = (int) (((long) 16));
																		{	/* Globalize/gn.scm 189 */
																			long BgL_auxz00_3203;

																			BgL_auxz00_3203 =
																				(long) (BgL_arg2645z00_2345);
																			BgL_modz00_2344 =
																				(BgL_offsetz00_2343 / BgL_auxz00_3203);
																	}}
																	{	/* Globalize/gn.scm 189 */
																		long BgL_restz00_2346;

																		{	/* Globalize/gn.scm 189 */
																			int BgL_arg2644z00_2347;

																			BgL_arg2644z00_2347 = (int) (((long) 16));
																			{	/* Globalize/gn.scm 189 */
																				long BgL_auxz00_3207;

																				BgL_auxz00_3207 =
																					(long) (BgL_arg2644z00_2347);
																				BgL_restz00_2346 =
																					(BgL_offsetz00_2343 %
																					BgL_auxz00_3207);
																		}}
																		{	/* Globalize/gn.scm 189 */

																			BgL_method3673z00_2336 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2341,
																					(int) (BgL_modz00_2344)),
																				(int) (BgL_restz00_2346));
											}}}}}}}}
											BgL_arg3873z00_1649 =
												PROCEDURE_ENTRY(BgL_method3673z00_2336)
												(BgL_method3673z00_2336, (obj_t) (BgL_nodez00_2333),
												(obj_t) (BgL_callerz00_2334), BgL_gz00_1644, BEOA);
								}}}
								{
									obj_t BgL_gz00_3219;

									obj_t BgL_bindingsz00_3218;

									BgL_bindingsz00_3218 = BgL_arg3872z00_1648;
									BgL_gz00_3219 = BgL_arg3873z00_1649;
									BgL_gz00_1644 = BgL_gz00_3219;
									BgL_bindingsz00_1643 = BgL_bindingsz00_3218;
									goto BgL_zc3anonymousza33869ze3z83_1645;
								}
							}
					}
				}
			}
		}
	}



/* E-let-fun3703 */
	obj_t BGl_Ezd2letzd2fun3703z00zzglobaliza7e_gnza7(obj_t BgL_envz00_2636,
		obj_t BgL_nodez00_2637, obj_t BgL_callerz00_2638, obj_t BgL_gz00_2639)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 168 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1613;

				obj_t BgL_callerz00_1614;

				obj_t BgL_gz00_1615;

				BgL_nodez00_1613 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2637);
				BgL_callerz00_1614 = BgL_callerz00_2638;
				BgL_gz00_1615 = BgL_gz00_2639;
				{
					obj_t BgL_localsz00_1621;

					obj_t BgL_gz00_1622;

					{	/* Globalize/gn.scm 170 */
						obj_t BgL_arg3857z00_1620;

						BgL_arg3857z00_1620 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1613))->BgL_localsz00);
						BgL_localsz00_1621 = BgL_arg3857z00_1620;
						BgL_gz00_1622 = BgL_gz00_1615;
					BgL_zc3anonymousza33858ze3z83_1623:
						if (NULLP(BgL_localsz00_1621))
							{	/* Globalize/gn.scm 173 */
								BgL_nodez00_bglt BgL_arg3860z00_1625;

								BgL_arg3860z00_1625 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1613))->
									BgL_bodyz00);
								{	/* Globalize/gn.scm 173 */
									BgL_variablez00_bglt BgL_callerz00_2239;

									BgL_callerz00_2239 =
										(BgL_variablez00_bglt) (BgL_callerz00_1614);
									{	/* Globalize/gn.scm 173 */
										obj_t BgL_method3673z00_2241;

										{	/* Globalize/gn.scm 173 */
											BgL_objectz00_bglt BgL_objz00_2242;

											BgL_objz00_2242 =
												(BgL_objectz00_bglt) (BgL_arg3860z00_1625);
											{	/* Globalize/gn.scm 173 */
												long BgL_objzd2classzd2numz00_2243;

												BgL_objzd2classzd2numz00_2243 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2242);
												{	/* Globalize/gn.scm 173 */
													obj_t BgL_arg2643z00_2244;

													BgL_arg2643z00_2244 =
														PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
														(int) (((long) 1)));
													{	/* Globalize/gn.scm 173 */
														obj_t BgL_arrayz00_2246;

														int BgL_offsetz00_2247;

														BgL_arrayz00_2246 = BgL_arg2643z00_2244;
														BgL_offsetz00_2247 =
															(int) (BgL_objzd2classzd2numz00_2243);
														{	/* Globalize/gn.scm 173 */
															long BgL_offsetz00_2248;

															BgL_offsetz00_2248 =
																((long) (BgL_offsetz00_2247) - OBJECT_TYPE);
															{	/* Globalize/gn.scm 173 */
																long BgL_modz00_2249;

																{	/* Globalize/gn.scm 173 */
																	int BgL_arg2645z00_2250;

																	BgL_arg2645z00_2250 = (int) (((long) 16));
																	{	/* Globalize/gn.scm 173 */
																		long BgL_auxz00_3234;

																		BgL_auxz00_3234 =
																			(long) (BgL_arg2645z00_2250);
																		BgL_modz00_2249 =
																			(BgL_offsetz00_2248 / BgL_auxz00_3234);
																}}
																{	/* Globalize/gn.scm 173 */
																	long BgL_restz00_2251;

																	{	/* Globalize/gn.scm 173 */
																		int BgL_arg2644z00_2252;

																		BgL_arg2644z00_2252 = (int) (((long) 16));
																		{	/* Globalize/gn.scm 173 */
																			long BgL_auxz00_3238;

																			BgL_auxz00_3238 =
																				(long) (BgL_arg2644z00_2252);
																			BgL_restz00_2251 =
																				(BgL_offsetz00_2248 % BgL_auxz00_3238);
																	}}
																	{	/* Globalize/gn.scm 173 */

																		BgL_method3673z00_2241 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2246,
																				(int) (BgL_modz00_2249)),
																			(int) (BgL_restz00_2251));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3673z00_2241)
											(BgL_method3673z00_2241, (obj_t) (BgL_arg3860z00_1625),
											(obj_t) (BgL_callerz00_2239), BgL_gz00_1622, BEOA);
									}
								}
							}
						else
							{	/* Globalize/gn.scm 174 */
								obj_t BgL_arg3861z00_1626;

								obj_t BgL_arg3862z00_1627;

								BgL_arg3861z00_1626 = CDR(BgL_localsz00_1621);
								{	/* Globalize/gn.scm 175 */
									obj_t BgL_arg3863z00_1628;

									obj_t BgL_arg3864z00_1629;

									{	/* Globalize/gn.scm 175 */
										BgL_sfunz00_bglt BgL_obj1884z00_2269;

										{	/* Globalize/gn.scm 175 */
											BgL_valuez00_bglt BgL_auxz00_3250;

											{	/* Globalize/gn.scm 175 */
												BgL_variablez00_bglt BgL_obj1611z00_2268;

												{	/* Globalize/gn.scm 175 */
													obj_t BgL_pairz00_2267;

													BgL_pairz00_2267 = BgL_localsz00_1621;
													BgL_obj1611z00_2268 =
														(BgL_variablez00_bglt) (CAR(BgL_pairz00_2267));
												}
												BgL_auxz00_3250 =
													(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2268))->
													BgL_valuez00);
											}
											BgL_obj1884z00_2269 =
												(BgL_sfunz00_bglt) (BgL_auxz00_3250);
										}
										BgL_arg3863z00_1628 =
											(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2269))->
											BgL_bodyz00);
									}
									BgL_arg3864z00_1629 = CAR(BgL_localsz00_1621);
									{	/* Globalize/gn.scm 175 */
										BgL_nodez00_bglt BgL_nodez00_2271;

										BgL_variablez00_bglt BgL_callerz00_2272;

										BgL_nodez00_2271 = (BgL_nodez00_bglt) (BgL_arg3863z00_1628);
										BgL_callerz00_2272 =
											(BgL_variablez00_bglt) (BgL_arg3864z00_1629);
										{	/* Globalize/gn.scm 175 */
											obj_t BgL_method3673z00_2274;

											{	/* Globalize/gn.scm 175 */
												BgL_objectz00_bglt BgL_objz00_2275;

												BgL_objz00_2275 =
													(BgL_objectz00_bglt) (BgL_nodez00_2271);
												{	/* Globalize/gn.scm 175 */
													long BgL_objzd2classzd2numz00_2276;

													BgL_objzd2classzd2numz00_2276 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2275);
													{	/* Globalize/gn.scm 175 */
														obj_t BgL_arg2643z00_2277;

														BgL_arg2643z00_2277 =
															PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
															(int) (((long) 1)));
														{	/* Globalize/gn.scm 175 */
															obj_t BgL_arrayz00_2279;

															int BgL_offsetz00_2280;

															BgL_arrayz00_2279 = BgL_arg2643z00_2277;
															BgL_offsetz00_2280 =
																(int) (BgL_objzd2classzd2numz00_2276);
															{	/* Globalize/gn.scm 175 */
																long BgL_offsetz00_2281;

																BgL_offsetz00_2281 =
																	((long) (BgL_offsetz00_2280) - OBJECT_TYPE);
																{	/* Globalize/gn.scm 175 */
																	long BgL_modz00_2282;

																	{	/* Globalize/gn.scm 175 */
																		int BgL_arg2645z00_2283;

																		BgL_arg2645z00_2283 = (int) (((long) 16));
																		{	/* Globalize/gn.scm 175 */
																			long BgL_auxz00_3267;

																			BgL_auxz00_3267 =
																				(long) (BgL_arg2645z00_2283);
																			BgL_modz00_2282 =
																				(BgL_offsetz00_2281 / BgL_auxz00_3267);
																	}}
																	{	/* Globalize/gn.scm 175 */
																		long BgL_restz00_2284;

																		{	/* Globalize/gn.scm 175 */
																			int BgL_arg2644z00_2285;

																			BgL_arg2644z00_2285 = (int) (((long) 16));
																			{	/* Globalize/gn.scm 175 */
																				long BgL_auxz00_3271;

																				BgL_auxz00_3271 =
																					(long) (BgL_arg2644z00_2285);
																				BgL_restz00_2284 =
																					(BgL_offsetz00_2281 %
																					BgL_auxz00_3271);
																		}}
																		{	/* Globalize/gn.scm 175 */

																			BgL_method3673z00_2274 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2279,
																					(int) (BgL_modz00_2282)),
																				(int) (BgL_restz00_2284));
											}}}}}}}}
											BgL_arg3862z00_1627 =
												PROCEDURE_ENTRY(BgL_method3673z00_2274)
												(BgL_method3673z00_2274, (obj_t) (BgL_nodez00_2271),
												(obj_t) (BgL_callerz00_2272), BgL_gz00_1622, BEOA);
								}}}
								{
									obj_t BgL_gz00_3283;

									obj_t BgL_localsz00_3282;

									BgL_localsz00_3282 = BgL_arg3861z00_1626;
									BgL_gz00_3283 = BgL_arg3862z00_1627;
									BgL_gz00_1622 = BgL_gz00_3283;
									BgL_localsz00_1621 = BgL_localsz00_3282;
									goto BgL_zc3anonymousza33858ze3z83_1623;
								}
							}
					}
				}
			}
		}
	}



/* E-select3701 */
	obj_t BGl_Ezd2select3701zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2640,
		obj_t BgL_nodez00_2641, obj_t BgL_callerz00_2642, obj_t BgL_gz00_2643)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 157 */
			{
				BgL_selectz00_bglt BgL_nodez00_1593;

				obj_t BgL_callerz00_1594;

				obj_t BgL_gz00_1595;

				BgL_nodez00_1593 = (BgL_selectz00_bglt) (BgL_nodez00_2641);
				BgL_callerz00_1594 = BgL_callerz00_2642;
				BgL_gz00_1595 = BgL_gz00_2643;
				{
					obj_t BgL_clausesz00_1601;

					obj_t BgL_gz00_1602;

					{	/* Globalize/gn.scm 159 */
						obj_t BgL_arg3848z00_1600;

						BgL_arg3848z00_1600 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1593))->BgL_clausesz00);
						BgL_clausesz00_1601 = BgL_arg3848z00_1600;
						BgL_gz00_1602 = BgL_gz00_1595;
					BgL_zc3anonymousza33849ze3z83_1603:
						if (NULLP(BgL_clausesz00_1601))
							{	/* Globalize/gn.scm 162 */
								BgL_nodez00_bglt BgL_arg3851z00_1605;

								BgL_arg3851z00_1605 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1593))->BgL_testz00);
								{	/* Globalize/gn.scm 162 */
									BgL_variablez00_bglt BgL_callerz00_2177;

									BgL_callerz00_2177 =
										(BgL_variablez00_bglt) (BgL_callerz00_1594);
									{	/* Globalize/gn.scm 162 */
										obj_t BgL_method3673z00_2179;

										{	/* Globalize/gn.scm 162 */
											BgL_objectz00_bglt BgL_objz00_2180;

											BgL_objz00_2180 =
												(BgL_objectz00_bglt) (BgL_arg3851z00_1605);
											{	/* Globalize/gn.scm 162 */
												long BgL_objzd2classzd2numz00_2181;

												BgL_objzd2classzd2numz00_2181 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2180);
												{	/* Globalize/gn.scm 162 */
													obj_t BgL_arg2643z00_2182;

													BgL_arg2643z00_2182 =
														PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
														(int) (((long) 1)));
													{	/* Globalize/gn.scm 162 */
														obj_t BgL_arrayz00_2184;

														int BgL_offsetz00_2185;

														BgL_arrayz00_2184 = BgL_arg2643z00_2182;
														BgL_offsetz00_2185 =
															(int) (BgL_objzd2classzd2numz00_2181);
														{	/* Globalize/gn.scm 162 */
															long BgL_offsetz00_2186;

															BgL_offsetz00_2186 =
																((long) (BgL_offsetz00_2185) - OBJECT_TYPE);
															{	/* Globalize/gn.scm 162 */
																long BgL_modz00_2187;

																{	/* Globalize/gn.scm 162 */
																	int BgL_arg2645z00_2188;

																	BgL_arg2645z00_2188 = (int) (((long) 16));
																	{	/* Globalize/gn.scm 162 */
																		long BgL_auxz00_3298;

																		BgL_auxz00_3298 =
																			(long) (BgL_arg2645z00_2188);
																		BgL_modz00_2187 =
																			(BgL_offsetz00_2186 / BgL_auxz00_3298);
																}}
																{	/* Globalize/gn.scm 162 */
																	long BgL_restz00_2189;

																	{	/* Globalize/gn.scm 162 */
																		int BgL_arg2644z00_2190;

																		BgL_arg2644z00_2190 = (int) (((long) 16));
																		{	/* Globalize/gn.scm 162 */
																			long BgL_auxz00_3302;

																			BgL_auxz00_3302 =
																				(long) (BgL_arg2644z00_2190);
																			BgL_restz00_2189 =
																				(BgL_offsetz00_2186 % BgL_auxz00_3302);
																	}}
																	{	/* Globalize/gn.scm 162 */

																		BgL_method3673z00_2179 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2184,
																				(int) (BgL_modz00_2187)),
																			(int) (BgL_restz00_2189));
										}}}}}}}}
										return
											PROCEDURE_ENTRY(BgL_method3673z00_2179)
											(BgL_method3673z00_2179, (obj_t) (BgL_arg3851z00_1605),
											(obj_t) (BgL_callerz00_2177), BgL_gz00_1602, BEOA);
									}
								}
							}
						else
							{	/* Globalize/gn.scm 163 */
								obj_t BgL_arg3852z00_1606;

								obj_t BgL_arg3853z00_1607;

								BgL_arg3852z00_1606 = CDR(BgL_clausesz00_1601);
								{	/* Globalize/gn.scm 163 */
									obj_t BgL_arg3854z00_1608;

									BgL_arg3854z00_1608 = CDR(CAR(BgL_clausesz00_1601));
									{	/* Globalize/gn.scm 163 */
										BgL_nodez00_bglt BgL_nodez00_2207;

										BgL_variablez00_bglt BgL_callerz00_2208;

										BgL_nodez00_2207 = (BgL_nodez00_bglt) (BgL_arg3854z00_1608);
										BgL_callerz00_2208 =
											(BgL_variablez00_bglt) (BgL_callerz00_1594);
										{	/* Globalize/gn.scm 163 */
											obj_t BgL_method3673z00_2210;

											{	/* Globalize/gn.scm 163 */
												BgL_objectz00_bglt BgL_objz00_2211;

												BgL_objz00_2211 =
													(BgL_objectz00_bglt) (BgL_nodez00_2207);
												{	/* Globalize/gn.scm 163 */
													long BgL_objzd2classzd2numz00_2212;

													BgL_objzd2classzd2numz00_2212 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2211);
													{	/* Globalize/gn.scm 163 */
														obj_t BgL_arg2643z00_2213;

														BgL_arg2643z00_2213 =
															PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
															(int) (((long) 1)));
														{	/* Globalize/gn.scm 163 */
															obj_t BgL_arrayz00_2215;

															int BgL_offsetz00_2216;

															BgL_arrayz00_2215 = BgL_arg2643z00_2213;
															BgL_offsetz00_2216 =
																(int) (BgL_objzd2classzd2numz00_2212);
															{	/* Globalize/gn.scm 163 */
																long BgL_offsetz00_2217;

																BgL_offsetz00_2217 =
																	((long) (BgL_offsetz00_2216) - OBJECT_TYPE);
																{	/* Globalize/gn.scm 163 */
																	long BgL_modz00_2218;

																	{	/* Globalize/gn.scm 163 */
																		int BgL_arg2645z00_2219;

																		BgL_arg2645z00_2219 = (int) (((long) 16));
																		{	/* Globalize/gn.scm 163 */
																			long BgL_auxz00_3326;

																			BgL_auxz00_3326 =
																				(long) (BgL_arg2645z00_2219);
																			BgL_modz00_2218 =
																				(BgL_offsetz00_2217 / BgL_auxz00_3326);
																	}}
																	{	/* Globalize/gn.scm 163 */
																		long BgL_restz00_2220;

																		{	/* Globalize/gn.scm 163 */
																			int BgL_arg2644z00_2221;

																			BgL_arg2644z00_2221 = (int) (((long) 16));
																			{	/* Globalize/gn.scm 163 */
																				long BgL_auxz00_3330;

																				BgL_auxz00_3330 =
																					(long) (BgL_arg2644z00_2221);
																				BgL_restz00_2220 =
																					(BgL_offsetz00_2217 %
																					BgL_auxz00_3330);
																		}}
																		{	/* Globalize/gn.scm 163 */

																			BgL_method3673z00_2210 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2215,
																					(int) (BgL_modz00_2218)),
																				(int) (BgL_restz00_2220));
											}}}}}}}}
											BgL_arg3853z00_1607 =
												PROCEDURE_ENTRY(BgL_method3673z00_2210)
												(BgL_method3673z00_2210, (obj_t) (BgL_nodez00_2207),
												(obj_t) (BgL_callerz00_2208), BgL_gz00_1602, BEOA);
								}}}
								{
									obj_t BgL_gz00_3342;

									obj_t BgL_clausesz00_3341;

									BgL_clausesz00_3341 = BgL_arg3852z00_1606;
									BgL_gz00_3342 = BgL_arg3853z00_1607;
									BgL_gz00_1602 = BgL_gz00_3342;
									BgL_clausesz00_1601 = BgL_clausesz00_3341;
									goto BgL_zc3anonymousza33849ze3z83_1603;
								}
							}
					}
				}
			}
		}
	}



/* E-fail3699 */
	obj_t BGl_Ezd2fail3699zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2644,
		obj_t BgL_nodez00_2645, obj_t BgL_callerz00_2646, obj_t BgL_gz00_2647)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 150 */
			{
				BgL_failz00_bglt BgL_nodez00_1580;

				obj_t BgL_callerz00_1581;

				obj_t BgL_gz00_1582;

				BgL_nodez00_1580 = (BgL_failz00_bglt) (BgL_nodez00_2645);
				BgL_callerz00_1581 = BgL_callerz00_2646;
				BgL_gz00_1582 = BgL_gz00_2647;
				{	/* Globalize/gn.scm 152 */
					BgL_nodez00_bglt BgL_arg3842z00_1586;

					obj_t BgL_arg3843z00_1587;

					BgL_arg3842z00_1586 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1580))->BgL_procz00);
					{	/* Globalize/gn.scm 152 */
						BgL_nodez00_bglt BgL_arg3844z00_1588;

						obj_t BgL_arg3845z00_1589;

						BgL_arg3844z00_1588 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1580))->BgL_msgz00);
						{	/* Globalize/gn.scm 152 */
							BgL_nodez00_bglt BgL_arg3846z00_1590;

							BgL_arg3846z00_1590 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1580))->BgL_objz00);
							{	/* Globalize/gn.scm 152 */
								BgL_variablez00_bglt BgL_callerz00_2090;

								BgL_callerz00_2090 =
									(BgL_variablez00_bglt) (BgL_callerz00_1581);
								{	/* Globalize/gn.scm 152 */
									obj_t BgL_method3673z00_2092;

									{	/* Globalize/gn.scm 152 */
										BgL_objectz00_bglt BgL_objz00_2093;

										BgL_objz00_2093 =
											(BgL_objectz00_bglt) (BgL_arg3846z00_1590);
										{	/* Globalize/gn.scm 152 */
											long BgL_objzd2classzd2numz00_2094;

											BgL_objzd2classzd2numz00_2094 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2093);
											{	/* Globalize/gn.scm 152 */
												obj_t BgL_arg2643z00_2095;

												BgL_arg2643z00_2095 =
													PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
													(int) (((long) 1)));
												{	/* Globalize/gn.scm 152 */
													obj_t BgL_arrayz00_2097;

													int BgL_offsetz00_2098;

													BgL_arrayz00_2097 = BgL_arg2643z00_2095;
													BgL_offsetz00_2098 =
														(int) (BgL_objzd2classzd2numz00_2094);
													{	/* Globalize/gn.scm 152 */
														long BgL_offsetz00_2099;

														BgL_offsetz00_2099 =
															((long) (BgL_offsetz00_2098) - OBJECT_TYPE);
														{	/* Globalize/gn.scm 152 */
															long BgL_modz00_2100;

															{	/* Globalize/gn.scm 152 */
																int BgL_arg2645z00_2101;

																BgL_arg2645z00_2101 = (int) (((long) 16));
																{	/* Globalize/gn.scm 152 */
																	long BgL_auxz00_3356;

																	BgL_auxz00_3356 =
																		(long) (BgL_arg2645z00_2101);
																	BgL_modz00_2100 =
																		(BgL_offsetz00_2099 / BgL_auxz00_3356);
															}}
															{	/* Globalize/gn.scm 152 */
																long BgL_restz00_2102;

																{	/* Globalize/gn.scm 152 */
																	int BgL_arg2644z00_2103;

																	BgL_arg2644z00_2103 = (int) (((long) 16));
																	{	/* Globalize/gn.scm 152 */
																		long BgL_auxz00_3360;

																		BgL_auxz00_3360 =
																			(long) (BgL_arg2644z00_2103);
																		BgL_restz00_2102 =
																			(BgL_offsetz00_2099 % BgL_auxz00_3360);
																}}
																{	/* Globalize/gn.scm 152 */

																	BgL_method3673z00_2092 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2097,
																			(int) (BgL_modz00_2100)),
																		(int) (BgL_restz00_2102));
									}}}}}}}}
									BgL_arg3845z00_1589 =
										PROCEDURE_ENTRY(BgL_method3673z00_2092)
										(BgL_method3673z00_2092, (obj_t) (BgL_arg3846z00_1590),
										(obj_t) (BgL_callerz00_2090), BgL_gz00_1582, BEOA);
						}}}
						{	/* Globalize/gn.scm 152 */
							BgL_variablez00_bglt BgL_callerz00_2118;

							BgL_callerz00_2118 = (BgL_variablez00_bglt) (BgL_callerz00_1581);
							{	/* Globalize/gn.scm 152 */
								obj_t BgL_method3673z00_2120;

								{	/* Globalize/gn.scm 152 */
									BgL_objectz00_bglt BgL_objz00_2121;

									BgL_objz00_2121 = (BgL_objectz00_bglt) (BgL_arg3844z00_1588);
									{	/* Globalize/gn.scm 152 */
										long BgL_objzd2classzd2numz00_2122;

										BgL_objzd2classzd2numz00_2122 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2121);
										{	/* Globalize/gn.scm 152 */
											obj_t BgL_arg2643z00_2123;

											BgL_arg2643z00_2123 =
												PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
												(int) (((long) 1)));
											{	/* Globalize/gn.scm 152 */
												obj_t BgL_arrayz00_2125;

												int BgL_offsetz00_2126;

												BgL_arrayz00_2125 = BgL_arg2643z00_2123;
												BgL_offsetz00_2126 =
													(int) (BgL_objzd2classzd2numz00_2122);
												{	/* Globalize/gn.scm 152 */
													long BgL_offsetz00_2127;

													BgL_offsetz00_2127 =
														((long) (BgL_offsetz00_2126) - OBJECT_TYPE);
													{	/* Globalize/gn.scm 152 */
														long BgL_modz00_2128;

														{	/* Globalize/gn.scm 152 */
															int BgL_arg2645z00_2129;

															BgL_arg2645z00_2129 = (int) (((long) 16));
															{	/* Globalize/gn.scm 152 */
																long BgL_auxz00_3380;

																BgL_auxz00_3380 = (long) (BgL_arg2645z00_2129);
																BgL_modz00_2128 =
																	(BgL_offsetz00_2127 / BgL_auxz00_3380);
														}}
														{	/* Globalize/gn.scm 152 */
															long BgL_restz00_2130;

															{	/* Globalize/gn.scm 152 */
																int BgL_arg2644z00_2131;

																BgL_arg2644z00_2131 = (int) (((long) 16));
																{	/* Globalize/gn.scm 152 */
																	long BgL_auxz00_3384;

																	BgL_auxz00_3384 =
																		(long) (BgL_arg2644z00_2131);
																	BgL_restz00_2130 =
																		(BgL_offsetz00_2127 % BgL_auxz00_3384);
															}}
															{	/* Globalize/gn.scm 152 */

																BgL_method3673z00_2120 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2125,
																		(int) (BgL_modz00_2128)),
																	(int) (BgL_restz00_2130));
								}}}}}}}}
								BgL_arg3843z00_1587 =
									PROCEDURE_ENTRY(BgL_method3673z00_2120)
									(BgL_method3673z00_2120, (obj_t) (BgL_arg3844z00_1588),
									(obj_t) (BgL_callerz00_2118), BgL_arg3845z00_1589, BEOA);
					}}}
					{	/* Globalize/gn.scm 152 */
						BgL_variablez00_bglt BgL_callerz00_2146;

						BgL_callerz00_2146 = (BgL_variablez00_bglt) (BgL_callerz00_1581);
						{	/* Globalize/gn.scm 152 */
							obj_t BgL_method3673z00_2148;

							{	/* Globalize/gn.scm 152 */
								BgL_objectz00_bglt BgL_objz00_2149;

								BgL_objz00_2149 = (BgL_objectz00_bglt) (BgL_arg3842z00_1586);
								{	/* Globalize/gn.scm 152 */
									long BgL_objzd2classzd2numz00_2150;

									BgL_objzd2classzd2numz00_2150 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2149);
									{	/* Globalize/gn.scm 152 */
										obj_t BgL_arg2643z00_2151;

										BgL_arg2643z00_2151 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 152 */
											obj_t BgL_arrayz00_2153;

											int BgL_offsetz00_2154;

											BgL_arrayz00_2153 = BgL_arg2643z00_2151;
											BgL_offsetz00_2154 =
												(int) (BgL_objzd2classzd2numz00_2150);
											{	/* Globalize/gn.scm 152 */
												long BgL_offsetz00_2155;

												BgL_offsetz00_2155 =
													((long) (BgL_offsetz00_2154) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 152 */
													long BgL_modz00_2156;

													{	/* Globalize/gn.scm 152 */
														int BgL_arg2645z00_2157;

														BgL_arg2645z00_2157 = (int) (((long) 16));
														{	/* Globalize/gn.scm 152 */
															long BgL_auxz00_3404;

															BgL_auxz00_3404 = (long) (BgL_arg2645z00_2157);
															BgL_modz00_2156 =
																(BgL_offsetz00_2155 / BgL_auxz00_3404);
													}}
													{	/* Globalize/gn.scm 152 */
														long BgL_restz00_2158;

														{	/* Globalize/gn.scm 152 */
															int BgL_arg2644z00_2159;

															BgL_arg2644z00_2159 = (int) (((long) 16));
															{	/* Globalize/gn.scm 152 */
																long BgL_auxz00_3408;

																BgL_auxz00_3408 = (long) (BgL_arg2644z00_2159);
																BgL_restz00_2158 =
																	(BgL_offsetz00_2155 % BgL_auxz00_3408);
														}}
														{	/* Globalize/gn.scm 152 */

															BgL_method3673z00_2148 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2153,
																	(int) (BgL_modz00_2156)),
																(int) (BgL_restz00_2158));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2148) (BgL_method3673z00_2148,
								(obj_t) (BgL_arg3842z00_1586),
								(obj_t) (BgL_callerz00_2146), BgL_arg3843z00_1587, BEOA);
						}
					}
				}
			}
		}
	}



/* E-conditional3697 */
	obj_t BGl_Ezd2conditional3697zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2648,
		obj_t BgL_nodez00_2649, obj_t BgL_callerz00_2650, obj_t BgL_gz00_2651)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 143 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1567;

				obj_t BgL_callerz00_1568;

				obj_t BgL_gz00_1569;

				BgL_nodez00_1567 = (BgL_conditionalz00_bglt) (BgL_nodez00_2649);
				BgL_callerz00_1568 = BgL_callerz00_2650;
				BgL_gz00_1569 = BgL_gz00_2651;
				{	/* Globalize/gn.scm 145 */
					BgL_nodez00_bglt BgL_arg3836z00_1573;

					obj_t BgL_arg3837z00_1574;

					BgL_arg3836z00_1573 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1567))->BgL_testz00);
					{	/* Globalize/gn.scm 145 */
						BgL_nodez00_bglt BgL_arg3838z00_1575;

						obj_t BgL_arg3839z00_1576;

						BgL_arg3838z00_1575 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1567))->BgL_truez00);
						{	/* Globalize/gn.scm 145 */
							BgL_nodez00_bglt BgL_arg3840z00_1577;

							BgL_arg3840z00_1577 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1567))->
								BgL_falsez00);
							{	/* Globalize/gn.scm 145 */
								BgL_variablez00_bglt BgL_callerz00_2003;

								BgL_callerz00_2003 =
									(BgL_variablez00_bglt) (BgL_callerz00_1568);
								{	/* Globalize/gn.scm 145 */
									obj_t BgL_method3673z00_2005;

									{	/* Globalize/gn.scm 145 */
										BgL_objectz00_bglt BgL_objz00_2006;

										BgL_objz00_2006 =
											(BgL_objectz00_bglt) (BgL_arg3840z00_1577);
										{	/* Globalize/gn.scm 145 */
											long BgL_objzd2classzd2numz00_2007;

											BgL_objzd2classzd2numz00_2007 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2006);
											{	/* Globalize/gn.scm 145 */
												obj_t BgL_arg2643z00_2008;

												BgL_arg2643z00_2008 =
													PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
													(int) (((long) 1)));
												{	/* Globalize/gn.scm 145 */
													obj_t BgL_arrayz00_2010;

													int BgL_offsetz00_2011;

													BgL_arrayz00_2010 = BgL_arg2643z00_2008;
													BgL_offsetz00_2011 =
														(int) (BgL_objzd2classzd2numz00_2007);
													{	/* Globalize/gn.scm 145 */
														long BgL_offsetz00_2012;

														BgL_offsetz00_2012 =
															((long) (BgL_offsetz00_2011) - OBJECT_TYPE);
														{	/* Globalize/gn.scm 145 */
															long BgL_modz00_2013;

															{	/* Globalize/gn.scm 145 */
																int BgL_arg2645z00_2014;

																BgL_arg2645z00_2014 = (int) (((long) 16));
																{	/* Globalize/gn.scm 145 */
																	long BgL_auxz00_3432;

																	BgL_auxz00_3432 =
																		(long) (BgL_arg2645z00_2014);
																	BgL_modz00_2013 =
																		(BgL_offsetz00_2012 / BgL_auxz00_3432);
															}}
															{	/* Globalize/gn.scm 145 */
																long BgL_restz00_2015;

																{	/* Globalize/gn.scm 145 */
																	int BgL_arg2644z00_2016;

																	BgL_arg2644z00_2016 = (int) (((long) 16));
																	{	/* Globalize/gn.scm 145 */
																		long BgL_auxz00_3436;

																		BgL_auxz00_3436 =
																			(long) (BgL_arg2644z00_2016);
																		BgL_restz00_2015 =
																			(BgL_offsetz00_2012 % BgL_auxz00_3436);
																}}
																{	/* Globalize/gn.scm 145 */

																	BgL_method3673z00_2005 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2010,
																			(int) (BgL_modz00_2013)),
																		(int) (BgL_restz00_2015));
									}}}}}}}}
									BgL_arg3839z00_1576 =
										PROCEDURE_ENTRY(BgL_method3673z00_2005)
										(BgL_method3673z00_2005, (obj_t) (BgL_arg3840z00_1577),
										(obj_t) (BgL_callerz00_2003), BgL_gz00_1569, BEOA);
						}}}
						{	/* Globalize/gn.scm 145 */
							BgL_variablez00_bglt BgL_callerz00_2031;

							BgL_callerz00_2031 = (BgL_variablez00_bglt) (BgL_callerz00_1568);
							{	/* Globalize/gn.scm 145 */
								obj_t BgL_method3673z00_2033;

								{	/* Globalize/gn.scm 145 */
									BgL_objectz00_bglt BgL_objz00_2034;

									BgL_objz00_2034 = (BgL_objectz00_bglt) (BgL_arg3838z00_1575);
									{	/* Globalize/gn.scm 145 */
										long BgL_objzd2classzd2numz00_2035;

										BgL_objzd2classzd2numz00_2035 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2034);
										{	/* Globalize/gn.scm 145 */
											obj_t BgL_arg2643z00_2036;

											BgL_arg2643z00_2036 =
												PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
												(int) (((long) 1)));
											{	/* Globalize/gn.scm 145 */
												obj_t BgL_arrayz00_2038;

												int BgL_offsetz00_2039;

												BgL_arrayz00_2038 = BgL_arg2643z00_2036;
												BgL_offsetz00_2039 =
													(int) (BgL_objzd2classzd2numz00_2035);
												{	/* Globalize/gn.scm 145 */
													long BgL_offsetz00_2040;

													BgL_offsetz00_2040 =
														((long) (BgL_offsetz00_2039) - OBJECT_TYPE);
													{	/* Globalize/gn.scm 145 */
														long BgL_modz00_2041;

														{	/* Globalize/gn.scm 145 */
															int BgL_arg2645z00_2042;

															BgL_arg2645z00_2042 = (int) (((long) 16));
															{	/* Globalize/gn.scm 145 */
																long BgL_auxz00_3456;

																BgL_auxz00_3456 = (long) (BgL_arg2645z00_2042);
																BgL_modz00_2041 =
																	(BgL_offsetz00_2040 / BgL_auxz00_3456);
														}}
														{	/* Globalize/gn.scm 145 */
															long BgL_restz00_2043;

															{	/* Globalize/gn.scm 145 */
																int BgL_arg2644z00_2044;

																BgL_arg2644z00_2044 = (int) (((long) 16));
																{	/* Globalize/gn.scm 145 */
																	long BgL_auxz00_3460;

																	BgL_auxz00_3460 =
																		(long) (BgL_arg2644z00_2044);
																	BgL_restz00_2043 =
																		(BgL_offsetz00_2040 % BgL_auxz00_3460);
															}}
															{	/* Globalize/gn.scm 145 */

																BgL_method3673z00_2033 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2038,
																		(int) (BgL_modz00_2041)),
																	(int) (BgL_restz00_2043));
								}}}}}}}}
								BgL_arg3837z00_1574 =
									PROCEDURE_ENTRY(BgL_method3673z00_2033)
									(BgL_method3673z00_2033, (obj_t) (BgL_arg3838z00_1575),
									(obj_t) (BgL_callerz00_2031), BgL_arg3839z00_1576, BEOA);
					}}}
					{	/* Globalize/gn.scm 145 */
						BgL_variablez00_bglt BgL_callerz00_2059;

						BgL_callerz00_2059 = (BgL_variablez00_bglt) (BgL_callerz00_1568);
						{	/* Globalize/gn.scm 145 */
							obj_t BgL_method3673z00_2061;

							{	/* Globalize/gn.scm 145 */
								BgL_objectz00_bglt BgL_objz00_2062;

								BgL_objz00_2062 = (BgL_objectz00_bglt) (BgL_arg3836z00_1573);
								{	/* Globalize/gn.scm 145 */
									long BgL_objzd2classzd2numz00_2063;

									BgL_objzd2classzd2numz00_2063 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2062);
									{	/* Globalize/gn.scm 145 */
										obj_t BgL_arg2643z00_2064;

										BgL_arg2643z00_2064 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 145 */
											obj_t BgL_arrayz00_2066;

											int BgL_offsetz00_2067;

											BgL_arrayz00_2066 = BgL_arg2643z00_2064;
											BgL_offsetz00_2067 =
												(int) (BgL_objzd2classzd2numz00_2063);
											{	/* Globalize/gn.scm 145 */
												long BgL_offsetz00_2068;

												BgL_offsetz00_2068 =
													((long) (BgL_offsetz00_2067) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 145 */
													long BgL_modz00_2069;

													{	/* Globalize/gn.scm 145 */
														int BgL_arg2645z00_2070;

														BgL_arg2645z00_2070 = (int) (((long) 16));
														{	/* Globalize/gn.scm 145 */
															long BgL_auxz00_3480;

															BgL_auxz00_3480 = (long) (BgL_arg2645z00_2070);
															BgL_modz00_2069 =
																(BgL_offsetz00_2068 / BgL_auxz00_3480);
													}}
													{	/* Globalize/gn.scm 145 */
														long BgL_restz00_2071;

														{	/* Globalize/gn.scm 145 */
															int BgL_arg2644z00_2072;

															BgL_arg2644z00_2072 = (int) (((long) 16));
															{	/* Globalize/gn.scm 145 */
																long BgL_auxz00_3484;

																BgL_auxz00_3484 = (long) (BgL_arg2644z00_2072);
																BgL_restz00_2071 =
																	(BgL_offsetz00_2068 % BgL_auxz00_3484);
														}}
														{	/* Globalize/gn.scm 145 */

															BgL_method3673z00_2061 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2066,
																	(int) (BgL_modz00_2069)),
																(int) (BgL_restz00_2071));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_2061) (BgL_method3673z00_2061,
								(obj_t) (BgL_arg3836z00_1573),
								(obj_t) (BgL_callerz00_2059), BgL_arg3837z00_1574, BEOA);
						}
					}
				}
			}
		}
	}



/* E-setq3695 */
	obj_t BGl_Ezd2setq3695zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2652,
		obj_t BgL_nodez00_2653, obj_t BgL_callerz00_2654, obj_t BgL_gz00_2655)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 136 */
			{
				BgL_setqz00_bglt BgL_nodez00_1558;

				obj_t BgL_callerz00_1559;

				obj_t BgL_gz00_1560;

				BgL_nodez00_1558 = (BgL_setqz00_bglt) (BgL_nodez00_2653);
				BgL_callerz00_1559 = BgL_callerz00_2654;
				BgL_gz00_1560 = BgL_gz00_2655;
				{	/* Globalize/gn.scm 137 */
					BgL_nodez00_bglt BgL_arg3834z00_1969;

					BgL_arg3834z00_1969 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1558))->BgL_valuez00);
					{	/* Globalize/gn.scm 137 */
						BgL_variablez00_bglt BgL_callerz00_1972;

						BgL_callerz00_1972 = (BgL_variablez00_bglt) (BgL_callerz00_1559);
						{	/* Globalize/gn.scm 137 */
							obj_t BgL_method3673z00_1974;

							{	/* Globalize/gn.scm 137 */
								BgL_objectz00_bglt BgL_objz00_1975;

								BgL_objz00_1975 = (BgL_objectz00_bglt) (BgL_arg3834z00_1969);
								{	/* Globalize/gn.scm 137 */
									long BgL_objzd2classzd2numz00_1976;

									BgL_objzd2classzd2numz00_1976 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1975);
									{	/* Globalize/gn.scm 137 */
										obj_t BgL_arg2643z00_1977;

										BgL_arg2643z00_1977 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 137 */
											obj_t BgL_arrayz00_1979;

											int BgL_offsetz00_1980;

											BgL_arrayz00_1979 = BgL_arg2643z00_1977;
											BgL_offsetz00_1980 =
												(int) (BgL_objzd2classzd2numz00_1976);
											{	/* Globalize/gn.scm 137 */
												long BgL_offsetz00_1981;

												BgL_offsetz00_1981 =
													((long) (BgL_offsetz00_1980) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 137 */
													long BgL_modz00_1982;

													{	/* Globalize/gn.scm 137 */
														int BgL_arg2645z00_1983;

														BgL_arg2645z00_1983 = (int) (((long) 16));
														{	/* Globalize/gn.scm 137 */
															long BgL_auxz00_3506;

															BgL_auxz00_3506 = (long) (BgL_arg2645z00_1983);
															BgL_modz00_1982 =
																(BgL_offsetz00_1981 / BgL_auxz00_3506);
													}}
													{	/* Globalize/gn.scm 137 */
														long BgL_restz00_1984;

														{	/* Globalize/gn.scm 137 */
															int BgL_arg2644z00_1985;

															BgL_arg2644z00_1985 = (int) (((long) 16));
															{	/* Globalize/gn.scm 137 */
																long BgL_auxz00_3510;

																BgL_auxz00_3510 = (long) (BgL_arg2644z00_1985);
																BgL_restz00_1984 =
																	(BgL_offsetz00_1981 % BgL_auxz00_3510);
														}}
														{	/* Globalize/gn.scm 137 */

															BgL_method3673z00_1974 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1979,
																	(int) (BgL_modz00_1982)),
																(int) (BgL_restz00_1984));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_1974) (BgL_method3673z00_1974,
								(obj_t) (BgL_arg3834z00_1969),
								(obj_t) (BgL_callerz00_1972), BgL_gz00_1560, BEOA);
						}
					}
				}
			}
		}
	}



/* E-cast3693 */
	obj_t BGl_Ezd2cast3693zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2656,
		obj_t BgL_nodez00_2657, obj_t BgL_callerz00_2658, obj_t BgL_gz00_2659)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 129 */
			{
				BgL_castz00_bglt BgL_nodez00_1549;

				obj_t BgL_callerz00_1550;

				obj_t BgL_gz00_1551;

				BgL_nodez00_1549 = (BgL_castz00_bglt) (BgL_nodez00_2657);
				BgL_callerz00_1550 = BgL_callerz00_2658;
				BgL_gz00_1551 = BgL_gz00_2659;
				{	/* Globalize/gn.scm 130 */
					BgL_nodez00_bglt BgL_arg3832z00_1938;

					BgL_arg3832z00_1938 =
						(((BgL_castz00_bglt) CREF(BgL_nodez00_1549))->BgL_argz00);
					{	/* Globalize/gn.scm 130 */
						BgL_variablez00_bglt BgL_callerz00_1941;

						BgL_callerz00_1941 = (BgL_variablez00_bglt) (BgL_callerz00_1550);
						{	/* Globalize/gn.scm 130 */
							obj_t BgL_method3673z00_1943;

							{	/* Globalize/gn.scm 130 */
								BgL_objectz00_bglt BgL_objz00_1944;

								BgL_objz00_1944 = (BgL_objectz00_bglt) (BgL_arg3832z00_1938);
								{	/* Globalize/gn.scm 130 */
									long BgL_objzd2classzd2numz00_1945;

									BgL_objzd2classzd2numz00_1945 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1944);
									{	/* Globalize/gn.scm 130 */
										obj_t BgL_arg2643z00_1946;

										BgL_arg2643z00_1946 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 130 */
											obj_t BgL_arrayz00_1948;

											int BgL_offsetz00_1949;

											BgL_arrayz00_1948 = BgL_arg2643z00_1946;
											BgL_offsetz00_1949 =
												(int) (BgL_objzd2classzd2numz00_1945);
											{	/* Globalize/gn.scm 130 */
												long BgL_offsetz00_1950;

												BgL_offsetz00_1950 =
													((long) (BgL_offsetz00_1949) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 130 */
													long BgL_modz00_1951;

													{	/* Globalize/gn.scm 130 */
														int BgL_arg2645z00_1952;

														BgL_arg2645z00_1952 = (int) (((long) 16));
														{	/* Globalize/gn.scm 130 */
															long BgL_auxz00_3532;

															BgL_auxz00_3532 = (long) (BgL_arg2645z00_1952);
															BgL_modz00_1951 =
																(BgL_offsetz00_1950 / BgL_auxz00_3532);
													}}
													{	/* Globalize/gn.scm 130 */
														long BgL_restz00_1953;

														{	/* Globalize/gn.scm 130 */
															int BgL_arg2644z00_1954;

															BgL_arg2644z00_1954 = (int) (((long) 16));
															{	/* Globalize/gn.scm 130 */
																long BgL_auxz00_3536;

																BgL_auxz00_3536 = (long) (BgL_arg2644z00_1954);
																BgL_restz00_1953 =
																	(BgL_offsetz00_1950 % BgL_auxz00_3536);
														}}
														{	/* Globalize/gn.scm 130 */

															BgL_method3673z00_1943 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1948,
																	(int) (BgL_modz00_1951)),
																(int) (BgL_restz00_1953));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_1943) (BgL_method3673z00_1943,
								(obj_t) (BgL_arg3832z00_1938),
								(obj_t) (BgL_callerz00_1941), BgL_gz00_1551, BEOA);
						}
					}
				}
			}
		}
	}



/* E-extern3691 */
	obj_t BGl_Ezd2extern3691zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2660,
		obj_t BgL_nodez00_2661, obj_t BgL_callerz00_2662, obj_t BgL_gz00_2663)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 122 */
			{
				BgL_externz00_bglt BgL_nodez00_1540;

				obj_t BgL_callerz00_1541;

				obj_t BgL_gz00_1542;

				BgL_nodez00_1540 = (BgL_externz00_bglt) (BgL_nodez00_2661);
				BgL_callerz00_1541 = BgL_callerz00_2662;
				BgL_gz00_1542 = BgL_gz00_2663;
				{	/* Globalize/gn.scm 123 */
					obj_t BgL_arg3830z00_1935;

					BgL_arg3830z00_1935 =
						(((BgL_externz00_bglt) CREF(BgL_nodez00_1540))->BgL_exprza2za2);
					return
						BGl_Eza2za2zzglobaliza7e_gnza7(BgL_arg3830z00_1935,
						BgL_callerz00_1541, BgL_gz00_1542);
				}
			}
		}
	}



/* E-funcall3689 */
	obj_t BGl_Ezd2funcall3689zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2664,
		obj_t BgL_nodez00_2665, obj_t BgL_callerz00_2666, obj_t BgL_gz00_2667)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 115 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1529;

				obj_t BgL_callerz00_1530;

				obj_t BgL_gz00_1531;

				BgL_nodez00_1529 = (BgL_funcallz00_bglt) (BgL_nodez00_2665);
				BgL_callerz00_1530 = BgL_callerz00_2666;
				BgL_gz00_1531 = BgL_gz00_2667;
				{	/* Globalize/gn.scm 116 */
					BgL_nodez00_bglt BgL_arg3826z00_1901;

					obj_t BgL_arg3827z00_1902;

					BgL_arg3826z00_1901 =
						(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1529))->BgL_funz00);
					{	/* Globalize/gn.scm 116 */
						obj_t BgL_arg3828z00_1903;

						BgL_arg3828z00_1903 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1529))->BgL_argsz00);
						BgL_arg3827z00_1902 =
							BGl_Eza2za2zzglobaliza7e_gnza7(BgL_arg3828z00_1903,
							BgL_callerz00_1530, BgL_gz00_1531);
					}
					{	/* Globalize/gn.scm 116 */
						BgL_variablez00_bglt BgL_callerz00_1907;

						BgL_callerz00_1907 = (BgL_variablez00_bglt) (BgL_callerz00_1530);
						{	/* Globalize/gn.scm 116 */
							obj_t BgL_method3673z00_1909;

							{	/* Globalize/gn.scm 116 */
								BgL_objectz00_bglt BgL_objz00_1910;

								BgL_objz00_1910 = (BgL_objectz00_bglt) (BgL_arg3826z00_1901);
								{	/* Globalize/gn.scm 116 */
									long BgL_objzd2classzd2numz00_1911;

									BgL_objzd2classzd2numz00_1911 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1910);
									{	/* Globalize/gn.scm 116 */
										obj_t BgL_arg2643z00_1912;

										BgL_arg2643z00_1912 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 116 */
											obj_t BgL_arrayz00_1914;

											int BgL_offsetz00_1915;

											BgL_arrayz00_1914 = BgL_arg2643z00_1912;
											BgL_offsetz00_1915 =
												(int) (BgL_objzd2classzd2numz00_1911);
											{	/* Globalize/gn.scm 116 */
												long BgL_offsetz00_1916;

												BgL_offsetz00_1916 =
													((long) (BgL_offsetz00_1915) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 116 */
													long BgL_modz00_1917;

													{	/* Globalize/gn.scm 116 */
														int BgL_arg2645z00_1918;

														BgL_arg2645z00_1918 = (int) (((long) 16));
														{	/* Globalize/gn.scm 116 */
															long BgL_auxz00_3563;

															BgL_auxz00_3563 = (long) (BgL_arg2645z00_1918);
															BgL_modz00_1917 =
																(BgL_offsetz00_1916 / BgL_auxz00_3563);
													}}
													{	/* Globalize/gn.scm 116 */
														long BgL_restz00_1919;

														{	/* Globalize/gn.scm 116 */
															int BgL_arg2644z00_1920;

															BgL_arg2644z00_1920 = (int) (((long) 16));
															{	/* Globalize/gn.scm 116 */
																long BgL_auxz00_3567;

																BgL_auxz00_3567 = (long) (BgL_arg2644z00_1920);
																BgL_restz00_1919 =
																	(BgL_offsetz00_1916 % BgL_auxz00_3567);
														}}
														{	/* Globalize/gn.scm 116 */

															BgL_method3673z00_1909 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1914,
																	(int) (BgL_modz00_1917)),
																(int) (BgL_restz00_1919));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_1909) (BgL_method3673z00_1909,
								(obj_t) (BgL_arg3826z00_1901),
								(obj_t) (BgL_callerz00_1907), BgL_arg3827z00_1902, BEOA);
						}
					}
				}
			}
		}
	}



/* E-app-ly3687 */
	obj_t BGl_Ezd2appzd2ly3687z00zzglobaliza7e_gnza7(obj_t BgL_envz00_2668,
		obj_t BgL_nodez00_2669, obj_t BgL_callerz00_2670, obj_t BgL_gz00_2671)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 108 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1518;

				obj_t BgL_callerz00_1519;

				obj_t BgL_gz00_1520;

				BgL_nodez00_1518 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2669);
				BgL_callerz00_1519 = BgL_callerz00_2670;
				BgL_gz00_1520 = BgL_gz00_2671;
				{	/* Globalize/gn.scm 109 */
					BgL_nodez00_bglt BgL_arg3822z00_1839;

					obj_t BgL_arg3823z00_1840;

					BgL_arg3822z00_1839 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1518))->BgL_funz00);
					{	/* Globalize/gn.scm 109 */
						BgL_nodez00_bglt BgL_arg3824z00_1841;

						BgL_arg3824z00_1841 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1518))->BgL_argz00);
						{	/* Globalize/gn.scm 109 */
							BgL_variablez00_bglt BgL_callerz00_1845;

							BgL_callerz00_1845 = (BgL_variablez00_bglt) (BgL_callerz00_1519);
							{	/* Globalize/gn.scm 109 */
								obj_t BgL_method3673z00_1847;

								{	/* Globalize/gn.scm 109 */
									BgL_objectz00_bglt BgL_objz00_1848;

									BgL_objz00_1848 = (BgL_objectz00_bglt) (BgL_arg3824z00_1841);
									{	/* Globalize/gn.scm 109 */
										long BgL_objzd2classzd2numz00_1849;

										BgL_objzd2classzd2numz00_1849 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1848);
										{	/* Globalize/gn.scm 109 */
											obj_t BgL_arg2643z00_1850;

											BgL_arg2643z00_1850 =
												PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
												(int) (((long) 1)));
											{	/* Globalize/gn.scm 109 */
												obj_t BgL_arrayz00_1852;

												int BgL_offsetz00_1853;

												BgL_arrayz00_1852 = BgL_arg2643z00_1850;
												BgL_offsetz00_1853 =
													(int) (BgL_objzd2classzd2numz00_1849);
												{	/* Globalize/gn.scm 109 */
													long BgL_offsetz00_1854;

													BgL_offsetz00_1854 =
														((long) (BgL_offsetz00_1853) - OBJECT_TYPE);
													{	/* Globalize/gn.scm 109 */
														long BgL_modz00_1855;

														{	/* Globalize/gn.scm 109 */
															int BgL_arg2645z00_1856;

															BgL_arg2645z00_1856 = (int) (((long) 16));
															{	/* Globalize/gn.scm 109 */
																long BgL_auxz00_3590;

																BgL_auxz00_3590 = (long) (BgL_arg2645z00_1856);
																BgL_modz00_1855 =
																	(BgL_offsetz00_1854 / BgL_auxz00_3590);
														}}
														{	/* Globalize/gn.scm 109 */
															long BgL_restz00_1857;

															{	/* Globalize/gn.scm 109 */
																int BgL_arg2644z00_1858;

																BgL_arg2644z00_1858 = (int) (((long) 16));
																{	/* Globalize/gn.scm 109 */
																	long BgL_auxz00_3594;

																	BgL_auxz00_3594 =
																		(long) (BgL_arg2644z00_1858);
																	BgL_restz00_1857 =
																		(BgL_offsetz00_1854 % BgL_auxz00_3594);
															}}
															{	/* Globalize/gn.scm 109 */

																BgL_method3673z00_1847 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1852,
																		(int) (BgL_modz00_1855)),
																	(int) (BgL_restz00_1857));
								}}}}}}}}
								BgL_arg3823z00_1840 =
									PROCEDURE_ENTRY(BgL_method3673z00_1847)
									(BgL_method3673z00_1847, (obj_t) (BgL_arg3824z00_1841),
									(obj_t) (BgL_callerz00_1845), BgL_gz00_1520, BEOA);
					}}}
					{	/* Globalize/gn.scm 109 */
						BgL_variablez00_bglt BgL_callerz00_1873;

						BgL_callerz00_1873 = (BgL_variablez00_bglt) (BgL_callerz00_1519);
						{	/* Globalize/gn.scm 109 */
							obj_t BgL_method3673z00_1875;

							{	/* Globalize/gn.scm 109 */
								BgL_objectz00_bglt BgL_objz00_1876;

								BgL_objz00_1876 = (BgL_objectz00_bglt) (BgL_arg3822z00_1839);
								{	/* Globalize/gn.scm 109 */
									long BgL_objzd2classzd2numz00_1877;

									BgL_objzd2classzd2numz00_1877 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1876);
									{	/* Globalize/gn.scm 109 */
										obj_t BgL_arg2643z00_1878;

										BgL_arg2643z00_1878 =
											PROCEDURE_REF(BGl_Ezd2envzd2zzglobaliza7e_gnza7,
											(int) (((long) 1)));
										{	/* Globalize/gn.scm 109 */
											obj_t BgL_arrayz00_1880;

											int BgL_offsetz00_1881;

											BgL_arrayz00_1880 = BgL_arg2643z00_1878;
											BgL_offsetz00_1881 =
												(int) (BgL_objzd2classzd2numz00_1877);
											{	/* Globalize/gn.scm 109 */
												long BgL_offsetz00_1882;

												BgL_offsetz00_1882 =
													((long) (BgL_offsetz00_1881) - OBJECT_TYPE);
												{	/* Globalize/gn.scm 109 */
													long BgL_modz00_1883;

													{	/* Globalize/gn.scm 109 */
														int BgL_arg2645z00_1884;

														BgL_arg2645z00_1884 = (int) (((long) 16));
														{	/* Globalize/gn.scm 109 */
															long BgL_auxz00_3614;

															BgL_auxz00_3614 = (long) (BgL_arg2645z00_1884);
															BgL_modz00_1883 =
																(BgL_offsetz00_1882 / BgL_auxz00_3614);
													}}
													{	/* Globalize/gn.scm 109 */
														long BgL_restz00_1885;

														{	/* Globalize/gn.scm 109 */
															int BgL_arg2644z00_1886;

															BgL_arg2644z00_1886 = (int) (((long) 16));
															{	/* Globalize/gn.scm 109 */
																long BgL_auxz00_3618;

																BgL_auxz00_3618 = (long) (BgL_arg2644z00_1886);
																BgL_restz00_1885 =
																	(BgL_offsetz00_1882 % BgL_auxz00_3618);
														}}
														{	/* Globalize/gn.scm 109 */

															BgL_method3673z00_1875 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1880,
																	(int) (BgL_modz00_1883)),
																(int) (BgL_restz00_1885));
							}}}}}}}}
							return
								PROCEDURE_ENTRY(BgL_method3673z00_1875) (BgL_method3673z00_1875,
								(obj_t) (BgL_arg3822z00_1839),
								(obj_t) (BgL_callerz00_1873), BgL_arg3823z00_1840, BEOA);
						}
					}
				}
			}
		}
	}



/* E-app3685 */
	obj_t BGl_Ezd2app3685zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2672,
		obj_t BgL_nodez00_2673, obj_t BgL_callerz00_2674, obj_t BgL_gz00_2675)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 100 */
			{
				BgL_appz00_bglt BgL_nodez00_1507;

				obj_t BgL_callerz00_1508;

				obj_t BgL_gz00_1509;

				BgL_nodez00_1507 = (BgL_appz00_bglt) (BgL_nodez00_2673);
				BgL_callerz00_1508 = BgL_callerz00_2674;
				BgL_gz00_1509 = BgL_gz00_2675;
				{	/* Globalize/gn.scm 101 */
					BgL_variablez00_bglt BgL_arg3818z00_1832;

					{	/* Globalize/gn.scm 101 */
						BgL_varz00_bglt BgL_obj2155z00_1836;

						BgL_obj2155z00_1836 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1507))->BgL_funz00);
						BgL_arg3818z00_1832 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1836))->BgL_variablez00);
					}
					BGl_savezd2appz12zc0zzglobaliza7e_gnza7(BgL_callerz00_1508,
						BgL_arg3818z00_1832);
				}
				{	/* Globalize/gn.scm 101 */
					obj_t BgL_arg3820z00_1834;

					BgL_arg3820z00_1834 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1507))->BgL_argsz00);
					return
						BGl_Eza2za2zzglobaliza7e_gnza7(BgL_arg3820z00_1834,
						BgL_callerz00_1508, BgL_gz00_1509);
				}
			}
		}
	}



/* E-sequence3683 */
	obj_t BGl_Ezd2sequence3683zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2676,
		obj_t BgL_nodez00_2677, obj_t BgL_callerz00_2678, obj_t BgL_gz00_2679)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 94 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1499;

				obj_t BgL_callerz00_1500;

				obj_t BgL_gz00_1501;

				BgL_nodez00_1499 = (BgL_sequencez00_bglt) (BgL_nodez00_2677);
				BgL_callerz00_1500 = BgL_callerz00_2678;
				BgL_gz00_1501 = BgL_gz00_2679;
				{	/* Globalize/gn.scm 95 */
					obj_t BgL_arg3816z00_1829;

					BgL_arg3816z00_1829 =
						(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1499))->BgL_nodesz00);
					return
						BGl_Eza2za2zzglobaliza7e_gnza7(BgL_arg3816z00_1829,
						BgL_callerz00_1500, BgL_gz00_1501);
				}
			}
		}
	}



/* E-closure3681 */
	obj_t BGl_Ezd2closure3681zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2680,
		obj_t BgL_nodez00_2681, obj_t BgL_callerz00_2682, obj_t BgL_gz00_2683)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 79 */
			{
				BgL_closurez00_bglt BgL_nodez00_1485;

				BgL_variablez00_bglt BgL_callerz00_1486;

				obj_t BgL_gz00_1487;

				BgL_nodez00_1485 = (BgL_closurez00_bglt) (BgL_nodez00_2681);
				BgL_callerz00_1486 = (BgL_variablez00_bglt) (BgL_callerz00_2682);
				BgL_gz00_1487 = BgL_gz00_2683;
				{	/* Globalize/gn.scm 80 */
					BgL_variablez00_bglt BgL_varz00_1490;

					{
						BgL_varz00_bglt BgL_auxz00_3639;

						BgL_auxz00_3639 = (BgL_varz00_bglt) (BgL_nodez00_1485);
						BgL_varz00_1490 =
							(((BgL_varz00_bglt) CREF(BgL_auxz00_3639))->BgL_variablez00);
					}
					BGl_savezd2funz12zc0zzglobaliza7e_gnza7(BgL_callerz00_1486,
						BgL_varz00_1490);
					{	/* Globalize/gn.scm 82 */
						bool_t BgL_testz00_3643;

						{	/* Globalize/gn.scm 82 */
							bool_t BgL_testz00_3644;

							{	/* Globalize/gn.scm 82 */
								obj_t BgL_obj1812z00_1822;

								BgL_obj1812z00_1822 = (obj_t) (BgL_varz00_1490);
								BgL_testz00_3644 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1812z00_1822,
									BGl_localz00zzast_varz00);
							}
							if (BgL_testz00_3644)
								{	/* Globalize/gn.scm 84 */
									bool_t BgL_testz00_3647;

									{	/* Globalize/gn.scm 84 */
										BgL_localzf2ginfozf2_bglt BgL_obj3520z00_1823;

										BgL_obj3520z00_1823 =
											(BgL_localzf2ginfozf2_bglt) (
											(BgL_localz00_bglt) (BgL_varz00_1490));
										{
											obj_t BgL_auxz00_3650;

											{	/* Globalize/gn.scm 84 */
												BgL_objectz00_bglt BgL_auxz00_3651;

												BgL_auxz00_3651 =
													(BgL_objectz00_bglt) (BgL_obj3520z00_1823);
												BgL_auxz00_3650 = BGL_OBJECT_WIDENING(BgL_auxz00_3651);
											}
											BgL_testz00_3647 =
												(((BgL_localzf2ginfozf2_bglt) CREF(BgL_auxz00_3650))->
												BgL_escapezf3zf3);
										}
									}
									if (BgL_testz00_3647)
										{	/* Globalize/gn.scm 85 */
											bool_t BgL_testz00_3655;

											{	/* Globalize/gn.scm 85 */
												BgL_sfunzf2ginfozf2_bglt BgL_obj3323z00_1825;

												BgL_obj3323z00_1825 =
													(BgL_sfunzf2ginfozf2_bglt) (
													(((BgL_variablez00_bglt) CREF(BgL_varz00_1490))->
														BgL_valuez00));
												{
													obj_t BgL_auxz00_3658;

													{	/* Globalize/gn.scm 85 */
														BgL_objectz00_bglt BgL_auxz00_3659;

														BgL_auxz00_3659 =
															(BgL_objectz00_bglt) (BgL_obj3323z00_1825);
														BgL_auxz00_3658 =
															BGL_OBJECT_WIDENING(BgL_auxz00_3659);
													}
													BgL_testz00_3655 =
														(((BgL_sfunzf2ginfozf2_bglt)
															CREF(BgL_auxz00_3658))->BgL_gzf3zf3);
												}
											}
											if (BgL_testz00_3655)
												{	/* Globalize/gn.scm 85 */
													BgL_testz00_3643 = ((bool_t) 0);
												}
											else
												{	/* Globalize/gn.scm 85 */
													BgL_testz00_3643 = ((bool_t) 1);
												}
										}
									else
										{	/* Globalize/gn.scm 84 */
											BgL_testz00_3643 = ((bool_t) 0);
										}
								}
							else
								{	/* Globalize/gn.scm 82 */
									BgL_testz00_3643 = ((bool_t) 0);
								}
						}
						if (BgL_testz00_3643)
							{	/* Globalize/gn.scm 82 */
								{	/* Globalize/gn.scm 87 */
									BgL_valuez00_bglt BgL_arg3810z00_1492;

									BgL_arg3810z00_1492 =
										(((BgL_variablez00_bglt) CREF(BgL_varz00_1490))->
										BgL_valuez00);
									{	/* Globalize/gn.scm 87 */
										BgL_sfunzf2ginfozf2_bglt BgL_obj3325z00_1827;

										bool_t BgL_val3324z00_1828;

										BgL_obj3325z00_1827 =
											(BgL_sfunzf2ginfozf2_bglt) (BgL_arg3810z00_1492);
										BgL_val3324z00_1828 = ((bool_t) 1);
										{
											obj_t BgL_auxz00_3665;

											{	/* Globalize/gn.scm 87 */
												BgL_objectz00_bglt BgL_auxz00_3666;

												BgL_auxz00_3666 =
													(BgL_objectz00_bglt) (BgL_obj3325z00_1827);
												BgL_auxz00_3665 = BGL_OBJECT_WIDENING(BgL_auxz00_3666);
											}
											((((BgL_sfunzf2ginfozf2_bglt) CREF(BgL_auxz00_3665))->
													BgL_gzf3zf3) =
												((bool_t) BgL_val3324z00_1828), BUNSPEC);
										}
									}
								}
								return
									MAKE_PAIR(
									(obj_t) (
										(BgL_localz00_bglt) (BgL_varz00_1490)), BgL_gz00_1487);
							}
						else
							{	/* Globalize/gn.scm 82 */
								return BgL_gz00_1487;
							}
					}
				}
			}
		}
	}



/* E-var3679 */
	obj_t BGl_Ezd2var3679zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2684,
		obj_t BgL_nodez00_2685, obj_t BgL_callerz00_2686, obj_t BgL_gz00_2687)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 73 */
			return BgL_gz00_2687;
		}
	}



/* E-kwote3677 */
	obj_t BGl_Ezd2kwote3677zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2688,
		obj_t BgL_nodez00_2689, obj_t BgL_callerz00_2690, obj_t BgL_gz00_2691)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 67 */
			return BgL_gz00_2691;
		}
	}



/* E-atom3675 */
	obj_t BGl_Ezd2atom3675zd2zzglobaliza7e_gnza7(obj_t BgL_envz00_2692,
		obj_t BgL_nodez00_2693, obj_t BgL_callerz00_2694, obj_t BgL_gz00_2695)
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 61 */
			return BgL_gz00_2695;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_gnza7()
	{
		AN_OBJECT;
		{	/* Globalize/gn.scm 23 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_globaliza7ez00(((long)
					426556099), BSTRING_TO_STRING(BGl_string3968z00zzglobaliza7e_gnza7));
		}
	}

#ifdef __cplusplus
}
#endif
