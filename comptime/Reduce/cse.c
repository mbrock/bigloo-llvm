/*===========================================================================*/
/*   (Reduce/cse.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/cse.scm)*/
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

	typedef struct BgL_closurez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}                 *BgL_closurez00_bglt;

	typedef struct BgL_kwotez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}               *BgL_kwotez00_bglt;

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


	static obj_t BGl_nodezd2csez12zd2jumpzd2exzd2it3380z12zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_findzd2stackzd2zzreduce_csez00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_nodezd2csez12zd2atom3348z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2csez12zd2extern3363z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_nodezd2csez12zd2default3344z12zzreduce_csez00(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_nodezd2csez12zd2appzd2ly3359zc0zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_csez00();
	static long BGl_za2csezd2removedza2zd2zzreduce_csez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static obj_t BGl_nodezd2csez12zd2funcall3361z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_nodezd2cseza2z12z62zzreduce_csez00(obj_t, obj_t);
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzreduce_samez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzreduce_csez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd2csez12zd2sequence3357z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_bglt,
		BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2csez12zd2boxzd2setz123384zd2zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_nodezd2csez12zd2cast3365z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2csez12zd2kwote3351z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_nodezd2csez12zd2setzd2exzd2it3378z12zzreduce_csez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2csez12zd2select3374z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_nodezd2csez12zd2boxzd2ref3386zc0zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_csez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_nodezd2csez12zd2setq3367z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_csez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzreduce_csez00();
	static obj_t BGl_nodezd2csez12zd2makezd2box3382zc0zzreduce_csez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2csez12zd2app3388z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_nodezd2csez12zd2conditiona3370z12zzreduce_csez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_csez00();
	BGL_EXPORTED_DECL obj_t BGl_nodezd2csez12zc0zzreduce_csez00(BgL_nodez00_bglt,
		obj_t);
	static obj_t BGl_nodezd2csez12zd2letzd2fun3376zc0zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2csez12zd2closure3355z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2csez12zd2fail3372z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2csez12zd2letzd2var3390zc0zzreduce_csez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd2csez12zc0zzreduce_csez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2csez12zd2var3353z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__nodezd2csez12zd2default3344z12zzreduce_csez00(obj_t, obj_t,
		obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl__reducezd2csez12zc0zzreduce_csez00(obj_t, obj_t);
	static obj_t BGl__nodezd2csez12zc0zzreduce_csez00(obj_t, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_csez00();
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
		BgL_bgl__nodeza7d2cseza712za7c3642za7, BGl__nodezd2csez12zc0zzreduce_csez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2csez12zd2default3344zd2envzc0zzreduce_csez00,
		BgL_bgl__nodeza7d2cseza712za7d3643za7,
		BGl__nodezd2csez12zd2default3344z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3617z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23644za7,
		BGl_nodezd2csez12zd2atom3348z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3618z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23645za7,
		BGl_nodezd2csez12zd2kwote3351z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3620z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23646za7,
		BGl_nodezd2csez12zd2closure3355z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3619z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23647za7,
		BGl_nodezd2csez12zd2var3353z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3621z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23648za7,
		BGl_nodezd2csez12zd2sequence3357z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3622z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23649za7,
		BGl_nodezd2csez12zd2appzd2ly3359zc0zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3623z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23650za7,
		BGl_nodezd2csez12zd2funcall3361z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3624z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23651za7,
		BGl_nodezd2csez12zd2extern3363z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3625z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23652za7,
		BGl_nodezd2csez12zd2cast3365z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3626z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23653za7,
		BGl_nodezd2csez12zd2setq3367z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3627z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23654za7,
		BGl_nodezd2csez12zd2conditiona3370z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3628z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23655za7,
		BGl_nodezd2csez12zd2fail3372z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3630z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23656za7,
		BGl_nodezd2csez12zd2letzd2fun3376zc0zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3629z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23657za7,
		BGl_nodezd2csez12zd2select3374z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3631z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23658za7,
		BGl_nodezd2csez12zd2setzd2exzd2it3378z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3632z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23659za7,
		BGl_nodezd2csez12zd2jumpzd2exzd2it3380z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3633z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23660za7,
		BGl_nodezd2csez12zd2makezd2box3382zc0zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3634z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23661za7,
		BGl_nodezd2csez12zd2boxzd2setz123384zd2zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3635z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23662za7,
		BGl_nodezd2csez12zd2boxzd2ref3386zc0zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3636z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23663za7,
		BGl_nodezd2csez12zd2app3388z12zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3637z00zzreduce_csez00,
		BgL_bgl_nodeza7d2cseza712za7d23664za7,
		BGl_nodezd2csez12zd2letzd2var3390zc0zzreduce_csez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2csez12zd2envz12zzreduce_csez00,
		BgL_bgl__reduceza7d2cseza7123665z00, BGl__reducezd2csez12zc0zzreduce_csez00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3613z00zzreduce_csez00,
		BgL_bgl_string3613za700za7za7r3666za7, "      cse                    ", 29);
	      DEFINE_STRING(BGl_string3614z00zzreduce_csez00,
		BgL_bgl_string3614za700za7za7r3667za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string3615z00zzreduce_csez00,
		BgL_bgl_string3615za700za7za7r3668za7, "node-cse!", 9);
	      DEFINE_STRING(BGl_string3616z00zzreduce_csez00,
		BgL_bgl_string3616za700za7za7r3669za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3638z00zzreduce_csez00,
		BgL_bgl_string3638za700za7za7r3670za7, "reduce_cse", 10);
	      DEFINE_STRING(BGl_string3639z00zzreduce_csez00,
		BgL_bgl_string3639za700za7za7r3671za7, "call read node-cse!-default3344 ",
		32);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_csez00(long
		BgL_checksumz00_2651, char *BgL_fromz00_2652)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_csez00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_csez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_csez00();
					BGl_cnstzd2initzd2zzreduce_csez00();
					BGl_importedzd2moduleszd2initz00zzreduce_csez00();
					BGl_genericzd2initzd2zzreduce_csez00();
					BGl_methodzd2initzd2zzreduce_csez00();
					BGl_toplevelzd2initzd2zzreduce_csez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_csez00()
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_cse");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_cse");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_csez00()
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			{	/* Reduce/cse.scm 15 */
				obj_t BgL_cportz00_2643;

				BgL_cportz00_2643 =
					bgl_open_input_string(BGl_string3639z00zzreduce_csez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2644;

					BgL_iz00_2644 = ((long) 2);
				BgL_loopz00_2645:
					if ((BgL_iz00_2644 == ((long) -1)))
						{	/* Reduce/cse.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/cse.scm 15 */
							{	/* Reduce/cse.scm 15 */
								obj_t BgL_arg3641z00_2647;

								{	/* Reduce/cse.scm 15 */

									{	/* Reduce/cse.scm 15 */
										obj_t BgL_locationz00_2649;

										BgL_locationz00_2649 = BBOOL(((bool_t) 0));
										{	/* Reduce/cse.scm 15 */

											BgL_arg3641z00_2647 =
												BGl_readz00zz__readerz00(BgL_cportz00_2643,
												BgL_locationz00_2649);
										}
									}
								}
								{	/* Reduce/cse.scm 15 */
									int BgL_auxz00_2672;

									BgL_auxz00_2672 = (int) (BgL_iz00_2644);
									CNST_TABLE_SET(BgL_auxz00_2672, BgL_arg3641z00_2647);
							}}
							{	/* Reduce/cse.scm 15 */
								int BgL_auxz00_2650;

								BgL_auxz00_2650 = (int) ((BgL_iz00_2644 - ((long) 1)));
								{
									long BgL_iz00_2677;

									BgL_iz00_2677 = (long) (BgL_auxz00_2650);
									BgL_iz00_2644 = BgL_iz00_2677;
									goto BgL_loopz00_2645;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_csez00()
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			BGl_za2csezd2removedza2zd2zzreduce_csez00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* reduce-cse! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2csez12zc0zzreduce_csez00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 34 */
			{	/* Reduce/cse.scm 35 */
				obj_t BgL_list3391z00_834;

				BgL_list3391z00_834 = MAKE_PAIR(BGl_string3613z00zzreduce_csez00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3391z00_834);
			}
			BGl_za2csezd2removedza2zd2zzreduce_csez00 = ((long) 0);
			{
				obj_t BgL_l3290z00_836;

				BgL_l3290z00_836 = BgL_globalsz00_1;
			BgL_zc3anonymousza33392ze3z83_837:
				if (PAIRP(BgL_l3290z00_836))
					{	/* Reduce/cse.scm 37 */
						{	/* Reduce/cse.scm 38 */
							obj_t BgL_globalz00_839;

							BgL_globalz00_839 = CAR(BgL_l3290z00_836);
							{	/* Reduce/cse.scm 38 */
								BgL_valuez00_bglt BgL_funz00_840;

								{
									BgL_variablez00_bglt BgL_auxz00_2685;

									BgL_auxz00_2685 = (BgL_variablez00_bglt) (BgL_globalz00_839);
									BgL_funz00_840 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2685))->
										BgL_valuez00);
								}
								{	/* Reduce/cse.scm 38 */
									obj_t BgL_nodez00_841;

									{
										BgL_sfunz00_bglt BgL_auxz00_2688;

										BgL_auxz00_2688 = (BgL_sfunz00_bglt) (BgL_funz00_840);
										BgL_nodez00_841 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2688))->BgL_bodyz00);
									}
									{	/* Reduce/cse.scm 39 */

										{	/* Reduce/cse.scm 40 */
											obj_t BgL_arg3394z00_842;

											{	/* Reduce/cse.scm 40 */
												obj_t BgL__z00_843;

												{	/* Reduce/cse.scm 41 */
													BgL_nodez00_bglt BgL_nodez00_1610;

													BgL_nodez00_1610 =
														(BgL_nodez00_bglt) (BgL_nodez00_841);
													{	/* Reduce/cse.scm 41 */
														obj_t BgL_method3345z00_1612;

														{	/* Reduce/cse.scm 41 */
															BgL_objectz00_bglt BgL_objz00_1613;

															BgL_objz00_1613 =
																(BgL_objectz00_bglt) (BgL_nodez00_1610);
															{	/* Reduce/cse.scm 41 */
																long BgL_objzd2classzd2numz00_1614;

																BgL_objzd2classzd2numz00_1614 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1613);
																{	/* Reduce/cse.scm 41 */
																	obj_t BgL_arg2643z00_1615;

																	BgL_arg2643z00_1615 =
																		PROCEDURE_REF
																		(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
																		(int) (((long) 1)));
																	{	/* Reduce/cse.scm 41 */
																		obj_t BgL_arrayz00_1617;

																		int BgL_offsetz00_1618;

																		BgL_arrayz00_1617 = BgL_arg2643z00_1615;
																		BgL_offsetz00_1618 =
																			(int) (BgL_objzd2classzd2numz00_1614);
																		{	/* Reduce/cse.scm 41 */
																			long BgL_offsetz00_1619;

																			BgL_offsetz00_1619 =
																				(
																				(long) (BgL_offsetz00_1618) -
																				OBJECT_TYPE);
																			{	/* Reduce/cse.scm 41 */
																				long BgL_modz00_1620;

																				{	/* Reduce/cse.scm 41 */
																					int BgL_arg2645z00_1621;

																					BgL_arg2645z00_1621 =
																						(int) (((long) 16));
																					{	/* Reduce/cse.scm 41 */
																						long BgL_auxz00_2700;

																						BgL_auxz00_2700 =
																							(long) (BgL_arg2645z00_1621);
																						BgL_modz00_1620 =
																							(BgL_offsetz00_1619 /
																							BgL_auxz00_2700);
																				}}
																				{	/* Reduce/cse.scm 41 */
																					long BgL_restz00_1622;

																					{	/* Reduce/cse.scm 41 */
																						int BgL_arg2644z00_1623;

																						BgL_arg2644z00_1623 =
																							(int) (((long) 16));
																						{	/* Reduce/cse.scm 41 */
																							long BgL_auxz00_2704;

																							BgL_auxz00_2704 =
																								(long) (BgL_arg2644z00_1623);
																							BgL_restz00_1622 =
																								(BgL_offsetz00_1619 %
																								BgL_auxz00_2704);
																					}}
																					{	/* Reduce/cse.scm 41 */

																						BgL_method3345z00_1612 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1617,
																								(int) (BgL_modz00_1620)),
																							(int) (BgL_restz00_1622));
														}}}}}}}}
														BgL__z00_843 =
															PROCEDURE_ENTRY(BgL_method3345z00_1612)
															(BgL_method3345z00_1612,
															(obj_t) (BgL_nodez00_1610), BNIL, BEOA);
												}}
												{	/* Reduce/cse.scm 40 */
													obj_t BgL_nodez00_844;

													{	/* Reduce/cse.scm 40 */
														int BgL_auxz00_2714;

														BgL_auxz00_2714 = (int) (((long) 1));
														BgL_nodez00_844 = BGL_MVALUES_VAL(BgL_auxz00_2714);
													}
													BgL_arg3394z00_842 = BgL_nodez00_844;
											}}
											{
												BgL_sfunz00_bglt BgL_auxz00_2717;

												BgL_auxz00_2717 = (BgL_sfunz00_bglt) (BgL_funz00_840);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2717))->
														BgL_bodyz00) =
													((obj_t) BgL_arg3394z00_842), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3290z00_2720;

							BgL_l3290z00_2720 = CDR(BgL_l3290z00_836);
							BgL_l3290z00_836 = BgL_l3290z00_2720;
							goto BgL_zc3anonymousza33392ze3z83_837;
						}
					}
				else
					{	/* Reduce/cse.scm 37 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/cse.scm 45 */
				obj_t BgL_list3396z00_847;

				{	/* Reduce/cse.scm 45 */
					obj_t BgL_arg3398z00_849;

					{	/* Reduce/cse.scm 45 */
						obj_t BgL_arg3399z00_850;

						{	/* Reduce/cse.scm 45 */
							obj_t BgL_arg3400z00_851;

							BgL_arg3400z00_851 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg3399z00_850 =
								MAKE_PAIR(BCHAR(((unsigned char) ')')), BgL_arg3400z00_851);
						}
						BgL_arg3398z00_849 =
							MAKE_PAIR(BINT(BGl_za2csezd2removedza2zd2zzreduce_csez00),
							BgL_arg3399z00_850);
					}
					BgL_list3396z00_847 =
						MAKE_PAIR(BGl_string3614z00zzreduce_csez00, BgL_arg3398z00_849);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3396z00_847);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-cse! */
	obj_t BGl__reducezd2csez12zc0zzreduce_csez00(obj_t BgL_envz00_2550,
		obj_t BgL_globalsz00_2551)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 34 */
			return BGl_reducezd2csez12zc0zzreduce_csez00(BgL_globalsz00_2551);
		}
	}



