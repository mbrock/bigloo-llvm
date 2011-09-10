/*===========================================================================*/
/*   (Reduce/copy.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/copy.scm)*/
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


	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_nodezd2copyz12zd2select3319z12zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_copyz00();
	static obj_t BGl_nodezd2copyz12zd2fail3317z12zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2copyz12zd2boxzd2ref3335zc0zzreduce_copyz00(obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_copyz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzreduce_copyz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd2copyz12zd2sequence3303z12zzreduce_copyz00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2copyz12zd2kwote3297z12zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	static obj_t BGl_nodezd2copyz12zd2boxzd2setz123333zd2zzreduce_copyz00(obj_t,
		obj_t);
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern BgL_nodez00_bglt BGl_alphatiza7eza7zzast_alphatiza7eza7(obj_t, obj_t,
		obj_t, BgL_nodez00_bglt);
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_reducezd2copyz12zc0zzreduce_copyz00(obj_t);
	static obj_t BGl_nodezd2copyza2z12z62zzreduce_copyz00(obj_t);
	static obj_t BGl_nodezd2copyz12zd2letzd2fun3321zc0zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2copyz12zd2closure3301z12zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_copyz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_nodezd2copyz12zd2letzd2var3323zc0zzreduce_copyz00(obj_t,
		obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd2copyz12zd2atom3295z12zzreduce_copyz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_copyz00 = BUNSPEC;
	static obj_t BGl_nodezd2copyz12zd2jumpzd2exzd2i3328z12zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_copyz00();
	static BgL_nodez00_bglt
		BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2copyz12zd2makezd2box3331zc0zzreduce_copyz00(obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_copyz00();
	static obj_t BGl_nodezd2copyz12zd2condition3315z12zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2copyz12zd2app3337z12zzreduce_copyz00(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2copyz12zd2cast3311z12zzreduce_copyz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__reducezd2copyz12zc0zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_nodezd2copyz12zd2extern3309z12zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_nodezd2copyz12zd2appzd2ly3305zc0zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t BGl__nodezd2copyz12zd2default3292z12zzreduce_copyz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2copyz12zd2default3292z12zzreduce_copyz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2copyz12zd2setq3313z12zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl__nodezd2copyz12zc0zzreduce_copyz00(obj_t, obj_t);
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_copyz00();
	static long BGl_za2copyzd2removedza2zd2zzreduce_copyz00;
	static obj_t BGl_nodezd2copyz12zd2setzd2exzd2it3325z12zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2copyz12zd2var3299z12zzreduce_copyz00(obj_t, obj_t);
	static obj_t BGl_nodezd2copyz12zd2funcall3307z12zzreduce_copyz00(obj_t,
		obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2copyz12zd2default3292zd2envzc0zzreduce_copyz00,
		BgL_bgl__nodeza7d2copyza712za73633za7,
		BGl__nodezd2copyz12zd2default3292z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2copyz12zd2envz12zzreduce_copyz00,
		BgL_bgl__reduceza7d2copyza713634z00,
		BGl__reducezd2copyz12zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
		BgL_bgl__nodeza7d2copyza712za73635za7,
		BGl__nodezd2copyz12zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3608z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3636za7,
		BGl_nodezd2copyz12zd2atom3295z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3610z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3637za7,
		BGl_nodezd2copyz12zd2var3299z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3609z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3638za7,
		BGl_nodezd2copyz12zd2kwote3297z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3611z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3639za7,
		BGl_nodezd2copyz12zd2closure3301z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3612z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3640za7,
		BGl_nodezd2copyz12zd2sequence3303z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3613z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3641za7,
		BGl_nodezd2copyz12zd2appzd2ly3305zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3614z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3642za7,
		BGl_nodezd2copyz12zd2funcall3307z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3615z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3643za7,
		BGl_nodezd2copyz12zd2extern3309z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3616z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3644za7,
		BGl_nodezd2copyz12zd2cast3311z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3617z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3645za7,
		BGl_nodezd2copyz12zd2setq3313z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3618z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3646za7,
		BGl_nodezd2copyz12zd2condition3315z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3620z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3647za7,
		BGl_nodezd2copyz12zd2select3319z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3619z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3648za7,
		BGl_nodezd2copyz12zd2fail3317z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3621z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3649za7,
		BGl_nodezd2copyz12zd2letzd2fun3321zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3622z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3650za7,
		BGl_nodezd2copyz12zd2letzd2var3323zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3623z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3651za7,
		BGl_nodezd2copyz12zd2setzd2exzd2it3325z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3624z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3652za7,
		BGl_nodezd2copyz12zd2jumpzd2exzd2i3328z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3625z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3653za7,
		BGl_nodezd2copyz12zd2makezd2box3331zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3626z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3654za7,
		BGl_nodezd2copyz12zd2boxzd2setz123333zd2zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3627z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3655za7,
		BGl_nodezd2copyz12zd2boxzd2ref3335zc0zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3628z00zzreduce_copyz00,
		BgL_bgl_nodeza7d2copyza712za7d3656za7,
		BGl_nodezd2copyz12zd2app3337z12zzreduce_copyz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3604z00zzreduce_copyz00,
		BgL_bgl_string3604za700za7za7r3657za7, "      copy propagation       ", 29);
	      DEFINE_STRING(BGl_string3605z00zzreduce_copyz00,
		BgL_bgl_string3605za700za7za7r3658za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string3606z00zzreduce_copyz00,
		BgL_bgl_string3606za700za7za7r3659za7, "node-copy!", 10);
	      DEFINE_STRING(BGl_string3607z00zzreduce_copyz00,
		BgL_bgl_string3607za700za7za7r3660za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3630z00zzreduce_copyz00,
		BgL_bgl_string3630za700za7za7r3661za7, "read node-copy!-default3292 done ",
		33);
	      DEFINE_STRING(BGl_string3629z00zzreduce_copyz00,
		BgL_bgl_string3629za700za7za7r3662za7, "reduce_copy", 11);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_copyz00(long
		BgL_checksumz00_2478, char *BgL_fromz00_2479)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_copyz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_copyz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_copyz00();
					BGl_cnstzd2initzd2zzreduce_copyz00();
					BGl_importedzd2moduleszd2initz00zzreduce_copyz00();
					BGl_genericzd2initzd2zzreduce_copyz00();
					BGl_methodzd2initzd2zzreduce_copyz00();
					BGl_toplevelzd2initzd2zzreduce_copyz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_copyz00()
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_copy");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_copy");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_copy");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_copyz00()
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			{	/* Reduce/copy.scm 15 */
				obj_t BgL_cportz00_2467;

				BgL_cportz00_2467 =
					bgl_open_input_string(BGl_string3630z00zzreduce_copyz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2468;

					BgL_iz00_2468 = ((long) 2);
				BgL_loopz00_2469:
					if ((BgL_iz00_2468 == ((long) -1)))
						{	/* Reduce/copy.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/copy.scm 15 */
							{	/* Reduce/copy.scm 15 */
								obj_t BgL_arg3632z00_2471;

								{	/* Reduce/copy.scm 15 */

									{	/* Reduce/copy.scm 15 */
										obj_t BgL_locationz00_2473;

										BgL_locationz00_2473 = BBOOL(((bool_t) 0));
										{	/* Reduce/copy.scm 15 */

											BgL_arg3632z00_2471 =
												BGl_readz00zz__readerz00(BgL_cportz00_2467,
												BgL_locationz00_2473);
										}
									}
								}
								{	/* Reduce/copy.scm 15 */
									int BgL_auxz00_2498;

									BgL_auxz00_2498 = (int) (BgL_iz00_2468);
									CNST_TABLE_SET(BgL_auxz00_2498, BgL_arg3632z00_2471);
							}}
							{	/* Reduce/copy.scm 15 */
								int BgL_auxz00_2474;

								BgL_auxz00_2474 = (int) ((BgL_iz00_2468 - ((long) 1)));
								{
									long BgL_iz00_2503;

									BgL_iz00_2503 = (long) (BgL_auxz00_2474);
									BgL_iz00_2468 = BgL_iz00_2503;
									goto BgL_loopz00_2469;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_copyz00()
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			BGl_za2copyzd2removedza2zd2zzreduce_copyz00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* reduce-copy! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2copyz12zc0zzreduce_copyz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 34 */
			{	/* Reduce/copy.scm 35 */
				obj_t BgL_list3338z00_798;

				BgL_list3338z00_798 =
					MAKE_PAIR(BGl_string3604z00zzreduce_copyz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3338z00_798);
			}
			BGl_za2copyzd2removedza2zd2zzreduce_copyz00 = ((long) 0);
			{
				obj_t BgL_l3284z00_800;

				BgL_l3284z00_800 = BgL_globalsz00_1;
			BgL_zc3anonymousza33339ze3z83_801:
				if (PAIRP(BgL_l3284z00_800))
					{	/* Reduce/copy.scm 37 */
						{	/* Reduce/copy.scm 38 */
							obj_t BgL_globalz00_803;

							BgL_globalz00_803 = CAR(BgL_l3284z00_800);
							{	/* Reduce/copy.scm 38 */
								BgL_valuez00_bglt BgL_funz00_804;

								{
									BgL_variablez00_bglt BgL_auxz00_2511;

									BgL_auxz00_2511 = (BgL_variablez00_bglt) (BgL_globalz00_803);
									BgL_funz00_804 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2511))->
										BgL_valuez00);
								}
								{	/* Reduce/copy.scm 38 */
									obj_t BgL_nodez00_805;

									{
										BgL_sfunz00_bglt BgL_auxz00_2514;

										BgL_auxz00_2514 = (BgL_sfunz00_bglt) (BgL_funz00_804);
										BgL_nodez00_805 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2514))->BgL_bodyz00);
									}
									{	/* Reduce/copy.scm 39 */

										{	/* Reduce/copy.scm 40 */
											BgL_nodez00_bglt BgL_arg3341z00_806;

											{	/* Reduce/copy.scm 40 */
												BgL_nodez00_bglt BgL_res3514z00_1458;

												{	/* Reduce/copy.scm 40 */
													BgL_nodez00_bglt BgL_nodez00_1432;

													BgL_nodez00_1432 =
														(BgL_nodez00_bglt) (BgL_nodez00_805);
													{	/* Reduce/copy.scm 40 */
														obj_t BgL_method3293z00_1433;

														{	/* Reduce/copy.scm 40 */
															BgL_objectz00_bglt BgL_objz00_1434;

															BgL_objz00_1434 =
																(BgL_objectz00_bglt) (BgL_nodez00_1432);
															{	/* Reduce/copy.scm 40 */
																long BgL_objzd2classzd2numz00_1435;

																BgL_objzd2classzd2numz00_1435 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1434);
																{	/* Reduce/copy.scm 40 */
																	obj_t BgL_arg2643z00_1436;

																	BgL_arg2643z00_1436 =
																		PROCEDURE_REF
																		(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
																		(int) (((long) 1)));
																	{	/* Reduce/copy.scm 40 */
																		obj_t BgL_arrayz00_1438;

																		int BgL_offsetz00_1439;

																		BgL_arrayz00_1438 = BgL_arg2643z00_1436;
																		BgL_offsetz00_1439 =
																			(int) (BgL_objzd2classzd2numz00_1435);
																		{	/* Reduce/copy.scm 40 */
																			long BgL_offsetz00_1440;

																			BgL_offsetz00_1440 =
																				(
																				(long) (BgL_offsetz00_1439) -
																				OBJECT_TYPE);
																			{	/* Reduce/copy.scm 40 */
																				long BgL_modz00_1441;

																				{	/* Reduce/copy.scm 40 */
																					int BgL_arg2645z00_1442;

																					BgL_arg2645z00_1442 =
																						(int) (((long) 16));
																					{	/* Reduce/copy.scm 40 */
																						long BgL_auxz00_2526;

																						BgL_auxz00_2526 =
																							(long) (BgL_arg2645z00_1442);
																						BgL_modz00_1441 =
																							(BgL_offsetz00_1440 /
																							BgL_auxz00_2526);
																				}}
																				{	/* Reduce/copy.scm 40 */
																					long BgL_restz00_1443;

																					{	/* Reduce/copy.scm 40 */
																						int BgL_arg2644z00_1444;

																						BgL_arg2644z00_1444 =
																							(int) (((long) 16));
																						{	/* Reduce/copy.scm 40 */
																							long BgL_auxz00_2530;

																							BgL_auxz00_2530 =
																								(long) (BgL_arg2644z00_1444);
																							BgL_restz00_1443 =
																								(BgL_offsetz00_1440 %
																								BgL_auxz00_2530);
																					}}
																					{	/* Reduce/copy.scm 40 */

																						BgL_method3293z00_1433 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1438,
																								(int) (BgL_modz00_1441)),
																							(int) (BgL_restz00_1443));
														}}}}}}}}
														BgL_res3514z00_1458 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3293z00_1433) (BgL_method3293z00_1433,
																(obj_t) (BgL_nodez00_1432), BEOA));
												}}
												BgL_arg3341z00_806 = BgL_res3514z00_1458;
											}
											{
												obj_t BgL_auxz00_2543;

												BgL_sfunz00_bglt BgL_auxz00_2541;

												BgL_auxz00_2543 = (obj_t) (BgL_arg3341z00_806);
												BgL_auxz00_2541 = (BgL_sfunz00_bglt) (BgL_funz00_804);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2541))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_2543), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3284z00_2546;

							BgL_l3284z00_2546 = CDR(BgL_l3284z00_800);
							BgL_l3284z00_800 = BgL_l3284z00_2546;
							goto BgL_zc3anonymousza33339ze3z83_801;
						}
					}
				else
					{	/* Reduce/copy.scm 37 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/copy.scm 43 */
				obj_t BgL_list3343z00_809;

				{	/* Reduce/copy.scm 43 */
					obj_t BgL_arg3346z00_811;

					{	/* Reduce/copy.scm 43 */
						obj_t BgL_arg3347z00_812;

						{	/* Reduce/copy.scm 43 */
							obj_t BgL_arg3348z00_813;

							BgL_arg3348z00_813 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg3347z00_812 =
								MAKE_PAIR(BCHAR(((unsigned char) ')')), BgL_arg3348z00_813);
						}
						BgL_arg3346z00_811 =
							MAKE_PAIR(BINT(BGl_za2copyzd2removedza2zd2zzreduce_copyz00),
							BgL_arg3347z00_812);
					}
					BgL_list3343z00_809 =
						MAKE_PAIR(BGl_string3605z00zzreduce_copyz00, BgL_arg3346z00_811);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3343z00_809);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-copy! */
	obj_t BGl__reducezd2copyz12zc0zzreduce_copyz00(obj_t BgL_envz00_2398,
		obj_t BgL_globalsz00_2399)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 34 */
			return BGl_reducezd2copyz12zc0zzreduce_copyz00(BgL_globalsz00_2399);
		}
	}



