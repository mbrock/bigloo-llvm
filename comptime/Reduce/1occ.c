/*===========================================================================*/
/*   (Reduce/1occ.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/1occ.scm)*/
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
	static obj_t BGl__reducezd21occz12zc0zzreduce_1occz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2extern3365z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2appzd2ly3361zc0zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2boxzd2ref3390zc0zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_1occz00();
	static obj_t BGl_nodezd21occz12zd2atom3351z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__nodezd21occz12zc0zzreduce_1occz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_nodezd21occz12zd2var3355z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_1occz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzreduce_1occz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd21occza2z12z62zzreduce_1occz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2select3376z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static long BGl_za2variablezd2removedza2zd2zzreduce_1occz00;
	extern obj_t BGl_appz00zzast_nodez00;
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2letzd2fun3378zc0zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2closure3357z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd21occz12zd2cast3367z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2jumpzd2exzd2i3384z12zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2letzd2var3380zc0zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_1occz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2sequence3359z12zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_1occz00 = BUNSPEC;
	static obj_t BGl_nodezd21occz12zd2setq3370z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_1occz00();
	static obj_t BGl_nodezd21occz12zd2boxzd2setz123388zd2zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2condition3372z12zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd21occz12zc0zzreduce_1occz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_1occz00();
	static obj_t BGl_nodezd21occz12zd2kwote3353z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_nodezd21occzd2letzd2varz12zc0zzreduce_1occz00(BgL_letzd2varzd2_bglt,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd21occz12zd2fail3374z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd21occz12zc0zzreduce_1occz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl__nodezd21occz12zd2default3348z12zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t
		BGl_nodezd21occz12zd2default3348z12zzreduce_1occz00(BgL_nodez00_bglt,
		obj_t);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2setzd2exzd2it3382z12zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2makezd2box3386zc0zzreduce_1occz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd21occz12zd2funcall3363z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd21occz12zd2app3392z12zzreduce_1occz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_1occz00();
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd21occz12zd2envz12zzreduce_1occz00,
		BgL_bgl__reduceza7d21occza713672z00,
		BGl__reducezd21occz12zc0zzreduce_1occz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
		BgL_bgl__nodeza7d21occza712za73673za7,
		BGl__nodezd21occz12zc0zzreduce_1occz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd21occz12zd2default3348zd2envzc0zzreduce_1occz00,
		BgL_bgl__nodeza7d21occza712za73674za7,
		BGl__nodezd21occz12zd2default3348z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3647z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3675za7,
		BGl_nodezd21occz12zd2atom3351z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3648z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3676za7,
		BGl_nodezd21occz12zd2kwote3353z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3650z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3677za7,
		BGl_nodezd21occz12zd2closure3357z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3649z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3678za7,
		BGl_nodezd21occz12zd2var3355z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3651z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3679za7,
		BGl_nodezd21occz12zd2sequence3359z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3652z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3680za7,
		BGl_nodezd21occz12zd2appzd2ly3361zc0zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3653z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3681za7,
		BGl_nodezd21occz12zd2funcall3363z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3654z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3682za7,
		BGl_nodezd21occz12zd2extern3365z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3655z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3683za7,
		BGl_nodezd21occz12zd2cast3367z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3656z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3684za7,
		BGl_nodezd21occz12zd2setq3370z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3657z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3685za7,
		BGl_nodezd21occz12zd2condition3372z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3658z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3686za7,
		BGl_nodezd21occz12zd2fail3374z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3660z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3687za7,
		BGl_nodezd21occz12zd2letzd2fun3378zc0zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3659z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3688za7,
		BGl_nodezd21occz12zd2select3376z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3661z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3689za7,
		BGl_nodezd21occz12zd2letzd2var3380zc0zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3662z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3690za7,
		BGl_nodezd21occz12zd2setzd2exzd2it3382z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3663z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3691za7,
		BGl_nodezd21occz12zd2jumpzd2exzd2i3384z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3664z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3692za7,
		BGl_nodezd21occz12zd2makezd2box3386zc0zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3665z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3693za7,
		BGl_nodezd21occz12zd2boxzd2setz123388zd2zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3666z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3694za7,
		BGl_nodezd21occz12zd2boxzd2ref3390zc0zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3667z00zzreduce_1occz00,
		BgL_bgl_nodeza7d21occza712za7d3695za7,
		BGl_nodezd21occz12zd2app3392z12zzreduce_1occz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3643z00zzreduce_1occz00,
		BgL_bgl_string3643za700za7za7r3696za7, "      single occurrence", 23);
	      DEFINE_STRING(BGl_string3644z00zzreduce_1occz00,
		BgL_bgl_string3644za700za7za7r3697za7, "      (removed: ", 16);
	      DEFINE_STRING(BGl_string3645z00zzreduce_1occz00,
		BgL_bgl_string3645za700za7za7r3698za7, "node-1occ!", 10);
	      DEFINE_STRING(BGl_string3646z00zzreduce_1occz00,
		BgL_bgl_string3646za700za7za7r3699za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3668z00zzreduce_1occz00,
		BgL_bgl_string3668za700za7za7r3700za7, "reduce_1occ", 11);
	      DEFINE_STRING(BGl_string3669z00zzreduce_1occz00,
		BgL_bgl_string3669za700za7za7r3701za7, "node-1occ!-default3348 read ", 28);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_1occz00(long
		BgL_checksumz00_2754, char *BgL_fromz00_2755)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_1occz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_1occz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_1occz00();
					BGl_cnstzd2initzd2zzreduce_1occz00();
					BGl_importedzd2moduleszd2initz00zzreduce_1occz00();
					BGl_genericzd2initzd2zzreduce_1occz00();
					BGl_methodzd2initzd2zzreduce_1occz00();
					BGl_toplevelzd2initzd2zzreduce_1occz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_1occz00()
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_1occ");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_1occ");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_1occz00()
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			{	/* Reduce/1occ.scm 16 */
				obj_t BgL_cportz00_2746;

				BgL_cportz00_2746 =
					bgl_open_input_string(BGl_string3669z00zzreduce_1occz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2747;

					BgL_iz00_2747 = ((long) 1);
				BgL_loopz00_2748:
					if ((BgL_iz00_2747 == ((long) -1)))
						{	/* Reduce/1occ.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/1occ.scm 16 */
							{	/* Reduce/1occ.scm 16 */
								obj_t BgL_arg3671z00_2750;

								{	/* Reduce/1occ.scm 16 */

									{	/* Reduce/1occ.scm 16 */
										obj_t BgL_locationz00_2752;

										BgL_locationz00_2752 = BBOOL(((bool_t) 0));
										{	/* Reduce/1occ.scm 16 */

											BgL_arg3671z00_2750 =
												BGl_readz00zz__readerz00(BgL_cportz00_2746,
												BgL_locationz00_2752);
										}
									}
								}
								{	/* Reduce/1occ.scm 16 */
									int BgL_auxz00_2775;

									BgL_auxz00_2775 = (int) (BgL_iz00_2747);
									CNST_TABLE_SET(BgL_auxz00_2775, BgL_arg3671z00_2750);
							}}
							{	/* Reduce/1occ.scm 16 */
								int BgL_auxz00_2753;

								BgL_auxz00_2753 = (int) ((BgL_iz00_2747 - ((long) 1)));
								{
									long BgL_iz00_2780;

									BgL_iz00_2780 = (long) (BgL_auxz00_2753);
									BgL_iz00_2747 = BgL_iz00_2780;
									goto BgL_loopz00_2748;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_1occz00()
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			BGl_za2variablezd2removedza2zd2zzreduce_1occz00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* reduce-1occ! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd21occz12zc0zzreduce_1occz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 36 */
			{	/* Reduce/1occ.scm 37 */
				obj_t BgL_list3393z00_824;

				BgL_list3393z00_824 =
					MAKE_PAIR(BGl_string3643z00zzreduce_1occz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3393z00_824);
			}
			BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_1);
			BGl_za2variablezd2removedza2zd2zzreduce_1occz00 = ((long) 0);
			{
				obj_t BgL_l3298z00_826;

				BgL_l3298z00_826 = BgL_globalsz00_1;
			BgL_zc3anonymousza33394ze3z83_827:
				if (PAIRP(BgL_l3298z00_826))
					{	/* Reduce/1occ.scm 43 */
						{	/* Reduce/1occ.scm 44 */
							obj_t BgL_globalz00_829;

							BgL_globalz00_829 = CAR(BgL_l3298z00_826);
							{	/* Reduce/1occ.scm 44 */
								BgL_valuez00_bglt BgL_funz00_830;

								{
									BgL_variablez00_bglt BgL_auxz00_2789;

									BgL_auxz00_2789 = (BgL_variablez00_bglt) (BgL_globalz00_829);
									BgL_funz00_830 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2789))->
										BgL_valuez00);
								}
								{	/* Reduce/1occ.scm 44 */
									obj_t BgL_nodez00_831;

									{
										BgL_sfunz00_bglt BgL_auxz00_2792;

										BgL_auxz00_2792 = (BgL_sfunz00_bglt) (BgL_funz00_830);
										BgL_nodez00_831 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2792))->BgL_bodyz00);
									}
									{	/* Reduce/1occ.scm 45 */

										{	/* Reduce/1occ.scm 46 */
											obj_t BgL_arg3396z00_832;

											{	/* Reduce/1occ.scm 46 */
												obj_t BgL__z00_833;

												{	/* Reduce/1occ.scm 47 */
													BgL_nodez00_bglt BgL_nodez00_1629;

													BgL_nodez00_1629 =
														(BgL_nodez00_bglt) (BgL_nodez00_831);
													{	/* Reduce/1occ.scm 47 */
														obj_t BgL_method3349z00_1631;

														{	/* Reduce/1occ.scm 47 */
															BgL_objectz00_bglt BgL_objz00_1632;

															BgL_objz00_1632 =
																(BgL_objectz00_bglt) (BgL_nodez00_1629);
															{	/* Reduce/1occ.scm 47 */
																long BgL_objzd2classzd2numz00_1633;

																BgL_objzd2classzd2numz00_1633 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1632);
																{	/* Reduce/1occ.scm 47 */
																	obj_t BgL_arg2643z00_1634;

																	BgL_arg2643z00_1634 =
																		PROCEDURE_REF
																		(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
																		(int) (((long) 1)));
																	{	/* Reduce/1occ.scm 47 */
																		obj_t BgL_arrayz00_1636;

																		int BgL_offsetz00_1637;

																		BgL_arrayz00_1636 = BgL_arg2643z00_1634;
																		BgL_offsetz00_1637 =
																			(int) (BgL_objzd2classzd2numz00_1633);
																		{	/* Reduce/1occ.scm 47 */
																			long BgL_offsetz00_1638;

																			BgL_offsetz00_1638 =
																				(
																				(long) (BgL_offsetz00_1637) -
																				OBJECT_TYPE);
																			{	/* Reduce/1occ.scm 47 */
																				long BgL_modz00_1639;

																				{	/* Reduce/1occ.scm 47 */
																					int BgL_arg2645z00_1640;

																					BgL_arg2645z00_1640 =
																						(int) (((long) 16));
																					{	/* Reduce/1occ.scm 47 */
																						long BgL_auxz00_2804;

																						BgL_auxz00_2804 =
																							(long) (BgL_arg2645z00_1640);
																						BgL_modz00_1639 =
																							(BgL_offsetz00_1638 /
																							BgL_auxz00_2804);
																				}}
																				{	/* Reduce/1occ.scm 47 */
																					long BgL_restz00_1641;

																					{	/* Reduce/1occ.scm 47 */
																						int BgL_arg2644z00_1642;

																						BgL_arg2644z00_1642 =
																							(int) (((long) 16));
																						{	/* Reduce/1occ.scm 47 */
																							long BgL_auxz00_2808;

																							BgL_auxz00_2808 =
																								(long) (BgL_arg2644z00_1642);
																							BgL_restz00_1641 =
																								(BgL_offsetz00_1638 %
																								BgL_auxz00_2808);
																					}}
																					{	/* Reduce/1occ.scm 47 */

																						BgL_method3349z00_1631 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1636,
																								(int) (BgL_modz00_1639)),
																							(int) (BgL_restz00_1641));
														}}}}}}}}
														BgL__z00_833 =
															PROCEDURE_ENTRY(BgL_method3349z00_1631)
															(BgL_method3349z00_1631,
															(obj_t) (BgL_nodez00_1629), BNIL, BEOA);
												}}
												{	/* Reduce/1occ.scm 46 */
													obj_t BgL_nodez00_834;

													{	/* Reduce/1occ.scm 46 */
														int BgL_auxz00_2818;

														BgL_auxz00_2818 = (int) (((long) 1));
														BgL_nodez00_834 = BGL_MVALUES_VAL(BgL_auxz00_2818);
													}
													BgL_arg3396z00_832 = BgL_nodez00_834;
											}}
											{
												BgL_sfunz00_bglt BgL_auxz00_2821;

												BgL_auxz00_2821 = (BgL_sfunz00_bglt) (BgL_funz00_830);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2821))->
														BgL_bodyz00) =
													((obj_t) BgL_arg3396z00_832), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3298z00_2824;

							BgL_l3298z00_2824 = CDR(BgL_l3298z00_826);
							BgL_l3298z00_826 = BgL_l3298z00_2824;
							goto BgL_zc3anonymousza33394ze3z83_827;
						}
					}
				else
					{	/* Reduce/1occ.scm 43 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/1occ.scm 51 */
				obj_t BgL_list3398z00_837;

				{	/* Reduce/1occ.scm 51 */
					obj_t BgL_arg3400z00_839;

					{	/* Reduce/1occ.scm 51 */
						obj_t BgL_arg3401z00_840;

						{	/* Reduce/1occ.scm 51 */
							obj_t BgL_arg3402z00_841;

							BgL_arg3402z00_841 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg3401z00_840 =
								MAKE_PAIR(BCHAR(((unsigned char) ')')), BgL_arg3402z00_841);
						}
						BgL_arg3400z00_839 =
							MAKE_PAIR(BINT(BGl_za2variablezd2removedza2zd2zzreduce_1occz00),
							BgL_arg3401z00_840);
					}
					BgL_list3398z00_837 =
						MAKE_PAIR(BGl_string3644z00zzreduce_1occz00, BgL_arg3400z00_839);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3398z00_837);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-1occ! */
	obj_t BGl__reducezd21occz12zc0zzreduce_1occz00(obj_t BgL_envz00_2654,
		obj_t BgL_globalsz00_2655)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 36 */
			return BGl_reducezd21occz12zc0zzreduce_1occz00(BgL_globalsz00_2655);
		}
	}