/* node-cse*! */
	obj_t BGl_nodezd2cseza2z12z62zzreduce_csez00(obj_t BgL_nodeza2za2_48,
		obj_t BgL_stackz00_49)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 347 */
			{
				obj_t BgL_nodeza2za2_853;

				bool_t BgL_resetz00_854;

				obj_t BgL_stackz00_855;

				BgL_nodeza2za2_853 = BgL_nodeza2za2_48;
				BgL_resetz00_854 = ((bool_t) 0);
				BgL_stackz00_855 = BgL_stackz00_49;
			BgL_zc3anonymousza33401ze3z83_856:
				if (NULLP(BgL_nodeza2za2_853))
					{	/* Reduce/cse.scm 352 */
						return BBOOL(BgL_resetz00_854);
					}
				else
					{	/* Reduce/cse.scm 352 */
						if (NULLP(CDR(BgL_nodeza2za2_853)))
							{	/* Reduce/cse.scm 355 */
								obj_t BgL_resetz72z72_859;

								{	/* Reduce/cse.scm 356 */
									obj_t BgL_arg3404z00_862;

									BgL_arg3404z00_862 = CAR(BgL_nodeza2za2_853);
									{	/* Reduce/cse.scm 356 */
										BgL_nodez00_bglt BgL_nodez00_1645;

										BgL_nodez00_1645 = (BgL_nodez00_bglt) (BgL_arg3404z00_862);
										{	/* Reduce/cse.scm 356 */
											obj_t BgL_method3345z00_1647;

											{	/* Reduce/cse.scm 356 */
												BgL_objectz00_bglt BgL_objz00_1648;

												BgL_objz00_1648 =
													(BgL_objectz00_bglt) (BgL_nodez00_1645);
												{	/* Reduce/cse.scm 356 */
													long BgL_objzd2classzd2numz00_1649;

													BgL_objzd2classzd2numz00_1649 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1648);
													{	/* Reduce/cse.scm 356 */
														obj_t BgL_arg2643z00_1650;

														BgL_arg2643z00_1650 =
															PROCEDURE_REF
															(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
															(int) (((long) 1)));
														{	/* Reduce/cse.scm 356 */
															obj_t BgL_arrayz00_1652;

															int BgL_offsetz00_1653;

															BgL_arrayz00_1652 = BgL_arg2643z00_1650;
															BgL_offsetz00_1653 =
																(int) (BgL_objzd2classzd2numz00_1649);
															{	/* Reduce/cse.scm 356 */
																long BgL_offsetz00_1654;

																BgL_offsetz00_1654 =
																	((long) (BgL_offsetz00_1653) - OBJECT_TYPE);
																{	/* Reduce/cse.scm 356 */
																	long BgL_modz00_1655;

																	{	/* Reduce/cse.scm 356 */
																		int BgL_arg2645z00_1656;

																		BgL_arg2645z00_1656 = (int) (((long) 16));
																		{	/* Reduce/cse.scm 356 */
																			long BgL_auxz00_2748;

																			BgL_auxz00_2748 =
																				(long) (BgL_arg2645z00_1656);
																			BgL_modz00_1655 =
																				(BgL_offsetz00_1654 / BgL_auxz00_2748);
																	}}
																	{	/* Reduce/cse.scm 356 */
																		long BgL_restz00_1657;

																		{	/* Reduce/cse.scm 356 */
																			int BgL_arg2644z00_1658;

																			BgL_arg2644z00_1658 = (int) (((long) 16));
																			{	/* Reduce/cse.scm 356 */
																				long BgL_auxz00_2752;

																				BgL_auxz00_2752 =
																					(long) (BgL_arg2644z00_1658);
																				BgL_restz00_1657 =
																					(BgL_offsetz00_1654 %
																					BgL_auxz00_2752);
																		}}
																		{	/* Reduce/cse.scm 356 */

																			BgL_method3345z00_1647 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1652,
																					(int) (BgL_modz00_1655)),
																				(int) (BgL_restz00_1657));
											}}}}}}}}
											BgL_resetz72z72_859 =
												PROCEDURE_ENTRY(BgL_method3345z00_1647)
												(BgL_method3345z00_1647, (obj_t) (BgL_nodez00_1645),
												BgL_stackz00_855, BEOA);
								}}}
								{	/* Reduce/cse.scm 358 */
									obj_t BgL_nodez00_860;

									{	/* Reduce/cse.scm 358 */
										int BgL_auxz00_2762;

										BgL_auxz00_2762 = (int) (((long) 1));
										BgL_nodez00_860 = BGL_MVALUES_VAL(BgL_auxz00_2762);
									}
									SET_CAR(BgL_nodeza2za2_853, BgL_nodez00_860);
									if (BgL_resetz00_854)
										{	/* Reduce/cse.scm 358 */
											return BBOOL(BgL_resetz00_854);
										}
									else
										{	/* Reduce/cse.scm 358 */
											return BgL_resetz72z72_859;
										}
								}
							}
						else
							{	/* Reduce/cse.scm 360 */
								obj_t BgL_resetz72z72_863;

								{	/* Reduce/cse.scm 361 */
									obj_t BgL_arg3409z00_869;

									BgL_arg3409z00_869 = CAR(BgL_nodeza2za2_853);
									{	/* Reduce/cse.scm 361 */
										BgL_nodez00_bglt BgL_nodez00_1676;

										BgL_nodez00_1676 = (BgL_nodez00_bglt) (BgL_arg3409z00_869);
										{	/* Reduce/cse.scm 361 */
											obj_t BgL_method3345z00_1678;

											{	/* Reduce/cse.scm 361 */
												BgL_objectz00_bglt BgL_objz00_1679;

												BgL_objz00_1679 =
													(BgL_objectz00_bglt) (BgL_nodez00_1676);
												{	/* Reduce/cse.scm 361 */
													long BgL_objzd2classzd2numz00_1680;

													BgL_objzd2classzd2numz00_1680 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1679);
													{	/* Reduce/cse.scm 361 */
														obj_t BgL_arg2643z00_1681;

														BgL_arg2643z00_1681 =
															PROCEDURE_REF
															(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
															(int) (((long) 1)));
														{	/* Reduce/cse.scm 361 */
															obj_t BgL_arrayz00_1683;

															int BgL_offsetz00_1684;

															BgL_arrayz00_1683 = BgL_arg2643z00_1681;
															BgL_offsetz00_1684 =
																(int) (BgL_objzd2classzd2numz00_1680);
															{	/* Reduce/cse.scm 361 */
																long BgL_offsetz00_1685;

																BgL_offsetz00_1685 =
																	((long) (BgL_offsetz00_1684) - OBJECT_TYPE);
																{	/* Reduce/cse.scm 361 */
																	long BgL_modz00_1686;

																	{	/* Reduce/cse.scm 361 */
																		int BgL_arg2645z00_1687;

																		BgL_arg2645z00_1687 = (int) (((long) 16));
																		{	/* Reduce/cse.scm 361 */
																			long BgL_auxz00_2778;

																			BgL_auxz00_2778 =
																				(long) (BgL_arg2645z00_1687);
																			BgL_modz00_1686 =
																				(BgL_offsetz00_1685 / BgL_auxz00_2778);
																	}}
																	{	/* Reduce/cse.scm 361 */
																		long BgL_restz00_1688;

																		{	/* Reduce/cse.scm 361 */
																			int BgL_arg2644z00_1689;

																			BgL_arg2644z00_1689 = (int) (((long) 16));
																			{	/* Reduce/cse.scm 361 */
																				long BgL_auxz00_2782;

																				BgL_auxz00_2782 =
																					(long) (BgL_arg2644z00_1689);
																				BgL_restz00_1688 =
																					(BgL_offsetz00_1685 %
																					BgL_auxz00_2782);
																		}}
																		{	/* Reduce/cse.scm 361 */

																			BgL_method3345z00_1678 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1683,
																					(int) (BgL_modz00_1686)),
																				(int) (BgL_restz00_1688));
											}}}}}}}}
											BgL_resetz72z72_863 =
												PROCEDURE_ENTRY(BgL_method3345z00_1678)
												(BgL_method3345z00_1678, (obj_t) (BgL_nodez00_1676),
												BgL_stackz00_855, BEOA);
								}}}
								{	/* Reduce/cse.scm 365 */
									obj_t BgL_nodez00_864;

									{	/* Reduce/cse.scm 365 */
										int BgL_auxz00_2792;

										BgL_auxz00_2792 = (int) (((long) 1));
										BgL_nodez00_864 = BGL_MVALUES_VAL(BgL_auxz00_2792);
									}
									SET_CAR(BgL_nodeza2za2_853, BgL_nodez00_864);
									{	/* Reduce/cse.scm 363 */
										bool_t BgL_testz00_2796;

										if (BgL_resetz00_854)
											{	/* Reduce/cse.scm 363 */
												BgL_testz00_2796 = ((bool_t) 1);
											}
										else
											{	/* Reduce/cse.scm 363 */
												BgL_testz00_2796 = CBOOL(BgL_resetz72z72_863);
											}
										if (BgL_testz00_2796)
											{
												obj_t BgL_stackz00_2802;

												bool_t BgL_resetz00_2801;

												obj_t BgL_nodeza2za2_2799;

												BgL_nodeza2za2_2799 = CDR(BgL_nodeza2za2_853);
												BgL_resetz00_2801 = ((bool_t) 1);
												BgL_stackz00_2802 = BNIL;
												BgL_stackz00_855 = BgL_stackz00_2802;
												BgL_resetz00_854 = BgL_resetz00_2801;
												BgL_nodeza2za2_853 = BgL_nodeza2za2_2799;
												goto BgL_zc3anonymousza33401ze3z83_856;
											}
										else
											{
												bool_t BgL_resetz00_2805;

												obj_t BgL_nodeza2za2_2803;

												BgL_nodeza2za2_2803 = CDR(BgL_nodeza2za2_853);
												BgL_resetz00_2805 = ((bool_t) 0);
												BgL_resetz00_854 = BgL_resetz00_2805;
												BgL_nodeza2za2_853 = BgL_nodeza2za2_2803;
												goto BgL_zc3anonymousza33401ze3z83_856;
											}
									}
								}
							}
					}
			}
		}
	}



/* find-stack */
	obj_t BGl_findzd2stackzd2zzreduce_csez00(BgL_nodez00_bglt BgL_nodez00_60,
		obj_t BgL_stackz00_61)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 379 */
			{
				obj_t BgL_stackz00_883;

				BgL_stackz00_883 = BgL_stackz00_61;
			BgL_zc3anonymousza33420ze3z83_884:
				if (NULLP(BgL_stackz00_883))
					{	/* Reduce/cse.scm 383 */
						return BFALSE;
					}
				else
					{	/* Reduce/cse.scm 385 */
						bool_t BgL_testz00_2808;

						{	/* Reduce/cse.scm 385 */
							obj_t BgL_arg3426z00_889;

							BgL_arg3426z00_889 =
								STRUCT_REF(CAR(BgL_stackz00_883), (int) (((long) 0)));
							BgL_testz00_2808 =
								BGl_samezd2nodezf3z21zzreduce_samez00(BgL_nodez00_60,
								(BgL_nodez00_bglt) (BgL_arg3426z00_889), BNIL);
						}
						if (BgL_testz00_2808)
							{	/* Reduce/cse.scm 385 */
								return STRUCT_REF(CAR(BgL_stackz00_883), (int) (((long) 1)));
							}
						else
							{
								obj_t BgL_stackz00_2817;

								BgL_stackz00_2817 = CDR(BgL_stackz00_883);
								BgL_stackz00_883 = BgL_stackz00_2817;
								goto BgL_zc3anonymousza33420ze3z83_884;
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_csez00()
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_nodezd2csez12zd2default3344zd2envzc0zzreduce_csez00,
				BGl_nodez00zzast_nodez00, BGl_string3615z00zzreduce_csez00);
		}
	}



/* node-cse! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2csez12zc0zzreduce_csez00(BgL_nodez00_bglt
		BgL_nodez00_2, obj_t BgL_stackz00_3)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 58 */
			{	/* Reduce/cse.scm 58 */
				obj_t BgL_method3345z00_1739;

				{	/* Reduce/cse.scm 58 */
					BgL_objectz00_bglt BgL_objz00_1740;

					BgL_objz00_1740 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/cse.scm 58 */
						long BgL_objzd2classzd2numz00_1741;

						BgL_objzd2classzd2numz00_1741 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1740);
						{	/* Reduce/cse.scm 58 */
							obj_t BgL_arg2643z00_1742;

							BgL_arg2643z00_1742 =
								PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
								(int) (((long) 1)));
							{	/* Reduce/cse.scm 58 */
								obj_t BgL_arrayz00_1744;

								int BgL_offsetz00_1745;

								BgL_arrayz00_1744 = BgL_arg2643z00_1742;
								BgL_offsetz00_1745 = (int) (BgL_objzd2classzd2numz00_1741);
								{	/* Reduce/cse.scm 58 */
									long BgL_offsetz00_1746;

									BgL_offsetz00_1746 =
										((long) (BgL_offsetz00_1745) - OBJECT_TYPE);
									{	/* Reduce/cse.scm 58 */
										long BgL_modz00_1747;

										{	/* Reduce/cse.scm 58 */
											int BgL_arg2645z00_1748;

											BgL_arg2645z00_1748 = (int) (((long) 16));
											{	/* Reduce/cse.scm 58 */
												long BgL_auxz00_2828;

												BgL_auxz00_2828 = (long) (BgL_arg2645z00_1748);
												BgL_modz00_1747 =
													(BgL_offsetz00_1746 / BgL_auxz00_2828);
										}}
										{	/* Reduce/cse.scm 58 */
											long BgL_restz00_1749;

											{	/* Reduce/cse.scm 58 */
												int BgL_arg2644z00_1750;

												BgL_arg2644z00_1750 = (int) (((long) 16));
												{	/* Reduce/cse.scm 58 */
													long BgL_auxz00_2832;

													BgL_auxz00_2832 = (long) (BgL_arg2644z00_1750);
													BgL_restz00_1749 =
														(BgL_offsetz00_1746 % BgL_auxz00_2832);
											}}
											{	/* Reduce/cse.scm 58 */

												BgL_method3345z00_1739 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1744,
														(int) (BgL_modz00_1747)), (int) (BgL_restz00_1749));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3345z00_1739) (BgL_method3345z00_1739,
					(obj_t) (BgL_nodez00_2), BgL_stackz00_3, BEOA);
			}
		}
	}



/* _node-cse! */
	obj_t BGl__nodezd2csez12zc0zzreduce_csez00(obj_t BgL_envz00_2552,
		obj_t BgL_nodez00_2553, obj_t BgL_stackz00_2554)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 58 */
			return
				BGl_nodezd2csez12zc0zzreduce_csez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2553), BgL_stackz00_2554);
		}
	}



/* node-cse!-default3344 */
	obj_t BGl_nodezd2csez12zd2default3344z12zzreduce_csez00(BgL_nodez00_bglt
		BgL_nodez00_4, obj_t BgL_stackz00_5)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
				BGl_string3616z00zzreduce_csez00, (obj_t) (BgL_nodez00_4));
		}
	}



/* _node-cse!-default3344 */
	obj_t BGl__nodezd2csez12zd2default3344z12zzreduce_csez00(obj_t
		BgL_envz00_2555, obj_t BgL_nodez00_2556, obj_t BgL_stackz00_2557)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			return
				BGl_nodezd2csez12zd2default3344z12zzreduce_csez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2556), BgL_stackz00_2557);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_csez00()
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_atomz00zzast_nodez00,
				BGl_proc3617z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_kwotez00zzast_nodez00,
				BGl_proc3618z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_varz00zzast_nodez00,
				BGl_proc3619z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_closurez00zzast_nodez00,
				BGl_proc3620z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3621z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3622z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_funcallz00zzast_nodez00,
				BGl_proc3623z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_externz00zzast_nodez00,
				BGl_proc3624z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_castz00zzast_nodez00,
				BGl_proc3625z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_setqz00zzast_nodez00,
				BGl_proc3626z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3627z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_failz00zzast_nodez00,
				BGl_proc3628z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_selectz00zzast_nodez00,
				BGl_proc3629z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3630z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3631z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3632z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3633z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3634z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3635z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00, BGl_appz00zzast_nodez00,
				BGl_proc3636z00zzreduce_csez00, BGl_string3615z00zzreduce_csez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3637z00zzreduce_csez00,
				BGl_string3615z00zzreduce_csez00);
		}
	}