/* node-copy*! */
	obj_t BGl_nodezd2copyza2z12z62zzreduce_copyz00(obj_t BgL_nodeza2za2_25)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 276 */
			{
				obj_t BgL_nodeza2za2_815;

				BgL_nodeza2za2_815 = BgL_nodeza2za2_25;
			BgL_zc3anonymousza33349ze3z83_816:
				if (NULLP(BgL_nodeza2za2_815))
					{	/* Reduce/copy.scm 278 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/copy.scm 278 */
						{	/* Reduce/copy.scm 281 */
							BgL_nodez00_bglt BgL_arg3351z00_818;

							{	/* Reduce/copy.scm 281 */
								obj_t BgL_arg3352z00_819;

								BgL_arg3352z00_819 = CAR(BgL_nodeza2za2_815);
								{	/* Reduce/copy.scm 281 */
									BgL_nodez00_bglt BgL_res3517z00_1490;

									{	/* Reduce/copy.scm 281 */
										BgL_nodez00_bglt BgL_nodez00_1464;

										BgL_nodez00_1464 = (BgL_nodez00_bglt) (BgL_arg3352z00_819);
										{	/* Reduce/copy.scm 281 */
											obj_t BgL_method3293z00_1465;

											{	/* Reduce/copy.scm 281 */
												BgL_objectz00_bglt BgL_objz00_1466;

												BgL_objz00_1466 =
													(BgL_objectz00_bglt) (BgL_nodez00_1464);
												{	/* Reduce/copy.scm 281 */
													long BgL_objzd2classzd2numz00_1467;

													BgL_objzd2classzd2numz00_1467 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1466);
													{	/* Reduce/copy.scm 281 */
														obj_t BgL_arg2643z00_1468;

														BgL_arg2643z00_1468 =
															PROCEDURE_REF
															(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
															(int) (((long) 1)));
														{	/* Reduce/copy.scm 281 */
															obj_t BgL_arrayz00_1470;

															int BgL_offsetz00_1471;

															BgL_arrayz00_1470 = BgL_arg2643z00_1468;
															BgL_offsetz00_1471 =
																(int) (BgL_objzd2classzd2numz00_1467);
															{	/* Reduce/copy.scm 281 */
																long BgL_offsetz00_1472;

																BgL_offsetz00_1472 =
																	((long) (BgL_offsetz00_1471) - OBJECT_TYPE);
																{	/* Reduce/copy.scm 281 */
																	long BgL_modz00_1473;

																	{	/* Reduce/copy.scm 281 */
																		int BgL_arg2645z00_1474;

																		BgL_arg2645z00_1474 = (int) (((long) 16));
																		{	/* Reduce/copy.scm 281 */
																			long BgL_auxz00_2571;

																			BgL_auxz00_2571 =
																				(long) (BgL_arg2645z00_1474);
																			BgL_modz00_1473 =
																				(BgL_offsetz00_1472 / BgL_auxz00_2571);
																	}}
																	{	/* Reduce/copy.scm 281 */
																		long BgL_restz00_1475;

																		{	/* Reduce/copy.scm 281 */
																			int BgL_arg2644z00_1476;

																			BgL_arg2644z00_1476 = (int) (((long) 16));
																			{	/* Reduce/copy.scm 281 */
																				long BgL_auxz00_2575;

																				BgL_auxz00_2575 =
																					(long) (BgL_arg2644z00_1476);
																				BgL_restz00_1475 =
																					(BgL_offsetz00_1472 %
																					BgL_auxz00_2575);
																		}}
																		{	/* Reduce/copy.scm 281 */

																			BgL_method3293z00_1465 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1470,
																					(int) (BgL_modz00_1473)),
																				(int) (BgL_restz00_1475));
											}}}}}}}}
											BgL_res3517z00_1490 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3293z00_1465) (BgL_method3293z00_1465,
													(obj_t) (BgL_nodez00_1464), BEOA));
									}}
									BgL_arg3351z00_818 = BgL_res3517z00_1490;
							}}
							{	/* Reduce/copy.scm 281 */
								obj_t BgL_auxz00_2586;

								BgL_auxz00_2586 = (obj_t) (BgL_arg3351z00_818);
								SET_CAR(BgL_nodeza2za2_815, BgL_auxz00_2586);
						}}
						{
							obj_t BgL_nodeza2za2_2589;

							BgL_nodeza2za2_2589 = CDR(BgL_nodeza2za2_815);
							BgL_nodeza2za2_815 = BgL_nodeza2za2_2589;
							goto BgL_zc3anonymousza33349ze3z83_816;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_copyz00()
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_nodezd2copyz12zd2default3292zd2envzc0zzreduce_copyz00,
				BGl_nodez00zzast_nodez00, BGl_string3606z00zzreduce_copyz00);
		}
	}



/* node-copy! */
	BgL_nodez00_bglt BGl_nodezd2copyz12zc0zzreduce_copyz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 55 */
			{	/* Reduce/copy.scm 55 */
				obj_t BgL_method3293z00_1494;

				{	/* Reduce/copy.scm 55 */
					BgL_objectz00_bglt BgL_objz00_1495;

					BgL_objz00_1495 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/copy.scm 55 */
						long BgL_objzd2classzd2numz00_1496;

						BgL_objzd2classzd2numz00_1496 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1495);
						{	/* Reduce/copy.scm 55 */
							obj_t BgL_arg2643z00_1497;

							BgL_arg2643z00_1497 =
								PROCEDURE_REF(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
								(int) (((long) 1)));
							{	/* Reduce/copy.scm 55 */
								obj_t BgL_arrayz00_1499;

								int BgL_offsetz00_1500;

								BgL_arrayz00_1499 = BgL_arg2643z00_1497;
								BgL_offsetz00_1500 = (int) (BgL_objzd2classzd2numz00_1496);
								{	/* Reduce/copy.scm 55 */
									long BgL_offsetz00_1501;

									BgL_offsetz00_1501 =
										((long) (BgL_offsetz00_1500) - OBJECT_TYPE);
									{	/* Reduce/copy.scm 55 */
										long BgL_modz00_1502;

										{	/* Reduce/copy.scm 55 */
											int BgL_arg2645z00_1503;

											BgL_arg2645z00_1503 = (int) (((long) 16));
											{	/* Reduce/copy.scm 55 */
												long BgL_auxz00_2600;

												BgL_auxz00_2600 = (long) (BgL_arg2645z00_1503);
												BgL_modz00_1502 =
													(BgL_offsetz00_1501 / BgL_auxz00_2600);
										}}
										{	/* Reduce/copy.scm 55 */
											long BgL_restz00_1504;

											{	/* Reduce/copy.scm 55 */
												int BgL_arg2644z00_1505;

												BgL_arg2644z00_1505 = (int) (((long) 16));
												{	/* Reduce/copy.scm 55 */
													long BgL_auxz00_2604;

													BgL_auxz00_2604 = (long) (BgL_arg2644z00_1505);
													BgL_restz00_1504 =
														(BgL_offsetz00_1501 % BgL_auxz00_2604);
											}}
											{	/* Reduce/copy.scm 55 */

												BgL_method3293z00_1494 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1499,
														(int) (BgL_modz00_1502)), (int) (BgL_restz00_1504));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1494)
					(BgL_method3293z00_1494, (obj_t) (BgL_nodez00_2), BEOA));
			}
		}
	}



/* _node-copy! */
	obj_t BGl__nodezd2copyz12zc0zzreduce_copyz00(obj_t BgL_envz00_2400,
		obj_t BgL_nodez00_2401)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 55 */
			return
				(obj_t) (BGl_nodezd2copyz12zc0zzreduce_copyz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2401)));
		}
	}



/* node-copy!-default3292 */
	BgL_nodez00_bglt
		BGl_nodezd2copyz12zd2default3292z12zzreduce_copyz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string3607z00zzreduce_copyz00, (obj_t) (BgL_nodez00_3)));
		}
	}



/* _node-copy!-default3292 */
	obj_t BGl__nodezd2copyz12zd2default3292z12zzreduce_copyz00(obj_t
		BgL_envz00_2402, obj_t BgL_nodez00_2403)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			return
				(obj_t) (BGl_nodezd2copyz12zd2default3292z12zzreduce_copyz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2403)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_copyz00()
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_atomz00zzast_nodez00,
				BGl_proc3608z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3609z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_varz00zzast_nodez00,
				BGl_proc3610z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_closurez00zzast_nodez00, BGl_proc3611z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3612z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3613z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3614z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_externz00zzast_nodez00, BGl_proc3615z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_castz00zzast_nodez00,
				BGl_proc3616z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_setqz00zzast_nodez00,
				BGl_proc3617z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3618z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_failz00zzast_nodez00,
				BGl_proc3619z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_selectz00zzast_nodez00, BGl_proc3620z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3621z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3622z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3623z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3624z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3625z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3626z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3627z00zzreduce_copyz00,
				BGl_string3606z00zzreduce_copyz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00, BGl_appz00zzast_nodez00,
				BGl_proc3628z00zzreduce_copyz00, BGl_string3606z00zzreduce_copyz00);
		}
	}



/* node-copy!-app3337 */
	obj_t BGl_nodezd2copyz12zd2app3337z12zzreduce_copyz00(obj_t BgL_envz00_2425,
		obj_t BgL_nodez00_2426)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 268 */
			{
				BgL_appz00_bglt BgL_nodez00_1421;

				{	/* Reduce/copy.scm 269 */
					BgL_appz00_bglt BgL_auxz00_2646;

					BgL_nodez00_1421 = (BgL_appz00_bglt) (BgL_nodez00_2426);
					{	/* Reduce/copy.scm 269 */
						obj_t BgL_arg3510z00_2396;

						BgL_arg3510z00_2396 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1421))->BgL_argsz00);
						BGl_nodezd2copyza2z12z62zzreduce_copyz00(BgL_arg3510z00_2396);
					}
					BgL_auxz00_2646 = BgL_nodez00_1421;
					return (obj_t) (BgL_auxz00_2646);
				}
			}
		}
	}



/* node-copy!-box-ref3335 */
	obj_t BGl_nodezd2copyz12zd2boxzd2ref3335zc0zzreduce_copyz00(obj_t
		BgL_envz00_2427, obj_t BgL_nodez00_2428)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 260 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1413;

				{	/* Reduce/copy.scm 261 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_2651;

					BgL_nodez00_1413 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2428);
					{	/* Reduce/copy.scm 262 */
						BgL_nodez00_bglt BgL_arg3507z00_1417;

						{	/* Reduce/copy.scm 262 */
							BgL_varz00_bglt BgL_arg3508z00_1418;

							BgL_arg3508z00_1418 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1413))->BgL_varz00);
							{	/* Reduce/copy.scm 262 */
								BgL_nodez00_bglt BgL_res3603z00_2392;

								{	/* Reduce/copy.scm 262 */
									BgL_nodez00_bglt BgL_nodez00_2366;

									BgL_nodez00_2366 = (BgL_nodez00_bglt) (BgL_arg3508z00_1418);
									{	/* Reduce/copy.scm 262 */
										obj_t BgL_method3293z00_2367;

										{	/* Reduce/copy.scm 262 */
											BgL_objectz00_bglt BgL_objz00_2368;

											BgL_objz00_2368 = (BgL_objectz00_bglt) (BgL_nodez00_2366);
											{	/* Reduce/copy.scm 262 */
												long BgL_objzd2classzd2numz00_2369;

												BgL_objzd2classzd2numz00_2369 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2368);
												{	/* Reduce/copy.scm 262 */
													obj_t BgL_arg2643z00_2370;

													BgL_arg2643z00_2370 =
														PROCEDURE_REF
														(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
														(int) (((long) 1)));
													{	/* Reduce/copy.scm 262 */
														obj_t BgL_arrayz00_2372;

														int BgL_offsetz00_2373;

														BgL_arrayz00_2372 = BgL_arg2643z00_2370;
														BgL_offsetz00_2373 =
															(int) (BgL_objzd2classzd2numz00_2369);
														{	/* Reduce/copy.scm 262 */
															long BgL_offsetz00_2374;

															BgL_offsetz00_2374 =
																((long) (BgL_offsetz00_2373) - OBJECT_TYPE);
															{	/* Reduce/copy.scm 262 */
																long BgL_modz00_2375;

																{	/* Reduce/copy.scm 262 */
																	int BgL_arg2645z00_2376;

																	BgL_arg2645z00_2376 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 262 */
																		long BgL_auxz00_2662;

																		BgL_auxz00_2662 =
																			(long) (BgL_arg2645z00_2376);
																		BgL_modz00_2375 =
																			(BgL_offsetz00_2374 / BgL_auxz00_2662);
																}}
																{	/* Reduce/copy.scm 262 */
																	long BgL_restz00_2377;

																	{	/* Reduce/copy.scm 262 */
																		int BgL_arg2644z00_2378;

																		BgL_arg2644z00_2378 = (int) (((long) 16));
																		{	/* Reduce/copy.scm 262 */
																			long BgL_auxz00_2666;

																			BgL_auxz00_2666 =
																				(long) (BgL_arg2644z00_2378);
																			BgL_restz00_2377 =
																				(BgL_offsetz00_2374 % BgL_auxz00_2666);
																	}}
																	{	/* Reduce/copy.scm 262 */

																		BgL_method3293z00_2367 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2372,
																				(int) (BgL_modz00_2375)),
																			(int) (BgL_restz00_2377));
										}}}}}}}}
										BgL_res3603z00_2392 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_2367) (BgL_method3293z00_2367,
												(obj_t) (BgL_nodez00_2366), BEOA));
								}}
								BgL_arg3507z00_1417 = BgL_res3603z00_2392;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2677;

							BgL_auxz00_2677 = (BgL_varz00_bglt) (BgL_arg3507z00_1417);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1413))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_2677), BUNSPEC);
					}}
					BgL_auxz00_2651 = BgL_nodez00_1413;
					return (obj_t) (BgL_auxz00_2651);
				}
			}
		}
	}



/* node-copy!-box-set!3333 */
	obj_t BGl_nodezd2copyz12zd2boxzd2setz123333zd2zzreduce_copyz00(obj_t
		BgL_envz00_2429, obj_t BgL_nodez00_2430)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 251 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1403;

				{	/* Reduce/copy.scm 252 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2682;

					BgL_nodez00_1403 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2430);
					{	/* Reduce/copy.scm 253 */
						BgL_nodez00_bglt BgL_arg3502z00_1407;

						{	/* Reduce/copy.scm 253 */
							BgL_varz00_bglt BgL_arg3503z00_1408;

							BgL_arg3503z00_1408 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1403))->
								BgL_varz00);
							{	/* Reduce/copy.scm 253 */
								BgL_nodez00_bglt BgL_res3597z00_2332;

								{	/* Reduce/copy.scm 253 */
									BgL_nodez00_bglt BgL_nodez00_2306;

									BgL_nodez00_2306 = (BgL_nodez00_bglt) (BgL_arg3503z00_1408);
									{	/* Reduce/copy.scm 253 */
										obj_t BgL_method3293z00_2307;

										{	/* Reduce/copy.scm 253 */
											BgL_objectz00_bglt BgL_objz00_2308;

											BgL_objz00_2308 = (BgL_objectz00_bglt) (BgL_nodez00_2306);
											{	/* Reduce/copy.scm 253 */
												long BgL_objzd2classzd2numz00_2309;

												BgL_objzd2classzd2numz00_2309 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2308);
												{	/* Reduce/copy.scm 253 */
													obj_t BgL_arg2643z00_2310;

													BgL_arg2643z00_2310 =
														PROCEDURE_REF
														(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
														(int) (((long) 1)));
													{	/* Reduce/copy.scm 253 */
														obj_t BgL_arrayz00_2312;

														int BgL_offsetz00_2313;

														BgL_arrayz00_2312 = BgL_arg2643z00_2310;
														BgL_offsetz00_2313 =
															(int) (BgL_objzd2classzd2numz00_2309);
														{	/* Reduce/copy.scm 253 */
															long BgL_offsetz00_2314;

															BgL_offsetz00_2314 =
																((long) (BgL_offsetz00_2313) - OBJECT_TYPE);
															{	/* Reduce/copy.scm 253 */
																long BgL_modz00_2315;

																{	/* Reduce/copy.scm 253 */
																	int BgL_arg2645z00_2316;

																	BgL_arg2645z00_2316 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 253 */
																		long BgL_auxz00_2693;

																		BgL_auxz00_2693 =
																			(long) (BgL_arg2645z00_2316);
																		BgL_modz00_2315 =
																			(BgL_offsetz00_2314 / BgL_auxz00_2693);
																}}
																{	/* Reduce/copy.scm 253 */
																	long BgL_restz00_2317;

																	{	/* Reduce/copy.scm 253 */
																		int BgL_arg2644z00_2318;

																		BgL_arg2644z00_2318 = (int) (((long) 16));
																		{	/* Reduce/copy.scm 253 */
																			long BgL_auxz00_2697;

																			BgL_auxz00_2697 =
																				(long) (BgL_arg2644z00_2318);
																			BgL_restz00_2317 =
																				(BgL_offsetz00_2314 % BgL_auxz00_2697);
																	}}
																	{	/* Reduce/copy.scm 253 */

																		BgL_method3293z00_2307 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2312,
																				(int) (BgL_modz00_2315)),
																			(int) (BgL_restz00_2317));
										}}}}}}}}
										BgL_res3597z00_2332 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_2307) (BgL_method3293z00_2307,
												(obj_t) (BgL_nodez00_2306), BEOA));
								}}
								BgL_arg3502z00_1407 = BgL_res3597z00_2332;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2708;

							BgL_auxz00_2708 = (BgL_varz00_bglt) (BgL_arg3502z00_1407);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1403))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2708), BUNSPEC);
					}}
					{	/* Reduce/copy.scm 254 */
						BgL_nodez00_bglt BgL_arg3504z00_1409;

						{	/* Reduce/copy.scm 254 */
							BgL_nodez00_bglt BgL_arg3505z00_1410;

							BgL_arg3505z00_1410 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1403))->
								BgL_valuez00);
							{	/* Reduce/copy.scm 254 */
								BgL_nodez00_bglt BgL_res3600z00_2362;

								{	/* Reduce/copy.scm 254 */
									obj_t BgL_method3293z00_2337;

									{	/* Reduce/copy.scm 254 */
										BgL_objectz00_bglt BgL_objz00_2338;

										BgL_objz00_2338 =
											(BgL_objectz00_bglt) (BgL_arg3505z00_1410);
										{	/* Reduce/copy.scm 254 */
											long BgL_objzd2classzd2numz00_2339;

											BgL_objzd2classzd2numz00_2339 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2338);
											{	/* Reduce/copy.scm 254 */
												obj_t BgL_arg2643z00_2340;

												BgL_arg2643z00_2340 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 254 */
													obj_t BgL_arrayz00_2342;

													int BgL_offsetz00_2343;

													BgL_arrayz00_2342 = BgL_arg2643z00_2340;
													BgL_offsetz00_2343 =
														(int) (BgL_objzd2classzd2numz00_2339);
													{	/* Reduce/copy.scm 254 */
														long BgL_offsetz00_2344;

														BgL_offsetz00_2344 =
															((long) (BgL_offsetz00_2343) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 254 */
															long BgL_modz00_2345;

															{	/* Reduce/copy.scm 254 */
																int BgL_arg2645z00_2346;

																BgL_arg2645z00_2346 = (int) (((long) 16));
																{	/* Reduce/copy.scm 254 */
																	long BgL_auxz00_2720;

																	BgL_auxz00_2720 =
																		(long) (BgL_arg2645z00_2346);
																	BgL_modz00_2345 =
																		(BgL_offsetz00_2344 / BgL_auxz00_2720);
															}}
															{	/* Reduce/copy.scm 254 */
																long BgL_restz00_2347;

																{	/* Reduce/copy.scm 254 */
																	int BgL_arg2644z00_2348;

																	BgL_arg2644z00_2348 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 254 */
																		long BgL_auxz00_2724;

																		BgL_auxz00_2724 =
																			(long) (BgL_arg2644z00_2348);
																		BgL_restz00_2347 =
																			(BgL_offsetz00_2344 % BgL_auxz00_2724);
																}}
																{	/* Reduce/copy.scm 254 */

																	BgL_method3293z00_2337 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2342,
																			(int) (BgL_modz00_2345)),
																		(int) (BgL_restz00_2347));
									}}}}}}}}
									BgL_res3600z00_2362 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2337)
										(BgL_method3293z00_2337, (obj_t) (BgL_arg3505z00_1410),
											BEOA));
								}
								BgL_arg3504z00_1409 = BgL_res3600z00_2362;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1403))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3504z00_1409), BUNSPEC);
					}
					BgL_auxz00_2682 = BgL_nodez00_1403;
					return (obj_t) (BgL_auxz00_2682);
				}
			}
		}
	}