/* node-1occ-let-var! */
	obj_t BGl_nodezd21occzd2letzd2varz12zc0zzreduce_1occz00(BgL_letzd2varzd2_bglt
		BgL_nodez00_36, obj_t BgL_1zd2expza2z70_37)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 256 */
			{
				obj_t BgL_obindingsz00_846;

				bool_t BgL_resetz00_847;

				obj_t BgL_extendz00_848;

				{	/* Reduce/1occ.scm 258 */
					obj_t BgL_arg3403z00_845;

					BgL_arg3403z00_845 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->BgL_bindingsz00);
					BgL_obindingsz00_846 = BgL_arg3403z00_845;
					BgL_resetz00_847 = ((bool_t) 0);
					BgL_extendz00_848 = BNIL;
				BgL_zc3anonymousza33404ze3z83_849:
					if (NULLP(BgL_obindingsz00_846))
						{	/* Reduce/1occ.scm 262 */
							bool_t BgL_testz00_2839;

							if (BgL_resetz00_847)
								{	/* Reduce/1occ.scm 262 */
									BgL_testz00_2839 = ((bool_t) 1);
								}
							else
								{	/* Reduce/1occ.scm 262 */
									BgL_nodez00_bglt BgL_arg3427z00_890;

									BgL_arg3427z00_890 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->
										BgL_bodyz00);
									BgL_testz00_2839 =
										BGl_sidezd2effectzf3z21zzeffect_effectz00
										(BgL_arg3427z00_890);
								}
							if (BgL_testz00_2839)
								{	/* Reduce/1occ.scm 263 */
									obj_t BgL_resetz72z72_852;

									{	/* Reduce/1occ.scm 264 */
										BgL_nodez00_bglt BgL_arg3407z00_856;

										BgL_arg3407z00_856 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->
											BgL_bodyz00);
										{	/* Reduce/1occ.scm 264 */
											obj_t BgL_method3349z00_1666;

											{	/* Reduce/1occ.scm 264 */
												BgL_objectz00_bglt BgL_objz00_1667;

												BgL_objz00_1667 =
													(BgL_objectz00_bglt) (BgL_arg3407z00_856);
												{	/* Reduce/1occ.scm 264 */
													long BgL_objzd2classzd2numz00_1668;

													BgL_objzd2classzd2numz00_1668 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1667);
													{	/* Reduce/1occ.scm 264 */
														obj_t BgL_arg2643z00_1669;

														BgL_arg2643z00_1669 =
															PROCEDURE_REF
															(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
															(int) (((long) 1)));
														{	/* Reduce/1occ.scm 264 */
															obj_t BgL_arrayz00_1671;

															int BgL_offsetz00_1672;

															BgL_arrayz00_1671 = BgL_arg2643z00_1669;
															BgL_offsetz00_1672 =
																(int) (BgL_objzd2classzd2numz00_1668);
															{	/* Reduce/1occ.scm 264 */
																long BgL_offsetz00_1673;

																BgL_offsetz00_1673 =
																	((long) (BgL_offsetz00_1672) - OBJECT_TYPE);
																{	/* Reduce/1occ.scm 264 */
																	long BgL_modz00_1674;

																	{	/* Reduce/1occ.scm 264 */
																		int BgL_arg2645z00_1675;

																		BgL_arg2645z00_1675 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 264 */
																			long BgL_auxz00_2852;

																			BgL_auxz00_2852 =
																				(long) (BgL_arg2645z00_1675);
																			BgL_modz00_1674 =
																				(BgL_offsetz00_1673 / BgL_auxz00_2852);
																	}}
																	{	/* Reduce/1occ.scm 264 */
																		long BgL_restz00_1676;

																		{	/* Reduce/1occ.scm 264 */
																			int BgL_arg2644z00_1677;

																			BgL_arg2644z00_1677 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 264 */
																				long BgL_auxz00_2856;

																				BgL_auxz00_2856 =
																					(long) (BgL_arg2644z00_1677);
																				BgL_restz00_1676 =
																					(BgL_offsetz00_1673 %
																					BgL_auxz00_2856);
																		}}
																		{	/* Reduce/1occ.scm 264 */

																			BgL_method3349z00_1666 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1671,
																					(int) (BgL_modz00_1674)),
																				(int) (BgL_restz00_1676));
											}}}}}}}}
											BgL_resetz72z72_852 =
												PROCEDURE_ENTRY(BgL_method3349z00_1666)
												(BgL_method3349z00_1666, (obj_t) (BgL_arg3407z00_856),
												BNIL, BEOA);
									}}
									{	/* Reduce/1occ.scm 266 */
										obj_t BgL_nbodyz00_853;

										{	/* Reduce/1occ.scm 266 */
											int BgL_auxz00_2866;

											BgL_auxz00_2866 = (int) (((long) 1));
											BgL_nbodyz00_853 = BGL_MVALUES_VAL(BgL_auxz00_2866);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_2869;

											BgL_auxz00_2869 = (BgL_nodez00_bglt) (BgL_nbodyz00_853);
											((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->
													BgL_bodyz00) =
												((BgL_nodez00_bglt) BgL_auxz00_2869), BUNSPEC);
										}
										{	/* Reduce/1occ.scm 266 */
											int BgL_auxz00_2872;

											BgL_auxz00_2872 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_2872);
										}
										{	/* Reduce/1occ.scm 266 */
											obj_t BgL_auxz00_2877;

											int BgL_auxz00_2875;

											BgL_auxz00_2877 = (obj_t) (BgL_nodez00_36);
											BgL_auxz00_2875 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_2875, BgL_auxz00_2877);
										}
										return BTRUE;
									}
								}
							else
								{	/* Reduce/1occ.scm 267 */
									obj_t BgL_1zd2expza2z72z02_858;

									BgL_1zd2expza2z72z02_858 =
										bgl_append2(BgL_extendz00_848, BgL_1zd2expza2z70_37);
									{	/* Reduce/1occ.scm 268 */
										obj_t BgL_resetz72z72_859;

										{	/* Reduce/1occ.scm 269 */
											BgL_nodez00_bglt BgL_arg3426z00_889;

											BgL_arg3426z00_889 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->
												BgL_bodyz00);
											{	/* Reduce/1occ.scm 269 */
												obj_t BgL_method3349z00_1700;

												{	/* Reduce/1occ.scm 269 */
													BgL_objectz00_bglt BgL_objz00_1701;

													BgL_objz00_1701 =
														(BgL_objectz00_bglt) (BgL_arg3426z00_889);
													{	/* Reduce/1occ.scm 269 */
														long BgL_objzd2classzd2numz00_1702;

														BgL_objzd2classzd2numz00_1702 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1701);
														{	/* Reduce/1occ.scm 269 */
															obj_t BgL_arg2643z00_1703;

															BgL_arg2643z00_1703 =
																PROCEDURE_REF
																(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
																(int) (((long) 1)));
															{	/* Reduce/1occ.scm 269 */
																obj_t BgL_arrayz00_1705;

																int BgL_offsetz00_1706;

																BgL_arrayz00_1705 = BgL_arg2643z00_1703;
																BgL_offsetz00_1706 =
																	(int) (BgL_objzd2classzd2numz00_1702);
																{	/* Reduce/1occ.scm 269 */
																	long BgL_offsetz00_1707;

																	BgL_offsetz00_1707 =
																		((long) (BgL_offsetz00_1706) - OBJECT_TYPE);
																	{	/* Reduce/1occ.scm 269 */
																		long BgL_modz00_1708;

																		{	/* Reduce/1occ.scm 269 */
																			int BgL_arg2645z00_1709;

																			BgL_arg2645z00_1709 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 269 */
																				long BgL_auxz00_2890;

																				BgL_auxz00_2890 =
																					(long) (BgL_arg2645z00_1709);
																				BgL_modz00_1708 =
																					(BgL_offsetz00_1707 /
																					BgL_auxz00_2890);
																		}}
																		{	/* Reduce/1occ.scm 269 */
																			long BgL_restz00_1710;

																			{	/* Reduce/1occ.scm 269 */
																				int BgL_arg2644z00_1711;

																				BgL_arg2644z00_1711 =
																					(int) (((long) 16));
																				{	/* Reduce/1occ.scm 269 */
																					long BgL_auxz00_2894;

																					BgL_auxz00_2894 =
																						(long) (BgL_arg2644z00_1711);
																					BgL_restz00_1710 =
																						(BgL_offsetz00_1707 %
																						BgL_auxz00_2894);
																			}}
																			{	/* Reduce/1occ.scm 269 */

																				BgL_method3349z00_1700 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1705,
																						(int) (BgL_modz00_1708)),
																					(int) (BgL_restz00_1710));
												}}}}}}}}
												BgL_resetz72z72_859 =
													PROCEDURE_ENTRY(BgL_method3349z00_1700)
													(BgL_method3349z00_1700, (obj_t) (BgL_arg3426z00_889),
													BgL_1zd2expza2z72z02_858, BEOA);
										}}
										{	/* Reduce/1occ.scm 298 */
											obj_t BgL_nbodyz00_860;

											{	/* Reduce/1occ.scm 298 */
												int BgL_auxz00_2904;

												BgL_auxz00_2904 = (int) (((long) 1));
												BgL_nbodyz00_860 = BGL_MVALUES_VAL(BgL_auxz00_2904);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_2907;

												BgL_auxz00_2907 = (BgL_nodez00_bglt) (BgL_nbodyz00_860);
												((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->
														BgL_bodyz00) =
													((BgL_nodez00_bglt) BgL_auxz00_2907), BUNSPEC);
											}
											{
												obj_t BgL_obindingsz00_864;

												obj_t BgL_nbindingsz00_865;

												{	/* Reduce/1occ.scm 273 */
													obj_t BgL_arg3409z00_863;

													BgL_arg3409z00_863 =
														(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_36))->
														BgL_bindingsz00);
													BgL_obindingsz00_864 = BgL_arg3409z00_863;
													BgL_nbindingsz00_865 = BNIL;
												BgL_zc3anonymousza33410ze3z83_866:
													if (NULLP(BgL_obindingsz00_864))
														{	/* Reduce/1occ.scm 277 */
															bool_t BgL_testz00_2913;

															if (
																(((BgL_letzd2varzd2_bglt)
																		CREF(BgL_nodez00_36))->BgL_removablezf3zf3))
																{	/* Reduce/1occ.scm 277 */
																	BgL_testz00_2913 =
																		NULLP(BgL_nbindingsz00_865);
																}
															else
																{	/* Reduce/1occ.scm 277 */
																	BgL_testz00_2913 = ((bool_t) 0);
																}
															if (BgL_testz00_2913)
																{	/* Reduce/1occ.scm 277 */
																	{	/* Reduce/1occ.scm 283 */
																		BgL_nodez00_bglt BgL_val1_3331z00_870;

																		BgL_val1_3331z00_870 =
																			(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodez00_36))->BgL_bodyz00);
																		{	/* Reduce/1occ.scm 283 */
																			int BgL_auxz00_2918;

																			BgL_auxz00_2918 = (int) (((long) 2));
																			BGL_MVALUES_NUMBER_SET(BgL_auxz00_2918);
																		}
																		{	/* Reduce/1occ.scm 283 */
																			obj_t BgL_auxz00_2923;

																			int BgL_auxz00_2921;

																			BgL_auxz00_2923 =
																				(obj_t) (BgL_val1_3331z00_870);
																			BgL_auxz00_2921 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_auxz00_2921,
																				BgL_auxz00_2923);
																		}
																		return BgL_resetz72z72_859;
																	}
																}
															else
																{	/* Reduce/1occ.scm 277 */
																	{
																		obj_t BgL_auxz00_2926;

																		BgL_auxz00_2926 =
																			bgl_reverse_bang(BgL_nbindingsz00_865);
																		((((BgL_letzd2varzd2_bglt)
																					CREF(BgL_nodez00_36))->
																				BgL_bindingsz00) =
																			((obj_t) BgL_auxz00_2926), BUNSPEC);
																	}
																	{	/* Reduce/1occ.scm 286 */
																		int BgL_auxz00_2929;

																		BgL_auxz00_2929 = (int) (((long) 2));
																		BGL_MVALUES_NUMBER_SET(BgL_auxz00_2929);
																	}
																	{	/* Reduce/1occ.scm 286 */
																		obj_t BgL_auxz00_2934;

																		int BgL_auxz00_2932;

																		BgL_auxz00_2934 = (obj_t) (BgL_nodez00_36);
																		BgL_auxz00_2932 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_auxz00_2932,
																			BgL_auxz00_2934);
																	}
																	return BgL_resetz72z72_859;
																}
														}
													else
														{	/* Reduce/1occ.scm 287 */
															bool_t BgL_testz00_2937;

															{	/* Reduce/1occ.scm 287 */
																obj_t BgL_varz00_880;

																obj_t BgL_valz00_881;

																BgL_varz00_880 = CAR(CAR(BgL_obindingsz00_864));
																BgL_valz00_881 = CDR(CAR(BgL_obindingsz00_864));
																{	/* Reduce/1occ.scm 289 */
																	bool_t BgL_testz00_2942;

																	{	/* Reduce/1occ.scm 289 */
																		long BgL_auxz00_2943;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2944;

																			BgL_auxz00_2944 =
																				(BgL_variablez00_bglt) (BgL_varz00_880);
																			BgL_auxz00_2943 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2944))->
																				BgL_occurrencez00);
																		}
																		BgL_testz00_2942 =
																			(BgL_auxz00_2943 == ((long) 0));
																	}
																	if (BgL_testz00_2942)
																		{	/* Reduce/1occ.scm 289 */
																			if (BGl_sidezd2effectzf3z21zzeffect_effectz00((BgL_nodez00_bglt) (BgL_valz00_881)))
																				{	/* Reduce/1occ.scm 290 */
																					BgL_testz00_2937 = ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/1occ.scm 290 */
																					BgL_testz00_2937 = ((bool_t) 1);
																				}
																		}
																	else
																		{	/* Reduce/1occ.scm 289 */
																			BgL_testz00_2937 = ((bool_t) 0);
																		}
																}
															}
															if (BgL_testz00_2937)
																{	/* Reduce/1occ.scm 287 */
																	{
																		obj_t BgL_obindingsz00_2951;

																		BgL_obindingsz00_2951 =
																			CDR(BgL_obindingsz00_864);
																		BgL_obindingsz00_864 =
																			BgL_obindingsz00_2951;
																		goto BgL_zc3anonymousza33410ze3z83_866;
																	}
																}
															else
																{	/* Reduce/1occ.scm 297 */
																	obj_t BgL_arg3417z00_877;

																	obj_t BgL_arg3418z00_878;

																	BgL_arg3417z00_877 =
																		CDR(BgL_obindingsz00_864);
																	BgL_arg3418z00_878 =
																		MAKE_PAIR(CAR(BgL_obindingsz00_864),
																		BgL_nbindingsz00_865);
																	{
																		obj_t BgL_nbindingsz00_2957;

																		obj_t BgL_obindingsz00_2956;

																		BgL_obindingsz00_2956 = BgL_arg3417z00_877;
																		BgL_nbindingsz00_2957 = BgL_arg3418z00_878;
																		BgL_nbindingsz00_865 =
																			BgL_nbindingsz00_2957;
																		BgL_obindingsz00_864 =
																			BgL_obindingsz00_2956;
																		goto BgL_zc3anonymousza33410ze3z83_866;
																	}
																}
														}
												}
											}
										}
									}
								}
						}
					else
						{	/* Reduce/1occ.scm 299 */
							obj_t BgL_bindingz00_891;

							BgL_bindingz00_891 = CAR(BgL_obindingsz00_846);
							{	/* Reduce/1occ.scm 300 */
								obj_t BgL_varz00_892;

								obj_t BgL_valz00_893;

								BgL_varz00_892 = CAR(BgL_bindingz00_891);
								BgL_valz00_893 = CDR(BgL_bindingz00_891);
								{	/* Reduce/1occ.scm 302 */
									obj_t BgL_resetz72z72_894;

									{	/* Reduce/1occ.scm 303 */
										BgL_nodez00_bglt BgL_nodez00_1754;

										BgL_nodez00_1754 = (BgL_nodez00_bglt) (BgL_valz00_893);
										{	/* Reduce/1occ.scm 303 */
											obj_t BgL_method3349z00_1756;

											{	/* Reduce/1occ.scm 303 */
												BgL_objectz00_bglt BgL_objz00_1757;

												BgL_objz00_1757 =
													(BgL_objectz00_bglt) (BgL_nodez00_1754);
												{	/* Reduce/1occ.scm 303 */
													long BgL_objzd2classzd2numz00_1758;

													BgL_objzd2classzd2numz00_1758 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1757);
													{	/* Reduce/1occ.scm 303 */
														obj_t BgL_arg2643z00_1759;

														BgL_arg2643z00_1759 =
															PROCEDURE_REF
															(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
															(int) (((long) 1)));
														{	/* Reduce/1occ.scm 303 */
															obj_t BgL_arrayz00_1761;

															int BgL_offsetz00_1762;

															BgL_arrayz00_1761 = BgL_arg2643z00_1759;
															BgL_offsetz00_1762 =
																(int) (BgL_objzd2classzd2numz00_1758);
															{	/* Reduce/1occ.scm 303 */
																long BgL_offsetz00_1763;

																BgL_offsetz00_1763 =
																	((long) (BgL_offsetz00_1762) - OBJECT_TYPE);
																{	/* Reduce/1occ.scm 303 */
																	long BgL_modz00_1764;

																	{	/* Reduce/1occ.scm 303 */
																		int BgL_arg2645z00_1765;

																		BgL_arg2645z00_1765 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 303 */
																			long BgL_auxz00_2970;

																			BgL_auxz00_2970 =
																				(long) (BgL_arg2645z00_1765);
																			BgL_modz00_1764 =
																				(BgL_offsetz00_1763 / BgL_auxz00_2970);
																	}}
																	{	/* Reduce/1occ.scm 303 */
																		long BgL_restz00_1766;

																		{	/* Reduce/1occ.scm 303 */
																			int BgL_arg2644z00_1767;

																			BgL_arg2644z00_1767 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 303 */
																				long BgL_auxz00_2974;

																				BgL_auxz00_2974 =
																					(long) (BgL_arg2644z00_1767);
																				BgL_restz00_1766 =
																					(BgL_offsetz00_1763 %
																					BgL_auxz00_2974);
																		}}
																		{	/* Reduce/1occ.scm 303 */

																			BgL_method3349z00_1756 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1761,
																					(int) (BgL_modz00_1764)),
																				(int) (BgL_restz00_1766));
											}}}}}}}}
											BgL_resetz72z72_894 =
												PROCEDURE_ENTRY(BgL_method3349z00_1756)
												(BgL_method3349z00_1756, (obj_t) (BgL_nodez00_1754),
												BgL_1zd2expza2z70_37, BEOA);
									}}
									{	/* Reduce/1occ.scm 328 */
										obj_t BgL_nvalz00_895;

										{	/* Reduce/1occ.scm 328 */
											int BgL_auxz00_2984;

											BgL_auxz00_2984 = (int) (((long) 1));
											BgL_nvalz00_895 = BGL_MVALUES_VAL(BgL_auxz00_2984);
										}
										SET_CDR(BgL_bindingz00_891, BgL_nvalz00_895);
										{	/* Reduce/1occ.scm 306 */
											bool_t BgL_testz00_2988;

											if (BgL_resetz00_847)
												{	/* Reduce/1occ.scm 306 */
													BgL_testz00_2988 = ((bool_t) 1);
												}
											else
												{	/* Reduce/1occ.scm 306 */
													BgL_testz00_2988 = CBOOL(BgL_resetz72z72_894);
												}
											if (BgL_testz00_2988)
												{
													obj_t BgL_extendz00_2994;

													bool_t BgL_resetz00_2993;

													obj_t BgL_obindingsz00_2991;

													BgL_obindingsz00_2991 = CDR(BgL_obindingsz00_846);
													BgL_resetz00_2993 = ((bool_t) 1);
													BgL_extendz00_2994 = BNIL;
													BgL_extendz00_848 = BgL_extendz00_2994;
													BgL_resetz00_847 = BgL_resetz00_2993;
													BgL_obindingsz00_846 = BgL_obindingsz00_2991;
													goto BgL_zc3anonymousza33404ze3z83_849;
												}
											else
												{	/* Reduce/1occ.scm 310 */
													bool_t BgL_testz00_2995;

													{	/* Reduce/1occ.scm 310 */
														obj_t BgL_auxz00_2996;

														{
															BgL_variablez00_bglt BgL_auxz00_2997;

															BgL_auxz00_2997 =
																(BgL_variablez00_bglt) (BgL_varz00_892);
															BgL_auxz00_2996 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2997))->BgL_accessz00);
														}
														BgL_testz00_2995 =
															(BgL_auxz00_2996 == CNST_TABLE_REF(((long) 0)));
													}
													if (BgL_testz00_2995)
														{	/* Reduce/1occ.scm 314 */
															bool_t BgL_testz00_3002;

															{	/* Reduce/1occ.scm 314 */
																bool_t BgL_testz00_3003;

																{	/* Reduce/1occ.scm 314 */
																	long BgL_auxz00_3004;

																	{
																		BgL_variablez00_bglt BgL_auxz00_3005;

																		BgL_auxz00_3005 =
																			(BgL_variablez00_bglt) (BgL_varz00_892);
																		BgL_auxz00_3004 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_3005))->
																			BgL_occurrencez00);
																	}
																	BgL_testz00_3003 =
																		(BgL_auxz00_3004 == ((long) 1));
																}
																if (BgL_testz00_3003)
																	{	/* Reduce/1occ.scm 315 */
																		bool_t BgL_testz00_3009;

																		{	/* Reduce/1occ.scm 315 */
																			obj_t BgL_auxz00_3010;

																			{
																				BgL_variablez00_bglt BgL_auxz00_3011;

																				BgL_auxz00_3011 =
																					(BgL_variablez00_bglt)
																					(BgL_varz00_892);
																				BgL_auxz00_3010 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_3011))->
																					BgL_accessz00);
																			}
																			BgL_testz00_3009 =
																				(BgL_auxz00_3010 ==
																				CNST_TABLE_REF(((long) 0)));
																		}
																		if (BgL_testz00_3009)
																			{	/* Reduce/1occ.scm 315 */
																				if (BGl_sidezd2effectzf3z21zzeffect_effectz00((BgL_nodez00_bglt) (BgL_valz00_893)))
																					{	/* Reduce/1occ.scm 316 */
																						BgL_testz00_3002 = ((bool_t) 0);
																					}
																				else
																					{	/* Reduce/1occ.scm 317 */
																						BgL_typez00_bglt BgL_arg3440z00_907;

																						BgL_typez00_bglt BgL_arg3441z00_908;

																						{
																							BgL_variablez00_bglt
																								BgL_auxz00_3019;
																							BgL_auxz00_3019 =
																								(BgL_variablez00_bglt)
																								(BgL_varz00_892);
																							BgL_arg3440z00_907 =
																								(((BgL_variablez00_bglt)
																									CREF(BgL_auxz00_3019))->
																								BgL_typez00);
																						}
																						BgL_arg3441z00_908 =
																							BGl_getzd2typezd2zztype_typeofz00(
																							(BgL_nodez00_bglt)
																							(BgL_valz00_893));
																						BgL_testz00_3002 =
																							BGl_typezd2lesszd2specificzf3zf3zztype_miscz00
																							(BgL_arg3440z00_907,
																							BgL_arg3441z00_908);
																					}
																			}
																		else
																			{	/* Reduce/1occ.scm 315 */
																				BgL_testz00_3002 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Reduce/1occ.scm 314 */
																		BgL_testz00_3002 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_3002)
																{	/* Reduce/1occ.scm 314 */
																	{	/* Reduce/1occ.scm 322 */
																		obj_t BgL_arg3434z00_901;

																		obj_t BgL_arg3435z00_902;

																		BgL_arg3434z00_901 =
																			CDR(BgL_obindingsz00_846);
																		BgL_arg3435z00_902 =
																			MAKE_PAIR(BgL_bindingz00_891,
																			BgL_extendz00_848);
																		{
																			obj_t BgL_extendz00_3029;

																			bool_t BgL_resetz00_3028;

																			obj_t BgL_obindingsz00_3027;

																			BgL_obindingsz00_3027 =
																				BgL_arg3434z00_901;
																			BgL_resetz00_3028 = ((bool_t) 0);
																			BgL_extendz00_3029 = BgL_arg3435z00_902;
																			BgL_extendz00_848 = BgL_extendz00_3029;
																			BgL_resetz00_847 = BgL_resetz00_3028;
																			BgL_obindingsz00_846 =
																				BgL_obindingsz00_3027;
																			goto BgL_zc3anonymousza33404ze3z83_849;
																		}
																	}
																}
															else
																{
																	bool_t BgL_resetz00_3032;

																	obj_t BgL_obindingsz00_3030;

																	BgL_obindingsz00_3030 =
																		CDR(BgL_obindingsz00_846);
																	BgL_resetz00_3032 = ((bool_t) 0);
																	BgL_resetz00_847 = BgL_resetz00_3032;
																	BgL_obindingsz00_846 = BgL_obindingsz00_3030;
																	goto BgL_zc3anonymousza33404ze3z83_849;
																}
														}
													else
														{
															bool_t BgL_resetz00_3035;

															obj_t BgL_obindingsz00_3033;

															BgL_obindingsz00_3033 = CDR(BgL_obindingsz00_846);
															BgL_resetz00_3035 = ((bool_t) 0);
															BgL_resetz00_847 = BgL_resetz00_3035;
															BgL_obindingsz00_846 = BgL_obindingsz00_3033;
															goto BgL_zc3anonymousza33404ze3z83_849;
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



/* node-1occ*! */
	obj_t BGl_nodezd21occza2z12z62zzreduce_1occz00(obj_t BgL_nodeza2za2_50,
		obj_t BgL_1zd2expza2z70_51)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 396 */
			{
				obj_t BgL_nodeza2za2_918;

				bool_t BgL_resetz00_919;

				obj_t BgL_1zd2expza2z70_920;

				BgL_nodeza2za2_918 = BgL_nodeza2za2_50;
				BgL_resetz00_919 = ((bool_t) 0);
				BgL_1zd2expza2z70_920 = BgL_1zd2expza2z70_51;
			BgL_zc3anonymousza33450ze3z83_921:
				if (NULLP(BgL_nodeza2za2_918))
					{	/* Reduce/1occ.scm 401 */
						return BBOOL(BgL_resetz00_919);
					}
				else
					{	/* Reduce/1occ.scm 401 */
						if (NULLP(CDR(BgL_nodeza2za2_918)))
							{	/* Reduce/1occ.scm 404 */
								obj_t BgL_resetz72z72_924;

								{	/* Reduce/1occ.scm 405 */
									obj_t BgL_arg3453z00_927;

									BgL_arg3453z00_927 = CAR(BgL_nodeza2za2_918);
									{	/* Reduce/1occ.scm 405 */
										BgL_nodez00_bglt BgL_nodez00_1798;

										BgL_nodez00_1798 = (BgL_nodez00_bglt) (BgL_arg3453z00_927);
										{	/* Reduce/1occ.scm 405 */
											obj_t BgL_method3349z00_1800;

											{	/* Reduce/1occ.scm 405 */
												BgL_objectz00_bglt BgL_objz00_1801;

												BgL_objz00_1801 =
													(BgL_objectz00_bglt) (BgL_nodez00_1798);
												{	/* Reduce/1occ.scm 405 */
													long BgL_objzd2classzd2numz00_1802;

													BgL_objzd2classzd2numz00_1802 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1801);
													{	/* Reduce/1occ.scm 405 */
														obj_t BgL_arg2643z00_1803;

														BgL_arg2643z00_1803 =
															PROCEDURE_REF
															(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
															(int) (((long) 1)));
														{	/* Reduce/1occ.scm 405 */
															obj_t BgL_arrayz00_1805;

															int BgL_offsetz00_1806;

															BgL_arrayz00_1805 = BgL_arg2643z00_1803;
															BgL_offsetz00_1806 =
																(int) (BgL_objzd2classzd2numz00_1802);
															{	/* Reduce/1occ.scm 405 */
																long BgL_offsetz00_1807;

																BgL_offsetz00_1807 =
																	((long) (BgL_offsetz00_1806) - OBJECT_TYPE);
																{	/* Reduce/1occ.scm 405 */
																	long BgL_modz00_1808;

																	{	/* Reduce/1occ.scm 405 */
																		int BgL_arg2645z00_1809;

																		BgL_arg2645z00_1809 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 405 */
																			long BgL_auxz00_3052;

																			BgL_auxz00_3052 =
																				(long) (BgL_arg2645z00_1809);
																			BgL_modz00_1808 =
																				(BgL_offsetz00_1807 / BgL_auxz00_3052);
																	}}
																	{	/* Reduce/1occ.scm 405 */
																		long BgL_restz00_1810;

																		{	/* Reduce/1occ.scm 405 */
																			int BgL_arg2644z00_1811;

																			BgL_arg2644z00_1811 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 405 */
																				long BgL_auxz00_3056;

																				BgL_auxz00_3056 =
																					(long) (BgL_arg2644z00_1811);
																				BgL_restz00_1810 =
																					(BgL_offsetz00_1807 %
																					BgL_auxz00_3056);
																		}}
																		{	/* Reduce/1occ.scm 405 */

																			BgL_method3349z00_1800 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1805,
																					(int) (BgL_modz00_1808)),
																				(int) (BgL_restz00_1810));
											}}}}}}}}
											BgL_resetz72z72_924 =
												PROCEDURE_ENTRY(BgL_method3349z00_1800)
												(BgL_method3349z00_1800, (obj_t) (BgL_nodez00_1798),
												BgL_1zd2expza2z70_920, BEOA);
								}}}
								{	/* Reduce/1occ.scm 407 */
									obj_t BgL_nodez00_925;

									{	/* Reduce/1occ.scm 407 */
										int BgL_auxz00_3066;

										BgL_auxz00_3066 = (int) (((long) 1));
										BgL_nodez00_925 = BGL_MVALUES_VAL(BgL_auxz00_3066);
									}
									SET_CAR(BgL_nodeza2za2_918, BgL_nodez00_925);
									if (BgL_resetz00_919)
										{	/* Reduce/1occ.scm 407 */
											return BBOOL(BgL_resetz00_919);
										}
									else
										{	/* Reduce/1occ.scm 407 */
											return BgL_resetz72z72_924;
										}
								}
							}
						else
							{	/* Reduce/1occ.scm 409 */
								obj_t BgL_resetz72z72_928;

								{	/* Reduce/1occ.scm 410 */
									obj_t BgL_arg3458z00_934;

									BgL_arg3458z00_934 = CAR(BgL_nodeza2za2_918);
									{	/* Reduce/1occ.scm 410 */
										BgL_nodez00_bglt BgL_nodez00_1829;

										BgL_nodez00_1829 = (BgL_nodez00_bglt) (BgL_arg3458z00_934);
										{	/* Reduce/1occ.scm 410 */
											obj_t BgL_method3349z00_1831;

											{	/* Reduce/1occ.scm 410 */
												BgL_objectz00_bglt BgL_objz00_1832;

												BgL_objz00_1832 =
													(BgL_objectz00_bglt) (BgL_nodez00_1829);
												{	/* Reduce/1occ.scm 410 */
													long BgL_objzd2classzd2numz00_1833;

													BgL_objzd2classzd2numz00_1833 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1832);
													{	/* Reduce/1occ.scm 410 */
														obj_t BgL_arg2643z00_1834;

														BgL_arg2643z00_1834 =
															PROCEDURE_REF
															(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
															(int) (((long) 1)));
														{	/* Reduce/1occ.scm 410 */
															obj_t BgL_arrayz00_1836;

															int BgL_offsetz00_1837;

															BgL_arrayz00_1836 = BgL_arg2643z00_1834;
															BgL_offsetz00_1837 =
																(int) (BgL_objzd2classzd2numz00_1833);
															{	/* Reduce/1occ.scm 410 */
																long BgL_offsetz00_1838;

																BgL_offsetz00_1838 =
																	((long) (BgL_offsetz00_1837) - OBJECT_TYPE);
																{	/* Reduce/1occ.scm 410 */
																	long BgL_modz00_1839;

																	{	/* Reduce/1occ.scm 410 */
																		int BgL_arg2645z00_1840;

																		BgL_arg2645z00_1840 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 410 */
																			long BgL_auxz00_3082;

																			BgL_auxz00_3082 =
																				(long) (BgL_arg2645z00_1840);
																			BgL_modz00_1839 =
																				(BgL_offsetz00_1838 / BgL_auxz00_3082);
																	}}
																	{	/* Reduce/1occ.scm 410 */
																		long BgL_restz00_1841;

																		{	/* Reduce/1occ.scm 410 */
																			int BgL_arg2644z00_1842;

																			BgL_arg2644z00_1842 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 410 */
																				long BgL_auxz00_3086;

																				BgL_auxz00_3086 =
																					(long) (BgL_arg2644z00_1842);
																				BgL_restz00_1841 =
																					(BgL_offsetz00_1838 %
																					BgL_auxz00_3086);
																		}}
																		{	/* Reduce/1occ.scm 410 */

																			BgL_method3349z00_1831 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1836,
																					(int) (BgL_modz00_1839)),
																				(int) (BgL_restz00_1841));
											}}}}}}}}
											BgL_resetz72z72_928 =
												PROCEDURE_ENTRY(BgL_method3349z00_1831)
												(BgL_method3349z00_1831, (obj_t) (BgL_nodez00_1829),
												BgL_1zd2expza2z70_920, BEOA);
								}}}
								{	/* Reduce/1occ.scm 414 */
									obj_t BgL_nodez00_929;

									{	/* Reduce/1occ.scm 414 */
										int BgL_auxz00_3096;

										BgL_auxz00_3096 = (int) (((long) 1));
										BgL_nodez00_929 = BGL_MVALUES_VAL(BgL_auxz00_3096);
									}
									SET_CAR(BgL_nodeza2za2_918, BgL_nodez00_929);
									{	/* Reduce/1occ.scm 412 */
										bool_t BgL_testz00_3100;

										if (BgL_resetz00_919)
											{	/* Reduce/1occ.scm 412 */
												BgL_testz00_3100 = ((bool_t) 1);
											}
										else
											{	/* Reduce/1occ.scm 412 */
												BgL_testz00_3100 = CBOOL(BgL_resetz72z72_928);
											}
										if (BgL_testz00_3100)
											{
												obj_t BgL_1zd2expza2z70_3106;

												bool_t BgL_resetz00_3105;

												obj_t BgL_nodeza2za2_3103;

												BgL_nodeza2za2_3103 = CDR(BgL_nodeza2za2_918);
												BgL_resetz00_3105 = ((bool_t) 1);
												BgL_1zd2expza2z70_3106 = BNIL;
												BgL_1zd2expza2z70_920 = BgL_1zd2expza2z70_3106;
												BgL_resetz00_919 = BgL_resetz00_3105;
												BgL_nodeza2za2_918 = BgL_nodeza2za2_3103;
												goto BgL_zc3anonymousza33450ze3z83_921;
											}
										else
											{
												bool_t BgL_resetz00_3109;

												obj_t BgL_nodeza2za2_3107;

												BgL_nodeza2za2_3107 = CDR(BgL_nodeza2za2_918);
												BgL_resetz00_3109 = ((bool_t) 0);
												BgL_resetz00_919 = BgL_resetz00_3109;
												BgL_nodeza2za2_918 = BgL_nodeza2za2_3107;
												goto BgL_zc3anonymousza33450ze3z83_921;
											}
									}
								}
							}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_1occz00()
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_nodezd21occz12zd2default3348zd2envzc0zzreduce_1occz00,
				BGl_nodez00zzast_nodez00, BGl_string3645z00zzreduce_1occz00);
		}
	}



