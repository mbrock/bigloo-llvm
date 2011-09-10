/*===========================================================================*/
/*   (Reduce/typec.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/typec.scm)*/
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


	static obj_t BGl_nodezd2typecz12zd2kwote3565z12zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2typecz12zd2appzd2ly3573zc0zzreduce_typecz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2atom3563z12zzreduce_typecz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2var3567z12zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static long BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_typecz00();
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl__nodezd2typecz12zc0zzreduce_typecz00(obj_t, obj_t);
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	static obj_t BGl__nodezd2typecz12zd2default3560z12zzreduce_typecz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzreduce_typecz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzreduce_typecz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd2typecz12zd2select3587z12zzreduce_typecz00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2cast3579z12zzreduce_typecz00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2typecz12zd2default3560z12zzreduce_typecz00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2typecz12zd2setzd2exzd2i3593z12zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2typecz12zd2sequence3571z12zzreduce_typecz00(obj_t,
		obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2boxzd2setz123599zd2zzreduce_typecz00(obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2funcall3575z12zzreduce_typecz00(obj_t,
		obj_t);
	extern obj_t BGl_lvtypezd2nodez12zc0zzast_lvtypez00(BgL_nodez00_bglt);
	static obj_t BGl_nodezd2typecz12zd2conditio3583z12zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2typecz12zd2setq3581z12zzreduce_typecz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_typecz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2jumpzd2exzd23595z12zzreduce_typecz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_typecz00 = BUNSPEC;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static long BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00;
	static obj_t BGl_genericzd2initzd2zzreduce_typecz00();
	static obj_t BGl__reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern bool_t BGl_typezd2disjointzf3z21zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2boxzd2ref3601zc0zzreduce_typecz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_nodezd2typecz12zd2fail3585z12zzreduce_typecz00(obj_t, obj_t);
	static obj_t BGl_nodezd2typecz12zd2makezd2box3597zc0zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_typecz00();
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2typecza2z12z62zzreduce_typecz00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2typecz12zd2app3604z12zzreduce_typecz00(obj_t, obj_t);
	static obj_t BGl_nodezd2typecz12zd2letzd2fun3589zc0zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2typecz12zd2closure3569z12zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2typecz12zd2letzd2var3591zc0zzreduce_typecz00(obj_t,
		obj_t);
	extern bool_t BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_typecz00();
	static obj_t BGl_nodezd2typecz12zd2extern3577z12zzreduce_typecz00(obj_t,
		obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3866z00zzreduce_typecz00,
		BgL_bgl_string3866za700za7za7r3897za7, "      type check             ", 29);
	      DEFINE_STRING(BGl_string3867z00zzreduce_typecz00,
		BgL_bgl_string3867za700za7za7r3898za7, ")\n", 2);
	      DEFINE_STRING(BGl_string3868z00zzreduce_typecz00,
		BgL_bgl_string3868za700za7za7r3899za7, ", remaining: ", 13);
	      DEFINE_STRING(BGl_string3870z00zzreduce_typecz00,
		BgL_bgl_string3870za700za7za7r3900za7, "node-typec!", 11);
	      DEFINE_STRING(BGl_string3869z00zzreduce_typecz00,
		BgL_bgl_string3869za700za7za7r3901za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string3871z00zzreduce_typecz00,
		BgL_bgl_string3871za700za7za7r3902za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3893z00zzreduce_typecz00,
		BgL_bgl_string3893za700za7za7r3903za7, "reduce_typec", 12);
	      DEFINE_STRING(BGl_string3894z00zzreduce_typecz00,
		BgL_bgl_string3894za700za7za7r3904za7, "node-typec!-default3560 done ", 29);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2typecz12zd2default3560zd2envzc0zzreduce_typecz00,
		BgL_bgl__nodeza7d2typecza7123905z00,
		BGl__nodezd2typecz12zd2default3560z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
		BgL_bgl__nodeza7d2typecza7123906z00,
		BGl__nodezd2typecz12zc0zzreduce_typecz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_reducezd2typezd2checkz12zd2envzc0zzreduce_typecz00,
		BgL_bgl__reduceza7d2typeza7d3907z00,
		BGl__reducezd2typezd2checkz12z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3872z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73908za7,
		BGl_nodezd2typecz12zd2atom3563z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3873z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73909za7,
		BGl_nodezd2typecz12zd2kwote3565z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3874z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73910za7,
		BGl_nodezd2typecz12zd2var3567z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3875z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73911za7,
		BGl_nodezd2typecz12zd2closure3569z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3876z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73912za7,
		BGl_nodezd2typecz12zd2sequence3571z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3877z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73913za7,
		BGl_nodezd2typecz12zd2appzd2ly3573zc0zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3878z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73914za7,
		BGl_nodezd2typecz12zd2funcall3575z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3880z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73915za7,
		BGl_nodezd2typecz12zd2cast3579z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3879z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73916za7,
		BGl_nodezd2typecz12zd2extern3577z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3881z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73917za7,
		BGl_nodezd2typecz12zd2setq3581z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3882z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73918za7,
		BGl_nodezd2typecz12zd2conditio3583z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3883z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73919za7,
		BGl_nodezd2typecz12zd2fail3585z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3884z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73920za7,
		BGl_nodezd2typecz12zd2select3587z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3885z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73921za7,
		BGl_nodezd2typecz12zd2letzd2fun3589zc0zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3886z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73922za7,
		BGl_nodezd2typecz12zd2letzd2var3591zc0zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3887z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73923za7,
		BGl_nodezd2typecz12zd2setzd2exzd2i3593z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3888z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73924za7,
		BGl_nodezd2typecz12zd2jumpzd2exzd23595z12zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3890z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73925za7,
		BGl_nodezd2typecz12zd2boxzd2setz123599zd2zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3889z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73926za7,
		BGl_nodezd2typecz12zd2makezd2box3597zc0zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3891z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73927za7,
		BGl_nodezd2typecz12zd2boxzd2ref3601zc0zzreduce_typecz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3892z00zzreduce_typecz00,
		BgL_bgl_nodeza7d2typecza712za73928za7,
		BGl_nodezd2typecz12zd2app3604z12zzreduce_typecz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_typecz00(long
		BgL_checksumz00_2492, char *BgL_fromz00_2493)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_typecz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_typecz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_typecz00();
					BGl_cnstzd2initzd2zzreduce_typecz00();
					BGl_importedzd2moduleszd2initz00zzreduce_typecz00();
					BGl_genericzd2initzd2zzreduce_typecz00();
					BGl_methodzd2initzd2zzreduce_typecz00();
					BGl_toplevelzd2initzd2zzreduce_typecz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_typecz00()
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_typec");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "reduce_typec");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_typec");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_typecz00()
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			{	/* Reduce/typec.scm 15 */
				obj_t BgL_cportz00_2480;

				BgL_cportz00_2480 =
					bgl_open_input_string(BGl_string3894z00zzreduce_typecz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2481;

					BgL_iz00_2481 = ((long) 1);
				BgL_loopz00_2482:
					if ((BgL_iz00_2481 == ((long) -1)))
						{	/* Reduce/typec.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/typec.scm 15 */
							{	/* Reduce/typec.scm 15 */
								obj_t BgL_arg3896z00_2484;

								{	/* Reduce/typec.scm 15 */

									{	/* Reduce/typec.scm 15 */
										obj_t BgL_locationz00_2486;

										BgL_locationz00_2486 = BBOOL(((bool_t) 0));
										{	/* Reduce/typec.scm 15 */

											BgL_arg3896z00_2484 =
												BGl_readz00zz__readerz00(BgL_cportz00_2480,
												BgL_locationz00_2486);
										}
									}
								}
								{	/* Reduce/typec.scm 15 */
									int BgL_auxz00_2512;

									BgL_auxz00_2512 = (int) (BgL_iz00_2481);
									CNST_TABLE_SET(BgL_auxz00_2512, BgL_arg3896z00_2484);
							}}
							{	/* Reduce/typec.scm 15 */
								int BgL_auxz00_2487;

								BgL_auxz00_2487 = (int) ((BgL_iz00_2481 - ((long) 1)));
								{
									long BgL_iz00_2517;

									BgL_iz00_2517 = (long) (BgL_auxz00_2487);
									BgL_iz00_2481 = BgL_iz00_2517;
									goto BgL_loopz00_2482;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_typecz00()
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00 = ((long) 0);
			BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* reduce-type-check! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 35 */
			{	/* Reduce/typec.scm 36 */
				obj_t BgL_list3605z00_848;

				BgL_list3605z00_848 =
					MAKE_PAIR(BGl_string3866z00zzreduce_typecz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3605z00_848);
			}
			{
				obj_t BgL_l3549z00_850;

				BgL_l3549z00_850 = BgL_globalsz00_1;
			BgL_zc3anonymousza33606ze3z83_851:
				if (PAIRP(BgL_l3549z00_850))
					{	/* Reduce/typec.scm 37 */
						{	/* Reduce/typec.scm 38 */
							obj_t BgL_globalz00_853;

							BgL_globalz00_853 = CAR(BgL_l3549z00_850);
							{	/* Reduce/typec.scm 38 */
								BgL_valuez00_bglt BgL_funz00_854;

								{
									BgL_variablez00_bglt BgL_auxz00_2525;

									BgL_auxz00_2525 = (BgL_variablez00_bglt) (BgL_globalz00_853);
									BgL_funz00_854 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2525))->
										BgL_valuez00);
								}
								{	/* Reduce/typec.scm 38 */
									obj_t BgL_nodez00_855;

									{
										BgL_sfunz00_bglt BgL_auxz00_2528;

										BgL_auxz00_2528 = (BgL_sfunz00_bglt) (BgL_funz00_854);
										BgL_nodez00_855 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2528))->BgL_bodyz00);
									}
									{	/* Reduce/typec.scm 39 */

										{	/* Reduce/typec.scm 40 */
											BgL_nodez00_bglt BgL_arg3608z00_856;

											{	/* Reduce/typec.scm 40 */
												BgL_nodez00_bglt BgL_res3782z00_1527;

												{	/* Reduce/typec.scm 40 */
													BgL_nodez00_bglt BgL_nodez00_1501;

													BgL_nodez00_1501 =
														(BgL_nodez00_bglt) (BgL_nodez00_855);
													{	/* Reduce/typec.scm 40 */
														obj_t BgL_method3561z00_1502;

														{	/* Reduce/typec.scm 40 */
															BgL_objectz00_bglt BgL_objz00_1503;

															BgL_objz00_1503 =
																(BgL_objectz00_bglt) (BgL_nodez00_1501);
															{	/* Reduce/typec.scm 40 */
																long BgL_objzd2classzd2numz00_1504;

																BgL_objzd2classzd2numz00_1504 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1503);
																{	/* Reduce/typec.scm 40 */
																	obj_t BgL_arg2643z00_1505;

																	BgL_arg2643z00_1505 =
																		PROCEDURE_REF
																		(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
																		(int) (((long) 1)));
																	{	/* Reduce/typec.scm 40 */
																		obj_t BgL_arrayz00_1507;

																		int BgL_offsetz00_1508;

																		BgL_arrayz00_1507 = BgL_arg2643z00_1505;
																		BgL_offsetz00_1508 =
																			(int) (BgL_objzd2classzd2numz00_1504);
																		{	/* Reduce/typec.scm 40 */
																			long BgL_offsetz00_1509;

																			BgL_offsetz00_1509 =
																				(
																				(long) (BgL_offsetz00_1508) -
																				OBJECT_TYPE);
																			{	/* Reduce/typec.scm 40 */
																				long BgL_modz00_1510;

																				{	/* Reduce/typec.scm 40 */
																					int BgL_arg2645z00_1511;

																					BgL_arg2645z00_1511 =
																						(int) (((long) 16));
																					{	/* Reduce/typec.scm 40 */
																						long BgL_auxz00_2540;

																						BgL_auxz00_2540 =
																							(long) (BgL_arg2645z00_1511);
																						BgL_modz00_1510 =
																							(BgL_offsetz00_1509 /
																							BgL_auxz00_2540);
																				}}
																				{	/* Reduce/typec.scm 40 */
																					long BgL_restz00_1512;

																					{	/* Reduce/typec.scm 40 */
																						int BgL_arg2644z00_1513;

																						BgL_arg2644z00_1513 =
																							(int) (((long) 16));
																						{	/* Reduce/typec.scm 40 */
																							long BgL_auxz00_2544;

																							BgL_auxz00_2544 =
																								(long) (BgL_arg2644z00_1513);
																							BgL_restz00_1512 =
																								(BgL_offsetz00_1509 %
																								BgL_auxz00_2544);
																					}}
																					{	/* Reduce/typec.scm 40 */

																						BgL_method3561z00_1502 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1507,
																								(int) (BgL_modz00_1510)),
																							(int) (BgL_restz00_1512));
														}}}}}}}}
														BgL_res3782z00_1527 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3561z00_1502) (BgL_method3561z00_1502,
																(obj_t) (BgL_nodez00_1501), BEOA));
												}}
												BgL_arg3608z00_856 = BgL_res3782z00_1527;
											}
											{
												obj_t BgL_auxz00_2557;

												BgL_sfunz00_bglt BgL_auxz00_2555;

												BgL_auxz00_2557 = (obj_t) (BgL_arg3608z00_856);
												BgL_auxz00_2555 = (BgL_sfunz00_bglt) (BgL_funz00_854);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2555))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_2557), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3549z00_2560;

							BgL_l3549z00_2560 = CDR(BgL_l3549z00_850);
							BgL_l3549z00_850 = BgL_l3549z00_2560;
							goto BgL_zc3anonymousza33606ze3z83_851;
						}
					}
				else
					{	/* Reduce/typec.scm 37 */
						((bool_t) 1);
					}
			}
			{	/* Reduce/typec.scm 43 */
				obj_t BgL_list3610z00_859;

				{	/* Reduce/typec.scm 43 */
					obj_t BgL_arg3613z00_861;

					{	/* Reduce/typec.scm 43 */
						obj_t BgL_arg3614z00_862;

						{	/* Reduce/typec.scm 43 */
							obj_t BgL_arg3616z00_864;

							{	/* Reduce/typec.scm 43 */
								obj_t BgL_arg3617z00_865;

								BgL_arg3617z00_865 =
									MAKE_PAIR(BGl_string3867z00zzreduce_typecz00, BNIL);
								BgL_arg3616z00_864 =
									MAKE_PAIR(BINT
									(BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00),
									BgL_arg3617z00_865);
							}
							BgL_arg3614z00_862 =
								MAKE_PAIR(BGl_string3868z00zzreduce_typecz00,
								BgL_arg3616z00_864);
						}
						BgL_arg3613z00_861 =
							MAKE_PAIR(BINT
							(BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00),
							BgL_arg3614z00_862);
					}
					BgL_list3610z00_859 =
						MAKE_PAIR(BGl_string3869z00zzreduce_typecz00, BgL_arg3613z00_861);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3610z00_859);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-type-check! */
	obj_t BGl__reducezd2typezd2checkz12z12zzreduce_typecz00(obj_t BgL_envz00_2411,
		obj_t BgL_globalsz00_2412)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 35 */
			return
				BGl_reducezd2typezd2checkz12z12zzreduce_typecz00(BgL_globalsz00_2412);
		}
	}