/* node-cse!-let-var3390 */
	obj_t BGl_nodezd2csez12zd2letzd2var3390zc0zzreduce_csez00(obj_t
		BgL_envz00_2579, obj_t BgL_nodez00_2580, obj_t BgL_stackz00_2581)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 292 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1553;

				obj_t BgL_stackz00_1554;

				BgL_nodez00_1553 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2580);
				BgL_stackz00_1554 = BgL_stackz00_2581;
				{
					obj_t BgL_bindingsz00_1561;

					bool_t BgL_resetz00_1562;

					obj_t BgL_extendz00_1563;

					{	/* Reduce/cse.scm 294 */
						obj_t BgL_arg3539z00_1560;

						BgL_arg3539z00_1560 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1553))->
							BgL_bindingsz00);
						BgL_bindingsz00_1561 = BgL_arg3539z00_1560;
						BgL_resetz00_1562 = ((bool_t) 0);
						BgL_extendz00_1563 = BNIL;
					BgL_zc3anonymousza33540ze3z83_1564:
						if (NULLP(BgL_bindingsz00_1561))
							{	/* Reduce/cse.scm 298 */
								obj_t BgL_stackz72z72_1566;

								if (BgL_resetz00_1562)
									{	/* Reduce/cse.scm 298 */
										BgL_stackz72z72_1566 = BNIL;
									}
								else
									{	/* Reduce/cse.scm 298 */
										BgL_stackz72z72_1566 =
											bgl_append2(BgL_extendz00_1563, BgL_stackz00_1554);
									}
								{	/* Reduce/cse.scm 299 */
									obj_t BgL_resetz72z72_1567;

									{	/* Reduce/cse.scm 300 */
										BgL_nodez00_bglt BgL_arg3547z00_1583;

										BgL_arg3547z00_1583 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1553))->
											BgL_bodyz00);
										{	/* Reduce/cse.scm 300 */
											obj_t BgL_method3345z00_2452;

											{	/* Reduce/cse.scm 300 */
												BgL_objectz00_bglt BgL_objz00_2453;

												BgL_objz00_2453 =
													(BgL_objectz00_bglt) (BgL_arg3547z00_1583);
												{	/* Reduce/cse.scm 300 */
													long BgL_objzd2classzd2numz00_2454;

													BgL_objzd2classzd2numz00_2454 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_2453);
													{	/* Reduce/cse.scm 300 */
														obj_t BgL_arg2643z00_2455;

														BgL_arg2643z00_2455 =
															PROCEDURE_REF
															(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
															(int) (((long) 1)));
														{	/* Reduce/cse.scm 300 */
															obj_t BgL_arrayz00_2457;

															int BgL_offsetz00_2458;

															BgL_arrayz00_2457 = BgL_arg2643z00_2455;
															BgL_offsetz00_2458 =
																(int) (BgL_objzd2classzd2numz00_2454);
															{	/* Reduce/cse.scm 300 */
																long BgL_offsetz00_2459;

																BgL_offsetz00_2459 =
																	((long) (BgL_offsetz00_2458) - OBJECT_TYPE);
																{	/* Reduce/cse.scm 300 */
																	long BgL_modz00_2460;

																	{	/* Reduce/cse.scm 300 */
																		int BgL_arg2645z00_2461;

																		BgL_arg2645z00_2461 = (int) (((long) 16));
																		{	/* Reduce/cse.scm 300 */
																			long BgL_auxz00_2884;

																			BgL_auxz00_2884 =
																				(long) (BgL_arg2645z00_2461);
																			BgL_modz00_2460 =
																				(BgL_offsetz00_2459 / BgL_auxz00_2884);
																	}}
																	{	/* Reduce/cse.scm 300 */
																		long BgL_restz00_2462;

																		{	/* Reduce/cse.scm 300 */
																			int BgL_arg2644z00_2463;

																			BgL_arg2644z00_2463 = (int) (((long) 16));
																			{	/* Reduce/cse.scm 300 */
																				long BgL_auxz00_2888;

																				BgL_auxz00_2888 =
																					(long) (BgL_arg2644z00_2463);
																				BgL_restz00_2462 =
																					(BgL_offsetz00_2459 %
																					BgL_auxz00_2888);
																		}}
																		{	/* Reduce/cse.scm 300 */

																			BgL_method3345z00_2452 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2457,
																					(int) (BgL_modz00_2460)),
																				(int) (BgL_restz00_2462));
											}}}}}}}}
											BgL_resetz72z72_1567 =
												PROCEDURE_ENTRY(BgL_method3345z00_2452)
												(BgL_method3345z00_2452, (obj_t) (BgL_arg3547z00_1583),
												BgL_stackz72z72_1566, BEOA);
									}}
									{	/* Reduce/cse.scm 319 */
										obj_t BgL_nbodyz00_1568;

										{	/* Reduce/cse.scm 319 */
											int BgL_auxz00_2898;

											BgL_auxz00_2898 = (int) (((long) 1));
											BgL_nbodyz00_1568 = BGL_MVALUES_VAL(BgL_auxz00_2898);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_2901;

											BgL_auxz00_2901 = (BgL_nodez00_bglt) (BgL_nbodyz00_1568);
											((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1553))->
													BgL_bodyz00) =
												((BgL_nodez00_bglt) BgL_auxz00_2901), BUNSPEC);
										}
										{	/* Reduce/cse.scm 303 */
											bool_t BgL_testz00_2904;

											if (BgL_resetz00_1562)
												{	/* Reduce/cse.scm 303 */
													BgL_testz00_2904 = ((bool_t) 1);
												}
											else
												{	/* Reduce/cse.scm 303 */
													BgL_testz00_2904 = CBOOL(BgL_resetz72z72_1567);
												}
											if (BgL_testz00_2904)
												{	/* Reduce/cse.scm 303 */
													{	/* Reduce/cse.scm 304 */
														int BgL_auxz00_2907;

														BgL_auxz00_2907 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_2907);
													}
													{	/* Reduce/cse.scm 304 */
														obj_t BgL_auxz00_2912;

														int BgL_auxz00_2910;

														BgL_auxz00_2912 = (obj_t) (BgL_nodez00_1553);
														BgL_auxz00_2910 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_2910,
															BgL_auxz00_2912);
													}
													return BTRUE;
												}
											else
												{	/* Reduce/cse.scm 303 */
													if (BGl_sidezd2effectzf3z21zzeffect_effectz00(
															(BgL_nodez00_bglt) (BgL_nodez00_1553)))
														{	/* Reduce/cse.scm 305 */
															{	/* Reduce/cse.scm 306 */
																int BgL_auxz00_2918;

																BgL_auxz00_2918 = (int) (((long) 2));
																BGL_MVALUES_NUMBER_SET(BgL_auxz00_2918);
															}
															{	/* Reduce/cse.scm 306 */
																obj_t BgL_auxz00_2923;

																int BgL_auxz00_2921;

																BgL_auxz00_2923 = (obj_t) (BgL_nodez00_1553);
																BgL_auxz00_2921 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_auxz00_2921,
																	BgL_auxz00_2923);
															}
															return BFALSE;
														}
													else
														{	/* Reduce/cse.scm 308 */
															obj_t BgL_previousz00_1575;

															BgL_previousz00_1575 =
																BGl_findzd2stackzd2zzreduce_csez00(
																(BgL_nodez00_bglt) (BgL_nodez00_1553),
																BgL_stackz00_1554);
															if (BGl_iszd2azf3z21zz__objectz00
																(BgL_previousz00_1575,
																	BGl_variablez00zzast_varz00))
																{	/* Reduce/cse.scm 310 */
																	BGl_za2csezd2removedza2zd2zzreduce_csez00 =
																		(((long) 1) +
																		BGl_za2csezd2removedza2zd2zzreduce_csez00);
																	{	/* Reduce/cse.scm 314 */
																		BgL_varz00_bglt BgL_val1_3341z00_1578;

																		{	/* Reduce/cse.scm 315 */
																			obj_t BgL_arg3545z00_1579;

																			BgL_typez00_bglt BgL_arg3546z00_1580;

																			{
																				BgL_nodez00_bglt BgL_auxz00_2931;

																				BgL_auxz00_2931 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1553);
																				BgL_arg3545z00_1579 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2931))->BgL_locz00);
																			}
																			{
																				BgL_nodez00_bglt BgL_auxz00_2934;

																				BgL_auxz00_2934 =
																					(BgL_nodez00_bglt) (BgL_nodez00_1553);
																				BgL_arg3546z00_1580 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2934))->
																					BgL_typez00);
																			}
																			BgL_val1_3341z00_1578 =
																				BGl_makezd2varzd2zzast_nodez00
																				(BgL_arg3545z00_1579,
																				BgL_arg3546z00_1580,
																				(BgL_variablez00_bglt)
																				(BgL_previousz00_1575));
																		}
																		{	/* Reduce/cse.scm 314 */
																			int BgL_auxz00_2939;

																			BgL_auxz00_2939 = (int) (((long) 2));
																			BGL_MVALUES_NUMBER_SET(BgL_auxz00_2939);
																		}
																		{	/* Reduce/cse.scm 314 */
																			obj_t BgL_auxz00_2944;

																			int BgL_auxz00_2942;

																			BgL_auxz00_2944 =
																				(obj_t) (BgL_val1_3341z00_1578);
																			BgL_auxz00_2942 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_auxz00_2942,
																				BgL_auxz00_2944);
																		}
																		return BgL_stackz72z72_1566;
																	}
																}
															else
																{	/* Reduce/cse.scm 310 */
																	{	/* Reduce/cse.scm 319 */
																		int BgL_auxz00_2947;

																		BgL_auxz00_2947 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_2947);
																	}
																	{	/* Reduce/cse.scm 319 */
																		obj_t BgL_auxz00_2952;

																		int BgL_auxz00_2950;

																		BgL_auxz00_2952 =
																			(obj_t) (BgL_nodez00_1553);
																		BgL_auxz00_2950 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_2950,
																			BgL_auxz00_2952);
																	}
																	return BFALSE;
																}
														}
												}
										}
									}
								}
							}
						else
							{	/* Reduce/cse.scm 320 */
								obj_t BgL_bindingz00_1584;

								BgL_bindingz00_1584 = CAR(BgL_bindingsz00_1561);
								{	/* Reduce/cse.scm 321 */
									obj_t BgL_varz00_1585;

									obj_t BgL_valz00_1586;

									BgL_varz00_1585 = CAR(BgL_bindingz00_1584);
									BgL_valz00_1586 = CDR(BgL_bindingz00_1584);
									{	/* Reduce/cse.scm 323 */
										obj_t BgL_resetz72z72_1587;

										{	/* Reduce/cse.scm 324 */
											BgL_nodez00_bglt BgL_nodez00_2500;

											BgL_nodez00_2500 = (BgL_nodez00_bglt) (BgL_valz00_1586);
											{	/* Reduce/cse.scm 324 */
												obj_t BgL_method3345z00_2502;

												{	/* Reduce/cse.scm 324 */
													BgL_objectz00_bglt BgL_objz00_2503;

													BgL_objz00_2503 =
														(BgL_objectz00_bglt) (BgL_nodez00_2500);
													{	/* Reduce/cse.scm 324 */
														long BgL_objzd2classzd2numz00_2504;

														BgL_objzd2classzd2numz00_2504 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2503);
														{	/* Reduce/cse.scm 324 */
															obj_t BgL_arg2643z00_2505;

															BgL_arg2643z00_2505 =
																PROCEDURE_REF
																(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
																(int) (((long) 1)));
															{	/* Reduce/cse.scm 324 */
																obj_t BgL_arrayz00_2507;

																int BgL_offsetz00_2508;

																BgL_arrayz00_2507 = BgL_arg2643z00_2505;
																BgL_offsetz00_2508 =
																	(int) (BgL_objzd2classzd2numz00_2504);
																{	/* Reduce/cse.scm 324 */
																	long BgL_offsetz00_2509;

																	BgL_offsetz00_2509 =
																		((long) (BgL_offsetz00_2508) - OBJECT_TYPE);
																	{	/* Reduce/cse.scm 324 */
																		long BgL_modz00_2510;

																		{	/* Reduce/cse.scm 324 */
																			int BgL_arg2645z00_2511;

																			BgL_arg2645z00_2511 = (int) (((long) 16));
																			{	/* Reduce/cse.scm 324 */
																				long BgL_auxz00_2967;

																				BgL_auxz00_2967 =
																					(long) (BgL_arg2645z00_2511);
																				BgL_modz00_2510 =
																					(BgL_offsetz00_2509 /
																					BgL_auxz00_2967);
																		}}
																		{	/* Reduce/cse.scm 324 */
																			long BgL_restz00_2512;

																			{	/* Reduce/cse.scm 324 */
																				int BgL_arg2644z00_2513;

																				BgL_arg2644z00_2513 =
																					(int) (((long) 16));
																				{	/* Reduce/cse.scm 324 */
																					long BgL_auxz00_2971;

																					BgL_auxz00_2971 =
																						(long) (BgL_arg2644z00_2513);
																					BgL_restz00_2512 =
																						(BgL_offsetz00_2509 %
																						BgL_auxz00_2971);
																			}}
																			{	/* Reduce/cse.scm 324 */

																				BgL_method3345z00_2502 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2507,
																						(int) (BgL_modz00_2510)),
																					(int) (BgL_restz00_2512));
												}}}}}}}}
												BgL_resetz72z72_1587 =
													PROCEDURE_ENTRY(BgL_method3345z00_2502)
													(BgL_method3345z00_2502, (obj_t) (BgL_nodez00_2500),
													BgL_stackz00_1554, BEOA);
										}}
										{	/* Reduce/cse.scm 342 */
											obj_t BgL_nvalz00_1588;

											{	/* Reduce/cse.scm 342 */
												int BgL_auxz00_2981;

												BgL_auxz00_2981 = (int) (((long) 1));
												BgL_nvalz00_1588 = BGL_MVALUES_VAL(BgL_auxz00_2981);
											}
											SET_CDR(BgL_bindingz00_1584, BgL_nvalz00_1588);
											{	/* Reduce/cse.scm 327 */
												bool_t BgL_testz00_2985;

												if (BgL_resetz00_1562)
													{	/* Reduce/cse.scm 327 */
														BgL_testz00_2985 = ((bool_t) 1);
													}
												else
													{	/* Reduce/cse.scm 327 */
														BgL_testz00_2985 = CBOOL(BgL_resetz72z72_1587);
													}
												if (BgL_testz00_2985)
													{
														obj_t BgL_extendz00_2991;

														bool_t BgL_resetz00_2990;

														obj_t BgL_bindingsz00_2988;

														BgL_bindingsz00_2988 = CDR(BgL_bindingsz00_1561);
														BgL_resetz00_2990 = ((bool_t) 1);
														BgL_extendz00_2991 = BNIL;
														BgL_extendz00_1563 = BgL_extendz00_2991;
														BgL_resetz00_1562 = BgL_resetz00_2990;
														BgL_bindingsz00_1561 = BgL_bindingsz00_2988;
														goto BgL_zc3anonymousza33540ze3z83_1564;
													}
												else
													{	/* Reduce/cse.scm 331 */
														bool_t BgL_testz00_2992;

														{	/* Reduce/cse.scm 331 */
															obj_t BgL_auxz00_2993;

															{
																BgL_variablez00_bglt BgL_auxz00_2994;

																BgL_auxz00_2994 =
																	(BgL_variablez00_bglt) (BgL_varz00_1585);
																BgL_auxz00_2993 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2994))->BgL_accessz00);
															}
															BgL_testz00_2992 =
																(BgL_auxz00_2993 == CNST_TABLE_REF(((long) 1)));
														}
														if (BgL_testz00_2992)
															{	/* Reduce/cse.scm 335 */
																bool_t BgL_testz00_2999;

																if (BGl_iszd2azf3z21zz__objectz00
																	(BgL_valz00_1586, BGl_appz00zzast_nodez00))
																	{	/* Reduce/cse.scm 335 */
																		BgL_testz00_2999 = ((bool_t) 1);
																	}
																else
																	{	/* Reduce/cse.scm 335 */
																		BgL_testz00_2999 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_valz00_1586,
																			BGl_letzd2varzd2zzast_nodez00);
																	}
																if (BgL_testz00_2999)
																	{	/* Reduce/cse.scm 336 */
																		obj_t BgL_arg3553z00_1594;

																		obj_t BgL_arg3554z00_1595;

																		BgL_arg3553z00_1594 =
																			CDR(BgL_bindingsz00_1561);
																		{	/* Reduce/cse.scm 338 */
																			obj_t BgL_arg3555z00_1596;

																			{	/* Reduce/cse.scm 338 */
																				obj_t BgL_newz00_2537;

																				BgL_newz00_2537 =
																					create_struct(CNST_TABLE_REF(((long)
																							2)), (int) (((long) 2)));
																				{	/* Reduce/cse.scm 338 */
																					int BgL_auxz00_3007;

																					BgL_auxz00_3007 = (int) (((long) 1));
																					STRUCT_SET(BgL_newz00_2537,
																						BgL_auxz00_3007, BgL_varz00_1585);
																				}
																				{	/* Reduce/cse.scm 338 */
																					int BgL_auxz00_3010;

																					BgL_auxz00_3010 = (int) (((long) 0));
																					STRUCT_SET(BgL_newz00_2537,
																						BgL_auxz00_3010, BgL_valz00_1586);
																				}
																				BgL_arg3555z00_1596 = BgL_newz00_2537;
																			}
																			BgL_arg3554z00_1595 =
																				MAKE_PAIR(BgL_arg3555z00_1596,
																				BgL_extendz00_1563);
																		}
																		{
																			obj_t BgL_extendz00_3016;

																			bool_t BgL_resetz00_3015;

																			obj_t BgL_bindingsz00_3014;

																			BgL_bindingsz00_3014 =
																				BgL_arg3553z00_1594;
																			BgL_resetz00_3015 = ((bool_t) 0);
																			BgL_extendz00_3016 = BgL_arg3554z00_1595;
																			BgL_extendz00_1563 = BgL_extendz00_3016;
																			BgL_resetz00_1562 = BgL_resetz00_3015;
																			BgL_bindingsz00_1561 =
																				BgL_bindingsz00_3014;
																			goto BgL_zc3anonymousza33540ze3z83_1564;
																		}
																	}
																else
																	{
																		bool_t BgL_resetz00_3019;

																		obj_t BgL_bindingsz00_3017;

																		BgL_bindingsz00_3017 =
																			CDR(BgL_bindingsz00_1561);
																		BgL_resetz00_3019 = ((bool_t) 0);
																		BgL_resetz00_1562 = BgL_resetz00_3019;
																		BgL_bindingsz00_1561 = BgL_bindingsz00_3017;
																		goto BgL_zc3anonymousza33540ze3z83_1564;
																	}
															}
														else
															{
																bool_t BgL_resetz00_3022;

																obj_t BgL_bindingsz00_3020;

																BgL_bindingsz00_3020 =
																	CDR(BgL_bindingsz00_1561);
																BgL_resetz00_3022 = ((bool_t) 0);
																BgL_resetz00_1562 = BgL_resetz00_3022;
																BgL_bindingsz00_1561 = BgL_bindingsz00_3020;
																goto BgL_zc3anonymousza33540ze3z83_1564;
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



/* node-cse!-app3388 */
	obj_t BGl_nodezd2csez12zd2app3388z12zzreduce_csez00(obj_t BgL_envz00_2582,
		obj_t BgL_nodez00_2583, obj_t BgL_stackz00_2584)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 266 */
			{
				BgL_appz00_bglt BgL_nodez00_1533;

				obj_t BgL_stackz00_1534;

				BgL_nodez00_1533 = (BgL_appz00_bglt) (BgL_nodez00_2583);
				BgL_stackz00_1534 = BgL_stackz00_2584;
				{	/* Reduce/cse.scm 268 */
					obj_t BgL_resetz00_1538;

					{	/* Reduce/cse.scm 268 */
						obj_t BgL_arg3537z00_1550;

						BgL_arg3537z00_1550 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1533))->BgL_argsz00);
						BgL_resetz00_1538 =
							BGl_nodezd2cseza2z12z62zzreduce_csez00(BgL_arg3537z00_1550,
							BgL_stackz00_1534);
					}
					{	/* Reduce/cse.scm 269 */
						bool_t BgL_testz00_3026;

						if (CBOOL(BgL_resetz00_1538))
							{	/* Reduce/cse.scm 269 */
								BgL_testz00_3026 = ((bool_t) 1);
							}
						else
							{	/* Reduce/cse.scm 269 */
								BgL_testz00_3026 =
									BGl_sidezd2effectzf3z21zzeffect_effectz00(
									(BgL_nodez00_bglt) (BgL_nodez00_1533));
							}
						if (BgL_testz00_3026)
							{	/* Reduce/cse.scm 269 */
								{	/* Reduce/cse.scm 273 */
									int BgL_auxz00_3031;

									BgL_auxz00_3031 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_3031);
								}
								{	/* Reduce/cse.scm 273 */
									obj_t BgL_auxz00_3036;

									int BgL_auxz00_3034;

									BgL_auxz00_3036 = (obj_t) (BgL_nodez00_1533);
									BgL_auxz00_3034 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_3034, BgL_auxz00_3036);
								}
								return BTRUE;
							}
						else
							{	/* Reduce/cse.scm 274 */
								obj_t BgL_previousz00_1542;

								BgL_previousz00_1542 =
									BGl_findzd2stackzd2zzreduce_csez00(
									(BgL_nodez00_bglt) (BgL_nodez00_1533), BgL_stackz00_1534);
								if (BGl_iszd2azf3z21zz__objectz00(BgL_previousz00_1542,
										BGl_variablez00zzast_varz00))
									{	/* Reduce/cse.scm 276 */
										BGl_za2csezd2removedza2zd2zzreduce_csez00 =
											(((long) 1) + BGl_za2csezd2removedza2zd2zzreduce_csez00);
										{	/* Reduce/cse.scm 279 */
											BgL_varz00_bglt BgL_val1_3333z00_1545;

											{	/* Reduce/cse.scm 280 */
												obj_t BgL_arg3535z00_1546;

												BgL_typez00_bglt BgL_arg3536z00_1547;

												{
													BgL_nodez00_bglt BgL_auxz00_3044;

													BgL_auxz00_3044 =
														(BgL_nodez00_bglt) (BgL_nodez00_1533);
													BgL_arg3535z00_1546 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3044))->
														BgL_locz00);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_3047;

													BgL_auxz00_3047 =
														(BgL_nodez00_bglt) (BgL_nodez00_1533);
													BgL_arg3536z00_1547 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3047))->
														BgL_typez00);
												}
												BgL_val1_3333z00_1545 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3535z00_1546,
													BgL_arg3536z00_1547,
													(BgL_variablez00_bglt) (BgL_previousz00_1542));
											}
											{	/* Reduce/cse.scm 279 */
												int BgL_auxz00_3052;

												BgL_auxz00_3052 = (int) (((long) 2));
												BGL_MVALUES_NUMBER_SET(BgL_auxz00_3052);
											}
											{	/* Reduce/cse.scm 279 */
												obj_t BgL_auxz00_3057;

												int BgL_auxz00_3055;

												BgL_auxz00_3057 = (obj_t) (BgL_val1_3333z00_1545);
												BgL_auxz00_3055 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_auxz00_3055, BgL_auxz00_3057);
											}
											return BgL_stackz00_1534;
										}
									}
								else
									{	/* Reduce/cse.scm 276 */
										{	/* Reduce/cse.scm 284 */
											int BgL_auxz00_3060;

											BgL_auxz00_3060 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3060);
										}
										{	/* Reduce/cse.scm 284 */
											obj_t BgL_auxz00_3065;

											int BgL_auxz00_3063;

											BgL_auxz00_3065 = (obj_t) (BgL_nodez00_1533);
											BgL_auxz00_3063 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3063, BgL_auxz00_3065);
										}
										return BFALSE;
									}
							}
					}
				}
			}
		}
	}



/* node-cse!-box-ref3386 */
	obj_t BGl_nodezd2csez12zd2boxzd2ref3386zc0zzreduce_csez00(obj_t
		BgL_envz00_2585, obj_t BgL_nodez00_2586, obj_t BgL_stackz00_2587)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 260 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1525;

				obj_t BgL_stackz00_1526;

				{	/* Reduce/cse.scm 261 */
					bool_t BgL_auxz00_3069;

					BgL_nodez00_1525 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2586);
					BgL_stackz00_1526 = BgL_stackz00_2587;
					{	/* Reduce/cse.scm 261 */
						int BgL_auxz00_3070;

						BgL_auxz00_3070 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3070);
					}
					{	/* Reduce/cse.scm 261 */
						obj_t BgL_auxz00_3075;

						int BgL_auxz00_3073;

						BgL_auxz00_3075 = (obj_t) (BgL_nodez00_1525);
						BgL_auxz00_3073 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3073, BgL_auxz00_3075);
					}
					BgL_auxz00_3069 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_3069);
				}
			}
		}
	}



