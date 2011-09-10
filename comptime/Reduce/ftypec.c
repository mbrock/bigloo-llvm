/*===========================================================================*/
/*   (Reduce/ftypec.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/ftypec.scm)*/
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


	static obj_t
		BGl_nodezd2typecz12zd2appzd2ly3577zc0zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_nodez00_bglt, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static long BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl__nodezd2typecz12zc0zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl__nodezd2typecz12zd2default3572z12zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
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
	static obj_t BGl_toplevelzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2select3591z12zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2cast3583z12zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2setzd2exzd2i3597z12zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2sequence3575z12zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_nodezd2typecz12zd2boxzd2setz123604zd2zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2funcall3579z12zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2conditio3587z12zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_nodezd2typecz12zd2setq3585z12zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl__reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_nodezd2typecz12zd2jumpzd2exzd23599z12zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2 =
		BUNSPEC;
	static long BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2;
	static obj_t BGl_genericzd2initzd2zzreduce_flowzd2typeczd2();
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t
		BGl_nodezd2typecz12zd2boxzd2ref3606zc0zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2fail3589z12zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2makezd2box3601zc0zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2typecz12zd2app3608z12zzreduce_flowzd2typeczd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2letzd2fun3593zc0zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_nodezd2typecz12zd2letzd2var3595zc0zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
	static obj_t
		BGl_nodezd2typecz12zd2extern3581z12zzreduce_flowzd2typeczd2(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3916z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73929za7,
		BGl_nodezd2typecz12zd2select3591z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3917z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73930za7,
		BGl_nodezd2typecz12zd2letzd2fun3593zc0zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3918z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73931za7,
		BGl_nodezd2typecz12zd2letzd2var3595zc0zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3920z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73932za7,
		BGl_nodezd2typecz12zd2jumpzd2exzd23599z12zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3919z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73933za7,
		BGl_nodezd2typecz12zd2setzd2exzd2i3597z12zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3921z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73934za7,
		BGl_nodezd2typecz12zd2makezd2box3601zc0zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3922z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73935za7,
		BGl_nodezd2typecz12zd2boxzd2setz123604zd2zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3923z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73936za7,
		BGl_nodezd2typecz12zd2boxzd2ref3606zc0zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3924z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73937za7,
		BGl_nodezd2typecz12zd2app3608z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3903z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3903za700za7za7r3938za7, "      flow type check        ", 29);
	      DEFINE_STRING(BGl_string3904z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3904za700za7za7r3939za7, ")\n", 2);
	      DEFINE_STRING(BGl_string3905z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3905za700za7za7r3940za7, ", remaining: ", 13);
	      DEFINE_STRING(BGl_string3906z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3906za700za7za7r3941za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string3907z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3907za700za7za7r3942za7, "node-typec!", 11);
	      DEFINE_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3925za700za7za7r3943za7, "reduce_flow-typec", 17);
	      DEFINE_STRING(BGl_string3926z00zzreduce_flowzd2typeczd2,
		BgL_bgl_string3926za700za7za7r3944za7, "read done ", 10);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
		BgL_bgl__nodeza7d2typecza7123945z00,
		BGl__nodezd2typecz12zc0zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2typecz12zd2default3572zd2envzc0zzreduce_flowzd2typeczd2,
		BgL_bgl__nodeza7d2typecza7123946z00,
		BGl__nodezd2typecz12zd2default3572z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2flowzd2typezd2checkz12zd2envz12zzreduce_flowzd2typeczd2,
		BgL_bgl__reduceza7d2flowza7d3947z00,
		BGl__reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3908z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73948za7,
		BGl_nodezd2typecz12zd2sequence3575z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3910z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73949za7,
		BGl_nodezd2typecz12zd2funcall3579z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3909z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73950za7,
		BGl_nodezd2typecz12zd2appzd2ly3577zc0zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3911z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73951za7,
		BGl_nodezd2typecz12zd2extern3581z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3912z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73952za7,
		BGl_nodezd2typecz12zd2cast3583z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3913z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73953za7,
		BGl_nodezd2typecz12zd2setq3585z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3914z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73954za7,
		BGl_nodezd2typecz12zd2conditio3587z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3915z00zzreduce_flowzd2typeczd2,
		BgL_bgl_nodeza7d2typecza712za73955za7,
		BGl_nodezd2typecz12zd2fail3589z12zzreduce_flowzd2typeczd2, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzreduce_flowzd2typeczd2(long
		BgL_checksumz00_2729, char *BgL_fromz00_2730)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2))
				{
					BGl_requirezd2initializa7ationz75zzreduce_flowzd2typeczd2 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
					BGl_cnstzd2initzd2zzreduce_flowzd2typeczd2();
					BGl_importedzd2moduleszd2initz00zzreduce_flowzd2typeczd2();
					BGl_genericzd2initzd2zzreduce_flowzd2typeczd2();
					BGl_methodzd2initzd2zzreduce_flowzd2typeczd2();
					BGl_toplevelzd2initzd2zzreduce_flowzd2typeczd2();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_flowzd2typeczd2()
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"reduce_flow-typec");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_flow-typec");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_flowzd2typeczd2()
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			{	/* Reduce/ftypec.scm 15 */
				obj_t BgL_cportz00_2719;

				BgL_cportz00_2719 =
					bgl_open_input_string(BGl_string3926z00zzreduce_flowzd2typeczd2,
					(int) (((long) 0)));
				{
					long BgL_iz00_2720;

					BgL_iz00_2720 = ((long) 1);
				BgL_loopz00_2721:
					if ((BgL_iz00_2720 == ((long) -1)))
						{	/* Reduce/ftypec.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/ftypec.scm 15 */
							{	/* Reduce/ftypec.scm 15 */
								obj_t BgL_arg3928z00_2723;

								{	/* Reduce/ftypec.scm 15 */

									{	/* Reduce/ftypec.scm 15 */
										obj_t BgL_locationz00_2725;

										BgL_locationz00_2725 = BBOOL(((bool_t) 0));
										{	/* Reduce/ftypec.scm 15 */

											BgL_arg3928z00_2723 =
												BGl_readz00zz__readerz00(BgL_cportz00_2719,
												BgL_locationz00_2725);
										}
									}
								}
								{	/* Reduce/ftypec.scm 15 */
									int BgL_auxz00_2749;

									BgL_auxz00_2749 = (int) (BgL_iz00_2720);
									CNST_TABLE_SET(BgL_auxz00_2749, BgL_arg3928z00_2723);
							}}
							{	/* Reduce/ftypec.scm 15 */
								int BgL_auxz00_2726;

								BgL_auxz00_2726 = (int) ((BgL_iz00_2720 - ((long) 1)));
								{
									long BgL_iz00_2754;

									BgL_iz00_2754 = (long) (BgL_auxz00_2726);
									BgL_iz00_2720 = BgL_iz00_2754;
									goto BgL_loopz00_2721;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_flowzd2typeczd2()
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2 =
				((long) 0);
			BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2 = ((long) 0);
			return BUNSPEC;
		}
	}



/* reduce-flow-type-check! */
	BGL_EXPORTED_DEF obj_t
		BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 54 */
			{	/* Reduce/ftypec.scm 55 */
				obj_t BgL_list3609z00_864;

				BgL_list3609z00_864 =
					MAKE_PAIR(BGl_string3903z00zzreduce_flowzd2typeczd2, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3609z00_864);
			}
			{
				obj_t BgL_l3561z00_866;

				BgL_l3561z00_866 = BgL_globalsz00_1;
			BgL_zc3anonymousza33610ze3z83_867:
				if (PAIRP(BgL_l3561z00_866))
					{	/* Reduce/ftypec.scm 56 */
						{	/* Reduce/ftypec.scm 57 */
							obj_t BgL_globalz00_869;

							BgL_globalz00_869 = CAR(BgL_l3561z00_866);
							{	/* Reduce/ftypec.scm 57 */
								BgL_valuez00_bglt BgL_funz00_870;

								{
									BgL_variablez00_bglt BgL_auxz00_2762;

									BgL_auxz00_2762 = (BgL_variablez00_bglt) (BgL_globalz00_869);
									BgL_funz00_870 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2762))->
										BgL_valuez00);
								}
								{	/* Reduce/ftypec.scm 57 */
									obj_t BgL_nodez00_871;

									{
										BgL_sfunz00_bglt BgL_auxz00_2765;

										BgL_auxz00_2765 = (BgL_sfunz00_bglt) (BgL_funz00_870);
										BgL_nodez00_871 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2765))->BgL_bodyz00);
									}
									{	/* Reduce/ftypec.scm 58 */

										{	/* Reduce/ftypec.scm 59 */
											BgL_nodez00_bglt BgL_arg3612z00_872;

											{	/* Reduce/ftypec.scm 59 */
												BgL_nodez00_bglt BgL_res3807z00_1591;

												{	/* Reduce/ftypec.scm 59 */
													BgL_nodez00_bglt BgL_nodez00_1564;

													BgL_nodez00_1564 =
														(BgL_nodez00_bglt) (BgL_nodez00_871);
													{	/* Reduce/ftypec.scm 59 */
														obj_t BgL_method3573z00_1566;

														{	/* Reduce/ftypec.scm 59 */
															BgL_objectz00_bglt BgL_objz00_1567;

															BgL_objz00_1567 =
																(BgL_objectz00_bglt) (BgL_nodez00_1564);
															{	/* Reduce/ftypec.scm 59 */
																long BgL_objzd2classzd2numz00_1568;

																BgL_objzd2classzd2numz00_1568 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1567);
																{	/* Reduce/ftypec.scm 59 */
																	obj_t BgL_arg2643z00_1569;

																	BgL_arg2643z00_1569 =
																		PROCEDURE_REF
																		(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																		(int) (((long) 1)));
																	{	/* Reduce/ftypec.scm 59 */
																		obj_t BgL_arrayz00_1571;

																		int BgL_offsetz00_1572;

																		BgL_arrayz00_1571 = BgL_arg2643z00_1569;
																		BgL_offsetz00_1572 =
																			(int) (BgL_objzd2classzd2numz00_1568);
																		{	/* Reduce/ftypec.scm 59 */
																			long BgL_offsetz00_1573;

																			BgL_offsetz00_1573 =
																				(
																				(long) (BgL_offsetz00_1572) -
																				OBJECT_TYPE);
																			{	/* Reduce/ftypec.scm 59 */
																				long BgL_modz00_1574;

																				{	/* Reduce/ftypec.scm 59 */
																					int BgL_arg2645z00_1575;

																					BgL_arg2645z00_1575 =
																						(int) (((long) 16));
																					{	/* Reduce/ftypec.scm 59 */
																						long BgL_auxz00_2777;

																						BgL_auxz00_2777 =
																							(long) (BgL_arg2645z00_1575);
																						BgL_modz00_1574 =
																							(BgL_offsetz00_1573 /
																							BgL_auxz00_2777);
																				}}
																				{	/* Reduce/ftypec.scm 59 */
																					long BgL_restz00_1576;

																					{	/* Reduce/ftypec.scm 59 */
																						int BgL_arg2644z00_1577;

																						BgL_arg2644z00_1577 =
																							(int) (((long) 16));
																						{	/* Reduce/ftypec.scm 59 */
																							long BgL_auxz00_2781;

																							BgL_auxz00_2781 =
																								(long) (BgL_arg2644z00_1577);
																							BgL_restz00_1576 =
																								(BgL_offsetz00_1573 %
																								BgL_auxz00_2781);
																					}}
																					{	/* Reduce/ftypec.scm 59 */

																						BgL_method3573z00_1566 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1571,
																								(int) (BgL_modz00_1574)),
																							(int) (BgL_restz00_1576));
														}}}}}}}}
														BgL_res3807z00_1591 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3573z00_1566) (BgL_method3573z00_1566,
																(obj_t) (BgL_nodez00_1564), BNIL, BEOA));
												}}
												BgL_arg3612z00_872 = BgL_res3807z00_1591;
											}
											{
												obj_t BgL_auxz00_2794;

												BgL_sfunz00_bglt BgL_auxz00_2792;

												BgL_auxz00_2794 = (obj_t) (BgL_arg3612z00_872);
												BgL_auxz00_2792 = (BgL_sfunz00_bglt) (BgL_funz00_870);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2792))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_2794), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3561z00_2797;

							BgL_l3561z00_2797 = CDR(BgL_l3561z00_866);
							BgL_l3561z00_866 = BgL_l3561z00_2797;
							goto BgL_zc3anonymousza33610ze3z83_867;
						}
					}
				else
					{	/* Reduce/ftypec.scm 56 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/ftypec.scm 62 */
				obj_t BgL_list3614z00_875;

				{	/* Reduce/ftypec.scm 62 */
					obj_t BgL_arg3616z00_877;

					{	/* Reduce/ftypec.scm 62 */
						obj_t BgL_arg3617z00_878;

						{	/* Reduce/ftypec.scm 62 */
							obj_t BgL_arg3619z00_880;

							{	/* Reduce/ftypec.scm 62 */
								obj_t BgL_arg3620z00_881;

								BgL_arg3620z00_881 =
									MAKE_PAIR(BGl_string3904z00zzreduce_flowzd2typeczd2, BNIL);
								BgL_arg3619z00_880 =
									MAKE_PAIR(BINT
									(BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2),
									BgL_arg3620z00_881);
							}
							BgL_arg3617z00_878 =
								MAKE_PAIR(BGl_string3905z00zzreduce_flowzd2typeczd2,
								BgL_arg3619z00_880);
						}
						BgL_arg3616z00_877 =
							MAKE_PAIR(BINT
							(BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2),
							BgL_arg3617z00_878);
					}
					BgL_list3614z00_875 =
						MAKE_PAIR(BGl_string3906z00zzreduce_flowzd2typeczd2,
						BgL_arg3616z00_877);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3614z00_875);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-flow-type-check! */
	obj_t BGl__reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2643, obj_t BgL_globalsz00_2644)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 54 */
			return
				BGl_reducezd2flowzd2typezd2checkz12zc0zzreduce_flowzd2typeczd2
				(BgL_globalsz00_2644);
		}
	}



/* node-typec*! */
	obj_t BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2(obj_t
		BgL_nodeza2za2_38, obj_t BgL_stackz00_39)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 285 */
			{
				obj_t BgL_nodeza2za2_883;

				BgL_nodeza2za2_883 = BgL_nodeza2za2_38;
			BgL_zc3anonymousza33621ze3z83_884:
				if (NULLP(BgL_nodeza2za2_883))
					{	/* Reduce/ftypec.scm 287 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/ftypec.scm 287 */
						{	/* Reduce/ftypec.scm 290 */
							BgL_nodez00_bglt BgL_arg3623z00_886;

							{	/* Reduce/ftypec.scm 290 */
								obj_t BgL_arg3624z00_887;

								BgL_arg3624z00_887 = CAR(BgL_nodeza2za2_883);
								{	/* Reduce/ftypec.scm 290 */
									BgL_nodez00_bglt BgL_res3810z00_1624;

									{	/* Reduce/ftypec.scm 290 */
										BgL_nodez00_bglt BgL_nodez00_1597;

										BgL_nodez00_1597 = (BgL_nodez00_bglt) (BgL_arg3624z00_887);
										{	/* Reduce/ftypec.scm 290 */
											obj_t BgL_method3573z00_1599;

											{	/* Reduce/ftypec.scm 290 */
												BgL_objectz00_bglt BgL_objz00_1600;

												BgL_objz00_1600 =
													(BgL_objectz00_bglt) (BgL_nodez00_1597);
												{	/* Reduce/ftypec.scm 290 */
													long BgL_objzd2classzd2numz00_1601;

													BgL_objzd2classzd2numz00_1601 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1600);
													{	/* Reduce/ftypec.scm 290 */
														obj_t BgL_arg2643z00_1602;

														BgL_arg2643z00_1602 =
															PROCEDURE_REF
															(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
															(int) (((long) 1)));
														{	/* Reduce/ftypec.scm 290 */
															obj_t BgL_arrayz00_1604;

															int BgL_offsetz00_1605;

															BgL_arrayz00_1604 = BgL_arg2643z00_1602;
															BgL_offsetz00_1605 =
																(int) (BgL_objzd2classzd2numz00_1601);
															{	/* Reduce/ftypec.scm 290 */
																long BgL_offsetz00_1606;

																BgL_offsetz00_1606 =
																	((long) (BgL_offsetz00_1605) - OBJECT_TYPE);
																{	/* Reduce/ftypec.scm 290 */
																	long BgL_modz00_1607;

																	{	/* Reduce/ftypec.scm 290 */
																		int BgL_arg2645z00_1608;

																		BgL_arg2645z00_1608 = (int) (((long) 16));
																		{	/* Reduce/ftypec.scm 290 */
																			long BgL_auxz00_2822;

																			BgL_auxz00_2822 =
																				(long) (BgL_arg2645z00_1608);
																			BgL_modz00_1607 =
																				(BgL_offsetz00_1606 / BgL_auxz00_2822);
																	}}
																	{	/* Reduce/ftypec.scm 290 */
																		long BgL_restz00_1609;

																		{	/* Reduce/ftypec.scm 290 */
																			int BgL_arg2644z00_1610;

																			BgL_arg2644z00_1610 = (int) (((long) 16));
																			{	/* Reduce/ftypec.scm 290 */
																				long BgL_auxz00_2826;

																				BgL_auxz00_2826 =
																					(long) (BgL_arg2644z00_1610);
																				BgL_restz00_1609 =
																					(BgL_offsetz00_1606 %
																					BgL_auxz00_2826);
																		}}
																		{	/* Reduce/ftypec.scm 290 */

																			BgL_method3573z00_1599 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1604,
																					(int) (BgL_modz00_1607)),
																				(int) (BgL_restz00_1609));
											}}}}}}}}
											BgL_res3810z00_1624 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3573z00_1599) (BgL_method3573z00_1599,
													(obj_t) (BgL_nodez00_1597), BgL_stackz00_39, BEOA));
									}}
									BgL_arg3623z00_886 = BgL_res3810z00_1624;
							}}
							{	/* Reduce/ftypec.scm 290 */
								obj_t BgL_auxz00_2837;

								BgL_auxz00_2837 = (obj_t) (BgL_arg3623z00_886);
								SET_CAR(BgL_nodeza2za2_883, BgL_auxz00_2837);
						}}
						{
							obj_t BgL_nodeza2za2_2840;

							BgL_nodeza2za2_2840 = CDR(BgL_nodeza2za2_883);
							BgL_nodeza2za2_883 = BgL_nodeza2za2_2840;
							goto BgL_zc3anonymousza33621ze3z83_884;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_flowzd2typeczd2()
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_nodezd2typecz12zd2default3572zd2envzc0zzreduce_flowzd2typeczd2,
				BGl_nodez00zzast_nodez00, BGl_string3907z00zzreduce_flowzd2typeczd2);
		}
	}