/* node-typec*! */
	obj_t BGl_nodezd2typecza2z12z62zzreduce_typecz00(obj_t BgL_nodeza2za2_24)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 234 */
			{
				obj_t BgL_nodeza2za2_867;

				BgL_nodeza2za2_867 = BgL_nodeza2za2_24;
			BgL_zc3anonymousza33618ze3z83_868:
				if (NULLP(BgL_nodeza2za2_867))
					{	/* Reduce/typec.scm 236 */
						return CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Reduce/typec.scm 236 */
						{	/* Reduce/typec.scm 239 */
							BgL_nodez00_bglt BgL_arg3620z00_870;

							{	/* Reduce/typec.scm 239 */
								obj_t BgL_arg3621z00_871;

								BgL_arg3621z00_871 = CAR(BgL_nodeza2za2_867);
								{	/* Reduce/typec.scm 239 */
									BgL_nodez00_bglt BgL_res3785z00_1559;

									{	/* Reduce/typec.scm 239 */
										BgL_nodez00_bglt BgL_nodez00_1533;

										BgL_nodez00_1533 = (BgL_nodez00_bglt) (BgL_arg3621z00_871);
										{	/* Reduce/typec.scm 239 */
											obj_t BgL_method3561z00_1534;

											{	/* Reduce/typec.scm 239 */
												BgL_objectz00_bglt BgL_objz00_1535;

												BgL_objz00_1535 =
													(BgL_objectz00_bglt) (BgL_nodez00_1533);
												{	/* Reduce/typec.scm 239 */
													long BgL_objzd2classzd2numz00_1536;

													BgL_objzd2classzd2numz00_1536 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1535);
													{	/* Reduce/typec.scm 239 */
														obj_t BgL_arg2643z00_1537;

														BgL_arg2643z00_1537 =
															PROCEDURE_REF
															(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
															(int) (((long) 1)));
														{	/* Reduce/typec.scm 239 */
															obj_t BgL_arrayz00_1539;

															int BgL_offsetz00_1540;

															BgL_arrayz00_1539 = BgL_arg2643z00_1537;
															BgL_offsetz00_1540 =
																(int) (BgL_objzd2classzd2numz00_1536);
															{	/* Reduce/typec.scm 239 */
																long BgL_offsetz00_1541;

																BgL_offsetz00_1541 =
																	((long) (BgL_offsetz00_1540) - OBJECT_TYPE);
																{	/* Reduce/typec.scm 239 */
																	long BgL_modz00_1542;

																	{	/* Reduce/typec.scm 239 */
																		int BgL_arg2645z00_1543;

																		BgL_arg2645z00_1543 = (int) (((long) 16));
																		{	/* Reduce/typec.scm 239 */
																			long BgL_auxz00_2585;

																			BgL_auxz00_2585 =
																				(long) (BgL_arg2645z00_1543);
																			BgL_modz00_1542 =
																				(BgL_offsetz00_1541 / BgL_auxz00_2585);
																	}}
																	{	/* Reduce/typec.scm 239 */
																		long BgL_restz00_1544;

																		{	/* Reduce/typec.scm 239 */
																			int BgL_arg2644z00_1545;

																			BgL_arg2644z00_1545 = (int) (((long) 16));
																			{	/* Reduce/typec.scm 239 */
																				long BgL_auxz00_2589;

																				BgL_auxz00_2589 =
																					(long) (BgL_arg2644z00_1545);
																				BgL_restz00_1544 =
																					(BgL_offsetz00_1541 %
																					BgL_auxz00_2589);
																		}}
																		{	/* Reduce/typec.scm 239 */

																			BgL_method3561z00_1534 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1539,
																					(int) (BgL_modz00_1542)),
																				(int) (BgL_restz00_1544));
											}}}}}}}}
											BgL_res3785z00_1559 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3561z00_1534) (BgL_method3561z00_1534,
													(obj_t) (BgL_nodez00_1533), BEOA));
									}}
									BgL_arg3620z00_870 = BgL_res3785z00_1559;
							}}
							{	/* Reduce/typec.scm 239 */
								obj_t BgL_auxz00_2600;

								BgL_auxz00_2600 = (obj_t) (BgL_arg3620z00_870);
								SET_CAR(BgL_nodeza2za2_867, BgL_auxz00_2600);
						}}
						{
							obj_t BgL_nodeza2za2_2603;

							BgL_nodeza2za2_2603 = CDR(BgL_nodeza2za2_867);
							BgL_nodeza2za2_867 = BgL_nodeza2za2_2603;
							goto BgL_zc3anonymousza33618ze3z83_868;
						}
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_typecz00()
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_nodezd2typecz12zd2default3560zd2envzc0zzreduce_typecz00,
				BGl_nodez00zzast_nodez00, BGl_string3870z00zzreduce_typecz00);
		}
	}



/* node-typec! */
	BgL_nodez00_bglt BGl_nodezd2typecz12zc0zzreduce_typecz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 57 */
			{	/* Reduce/typec.scm 57 */
				obj_t BgL_method3561z00_1563;

				{	/* Reduce/typec.scm 57 */
					BgL_objectz00_bglt BgL_objz00_1564;

					BgL_objz00_1564 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/typec.scm 57 */
						long BgL_objzd2classzd2numz00_1565;

						BgL_objzd2classzd2numz00_1565 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1564);
						{	/* Reduce/typec.scm 57 */
							obj_t BgL_arg2643z00_1566;

							BgL_arg2643z00_1566 =
								PROCEDURE_REF(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
								(int) (((long) 1)));
							{	/* Reduce/typec.scm 57 */
								obj_t BgL_arrayz00_1568;

								int BgL_offsetz00_1569;

								BgL_arrayz00_1568 = BgL_arg2643z00_1566;
								BgL_offsetz00_1569 = (int) (BgL_objzd2classzd2numz00_1565);
								{	/* Reduce/typec.scm 57 */
									long BgL_offsetz00_1570;

									BgL_offsetz00_1570 =
										((long) (BgL_offsetz00_1569) - OBJECT_TYPE);
									{	/* Reduce/typec.scm 57 */
										long BgL_modz00_1571;

										{	/* Reduce/typec.scm 57 */
											int BgL_arg2645z00_1572;

											BgL_arg2645z00_1572 = (int) (((long) 16));
											{	/* Reduce/typec.scm 57 */
												long BgL_auxz00_2614;

												BgL_auxz00_2614 = (long) (BgL_arg2645z00_1572);
												BgL_modz00_1571 =
													(BgL_offsetz00_1570 / BgL_auxz00_2614);
										}}
										{	/* Reduce/typec.scm 57 */
											long BgL_restz00_1573;

											{	/* Reduce/typec.scm 57 */
												int BgL_arg2644z00_1574;

												BgL_arg2644z00_1574 = (int) (((long) 16));
												{	/* Reduce/typec.scm 57 */
													long BgL_auxz00_2618;

													BgL_auxz00_2618 = (long) (BgL_arg2644z00_1574);
													BgL_restz00_1573 =
														(BgL_offsetz00_1570 % BgL_auxz00_2618);
											}}
											{	/* Reduce/typec.scm 57 */

												BgL_method3561z00_1563 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1568,
														(int) (BgL_modz00_1571)), (int) (BgL_restz00_1573));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1563)
					(BgL_method3561z00_1563, (obj_t) (BgL_nodez00_2), BEOA));
			}
		}
	}



/* _node-typec! */
	obj_t BGl__nodezd2typecz12zc0zzreduce_typecz00(obj_t BgL_envz00_2413,
		obj_t BgL_nodez00_2414)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 57 */
			return
				(obj_t) (BGl_nodezd2typecz12zc0zzreduce_typecz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2414)));
		}
	}



/* node-typec!-default3560 */
	BgL_nodez00_bglt
		BGl_nodezd2typecz12zd2default3560z12zzreduce_typecz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string3871z00zzreduce_typecz00, (obj_t) (BgL_nodez00_3)));
		}
	}



/* _node-typec!-default3560 */
	obj_t BGl__nodezd2typecz12zd2default3560z12zzreduce_typecz00(obj_t
		BgL_envz00_2415, obj_t BgL_nodez00_2416)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			return
				(obj_t) (BGl_nodezd2typecz12zd2default3560z12zzreduce_typecz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2416)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_typecz00()
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_atomz00zzast_nodez00, BGl_proc3872z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_kwotez00zzast_nodez00, BGl_proc3873z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00, BGl_varz00zzast_nodez00,
				BGl_proc3874z00zzreduce_typecz00, BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_closurez00zzast_nodez00, BGl_proc3875z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3876z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3877z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3878z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_externz00zzast_nodez00, BGl_proc3879z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_castz00zzast_nodez00, BGl_proc3880z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_setqz00zzast_nodez00, BGl_proc3881z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3882z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_failz00zzast_nodez00, BGl_proc3883z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_selectz00zzast_nodez00, BGl_proc3884z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3885z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3886z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3887z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3888z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3889z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3890z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3891z00zzreduce_typecz00,
				BGl_string3870z00zzreduce_typecz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00, BGl_appz00zzast_nodez00,
				BGl_proc3892z00zzreduce_typecz00, BGl_string3870z00zzreduce_typecz00);
		}
	}



/* node-typec!-app3604 */
	obj_t BGl_nodezd2typecz12zd2app3604z12zzreduce_typecz00(obj_t BgL_envz00_2438,
		obj_t BgL_nodez00_2439)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 250 */
			{
				BgL_appz00_bglt BgL_nodez00_1464;

				BgL_nodez00_1464 = (BgL_appz00_bglt) (BgL_nodez00_2439);
				{	/* Reduce/typec.scm 252 */
					obj_t BgL_arg3758z00_1468;

					BgL_arg3758z00_1468 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1464))->BgL_argsz00);
					BGl_nodezd2typecza2z12z62zzreduce_typecz00(BgL_arg3758z00_1468);
				}
				{	/* Reduce/typec.scm 253 */
					BgL_variablez00_bglt BgL_varz00_1469;

					{	/* Reduce/typec.scm 253 */
						BgL_varz00_bglt BgL_obj2155z00_2390;

						BgL_obj2155z00_2390 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1464))->BgL_funz00);
						BgL_varz00_1469 =
							(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2390))->BgL_variablez00);
					}
					{	/* Reduce/typec.scm 253 */
						obj_t BgL_typecz00_1470;

						{	/* Reduce/typec.scm 254 */
							BgL_funz00_bglt BgL_obj1817z00_2392;

							BgL_obj1817z00_2392 =
								(BgL_funz00_bglt) (
								(((BgL_variablez00_bglt) CREF(BgL_varz00_1469))->BgL_valuez00));
							BgL_typecz00_1470 =
								(((BgL_funz00_bglt) CREF(BgL_obj1817z00_2392))->
								BgL_predicatezd2ofzd2);
						}
						{	/* Reduce/typec.scm 254 */
							BgL_typez00_bglt BgL_typez00_1471;

							BgL_typez00_1471 =
								BGl_getzd2typezd2zztype_typeofz00(
								(BgL_nodez00_bglt) (BgL_nodez00_1464));
							{	/* Reduce/typec.scm 255 */

								{	/* Reduce/typec.scm 256 */
									bool_t BgL_testz00_2669;

									{	/* Reduce/typec.scm 256 */
										bool_t BgL_testz00_2670;

										{	/* Reduce/typec.scm 256 */
											obj_t BgL_auxz00_2671;

											BgL_auxz00_2671 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_1464))->
												BgL_argsz00);
											BgL_testz00_2670 = PAIRP(BgL_auxz00_2671);
										}
										if (BgL_testz00_2670)
											{	/* Reduce/typec.scm 257 */
												bool_t BgL_testz00_2674;

												{	/* Reduce/typec.scm 257 */
													obj_t BgL_auxz00_2675;

													{	/* Reduce/typec.scm 257 */
														obj_t BgL_pairz00_2396;

														BgL_pairz00_2396 =
															(((BgL_appz00_bglt) CREF(BgL_nodez00_1464))->
															BgL_argsz00);
														BgL_auxz00_2675 = CDR(BgL_pairz00_2396);
													}
													BgL_testz00_2674 = NULLP(BgL_auxz00_2675);
												}
												if (BgL_testz00_2674)
													{	/* Reduce/typec.scm 257 */
														if (BGl_iszd2azf3z21zz__objectz00(BgL_typecz00_1470,
																BGl_typez00zztype_typez00))
															{	/* Reduce/typec.scm 259 */
																bool_t BgL_testz00_2681;

																{	/* Reduce/typec.scm 259 */
																	obj_t BgL_arg3772z00_1488;

																	{	/* Reduce/typec.scm 259 */
																		obj_t BgL_pairz00_2400;

																		BgL_pairz00_2400 =
																			(((BgL_appz00_bglt)
																				CREF(BgL_nodez00_1464))->BgL_argsz00);
																		BgL_arg3772z00_1488 = CAR(BgL_pairz00_2400);
																	}
																	BgL_testz00_2681 =
																		BGl_sidezd2effectzf3z21zzeffect_effectz00(
																		(BgL_nodez00_bglt) (BgL_arg3772z00_1488));
																}
																if (BgL_testz00_2681)
																	{	/* Reduce/typec.scm 259 */
																		BgL_testz00_2669 = ((bool_t) 0);
																	}
																else
																	{	/* Reduce/typec.scm 259 */
																		BgL_testz00_2669 = ((bool_t) 1);
																	}
															}
														else
															{	/* Reduce/typec.scm 258 */
																BgL_testz00_2669 = ((bool_t) 0);
															}
													}
												else
													{	/* Reduce/typec.scm 257 */
														BgL_testz00_2669 = ((bool_t) 0);
													}
											}
										else
											{	/* Reduce/typec.scm 256 */
												BgL_testz00_2669 = ((bool_t) 0);
											}
									}
									if (BgL_testz00_2669)
										{	/* Reduce/typec.scm 260 */
											BgL_typez00_bglt BgL_typeaz00_1473;

											{	/* Reduce/typec.scm 260 */
												obj_t BgL_arg3766z00_1482;

												{	/* Reduce/typec.scm 260 */
													obj_t BgL_pairz00_2402;

													BgL_pairz00_2402 =
														(((BgL_appz00_bglt) CREF(BgL_nodez00_1464))->
														BgL_argsz00);
													BgL_arg3766z00_1482 = CAR(BgL_pairz00_2402);
												}
												BgL_typeaz00_1473 =
													BGl_getzd2typezd2zztype_typeofz00(
													(BgL_nodez00_bglt) (BgL_arg3766z00_1482));
											}
											if (BGl_typezd2lesszd2specificzf3zf3zztype_miscz00(
													(BgL_typez00_bglt) (BgL_typecz00_1470),
													BgL_typeaz00_1473))
												{	/* Reduce/typec.scm 262 */
													BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00
														=
														(((long) 1) +
														BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00);
													{	/* Reduce/typec.scm 267 */
														BgL_nodez00_bglt BgL_nodez00_1475;

														{	/* Reduce/typec.scm 268 */
															BgL_atomz00_bglt BgL_arg3761z00_1476;

															{	/* Reduce/typec.scm 268 */
																obj_t BgL_arg3762z00_1477;

																{
																	BgL_nodez00_bglt BgL_auxz00_2694;

																	BgL_auxz00_2694 =
																		(BgL_nodez00_bglt) (BgL_nodez00_1464);
																	BgL_arg3762z00_1477 =
																		(((BgL_nodez00_bglt)
																			CREF(BgL_auxz00_2694))->BgL_locz00);
																}
																BgL_arg3761z00_1476 =
																	BGl_makezd2atomzd2zzast_nodez00
																	(BgL_arg3762z00_1477, BgL_typez00_1471,
																	BTRUE);
															}
															BgL_nodez00_1475 =
																BGl_coercez12z12zzcoerce_coercez00(
																(BgL_nodez00_bglt) (BgL_arg3761z00_1476),
																BUNSPEC, BgL_typez00_1471, ((bool_t) 0));
														}
														BGl_lvtypezd2nodez12zc0zzast_lvtypez00
															(BgL_nodez00_1475);
														return (obj_t) (BgL_nodez00_1475);
													}
												}
											else
												{	/* Reduce/typec.scm 262 */
													if (BGl_typezd2disjointzf3z21zztype_miscz00(
															(BgL_typez00_bglt) (BgL_typecz00_1470),
															BgL_typeaz00_1473))
														{	/* Reduce/typec.scm 276 */
															BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00
																=
																(((long) 1) +
																BGl_za2typezd2checkszd2removedza2z00zzreduce_typecz00);
															{	/* Reduce/typec.scm 283 */
																BgL_nodez00_bglt BgL_nodez00_1479;

																{	/* Reduce/typec.scm 284 */
																	BgL_atomz00_bglt BgL_arg3764z00_1480;

																	{	/* Reduce/typec.scm 284 */
																		obj_t BgL_arg3765z00_1481;

																		{
																			BgL_nodez00_bglt BgL_auxz00_2706;

																			BgL_auxz00_2706 =
																				(BgL_nodez00_bglt) (BgL_nodez00_1464);
																			BgL_arg3765z00_1481 =
																				(((BgL_nodez00_bglt)
																					CREF(BgL_auxz00_2706))->BgL_locz00);
																		}
																		BgL_arg3764z00_1480 =
																			BGl_makezd2atomzd2zzast_nodez00
																			(BgL_arg3765z00_1481, BgL_typez00_1471,
																			BFALSE);
																	}
																	BgL_nodez00_1479 =
																		BGl_coercez12z12zzcoerce_coercez00(
																		(BgL_nodez00_bglt) (BgL_arg3764z00_1480),
																		BUNSPEC, BgL_typez00_1471, ((bool_t) 0));
																}
																BGl_lvtypezd2nodez12zc0zzast_lvtypez00
																	(BgL_nodez00_1479);
																return (obj_t) (BgL_nodez00_1479);
															}
														}
													else
														{	/* Reduce/typec.scm 276 */
															BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00
																=
																(((long) 1) +
																BGl_za2typezd2checkszd2remainingza2z00zzreduce_typecz00);
															return (obj_t) (BgL_nodez00_1464);
														}
												}
										}
									else
										{	/* Reduce/typec.scm 256 */
											return (obj_t) (BgL_nodez00_1464);
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* node-typec!-box-ref3601 */
	obj_t BGl_nodezd2typecz12zd2boxzd2ref3601zc0zzreduce_typecz00(obj_t
		BgL_envz00_2440, obj_t BgL_nodez00_2441)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 226 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1456;

				{	/* Reduce/typec.scm 227 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_2718;

					BgL_nodez00_1456 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2441);
					{	/* Reduce/typec.scm 228 */
						BgL_nodez00_bglt BgL_arg3755z00_1460;

						{	/* Reduce/typec.scm 228 */
							BgL_varz00_bglt BgL_arg3756z00_1461;

							BgL_arg3756z00_1461 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1456))->BgL_varz00);
							{	/* Reduce/typec.scm 228 */
								BgL_nodez00_bglt BgL_res3865z00_2385;

								{	/* Reduce/typec.scm 228 */
									BgL_nodez00_bglt BgL_nodez00_2359;

									BgL_nodez00_2359 = (BgL_nodez00_bglt) (BgL_arg3756z00_1461);
									{	/* Reduce/typec.scm 228 */
										obj_t BgL_method3561z00_2360;

										{	/* Reduce/typec.scm 228 */
											BgL_objectz00_bglt BgL_objz00_2361;

											BgL_objz00_2361 = (BgL_objectz00_bglt) (BgL_nodez00_2359);
											{	/* Reduce/typec.scm 228 */
												long BgL_objzd2classzd2numz00_2362;

												BgL_objzd2classzd2numz00_2362 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2361);
												{	/* Reduce/typec.scm 228 */
													obj_t BgL_arg2643z00_2363;

													BgL_arg2643z00_2363 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
														(int) (((long) 1)));
													{	/* Reduce/typec.scm 228 */
														obj_t BgL_arrayz00_2365;

														int BgL_offsetz00_2366;

														BgL_arrayz00_2365 = BgL_arg2643z00_2363;
														BgL_offsetz00_2366 =
															(int) (BgL_objzd2classzd2numz00_2362);
														{	/* Reduce/typec.scm 228 */
															long BgL_offsetz00_2367;

															BgL_offsetz00_2367 =
																((long) (BgL_offsetz00_2366) - OBJECT_TYPE);
															{	/* Reduce/typec.scm 228 */
																long BgL_modz00_2368;

																{	/* Reduce/typec.scm 228 */
																	int BgL_arg2645z00_2369;

																	BgL_arg2645z00_2369 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 228 */
																		long BgL_auxz00_2729;

																		BgL_auxz00_2729 =
																			(long) (BgL_arg2645z00_2369);
																		BgL_modz00_2368 =
																			(BgL_offsetz00_2367 / BgL_auxz00_2729);
																}}
																{	/* Reduce/typec.scm 228 */
																	long BgL_restz00_2370;

																	{	/* Reduce/typec.scm 228 */
																		int BgL_arg2644z00_2371;

																		BgL_arg2644z00_2371 = (int) (((long) 16));
																		{	/* Reduce/typec.scm 228 */
																			long BgL_auxz00_2733;

																			BgL_auxz00_2733 =
																				(long) (BgL_arg2644z00_2371);
																			BgL_restz00_2370 =
																				(BgL_offsetz00_2367 % BgL_auxz00_2733);
																	}}
																	{	/* Reduce/typec.scm 228 */

																		BgL_method3561z00_2360 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2365,
																				(int) (BgL_modz00_2368)),
																			(int) (BgL_restz00_2370));
										}}}}}}}}
										BgL_res3865z00_2385 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3561z00_2360) (BgL_method3561z00_2360,
												(obj_t) (BgL_nodez00_2359), BEOA));
								}}
								BgL_arg3755z00_1460 = BgL_res3865z00_2385;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2744;

							BgL_auxz00_2744 = (BgL_varz00_bglt) (BgL_arg3755z00_1460);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1456))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_2744), BUNSPEC);
					}}
					BgL_auxz00_2718 = BgL_nodez00_1456;
					return (obj_t) (BgL_auxz00_2718);
				}
			}
		}
	}