/* node-cse!-box-set!3384 */
	obj_t BGl_nodezd2csez12zd2boxzd2setz123384zd2zzreduce_csez00(obj_t
		BgL_envz00_2588, obj_t BgL_nodez00_2589, obj_t BgL_stackz00_2590)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 250 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1513;

				obj_t BgL_stackz00_1514;

				BgL_nodez00_1513 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2589);
				BgL_stackz00_1514 = BgL_stackz00_2590;
				{	/* Reduce/cse.scm 252 */
					obj_t BgL_resetz00_1518;

					{	/* Reduce/cse.scm 253 */
						BgL_nodez00_bglt BgL_arg3530z00_1522;

						BgL_arg3530z00_1522 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1513))->
							BgL_valuez00);
						{	/* Reduce/cse.scm 253 */
							obj_t BgL_method3345z00_2396;

							{	/* Reduce/cse.scm 253 */
								BgL_objectz00_bglt BgL_objz00_2397;

								BgL_objz00_2397 = (BgL_objectz00_bglt) (BgL_arg3530z00_1522);
								{	/* Reduce/cse.scm 253 */
									long BgL_objzd2classzd2numz00_2398;

									BgL_objzd2classzd2numz00_2398 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2397);
									{	/* Reduce/cse.scm 253 */
										obj_t BgL_arg2643z00_2399;

										BgL_arg2643z00_2399 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 253 */
											obj_t BgL_arrayz00_2401;

											int BgL_offsetz00_2402;

											BgL_arrayz00_2401 = BgL_arg2643z00_2399;
											BgL_offsetz00_2402 =
												(int) (BgL_objzd2classzd2numz00_2398);
											{	/* Reduce/cse.scm 253 */
												long BgL_offsetz00_2403;

												BgL_offsetz00_2403 =
													((long) (BgL_offsetz00_2402) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 253 */
													long BgL_modz00_2404;

													{	/* Reduce/cse.scm 253 */
														int BgL_arg2645z00_2405;

														BgL_arg2645z00_2405 = (int) (((long) 16));
														{	/* Reduce/cse.scm 253 */
															long BgL_auxz00_3089;

															BgL_auxz00_3089 = (long) (BgL_arg2645z00_2405);
															BgL_modz00_2404 =
																(BgL_offsetz00_2403 / BgL_auxz00_3089);
													}}
													{	/* Reduce/cse.scm 253 */
														long BgL_restz00_2406;

														{	/* Reduce/cse.scm 253 */
															int BgL_arg2644z00_2407;

															BgL_arg2644z00_2407 = (int) (((long) 16));
															{	/* Reduce/cse.scm 253 */
																long BgL_auxz00_3093;

																BgL_auxz00_3093 = (long) (BgL_arg2644z00_2407);
																BgL_restz00_2406 =
																	(BgL_offsetz00_2403 % BgL_auxz00_3093);
														}}
														{	/* Reduce/cse.scm 253 */

															BgL_method3345z00_2396 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2401,
																	(int) (BgL_modz00_2404)),
																(int) (BgL_restz00_2406));
							}}}}}}}}
							BgL_resetz00_1518 =
								PROCEDURE_ENTRY(BgL_method3345z00_2396) (BgL_method3345z00_2396,
								(obj_t) (BgL_arg3530z00_1522), BgL_stackz00_1514, BEOA);
					}}
					{	/* Reduce/cse.scm 255 */
						obj_t BgL_nvaluez00_1519;

						{	/* Reduce/cse.scm 255 */
							int BgL_auxz00_3103;

							BgL_auxz00_3103 = (int) (((long) 1));
							BgL_nvaluez00_1519 = BGL_MVALUES_VAL(BgL_auxz00_3103);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3106;

							BgL_auxz00_3106 = (BgL_nodez00_bglt) (BgL_nvaluez00_1519);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1513))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3106), BUNSPEC);
						}
						{	/* Reduce/cse.scm 255 */
							int BgL_auxz00_3109;

							BgL_auxz00_3109 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3109);
						}
						{	/* Reduce/cse.scm 255 */
							obj_t BgL_auxz00_3114;

							int BgL_auxz00_3112;

							BgL_auxz00_3114 = (obj_t) (BgL_nodez00_1513);
							BgL_auxz00_3112 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3112, BgL_auxz00_3114);
						}
						return BgL_resetz00_1518;
					}
				}
			}
		}
	}



/* node-cse!-make-box3382 */
	obj_t BGl_nodezd2csez12zd2makezd2box3382zc0zzreduce_csez00(obj_t
		BgL_envz00_2591, obj_t BgL_nodez00_2592, obj_t BgL_stackz00_2593)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 240 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1501;

				obj_t BgL_stackz00_1502;

				BgL_nodez00_1501 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2592);
				BgL_stackz00_1502 = BgL_stackz00_2593;
				{	/* Reduce/cse.scm 242 */
					obj_t BgL_resetz00_1506;

					{	/* Reduce/cse.scm 243 */
						BgL_nodez00_bglt BgL_arg3528z00_1510;

						BgL_arg3528z00_1510 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1501))->BgL_valuez00);
						{	/* Reduce/cse.scm 243 */
							obj_t BgL_method3345z00_2362;

							{	/* Reduce/cse.scm 243 */
								BgL_objectz00_bglt BgL_objz00_2363;

								BgL_objz00_2363 = (BgL_objectz00_bglt) (BgL_arg3528z00_1510);
								{	/* Reduce/cse.scm 243 */
									long BgL_objzd2classzd2numz00_2364;

									BgL_objzd2classzd2numz00_2364 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2363);
									{	/* Reduce/cse.scm 243 */
										obj_t BgL_arg2643z00_2365;

										BgL_arg2643z00_2365 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 243 */
											obj_t BgL_arrayz00_2367;

											int BgL_offsetz00_2368;

											BgL_arrayz00_2367 = BgL_arg2643z00_2365;
											BgL_offsetz00_2368 =
												(int) (BgL_objzd2classzd2numz00_2364);
											{	/* Reduce/cse.scm 243 */
												long BgL_offsetz00_2369;

												BgL_offsetz00_2369 =
													((long) (BgL_offsetz00_2368) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 243 */
													long BgL_modz00_2370;

													{	/* Reduce/cse.scm 243 */
														int BgL_arg2645z00_2371;

														BgL_arg2645z00_2371 = (int) (((long) 16));
														{	/* Reduce/cse.scm 243 */
															long BgL_auxz00_3127;

															BgL_auxz00_3127 = (long) (BgL_arg2645z00_2371);
															BgL_modz00_2370 =
																(BgL_offsetz00_2369 / BgL_auxz00_3127);
													}}
													{	/* Reduce/cse.scm 243 */
														long BgL_restz00_2372;

														{	/* Reduce/cse.scm 243 */
															int BgL_arg2644z00_2373;

															BgL_arg2644z00_2373 = (int) (((long) 16));
															{	/* Reduce/cse.scm 243 */
																long BgL_auxz00_3131;

																BgL_auxz00_3131 = (long) (BgL_arg2644z00_2373);
																BgL_restz00_2372 =
																	(BgL_offsetz00_2369 % BgL_auxz00_3131);
														}}
														{	/* Reduce/cse.scm 243 */

															BgL_method3345z00_2362 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2367,
																	(int) (BgL_modz00_2370)),
																(int) (BgL_restz00_2372));
							}}}}}}}}
							BgL_resetz00_1506 =
								PROCEDURE_ENTRY(BgL_method3345z00_2362) (BgL_method3345z00_2362,
								(obj_t) (BgL_arg3528z00_1510), BgL_stackz00_1502, BEOA);
					}}
					{	/* Reduce/cse.scm 245 */
						obj_t BgL_nvaluez00_1507;

						{	/* Reduce/cse.scm 245 */
							int BgL_auxz00_3141;

							BgL_auxz00_3141 = (int) (((long) 1));
							BgL_nvaluez00_1507 = BGL_MVALUES_VAL(BgL_auxz00_3141);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3144;

							BgL_auxz00_3144 = (BgL_nodez00_bglt) (BgL_nvaluez00_1507);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1501))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3144), BUNSPEC);
						}
						{	/* Reduce/cse.scm 245 */
							int BgL_auxz00_3147;

							BgL_auxz00_3147 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3147);
						}
						{	/* Reduce/cse.scm 245 */
							obj_t BgL_auxz00_3152;

							int BgL_auxz00_3150;

							BgL_auxz00_3152 = (obj_t) (BgL_nodez00_1501);
							BgL_auxz00_3150 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3150, BgL_auxz00_3152);
						}
						return BgL_resetz00_1506;
					}
				}
			}
		}
	}



/* node-cse!-jump-ex-it3380 */
	obj_t BGl_nodezd2csez12zd2jumpzd2exzd2it3380z12zzreduce_csez00(obj_t
		BgL_envz00_2594, obj_t BgL_nodez00_2595, obj_t BgL_stackz00_2596)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 226 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1484;

				obj_t BgL_stackz00_1485;

				BgL_nodez00_1484 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2595);
				BgL_stackz00_1485 = BgL_stackz00_2596;
				{	/* Reduce/cse.scm 228 */
					obj_t BgL_resetz00_1489;

					{	/* Reduce/cse.scm 229 */
						BgL_nodez00_bglt BgL_arg3526z00_1498;

						BgL_arg3526z00_1498 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1484))->
							BgL_exitz00);
						{	/* Reduce/cse.scm 229 */
							obj_t BgL_method3345z00_2297;

							{	/* Reduce/cse.scm 229 */
								BgL_objectz00_bglt BgL_objz00_2298;

								BgL_objz00_2298 = (BgL_objectz00_bglt) (BgL_arg3526z00_1498);
								{	/* Reduce/cse.scm 229 */
									long BgL_objzd2classzd2numz00_2299;

									BgL_objzd2classzd2numz00_2299 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2298);
									{	/* Reduce/cse.scm 229 */
										obj_t BgL_arg2643z00_2300;

										BgL_arg2643z00_2300 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 229 */
											obj_t BgL_arrayz00_2302;

											int BgL_offsetz00_2303;

											BgL_arrayz00_2302 = BgL_arg2643z00_2300;
											BgL_offsetz00_2303 =
												(int) (BgL_objzd2classzd2numz00_2299);
											{	/* Reduce/cse.scm 229 */
												long BgL_offsetz00_2304;

												BgL_offsetz00_2304 =
													((long) (BgL_offsetz00_2303) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 229 */
													long BgL_modz00_2305;

													{	/* Reduce/cse.scm 229 */
														int BgL_arg2645z00_2306;

														BgL_arg2645z00_2306 = (int) (((long) 16));
														{	/* Reduce/cse.scm 229 */
															long BgL_auxz00_3165;

															BgL_auxz00_3165 = (long) (BgL_arg2645z00_2306);
															BgL_modz00_2305 =
																(BgL_offsetz00_2304 / BgL_auxz00_3165);
													}}
													{	/* Reduce/cse.scm 229 */
														long BgL_restz00_2307;

														{	/* Reduce/cse.scm 229 */
															int BgL_arg2644z00_2308;

															BgL_arg2644z00_2308 = (int) (((long) 16));
															{	/* Reduce/cse.scm 229 */
																long BgL_auxz00_3169;

																BgL_auxz00_3169 = (long) (BgL_arg2644z00_2308);
																BgL_restz00_2307 =
																	(BgL_offsetz00_2304 % BgL_auxz00_3169);
														}}
														{	/* Reduce/cse.scm 229 */

															BgL_method3345z00_2297 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2302,
																	(int) (BgL_modz00_2305)),
																(int) (BgL_restz00_2307));
							}}}}}}}}
							BgL_resetz00_1489 =
								PROCEDURE_ENTRY(BgL_method3345z00_2297) (BgL_method3345z00_2297,
								(obj_t) (BgL_arg3526z00_1498), BgL_stackz00_1485, BEOA);
					}}
					{	/* Reduce/cse.scm 235 */
						obj_t BgL_nexitz00_1490;

						{	/* Reduce/cse.scm 235 */
							int BgL_auxz00_3179;

							BgL_auxz00_3179 = (int) (((long) 1));
							BgL_nexitz00_1490 = BGL_MVALUES_VAL(BgL_auxz00_3179);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3182;

							BgL_auxz00_3182 = (BgL_nodez00_bglt) (BgL_nexitz00_1490);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1484))->
									BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3182), BUNSPEC);
						}
						{	/* Reduce/cse.scm 231 */
							obj_t BgL_stackz72z72_1491;

							if (CBOOL(BgL_resetz00_1489))
								{	/* Reduce/cse.scm 231 */
									BgL_stackz72z72_1491 = BNIL;
								}
							else
								{	/* Reduce/cse.scm 231 */
									BgL_stackz72z72_1491 = BgL_stackz00_1485;
								}
							{	/* Reduce/cse.scm 232 */
								obj_t BgL_resetz72z72_1492;

								{	/* Reduce/cse.scm 233 */
									BgL_nodez00_bglt BgL_arg3525z00_1497;

									BgL_arg3525z00_1497 =
										(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1484))->
										BgL_valuez00);
									{	/* Reduce/cse.scm 233 */
										obj_t BgL_method3345z00_2328;

										{	/* Reduce/cse.scm 233 */
											BgL_objectz00_bglt BgL_objz00_2329;

											BgL_objz00_2329 =
												(BgL_objectz00_bglt) (BgL_arg3525z00_1497);
											{	/* Reduce/cse.scm 233 */
												long BgL_objzd2classzd2numz00_2330;

												BgL_objzd2classzd2numz00_2330 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2329);
												{	/* Reduce/cse.scm 233 */
													obj_t BgL_arg2643z00_2331;

													BgL_arg2643z00_2331 =
														PROCEDURE_REF
														(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
														(int) (((long) 1)));
													{	/* Reduce/cse.scm 233 */
														obj_t BgL_arrayz00_2333;

														int BgL_offsetz00_2334;

														BgL_arrayz00_2333 = BgL_arg2643z00_2331;
														BgL_offsetz00_2334 =
															(int) (BgL_objzd2classzd2numz00_2330);
														{	/* Reduce/cse.scm 233 */
															long BgL_offsetz00_2335;

															BgL_offsetz00_2335 =
																((long) (BgL_offsetz00_2334) - OBJECT_TYPE);
															{	/* Reduce/cse.scm 233 */
																long BgL_modz00_2336;

																{	/* Reduce/cse.scm 233 */
																	int BgL_arg2645z00_2337;

																	BgL_arg2645z00_2337 = (int) (((long) 16));
																	{	/* Reduce/cse.scm 233 */
																		long BgL_auxz00_3196;

																		BgL_auxz00_3196 =
																			(long) (BgL_arg2645z00_2337);
																		BgL_modz00_2336 =
																			(BgL_offsetz00_2335 / BgL_auxz00_3196);
																}}
																{	/* Reduce/cse.scm 233 */
																	long BgL_restz00_2338;

																	{	/* Reduce/cse.scm 233 */
																		int BgL_arg2644z00_2339;

																		BgL_arg2644z00_2339 = (int) (((long) 16));
																		{	/* Reduce/cse.scm 233 */
																			long BgL_auxz00_3200;

																			BgL_auxz00_3200 =
																				(long) (BgL_arg2644z00_2339);
																			BgL_restz00_2338 =
																				(BgL_offsetz00_2335 % BgL_auxz00_3200);
																	}}
																	{	/* Reduce/cse.scm 233 */

																		BgL_method3345z00_2328 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2333,
																				(int) (BgL_modz00_2336)),
																			(int) (BgL_restz00_2338));
										}}}}}}}}
										BgL_resetz72z72_1492 =
											PROCEDURE_ENTRY(BgL_method3345z00_2328)
											(BgL_method3345z00_2328, (obj_t) (BgL_arg3525z00_1497),
											BgL_stackz72z72_1491, BEOA);
								}}
								{	/* Reduce/cse.scm 235 */
									obj_t BgL_nvaluez00_1493;

									{	/* Reduce/cse.scm 235 */
										int BgL_auxz00_3210;

										BgL_auxz00_3210 = (int) (((long) 1));
										BgL_nvaluez00_1493 = BGL_MVALUES_VAL(BgL_auxz00_3210);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3213;

										BgL_auxz00_3213 = (BgL_nodez00_bglt) (BgL_nvaluez00_1493);
										((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1484))->
												BgL_valuez00) =
											((BgL_nodez00_bglt) BgL_auxz00_3213), BUNSPEC);
									}
									{	/* Reduce/cse.scm 235 */
										obj_t BgL_val0_3322z00_1494;

										if (CBOOL(BgL_resetz00_1489))
											{	/* Reduce/cse.scm 235 */
												BgL_val0_3322z00_1494 = BgL_resetz00_1489;
											}
										else
											{	/* Reduce/cse.scm 235 */
												BgL_val0_3322z00_1494 = BgL_resetz72z72_1492;
											}
										{	/* Reduce/cse.scm 235 */
											int BgL_auxz00_3218;

											BgL_auxz00_3218 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3218);
										}
										{	/* Reduce/cse.scm 235 */
											obj_t BgL_auxz00_3223;

											int BgL_auxz00_3221;

											BgL_auxz00_3223 = (obj_t) (BgL_nodez00_1484);
											BgL_auxz00_3221 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3221, BgL_auxz00_3223);
										}
										return BgL_val0_3322z00_1494;
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* node-cse!-set-ex-it3378 */
	obj_t BGl_nodezd2csez12zd2setzd2exzd2it3378z12zzreduce_csez00(obj_t
		BgL_envz00_2597, obj_t BgL_nodez00_2598, obj_t BgL_stackz00_2599)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 216 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1471;

				obj_t BgL_stackz00_1472;

				BgL_nodez00_1471 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2598);
				BgL_stackz00_1472 = BgL_stackz00_2599;
				{	/* Reduce/cse.scm 218 */
					obj_t BgL_resetz00_1476;

					{	/* Reduce/cse.scm 219 */
						BgL_nodez00_bglt BgL_arg3522z00_1480;

						BgL_arg3522z00_1480 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1471))->
							BgL_bodyz00);
						{	/* Reduce/cse.scm 219 */
							obj_t BgL_method3345z00_2263;

							{	/* Reduce/cse.scm 219 */
								BgL_objectz00_bglt BgL_objz00_2264;

								BgL_objz00_2264 = (BgL_objectz00_bglt) (BgL_arg3522z00_1480);
								{	/* Reduce/cse.scm 219 */
									long BgL_objzd2classzd2numz00_2265;

									BgL_objzd2classzd2numz00_2265 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2264);
									{	/* Reduce/cse.scm 219 */
										obj_t BgL_arg2643z00_2266;

										BgL_arg2643z00_2266 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 219 */
											obj_t BgL_arrayz00_2268;

											int BgL_offsetz00_2269;

											BgL_arrayz00_2268 = BgL_arg2643z00_2266;
											BgL_offsetz00_2269 =
												(int) (BgL_objzd2classzd2numz00_2265);
											{	/* Reduce/cse.scm 219 */
												long BgL_offsetz00_2270;

												BgL_offsetz00_2270 =
													((long) (BgL_offsetz00_2269) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 219 */
													long BgL_modz00_2271;

													{	/* Reduce/cse.scm 219 */
														int BgL_arg2645z00_2272;

														BgL_arg2645z00_2272 = (int) (((long) 16));
														{	/* Reduce/cse.scm 219 */
															long BgL_auxz00_3236;

															BgL_auxz00_3236 = (long) (BgL_arg2645z00_2272);
															BgL_modz00_2271 =
																(BgL_offsetz00_2270 / BgL_auxz00_3236);
													}}
													{	/* Reduce/cse.scm 219 */
														long BgL_restz00_2273;

														{	/* Reduce/cse.scm 219 */
															int BgL_arg2644z00_2274;

															BgL_arg2644z00_2274 = (int) (((long) 16));
															{	/* Reduce/cse.scm 219 */
																long BgL_auxz00_3240;

																BgL_auxz00_3240 = (long) (BgL_arg2644z00_2274);
																BgL_restz00_2273 =
																	(BgL_offsetz00_2270 % BgL_auxz00_3240);
														}}
														{	/* Reduce/cse.scm 219 */

															BgL_method3345z00_2263 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2268,
																	(int) (BgL_modz00_2271)),
																(int) (BgL_restz00_2273));
							}}}}}}}}
							BgL_resetz00_1476 =
								PROCEDURE_ENTRY(BgL_method3345z00_2263) (BgL_method3345z00_2263,
								(obj_t) (BgL_arg3522z00_1480), BNIL, BEOA);
					}}
					{	/* Reduce/cse.scm 221 */
						obj_t BgL_nbodyz00_1477;

						{	/* Reduce/cse.scm 221 */
							int BgL_auxz00_3250;

							BgL_auxz00_3250 = (int) (((long) 1));
							BgL_nbodyz00_1477 = BGL_MVALUES_VAL(BgL_auxz00_3250);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3253;

							BgL_auxz00_3253 = (BgL_nodez00_bglt) (BgL_nbodyz00_1477);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1471))->
									BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3253), BUNSPEC);
						}
						{	/* Reduce/cse.scm 221 */
							int BgL_auxz00_3256;

							BgL_auxz00_3256 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3256);
						}
						{	/* Reduce/cse.scm 221 */
							obj_t BgL_auxz00_3261;

							int BgL_auxz00_3259;

							BgL_auxz00_3261 = (obj_t) (BgL_nodez00_1471);
							BgL_auxz00_3259 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3259, BgL_auxz00_3261);
						}
						return BgL_resetz00_1476;
					}
				}
			}
		}
	}