/* node-1occ! */
	obj_t BGl_nodezd21occz12zc0zzreduce_1occz00(BgL_nodez00_bglt BgL_nodez00_2,
		obj_t BgL_1zd2expza2z70_3)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 66 */
			{	/* Reduce/1occ.scm 66 */
				obj_t BgL_method3349z00_1861;

				{	/* Reduce/1occ.scm 66 */
					BgL_objectz00_bglt BgL_objz00_1862;

					BgL_objz00_1862 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/1occ.scm 66 */
						long BgL_objzd2classzd2numz00_1863;

						BgL_objzd2classzd2numz00_1863 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1862);
						{	/* Reduce/1occ.scm 66 */
							obj_t BgL_arg2643z00_1864;

							BgL_arg2643z00_1864 =
								PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
								(int) (((long) 1)));
							{	/* Reduce/1occ.scm 66 */
								obj_t BgL_arrayz00_1866;

								int BgL_offsetz00_1867;

								BgL_arrayz00_1866 = BgL_arg2643z00_1864;
								BgL_offsetz00_1867 = (int) (BgL_objzd2classzd2numz00_1863);
								{	/* Reduce/1occ.scm 66 */
									long BgL_offsetz00_1868;

									BgL_offsetz00_1868 =
										((long) (BgL_offsetz00_1867) - OBJECT_TYPE);
									{	/* Reduce/1occ.scm 66 */
										long BgL_modz00_1869;

										{	/* Reduce/1occ.scm 66 */
											int BgL_arg2645z00_1870;

											BgL_arg2645z00_1870 = (int) (((long) 16));
											{	/* Reduce/1occ.scm 66 */
												long BgL_auxz00_3119;

												BgL_auxz00_3119 = (long) (BgL_arg2645z00_1870);
												BgL_modz00_1869 =
													(BgL_offsetz00_1868 / BgL_auxz00_3119);
										}}
										{	/* Reduce/1occ.scm 66 */
											long BgL_restz00_1871;

											{	/* Reduce/1occ.scm 66 */
												int BgL_arg2644z00_1872;

												BgL_arg2644z00_1872 = (int) (((long) 16));
												{	/* Reduce/1occ.scm 66 */
													long BgL_auxz00_3123;

													BgL_auxz00_3123 = (long) (BgL_arg2644z00_1872);
													BgL_restz00_1871 =
														(BgL_offsetz00_1868 % BgL_auxz00_3123);
											}}
											{	/* Reduce/1occ.scm 66 */

												BgL_method3349z00_1861 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1866,
														(int) (BgL_modz00_1869)), (int) (BgL_restz00_1871));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3349z00_1861) (BgL_method3349z00_1861,
					(obj_t) (BgL_nodez00_2), BgL_1zd2expza2z70_3, BEOA);
			}
		}
	}



/* _node-1occ! */
	obj_t BGl__nodezd21occz12zc0zzreduce_1occz00(obj_t BgL_envz00_2656,
		obj_t BgL_nodez00_2657, obj_t BgL_1zd2expza2z70_2658)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 66 */
			return
				BGl_nodezd21occz12zc0zzreduce_1occz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2657), BgL_1zd2expza2z70_2658);
		}
	}



/* node-1occ!-default3348 */
	obj_t BGl_nodezd21occz12zd2default3348z12zzreduce_1occz00(BgL_nodez00_bglt
		BgL_nodez00_4, obj_t BgL_1zd2expza2z70_5)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
				BGl_string3646z00zzreduce_1occz00, (obj_t) (BgL_nodez00_4));
		}
	}



/* _node-1occ!-default3348 */
	obj_t BGl__nodezd21occz12zd2default3348z12zzreduce_1occz00(obj_t
		BgL_envz00_2659, obj_t BgL_nodez00_2660, obj_t BgL_1zd2expza2z70_2661)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			return
				BGl_nodezd21occz12zd2default3348z12zzreduce_1occz00(
				(BgL_nodez00_bglt) (BgL_nodez00_2660), BgL_1zd2expza2z70_2661);
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_1occz00()
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_atomz00zzast_nodez00,
				BGl_proc3647z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3648z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_varz00zzast_nodez00,
				BGl_proc3649z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_closurez00zzast_nodez00, BGl_proc3650z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3651z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3652z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3653z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_externz00zzast_nodez00, BGl_proc3654z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_castz00zzast_nodez00,
				BGl_proc3655z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_setqz00zzast_nodez00,
				BGl_proc3656z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3657z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_failz00zzast_nodez00,
				BGl_proc3658z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_selectz00zzast_nodez00, BGl_proc3659z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3660z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3661z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3662z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3663z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3664z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3665z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3666z00zzreduce_1occz00,
				BGl_string3645z00zzreduce_1occz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00, BGl_appz00zzast_nodez00,
				BGl_proc3667z00zzreduce_1occz00, BGl_string3645z00zzreduce_1occz00);
		}
	}



/* node-1occ!-app3392 */
	obj_t BGl_nodezd21occz12zd2app3392z12zzreduce_1occz00(obj_t BgL_envz00_2683,
		obj_t BgL_nodez00_2684, obj_t BgL_1zd2expza2z70_2685)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 383 */
			{
				BgL_appz00_bglt BgL_nodez00_1611;

				obj_t BgL_1zd2expza2z70_1612;

				{	/* Reduce/1occ.scm 384 */
					bool_t BgL_auxz00_3161;

					BgL_nodez00_1611 = (BgL_appz00_bglt) (BgL_nodez00_2684);
					BgL_1zd2expza2z70_1612 = BgL_1zd2expza2z70_2685;
					{	/* Reduce/1occ.scm 385 */
						obj_t BgL_resetz00_1616;

						{	/* Reduce/1occ.scm 385 */
							obj_t BgL_arg3585z00_1622;

							BgL_arg3585z00_1622 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1611))->BgL_argsz00);
							BgL_resetz00_1616 =
								BGl_nodezd21occza2z12z62zzreduce_1occz00(BgL_arg3585z00_1622,
								BgL_1zd2expza2z70_1612);
						}
						{	/* Reduce/1occ.scm 386 */
							bool_t BgL_testz00_3164;

							if (CBOOL(BgL_resetz00_1616))
								{	/* Reduce/1occ.scm 386 */
									BgL_testz00_3164 = ((bool_t) 1);
								}
							else
								{	/* Reduce/1occ.scm 386 */
									BgL_testz00_3164 =
										BGl_sidezd2effectzf3z21zzeffect_effectz00(
										(BgL_nodez00_bglt) (BgL_nodez00_1611));
								}
							if (BgL_testz00_3164)
								{	/* Reduce/1occ.scm 386 */
									{	/* Reduce/1occ.scm 390 */
										int BgL_auxz00_3169;

										BgL_auxz00_3169 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_3169);
									}
									{	/* Reduce/1occ.scm 390 */
										obj_t BgL_auxz00_3174;

										int BgL_auxz00_3172;

										BgL_auxz00_3174 = (obj_t) (BgL_nodez00_1611);
										BgL_auxz00_3172 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_3172, BgL_auxz00_3174);
									}
									BgL_auxz00_3161 = ((bool_t) 1);
								}
							else
								{	/* Reduce/1occ.scm 386 */
									{	/* Reduce/1occ.scm 391 */
										int BgL_auxz00_3177;

										BgL_auxz00_3177 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_3177);
									}
									{	/* Reduce/1occ.scm 391 */
										obj_t BgL_auxz00_3182;

										int BgL_auxz00_3180;

										BgL_auxz00_3182 = (obj_t) (BgL_nodez00_1611);
										BgL_auxz00_3180 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_3180, BgL_auxz00_3182);
									}
									BgL_auxz00_3161 = ((bool_t) 0);
					}}}
					return BBOOL(BgL_auxz00_3161);
				}
			}
		}
	}



/* node-1occ!-box-ref3390 */
	obj_t BGl_nodezd21occz12zd2boxzd2ref3390zc0zzreduce_1occz00(obj_t
		BgL_envz00_2686, obj_t BgL_nodez00_2687, obj_t BgL_1zd2expza2z70_2688)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 377 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1603;

				obj_t BgL_1zd2expza2z70_1604;

				{	/* Reduce/1occ.scm 378 */
					bool_t BgL_auxz00_3187;

					BgL_nodez00_1603 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2687);
					BgL_1zd2expza2z70_1604 = BgL_1zd2expza2z70_2688;
					{	/* Reduce/1occ.scm 378 */
						int BgL_auxz00_3188;

						BgL_auxz00_3188 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3188);
					}
					{	/* Reduce/1occ.scm 378 */
						obj_t BgL_auxz00_3193;

						int BgL_auxz00_3191;

						BgL_auxz00_3193 = (obj_t) (BgL_nodez00_1603);
						BgL_auxz00_3191 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3191, BgL_auxz00_3193);
					}
					BgL_auxz00_3187 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_3187);
				}
			}
		}
	}



/* node-1occ!-box-set!3388 */
	obj_t BGl_nodezd21occz12zd2boxzd2setz123388zd2zzreduce_1occz00(obj_t
		BgL_envz00_2689, obj_t BgL_nodez00_2690, obj_t BgL_1zd2expza2z70_2691)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 367 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1591;

				obj_t BgL_1zd2expza2z70_1592;

				BgL_nodez00_1591 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2690);
				BgL_1zd2expza2z70_1592 = BgL_1zd2expza2z70_2691;
				{	/* Reduce/1occ.scm 369 */
					obj_t BgL_resetz00_1596;

					{	/* Reduce/1occ.scm 370 */
						BgL_nodez00_bglt BgL_arg3581z00_1600;

						BgL_arg3581z00_1600 =
							(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1591))->
							BgL_valuez00);
						{	/* Reduce/1occ.scm 370 */
							obj_t BgL_method3349z00_2611;

							{	/* Reduce/1occ.scm 370 */
								BgL_objectz00_bglt BgL_objz00_2612;

								BgL_objz00_2612 = (BgL_objectz00_bglt) (BgL_arg3581z00_1600);
								{	/* Reduce/1occ.scm 370 */
									long BgL_objzd2classzd2numz00_2613;

									BgL_objzd2classzd2numz00_2613 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2612);
									{	/* Reduce/1occ.scm 370 */
										obj_t BgL_arg2643z00_2614;

										BgL_arg2643z00_2614 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 370 */
											obj_t BgL_arrayz00_2616;

											int BgL_offsetz00_2617;

											BgL_arrayz00_2616 = BgL_arg2643z00_2614;
											BgL_offsetz00_2617 =
												(int) (BgL_objzd2classzd2numz00_2613);
											{	/* Reduce/1occ.scm 370 */
												long BgL_offsetz00_2618;

												BgL_offsetz00_2618 =
													((long) (BgL_offsetz00_2617) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 370 */
													long BgL_modz00_2619;

													{	/* Reduce/1occ.scm 370 */
														int BgL_arg2645z00_2620;

														BgL_arg2645z00_2620 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 370 */
															long BgL_auxz00_3207;

															BgL_auxz00_3207 = (long) (BgL_arg2645z00_2620);
															BgL_modz00_2619 =
																(BgL_offsetz00_2618 / BgL_auxz00_3207);
													}}
													{	/* Reduce/1occ.scm 370 */
														long BgL_restz00_2621;

														{	/* Reduce/1occ.scm 370 */
															int BgL_arg2644z00_2622;

															BgL_arg2644z00_2622 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 370 */
																long BgL_auxz00_3211;

																BgL_auxz00_3211 = (long) (BgL_arg2644z00_2622);
																BgL_restz00_2621 =
																	(BgL_offsetz00_2618 % BgL_auxz00_3211);
														}}
														{	/* Reduce/1occ.scm 370 */

															BgL_method3349z00_2611 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2616,
																	(int) (BgL_modz00_2619)),
																(int) (BgL_restz00_2621));
							}}}}}}}}
							BgL_resetz00_1596 =
								PROCEDURE_ENTRY(BgL_method3349z00_2611) (BgL_method3349z00_2611,
								(obj_t) (BgL_arg3581z00_1600), BgL_1zd2expza2z70_1592, BEOA);
					}}
					{	/* Reduce/1occ.scm 372 */
						obj_t BgL_nvaluez00_1597;

						{	/* Reduce/1occ.scm 372 */
							int BgL_auxz00_3221;

							BgL_auxz00_3221 = (int) (((long) 1));
							BgL_nvaluez00_1597 = BGL_MVALUES_VAL(BgL_auxz00_3221);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3224;

							BgL_auxz00_3224 = (BgL_nodez00_bglt) (BgL_nvaluez00_1597);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1591))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3224), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 372 */
							int BgL_auxz00_3227;

							BgL_auxz00_3227 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3227);
						}
						{	/* Reduce/1occ.scm 372 */
							obj_t BgL_auxz00_3232;

							int BgL_auxz00_3230;

							BgL_auxz00_3232 = (obj_t) (BgL_nodez00_1591);
							BgL_auxz00_3230 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3230, BgL_auxz00_3232);
						}
						return BgL_resetz00_1596;
					}
				}
			}
		}
	}