/* node-typec!-box-set!3599 */
	obj_t BGl_nodezd2typecz12zd2boxzd2setz123599zd2zzreduce_typecz00(obj_t
		BgL_envz00_2442, obj_t BgL_nodez00_2443)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 217 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1446;

				{	/* Reduce/typec.scm 218 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_2749;

					BgL_nodez00_1446 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2443);
					{	/* Reduce/typec.scm 219 */
						BgL_nodez00_bglt BgL_arg3750z00_1450;

						{	/* Reduce/typec.scm 219 */
							BgL_varz00_bglt BgL_arg3751z00_1451;

							BgL_arg3751z00_1451 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1446))->
								BgL_varz00);
							{	/* Reduce/typec.scm 219 */
								BgL_nodez00_bglt BgL_res3859z00_2325;

								{	/* Reduce/typec.scm 219 */
									BgL_nodez00_bglt BgL_nodez00_2299;

									BgL_nodez00_2299 = (BgL_nodez00_bglt) (BgL_arg3751z00_1451);
									{	/* Reduce/typec.scm 219 */
										obj_t BgL_method3561z00_2300;

										{	/* Reduce/typec.scm 219 */
											BgL_objectz00_bglt BgL_objz00_2301;

											BgL_objz00_2301 = (BgL_objectz00_bglt) (BgL_nodez00_2299);
											{	/* Reduce/typec.scm 219 */
												long BgL_objzd2classzd2numz00_2302;

												BgL_objzd2classzd2numz00_2302 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2301);
												{	/* Reduce/typec.scm 219 */
													obj_t BgL_arg2643z00_2303;

													BgL_arg2643z00_2303 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
														(int) (((long) 1)));
													{	/* Reduce/typec.scm 219 */
														obj_t BgL_arrayz00_2305;

														int BgL_offsetz00_2306;

														BgL_arrayz00_2305 = BgL_arg2643z00_2303;
														BgL_offsetz00_2306 =
															(int) (BgL_objzd2classzd2numz00_2302);
														{	/* Reduce/typec.scm 219 */
															long BgL_offsetz00_2307;

															BgL_offsetz00_2307 =
																((long) (BgL_offsetz00_2306) - OBJECT_TYPE);
															{	/* Reduce/typec.scm 219 */
																long BgL_modz00_2308;

																{	/* Reduce/typec.scm 219 */
																	int BgL_arg2645z00_2309;

																	BgL_arg2645z00_2309 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 219 */
																		long BgL_auxz00_2760;

																		BgL_auxz00_2760 =
																			(long) (BgL_arg2645z00_2309);
																		BgL_modz00_2308 =
																			(BgL_offsetz00_2307 / BgL_auxz00_2760);
																}}
																{	/* Reduce/typec.scm 219 */
																	long BgL_restz00_2310;

																	{	/* Reduce/typec.scm 219 */
																		int BgL_arg2644z00_2311;

																		BgL_arg2644z00_2311 = (int) (((long) 16));
																		{	/* Reduce/typec.scm 219 */
																			long BgL_auxz00_2764;

																			BgL_auxz00_2764 =
																				(long) (BgL_arg2644z00_2311);
																			BgL_restz00_2310 =
																				(BgL_offsetz00_2307 % BgL_auxz00_2764);
																	}}
																	{	/* Reduce/typec.scm 219 */

																		BgL_method3561z00_2300 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2305,
																				(int) (BgL_modz00_2308)),
																			(int) (BgL_restz00_2310));
										}}}}}}}}
										BgL_res3859z00_2325 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3561z00_2300) (BgL_method3561z00_2300,
												(obj_t) (BgL_nodez00_2299), BEOA));
								}}
								BgL_arg3750z00_1450 = BgL_res3859z00_2325;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2775;

							BgL_auxz00_2775 = (BgL_varz00_bglt) (BgL_arg3750z00_1450);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1446))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2775), BUNSPEC);
					}}
					{	/* Reduce/typec.scm 220 */
						BgL_nodez00_bglt BgL_arg3752z00_1452;

						{	/* Reduce/typec.scm 220 */
							BgL_nodez00_bglt BgL_arg3753z00_1453;

							BgL_arg3753z00_1453 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1446))->
								BgL_valuez00);
							{	/* Reduce/typec.scm 220 */
								BgL_nodez00_bglt BgL_res3862z00_2355;

								{	/* Reduce/typec.scm 220 */
									obj_t BgL_method3561z00_2330;

									{	/* Reduce/typec.scm 220 */
										BgL_objectz00_bglt BgL_objz00_2331;

										BgL_objz00_2331 =
											(BgL_objectz00_bglt) (BgL_arg3753z00_1453);
										{	/* Reduce/typec.scm 220 */
											long BgL_objzd2classzd2numz00_2332;

											BgL_objzd2classzd2numz00_2332 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2331);
											{	/* Reduce/typec.scm 220 */
												obj_t BgL_arg2643z00_2333;

												BgL_arg2643z00_2333 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 220 */
													obj_t BgL_arrayz00_2335;

													int BgL_offsetz00_2336;

													BgL_arrayz00_2335 = BgL_arg2643z00_2333;
													BgL_offsetz00_2336 =
														(int) (BgL_objzd2classzd2numz00_2332);
													{	/* Reduce/typec.scm 220 */
														long BgL_offsetz00_2337;

														BgL_offsetz00_2337 =
															((long) (BgL_offsetz00_2336) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 220 */
															long BgL_modz00_2338;

															{	/* Reduce/typec.scm 220 */
																int BgL_arg2645z00_2339;

																BgL_arg2645z00_2339 = (int) (((long) 16));
																{	/* Reduce/typec.scm 220 */
																	long BgL_auxz00_2787;

																	BgL_auxz00_2787 =
																		(long) (BgL_arg2645z00_2339);
																	BgL_modz00_2338 =
																		(BgL_offsetz00_2337 / BgL_auxz00_2787);
															}}
															{	/* Reduce/typec.scm 220 */
																long BgL_restz00_2340;

																{	/* Reduce/typec.scm 220 */
																	int BgL_arg2644z00_2341;

																	BgL_arg2644z00_2341 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 220 */
																		long BgL_auxz00_2791;

																		BgL_auxz00_2791 =
																			(long) (BgL_arg2644z00_2341);
																		BgL_restz00_2340 =
																			(BgL_offsetz00_2337 % BgL_auxz00_2791);
																}}
																{	/* Reduce/typec.scm 220 */

																	BgL_method3561z00_2330 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2335,
																			(int) (BgL_modz00_2338)),
																		(int) (BgL_restz00_2340));
									}}}}}}}}
									BgL_res3862z00_2355 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2330)
										(BgL_method3561z00_2330, (obj_t) (BgL_arg3753z00_1453),
											BEOA));
								}
								BgL_arg3752z00_1452 = BgL_res3862z00_2355;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1446))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3752z00_1452), BUNSPEC);
					}
					BgL_auxz00_2749 = BgL_nodez00_1446;
					return (obj_t) (BgL_auxz00_2749);
				}
			}
		}
	}



/* node-typec!-make-box3597 */
	obj_t BGl_nodezd2typecz12zd2makezd2box3597zc0zzreduce_typecz00(obj_t
		BgL_envz00_2444, obj_t BgL_nodez00_2445)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 209 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1438;

				{	/* Reduce/typec.scm 210 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_2805;

					BgL_nodez00_1438 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2445);
					{	/* Reduce/typec.scm 211 */
						BgL_nodez00_bglt BgL_arg3747z00_1442;

						{	/* Reduce/typec.scm 211 */
							BgL_nodez00_bglt BgL_arg3748z00_1443;

							BgL_arg3748z00_1443 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1438))->
								BgL_valuez00);
							{	/* Reduce/typec.scm 211 */
								BgL_nodez00_bglt BgL_res3856z00_2295;

								{	/* Reduce/typec.scm 211 */
									obj_t BgL_method3561z00_2270;

									{	/* Reduce/typec.scm 211 */
										BgL_objectz00_bglt BgL_objz00_2271;

										BgL_objz00_2271 =
											(BgL_objectz00_bglt) (BgL_arg3748z00_1443);
										{	/* Reduce/typec.scm 211 */
											long BgL_objzd2classzd2numz00_2272;

											BgL_objzd2classzd2numz00_2272 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2271);
											{	/* Reduce/typec.scm 211 */
												obj_t BgL_arg2643z00_2273;

												BgL_arg2643z00_2273 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 211 */
													obj_t BgL_arrayz00_2275;

													int BgL_offsetz00_2276;

													BgL_arrayz00_2275 = BgL_arg2643z00_2273;
													BgL_offsetz00_2276 =
														(int) (BgL_objzd2classzd2numz00_2272);
													{	/* Reduce/typec.scm 211 */
														long BgL_offsetz00_2277;

														BgL_offsetz00_2277 =
															((long) (BgL_offsetz00_2276) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 211 */
															long BgL_modz00_2278;

															{	/* Reduce/typec.scm 211 */
																int BgL_arg2645z00_2279;

																BgL_arg2645z00_2279 = (int) (((long) 16));
																{	/* Reduce/typec.scm 211 */
																	long BgL_auxz00_2815;

																	BgL_auxz00_2815 =
																		(long) (BgL_arg2645z00_2279);
																	BgL_modz00_2278 =
																		(BgL_offsetz00_2277 / BgL_auxz00_2815);
															}}
															{	/* Reduce/typec.scm 211 */
																long BgL_restz00_2280;

																{	/* Reduce/typec.scm 211 */
																	int BgL_arg2644z00_2281;

																	BgL_arg2644z00_2281 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 211 */
																		long BgL_auxz00_2819;

																		BgL_auxz00_2819 =
																			(long) (BgL_arg2644z00_2281);
																		BgL_restz00_2280 =
																			(BgL_offsetz00_2277 % BgL_auxz00_2819);
																}}
																{	/* Reduce/typec.scm 211 */

																	BgL_method3561z00_2270 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2275,
																			(int) (BgL_modz00_2278)),
																		(int) (BgL_restz00_2280));
									}}}}}}}}
									BgL_res3856z00_2295 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2270)
										(BgL_method3561z00_2270, (obj_t) (BgL_arg3748z00_1443),
											BEOA));
								}
								BgL_arg3747z00_1442 = BgL_res3856z00_2295;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1438))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3747z00_1442), BUNSPEC);
					}
					BgL_auxz00_2805 = BgL_nodez00_1438;
					return (obj_t) (BgL_auxz00_2805);
				}
			}
		}
	}