/* node-cse!-let-fun3376 */
	obj_t BGl_nodezd2csez12zd2letzd2fun3376zc0zzreduce_csez00(obj_t
		BgL_envz00_2600, obj_t BgL_nodez00_2601, obj_t BgL_stackz00_2602)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 197 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1443;

				obj_t BgL_stackz00_1444;

				BgL_nodez00_1443 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2601);
				BgL_stackz00_1444 = BgL_stackz00_2602;
				{	/* Reduce/cse.scm 199 */
					obj_t BgL_resetz00_1448;

					{	/* Reduce/cse.scm 200 */
						BgL_nodez00_bglt BgL_arg3520z00_1468;

						BgL_arg3520z00_1468 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1443))->BgL_bodyz00);
						{	/* Reduce/cse.scm 200 */
							obj_t BgL_method3345z00_2193;

							{	/* Reduce/cse.scm 200 */
								BgL_objectz00_bglt BgL_objz00_2194;

								BgL_objz00_2194 = (BgL_objectz00_bglt) (BgL_arg3520z00_1468);
								{	/* Reduce/cse.scm 200 */
									long BgL_objzd2classzd2numz00_2195;

									BgL_objzd2classzd2numz00_2195 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2194);
									{	/* Reduce/cse.scm 200 */
										obj_t BgL_arg2643z00_2196;

										BgL_arg2643z00_2196 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 200 */
											obj_t BgL_arrayz00_2198;

											int BgL_offsetz00_2199;

											BgL_arrayz00_2198 = BgL_arg2643z00_2196;
											BgL_offsetz00_2199 =
												(int) (BgL_objzd2classzd2numz00_2195);
											{	/* Reduce/cse.scm 200 */
												long BgL_offsetz00_2200;

												BgL_offsetz00_2200 =
													((long) (BgL_offsetz00_2199) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 200 */
													long BgL_modz00_2201;

													{	/* Reduce/cse.scm 200 */
														int BgL_arg2645z00_2202;

														BgL_arg2645z00_2202 = (int) (((long) 16));
														{	/* Reduce/cse.scm 200 */
															long BgL_auxz00_3274;

															BgL_auxz00_3274 = (long) (BgL_arg2645z00_2202);
															BgL_modz00_2201 =
																(BgL_offsetz00_2200 / BgL_auxz00_3274);
													}}
													{	/* Reduce/cse.scm 200 */
														long BgL_restz00_2203;

														{	/* Reduce/cse.scm 200 */
															int BgL_arg2644z00_2204;

															BgL_arg2644z00_2204 = (int) (((long) 16));
															{	/* Reduce/cse.scm 200 */
																long BgL_auxz00_3278;

																BgL_auxz00_3278 = (long) (BgL_arg2644z00_2204);
																BgL_restz00_2203 =
																	(BgL_offsetz00_2200 % BgL_auxz00_3278);
														}}
														{	/* Reduce/cse.scm 200 */

															BgL_method3345z00_2193 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2198,
																	(int) (BgL_modz00_2201)),
																(int) (BgL_restz00_2203));
							}}}}}}}}
							BgL_resetz00_1448 =
								PROCEDURE_ENTRY(BgL_method3345z00_2193) (BgL_method3345z00_2193,
								(obj_t) (BgL_arg3520z00_1468), BgL_stackz00_1444, BEOA);
					}}
					{	/* Reduce/cse.scm 211 */
						obj_t BgL_nbodyz00_1449;

						{	/* Reduce/cse.scm 211 */
							int BgL_auxz00_3288;

							BgL_auxz00_3288 = (int) (((long) 1));
							BgL_nbodyz00_1449 = BGL_MVALUES_VAL(BgL_auxz00_3288);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3291;

							BgL_auxz00_3291 = (BgL_nodez00_bglt) (BgL_nbodyz00_1449);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1443))->BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3291), BUNSPEC);
						}
						{
							obj_t BgL_localsz00_1452;

							obj_t BgL_resetz00_1453;

							{	/* Reduce/cse.scm 202 */
								obj_t BgL_arg3512z00_1451;

								BgL_arg3512z00_1451 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1443))->
									BgL_localsz00);
								BgL_localsz00_1452 = BgL_arg3512z00_1451;
								BgL_resetz00_1453 = BgL_resetz00_1448;
							BgL_zc3anonymousza33513ze3z83_1454:
								if (NULLP(BgL_localsz00_1452))
									{	/* Reduce/cse.scm 204 */
										{	/* Reduce/cse.scm 205 */
											int BgL_auxz00_3297;

											BgL_auxz00_3297 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3297);
										}
										{	/* Reduce/cse.scm 205 */
											obj_t BgL_auxz00_3302;

											int BgL_auxz00_3300;

											BgL_auxz00_3302 = (obj_t) (BgL_nodez00_1443);
											BgL_auxz00_3300 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3300, BgL_auxz00_3302);
										}
										return BgL_resetz00_1453;
									}
								else
									{	/* Reduce/cse.scm 206 */
										obj_t BgL_localz00_1458;

										BgL_localz00_1458 = CAR(BgL_localsz00_1452);
										{	/* Reduce/cse.scm 206 */
											BgL_valuez00_bglt BgL_sfunz00_1459;

											{
												BgL_variablez00_bglt BgL_auxz00_3306;

												BgL_auxz00_3306 =
													(BgL_variablez00_bglt) (BgL_localz00_1458);
												BgL_sfunz00_1459 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3306))->
													BgL_valuez00);
											}
											{	/* Reduce/cse.scm 207 */

												{	/* Reduce/cse.scm 208 */
													obj_t BgL_resetz72z72_1460;

													{	/* Reduce/cse.scm 209 */
														obj_t BgL_arg3518z00_1465;

														{
															BgL_sfunz00_bglt BgL_auxz00_3309;

															BgL_auxz00_3309 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_1459);
															BgL_arg3518z00_1465 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3309))->
																BgL_bodyz00);
														}
														{	/* Reduce/cse.scm 209 */
															BgL_nodez00_bglt BgL_nodez00_2229;

															BgL_nodez00_2229 =
																(BgL_nodez00_bglt) (BgL_arg3518z00_1465);
															{	/* Reduce/cse.scm 209 */
																obj_t BgL_method3345z00_2231;

																{	/* Reduce/cse.scm 209 */
																	BgL_objectz00_bglt BgL_objz00_2232;

																	BgL_objz00_2232 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2229);
																	{	/* Reduce/cse.scm 209 */
																		long BgL_objzd2classzd2numz00_2233;

																		BgL_objzd2classzd2numz00_2233 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2232);
																		{	/* Reduce/cse.scm 209 */
																			obj_t BgL_arg2643z00_2234;

																			BgL_arg2643z00_2234 =
																				PROCEDURE_REF
																				(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
																				(int) (((long) 1)));
																			{	/* Reduce/cse.scm 209 */
																				obj_t BgL_arrayz00_2236;

																				int BgL_offsetz00_2237;

																				BgL_arrayz00_2236 = BgL_arg2643z00_2234;
																				BgL_offsetz00_2237 =
																					(int) (BgL_objzd2classzd2numz00_2233);
																				{	/* Reduce/cse.scm 209 */
																					long BgL_offsetz00_2238;

																					BgL_offsetz00_2238 =
																						(
																						(long) (BgL_offsetz00_2237) -
																						OBJECT_TYPE);
																					{	/* Reduce/cse.scm 209 */
																						long BgL_modz00_2239;

																						{	/* Reduce/cse.scm 209 */
																							int BgL_arg2645z00_2240;

																							BgL_arg2645z00_2240 =
																								(int) (((long) 16));
																							{	/* Reduce/cse.scm 209 */
																								long BgL_auxz00_3321;

																								BgL_auxz00_3321 =
																									(long) (BgL_arg2645z00_2240);
																								BgL_modz00_2239 =
																									(BgL_offsetz00_2238 /
																									BgL_auxz00_3321);
																						}}
																						{	/* Reduce/cse.scm 209 */
																							long BgL_restz00_2241;

																							{	/* Reduce/cse.scm 209 */
																								int BgL_arg2644z00_2242;

																								BgL_arg2644z00_2242 =
																									(int) (((long) 16));
																								{	/* Reduce/cse.scm 209 */
																									long BgL_auxz00_3325;

																									BgL_auxz00_3325 =
																										(long)
																										(BgL_arg2644z00_2242);
																									BgL_restz00_2241 =
																										(BgL_offsetz00_2238 %
																										BgL_auxz00_3325);
																							}}
																							{	/* Reduce/cse.scm 209 */

																								BgL_method3345z00_2231 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2236,
																										(int) (BgL_modz00_2239)),
																									(int) (BgL_restz00_2241));
																}}}}}}}}
																BgL_resetz72z72_1460 =
																	PROCEDURE_ENTRY(BgL_method3345z00_2231)
																	(BgL_method3345z00_2231,
																	(obj_t) (BgL_nodez00_2229), BNIL, BEOA);
													}}}
													{	/* Reduce/cse.scm 211 */
														obj_t BgL_nbodyz00_1461;

														{	/* Reduce/cse.scm 211 */
															int BgL_auxz00_3335;

															BgL_auxz00_3335 = (int) (((long) 1));
															BgL_nbodyz00_1461 =
																BGL_MVALUES_VAL(BgL_auxz00_3335);
														}
														{
															BgL_sfunz00_bglt BgL_auxz00_3338;

															BgL_auxz00_3338 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_1459);
															((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3338))->
																	BgL_bodyz00) =
																((obj_t) BgL_nbodyz00_1461), BUNSPEC);
														}
														{	/* Reduce/cse.scm 211 */
															obj_t BgL_arg3515z00_1462;

															obj_t BgL_arg3517z00_1463;

															BgL_arg3515z00_1462 = CDR(BgL_localsz00_1452);
															if (CBOOL(BgL_resetz00_1453))
																{	/* Reduce/cse.scm 211 */
																	BgL_arg3517z00_1463 = BgL_resetz00_1453;
																}
															else
																{	/* Reduce/cse.scm 211 */
																	BgL_arg3517z00_1463 = BgL_resetz72z72_1460;
																}
															{
																obj_t BgL_resetz00_3345;

																obj_t BgL_localsz00_3344;

																BgL_localsz00_3344 = BgL_arg3515z00_1462;
																BgL_resetz00_3345 = BgL_arg3517z00_1463;
																BgL_resetz00_1453 = BgL_resetz00_3345;
																BgL_localsz00_1452 = BgL_localsz00_3344;
																goto BgL_zc3anonymousza33513ze3z83_1454;
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
	}



/* node-cse!-select3374 */
	obj_t BGl_nodezd2csez12zd2select3374z12zzreduce_csez00(obj_t BgL_envz00_2603,
		obj_t BgL_nodez00_2604, obj_t BgL_stackz00_2605)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 178 */
			{
				BgL_selectz00_bglt BgL_nodez00_1416;

				obj_t BgL_stackz00_1417;

				BgL_nodez00_1416 = (BgL_selectz00_bglt) (BgL_nodez00_2604);
				BgL_stackz00_1417 = BgL_stackz00_2605;
				{	/* Reduce/cse.scm 180 */
					obj_t BgL_resetz00_1421;

					{	/* Reduce/cse.scm 181 */
						BgL_nodez00_bglt BgL_arg3510z00_1440;

						BgL_arg3510z00_1440 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1416))->BgL_testz00);
						{	/* Reduce/cse.scm 181 */
							obj_t BgL_method3345z00_2124;

							{	/* Reduce/cse.scm 181 */
								BgL_objectz00_bglt BgL_objz00_2125;

								BgL_objz00_2125 = (BgL_objectz00_bglt) (BgL_arg3510z00_1440);
								{	/* Reduce/cse.scm 181 */
									long BgL_objzd2classzd2numz00_2126;

									BgL_objzd2classzd2numz00_2126 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2125);
									{	/* Reduce/cse.scm 181 */
										obj_t BgL_arg2643z00_2127;

										BgL_arg2643z00_2127 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 181 */
											obj_t BgL_arrayz00_2129;

											int BgL_offsetz00_2130;

											BgL_arrayz00_2129 = BgL_arg2643z00_2127;
											BgL_offsetz00_2130 =
												(int) (BgL_objzd2classzd2numz00_2126);
											{	/* Reduce/cse.scm 181 */
												long BgL_offsetz00_2131;

												BgL_offsetz00_2131 =
													((long) (BgL_offsetz00_2130) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 181 */
													long BgL_modz00_2132;

													{	/* Reduce/cse.scm 181 */
														int BgL_arg2645z00_2133;

														BgL_arg2645z00_2133 = (int) (((long) 16));
														{	/* Reduce/cse.scm 181 */
															long BgL_auxz00_3356;

															BgL_auxz00_3356 = (long) (BgL_arg2645z00_2133);
															BgL_modz00_2132 =
																(BgL_offsetz00_2131 / BgL_auxz00_3356);
													}}
													{	/* Reduce/cse.scm 181 */
														long BgL_restz00_2134;

														{	/* Reduce/cse.scm 181 */
															int BgL_arg2644z00_2135;

															BgL_arg2644z00_2135 = (int) (((long) 16));
															{	/* Reduce/cse.scm 181 */
																long BgL_auxz00_3360;

																BgL_auxz00_3360 = (long) (BgL_arg2644z00_2135);
																BgL_restz00_2134 =
																	(BgL_offsetz00_2131 % BgL_auxz00_3360);
														}}
														{	/* Reduce/cse.scm 181 */

															BgL_method3345z00_2124 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2129,
																	(int) (BgL_modz00_2132)),
																(int) (BgL_restz00_2134));
							}}}}}}}}
							BgL_resetz00_1421 =
								PROCEDURE_ENTRY(BgL_method3345z00_2124) (BgL_method3345z00_2124,
								(obj_t) (BgL_arg3510z00_1440), BgL_stackz00_1417, BEOA);
					}}
					{	/* Reduce/cse.scm 192 */
						obj_t BgL_ntestz00_1422;

						{	/* Reduce/cse.scm 192 */
							int BgL_auxz00_3370;

							BgL_auxz00_3370 = (int) (((long) 1));
							BgL_ntestz00_1422 = BGL_MVALUES_VAL(BgL_auxz00_3370);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3373;

							BgL_auxz00_3373 = (BgL_nodez00_bglt) (BgL_ntestz00_1422);
							((((BgL_selectz00_bglt) CREF(BgL_nodez00_1416))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3373), BUNSPEC);
						}
						{
							obj_t BgL_clausesz00_1426;

							obj_t BgL_resetz00_1427;

							{	/* Reduce/cse.scm 184 */
								obj_t BgL_arg3504z00_1425;

								BgL_arg3504z00_1425 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1416))->
									BgL_clausesz00);
								BgL_clausesz00_1426 = BgL_arg3504z00_1425;
								BgL_resetz00_1427 = BgL_resetz00_1421;
							BgL_zc3anonymousza33505ze3z83_1428:
								if (NULLP(BgL_clausesz00_1426))
									{	/* Reduce/cse.scm 186 */
										{	/* Reduce/cse.scm 187 */
											int BgL_auxz00_3379;

											BgL_auxz00_3379 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3379);
										}
										{	/* Reduce/cse.scm 187 */
											obj_t BgL_auxz00_3384;

											int BgL_auxz00_3382;

											BgL_auxz00_3384 = (obj_t) (BgL_nodez00_1416);
											BgL_auxz00_3382 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3382, BgL_auxz00_3384);
										}
										return BgL_resetz00_1427;
									}
								else
									{	/* Reduce/cse.scm 188 */
										obj_t BgL_clausez00_1432;

										BgL_clausez00_1432 = CAR(BgL_clausesz00_1426);
										{	/* Reduce/cse.scm 189 */
											obj_t BgL_resetz72z72_1433;

											{	/* Reduce/cse.scm 190 */
												obj_t BgL_arg3509z00_1438;

												BgL_arg3509z00_1438 = CDR(BgL_clausez00_1432);
												{	/* Reduce/cse.scm 190 */
													BgL_nodez00_bglt BgL_nodez00_2159;

													BgL_nodez00_2159 =
														(BgL_nodez00_bglt) (BgL_arg3509z00_1438);
													{	/* Reduce/cse.scm 190 */
														obj_t BgL_method3345z00_2161;

														{	/* Reduce/cse.scm 190 */
															BgL_objectz00_bglt BgL_objz00_2162;

															BgL_objz00_2162 =
																(BgL_objectz00_bglt) (BgL_nodez00_2159);
															{	/* Reduce/cse.scm 190 */
																long BgL_objzd2classzd2numz00_2163;

																BgL_objzd2classzd2numz00_2163 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2162);
																{	/* Reduce/cse.scm 190 */
																	obj_t BgL_arg2643z00_2164;

																	BgL_arg2643z00_2164 =
																		PROCEDURE_REF
																		(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
																		(int) (((long) 1)));
																	{	/* Reduce/cse.scm 190 */
																		obj_t BgL_arrayz00_2166;

																		int BgL_offsetz00_2167;

																		BgL_arrayz00_2166 = BgL_arg2643z00_2164;
																		BgL_offsetz00_2167 =
																			(int) (BgL_objzd2classzd2numz00_2163);
																		{	/* Reduce/cse.scm 190 */
																			long BgL_offsetz00_2168;

																			BgL_offsetz00_2168 =
																				(
																				(long) (BgL_offsetz00_2167) -
																				OBJECT_TYPE);
																			{	/* Reduce/cse.scm 190 */
																				long BgL_modz00_2169;

																				{	/* Reduce/cse.scm 190 */
																					int BgL_arg2645z00_2170;

																					BgL_arg2645z00_2170 =
																						(int) (((long) 16));
																					{	/* Reduce/cse.scm 190 */
																						long BgL_auxz00_3398;

																						BgL_auxz00_3398 =
																							(long) (BgL_arg2645z00_2170);
																						BgL_modz00_2169 =
																							(BgL_offsetz00_2168 /
																							BgL_auxz00_3398);
																				}}
																				{	/* Reduce/cse.scm 190 */
																					long BgL_restz00_2171;

																					{	/* Reduce/cse.scm 190 */
																						int BgL_arg2644z00_2172;

																						BgL_arg2644z00_2172 =
																							(int) (((long) 16));
																						{	/* Reduce/cse.scm 190 */
																							long BgL_auxz00_3402;

																							BgL_auxz00_3402 =
																								(long) (BgL_arg2644z00_2172);
																							BgL_restz00_2171 =
																								(BgL_offsetz00_2168 %
																								BgL_auxz00_3402);
																					}}
																					{	/* Reduce/cse.scm 190 */

																						BgL_method3345z00_2161 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2166,
																								(int) (BgL_modz00_2169)),
																							(int) (BgL_restz00_2171));
														}}}}}}}}
														BgL_resetz72z72_1433 =
															PROCEDURE_ENTRY(BgL_method3345z00_2161)
															(BgL_method3345z00_2161,
															(obj_t) (BgL_nodez00_2159), BgL_stackz00_1417,
															BEOA);
											}}}
											{	/* Reduce/cse.scm 192 */
												obj_t BgL_nclausez00_1434;

												{	/* Reduce/cse.scm 192 */
													int BgL_auxz00_3412;

													BgL_auxz00_3412 = (int) (((long) 1));
													BgL_nclausez00_1434 =
														BGL_MVALUES_VAL(BgL_auxz00_3412);
												}
												SET_CDR(BgL_clausez00_1432, BgL_nclausez00_1434);
												{	/* Reduce/cse.scm 192 */
													obj_t BgL_arg3507z00_1435;

													obj_t BgL_arg3508z00_1436;

													BgL_arg3507z00_1435 = CDR(BgL_clausesz00_1426);
													if (CBOOL(BgL_resetz00_1427))
														{	/* Reduce/cse.scm 192 */
															BgL_arg3508z00_1436 = BgL_resetz00_1427;
														}
													else
														{	/* Reduce/cse.scm 192 */
															BgL_arg3508z00_1436 = BgL_resetz72z72_1433;
														}
													{
														obj_t BgL_resetz00_3420;

														obj_t BgL_clausesz00_3419;

														BgL_clausesz00_3419 = BgL_arg3507z00_1435;
														BgL_resetz00_3420 = BgL_arg3508z00_1436;
														BgL_resetz00_1427 = BgL_resetz00_3420;
														BgL_clausesz00_1426 = BgL_clausesz00_3419;
														goto BgL_zc3anonymousza33505ze3z83_1428;
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



/* node-cse!-fail3372 */
	obj_t BGl_nodezd2csez12zd2fail3372z12zzreduce_csez00(obj_t BgL_envz00_2606,
		obj_t BgL_nodez00_2607, obj_t BgL_stackz00_2608)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 160 */
			{
				BgL_failz00_bglt BgL_nodez00_1394;

				obj_t BgL_stackz00_1395;

				BgL_nodez00_1394 = (BgL_failz00_bglt) (BgL_nodez00_2607);
				BgL_stackz00_1395 = BgL_stackz00_2608;
				{	/* Reduce/cse.scm 162 */
					obj_t BgL_resetz00_1399;

					{	/* Reduce/cse.scm 163 */
						BgL_nodez00_bglt BgL_arg3502z00_1413;

						BgL_arg3502z00_1413 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1394))->BgL_procz00);
						{	/* Reduce/cse.scm 163 */
							obj_t BgL_method3345z00_2028;

							{	/* Reduce/cse.scm 163 */
								BgL_objectz00_bglt BgL_objz00_2029;

								BgL_objz00_2029 = (BgL_objectz00_bglt) (BgL_arg3502z00_1413);
								{	/* Reduce/cse.scm 163 */
									long BgL_objzd2classzd2numz00_2030;

									BgL_objzd2classzd2numz00_2030 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2029);
									{	/* Reduce/cse.scm 163 */
										obj_t BgL_arg2643z00_2031;

										BgL_arg2643z00_2031 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 163 */
											obj_t BgL_arrayz00_2033;

											int BgL_offsetz00_2034;

											BgL_arrayz00_2033 = BgL_arg2643z00_2031;
											BgL_offsetz00_2034 =
												(int) (BgL_objzd2classzd2numz00_2030);
											{	/* Reduce/cse.scm 163 */
												long BgL_offsetz00_2035;

												BgL_offsetz00_2035 =
													((long) (BgL_offsetz00_2034) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 163 */
													long BgL_modz00_2036;

													{	/* Reduce/cse.scm 163 */
														int BgL_arg2645z00_2037;

														BgL_arg2645z00_2037 = (int) (((long) 16));
														{	/* Reduce/cse.scm 163 */
															long BgL_auxz00_3431;

															BgL_auxz00_3431 = (long) (BgL_arg2645z00_2037);
															BgL_modz00_2036 =
																(BgL_offsetz00_2035 / BgL_auxz00_3431);
													}}
													{	/* Reduce/cse.scm 163 */
														long BgL_restz00_2038;

														{	/* Reduce/cse.scm 163 */
															int BgL_arg2644z00_2039;

															BgL_arg2644z00_2039 = (int) (((long) 16));
															{	/* Reduce/cse.scm 163 */
																long BgL_auxz00_3435;

																BgL_auxz00_3435 = (long) (BgL_arg2644z00_2039);
																BgL_restz00_2038 =
																	(BgL_offsetz00_2035 % BgL_auxz00_3435);
														}}
														{	/* Reduce/cse.scm 163 */

															BgL_method3345z00_2028 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2033,
																	(int) (BgL_modz00_2036)),
																(int) (BgL_restz00_2038));
							}}}}}}}}
							BgL_resetz00_1399 =
								PROCEDURE_ENTRY(BgL_method3345z00_2028) (BgL_method3345z00_2028,
								(obj_t) (BgL_arg3502z00_1413), BgL_stackz00_1395, BEOA);
					}}
					{	/* Reduce/cse.scm 173 */
						obj_t BgL_nprocz00_1400;

						{	/* Reduce/cse.scm 173 */
							int BgL_auxz00_3445;

							BgL_auxz00_3445 = (int) (((long) 1));
							BgL_nprocz00_1400 = BGL_MVALUES_VAL(BgL_auxz00_3445);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3448;

							BgL_auxz00_3448 = (BgL_nodez00_bglt) (BgL_nprocz00_1400);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1394))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3448), BUNSPEC);
						}
						{	/* Reduce/cse.scm 165 */
							obj_t BgL_stackz72z72_1401;

							if (CBOOL(BgL_resetz00_1399))
								{	/* Reduce/cse.scm 165 */
									BgL_stackz72z72_1401 = BNIL;
								}
							else
								{	/* Reduce/cse.scm 165 */
									BgL_stackz72z72_1401 = BgL_stackz00_1395;
								}
							{	/* Reduce/cse.scm 166 */
								obj_t BgL_resetz72z72_1402;

								{	/* Reduce/cse.scm 167 */
									BgL_nodez00_bglt BgL_arg3501z00_1412;

									BgL_arg3501z00_1412 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1394))->BgL_msgz00);
									{	/* Reduce/cse.scm 167 */
										obj_t BgL_method3345z00_2059;

										{	/* Reduce/cse.scm 167 */
											BgL_objectz00_bglt BgL_objz00_2060;

											BgL_objz00_2060 =
												(BgL_objectz00_bglt) (BgL_arg3501z00_1412);
											{	/* Reduce/cse.scm 167 */
												long BgL_objzd2classzd2numz00_2061;

												BgL_objzd2classzd2numz00_2061 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2060);
												{	/* Reduce/cse.scm 167 */
													obj_t BgL_arg2643z00_2062;

													BgL_arg2643z00_2062 =
														PROCEDURE_REF
														(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
														(int) (((long) 1)));
													{	/* Reduce/cse.scm 167 */
														obj_t BgL_arrayz00_2064;

														int BgL_offsetz00_2065;

														BgL_arrayz00_2064 = BgL_arg2643z00_2062;
														BgL_offsetz00_2065 =
															(int) (BgL_objzd2classzd2numz00_2061);
														{	/* Reduce/cse.scm 167 */
															long BgL_offsetz00_2066;

															BgL_offsetz00_2066 =
																((long) (BgL_offsetz00_2065) - OBJECT_TYPE);
															{	/* Reduce/cse.scm 167 */
																long BgL_modz00_2067;

																{	/* Reduce/cse.scm 167 */
																	int BgL_arg2645z00_2068;

																	BgL_arg2645z00_2068 = (int) (((long) 16));
																	{	/* Reduce/cse.scm 167 */
																		long BgL_auxz00_3462;

																		BgL_auxz00_3462 =
																			(long) (BgL_arg2645z00_2068);
																		BgL_modz00_2067 =
																			(BgL_offsetz00_2066 / BgL_auxz00_3462);
																}}
																{	/* Reduce/cse.scm 167 */
																	long BgL_restz00_2069;

																	{	/* Reduce/cse.scm 167 */
																		int BgL_arg2644z00_2070;

																		BgL_arg2644z00_2070 = (int) (((long) 16));
																		{	/* Reduce/cse.scm 167 */
																			long BgL_auxz00_3466;

																			BgL_auxz00_3466 =
																				(long) (BgL_arg2644z00_2070);
																			BgL_restz00_2069 =
																				(BgL_offsetz00_2066 % BgL_auxz00_3466);
																	}}
																	{	/* Reduce/cse.scm 167 */

																		BgL_method3345z00_2059 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2064,
																				(int) (BgL_modz00_2067)),
																			(int) (BgL_restz00_2069));
										}}}}}}}}
										BgL_resetz72z72_1402 =
											PROCEDURE_ENTRY(BgL_method3345z00_2059)
											(BgL_method3345z00_2059, (obj_t) (BgL_arg3501z00_1412),
											BgL_stackz72z72_1401, BEOA);
								}}
								{	/* Reduce/cse.scm 173 */
									obj_t BgL_nmsgz00_1403;

									{	/* Reduce/cse.scm 173 */
										int BgL_auxz00_3476;

										BgL_auxz00_3476 = (int) (((long) 1));
										BgL_nmsgz00_1403 = BGL_MVALUES_VAL(BgL_auxz00_3476);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3479;

										BgL_auxz00_3479 = (BgL_nodez00_bglt) (BgL_nmsgz00_1403);
										((((BgL_failz00_bglt) CREF(BgL_nodez00_1394))->BgL_msgz00) =
											((BgL_nodez00_bglt) BgL_auxz00_3479), BUNSPEC);
									}
									{	/* Reduce/cse.scm 169 */
										obj_t BgL_stackz72z72z00_1404;

										if (CBOOL(BgL_resetz72z72_1402))
											{	/* Reduce/cse.scm 169 */
												BgL_stackz72z72z00_1404 = BNIL;
											}
										else
											{	/* Reduce/cse.scm 169 */
												BgL_stackz72z72z00_1404 = BgL_stackz72z72_1401;
											}
										{	/* Reduce/cse.scm 170 */
											obj_t BgL_resetz72z72z00_1405;

											{	/* Reduce/cse.scm 171 */
												BgL_nodez00_bglt BgL_arg3500z00_1411;

												BgL_arg3500z00_1411 =
													(((BgL_failz00_bglt) CREF(BgL_nodez00_1394))->
													BgL_objz00);
												{	/* Reduce/cse.scm 171 */
													obj_t BgL_method3345z00_2090;

													{	/* Reduce/cse.scm 171 */
														BgL_objectz00_bglt BgL_objz00_2091;

														BgL_objz00_2091 =
															(BgL_objectz00_bglt) (BgL_arg3500z00_1411);
														{	/* Reduce/cse.scm 171 */
															long BgL_objzd2classzd2numz00_2092;

															BgL_objzd2classzd2numz00_2092 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2091);
															{	/* Reduce/cse.scm 171 */
																obj_t BgL_arg2643z00_2093;

																BgL_arg2643z00_2093 =
																	PROCEDURE_REF
																	(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
																	(int) (((long) 1)));
																{	/* Reduce/cse.scm 171 */
																	obj_t BgL_arrayz00_2095;

																	int BgL_offsetz00_2096;

																	BgL_arrayz00_2095 = BgL_arg2643z00_2093;
																	BgL_offsetz00_2096 =
																		(int) (BgL_objzd2classzd2numz00_2092);
																	{	/* Reduce/cse.scm 171 */
																		long BgL_offsetz00_2097;

																		BgL_offsetz00_2097 =
																			(
																			(long) (BgL_offsetz00_2096) -
																			OBJECT_TYPE);
																		{	/* Reduce/cse.scm 171 */
																			long BgL_modz00_2098;

																			{	/* Reduce/cse.scm 171 */
																				int BgL_arg2645z00_2099;

																				BgL_arg2645z00_2099 =
																					(int) (((long) 16));
																				{	/* Reduce/cse.scm 171 */
																					long BgL_auxz00_3493;

																					BgL_auxz00_3493 =
																						(long) (BgL_arg2645z00_2099);
																					BgL_modz00_2098 =
																						(BgL_offsetz00_2097 /
																						BgL_auxz00_3493);
																			}}
																			{	/* Reduce/cse.scm 171 */
																				long BgL_restz00_2100;

																				{	/* Reduce/cse.scm 171 */
																					int BgL_arg2644z00_2101;

																					BgL_arg2644z00_2101 =
																						(int) (((long) 16));
																					{	/* Reduce/cse.scm 171 */
																						long BgL_auxz00_3497;

																						BgL_auxz00_3497 =
																							(long) (BgL_arg2644z00_2101);
																						BgL_restz00_2100 =
																							(BgL_offsetz00_2097 %
																							BgL_auxz00_3497);
																				}}
																				{	/* Reduce/cse.scm 171 */

																					BgL_method3345z00_2090 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2095,
																							(int) (BgL_modz00_2098)),
																						(int) (BgL_restz00_2100));
													}}}}}}}}
													BgL_resetz72z72z00_1405 =
														PROCEDURE_ENTRY(BgL_method3345z00_2090)
														(BgL_method3345z00_2090,
														(obj_t) (BgL_arg3500z00_1411),
														BgL_stackz72z72z00_1404, BEOA);
											}}
											{	/* Reduce/cse.scm 173 */
												obj_t BgL_nobjz00_1406;

												{	/* Reduce/cse.scm 173 */
													int BgL_auxz00_3507;

													BgL_auxz00_3507 = (int) (((long) 1));
													BgL_nobjz00_1406 = BGL_MVALUES_VAL(BgL_auxz00_3507);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_3510;

													BgL_auxz00_3510 =
														(BgL_nodez00_bglt) (BgL_nobjz00_1406);
													((((BgL_failz00_bglt) CREF(BgL_nodez00_1394))->
															BgL_objz00) =
														((BgL_nodez00_bglt) BgL_auxz00_3510), BUNSPEC);
												}
												{	/* Reduce/cse.scm 173 */
													obj_t BgL_val0_3314z00_1407;

													if (CBOOL(BgL_resetz00_1399))
														{	/* Reduce/cse.scm 173 */
															BgL_val0_3314z00_1407 = BgL_resetz00_1399;
														}
													else
														{	/* Reduce/cse.scm 173 */
															if (CBOOL(BgL_resetz72z72_1402))
																{	/* Reduce/cse.scm 173 */
																	BgL_val0_3314z00_1407 = BgL_resetz72z72_1402;
																}
															else
																{	/* Reduce/cse.scm 173 */
																	BgL_val0_3314z00_1407 =
																		BgL_resetz72z72z00_1405;
																}
														}
													{	/* Reduce/cse.scm 173 */
														int BgL_auxz00_3517;

														BgL_auxz00_3517 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_3517);
													}
													{	/* Reduce/cse.scm 173 */
														obj_t BgL_auxz00_3522;

														int BgL_auxz00_3520;

														BgL_auxz00_3522 = (obj_t) (BgL_nodez00_1394);
														BgL_auxz00_3520 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_3520,
															BgL_auxz00_3522);
													}
													return BgL_val0_3314z00_1407;
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