/* node-copy!-make-box3331 */
	obj_t BGl_nodezd2copyz12zd2makezd2box3331zc0zzreduce_copyz00(obj_t
		BgL_envz00_2431, obj_t BgL_nodez00_2432)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 243 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1395;

				{	/* Reduce/copy.scm 244 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_2738;

					BgL_nodez00_1395 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2432);
					{	/* Reduce/copy.scm 245 */
						BgL_nodez00_bglt BgL_arg3499z00_1399;

						{	/* Reduce/copy.scm 245 */
							BgL_nodez00_bglt BgL_arg3500z00_1400;

							BgL_arg3500z00_1400 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1395))->
								BgL_valuez00);
							{	/* Reduce/copy.scm 245 */
								BgL_nodez00_bglt BgL_res3594z00_2302;

								{	/* Reduce/copy.scm 245 */
									obj_t BgL_method3293z00_2277;

									{	/* Reduce/copy.scm 245 */
										BgL_objectz00_bglt BgL_objz00_2278;

										BgL_objz00_2278 =
											(BgL_objectz00_bglt) (BgL_arg3500z00_1400);
										{	/* Reduce/copy.scm 245 */
											long BgL_objzd2classzd2numz00_2279;

											BgL_objzd2classzd2numz00_2279 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2278);
											{	/* Reduce/copy.scm 245 */
												obj_t BgL_arg2643z00_2280;

												BgL_arg2643z00_2280 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 245 */
													obj_t BgL_arrayz00_2282;

													int BgL_offsetz00_2283;

													BgL_arrayz00_2282 = BgL_arg2643z00_2280;
													BgL_offsetz00_2283 =
														(int) (BgL_objzd2classzd2numz00_2279);
													{	/* Reduce/copy.scm 245 */
														long BgL_offsetz00_2284;

														BgL_offsetz00_2284 =
															((long) (BgL_offsetz00_2283) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 245 */
															long BgL_modz00_2285;

															{	/* Reduce/copy.scm 245 */
																int BgL_arg2645z00_2286;

																BgL_arg2645z00_2286 = (int) (((long) 16));
																{	/* Reduce/copy.scm 245 */
																	long BgL_auxz00_2748;

																	BgL_auxz00_2748 =
																		(long) (BgL_arg2645z00_2286);
																	BgL_modz00_2285 =
																		(BgL_offsetz00_2284 / BgL_auxz00_2748);
															}}
															{	/* Reduce/copy.scm 245 */
																long BgL_restz00_2287;

																{	/* Reduce/copy.scm 245 */
																	int BgL_arg2644z00_2288;

																	BgL_arg2644z00_2288 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 245 */
																		long BgL_auxz00_2752;

																		BgL_auxz00_2752 =
																			(long) (BgL_arg2644z00_2288);
																		BgL_restz00_2287 =
																			(BgL_offsetz00_2284 % BgL_auxz00_2752);
																}}
																{	/* Reduce/copy.scm 245 */

																	BgL_method3293z00_2277 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2282,
																			(int) (BgL_modz00_2285)),
																		(int) (BgL_restz00_2287));
									}}}}}}}}
									BgL_res3594z00_2302 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2277)
										(BgL_method3293z00_2277, (obj_t) (BgL_arg3500z00_1400),
											BEOA));
								}
								BgL_arg3499z00_1399 = BgL_res3594z00_2302;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1395))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3499z00_1399), BUNSPEC);
					}
					BgL_auxz00_2738 = BgL_nodez00_1395;
					return (obj_t) (BgL_auxz00_2738);
				}
			}
		}
	}



/* node-copy!-jump-ex-i3328 */
	obj_t BGl_nodezd2copyz12zd2jumpzd2exzd2i3328z12zzreduce_copyz00(obj_t
		BgL_envz00_2433, obj_t BgL_nodez00_2434)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 234 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1385;

				{	/* Reduce/copy.scm 235 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2766;

					BgL_nodez00_1385 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2434);
					{	/* Reduce/copy.scm 236 */
						BgL_nodez00_bglt BgL_arg3494z00_1389;

						{	/* Reduce/copy.scm 236 */
							BgL_nodez00_bglt BgL_arg3495z00_1390;

							BgL_arg3495z00_1390 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1385))->
								BgL_exitz00);
							{	/* Reduce/copy.scm 236 */
								BgL_nodez00_bglt BgL_res3588z00_2242;

								{	/* Reduce/copy.scm 236 */
									obj_t BgL_method3293z00_2217;

									{	/* Reduce/copy.scm 236 */
										BgL_objectz00_bglt BgL_objz00_2218;

										BgL_objz00_2218 =
											(BgL_objectz00_bglt) (BgL_arg3495z00_1390);
										{	/* Reduce/copy.scm 236 */
											long BgL_objzd2classzd2numz00_2219;

											BgL_objzd2classzd2numz00_2219 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2218);
											{	/* Reduce/copy.scm 236 */
												obj_t BgL_arg2643z00_2220;

												BgL_arg2643z00_2220 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 236 */
													obj_t BgL_arrayz00_2222;

													int BgL_offsetz00_2223;

													BgL_arrayz00_2222 = BgL_arg2643z00_2220;
													BgL_offsetz00_2223 =
														(int) (BgL_objzd2classzd2numz00_2219);
													{	/* Reduce/copy.scm 236 */
														long BgL_offsetz00_2224;

														BgL_offsetz00_2224 =
															((long) (BgL_offsetz00_2223) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 236 */
															long BgL_modz00_2225;

															{	/* Reduce/copy.scm 236 */
																int BgL_arg2645z00_2226;

																BgL_arg2645z00_2226 = (int) (((long) 16));
																{	/* Reduce/copy.scm 236 */
																	long BgL_auxz00_2776;

																	BgL_auxz00_2776 =
																		(long) (BgL_arg2645z00_2226);
																	BgL_modz00_2225 =
																		(BgL_offsetz00_2224 / BgL_auxz00_2776);
															}}
															{	/* Reduce/copy.scm 236 */
																long BgL_restz00_2227;

																{	/* Reduce/copy.scm 236 */
																	int BgL_arg2644z00_2228;

																	BgL_arg2644z00_2228 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 236 */
																		long BgL_auxz00_2780;

																		BgL_auxz00_2780 =
																			(long) (BgL_arg2644z00_2228);
																		BgL_restz00_2227 =
																			(BgL_offsetz00_2224 % BgL_auxz00_2780);
																}}
																{	/* Reduce/copy.scm 236 */

																	BgL_method3293z00_2217 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2222,
																			(int) (BgL_modz00_2225)),
																		(int) (BgL_restz00_2227));
									}}}}}}}}
									BgL_res3588z00_2242 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2217)
										(BgL_method3293z00_2217, (obj_t) (BgL_arg3495z00_1390),
											BEOA));
								}
								BgL_arg3494z00_1389 = BgL_res3588z00_2242;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1385))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3494z00_1389), BUNSPEC);
					}
					{	/* Reduce/copy.scm 237 */
						BgL_nodez00_bglt BgL_arg3496z00_1391;

						{	/* Reduce/copy.scm 237 */
							BgL_nodez00_bglt BgL_arg3497z00_1392;

							BgL_arg3497z00_1392 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1385))->
								BgL_valuez00);
							{	/* Reduce/copy.scm 237 */
								BgL_nodez00_bglt BgL_res3591z00_2272;

								{	/* Reduce/copy.scm 237 */
									obj_t BgL_method3293z00_2247;

									{	/* Reduce/copy.scm 237 */
										BgL_objectz00_bglt BgL_objz00_2248;

										BgL_objz00_2248 =
											(BgL_objectz00_bglt) (BgL_arg3497z00_1392);
										{	/* Reduce/copy.scm 237 */
											long BgL_objzd2classzd2numz00_2249;

											BgL_objzd2classzd2numz00_2249 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2248);
											{	/* Reduce/copy.scm 237 */
												obj_t BgL_arg2643z00_2250;

												BgL_arg2643z00_2250 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 237 */
													obj_t BgL_arrayz00_2252;

													int BgL_offsetz00_2253;

													BgL_arrayz00_2252 = BgL_arg2643z00_2250;
													BgL_offsetz00_2253 =
														(int) (BgL_objzd2classzd2numz00_2249);
													{	/* Reduce/copy.scm 237 */
														long BgL_offsetz00_2254;

														BgL_offsetz00_2254 =
															((long) (BgL_offsetz00_2253) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 237 */
															long BgL_modz00_2255;

															{	/* Reduce/copy.scm 237 */
																int BgL_arg2645z00_2256;

																BgL_arg2645z00_2256 = (int) (((long) 16));
																{	/* Reduce/copy.scm 237 */
																	long BgL_auxz00_2801;

																	BgL_auxz00_2801 =
																		(long) (BgL_arg2645z00_2256);
																	BgL_modz00_2255 =
																		(BgL_offsetz00_2254 / BgL_auxz00_2801);
															}}
															{	/* Reduce/copy.scm 237 */
																long BgL_restz00_2257;

																{	/* Reduce/copy.scm 237 */
																	int BgL_arg2644z00_2258;

																	BgL_arg2644z00_2258 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 237 */
																		long BgL_auxz00_2805;

																		BgL_auxz00_2805 =
																			(long) (BgL_arg2644z00_2258);
																		BgL_restz00_2257 =
																			(BgL_offsetz00_2254 % BgL_auxz00_2805);
																}}
																{	/* Reduce/copy.scm 237 */

																	BgL_method3293z00_2247 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2252,
																			(int) (BgL_modz00_2255)),
																		(int) (BgL_restz00_2257));
									}}}}}}}}
									BgL_res3591z00_2272 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2247)
										(BgL_method3293z00_2247, (obj_t) (BgL_arg3497z00_1392),
											BEOA));
								}
								BgL_arg3496z00_1391 = BgL_res3591z00_2272;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1385))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3496z00_1391), BUNSPEC);
					}
					BgL_auxz00_2766 = BgL_nodez00_1385;
					return (obj_t) (BgL_auxz00_2766);
				}
			}
		}
	}



/* node-copy!-set-ex-it3325 */
	obj_t BGl_nodezd2copyz12zd2setzd2exzd2it3325z12zzreduce_copyz00(obj_t
		BgL_envz00_2435, obj_t BgL_nodez00_2436)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 225 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1375;

				{	/* Reduce/copy.scm 226 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_2819;

					BgL_nodez00_1375 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2436);
					{	/* Reduce/copy.scm 227 */
						BgL_nodez00_bglt BgL_arg3489z00_1379;

						{	/* Reduce/copy.scm 227 */
							BgL_nodez00_bglt BgL_arg3490z00_1380;

							BgL_arg3490z00_1380 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_bodyz00);
							{	/* Reduce/copy.scm 227 */
								BgL_nodez00_bglt BgL_res3582z00_2182;

								{	/* Reduce/copy.scm 227 */
									obj_t BgL_method3293z00_2157;

									{	/* Reduce/copy.scm 227 */
										BgL_objectz00_bglt BgL_objz00_2158;

										BgL_objz00_2158 =
											(BgL_objectz00_bglt) (BgL_arg3490z00_1380);
										{	/* Reduce/copy.scm 227 */
											long BgL_objzd2classzd2numz00_2159;

											BgL_objzd2classzd2numz00_2159 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2158);
											{	/* Reduce/copy.scm 227 */
												obj_t BgL_arg2643z00_2160;

												BgL_arg2643z00_2160 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 227 */
													obj_t BgL_arrayz00_2162;

													int BgL_offsetz00_2163;

													BgL_arrayz00_2162 = BgL_arg2643z00_2160;
													BgL_offsetz00_2163 =
														(int) (BgL_objzd2classzd2numz00_2159);
													{	/* Reduce/copy.scm 227 */
														long BgL_offsetz00_2164;

														BgL_offsetz00_2164 =
															((long) (BgL_offsetz00_2163) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 227 */
															long BgL_modz00_2165;

															{	/* Reduce/copy.scm 227 */
																int BgL_arg2645z00_2166;

																BgL_arg2645z00_2166 = (int) (((long) 16));
																{	/* Reduce/copy.scm 227 */
																	long BgL_auxz00_2829;

																	BgL_auxz00_2829 =
																		(long) (BgL_arg2645z00_2166);
																	BgL_modz00_2165 =
																		(BgL_offsetz00_2164 / BgL_auxz00_2829);
															}}
															{	/* Reduce/copy.scm 227 */
																long BgL_restz00_2167;

																{	/* Reduce/copy.scm 227 */
																	int BgL_arg2644z00_2168;

																	BgL_arg2644z00_2168 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 227 */
																		long BgL_auxz00_2833;

																		BgL_auxz00_2833 =
																			(long) (BgL_arg2644z00_2168);
																		BgL_restz00_2167 =
																			(BgL_offsetz00_2164 % BgL_auxz00_2833);
																}}
																{	/* Reduce/copy.scm 227 */

																	BgL_method3293z00_2157 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2162,
																			(int) (BgL_modz00_2165)),
																		(int) (BgL_restz00_2167));
									}}}}}}}}
									BgL_res3582z00_2182 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2157)
										(BgL_method3293z00_2157, (obj_t) (BgL_arg3490z00_1380),
											BEOA));
								}
								BgL_arg3489z00_1379 = BgL_res3582z00_2182;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3489z00_1379), BUNSPEC);
					}
					{	/* Reduce/copy.scm 228 */
						BgL_nodez00_bglt BgL_arg3491z00_1381;

						{	/* Reduce/copy.scm 228 */
							BgL_varz00_bglt BgL_arg3492z00_1382;

							BgL_arg3492z00_1382 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1375))->
								BgL_varz00);
							{	/* Reduce/copy.scm 228 */
								BgL_nodez00_bglt BgL_res3585z00_2212;

								{	/* Reduce/copy.scm 228 */
									BgL_nodez00_bglt BgL_nodez00_2186;

									BgL_nodez00_2186 = (BgL_nodez00_bglt) (BgL_arg3492z00_1382);
									{	/* Reduce/copy.scm 228 */
										obj_t BgL_method3293z00_2187;

										{	/* Reduce/copy.scm 228 */
											BgL_objectz00_bglt BgL_objz00_2188;

											BgL_objz00_2188 = (BgL_objectz00_bglt) (BgL_nodez00_2186);
											{	/* Reduce/copy.scm 228 */
												long BgL_objzd2classzd2numz00_2189;

												BgL_objzd2classzd2numz00_2189 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2188);
												{	/* Reduce/copy.scm 228 */
													obj_t BgL_arg2643z00_2190;

													BgL_arg2643z00_2190 =
														PROCEDURE_REF
														(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
														(int) (((long) 1)));
													{	/* Reduce/copy.scm 228 */
														obj_t BgL_arrayz00_2192;

														int BgL_offsetz00_2193;

														BgL_arrayz00_2192 = BgL_arg2643z00_2190;
														BgL_offsetz00_2193 =
															(int) (BgL_objzd2classzd2numz00_2189);
														{	/* Reduce/copy.scm 228 */
															long BgL_offsetz00_2194;

															BgL_offsetz00_2194 =
																((long) (BgL_offsetz00_2193) - OBJECT_TYPE);
															{	/* Reduce/copy.scm 228 */
																long BgL_modz00_2195;

																{	/* Reduce/copy.scm 228 */
																	int BgL_arg2645z00_2196;

																	BgL_arg2645z00_2196 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 228 */
																		long BgL_auxz00_2855;

																		BgL_auxz00_2855 =
																			(long) (BgL_arg2645z00_2196);
																		BgL_modz00_2195 =
																			(BgL_offsetz00_2194 / BgL_auxz00_2855);
																}}
																{	/* Reduce/copy.scm 228 */
																	long BgL_restz00_2197;

																	{	/* Reduce/copy.scm 228 */
																		int BgL_arg2644z00_2198;

																		BgL_arg2644z00_2198 = (int) (((long) 16));
																		{	/* Reduce/copy.scm 228 */
																			long BgL_auxz00_2859;

																			BgL_auxz00_2859 =
																				(long) (BgL_arg2644z00_2198);
																			BgL_restz00_2197 =
																				(BgL_offsetz00_2194 % BgL_auxz00_2859);
																	}}
																	{	/* Reduce/copy.scm 228 */

																		BgL_method3293z00_2187 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2192,
																				(int) (BgL_modz00_2195)),
																			(int) (BgL_restz00_2197));
										}}}}}}}}
										BgL_res3585z00_2212 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_2187) (BgL_method3293z00_2187,
												(obj_t) (BgL_nodez00_2186), BEOA));
								}}
								BgL_arg3491z00_1381 = BgL_res3585z00_2212;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2870;

							BgL_auxz00_2870 = (BgL_varz00_bglt) (BgL_arg3491z00_1381);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1375))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2870), BUNSPEC);
					}}
					BgL_auxz00_2819 = BgL_nodez00_1375;
					return (obj_t) (BgL_auxz00_2819);
				}
			}
		}
	}