/* node-typec!-jump-ex-3595 */
	obj_t BGl_nodezd2typecz12zd2jumpzd2exzd23595z12zzreduce_typecz00(obj_t
		BgL_envz00_2446, obj_t BgL_nodez00_2447)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 200 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1428;

				{	/* Reduce/typec.scm 201 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2833;

					BgL_nodez00_1428 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2447);
					{	/* Reduce/typec.scm 202 */
						BgL_nodez00_bglt BgL_arg3740z00_1432;

						{	/* Reduce/typec.scm 202 */
							BgL_nodez00_bglt BgL_arg3741z00_1433;

							BgL_arg3741z00_1433 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1428))->
								BgL_exitz00);
							{	/* Reduce/typec.scm 202 */
								BgL_nodez00_bglt BgL_res3850z00_2235;

								{	/* Reduce/typec.scm 202 */
									obj_t BgL_method3561z00_2210;

									{	/* Reduce/typec.scm 202 */
										BgL_objectz00_bglt BgL_objz00_2211;

										BgL_objz00_2211 =
											(BgL_objectz00_bglt) (BgL_arg3741z00_1433);
										{	/* Reduce/typec.scm 202 */
											long BgL_objzd2classzd2numz00_2212;

											BgL_objzd2classzd2numz00_2212 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2211);
											{	/* Reduce/typec.scm 202 */
												obj_t BgL_arg2643z00_2213;

												BgL_arg2643z00_2213 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 202 */
													obj_t BgL_arrayz00_2215;

													int BgL_offsetz00_2216;

													BgL_arrayz00_2215 = BgL_arg2643z00_2213;
													BgL_offsetz00_2216 =
														(int) (BgL_objzd2classzd2numz00_2212);
													{	/* Reduce/typec.scm 202 */
														long BgL_offsetz00_2217;

														BgL_offsetz00_2217 =
															((long) (BgL_offsetz00_2216) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 202 */
															long BgL_modz00_2218;

															{	/* Reduce/typec.scm 202 */
																int BgL_arg2645z00_2219;

																BgL_arg2645z00_2219 = (int) (((long) 16));
																{	/* Reduce/typec.scm 202 */
																	long BgL_auxz00_2843;

																	BgL_auxz00_2843 =
																		(long) (BgL_arg2645z00_2219);
																	BgL_modz00_2218 =
																		(BgL_offsetz00_2217 / BgL_auxz00_2843);
															}}
															{	/* Reduce/typec.scm 202 */
																long BgL_restz00_2220;

																{	/* Reduce/typec.scm 202 */
																	int BgL_arg2644z00_2221;

																	BgL_arg2644z00_2221 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 202 */
																		long BgL_auxz00_2847;

																		BgL_auxz00_2847 =
																			(long) (BgL_arg2644z00_2221);
																		BgL_restz00_2220 =
																			(BgL_offsetz00_2217 % BgL_auxz00_2847);
																}}
																{	/* Reduce/typec.scm 202 */

																	BgL_method3561z00_2210 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2215,
																			(int) (BgL_modz00_2218)),
																		(int) (BgL_restz00_2220));
									}}}}}}}}
									BgL_res3850z00_2235 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2210)
										(BgL_method3561z00_2210, (obj_t) (BgL_arg3741z00_1433),
											BEOA));
								}
								BgL_arg3740z00_1432 = BgL_res3850z00_2235;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1428))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3740z00_1432), BUNSPEC);
					}
					{	/* Reduce/typec.scm 203 */
						BgL_nodez00_bglt BgL_arg3742z00_1434;

						{	/* Reduce/typec.scm 203 */
							BgL_nodez00_bglt BgL_arg3745z00_1435;

							BgL_arg3745z00_1435 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1428))->
								BgL_valuez00);
							{	/* Reduce/typec.scm 203 */
								BgL_nodez00_bglt BgL_res3853z00_2265;

								{	/* Reduce/typec.scm 203 */
									obj_t BgL_method3561z00_2240;

									{	/* Reduce/typec.scm 203 */
										BgL_objectz00_bglt BgL_objz00_2241;

										BgL_objz00_2241 =
											(BgL_objectz00_bglt) (BgL_arg3745z00_1435);
										{	/* Reduce/typec.scm 203 */
											long BgL_objzd2classzd2numz00_2242;

											BgL_objzd2classzd2numz00_2242 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2241);
											{	/* Reduce/typec.scm 203 */
												obj_t BgL_arg2643z00_2243;

												BgL_arg2643z00_2243 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 203 */
													obj_t BgL_arrayz00_2245;

													int BgL_offsetz00_2246;

													BgL_arrayz00_2245 = BgL_arg2643z00_2243;
													BgL_offsetz00_2246 =
														(int) (BgL_objzd2classzd2numz00_2242);
													{	/* Reduce/typec.scm 203 */
														long BgL_offsetz00_2247;

														BgL_offsetz00_2247 =
															((long) (BgL_offsetz00_2246) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 203 */
															long BgL_modz00_2248;

															{	/* Reduce/typec.scm 203 */
																int BgL_arg2645z00_2249;

																BgL_arg2645z00_2249 = (int) (((long) 16));
																{	/* Reduce/typec.scm 203 */
																	long BgL_auxz00_2868;

																	BgL_auxz00_2868 =
																		(long) (BgL_arg2645z00_2249);
																	BgL_modz00_2248 =
																		(BgL_offsetz00_2247 / BgL_auxz00_2868);
															}}
															{	/* Reduce/typec.scm 203 */
																long BgL_restz00_2250;

																{	/* Reduce/typec.scm 203 */
																	int BgL_arg2644z00_2251;

																	BgL_arg2644z00_2251 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 203 */
																		long BgL_auxz00_2872;

																		BgL_auxz00_2872 =
																			(long) (BgL_arg2644z00_2251);
																		BgL_restz00_2250 =
																			(BgL_offsetz00_2247 % BgL_auxz00_2872);
																}}
																{	/* Reduce/typec.scm 203 */

																	BgL_method3561z00_2240 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2245,
																			(int) (BgL_modz00_2248)),
																		(int) (BgL_restz00_2250));
									}}}}}}}}
									BgL_res3853z00_2265 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2240)
										(BgL_method3561z00_2240, (obj_t) (BgL_arg3745z00_1435),
											BEOA));
								}
								BgL_arg3742z00_1434 = BgL_res3853z00_2265;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1428))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3742z00_1434), BUNSPEC);
					}
					BgL_auxz00_2833 = BgL_nodez00_1428;
					return (obj_t) (BgL_auxz00_2833);
				}
			}
		}
	}



/* node-typec!-set-ex-i3593 */
	obj_t BGl_nodezd2typecz12zd2setzd2exzd2i3593z12zzreduce_typecz00(obj_t
		BgL_envz00_2448, obj_t BgL_nodez00_2449)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 191 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1418;

				{	/* Reduce/typec.scm 192 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_2886;

					BgL_nodez00_1418 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2449);
					{	/* Reduce/typec.scm 193 */
						BgL_nodez00_bglt BgL_arg3735z00_1422;

						{	/* Reduce/typec.scm 193 */
							BgL_nodez00_bglt BgL_arg3736z00_1423;

							BgL_arg3736z00_1423 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->
								BgL_bodyz00);
							{	/* Reduce/typec.scm 193 */
								BgL_nodez00_bglt BgL_res3844z00_2175;

								{	/* Reduce/typec.scm 193 */
									obj_t BgL_method3561z00_2150;

									{	/* Reduce/typec.scm 193 */
										BgL_objectz00_bglt BgL_objz00_2151;

										BgL_objz00_2151 =
											(BgL_objectz00_bglt) (BgL_arg3736z00_1423);
										{	/* Reduce/typec.scm 193 */
											long BgL_objzd2classzd2numz00_2152;

											BgL_objzd2classzd2numz00_2152 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2151);
											{	/* Reduce/typec.scm 193 */
												obj_t BgL_arg2643z00_2153;

												BgL_arg2643z00_2153 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 193 */
													obj_t BgL_arrayz00_2155;

													int BgL_offsetz00_2156;

													BgL_arrayz00_2155 = BgL_arg2643z00_2153;
													BgL_offsetz00_2156 =
														(int) (BgL_objzd2classzd2numz00_2152);
													{	/* Reduce/typec.scm 193 */
														long BgL_offsetz00_2157;

														BgL_offsetz00_2157 =
															((long) (BgL_offsetz00_2156) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 193 */
															long BgL_modz00_2158;

															{	/* Reduce/typec.scm 193 */
																int BgL_arg2645z00_2159;

																BgL_arg2645z00_2159 = (int) (((long) 16));
																{	/* Reduce/typec.scm 193 */
																	long BgL_auxz00_2896;

																	BgL_auxz00_2896 =
																		(long) (BgL_arg2645z00_2159);
																	BgL_modz00_2158 =
																		(BgL_offsetz00_2157 / BgL_auxz00_2896);
															}}
															{	/* Reduce/typec.scm 193 */
																long BgL_restz00_2160;

																{	/* Reduce/typec.scm 193 */
																	int BgL_arg2644z00_2161;

																	BgL_arg2644z00_2161 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 193 */
																		long BgL_auxz00_2900;

																		BgL_auxz00_2900 =
																			(long) (BgL_arg2644z00_2161);
																		BgL_restz00_2160 =
																			(BgL_offsetz00_2157 % BgL_auxz00_2900);
																}}
																{	/* Reduce/typec.scm 193 */

																	BgL_method3561z00_2150 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2155,
																			(int) (BgL_modz00_2158)),
																		(int) (BgL_restz00_2160));
									}}}}}}}}
									BgL_res3844z00_2175 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2150)
										(BgL_method3561z00_2150, (obj_t) (BgL_arg3736z00_1423),
											BEOA));
								}
								BgL_arg3735z00_1422 = BgL_res3844z00_2175;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3735z00_1422), BUNSPEC);
					}
					{	/* Reduce/typec.scm 194 */
						BgL_nodez00_bglt BgL_arg3737z00_1424;

						{	/* Reduce/typec.scm 194 */
							BgL_varz00_bglt BgL_arg3738z00_1425;

							BgL_arg3738z00_1425 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->
								BgL_varz00);
							{	/* Reduce/typec.scm 194 */
								BgL_nodez00_bglt BgL_res3847z00_2205;

								{	/* Reduce/typec.scm 194 */
									BgL_nodez00_bglt BgL_nodez00_2179;

									BgL_nodez00_2179 = (BgL_nodez00_bglt) (BgL_arg3738z00_1425);
									{	/* Reduce/typec.scm 194 */
										obj_t BgL_method3561z00_2180;

										{	/* Reduce/typec.scm 194 */
											BgL_objectz00_bglt BgL_objz00_2181;

											BgL_objz00_2181 = (BgL_objectz00_bglt) (BgL_nodez00_2179);
											{	/* Reduce/typec.scm 194 */
												long BgL_objzd2classzd2numz00_2182;

												BgL_objzd2classzd2numz00_2182 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2181);
												{	/* Reduce/typec.scm 194 */
													obj_t BgL_arg2643z00_2183;

													BgL_arg2643z00_2183 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
														(int) (((long) 1)));
													{	/* Reduce/typec.scm 194 */
														obj_t BgL_arrayz00_2185;

														int BgL_offsetz00_2186;

														BgL_arrayz00_2185 = BgL_arg2643z00_2183;
														BgL_offsetz00_2186 =
															(int) (BgL_objzd2classzd2numz00_2182);
														{	/* Reduce/typec.scm 194 */
															long BgL_offsetz00_2187;

															BgL_offsetz00_2187 =
																((long) (BgL_offsetz00_2186) - OBJECT_TYPE);
															{	/* Reduce/typec.scm 194 */
																long BgL_modz00_2188;

																{	/* Reduce/typec.scm 194 */
																	int BgL_arg2645z00_2189;

																	BgL_arg2645z00_2189 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 194 */
																		long BgL_auxz00_2922;

																		BgL_auxz00_2922 =
																			(long) (BgL_arg2645z00_2189);
																		BgL_modz00_2188 =
																			(BgL_offsetz00_2187 / BgL_auxz00_2922);
																}}
																{	/* Reduce/typec.scm 194 */
																	long BgL_restz00_2190;

																	{	/* Reduce/typec.scm 194 */
																		int BgL_arg2644z00_2191;

																		BgL_arg2644z00_2191 = (int) (((long) 16));
																		{	/* Reduce/typec.scm 194 */
																			long BgL_auxz00_2926;

																			BgL_auxz00_2926 =
																				(long) (BgL_arg2644z00_2191);
																			BgL_restz00_2190 =
																				(BgL_offsetz00_2187 % BgL_auxz00_2926);
																	}}
																	{	/* Reduce/typec.scm 194 */

																		BgL_method3561z00_2180 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2185,
																				(int) (BgL_modz00_2188)),
																			(int) (BgL_restz00_2190));
										}}}}}}}}
										BgL_res3847z00_2205 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3561z00_2180) (BgL_method3561z00_2180,
												(obj_t) (BgL_nodez00_2179), BEOA));
								}}
								BgL_arg3737z00_1424 = BgL_res3847z00_2205;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_2937;

							BgL_auxz00_2937 = (BgL_varz00_bglt) (BgL_arg3737z00_1424);
							((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1418))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_2937), BUNSPEC);
					}}
					BgL_auxz00_2886 = BgL_nodez00_1418;
					return (obj_t) (BgL_auxz00_2886);
				}
			}
		}
	}