/* node-cse!-conditiona3370 */
	obj_t BGl_nodezd2csez12zd2conditiona3370z12zzreduce_csez00(obj_t
		BgL_envz00_2609, obj_t BgL_nodez00_2610, obj_t BgL_stackz00_2611)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 143 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1373;

				obj_t BgL_stackz00_1374;

				BgL_nodez00_1373 = (BgL_conditionalz00_bglt) (BgL_nodez00_2610);
				BgL_stackz00_1374 = BgL_stackz00_2611;
				{	/* Reduce/cse.scm 145 */
					obj_t BgL_resetz00_1378;

					{	/* Reduce/cse.scm 146 */
						BgL_nodez00_bglt BgL_arg3498z00_1391;

						BgL_arg3498z00_1391 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->BgL_testz00);
						{	/* Reduce/cse.scm 146 */
							obj_t BgL_method3345z00_1932;

							{	/* Reduce/cse.scm 146 */
								BgL_objectz00_bglt BgL_objz00_1933;

								BgL_objz00_1933 = (BgL_objectz00_bglt) (BgL_arg3498z00_1391);
								{	/* Reduce/cse.scm 146 */
									long BgL_objzd2classzd2numz00_1934;

									BgL_objzd2classzd2numz00_1934 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1933);
									{	/* Reduce/cse.scm 146 */
										obj_t BgL_arg2643z00_1935;

										BgL_arg2643z00_1935 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 146 */
											obj_t BgL_arrayz00_1937;

											int BgL_offsetz00_1938;

											BgL_arrayz00_1937 = BgL_arg2643z00_1935;
											BgL_offsetz00_1938 =
												(int) (BgL_objzd2classzd2numz00_1934);
											{	/* Reduce/cse.scm 146 */
												long BgL_offsetz00_1939;

												BgL_offsetz00_1939 =
													((long) (BgL_offsetz00_1938) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 146 */
													long BgL_modz00_1940;

													{	/* Reduce/cse.scm 146 */
														int BgL_arg2645z00_1941;

														BgL_arg2645z00_1941 = (int) (((long) 16));
														{	/* Reduce/cse.scm 146 */
															long BgL_auxz00_3535;

															BgL_auxz00_3535 = (long) (BgL_arg2645z00_1941);
															BgL_modz00_1940 =
																(BgL_offsetz00_1939 / BgL_auxz00_3535);
													}}
													{	/* Reduce/cse.scm 146 */
														long BgL_restz00_1942;

														{	/* Reduce/cse.scm 146 */
															int BgL_arg2644z00_1943;

															BgL_arg2644z00_1943 = (int) (((long) 16));
															{	/* Reduce/cse.scm 146 */
																long BgL_auxz00_3539;

																BgL_auxz00_3539 = (long) (BgL_arg2644z00_1943);
																BgL_restz00_1942 =
																	(BgL_offsetz00_1939 % BgL_auxz00_3539);
														}}
														{	/* Reduce/cse.scm 146 */

															BgL_method3345z00_1932 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1937,
																	(int) (BgL_modz00_1940)),
																(int) (BgL_restz00_1942));
							}}}}}}}}
							BgL_resetz00_1378 =
								PROCEDURE_ENTRY(BgL_method3345z00_1932) (BgL_method3345z00_1932,
								(obj_t) (BgL_arg3498z00_1391), BgL_stackz00_1374, BEOA);
					}}
					{	/* Reduce/cse.scm 155 */
						obj_t BgL_ntestz00_1379;

						{	/* Reduce/cse.scm 155 */
							int BgL_auxz00_3549;

							BgL_auxz00_3549 = (int) (((long) 1));
							BgL_ntestz00_1379 = BGL_MVALUES_VAL(BgL_auxz00_3549);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3552;

							BgL_auxz00_3552 = (BgL_nodez00_bglt) (BgL_ntestz00_1379);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->
									BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_3552), BUNSPEC);
						}
						{	/* Reduce/cse.scm 148 */
							obj_t BgL_stackz72z72_1380;

							if (CBOOL(BgL_resetz00_1378))
								{	/* Reduce/cse.scm 148 */
									BgL_stackz72z72_1380 = BNIL;
								}
							else
								{	/* Reduce/cse.scm 148 */
									BgL_stackz72z72_1380 = BgL_stackz00_1374;
								}
							{	/* Reduce/cse.scm 149 */
								obj_t BgL_resetz72z72_1381;

								{	/* Reduce/cse.scm 150 */
									BgL_nodez00_bglt BgL_arg3497z00_1390;

									BgL_arg3497z00_1390 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->
										BgL_truez00);
									{	/* Reduce/cse.scm 150 */
										obj_t BgL_method3345z00_1963;

										{	/* Reduce/cse.scm 150 */
											BgL_objectz00_bglt BgL_objz00_1964;

											BgL_objz00_1964 =
												(BgL_objectz00_bglt) (BgL_arg3497z00_1390);
											{	/* Reduce/cse.scm 150 */
												long BgL_objzd2classzd2numz00_1965;

												BgL_objzd2classzd2numz00_1965 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1964);
												{	/* Reduce/cse.scm 150 */
													obj_t BgL_arg2643z00_1966;

													BgL_arg2643z00_1966 =
														PROCEDURE_REF
														(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
														(int) (((long) 1)));
													{	/* Reduce/cse.scm 150 */
														obj_t BgL_arrayz00_1968;

														int BgL_offsetz00_1969;

														BgL_arrayz00_1968 = BgL_arg2643z00_1966;
														BgL_offsetz00_1969 =
															(int) (BgL_objzd2classzd2numz00_1965);
														{	/* Reduce/cse.scm 150 */
															long BgL_offsetz00_1970;

															BgL_offsetz00_1970 =
																((long) (BgL_offsetz00_1969) - OBJECT_TYPE);
															{	/* Reduce/cse.scm 150 */
																long BgL_modz00_1971;

																{	/* Reduce/cse.scm 150 */
																	int BgL_arg2645z00_1972;

																	BgL_arg2645z00_1972 = (int) (((long) 16));
																	{	/* Reduce/cse.scm 150 */
																		long BgL_auxz00_3566;

																		BgL_auxz00_3566 =
																			(long) (BgL_arg2645z00_1972);
																		BgL_modz00_1971 =
																			(BgL_offsetz00_1970 / BgL_auxz00_3566);
																}}
																{	/* Reduce/cse.scm 150 */
																	long BgL_restz00_1973;

																	{	/* Reduce/cse.scm 150 */
																		int BgL_arg2644z00_1974;

																		BgL_arg2644z00_1974 = (int) (((long) 16));
																		{	/* Reduce/cse.scm 150 */
																			long BgL_auxz00_3570;

																			BgL_auxz00_3570 =
																				(long) (BgL_arg2644z00_1974);
																			BgL_restz00_1973 =
																				(BgL_offsetz00_1970 % BgL_auxz00_3570);
																	}}
																	{	/* Reduce/cse.scm 150 */

																		BgL_method3345z00_1963 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1968,
																				(int) (BgL_modz00_1971)),
																			(int) (BgL_restz00_1973));
										}}}}}}}}
										BgL_resetz72z72_1381 =
											PROCEDURE_ENTRY(BgL_method3345z00_1963)
											(BgL_method3345z00_1963, (obj_t) (BgL_arg3497z00_1390),
											BgL_stackz72z72_1380, BEOA);
								}}
								{	/* Reduce/cse.scm 155 */
									obj_t BgL_ntruez00_1382;

									{	/* Reduce/cse.scm 155 */
										int BgL_auxz00_3580;

										BgL_auxz00_3580 = (int) (((long) 1));
										BgL_ntruez00_1382 = BGL_MVALUES_VAL(BgL_auxz00_3580);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3583;

										BgL_auxz00_3583 = (BgL_nodez00_bglt) (BgL_ntruez00_1382);
										((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->
												BgL_truez00) =
											((BgL_nodez00_bglt) BgL_auxz00_3583), BUNSPEC);
									}
									{	/* Reduce/cse.scm 152 */
										obj_t BgL_resetz72z72z00_1383;

										{	/* Reduce/cse.scm 153 */
											BgL_nodez00_bglt BgL_arg3496z00_1389;

											BgL_arg3496z00_1389 =
												(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->
												BgL_falsez00);
											{	/* Reduce/cse.scm 153 */
												obj_t BgL_method3345z00_1994;

												{	/* Reduce/cse.scm 153 */
													BgL_objectz00_bglt BgL_objz00_1995;

													BgL_objz00_1995 =
														(BgL_objectz00_bglt) (BgL_arg3496z00_1389);
													{	/* Reduce/cse.scm 153 */
														long BgL_objzd2classzd2numz00_1996;

														BgL_objzd2classzd2numz00_1996 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1995);
														{	/* Reduce/cse.scm 153 */
															obj_t BgL_arg2643z00_1997;

															BgL_arg2643z00_1997 =
																PROCEDURE_REF
																(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
																(int) (((long) 1)));
															{	/* Reduce/cse.scm 153 */
																obj_t BgL_arrayz00_1999;

																int BgL_offsetz00_2000;

																BgL_arrayz00_1999 = BgL_arg2643z00_1997;
																BgL_offsetz00_2000 =
																	(int) (BgL_objzd2classzd2numz00_1996);
																{	/* Reduce/cse.scm 153 */
																	long BgL_offsetz00_2001;

																	BgL_offsetz00_2001 =
																		((long) (BgL_offsetz00_2000) - OBJECT_TYPE);
																	{	/* Reduce/cse.scm 153 */
																		long BgL_modz00_2002;

																		{	/* Reduce/cse.scm 153 */
																			int BgL_arg2645z00_2003;

																			BgL_arg2645z00_2003 = (int) (((long) 16));
																			{	/* Reduce/cse.scm 153 */
																				long BgL_auxz00_3595;

																				BgL_auxz00_3595 =
																					(long) (BgL_arg2645z00_2003);
																				BgL_modz00_2002 =
																					(BgL_offsetz00_2001 /
																					BgL_auxz00_3595);
																		}}
																		{	/* Reduce/cse.scm 153 */
																			long BgL_restz00_2004;

																			{	/* Reduce/cse.scm 153 */
																				int BgL_arg2644z00_2005;

																				BgL_arg2644z00_2005 =
																					(int) (((long) 16));
																				{	/* Reduce/cse.scm 153 */
																					long BgL_auxz00_3599;

																					BgL_auxz00_3599 =
																						(long) (BgL_arg2644z00_2005);
																					BgL_restz00_2004 =
																						(BgL_offsetz00_2001 %
																						BgL_auxz00_3599);
																			}}
																			{	/* Reduce/cse.scm 153 */

																				BgL_method3345z00_1994 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1999,
																						(int) (BgL_modz00_2002)),
																					(int) (BgL_restz00_2004));
												}}}}}}}}
												BgL_resetz72z72z00_1383 =
													PROCEDURE_ENTRY(BgL_method3345z00_1994)
													(BgL_method3345z00_1994,
													(obj_t) (BgL_arg3496z00_1389), BgL_stackz72z72_1380,
													BEOA);
										}}
										{	/* Reduce/cse.scm 155 */
											obj_t BgL_nfalsez00_1384;

											{	/* Reduce/cse.scm 155 */
												int BgL_auxz00_3609;

												BgL_auxz00_3609 = (int) (((long) 1));
												BgL_nfalsez00_1384 = BGL_MVALUES_VAL(BgL_auxz00_3609);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_3612;

												BgL_auxz00_3612 =
													(BgL_nodez00_bglt) (BgL_nfalsez00_1384);
												((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1373))->
														BgL_falsez00) =
													((BgL_nodez00_bglt) BgL_auxz00_3612), BUNSPEC);
											}
											{	/* Reduce/cse.scm 155 */
												obj_t BgL_val0_3312z00_1385;

												if (CBOOL(BgL_resetz00_1378))
													{	/* Reduce/cse.scm 155 */
														BgL_val0_3312z00_1385 = BgL_resetz00_1378;
													}
												else
													{	/* Reduce/cse.scm 155 */
														if (CBOOL(BgL_resetz72z72_1381))
															{	/* Reduce/cse.scm 155 */
																BgL_val0_3312z00_1385 = BgL_resetz72z72_1381;
															}
														else
															{	/* Reduce/cse.scm 155 */
																BgL_val0_3312z00_1385 = BgL_resetz72z72z00_1383;
															}
													}
												{	/* Reduce/cse.scm 155 */
													int BgL_auxz00_3619;

													BgL_auxz00_3619 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_3619);
												}
												{	/* Reduce/cse.scm 155 */
													obj_t BgL_auxz00_3624;

													int BgL_auxz00_3622;

													BgL_auxz00_3624 = (obj_t) (BgL_nodez00_1373);
													BgL_auxz00_3622 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_3622, BgL_auxz00_3624);
												}
												return BgL_val0_3312z00_1385;
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