/* node-copy!-let-var3323 */
	obj_t BGl_nodezd2copyz12zd2letzd2var3323zc0zzreduce_copyz00(obj_t
		BgL_envz00_2437, obj_t BgL_nodez00_2438)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 182 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1336;

				BgL_nodez00_1336 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2438);
				{
					obj_t BgL_obindingsz00_1343;

					obj_t BgL_nbindingsz00_1344;

					{	/* Reduce/copy.scm 184 */
						obj_t BgL_arg3465z00_1342;

						BgL_arg3465z00_1342 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1336))->
							BgL_bindingsz00);
						BgL_obindingsz00_1343 = BgL_arg3465z00_1342;
						BgL_nbindingsz00_1344 = BNIL;
					BgL_zc3anonymousza33466ze3z83_1345:
						if (NULLP(BgL_obindingsz00_1343))
							{	/* Reduce/copy.scm 187 */
								bool_t BgL_testz00_2878;

								if (NULLP(BgL_nbindingsz00_1344))
									{	/* Reduce/copy.scm 187 */
										BgL_testz00_2878 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1336))->
											BgL_removablezf3zf3);
									}
								else
									{	/* Reduce/copy.scm 187 */
										BgL_testz00_2878 = ((bool_t) 0);
									}
								if (BgL_testz00_2878)
									{	/* Reduce/copy.scm 188 */
										BgL_nodez00_bglt BgL_arg3469z00_1348;

										BgL_arg3469z00_1348 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1336))->
											BgL_bodyz00);
										{	/* Reduce/copy.scm 188 */
											BgL_nodez00_bglt BgL_res3573z00_2076;

											{	/* Reduce/copy.scm 188 */
												obj_t BgL_method3293z00_2051;

												{	/* Reduce/copy.scm 188 */
													BgL_objectz00_bglt BgL_objz00_2052;

													BgL_objz00_2052 =
														(BgL_objectz00_bglt) (BgL_arg3469z00_1348);
													{	/* Reduce/copy.scm 188 */
														long BgL_objzd2classzd2numz00_2053;

														BgL_objzd2classzd2numz00_2053 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2052);
														{	/* Reduce/copy.scm 188 */
															obj_t BgL_arg2643z00_2054;

															BgL_arg2643z00_2054 =
																PROCEDURE_REF
																(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
																(int) (((long) 1)));
															{	/* Reduce/copy.scm 188 */
																obj_t BgL_arrayz00_2056;

																int BgL_offsetz00_2057;

																BgL_arrayz00_2056 = BgL_arg2643z00_2054;
																BgL_offsetz00_2057 =
																	(int) (BgL_objzd2classzd2numz00_2053);
																{	/* Reduce/copy.scm 188 */
																	long BgL_offsetz00_2058;

																	BgL_offsetz00_2058 =
																		((long) (BgL_offsetz00_2057) - OBJECT_TYPE);
																	{	/* Reduce/copy.scm 188 */
																		long BgL_modz00_2059;

																		{	/* Reduce/copy.scm 188 */
																			int BgL_arg2645z00_2060;

																			BgL_arg2645z00_2060 = (int) (((long) 16));
																			{	/* Reduce/copy.scm 188 */
																				long BgL_auxz00_2891;

																				BgL_auxz00_2891 =
																					(long) (BgL_arg2645z00_2060);
																				BgL_modz00_2059 =
																					(BgL_offsetz00_2058 /
																					BgL_auxz00_2891);
																		}}
																		{	/* Reduce/copy.scm 188 */
																			long BgL_restz00_2061;

																			{	/* Reduce/copy.scm 188 */
																				int BgL_arg2644z00_2062;

																				BgL_arg2644z00_2062 =
																					(int) (((long) 16));
																				{	/* Reduce/copy.scm 188 */
																					long BgL_auxz00_2895;

																					BgL_auxz00_2895 =
																						(long) (BgL_arg2644z00_2062);
																					BgL_restz00_2061 =
																						(BgL_offsetz00_2058 %
																						BgL_auxz00_2895);
																			}}
																			{	/* Reduce/copy.scm 188 */

																				BgL_method3293z00_2051 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2056,
																						(int) (BgL_modz00_2059)),
																					(int) (BgL_restz00_2061));
												}}}}}}}}
												BgL_res3573z00_2076 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3293z00_2051) (BgL_method3293z00_2051,
														(obj_t) (BgL_arg3469z00_1348), BEOA));
											}
											return (obj_t) (BgL_res3573z00_2076);
										}
									}
								else
									{	/* Reduce/copy.scm 187 */
										((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1336))->
												BgL_bindingsz00) =
											((obj_t) BgL_nbindingsz00_1344), BUNSPEC);
										{	/* Reduce/copy.scm 191 */
											BgL_nodez00_bglt BgL_arg3470z00_1349;

											{	/* Reduce/copy.scm 191 */
												BgL_nodez00_bglt BgL_arg3471z00_1350;

												BgL_arg3471z00_1350 =
													(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1336))->
													BgL_bodyz00);
												{	/* Reduce/copy.scm 191 */
													BgL_nodez00_bglt BgL_res3576z00_2106;

													{	/* Reduce/copy.scm 191 */
														obj_t BgL_method3293z00_2081;

														{	/* Reduce/copy.scm 191 */
															BgL_objectz00_bglt BgL_objz00_2082;

															BgL_objz00_2082 =
																(BgL_objectz00_bglt) (BgL_arg3471z00_1350);
															{	/* Reduce/copy.scm 191 */
																long BgL_objzd2classzd2numz00_2083;

																BgL_objzd2classzd2numz00_2083 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2082);
																{	/* Reduce/copy.scm 191 */
																	obj_t BgL_arg2643z00_2084;

																	BgL_arg2643z00_2084 =
																		PROCEDURE_REF
																		(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
																		(int) (((long) 1)));
																	{	/* Reduce/copy.scm 191 */
																		obj_t BgL_arrayz00_2086;

																		int BgL_offsetz00_2087;

																		BgL_arrayz00_2086 = BgL_arg2643z00_2084;
																		BgL_offsetz00_2087 =
																			(int) (BgL_objzd2classzd2numz00_2083);
																		{	/* Reduce/copy.scm 191 */
																			long BgL_offsetz00_2088;

																			BgL_offsetz00_2088 =
																				(
																				(long) (BgL_offsetz00_2087) -
																				OBJECT_TYPE);
																			{	/* Reduce/copy.scm 191 */
																				long BgL_modz00_2089;

																				{	/* Reduce/copy.scm 191 */
																					int BgL_arg2645z00_2090;

																					BgL_arg2645z00_2090 =
																						(int) (((long) 16));
																					{	/* Reduce/copy.scm 191 */
																						long BgL_auxz00_2917;

																						BgL_auxz00_2917 =
																							(long) (BgL_arg2645z00_2090);
																						BgL_modz00_2089 =
																							(BgL_offsetz00_2088 /
																							BgL_auxz00_2917);
																				}}
																				{	/* Reduce/copy.scm 191 */
																					long BgL_restz00_2091;

																					{	/* Reduce/copy.scm 191 */
																						int BgL_arg2644z00_2092;

																						BgL_arg2644z00_2092 =
																							(int) (((long) 16));
																						{	/* Reduce/copy.scm 191 */
																							long BgL_auxz00_2921;

																							BgL_auxz00_2921 =
																								(long) (BgL_arg2644z00_2092);
																							BgL_restz00_2091 =
																								(BgL_offsetz00_2088 %
																								BgL_auxz00_2921);
																					}}
																					{	/* Reduce/copy.scm 191 */

																						BgL_method3293z00_2081 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2086,
																								(int) (BgL_modz00_2089)),
																							(int) (BgL_restz00_2091));
														}}}}}}}}
														BgL_res3576z00_2106 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3293z00_2081) (BgL_method3293z00_2081,
																(obj_t) (BgL_arg3471z00_1350), BEOA));
													}
													BgL_arg3470z00_1349 = BgL_res3576z00_2106;
											}}
											((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1336))->
													BgL_bodyz00) =
												((BgL_nodez00_bglt) BgL_arg3470z00_1349), BUNSPEC);
										}
										return (obj_t) (BgL_nodez00_1336);
									}
							}
						else
							{	/* Reduce/copy.scm 193 */
								obj_t BgL_bindingz00_1352;

								BgL_bindingz00_1352 = CAR(BgL_obindingsz00_1343);
								{	/* Reduce/copy.scm 193 */
									obj_t BgL_varz00_1353;

									BgL_varz00_1353 = CAR(BgL_bindingz00_1352);
									{	/* Reduce/copy.scm 194 */
										BgL_nodez00_bglt BgL_valz00_1354;

										{	/* Reduce/copy.scm 195 */
											obj_t BgL_arg3487z00_1371;

											BgL_arg3487z00_1371 = CDR(BgL_bindingz00_1352);
											{	/* Reduce/copy.scm 195 */
												BgL_nodez00_bglt BgL_res3579z00_2138;

												{	/* Reduce/copy.scm 195 */
													BgL_nodez00_bglt BgL_nodez00_2112;

													BgL_nodez00_2112 =
														(BgL_nodez00_bglt) (BgL_arg3487z00_1371);
													{	/* Reduce/copy.scm 195 */
														obj_t BgL_method3293z00_2113;

														{	/* Reduce/copy.scm 195 */
															BgL_objectz00_bglt BgL_objz00_2114;

															BgL_objz00_2114 =
																(BgL_objectz00_bglt) (BgL_nodez00_2112);
															{	/* Reduce/copy.scm 195 */
																long BgL_objzd2classzd2numz00_2115;

																BgL_objzd2classzd2numz00_2115 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2114);
																{	/* Reduce/copy.scm 195 */
																	obj_t BgL_arg2643z00_2116;

																	BgL_arg2643z00_2116 =
																		PROCEDURE_REF
																		(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
																		(int) (((long) 1)));
																	{	/* Reduce/copy.scm 195 */
																		obj_t BgL_arrayz00_2118;

																		int BgL_offsetz00_2119;

																		BgL_arrayz00_2118 = BgL_arg2643z00_2116;
																		BgL_offsetz00_2119 =
																			(int) (BgL_objzd2classzd2numz00_2115);
																		{	/* Reduce/copy.scm 195 */
																			long BgL_offsetz00_2120;

																			BgL_offsetz00_2120 =
																				(
																				(long) (BgL_offsetz00_2119) -
																				OBJECT_TYPE);
																			{	/* Reduce/copy.scm 195 */
																				long BgL_modz00_2121;

																				{	/* Reduce/copy.scm 195 */
																					int BgL_arg2645z00_2122;

																					BgL_arg2645z00_2122 =
																						(int) (((long) 16));
																					{	/* Reduce/copy.scm 195 */
																						long BgL_auxz00_2946;

																						BgL_auxz00_2946 =
																							(long) (BgL_arg2645z00_2122);
																						BgL_modz00_2121 =
																							(BgL_offsetz00_2120 /
																							BgL_auxz00_2946);
																				}}
																				{	/* Reduce/copy.scm 195 */
																					long BgL_restz00_2123;

																					{	/* Reduce/copy.scm 195 */
																						int BgL_arg2644z00_2124;

																						BgL_arg2644z00_2124 =
																							(int) (((long) 16));
																						{	/* Reduce/copy.scm 195 */
																							long BgL_auxz00_2950;

																							BgL_auxz00_2950 =
																								(long) (BgL_arg2644z00_2124);
																							BgL_restz00_2123 =
																								(BgL_offsetz00_2120 %
																								BgL_auxz00_2950);
																					}}
																					{	/* Reduce/copy.scm 195 */

																						BgL_method3293z00_2113 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2118,
																								(int) (BgL_modz00_2121)),
																							(int) (BgL_restz00_2123));
														}}}}}}}}
														BgL_res3579z00_2138 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3293z00_2113) (BgL_method3293z00_2113,
																(obj_t) (BgL_nodez00_2112), BEOA));
												}}
												BgL_valz00_1354 = BgL_res3579z00_2138;
										}}
										{	/* Reduce/copy.scm 195 */

											{	/* Reduce/copy.scm 196 */
												obj_t BgL_auxz00_2961;

												BgL_auxz00_2961 = (obj_t) (BgL_valz00_1354);
												SET_CDR(BgL_bindingz00_1352, BgL_auxz00_2961);
											}
											{	/* Reduce/copy.scm 205 */
												bool_t BgL_testz00_2964;

												{	/* Reduce/copy.scm 205 */
													bool_t BgL_testz00_2965;

													{	/* Reduce/copy.scm 205 */
														obj_t BgL_auxz00_2966;

														{
															BgL_variablez00_bglt BgL_auxz00_2967;

															BgL_auxz00_2967 =
																(BgL_variablez00_bglt) (BgL_varz00_1353);
															BgL_auxz00_2966 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2967))->BgL_accessz00);
														}
														BgL_testz00_2965 =
															(BgL_auxz00_2966 == CNST_TABLE_REF(((long) 2)));
													}
													if (BgL_testz00_2965)
														{	/* Reduce/copy.scm 206 */
															bool_t BgL__ortest_3269z00_1360;

															{	/* Reduce/copy.scm 206 */
																obj_t BgL_obj2150z00_2142;

																BgL_obj2150z00_2142 = (obj_t) (BgL_valz00_1354);
																BgL__ortest_3269z00_1360 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj2150z00_2142,
																	BGl_atomz00zzast_nodez00);
															}
															if (BgL__ortest_3269z00_1360)
																{	/* Reduce/copy.scm 206 */
																	BgL_testz00_2964 = BgL__ortest_3269z00_1360;
																}
															else
																{	/* Reduce/copy.scm 207 */
																	bool_t BgL_testz00_2975;

																	{	/* Reduce/copy.scm 207 */
																		obj_t BgL_obj2170z00_2143;

																		BgL_obj2170z00_2143 =
																			(obj_t) (BgL_valz00_1354);
																		BgL_testz00_2975 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj2170z00_2143,
																			BGl_varz00zzast_nodez00);
																	}
																	if (BgL_testz00_2975)
																		{	/* Reduce/copy.scm 208 */
																			bool_t BgL_testz00_2978;

																			{	/* Reduce/copy.scm 208 */
																				obj_t BgL_auxz00_2979;

																				{	/* Reduce/copy.scm 208 */
																					BgL_variablez00_bglt
																						BgL_obj1614z00_2145;
																					{
																						BgL_varz00_bglt BgL_auxz00_2980;

																						BgL_auxz00_2980 =
																							(BgL_varz00_bglt)
																							(BgL_valz00_1354);
																						BgL_obj1614z00_2145 =
																							(((BgL_varz00_bglt)
																								CREF(BgL_auxz00_2980))->
																							BgL_variablez00);
																					}
																					BgL_auxz00_2979 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_obj1614z00_2145))->
																						BgL_accessz00);
																				}
																				BgL_testz00_2978 =
																					(BgL_auxz00_2979 ==
																					CNST_TABLE_REF(((long) 2)));
																			}
																			if (BgL_testz00_2978)
																				{	/* Reduce/copy.scm 211 */
																					BgL_typez00_bglt BgL_arg3478z00_1363;

																					BgL_typez00_bglt BgL_arg3479z00_1364;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_2986;
																						BgL_auxz00_2986 =
																							(BgL_variablez00_bglt)
																							(BgL_varz00_1353);
																						BgL_arg3478z00_1363 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_2986))->
																							BgL_typez00);
																					}
																					{	/* Reduce/copy.scm 212 */
																						BgL_variablez00_bglt
																							BgL_obj1608z00_2148;
																						{
																							BgL_varz00_bglt BgL_auxz00_2989;

																							BgL_auxz00_2989 =
																								(BgL_varz00_bglt)
																								(BgL_valz00_1354);
																							BgL_obj1608z00_2148 =
																								(((BgL_varz00_bglt)
																									CREF(BgL_auxz00_2989))->
																								BgL_variablez00);
																						}
																						BgL_arg3479z00_1364 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_obj1608z00_2148))->
																							BgL_typez00);
																					}
																					BgL_testz00_2964 =
																						BGl_typezd2lesszd2specificzf3zf3zztype_miscz00
																						(BgL_arg3478z00_1363,
																						BgL_arg3479z00_1364);
																				}
																			else
																				{	/* Reduce/copy.scm 208 */
																					BgL_testz00_2964 = ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Reduce/copy.scm 207 */
																			BgL_testz00_2964 = ((bool_t) 0);
																		}
																}
														}
													else
														{	/* Reduce/copy.scm 205 */
															BgL_testz00_2964 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_2964)
													{	/* Reduce/copy.scm 205 */
														BGl_za2copyzd2removedza2zd2zzreduce_copyz00 =
															(BGl_za2copyzd2removedza2zd2zzreduce_copyz00 +
															((long) 1));
														{
															obj_t BgL_auxz00_2997;

															BgL_variablez00_bglt BgL_auxz00_2995;

															BgL_auxz00_2997 = (obj_t) (BgL_valz00_1354);
															BgL_auxz00_2995 =
																(BgL_variablez00_bglt) (BgL_varz00_1353);
															((((BgL_variablez00_bglt) CREF(BgL_auxz00_2995))->
																	BgL_fastzd2alphazd2) =
																((obj_t) BgL_auxz00_2997), BUNSPEC);
														}
														{
															obj_t BgL_obindingsz00_3000;

															BgL_obindingsz00_3000 =
																CDR(BgL_obindingsz00_1343);
															BgL_obindingsz00_1343 = BgL_obindingsz00_3000;
															goto BgL_zc3anonymousza33466ze3z83_1345;
														}
													}
												else
													{	/* Reduce/copy.scm 220 */
														obj_t BgL_arg3475z00_1357;

														obj_t BgL_arg3476z00_1358;

														BgL_arg3475z00_1357 = CDR(BgL_obindingsz00_1343);
														BgL_arg3476z00_1358 =
															MAKE_PAIR(BgL_bindingz00_1352,
															BgL_nbindingsz00_1344);
														{
															obj_t BgL_nbindingsz00_3005;

															obj_t BgL_obindingsz00_3004;

															BgL_obindingsz00_3004 = BgL_arg3475z00_1357;
															BgL_nbindingsz00_3005 = BgL_arg3476z00_1358;
															BgL_nbindingsz00_1344 = BgL_nbindingsz00_3005;
															BgL_obindingsz00_1343 = BgL_obindingsz00_3004;
															goto BgL_zc3anonymousza33466ze3z83_1345;
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



/* node-copy!-let-fun3321 */
	obj_t BGl_nodezd2copyz12zd2letzd2fun3321zc0zzreduce_copyz00(obj_t
		BgL_envz00_2439, obj_t BgL_nodez00_2440)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 170 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1317;

				{	/* Reduce/copy.scm 171 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3007;

					BgL_nodez00_1317 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2440);
					{	/* Reduce/copy.scm 172 */
						obj_t BgL_g3291z00_1321;

						BgL_g3291z00_1321 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1317))->BgL_localsz00);
						{
							obj_t BgL_l3289z00_1323;

							BgL_l3289z00_1323 = BgL_g3291z00_1321;
						BgL_zc3anonymousza33457ze3z83_1324:
							if (PAIRP(BgL_l3289z00_1323))
								{	/* Reduce/copy.scm 172 */
									{	/* Reduce/copy.scm 173 */
										obj_t BgL_localz00_1326;

										BgL_localz00_1326 = CAR(BgL_l3289z00_1323);
										{	/* Reduce/copy.scm 173 */
											BgL_valuez00_bglt BgL_funz00_1327;

											{
												BgL_variablez00_bglt BgL_auxz00_3012;

												BgL_auxz00_3012 =
													(BgL_variablez00_bglt) (BgL_localz00_1326);
												BgL_funz00_1327 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3012))->
													BgL_valuez00);
											}
											{	/* Reduce/copy.scm 174 */
												BgL_nodez00_bglt BgL_arg3459z00_1328;

												{	/* Reduce/copy.scm 174 */
													obj_t BgL_arg3460z00_1329;

													{
														BgL_sfunz00_bglt BgL_auxz00_3015;

														BgL_auxz00_3015 =
															(BgL_sfunz00_bglt) (BgL_funz00_1327);
														BgL_arg3460z00_1329 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3015))->
															BgL_bodyz00);
													}
													{	/* Reduce/copy.scm 174 */
														BgL_nodez00_bglt BgL_res3567z00_2011;

														{	/* Reduce/copy.scm 174 */
															BgL_nodez00_bglt BgL_nodez00_1985;

															BgL_nodez00_1985 =
																(BgL_nodez00_bglt) (BgL_arg3460z00_1329);
															{	/* Reduce/copy.scm 174 */
																obj_t BgL_method3293z00_1986;

																{	/* Reduce/copy.scm 174 */
																	BgL_objectz00_bglt BgL_objz00_1987;

																	BgL_objz00_1987 =
																		(BgL_objectz00_bglt) (BgL_nodez00_1985);
																	{	/* Reduce/copy.scm 174 */
																		long BgL_objzd2classzd2numz00_1988;

																		BgL_objzd2classzd2numz00_1988 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_1987);
																		{	/* Reduce/copy.scm 174 */
																			obj_t BgL_arg2643z00_1989;

																			BgL_arg2643z00_1989 =
																				PROCEDURE_REF
																				(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
																				(int) (((long) 1)));
																			{	/* Reduce/copy.scm 174 */
																				obj_t BgL_arrayz00_1991;

																				int BgL_offsetz00_1992;

																				BgL_arrayz00_1991 = BgL_arg2643z00_1989;
																				BgL_offsetz00_1992 =
																					(int) (BgL_objzd2classzd2numz00_1988);
																				{	/* Reduce/copy.scm 174 */
																					long BgL_offsetz00_1993;

																					BgL_offsetz00_1993 =
																						(
																						(long) (BgL_offsetz00_1992) -
																						OBJECT_TYPE);
																					{	/* Reduce/copy.scm 174 */
																						long BgL_modz00_1994;

																						{	/* Reduce/copy.scm 174 */
																							int BgL_arg2645z00_1995;

																							BgL_arg2645z00_1995 =
																								(int) (((long) 16));
																							{	/* Reduce/copy.scm 174 */
																								long BgL_auxz00_3027;

																								BgL_auxz00_3027 =
																									(long) (BgL_arg2645z00_1995);
																								BgL_modz00_1994 =
																									(BgL_offsetz00_1993 /
																									BgL_auxz00_3027);
																						}}
																						{	/* Reduce/copy.scm 174 */
																							long BgL_restz00_1996;

																							{	/* Reduce/copy.scm 174 */
																								int BgL_arg2644z00_1997;

																								BgL_arg2644z00_1997 =
																									(int) (((long) 16));
																								{	/* Reduce/copy.scm 174 */
																									long BgL_auxz00_3031;

																									BgL_auxz00_3031 =
																										(long)
																										(BgL_arg2644z00_1997);
																									BgL_restz00_1996 =
																										(BgL_offsetz00_1993 %
																										BgL_auxz00_3031);
																							}}
																							{	/* Reduce/copy.scm 174 */

																								BgL_method3293z00_1986 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_1991,
																										(int) (BgL_modz00_1994)),
																									(int) (BgL_restz00_1996));
																}}}}}}}}
																BgL_res3567z00_2011 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3293z00_1986)
																	(BgL_method3293z00_1986,
																		(obj_t) (BgL_nodez00_1985), BEOA));
														}}
														BgL_arg3459z00_1328 = BgL_res3567z00_2011;
												}}
												{
													obj_t BgL_auxz00_3044;

													BgL_sfunz00_bglt BgL_auxz00_3042;

													BgL_auxz00_3044 = (obj_t) (BgL_arg3459z00_1328);
													BgL_auxz00_3042 =
														(BgL_sfunz00_bglt) (BgL_funz00_1327);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3042))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3044), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3289z00_3047;

										BgL_l3289z00_3047 = CDR(BgL_l3289z00_1323);
										BgL_l3289z00_1323 = BgL_l3289z00_3047;
										goto BgL_zc3anonymousza33457ze3z83_1324;
									}
								}
							else
								{	/* Reduce/copy.scm 172 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/copy.scm 176 */
						BgL_nodez00_bglt BgL_arg3462z00_1332;

						{	/* Reduce/copy.scm 176 */
							BgL_nodez00_bglt BgL_arg3463z00_1333;

							BgL_arg3463z00_1333 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1317))->BgL_bodyz00);
							{	/* Reduce/copy.scm 176 */
								BgL_nodez00_bglt BgL_res3570z00_2042;

								{	/* Reduce/copy.scm 176 */
									obj_t BgL_method3293z00_2017;

									{	/* Reduce/copy.scm 176 */
										BgL_objectz00_bglt BgL_objz00_2018;

										BgL_objz00_2018 =
											(BgL_objectz00_bglt) (BgL_arg3463z00_1333);
										{	/* Reduce/copy.scm 176 */
											long BgL_objzd2classzd2numz00_2019;

											BgL_objzd2classzd2numz00_2019 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2018);
											{	/* Reduce/copy.scm 176 */
												obj_t BgL_arg2643z00_2020;

												BgL_arg2643z00_2020 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 176 */
													obj_t BgL_arrayz00_2022;

													int BgL_offsetz00_2023;

													BgL_arrayz00_2022 = BgL_arg2643z00_2020;
													BgL_offsetz00_2023 =
														(int) (BgL_objzd2classzd2numz00_2019);
													{	/* Reduce/copy.scm 176 */
														long BgL_offsetz00_2024;

														BgL_offsetz00_2024 =
															((long) (BgL_offsetz00_2023) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 176 */
															long BgL_modz00_2025;

															{	/* Reduce/copy.scm 176 */
																int BgL_arg2645z00_2026;

																BgL_arg2645z00_2026 = (int) (((long) 16));
																{	/* Reduce/copy.scm 176 */
																	long BgL_auxz00_3058;

																	BgL_auxz00_3058 =
																		(long) (BgL_arg2645z00_2026);
																	BgL_modz00_2025 =
																		(BgL_offsetz00_2024 / BgL_auxz00_3058);
															}}
															{	/* Reduce/copy.scm 176 */
																long BgL_restz00_2027;

																{	/* Reduce/copy.scm 176 */
																	int BgL_arg2644z00_2028;

																	BgL_arg2644z00_2028 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 176 */
																		long BgL_auxz00_3062;

																		BgL_auxz00_3062 =
																			(long) (BgL_arg2644z00_2028);
																		BgL_restz00_2027 =
																			(BgL_offsetz00_2024 % BgL_auxz00_3062);
																}}
																{	/* Reduce/copy.scm 176 */

																	BgL_method3293z00_2017 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2022,
																			(int) (BgL_modz00_2025)),
																		(int) (BgL_restz00_2027));
									}}}}}}}}
									BgL_res3570z00_2042 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_2017)
										(BgL_method3293z00_2017, (obj_t) (BgL_arg3463z00_1333),
											BEOA));
								}
								BgL_arg3462z00_1332 = BgL_res3570z00_2042;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1317))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3462z00_1332), BUNSPEC);
					}
					BgL_auxz00_3007 = BgL_nodez00_1317;
					return (obj_t) (BgL_auxz00_3007);
				}
			}
		}
	}