/* node-typec!-let-var3591 */
	obj_t BGl_nodezd2typecz12zd2letzd2var3591zc0zzreduce_typecz00(obj_t
		BgL_envz00_2450, obj_t BgL_nodez00_2451)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 180 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1400;

				{	/* Reduce/typec.scm 181 */
					BgL_letzd2varzd2_bglt BgL_auxz00_2942;

					BgL_nodez00_1400 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2451);
					{	/* Reduce/typec.scm 182 */
						obj_t BgL_g3559z00_1404;

						BgL_g3559z00_1404 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1400))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3557z00_1406;

							BgL_l3557z00_1406 = BgL_g3559z00_1404;
						BgL_zc3anonymousza33727ze3z83_1407:
							if (PAIRP(BgL_l3557z00_1406))
								{	/* Reduce/typec.scm 182 */
									{	/* Reduce/typec.scm 183 */
										obj_t BgL_bindingz00_1409;

										BgL_bindingz00_1409 = CAR(BgL_l3557z00_1406);
										{	/* Reduce/typec.scm 183 */
											BgL_nodez00_bglt BgL_arg3729z00_1410;

											{	/* Reduce/typec.scm 183 */
												obj_t BgL_arg3730z00_1411;

												BgL_arg3730z00_1411 = CDR(BgL_bindingz00_1409);
												{	/* Reduce/typec.scm 183 */
													BgL_nodez00_bglt BgL_res3838z00_2114;

													{	/* Reduce/typec.scm 183 */
														BgL_nodez00_bglt BgL_nodez00_2088;

														BgL_nodez00_2088 =
															(BgL_nodez00_bglt) (BgL_arg3730z00_1411);
														{	/* Reduce/typec.scm 183 */
															obj_t BgL_method3561z00_2089;

															{	/* Reduce/typec.scm 183 */
																BgL_objectz00_bglt BgL_objz00_2090;

																BgL_objz00_2090 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2088);
																{	/* Reduce/typec.scm 183 */
																	long BgL_objzd2classzd2numz00_2091;

																	BgL_objzd2classzd2numz00_2091 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2090);
																	{	/* Reduce/typec.scm 183 */
																		obj_t BgL_arg2643z00_2092;

																		BgL_arg2643z00_2092 =
																			PROCEDURE_REF
																			(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
																			(int) (((long) 1)));
																		{	/* Reduce/typec.scm 183 */
																			obj_t BgL_arrayz00_2094;

																			int BgL_offsetz00_2095;

																			BgL_arrayz00_2094 = BgL_arg2643z00_2092;
																			BgL_offsetz00_2095 =
																				(int) (BgL_objzd2classzd2numz00_2091);
																			{	/* Reduce/typec.scm 183 */
																				long BgL_offsetz00_2096;

																				BgL_offsetz00_2096 =
																					(
																					(long) (BgL_offsetz00_2095) -
																					OBJECT_TYPE);
																				{	/* Reduce/typec.scm 183 */
																					long BgL_modz00_2097;

																					{	/* Reduce/typec.scm 183 */
																						int BgL_arg2645z00_2098;

																						BgL_arg2645z00_2098 =
																							(int) (((long) 16));
																						{	/* Reduce/typec.scm 183 */
																							long BgL_auxz00_2957;

																							BgL_auxz00_2957 =
																								(long) (BgL_arg2645z00_2098);
																							BgL_modz00_2097 =
																								(BgL_offsetz00_2096 /
																								BgL_auxz00_2957);
																					}}
																					{	/* Reduce/typec.scm 183 */
																						long BgL_restz00_2099;

																						{	/* Reduce/typec.scm 183 */
																							int BgL_arg2644z00_2100;

																							BgL_arg2644z00_2100 =
																								(int) (((long) 16));
																							{	/* Reduce/typec.scm 183 */
																								long BgL_auxz00_2961;

																								BgL_auxz00_2961 =
																									(long) (BgL_arg2644z00_2100);
																								BgL_restz00_2099 =
																									(BgL_offsetz00_2096 %
																									BgL_auxz00_2961);
																						}}
																						{	/* Reduce/typec.scm 183 */

																							BgL_method3561z00_2089 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2094,
																									(int) (BgL_modz00_2097)),
																								(int) (BgL_restz00_2099));
															}}}}}}}}
															BgL_res3838z00_2114 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3561z00_2089)
																(BgL_method3561z00_2089,
																	(obj_t) (BgL_nodez00_2088), BEOA));
													}}
													BgL_arg3729z00_1410 = BgL_res3838z00_2114;
											}}
											{	/* Reduce/typec.scm 183 */
												obj_t BgL_auxz00_2972;

												BgL_auxz00_2972 = (obj_t) (BgL_arg3729z00_1410);
												SET_CDR(BgL_bindingz00_1409, BgL_auxz00_2972);
									}}}
									{
										obj_t BgL_l3557z00_2975;

										BgL_l3557z00_2975 = CDR(BgL_l3557z00_1406);
										BgL_l3557z00_1406 = BgL_l3557z00_2975;
										goto BgL_zc3anonymousza33727ze3z83_1407;
									}
								}
							else
								{	/* Reduce/typec.scm 182 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/typec.scm 185 */
						BgL_nodez00_bglt BgL_arg3732z00_1414;

						{	/* Reduce/typec.scm 185 */
							BgL_nodez00_bglt BgL_arg3733z00_1415;

							BgL_arg3733z00_1415 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1400))->BgL_bodyz00);
							{	/* Reduce/typec.scm 185 */
								BgL_nodez00_bglt BgL_res3841z00_2145;

								{	/* Reduce/typec.scm 185 */
									obj_t BgL_method3561z00_2120;

									{	/* Reduce/typec.scm 185 */
										BgL_objectz00_bglt BgL_objz00_2121;

										BgL_objz00_2121 =
											(BgL_objectz00_bglt) (BgL_arg3733z00_1415);
										{	/* Reduce/typec.scm 185 */
											long BgL_objzd2classzd2numz00_2122;

											BgL_objzd2classzd2numz00_2122 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2121);
											{	/* Reduce/typec.scm 185 */
												obj_t BgL_arg2643z00_2123;

												BgL_arg2643z00_2123 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 185 */
													obj_t BgL_arrayz00_2125;

													int BgL_offsetz00_2126;

													BgL_arrayz00_2125 = BgL_arg2643z00_2123;
													BgL_offsetz00_2126 =
														(int) (BgL_objzd2classzd2numz00_2122);
													{	/* Reduce/typec.scm 185 */
														long BgL_offsetz00_2127;

														BgL_offsetz00_2127 =
															((long) (BgL_offsetz00_2126) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 185 */
															long BgL_modz00_2128;

															{	/* Reduce/typec.scm 185 */
																int BgL_arg2645z00_2129;

																BgL_arg2645z00_2129 = (int) (((long) 16));
																{	/* Reduce/typec.scm 185 */
																	long BgL_auxz00_2986;

																	BgL_auxz00_2986 =
																		(long) (BgL_arg2645z00_2129);
																	BgL_modz00_2128 =
																		(BgL_offsetz00_2127 / BgL_auxz00_2986);
															}}
															{	/* Reduce/typec.scm 185 */
																long BgL_restz00_2130;

																{	/* Reduce/typec.scm 185 */
																	int BgL_arg2644z00_2131;

																	BgL_arg2644z00_2131 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 185 */
																		long BgL_auxz00_2990;

																		BgL_auxz00_2990 =
																			(long) (BgL_arg2644z00_2131);
																		BgL_restz00_2130 =
																			(BgL_offsetz00_2127 % BgL_auxz00_2990);
																}}
																{	/* Reduce/typec.scm 185 */

																	BgL_method3561z00_2120 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2125,
																			(int) (BgL_modz00_2128)),
																		(int) (BgL_restz00_2130));
									}}}}}}}}
									BgL_res3841z00_2145 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2120)
										(BgL_method3561z00_2120, (obj_t) (BgL_arg3733z00_1415),
											BEOA));
								}
								BgL_arg3732z00_1414 = BgL_res3841z00_2145;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1400))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3732z00_1414), BUNSPEC);
					}
					BgL_auxz00_2942 = BgL_nodez00_1400;
					return (obj_t) (BgL_auxz00_2942);
				}
			}
		}
	}



/* node-typec!-let-fun3589 */
	obj_t BGl_nodezd2typecz12zd2letzd2fun3589zc0zzreduce_typecz00(obj_t
		BgL_envz00_2452, obj_t BgL_nodez00_2453)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 168 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1381;

				{	/* Reduce/typec.scm 169 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3004;

					BgL_nodez00_1381 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2453);
					{	/* Reduce/typec.scm 170 */
						obj_t BgL_g3556z00_1385;

						BgL_g3556z00_1385 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->BgL_localsz00);
						{
							obj_t BgL_l3554z00_1387;

							BgL_l3554z00_1387 = BgL_g3556z00_1385;
						BgL_zc3anonymousza33719ze3z83_1388:
							if (PAIRP(BgL_l3554z00_1387))
								{	/* Reduce/typec.scm 170 */
									{	/* Reduce/typec.scm 171 */
										obj_t BgL_localz00_1390;

										BgL_localz00_1390 = CAR(BgL_l3554z00_1387);
										{	/* Reduce/typec.scm 171 */
											BgL_valuez00_bglt BgL_funz00_1391;

											{
												BgL_variablez00_bglt BgL_auxz00_3009;

												BgL_auxz00_3009 =
													(BgL_variablez00_bglt) (BgL_localz00_1390);
												BgL_funz00_1391 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3009))->
													BgL_valuez00);
											}
											{	/* Reduce/typec.scm 172 */
												BgL_nodez00_bglt BgL_arg3721z00_1392;

												{	/* Reduce/typec.scm 172 */
													obj_t BgL_arg3722z00_1393;

													{
														BgL_sfunz00_bglt BgL_auxz00_3012;

														BgL_auxz00_3012 =
															(BgL_sfunz00_bglt) (BgL_funz00_1391);
														BgL_arg3722z00_1393 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3012))->
															BgL_bodyz00);
													}
													{	/* Reduce/typec.scm 172 */
														BgL_nodez00_bglt BgL_res3832z00_2050;

														{	/* Reduce/typec.scm 172 */
															BgL_nodez00_bglt BgL_nodez00_2024;

															BgL_nodez00_2024 =
																(BgL_nodez00_bglt) (BgL_arg3722z00_1393);
															{	/* Reduce/typec.scm 172 */
																obj_t BgL_method3561z00_2025;

																{	/* Reduce/typec.scm 172 */
																	BgL_objectz00_bglt BgL_objz00_2026;

																	BgL_objz00_2026 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2024);
																	{	/* Reduce/typec.scm 172 */
																		long BgL_objzd2classzd2numz00_2027;

																		BgL_objzd2classzd2numz00_2027 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2026);
																		{	/* Reduce/typec.scm 172 */
																			obj_t BgL_arg2643z00_2028;

																			BgL_arg2643z00_2028 =
																				PROCEDURE_REF
																				(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
																				(int) (((long) 1)));
																			{	/* Reduce/typec.scm 172 */
																				obj_t BgL_arrayz00_2030;

																				int BgL_offsetz00_2031;

																				BgL_arrayz00_2030 = BgL_arg2643z00_2028;
																				BgL_offsetz00_2031 =
																					(int) (BgL_objzd2classzd2numz00_2027);
																				{	/* Reduce/typec.scm 172 */
																					long BgL_offsetz00_2032;

																					BgL_offsetz00_2032 =
																						(
																						(long) (BgL_offsetz00_2031) -
																						OBJECT_TYPE);
																					{	/* Reduce/typec.scm 172 */
																						long BgL_modz00_2033;

																						{	/* Reduce/typec.scm 172 */
																							int BgL_arg2645z00_2034;

																							BgL_arg2645z00_2034 =
																								(int) (((long) 16));
																							{	/* Reduce/typec.scm 172 */
																								long BgL_auxz00_3024;

																								BgL_auxz00_3024 =
																									(long) (BgL_arg2645z00_2034);
																								BgL_modz00_2033 =
																									(BgL_offsetz00_2032 /
																									BgL_auxz00_3024);
																						}}
																						{	/* Reduce/typec.scm 172 */
																							long BgL_restz00_2035;

																							{	/* Reduce/typec.scm 172 */
																								int BgL_arg2644z00_2036;

																								BgL_arg2644z00_2036 =
																									(int) (((long) 16));
																								{	/* Reduce/typec.scm 172 */
																									long BgL_auxz00_3028;

																									BgL_auxz00_3028 =
																										(long)
																										(BgL_arg2644z00_2036);
																									BgL_restz00_2035 =
																										(BgL_offsetz00_2032 %
																										BgL_auxz00_3028);
																							}}
																							{	/* Reduce/typec.scm 172 */

																								BgL_method3561z00_2025 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2030,
																										(int) (BgL_modz00_2033)),
																									(int) (BgL_restz00_2035));
																}}}}}}}}
																BgL_res3832z00_2050 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3561z00_2025)
																	(BgL_method3561z00_2025,
																		(obj_t) (BgL_nodez00_2024), BEOA));
														}}
														BgL_arg3721z00_1392 = BgL_res3832z00_2050;
												}}
												{
													obj_t BgL_auxz00_3041;

													BgL_sfunz00_bglt BgL_auxz00_3039;

													BgL_auxz00_3041 = (obj_t) (BgL_arg3721z00_1392);
													BgL_auxz00_3039 =
														(BgL_sfunz00_bglt) (BgL_funz00_1391);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3039))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3041), BUNSPEC);
									}}}}
									{
										obj_t BgL_l3554z00_3044;

										BgL_l3554z00_3044 = CDR(BgL_l3554z00_1387);
										BgL_l3554z00_1387 = BgL_l3554z00_3044;
										goto BgL_zc3anonymousza33719ze3z83_1388;
									}
								}
							else
								{	/* Reduce/typec.scm 170 */
									((bool_t) 1);
								}
						}
					}
					{	/* Reduce/typec.scm 174 */
						BgL_nodez00_bglt BgL_arg3724z00_1396;

						{	/* Reduce/typec.scm 174 */
							BgL_nodez00_bglt BgL_arg3725z00_1397;

							BgL_arg3725z00_1397 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->BgL_bodyz00);
							{	/* Reduce/typec.scm 174 */
								BgL_nodez00_bglt BgL_res3835z00_2081;

								{	/* Reduce/typec.scm 174 */
									obj_t BgL_method3561z00_2056;

									{	/* Reduce/typec.scm 174 */
										BgL_objectz00_bglt BgL_objz00_2057;

										BgL_objz00_2057 =
											(BgL_objectz00_bglt) (BgL_arg3725z00_1397);
										{	/* Reduce/typec.scm 174 */
											long BgL_objzd2classzd2numz00_2058;

											BgL_objzd2classzd2numz00_2058 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2057);
											{	/* Reduce/typec.scm 174 */
												obj_t BgL_arg2643z00_2059;

												BgL_arg2643z00_2059 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 174 */
													obj_t BgL_arrayz00_2061;

													int BgL_offsetz00_2062;

													BgL_arrayz00_2061 = BgL_arg2643z00_2059;
													BgL_offsetz00_2062 =
														(int) (BgL_objzd2classzd2numz00_2058);
													{	/* Reduce/typec.scm 174 */
														long BgL_offsetz00_2063;

														BgL_offsetz00_2063 =
															((long) (BgL_offsetz00_2062) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 174 */
															long BgL_modz00_2064;

															{	/* Reduce/typec.scm 174 */
																int BgL_arg2645z00_2065;

																BgL_arg2645z00_2065 = (int) (((long) 16));
																{	/* Reduce/typec.scm 174 */
																	long BgL_auxz00_3055;

																	BgL_auxz00_3055 =
																		(long) (BgL_arg2645z00_2065);
																	BgL_modz00_2064 =
																		(BgL_offsetz00_2063 / BgL_auxz00_3055);
															}}
															{	/* Reduce/typec.scm 174 */
																long BgL_restz00_2066;

																{	/* Reduce/typec.scm 174 */
																	int BgL_arg2644z00_2067;

																	BgL_arg2644z00_2067 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 174 */
																		long BgL_auxz00_3059;

																		BgL_auxz00_3059 =
																			(long) (BgL_arg2644z00_2067);
																		BgL_restz00_2066 =
																			(BgL_offsetz00_2063 % BgL_auxz00_3059);
																}}
																{	/* Reduce/typec.scm 174 */

																	BgL_method3561z00_2056 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2061,
																			(int) (BgL_modz00_2064)),
																		(int) (BgL_restz00_2066));
									}}}}}}}}
									BgL_res3835z00_2081 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_2056)
										(BgL_method3561z00_2056, (obj_t) (BgL_arg3725z00_1397),
											BEOA));
								}
								BgL_arg3724z00_1396 = BgL_res3835z00_2081;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3724z00_1396), BUNSPEC);
					}
					BgL_auxz00_3004 = BgL_nodez00_1381;
					return (obj_t) (BgL_auxz00_3004);
				}
			}
		}
	}