/* node-cse!-setq3367 */
	obj_t BGl_nodezd2csez12zd2setq3367z12zzreduce_csez00(obj_t BgL_envz00_2612,
		obj_t BgL_nodez00_2613, obj_t BgL_stackz00_2614)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 133 */
			{
				BgL_setqz00_bglt BgL_nodez00_1361;

				obj_t BgL_stackz00_1362;

				BgL_nodez00_1361 = (BgL_setqz00_bglt) (BgL_nodez00_2613);
				BgL_stackz00_1362 = BgL_stackz00_2614;
				{	/* Reduce/cse.scm 135 */
					obj_t BgL_resetz00_1366;

					{	/* Reduce/cse.scm 136 */
						BgL_nodez00_bglt BgL_arg3494z00_1370;

						BgL_arg3494z00_1370 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1361))->BgL_valuez00);
						{	/* Reduce/cse.scm 136 */
							obj_t BgL_method3345z00_1898;

							{	/* Reduce/cse.scm 136 */
								BgL_objectz00_bglt BgL_objz00_1899;

								BgL_objz00_1899 = (BgL_objectz00_bglt) (BgL_arg3494z00_1370);
								{	/* Reduce/cse.scm 136 */
									long BgL_objzd2classzd2numz00_1900;

									BgL_objzd2classzd2numz00_1900 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1899);
									{	/* Reduce/cse.scm 136 */
										obj_t BgL_arg2643z00_1901;

										BgL_arg2643z00_1901 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 136 */
											obj_t BgL_arrayz00_1903;

											int BgL_offsetz00_1904;

											BgL_arrayz00_1903 = BgL_arg2643z00_1901;
											BgL_offsetz00_1904 =
												(int) (BgL_objzd2classzd2numz00_1900);
											{	/* Reduce/cse.scm 136 */
												long BgL_offsetz00_1905;

												BgL_offsetz00_1905 =
													((long) (BgL_offsetz00_1904) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 136 */
													long BgL_modz00_1906;

													{	/* Reduce/cse.scm 136 */
														int BgL_arg2645z00_1907;

														BgL_arg2645z00_1907 = (int) (((long) 16));
														{	/* Reduce/cse.scm 136 */
															long BgL_auxz00_3637;

															BgL_auxz00_3637 = (long) (BgL_arg2645z00_1907);
															BgL_modz00_1906 =
																(BgL_offsetz00_1905 / BgL_auxz00_3637);
													}}
													{	/* Reduce/cse.scm 136 */
														long BgL_restz00_1908;

														{	/* Reduce/cse.scm 136 */
															int BgL_arg2644z00_1909;

															BgL_arg2644z00_1909 = (int) (((long) 16));
															{	/* Reduce/cse.scm 136 */
																long BgL_auxz00_3641;

																BgL_auxz00_3641 = (long) (BgL_arg2644z00_1909);
																BgL_restz00_1908 =
																	(BgL_offsetz00_1905 % BgL_auxz00_3641);
														}}
														{	/* Reduce/cse.scm 136 */

															BgL_method3345z00_1898 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1903,
																	(int) (BgL_modz00_1906)),
																(int) (BgL_restz00_1908));
							}}}}}}}}
							BgL_resetz00_1366 =
								PROCEDURE_ENTRY(BgL_method3345z00_1898) (BgL_method3345z00_1898,
								(obj_t) (BgL_arg3494z00_1370), BgL_stackz00_1362, BEOA);
					}}
					{	/* Reduce/cse.scm 138 */
						obj_t BgL_nvaluez00_1367;

						{	/* Reduce/cse.scm 138 */
							int BgL_auxz00_3651;

							BgL_auxz00_3651 = (int) (((long) 1));
							BgL_nvaluez00_1367 = BGL_MVALUES_VAL(BgL_auxz00_3651);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3654;

							BgL_auxz00_3654 = (BgL_nodez00_bglt) (BgL_nvaluez00_1367);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1361))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3654), BUNSPEC);
						}
						{	/* Reduce/cse.scm 138 */
							int BgL_auxz00_3657;

							BgL_auxz00_3657 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3657);
						}
						{	/* Reduce/cse.scm 138 */
							obj_t BgL_auxz00_3662;

							int BgL_auxz00_3660;

							BgL_auxz00_3662 = (obj_t) (BgL_nodez00_1361);
							BgL_auxz00_3660 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3660, BgL_auxz00_3662);
						}
						return BgL_resetz00_1366;
					}
				}
			}
		}
	}



/* node-cse!-cast3365 */
	obj_t BGl_nodezd2csez12zd2cast3365z12zzreduce_csez00(obj_t BgL_envz00_2615,
		obj_t BgL_nodez00_2616, obj_t BgL_stackz00_2617)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 123 */
			{
				BgL_castz00_bglt BgL_nodez00_1349;

				obj_t BgL_stackz00_1350;

				BgL_nodez00_1349 = (BgL_castz00_bglt) (BgL_nodez00_2616);
				BgL_stackz00_1350 = BgL_stackz00_2617;
				{	/* Reduce/cse.scm 125 */
					obj_t BgL_resetz00_1354;

					{	/* Reduce/cse.scm 126 */
						BgL_nodez00_bglt BgL_arg3492z00_1358;

						BgL_arg3492z00_1358 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1349))->BgL_argz00);
						{	/* Reduce/cse.scm 126 */
							obj_t BgL_method3345z00_1864;

							{	/* Reduce/cse.scm 126 */
								BgL_objectz00_bglt BgL_objz00_1865;

								BgL_objz00_1865 = (BgL_objectz00_bglt) (BgL_arg3492z00_1358);
								{	/* Reduce/cse.scm 126 */
									long BgL_objzd2classzd2numz00_1866;

									BgL_objzd2classzd2numz00_1866 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1865);
									{	/* Reduce/cse.scm 126 */
										obj_t BgL_arg2643z00_1867;

										BgL_arg2643z00_1867 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 126 */
											obj_t BgL_arrayz00_1869;

											int BgL_offsetz00_1870;

											BgL_arrayz00_1869 = BgL_arg2643z00_1867;
											BgL_offsetz00_1870 =
												(int) (BgL_objzd2classzd2numz00_1866);
											{	/* Reduce/cse.scm 126 */
												long BgL_offsetz00_1871;

												BgL_offsetz00_1871 =
													((long) (BgL_offsetz00_1870) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 126 */
													long BgL_modz00_1872;

													{	/* Reduce/cse.scm 126 */
														int BgL_arg2645z00_1873;

														BgL_arg2645z00_1873 = (int) (((long) 16));
														{	/* Reduce/cse.scm 126 */
															long BgL_auxz00_3675;

															BgL_auxz00_3675 = (long) (BgL_arg2645z00_1873);
															BgL_modz00_1872 =
																(BgL_offsetz00_1871 / BgL_auxz00_3675);
													}}
													{	/* Reduce/cse.scm 126 */
														long BgL_restz00_1874;

														{	/* Reduce/cse.scm 126 */
															int BgL_arg2644z00_1875;

															BgL_arg2644z00_1875 = (int) (((long) 16));
															{	/* Reduce/cse.scm 126 */
																long BgL_auxz00_3679;

																BgL_auxz00_3679 = (long) (BgL_arg2644z00_1875);
																BgL_restz00_1874 =
																	(BgL_offsetz00_1871 % BgL_auxz00_3679);
														}}
														{	/* Reduce/cse.scm 126 */

															BgL_method3345z00_1864 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1869,
																	(int) (BgL_modz00_1872)),
																(int) (BgL_restz00_1874));
							}}}}}}}}
							BgL_resetz00_1354 =
								PROCEDURE_ENTRY(BgL_method3345z00_1864) (BgL_method3345z00_1864,
								(obj_t) (BgL_arg3492z00_1358), BgL_stackz00_1350, BEOA);
					}}
					{	/* Reduce/cse.scm 128 */
						obj_t BgL_nargz00_1355;

						{	/* Reduce/cse.scm 128 */
							int BgL_auxz00_3689;

							BgL_auxz00_3689 = (int) (((long) 1));
							BgL_nargz00_1355 = BGL_MVALUES_VAL(BgL_auxz00_3689);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3692;

							BgL_auxz00_3692 = (BgL_nodez00_bglt) (BgL_nargz00_1355);
							((((BgL_castz00_bglt) CREF(BgL_nodez00_1349))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3692), BUNSPEC);
						}
						{	/* Reduce/cse.scm 128 */
							int BgL_auxz00_3695;

							BgL_auxz00_3695 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3695);
						}
						{	/* Reduce/cse.scm 128 */
							obj_t BgL_auxz00_3700;

							int BgL_auxz00_3698;

							BgL_auxz00_3700 = (obj_t) (BgL_nodez00_1349);
							BgL_auxz00_3698 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3698, BgL_auxz00_3700);
						}
						return BgL_resetz00_1354;
					}
				}
			}
		}
	}