/* node-copy!-select3319 */
	obj_t BGl_nodezd2copyz12zd2select3319z12zzreduce_copyz00(obj_t
		BgL_envz00_2441, obj_t BgL_nodez00_2442)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 159 */
			{
				BgL_selectz00_bglt BgL_nodez00_1299;

				{	/* Reduce/copy.scm 160 */
					BgL_selectz00_bglt BgL_auxz00_3076;

					BgL_nodez00_1299 = (BgL_selectz00_bglt) (BgL_nodez00_2442);
					{	/* Reduce/copy.scm 161 */
						BgL_nodez00_bglt BgL_arg3449z00_1303;

						{	/* Reduce/copy.scm 161 */
							BgL_nodez00_bglt BgL_arg3450z00_1304;

							BgL_arg3450z00_1304 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1299))->BgL_testz00);
							{	/* Reduce/copy.scm 161 */
								BgL_nodez00_bglt BgL_res3561z00_1943;

								{	/* Reduce/copy.scm 161 */
									obj_t BgL_method3293z00_1918;

									{	/* Reduce/copy.scm 161 */
										BgL_objectz00_bglt BgL_objz00_1919;

										BgL_objz00_1919 =
											(BgL_objectz00_bglt) (BgL_arg3450z00_1304);
										{	/* Reduce/copy.scm 161 */
											long BgL_objzd2classzd2numz00_1920;

											BgL_objzd2classzd2numz00_1920 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1919);
											{	/* Reduce/copy.scm 161 */
												obj_t BgL_arg2643z00_1921;

												BgL_arg2643z00_1921 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 161 */
													obj_t BgL_arrayz00_1923;

													int BgL_offsetz00_1924;

													BgL_arrayz00_1923 = BgL_arg2643z00_1921;
													BgL_offsetz00_1924 =
														(int) (BgL_objzd2classzd2numz00_1920);
													{	/* Reduce/copy.scm 161 */
														long BgL_offsetz00_1925;

														BgL_offsetz00_1925 =
															((long) (BgL_offsetz00_1924) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 161 */
															long BgL_modz00_1926;

															{	/* Reduce/copy.scm 161 */
																int BgL_arg2645z00_1927;

																BgL_arg2645z00_1927 = (int) (((long) 16));
																{	/* Reduce/copy.scm 161 */
																	long BgL_auxz00_3086;

																	BgL_auxz00_3086 =
																		(long) (BgL_arg2645z00_1927);
																	BgL_modz00_1926 =
																		(BgL_offsetz00_1925 / BgL_auxz00_3086);
															}}
															{	/* Reduce/copy.scm 161 */
																long BgL_restz00_1928;

																{	/* Reduce/copy.scm 161 */
																	int BgL_arg2644z00_1929;

																	BgL_arg2644z00_1929 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 161 */
																		long BgL_auxz00_3090;

																		BgL_auxz00_3090 =
																			(long) (BgL_arg2644z00_1929);
																		BgL_restz00_1928 =
																			(BgL_offsetz00_1925 % BgL_auxz00_3090);
																}}
																{	/* Reduce/copy.scm 161 */

																	BgL_method3293z00_1918 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1923,
																			(int) (BgL_modz00_1926)),
																		(int) (BgL_restz00_1928));
									}}}}}}}}
									BgL_res3561z00_1943 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1918)
										(BgL_method3293z00_1918, (obj_t) (BgL_arg3450z00_1304),
											BEOA));
								}
								BgL_arg3449z00_1303 = BgL_res3561z00_1943;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1299))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3449z00_1303), BUNSPEC);
					}
					{	/* Reduce/copy.scm 162 */
						obj_t BgL_g3288z00_1305;

						BgL_g3288z00_1305 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1299))->BgL_clausesz00);
						{
							obj_t BgL_l3286z00_1307;

							BgL_l3286z00_1307 = BgL_g3288z00_1305;
						BgL_zc3anonymousza33451ze3z83_1308:
							if (PAIRP(BgL_l3286z00_1307))
								{	/* Reduce/copy.scm 162 */
									{	/* Reduce/copy.scm 163 */
										obj_t BgL_clausez00_1310;

										BgL_clausez00_1310 = CAR(BgL_l3286z00_1307);
										{	/* Reduce/copy.scm 163 */
											BgL_nodez00_bglt BgL_arg3453z00_1311;

											{	/* Reduce/copy.scm 163 */
												obj_t BgL_arg3454z00_1312;

												BgL_arg3454z00_1312 = CDR(BgL_clausez00_1310);
												{	/* Reduce/copy.scm 163 */
													BgL_nodez00_bglt BgL_res3564z00_1976;

													{	/* Reduce/copy.scm 163 */
														BgL_nodez00_bglt BgL_nodez00_1950;

														BgL_nodez00_1950 =
															(BgL_nodez00_bglt) (BgL_arg3454z00_1312);
														{	/* Reduce/copy.scm 163 */
															obj_t BgL_method3293z00_1951;

															{	/* Reduce/copy.scm 163 */
																BgL_objectz00_bglt BgL_objz00_1952;

																BgL_objz00_1952 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1950);
																{	/* Reduce/copy.scm 163 */
																	long BgL_objzd2classzd2numz00_1953;

																	BgL_objzd2classzd2numz00_1953 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1952);
																	{	/* Reduce/copy.scm 163 */
																		obj_t BgL_arg2643z00_1954;

																		BgL_arg2643z00_1954 =
																			PROCEDURE_REF
																			(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
																			(int) (((long) 1)));
																		{	/* Reduce/copy.scm 163 */
																			obj_t BgL_arrayz00_1956;

																			int BgL_offsetz00_1957;

																			BgL_arrayz00_1956 = BgL_arg2643z00_1954;
																			BgL_offsetz00_1957 =
																				(int) (BgL_objzd2classzd2numz00_1953);
																			{	/* Reduce/copy.scm 163 */
																				long BgL_offsetz00_1958;

																				BgL_offsetz00_1958 =
																					(
																					(long) (BgL_offsetz00_1957) -
																					OBJECT_TYPE);
																				{	/* Reduce/copy.scm 163 */
																					long BgL_modz00_1959;

																					{	/* Reduce/copy.scm 163 */
																						int BgL_arg2645z00_1960;

																						BgL_arg2645z00_1960 =
																							(int) (((long) 16));
																						{	/* Reduce/copy.scm 163 */
																							long BgL_auxz00_3116;

																							BgL_auxz00_3116 =
																								(long) (BgL_arg2645z00_1960);
																							BgL_modz00_1959 =
																								(BgL_offsetz00_1958 /
																								BgL_auxz00_3116);
																					}}
																					{	/* Reduce/copy.scm 163 */
																						long BgL_restz00_1961;

																						{	/* Reduce/copy.scm 163 */
																							int BgL_arg2644z00_1962;

																							BgL_arg2644z00_1962 =
																								(int) (((long) 16));
																							{	/* Reduce/copy.scm 163 */
																								long BgL_auxz00_3120;

																								BgL_auxz00_3120 =
																									(long) (BgL_arg2644z00_1962);
																								BgL_restz00_1961 =
																									(BgL_offsetz00_1958 %
																									BgL_auxz00_3120);
																						}}
																						{	/* Reduce/copy.scm 163 */

																							BgL_method3293z00_1951 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1956,
																									(int) (BgL_modz00_1959)),
																								(int) (BgL_restz00_1961));
															}}}}}}}}
															BgL_res3564z00_1976 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3293z00_1951)
																(BgL_method3293z00_1951,
																	(obj_t) (BgL_nodez00_1950), BEOA));
													}}
													BgL_arg3453z00_1311 = BgL_res3564z00_1976;
											}}
											{	/* Reduce/copy.scm 163 */
												obj_t BgL_auxz00_3131;

												BgL_auxz00_3131 = (obj_t) (BgL_arg3453z00_1311);
												SET_CDR(BgL_clausez00_1310, BgL_auxz00_3131);
									}}}
									{
										obj_t BgL_l3286z00_3134;

										BgL_l3286z00_3134 = CDR(BgL_l3286z00_1307);
										BgL_l3286z00_1307 = BgL_l3286z00_3134;
										goto BgL_zc3anonymousza33451ze3z83_1308;
									}
								}
							else
								{	/* Reduce/copy.scm 162 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3076 = BgL_nodez00_1299;
					return (obj_t) (BgL_auxz00_3076);
				}
			}
		}
	}



/* node-copy!-fail3317 */
	obj_t BGl_nodezd2copyz12zd2fail3317z12zzreduce_copyz00(obj_t BgL_envz00_2443,
		obj_t BgL_nodez00_2444)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 149 */
			{
				BgL_failz00_bglt BgL_nodez00_1287;

				{	/* Reduce/copy.scm 150 */
					BgL_failz00_bglt BgL_auxz00_3138;

					BgL_nodez00_1287 = (BgL_failz00_bglt) (BgL_nodez00_2444);
					{	/* Reduce/copy.scm 151 */
						BgL_nodez00_bglt BgL_arg3441z00_1291;

						{	/* Reduce/copy.scm 151 */
							BgL_nodez00_bglt BgL_arg3443z00_1292;

							BgL_arg3443z00_1292 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1287))->BgL_procz00);
							{	/* Reduce/copy.scm 151 */
								BgL_nodez00_bglt BgL_res3552z00_1853;

								{	/* Reduce/copy.scm 151 */
									obj_t BgL_method3293z00_1828;

									{	/* Reduce/copy.scm 151 */
										BgL_objectz00_bglt BgL_objz00_1829;

										BgL_objz00_1829 =
											(BgL_objectz00_bglt) (BgL_arg3443z00_1292);
										{	/* Reduce/copy.scm 151 */
											long BgL_objzd2classzd2numz00_1830;

											BgL_objzd2classzd2numz00_1830 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1829);
											{	/* Reduce/copy.scm 151 */
												obj_t BgL_arg2643z00_1831;

												BgL_arg2643z00_1831 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 151 */
													obj_t BgL_arrayz00_1833;

													int BgL_offsetz00_1834;

													BgL_arrayz00_1833 = BgL_arg2643z00_1831;
													BgL_offsetz00_1834 =
														(int) (BgL_objzd2classzd2numz00_1830);
													{	/* Reduce/copy.scm 151 */
														long BgL_offsetz00_1835;

														BgL_offsetz00_1835 =
															((long) (BgL_offsetz00_1834) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 151 */
															long BgL_modz00_1836;

															{	/* Reduce/copy.scm 151 */
																int BgL_arg2645z00_1837;

																BgL_arg2645z00_1837 = (int) (((long) 16));
																{	/* Reduce/copy.scm 151 */
																	long BgL_auxz00_3148;

																	BgL_auxz00_3148 =
																		(long) (BgL_arg2645z00_1837);
																	BgL_modz00_1836 =
																		(BgL_offsetz00_1835 / BgL_auxz00_3148);
															}}
															{	/* Reduce/copy.scm 151 */
																long BgL_restz00_1838;

																{	/* Reduce/copy.scm 151 */
																	int BgL_arg2644z00_1839;

																	BgL_arg2644z00_1839 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 151 */
																		long BgL_auxz00_3152;

																		BgL_auxz00_3152 =
																			(long) (BgL_arg2644z00_1839);
																		BgL_restz00_1838 =
																			(BgL_offsetz00_1835 % BgL_auxz00_3152);
																}}
																{	/* Reduce/copy.scm 151 */

																	BgL_method3293z00_1828 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1833,
																			(int) (BgL_modz00_1836)),
																		(int) (BgL_restz00_1838));
									}}}}}}}}
									BgL_res3552z00_1853 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1828)
										(BgL_method3293z00_1828, (obj_t) (BgL_arg3443z00_1292),
											BEOA));
								}
								BgL_arg3441z00_1291 = BgL_res3552z00_1853;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1287))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3441z00_1291), BUNSPEC);
					}
					{	/* Reduce/copy.scm 152 */
						BgL_nodez00_bglt BgL_arg3444z00_1293;

						{	/* Reduce/copy.scm 152 */
							BgL_nodez00_bglt BgL_arg3445z00_1294;

							BgL_arg3445z00_1294 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1287))->BgL_msgz00);
							{	/* Reduce/copy.scm 152 */
								BgL_nodez00_bglt BgL_res3555z00_1883;

								{	/* Reduce/copy.scm 152 */
									obj_t BgL_method3293z00_1858;

									{	/* Reduce/copy.scm 152 */
										BgL_objectz00_bglt BgL_objz00_1859;

										BgL_objz00_1859 =
											(BgL_objectz00_bglt) (BgL_arg3445z00_1294);
										{	/* Reduce/copy.scm 152 */
											long BgL_objzd2classzd2numz00_1860;

											BgL_objzd2classzd2numz00_1860 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1859);
											{	/* Reduce/copy.scm 152 */
												obj_t BgL_arg2643z00_1861;

												BgL_arg2643z00_1861 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 152 */
													obj_t BgL_arrayz00_1863;

													int BgL_offsetz00_1864;

													BgL_arrayz00_1863 = BgL_arg2643z00_1861;
													BgL_offsetz00_1864 =
														(int) (BgL_objzd2classzd2numz00_1860);
													{	/* Reduce/copy.scm 152 */
														long BgL_offsetz00_1865;

														BgL_offsetz00_1865 =
															((long) (BgL_offsetz00_1864) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 152 */
															long BgL_modz00_1866;

															{	/* Reduce/copy.scm 152 */
																int BgL_arg2645z00_1867;

																BgL_arg2645z00_1867 = (int) (((long) 16));
																{	/* Reduce/copy.scm 152 */
																	long BgL_auxz00_3173;

																	BgL_auxz00_3173 =
																		(long) (BgL_arg2645z00_1867);
																	BgL_modz00_1866 =
																		(BgL_offsetz00_1865 / BgL_auxz00_3173);
															}}
															{	/* Reduce/copy.scm 152 */
																long BgL_restz00_1868;

																{	/* Reduce/copy.scm 152 */
																	int BgL_arg2644z00_1869;

																	BgL_arg2644z00_1869 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 152 */
																		long BgL_auxz00_3177;

																		BgL_auxz00_3177 =
																			(long) (BgL_arg2644z00_1869);
																		BgL_restz00_1868 =
																			(BgL_offsetz00_1865 % BgL_auxz00_3177);
																}}
																{	/* Reduce/copy.scm 152 */

																	BgL_method3293z00_1858 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1863,
																			(int) (BgL_modz00_1866)),
																		(int) (BgL_restz00_1868));
									}}}}}}}}
									BgL_res3555z00_1883 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1858)
										(BgL_method3293z00_1858, (obj_t) (BgL_arg3445z00_1294),
											BEOA));
								}
								BgL_arg3444z00_1293 = BgL_res3555z00_1883;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1287))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3444z00_1293), BUNSPEC);
					}
					{	/* Reduce/copy.scm 153 */
						BgL_nodez00_bglt BgL_arg3446z00_1295;

						{	/* Reduce/copy.scm 153 */
							BgL_nodez00_bglt BgL_arg3447z00_1296;

							BgL_arg3447z00_1296 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1287))->BgL_objz00);
							{	/* Reduce/copy.scm 153 */
								BgL_nodez00_bglt BgL_res3558z00_1913;

								{	/* Reduce/copy.scm 153 */
									obj_t BgL_method3293z00_1888;

									{	/* Reduce/copy.scm 153 */
										BgL_objectz00_bglt BgL_objz00_1889;

										BgL_objz00_1889 =
											(BgL_objectz00_bglt) (BgL_arg3447z00_1296);
										{	/* Reduce/copy.scm 153 */
											long BgL_objzd2classzd2numz00_1890;

											BgL_objzd2classzd2numz00_1890 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1889);
											{	/* Reduce/copy.scm 153 */
												obj_t BgL_arg2643z00_1891;

												BgL_arg2643z00_1891 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 153 */
													obj_t BgL_arrayz00_1893;

													int BgL_offsetz00_1894;

													BgL_arrayz00_1893 = BgL_arg2643z00_1891;
													BgL_offsetz00_1894 =
														(int) (BgL_objzd2classzd2numz00_1890);
													{	/* Reduce/copy.scm 153 */
														long BgL_offsetz00_1895;

														BgL_offsetz00_1895 =
															((long) (BgL_offsetz00_1894) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 153 */
															long BgL_modz00_1896;

															{	/* Reduce/copy.scm 153 */
																int BgL_arg2645z00_1897;

																BgL_arg2645z00_1897 = (int) (((long) 16));
																{	/* Reduce/copy.scm 153 */
																	long BgL_auxz00_3198;

																	BgL_auxz00_3198 =
																		(long) (BgL_arg2645z00_1897);
																	BgL_modz00_1896 =
																		(BgL_offsetz00_1895 / BgL_auxz00_3198);
															}}
															{	/* Reduce/copy.scm 153 */
																long BgL_restz00_1898;

																{	/* Reduce/copy.scm 153 */
																	int BgL_arg2644z00_1899;

																	BgL_arg2644z00_1899 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 153 */
																		long BgL_auxz00_3202;

																		BgL_auxz00_3202 =
																			(long) (BgL_arg2644z00_1899);
																		BgL_restz00_1898 =
																			(BgL_offsetz00_1895 % BgL_auxz00_3202);
																}}
																{	/* Reduce/copy.scm 153 */

																	BgL_method3293z00_1888 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1893,
																			(int) (BgL_modz00_1896)),
																		(int) (BgL_restz00_1898));
									}}}}}}}}
									BgL_res3558z00_1913 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1888)
										(BgL_method3293z00_1888, (obj_t) (BgL_arg3447z00_1296),
											BEOA));
								}
								BgL_arg3446z00_1295 = BgL_res3558z00_1913;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1287))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3446z00_1295), BUNSPEC);
					}
					BgL_auxz00_3138 = BgL_nodez00_1287;
					return (obj_t) (BgL_auxz00_3138);
				}
			}
		}
	}