/* node-typec! */
	BgL_nodez00_bglt
		BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(BgL_nodez00_bglt
		BgL_nodez00_2, obj_t BgL_stackz00_3)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 76 */
			{	/* Reduce/ftypec.scm 76 */
				obj_t BgL_method3573z00_1628;

				{	/* Reduce/ftypec.scm 76 */
					BgL_objectz00_bglt BgL_objz00_1629;

					BgL_objz00_1629 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/ftypec.scm 76 */
						long BgL_objzd2classzd2numz00_1630;

						BgL_objzd2classzd2numz00_1630 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1629);
						{	/* Reduce/ftypec.scm 76 */
							obj_t BgL_arg2643z00_1631;

							BgL_arg2643z00_1631 =
								PROCEDURE_REF
								(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
								(int) (((long) 1)));
							{	/* Reduce/ftypec.scm 76 */
								obj_t BgL_arrayz00_1633;

								int BgL_offsetz00_1634;

								BgL_arrayz00_1633 = BgL_arg2643z00_1631;
								BgL_offsetz00_1634 = (int) (BgL_objzd2classzd2numz00_1630);
								{	/* Reduce/ftypec.scm 76 */
									long BgL_offsetz00_1635;

									BgL_offsetz00_1635 =
										((long) (BgL_offsetz00_1634) - OBJECT_TYPE);
									{	/* Reduce/ftypec.scm 76 */
										long BgL_modz00_1636;

										{	/* Reduce/ftypec.scm 76 */
											int BgL_arg2645z00_1637;

											BgL_arg2645z00_1637 = (int) (((long) 16));
											{	/* Reduce/ftypec.scm 76 */
												long BgL_auxz00_2851;

												BgL_auxz00_2851 = (long) (BgL_arg2645z00_1637);
												BgL_modz00_1636 =
													(BgL_offsetz00_1635 / BgL_auxz00_2851);
										}}
										{	/* Reduce/ftypec.scm 76 */
											long BgL_restz00_1638;

											{	/* Reduce/ftypec.scm 76 */
												int BgL_arg2644z00_1639;

												BgL_arg2644z00_1639 = (int) (((long) 16));
												{	/* Reduce/ftypec.scm 76 */
													long BgL_auxz00_2855;

													BgL_auxz00_2855 = (long) (BgL_arg2644z00_1639);
													BgL_restz00_1638 =
														(BgL_offsetz00_1635 % BgL_auxz00_2855);
											}}
											{	/* Reduce/ftypec.scm 76 */

												BgL_method3573z00_1628 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1633,
														(int) (BgL_modz00_1636)), (int) (BgL_restz00_1638));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1628)
					(BgL_method3573z00_1628, (obj_t) (BgL_nodez00_2), BgL_stackz00_3,
						BEOA));
			}
		}
	}



/* _node-typec! */
	obj_t BGl__nodezd2typecz12zc0zzreduce_flowzd2typeczd2(obj_t BgL_envz00_2645,
		obj_t BgL_nodez00_2646, obj_t BgL_stackz00_2647)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 76 */
			return
				(obj_t) (BGl_nodezd2typecz12zc0zzreduce_flowzd2typeczd2(
					(BgL_nodez00_bglt) (BgL_nodez00_2646), BgL_stackz00_2647));
		}
	}



/* _node-typec!-default3572 */
	obj_t BGl__nodezd2typecz12zd2default3572z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2648, obj_t BgL_nodez00_2649, obj_t BgL_stackz00_2650)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_2649));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_flowzd2typeczd2()
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_sequencez00zzast_nodez00, BGl_proc3908z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3909z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_funcallz00zzast_nodez00, BGl_proc3910z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_externz00zzast_nodez00, BGl_proc3911z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_castz00zzast_nodez00, BGl_proc3912z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_setqz00zzast_nodez00, BGl_proc3913z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_conditionalz00zzast_nodez00,
				BGl_proc3914z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_failz00zzast_nodez00, BGl_proc3915z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_selectz00zzast_nodez00, BGl_proc3916z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3917z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3918z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_setzd2exzd2itz00zzast_nodez00,
				BGl_proc3919z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_jumpzd2exzd2itz00zzast_nodez00,
				BGl_proc3920z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3921z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_boxzd2setz12zc0zzast_nodez00,
				BGl_proc3922z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3923z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
				BGl_appz00zzast_nodez00, BGl_proc3924z00zzreduce_flowzd2typeczd2,
				BGl_string3907z00zzreduce_flowzd2typeczd2);
		}
	}



/* node-typec!-app3608 */
	obj_t BGl_nodezd2typecz12zd2app3608z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2668, obj_t BgL_nodez00_2669, obj_t BgL_stackz00_2670)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 301 */
			{
				BgL_appz00_bglt BgL_nodez00_1552;

				obj_t BgL_stackz00_1553;

				{	/* Reduce/ftypec.scm 302 */
					BgL_appz00_bglt BgL_auxz00_2888;

					BgL_nodez00_1552 = (BgL_appz00_bglt) (BgL_nodez00_2669);
					BgL_stackz00_1553 = BgL_stackz00_2670;
					{	/* Reduce/ftypec.scm 302 */
						obj_t BgL_arg3803z00_2641;

						BgL_arg3803z00_2641 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1552))->BgL_argsz00);
						BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2
							(BgL_arg3803z00_2641, BgL_stackz00_1553);
					}
					BgL_auxz00_2888 = BgL_nodez00_1552;
					return (obj_t) (BgL_auxz00_2888);
				}
			}
		}
	}



/* node-typec!-box-ref3606 */
	obj_t BGl_nodezd2typecz12zd2boxzd2ref3606zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2671, obj_t BgL_nodez00_2672, obj_t BgL_stackz00_2673)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 277 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1543;

				obj_t BgL_stackz00_1544;

				{	/* Reduce/ftypec.scm 278 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_2893;

					BgL_nodez00_1543 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2672);
					BgL_stackz00_1544 = BgL_stackz00_2673;
					{	/* Reduce/ftypec.scm 278 */
						BgL_nodez00_bglt BgL_arg3800z00_2607;

						{	/* Reduce/ftypec.scm 278 */
							BgL_varz00_bglt BgL_arg3801z00_2608;

							BgL_arg3801z00_2608 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1543))->BgL_varz00);
							{	/* Reduce/ftypec.scm 278 */
								BgL_nodez00_bglt BgL_res3902z00_2637;

								{	/* Reduce/ftypec.scm 278 */
									BgL_nodez00_bglt BgL_nodez00_2610;

									BgL_nodez00_2610 = (BgL_nodez00_bglt) (BgL_arg3801z00_2608);
									{	/* Reduce/ftypec.scm 278 */
										obj_t BgL_method3573z00_2612;

										{	/* Reduce/ftypec.scm 278 */
											BgL_objectz00_bglt BgL_objz00_2613;

											BgL_objz00_2613 = (BgL_objectz00_bglt) (BgL_nodez00_2610);
											{	/* Reduce/ftypec.scm 278 */
												long BgL_objzd2classzd2numz00_2614;

												BgL_objzd2classzd2numz00_2614 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2613);
												{	/* Reduce/ftypec.scm 278 */
													obj_t BgL_arg2643z00_2615;

													BgL_arg2643z00_2615 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
														(int) (((long) 1)));
													{	/* Reduce/ftypec.scm 278 */
														obj_t BgL_arrayz00_2617;

														int BgL_offsetz00_2618;

														BgL_arrayz00_2617 = BgL_arg2643z00_2615;
														BgL_offsetz00_2618 =
															(int) (BgL_objzd2classzd2numz00_2614);
														{	/* Reduce/ftypec.scm 278 */
															long BgL_offsetz00_2619;

															BgL_offsetz00_2619 =
																((long) (BgL_offsetz00_2618) - OBJECT_TYPE);
															{	/* Reduce/ftypec.scm 278 */
																long BgL_modz00_2620;

																{	/* Reduce/ftypec.scm 278 */
																	int BgL_arg2645z00_2621;

																	BgL_arg2645z00_2621 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 278 */
																		long BgL_auxz00_2904;

																		BgL_auxz00_2904 =
																			(long) (BgL_arg2645z00_2621);
																		BgL_modz00_2620 =
																			(BgL_offsetz00_2619 / BgL_auxz00_2904);
																}}
																{	/* Reduce/ftypec.scm 278 */
																	long BgL_restz00_2622;

																	{	/* Reduce/ftypec.scm 278 */
																		int BgL_arg2644z00_2623;

																		BgL_arg2644z00_2623 = (int) (((long) 16));
																		{	/* Reduce/ftypec.scm 278 */
																			long BgL_auxz00_2908;

																			BgL_auxz00_2908 =
																				(long) (BgL_arg2644z00_2623);
																			BgL_restz00_2622 =
																				(BgL_offsetz00_2619 % BgL_auxz00_2908);
																	}}
																	{	/* Reduce/ftypec.scm 278 */

																		BgL_method3573z00_2612 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2617,
																				(int) (BgL_modz00_2620)),
																			(int) (BgL_restz00_2622));
										}}}}}}}}
										BgL_res3902z00_2637 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3573z00_2612) (BgL_method3573z00_2612,
												(obj_t) (BgL_nodez00_2610), BgL_stackz00_1544, BEOA));
								}}
								BgL_arg3800z00_2607 = BgL_res3902z00_2637;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2919;

							BgL_auxz00_2919 = (BgL_varz00_bglt) (BgL_arg3800z00_2607);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1543))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_2919), BUNSPEC);
					}}
					BgL_auxz00_2893 = BgL_nodez00_1543;
					return (obj_t) (BgL_auxz00_2893);
				}
			}
		}
	}



/* node-typec!-box-set!3604 */
	obj_t BGl_nodezd2typecz12zd2boxzd2setz123604zd2zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2674, obj_t BgL_nodez00_2675, obj_t BgL_stackz00_2676)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 268 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1532;

				obj_t BgL_stackz00_1533;

				{	/* Reduce/ftypec.scm 269 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2924;

					BgL_nodez00_1532 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2675);
					BgL_stackz00_1533 = BgL_stackz00_2676;
					{	/* Reduce/ftypec.scm 270 */
						BgL_nodez00_bglt BgL_arg3795z00_1537;

						{	/* Reduce/ftypec.scm 270 */
							BgL_varz00_bglt BgL_arg3796z00_1538;

							BgL_arg3796z00_1538 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1532))->
								BgL_varz00);
							{	/* Reduce/ftypec.scm 270 */
								BgL_nodez00_bglt BgL_res3896z00_2572;

								{	/* Reduce/ftypec.scm 270 */
									BgL_nodez00_bglt BgL_nodez00_2545;

									BgL_nodez00_2545 = (BgL_nodez00_bglt) (BgL_arg3796z00_1538);
									{	/* Reduce/ftypec.scm 270 */
										obj_t BgL_method3573z00_2547;

										{	/* Reduce/ftypec.scm 270 */
											BgL_objectz00_bglt BgL_objz00_2548;

											BgL_objz00_2548 = (BgL_objectz00_bglt) (BgL_nodez00_2545);
											{	/* Reduce/ftypec.scm 270 */
												long BgL_objzd2classzd2numz00_2549;

												BgL_objzd2classzd2numz00_2549 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2548);
												{	/* Reduce/ftypec.scm 270 */
													obj_t BgL_arg2643z00_2550;

													BgL_arg2643z00_2550 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
														(int) (((long) 1)));
													{	/* Reduce/ftypec.scm 270 */
														obj_t BgL_arrayz00_2552;

														int BgL_offsetz00_2553;

														BgL_arrayz00_2552 = BgL_arg2643z00_2550;
														BgL_offsetz00_2553 =
															(int) (BgL_objzd2classzd2numz00_2549);
														{	/* Reduce/ftypec.scm 270 */
															long BgL_offsetz00_2554;

															BgL_offsetz00_2554 =
																((long) (BgL_offsetz00_2553) - OBJECT_TYPE);
															{	/* Reduce/ftypec.scm 270 */
																long BgL_modz00_2555;

																{	/* Reduce/ftypec.scm 270 */
																	int BgL_arg2645z00_2556;

																	BgL_arg2645z00_2556 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 270 */
																		long BgL_auxz00_2935;

																		BgL_auxz00_2935 =
																			(long) (BgL_arg2645z00_2556);
																		BgL_modz00_2555 =
																			(BgL_offsetz00_2554 / BgL_auxz00_2935);
																}}
																{	/* Reduce/ftypec.scm 270 */
																	long BgL_restz00_2557;

																	{	/* Reduce/ftypec.scm 270 */
																		int BgL_arg2644z00_2558;

																		BgL_arg2644z00_2558 = (int) (((long) 16));
																		{	/* Reduce/ftypec.scm 270 */
																			long BgL_auxz00_2939;

																			BgL_auxz00_2939 =
																				(long) (BgL_arg2644z00_2558);
																			BgL_restz00_2557 =
																				(BgL_offsetz00_2554 % BgL_auxz00_2939);
																	}}
																	{	/* Reduce/ftypec.scm 270 */

																		BgL_method3573z00_2547 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2552,
																				(int) (BgL_modz00_2555)),
																			(int) (BgL_restz00_2557));
										}}}}}}}}
										BgL_res3896z00_2572 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3573z00_2547) (BgL_method3573z00_2547,
												(obj_t) (BgL_nodez00_2545), BgL_stackz00_1533, BEOA));
								}}
								BgL_arg3795z00_1537 = BgL_res3896z00_2572;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2950;

							BgL_auxz00_2950 = (BgL_varz00_bglt) (BgL_arg3795z00_1537);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1532))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2950), BUNSPEC);
					}}
					{	/* Reduce/ftypec.scm 271 */
						BgL_nodez00_bglt BgL_arg3797z00_1539;

						{	/* Reduce/ftypec.scm 271 */
							BgL_nodez00_bglt BgL_arg3798z00_1540;

							BgL_arg3798z00_1540 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1532))->
								BgL_valuez00);
							{	/* Reduce/ftypec.scm 271 */
								BgL_nodez00_bglt BgL_res3899z00_2603;

								{	/* Reduce/ftypec.scm 271 */
									obj_t BgL_method3573z00_2578;

									{	/* Reduce/ftypec.scm 271 */
										BgL_objectz00_bglt BgL_objz00_2579;

										BgL_objz00_2579 =
											(BgL_objectz00_bglt) (BgL_arg3798z00_1540);
										{	/* Reduce/ftypec.scm 271 */
											long BgL_objzd2classzd2numz00_2580;

											BgL_objzd2classzd2numz00_2580 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2579);
											{	/* Reduce/ftypec.scm 271 */
												obj_t BgL_arg2643z00_2581;

												BgL_arg2643z00_2581 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 271 */
													obj_t BgL_arrayz00_2583;

													int BgL_offsetz00_2584;

													BgL_arrayz00_2583 = BgL_arg2643z00_2581;
													BgL_offsetz00_2584 =
														(int) (BgL_objzd2classzd2numz00_2580);
													{	/* Reduce/ftypec.scm 271 */
														long BgL_offsetz00_2585;

														BgL_offsetz00_2585 =
															((long) (BgL_offsetz00_2584) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 271 */
															long BgL_modz00_2586;

															{	/* Reduce/ftypec.scm 271 */
																int BgL_arg2645z00_2587;

																BgL_arg2645z00_2587 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 271 */
																	long BgL_auxz00_2962;

																	BgL_auxz00_2962 =
																		(long) (BgL_arg2645z00_2587);
																	BgL_modz00_2586 =
																		(BgL_offsetz00_2585 / BgL_auxz00_2962);
															}}
															{	/* Reduce/ftypec.scm 271 */
																long BgL_restz00_2588;

																{	/* Reduce/ftypec.scm 271 */
																	int BgL_arg2644z00_2589;

																	BgL_arg2644z00_2589 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 271 */
																		long BgL_auxz00_2966;

																		BgL_auxz00_2966 =
																			(long) (BgL_arg2644z00_2589);
																		BgL_restz00_2588 =
																			(BgL_offsetz00_2585 % BgL_auxz00_2966);
																}}
																{	/* Reduce/ftypec.scm 271 */

																	BgL_method3573z00_2578 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2583,
																			(int) (BgL_modz00_2586)),
																		(int) (BgL_restz00_2588));
									}}}}}}}}
									BgL_res3899z00_2603 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2578)
										(BgL_method3573z00_2578, (obj_t) (BgL_arg3798z00_1540),
											BgL_stackz00_1533, BEOA));
								}
								BgL_arg3797z00_1539 = BgL_res3899z00_2603;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1532))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3797z00_1539), BUNSPEC);
					}
					BgL_auxz00_2924 = BgL_nodez00_1532;
					return (obj_t) (BgL_auxz00_2924);
				}
			}
		}
	}



/* node-typec!-make-box3601 */
	obj_t BGl_nodezd2typecz12zd2makezd2box3601zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2677, obj_t BgL_nodez00_2678, obj_t BgL_stackz00_2679)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 260 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1523;

				obj_t BgL_stackz00_1524;

				{	/* Reduce/ftypec.scm 261 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_2980;

					BgL_nodez00_1523 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2678);
					BgL_stackz00_1524 = BgL_stackz00_2679;
					{	/* Reduce/ftypec.scm 261 */
						BgL_nodez00_bglt BgL_arg3792z00_2511;

						{	/* Reduce/ftypec.scm 261 */
							BgL_nodez00_bglt BgL_arg3793z00_2512;

							BgL_arg3793z00_2512 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1523))->
								BgL_valuez00);
							{	/* Reduce/ftypec.scm 261 */
								BgL_nodez00_bglt BgL_res3893z00_2541;

								{	/* Reduce/ftypec.scm 261 */
									obj_t BgL_method3573z00_2516;

									{	/* Reduce/ftypec.scm 261 */
										BgL_objectz00_bglt BgL_objz00_2517;

										BgL_objz00_2517 =
											(BgL_objectz00_bglt) (BgL_arg3793z00_2512);
										{	/* Reduce/ftypec.scm 261 */
											long BgL_objzd2classzd2numz00_2518;

											BgL_objzd2classzd2numz00_2518 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2517);
											{	/* Reduce/ftypec.scm 261 */
												obj_t BgL_arg2643z00_2519;

												BgL_arg2643z00_2519 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 261 */
													obj_t BgL_arrayz00_2521;

													int BgL_offsetz00_2522;

													BgL_arrayz00_2521 = BgL_arg2643z00_2519;
													BgL_offsetz00_2522 =
														(int) (BgL_objzd2classzd2numz00_2518);
													{	/* Reduce/ftypec.scm 261 */
														long BgL_offsetz00_2523;

														BgL_offsetz00_2523 =
															((long) (BgL_offsetz00_2522) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 261 */
															long BgL_modz00_2524;

															{	/* Reduce/ftypec.scm 261 */
																int BgL_arg2645z00_2525;

																BgL_arg2645z00_2525 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 261 */
																	long BgL_auxz00_2990;

																	BgL_auxz00_2990 =
																		(long) (BgL_arg2645z00_2525);
																	BgL_modz00_2524 =
																		(BgL_offsetz00_2523 / BgL_auxz00_2990);
															}}
															{	/* Reduce/ftypec.scm 261 */
																long BgL_restz00_2526;

																{	/* Reduce/ftypec.scm 261 */
																	int BgL_arg2644z00_2527;

																	BgL_arg2644z00_2527 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 261 */
																		long BgL_auxz00_2994;

																		BgL_auxz00_2994 =
																			(long) (BgL_arg2644z00_2527);
																		BgL_restz00_2526 =
																			(BgL_offsetz00_2523 % BgL_auxz00_2994);
																}}
																{	/* Reduce/ftypec.scm 261 */

																	BgL_method3573z00_2516 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2521,
																			(int) (BgL_modz00_2524)),
																		(int) (BgL_restz00_2526));
									}}}}}}}}
									BgL_res3893z00_2541 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2516)
										(BgL_method3573z00_2516, (obj_t) (BgL_arg3793z00_2512),
											BgL_stackz00_1524, BEOA));
								}
								BgL_arg3792z00_2511 = BgL_res3893z00_2541;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1523))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3792z00_2511), BUNSPEC);
					}
					BgL_auxz00_2980 = BgL_nodez00_1523;
					return (obj_t) (BgL_auxz00_2980);
				}
			}
		}
	}