/* node-1occ!-make-box3386 */
	obj_t BGl_nodezd21occz12zd2makezd2box3386zc0zzreduce_1occz00(obj_t
		BgL_envz00_2692, obj_t BgL_nodez00_2693, obj_t BgL_1zd2expza2z70_2694)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 357 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1579;

				obj_t BgL_1zd2expza2z70_1580;

				BgL_nodez00_1579 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2693);
				BgL_1zd2expza2z70_1580 = BgL_1zd2expza2z70_2694;
				{	/* Reduce/1occ.scm 359 */
					obj_t BgL_resetz00_1584;

					{	/* Reduce/1occ.scm 360 */
						BgL_nodez00_bglt BgL_arg3579z00_1588;

						BgL_arg3579z00_1588 =
							(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1579))->BgL_valuez00);
						{	/* Reduce/1occ.scm 360 */
							obj_t BgL_method3349z00_2577;

							{	/* Reduce/1occ.scm 360 */
								BgL_objectz00_bglt BgL_objz00_2578;

								BgL_objz00_2578 = (BgL_objectz00_bglt) (BgL_arg3579z00_1588);
								{	/* Reduce/1occ.scm 360 */
									long BgL_objzd2classzd2numz00_2579;

									BgL_objzd2classzd2numz00_2579 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2578);
									{	/* Reduce/1occ.scm 360 */
										obj_t BgL_arg2643z00_2580;

										BgL_arg2643z00_2580 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 360 */
											obj_t BgL_arrayz00_2582;

											int BgL_offsetz00_2583;

											BgL_arrayz00_2582 = BgL_arg2643z00_2580;
											BgL_offsetz00_2583 =
												(int) (BgL_objzd2classzd2numz00_2579);
											{	/* Reduce/1occ.scm 360 */
												long BgL_offsetz00_2584;

												BgL_offsetz00_2584 =
													((long) (BgL_offsetz00_2583) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 360 */
													long BgL_modz00_2585;

													{	/* Reduce/1occ.scm 360 */
														int BgL_arg2645z00_2586;

														BgL_arg2645z00_2586 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 360 */
															long BgL_auxz00_3245;

															BgL_auxz00_3245 = (long) (BgL_arg2645z00_2586);
															BgL_modz00_2585 =
																(BgL_offsetz00_2584 / BgL_auxz00_3245);
													}}
													{	/* Reduce/1occ.scm 360 */
														long BgL_restz00_2587;

														{	/* Reduce/1occ.scm 360 */
															int BgL_arg2644z00_2588;

															BgL_arg2644z00_2588 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 360 */
																long BgL_auxz00_3249;

																BgL_auxz00_3249 = (long) (BgL_arg2644z00_2588);
																BgL_restz00_2587 =
																	(BgL_offsetz00_2584 % BgL_auxz00_3249);
														}}
														{	/* Reduce/1occ.scm 360 */

															BgL_method3349z00_2577 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2582,
																	(int) (BgL_modz00_2585)),
																(int) (BgL_restz00_2587));
							}}}}}}}}
							BgL_resetz00_1584 =
								PROCEDURE_ENTRY(BgL_method3349z00_2577) (BgL_method3349z00_2577,
								(obj_t) (BgL_arg3579z00_1588), BgL_1zd2expza2z70_1580, BEOA);
					}}
					{	/* Reduce/1occ.scm 362 */
						obj_t BgL_nvaluez00_1585;

						{	/* Reduce/1occ.scm 362 */
							int BgL_auxz00_3259;

							BgL_auxz00_3259 = (int) (((long) 1));
							BgL_nvaluez00_1585 = BGL_MVALUES_VAL(BgL_auxz00_3259);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3262;

							BgL_auxz00_3262 = (BgL_nodez00_bglt) (BgL_nvaluez00_1585);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1579))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3262), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 362 */
							int BgL_auxz00_3265;

							BgL_auxz00_3265 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3265);
						}
						{	/* Reduce/1occ.scm 362 */
							obj_t BgL_auxz00_3270;

							int BgL_auxz00_3268;

							BgL_auxz00_3270 = (obj_t) (BgL_nodez00_1579);
							BgL_auxz00_3268 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3268, BgL_auxz00_3270);
						}
						return BgL_resetz00_1584;
					}
				}
			}
		}
	}



/* node-1occ!-jump-ex-i3384 */
	obj_t BGl_nodezd21occz12zd2jumpzd2exzd2i3384z12zzreduce_1occz00(obj_t
		BgL_envz00_2695, obj_t BgL_nodez00_2696, obj_t BgL_1zd2expza2z70_2697)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 343 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1562;

				obj_t BgL_1zd2expza2z70_1563;

				BgL_nodez00_1562 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2696);
				BgL_1zd2expza2z70_1563 = BgL_1zd2expza2z70_2697;
				{	/* Reduce/1occ.scm 345 */
					obj_t BgL_resetz00_1567;

					{	/* Reduce/1occ.scm 346 */
						BgL_nodez00_bglt BgL_arg3577z00_1576;

						BgL_arg3577z00_1576 =
							(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1562))->
							BgL_exitz00);
						{	/* Reduce/1occ.scm 346 */
							obj_t BgL_method3349z00_2512;

							{	/* Reduce/1occ.scm 346 */
								BgL_objectz00_bglt BgL_objz00_2513;

								BgL_objz00_2513 = (BgL_objectz00_bglt) (BgL_arg3577z00_1576);
								{	/* Reduce/1occ.scm 346 */
									long BgL_objzd2classzd2numz00_2514;

									BgL_objzd2classzd2numz00_2514 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2513);
									{	/* Reduce/1occ.scm 346 */
										obj_t BgL_arg2643z00_2515;

										BgL_arg2643z00_2515 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 346 */
											obj_t BgL_arrayz00_2517;

											int BgL_offsetz00_2518;

											BgL_arrayz00_2517 = BgL_arg2643z00_2515;
											BgL_offsetz00_2518 =
												(int) (BgL_objzd2classzd2numz00_2514);
											{	/* Reduce/1occ.scm 346 */
												long BgL_offsetz00_2519;

												BgL_offsetz00_2519 =
													((long) (BgL_offsetz00_2518) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 346 */
													long BgL_modz00_2520;

													{	/* Reduce/1occ.scm 346 */
														int BgL_arg2645z00_2521;

														BgL_arg2645z00_2521 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 346 */
															long BgL_auxz00_3283;

															BgL_auxz00_3283 = (long) (BgL_arg2645z00_2521);
															BgL_modz00_2520 =
																(BgL_offsetz00_2519 / BgL_auxz00_3283);
													}}
													{	/* Reduce/1occ.scm 346 */
														long BgL_restz00_2522;

														{	/* Reduce/1occ.scm 346 */
															int BgL_arg2644z00_2523;

															BgL_arg2644z00_2523 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 346 */
																long BgL_auxz00_3287;

																BgL_auxz00_3287 = (long) (BgL_arg2644z00_2523);
																BgL_restz00_2522 =
																	(BgL_offsetz00_2519 % BgL_auxz00_3287);
														}}
														{	/* Reduce/1occ.scm 346 */

															BgL_method3349z00_2512 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2517,
																	(int) (BgL_modz00_2520)),
																(int) (BgL_restz00_2522));
							}}}}}}}}
							BgL_resetz00_1567 =
								PROCEDURE_ENTRY(BgL_method3349z00_2512) (BgL_method3349z00_2512,
								(obj_t) (BgL_arg3577z00_1576), BgL_1zd2expza2z70_1563, BEOA);
					}}
					{	/* Reduce/1occ.scm 352 */
						obj_t BgL_nexitz00_1568;

						{	/* Reduce/1occ.scm 352 */
							int BgL_auxz00_3297;

							BgL_auxz00_3297 = (int) (((long) 1));
							BgL_nexitz00_1568 = BGL_MVALUES_VAL(BgL_auxz00_3297);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3300;

							BgL_auxz00_3300 = (BgL_nodez00_bglt) (BgL_nexitz00_1568);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1562))->
									BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_3300), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 348 */
							obj_t BgL_1zd2expza2z72z02_1569;

							if (CBOOL(BgL_resetz00_1567))
								{	/* Reduce/1occ.scm 348 */
									BgL_1zd2expza2z72z02_1569 = BNIL;
								}
							else
								{	/* Reduce/1occ.scm 348 */
									BgL_1zd2expza2z72z02_1569 = BgL_1zd2expza2z70_1563;
								}
							{	/* Reduce/1occ.scm 349 */
								obj_t BgL_resetz72z72_1570;

								{	/* Reduce/1occ.scm 350 */
									BgL_nodez00_bglt BgL_arg3576z00_1575;

									BgL_arg3576z00_1575 =
										(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1562))->
										BgL_valuez00);
									{	/* Reduce/1occ.scm 350 */
										obj_t BgL_method3349z00_2543;

										{	/* Reduce/1occ.scm 350 */
											BgL_objectz00_bglt BgL_objz00_2544;

											BgL_objz00_2544 =
												(BgL_objectz00_bglt) (BgL_arg3576z00_1575);
											{	/* Reduce/1occ.scm 350 */
												long BgL_objzd2classzd2numz00_2545;

												BgL_objzd2classzd2numz00_2545 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2544);
												{	/* Reduce/1occ.scm 350 */
													obj_t BgL_arg2643z00_2546;

													BgL_arg2643z00_2546 =
														PROCEDURE_REF
														(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
														(int) (((long) 1)));
													{	/* Reduce/1occ.scm 350 */
														obj_t BgL_arrayz00_2548;

														int BgL_offsetz00_2549;

														BgL_arrayz00_2548 = BgL_arg2643z00_2546;
														BgL_offsetz00_2549 =
															(int) (BgL_objzd2classzd2numz00_2545);
														{	/* Reduce/1occ.scm 350 */
															long BgL_offsetz00_2550;

															BgL_offsetz00_2550 =
																((long) (BgL_offsetz00_2549) - OBJECT_TYPE);
															{	/* Reduce/1occ.scm 350 */
																long BgL_modz00_2551;

																{	/* Reduce/1occ.scm 350 */
																	int BgL_arg2645z00_2552;

																	BgL_arg2645z00_2552 = (int) (((long) 16));
																	{	/* Reduce/1occ.scm 350 */
																		long BgL_auxz00_3314;

																		BgL_auxz00_3314 =
																			(long) (BgL_arg2645z00_2552);
																		BgL_modz00_2551 =
																			(BgL_offsetz00_2550 / BgL_auxz00_3314);
																}}
																{	/* Reduce/1occ.scm 350 */
																	long BgL_restz00_2553;

																	{	/* Reduce/1occ.scm 350 */
																		int BgL_arg2644z00_2554;

																		BgL_arg2644z00_2554 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 350 */
																			long BgL_auxz00_3318;

																			BgL_auxz00_3318 =
																				(long) (BgL_arg2644z00_2554);
																			BgL_restz00_2553 =
																				(BgL_offsetz00_2550 % BgL_auxz00_3318);
																	}}
																	{	/* Reduce/1occ.scm 350 */

																		BgL_method3349z00_2543 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2548,
																				(int) (BgL_modz00_2551)),
																			(int) (BgL_restz00_2553));
										}}}}}}}}
										BgL_resetz72z72_1570 =
											PROCEDURE_ENTRY(BgL_method3349z00_2543)
											(BgL_method3349z00_2543, (obj_t) (BgL_arg3576z00_1575),
											BgL_1zd2expza2z72z02_1569, BEOA);
								}}
								{	/* Reduce/1occ.scm 352 */
									obj_t BgL_nvaluez00_1571;

									{	/* Reduce/1occ.scm 352 */
										int BgL_auxz00_3328;

										BgL_auxz00_3328 = (int) (((long) 1));
										BgL_nvaluez00_1571 = BGL_MVALUES_VAL(BgL_auxz00_3328);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3331;

										BgL_auxz00_3331 = (BgL_nodez00_bglt) (BgL_nvaluez00_1571);
										((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1562))->
												BgL_valuez00) =
											((BgL_nodez00_bglt) BgL_auxz00_3331), BUNSPEC);
									}
									{	/* Reduce/1occ.scm 352 */
										obj_t BgL_val0_3336z00_1572;

										if (CBOOL(BgL_resetz00_1567))
											{	/* Reduce/1occ.scm 352 */
												BgL_val0_3336z00_1572 = BgL_resetz00_1567;
											}
										else
											{	/* Reduce/1occ.scm 352 */
												BgL_val0_3336z00_1572 = BgL_resetz72z72_1570;
											}
										{	/* Reduce/1occ.scm 352 */
											int BgL_auxz00_3336;

											BgL_auxz00_3336 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3336);
										}
										{	/* Reduce/1occ.scm 352 */
											obj_t BgL_auxz00_3341;

											int BgL_auxz00_3339;

											BgL_auxz00_3341 = (obj_t) (BgL_nodez00_1562);
											BgL_auxz00_3339 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3339, BgL_auxz00_3341);
										}
										return BgL_val0_3336z00_1572;
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* node-1occ!-set-ex-it3382 */
	obj_t BGl_nodezd21occz12zd2setzd2exzd2it3382z12zzreduce_1occz00(obj_t
		BgL_envz00_2698, obj_t BgL_nodez00_2699, obj_t BgL_1zd2expza2z70_2700)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 333 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1550;

				obj_t BgL_1zd2expza2z70_1551;

				BgL_nodez00_1550 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2699);
				BgL_1zd2expza2z70_1551 = BgL_1zd2expza2z70_2700;
				{	/* Reduce/1occ.scm 335 */
					obj_t BgL_resetz00_1555;

					{	/* Reduce/1occ.scm 336 */
						BgL_nodez00_bglt BgL_arg3574z00_1559;

						BgL_arg3574z00_1559 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1550))->
							BgL_bodyz00);
						{	/* Reduce/1occ.scm 336 */
							obj_t BgL_method3349z00_2478;

							{	/* Reduce/1occ.scm 336 */
								BgL_objectz00_bglt BgL_objz00_2479;

								BgL_objz00_2479 = (BgL_objectz00_bglt) (BgL_arg3574z00_1559);
								{	/* Reduce/1occ.scm 336 */
									long BgL_objzd2classzd2numz00_2480;

									BgL_objzd2classzd2numz00_2480 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2479);
									{	/* Reduce/1occ.scm 336 */
										obj_t BgL_arg2643z00_2481;

										BgL_arg2643z00_2481 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 336 */
											obj_t BgL_arrayz00_2483;

											int BgL_offsetz00_2484;

											BgL_arrayz00_2483 = BgL_arg2643z00_2481;
											BgL_offsetz00_2484 =
												(int) (BgL_objzd2classzd2numz00_2480);
											{	/* Reduce/1occ.scm 336 */
												long BgL_offsetz00_2485;

												BgL_offsetz00_2485 =
													((long) (BgL_offsetz00_2484) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 336 */
													long BgL_modz00_2486;

													{	/* Reduce/1occ.scm 336 */
														int BgL_arg2645z00_2487;

														BgL_arg2645z00_2487 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 336 */
															long BgL_auxz00_3354;

															BgL_auxz00_3354 = (long) (BgL_arg2645z00_2487);
															BgL_modz00_2486 =
																(BgL_offsetz00_2485 / BgL_auxz00_3354);
													}}
													{	/* Reduce/1occ.scm 336 */
														long BgL_restz00_2488;

														{	/* Reduce/1occ.scm 336 */
															int BgL_arg2644z00_2489;

															BgL_arg2644z00_2489 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 336 */
																long BgL_auxz00_3358;

																BgL_auxz00_3358 = (long) (BgL_arg2644z00_2489);
																BgL_restz00_2488 =
																	(BgL_offsetz00_2485 % BgL_auxz00_3358);
														}}
														{	/* Reduce/1occ.scm 336 */

															BgL_method3349z00_2478 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2483,
																	(int) (BgL_modz00_2486)),
																(int) (BgL_restz00_2488));
							}}}}}}}}
							BgL_resetz00_1555 =
								PROCEDURE_ENTRY(BgL_method3349z00_2478) (BgL_method3349z00_2478,
								(obj_t) (BgL_arg3574z00_1559), BgL_1zd2expza2z70_1551, BEOA);
					}}
					{	/* Reduce/1occ.scm 338 */
						obj_t BgL_nbodyz00_1556;

						{	/* Reduce/1occ.scm 338 */
							int BgL_auxz00_3368;

							BgL_auxz00_3368 = (int) (((long) 1));
							BgL_nbodyz00_1556 = BGL_MVALUES_VAL(BgL_auxz00_3368);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3371;

							BgL_auxz00_3371 = (BgL_nodez00_bglt) (BgL_nbodyz00_1556);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1550))->
									BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_3371), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 338 */
							int BgL_auxz00_3374;

							BgL_auxz00_3374 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3374);
						}
						{	/* Reduce/1occ.scm 338 */
							obj_t BgL_auxz00_3379;

							int BgL_auxz00_3377;

							BgL_auxz00_3379 = (obj_t) (BgL_nodez00_1550);
							BgL_auxz00_3377 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3377, BgL_auxz00_3379);
						}
						return BgL_resetz00_1555;
					}
				}
			}
		}
	}