/* node-copy!-condition3315 */
	obj_t BGl_nodezd2copyz12zd2condition3315z12zzreduce_copyz00(obj_t
		BgL_envz00_2445, obj_t BgL_nodez00_2446)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 139 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1275;

				{	/* Reduce/copy.scm 140 */
					BgL_conditionalz00_bglt BgL_auxz00_3216;

					BgL_nodez00_1275 = (BgL_conditionalz00_bglt) (BgL_nodez00_2446);
					{	/* Reduce/copy.scm 141 */
						BgL_nodez00_bglt BgL_arg3434z00_1279;

						{	/* Reduce/copy.scm 141 */
							BgL_nodez00_bglt BgL_arg3435z00_1280;

							BgL_arg3435z00_1280 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1275))->
								BgL_testz00);
							{	/* Reduce/copy.scm 141 */
								BgL_nodez00_bglt BgL_res3543z00_1763;

								{	/* Reduce/copy.scm 141 */
									obj_t BgL_method3293z00_1738;

									{	/* Reduce/copy.scm 141 */
										BgL_objectz00_bglt BgL_objz00_1739;

										BgL_objz00_1739 =
											(BgL_objectz00_bglt) (BgL_arg3435z00_1280);
										{	/* Reduce/copy.scm 141 */
											long BgL_objzd2classzd2numz00_1740;

											BgL_objzd2classzd2numz00_1740 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1739);
											{	/* Reduce/copy.scm 141 */
												obj_t BgL_arg2643z00_1741;

												BgL_arg2643z00_1741 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 141 */
													obj_t BgL_arrayz00_1743;

													int BgL_offsetz00_1744;

													BgL_arrayz00_1743 = BgL_arg2643z00_1741;
													BgL_offsetz00_1744 =
														(int) (BgL_objzd2classzd2numz00_1740);
													{	/* Reduce/copy.scm 141 */
														long BgL_offsetz00_1745;

														BgL_offsetz00_1745 =
															((long) (BgL_offsetz00_1744) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 141 */
															long BgL_modz00_1746;

															{	/* Reduce/copy.scm 141 */
																int BgL_arg2645z00_1747;

																BgL_arg2645z00_1747 = (int) (((long) 16));
																{	/* Reduce/copy.scm 141 */
																	long BgL_auxz00_3226;

																	BgL_auxz00_3226 =
																		(long) (BgL_arg2645z00_1747);
																	BgL_modz00_1746 =
																		(BgL_offsetz00_1745 / BgL_auxz00_3226);
															}}
															{	/* Reduce/copy.scm 141 */
																long BgL_restz00_1748;

																{	/* Reduce/copy.scm 141 */
																	int BgL_arg2644z00_1749;

																	BgL_arg2644z00_1749 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 141 */
																		long BgL_auxz00_3230;

																		BgL_auxz00_3230 =
																			(long) (BgL_arg2644z00_1749);
																		BgL_restz00_1748 =
																			(BgL_offsetz00_1745 % BgL_auxz00_3230);
																}}
																{	/* Reduce/copy.scm 141 */

																	BgL_method3293z00_1738 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1743,
																			(int) (BgL_modz00_1746)),
																		(int) (BgL_restz00_1748));
									}}}}}}}}
									BgL_res3543z00_1763 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1738)
										(BgL_method3293z00_1738, (obj_t) (BgL_arg3435z00_1280),
											BEOA));
								}
								BgL_arg3434z00_1279 = BgL_res3543z00_1763;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1275))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3434z00_1279), BUNSPEC);
					}
					{	/* Reduce/copy.scm 142 */
						BgL_nodez00_bglt BgL_arg3436z00_1281;

						{	/* Reduce/copy.scm 142 */
							BgL_nodez00_bglt BgL_arg3437z00_1282;

							BgL_arg3437z00_1282 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1275))->
								BgL_truez00);
							{	/* Reduce/copy.scm 142 */
								BgL_nodez00_bglt BgL_res3546z00_1793;

								{	/* Reduce/copy.scm 142 */
									obj_t BgL_method3293z00_1768;

									{	/* Reduce/copy.scm 142 */
										BgL_objectz00_bglt BgL_objz00_1769;

										BgL_objz00_1769 =
											(BgL_objectz00_bglt) (BgL_arg3437z00_1282);
										{	/* Reduce/copy.scm 142 */
											long BgL_objzd2classzd2numz00_1770;

											BgL_objzd2classzd2numz00_1770 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1769);
											{	/* Reduce/copy.scm 142 */
												obj_t BgL_arg2643z00_1771;

												BgL_arg2643z00_1771 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 142 */
													obj_t BgL_arrayz00_1773;

													int BgL_offsetz00_1774;

													BgL_arrayz00_1773 = BgL_arg2643z00_1771;
													BgL_offsetz00_1774 =
														(int) (BgL_objzd2classzd2numz00_1770);
													{	/* Reduce/copy.scm 142 */
														long BgL_offsetz00_1775;

														BgL_offsetz00_1775 =
															((long) (BgL_offsetz00_1774) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 142 */
															long BgL_modz00_1776;

															{	/* Reduce/copy.scm 142 */
																int BgL_arg2645z00_1777;

																BgL_arg2645z00_1777 = (int) (((long) 16));
																{	/* Reduce/copy.scm 142 */
																	long BgL_auxz00_3251;

																	BgL_auxz00_3251 =
																		(long) (BgL_arg2645z00_1777);
																	BgL_modz00_1776 =
																		(BgL_offsetz00_1775 / BgL_auxz00_3251);
															}}
															{	/* Reduce/copy.scm 142 */
																long BgL_restz00_1778;

																{	/* Reduce/copy.scm 142 */
																	int BgL_arg2644z00_1779;

																	BgL_arg2644z00_1779 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 142 */
																		long BgL_auxz00_3255;

																		BgL_auxz00_3255 =
																			(long) (BgL_arg2644z00_1779);
																		BgL_restz00_1778 =
																			(BgL_offsetz00_1775 % BgL_auxz00_3255);
																}}
																{	/* Reduce/copy.scm 142 */

																	BgL_method3293z00_1768 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1773,
																			(int) (BgL_modz00_1776)),
																		(int) (BgL_restz00_1778));
									}}}}}}}}
									BgL_res3546z00_1793 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1768)
										(BgL_method3293z00_1768, (obj_t) (BgL_arg3437z00_1282),
											BEOA));
								}
								BgL_arg3436z00_1281 = BgL_res3546z00_1793;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1275))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3436z00_1281), BUNSPEC);
					}
					{	/* Reduce/copy.scm 143 */
						BgL_nodez00_bglt BgL_arg3438z00_1283;

						{	/* Reduce/copy.scm 143 */
							BgL_nodez00_bglt BgL_arg3439z00_1284;

							BgL_arg3439z00_1284 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1275))->
								BgL_falsez00);
							{	/* Reduce/copy.scm 143 */
								BgL_nodez00_bglt BgL_res3549z00_1823;

								{	/* Reduce/copy.scm 143 */
									obj_t BgL_method3293z00_1798;

									{	/* Reduce/copy.scm 143 */
										BgL_objectz00_bglt BgL_objz00_1799;

										BgL_objz00_1799 =
											(BgL_objectz00_bglt) (BgL_arg3439z00_1284);
										{	/* Reduce/copy.scm 143 */
											long BgL_objzd2classzd2numz00_1800;

											BgL_objzd2classzd2numz00_1800 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1799);
											{	/* Reduce/copy.scm 143 */
												obj_t BgL_arg2643z00_1801;

												BgL_arg2643z00_1801 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 143 */
													obj_t BgL_arrayz00_1803;

													int BgL_offsetz00_1804;

													BgL_arrayz00_1803 = BgL_arg2643z00_1801;
													BgL_offsetz00_1804 =
														(int) (BgL_objzd2classzd2numz00_1800);
													{	/* Reduce/copy.scm 143 */
														long BgL_offsetz00_1805;

														BgL_offsetz00_1805 =
															((long) (BgL_offsetz00_1804) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 143 */
															long BgL_modz00_1806;

															{	/* Reduce/copy.scm 143 */
																int BgL_arg2645z00_1807;

																BgL_arg2645z00_1807 = (int) (((long) 16));
																{	/* Reduce/copy.scm 143 */
																	long BgL_auxz00_3276;

																	BgL_auxz00_3276 =
																		(long) (BgL_arg2645z00_1807);
																	BgL_modz00_1806 =
																		(BgL_offsetz00_1805 / BgL_auxz00_3276);
															}}
															{	/* Reduce/copy.scm 143 */
																long BgL_restz00_1808;

																{	/* Reduce/copy.scm 143 */
																	int BgL_arg2644z00_1809;

																	BgL_arg2644z00_1809 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 143 */
																		long BgL_auxz00_3280;

																		BgL_auxz00_3280 =
																			(long) (BgL_arg2644z00_1809);
																		BgL_restz00_1808 =
																			(BgL_offsetz00_1805 % BgL_auxz00_3280);
																}}
																{	/* Reduce/copy.scm 143 */

																	BgL_method3293z00_1798 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1803,
																			(int) (BgL_modz00_1806)),
																		(int) (BgL_restz00_1808));
									}}}}}}}}
									BgL_res3549z00_1823 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1798)
										(BgL_method3293z00_1798, (obj_t) (BgL_arg3439z00_1284),
											BEOA));
								}
								BgL_arg3438z00_1283 = BgL_res3549z00_1823;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1275))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3438z00_1283), BUNSPEC);
					}
					BgL_auxz00_3216 = BgL_nodez00_1275;
					return (obj_t) (BgL_auxz00_3216);
				}
			}
		}
	}