/* node-typec!-jump-ex-3599 */
	obj_t BGl_nodezd2typecz12zd2jumpzd2exzd23599z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2680, obj_t BgL_nodez00_2681, obj_t BgL_stackz00_2682)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 251 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1512;

				obj_t BgL_stackz00_1513;

				{	/* Reduce/ftypec.scm 252 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3008;

					BgL_nodez00_1512 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2681);
					BgL_stackz00_1513 = BgL_stackz00_2682;
					{	/* Reduce/ftypec.scm 253 */
						BgL_nodez00_bglt BgL_arg3787z00_1517;

						{	/* Reduce/ftypec.scm 253 */
							BgL_nodez00_bglt BgL_arg3788z00_1518;

							BgL_arg3788z00_1518 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1512))->
								BgL_exitz00);
							{	/* Reduce/ftypec.scm 253 */
								BgL_nodez00_bglt BgL_res3887z00_2476;

								{	/* Reduce/ftypec.scm 253 */
									obj_t BgL_method3573z00_2451;

									{	/* Reduce/ftypec.scm 253 */
										BgL_objectz00_bglt BgL_objz00_2452;

										BgL_objz00_2452 =
											(BgL_objectz00_bglt) (BgL_arg3788z00_1518);
										{	/* Reduce/ftypec.scm 253 */
											long BgL_objzd2classzd2numz00_2453;

											BgL_objzd2classzd2numz00_2453 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2452);
											{	/* Reduce/ftypec.scm 253 */
												obj_t BgL_arg2643z00_2454;

												BgL_arg2643z00_2454 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 253 */
													obj_t BgL_arrayz00_2456;

													int BgL_offsetz00_2457;

													BgL_arrayz00_2456 = BgL_arg2643z00_2454;
													BgL_offsetz00_2457 =
														(int) (BgL_objzd2classzd2numz00_2453);
													{	/* Reduce/ftypec.scm 253 */
														long BgL_offsetz00_2458;

														BgL_offsetz00_2458 =
															((long) (BgL_offsetz00_2457) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 253 */
															long BgL_modz00_2459;

															{	/* Reduce/ftypec.scm 253 */
																int BgL_arg2645z00_2460;

																BgL_arg2645z00_2460 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 253 */
																	long BgL_auxz00_3018;

																	BgL_auxz00_3018 =
																		(long) (BgL_arg2645z00_2460);
																	BgL_modz00_2459 =
																		(BgL_offsetz00_2458 / BgL_auxz00_3018);
															}}
															{	/* Reduce/ftypec.scm 253 */
																long BgL_restz00_2461;

																{	/* Reduce/ftypec.scm 253 */
																	int BgL_arg2644z00_2462;

																	BgL_arg2644z00_2462 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 253 */
																		long BgL_auxz00_3022;

																		BgL_auxz00_3022 =
																			(long) (BgL_arg2644z00_2462);
																		BgL_restz00_2461 =
																			(BgL_offsetz00_2458 % BgL_auxz00_3022);
																}}
																{	/* Reduce/ftypec.scm 253 */

																	BgL_method3573z00_2451 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2456,
																			(int) (BgL_modz00_2459)),
																		(int) (BgL_restz00_2461));
									}}}}}}}}
									BgL_res3887z00_2476 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2451)
										(BgL_method3573z00_2451, (obj_t) (BgL_arg3788z00_1518),
											BgL_stackz00_1513, BEOA));
								}
								BgL_arg3787z00_1517 = BgL_res3887z00_2476;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1512))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3787z00_1517), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 254 */
						BgL_nodez00_bglt BgL_arg3789z00_1519;

						{	/* Reduce/ftypec.scm 254 */
							BgL_nodez00_bglt BgL_arg3790z00_1520;

							BgL_arg3790z00_1520 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1512))->
								BgL_valuez00);
							{	/* Reduce/ftypec.scm 254 */
								BgL_nodez00_bglt BgL_res3890z00_2507;

								{	/* Reduce/ftypec.scm 254 */
									obj_t BgL_method3573z00_2482;

									{	/* Reduce/ftypec.scm 254 */
										BgL_objectz00_bglt BgL_objz00_2483;

										BgL_objz00_2483 =
											(BgL_objectz00_bglt) (BgL_arg3790z00_1520);
										{	/* Reduce/ftypec.scm 254 */
											long BgL_objzd2classzd2numz00_2484;

											BgL_objzd2classzd2numz00_2484 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2483);
											{	/* Reduce/ftypec.scm 254 */
												obj_t BgL_arg2643z00_2485;

												BgL_arg2643z00_2485 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 254 */
													obj_t BgL_arrayz00_2487;

													int BgL_offsetz00_2488;

													BgL_arrayz00_2487 = BgL_arg2643z00_2485;
													BgL_offsetz00_2488 =
														(int) (BgL_objzd2classzd2numz00_2484);
													{	/* Reduce/ftypec.scm 254 */
														long BgL_offsetz00_2489;

														BgL_offsetz00_2489 =
															((long) (BgL_offsetz00_2488) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 254 */
															long BgL_modz00_2490;

															{	/* Reduce/ftypec.scm 254 */
																int BgL_arg2645z00_2491;

																BgL_arg2645z00_2491 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 254 */
																	long BgL_auxz00_3043;

																	BgL_auxz00_3043 =
																		(long) (BgL_arg2645z00_2491);
																	BgL_modz00_2490 =
																		(BgL_offsetz00_2489 / BgL_auxz00_3043);
															}}
															{	/* Reduce/ftypec.scm 254 */
																long BgL_restz00_2492;

																{	/* Reduce/ftypec.scm 254 */
																	int BgL_arg2644z00_2493;

																	BgL_arg2644z00_2493 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 254 */
																		long BgL_auxz00_3047;

																		BgL_auxz00_3047 =
																			(long) (BgL_arg2644z00_2493);
																		BgL_restz00_2492 =
																			(BgL_offsetz00_2489 % BgL_auxz00_3047);
																}}
																{	/* Reduce/ftypec.scm 254 */

																	BgL_method3573z00_2482 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2487,
																			(int) (BgL_modz00_2490)),
																		(int) (BgL_restz00_2492));
									}}}}}}}}
									BgL_res3890z00_2507 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2482)
										(BgL_method3573z00_2482, (obj_t) (BgL_arg3790z00_1520),
											BgL_stackz00_1513, BEOA));
								}
								BgL_arg3789z00_1519 = BgL_res3890z00_2507;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1512))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3789z00_1519), BUNSPEC);
					}
					BgL_auxz00_3008 = BgL_nodez00_1512;
					return (obj_t) (BgL_auxz00_3008);
				}
			}
		}
	}



/* node-typec!-set-ex-i3597 */
	obj_t BGl_nodezd2typecz12zd2setzd2exzd2i3597z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2683, obj_t BgL_nodez00_2684, obj_t BgL_stackz00_2685)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 242 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1501;

				obj_t BgL_stackz00_1502;

				{	/* Reduce/ftypec.scm 243 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3061;

					BgL_nodez00_1501 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2684);
					BgL_stackz00_1502 = BgL_stackz00_2685;
					{	/* Reduce/ftypec.scm 244 */
						BgL_nodez00_bglt BgL_arg3782z00_1506;

						{	/* Reduce/ftypec.scm 244 */
							BgL_nodez00_bglt BgL_arg3783z00_1507;

							BgL_arg3783z00_1507 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1501))->
								BgL_bodyz00);
							{	/* Reduce/ftypec.scm 244 */
								BgL_nodez00_bglt BgL_res3881z00_2414;

								{	/* Reduce/ftypec.scm 244 */
									obj_t BgL_method3573z00_2389;

									{	/* Reduce/ftypec.scm 244 */
										BgL_objectz00_bglt BgL_objz00_2390;

										BgL_objz00_2390 =
											(BgL_objectz00_bglt) (BgL_arg3783z00_1507);
										{	/* Reduce/ftypec.scm 244 */
											long BgL_objzd2classzd2numz00_2391;

											BgL_objzd2classzd2numz00_2391 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2390);
											{	/* Reduce/ftypec.scm 244 */
												obj_t BgL_arg2643z00_2392;

												BgL_arg2643z00_2392 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 244 */
													obj_t BgL_arrayz00_2394;

													int BgL_offsetz00_2395;

													BgL_arrayz00_2394 = BgL_arg2643z00_2392;
													BgL_offsetz00_2395 =
														(int) (BgL_objzd2classzd2numz00_2391);
													{	/* Reduce/ftypec.scm 244 */
														long BgL_offsetz00_2396;

														BgL_offsetz00_2396 =
															((long) (BgL_offsetz00_2395) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 244 */
															long BgL_modz00_2397;

															{	/* Reduce/ftypec.scm 244 */
																int BgL_arg2645z00_2398;

																BgL_arg2645z00_2398 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 244 */
																	long BgL_auxz00_3071;

																	BgL_auxz00_3071 =
																		(long) (BgL_arg2645z00_2398);
																	BgL_modz00_2397 =
																		(BgL_offsetz00_2396 / BgL_auxz00_3071);
															}}
															{	/* Reduce/ftypec.scm 244 */
																long BgL_restz00_2399;

																{	/* Reduce/ftypec.scm 244 */
																	int BgL_arg2644z00_2400;

																	BgL_arg2644z00_2400 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 244 */
																		long BgL_auxz00_3075;

																		BgL_auxz00_3075 =
																			(long) (BgL_arg2644z00_2400);
																		BgL_restz00_2399 =
																			(BgL_offsetz00_2396 % BgL_auxz00_3075);
																}}
																{	/* Reduce/ftypec.scm 244 */

																	BgL_method3573z00_2389 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2394,
																			(int) (BgL_modz00_2397)),
																		(int) (BgL_restz00_2399));
									}}}}}}}}
									BgL_res3881z00_2414 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2389)
										(BgL_method3573z00_2389, (obj_t) (BgL_arg3783z00_1507),
											BgL_stackz00_1502, BEOA));
								}
								BgL_arg3782z00_1506 = BgL_res3881z00_2414;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1501))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3782z00_1506), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 245 */
						BgL_nodez00_bglt BgL_arg3784z00_1508;

						{	/* Reduce/ftypec.scm 245 */
							BgL_varz00_bglt BgL_arg3785z00_1509;

							BgL_arg3785z00_1509 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1501))->
								BgL_varz00);
							{	/* Reduce/ftypec.scm 245 */
								BgL_nodez00_bglt BgL_res3884z00_2445;

								{	/* Reduce/ftypec.scm 245 */
									BgL_nodez00_bglt BgL_nodez00_2418;

									BgL_nodez00_2418 = (BgL_nodez00_bglt) (BgL_arg3785z00_1509);
									{	/* Reduce/ftypec.scm 245 */
										obj_t BgL_method3573z00_2420;

										{	/* Reduce/ftypec.scm 245 */
											BgL_objectz00_bglt BgL_objz00_2421;

											BgL_objz00_2421 = (BgL_objectz00_bglt) (BgL_nodez00_2418);
											{	/* Reduce/ftypec.scm 245 */
												long BgL_objzd2classzd2numz00_2422;

												BgL_objzd2classzd2numz00_2422 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2421);
												{	/* Reduce/ftypec.scm 245 */
													obj_t BgL_arg2643z00_2423;

													BgL_arg2643z00_2423 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
														(int) (((long) 1)));
													{	/* Reduce/ftypec.scm 245 */
														obj_t BgL_arrayz00_2425;

														int BgL_offsetz00_2426;

														BgL_arrayz00_2425 = BgL_arg2643z00_2423;
														BgL_offsetz00_2426 =
															(int) (BgL_objzd2classzd2numz00_2422);
														{	/* Reduce/ftypec.scm 245 */
															long BgL_offsetz00_2427;

															BgL_offsetz00_2427 =
																((long) (BgL_offsetz00_2426) - OBJECT_TYPE);
															{	/* Reduce/ftypec.scm 245 */
																long BgL_modz00_2428;

																{	/* Reduce/ftypec.scm 245 */
																	int BgL_arg2645z00_2429;

																	BgL_arg2645z00_2429 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 245 */
																		long BgL_auxz00_3097;

																		BgL_auxz00_3097 =
																			(long) (BgL_arg2645z00_2429);
																		BgL_modz00_2428 =
																			(BgL_offsetz00_2427 / BgL_auxz00_3097);
																}}
																{	/* Reduce/ftypec.scm 245 */
																	long BgL_restz00_2430;

																	{	/* Reduce/ftypec.scm 245 */
																		int BgL_arg2644z00_2431;

																		BgL_arg2644z00_2431 = (int) (((long) 16));
																		{	/* Reduce/ftypec.scm 245 */
																			long BgL_auxz00_3101;

																			BgL_auxz00_3101 =
																				(long) (BgL_arg2644z00_2431);
																			BgL_restz00_2430 =
																				(BgL_offsetz00_2427 % BgL_auxz00_3101);
																	}}
																	{	/* Reduce/ftypec.scm 245 */

																		BgL_method3573z00_2420 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2425,
																				(int) (BgL_modz00_2428)),
																			(int) (BgL_restz00_2430));
										}}}}}}}}
										BgL_res3884z00_2445 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3573z00_2420) (BgL_method3573z00_2420,
												(obj_t) (BgL_nodez00_2418), BgL_stackz00_1502, BEOA));
								}}
								BgL_arg3784z00_1508 = BgL_res3884z00_2445;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3112;

							BgL_auxz00_3112 = (BgL_varz00_bglt) (BgL_arg3784z00_1508);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1501))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3112), BUNSPEC);
					}}
					BgL_auxz00_3061 = BgL_nodez00_1501;
					return (obj_t) (BgL_auxz00_3061);
				}
			}
		}
	}