/* node-1occ!-let-var3380 */
	obj_t BGl_nodezd21occz12zd2letzd2var3380zc0zzreduce_1occz00(obj_t
		BgL_envz00_2701, obj_t BgL_nodez00_2702, obj_t BgL_1zd2expza2z70_2703)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 232 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1519;

				obj_t BgL_1zd2expza2z70_1520;

				BgL_nodez00_1519 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2702);
				BgL_1zd2expza2z70_1520 = BgL_1zd2expza2z70_2703;
				{	/* Reduce/1occ.scm 238 */
					bool_t BgL_testz00_3383;

					{	/* Reduce/1occ.scm 238 */
						bool_t BgL_testz00_3384;

						{	/* Reduce/1occ.scm 238 */
							obj_t BgL_auxz00_3385;

							BgL_auxz00_3385 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1519))->
								BgL_bindingsz00);
							BgL_testz00_3384 = PAIRP(BgL_auxz00_3385);
						}
						if (BgL_testz00_3384)
							{	/* Reduce/1occ.scm 239 */
								bool_t BgL_testz00_3388;

								{	/* Reduce/1occ.scm 239 */
									obj_t BgL_auxz00_3389;

									{	/* Reduce/1occ.scm 239 */
										obj_t BgL_pairz00_2421;

										BgL_pairz00_2421 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1519))->
											BgL_bindingsz00);
										BgL_auxz00_3389 = CDR(BgL_pairz00_2421);
									}
									BgL_testz00_3388 = NULLP(BgL_auxz00_3389);
								}
								if (BgL_testz00_3388)
									{	/* Reduce/1occ.scm 240 */
										obj_t BgL_varz00_1531;

										{	/* Reduce/1occ.scm 240 */
											obj_t BgL_pairz00_2424;

											BgL_pairz00_2424 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1519))->
												BgL_bindingsz00);
											BgL_varz00_1531 = CAR(CAR(BgL_pairz00_2424));
										}
										{	/* Reduce/1occ.scm 241 */
											bool_t BgL_testz00_3396;

											{	/* Reduce/1occ.scm 241 */
												long BgL_auxz00_3397;

												{
													BgL_variablez00_bglt BgL_auxz00_3398;

													BgL_auxz00_3398 =
														(BgL_variablez00_bglt) (BgL_varz00_1531);
													BgL_auxz00_3397 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_3398))->
														BgL_occurrencez00);
												}
												BgL_testz00_3396 = (BgL_auxz00_3397 == ((long) 1));
											}
											if (BgL_testz00_3396)
												{	/* Reduce/1occ.scm 242 */
													bool_t BgL_testz00_3402;

													{	/* Reduce/1occ.scm 242 */
														BgL_typez00_bglt BgL_arg3566z00_1541;

														{
															BgL_variablez00_bglt BgL_auxz00_3403;

															BgL_auxz00_3403 =
																(BgL_variablez00_bglt) (BgL_varz00_1531);
															BgL_arg3566z00_1541 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3403))->BgL_typez00);
														}
														BgL_testz00_3402 =
															(
															(obj_t) (BgL_arg3566z00_1541) ==
															BGl_za2boolza2z00zztype_cachez00);
													}
													if (BgL_testz00_3402)
														{	/* Reduce/1occ.scm 243 */
															bool_t BgL_testz00_3408;

															{	/* Reduce/1occ.scm 243 */
																BgL_nodez00_bglt BgL_arg3565z00_1540;

																BgL_arg3565z00_1540 =
																	(((BgL_letzd2varzd2_bglt)
																		CREF(BgL_nodez00_1519))->BgL_bodyz00);
																{	/* Reduce/1occ.scm 243 */
																	obj_t BgL_obj2945z00_2433;

																	BgL_obj2945z00_2433 =
																		(obj_t) (BgL_arg3565z00_1540);
																	BgL_testz00_3408 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2945z00_2433,
																		BGl_conditionalz00zzast_nodez00);
																}
															}
															if (BgL_testz00_3408)
																{	/* Reduce/1occ.scm 244 */
																	BgL_nodez00_bglt BgL_instance3276z00_1535;

																	BgL_instance3276z00_1535 =
																		(((BgL_letzd2varzd2_bglt)
																			CREF(BgL_nodez00_1519))->BgL_bodyz00);
																	{	/* Reduce/1occ.scm 245 */
																		bool_t BgL_testz00_3413;

																		{	/* Reduce/1occ.scm 245 */
																			BgL_nodez00_bglt BgL_arg3564z00_1539;

																			{
																				BgL_conditionalz00_bglt BgL_auxz00_3414;

																				BgL_auxz00_3414 =
																					(BgL_conditionalz00_bglt)
																					(BgL_instance3276z00_1535);
																				BgL_arg3564z00_1539 =
																					(((BgL_conditionalz00_bglt)
																						CREF(BgL_auxz00_3414))->
																					BgL_testz00);
																			}
																			{	/* Reduce/1occ.scm 245 */
																				obj_t BgL_obj2170z00_2436;

																				BgL_obj2170z00_2436 =
																					(obj_t) (BgL_arg3564z00_1539);
																				BgL_testz00_3413 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj2170z00_2436,
																					BGl_varz00zzast_nodez00);
																			}
																		}
																		if (BgL_testz00_3413)
																			{	/* Reduce/1occ.scm 246 */
																				obj_t BgL_auxz00_3419;

																				{	/* Reduce/1occ.scm 246 */
																					BgL_variablez00_bglt BgL_auxz00_3420;

																					{	/* Reduce/1occ.scm 246 */
																						BgL_varz00_bglt BgL_obj2155z00_2438;

																						{	/* Reduce/1occ.scm 246 */
																							BgL_conditionalz00_bglt
																								BgL_obj2912z00_2437;
																							BgL_obj2912z00_2437 =
																								(BgL_conditionalz00_bglt)
																								(BgL_instance3276z00_1535);
																							BgL_obj2155z00_2438 =
																								(BgL_varz00_bglt) (((
																										(BgL_conditionalz00_bglt)
																										CREF(BgL_obj2912z00_2437))->
																									BgL_testz00));
																						}
																						BgL_auxz00_3420 =
																							(((BgL_varz00_bglt)
																								CREF(BgL_obj2155z00_2438))->
																							BgL_variablez00);
																					}
																					BgL_auxz00_3419 =
																						(obj_t) (BgL_auxz00_3420);
																				}
																				BgL_testz00_3383 =
																					(BgL_auxz00_3419 == BgL_varz00_1531);
																			}
																		else
																			{	/* Reduce/1occ.scm 245 */
																				BgL_testz00_3383 = ((bool_t) 0);
																			}
																	}
																}
															else
																{	/* Reduce/1occ.scm 243 */
																	BgL_testz00_3383 = ((bool_t) 0);
																}
														}
													else
														{	/* Reduce/1occ.scm 242 */
															BgL_testz00_3383 = ((bool_t) 0);
														}
												}
											else
												{	/* Reduce/1occ.scm 241 */
													BgL_testz00_3383 = ((bool_t) 0);
												}
										}
									}
								else
									{	/* Reduce/1occ.scm 239 */
										BgL_testz00_3383 = ((bool_t) 0);
									}
							}
						else
							{	/* Reduce/1occ.scm 238 */
								BgL_testz00_3383 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3383)
						{	/* Reduce/1occ.scm 248 */
							BgL_nodez00_bglt BgL_instance3279z00_1525;

							BgL_instance3279z00_1525 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1519))->BgL_bodyz00);
							{	/* Reduce/1occ.scm 249 */
								obj_t BgL_arg3557z00_1526;

								{	/* Reduce/1occ.scm 249 */
									obj_t BgL_pairz00_2441;

									BgL_pairz00_2441 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1519))->
										BgL_bindingsz00);
									BgL_arg3557z00_1526 = CDR(CAR(BgL_pairz00_2441));
								}
								{
									BgL_nodez00_bglt BgL_auxz00_3433;

									BgL_conditionalz00_bglt BgL_auxz00_3431;

									BgL_auxz00_3433 = (BgL_nodez00_bglt) (BgL_arg3557z00_1526);
									BgL_auxz00_3431 =
										(BgL_conditionalz00_bglt) (BgL_instance3279z00_1525);
									((((BgL_conditionalz00_bglt) CREF(BgL_auxz00_3431))->
											BgL_testz00) =
										((BgL_nodez00_bglt) BgL_auxz00_3433), BUNSPEC);
								}
							}
							{	/* Reduce/1occ.scm 250 */
								BgL_nodez00_bglt BgL_arg3559z00_1528;

								BgL_arg3559z00_1528 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1519))->
									BgL_bodyz00);
								{	/* Reduce/1occ.scm 250 */
									obj_t BgL_method3349z00_2450;

									{	/* Reduce/1occ.scm 250 */
										BgL_objectz00_bglt BgL_objz00_2451;

										BgL_objz00_2451 =
											(BgL_objectz00_bglt) (BgL_arg3559z00_1528);
										{	/* Reduce/1occ.scm 250 */
											long BgL_objzd2classzd2numz00_2452;

											BgL_objzd2classzd2numz00_2452 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2451);
											{	/* Reduce/1occ.scm 250 */
												obj_t BgL_arg2643z00_2453;

												BgL_arg2643z00_2453 =
													PROCEDURE_REF
													(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
													(int) (((long) 1)));
												{	/* Reduce/1occ.scm 250 */
													obj_t BgL_arrayz00_2455;

													int BgL_offsetz00_2456;

													BgL_arrayz00_2455 = BgL_arg2643z00_2453;
													BgL_offsetz00_2456 =
														(int) (BgL_objzd2classzd2numz00_2452);
													{	/* Reduce/1occ.scm 250 */
														long BgL_offsetz00_2457;

														BgL_offsetz00_2457 =
															((long) (BgL_offsetz00_2456) - OBJECT_TYPE);
														{	/* Reduce/1occ.scm 250 */
															long BgL_modz00_2458;

															{	/* Reduce/1occ.scm 250 */
																int BgL_arg2645z00_2459;

																BgL_arg2645z00_2459 = (int) (((long) 16));
																{	/* Reduce/1occ.scm 250 */
																	long BgL_auxz00_3445;

																	BgL_auxz00_3445 =
																		(long) (BgL_arg2645z00_2459);
																	BgL_modz00_2458 =
																		(BgL_offsetz00_2457 / BgL_auxz00_3445);
															}}
															{	/* Reduce/1occ.scm 250 */
																long BgL_restz00_2460;

																{	/* Reduce/1occ.scm 250 */
																	int BgL_arg2644z00_2461;

																	BgL_arg2644z00_2461 = (int) (((long) 16));
																	{	/* Reduce/1occ.scm 250 */
																		long BgL_auxz00_3449;

																		BgL_auxz00_3449 =
																			(long) (BgL_arg2644z00_2461);
																		BgL_restz00_2460 =
																			(BgL_offsetz00_2457 % BgL_auxz00_3449);
																}}
																{	/* Reduce/1occ.scm 250 */

																	BgL_method3349z00_2450 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2455,
																			(int) (BgL_modz00_2458)),
																		(int) (BgL_restz00_2460));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3349z00_2450)
										(BgL_method3349z00_2450, (obj_t) (BgL_arg3559z00_1528),
										BgL_1zd2expza2z70_1520, BEOA);
								}
							}
						}
					else
						{	/* Reduce/1occ.scm 238 */
							return
								BGl_nodezd21occzd2letzd2varz12zc0zzreduce_1occz00
								(BgL_nodez00_1519, BgL_1zd2expza2z70_1520);
						}
				}
			}
		}
	}