/* node-copy!-setq3313 */
	obj_t BGl_nodezd2copyz12zd2setq3313z12zzreduce_copyz00(obj_t BgL_envz00_2447,
		obj_t BgL_nodez00_2448)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 130 */
			{
				BgL_setqz00_bglt BgL_nodez00_1265;

				{	/* Reduce/copy.scm 131 */
					BgL_setqz00_bglt BgL_auxz00_3294;

					BgL_nodez00_1265 = (BgL_setqz00_bglt) (BgL_nodez00_2448);
					{	/* Reduce/copy.scm 132 */
						BgL_nodez00_bglt BgL_arg3427z00_1269;

						{	/* Reduce/copy.scm 132 */
							BgL_nodez00_bglt BgL_arg3430z00_1270;

							BgL_arg3430z00_1270 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1265))->BgL_valuez00);
							{	/* Reduce/copy.scm 132 */
								BgL_nodez00_bglt BgL_res3537z00_1703;

								{	/* Reduce/copy.scm 132 */
									obj_t BgL_method3293z00_1678;

									{	/* Reduce/copy.scm 132 */
										BgL_objectz00_bglt BgL_objz00_1679;

										BgL_objz00_1679 =
											(BgL_objectz00_bglt) (BgL_arg3430z00_1270);
										{	/* Reduce/copy.scm 132 */
											long BgL_objzd2classzd2numz00_1680;

											BgL_objzd2classzd2numz00_1680 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1679);
											{	/* Reduce/copy.scm 132 */
												obj_t BgL_arg2643z00_1681;

												BgL_arg2643z00_1681 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 132 */
													obj_t BgL_arrayz00_1683;

													int BgL_offsetz00_1684;

													BgL_arrayz00_1683 = BgL_arg2643z00_1681;
													BgL_offsetz00_1684 =
														(int) (BgL_objzd2classzd2numz00_1680);
													{	/* Reduce/copy.scm 132 */
														long BgL_offsetz00_1685;

														BgL_offsetz00_1685 =
															((long) (BgL_offsetz00_1684) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 132 */
															long BgL_modz00_1686;

															{	/* Reduce/copy.scm 132 */
																int BgL_arg2645z00_1687;

																BgL_arg2645z00_1687 = (int) (((long) 16));
																{	/* Reduce/copy.scm 132 */
																	long BgL_auxz00_3304;

																	BgL_auxz00_3304 =
																		(long) (BgL_arg2645z00_1687);
																	BgL_modz00_1686 =
																		(BgL_offsetz00_1685 / BgL_auxz00_3304);
															}}
															{	/* Reduce/copy.scm 132 */
																long BgL_restz00_1688;

																{	/* Reduce/copy.scm 132 */
																	int BgL_arg2644z00_1689;

																	BgL_arg2644z00_1689 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 132 */
																		long BgL_auxz00_3308;

																		BgL_auxz00_3308 =
																			(long) (BgL_arg2644z00_1689);
																		BgL_restz00_1688 =
																			(BgL_offsetz00_1685 % BgL_auxz00_3308);
																}}
																{	/* Reduce/copy.scm 132 */

																	BgL_method3293z00_1678 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1683,
																			(int) (BgL_modz00_1686)),
																		(int) (BgL_restz00_1688));
									}}}}}}}}
									BgL_res3537z00_1703 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1678)
										(BgL_method3293z00_1678, (obj_t) (BgL_arg3430z00_1270),
											BEOA));
								}
								BgL_arg3427z00_1269 = BgL_res3537z00_1703;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1265))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3427z00_1269), BUNSPEC);
					}
					{	/* Reduce/copy.scm 133 */
						BgL_nodez00_bglt BgL_arg3431z00_1271;

						{	/* Reduce/copy.scm 133 */
							BgL_varz00_bglt BgL_arg3432z00_1272;

							BgL_arg3432z00_1272 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1265))->BgL_varz00);
							{	/* Reduce/copy.scm 133 */
								BgL_nodez00_bglt BgL_res3540z00_1733;

								{	/* Reduce/copy.scm 133 */
									BgL_nodez00_bglt BgL_nodez00_1707;

									BgL_nodez00_1707 = (BgL_nodez00_bglt) (BgL_arg3432z00_1272);
									{	/* Reduce/copy.scm 133 */
										obj_t BgL_method3293z00_1708;

										{	/* Reduce/copy.scm 133 */
											BgL_objectz00_bglt BgL_objz00_1709;

											BgL_objz00_1709 = (BgL_objectz00_bglt) (BgL_nodez00_1707);
											{	/* Reduce/copy.scm 133 */
												long BgL_objzd2classzd2numz00_1710;

												BgL_objzd2classzd2numz00_1710 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1709);
												{	/* Reduce/copy.scm 133 */
													obj_t BgL_arg2643z00_1711;

													BgL_arg2643z00_1711 =
														PROCEDURE_REF
														(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
														(int) (((long) 1)));
													{	/* Reduce/copy.scm 133 */
														obj_t BgL_arrayz00_1713;

														int BgL_offsetz00_1714;

														BgL_arrayz00_1713 = BgL_arg2643z00_1711;
														BgL_offsetz00_1714 =
															(int) (BgL_objzd2classzd2numz00_1710);
														{	/* Reduce/copy.scm 133 */
															long BgL_offsetz00_1715;

															BgL_offsetz00_1715 =
																((long) (BgL_offsetz00_1714) - OBJECT_TYPE);
															{	/* Reduce/copy.scm 133 */
																long BgL_modz00_1716;

																{	/* Reduce/copy.scm 133 */
																	int BgL_arg2645z00_1717;

																	BgL_arg2645z00_1717 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 133 */
																		long BgL_auxz00_3330;

																		BgL_auxz00_3330 =
																			(long) (BgL_arg2645z00_1717);
																		BgL_modz00_1716 =
																			(BgL_offsetz00_1715 / BgL_auxz00_3330);
																}}
																{	/* Reduce/copy.scm 133 */
																	long BgL_restz00_1718;

																	{	/* Reduce/copy.scm 133 */
																		int BgL_arg2644z00_1719;

																		BgL_arg2644z00_1719 = (int) (((long) 16));
																		{	/* Reduce/copy.scm 133 */
																			long BgL_auxz00_3334;

																			BgL_auxz00_3334 =
																				(long) (BgL_arg2644z00_1719);
																			BgL_restz00_1718 =
																				(BgL_offsetz00_1715 % BgL_auxz00_3334);
																	}}
																	{	/* Reduce/copy.scm 133 */

																		BgL_method3293z00_1708 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1713,
																				(int) (BgL_modz00_1716)),
																			(int) (BgL_restz00_1718));
										}}}}}}}}
										BgL_res3540z00_1733 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3293z00_1708) (BgL_method3293z00_1708,
												(obj_t) (BgL_nodez00_1707), BEOA));
								}}
								BgL_arg3431z00_1271 = BgL_res3540z00_1733;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3345;

							BgL_auxz00_3345 = (BgL_varz00_bglt) (BgL_arg3431z00_1271);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1265))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3345), BUNSPEC);
					}}
					BgL_auxz00_3294 = BgL_nodez00_1265;
					return (obj_t) (BgL_auxz00_3294);
				}
			}
		}
	}



/* node-copy!-cast3311 */
	obj_t BGl_nodezd2copyz12zd2cast3311z12zzreduce_copyz00(obj_t BgL_envz00_2449,
		obj_t BgL_nodez00_2450)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 122 */
			{
				BgL_castz00_bglt BgL_nodez00_1257;

				{	/* Reduce/copy.scm 123 */
					BgL_castz00_bglt BgL_auxz00_3350;

					BgL_nodez00_1257 = (BgL_castz00_bglt) (BgL_nodez00_2450);
					{	/* Reduce/copy.scm 124 */
						BgL_nodez00_bglt BgL_arg3424z00_1261;

						{	/* Reduce/copy.scm 124 */
							BgL_nodez00_bglt BgL_arg3425z00_1262;

							BgL_arg3425z00_1262 =
								(((BgL_castz00_bglt) CREF(BgL_nodez00_1257))->BgL_argz00);
							{	/* Reduce/copy.scm 124 */
								BgL_nodez00_bglt BgL_res3534z00_1673;

								{	/* Reduce/copy.scm 124 */
									obj_t BgL_method3293z00_1648;

									{	/* Reduce/copy.scm 124 */
										BgL_objectz00_bglt BgL_objz00_1649;

										BgL_objz00_1649 =
											(BgL_objectz00_bglt) (BgL_arg3425z00_1262);
										{	/* Reduce/copy.scm 124 */
											long BgL_objzd2classzd2numz00_1650;

											BgL_objzd2classzd2numz00_1650 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1649);
											{	/* Reduce/copy.scm 124 */
												obj_t BgL_arg2643z00_1651;

												BgL_arg2643z00_1651 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 124 */
													obj_t BgL_arrayz00_1653;

													int BgL_offsetz00_1654;

													BgL_arrayz00_1653 = BgL_arg2643z00_1651;
													BgL_offsetz00_1654 =
														(int) (BgL_objzd2classzd2numz00_1650);
													{	/* Reduce/copy.scm 124 */
														long BgL_offsetz00_1655;

														BgL_offsetz00_1655 =
															((long) (BgL_offsetz00_1654) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 124 */
															long BgL_modz00_1656;

															{	/* Reduce/copy.scm 124 */
																int BgL_arg2645z00_1657;

																BgL_arg2645z00_1657 = (int) (((long) 16));
																{	/* Reduce/copy.scm 124 */
																	long BgL_auxz00_3360;

																	BgL_auxz00_3360 =
																		(long) (BgL_arg2645z00_1657);
																	BgL_modz00_1656 =
																		(BgL_offsetz00_1655 / BgL_auxz00_3360);
															}}
															{	/* Reduce/copy.scm 124 */
																long BgL_restz00_1658;

																{	/* Reduce/copy.scm 124 */
																	int BgL_arg2644z00_1659;

																	BgL_arg2644z00_1659 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 124 */
																		long BgL_auxz00_3364;

																		BgL_auxz00_3364 =
																			(long) (BgL_arg2644z00_1659);
																		BgL_restz00_1658 =
																			(BgL_offsetz00_1655 % BgL_auxz00_3364);
																}}
																{	/* Reduce/copy.scm 124 */

																	BgL_method3293z00_1648 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1653,
																			(int) (BgL_modz00_1656)),
																		(int) (BgL_restz00_1658));
									}}}}}}}}
									BgL_res3534z00_1673 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1648)
										(BgL_method3293z00_1648, (obj_t) (BgL_arg3425z00_1262),
											BEOA));
								}
								BgL_arg3424z00_1261 = BgL_res3534z00_1673;
						}}
						((((BgL_castz00_bglt) CREF(BgL_nodez00_1257))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3424z00_1261), BUNSPEC);
					}
					BgL_auxz00_3350 = BgL_nodez00_1257;
					return (obj_t) (BgL_auxz00_3350);
				}
			}
		}
	}



/* node-copy!-extern3309 */
	obj_t BGl_nodezd2copyz12zd2extern3309z12zzreduce_copyz00(obj_t
		BgL_envz00_2451, obj_t BgL_nodez00_2452)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 114 */
			{
				BgL_externz00_bglt BgL_nodez00_1250;

				{	/* Reduce/copy.scm 115 */
					BgL_externz00_bglt BgL_auxz00_3378;

					BgL_nodez00_1250 = (BgL_externz00_bglt) (BgL_nodez00_2452);
					{	/* Reduce/copy.scm 115 */
						obj_t BgL_arg3421z00_1644;

						BgL_arg3421z00_1644 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1250))->BgL_exprza2za2);
						BGl_nodezd2copyza2z12z62zzreduce_copyz00(BgL_arg3421z00_1644);
					}
					BgL_auxz00_3378 = BgL_nodez00_1250;
					return (obj_t) (BgL_auxz00_3378);
				}
			}
		}
	}