/* node-typec!-let-var3595 */
	obj_t BGl_nodezd2typecz12zd2letzd2var3595zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2686, obj_t BgL_nodez00_2687, obj_t BgL_stackz00_2688)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 231 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1482;

				obj_t BgL_stackz00_1483;

				{	/* Reduce/ftypec.scm 232 */
					BgL_letzd2varzd2_bglt BgL_auxz00_3117;

					BgL_nodez00_1482 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2687);
					BgL_stackz00_1483 = BgL_stackz00_2688;
					{	/* Reduce/ftypec.scm 233 */
						obj_t BgL_g3571z00_1487;

						BgL_g3571z00_1487 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1482))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3569z00_1489;

							BgL_l3569z00_1489 = BgL_g3571z00_1487;
						BgL_zc3anonymousza33774ze3z83_1490:
							if (PAIRP(BgL_l3569z00_1489))
								{	/* Reduce/ftypec.scm 233 */
									{	/* Reduce/ftypec.scm 234 */
										obj_t BgL_bindingz00_1492;

										BgL_bindingz00_1492 = CAR(BgL_l3569z00_1489);
										{	/* Reduce/ftypec.scm 234 */
											BgL_nodez00_bglt BgL_arg3776z00_1493;

											{	/* Reduce/ftypec.scm 234 */
												obj_t BgL_arg3777z00_1494;

												BgL_arg3777z00_1494 = CDR(BgL_bindingz00_1492);
												{	/* Reduce/ftypec.scm 234 */
													BgL_nodez00_bglt BgL_res3875z00_2351;

													{	/* Reduce/ftypec.scm 234 */
														BgL_nodez00_bglt BgL_nodez00_2324;

														BgL_nodez00_2324 =
															(BgL_nodez00_bglt) (BgL_arg3777z00_1494);
														{	/* Reduce/ftypec.scm 234 */
															obj_t BgL_method3573z00_2326;

															{	/* Reduce/ftypec.scm 234 */
																BgL_objectz00_bglt BgL_objz00_2327;

																BgL_objz00_2327 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2324);
																{	/* Reduce/ftypec.scm 234 */
																	long BgL_objzd2classzd2numz00_2328;

																	BgL_objzd2classzd2numz00_2328 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2327);
																	{	/* Reduce/ftypec.scm 234 */
																		obj_t BgL_arg2643z00_2329;

																		BgL_arg2643z00_2329 =
																			PROCEDURE_REF
																			(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																			(int) (((long) 1)));
																		{	/* Reduce/ftypec.scm 234 */
																			obj_t BgL_arrayz00_2331;

																			int BgL_offsetz00_2332;

																			BgL_arrayz00_2331 = BgL_arg2643z00_2329;
																			BgL_offsetz00_2332 =
																				(int) (BgL_objzd2classzd2numz00_2328);
																			{	/* Reduce/ftypec.scm 234 */
																				long BgL_offsetz00_2333;

																				BgL_offsetz00_2333 =
																					(
																					(long) (BgL_offsetz00_2332) -
																					OBJECT_TYPE);
																				{	/* Reduce/ftypec.scm 234 */
																					long BgL_modz00_2334;

																					{	/* Reduce/ftypec.scm 234 */
																						int BgL_arg2645z00_2335;

																						BgL_arg2645z00_2335 =
																							(int) (((long) 16));
																						{	/* Reduce/ftypec.scm 234 */
																							long BgL_auxz00_3132;

																							BgL_auxz00_3132 =
																								(long) (BgL_arg2645z00_2335);
																							BgL_modz00_2334 =
																								(BgL_offsetz00_2333 /
																								BgL_auxz00_3132);
																					}}
																					{	/* Reduce/ftypec.scm 234 */
																						long BgL_restz00_2336;

																						{	/* Reduce/ftypec.scm 234 */
																							int BgL_arg2644z00_2337;

																							BgL_arg2644z00_2337 =
																								(int) (((long) 16));
																							{	/* Reduce/ftypec.scm 234 */
																								long BgL_auxz00_3136;

																								BgL_auxz00_3136 =
																									(long) (BgL_arg2644z00_2337);
																								BgL_restz00_2336 =
																									(BgL_offsetz00_2333 %
																									BgL_auxz00_3136);
																						}}
																						{	/* Reduce/ftypec.scm 234 */

																							BgL_method3573z00_2326 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2331,
																									(int) (BgL_modz00_2334)),
																								(int) (BgL_restz00_2336));
															}}}}}}}}
															BgL_res3875z00_2351 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3573z00_2326)
																(BgL_method3573z00_2326,
																	(obj_t) (BgL_nodez00_2324), BgL_stackz00_1483,
																	BEOA));
													}}
													BgL_arg3776z00_1493 = BgL_res3875z00_2351;
											}}
											{	/* Reduce/ftypec.scm 234 */
												obj_t BgL_auxz00_3147;

												BgL_auxz00_3147 = (obj_t) (BgL_arg3776z00_1493);
												SET_CDR(BgL_bindingz00_1492, BgL_auxz00_3147);
									}}}
									{
										obj_t BgL_l3569z00_3150;

										BgL_l3569z00_3150 = CDR(BgL_l3569z00_1489);
										BgL_l3569z00_1489 = BgL_l3569z00_3150;
										goto BgL_zc3anonymousza33774ze3z83_1490;
									}
								}
							else
								{	/* Reduce/ftypec.scm 233 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/ftypec.scm 236 */
						BgL_nodez00_bglt BgL_arg3779z00_1497;

						{	/* Reduce/ftypec.scm 236 */
							BgL_nodez00_bglt BgL_arg3780z00_1498;

							BgL_arg3780z00_1498 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1482))->BgL_bodyz00);
							{	/* Reduce/ftypec.scm 236 */
								BgL_nodez00_bglt BgL_res3878z00_2383;

								{	/* Reduce/ftypec.scm 236 */
									obj_t BgL_method3573z00_2358;

									{	/* Reduce/ftypec.scm 236 */
										BgL_objectz00_bglt BgL_objz00_2359;

										BgL_objz00_2359 =
											(BgL_objectz00_bglt) (BgL_arg3780z00_1498);
										{	/* Reduce/ftypec.scm 236 */
											long BgL_objzd2classzd2numz00_2360;

											BgL_objzd2classzd2numz00_2360 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2359);
											{	/* Reduce/ftypec.scm 236 */
												obj_t BgL_arg2643z00_2361;

												BgL_arg2643z00_2361 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 236 */
													obj_t BgL_arrayz00_2363;

													int BgL_offsetz00_2364;

													BgL_arrayz00_2363 = BgL_arg2643z00_2361;
													BgL_offsetz00_2364 =
														(int) (BgL_objzd2classzd2numz00_2360);
													{	/* Reduce/ftypec.scm 236 */
														long BgL_offsetz00_2365;

														BgL_offsetz00_2365 =
															((long) (BgL_offsetz00_2364) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 236 */
															long BgL_modz00_2366;

															{	/* Reduce/ftypec.scm 236 */
																int BgL_arg2645z00_2367;

																BgL_arg2645z00_2367 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 236 */
																	long BgL_auxz00_3161;

																	BgL_auxz00_3161 =
																		(long) (BgL_arg2645z00_2367);
																	BgL_modz00_2366 =
																		(BgL_offsetz00_2365 / BgL_auxz00_3161);
															}}
															{	/* Reduce/ftypec.scm 236 */
																long BgL_restz00_2368;

																{	/* Reduce/ftypec.scm 236 */
																	int BgL_arg2644z00_2369;

																	BgL_arg2644z00_2369 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 236 */
																		long BgL_auxz00_3165;

																		BgL_auxz00_3165 =
																			(long) (BgL_arg2644z00_2369);
																		BgL_restz00_2368 =
																			(BgL_offsetz00_2365 % BgL_auxz00_3165);
																}}
																{	/* Reduce/ftypec.scm 236 */

																	BgL_method3573z00_2358 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2363,
																			(int) (BgL_modz00_2366)),
																		(int) (BgL_restz00_2368));
									}}}}}}}}
									BgL_res3878z00_2383 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2358)
										(BgL_method3573z00_2358, (obj_t) (BgL_arg3780z00_1498),
											BgL_stackz00_1483, BEOA));
								}
								BgL_arg3779z00_1497 = BgL_res3878z00_2383;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1482))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3779z00_1497), BUNSPEC);
					}
					BgL_auxz00_3117 = BgL_nodez00_1482;
					return (obj_t) (BgL_auxz00_3117);
				}
			}
		}
	}



/* node-typec!-let-fun3593 */
	obj_t BGl_nodezd2typecz12zd2letzd2fun3593zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2689, obj_t BgL_nodez00_2690, obj_t BgL_stackz00_2691)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 219 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1462;

				obj_t BgL_stackz00_1463;

				{	/* Reduce/ftypec.scm 220 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3179;

					BgL_nodez00_1462 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2690);
					BgL_stackz00_1463 = BgL_stackz00_2691;
					{	/* Reduce/ftypec.scm 221 */
						obj_t BgL_g3568z00_1467;

						BgL_g3568z00_1467 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1462))->BgL_localsz00);
						{
							obj_t BgL_l3566z00_1469;

							BgL_l3566z00_1469 = BgL_g3568z00_1467;
						BgL_zc3anonymousza33766ze3z83_1470:
							if (PAIRP(BgL_l3566z00_1469))
								{	/* Reduce/ftypec.scm 221 */
									{	/* Reduce/ftypec.scm 222 */
										obj_t BgL_localz00_1472;

										BgL_localz00_1472 = CAR(BgL_l3566z00_1469);
										{	/* Reduce/ftypec.scm 222 */
											BgL_valuez00_bglt BgL_funz00_1473;

											{
												BgL_variablez00_bglt BgL_auxz00_3184;

												BgL_auxz00_3184 =
													(BgL_variablez00_bglt) (BgL_localz00_1472);
												BgL_funz00_1473 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3184))->
													BgL_valuez00);
											}
											{	/* Reduce/ftypec.scm 223 */
												BgL_nodez00_bglt BgL_arg3768z00_1474;

												{	/* Reduce/ftypec.scm 223 */
													obj_t BgL_arg3769z00_1475;

													{
														BgL_sfunz00_bglt BgL_auxz00_3187;

														BgL_auxz00_3187 =
															(BgL_sfunz00_bglt) (BgL_funz00_1473);
														BgL_arg3769z00_1475 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3187))->
															BgL_bodyz00);
													}
													{	/* Reduce/ftypec.scm 223 */
														BgL_nodez00_bglt BgL_res3869z00_2285;

														{	/* Reduce/ftypec.scm 223 */
															BgL_nodez00_bglt BgL_nodez00_2258;

															BgL_nodez00_2258 =
																(BgL_nodez00_bglt) (BgL_arg3769z00_1475);
															{	/* Reduce/ftypec.scm 223 */
																obj_t BgL_method3573z00_2260;

																{	/* Reduce/ftypec.scm 223 */
																	BgL_objectz00_bglt BgL_objz00_2261;

																	BgL_objz00_2261 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2258);
																	{	/* Reduce/ftypec.scm 223 */
																		long BgL_objzd2classzd2numz00_2262;

																		BgL_objzd2classzd2numz00_2262 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2261);
																		{	/* Reduce/ftypec.scm 223 */
																			obj_t BgL_arg2643z00_2263;

																			BgL_arg2643z00_2263 =
																				PROCEDURE_REF
																				(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																				(int) (((long) 1)));
																			{	/* Reduce/ftypec.scm 223 */
																				obj_t BgL_arrayz00_2265;

																				int BgL_offsetz00_2266;

																				BgL_arrayz00_2265 = BgL_arg2643z00_2263;
																				BgL_offsetz00_2266 =
																					(int) (BgL_objzd2classzd2numz00_2262);
																				{	/* Reduce/ftypec.scm 223 */
																					long BgL_offsetz00_2267;

																					BgL_offsetz00_2267 =
																						(
																						(long) (BgL_offsetz00_2266) -
																						OBJECT_TYPE);
																					{	/* Reduce/ftypec.scm 223 */
																						long BgL_modz00_2268;

																						{	/* Reduce/ftypec.scm 223 */
																							int BgL_arg2645z00_2269;

																							BgL_arg2645z00_2269 =
																								(int) (((long) 16));
																							{	/* Reduce/ftypec.scm 223 */
																								long BgL_auxz00_3199;

																								BgL_auxz00_3199 =
																									(long) (BgL_arg2645z00_2269);
																								BgL_modz00_2268 =
																									(BgL_offsetz00_2267 /
																									BgL_auxz00_3199);
																						}}
																						{	/* Reduce/ftypec.scm 223 */
																							long BgL_restz00_2270;

																							{	/* Reduce/ftypec.scm 223 */
																								int BgL_arg2644z00_2271;

																								BgL_arg2644z00_2271 =
																									(int) (((long) 16));
																								{	/* Reduce/ftypec.scm 223 */
																									long BgL_auxz00_3203;

																									BgL_auxz00_3203 =
																										(long)
																										(BgL_arg2644z00_2271);
																									BgL_restz00_2270 =
																										(BgL_offsetz00_2267 %
																										BgL_auxz00_3203);
																							}}
																							{	/* Reduce/ftypec.scm 223 */

																								BgL_method3573z00_2260 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2265,
																										(int) (BgL_modz00_2268)),
																									(int) (BgL_restz00_2270));
																}}}}}}}}
																BgL_res3869z00_2285 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3573z00_2260)
																	(BgL_method3573z00_2260,
																		(obj_t) (BgL_nodez00_2258),
																		BgL_stackz00_1463, BEOA));
														}}
														BgL_arg3768z00_1474 = BgL_res3869z00_2285;
												}}
												{
													obj_t BgL_auxz00_3216;

													BgL_sfunz00_bglt BgL_auxz00_3214;

													BgL_auxz00_3216 = (obj_t) (BgL_arg3768z00_1474);
													BgL_auxz00_3214 =
														(BgL_sfunz00_bglt) (BgL_funz00_1473);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3214))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3216), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3566z00_3219;

										BgL_l3566z00_3219 = CDR(BgL_l3566z00_1469);
										BgL_l3566z00_1469 = BgL_l3566z00_3219;
										goto BgL_zc3anonymousza33766ze3z83_1470;
									}
								}
							else
								{	/* Reduce/ftypec.scm 221 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/ftypec.scm 225 */
						BgL_nodez00_bglt BgL_arg3771z00_1478;

						{	/* Reduce/ftypec.scm 225 */
							BgL_nodez00_bglt BgL_arg3772z00_1479;

							BgL_arg3772z00_1479 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1462))->BgL_bodyz00);
							{	/* Reduce/ftypec.scm 225 */
								BgL_nodez00_bglt BgL_res3872z00_2317;

								{	/* Reduce/ftypec.scm 225 */
									obj_t BgL_method3573z00_2292;

									{	/* Reduce/ftypec.scm 225 */
										BgL_objectz00_bglt BgL_objz00_2293;

										BgL_objz00_2293 =
											(BgL_objectz00_bglt) (BgL_arg3772z00_1479);
										{	/* Reduce/ftypec.scm 225 */
											long BgL_objzd2classzd2numz00_2294;

											BgL_objzd2classzd2numz00_2294 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2293);
											{	/* Reduce/ftypec.scm 225 */
												obj_t BgL_arg2643z00_2295;

												BgL_arg2643z00_2295 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 225 */
													obj_t BgL_arrayz00_2297;

													int BgL_offsetz00_2298;

													BgL_arrayz00_2297 = BgL_arg2643z00_2295;
													BgL_offsetz00_2298 =
														(int) (BgL_objzd2classzd2numz00_2294);
													{	/* Reduce/ftypec.scm 225 */
														long BgL_offsetz00_2299;

														BgL_offsetz00_2299 =
															((long) (BgL_offsetz00_2298) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 225 */
															long BgL_modz00_2300;

															{	/* Reduce/ftypec.scm 225 */
																int BgL_arg2645z00_2301;

																BgL_arg2645z00_2301 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 225 */
																	long BgL_auxz00_3230;

																	BgL_auxz00_3230 =
																		(long) (BgL_arg2645z00_2301);
																	BgL_modz00_2300 =
																		(BgL_offsetz00_2299 / BgL_auxz00_3230);
															}}
															{	/* Reduce/ftypec.scm 225 */
																long BgL_restz00_2302;

																{	/* Reduce/ftypec.scm 225 */
																	int BgL_arg2644z00_2303;

																	BgL_arg2644z00_2303 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 225 */
																		long BgL_auxz00_3234;

																		BgL_auxz00_3234 =
																			(long) (BgL_arg2644z00_2303);
																		BgL_restz00_2302 =
																			(BgL_offsetz00_2299 % BgL_auxz00_3234);
																}}
																{	/* Reduce/ftypec.scm 225 */

																	BgL_method3573z00_2292 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2297,
																			(int) (BgL_modz00_2300)),
																		(int) (BgL_restz00_2302));
									}}}}}}}}
									BgL_res3872z00_2317 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2292)
										(BgL_method3573z00_2292, (obj_t) (BgL_arg3772z00_1479),
											BgL_stackz00_1463, BEOA));
								}
								BgL_arg3771z00_1478 = BgL_res3872z00_2317;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1462))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3771z00_1478), BUNSPEC);
					}
					BgL_auxz00_3179 = BgL_nodez00_1462;
					return (obj_t) (BgL_auxz00_3179);
				}
			}
		}
	}