/* node-1occ!-let-fun3378 */
	obj_t BGl_nodezd21occz12zd2letzd2fun3378zc0zzreduce_1occz00(obj_t
		BgL_envz00_2704, obj_t BgL_nodez00_2705, obj_t BgL_1zd2expza2z70_2706)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 213 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1491;

				obj_t BgL_1zd2expza2z70_1492;

				BgL_nodez00_1491 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2705);
				BgL_1zd2expza2z70_1492 = BgL_1zd2expza2z70_2706;
				{	/* Reduce/1occ.scm 215 */
					obj_t BgL_resetz00_1496;

					{	/* Reduce/1occ.scm 216 */
						BgL_nodez00_bglt BgL_arg3554z00_1516;

						BgL_arg3554z00_1516 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1491))->BgL_bodyz00);
						{	/* Reduce/1occ.scm 216 */
							obj_t BgL_method3349z00_2351;

							{	/* Reduce/1occ.scm 216 */
								BgL_objectz00_bglt BgL_objz00_2352;

								BgL_objz00_2352 = (BgL_objectz00_bglt) (BgL_arg3554z00_1516);
								{	/* Reduce/1occ.scm 216 */
									long BgL_objzd2classzd2numz00_2353;

									BgL_objzd2classzd2numz00_2353 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2352);
									{	/* Reduce/1occ.scm 216 */
										obj_t BgL_arg2643z00_2354;

										BgL_arg2643z00_2354 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 216 */
											obj_t BgL_arrayz00_2356;

											int BgL_offsetz00_2357;

											BgL_arrayz00_2356 = BgL_arg2643z00_2354;
											BgL_offsetz00_2357 =
												(int) (BgL_objzd2classzd2numz00_2353);
											{	/* Reduce/1occ.scm 216 */
												long BgL_offsetz00_2358;

												BgL_offsetz00_2358 =
													((long) (BgL_offsetz00_2357) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 216 */
													long BgL_modz00_2359;

													{	/* Reduce/1occ.scm 216 */
														int BgL_arg2645z00_2360;

														BgL_arg2645z00_2360 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 216 */
															long BgL_auxz00_3470;

															BgL_auxz00_3470 = (long) (BgL_arg2645z00_2360);
															BgL_modz00_2359 =
																(BgL_offsetz00_2358 / BgL_auxz00_3470);
													}}
													{	/* Reduce/1occ.scm 216 */
														long BgL_restz00_2361;

														{	/* Reduce/1occ.scm 216 */
															int BgL_arg2644z00_2362;

															BgL_arg2644z00_2362 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 216 */
																long BgL_auxz00_3474;

																BgL_auxz00_3474 = (long) (BgL_arg2644z00_2362);
																BgL_restz00_2361 =
																	(BgL_offsetz00_2358 % BgL_auxz00_3474);
														}}
														{	/* Reduce/1occ.scm 216 */

															BgL_method3349z00_2351 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2356,
																	(int) (BgL_modz00_2359)),
																(int) (BgL_restz00_2361));
							}}}}}}}}
							BgL_resetz00_1496 =
								PROCEDURE_ENTRY(BgL_method3349z00_2351) (BgL_method3349z00_2351,
								(obj_t) (BgL_arg3554z00_1516), BgL_1zd2expza2z70_1492, BEOA);
					}}
					{	/* Reduce/1occ.scm 227 */
						obj_t BgL_nbodyz00_1497;

						{	/* Reduce/1occ.scm 227 */
							int BgL_auxz00_3484;

							BgL_auxz00_3484 = (int) (((long) 1));
							BgL_nbodyz00_1497 = BGL_MVALUES_VAL(BgL_auxz00_3484);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3487;

							BgL_auxz00_3487 = (BgL_nodez00_bglt) (BgL_nbodyz00_1497);
							((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1491))->BgL_bodyz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3487), BUNSPEC);
						}
						{
							obj_t BgL_localsz00_1500;

							obj_t BgL_resetz00_1501;

							{	/* Reduce/1occ.scm 218 */
								obj_t BgL_arg3547z00_1499;

								BgL_arg3547z00_1499 =
									(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1491))->
									BgL_localsz00);
								BgL_localsz00_1500 = BgL_arg3547z00_1499;
								BgL_resetz00_1501 = BgL_resetz00_1496;
							BgL_zc3anonymousza33548ze3z83_1502:
								if (NULLP(BgL_localsz00_1500))
									{	/* Reduce/1occ.scm 220 */
										{	/* Reduce/1occ.scm 221 */
											int BgL_auxz00_3493;

											BgL_auxz00_3493 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3493);
										}
										{	/* Reduce/1occ.scm 221 */
											obj_t BgL_auxz00_3498;

											int BgL_auxz00_3496;

											BgL_auxz00_3498 = (obj_t) (BgL_nodez00_1491);
											BgL_auxz00_3496 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3496, BgL_auxz00_3498);
										}
										return BgL_resetz00_1501;
									}
								else
									{	/* Reduce/1occ.scm 222 */
										obj_t BgL_localz00_1506;

										BgL_localz00_1506 = CAR(BgL_localsz00_1500);
										{	/* Reduce/1occ.scm 222 */
											BgL_valuez00_bglt BgL_sfunz00_1507;

											{
												BgL_variablez00_bglt BgL_auxz00_3502;

												BgL_auxz00_3502 =
													(BgL_variablez00_bglt) (BgL_localz00_1506);
												BgL_sfunz00_1507 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3502))->
													BgL_valuez00);
											}
											{	/* Reduce/1occ.scm 223 */

												{	/* Reduce/1occ.scm 224 */
													obj_t BgL_resetz72z72_1508;

													{	/* Reduce/1occ.scm 225 */
														obj_t BgL_arg3552z00_1513;

														{
															BgL_sfunz00_bglt BgL_auxz00_3505;

															BgL_auxz00_3505 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_1507);
															BgL_arg3552z00_1513 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3505))->
																BgL_bodyz00);
														}
														{	/* Reduce/1occ.scm 225 */
															BgL_nodez00_bglt BgL_nodez00_2387;

															BgL_nodez00_2387 =
																(BgL_nodez00_bglt) (BgL_arg3552z00_1513);
															{	/* Reduce/1occ.scm 225 */
																obj_t BgL_method3349z00_2389;

																{	/* Reduce/1occ.scm 225 */
																	BgL_objectz00_bglt BgL_objz00_2390;

																	BgL_objz00_2390 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2387);
																	{	/* Reduce/1occ.scm 225 */
																		long BgL_objzd2classzd2numz00_2391;

																		BgL_objzd2classzd2numz00_2391 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2390);
																		{	/* Reduce/1occ.scm 225 */
																			obj_t BgL_arg2643z00_2392;

																			BgL_arg2643z00_2392 =
																				PROCEDURE_REF
																				(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
																				(int) (((long) 1)));
																			{	/* Reduce/1occ.scm 225 */
																				obj_t BgL_arrayz00_2394;

																				int BgL_offsetz00_2395;

																				BgL_arrayz00_2394 = BgL_arg2643z00_2392;
																				BgL_offsetz00_2395 =
																					(int) (BgL_objzd2classzd2numz00_2391);
																				{	/* Reduce/1occ.scm 225 */
																					long BgL_offsetz00_2396;

																					BgL_offsetz00_2396 =
																						(
																						(long) (BgL_offsetz00_2395) -
																						OBJECT_TYPE);
																					{	/* Reduce/1occ.scm 225 */
																						long BgL_modz00_2397;

																						{	/* Reduce/1occ.scm 225 */
																							int BgL_arg2645z00_2398;

																							BgL_arg2645z00_2398 =
																								(int) (((long) 16));
																							{	/* Reduce/1occ.scm 225 */
																								long BgL_auxz00_3517;

																								BgL_auxz00_3517 =
																									(long) (BgL_arg2645z00_2398);
																								BgL_modz00_2397 =
																									(BgL_offsetz00_2396 /
																									BgL_auxz00_3517);
																						}}
																						{	/* Reduce/1occ.scm 225 */
																							long BgL_restz00_2399;

																							{	/* Reduce/1occ.scm 225 */
																								int BgL_arg2644z00_2400;

																								BgL_arg2644z00_2400 =
																									(int) (((long) 16));
																								{	/* Reduce/1occ.scm 225 */
																									long BgL_auxz00_3521;

																									BgL_auxz00_3521 =
																										(long)
																										(BgL_arg2644z00_2400);
																									BgL_restz00_2399 =
																										(BgL_offsetz00_2396 %
																										BgL_auxz00_3521);
																							}}
																							{	/* Reduce/1occ.scm 225 */

																								BgL_method3349z00_2389 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2394,
																										(int) (BgL_modz00_2397)),
																									(int) (BgL_restz00_2399));
																}}}}}}}}
																BgL_resetz72z72_1508 =
																	PROCEDURE_ENTRY(BgL_method3349z00_2389)
																	(BgL_method3349z00_2389,
																	(obj_t) (BgL_nodez00_2387), BNIL, BEOA);
													}}}
													{	/* Reduce/1occ.scm 227 */
														obj_t BgL_nbodyz00_1509;

														{	/* Reduce/1occ.scm 227 */
															int BgL_auxz00_3531;

															BgL_auxz00_3531 = (int) (((long) 1));
															BgL_nbodyz00_1509 =
																BGL_MVALUES_VAL(BgL_auxz00_3531);
														}
														{
															BgL_sfunz00_bglt BgL_auxz00_3534;

															BgL_auxz00_3534 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_1507);
															((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3534))->
																	BgL_bodyz00) =
																((obj_t) BgL_nbodyz00_1509), BUNSPEC);
														}
														{	/* Reduce/1occ.scm 227 */
															obj_t BgL_arg3550z00_1510;

															obj_t BgL_arg3551z00_1511;

															BgL_arg3550z00_1510 = CDR(BgL_localsz00_1500);
															if (CBOOL(BgL_resetz00_1501))
																{	/* Reduce/1occ.scm 227 */
																	BgL_arg3551z00_1511 = BgL_resetz00_1501;
																}
															else
																{	/* Reduce/1occ.scm 227 */
																	BgL_arg3551z00_1511 = BgL_resetz72z72_1508;
																}
															{
																obj_t BgL_resetz00_3541;

																obj_t BgL_localsz00_3540;

																BgL_localsz00_3540 = BgL_arg3550z00_1510;
																BgL_resetz00_3541 = BgL_arg3551z00_1511;
																BgL_resetz00_1501 = BgL_resetz00_3541;
																BgL_localsz00_1500 = BgL_localsz00_3540;
																goto BgL_zc3anonymousza33548ze3z83_1502;
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



/* node-1occ!-select3376 */
	obj_t BGl_nodezd21occz12zd2select3376z12zzreduce_1occz00(obj_t
		BgL_envz00_2707, obj_t BgL_nodez00_2708, obj_t BgL_1zd2expza2z70_2709)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 194 */
			{
				BgL_selectz00_bglt BgL_nodez00_1464;

				obj_t BgL_1zd2expza2z70_1465;

				BgL_nodez00_1464 = (BgL_selectz00_bglt) (BgL_nodez00_2708);
				BgL_1zd2expza2z70_1465 = BgL_1zd2expza2z70_2709;
				{	/* Reduce/1occ.scm 196 */
					obj_t BgL_resetz00_1469;

					{	/* Reduce/1occ.scm 197 */
						BgL_nodez00_bglt BgL_arg3545z00_1488;

						BgL_arg3545z00_1488 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1464))->BgL_testz00);
						{	/* Reduce/1occ.scm 197 */
							obj_t BgL_method3349z00_2282;

							{	/* Reduce/1occ.scm 197 */
								BgL_objectz00_bglt BgL_objz00_2283;

								BgL_objz00_2283 = (BgL_objectz00_bglt) (BgL_arg3545z00_1488);
								{	/* Reduce/1occ.scm 197 */
									long BgL_objzd2classzd2numz00_2284;

									BgL_objzd2classzd2numz00_2284 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2283);
									{	/* Reduce/1occ.scm 197 */
										obj_t BgL_arg2643z00_2285;

										BgL_arg2643z00_2285 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 197 */
											obj_t BgL_arrayz00_2287;

											int BgL_offsetz00_2288;

											BgL_arrayz00_2287 = BgL_arg2643z00_2285;
											BgL_offsetz00_2288 =
												(int) (BgL_objzd2classzd2numz00_2284);
											{	/* Reduce/1occ.scm 197 */
												long BgL_offsetz00_2289;

												BgL_offsetz00_2289 =
													((long) (BgL_offsetz00_2288) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 197 */
													long BgL_modz00_2290;

													{	/* Reduce/1occ.scm 197 */
														int BgL_arg2645z00_2291;

														BgL_arg2645z00_2291 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 197 */
															long BgL_auxz00_3552;

															BgL_auxz00_3552 = (long) (BgL_arg2645z00_2291);
															BgL_modz00_2290 =
																(BgL_offsetz00_2289 / BgL_auxz00_3552);
													}}
													{	/* Reduce/1occ.scm 197 */
														long BgL_restz00_2292;

														{	/* Reduce/1occ.scm 197 */
															int BgL_arg2644z00_2293;

															BgL_arg2644z00_2293 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 197 */
																long BgL_auxz00_3556;

																BgL_auxz00_3556 = (long) (BgL_arg2644z00_2293);
																BgL_restz00_2292 =
																	(BgL_offsetz00_2289 % BgL_auxz00_3556);
														}}
														{	/* Reduce/1occ.scm 197 */

															BgL_method3349z00_2282 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2287,
																	(int) (BgL_modz00_2290)),
																(int) (BgL_restz00_2292));
							}}}}}}}}
							BgL_resetz00_1469 =
								PROCEDURE_ENTRY(BgL_method3349z00_2282) (BgL_method3349z00_2282,
								(obj_t) (BgL_arg3545z00_1488), BgL_1zd2expza2z70_1465, BEOA);
					}}
					{	/* Reduce/1occ.scm 208 */
						obj_t BgL_ntestz00_1470;

						{	/* Reduce/1occ.scm 208 */
							int BgL_auxz00_3566;

							BgL_auxz00_3566 = (int) (((long) 1));
							BgL_ntestz00_1470 = BGL_MVALUES_VAL(BgL_auxz00_3566);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3569;

							BgL_auxz00_3569 = (BgL_nodez00_bglt) (BgL_ntestz00_1470);
							((((BgL_selectz00_bglt) CREF(BgL_nodez00_1464))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3569), BUNSPEC);
						}
						{
							obj_t BgL_clausesz00_1474;

							obj_t BgL_resetz00_1475;

							{	/* Reduce/1occ.scm 200 */
								obj_t BgL_arg3539z00_1473;

								BgL_arg3539z00_1473 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1464))->
									BgL_clausesz00);
								BgL_clausesz00_1474 = BgL_arg3539z00_1473;
								BgL_resetz00_1475 = BgL_resetz00_1469;
							BgL_zc3anonymousza33540ze3z83_1476:
								if (NULLP(BgL_clausesz00_1474))
									{	/* Reduce/1occ.scm 202 */
										{	/* Reduce/1occ.scm 203 */
											int BgL_auxz00_3575;

											BgL_auxz00_3575 = (int) (((long) 2));
											BGL_MVALUES_NUMBER_SET(BgL_auxz00_3575);
										}
										{	/* Reduce/1occ.scm 203 */
											obj_t BgL_auxz00_3580;

											int BgL_auxz00_3578;

											BgL_auxz00_3580 = (obj_t) (BgL_nodez00_1464);
											BgL_auxz00_3578 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_auxz00_3578, BgL_auxz00_3580);
										}
										return BgL_resetz00_1475;
									}
								else
									{	/* Reduce/1occ.scm 204 */
										obj_t BgL_clausez00_1480;

										BgL_clausez00_1480 = CAR(BgL_clausesz00_1474);
										{	/* Reduce/1occ.scm 205 */
											obj_t BgL_resetz72z72_1481;

											{	/* Reduce/1occ.scm 206 */
												obj_t BgL_arg3544z00_1486;

												BgL_arg3544z00_1486 = CDR(BgL_clausez00_1480);
												{	/* Reduce/1occ.scm 206 */
													BgL_nodez00_bglt BgL_nodez00_2317;

													BgL_nodez00_2317 =
														(BgL_nodez00_bglt) (BgL_arg3544z00_1486);
													{	/* Reduce/1occ.scm 206 */
														obj_t BgL_method3349z00_2319;

														{	/* Reduce/1occ.scm 206 */
															BgL_objectz00_bglt BgL_objz00_2320;

															BgL_objz00_2320 =
																(BgL_objectz00_bglt) (BgL_nodez00_2317);
															{	/* Reduce/1occ.scm 206 */
																long BgL_objzd2classzd2numz00_2321;

																BgL_objzd2classzd2numz00_2321 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2320);
																{	/* Reduce/1occ.scm 206 */
																	obj_t BgL_arg2643z00_2322;

																	BgL_arg2643z00_2322 =
																		PROCEDURE_REF
																		(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
																		(int) (((long) 1)));
																	{	/* Reduce/1occ.scm 206 */
																		obj_t BgL_arrayz00_2324;

																		int BgL_offsetz00_2325;

																		BgL_arrayz00_2324 = BgL_arg2643z00_2322;
																		BgL_offsetz00_2325 =
																			(int) (BgL_objzd2classzd2numz00_2321);
																		{	/* Reduce/1occ.scm 206 */
																			long BgL_offsetz00_2326;

																			BgL_offsetz00_2326 =
																				(
																				(long) (BgL_offsetz00_2325) -
																				OBJECT_TYPE);
																			{	/* Reduce/1occ.scm 206 */
																				long BgL_modz00_2327;

																				{	/* Reduce/1occ.scm 206 */
																					int BgL_arg2645z00_2328;

																					BgL_arg2645z00_2328 =
																						(int) (((long) 16));
																					{	/* Reduce/1occ.scm 206 */
																						long BgL_auxz00_3594;

																						BgL_auxz00_3594 =
																							(long) (BgL_arg2645z00_2328);
																						BgL_modz00_2327 =
																							(BgL_offsetz00_2326 /
																							BgL_auxz00_3594);
																				}}
																				{	/* Reduce/1occ.scm 206 */
																					long BgL_restz00_2329;

																					{	/* Reduce/1occ.scm 206 */
																						int BgL_arg2644z00_2330;

																						BgL_arg2644z00_2330 =
																							(int) (((long) 16));
																						{	/* Reduce/1occ.scm 206 */
																							long BgL_auxz00_3598;

																							BgL_auxz00_3598 =
																								(long) (BgL_arg2644z00_2330);
																							BgL_restz00_2329 =
																								(BgL_offsetz00_2326 %
																								BgL_auxz00_3598);
																					}}
																					{	/* Reduce/1occ.scm 206 */

																						BgL_method3349z00_2319 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2324,
																								(int) (BgL_modz00_2327)),
																							(int) (BgL_restz00_2329));
														}}}}}}}}
														BgL_resetz72z72_1481 =
															PROCEDURE_ENTRY(BgL_method3349z00_2319)
															(BgL_method3349z00_2319,
															(obj_t) (BgL_nodez00_2317),
															BgL_1zd2expza2z70_1465, BEOA);
											}}}
											{	/* Reduce/1occ.scm 208 */
												obj_t BgL_nclausez00_1482;

												{	/* Reduce/1occ.scm 208 */
													int BgL_auxz00_3608;

													BgL_auxz00_3608 = (int) (((long) 1));
													BgL_nclausez00_1482 =
														BGL_MVALUES_VAL(BgL_auxz00_3608);
												}
												SET_CDR(BgL_clausez00_1480, BgL_nclausez00_1482);
												{	/* Reduce/1occ.scm 208 */
													obj_t BgL_arg3542z00_1483;

													obj_t BgL_arg3543z00_1484;

													BgL_arg3542z00_1483 = CDR(BgL_clausesz00_1474);
													if (CBOOL(BgL_resetz00_1475))
														{	/* Reduce/1occ.scm 208 */
															BgL_arg3543z00_1484 = BgL_resetz00_1475;
														}
													else
														{	/* Reduce/1occ.scm 208 */
															BgL_arg3543z00_1484 = BgL_resetz72z72_1481;
														}
													{
														obj_t BgL_resetz00_3616;

														obj_t BgL_clausesz00_3615;

														BgL_clausesz00_3615 = BgL_arg3542z00_1483;
														BgL_resetz00_3616 = BgL_arg3543z00_1484;
														BgL_resetz00_1475 = BgL_resetz00_3616;
														BgL_clausesz00_1474 = BgL_clausesz00_3615;
														goto BgL_zc3anonymousza33540ze3z83_1476;
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



/* node-1occ!-fail3374 */
	obj_t BGl_nodezd21occz12zd2fail3374z12zzreduce_1occz00(obj_t BgL_envz00_2710,
		obj_t BgL_nodez00_2711, obj_t BgL_1zd2expza2z70_2712)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 176 */
			{
				BgL_failz00_bglt BgL_nodez00_1442;

				obj_t BgL_1zd2expza2z70_1443;

				BgL_nodez00_1442 = (BgL_failz00_bglt) (BgL_nodez00_2711);
				BgL_1zd2expza2z70_1443 = BgL_1zd2expza2z70_2712;
				{	/* Reduce/1occ.scm 178 */
					obj_t BgL_resetz00_1447;

					{	/* Reduce/1occ.scm 179 */
						BgL_nodez00_bglt BgL_arg3537z00_1461;

						BgL_arg3537z00_1461 =
							(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_procz00);
						{	/* Reduce/1occ.scm 179 */
							obj_t BgL_method3349z00_2186;

							{	/* Reduce/1occ.scm 179 */
								BgL_objectz00_bglt BgL_objz00_2187;

								BgL_objz00_2187 = (BgL_objectz00_bglt) (BgL_arg3537z00_1461);
								{	/* Reduce/1occ.scm 179 */
									long BgL_objzd2classzd2numz00_2188;

									BgL_objzd2classzd2numz00_2188 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2187);
									{	/* Reduce/1occ.scm 179 */
										obj_t BgL_arg2643z00_2189;

										BgL_arg2643z00_2189 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 179 */
											obj_t BgL_arrayz00_2191;

											int BgL_offsetz00_2192;

											BgL_arrayz00_2191 = BgL_arg2643z00_2189;
											BgL_offsetz00_2192 =
												(int) (BgL_objzd2classzd2numz00_2188);
											{	/* Reduce/1occ.scm 179 */
												long BgL_offsetz00_2193;

												BgL_offsetz00_2193 =
													((long) (BgL_offsetz00_2192) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 179 */
													long BgL_modz00_2194;

													{	/* Reduce/1occ.scm 179 */
														int BgL_arg2645z00_2195;

														BgL_arg2645z00_2195 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 179 */
															long BgL_auxz00_3627;

															BgL_auxz00_3627 = (long) (BgL_arg2645z00_2195);
															BgL_modz00_2194 =
																(BgL_offsetz00_2193 / BgL_auxz00_3627);
													}}
													{	/* Reduce/1occ.scm 179 */
														long BgL_restz00_2196;

														{	/* Reduce/1occ.scm 179 */
															int BgL_arg2644z00_2197;

															BgL_arg2644z00_2197 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 179 */
																long BgL_auxz00_3631;

																BgL_auxz00_3631 = (long) (BgL_arg2644z00_2197);
																BgL_restz00_2196 =
																	(BgL_offsetz00_2193 % BgL_auxz00_3631);
														}}
														{	/* Reduce/1occ.scm 179 */

															BgL_method3349z00_2186 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2191,
																	(int) (BgL_modz00_2194)),
																(int) (BgL_restz00_2196));
							}}}}}}}}
							BgL_resetz00_1447 =
								PROCEDURE_ENTRY(BgL_method3349z00_2186) (BgL_method3349z00_2186,
								(obj_t) (BgL_arg3537z00_1461), BgL_1zd2expza2z70_1443, BEOA);
					}}
					{	/* Reduce/1occ.scm 189 */
						obj_t BgL_nprocz00_1448;

						{	/* Reduce/1occ.scm 189 */
							int BgL_auxz00_3641;

							BgL_auxz00_3641 = (int) (((long) 1));
							BgL_nprocz00_1448 = BGL_MVALUES_VAL(BgL_auxz00_3641);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3644;

							BgL_auxz00_3644 = (BgL_nodez00_bglt) (BgL_nprocz00_1448);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3644), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 181 */
							obj_t BgL_1zd2expza2z72z02_1449;

							if (CBOOL(BgL_resetz00_1447))
								{	/* Reduce/1occ.scm 181 */
									BgL_1zd2expza2z72z02_1449 = BNIL;
								}
							else
								{	/* Reduce/1occ.scm 181 */
									BgL_1zd2expza2z72z02_1449 = BgL_1zd2expza2z70_1443;
								}
							{	/* Reduce/1occ.scm 182 */
								obj_t BgL_resetz72z72_1450;

								{	/* Reduce/1occ.scm 183 */
									BgL_nodez00_bglt BgL_arg3536z00_1460;

									BgL_arg3536z00_1460 =
										(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_msgz00);
									{	/* Reduce/1occ.scm 183 */
										obj_t BgL_method3349z00_2217;

										{	/* Reduce/1occ.scm 183 */
											BgL_objectz00_bglt BgL_objz00_2218;

											BgL_objz00_2218 =
												(BgL_objectz00_bglt) (BgL_arg3536z00_1460);
											{	/* Reduce/1occ.scm 183 */
												long BgL_objzd2classzd2numz00_2219;

												BgL_objzd2classzd2numz00_2219 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2218);
												{	/* Reduce/1occ.scm 183 */
													obj_t BgL_arg2643z00_2220;

													BgL_arg2643z00_2220 =
														PROCEDURE_REF
														(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
														(int) (((long) 1)));
													{	/* Reduce/1occ.scm 183 */
														obj_t BgL_arrayz00_2222;

														int BgL_offsetz00_2223;

														BgL_arrayz00_2222 = BgL_arg2643z00_2220;
														BgL_offsetz00_2223 =
															(int) (BgL_objzd2classzd2numz00_2219);
														{	/* Reduce/1occ.scm 183 */
															long BgL_offsetz00_2224;

															BgL_offsetz00_2224 =
																((long) (BgL_offsetz00_2223) - OBJECT_TYPE);
															{	/* Reduce/1occ.scm 183 */
																long BgL_modz00_2225;

																{	/* Reduce/1occ.scm 183 */
																	int BgL_arg2645z00_2226;

																	BgL_arg2645z00_2226 = (int) (((long) 16));
																	{	/* Reduce/1occ.scm 183 */
																		long BgL_auxz00_3658;

																		BgL_auxz00_3658 =
																			(long) (BgL_arg2645z00_2226);
																		BgL_modz00_2225 =
																			(BgL_offsetz00_2224 / BgL_auxz00_3658);
																}}
																{	/* Reduce/1occ.scm 183 */
																	long BgL_restz00_2227;

																	{	/* Reduce/1occ.scm 183 */
																		int BgL_arg2644z00_2228;

																		BgL_arg2644z00_2228 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 183 */
																			long BgL_auxz00_3662;

																			BgL_auxz00_3662 =
																				(long) (BgL_arg2644z00_2228);
																			BgL_restz00_2227 =
																				(BgL_offsetz00_2224 % BgL_auxz00_3662);
																	}}
																	{	/* Reduce/1occ.scm 183 */

																		BgL_method3349z00_2217 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2222,
																				(int) (BgL_modz00_2225)),
																			(int) (BgL_restz00_2227));
										}}}}}}}}
										BgL_resetz72z72_1450 =
											PROCEDURE_ENTRY(BgL_method3349z00_2217)
											(BgL_method3349z00_2217, (obj_t) (BgL_arg3536z00_1460),
											BgL_1zd2expza2z72z02_1449, BEOA);
								}}
								{	/* Reduce/1occ.scm 189 */
									obj_t BgL_nmsgz00_1451;

									{	/* Reduce/1occ.scm 189 */
										int BgL_auxz00_3672;

										BgL_auxz00_3672 = (int) (((long) 1));
										BgL_nmsgz00_1451 = BGL_MVALUES_VAL(BgL_auxz00_3672);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3675;

										BgL_auxz00_3675 = (BgL_nodez00_bglt) (BgL_nmsgz00_1451);
										((((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->BgL_msgz00) =
											((BgL_nodez00_bglt) BgL_auxz00_3675), BUNSPEC);
									}
									{	/* Reduce/1occ.scm 185 */
										obj_t BgL_1zd2expza2z72z72z70_1452;

										if (CBOOL(BgL_resetz72z72_1450))
											{	/* Reduce/1occ.scm 185 */
												BgL_1zd2expza2z72z72z70_1452 = BNIL;
											}
										else
											{	/* Reduce/1occ.scm 185 */
												BgL_1zd2expza2z72z72z70_1452 =
													BgL_1zd2expza2z72z02_1449;
											}
										{	/* Reduce/1occ.scm 186 */
											obj_t BgL_resetz72z72z00_1453;

											{	/* Reduce/1occ.scm 187 */
												BgL_nodez00_bglt BgL_arg3535z00_1459;

												BgL_arg3535z00_1459 =
													(((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->
													BgL_objz00);
												{	/* Reduce/1occ.scm 187 */
													obj_t BgL_method3349z00_2248;

													{	/* Reduce/1occ.scm 187 */
														BgL_objectz00_bglt BgL_objz00_2249;

														BgL_objz00_2249 =
															(BgL_objectz00_bglt) (BgL_arg3535z00_1459);
														{	/* Reduce/1occ.scm 187 */
															long BgL_objzd2classzd2numz00_2250;

															BgL_objzd2classzd2numz00_2250 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2249);
															{	/* Reduce/1occ.scm 187 */
																obj_t BgL_arg2643z00_2251;

																BgL_arg2643z00_2251 =
																	PROCEDURE_REF
																	(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
																	(int) (((long) 1)));
																{	/* Reduce/1occ.scm 187 */
																	obj_t BgL_arrayz00_2253;

																	int BgL_offsetz00_2254;

																	BgL_arrayz00_2253 = BgL_arg2643z00_2251;
																	BgL_offsetz00_2254 =
																		(int) (BgL_objzd2classzd2numz00_2250);
																	{	/* Reduce/1occ.scm 187 */
																		long BgL_offsetz00_2255;

																		BgL_offsetz00_2255 =
																			(
																			(long) (BgL_offsetz00_2254) -
																			OBJECT_TYPE);
																		{	/* Reduce/1occ.scm 187 */
																			long BgL_modz00_2256;

																			{	/* Reduce/1occ.scm 187 */
																				int BgL_arg2645z00_2257;

																				BgL_arg2645z00_2257 =
																					(int) (((long) 16));
																				{	/* Reduce/1occ.scm 187 */
																					long BgL_auxz00_3689;

																					BgL_auxz00_3689 =
																						(long) (BgL_arg2645z00_2257);
																					BgL_modz00_2256 =
																						(BgL_offsetz00_2255 /
																						BgL_auxz00_3689);
																			}}
																			{	/* Reduce/1occ.scm 187 */
																				long BgL_restz00_2258;

																				{	/* Reduce/1occ.scm 187 */
																					int BgL_arg2644z00_2259;

																					BgL_arg2644z00_2259 =
																						(int) (((long) 16));
																					{	/* Reduce/1occ.scm 187 */
																						long BgL_auxz00_3693;

																						BgL_auxz00_3693 =
																							(long) (BgL_arg2644z00_2259);
																						BgL_restz00_2258 =
																							(BgL_offsetz00_2255 %
																							BgL_auxz00_3693);
																				}}
																				{	/* Reduce/1occ.scm 187 */

																					BgL_method3349z00_2248 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2253,
																							(int) (BgL_modz00_2256)),
																						(int) (BgL_restz00_2258));
													}}}}}}}}
													BgL_resetz72z72z00_1453 =
														PROCEDURE_ENTRY(BgL_method3349z00_2248)
														(BgL_method3349z00_2248,
														(obj_t) (BgL_arg3535z00_1459),
														BgL_1zd2expza2z72z72z70_1452, BEOA);
											}}
											{	/* Reduce/1occ.scm 189 */
												obj_t BgL_nobjz00_1454;

												{	/* Reduce/1occ.scm 189 */
													int BgL_auxz00_3703;

													BgL_auxz00_3703 = (int) (((long) 1));
													BgL_nobjz00_1454 = BGL_MVALUES_VAL(BgL_auxz00_3703);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_3706;

													BgL_auxz00_3706 =
														(BgL_nodez00_bglt) (BgL_nobjz00_1454);
													((((BgL_failz00_bglt) CREF(BgL_nodez00_1442))->
															BgL_objz00) =
														((BgL_nodez00_bglt) BgL_auxz00_3706), BUNSPEC);
												}
												{	/* Reduce/1occ.scm 189 */
													obj_t BgL_val0_3322z00_1455;

													if (CBOOL(BgL_resetz00_1447))
														{	/* Reduce/1occ.scm 189 */
															BgL_val0_3322z00_1455 = BgL_resetz00_1447;
														}
													else
														{	/* Reduce/1occ.scm 189 */
															if (CBOOL(BgL_resetz72z72_1450))
																{	/* Reduce/1occ.scm 189 */
																	BgL_val0_3322z00_1455 = BgL_resetz72z72_1450;
																}
															else
																{	/* Reduce/1occ.scm 189 */
																	BgL_val0_3322z00_1455 =
																		BgL_resetz72z72z00_1453;
																}
														}
													{	/* Reduce/1occ.scm 189 */
														int BgL_auxz00_3713;

														BgL_auxz00_3713 = (int) (((long) 2));
														BGL_MVALUES_NUMBER_SET(BgL_auxz00_3713);
													}
													{	/* Reduce/1occ.scm 189 */
														obj_t BgL_auxz00_3718;

														int BgL_auxz00_3716;

														BgL_auxz00_3718 = (obj_t) (BgL_nodez00_1442);
														BgL_auxz00_3716 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_auxz00_3716,
															BgL_auxz00_3718);
													}
													return BgL_val0_3322z00_1455;
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



/* node-1occ!-condition3372 */
	obj_t BGl_nodezd21occz12zd2condition3372z12zzreduce_1occz00(obj_t
		BgL_envz00_2713, obj_t BgL_nodez00_2714, obj_t BgL_1zd2expza2z70_2715)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 159 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1421;

				obj_t BgL_1zd2expza2z70_1422;

				BgL_nodez00_1421 = (BgL_conditionalz00_bglt) (BgL_nodez00_2714);
				BgL_1zd2expza2z70_1422 = BgL_1zd2expza2z70_2715;
				{	/* Reduce/1occ.scm 161 */
					obj_t BgL_resetz00_1426;

					{	/* Reduce/1occ.scm 162 */
						BgL_nodez00_bglt BgL_arg3532z00_1439;

						BgL_arg3532z00_1439 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1421))->BgL_testz00);
						{	/* Reduce/1occ.scm 162 */
							obj_t BgL_method3349z00_2090;

							{	/* Reduce/1occ.scm 162 */
								BgL_objectz00_bglt BgL_objz00_2091;

								BgL_objz00_2091 = (BgL_objectz00_bglt) (BgL_arg3532z00_1439);
								{	/* Reduce/1occ.scm 162 */
									long BgL_objzd2classzd2numz00_2092;

									BgL_objzd2classzd2numz00_2092 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2091);
									{	/* Reduce/1occ.scm 162 */
										obj_t BgL_arg2643z00_2093;

										BgL_arg2643z00_2093 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 162 */
											obj_t BgL_arrayz00_2095;

											int BgL_offsetz00_2096;

											BgL_arrayz00_2095 = BgL_arg2643z00_2093;
											BgL_offsetz00_2096 =
												(int) (BgL_objzd2classzd2numz00_2092);
											{	/* Reduce/1occ.scm 162 */
												long BgL_offsetz00_2097;

												BgL_offsetz00_2097 =
													((long) (BgL_offsetz00_2096) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 162 */
													long BgL_modz00_2098;

													{	/* Reduce/1occ.scm 162 */
														int BgL_arg2645z00_2099;

														BgL_arg2645z00_2099 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 162 */
															long BgL_auxz00_3731;

															BgL_auxz00_3731 = (long) (BgL_arg2645z00_2099);
															BgL_modz00_2098 =
																(BgL_offsetz00_2097 / BgL_auxz00_3731);
													}}
													{	/* Reduce/1occ.scm 162 */
														long BgL_restz00_2100;

														{	/* Reduce/1occ.scm 162 */
															int BgL_arg2644z00_2101;

															BgL_arg2644z00_2101 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 162 */
																long BgL_auxz00_3735;

																BgL_auxz00_3735 = (long) (BgL_arg2644z00_2101);
																BgL_restz00_2100 =
																	(BgL_offsetz00_2097 % BgL_auxz00_3735);
														}}
														{	/* Reduce/1occ.scm 162 */

															BgL_method3349z00_2090 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2095,
																	(int) (BgL_modz00_2098)),
																(int) (BgL_restz00_2100));
							}}}}}}}}
							BgL_resetz00_1426 =
								PROCEDURE_ENTRY(BgL_method3349z00_2090) (BgL_method3349z00_2090,
								(obj_t) (BgL_arg3532z00_1439), BgL_1zd2expza2z70_1422, BEOA);
					}}
					{	/* Reduce/1occ.scm 171 */
						obj_t BgL_ntestz00_1427;

						{	/* Reduce/1occ.scm 171 */
							int BgL_auxz00_3745;

							BgL_auxz00_3745 = (int) (((long) 1));
							BgL_ntestz00_1427 = BGL_MVALUES_VAL(BgL_auxz00_3745);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3748;

							BgL_auxz00_3748 = (BgL_nodez00_bglt) (BgL_ntestz00_1427);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1421))->
									BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_3748), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 164 */
							obj_t BgL_1zd2expza2z72z02_1428;

							if (CBOOL(BgL_resetz00_1426))
								{	/* Reduce/1occ.scm 164 */
									BgL_1zd2expza2z72z02_1428 = BNIL;
								}
							else
								{	/* Reduce/1occ.scm 164 */
									BgL_1zd2expza2z72z02_1428 = BgL_1zd2expza2z70_1422;
								}
							{	/* Reduce/1occ.scm 165 */
								obj_t BgL_resetz72z72_1429;

								{	/* Reduce/1occ.scm 166 */
									BgL_nodez00_bglt BgL_arg3531z00_1438;

									BgL_arg3531z00_1438 =
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1421))->
										BgL_truez00);
									{	/* Reduce/1occ.scm 166 */
										obj_t BgL_method3349z00_2121;

										{	/* Reduce/1occ.scm 166 */
											BgL_objectz00_bglt BgL_objz00_2122;

											BgL_objz00_2122 =
												(BgL_objectz00_bglt) (BgL_arg3531z00_1438);
											{	/* Reduce/1occ.scm 166 */
												long BgL_objzd2classzd2numz00_2123;

												BgL_objzd2classzd2numz00_2123 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2122);
												{	/* Reduce/1occ.scm 166 */
													obj_t BgL_arg2643z00_2124;

													BgL_arg2643z00_2124 =
														PROCEDURE_REF
														(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
														(int) (((long) 1)));
													{	/* Reduce/1occ.scm 166 */
														obj_t BgL_arrayz00_2126;

														int BgL_offsetz00_2127;

														BgL_arrayz00_2126 = BgL_arg2643z00_2124;
														BgL_offsetz00_2127 =
															(int) (BgL_objzd2classzd2numz00_2123);
														{	/* Reduce/1occ.scm 166 */
															long BgL_offsetz00_2128;

															BgL_offsetz00_2128 =
																((long) (BgL_offsetz00_2127) - OBJECT_TYPE);
															{	/* Reduce/1occ.scm 166 */
																long BgL_modz00_2129;

																{	/* Reduce/1occ.scm 166 */
																	int BgL_arg2645z00_2130;

																	BgL_arg2645z00_2130 = (int) (((long) 16));
																	{	/* Reduce/1occ.scm 166 */
																		long BgL_auxz00_3762;

																		BgL_auxz00_3762 =
																			(long) (BgL_arg2645z00_2130);
																		BgL_modz00_2129 =
																			(BgL_offsetz00_2128 / BgL_auxz00_3762);
																}}
																{	/* Reduce/1occ.scm 166 */
																	long BgL_restz00_2131;

																	{	/* Reduce/1occ.scm 166 */
																		int BgL_arg2644z00_2132;

																		BgL_arg2644z00_2132 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 166 */
																			long BgL_auxz00_3766;

																			BgL_auxz00_3766 =
																				(long) (BgL_arg2644z00_2132);
																			BgL_restz00_2131 =
																				(BgL_offsetz00_2128 % BgL_auxz00_3766);
																	}}
																	{	/* Reduce/1occ.scm 166 */

																		BgL_method3349z00_2121 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2126,
																				(int) (BgL_modz00_2129)),
																			(int) (BgL_restz00_2131));
										}}}}}}}}
										BgL_resetz72z72_1429 =
											PROCEDURE_ENTRY(BgL_method3349z00_2121)
											(BgL_method3349z00_2121, (obj_t) (BgL_arg3531z00_1438),
											BgL_1zd2expza2z72z02_1428, BEOA);
								}}
								{	/* Reduce/1occ.scm 171 */
									obj_t BgL_ntruez00_1430;

									{	/* Reduce/1occ.scm 171 */
										int BgL_auxz00_3776;

										BgL_auxz00_3776 = (int) (((long) 1));
										BgL_ntruez00_1430 = BGL_MVALUES_VAL(BgL_auxz00_3776);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3779;

										BgL_auxz00_3779 = (BgL_nodez00_bglt) (BgL_ntruez00_1430);
										((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1421))->
												BgL_truez00) =
											((BgL_nodez00_bglt) BgL_auxz00_3779), BUNSPEC);
									}
									{	/* Reduce/1occ.scm 168 */
										obj_t BgL_resetz72z72z00_1431;

										{	/* Reduce/1occ.scm 169 */
											BgL_nodez00_bglt BgL_arg3530z00_1437;

											BgL_arg3530z00_1437 =
												(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1421))->
												BgL_falsez00);
											{	/* Reduce/1occ.scm 169 */
												obj_t BgL_method3349z00_2152;

												{	/* Reduce/1occ.scm 169 */
													BgL_objectz00_bglt BgL_objz00_2153;

													BgL_objz00_2153 =
														(BgL_objectz00_bglt) (BgL_arg3530z00_1437);
													{	/* Reduce/1occ.scm 169 */
														long BgL_objzd2classzd2numz00_2154;

														BgL_objzd2classzd2numz00_2154 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2153);
														{	/* Reduce/1occ.scm 169 */
															obj_t BgL_arg2643z00_2155;

															BgL_arg2643z00_2155 =
																PROCEDURE_REF
																(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
																(int) (((long) 1)));
															{	/* Reduce/1occ.scm 169 */
																obj_t BgL_arrayz00_2157;

																int BgL_offsetz00_2158;

																BgL_arrayz00_2157 = BgL_arg2643z00_2155;
																BgL_offsetz00_2158 =
																	(int) (BgL_objzd2classzd2numz00_2154);
																{	/* Reduce/1occ.scm 169 */
																	long BgL_offsetz00_2159;

																	BgL_offsetz00_2159 =
																		((long) (BgL_offsetz00_2158) - OBJECT_TYPE);
																	{	/* Reduce/1occ.scm 169 */
																		long BgL_modz00_2160;

																		{	/* Reduce/1occ.scm 169 */
																			int BgL_arg2645z00_2161;

																			BgL_arg2645z00_2161 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 169 */
																				long BgL_auxz00_3791;

																				BgL_auxz00_3791 =
																					(long) (BgL_arg2645z00_2161);
																				BgL_modz00_2160 =
																					(BgL_offsetz00_2159 /
																					BgL_auxz00_3791);
																		}}
																		{	/* Reduce/1occ.scm 169 */
																			long BgL_restz00_2162;

																			{	/* Reduce/1occ.scm 169 */
																				int BgL_arg2644z00_2163;

																				BgL_arg2644z00_2163 =
																					(int) (((long) 16));
																				{	/* Reduce/1occ.scm 169 */
																					long BgL_auxz00_3795;

																					BgL_auxz00_3795 =
																						(long) (BgL_arg2644z00_2163);
																					BgL_restz00_2162 =
																						(BgL_offsetz00_2159 %
																						BgL_auxz00_3795);
																			}}
																			{	/* Reduce/1occ.scm 169 */

																				BgL_method3349z00_2152 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2157,
																						(int) (BgL_modz00_2160)),
																					(int) (BgL_restz00_2162));
												}}}}}}}}
												BgL_resetz72z72z00_1431 =
													PROCEDURE_ENTRY(BgL_method3349z00_2152)
													(BgL_method3349z00_2152,
													(obj_t) (BgL_arg3530z00_1437),
													BgL_1zd2expza2z72z02_1428, BEOA);
										}}
										{	/* Reduce/1occ.scm 171 */
											obj_t BgL_nfalsez00_1432;

											{	/* Reduce/1occ.scm 171 */
												int BgL_auxz00_3805;

												BgL_auxz00_3805 = (int) (((long) 1));
												BgL_nfalsez00_1432 = BGL_MVALUES_VAL(BgL_auxz00_3805);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_3808;

												BgL_auxz00_3808 =
													(BgL_nodez00_bglt) (BgL_nfalsez00_1432);
												((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1421))->
														BgL_falsez00) =
													((BgL_nodez00_bglt) BgL_auxz00_3808), BUNSPEC);
											}
											{	/* Reduce/1occ.scm 171 */
												obj_t BgL_val0_3320z00_1433;

												if (CBOOL(BgL_resetz00_1426))
													{	/* Reduce/1occ.scm 171 */
														BgL_val0_3320z00_1433 = BgL_resetz00_1426;
													}
												else
													{	/* Reduce/1occ.scm 171 */
														if (CBOOL(BgL_resetz72z72_1429))
															{	/* Reduce/1occ.scm 171 */
																BgL_val0_3320z00_1433 = BgL_resetz72z72_1429;
															}
														else
															{	/* Reduce/1occ.scm 171 */
																BgL_val0_3320z00_1433 = BgL_resetz72z72z00_1431;
															}
													}
												{	/* Reduce/1occ.scm 171 */
													int BgL_auxz00_3815;

													BgL_auxz00_3815 = (int) (((long) 2));
													BGL_MVALUES_NUMBER_SET(BgL_auxz00_3815);
												}
												{	/* Reduce/1occ.scm 171 */
													obj_t BgL_auxz00_3820;

													int BgL_auxz00_3818;

													BgL_auxz00_3820 = (obj_t) (BgL_nodez00_1421);
													BgL_auxz00_3818 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_auxz00_3818, BgL_auxz00_3820);
												}
												return BgL_val0_3320z00_1433;
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