/* node-cse!-extern3363 */
	obj_t BGl_nodezd2csez12zd2extern3363z12zzreduce_csez00(obj_t BgL_envz00_2618,
		obj_t BgL_nodez00_2619, obj_t BgL_stackz00_2620)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 115 */
			{
				BgL_externz00_bglt BgL_nodez00_1338;

				obj_t BgL_stackz00_1339;

				BgL_nodez00_1338 = (BgL_externz00_bglt) (BgL_nodez00_2619);
				BgL_stackz00_1339 = BgL_stackz00_2620;
				{	/* Reduce/cse.scm 117 */
					obj_t BgL_resetz72z72_1343;

					{	/* Reduce/cse.scm 117 */
						obj_t BgL_arg3490z00_1346;

						BgL_arg3490z00_1346 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1338))->BgL_exprza2za2);
						BgL_resetz72z72_1343 =
							BGl_nodezd2cseza2z12z62zzreduce_csez00(BgL_arg3490z00_1346,
							BgL_stackz00_1339);
					}
					{	/* Reduce/cse.scm 118 */
						int BgL_auxz00_3706;

						BgL_auxz00_3706 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3706);
					}
					{	/* Reduce/cse.scm 118 */
						obj_t BgL_auxz00_3711;

						int BgL_auxz00_3709;

						BgL_auxz00_3711 = (obj_t) (BgL_nodez00_1338);
						BgL_auxz00_3709 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3709, BgL_auxz00_3711);
					}
					return BgL_resetz72z72_1343;
				}
			}
		}
	}



/* node-cse!-funcall3361 */
	obj_t BGl_nodezd2csez12zd2funcall3361z12zzreduce_csez00(obj_t BgL_envz00_2621,
		obj_t BgL_nodez00_2622, obj_t BgL_stackz00_2623)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 107 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1327;

				obj_t BgL_stackz00_1328;

				BgL_nodez00_1327 = (BgL_funcallz00_bglt) (BgL_nodez00_2622);
				BgL_stackz00_1328 = BgL_stackz00_2623;
				{	/* Reduce/cse.scm 109 */
					obj_t BgL_resetz72z72_1332;

					{	/* Reduce/cse.scm 109 */
						obj_t BgL_arg3488z00_1335;

						BgL_arg3488z00_1335 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1327))->BgL_argsz00);
						BgL_resetz72z72_1332 =
							BGl_nodezd2cseza2z12z62zzreduce_csez00(BgL_arg3488z00_1335,
							BgL_stackz00_1328);
					}
					{	/* Reduce/cse.scm 110 */
						int BgL_auxz00_3717;

						BgL_auxz00_3717 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3717);
					}
					{	/* Reduce/cse.scm 110 */
						obj_t BgL_auxz00_3722;

						int BgL_auxz00_3720;

						BgL_auxz00_3722 = (obj_t) (BgL_nodez00_1327);
						BgL_auxz00_3720 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3720, BgL_auxz00_3722);
					}
					return BgL_resetz72z72_1332;
				}
			}
		}
	}



/* node-cse!-app-ly3359 */
	obj_t BGl_nodezd2csez12zd2appzd2ly3359zc0zzreduce_csez00(obj_t
		BgL_envz00_2624, obj_t BgL_nodez00_2625, obj_t BgL_stackz00_2626)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 94 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1310;

				obj_t BgL_stackz00_1311;

				BgL_nodez00_1310 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2625);
				BgL_stackz00_1311 = BgL_stackz00_2626;
				{	/* Reduce/cse.scm 96 */
					obj_t BgL_resetz00_1315;

					{	/* Reduce/cse.scm 97 */
						BgL_nodez00_bglt BgL_arg3486z00_1324;

						BgL_arg3486z00_1324 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1310))->BgL_funz00);
						{	/* Reduce/cse.scm 97 */
							obj_t BgL_method3345z00_1791;

							{	/* Reduce/cse.scm 97 */
								BgL_objectz00_bglt BgL_objz00_1792;

								BgL_objz00_1792 = (BgL_objectz00_bglt) (BgL_arg3486z00_1324);
								{	/* Reduce/cse.scm 97 */
									long BgL_objzd2classzd2numz00_1793;

									BgL_objzd2classzd2numz00_1793 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1792);
									{	/* Reduce/cse.scm 97 */
										obj_t BgL_arg2643z00_1794;

										BgL_arg2643z00_1794 =
											PROCEDURE_REF(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
											(int) (((long) 1)));
										{	/* Reduce/cse.scm 97 */
											obj_t BgL_arrayz00_1796;

											int BgL_offsetz00_1797;

											BgL_arrayz00_1796 = BgL_arg2643z00_1794;
											BgL_offsetz00_1797 =
												(int) (BgL_objzd2classzd2numz00_1793);
											{	/* Reduce/cse.scm 97 */
												long BgL_offsetz00_1798;

												BgL_offsetz00_1798 =
													((long) (BgL_offsetz00_1797) - OBJECT_TYPE);
												{	/* Reduce/cse.scm 97 */
													long BgL_modz00_1799;

													{	/* Reduce/cse.scm 97 */
														int BgL_arg2645z00_1800;

														BgL_arg2645z00_1800 = (int) (((long) 16));
														{	/* Reduce/cse.scm 97 */
															long BgL_auxz00_3735;

															BgL_auxz00_3735 = (long) (BgL_arg2645z00_1800);
															BgL_modz00_1799 =
																(BgL_offsetz00_1798 / BgL_auxz00_3735);
													}}
													{	/* Reduce/cse.scm 97 */
														long BgL_restz00_1801;

														{	/* Reduce/cse.scm 97 */
															int BgL_arg2644z00_1802;

															BgL_arg2644z00_1802 = (int) (((long) 16));
															{	/* Reduce/cse.scm 97 */
																long BgL_auxz00_3739;

																BgL_auxz00_3739 = (long) (BgL_arg2644z00_1802);
																BgL_restz00_1801 =
																	(BgL_offsetz00_1798 % BgL_auxz00_3739);
														}}
														{	/* Reduce/cse.scm 97 */

															BgL_method3345z00_1791 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1796,
																	(int) (BgL_modz00_1799)),
																(int) (BgL_restz00_1801));
							}}}}}}}}
							BgL_resetz00_1315 =
								PROCEDURE_ENTRY(BgL_method3345z00_1791) (BgL_method3345z00_1791,
								(obj_t) (BgL_arg3486z00_1324), BgL_stackz00_1311, BEOA);
					}}
					{	/* Reduce/cse.scm 102 */
						obj_t BgL_nfunz00_1316;

						{	/* Reduce/cse.scm 102 */
							int BgL_auxz00_3749;

							BgL_auxz00_3749 = (int) (((long) 1));
							BgL_nfunz00_1316 = BGL_MVALUES_VAL(BgL_auxz00_3749);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3752;

							BgL_auxz00_3752 = (BgL_nodez00_bglt) (BgL_nfunz00_1316);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1310))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3752), BUNSPEC);
						}
						{	/* Reduce/cse.scm 99 */
							obj_t BgL_resetz72z72_1317;

							{	/* Reduce/cse.scm 100 */
								BgL_nodez00_bglt BgL_arg3484z00_1322;

								obj_t BgL_arg3485z00_1323;

								BgL_arg3484z00_1322 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1310))->BgL_argz00);
								if (CBOOL(BgL_resetz00_1315))
									{	/* Reduce/cse.scm 100 */
										BgL_arg3485z00_1323 = BNIL;
									}
								else
									{	/* Reduce/cse.scm 100 */
										BgL_arg3485z00_1323 = BgL_stackz00_1311;
									}
								{	/* Reduce/cse.scm 100 */
									obj_t BgL_method3345z00_1822;

									{	/* Reduce/cse.scm 100 */
										BgL_objectz00_bglt BgL_objz00_1823;

										BgL_objz00_1823 =
											(BgL_objectz00_bglt) (BgL_arg3484z00_1322);
										{	/* Reduce/cse.scm 100 */
											long BgL_objzd2classzd2numz00_1824;

											BgL_objzd2classzd2numz00_1824 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1823);
											{	/* Reduce/cse.scm 100 */
												obj_t BgL_arg2643z00_1825;

												BgL_arg2643z00_1825 =
													PROCEDURE_REF
													(BGl_nodezd2csez12zd2envz12zzreduce_csez00,
													(int) (((long) 1)));
												{	/* Reduce/cse.scm 100 */
													obj_t BgL_arrayz00_1827;

													int BgL_offsetz00_1828;

													BgL_arrayz00_1827 = BgL_arg2643z00_1825;
													BgL_offsetz00_1828 =
														(int) (BgL_objzd2classzd2numz00_1824);
													{	/* Reduce/cse.scm 100 */
														long BgL_offsetz00_1829;

														BgL_offsetz00_1829 =
															((long) (BgL_offsetz00_1828) - OBJECT_TYPE);
														{	/* Reduce/cse.scm 100 */
															long BgL_modz00_1830;

															{	/* Reduce/cse.scm 100 */
																int BgL_arg2645z00_1831;

																BgL_arg2645z00_1831 = (int) (((long) 16));
																{	/* Reduce/cse.scm 100 */
																	long BgL_auxz00_3766;

																	BgL_auxz00_3766 =
																		(long) (BgL_arg2645z00_1831);
																	BgL_modz00_1830 =
																		(BgL_offsetz00_1829 / BgL_auxz00_3766);
															}}
															{	/* Reduce/cse.scm 100 */
																long BgL_restz00_1832;

																{	/* Reduce/cse.scm 100 */
																	int BgL_arg2644z00_1833;

																	BgL_arg2644z00_1833 = (int) (((long) 16));
																	{	/* Reduce/cse.scm 100 */
																		long BgL_auxz00_3770;

																		BgL_auxz00_3770 =
																			(long) (BgL_arg2644z00_1833);
																		BgL_restz00_1832 =
																			(BgL_offsetz00_1829 % BgL_auxz00_3770);
																}}
																{	/* Reduce/cse.scm 100 */

																	BgL_method3345z00_1822 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1827,
																			(int) (BgL_modz00_1830)),
																		(int) (BgL_restz00_1832));
									}}}}}}}}
									BgL_resetz72z72_1317 =
										PROCEDURE_ENTRY(BgL_method3345z00_1822)
										(BgL_method3345z00_1822, (obj_t) (BgL_arg3484z00_1322),
										BgL_arg3485z00_1323, BEOA);
							}}
							{	/* Reduce/cse.scm 102 */
								obj_t BgL_nargz00_1318;

								{	/* Reduce/cse.scm 102 */
									int BgL_auxz00_3780;

									BgL_auxz00_3780 = (int) (((long) 1));
									BgL_nargz00_1318 = BGL_MVALUES_VAL(BgL_auxz00_3780);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_3783;

									BgL_auxz00_3783 = (BgL_nodez00_bglt) (BgL_nargz00_1318);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1310))->
											BgL_argz00) =
										((BgL_nodez00_bglt) BgL_auxz00_3783), BUNSPEC);
								}
								{	/* Reduce/cse.scm 102 */
									obj_t BgL_val0_3302z00_1319;

									if (CBOOL(BgL_resetz00_1315))
										{	/* Reduce/cse.scm 102 */
											BgL_val0_3302z00_1319 = BgL_resetz00_1315;
										}
									else
										{	/* Reduce/cse.scm 102 */
											BgL_val0_3302z00_1319 = BgL_resetz72z72_1317;
										}
									{	/* Reduce/cse.scm 102 */
										int BgL_auxz00_3788;

										BgL_auxz00_3788 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_3788);
									}
									{	/* Reduce/cse.scm 102 */
										obj_t BgL_auxz00_3793;

										int BgL_auxz00_3791;

										BgL_auxz00_3793 = (obj_t) (BgL_nodez00_1310);
										BgL_auxz00_3791 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_3791, BgL_auxz00_3793);
									}
									return BgL_val0_3302z00_1319;
								}
							}
						}
					}
				}
			}
		}
	}



/* node-cse!-sequence3357 */
	obj_t BGl_nodezd2csez12zd2sequence3357z12zzreduce_csez00(obj_t
		BgL_envz00_2627, obj_t BgL_nodez00_2628, obj_t BgL_stackz00_2629)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 87 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1300;

				obj_t BgL_stackz00_1301;

				BgL_nodez00_1300 = (BgL_sequencez00_bglt) (BgL_nodez00_2628);
				BgL_stackz00_1301 = BgL_stackz00_2629;
				{	/* Reduce/cse.scm 89 */
					obj_t BgL_val0_3300z00_1305;

					{	/* Reduce/cse.scm 89 */
						obj_t BgL_arg3482z00_1307;

						BgL_arg3482z00_1307 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1300))->BgL_nodesz00);
						BgL_val0_3300z00_1305 =
							BGl_nodezd2cseza2z12z62zzreduce_csez00(BgL_arg3482z00_1307,
							BgL_stackz00_1301);
					}
					{	/* Reduce/cse.scm 89 */
						int BgL_auxz00_3799;

						BgL_auxz00_3799 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3799);
					}
					{	/* Reduce/cse.scm 89 */
						obj_t BgL_auxz00_3804;

						int BgL_auxz00_3802;

						BgL_auxz00_3804 = (obj_t) (BgL_nodez00_1300);
						BgL_auxz00_3802 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3802, BgL_auxz00_3804);
					}
					return BgL_val0_3300z00_1305;
				}
			}
		}
	}



/* node-cse!-closure3355 */
	obj_t BGl_nodezd2csez12zd2closure3355z12zzreduce_csez00(obj_t BgL_envz00_2630,
		obj_t BgL_nodez00_2631, obj_t BgL_stackz00_2632)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 81 */
			{
				BgL_closurez00_bglt BgL_nodez00_1292;

				obj_t BgL_stackz00_1293;

				{	/* Reduce/cse.scm 82 */
					bool_t BgL_auxz00_3808;

					BgL_nodez00_1292 = (BgL_closurez00_bglt) (BgL_nodez00_2631);
					BgL_stackz00_1293 = BgL_stackz00_2632;
					{	/* Reduce/cse.scm 82 */
						int BgL_auxz00_3809;

						BgL_auxz00_3809 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3809);
					}
					{	/* Reduce/cse.scm 82 */
						obj_t BgL_auxz00_3814;

						int BgL_auxz00_3812;

						BgL_auxz00_3814 = (obj_t) (BgL_nodez00_1292);
						BgL_auxz00_3812 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3812, BgL_auxz00_3814);
					}
					BgL_auxz00_3808 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_3808);
				}
			}
		}
	}



/* node-cse!-var3353 */
	obj_t BGl_nodezd2csez12zd2var3353z12zzreduce_csez00(obj_t BgL_envz00_2633,
		obj_t BgL_nodez00_2634, obj_t BgL_stackz00_2635)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 75 */
			{
				BgL_varz00_bglt BgL_nodez00_1284;

				obj_t BgL_stackz00_1285;

				{	/* Reduce/cse.scm 76 */
					bool_t BgL_auxz00_3819;

					BgL_nodez00_1284 = (BgL_varz00_bglt) (BgL_nodez00_2634);
					BgL_stackz00_1285 = BgL_stackz00_2635;
					{	/* Reduce/cse.scm 76 */
						int BgL_auxz00_3820;

						BgL_auxz00_3820 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3820);
					}
					{	/* Reduce/cse.scm 76 */
						obj_t BgL_auxz00_3825;

						int BgL_auxz00_3823;

						BgL_auxz00_3825 = (obj_t) (BgL_nodez00_1284);
						BgL_auxz00_3823 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3823, BgL_auxz00_3825);
					}
					BgL_auxz00_3819 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_3819);
				}
			}
		}
	}



/* node-cse!-kwote3351 */
	obj_t BGl_nodezd2csez12zd2kwote3351z12zzreduce_csez00(obj_t BgL_envz00_2636,
		obj_t BgL_nodez00_2637, obj_t BgL_stackz00_2638)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 69 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1276;

				obj_t BgL_stackz00_1277;

				{	/* Reduce/cse.scm 70 */
					bool_t BgL_auxz00_3830;

					BgL_nodez00_1276 = (BgL_kwotez00_bglt) (BgL_nodez00_2637);
					BgL_stackz00_1277 = BgL_stackz00_2638;
					{	/* Reduce/cse.scm 70 */
						int BgL_auxz00_3831;

						BgL_auxz00_3831 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3831);
					}
					{	/* Reduce/cse.scm 70 */
						obj_t BgL_auxz00_3836;

						int BgL_auxz00_3834;

						BgL_auxz00_3836 = (obj_t) (BgL_nodez00_1276);
						BgL_auxz00_3834 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3834, BgL_auxz00_3836);
					}
					BgL_auxz00_3830 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_3830);
				}
			}
		}
	}



/* node-cse!-atom3348 */
	obj_t BGl_nodezd2csez12zd2atom3348z12zzreduce_csez00(obj_t BgL_envz00_2639,
		obj_t BgL_nodez00_2640, obj_t BgL_stackz00_2641)
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 63 */
			{
				BgL_atomz00_bglt BgL_nodez00_1268;

				obj_t BgL_stackz00_1269;

				{	/* Reduce/cse.scm 64 */
					bool_t BgL_auxz00_3841;

					BgL_nodez00_1268 = (BgL_atomz00_bglt) (BgL_nodez00_2640);
					BgL_stackz00_1269 = BgL_stackz00_2641;
					{	/* Reduce/cse.scm 64 */
						int BgL_auxz00_3842;

						BgL_auxz00_3842 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3842);
					}
					{	/* Reduce/cse.scm 64 */
						obj_t BgL_auxz00_3847;

						int BgL_auxz00_3845;

						BgL_auxz00_3847 = (obj_t) (BgL_nodez00_1268);
						BgL_auxz00_3845 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3845, BgL_auxz00_3847);
					}
					BgL_auxz00_3841 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_3841);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_csez00()
	{
		AN_OBJECT;
		{	/* Reduce/cse.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
			return
				BGl_modulezd2initializa7ationz75zzreduce_samez00(((long) 31508883),
				BSTRING_TO_STRING(BGl_string3638z00zzreduce_csez00));
		}
	}

#ifdef __cplusplus
}
#endif