/* node-typec!-select3591 */
	obj_t BGl_nodezd2typecz12zd2select3591z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2692, obj_t BgL_nodez00_2693, obj_t BgL_stackz00_2694)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 208 */
			{
				BgL_selectz00_bglt BgL_nodez00_1443;

				obj_t BgL_stackz00_1444;

				{	/* Reduce/ftypec.scm 209 */
					BgL_selectz00_bglt BgL_auxz00_3248;

					BgL_nodez00_1443 = (BgL_selectz00_bglt) (BgL_nodez00_2693);
					BgL_stackz00_1444 = BgL_stackz00_2694;
					{	/* Reduce/ftypec.scm 210 */
						BgL_nodez00_bglt BgL_arg3758z00_1448;

						{	/* Reduce/ftypec.scm 210 */
							BgL_nodez00_bglt BgL_arg3759z00_1449;

							BgL_arg3759z00_1449 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1443))->BgL_testz00);
							{	/* Reduce/ftypec.scm 210 */
								BgL_nodez00_bglt BgL_res3863z00_2215;

								{	/* Reduce/ftypec.scm 210 */
									obj_t BgL_method3573z00_2190;

									{	/* Reduce/ftypec.scm 210 */
										BgL_objectz00_bglt BgL_objz00_2191;

										BgL_objz00_2191 =
											(BgL_objectz00_bglt) (BgL_arg3759z00_1449);
										{	/* Reduce/ftypec.scm 210 */
											long BgL_objzd2classzd2numz00_2192;

											BgL_objzd2classzd2numz00_2192 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2191);
											{	/* Reduce/ftypec.scm 210 */
												obj_t BgL_arg2643z00_2193;

												BgL_arg2643z00_2193 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 210 */
													obj_t BgL_arrayz00_2195;

													int BgL_offsetz00_2196;

													BgL_arrayz00_2195 = BgL_arg2643z00_2193;
													BgL_offsetz00_2196 =
														(int) (BgL_objzd2classzd2numz00_2192);
													{	/* Reduce/ftypec.scm 210 */
														long BgL_offsetz00_2197;

														BgL_offsetz00_2197 =
															((long) (BgL_offsetz00_2196) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 210 */
															long BgL_modz00_2198;

															{	/* Reduce/ftypec.scm 210 */
																int BgL_arg2645z00_2199;

																BgL_arg2645z00_2199 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 210 */
																	long BgL_auxz00_3258;

																	BgL_auxz00_3258 =
																		(long) (BgL_arg2645z00_2199);
																	BgL_modz00_2198 =
																		(BgL_offsetz00_2197 / BgL_auxz00_3258);
															}}
															{	/* Reduce/ftypec.scm 210 */
																long BgL_restz00_2200;

																{	/* Reduce/ftypec.scm 210 */
																	int BgL_arg2644z00_2201;

																	BgL_arg2644z00_2201 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 210 */
																		long BgL_auxz00_3262;

																		BgL_auxz00_3262 =
																			(long) (BgL_arg2644z00_2201);
																		BgL_restz00_2200 =
																			(BgL_offsetz00_2197 % BgL_auxz00_3262);
																}}
																{	/* Reduce/ftypec.scm 210 */

																	BgL_method3573z00_2190 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2195,
																			(int) (BgL_modz00_2198)),
																		(int) (BgL_restz00_2200));
									}}}}}}}}
									BgL_res3863z00_2215 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2190)
										(BgL_method3573z00_2190, (obj_t) (BgL_arg3759z00_1449),
											BgL_stackz00_1444, BEOA));
								}
								BgL_arg3758z00_1448 = BgL_res3863z00_2215;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1443))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3758z00_1448), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 211 */
						obj_t BgL_g3565z00_1450;

						BgL_g3565z00_1450 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1443))->BgL_clausesz00);
						{
							obj_t BgL_l3563z00_1452;

							BgL_l3563z00_1452 = BgL_g3565z00_1450;
						BgL_zc3anonymousza33760ze3z83_1453:
							if (PAIRP(BgL_l3563z00_1452))
								{	/* Reduce/ftypec.scm 211 */
									{	/* Reduce/ftypec.scm 212 */
										obj_t BgL_clausez00_1455;

										BgL_clausez00_1455 = CAR(BgL_l3563z00_1452);
										{	/* Reduce/ftypec.scm 212 */
											BgL_nodez00_bglt BgL_arg3762z00_1456;

											{	/* Reduce/ftypec.scm 212 */
												obj_t BgL_arg3763z00_1457;

												BgL_arg3763z00_1457 = CDR(BgL_clausez00_1455);
												{	/* Reduce/ftypec.scm 212 */
													BgL_nodez00_bglt BgL_res3866z00_2249;

													{	/* Reduce/ftypec.scm 212 */
														BgL_nodez00_bglt BgL_nodez00_2222;

														BgL_nodez00_2222 =
															(BgL_nodez00_bglt) (BgL_arg3763z00_1457);
														{	/* Reduce/ftypec.scm 212 */
															obj_t BgL_method3573z00_2224;

															{	/* Reduce/ftypec.scm 212 */
																BgL_objectz00_bglt BgL_objz00_2225;

																BgL_objz00_2225 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2222);
																{	/* Reduce/ftypec.scm 212 */
																	long BgL_objzd2classzd2numz00_2226;

																	BgL_objzd2classzd2numz00_2226 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2225);
																	{	/* Reduce/ftypec.scm 212 */
																		obj_t BgL_arg2643z00_2227;

																		BgL_arg2643z00_2227 =
																			PROCEDURE_REF
																			(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																			(int) (((long) 1)));
																		{	/* Reduce/ftypec.scm 212 */
																			obj_t BgL_arrayz00_2229;

																			int BgL_offsetz00_2230;

																			BgL_arrayz00_2229 = BgL_arg2643z00_2227;
																			BgL_offsetz00_2230 =
																				(int) (BgL_objzd2classzd2numz00_2226);
																			{	/* Reduce/ftypec.scm 212 */
																				long BgL_offsetz00_2231;

																				BgL_offsetz00_2231 =
																					(
																					(long) (BgL_offsetz00_2230) -
																					OBJECT_TYPE);
																				{	/* Reduce/ftypec.scm 212 */
																					long BgL_modz00_2232;

																					{	/* Reduce/ftypec.scm 212 */
																						int BgL_arg2645z00_2233;

																						BgL_arg2645z00_2233 =
																							(int) (((long) 16));
																						{	/* Reduce/ftypec.scm 212 */
																							long BgL_auxz00_3288;

																							BgL_auxz00_3288 =
																								(long) (BgL_arg2645z00_2233);
																							BgL_modz00_2232 =
																								(BgL_offsetz00_2231 /
																								BgL_auxz00_3288);
																					}}
																					{	/* Reduce/ftypec.scm 212 */
																						long BgL_restz00_2234;

																						{	/* Reduce/ftypec.scm 212 */
																							int BgL_arg2644z00_2235;

																							BgL_arg2644z00_2235 =
																								(int) (((long) 16));
																							{	/* Reduce/ftypec.scm 212 */
																								long BgL_auxz00_3292;

																								BgL_auxz00_3292 =
																									(long) (BgL_arg2644z00_2235);
																								BgL_restz00_2234 =
																									(BgL_offsetz00_2231 %
																									BgL_auxz00_3292);
																						}}
																						{	/* Reduce/ftypec.scm 212 */

																							BgL_method3573z00_2224 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2229,
																									(int) (BgL_modz00_2232)),
																								(int) (BgL_restz00_2234));
															}}}}}}}}
															BgL_res3866z00_2249 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3573z00_2224)
																(BgL_method3573z00_2224,
																	(obj_t) (BgL_nodez00_2222), BgL_stackz00_1444,
																	BEOA));
													}}
													BgL_arg3762z00_1456 = BgL_res3866z00_2249;
											}}
											{	/* Reduce/ftypec.scm 212 */
												obj_t BgL_auxz00_3303;

												BgL_auxz00_3303 = (obj_t) (BgL_arg3762z00_1456);
												SET_CDR(BgL_clausez00_1455, BgL_auxz00_3303);
									}}}
									{
										obj_t BgL_l3563z00_3306;

										BgL_l3563z00_3306 = CDR(BgL_l3563z00_1452);
										BgL_l3563z00_1452 = BgL_l3563z00_3306;
										goto BgL_zc3anonymousza33760ze3z83_1453;
									}
								}
							else
								{	/* Reduce/ftypec.scm 211 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3248 = BgL_nodez00_1443;
					return (obj_t) (BgL_auxz00_3248);
				}
			}
		}
	}



/* node-typec!-fail3589 */
	obj_t BGl_nodezd2typecz12zd2fail3589z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2695, obj_t BgL_nodez00_2696, obj_t BgL_stackz00_2697)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 198 */
			{
				BgL_failz00_bglt BgL_nodez00_1430;

				obj_t BgL_stackz00_1431;

				{	/* Reduce/ftypec.scm 199 */
					BgL_failz00_bglt BgL_auxz00_3310;

					BgL_nodez00_1430 = (BgL_failz00_bglt) (BgL_nodez00_2696);
					BgL_stackz00_1431 = BgL_stackz00_2697;
					{	/* Reduce/ftypec.scm 200 */
						BgL_nodez00_bglt BgL_arg3751z00_1435;

						{	/* Reduce/ftypec.scm 200 */
							BgL_nodez00_bglt BgL_arg3752z00_1436;

							BgL_arg3752z00_1436 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1430))->BgL_procz00);
							{	/* Reduce/ftypec.scm 200 */
								BgL_nodez00_bglt BgL_res3854z00_2122;

								{	/* Reduce/ftypec.scm 200 */
									obj_t BgL_method3573z00_2097;

									{	/* Reduce/ftypec.scm 200 */
										BgL_objectz00_bglt BgL_objz00_2098;

										BgL_objz00_2098 =
											(BgL_objectz00_bglt) (BgL_arg3752z00_1436);
										{	/* Reduce/ftypec.scm 200 */
											long BgL_objzd2classzd2numz00_2099;

											BgL_objzd2classzd2numz00_2099 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2098);
											{	/* Reduce/ftypec.scm 200 */
												obj_t BgL_arg2643z00_2100;

												BgL_arg2643z00_2100 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 200 */
													obj_t BgL_arrayz00_2102;

													int BgL_offsetz00_2103;

													BgL_arrayz00_2102 = BgL_arg2643z00_2100;
													BgL_offsetz00_2103 =
														(int) (BgL_objzd2classzd2numz00_2099);
													{	/* Reduce/ftypec.scm 200 */
														long BgL_offsetz00_2104;

														BgL_offsetz00_2104 =
															((long) (BgL_offsetz00_2103) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 200 */
															long BgL_modz00_2105;

															{	/* Reduce/ftypec.scm 200 */
																int BgL_arg2645z00_2106;

																BgL_arg2645z00_2106 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 200 */
																	long BgL_auxz00_3320;

																	BgL_auxz00_3320 =
																		(long) (BgL_arg2645z00_2106);
																	BgL_modz00_2105 =
																		(BgL_offsetz00_2104 / BgL_auxz00_3320);
															}}
															{	/* Reduce/ftypec.scm 200 */
																long BgL_restz00_2107;

																{	/* Reduce/ftypec.scm 200 */
																	int BgL_arg2644z00_2108;

																	BgL_arg2644z00_2108 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 200 */
																		long BgL_auxz00_3324;

																		BgL_auxz00_3324 =
																			(long) (BgL_arg2644z00_2108);
																		BgL_restz00_2107 =
																			(BgL_offsetz00_2104 % BgL_auxz00_3324);
																}}
																{	/* Reduce/ftypec.scm 200 */

																	BgL_method3573z00_2097 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2102,
																			(int) (BgL_modz00_2105)),
																		(int) (BgL_restz00_2107));
									}}}}}}}}
									BgL_res3854z00_2122 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2097)
										(BgL_method3573z00_2097, (obj_t) (BgL_arg3752z00_1436),
											BgL_stackz00_1431, BEOA));
								}
								BgL_arg3751z00_1435 = BgL_res3854z00_2122;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1430))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3751z00_1435), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 201 */
						BgL_nodez00_bglt BgL_arg3753z00_1437;

						{	/* Reduce/ftypec.scm 201 */
							BgL_nodez00_bglt BgL_arg3754z00_1438;

							BgL_arg3754z00_1438 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1430))->BgL_msgz00);
							{	/* Reduce/ftypec.scm 201 */
								BgL_nodez00_bglt BgL_res3857z00_2153;

								{	/* Reduce/ftypec.scm 201 */
									obj_t BgL_method3573z00_2128;

									{	/* Reduce/ftypec.scm 201 */
										BgL_objectz00_bglt BgL_objz00_2129;

										BgL_objz00_2129 =
											(BgL_objectz00_bglt) (BgL_arg3754z00_1438);
										{	/* Reduce/ftypec.scm 201 */
											long BgL_objzd2classzd2numz00_2130;

											BgL_objzd2classzd2numz00_2130 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2129);
											{	/* Reduce/ftypec.scm 201 */
												obj_t BgL_arg2643z00_2131;

												BgL_arg2643z00_2131 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 201 */
													obj_t BgL_arrayz00_2133;

													int BgL_offsetz00_2134;

													BgL_arrayz00_2133 = BgL_arg2643z00_2131;
													BgL_offsetz00_2134 =
														(int) (BgL_objzd2classzd2numz00_2130);
													{	/* Reduce/ftypec.scm 201 */
														long BgL_offsetz00_2135;

														BgL_offsetz00_2135 =
															((long) (BgL_offsetz00_2134) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 201 */
															long BgL_modz00_2136;

															{	/* Reduce/ftypec.scm 201 */
																int BgL_arg2645z00_2137;

																BgL_arg2645z00_2137 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 201 */
																	long BgL_auxz00_3345;

																	BgL_auxz00_3345 =
																		(long) (BgL_arg2645z00_2137);
																	BgL_modz00_2136 =
																		(BgL_offsetz00_2135 / BgL_auxz00_3345);
															}}
															{	/* Reduce/ftypec.scm 201 */
																long BgL_restz00_2138;

																{	/* Reduce/ftypec.scm 201 */
																	int BgL_arg2644z00_2139;

																	BgL_arg2644z00_2139 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 201 */
																		long BgL_auxz00_3349;

																		BgL_auxz00_3349 =
																			(long) (BgL_arg2644z00_2139);
																		BgL_restz00_2138 =
																			(BgL_offsetz00_2135 % BgL_auxz00_3349);
																}}
																{	/* Reduce/ftypec.scm 201 */

																	BgL_method3573z00_2128 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2133,
																			(int) (BgL_modz00_2136)),
																		(int) (BgL_restz00_2138));
									}}}}}}}}
									BgL_res3857z00_2153 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2128)
										(BgL_method3573z00_2128, (obj_t) (BgL_arg3754z00_1438),
											BgL_stackz00_1431, BEOA));
								}
								BgL_arg3753z00_1437 = BgL_res3857z00_2153;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1430))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3753z00_1437), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 202 */
						BgL_nodez00_bglt BgL_arg3755z00_1439;

						{	/* Reduce/ftypec.scm 202 */
							BgL_nodez00_bglt BgL_arg3756z00_1440;

							BgL_arg3756z00_1440 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1430))->BgL_objz00);
							{	/* Reduce/ftypec.scm 202 */
								BgL_nodez00_bglt BgL_res3860z00_2184;

								{	/* Reduce/ftypec.scm 202 */
									obj_t BgL_method3573z00_2159;

									{	/* Reduce/ftypec.scm 202 */
										BgL_objectz00_bglt BgL_objz00_2160;

										BgL_objz00_2160 =
											(BgL_objectz00_bglt) (BgL_arg3756z00_1440);
										{	/* Reduce/ftypec.scm 202 */
											long BgL_objzd2classzd2numz00_2161;

											BgL_objzd2classzd2numz00_2161 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2160);
											{	/* Reduce/ftypec.scm 202 */
												obj_t BgL_arg2643z00_2162;

												BgL_arg2643z00_2162 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 202 */
													obj_t BgL_arrayz00_2164;

													int BgL_offsetz00_2165;

													BgL_arrayz00_2164 = BgL_arg2643z00_2162;
													BgL_offsetz00_2165 =
														(int) (BgL_objzd2classzd2numz00_2161);
													{	/* Reduce/ftypec.scm 202 */
														long BgL_offsetz00_2166;

														BgL_offsetz00_2166 =
															((long) (BgL_offsetz00_2165) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 202 */
															long BgL_modz00_2167;

															{	/* Reduce/ftypec.scm 202 */
																int BgL_arg2645z00_2168;

																BgL_arg2645z00_2168 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 202 */
																	long BgL_auxz00_3370;

																	BgL_auxz00_3370 =
																		(long) (BgL_arg2645z00_2168);
																	BgL_modz00_2167 =
																		(BgL_offsetz00_2166 / BgL_auxz00_3370);
															}}
															{	/* Reduce/ftypec.scm 202 */
																long BgL_restz00_2169;

																{	/* Reduce/ftypec.scm 202 */
																	int BgL_arg2644z00_2170;

																	BgL_arg2644z00_2170 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 202 */
																		long BgL_auxz00_3374;

																		BgL_auxz00_3374 =
																			(long) (BgL_arg2644z00_2170);
																		BgL_restz00_2169 =
																			(BgL_offsetz00_2166 % BgL_auxz00_3374);
																}}
																{	/* Reduce/ftypec.scm 202 */

																	BgL_method3573z00_2159 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2164,
																			(int) (BgL_modz00_2167)),
																		(int) (BgL_restz00_2169));
									}}}}}}}}
									BgL_res3860z00_2184 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_2159)
										(BgL_method3573z00_2159, (obj_t) (BgL_arg3756z00_1440),
											BgL_stackz00_1431, BEOA));
								}
								BgL_arg3755z00_1439 = BgL_res3860z00_2184;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1430))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3755z00_1439), BUNSPEC);
					}
					BgL_auxz00_3310 = BgL_nodez00_1430;
					return (obj_t) (BgL_auxz00_3310);
				}
			}
		}
	}