/* node-typec!-select3587 */
	obj_t BGl_nodezd2typecz12zd2select3587z12zzreduce_typecz00(obj_t
		BgL_envz00_2454, obj_t BgL_nodez00_2455)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 157 */
			{
				BgL_selectz00_bglt BgL_nodez00_1363;

				{	/* Reduce/typec.scm 158 */
					BgL_selectz00_bglt BgL_auxz00_3073;

					BgL_nodez00_1363 = (BgL_selectz00_bglt) (BgL_nodez00_2455);
					{	/* Reduce/typec.scm 159 */
						BgL_nodez00_bglt BgL_arg3711z00_1367;

						{	/* Reduce/typec.scm 159 */
							BgL_nodez00_bglt BgL_arg3712z00_1368;

							BgL_arg3712z00_1368 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1363))->BgL_testz00);
							{	/* Reduce/typec.scm 159 */
								BgL_nodez00_bglt BgL_res3826z00_1982;

								{	/* Reduce/typec.scm 159 */
									obj_t BgL_method3561z00_1957;

									{	/* Reduce/typec.scm 159 */
										BgL_objectz00_bglt BgL_objz00_1958;

										BgL_objz00_1958 =
											(BgL_objectz00_bglt) (BgL_arg3712z00_1368);
										{	/* Reduce/typec.scm 159 */
											long BgL_objzd2classzd2numz00_1959;

											BgL_objzd2classzd2numz00_1959 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1958);
											{	/* Reduce/typec.scm 159 */
												obj_t BgL_arg2643z00_1960;

												BgL_arg2643z00_1960 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 159 */
													obj_t BgL_arrayz00_1962;

													int BgL_offsetz00_1963;

													BgL_arrayz00_1962 = BgL_arg2643z00_1960;
													BgL_offsetz00_1963 =
														(int) (BgL_objzd2classzd2numz00_1959);
													{	/* Reduce/typec.scm 159 */
														long BgL_offsetz00_1964;

														BgL_offsetz00_1964 =
															((long) (BgL_offsetz00_1963) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 159 */
															long BgL_modz00_1965;

															{	/* Reduce/typec.scm 159 */
																int BgL_arg2645z00_1966;

																BgL_arg2645z00_1966 = (int) (((long) 16));
																{	/* Reduce/typec.scm 159 */
																	long BgL_auxz00_3083;

																	BgL_auxz00_3083 =
																		(long) (BgL_arg2645z00_1966);
																	BgL_modz00_1965 =
																		(BgL_offsetz00_1964 / BgL_auxz00_3083);
															}}
															{	/* Reduce/typec.scm 159 */
																long BgL_restz00_1967;

																{	/* Reduce/typec.scm 159 */
																	int BgL_arg2644z00_1968;

																	BgL_arg2644z00_1968 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 159 */
																		long BgL_auxz00_3087;

																		BgL_auxz00_3087 =
																			(long) (BgL_arg2644z00_1968);
																		BgL_restz00_1967 =
																			(BgL_offsetz00_1964 % BgL_auxz00_3087);
																}}
																{	/* Reduce/typec.scm 159 */

																	BgL_method3561z00_1957 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1962,
																			(int) (BgL_modz00_1965)),
																		(int) (BgL_restz00_1967));
									}}}}}}}}
									BgL_res3826z00_1982 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1957)
										(BgL_method3561z00_1957, (obj_t) (BgL_arg3712z00_1368),
											BEOA));
								}
								BgL_arg3711z00_1367 = BgL_res3826z00_1982;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1363))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3711z00_1367), BUNSPEC);
					}
					{	/* Reduce/typec.scm 160 */
						obj_t BgL_g3553z00_1369;

						BgL_g3553z00_1369 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1363))->BgL_clausesz00);
						{
							obj_t BgL_l3551z00_1371;

							BgL_l3551z00_1371 = BgL_g3553z00_1369;
						BgL_zc3anonymousza33713ze3z83_1372:
							if (PAIRP(BgL_l3551z00_1371))
								{	/* Reduce/typec.scm 160 */
									{	/* Reduce/typec.scm 161 */
										obj_t BgL_clausez00_1374;

										BgL_clausez00_1374 = CAR(BgL_l3551z00_1371);
										{	/* Reduce/typec.scm 161 */
											BgL_nodez00_bglt BgL_arg3715z00_1375;

											{	/* Reduce/typec.scm 161 */
												obj_t BgL_arg3716z00_1376;

												BgL_arg3716z00_1376 = CDR(BgL_clausez00_1374);
												{	/* Reduce/typec.scm 161 */
													BgL_nodez00_bglt BgL_res3829z00_2015;

													{	/* Reduce/typec.scm 161 */
														BgL_nodez00_bglt BgL_nodez00_1989;

														BgL_nodez00_1989 =
															(BgL_nodez00_bglt) (BgL_arg3716z00_1376);
														{	/* Reduce/typec.scm 161 */
															obj_t BgL_method3561z00_1990;

															{	/* Reduce/typec.scm 161 */
																BgL_objectz00_bglt BgL_objz00_1991;

																BgL_objz00_1991 =
																	(BgL_objectz00_bglt) (BgL_nodez00_1989);
																{	/* Reduce/typec.scm 161 */
																	long BgL_objzd2classzd2numz00_1992;

																	BgL_objzd2classzd2numz00_1992 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_1991);
																	{	/* Reduce/typec.scm 161 */
																		obj_t BgL_arg2643z00_1993;

																		BgL_arg2643z00_1993 =
																			PROCEDURE_REF
																			(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
																			(int) (((long) 1)));
																		{	/* Reduce/typec.scm 161 */
																			obj_t BgL_arrayz00_1995;

																			int BgL_offsetz00_1996;

																			BgL_arrayz00_1995 = BgL_arg2643z00_1993;
																			BgL_offsetz00_1996 =
																				(int) (BgL_objzd2classzd2numz00_1992);
																			{	/* Reduce/typec.scm 161 */
																				long BgL_offsetz00_1997;

																				BgL_offsetz00_1997 =
																					(
																					(long) (BgL_offsetz00_1996) -
																					OBJECT_TYPE);
																				{	/* Reduce/typec.scm 161 */
																					long BgL_modz00_1998;

																					{	/* Reduce/typec.scm 161 */
																						int BgL_arg2645z00_1999;

																						BgL_arg2645z00_1999 =
																							(int) (((long) 16));
																						{	/* Reduce/typec.scm 161 */
																							long BgL_auxz00_3113;

																							BgL_auxz00_3113 =
																								(long) (BgL_arg2645z00_1999);
																							BgL_modz00_1998 =
																								(BgL_offsetz00_1997 /
																								BgL_auxz00_3113);
																					}}
																					{	/* Reduce/typec.scm 161 */
																						long BgL_restz00_2000;

																						{	/* Reduce/typec.scm 161 */
																							int BgL_arg2644z00_2001;

																							BgL_arg2644z00_2001 =
																								(int) (((long) 16));
																							{	/* Reduce/typec.scm 161 */
																								long BgL_auxz00_3117;

																								BgL_auxz00_3117 =
																									(long) (BgL_arg2644z00_2001);
																								BgL_restz00_2000 =
																									(BgL_offsetz00_1997 %
																									BgL_auxz00_3117);
																						}}
																						{	/* Reduce/typec.scm 161 */

																							BgL_method3561z00_1990 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_1995,
																									(int) (BgL_modz00_1998)),
																								(int) (BgL_restz00_2000));
															}}}}}}}}
															BgL_res3829z00_2015 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3561z00_1990)
																(BgL_method3561z00_1990,
																	(obj_t) (BgL_nodez00_1989), BEOA));
													}}
													BgL_arg3715z00_1375 = BgL_res3829z00_2015;
											}}
											{	/* Reduce/typec.scm 161 */
												obj_t BgL_auxz00_3128;

												BgL_auxz00_3128 = (obj_t) (BgL_arg3715z00_1375);
												SET_CDR(BgL_clausez00_1374, BgL_auxz00_3128);
									}}}
									{
										obj_t BgL_l3551z00_3131;

										BgL_l3551z00_3131 = CDR(BgL_l3551z00_1371);
										BgL_l3551z00_1371 = BgL_l3551z00_3131;
										goto BgL_zc3anonymousza33713ze3z83_1372;
									}
								}
							else
								{	/* Reduce/typec.scm 160 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3073 = BgL_nodez00_1363;
					return (obj_t) (BgL_auxz00_3073);
				}
			}
		}
	}



/* node-typec!-fail3585 */
	obj_t BGl_nodezd2typecz12zd2fail3585z12zzreduce_typecz00(obj_t
		BgL_envz00_2456, obj_t BgL_nodez00_2457)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 147 */
			{
				BgL_failz00_bglt BgL_nodez00_1351;

				{	/* Reduce/typec.scm 148 */
					BgL_failz00_bglt BgL_auxz00_3135;

					BgL_nodez00_1351 = (BgL_failz00_bglt) (BgL_nodez00_2457);
					{	/* Reduce/typec.scm 149 */
						BgL_nodez00_bglt BgL_arg3704z00_1355;

						{	/* Reduce/typec.scm 149 */
							BgL_nodez00_bglt BgL_arg3705z00_1356;

							BgL_arg3705z00_1356 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1351))->BgL_procz00);
							{	/* Reduce/typec.scm 149 */
								BgL_nodez00_bglt BgL_res3817z00_1892;

								{	/* Reduce/typec.scm 149 */
									obj_t BgL_method3561z00_1867;

									{	/* Reduce/typec.scm 149 */
										BgL_objectz00_bglt BgL_objz00_1868;

										BgL_objz00_1868 =
											(BgL_objectz00_bglt) (BgL_arg3705z00_1356);
										{	/* Reduce/typec.scm 149 */
											long BgL_objzd2classzd2numz00_1869;

											BgL_objzd2classzd2numz00_1869 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1868);
											{	/* Reduce/typec.scm 149 */
												obj_t BgL_arg2643z00_1870;

												BgL_arg2643z00_1870 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 149 */
													obj_t BgL_arrayz00_1872;

													int BgL_offsetz00_1873;

													BgL_arrayz00_1872 = BgL_arg2643z00_1870;
													BgL_offsetz00_1873 =
														(int) (BgL_objzd2classzd2numz00_1869);
													{	/* Reduce/typec.scm 149 */
														long BgL_offsetz00_1874;

														BgL_offsetz00_1874 =
															((long) (BgL_offsetz00_1873) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 149 */
															long BgL_modz00_1875;

															{	/* Reduce/typec.scm 149 */
																int BgL_arg2645z00_1876;

																BgL_arg2645z00_1876 = (int) (((long) 16));
																{	/* Reduce/typec.scm 149 */
																	long BgL_auxz00_3145;

																	BgL_auxz00_3145 =
																		(long) (BgL_arg2645z00_1876);
																	BgL_modz00_1875 =
																		(BgL_offsetz00_1874 / BgL_auxz00_3145);
															}}
															{	/* Reduce/typec.scm 149 */
																long BgL_restz00_1877;

																{	/* Reduce/typec.scm 149 */
																	int BgL_arg2644z00_1878;

																	BgL_arg2644z00_1878 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 149 */
																		long BgL_auxz00_3149;

																		BgL_auxz00_3149 =
																			(long) (BgL_arg2644z00_1878);
																		BgL_restz00_1877 =
																			(BgL_offsetz00_1874 % BgL_auxz00_3149);
																}}
																{	/* Reduce/typec.scm 149 */

																	BgL_method3561z00_1867 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1872,
																			(int) (BgL_modz00_1875)),
																		(int) (BgL_restz00_1877));
									}}}}}}}}
									BgL_res3817z00_1892 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1867)
										(BgL_method3561z00_1867, (obj_t) (BgL_arg3705z00_1356),
											BEOA));
								}
								BgL_arg3704z00_1355 = BgL_res3817z00_1892;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1351))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3704z00_1355), BUNSPEC);
					}
					{	/* Reduce/typec.scm 150 */
						BgL_nodez00_bglt BgL_arg3706z00_1357;

						{	/* Reduce/typec.scm 150 */
							BgL_nodez00_bglt BgL_arg3707z00_1358;

							BgL_arg3707z00_1358 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1351))->BgL_msgz00);
							{	/* Reduce/typec.scm 150 */
								BgL_nodez00_bglt BgL_res3820z00_1922;

								{	/* Reduce/typec.scm 150 */
									obj_t BgL_method3561z00_1897;

									{	/* Reduce/typec.scm 150 */
										BgL_objectz00_bglt BgL_objz00_1898;

										BgL_objz00_1898 =
											(BgL_objectz00_bglt) (BgL_arg3707z00_1358);
										{	/* Reduce/typec.scm 150 */
											long BgL_objzd2classzd2numz00_1899;

											BgL_objzd2classzd2numz00_1899 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1898);
											{	/* Reduce/typec.scm 150 */
												obj_t BgL_arg2643z00_1900;

												BgL_arg2643z00_1900 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 150 */
													obj_t BgL_arrayz00_1902;

													int BgL_offsetz00_1903;

													BgL_arrayz00_1902 = BgL_arg2643z00_1900;
													BgL_offsetz00_1903 =
														(int) (BgL_objzd2classzd2numz00_1899);
													{	/* Reduce/typec.scm 150 */
														long BgL_offsetz00_1904;

														BgL_offsetz00_1904 =
															((long) (BgL_offsetz00_1903) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 150 */
															long BgL_modz00_1905;

															{	/* Reduce/typec.scm 150 */
																int BgL_arg2645z00_1906;

																BgL_arg2645z00_1906 = (int) (((long) 16));
																{	/* Reduce/typec.scm 150 */
																	long BgL_auxz00_3170;

																	BgL_auxz00_3170 =
																		(long) (BgL_arg2645z00_1906);
																	BgL_modz00_1905 =
																		(BgL_offsetz00_1904 / BgL_auxz00_3170);
															}}
															{	/* Reduce/typec.scm 150 */
																long BgL_restz00_1907;

																{	/* Reduce/typec.scm 150 */
																	int BgL_arg2644z00_1908;

																	BgL_arg2644z00_1908 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 150 */
																		long BgL_auxz00_3174;

																		BgL_auxz00_3174 =
																			(long) (BgL_arg2644z00_1908);
																		BgL_restz00_1907 =
																			(BgL_offsetz00_1904 % BgL_auxz00_3174);
																}}
																{	/* Reduce/typec.scm 150 */

																	BgL_method3561z00_1897 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1902,
																			(int) (BgL_modz00_1905)),
																		(int) (BgL_restz00_1907));
									}}}}}}}}
									BgL_res3820z00_1922 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1897)
										(BgL_method3561z00_1897, (obj_t) (BgL_arg3707z00_1358),
											BEOA));
								}
								BgL_arg3706z00_1357 = BgL_res3820z00_1922;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1351))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3706z00_1357), BUNSPEC);
					}
					{	/* Reduce/typec.scm 151 */
						BgL_nodez00_bglt BgL_arg3708z00_1359;

						{	/* Reduce/typec.scm 151 */
							BgL_nodez00_bglt BgL_arg3709z00_1360;

							BgL_arg3709z00_1360 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1351))->BgL_objz00);
							{	/* Reduce/typec.scm 151 */
								BgL_nodez00_bglt BgL_res3823z00_1952;

								{	/* Reduce/typec.scm 151 */
									obj_t BgL_method3561z00_1927;

									{	/* Reduce/typec.scm 151 */
										BgL_objectz00_bglt BgL_objz00_1928;

										BgL_objz00_1928 =
											(BgL_objectz00_bglt) (BgL_arg3709z00_1360);
										{	/* Reduce/typec.scm 151 */
											long BgL_objzd2classzd2numz00_1929;

											BgL_objzd2classzd2numz00_1929 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1928);
											{	/* Reduce/typec.scm 151 */
												obj_t BgL_arg2643z00_1930;

												BgL_arg2643z00_1930 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 151 */
													obj_t BgL_arrayz00_1932;

													int BgL_offsetz00_1933;

													BgL_arrayz00_1932 = BgL_arg2643z00_1930;
													BgL_offsetz00_1933 =
														(int) (BgL_objzd2classzd2numz00_1929);
													{	/* Reduce/typec.scm 151 */
														long BgL_offsetz00_1934;

														BgL_offsetz00_1934 =
															((long) (BgL_offsetz00_1933) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 151 */
															long BgL_modz00_1935;

															{	/* Reduce/typec.scm 151 */
																int BgL_arg2645z00_1936;

																BgL_arg2645z00_1936 = (int) (((long) 16));
																{	/* Reduce/typec.scm 151 */
																	long BgL_auxz00_3195;

																	BgL_auxz00_3195 =
																		(long) (BgL_arg2645z00_1936);
																	BgL_modz00_1935 =
																		(BgL_offsetz00_1934 / BgL_auxz00_3195);
															}}
															{	/* Reduce/typec.scm 151 */
																long BgL_restz00_1937;

																{	/* Reduce/typec.scm 151 */
																	int BgL_arg2644z00_1938;

																	BgL_arg2644z00_1938 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 151 */
																		long BgL_auxz00_3199;

																		BgL_auxz00_3199 =
																			(long) (BgL_arg2644z00_1938);
																		BgL_restz00_1937 =
																			(BgL_offsetz00_1934 % BgL_auxz00_3199);
																}}
																{	/* Reduce/typec.scm 151 */

																	BgL_method3561z00_1927 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1932,
																			(int) (BgL_modz00_1935)),
																		(int) (BgL_restz00_1937));
									}}}}}}}}
									BgL_res3823z00_1952 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1927)
										(BgL_method3561z00_1927, (obj_t) (BgL_arg3709z00_1360),
											BEOA));
								}
								BgL_arg3708z00_1359 = BgL_res3823z00_1952;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1351))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3708z00_1359), BUNSPEC);
					}
					BgL_auxz00_3135 = BgL_nodez00_1351;
					return (obj_t) (BgL_auxz00_3135);
				}
			}
		}
	}