/* node-1occ!-setq3370 */
	obj_t BGl_nodezd21occz12zd2setq3370z12zzreduce_1occz00(obj_t BgL_envz00_2716,
		obj_t BgL_nodez00_2717, obj_t BgL_1zd2expza2z70_2718)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 149 */
			{
				BgL_setqz00_bglt BgL_nodez00_1409;

				obj_t BgL_1zd2expza2z70_1410;

				BgL_nodez00_1409 = (BgL_setqz00_bglt) (BgL_nodez00_2717);
				BgL_1zd2expza2z70_1410 = BgL_1zd2expza2z70_2718;
				{	/* Reduce/1occ.scm 151 */
					obj_t BgL_resetz00_1414;

					{	/* Reduce/1occ.scm 152 */
						BgL_nodez00_bglt BgL_arg3528z00_1418;

						BgL_arg3528z00_1418 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1409))->BgL_valuez00);
						{	/* Reduce/1occ.scm 152 */
							obj_t BgL_method3349z00_2056;

							{	/* Reduce/1occ.scm 152 */
								BgL_objectz00_bglt BgL_objz00_2057;

								BgL_objz00_2057 = (BgL_objectz00_bglt) (BgL_arg3528z00_1418);
								{	/* Reduce/1occ.scm 152 */
									long BgL_objzd2classzd2numz00_2058;

									BgL_objzd2classzd2numz00_2058 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2057);
									{	/* Reduce/1occ.scm 152 */
										obj_t BgL_arg2643z00_2059;

										BgL_arg2643z00_2059 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 152 */
											obj_t BgL_arrayz00_2061;

											int BgL_offsetz00_2062;

											BgL_arrayz00_2061 = BgL_arg2643z00_2059;
											BgL_offsetz00_2062 =
												(int) (BgL_objzd2classzd2numz00_2058);
											{	/* Reduce/1occ.scm 152 */
												long BgL_offsetz00_2063;

												BgL_offsetz00_2063 =
													((long) (BgL_offsetz00_2062) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 152 */
													long BgL_modz00_2064;

													{	/* Reduce/1occ.scm 152 */
														int BgL_arg2645z00_2065;

														BgL_arg2645z00_2065 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 152 */
															long BgL_auxz00_3833;

															BgL_auxz00_3833 = (long) (BgL_arg2645z00_2065);
															BgL_modz00_2064 =
																(BgL_offsetz00_2063 / BgL_auxz00_3833);
													}}
													{	/* Reduce/1occ.scm 152 */
														long BgL_restz00_2066;

														{	/* Reduce/1occ.scm 152 */
															int BgL_arg2644z00_2067;

															BgL_arg2644z00_2067 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 152 */
																long BgL_auxz00_3837;

																BgL_auxz00_3837 = (long) (BgL_arg2644z00_2067);
																BgL_restz00_2066 =
																	(BgL_offsetz00_2063 % BgL_auxz00_3837);
														}}
														{	/* Reduce/1occ.scm 152 */

															BgL_method3349z00_2056 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2061,
																	(int) (BgL_modz00_2064)),
																(int) (BgL_restz00_2066));
							}}}}}}}}
							BgL_resetz00_1414 =
								PROCEDURE_ENTRY(BgL_method3349z00_2056) (BgL_method3349z00_2056,
								(obj_t) (BgL_arg3528z00_1418), BgL_1zd2expza2z70_1410, BEOA);
					}}
					{	/* Reduce/1occ.scm 154 */
						obj_t BgL_nvaluez00_1415;

						{	/* Reduce/1occ.scm 154 */
							int BgL_auxz00_3847;

							BgL_auxz00_3847 = (int) (((long) 1));
							BgL_nvaluez00_1415 = BGL_MVALUES_VAL(BgL_auxz00_3847);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3850;

							BgL_auxz00_3850 = (BgL_nodez00_bglt) (BgL_nvaluez00_1415);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1409))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3850), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 154 */
							int BgL_auxz00_3853;

							BgL_auxz00_3853 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3853);
						}
						{	/* Reduce/1occ.scm 154 */
							obj_t BgL_auxz00_3858;

							int BgL_auxz00_3856;

							BgL_auxz00_3858 = (obj_t) (BgL_nodez00_1409);
							BgL_auxz00_3856 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3856, BgL_auxz00_3858);
						}
						return BgL_resetz00_1414;
					}
				}
			}
		}
	}



/* node-1occ!-cast3367 */
	obj_t BGl_nodezd21occz12zd2cast3367z12zzreduce_1occz00(obj_t BgL_envz00_2719,
		obj_t BgL_nodez00_2720, obj_t BgL_1zd2expza2z70_2721)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 139 */
			{
				BgL_castz00_bglt BgL_nodez00_1397;

				obj_t BgL_1zd2expza2z70_1398;

				BgL_nodez00_1397 = (BgL_castz00_bglt) (BgL_nodez00_2720);
				BgL_1zd2expza2z70_1398 = BgL_1zd2expza2z70_2721;
				{	/* Reduce/1occ.scm 141 */
					obj_t BgL_resetz00_1402;

					{	/* Reduce/1occ.scm 142 */
						BgL_nodez00_bglt BgL_arg3526z00_1406;

						BgL_arg3526z00_1406 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1397))->BgL_argz00);
						{	/* Reduce/1occ.scm 142 */
							obj_t BgL_method3349z00_2022;

							{	/* Reduce/1occ.scm 142 */
								BgL_objectz00_bglt BgL_objz00_2023;

								BgL_objz00_2023 = (BgL_objectz00_bglt) (BgL_arg3526z00_1406);
								{	/* Reduce/1occ.scm 142 */
									long BgL_objzd2classzd2numz00_2024;

									BgL_objzd2classzd2numz00_2024 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2023);
									{	/* Reduce/1occ.scm 142 */
										obj_t BgL_arg2643z00_2025;

										BgL_arg2643z00_2025 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 142 */
											obj_t BgL_arrayz00_2027;

											int BgL_offsetz00_2028;

											BgL_arrayz00_2027 = BgL_arg2643z00_2025;
											BgL_offsetz00_2028 =
												(int) (BgL_objzd2classzd2numz00_2024);
											{	/* Reduce/1occ.scm 142 */
												long BgL_offsetz00_2029;

												BgL_offsetz00_2029 =
													((long) (BgL_offsetz00_2028) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 142 */
													long BgL_modz00_2030;

													{	/* Reduce/1occ.scm 142 */
														int BgL_arg2645z00_2031;

														BgL_arg2645z00_2031 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 142 */
															long BgL_auxz00_3871;

															BgL_auxz00_3871 = (long) (BgL_arg2645z00_2031);
															BgL_modz00_2030 =
																(BgL_offsetz00_2029 / BgL_auxz00_3871);
													}}
													{	/* Reduce/1occ.scm 142 */
														long BgL_restz00_2032;

														{	/* Reduce/1occ.scm 142 */
															int BgL_arg2644z00_2033;

															BgL_arg2644z00_2033 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 142 */
																long BgL_auxz00_3875;

																BgL_auxz00_3875 = (long) (BgL_arg2644z00_2033);
																BgL_restz00_2032 =
																	(BgL_offsetz00_2029 % BgL_auxz00_3875);
														}}
														{	/* Reduce/1occ.scm 142 */

															BgL_method3349z00_2022 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2027,
																	(int) (BgL_modz00_2030)),
																(int) (BgL_restz00_2032));
							}}}}}}}}
							BgL_resetz00_1402 =
								PROCEDURE_ENTRY(BgL_method3349z00_2022) (BgL_method3349z00_2022,
								(obj_t) (BgL_arg3526z00_1406), BgL_1zd2expza2z70_1398, BEOA);
					}}
					{	/* Reduce/1occ.scm 144 */
						obj_t BgL_nargz00_1403;

						{	/* Reduce/1occ.scm 144 */
							int BgL_auxz00_3885;

							BgL_auxz00_3885 = (int) (((long) 1));
							BgL_nargz00_1403 = BGL_MVALUES_VAL(BgL_auxz00_3885);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3888;

							BgL_auxz00_3888 = (BgL_nodez00_bglt) (BgL_nargz00_1403);
							((((BgL_castz00_bglt) CREF(BgL_nodez00_1397))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3888), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 144 */
							int BgL_auxz00_3891;

							BgL_auxz00_3891 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3891);
						}
						{	/* Reduce/1occ.scm 144 */
							obj_t BgL_auxz00_3896;

							int BgL_auxz00_3894;

							BgL_auxz00_3896 = (obj_t) (BgL_nodez00_1397);
							BgL_auxz00_3894 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3894, BgL_auxz00_3896);
						}
						return BgL_resetz00_1402;
					}
				}
			}
		}
	}



/* node-1occ!-extern3365 */
	obj_t BGl_nodezd21occz12zd2extern3365z12zzreduce_1occz00(obj_t
		BgL_envz00_2722, obj_t BgL_nodez00_2723, obj_t BgL_1zd2expza2z70_2724)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 133 */
			{
				BgL_externz00_bglt BgL_nodez00_1389;

				obj_t BgL_1zd2expza2z70_1390;

				{	/* Reduce/1occ.scm 134 */
					bool_t BgL_auxz00_3900;

					BgL_nodez00_1389 = (BgL_externz00_bglt) (BgL_nodez00_2723);
					BgL_1zd2expza2z70_1390 = BgL_1zd2expza2z70_2724;
					{	/* Reduce/1occ.scm 134 */
						bool_t BgL_val0_3314z00_2014;

						BgL_val0_3314z00_2014 =
							BGl_sidezd2effectzf3z21zzeffect_effectz00(
							(BgL_nodez00_bglt) (BgL_nodez00_1389));
						{	/* Reduce/1occ.scm 134 */
							int BgL_auxz00_3903;

							BgL_auxz00_3903 = (int) (((long) 2));
							BGL_MVALUES_NUMBER_SET(BgL_auxz00_3903);
						}
						{	/* Reduce/1occ.scm 134 */
							obj_t BgL_auxz00_3908;

							int BgL_auxz00_3906;

							BgL_auxz00_3908 = (obj_t) (BgL_nodez00_1389);
							BgL_auxz00_3906 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_auxz00_3906, BgL_auxz00_3908);
						}
						BgL_auxz00_3900 = BgL_val0_3314z00_2014;
					}
					return BBOOL(BgL_auxz00_3900);
				}
			}
		}
	}