/* node-typec!-conditio3587 */
	obj_t BGl_nodezd2typecz12zd2conditio3587z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2698, obj_t BgL_nodez00_2699, obj_t BgL_stackz00_2700)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 133 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1341;

				obj_t BgL_stackz00_1342;

				BgL_nodez00_1341 = (BgL_conditionalz00_bglt) (BgL_nodez00_2699);
				BgL_stackz00_1342 = BgL_stackz00_2700;
				{
					BgL_nodez00_bglt BgL_nodez00_1378;

					{	/* Reduce/ftypec.scm 169 */
						BgL_nodez00_bglt BgL_arg3697z00_1348;

						{	/* Reduce/ftypec.scm 169 */
							BgL_nodez00_bglt BgL_arg3698z00_1349;

							BgL_arg3698z00_1349 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->
								BgL_testz00);
							{	/* Reduce/ftypec.scm 169 */
								BgL_nodez00_bglt BgL_res3833z00_1874;

								{	/* Reduce/ftypec.scm 169 */
									obj_t BgL_method3573z00_1849;

									{	/* Reduce/ftypec.scm 169 */
										BgL_objectz00_bglt BgL_objz00_1850;

										BgL_objz00_1850 =
											(BgL_objectz00_bglt) (BgL_arg3698z00_1349);
										{	/* Reduce/ftypec.scm 169 */
											long BgL_objzd2classzd2numz00_1851;

											BgL_objzd2classzd2numz00_1851 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1850);
											{	/* Reduce/ftypec.scm 169 */
												obj_t BgL_arg2643z00_1852;

												BgL_arg2643z00_1852 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 169 */
													obj_t BgL_arrayz00_1854;

													int BgL_offsetz00_1855;

													BgL_arrayz00_1854 = BgL_arg2643z00_1852;
													BgL_offsetz00_1855 =
														(int) (BgL_objzd2classzd2numz00_1851);
													{	/* Reduce/ftypec.scm 169 */
														long BgL_offsetz00_1856;

														BgL_offsetz00_1856 =
															((long) (BgL_offsetz00_1855) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 169 */
															long BgL_modz00_1857;

															{	/* Reduce/ftypec.scm 169 */
																int BgL_arg2645z00_1858;

																BgL_arg2645z00_1858 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 169 */
																	long BgL_auxz00_3397;

																	BgL_auxz00_3397 =
																		(long) (BgL_arg2645z00_1858);
																	BgL_modz00_1857 =
																		(BgL_offsetz00_1856 / BgL_auxz00_3397);
															}}
															{	/* Reduce/ftypec.scm 169 */
																long BgL_restz00_1859;

																{	/* Reduce/ftypec.scm 169 */
																	int BgL_arg2644z00_1860;

																	BgL_arg2644z00_1860 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 169 */
																		long BgL_auxz00_3401;

																		BgL_auxz00_3401 =
																			(long) (BgL_arg2644z00_1860);
																		BgL_restz00_1859 =
																			(BgL_offsetz00_1856 % BgL_auxz00_3401);
																}}
																{	/* Reduce/ftypec.scm 169 */

																	BgL_method3573z00_1849 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1854,
																			(int) (BgL_modz00_1857)),
																		(int) (BgL_restz00_1859));
									}}}}}}}}
									BgL_res3833z00_1874 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1849)
										(BgL_method3573z00_1849, (obj_t) (BgL_arg3698z00_1349),
											BgL_stackz00_1342, BEOA));
								}
								BgL_arg3697z00_1348 = BgL_res3833z00_1874;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3697z00_1348), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 170 */
						obj_t BgL_typecz00_1350;

						BgL_nodez00_1378 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->BgL_testz00);
						{	/* Reduce/ftypec.scm 135 */
							bool_t BgL_testz00_3413;

							{	/* Reduce/ftypec.scm 135 */
								obj_t BgL_obj2276z00_2077;

								BgL_obj2276z00_2077 = (obj_t) (BgL_nodez00_1378);
								BgL_testz00_3413 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2276z00_2077,
									BGl_appz00zzast_nodez00);
							}
							if (BgL_testz00_3413)
								{	/* Reduce/ftypec.scm 136 */
									BgL_appz00_bglt BgL_instance3526z00_1381;

									BgL_instance3526z00_1381 =
										(BgL_appz00_bglt) (BgL_nodez00_1378);
									{	/* Reduce/ftypec.scm 137 */
										bool_t BgL_testz00_3417;

										{	/* Reduce/ftypec.scm 137 */
											obj_t BgL_auxz00_3418;

											BgL_auxz00_3418 =
												(((BgL_appz00_bglt) CREF(BgL_instance3526z00_1381))->
												BgL_argsz00);
											BgL_testz00_3417 = PAIRP(BgL_auxz00_3418);
										}
										if (BgL_testz00_3417)
											{	/* Reduce/ftypec.scm 138 */
												bool_t BgL_testz00_3421;

												{	/* Reduce/ftypec.scm 138 */
													obj_t BgL_auxz00_3422;

													{	/* Reduce/ftypec.scm 138 */
														obj_t BgL_pairz00_2081;

														BgL_pairz00_2081 =
															(((BgL_appz00_bglt)
																CREF(BgL_instance3526z00_1381))->BgL_argsz00);
														BgL_auxz00_3422 = CDR(BgL_pairz00_2081);
													}
													BgL_testz00_3421 = NULLP(BgL_auxz00_3422);
												}
												if (BgL_testz00_3421)
													{	/* Reduce/ftypec.scm 139 */
														bool_t BgL_testz00_3426;

														{	/* Reduce/ftypec.scm 139 */
															obj_t BgL_arg3728z00_1395;

															{	/* Reduce/ftypec.scm 139 */
																obj_t BgL_pairz00_2084;

																BgL_pairz00_2084 =
																	(((BgL_appz00_bglt)
																		CREF(BgL_instance3526z00_1381))->
																	BgL_argsz00);
																BgL_arg3728z00_1395 = CAR(BgL_pairz00_2084);
															}
															BgL_testz00_3426 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_arg3728z00_1395, BGl_varz00zzast_nodez00);
														}
														if (BgL_testz00_3426)
															{	/* Reduce/ftypec.scm 140 */
																bool_t BgL_testz00_3430;

																{	/* Reduce/ftypec.scm 140 */
																	obj_t BgL_auxz00_3431;

																	{	/* Reduce/ftypec.scm 140 */
																		BgL_variablez00_bglt BgL_arg3725z00_1392;

																		{	/* Reduce/ftypec.scm 140 */
																			BgL_varz00_bglt BgL_obj2155z00_2088;

																			{	/* Reduce/ftypec.scm 140 */
																				obj_t BgL_auxz00_3432;

																				{	/* Reduce/ftypec.scm 140 */
																					obj_t BgL_pairz00_2087;

																					BgL_pairz00_2087 =
																						(((BgL_appz00_bglt)
																							CREF(BgL_instance3526z00_1381))->
																						BgL_argsz00);
																					BgL_auxz00_3432 =
																						CAR(BgL_pairz00_2087);
																				}
																				BgL_obj2155z00_2088 =
																					(BgL_varz00_bglt) (BgL_auxz00_3432);
																			}
																			BgL_arg3725z00_1392 =
																				(((BgL_varz00_bglt)
																					CREF(BgL_obj2155z00_2088))->
																				BgL_variablez00);
																		}
																		BgL_auxz00_3431 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_arg3725z00_1392))->
																			BgL_accessz00);
																	}
																	BgL_testz00_3430 =
																		(BgL_auxz00_3431 ==
																		CNST_TABLE_REF(((long) 1)));
																}
																if (BgL_testz00_3430)
																	{	/* Reduce/ftypec.scm 141 */
																		BgL_varz00_bglt BgL_funz00_1386;

																		{
																			BgL_appz00_bglt BgL_auxz00_3440;

																			BgL_auxz00_3440 =
																				(BgL_appz00_bglt) (BgL_nodez00_1378);
																			BgL_funz00_1386 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_auxz00_3440))->BgL_funz00);
																		}
																		{	/* Reduce/ftypec.scm 143 */

																			{	/* Reduce/ftypec.scm 143 */
																				BgL_funz00_bglt BgL_obj1817z00_2093;

																				{	/* Reduce/ftypec.scm 143 */
																					BgL_valuez00_bglt BgL_auxz00_3443;

																					{	/* Reduce/ftypec.scm 142 */
																						BgL_variablez00_bglt
																							BgL_obj1611z00_2092;
																						BgL_obj1611z00_2092 =
																							(((BgL_varz00_bglt)
																								CREF(BgL_funz00_1386))->
																							BgL_variablez00);
																						BgL_auxz00_3443 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_obj1611z00_2092))->
																							BgL_valuez00);
																					}
																					BgL_obj1817z00_2093 =
																						(BgL_funz00_bglt) (BgL_auxz00_3443);
																				}
																				BgL_typecz00_1350 =
																					(((BgL_funz00_bglt)
																						CREF(BgL_obj1817z00_2093))->
																					BgL_predicatezd2ofzd2);
																			}
																		}
																	}
																else
																	{	/* Reduce/ftypec.scm 140 */
																		BgL_typecz00_1350 = BFALSE;
																	}
															}
														else
															{	/* Reduce/ftypec.scm 139 */
																BgL_typecz00_1350 = BFALSE;
															}
													}
												else
													{	/* Reduce/ftypec.scm 138 */
														BgL_typecz00_1350 = BFALSE;
													}
											}
										else
											{	/* Reduce/ftypec.scm 137 */
												BgL_typecz00_1350 = BFALSE;
											}
									}
								}
							else
								{	/* Reduce/ftypec.scm 135 */
									BgL_typecz00_1350 = BFALSE;
								}
						}
						if (BGl_iszd2azf3z21zz__objectz00(BgL_typecz00_1350,
								BGl_typez00zztype_typez00))
							{	/* Reduce/ftypec.scm 176 */
								obj_t BgL_argsz00_1352;

								{	/* Reduce/ftypec.scm 176 */
									BgL_appz00_bglt BgL_obj2252z00_1880;

									BgL_obj2252z00_1880 =
										(BgL_appz00_bglt) (
										(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->
											BgL_testz00));
									BgL_argsz00_1352 =
										(((BgL_appz00_bglt) CREF(BgL_obj2252z00_1880))->
										BgL_argsz00);
								}
								{	/* Reduce/ftypec.scm 176 */
									BgL_variablez00_bglt BgL_varz00_1353;

									{	/* Reduce/ftypec.scm 177 */
										BgL_varz00_bglt BgL_obj2155z00_1882;

										{	/* Reduce/ftypec.scm 177 */
											obj_t BgL_pairz00_1881;

											BgL_pairz00_1881 = BgL_argsz00_1352;
											BgL_obj2155z00_1882 =
												(BgL_varz00_bglt) (CAR(BgL_pairz00_1881));
										}
										BgL_varz00_1353 =
											(((BgL_varz00_bglt) CREF(BgL_obj2155z00_1882))->
											BgL_variablez00);
									}
									{	/* Reduce/ftypec.scm 177 */
										obj_t BgL_typesz00_1354;

										BgL_typesz00_1354 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(
											(obj_t) (BgL_varz00_1353), BgL_stackz00_1342);
										{	/* Reduce/ftypec.scm 178 */
											obj_t BgL_tzd2stackzd2_1355;

											{	/* Reduce/ftypec.scm 179 */
												obj_t BgL_arg3712z00_1369;

												{	/* Reduce/ftypec.scm 179 */
													obj_t BgL_arg3713z00_1370;

													BgL_arg3713z00_1370 =
														MAKE_PAIR(BgL_typecz00_1350, BTRUE);
													BgL_arg3712z00_1369 =
														MAKE_PAIR(
														(obj_t) (BgL_varz00_1353), BgL_arg3713z00_1370);
												}
												BgL_tzd2stackzd2_1355 =
													MAKE_PAIR(BgL_arg3712z00_1369, BgL_stackz00_1342);
											}
											{	/* Reduce/ftypec.scm 179 */
												obj_t BgL_fzd2stackzd2_1356;

												{	/* Reduce/ftypec.scm 180 */
													obj_t BgL_arg3710z00_1367;

													{	/* Reduce/ftypec.scm 180 */
														obj_t BgL_arg3711z00_1368;

														BgL_arg3711z00_1368 =
															MAKE_PAIR(BgL_typecz00_1350, BFALSE);
														BgL_arg3710z00_1367 =
															MAKE_PAIR(
															(obj_t) (BgL_varz00_1353), BgL_arg3711z00_1368);
													}
													BgL_fzd2stackzd2_1356 =
														MAKE_PAIR(BgL_arg3710z00_1367, BgL_stackz00_1342);
												}
												{	/* Reduce/ftypec.scm 180 */

													{	/* Reduce/ftypec.scm 181 */
														bool_t BgL_testz00_3467;

														if (CBOOL(BgL_typesz00_1354))
															{	/* Reduce/ftypec.scm 181 */
																bool_t BgL_testz00_3470;

																{	/* Reduce/ftypec.scm 181 */
																	obj_t BgL_auxz00_3471;

																	{	/* Reduce/ftypec.scm 181 */
																		obj_t BgL_pairz00_1883;

																		BgL_pairz00_1883 = BgL_typesz00_1354;
																		BgL_auxz00_3471 =
																			CAR(CDR(BgL_pairz00_1883));
																	}
																	BgL_testz00_3470 =
																		(BgL_auxz00_3471 == BgL_typecz00_1350);
																}
																if (BgL_testz00_3470)
																	{	/* Reduce/ftypec.scm 181 */
																		BgL_testz00_3467 = ((bool_t) 0);
																	}
																else
																	{	/* Reduce/ftypec.scm 181 */
																		BgL_testz00_3467 = ((bool_t) 1);
																	}
															}
														else
															{	/* Reduce/ftypec.scm 181 */
																BgL_testz00_3467 = ((bool_t) 1);
															}
														if (BgL_testz00_3467)
															{	/* Reduce/ftypec.scm 181 */
																BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2
																	=
																	(((long) 1) +
																	BGl_za2typezd2checkszd2remainingza2z00zzreduce_flowzd2typeczd2);
																{	/* Reduce/ftypec.scm 185 */
																	BgL_nodez00_bglt BgL_arg3701z00_1358;

																	{	/* Reduce/ftypec.scm 185 */
																		BgL_nodez00_bglt BgL_arg3702z00_1359;

																		BgL_arg3702z00_1359 =
																			(((BgL_conditionalz00_bglt)
																				CREF(BgL_nodez00_1341))->BgL_truez00);
																		{	/* Reduce/ftypec.scm 185 */
																			BgL_nodez00_bglt BgL_res3836z00_1917;

																			{	/* Reduce/ftypec.scm 185 */
																				obj_t BgL_method3573z00_1892;

																				{	/* Reduce/ftypec.scm 185 */
																					BgL_objectz00_bglt BgL_objz00_1893;

																					BgL_objz00_1893 =
																						(BgL_objectz00_bglt)
																						(BgL_arg3702z00_1359);
																					{	/* Reduce/ftypec.scm 185 */
																						long BgL_objzd2classzd2numz00_1894;

																						BgL_objzd2classzd2numz00_1894 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_1893);
																						{	/* Reduce/ftypec.scm 185 */
																							obj_t BgL_arg2643z00_1895;

																							BgL_arg2643z00_1895 =
																								PROCEDURE_REF
																								(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																								(int) (((long) 1)));
																							{	/* Reduce/ftypec.scm 185 */
																								obj_t BgL_arrayz00_1897;

																								int BgL_offsetz00_1898;

																								BgL_arrayz00_1897 =
																									BgL_arg2643z00_1895;
																								BgL_offsetz00_1898 =
																									(int)
																									(BgL_objzd2classzd2numz00_1894);
																								{	/* Reduce/ftypec.scm 185 */
																									long BgL_offsetz00_1899;

																									BgL_offsetz00_1899 =
																										(
																										(long) (BgL_offsetz00_1898)
																										- OBJECT_TYPE);
																									{	/* Reduce/ftypec.scm 185 */
																										long BgL_modz00_1900;

																										{	/* Reduce/ftypec.scm 185 */
																											int BgL_arg2645z00_1901;

																											BgL_arg2645z00_1901 =
																												(int) (((long) 16));
																											{	/* Reduce/ftypec.scm 185 */
																												long BgL_auxz00_3485;

																												BgL_auxz00_3485 =
																													(long)
																													(BgL_arg2645z00_1901);
																												BgL_modz00_1900 =
																													(BgL_offsetz00_1899 /
																													BgL_auxz00_3485);
																										}}
																										{	/* Reduce/ftypec.scm 185 */
																											long BgL_restz00_1902;

																											{	/* Reduce/ftypec.scm 185 */
																												int BgL_arg2644z00_1903;

																												BgL_arg2644z00_1903 =
																													(int) (((long) 16));
																												{	/* Reduce/ftypec.scm 185 */
																													long BgL_auxz00_3489;

																													BgL_auxz00_3489 =
																														(long)
																														(BgL_arg2644z00_1903);
																													BgL_restz00_1902 =
																														(BgL_offsetz00_1899
																														% BgL_auxz00_3489);
																											}}
																											{	/* Reduce/ftypec.scm 185 */

																												BgL_method3573z00_1892 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_1897,
																														(int)
																														(BgL_modz00_1900)),
																													(int)
																													(BgL_restz00_1902));
																				}}}}}}}}
																				BgL_res3836z00_1917 =
																					(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																					(BgL_method3573z00_1892)
																					(BgL_method3573z00_1892,
																						(obj_t) (BgL_arg3702z00_1359),
																						BgL_tzd2stackzd2_1355, BEOA));
																			}
																			BgL_arg3701z00_1358 = BgL_res3836z00_1917;
																	}}
																	((((BgL_conditionalz00_bglt)
																				CREF(BgL_nodez00_1341))->BgL_truez00) =
																		((BgL_nodez00_bglt) BgL_arg3701z00_1358),
																		BUNSPEC);
																}
																{	/* Reduce/ftypec.scm 186 */
																	BgL_nodez00_bglt BgL_arg3703z00_1360;

																	{	/* Reduce/ftypec.scm 186 */
																		BgL_nodez00_bglt BgL_arg3704z00_1361;

																		BgL_arg3704z00_1361 =
																			(((BgL_conditionalz00_bglt)
																				CREF(BgL_nodez00_1341))->BgL_falsez00);
																		{	/* Reduce/ftypec.scm 186 */
																			BgL_nodez00_bglt BgL_res3839z00_1948;

																			{	/* Reduce/ftypec.scm 186 */
																				obj_t BgL_method3573z00_1923;

																				{	/* Reduce/ftypec.scm 186 */
																					BgL_objectz00_bglt BgL_objz00_1924;

																					BgL_objz00_1924 =
																						(BgL_objectz00_bglt)
																						(BgL_arg3704z00_1361);
																					{	/* Reduce/ftypec.scm 186 */
																						long BgL_objzd2classzd2numz00_1925;

																						BgL_objzd2classzd2numz00_1925 =
																							BGL_OBJECT_CLASS_NUM
																							(BgL_objz00_1924);
																						{	/* Reduce/ftypec.scm 186 */
																							obj_t BgL_arg2643z00_1926;

																							BgL_arg2643z00_1926 =
																								PROCEDURE_REF
																								(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																								(int) (((long) 1)));
																							{	/* Reduce/ftypec.scm 186 */
																								obj_t BgL_arrayz00_1928;

																								int BgL_offsetz00_1929;

																								BgL_arrayz00_1928 =
																									BgL_arg2643z00_1926;
																								BgL_offsetz00_1929 =
																									(int)
																									(BgL_objzd2classzd2numz00_1925);
																								{	/* Reduce/ftypec.scm 186 */
																									long BgL_offsetz00_1930;

																									BgL_offsetz00_1930 =
																										(
																										(long) (BgL_offsetz00_1929)
																										- OBJECT_TYPE);
																									{	/* Reduce/ftypec.scm 186 */
																										long BgL_modz00_1931;

																										{	/* Reduce/ftypec.scm 186 */
																											int BgL_arg2645z00_1932;

																											BgL_arg2645z00_1932 =
																												(int) (((long) 16));
																											{	/* Reduce/ftypec.scm 186 */
																												long BgL_auxz00_3510;

																												BgL_auxz00_3510 =
																													(long)
																													(BgL_arg2645z00_1932);
																												BgL_modz00_1931 =
																													(BgL_offsetz00_1930 /
																													BgL_auxz00_3510);
																										}}
																										{	/* Reduce/ftypec.scm 186 */
																											long BgL_restz00_1933;

																											{	/* Reduce/ftypec.scm 186 */
																												int BgL_arg2644z00_1934;

																												BgL_arg2644z00_1934 =
																													(int) (((long) 16));
																												{	/* Reduce/ftypec.scm 186 */
																													long BgL_auxz00_3514;

																													BgL_auxz00_3514 =
																														(long)
																														(BgL_arg2644z00_1934);
																													BgL_restz00_1933 =
																														(BgL_offsetz00_1930
																														% BgL_auxz00_3514);
																											}}
																											{	/* Reduce/ftypec.scm 186 */

																												BgL_method3573z00_1923 =
																													VECTOR_REF(VECTOR_REF
																													(BgL_arrayz00_1928,
																														(int)
																														(BgL_modz00_1931)),
																													(int)
																													(BgL_restz00_1933));
																				}}}}}}}}
																				BgL_res3839z00_1948 =
																					(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																					(BgL_method3573z00_1923)
																					(BgL_method3573z00_1923,
																						(obj_t) (BgL_arg3704z00_1361),
																						BgL_fzd2stackzd2_1356, BEOA));
																			}
																			BgL_arg3703z00_1360 = BgL_res3839z00_1948;
																	}}
																	((((BgL_conditionalz00_bglt)
																				CREF(BgL_nodez00_1341))->BgL_falsez00) =
																		((BgL_nodez00_bglt) BgL_arg3703z00_1360),
																		BUNSPEC);
																}
																return (obj_t) (BgL_nodez00_1341);
															}
														else
															{	/* Reduce/ftypec.scm 181 */
																BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2
																	=
																	(((long) 1) +
																	BGl_za2typezd2checkszd2removedza2z00zzreduce_flowzd2typeczd2);
																{	/* Reduce/ftypec.scm 191 */
																	bool_t BgL_testz00_3528;

																	{	/* Reduce/ftypec.scm 191 */
																		obj_t BgL_pairz00_1953;

																		BgL_pairz00_1953 = BgL_typesz00_1354;
																		{	/* Reduce/ftypec.scm 191 */
																			obj_t BgL_pairz00_1956;

																			BgL_pairz00_1956 = CDR(BgL_pairz00_1953);
																			BgL_testz00_3528 =
																				CBOOL(CDR(BgL_pairz00_1956));
																	}}
																	if (BgL_testz00_3528)
																		{	/* Reduce/ftypec.scm 192 */
																			BgL_nodez00_bglt BgL_arg3706z00_1363;

																			BgL_arg3706z00_1363 =
																				(((BgL_conditionalz00_bglt)
																					CREF(BgL_nodez00_1341))->BgL_truez00);
																			{	/* Reduce/ftypec.scm 192 */
																				BgL_nodez00_bglt BgL_res3842z00_1985;

																				{	/* Reduce/ftypec.scm 192 */
																					obj_t BgL_method3573z00_1960;

																					{	/* Reduce/ftypec.scm 192 */
																						BgL_objectz00_bglt BgL_objz00_1961;

																						BgL_objz00_1961 =
																							(BgL_objectz00_bglt)
																							(BgL_arg3706z00_1363);
																						{	/* Reduce/ftypec.scm 192 */
																							long
																								BgL_objzd2classzd2numz00_1962;
																							BgL_objzd2classzd2numz00_1962 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_1961);
																							{	/* Reduce/ftypec.scm 192 */
																								obj_t BgL_arg2643z00_1963;

																								BgL_arg2643z00_1963 =
																									PROCEDURE_REF
																									(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																									(int) (((long) 1)));
																								{	/* Reduce/ftypec.scm 192 */
																									obj_t BgL_arrayz00_1965;

																									int BgL_offsetz00_1966;

																									BgL_arrayz00_1965 =
																										BgL_arg2643z00_1963;
																									BgL_offsetz00_1966 =
																										(int)
																										(BgL_objzd2classzd2numz00_1962);
																									{	/* Reduce/ftypec.scm 192 */
																										long BgL_offsetz00_1967;

																										BgL_offsetz00_1967 =
																											(
																											(long)
																											(BgL_offsetz00_1966) -
																											OBJECT_TYPE);
																										{	/* Reduce/ftypec.scm 192 */
																											long BgL_modz00_1968;

																											{	/* Reduce/ftypec.scm 192 */
																												int BgL_arg2645z00_1969;

																												BgL_arg2645z00_1969 =
																													(int) (((long) 16));
																												{	/* Reduce/ftypec.scm 192 */
																													long BgL_auxz00_3541;

																													BgL_auxz00_3541 =
																														(long)
																														(BgL_arg2645z00_1969);
																													BgL_modz00_1968 =
																														(BgL_offsetz00_1967
																														/ BgL_auxz00_3541);
																											}}
																											{	/* Reduce/ftypec.scm 192 */
																												long BgL_restz00_1970;

																												{	/* Reduce/ftypec.scm 192 */
																													int
																														BgL_arg2644z00_1971;
																													BgL_arg2644z00_1971 =
																														(int) (((long) 16));
																													{	/* Reduce/ftypec.scm 192 */
																														long
																															BgL_auxz00_3545;
																														BgL_auxz00_3545 =
																															(long)
																															(BgL_arg2644z00_1971);
																														BgL_restz00_1970 =
																															(BgL_offsetz00_1967
																															%
																															BgL_auxz00_3545);
																												}}
																												{	/* Reduce/ftypec.scm 192 */

																													BgL_method3573z00_1960
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_1965,
																															(int)
																															(BgL_modz00_1968)),
																														(int)
																														(BgL_restz00_1970));
																					}}}}}}}}
																					BgL_res3842z00_1985 =
																						(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																						(BgL_method3573z00_1960)
																						(BgL_method3573z00_1960,
																							(obj_t) (BgL_arg3706z00_1363),
																							BgL_tzd2stackzd2_1355, BEOA));
																				}
																				return (obj_t) (BgL_res3842z00_1985);
																			}
																		}
																	else
																		{	/* Reduce/ftypec.scm 193 */
																			BgL_nodez00_bglt BgL_arg3707z00_1364;

																			BgL_arg3707z00_1364 =
																				(((BgL_conditionalz00_bglt)
																					CREF(BgL_nodez00_1341))->
																				BgL_falsez00);
																			{	/* Reduce/ftypec.scm 193 */
																				BgL_nodez00_bglt BgL_res3845z00_2014;

																				{	/* Reduce/ftypec.scm 193 */
																					obj_t BgL_method3573z00_1989;

																					{	/* Reduce/ftypec.scm 193 */
																						BgL_objectz00_bglt BgL_objz00_1990;

																						BgL_objz00_1990 =
																							(BgL_objectz00_bglt)
																							(BgL_arg3707z00_1364);
																						{	/* Reduce/ftypec.scm 193 */
																							long
																								BgL_objzd2classzd2numz00_1991;
																							BgL_objzd2classzd2numz00_1991 =
																								BGL_OBJECT_CLASS_NUM
																								(BgL_objz00_1990);
																							{	/* Reduce/ftypec.scm 193 */
																								obj_t BgL_arg2643z00_1992;

																								BgL_arg2643z00_1992 =
																									PROCEDURE_REF
																									(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																									(int) (((long) 1)));
																								{	/* Reduce/ftypec.scm 193 */
																									obj_t BgL_arrayz00_1994;

																									int BgL_offsetz00_1995;

																									BgL_arrayz00_1994 =
																										BgL_arg2643z00_1992;
																									BgL_offsetz00_1995 =
																										(int)
																										(BgL_objzd2classzd2numz00_1991);
																									{	/* Reduce/ftypec.scm 193 */
																										long BgL_offsetz00_1996;

																										BgL_offsetz00_1996 =
																											(
																											(long)
																											(BgL_offsetz00_1995) -
																											OBJECT_TYPE);
																										{	/* Reduce/ftypec.scm 193 */
																											long BgL_modz00_1997;

																											{	/* Reduce/ftypec.scm 193 */
																												int BgL_arg2645z00_1998;

																												BgL_arg2645z00_1998 =
																													(int) (((long) 16));
																												{	/* Reduce/ftypec.scm 193 */
																													long BgL_auxz00_3566;

																													BgL_auxz00_3566 =
																														(long)
																														(BgL_arg2645z00_1998);
																													BgL_modz00_1997 =
																														(BgL_offsetz00_1996
																														/ BgL_auxz00_3566);
																											}}
																											{	/* Reduce/ftypec.scm 193 */
																												long BgL_restz00_1999;

																												{	/* Reduce/ftypec.scm 193 */
																													int
																														BgL_arg2644z00_2000;
																													BgL_arg2644z00_2000 =
																														(int) (((long) 16));
																													{	/* Reduce/ftypec.scm 193 */
																														long
																															BgL_auxz00_3570;
																														BgL_auxz00_3570 =
																															(long)
																															(BgL_arg2644z00_2000);
																														BgL_restz00_1999 =
																															(BgL_offsetz00_1996
																															%
																															BgL_auxz00_3570);
																												}}
																												{	/* Reduce/ftypec.scm 193 */

																													BgL_method3573z00_1989
																														=
																														VECTOR_REF
																														(VECTOR_REF
																														(BgL_arrayz00_1994,
																															(int)
																															(BgL_modz00_1997)),
																														(int)
																														(BgL_restz00_1999));
																					}}}}}}}}
																					BgL_res3845z00_2014 =
																						(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																						(BgL_method3573z00_1989)
																						(BgL_method3573z00_1989,
																							(obj_t) (BgL_arg3707z00_1364),
																							BgL_fzd2stackzd2_1356, BEOA));
																				}
																				return (obj_t) (BgL_res3845z00_2014);
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
						else
							{	/* Reduce/ftypec.scm 171 */
								{	/* Reduce/ftypec.scm 173 */
									BgL_nodez00_bglt BgL_arg3716z00_1373;

									{	/* Reduce/ftypec.scm 173 */
										BgL_nodez00_bglt BgL_arg3717z00_1374;

										BgL_arg3717z00_1374 =
											(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->
											BgL_truez00);
										{	/* Reduce/ftypec.scm 173 */
											BgL_nodez00_bglt BgL_res3848z00_2043;

											{	/* Reduce/ftypec.scm 173 */
												obj_t BgL_method3573z00_2018;

												{	/* Reduce/ftypec.scm 173 */
													BgL_objectz00_bglt BgL_objz00_2019;

													BgL_objz00_2019 =
														(BgL_objectz00_bglt) (BgL_arg3717z00_1374);
													{	/* Reduce/ftypec.scm 173 */
														long BgL_objzd2classzd2numz00_2020;

														BgL_objzd2classzd2numz00_2020 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2019);
														{	/* Reduce/ftypec.scm 173 */
															obj_t BgL_arg2643z00_2021;

															BgL_arg2643z00_2021 =
																PROCEDURE_REF
																(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																(int) (((long) 1)));
															{	/* Reduce/ftypec.scm 173 */
																obj_t BgL_arrayz00_2023;

																int BgL_offsetz00_2024;

																BgL_arrayz00_2023 = BgL_arg2643z00_2021;
																BgL_offsetz00_2024 =
																	(int) (BgL_objzd2classzd2numz00_2020);
																{	/* Reduce/ftypec.scm 173 */
																	long BgL_offsetz00_2025;

																	BgL_offsetz00_2025 =
																		((long) (BgL_offsetz00_2024) - OBJECT_TYPE);
																	{	/* Reduce/ftypec.scm 173 */
																		long BgL_modz00_2026;

																		{	/* Reduce/ftypec.scm 173 */
																			int BgL_arg2645z00_2027;

																			BgL_arg2645z00_2027 = (int) (((long) 16));
																			{	/* Reduce/ftypec.scm 173 */
																				long BgL_auxz00_3591;

																				BgL_auxz00_3591 =
																					(long) (BgL_arg2645z00_2027);
																				BgL_modz00_2026 =
																					(BgL_offsetz00_2025 /
																					BgL_auxz00_3591);
																		}}
																		{	/* Reduce/ftypec.scm 173 */
																			long BgL_restz00_2028;

																			{	/* Reduce/ftypec.scm 173 */
																				int BgL_arg2644z00_2029;

																				BgL_arg2644z00_2029 =
																					(int) (((long) 16));
																				{	/* Reduce/ftypec.scm 173 */
																					long BgL_auxz00_3595;

																					BgL_auxz00_3595 =
																						(long) (BgL_arg2644z00_2029);
																					BgL_restz00_2028 =
																						(BgL_offsetz00_2025 %
																						BgL_auxz00_3595);
																			}}
																			{	/* Reduce/ftypec.scm 173 */

																				BgL_method3573z00_2018 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2023,
																						(int) (BgL_modz00_2026)),
																					(int) (BgL_restz00_2028));
												}}}}}}}}
												BgL_res3848z00_2043 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3573z00_2018) (BgL_method3573z00_2018,
														(obj_t) (BgL_arg3717z00_1374), BgL_stackz00_1342,
														BEOA));
											}
											BgL_arg3716z00_1373 = BgL_res3848z00_2043;
									}}
									((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->
											BgL_truez00) =
										((BgL_nodez00_bglt) BgL_arg3716z00_1373), BUNSPEC);
								}
								{	/* Reduce/ftypec.scm 174 */
									BgL_nodez00_bglt BgL_arg3718z00_1375;

									{	/* Reduce/ftypec.scm 174 */
										BgL_nodez00_bglt BgL_arg3719z00_1376;

										BgL_arg3719z00_1376 =
											(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->
											BgL_falsez00);
										{	/* Reduce/ftypec.scm 174 */
											BgL_nodez00_bglt BgL_res3851z00_2074;

											{	/* Reduce/ftypec.scm 174 */
												obj_t BgL_method3573z00_2049;

												{	/* Reduce/ftypec.scm 174 */
													BgL_objectz00_bglt BgL_objz00_2050;

													BgL_objz00_2050 =
														(BgL_objectz00_bglt) (BgL_arg3719z00_1376);
													{	/* Reduce/ftypec.scm 174 */
														long BgL_objzd2classzd2numz00_2051;

														BgL_objzd2classzd2numz00_2051 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_2050);
														{	/* Reduce/ftypec.scm 174 */
															obj_t BgL_arg2643z00_2052;

															BgL_arg2643z00_2052 =
																PROCEDURE_REF
																(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
																(int) (((long) 1)));
															{	/* Reduce/ftypec.scm 174 */
																obj_t BgL_arrayz00_2054;

																int BgL_offsetz00_2055;

																BgL_arrayz00_2054 = BgL_arg2643z00_2052;
																BgL_offsetz00_2055 =
																	(int) (BgL_objzd2classzd2numz00_2051);
																{	/* Reduce/ftypec.scm 174 */
																	long BgL_offsetz00_2056;

																	BgL_offsetz00_2056 =
																		((long) (BgL_offsetz00_2055) - OBJECT_TYPE);
																	{	/* Reduce/ftypec.scm 174 */
																		long BgL_modz00_2057;

																		{	/* Reduce/ftypec.scm 174 */
																			int BgL_arg2645z00_2058;

																			BgL_arg2645z00_2058 = (int) (((long) 16));
																			{	/* Reduce/ftypec.scm 174 */
																				long BgL_auxz00_3616;

																				BgL_auxz00_3616 =
																					(long) (BgL_arg2645z00_2058);
																				BgL_modz00_2057 =
																					(BgL_offsetz00_2056 /
																					BgL_auxz00_3616);
																		}}
																		{	/* Reduce/ftypec.scm 174 */
																			long BgL_restz00_2059;

																			{	/* Reduce/ftypec.scm 174 */
																				int BgL_arg2644z00_2060;

																				BgL_arg2644z00_2060 =
																					(int) (((long) 16));
																				{	/* Reduce/ftypec.scm 174 */
																					long BgL_auxz00_3620;

																					BgL_auxz00_3620 =
																						(long) (BgL_arg2644z00_2060);
																					BgL_restz00_2059 =
																						(BgL_offsetz00_2056 %
																						BgL_auxz00_3620);
																			}}
																			{	/* Reduce/ftypec.scm 174 */

																				BgL_method3573z00_2049 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_2054,
																						(int) (BgL_modz00_2057)),
																					(int) (BgL_restz00_2059));
												}}}}}}}}
												BgL_res3851z00_2074 =
													(BgL_nodez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3573z00_2049) (BgL_method3573z00_2049,
														(obj_t) (BgL_arg3719z00_1376), BgL_stackz00_1342,
														BEOA));
											}
											BgL_arg3718z00_1375 = BgL_res3851z00_2074;
									}}
									((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1341))->
											BgL_falsez00) =
										((BgL_nodez00_bglt) BgL_arg3718z00_1375), BUNSPEC);
								}
								return (obj_t) (BgL_nodez00_1341);
							}
					}
				}
			}
		}
	}