/* node-typec!-conditio3583 */
	obj_t BGl_nodezd2typecz12zd2conditio3583z12zzreduce_typecz00(obj_t
		BgL_envz00_2458, obj_t BgL_nodez00_2459)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 137 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1339;

				{	/* Reduce/typec.scm 138 */
					BgL_conditionalz00_bglt BgL_auxz00_3213;

					BgL_nodez00_1339 = (BgL_conditionalz00_bglt) (BgL_nodez00_2459);
					{	/* Reduce/typec.scm 139 */
						BgL_nodez00_bglt BgL_arg3697z00_1343;

						{	/* Reduce/typec.scm 139 */
							BgL_nodez00_bglt BgL_arg3698z00_1344;

							BgL_arg3698z00_1344 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1339))->
								BgL_testz00);
							{	/* Reduce/typec.scm 139 */
								BgL_nodez00_bglt BgL_res3808z00_1802;

								{	/* Reduce/typec.scm 139 */
									obj_t BgL_method3561z00_1777;

									{	/* Reduce/typec.scm 139 */
										BgL_objectz00_bglt BgL_objz00_1778;

										BgL_objz00_1778 =
											(BgL_objectz00_bglt) (BgL_arg3698z00_1344);
										{	/* Reduce/typec.scm 139 */
											long BgL_objzd2classzd2numz00_1779;

											BgL_objzd2classzd2numz00_1779 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1778);
											{	/* Reduce/typec.scm 139 */
												obj_t BgL_arg2643z00_1780;

												BgL_arg2643z00_1780 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 139 */
													obj_t BgL_arrayz00_1782;

													int BgL_offsetz00_1783;

													BgL_arrayz00_1782 = BgL_arg2643z00_1780;
													BgL_offsetz00_1783 =
														(int) (BgL_objzd2classzd2numz00_1779);
													{	/* Reduce/typec.scm 139 */
														long BgL_offsetz00_1784;

														BgL_offsetz00_1784 =
															((long) (BgL_offsetz00_1783) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 139 */
															long BgL_modz00_1785;

															{	/* Reduce/typec.scm 139 */
																int BgL_arg2645z00_1786;

																BgL_arg2645z00_1786 = (int) (((long) 16));
																{	/* Reduce/typec.scm 139 */
																	long BgL_auxz00_3223;

																	BgL_auxz00_3223 =
																		(long) (BgL_arg2645z00_1786);
																	BgL_modz00_1785 =
																		(BgL_offsetz00_1784 / BgL_auxz00_3223);
															}}
															{	/* Reduce/typec.scm 139 */
																long BgL_restz00_1787;

																{	/* Reduce/typec.scm 139 */
																	int BgL_arg2644z00_1788;

																	BgL_arg2644z00_1788 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 139 */
																		long BgL_auxz00_3227;

																		BgL_auxz00_3227 =
																			(long) (BgL_arg2644z00_1788);
																		BgL_restz00_1787 =
																			(BgL_offsetz00_1784 % BgL_auxz00_3227);
																}}
																{	/* Reduce/typec.scm 139 */

																	BgL_method3561z00_1777 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1782,
																			(int) (BgL_modz00_1785)),
																		(int) (BgL_restz00_1787));
									}}}}}}}}
									BgL_res3808z00_1802 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1777)
										(BgL_method3561z00_1777, (obj_t) (BgL_arg3698z00_1344),
											BEOA));
								}
								BgL_arg3697z00_1343 = BgL_res3808z00_1802;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1339))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3697z00_1343), BUNSPEC);
					}
					{	/* Reduce/typec.scm 140 */
						BgL_nodez00_bglt BgL_arg3699z00_1345;

						{	/* Reduce/typec.scm 140 */
							BgL_nodez00_bglt BgL_arg3700z00_1346;

							BgL_arg3700z00_1346 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1339))->
								BgL_truez00);
							{	/* Reduce/typec.scm 140 */
								BgL_nodez00_bglt BgL_res3811z00_1832;

								{	/* Reduce/typec.scm 140 */
									obj_t BgL_method3561z00_1807;

									{	/* Reduce/typec.scm 140 */
										BgL_objectz00_bglt BgL_objz00_1808;

										BgL_objz00_1808 =
											(BgL_objectz00_bglt) (BgL_arg3700z00_1346);
										{	/* Reduce/typec.scm 140 */
											long BgL_objzd2classzd2numz00_1809;

											BgL_objzd2classzd2numz00_1809 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1808);
											{	/* Reduce/typec.scm 140 */
												obj_t BgL_arg2643z00_1810;

												BgL_arg2643z00_1810 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 140 */
													obj_t BgL_arrayz00_1812;

													int BgL_offsetz00_1813;

													BgL_arrayz00_1812 = BgL_arg2643z00_1810;
													BgL_offsetz00_1813 =
														(int) (BgL_objzd2classzd2numz00_1809);
													{	/* Reduce/typec.scm 140 */
														long BgL_offsetz00_1814;

														BgL_offsetz00_1814 =
															((long) (BgL_offsetz00_1813) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 140 */
															long BgL_modz00_1815;

															{	/* Reduce/typec.scm 140 */
																int BgL_arg2645z00_1816;

																BgL_arg2645z00_1816 = (int) (((long) 16));
																{	/* Reduce/typec.scm 140 */
																	long BgL_auxz00_3248;

																	BgL_auxz00_3248 =
																		(long) (BgL_arg2645z00_1816);
																	BgL_modz00_1815 =
																		(BgL_offsetz00_1814 / BgL_auxz00_3248);
															}}
															{	/* Reduce/typec.scm 140 */
																long BgL_restz00_1817;

																{	/* Reduce/typec.scm 140 */
																	int BgL_arg2644z00_1818;

																	BgL_arg2644z00_1818 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 140 */
																		long BgL_auxz00_3252;

																		BgL_auxz00_3252 =
																			(long) (BgL_arg2644z00_1818);
																		BgL_restz00_1817 =
																			(BgL_offsetz00_1814 % BgL_auxz00_3252);
																}}
																{	/* Reduce/typec.scm 140 */

																	BgL_method3561z00_1807 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1812,
																			(int) (BgL_modz00_1815)),
																		(int) (BgL_restz00_1817));
									}}}}}}}}
									BgL_res3811z00_1832 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1807)
										(BgL_method3561z00_1807, (obj_t) (BgL_arg3700z00_1346),
											BEOA));
								}
								BgL_arg3699z00_1345 = BgL_res3811z00_1832;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1339))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3699z00_1345), BUNSPEC);
					}
					{	/* Reduce/typec.scm 141 */
						BgL_nodez00_bglt BgL_arg3701z00_1347;

						{	/* Reduce/typec.scm 141 */
							BgL_nodez00_bglt BgL_arg3702z00_1348;

							BgL_arg3702z00_1348 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1339))->
								BgL_falsez00);
							{	/* Reduce/typec.scm 141 */
								BgL_nodez00_bglt BgL_res3814z00_1862;

								{	/* Reduce/typec.scm 141 */
									obj_t BgL_method3561z00_1837;

									{	/* Reduce/typec.scm 141 */
										BgL_objectz00_bglt BgL_objz00_1838;

										BgL_objz00_1838 =
											(BgL_objectz00_bglt) (BgL_arg3702z00_1348);
										{	/* Reduce/typec.scm 141 */
											long BgL_objzd2classzd2numz00_1839;

											BgL_objzd2classzd2numz00_1839 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1838);
											{	/* Reduce/typec.scm 141 */
												obj_t BgL_arg2643z00_1840;

												BgL_arg2643z00_1840 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 141 */
													obj_t BgL_arrayz00_1842;

													int BgL_offsetz00_1843;

													BgL_arrayz00_1842 = BgL_arg2643z00_1840;
													BgL_offsetz00_1843 =
														(int) (BgL_objzd2classzd2numz00_1839);
													{	/* Reduce/typec.scm 141 */
														long BgL_offsetz00_1844;

														BgL_offsetz00_1844 =
															((long) (BgL_offsetz00_1843) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 141 */
															long BgL_modz00_1845;

															{	/* Reduce/typec.scm 141 */
																int BgL_arg2645z00_1846;

																BgL_arg2645z00_1846 = (int) (((long) 16));
																{	/* Reduce/typec.scm 141 */
																	long BgL_auxz00_3273;

																	BgL_auxz00_3273 =
																		(long) (BgL_arg2645z00_1846);
																	BgL_modz00_1845 =
																		(BgL_offsetz00_1844 / BgL_auxz00_3273);
															}}
															{	/* Reduce/typec.scm 141 */
																long BgL_restz00_1847;

																{	/* Reduce/typec.scm 141 */
																	int BgL_arg2644z00_1848;

																	BgL_arg2644z00_1848 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 141 */
																		long BgL_auxz00_3277;

																		BgL_auxz00_3277 =
																			(long) (BgL_arg2644z00_1848);
																		BgL_restz00_1847 =
																			(BgL_offsetz00_1844 % BgL_auxz00_3277);
																}}
																{	/* Reduce/typec.scm 141 */

																	BgL_method3561z00_1837 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1842,
																			(int) (BgL_modz00_1845)),
																		(int) (BgL_restz00_1847));
									}}}}}}}}
									BgL_res3814z00_1862 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1837)
										(BgL_method3561z00_1837, (obj_t) (BgL_arg3702z00_1348),
											BEOA));
								}
								BgL_arg3701z00_1347 = BgL_res3814z00_1862;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1339))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3701z00_1347), BUNSPEC);
					}
					BgL_auxz00_3213 = BgL_nodez00_1339;
					return (obj_t) (BgL_auxz00_3213);
				}
			}
		}
	}



/* node-typec!-setq3581 */
	obj_t BGl_nodezd2typecz12zd2setq3581z12zzreduce_typecz00(obj_t
		BgL_envz00_2460, obj_t BgL_nodez00_2461)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 128 */
			{
				BgL_setqz00_bglt BgL_nodez00_1329;

				{	/* Reduce/typec.scm 129 */
					BgL_setqz00_bglt BgL_auxz00_3291;

					BgL_nodez00_1329 = (BgL_setqz00_bglt) (BgL_nodez00_2461);
					{	/* Reduce/typec.scm 130 */
						BgL_nodez00_bglt BgL_arg3692z00_1333;

						{	/* Reduce/typec.scm 130 */
							BgL_nodez00_bglt BgL_arg3693z00_1334;

							BgL_arg3693z00_1334 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1329))->BgL_valuez00);
							{	/* Reduce/typec.scm 130 */
								BgL_nodez00_bglt BgL_res3802z00_1742;

								{	/* Reduce/typec.scm 130 */
									obj_t BgL_method3561z00_1717;

									{	/* Reduce/typec.scm 130 */
										BgL_objectz00_bglt BgL_objz00_1718;

										BgL_objz00_1718 =
											(BgL_objectz00_bglt) (BgL_arg3693z00_1334);
										{	/* Reduce/typec.scm 130 */
											long BgL_objzd2classzd2numz00_1719;

											BgL_objzd2classzd2numz00_1719 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1718);
											{	/* Reduce/typec.scm 130 */
												obj_t BgL_arg2643z00_1720;

												BgL_arg2643z00_1720 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 130 */
													obj_t BgL_arrayz00_1722;

													int BgL_offsetz00_1723;

													BgL_arrayz00_1722 = BgL_arg2643z00_1720;
													BgL_offsetz00_1723 =
														(int) (BgL_objzd2classzd2numz00_1719);
													{	/* Reduce/typec.scm 130 */
														long BgL_offsetz00_1724;

														BgL_offsetz00_1724 =
															((long) (BgL_offsetz00_1723) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 130 */
															long BgL_modz00_1725;

															{	/* Reduce/typec.scm 130 */
																int BgL_arg2645z00_1726;

																BgL_arg2645z00_1726 = (int) (((long) 16));
																{	/* Reduce/typec.scm 130 */
																	long BgL_auxz00_3301;

																	BgL_auxz00_3301 =
																		(long) (BgL_arg2645z00_1726);
																	BgL_modz00_1725 =
																		(BgL_offsetz00_1724 / BgL_auxz00_3301);
															}}
															{	/* Reduce/typec.scm 130 */
																long BgL_restz00_1727;

																{	/* Reduce/typec.scm 130 */
																	int BgL_arg2644z00_1728;

																	BgL_arg2644z00_1728 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 130 */
																		long BgL_auxz00_3305;

																		BgL_auxz00_3305 =
																			(long) (BgL_arg2644z00_1728);
																		BgL_restz00_1727 =
																			(BgL_offsetz00_1724 % BgL_auxz00_3305);
																}}
																{	/* Reduce/typec.scm 130 */

																	BgL_method3561z00_1717 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1722,
																			(int) (BgL_modz00_1725)),
																		(int) (BgL_restz00_1727));
									}}}}}}}}
									BgL_res3802z00_1742 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1717)
										(BgL_method3561z00_1717, (obj_t) (BgL_arg3693z00_1334),
											BEOA));
								}
								BgL_arg3692z00_1333 = BgL_res3802z00_1742;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1329))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3692z00_1333), BUNSPEC);
					}
					{	/* Reduce/typec.scm 131 */
						BgL_nodez00_bglt BgL_arg3694z00_1335;

						{	/* Reduce/typec.scm 131 */
							BgL_varz00_bglt BgL_arg3695z00_1336;

							BgL_arg3695z00_1336 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1329))->BgL_varz00);
							{	/* Reduce/typec.scm 131 */
								BgL_nodez00_bglt BgL_res3805z00_1772;

								{	/* Reduce/typec.scm 131 */
									BgL_nodez00_bglt BgL_nodez00_1746;

									BgL_nodez00_1746 = (BgL_nodez00_bglt) (BgL_arg3695z00_1336);
									{	/* Reduce/typec.scm 131 */
										obj_t BgL_method3561z00_1747;

										{	/* Reduce/typec.scm 131 */
											BgL_objectz00_bglt BgL_objz00_1748;

											BgL_objz00_1748 = (BgL_objectz00_bglt) (BgL_nodez00_1746);
											{	/* Reduce/typec.scm 131 */
												long BgL_objzd2classzd2numz00_1749;

												BgL_objzd2classzd2numz00_1749 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_1748);
												{	/* Reduce/typec.scm 131 */
													obj_t BgL_arg2643z00_1750;

													BgL_arg2643z00_1750 =
														PROCEDURE_REF
														(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
														(int) (((long) 1)));
													{	/* Reduce/typec.scm 131 */
														obj_t BgL_arrayz00_1752;

														int BgL_offsetz00_1753;

														BgL_arrayz00_1752 = BgL_arg2643z00_1750;
														BgL_offsetz00_1753 =
															(int) (BgL_objzd2classzd2numz00_1749);
														{	/* Reduce/typec.scm 131 */
															long BgL_offsetz00_1754;

															BgL_offsetz00_1754 =
																((long) (BgL_offsetz00_1753) - OBJECT_TYPE);
															{	/* Reduce/typec.scm 131 */
																long BgL_modz00_1755;

																{	/* Reduce/typec.scm 131 */
																	int BgL_arg2645z00_1756;

																	BgL_arg2645z00_1756 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 131 */
																		long BgL_auxz00_3327;

																		BgL_auxz00_3327 =
																			(long) (BgL_arg2645z00_1756);
																		BgL_modz00_1755 =
																			(BgL_offsetz00_1754 / BgL_auxz00_3327);
																}}
																{	/* Reduce/typec.scm 131 */
																	long BgL_restz00_1757;

																	{	/* Reduce/typec.scm 131 */
																		int BgL_arg2644z00_1758;

																		BgL_arg2644z00_1758 = (int) (((long) 16));
																		{	/* Reduce/typec.scm 131 */
																			long BgL_auxz00_3331;

																			BgL_auxz00_3331 =
																				(long) (BgL_arg2644z00_1758);
																			BgL_restz00_1757 =
																				(BgL_offsetz00_1754 % BgL_auxz00_3331);
																	}}
																	{	/* Reduce/typec.scm 131 */

																		BgL_method3561z00_1747 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_1752,
																				(int) (BgL_modz00_1755)),
																			(int) (BgL_restz00_1757));
										}}}}}}}}
										BgL_res3805z00_1772 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3561z00_1747) (BgL_method3561z00_1747,
												(obj_t) (BgL_nodez00_1746), BEOA));
								}}
								BgL_arg3694z00_1335 = BgL_res3805z00_1772;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_3342;

							BgL_auxz00_3342 = (BgL_varz00_bglt) (BgL_arg3694z00_1335);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1329))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3342), BUNSPEC);
					}}
					BgL_auxz00_3291 = BgL_nodez00_1329;
					return (obj_t) (BgL_auxz00_3291);
				}
			}
		}
	}