/* node-1occ!-funcall3363 */
	obj_t BGl_nodezd21occz12zd2funcall3363z12zzreduce_1occz00(obj_t
		BgL_envz00_2725, obj_t BgL_nodez00_2726, obj_t BgL_1zd2expza2z70_2727)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 122 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1378;

				obj_t BgL_1zd2expza2z70_1379;

				BgL_nodez00_1378 = (BgL_funcallz00_bglt) (BgL_nodez00_2726);
				BgL_1zd2expza2z70_1379 = BgL_1zd2expza2z70_2727;
				{	/* Reduce/1occ.scm 124 */
					obj_t BgL_resetz72z72_1383;

					{	/* Reduce/1occ.scm 124 */
						obj_t BgL_arg3523z00_1386;

						BgL_arg3523z00_1386 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1378))->BgL_argsz00);
						BgL_resetz72z72_1383 =
							BGl_nodezd21occza2z12z62zzreduce_1occz00(BgL_arg3523z00_1386,
							BgL_1zd2expza2z70_1379);
					}
					{	/* Reduce/1occ.scm 125 */
						int BgL_auxz00_3915;

						BgL_auxz00_3915 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3915);
					}
					{	/* Reduce/1occ.scm 125 */
						obj_t BgL_auxz00_3920;

						int BgL_auxz00_3918;

						BgL_auxz00_3920 = (obj_t) (BgL_nodez00_1378);
						BgL_auxz00_3918 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_3918, BgL_auxz00_3920);
					}
					return BgL_resetz72z72_1383;
				}
			}
		}
	}



/* node-1occ!-app-ly3361 */
	obj_t BGl_nodezd21occz12zd2appzd2ly3361zc0zzreduce_1occz00(obj_t
		BgL_envz00_2728, obj_t BgL_nodez00_2729, obj_t BgL_1zd2expza2z70_2730)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 109 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1361;

				obj_t BgL_1zd2expza2z70_1362;

				BgL_nodez00_1361 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2729);
				BgL_1zd2expza2z70_1362 = BgL_1zd2expza2z70_2730;
				{	/* Reduce/1occ.scm 111 */
					obj_t BgL_resetz00_1366;

					{	/* Reduce/1occ.scm 112 */
						BgL_nodez00_bglt BgL_arg3521z00_1375;

						BgL_arg3521z00_1375 =
							(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1361))->BgL_funz00);
						{	/* Reduce/1occ.scm 112 */
							obj_t BgL_method3349z00_1948;

							{	/* Reduce/1occ.scm 112 */
								BgL_objectz00_bglt BgL_objz00_1949;

								BgL_objz00_1949 = (BgL_objectz00_bglt) (BgL_arg3521z00_1375);
								{	/* Reduce/1occ.scm 112 */
									long BgL_objzd2classzd2numz00_1950;

									BgL_objzd2classzd2numz00_1950 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1949);
									{	/* Reduce/1occ.scm 112 */
										obj_t BgL_arg2643z00_1951;

										BgL_arg2643z00_1951 =
											PROCEDURE_REF(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
											(int) (((long) 1)));
										{	/* Reduce/1occ.scm 112 */
											obj_t BgL_arrayz00_1953;

											int BgL_offsetz00_1954;

											BgL_arrayz00_1953 = BgL_arg2643z00_1951;
											BgL_offsetz00_1954 =
												(int) (BgL_objzd2classzd2numz00_1950);
											{	/* Reduce/1occ.scm 112 */
												long BgL_offsetz00_1955;

												BgL_offsetz00_1955 =
													((long) (BgL_offsetz00_1954) - OBJECT_TYPE);
												{	/* Reduce/1occ.scm 112 */
													long BgL_modz00_1956;

													{	/* Reduce/1occ.scm 112 */
														int BgL_arg2645z00_1957;

														BgL_arg2645z00_1957 = (int) (((long) 16));
														{	/* Reduce/1occ.scm 112 */
															long BgL_auxz00_3933;

															BgL_auxz00_3933 = (long) (BgL_arg2645z00_1957);
															BgL_modz00_1956 =
																(BgL_offsetz00_1955 / BgL_auxz00_3933);
													}}
													{	/* Reduce/1occ.scm 112 */
														long BgL_restz00_1958;

														{	/* Reduce/1occ.scm 112 */
															int BgL_arg2644z00_1959;

															BgL_arg2644z00_1959 = (int) (((long) 16));
															{	/* Reduce/1occ.scm 112 */
																long BgL_auxz00_3937;

																BgL_auxz00_3937 = (long) (BgL_arg2644z00_1959);
																BgL_restz00_1958 =
																	(BgL_offsetz00_1955 % BgL_auxz00_3937);
														}}
														{	/* Reduce/1occ.scm 112 */

															BgL_method3349z00_1948 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1953,
																	(int) (BgL_modz00_1956)),
																(int) (BgL_restz00_1958));
							}}}}}}}}
							BgL_resetz00_1366 =
								PROCEDURE_ENTRY(BgL_method3349z00_1948) (BgL_method3349z00_1948,
								(obj_t) (BgL_arg3521z00_1375), BgL_1zd2expza2z70_1362, BEOA);
					}}
					{	/* Reduce/1occ.scm 117 */
						obj_t BgL_nfunz00_1367;

						{	/* Reduce/1occ.scm 117 */
							int BgL_auxz00_3947;

							BgL_auxz00_3947 = (int) (((long) 1));
							BgL_nfunz00_1367 = BGL_MVALUES_VAL(BgL_auxz00_3947);
						}
						{
							BgL_nodez00_bglt BgL_auxz00_3950;

							BgL_auxz00_3950 = (BgL_nodez00_bglt) (BgL_nfunz00_1367);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1361))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3950), BUNSPEC);
						}
						{	/* Reduce/1occ.scm 114 */
							obj_t BgL_resetz72z72_1368;

							{	/* Reduce/1occ.scm 115 */
								BgL_nodez00_bglt BgL_arg3519z00_1373;

								obj_t BgL_arg3520z00_1374;

								BgL_arg3519z00_1373 =
									(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1361))->BgL_argz00);
								if (CBOOL(BgL_resetz00_1366))
									{	/* Reduce/1occ.scm 115 */
										BgL_arg3520z00_1374 = BNIL;
									}
								else
									{	/* Reduce/1occ.scm 115 */
										BgL_arg3520z00_1374 = BgL_1zd2expza2z70_1362;
									}
								{	/* Reduce/1occ.scm 115 */
									obj_t BgL_method3349z00_1979;

									{	/* Reduce/1occ.scm 115 */
										BgL_objectz00_bglt BgL_objz00_1980;

										BgL_objz00_1980 =
											(BgL_objectz00_bglt) (BgL_arg3519z00_1373);
										{	/* Reduce/1occ.scm 115 */
											long BgL_objzd2classzd2numz00_1981;

											BgL_objzd2classzd2numz00_1981 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1980);
											{	/* Reduce/1occ.scm 115 */
												obj_t BgL_arg2643z00_1982;

												BgL_arg2643z00_1982 =
													PROCEDURE_REF
													(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
													(int) (((long) 1)));
												{	/* Reduce/1occ.scm 115 */
													obj_t BgL_arrayz00_1984;

													int BgL_offsetz00_1985;

													BgL_arrayz00_1984 = BgL_arg2643z00_1982;
													BgL_offsetz00_1985 =
														(int) (BgL_objzd2classzd2numz00_1981);
													{	/* Reduce/1occ.scm 115 */
														long BgL_offsetz00_1986;

														BgL_offsetz00_1986 =
															((long) (BgL_offsetz00_1985) - OBJECT_TYPE);
														{	/* Reduce/1occ.scm 115 */
															long BgL_modz00_1987;

															{	/* Reduce/1occ.scm 115 */
																int BgL_arg2645z00_1988;

																BgL_arg2645z00_1988 = (int) (((long) 16));
																{	/* Reduce/1occ.scm 115 */
																	long BgL_auxz00_3964;

																	BgL_auxz00_3964 =
																		(long) (BgL_arg2645z00_1988);
																	BgL_modz00_1987 =
																		(BgL_offsetz00_1986 / BgL_auxz00_3964);
															}}
															{	/* Reduce/1occ.scm 115 */
																long BgL_restz00_1989;

																{	/* Reduce/1occ.scm 115 */
																	int BgL_arg2644z00_1990;

																	BgL_arg2644z00_1990 = (int) (((long) 16));
																	{	/* Reduce/1occ.scm 115 */
																		long BgL_auxz00_3968;

																		BgL_auxz00_3968 =
																			(long) (BgL_arg2644z00_1990);
																		BgL_restz00_1989 =
																			(BgL_offsetz00_1986 % BgL_auxz00_3968);
																}}
																{	/* Reduce/1occ.scm 115 */

																	BgL_method3349z00_1979 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1984,
																			(int) (BgL_modz00_1987)),
																		(int) (BgL_restz00_1989));
									}}}}}}}}
									BgL_resetz72z72_1368 =
										PROCEDURE_ENTRY(BgL_method3349z00_1979)
										(BgL_method3349z00_1979, (obj_t) (BgL_arg3519z00_1373),
										BgL_arg3520z00_1374, BEOA);
							}}
							{	/* Reduce/1occ.scm 117 */
								obj_t BgL_nargz00_1369;

								{	/* Reduce/1occ.scm 117 */
									int BgL_auxz00_3978;

									BgL_auxz00_3978 = (int) (((long) 1));
									BgL_nargz00_1369 = BGL_MVALUES_VAL(BgL_auxz00_3978);
								}
								{
									BgL_nodez00_bglt BgL_auxz00_3981;

									BgL_auxz00_3981 = (BgL_nodez00_bglt) (BgL_nargz00_1369);
									((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1361))->
											BgL_argz00) =
										((BgL_nodez00_bglt) BgL_auxz00_3981), BUNSPEC);
								}
								{	/* Reduce/1occ.scm 117 */
									obj_t BgL_val0_3310z00_1370;

									if (CBOOL(BgL_resetz00_1366))
										{	/* Reduce/1occ.scm 117 */
											BgL_val0_3310z00_1370 = BgL_resetz00_1366;
										}
									else
										{	/* Reduce/1occ.scm 117 */
											BgL_val0_3310z00_1370 = BgL_resetz72z72_1368;
										}
									{	/* Reduce/1occ.scm 117 */
										int BgL_auxz00_3986;

										BgL_auxz00_3986 = (int) (((long) 2));
										BGL_MVALUES_NUMBER_SET(BgL_auxz00_3986);
									}
									{	/* Reduce/1occ.scm 117 */
										obj_t BgL_auxz00_3991;

										int BgL_auxz00_3989;

										BgL_auxz00_3991 = (obj_t) (BgL_nodez00_1361);
										BgL_auxz00_3989 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_auxz00_3989, BgL_auxz00_3991);
									}
									return BgL_val0_3310z00_1370;
								}
							}
						}
					}
				}
			}
		}
	}



/* node-1occ!-sequence3359 */
	obj_t BGl_nodezd21occz12zd2sequence3359z12zzreduce_1occz00(obj_t
		BgL_envz00_2731, obj_t BgL_nodez00_2732, obj_t BgL_1zd2expza2z70_2733)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 102 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1351;

				obj_t BgL_1zd2expza2z70_1352;

				BgL_nodez00_1351 = (BgL_sequencez00_bglt) (BgL_nodez00_2732);
				BgL_1zd2expza2z70_1352 = BgL_1zd2expza2z70_2733;
				{	/* Reduce/1occ.scm 104 */
					obj_t BgL_val0_3308z00_1356;

					{	/* Reduce/1occ.scm 104 */
						obj_t BgL_arg3517z00_1358;

						BgL_arg3517z00_1358 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1351))->BgL_nodesz00);
						BgL_val0_3308z00_1356 =
							BGl_nodezd21occza2z12z62zzreduce_1occz00(BgL_arg3517z00_1358,
							BgL_1zd2expza2z70_1352);
					}
					{	/* Reduce/1occ.scm 104 */
						int BgL_auxz00_3997;

						BgL_auxz00_3997 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_3997);
					}
					{	/* Reduce/1occ.scm 104 */
						obj_t BgL_auxz00_4002;

						int BgL_auxz00_4000;

						BgL_auxz00_4002 = (obj_t) (BgL_nodez00_1351);
						BgL_auxz00_4000 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_4000, BgL_auxz00_4002);
					}
					return BgL_val0_3308z00_1356;
				}
			}
		}
	}



/* node-1occ!-closure3357 */
	obj_t BGl_nodezd21occz12zd2closure3357z12zzreduce_1occz00(obj_t
		BgL_envz00_2734, obj_t BgL_nodez00_2735, obj_t BgL_1zd2expza2z70_2736)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 96 */
			{
				BgL_closurez00_bglt BgL_nodez00_1343;

				obj_t BgL_1zd2expza2z70_1344;

				{	/* Reduce/1occ.scm 97 */
					bool_t BgL_auxz00_4006;

					BgL_nodez00_1343 = (BgL_closurez00_bglt) (BgL_nodez00_2735);
					BgL_1zd2expza2z70_1344 = BgL_1zd2expza2z70_2736;
					{	/* Reduce/1occ.scm 97 */
						int BgL_auxz00_4007;

						BgL_auxz00_4007 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_4007);
					}
					{	/* Reduce/1occ.scm 97 */
						obj_t BgL_auxz00_4012;

						int BgL_auxz00_4010;

						BgL_auxz00_4012 = (obj_t) (BgL_nodez00_1343);
						BgL_auxz00_4010 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_4010, BgL_auxz00_4012);
					}
					BgL_auxz00_4006 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_4006);
				}
			}
		}
	}



/* node-1occ!-var3355 */
	obj_t BGl_nodezd21occz12zd2var3355z12zzreduce_1occz00(obj_t BgL_envz00_2737,
		obj_t BgL_nodez00_2738, obj_t BgL_1zd2expza2z70_2739)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 83 */
			{
				BgL_varz00_bglt BgL_nodez00_1328;

				obj_t BgL_1zd2expza2z70_1329;

				BgL_nodez00_1328 = (BgL_varz00_bglt) (BgL_nodez00_2738);
				BgL_1zd2expza2z70_1329 = BgL_1zd2expza2z70_2739;
				{	/* Reduce/1occ.scm 84 */
					BgL_variablez00_bglt BgL_vz00_1332;

					BgL_vz00_1332 =
						(((BgL_varz00_bglt) CREF(BgL_nodez00_1328))->BgL_variablez00);
					{	/* Reduce/1occ.scm 85 */
						obj_t BgL_falphaz00_1333;

						BgL_falphaz00_1333 =
							BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
							(obj_t) (BgL_vz00_1332), BgL_1zd2expza2z70_1329);
						if (PAIRP(BgL_falphaz00_1333))
							{	/* Reduce/1occ.scm 86 */
								{	/* Reduce/1occ.scm 88 */
									long BgL_arg3510z00_1335;

									BgL_arg3510z00_1335 =
										(
										(((BgL_variablez00_bglt) CREF(BgL_vz00_1332))->
											BgL_occurrencez00) - ((long) 1));
									((((BgL_variablez00_bglt) CREF(BgL_vz00_1332))->
											BgL_occurrencez00) =
										((long) BgL_arg3510z00_1335), BUNSPEC);
								}
								BGl_za2variablezd2removedza2zd2zzreduce_1occz00 =
									(BGl_za2variablezd2removedza2zd2zzreduce_1occz00 +
									((long) 1));
								{	/* Reduce/1occ.scm 90 */
									obj_t BgL_arg3513z00_1338;

									BgL_arg3513z00_1338 = CDR(BgL_falphaz00_1333);
									{	/* Reduce/1occ.scm 90 */
										BgL_nodez00_bglt BgL_nodez00_1906;

										BgL_nodez00_1906 = (BgL_nodez00_bglt) (BgL_arg3513z00_1338);
										{	/* Reduce/1occ.scm 90 */
											obj_t BgL_method3349z00_1908;

											{	/* Reduce/1occ.scm 90 */
												BgL_objectz00_bglt BgL_objz00_1909;

												BgL_objz00_1909 =
													(BgL_objectz00_bglt) (BgL_nodez00_1906);
												{	/* Reduce/1occ.scm 90 */
													long BgL_objzd2classzd2numz00_1910;

													BgL_objzd2classzd2numz00_1910 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1909);
													{	/* Reduce/1occ.scm 90 */
														obj_t BgL_arg2643z00_1911;

														BgL_arg2643z00_1911 =
															PROCEDURE_REF
															(BGl_nodezd21occz12zd2envz12zzreduce_1occz00,
															(int) (((long) 1)));
														{	/* Reduce/1occ.scm 90 */
															obj_t BgL_arrayz00_1913;

															int BgL_offsetz00_1914;

															BgL_arrayz00_1913 = BgL_arg2643z00_1911;
															BgL_offsetz00_1914 =
																(int) (BgL_objzd2classzd2numz00_1910);
															{	/* Reduce/1occ.scm 90 */
																long BgL_offsetz00_1915;

																BgL_offsetz00_1915 =
																	((long) (BgL_offsetz00_1914) - OBJECT_TYPE);
																{	/* Reduce/1occ.scm 90 */
																	long BgL_modz00_1916;

																	{	/* Reduce/1occ.scm 90 */
																		int BgL_arg2645z00_1917;

																		BgL_arg2645z00_1917 = (int) (((long) 16));
																		{	/* Reduce/1occ.scm 90 */
																			long BgL_auxz00_4036;

																			BgL_auxz00_4036 =
																				(long) (BgL_arg2645z00_1917);
																			BgL_modz00_1916 =
																				(BgL_offsetz00_1915 / BgL_auxz00_4036);
																	}}
																	{	/* Reduce/1occ.scm 90 */
																		long BgL_restz00_1918;

																		{	/* Reduce/1occ.scm 90 */
																			int BgL_arg2644z00_1919;

																			BgL_arg2644z00_1919 = (int) (((long) 16));
																			{	/* Reduce/1occ.scm 90 */
																				long BgL_auxz00_4040;

																				BgL_auxz00_4040 =
																					(long) (BgL_arg2644z00_1919);
																				BgL_restz00_1918 =
																					(BgL_offsetz00_1915 %
																					BgL_auxz00_4040);
																		}}
																		{	/* Reduce/1occ.scm 90 */

																			BgL_method3349z00_1908 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1913,
																					(int) (BgL_modz00_1916)),
																				(int) (BgL_restz00_1918));
											}}}}}}}}
											return
												PROCEDURE_ENTRY(BgL_method3349z00_1908)
												(BgL_method3349z00_1908, (obj_t) (BgL_nodez00_1906),
												BgL_1zd2expza2z70_1329, BEOA);
										}
									}
								}
							}
						else
							{	/* Reduce/1occ.scm 86 */
								{	/* Reduce/1occ.scm 91 */
									int BgL_auxz00_4050;

									BgL_auxz00_4050 = (int) (((long) 2));
									BGL_MVALUES_NUMBER_SET(BgL_auxz00_4050);
								}
								{	/* Reduce/1occ.scm 91 */
									obj_t BgL_auxz00_4055;

									int BgL_auxz00_4053;

									BgL_auxz00_4055 = (obj_t) (BgL_nodez00_1328);
									BgL_auxz00_4053 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_auxz00_4053, BgL_auxz00_4055);
								}
								return BFALSE;
							}
					}
				}
			}
		}
	}



/* node-1occ!-kwote3353 */
	obj_t BGl_nodezd21occz12zd2kwote3353z12zzreduce_1occz00(obj_t BgL_envz00_2740,
		obj_t BgL_nodez00_2741, obj_t BgL_1zd2expza2z70_2742)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 77 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1320;

				obj_t BgL_1zd2expza2z70_1321;

				{	/* Reduce/1occ.scm 78 */
					bool_t BgL_auxz00_4059;

					BgL_nodez00_1320 = (BgL_kwotez00_bglt) (BgL_nodez00_2741);
					BgL_1zd2expza2z70_1321 = BgL_1zd2expza2z70_2742;
					{	/* Reduce/1occ.scm 78 */
						int BgL_auxz00_4060;

						BgL_auxz00_4060 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_4060);
					}
					{	/* Reduce/1occ.scm 78 */
						obj_t BgL_auxz00_4065;

						int BgL_auxz00_4063;

						BgL_auxz00_4065 = (obj_t) (BgL_nodez00_1320);
						BgL_auxz00_4063 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_4063, BgL_auxz00_4065);
					}
					BgL_auxz00_4059 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_4059);
				}
			}
		}
	}



/* node-1occ!-atom3351 */
	obj_t BGl_nodezd21occz12zd2atom3351z12zzreduce_1occz00(obj_t BgL_envz00_2743,
		obj_t BgL_nodez00_2744, obj_t BgL_1zd2expza2z70_2745)
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 71 */
			{
				BgL_atomz00_bglt BgL_nodez00_1312;

				obj_t BgL_1zd2expza2z70_1313;

				{	/* Reduce/1occ.scm 72 */
					bool_t BgL_auxz00_4070;

					BgL_nodez00_1312 = (BgL_atomz00_bglt) (BgL_nodez00_2744);
					BgL_1zd2expza2z70_1313 = BgL_1zd2expza2z70_2745;
					{	/* Reduce/1occ.scm 72 */
						int BgL_auxz00_4071;

						BgL_auxz00_4071 = (int) (((long) 2));
						BGL_MVALUES_NUMBER_SET(BgL_auxz00_4071);
					}
					{	/* Reduce/1occ.scm 72 */
						obj_t BgL_auxz00_4076;

						int BgL_auxz00_4074;

						BgL_auxz00_4076 = (obj_t) (BgL_nodez00_1312);
						BgL_auxz00_4074 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_auxz00_4074, BgL_auxz00_4076);
					}
					BgL_auxz00_4070 = ((bool_t) 0);
					return BBOOL(BgL_auxz00_4070);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_1occz00()
	{
		AN_OBJECT;
		{	/* Reduce/1occ.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 269647501),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
			return
				BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string3668z00zzreduce_1occz00));
		}
	}

#ifdef __cplusplus
}
#endif