/* node-typec!-setq3585 */
	obj_t BGl_nodezd2typecz12zd2setq3585z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2701, obj_t BgL_nodez00_2702, obj_t BgL_stackz00_2703)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 124 */
			{
				BgL_setqz00_bglt BgL_nodez00_1330;

				obj_t BgL_stackz00_1331;

				{	/* Reduce/ftypec.scm 125 */
					BgL_setqz00_bglt BgL_auxz00_3634;

					BgL_nodez00_1330 = (BgL_setqz00_bglt) (BgL_nodez00_2702);
					BgL_stackz00_1331 = BgL_stackz00_2703;
					{	/* Reduce/ftypec.scm 126 */
						BgL_nodez00_bglt BgL_arg3692z00_1335;

						{	/* Reduce/ftypec.scm 126 */
							BgL_nodez00_bglt BgL_arg3693z00_1336;

							BgL_arg3693z00_1336 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1330))->BgL_valuez00);
							{	/* Reduce/ftypec.scm 126 */
								BgL_nodez00_bglt BgL_res3827z00_1812;

								{	/* Reduce/ftypec.scm 126 */
									obj_t BgL_method3573z00_1787;

									{	/* Reduce/ftypec.scm 126 */
										BgL_objectz00_bglt BgL_objz00_1788;

										BgL_objz00_1788 =
											(BgL_objectz00_bglt) (BgL_arg3693z00_1336);
										{	/* Reduce/ftypec.scm 126 */
											long BgL_objzd2classzd2numz00_1789;

											BgL_objzd2classzd2numz00_1789 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1788);
											{	/* Reduce/ftypec.scm 126 */
												obj_t BgL_arg2643z00_1790;

												BgL_arg2643z00_1790 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 126 */
													obj_t BgL_arrayz00_1792;

													int BgL_offsetz00_1793;

													BgL_arrayz00_1792 = BgL_arg2643z00_1790;
													BgL_offsetz00_1793 =
														(int) (BgL_objzd2classzd2numz00_1789);
													{	/* Reduce/ftypec.scm 126 */
														long BgL_offsetz00_1794;

														BgL_offsetz00_1794 =
															((long) (BgL_offsetz00_1793) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 126 */
															long BgL_modz00_1795;

															{	/* Reduce/ftypec.scm 126 */
																int BgL_arg2645z00_1796;

																BgL_arg2645z00_1796 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 126 */
																	long BgL_auxz00_3644;

																	BgL_auxz00_3644 =
																		(long) (BgL_arg2645z00_1796);
																	BgL_modz00_1795 =
																		(BgL_offsetz00_1794 / BgL_auxz00_3644);
															}}
															{	/* Reduce/ftypec.scm 126 */
																long BgL_restz00_1797;

																{	/* Reduce/ftypec.scm 126 */
																	int BgL_arg2644z00_1798;

																	BgL_arg2644z00_1798 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 126 */
																		long BgL_auxz00_3648;

																		BgL_auxz00_3648 =
																			(long) (BgL_arg2644z00_1798);
																		BgL_restz00_1797 =
																			(BgL_offsetz00_1794 % BgL_auxz00_3648);
																}}
																{	/* Reduce/ftypec.scm 126 */

																	BgL_method3573z00_1787 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1792,
																			(int) (BgL_modz00_1795)),
																		(int) (BgL_restz00_1797));
									}}}}}}}}
									BgL_res3827z00_1812 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1787)
										(BgL_method3573z00_1787, (obj_t) (BgL_arg3693z00_1336),
											BgL_stackz00_1331, BEOA));
								}
								BgL_arg3692z00_1335 = BgL_res3827z00_1812;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1330))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3692z00_1335), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 127 */
						BgL_nodez00_bglt BgL_arg3694z00_1337;

						{	/* Reduce/ftypec.scm 127 */
							BgL_varz00_bglt BgL_arg3695z00_1338;

							BgL_arg3695z00_1338 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1330))->BgL_varz00);
							{	/* Reduce/ftypec.scm 127 */
								BgL_nodez00_bglt BgL_res3830z00_1843;

								{	/* Reduce/ftypec.scm 127 */
									BgL_nodez00_bglt BgL_nodez00_1816;

									BgL_nodez00_1816 = (BgL_nodez00_bglt) (BgL_arg3695z00_1338);
									{	/* Reduce/ftypec.scm 127 */
										obj_t BgL_method3573z00_1818;

										{	/* Reduce/ftypec.scm 127 */
											BgL_objectz00_bglt BgL_objz00_1819;

											BgL_objz00_1819 = (BgL_objectz00_bglt) (BgL_nodez00_1816);
											{	/* Reduce/ftypec.scm 127 */
												long BgL_objzd2classzd2numz00_1820;

												BgL_objzd2classzd2numz00_1820 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1819);
												{	/* Reduce/ftypec.scm 127 */
													obj_t BgL_arg2643z00_1821;

													BgL_arg2643z00_1821 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
														(int) (((long) 1)));
													{	/* Reduce/ftypec.scm 127 */
														obj_t BgL_arrayz00_1823;

														int BgL_offsetz00_1824;

														BgL_arrayz00_1823 = BgL_arg2643z00_1821;
														BgL_offsetz00_1824 =
															(int) (BgL_objzd2classzd2numz00_1820);
														{	/* Reduce/ftypec.scm 127 */
															long BgL_offsetz00_1825;

															BgL_offsetz00_1825 =
																((long) (BgL_offsetz00_1824) - OBJECT_TYPE);
															{	/* Reduce/ftypec.scm 127 */
																long BgL_modz00_1826;

																{	/* Reduce/ftypec.scm 127 */
																	int BgL_arg2645z00_1827;

																	BgL_arg2645z00_1827 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 127 */
																		long BgL_auxz00_3670;

																		BgL_auxz00_3670 =
																			(long) (BgL_arg2645z00_1827);
																		BgL_modz00_1826 =
																			(BgL_offsetz00_1825 / BgL_auxz00_3670);
																}}
																{	/* Reduce/ftypec.scm 127 */
																	long BgL_restz00_1828;

																	{	/* Reduce/ftypec.scm 127 */
																		int BgL_arg2644z00_1829;

																		BgL_arg2644z00_1829 = (int) (((long) 16));
																		{	/* Reduce/ftypec.scm 127 */
																			long BgL_auxz00_3674;

																			BgL_auxz00_3674 =
																				(long) (BgL_arg2644z00_1829);
																			BgL_restz00_1828 =
																				(BgL_offsetz00_1825 % BgL_auxz00_3674);
																	}}
																	{	/* Reduce/ftypec.scm 127 */

																		BgL_method3573z00_1818 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1823,
																				(int) (BgL_modz00_1826)),
																			(int) (BgL_restz00_1828));
										}}}}}}}}
										BgL_res3830z00_1843 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3573z00_1818) (BgL_method3573z00_1818,
												(obj_t) (BgL_nodez00_1816), BgL_stackz00_1331, BEOA));
								}}
								BgL_arg3694z00_1337 = BgL_res3830z00_1843;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3685;

							BgL_auxz00_3685 = (BgL_varz00_bglt) (BgL_arg3694z00_1337);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1330))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3685), BUNSPEC);
					}}
					BgL_auxz00_3634 = BgL_nodez00_1330;
					return (obj_t) (BgL_auxz00_3634);
				}
			}
		}
	}