/* node-typec!-cast3579 */
	obj_t BGl_nodezd2typecz12zd2cast3579z12zzreduce_typecz00(obj_t
		BgL_envz00_2462, obj_t BgL_nodez00_2463)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 120 */
			{
				BgL_castz00_bglt BgL_nodez00_1322;

				{	/* Reduce/typec.scm 121 */
					BgL_castz00_bglt BgL_auxz00_3347;

					BgL_nodez00_1322 = (BgL_castz00_bglt) (BgL_nodez00_2463);
					{	/* Reduce/typec.scm 121 */
						BgL_nodez00_bglt BgL_arg3690z00_1686;

						BgL_arg3690z00_1686 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1322))->BgL_argz00);
						{	/* Reduce/typec.scm 121 */
							BgL_nodez00_bglt BgL_res3799z00_1714;

							{	/* Reduce/typec.scm 121 */
								obj_t BgL_method3561z00_1689;

								{	/* Reduce/typec.scm 121 */
									BgL_objectz00_bglt BgL_objz00_1690;

									BgL_objz00_1690 = (BgL_objectz00_bglt) (BgL_arg3690z00_1686);
									{	/* Reduce/typec.scm 121 */
										long BgL_objzd2classzd2numz00_1691;

										BgL_objzd2classzd2numz00_1691 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1690);
										{	/* Reduce/typec.scm 121 */
											obj_t BgL_arg2643z00_1692;

											BgL_arg2643z00_1692 =
												PROCEDURE_REF
												(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
												(int) (((long) 1)));
											{	/* Reduce/typec.scm 121 */
												obj_t BgL_arrayz00_1694;

												int BgL_offsetz00_1695;

												BgL_arrayz00_1694 = BgL_arg2643z00_1692;
												BgL_offsetz00_1695 =
													(int) (BgL_objzd2classzd2numz00_1691);
												{	/* Reduce/typec.scm 121 */
													long BgL_offsetz00_1696;

													BgL_offsetz00_1696 =
														((long) (BgL_offsetz00_1695) - OBJECT_TYPE);
													{	/* Reduce/typec.scm 121 */
														long BgL_modz00_1697;

														{	/* Reduce/typec.scm 121 */
															int BgL_arg2645z00_1698;

															BgL_arg2645z00_1698 = (int) (((long) 16));
															{	/* Reduce/typec.scm 121 */
																long BgL_auxz00_3357;

																BgL_auxz00_3357 = (long) (BgL_arg2645z00_1698);
																BgL_modz00_1697 =
																	(BgL_offsetz00_1696 / BgL_auxz00_3357);
														}}
														{	/* Reduce/typec.scm 121 */
															long BgL_restz00_1699;

															{	/* Reduce/typec.scm 121 */
																int BgL_arg2644z00_1700;

																BgL_arg2644z00_1700 = (int) (((long) 16));
																{	/* Reduce/typec.scm 121 */
																	long BgL_auxz00_3361;

																	BgL_auxz00_3361 =
																		(long) (BgL_arg2644z00_1700);
																	BgL_restz00_1699 =
																		(BgL_offsetz00_1696 % BgL_auxz00_3361);
															}}
															{	/* Reduce/typec.scm 121 */

																BgL_method3561z00_1689 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1694,
																		(int) (BgL_modz00_1697)),
																	(int) (BgL_restz00_1699));
								}}}}}}}}
								BgL_res3799z00_1714 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1689)
									(BgL_method3561z00_1689, (obj_t) (BgL_arg3690z00_1686),
										BEOA));
							} BgL_res3799z00_1714;
					}}
					BgL_auxz00_3347 = BgL_nodez00_1322;
					return (obj_t) (BgL_auxz00_3347);
				}
			}
		}
	}



/* node-typec!-extern3577 */
	obj_t BGl_nodezd2typecz12zd2extern3577z12zzreduce_typecz00(obj_t
		BgL_envz00_2464, obj_t BgL_nodez00_2465)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 112 */
			{
				BgL_externz00_bglt BgL_nodez00_1315;

				{	/* Reduce/typec.scm 113 */
					BgL_externz00_bglt BgL_auxz00_3374;

					BgL_nodez00_1315 = (BgL_externz00_bglt) (BgL_nodez00_2465);
					{	/* Reduce/typec.scm 113 */
						obj_t BgL_arg3688z00_1683;

						BgL_arg3688z00_1683 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1315))->BgL_exprza2za2);
						BGl_nodezd2typecza2z12z62zzreduce_typecz00(BgL_arg3688z00_1683);
					}
					BgL_auxz00_3374 = BgL_nodez00_1315;
					return (obj_t) (BgL_auxz00_3374);
				}
			}
		}
	}



/* node-typec!-funcall3575 */
	obj_t BGl_nodezd2typecz12zd2funcall3575z12zzreduce_typecz00(obj_t
		BgL_envz00_2466, obj_t BgL_nodez00_2467)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 103 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1306;

				{	/* Reduce/typec.scm 104 */
					BgL_funcallz00_bglt BgL_auxz00_3379;

					BgL_nodez00_1306 = (BgL_funcallz00_bglt) (BgL_nodez00_2467);
					{	/* Reduce/typec.scm 105 */
						BgL_nodez00_bglt BgL_arg3684z00_1310;

						{	/* Reduce/typec.scm 105 */
							BgL_nodez00_bglt BgL_arg3685z00_1311;

							BgL_arg3685z00_1311 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1306))->BgL_funz00);
							{	/* Reduce/typec.scm 105 */
								BgL_nodez00_bglt BgL_res3796z00_1678;

								{	/* Reduce/typec.scm 105 */
									obj_t BgL_method3561z00_1653;

									{	/* Reduce/typec.scm 105 */
										BgL_objectz00_bglt BgL_objz00_1654;

										BgL_objz00_1654 =
											(BgL_objectz00_bglt) (BgL_arg3685z00_1311);
										{	/* Reduce/typec.scm 105 */
											long BgL_objzd2classzd2numz00_1655;

											BgL_objzd2classzd2numz00_1655 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1654);
											{	/* Reduce/typec.scm 105 */
												obj_t BgL_arg2643z00_1656;

												BgL_arg2643z00_1656 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 105 */
													obj_t BgL_arrayz00_1658;

													int BgL_offsetz00_1659;

													BgL_arrayz00_1658 = BgL_arg2643z00_1656;
													BgL_offsetz00_1659 =
														(int) (BgL_objzd2classzd2numz00_1655);
													{	/* Reduce/typec.scm 105 */
														long BgL_offsetz00_1660;

														BgL_offsetz00_1660 =
															((long) (BgL_offsetz00_1659) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 105 */
															long BgL_modz00_1661;

															{	/* Reduce/typec.scm 105 */
																int BgL_arg2645z00_1662;

																BgL_arg2645z00_1662 = (int) (((long) 16));
																{	/* Reduce/typec.scm 105 */
																	long BgL_auxz00_3389;

																	BgL_auxz00_3389 =
																		(long) (BgL_arg2645z00_1662);
																	BgL_modz00_1661 =
																		(BgL_offsetz00_1660 / BgL_auxz00_3389);
															}}
															{	/* Reduce/typec.scm 105 */
																long BgL_restz00_1663;

																{	/* Reduce/typec.scm 105 */
																	int BgL_arg2644z00_1664;

																	BgL_arg2644z00_1664 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 105 */
																		long BgL_auxz00_3393;

																		BgL_auxz00_3393 =
																			(long) (BgL_arg2644z00_1664);
																		BgL_restz00_1663 =
																			(BgL_offsetz00_1660 % BgL_auxz00_3393);
																}}
																{	/* Reduce/typec.scm 105 */

																	BgL_method3561z00_1653 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1658,
																			(int) (BgL_modz00_1661)),
																		(int) (BgL_restz00_1663));
									}}}}}}}}
									BgL_res3796z00_1678 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1653)
										(BgL_method3561z00_1653, (obj_t) (BgL_arg3685z00_1311),
											BEOA));
								}
								BgL_arg3684z00_1310 = BgL_res3796z00_1678;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1306))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3684z00_1310), BUNSPEC);
					}
					{	/* Reduce/typec.scm 106 */
						obj_t BgL_arg3686z00_1312;

						BgL_arg3686z00_1312 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1306))->BgL_argsz00);
						BGl_nodezd2typecza2z12z62zzreduce_typecz00(BgL_arg3686z00_1312);
					}
					BgL_auxz00_3379 = BgL_nodez00_1306;
					return (obj_t) (BgL_auxz00_3379);
				}
			}
		}
	}



/* node-typec!-app-ly3573 */
	obj_t BGl_nodezd2typecz12zd2appzd2ly3573zc0zzreduce_typecz00(obj_t
		BgL_envz00_2468, obj_t BgL_nodez00_2469)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 94 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1296;

				{	/* Reduce/typec.scm 95 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3409;

					BgL_nodez00_1296 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2469);
					{	/* Reduce/typec.scm 96 */
						BgL_nodez00_bglt BgL_arg3679z00_1300;

						{	/* Reduce/typec.scm 96 */
							BgL_nodez00_bglt BgL_arg3680z00_1301;

							BgL_arg3680z00_1301 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1296))->BgL_funz00);
							{	/* Reduce/typec.scm 96 */
								BgL_nodez00_bglt BgL_res3790z00_1618;

								{	/* Reduce/typec.scm 96 */
									obj_t BgL_method3561z00_1593;

									{	/* Reduce/typec.scm 96 */
										BgL_objectz00_bglt BgL_objz00_1594;

										BgL_objz00_1594 =
											(BgL_objectz00_bglt) (BgL_arg3680z00_1301);
										{	/* Reduce/typec.scm 96 */
											long BgL_objzd2classzd2numz00_1595;

											BgL_objzd2classzd2numz00_1595 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1594);
											{	/* Reduce/typec.scm 96 */
												obj_t BgL_arg2643z00_1596;

												BgL_arg2643z00_1596 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 96 */
													obj_t BgL_arrayz00_1598;

													int BgL_offsetz00_1599;

													BgL_arrayz00_1598 = BgL_arg2643z00_1596;
													BgL_offsetz00_1599 =
														(int) (BgL_objzd2classzd2numz00_1595);
													{	/* Reduce/typec.scm 96 */
														long BgL_offsetz00_1600;

														BgL_offsetz00_1600 =
															((long) (BgL_offsetz00_1599) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 96 */
															long BgL_modz00_1601;

															{	/* Reduce/typec.scm 96 */
																int BgL_arg2645z00_1602;

																BgL_arg2645z00_1602 = (int) (((long) 16));
																{	/* Reduce/typec.scm 96 */
																	long BgL_auxz00_3419;

																	BgL_auxz00_3419 =
																		(long) (BgL_arg2645z00_1602);
																	BgL_modz00_1601 =
																		(BgL_offsetz00_1600 / BgL_auxz00_3419);
															}}
															{	/* Reduce/typec.scm 96 */
																long BgL_restz00_1603;

																{	/* Reduce/typec.scm 96 */
																	int BgL_arg2644z00_1604;

																	BgL_arg2644z00_1604 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 96 */
																		long BgL_auxz00_3423;

																		BgL_auxz00_3423 =
																			(long) (BgL_arg2644z00_1604);
																		BgL_restz00_1603 =
																			(BgL_offsetz00_1600 % BgL_auxz00_3423);
																}}
																{	/* Reduce/typec.scm 96 */

																	BgL_method3561z00_1593 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1598,
																			(int) (BgL_modz00_1601)),
																		(int) (BgL_restz00_1603));
									}}}}}}}}
									BgL_res3790z00_1618 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1593)
										(BgL_method3561z00_1593, (obj_t) (BgL_arg3680z00_1301),
											BEOA));
								}
								BgL_arg3679z00_1300 = BgL_res3790z00_1618;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1296))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3679z00_1300), BUNSPEC);
					}
					{	/* Reduce/typec.scm 97 */
						BgL_nodez00_bglt BgL_arg3681z00_1302;

						{	/* Reduce/typec.scm 97 */
							BgL_nodez00_bglt BgL_arg3682z00_1303;

							BgL_arg3682z00_1303 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1296))->BgL_argz00);
							{	/* Reduce/typec.scm 97 */
								BgL_nodez00_bglt BgL_res3793z00_1648;

								{	/* Reduce/typec.scm 97 */
									obj_t BgL_method3561z00_1623;

									{	/* Reduce/typec.scm 97 */
										BgL_objectz00_bglt BgL_objz00_1624;

										BgL_objz00_1624 =
											(BgL_objectz00_bglt) (BgL_arg3682z00_1303);
										{	/* Reduce/typec.scm 97 */
											long BgL_objzd2classzd2numz00_1625;

											BgL_objzd2classzd2numz00_1625 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1624);
											{	/* Reduce/typec.scm 97 */
												obj_t BgL_arg2643z00_1626;

												BgL_arg2643z00_1626 =
													PROCEDURE_REF
													(BGl_nodezd2typecz12zd2envz12zzreduce_typecz00,
													(int) (((long) 1)));
												{	/* Reduce/typec.scm 97 */
													obj_t BgL_arrayz00_1628;

													int BgL_offsetz00_1629;

													BgL_arrayz00_1628 = BgL_arg2643z00_1626;
													BgL_offsetz00_1629 =
														(int) (BgL_objzd2classzd2numz00_1625);
													{	/* Reduce/typec.scm 97 */
														long BgL_offsetz00_1630;

														BgL_offsetz00_1630 =
															((long) (BgL_offsetz00_1629) - OBJECT_TYPE);
														{	/* Reduce/typec.scm 97 */
															long BgL_modz00_1631;

															{	/* Reduce/typec.scm 97 */
																int BgL_arg2645z00_1632;

																BgL_arg2645z00_1632 = (int) (((long) 16));
																{	/* Reduce/typec.scm 97 */
																	long BgL_auxz00_3444;

																	BgL_auxz00_3444 =
																		(long) (BgL_arg2645z00_1632);
																	BgL_modz00_1631 =
																		(BgL_offsetz00_1630 / BgL_auxz00_3444);
															}}
															{	/* Reduce/typec.scm 97 */
																long BgL_restz00_1633;

																{	/* Reduce/typec.scm 97 */
																	int BgL_arg2644z00_1634;

																	BgL_arg2644z00_1634 = (int) (((long) 16));
																	{	/* Reduce/typec.scm 97 */
																		long BgL_auxz00_3448;

																		BgL_auxz00_3448 =
																			(long) (BgL_arg2644z00_1634);
																		BgL_restz00_1633 =
																			(BgL_offsetz00_1630 % BgL_auxz00_3448);
																}}
																{	/* Reduce/typec.scm 97 */

																	BgL_method3561z00_1623 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1628,
																			(int) (BgL_modz00_1631)),
																		(int) (BgL_restz00_1633));
									}}}}}}}}
									BgL_res3793z00_1648 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3561z00_1623)
										(BgL_method3561z00_1623, (obj_t) (BgL_arg3682z00_1303),
											BEOA));
								}
								BgL_arg3681z00_1302 = BgL_res3793z00_1648;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1296))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3681z00_1302), BUNSPEC);
					}
					BgL_auxz00_3409 = BgL_nodez00_1296;
					return (obj_t) (BgL_auxz00_3409);
				}
			}
		}
	}



/* node-typec!-sequence3571 */
	obj_t BGl_nodezd2typecz12zd2sequence3571z12zzreduce_typecz00(obj_t
		BgL_envz00_2470, obj_t BgL_nodez00_2471)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 86 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1289;

				{	/* Reduce/typec.scm 87 */
					BgL_sequencez00_bglt BgL_auxz00_3462;

					BgL_nodez00_1289 = (BgL_sequencez00_bglt) (BgL_nodez00_2471);
					{	/* Reduce/typec.scm 87 */
						obj_t BgL_arg3677z00_1589;

						BgL_arg3677z00_1589 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1289))->BgL_nodesz00);
						BGl_nodezd2typecza2z12z62zzreduce_typecz00(BgL_arg3677z00_1589);
					}
					BgL_auxz00_3462 = BgL_nodez00_1289;
					return (obj_t) (BgL_auxz00_3462);
				}
			}
		}
	}



/* node-typec!-closure3569 */
	obj_t BGl_nodezd2typecz12zd2closure3569z12zzreduce_typecz00(obj_t
		BgL_envz00_2472, obj_t BgL_nodez00_2473)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 80 */
			return (obj_t) ((BgL_closurez00_bglt) (BgL_nodez00_2473));
		}
	}



/* node-typec!-var3567 */
	obj_t BGl_nodezd2typecz12zd2var3567z12zzreduce_typecz00(obj_t BgL_envz00_2474,
		obj_t BgL_nodez00_2475)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 74 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_2475));
		}
	}



/* node-typec!-kwote3565 */
	obj_t BGl_nodezd2typecz12zd2kwote3565z12zzreduce_typecz00(obj_t
		BgL_envz00_2476, obj_t BgL_nodez00_2477)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 68 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2477));
		}
	}



/* node-typec!-atom3563 */
	obj_t BGl_nodezd2typecz12zd2atom3563z12zzreduce_typecz00(obj_t
		BgL_envz00_2478, obj_t BgL_nodez00_2479)
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 62 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2479));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_typecz00()
	{
		AN_OBJECT;
		{	/* Reduce/typec.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zztype_miscz00(((long) 269647501),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3893z00zzreduce_typecz00));
		}
	}

#ifdef __cplusplus
}
#endif