/* node-copy!-funcall3307 */
	obj_t BGl_nodezd2copyz12zd2funcall3307z12zzreduce_copyz00(obj_t
		BgL_envz00_2453, obj_t BgL_nodez00_2454)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 105 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1241;

				{	/* Reduce/copy.scm 106 */
					BgL_funcallz00_bglt BgL_auxz00_3383;

					BgL_nodez00_1241 = (BgL_funcallz00_bglt) (BgL_nodez00_2454);
					{	/* Reduce/copy.scm 107 */
						BgL_nodez00_bglt BgL_arg3417z00_1245;

						{	/* Reduce/copy.scm 107 */
							BgL_nodez00_bglt BgL_arg3418z00_1246;

							BgL_arg3418z00_1246 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1241))->BgL_funz00);
							{	/* Reduce/copy.scm 107 */
								BgL_nodez00_bglt BgL_res3531z00_1639;

								{	/* Reduce/copy.scm 107 */
									obj_t BgL_method3293z00_1614;

									{	/* Reduce/copy.scm 107 */
										BgL_objectz00_bglt BgL_objz00_1615;

										BgL_objz00_1615 =
											(BgL_objectz00_bglt) (BgL_arg3418z00_1246);
										{	/* Reduce/copy.scm 107 */
											long BgL_objzd2classzd2numz00_1616;

											BgL_objzd2classzd2numz00_1616 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1615);
											{	/* Reduce/copy.scm 107 */
												obj_t BgL_arg2643z00_1617;

												BgL_arg2643z00_1617 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 107 */
													obj_t BgL_arrayz00_1619;

													int BgL_offsetz00_1620;

													BgL_arrayz00_1619 = BgL_arg2643z00_1617;
													BgL_offsetz00_1620 =
														(int) (BgL_objzd2classzd2numz00_1616);
													{	/* Reduce/copy.scm 107 */
														long BgL_offsetz00_1621;

														BgL_offsetz00_1621 =
															((long) (BgL_offsetz00_1620) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 107 */
															long BgL_modz00_1622;

															{	/* Reduce/copy.scm 107 */
																int BgL_arg2645z00_1623;

																BgL_arg2645z00_1623 = (int) (((long) 16));
																{	/* Reduce/copy.scm 107 */
																	long BgL_auxz00_3393;

																	BgL_auxz00_3393 =
																		(long) (BgL_arg2645z00_1623);
																	BgL_modz00_1622 =
																		(BgL_offsetz00_1621 / BgL_auxz00_3393);
															}}
															{	/* Reduce/copy.scm 107 */
																long BgL_restz00_1624;

																{	/* Reduce/copy.scm 107 */
																	int BgL_arg2644z00_1625;

																	BgL_arg2644z00_1625 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 107 */
																		long BgL_auxz00_3397;

																		BgL_auxz00_3397 =
																			(long) (BgL_arg2644z00_1625);
																		BgL_restz00_1624 =
																			(BgL_offsetz00_1621 % BgL_auxz00_3397);
																}}
																{	/* Reduce/copy.scm 107 */

																	BgL_method3293z00_1614 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1619,
																			(int) (BgL_modz00_1622)),
																		(int) (BgL_restz00_1624));
									}}}}}}}}
									BgL_res3531z00_1639 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1614)
										(BgL_method3293z00_1614, (obj_t) (BgL_arg3418z00_1246),
											BEOA));
								}
								BgL_arg3417z00_1245 = BgL_res3531z00_1639;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1241))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3417z00_1245), BUNSPEC);
					}
					{	/* Reduce/copy.scm 108 */
						obj_t BgL_arg3419z00_1247;

						BgL_arg3419z00_1247 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1241))->BgL_argsz00);
						BGl_nodezd2copyza2z12z62zzreduce_copyz00(BgL_arg3419z00_1247);
					}
					BgL_auxz00_3383 = BgL_nodez00_1241;
					return (obj_t) (BgL_auxz00_3383);
				}
			}
		}
	}



/* node-copy!-app-ly3305 */
	obj_t BGl_nodezd2copyz12zd2appzd2ly3305zc0zzreduce_copyz00(obj_t
		BgL_envz00_2455, obj_t BgL_nodez00_2456)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 96 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1231;

				{	/* Reduce/copy.scm 97 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3413;

					BgL_nodez00_1231 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2456);
					{	/* Reduce/copy.scm 98 */
						BgL_nodez00_bglt BgL_arg3412z00_1235;

						{	/* Reduce/copy.scm 98 */
							BgL_nodez00_bglt BgL_arg3413z00_1236;

							BgL_arg3413z00_1236 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_funz00);
							{	/* Reduce/copy.scm 98 */
								BgL_nodez00_bglt BgL_res3525z00_1579;

								{	/* Reduce/copy.scm 98 */
									obj_t BgL_method3293z00_1554;

									{	/* Reduce/copy.scm 98 */
										BgL_objectz00_bglt BgL_objz00_1555;

										BgL_objz00_1555 =
											(BgL_objectz00_bglt) (BgL_arg3413z00_1236);
										{	/* Reduce/copy.scm 98 */
											long BgL_objzd2classzd2numz00_1556;

											BgL_objzd2classzd2numz00_1556 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1555);
											{	/* Reduce/copy.scm 98 */
												obj_t BgL_arg2643z00_1557;

												BgL_arg2643z00_1557 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 98 */
													obj_t BgL_arrayz00_1559;

													int BgL_offsetz00_1560;

													BgL_arrayz00_1559 = BgL_arg2643z00_1557;
													BgL_offsetz00_1560 =
														(int) (BgL_objzd2classzd2numz00_1556);
													{	/* Reduce/copy.scm 98 */
														long BgL_offsetz00_1561;

														BgL_offsetz00_1561 =
															((long) (BgL_offsetz00_1560) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 98 */
															long BgL_modz00_1562;

															{	/* Reduce/copy.scm 98 */
																int BgL_arg2645z00_1563;

																BgL_arg2645z00_1563 = (int) (((long) 16));
																{	/* Reduce/copy.scm 98 */
																	long BgL_auxz00_3423;

																	BgL_auxz00_3423 =
																		(long) (BgL_arg2645z00_1563);
																	BgL_modz00_1562 =
																		(BgL_offsetz00_1561 / BgL_auxz00_3423);
															}}
															{	/* Reduce/copy.scm 98 */
																long BgL_restz00_1564;

																{	/* Reduce/copy.scm 98 */
																	int BgL_arg2644z00_1565;

																	BgL_arg2644z00_1565 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 98 */
																		long BgL_auxz00_3427;

																		BgL_auxz00_3427 =
																			(long) (BgL_arg2644z00_1565);
																		BgL_restz00_1564 =
																			(BgL_offsetz00_1561 % BgL_auxz00_3427);
																}}
																{	/* Reduce/copy.scm 98 */

																	BgL_method3293z00_1554 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1559,
																			(int) (BgL_modz00_1562)),
																		(int) (BgL_restz00_1564));
									}}}}}}}}
									BgL_res3525z00_1579 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1554)
										(BgL_method3293z00_1554, (obj_t) (BgL_arg3413z00_1236),
											BEOA));
								}
								BgL_arg3412z00_1235 = BgL_res3525z00_1579;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3412z00_1235), BUNSPEC);
					}
					{	/* Reduce/copy.scm 99 */
						BgL_nodez00_bglt BgL_arg3414z00_1237;

						{	/* Reduce/copy.scm 99 */
							BgL_nodez00_bglt BgL_arg3415z00_1238;

							BgL_arg3415z00_1238 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_argz00);
							{	/* Reduce/copy.scm 99 */
								BgL_nodez00_bglt BgL_res3528z00_1609;

								{	/* Reduce/copy.scm 99 */
									obj_t BgL_method3293z00_1584;

									{	/* Reduce/copy.scm 99 */
										BgL_objectz00_bglt BgL_objz00_1585;

										BgL_objz00_1585 =
											(BgL_objectz00_bglt) (BgL_arg3415z00_1238);
										{	/* Reduce/copy.scm 99 */
											long BgL_objzd2classzd2numz00_1586;

											BgL_objzd2classzd2numz00_1586 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1585);
											{	/* Reduce/copy.scm 99 */
												obj_t BgL_arg2643z00_1587;

												BgL_arg2643z00_1587 =
													PROCEDURE_REF
													(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
													(int) (((long) 1)));
												{	/* Reduce/copy.scm 99 */
													obj_t BgL_arrayz00_1589;

													int BgL_offsetz00_1590;

													BgL_arrayz00_1589 = BgL_arg2643z00_1587;
													BgL_offsetz00_1590 =
														(int) (BgL_objzd2classzd2numz00_1586);
													{	/* Reduce/copy.scm 99 */
														long BgL_offsetz00_1591;

														BgL_offsetz00_1591 =
															((long) (BgL_offsetz00_1590) - OBJECT_TYPE);
														{	/* Reduce/copy.scm 99 */
															long BgL_modz00_1592;

															{	/* Reduce/copy.scm 99 */
																int BgL_arg2645z00_1593;

																BgL_arg2645z00_1593 = (int) (((long) 16));
																{	/* Reduce/copy.scm 99 */
																	long BgL_auxz00_3448;

																	BgL_auxz00_3448 =
																		(long) (BgL_arg2645z00_1593);
																	BgL_modz00_1592 =
																		(BgL_offsetz00_1591 / BgL_auxz00_3448);
															}}
															{	/* Reduce/copy.scm 99 */
																long BgL_restz00_1594;

																{	/* Reduce/copy.scm 99 */
																	int BgL_arg2644z00_1595;

																	BgL_arg2644z00_1595 = (int) (((long) 16));
																	{	/* Reduce/copy.scm 99 */
																		long BgL_auxz00_3452;

																		BgL_auxz00_3452 =
																			(long) (BgL_arg2644z00_1595);
																		BgL_restz00_1594 =
																			(BgL_offsetz00_1591 % BgL_auxz00_3452);
																}}
																{	/* Reduce/copy.scm 99 */

																	BgL_method3293z00_1584 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1589,
																			(int) (BgL_modz00_1592)),
																		(int) (BgL_restz00_1594));
									}}}}}}}}
									BgL_res3528z00_1609 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3293z00_1584)
										(BgL_method3293z00_1584, (obj_t) (BgL_arg3415z00_1238),
											BEOA));
								}
								BgL_arg3414z00_1237 = BgL_res3528z00_1609;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1231))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3414z00_1237), BUNSPEC);
					}
					BgL_auxz00_3413 = BgL_nodez00_1231;
					return (obj_t) (BgL_auxz00_3413);
				}
			}
		}
	}



/* node-copy!-sequence3303 */
	obj_t BGl_nodezd2copyz12zd2sequence3303z12zzreduce_copyz00(obj_t
		BgL_envz00_2457, obj_t BgL_nodez00_2458)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 88 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1224;

				{	/* Reduce/copy.scm 89 */
					BgL_sequencez00_bglt BgL_auxz00_3466;

					BgL_nodez00_1224 = (BgL_sequencez00_bglt) (BgL_nodez00_2458);
					{	/* Reduce/copy.scm 89 */
						obj_t BgL_arg3410z00_1550;

						BgL_arg3410z00_1550 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1224))->BgL_nodesz00);
						BGl_nodezd2copyza2z12z62zzreduce_copyz00(BgL_arg3410z00_1550);
					}
					BgL_auxz00_3466 = BgL_nodez00_1224;
					return (obj_t) (BgL_auxz00_3466);
				}
			}
		}
	}



/* node-copy!-closure3301 */
	obj_t BGl_nodezd2copyz12zd2closure3301z12zzreduce_copyz00(obj_t
		BgL_envz00_2459, obj_t BgL_nodez00_2460)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 82 */
			return (obj_t) ((BgL_closurez00_bglt) (BgL_nodez00_2460));
		}
	}



/* node-copy!-var3299 */
	obj_t BGl_nodezd2copyz12zd2var3299z12zzreduce_copyz00(obj_t BgL_envz00_2461,
		obj_t BgL_nodez00_2462)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 72 */
			{
				BgL_varz00_bglt BgL_nodez00_1207;

				BgL_nodez00_1207 = (BgL_varz00_bglt) (BgL_nodez00_2462);
				{	/* Reduce/copy.scm 73 */
					BgL_variablez00_bglt BgL_vz00_1210;

					BgL_vz00_1210 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1207))->BgL_variablez00);
					{	/* Reduce/copy.scm 74 */
						obj_t BgL_falphaz00_1211;

						BgL_falphaz00_1211 =
							(((BgL_variablez00_bglt) CREF(BgL_vz00_1210))->
							BgL_fastzd2alphazd2);
						if ((BgL_falphaz00_1211 == BUNSPEC))
							{	/* Reduce/copy.scm 75 */
								return (obj_t) (BgL_nodez00_1207);
							}
						else
							{	/* Reduce/copy.scm 76 */
								obj_t BgL_arg3406z00_1215;

								BgL_nodez00_bglt BgL_arg3407z00_1216;

								{
									BgL_nodez00_bglt BgL_auxz00_3478;

									BgL_auxz00_3478 = (BgL_nodez00_bglt) (BgL_nodez00_1207);
									BgL_arg3406z00_1215 =
										(((BgL_nodez00_bglt) CREF(BgL_auxz00_3478))->BgL_locz00);
								}
								{	/* Reduce/copy.scm 76 */
									BgL_nodez00_bglt BgL_res3522z00_1548;

									{	/* Reduce/copy.scm 76 */
										BgL_nodez00_bglt BgL_nodez00_1522;

										BgL_nodez00_1522 = (BgL_nodez00_bglt) (BgL_falphaz00_1211);
										{	/* Reduce/copy.scm 76 */
											obj_t BgL_method3293z00_1523;

											{	/* Reduce/copy.scm 76 */
												BgL_objectz00_bglt BgL_objz00_1524;

												BgL_objz00_1524 =
													(BgL_objectz00_bglt) (BgL_nodez00_1522);
												{	/* Reduce/copy.scm 76 */
													long BgL_objzd2classzd2numz00_1525;

													BgL_objzd2classzd2numz00_1525 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1524);
													{	/* Reduce/copy.scm 76 */
														obj_t BgL_arg2643z00_1526;

														BgL_arg2643z00_1526 =
															PROCEDURE_REF
															(BGl_nodezd2copyz12zd2envz12zzreduce_copyz00,
															(int) (((long) 1)));
														{	/* Reduce/copy.scm 76 */
															obj_t BgL_arrayz00_1528;

															int BgL_offsetz00_1529;

															BgL_arrayz00_1528 = BgL_arg2643z00_1526;
															BgL_offsetz00_1529 =
																(int) (BgL_objzd2classzd2numz00_1525);
															{	/* Reduce/copy.scm 76 */
																long BgL_offsetz00_1530;

																BgL_offsetz00_1530 =
																	((long) (BgL_offsetz00_1529) - OBJECT_TYPE);
																{	/* Reduce/copy.scm 76 */
																	long BgL_modz00_1531;

																	{	/* Reduce/copy.scm 76 */
																		int BgL_arg2645z00_1532;

																		BgL_arg2645z00_1532 = (int) (((long) 16));
																		{	/* Reduce/copy.scm 76 */
																			long BgL_auxz00_3490;

																			BgL_auxz00_3490 =
																				(long) (BgL_arg2645z00_1532);
																			BgL_modz00_1531 =
																				(BgL_offsetz00_1530 / BgL_auxz00_3490);
																	}}
																	{	/* Reduce/copy.scm 76 */
																		long BgL_restz00_1533;

																		{	/* Reduce/copy.scm 76 */
																			int BgL_arg2644z00_1534;

																			BgL_arg2644z00_1534 = (int) (((long) 16));
																			{	/* Reduce/copy.scm 76 */
																				long BgL_auxz00_3494;

																				BgL_auxz00_3494 =
																					(long) (BgL_arg2644z00_1534);
																				BgL_restz00_1533 =
																					(BgL_offsetz00_1530 %
																					BgL_auxz00_3494);
																		}}
																		{	/* Reduce/copy.scm 76 */

																			BgL_method3293z00_1523 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1528,
																					(int) (BgL_modz00_1531)),
																				(int) (BgL_restz00_1533));
											}}}}}}}}
											BgL_res3522z00_1548 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3293z00_1523) (BgL_method3293z00_1523,
													(obj_t) (BgL_nodez00_1522), BEOA));
									}}
									BgL_arg3407z00_1216 = BgL_res3522z00_1548;
								}
								return
									(obj_t) (BGl_alphatiza7eza7zzast_alphatiza7eza7(BNIL, BNIL,
										BgL_arg3406z00_1215, BgL_arg3407z00_1216));
							}
					}
				}
			}
		}
	}



/* node-copy!-kwote3297 */
	obj_t BGl_nodezd2copyz12zd2kwote3297z12zzreduce_copyz00(obj_t BgL_envz00_2463,
		obj_t BgL_nodez00_2464)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 66 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2464));
		}
	}



/* node-copy!-atom3295 */
	obj_t BGl_nodezd2copyz12zd2atom3295z12zzreduce_copyz00(obj_t BgL_envz00_2465,
		obj_t BgL_nodez00_2466)
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 60 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2466));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_copyz00()
	{
		AN_OBJECT;
		{	/* Reduce/copy.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 269647501),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			BGl_modulezd2initializa7ationz75zzast_alphatiza7eza7(((long) 509694479),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
			return
				BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3629z00zzreduce_copyz00));
		}
	}

#ifdef __cplusplus
}
#endif