/* node-typec!-cast3583 */
	obj_t BGl_nodezd2typecz12zd2cast3583z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2704, obj_t BgL_nodez00_2705, obj_t BgL_stackz00_2706)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 116 */
			{
				BgL_castz00_bglt BgL_nodez00_1322;

				obj_t BgL_stackz00_1323;

				{	/* Reduce/ftypec.scm 117 */
					BgL_castz00_bglt BgL_auxz00_3690;

					BgL_nodez00_1322 = (BgL_castz00_bglt) (BgL_nodez00_2705);
					BgL_stackz00_1323 = BgL_stackz00_2706;
					{	/* Reduce/ftypec.scm 117 */
						BgL_nodez00_bglt BgL_arg3690z00_1754;

						BgL_arg3690z00_1754 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1322))->BgL_argz00);
						{	/* Reduce/ftypec.scm 117 */
							BgL_nodez00_bglt BgL_res3824z00_1783;

							{	/* Reduce/ftypec.scm 117 */
								obj_t BgL_method3573z00_1758;

								{	/* Reduce/ftypec.scm 117 */
									BgL_objectz00_bglt BgL_objz00_1759;

									BgL_objz00_1759 = (BgL_objectz00_bglt) (BgL_arg3690z00_1754);
									{	/* Reduce/ftypec.scm 117 */
										long BgL_objzd2classzd2numz00_1760;

										BgL_objzd2classzd2numz00_1760 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1759);
										{	/* Reduce/ftypec.scm 117 */
											obj_t BgL_arg2643z00_1761;

											BgL_arg2643z00_1761 =
												PROCEDURE_REF
												(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
												(int) (((long) 1)));
											{	/* Reduce/ftypec.scm 117 */
												obj_t BgL_arrayz00_1763;

												int BgL_offsetz00_1764;

												BgL_arrayz00_1763 = BgL_arg2643z00_1761;
												BgL_offsetz00_1764 =
													(int) (BgL_objzd2classzd2numz00_1760);
												{	/* Reduce/ftypec.scm 117 */
													long BgL_offsetz00_1765;

													BgL_offsetz00_1765 =
														((long) (BgL_offsetz00_1764) - OBJECT_TYPE);
													{	/* Reduce/ftypec.scm 117 */
														long BgL_modz00_1766;

														{	/* Reduce/ftypec.scm 117 */
															int BgL_arg2645z00_1767;

															BgL_arg2645z00_1767 = (int) (((long) 16));
															{	/* Reduce/ftypec.scm 117 */
																long BgL_auxz00_3700;

																BgL_auxz00_3700 = (long) (BgL_arg2645z00_1767);
																BgL_modz00_1766 =
																	(BgL_offsetz00_1765 / BgL_auxz00_3700);
														}}
														{	/* Reduce/ftypec.scm 117 */
															long BgL_restz00_1768;

															{	/* Reduce/ftypec.scm 117 */
																int BgL_arg2644z00_1769;

																BgL_arg2644z00_1769 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 117 */
																	long BgL_auxz00_3704;

																	BgL_auxz00_3704 =
																		(long) (BgL_arg2644z00_1769);
																	BgL_restz00_1768 =
																		(BgL_offsetz00_1765 % BgL_auxz00_3704);
															}}
															{	/* Reduce/ftypec.scm 117 */

																BgL_method3573z00_1758 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1763,
																		(int) (BgL_modz00_1766)),
																	(int) (BgL_restz00_1768));
								}}}}}}}}
								BgL_res3824z00_1783 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1758)
									(BgL_method3573z00_1758, (obj_t) (BgL_arg3690z00_1754),
										BgL_stackz00_1323, BEOA));
							} BgL_res3824z00_1783;
					}}
					BgL_auxz00_3690 = BgL_nodez00_1322;
					return (obj_t) (BgL_auxz00_3690);
				}
			}
		}
	}



/* node-typec!-extern3581 */
	obj_t BGl_nodezd2typecz12zd2extern3581z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2707, obj_t BgL_nodez00_2708, obj_t BgL_stackz00_2709)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 108 */
			{
				BgL_externz00_bglt BgL_nodez00_1314;

				obj_t BgL_stackz00_1315;

				{	/* Reduce/ftypec.scm 109 */
					BgL_externz00_bglt BgL_auxz00_3717;

					BgL_nodez00_1314 = (BgL_externz00_bglt) (BgL_nodez00_2708);
					BgL_stackz00_1315 = BgL_stackz00_2709;
					{	/* Reduce/ftypec.scm 109 */
						obj_t BgL_arg3688z00_1751;

						BgL_arg3688z00_1751 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1314))->BgL_exprza2za2);
						BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2
							(BgL_arg3688z00_1751, BgL_stackz00_1315);
					}
					BgL_auxz00_3717 = BgL_nodez00_1314;
					return (obj_t) (BgL_auxz00_3717);
				}
			}
		}
	}



/* node-typec!-funcall3579 */
	obj_t BGl_nodezd2typecz12zd2funcall3579z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2710, obj_t BgL_nodez00_2711, obj_t BgL_stackz00_2712)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 99 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1304;

				obj_t BgL_stackz00_1305;

				{	/* Reduce/ftypec.scm 100 */
					BgL_funcallz00_bglt BgL_auxz00_3722;

					BgL_nodez00_1304 = (BgL_funcallz00_bglt) (BgL_nodez00_2711);
					BgL_stackz00_1305 = BgL_stackz00_2712;
					{	/* Reduce/ftypec.scm 101 */
						BgL_nodez00_bglt BgL_arg3684z00_1309;

						{	/* Reduce/ftypec.scm 101 */
							BgL_nodez00_bglt BgL_arg3685z00_1310;

							BgL_arg3685z00_1310 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1304))->BgL_funz00);
							{	/* Reduce/ftypec.scm 101 */
								BgL_nodez00_bglt BgL_res3821z00_1746;

								{	/* Reduce/ftypec.scm 101 */
									obj_t BgL_method3573z00_1721;

									{	/* Reduce/ftypec.scm 101 */
										BgL_objectz00_bglt BgL_objz00_1722;

										BgL_objz00_1722 =
											(BgL_objectz00_bglt) (BgL_arg3685z00_1310);
										{	/* Reduce/ftypec.scm 101 */
											long BgL_objzd2classzd2numz00_1723;

											BgL_objzd2classzd2numz00_1723 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1722);
											{	/* Reduce/ftypec.scm 101 */
												obj_t BgL_arg2643z00_1724;

												BgL_arg2643z00_1724 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 101 */
													obj_t BgL_arrayz00_1726;

													int BgL_offsetz00_1727;

													BgL_arrayz00_1726 = BgL_arg2643z00_1724;
													BgL_offsetz00_1727 =
														(int) (BgL_objzd2classzd2numz00_1723);
													{	/* Reduce/ftypec.scm 101 */
														long BgL_offsetz00_1728;

														BgL_offsetz00_1728 =
															((long) (BgL_offsetz00_1727) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 101 */
															long BgL_modz00_1729;

															{	/* Reduce/ftypec.scm 101 */
																int BgL_arg2645z00_1730;

																BgL_arg2645z00_1730 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 101 */
																	long BgL_auxz00_3732;

																	BgL_auxz00_3732 =
																		(long) (BgL_arg2645z00_1730);
																	BgL_modz00_1729 =
																		(BgL_offsetz00_1728 / BgL_auxz00_3732);
															}}
															{	/* Reduce/ftypec.scm 101 */
																long BgL_restz00_1731;

																{	/* Reduce/ftypec.scm 101 */
																	int BgL_arg2644z00_1732;

																	BgL_arg2644z00_1732 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 101 */
																		long BgL_auxz00_3736;

																		BgL_auxz00_3736 =
																			(long) (BgL_arg2644z00_1732);
																		BgL_restz00_1731 =
																			(BgL_offsetz00_1728 % BgL_auxz00_3736);
																}}
																{	/* Reduce/ftypec.scm 101 */

																	BgL_method3573z00_1721 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1726,
																			(int) (BgL_modz00_1729)),
																		(int) (BgL_restz00_1731));
									}}}}}}}}
									BgL_res3821z00_1746 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1721)
										(BgL_method3573z00_1721, (obj_t) (BgL_arg3685z00_1310),
											BgL_stackz00_1305, BEOA));
								}
								BgL_arg3684z00_1309 = BgL_res3821z00_1746;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1304))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3684z00_1309), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 102 */
						obj_t BgL_arg3686z00_1311;

						BgL_arg3686z00_1311 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1304))->BgL_argsz00);
						BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2
							(BgL_arg3686z00_1311, BgL_stackz00_1305);
					}
					BgL_auxz00_3722 = BgL_nodez00_1304;
					return (obj_t) (BgL_auxz00_3722);
				}
			}
		}
	}



/* node-typec!-app-ly3577 */
	obj_t BGl_nodezd2typecz12zd2appzd2ly3577zc0zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2713, obj_t BgL_nodez00_2714, obj_t BgL_stackz00_2715)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 90 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1293;

				obj_t BgL_stackz00_1294;

				{	/* Reduce/ftypec.scm 91 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3752;

					BgL_nodez00_1293 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2714);
					BgL_stackz00_1294 = BgL_stackz00_2715;
					{	/* Reduce/ftypec.scm 92 */
						BgL_nodez00_bglt BgL_arg3679z00_1298;

						{	/* Reduce/ftypec.scm 92 */
							BgL_nodez00_bglt BgL_arg3680z00_1299;

							BgL_arg3680z00_1299 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1293))->BgL_funz00);
							{	/* Reduce/ftypec.scm 92 */
								BgL_nodez00_bglt BgL_res3815z00_1684;

								{	/* Reduce/ftypec.scm 92 */
									obj_t BgL_method3573z00_1659;

									{	/* Reduce/ftypec.scm 92 */
										BgL_objectz00_bglt BgL_objz00_1660;

										BgL_objz00_1660 =
											(BgL_objectz00_bglt) (BgL_arg3680z00_1299);
										{	/* Reduce/ftypec.scm 92 */
											long BgL_objzd2classzd2numz00_1661;

											BgL_objzd2classzd2numz00_1661 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1660);
											{	/* Reduce/ftypec.scm 92 */
												obj_t BgL_arg2643z00_1662;

												BgL_arg2643z00_1662 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 92 */
													obj_t BgL_arrayz00_1664;

													int BgL_offsetz00_1665;

													BgL_arrayz00_1664 = BgL_arg2643z00_1662;
													BgL_offsetz00_1665 =
														(int) (BgL_objzd2classzd2numz00_1661);
													{	/* Reduce/ftypec.scm 92 */
														long BgL_offsetz00_1666;

														BgL_offsetz00_1666 =
															((long) (BgL_offsetz00_1665) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 92 */
															long BgL_modz00_1667;

															{	/* Reduce/ftypec.scm 92 */
																int BgL_arg2645z00_1668;

																BgL_arg2645z00_1668 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 92 */
																	long BgL_auxz00_3762;

																	BgL_auxz00_3762 =
																		(long) (BgL_arg2645z00_1668);
																	BgL_modz00_1667 =
																		(BgL_offsetz00_1666 / BgL_auxz00_3762);
															}}
															{	/* Reduce/ftypec.scm 92 */
																long BgL_restz00_1669;

																{	/* Reduce/ftypec.scm 92 */
																	int BgL_arg2644z00_1670;

																	BgL_arg2644z00_1670 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 92 */
																		long BgL_auxz00_3766;

																		BgL_auxz00_3766 =
																			(long) (BgL_arg2644z00_1670);
																		BgL_restz00_1669 =
																			(BgL_offsetz00_1666 % BgL_auxz00_3766);
																}}
																{	/* Reduce/ftypec.scm 92 */

																	BgL_method3573z00_1659 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1664,
																			(int) (BgL_modz00_1667)),
																		(int) (BgL_restz00_1669));
									}}}}}}}}
									BgL_res3815z00_1684 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1659)
										(BgL_method3573z00_1659, (obj_t) (BgL_arg3680z00_1299),
											BgL_stackz00_1294, BEOA));
								}
								BgL_arg3679z00_1298 = BgL_res3815z00_1684;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1293))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3679z00_1298), BUNSPEC);
					}
					{	/* Reduce/ftypec.scm 93 */
						BgL_nodez00_bglt BgL_arg3681z00_1300;

						{	/* Reduce/ftypec.scm 93 */
							BgL_nodez00_bglt BgL_arg3682z00_1301;

							BgL_arg3682z00_1301 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1293))->BgL_argz00);
							{	/* Reduce/ftypec.scm 93 */
								BgL_nodez00_bglt BgL_res3818z00_1715;

								{	/* Reduce/ftypec.scm 93 */
									obj_t BgL_method3573z00_1690;

									{	/* Reduce/ftypec.scm 93 */
										BgL_objectz00_bglt BgL_objz00_1691;

										BgL_objz00_1691 =
											(BgL_objectz00_bglt) (BgL_arg3682z00_1301);
										{	/* Reduce/ftypec.scm 93 */
											long BgL_objzd2classzd2numz00_1692;

											BgL_objzd2classzd2numz00_1692 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1691);
											{	/* Reduce/ftypec.scm 93 */
												obj_t BgL_arg2643z00_1693;

												BgL_arg2643z00_1693 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_flowzd2typeczd2,
													(int) (((long) 1)));
												{	/* Reduce/ftypec.scm 93 */
													obj_t BgL_arrayz00_1695;

													int BgL_offsetz00_1696;

													BgL_arrayz00_1695 = BgL_arg2643z00_1693;
													BgL_offsetz00_1696 =
														(int) (BgL_objzd2classzd2numz00_1692);
													{	/* Reduce/ftypec.scm 93 */
														long BgL_offsetz00_1697;

														BgL_offsetz00_1697 =
															((long) (BgL_offsetz00_1696) - OBJECT_TYPE);
														{	/* Reduce/ftypec.scm 93 */
															long BgL_modz00_1698;

															{	/* Reduce/ftypec.scm 93 */
																int BgL_arg2645z00_1699;

																BgL_arg2645z00_1699 = (int) (((long) 16));
																{	/* Reduce/ftypec.scm 93 */
																	long BgL_auxz00_3787;

																	BgL_auxz00_3787 =
																		(long) (BgL_arg2645z00_1699);
																	BgL_modz00_1698 =
																		(BgL_offsetz00_1697 / BgL_auxz00_3787);
															}}
															{	/* Reduce/ftypec.scm 93 */
																long BgL_restz00_1700;

																{	/* Reduce/ftypec.scm 93 */
																	int BgL_arg2644z00_1701;

																	BgL_arg2644z00_1701 = (int) (((long) 16));
																	{	/* Reduce/ftypec.scm 93 */
																		long BgL_auxz00_3791;

																		BgL_auxz00_3791 =
																			(long) (BgL_arg2644z00_1701);
																		BgL_restz00_1700 =
																			(BgL_offsetz00_1697 % BgL_auxz00_3791);
																}}
																{	/* Reduce/ftypec.scm 93 */

																	BgL_method3573z00_1690 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1695,
																			(int) (BgL_modz00_1698)),
																		(int) (BgL_restz00_1700));
									}}}}}}}}
									BgL_res3818z00_1715 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3573z00_1690)
										(BgL_method3573z00_1690, (obj_t) (BgL_arg3682z00_1301),
											BgL_stackz00_1294, BEOA));
								}
								BgL_arg3681z00_1300 = BgL_res3818z00_1715;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1293))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3681z00_1300), BUNSPEC);
					}
					BgL_auxz00_3752 = BgL_nodez00_1293;
					return (obj_t) (BgL_auxz00_3752);
				}
			}
		}
	}



/* node-typec!-sequence3575 */
	obj_t BGl_nodezd2typecz12zd2sequence3575z12zzreduce_flowzd2typeczd2(obj_t
		BgL_envz00_2716, obj_t BgL_nodez00_2717, obj_t BgL_stackz00_2718)
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 82 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1285;

				obj_t BgL_stackz00_1286;

				{	/* Reduce/ftypec.scm 83 */
					BgL_sequencez00_bglt BgL_auxz00_3805;

					BgL_nodez00_1285 = (BgL_sequencez00_bglt) (BgL_nodez00_2717);
					BgL_stackz00_1286 = BgL_stackz00_2718;
					{	/* Reduce/ftypec.scm 83 */
						obj_t BgL_arg3677z00_1654;

						BgL_arg3677z00_1654 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1285))->BgL_nodesz00);
						BGl_nodezd2typecza2z12z62zzreduce_flowzd2typeczd2
							(BgL_arg3677z00_1654, BgL_stackz00_1286);
					}
					BgL_auxz00_3805 = BgL_nodez00_1285;
					return (obj_t) (BgL_auxz00_3805);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_flowzd2typeczd2()
	{
		AN_OBJECT;
		{	/* Reduce/ftypec.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 269647501),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3925z00zzreduce_flowzd2typeczd2));
		}
	}

#ifdef __cplusplus
}
#endif
