/*===========================================================================*/
/*   (Type/typeof.scm)                                                       */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/typeof.scm)*/
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


	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_nodez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_getzd2typezd2funcall3587z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl__getzd2typezd2kwotez00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2elongza2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zztype_typeofz00();
	static obj_t BGl_getzd2typezd2atom3547z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2bignumza2z00zztype_cachez00;
	static obj_t BGl_getzd2typezd2setzd2exzd2it3575z00zztype_typeofz00(obj_t,
		obj_t);
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2typezd2sequence3555z00zztype_typeofz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__getzd2typezd2atomz00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl_getzd2typezd2boxzd2setz123583zc0zztype_typeofz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztype_typeofz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t);
	static obj_t BGl_getzd2typezd2boxzd2ref3581zd2zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	static obj_t BGl_getzd2typezd2kwote3549z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_getzd2typezd2jumpzd2exzd2it3577z00zztype_typeofz00(obj_t,
		obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_getzd2typezd2cast3561z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2magicza2z00zztype_cachez00;
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	static obj_t BGl_methodzd2initzd2zztype_typeofz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl__getzd2typezd2default3543z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2charza2z00zztype_cachez00;
	static obj_t BGl_getzd2typezd2makezd2box3579zd2zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_getzd2typezd2letzd2fun3571zd2zztype_typeofz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_typeofz00 = BUNSPEC;
	static obj_t BGl_getzd2typezd2app3589z00zztype_typeofz00(obj_t, obj_t);
	static obj_t BGl_getzd2typezd2closure3553z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zztype_typeofz00();
	extern obj_t BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00;
	static obj_t BGl_getzd2typezd2setq3563z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	static obj_t BGl_getzd2typezd2letzd2var3573zd2zztype_typeofz00(obj_t, obj_t);
	static obj_t BGl_getzd2typezd2extern3558z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_getzd2typezd2appzd2ly3585zd2zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zztype_typeofz00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_getzd2typezd2fail3567z00zztype_typeofz00(obj_t, obj_t);
	static obj_t BGl_getzd2typezd2var3551z00zztype_typeofz00(obj_t, obj_t);
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_getzd2typezd2select3569z00zztype_typeofz00(obj_t, obj_t);
	static obj_t BGl_getzd2typezd2conditional3565z00zztype_typeofz00(obj_t,
		obj_t);
	extern obj_t BGl_za2llongza2z00zztype_cachez00;
	static obj_t BGl__getzd2typezd2zztype_typeofz00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_getzd2typezd2default3543z00zztype_typeofz00(BgL_nodez00_bglt);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_typeofz00();
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string3771z00zztype_typeofz00,
		BgL_bgl_string3771za700za7za7t3801za7, "get-type", 8);
	      DEFINE_STRING(BGl_string3772z00zztype_typeofz00,
		BgL_bgl_string3772za700za7za7t3802za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3794z00zztype_typeofz00,
		BgL_bgl_string3794za700za7za7t3803za7, " -> ", 4);
	      DEFINE_STRING(BGl_string3795z00zztype_typeofz00,
		BgL_bgl_string3795za700za7za7t3804za7, ": ", 2);
	      DEFINE_STRING(BGl_string3796z00zztype_typeofz00,
		BgL_bgl_string3796za700za7za7t3805za7, "   refining type ", 17);
	      DEFINE_STRING(BGl_string3797z00zztype_typeofz00,
		BgL_bgl_string3797za700za7za7t3806za7, "type_typeof", 11);
	      DEFINE_STRING(BGl_string3798z00zztype_typeofz00,
		BgL_bgl_string3798za700za7za7t3807za7, "get-type-default3543 a-tvector ",
		31);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_getzd2typezd2envz00zztype_typeofz00,
		BgL_bgl__getza7d2typeza7d2za7za73808z00, BGl__getzd2typezd2zztype_typeofz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2typezd2atomzd2envzd2zztype_typeofz00,
		BgL_bgl__getza7d2typeza7d2at3809z00,
		BGl__getzd2typezd2atomz00zztype_typeofz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2typezd2kwotezd2envzd2zztype_typeofz00,
		BgL_bgl__getza7d2typeza7d2kw3810z00,
		BGl__getzd2typezd2kwotez00zztype_typeofz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_getzd2typezd2default3543zd2envzd2zztype_typeofz00,
		BgL_bgl__getza7d2typeza7d2de3811z00,
		BGl__getzd2typezd2default3543z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3773z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2ato3812z00,
		BGl_getzd2typezd2atom3547z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3774z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2kwo3813z00,
		BGl_getzd2typezd2kwote3549z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3775z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2var3814z00,
		BGl_getzd2typezd2var3551z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3776z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2clo3815z00,
		BGl_getzd2typezd2closure3553z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3777z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2seq3816z00,
		BGl_getzd2typezd2sequence3555z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3778z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2ext3817z00,
		BGl_getzd2typezd2extern3558z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3780z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2set3818z00,
		BGl_getzd2typezd2setq3563z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3779z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2cas3819z00,
		BGl_getzd2typezd2cast3561z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3781z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2con3820z00,
		BGl_getzd2typezd2conditional3565z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3782z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2fai3821z00,
		BGl_getzd2typezd2fail3567z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3783z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2sel3822z00,
		BGl_getzd2typezd2select3569z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3784z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2let3823z00,
		BGl_getzd2typezd2letzd2fun3571zd2zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3785z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2let3824z00,
		BGl_getzd2typezd2letzd2var3573zd2zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3786z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2set3825z00,
		BGl_getzd2typezd2setzd2exzd2it3575z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3787z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2jum3826z00,
		BGl_getzd2typezd2jumpzd2exzd2it3577z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3788z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2mak3827z00,
		BGl_getzd2typezd2makezd2box3579zd2zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3790z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2box3828z00,
		BGl_getzd2typezd2boxzd2setz123583zc0zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3789z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2box3829z00,
		BGl_getzd2typezd2boxzd2ref3581zd2zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3791z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2app3830z00,
		BGl_getzd2typezd2appzd2ly3585zd2zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3792z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2fun3831z00,
		BGl_getzd2typezd2funcall3587z00zztype_typeofz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3793z00zztype_typeofz00,
		BgL_bgl_getza7d2typeza7d2app3832z00,
		BGl_getzd2typezd2app3589z00zztype_typeofz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long
		BgL_checksumz00_1869, char *BgL_fromz00_1870)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_typeofz00))
				{
					BGl_requirezd2initializa7ationz75zztype_typeofz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztype_typeofz00();
					BGl_cnstzd2initzd2zztype_typeofz00();
					BGl_importedzd2moduleszd2initz00zztype_typeofz00();
					BGl_genericzd2initzd2zztype_typeofz00();
					BGl_methodzd2initzd2zztype_typeofz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_typeofz00()
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_typeof");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"type_typeof");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_typeofz00()
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			{	/* Type/typeof.scm 15 */
				obj_t BgL_cportz00_1851;

				BgL_cportz00_1851 =
					bgl_open_input_string(BGl_string3798z00zztype_typeofz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_1852;

					BgL_iz00_1852 = ((long) 1);
				BgL_loopz00_1853:
					if ((BgL_iz00_1852 == ((long) -1)))
						{	/* Type/typeof.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/typeof.scm 15 */
							{	/* Type/typeof.scm 15 */
								obj_t BgL_arg3800z00_1855;

								{	/* Type/typeof.scm 15 */

									{	/* Type/typeof.scm 15 */
										obj_t BgL_locationz00_1857;

										BgL_locationz00_1857 = BBOOL(((bool_t) 0));
										{	/* Type/typeof.scm 15 */

											BgL_arg3800z00_1855 =
												BGl_readz00zz__readerz00(BgL_cportz00_1851,
												BgL_locationz00_1857);
										}
									}
								}
								{	/* Type/typeof.scm 15 */
									int BgL_auxz00_1889;

									BgL_auxz00_1889 = (int) (BgL_iz00_1852);
									CNST_TABLE_SET(BgL_auxz00_1889, BgL_arg3800z00_1855);
							}}
							{	/* Type/typeof.scm 15 */
								int BgL_auxz00_1858;

								BgL_auxz00_1858 = (int) ((BgL_iz00_1852 - ((long) 1)));
								{
									long BgL_iz00_1894;

									BgL_iz00_1894 = (long) (BgL_auxz00_1858);
									BgL_iz00_1852 = BgL_iz00_1894;
									goto BgL_loopz00_1853;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_typeofz00()
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			return BUNSPEC;
		}
	}



/* get-type-atom */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2typezd2atomz00zztype_typeofz00(obj_t BgL_atomz00_11)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 32 */
			if (NULLP(BgL_atomz00_11))
				{	/* Type/typeof.scm 34 */
					return (BgL_typez00_bglt) (BGl_za2bnilza2z00zztype_cachez00);
				}
			else
				{	/* Type/typeof.scm 34 */
					if (INTEGERP(BgL_atomz00_11))
						{	/* Type/typeof.scm 36 */
							return (BgL_typez00_bglt) (BGl_za2longza2z00zztype_cachez00);
						}
					else
						{	/* Type/typeof.scm 36 */
							if (BIGNUMP(BgL_atomz00_11))
								{	/* Type/typeof.scm 38 */
									return
										(BgL_typez00_bglt) (BGl_za2bignumza2z00zztype_cachez00);
								}
							else
								{	/* Type/typeof.scm 40 */
									bool_t BgL_testz00_1905;

									if (INTEGERP(BgL_atomz00_11))
										{	/* Type/typeof.scm 40 */
											BgL_testz00_1905 = ((bool_t) 1);
										}
									else
										{	/* Type/typeof.scm 40 */
											BgL_testz00_1905 = REALP(BgL_atomz00_11);
										}
									if (BgL_testz00_1905)
										{	/* Type/typeof.scm 40 */
											return
												(BgL_typez00_bglt) (BGl_za2realza2z00zztype_cachez00);
										}
									else
										{	/* Type/typeof.scm 40 */
											if (BOOLEANP(BgL_atomz00_11))
												{	/* Type/typeof.scm 42 */
													return
														(BgL_typez00_bglt)
														(BGl_za2boolza2z00zztype_cachez00);
												}
											else
												{	/* Type/typeof.scm 42 */
													if (CHARP(BgL_atomz00_11))
														{	/* Type/typeof.scm 44 */
															return
																(BgL_typez00_bglt)
																(BGl_za2charza2z00zztype_cachez00);
														}
													else
														{	/* Type/typeof.scm 44 */
															if (STRINGP(BgL_atomz00_11))
																{	/* Type/typeof.scm 46 */
																	return
																		(BgL_typez00_bglt)
																		(BGl_za2bstringza2z00zztype_cachez00);
																}
															else
																{	/* Type/typeof.scm 46 */
																	if ((BgL_atomz00_11 == BUNSPEC))
																		{	/* Type/typeof.scm 48 */
																			return
																				(BgL_typez00_bglt)
																				(BGl_za2unspecza2z00zztype_cachez00);
																		}
																	else
																		{	/* Type/typeof.scm 48 */
																			if (ELONGP(BgL_atomz00_11))
																				{	/* Type/typeof.scm 50 */
																					return
																						(BgL_typez00_bglt)
																						(BGl_za2elongza2z00zztype_cachez00);
																				}
																			else
																				{	/* Type/typeof.scm 50 */
																					if (LLONGP(BgL_atomz00_11))
																						{	/* Type/typeof.scm 52 */
																							return
																								(BgL_typez00_bglt)
																								(BGl_za2llongza2z00zztype_cachez00);
																						}
																					else
																						{	/* Type/typeof.scm 52 */
																							if (KEYWORDP(BgL_atomz00_11))
																								{	/* Type/typeof.scm 54 */
																									return
																										(BgL_typez00_bglt)
																										(BGl_za2keywordza2z00zztype_cachez00);
																								}
																							else
																								{	/* Type/typeof.scm 54 */
																									return
																										(BgL_typez00_bglt)
																										(BGl_za2objza2z00zztype_cachez00);
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



/* _get-type-atom */
	obj_t BGl__getzd2typezd2atomz00zztype_typeofz00(obj_t BgL_envz00_1779,
		obj_t BgL_atomz00_1780)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 32 */
			return
				(obj_t) (BGl_getzd2typezd2atomz00zztype_typeofz00(BgL_atomz00_1780));
		}
	}



/* get-type-kwote */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2typezd2kwotez00zztype_typeofz00(obj_t BgL_kwotez00_12)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 62 */
			if (SYMBOLP(BgL_kwotez00_12))
				{	/* Type/typeof.scm 64 */
					return (BgL_typez00_bglt) (BGl_za2symbolza2z00zztype_cachez00);
				}
			else
				{	/* Type/typeof.scm 64 */
					if (KEYWORDP(BgL_kwotez00_12))
						{	/* Type/typeof.scm 66 */
							return (BgL_typez00_bglt) (BGl_za2keywordza2z00zztype_cachez00);
						}
					else
						{	/* Type/typeof.scm 66 */
							if (PAIRP(BgL_kwotez00_12))
								{	/* Type/typeof.scm 68 */
									return (BgL_typez00_bglt) (BGl_za2pairza2z00zztype_cachez00);
								}
							else
								{	/* Type/typeof.scm 68 */
									if (NULLP(BgL_kwotez00_12))
										{	/* Type/typeof.scm 70 */
											return
												(BgL_typez00_bglt) (BGl_za2bnilza2z00zztype_cachez00);
										}
									else
										{	/* Type/typeof.scm 70 */
											if (VECTORP(BgL_kwotez00_12))
												{	/* Type/typeof.scm 72 */
													return
														(BgL_typez00_bglt)
														(BGl_za2vectorza2z00zztype_cachez00);
												}
											else
												{	/* Type/typeof.scm 74 */
													bool_t BgL_testz00_1949;

													if (STRUCTP(BgL_kwotez00_12))
														{	/* Type/typeof.scm 74 */
															BgL_testz00_1949 =
																(STRUCT_KEY(BgL_kwotez00_12) ==
																CNST_TABLE_REF(((long) 0)));
														}
													else
														{	/* Type/typeof.scm 74 */
															BgL_testz00_1949 = ((bool_t) 0);
														}
													if (BgL_testz00_1949)
														{	/* Type/typeof.scm 74 */
															return
																(BgL_typez00_bglt) (STRUCT_REF(BgL_kwotez00_12,
																	(int) (((long) 0))));
														}
													else
														{	/* Type/typeof.scm 74 */
															return
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00);
														}
												}
										}
								}
						}
				}
		}
	}



/* _get-type-kwote */
	obj_t BGl__getzd2typezd2kwotez00zztype_typeofz00(obj_t BgL_envz00_1781,
		obj_t BgL_kwotez00_1782)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 62 */
			return
				(obj_t) (BGl_getzd2typezd2kwotez00zztype_typeofz00(BgL_kwotez00_1782));
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_typeofz00()
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_getzd2typezd2default3543zd2envzd2zztype_typeofz00,
				BGl_nodez00zzast_nodez00, BGl_string3771z00zztype_typeofz00);
		}
	}



/* get-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt BgL_nodez00_13)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 82 */
			{	/* Type/typeof.scm 82 */
				obj_t BgL_method3545z00_1514;

				{	/* Type/typeof.scm 82 */
					BgL_objectz00_bglt BgL_objz00_1515;

					BgL_objz00_1515 = (BgL_objectz00_bglt) (BgL_nodez00_13);
					{	/* Type/typeof.scm 82 */
						long BgL_objzd2classzd2numz00_1516;

						BgL_objzd2classzd2numz00_1516 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1515);
						{	/* Type/typeof.scm 82 */
							obj_t BgL_arg2643z00_1517;

							BgL_arg2643z00_1517 =
								PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
								(int) (((long) 1)));
							{	/* Type/typeof.scm 82 */
								obj_t BgL_arrayz00_1519;

								int BgL_offsetz00_1520;

								BgL_arrayz00_1519 = BgL_arg2643z00_1517;
								BgL_offsetz00_1520 = (int) (BgL_objzd2classzd2numz00_1516);
								{	/* Type/typeof.scm 82 */
									long BgL_offsetz00_1521;

									BgL_offsetz00_1521 =
										((long) (BgL_offsetz00_1520) - OBJECT_TYPE);
									{	/* Type/typeof.scm 82 */
										long BgL_modz00_1522;

										{	/* Type/typeof.scm 82 */
											int BgL_arg2645z00_1523;

											BgL_arg2645z00_1523 = (int) (((long) 16));
											{	/* Type/typeof.scm 82 */
												long BgL_auxz00_1970;

												BgL_auxz00_1970 = (long) (BgL_arg2645z00_1523);
												BgL_modz00_1522 =
													(BgL_offsetz00_1521 / BgL_auxz00_1970);
										}}
										{	/* Type/typeof.scm 82 */
											long BgL_restz00_1524;

											{	/* Type/typeof.scm 82 */
												int BgL_arg2644z00_1525;

												BgL_arg2644z00_1525 = (int) (((long) 16));
												{	/* Type/typeof.scm 82 */
													long BgL_auxz00_1974;

													BgL_auxz00_1974 = (long) (BgL_arg2644z00_1525);
													BgL_restz00_1524 =
														(BgL_offsetz00_1521 % BgL_auxz00_1974);
											}}
											{	/* Type/typeof.scm 82 */

												BgL_method3545z00_1514 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1519,
														(int) (BgL_modz00_1522)), (int) (BgL_restz00_1524));
				}}}}}}}}
				return
					(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1514)
					(BgL_method3545z00_1514, (obj_t) (BgL_nodez00_13), BEOA));
			}
		}
	}



/* _get-type */
	obj_t BGl__getzd2typezd2zztype_typeofz00(obj_t BgL_envz00_1783,
		obj_t BgL_nodez00_1784)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 82 */
			return
				(obj_t) (BGl_getzd2typezd2zztype_typeofz00(
					(BgL_nodez00_bglt) (BgL_nodez00_1784)));
		}
	}



/* get-type-default3543 */
	BgL_typez00_bglt
		BGl_getzd2typezd2default3543z00zztype_typeofz00(BgL_nodez00_bglt
		BgL_nodez00_14)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			return
				(BgL_typez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 1)),
					BGl_string3772z00zztype_typeofz00, (obj_t) (BgL_nodez00_14)));
		}
	}



/* _get-type-default3543 */
	obj_t BGl__getzd2typezd2default3543z00zztype_typeofz00(obj_t BgL_envz00_1785,
		obj_t BgL_nodez00_1786)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			return
				(obj_t) (BGl_getzd2typezd2default3543z00zztype_typeofz00(
					(BgL_nodez00_bglt) (BgL_nodez00_1786)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_typeofz00()
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_atomz00zzast_nodez00,
				BGl_proc3773z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_kwotez00zzast_nodez00,
				BGl_proc3774z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_varz00zzast_nodez00,
				BGl_proc3775z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_closurez00zzast_nodez00,
				BGl_proc3776z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_sequencez00zzast_nodez00,
				BGl_proc3777z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_externz00zzast_nodez00,
				BGl_proc3778z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_castz00zzast_nodez00,
				BGl_proc3779z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_setqz00zzast_nodez00,
				BGl_proc3780z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3781z00zztype_typeofz00,
				BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_failz00zzast_nodez00,
				BGl_proc3782z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_selectz00zzast_nodez00,
				BGl_proc3783z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_letzd2funzd2zzast_nodez00,
				BGl_proc3784z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc3785z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3786z00zztype_typeofz00,
				BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3787z00zztype_typeofz00,
				BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3788z00zztype_typeofz00,
				BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc3789z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3790z00zztype_typeofz00,
				BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc3791z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_funcallz00zzast_nodez00,
				BGl_proc3792z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_getzd2typezd2envz00zztype_typeofz00, BGl_appz00zzast_nodez00,
				BGl_proc3793z00zztype_typeofz00, BGl_string3771z00zztype_typeofz00);
		}
	}



/* get-type-app3589 */
	obj_t BGl_getzd2typezd2app3589z00zztype_typeofz00(obj_t BgL_envz00_1808,
		obj_t BgL_nodez00_1809)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 271 */
			{
				BgL_appz00_bglt BgL_nodez00_1470;

				{	/* Type/typeof.scm 272 */
					BgL_typez00_bglt BgL_auxz00_2016;

					BgL_nodez00_1470 = (BgL_appz00_bglt) (BgL_nodez00_1809);
					{	/* Type/typeof.scm 272 */
						BgL_variablez00_bglt BgL_arg3741z00_1774;

						{	/* Type/typeof.scm 272 */
							BgL_varz00_bglt BgL_obj1664z00_1777;

							BgL_obj1664z00_1777 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1470))->BgL_funz00);
							BgL_arg3741z00_1774 =
								(((BgL_varz00_bglt) CREF(BgL_obj1664z00_1777))->
								BgL_variablez00);
						}
						BgL_auxz00_2016 =
							(((BgL_variablez00_bglt) CREF(BgL_arg3741z00_1774))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2016);
				}
			}
		}
	}



/* get-type-funcall3587 */
	obj_t BGl_getzd2typezd2funcall3587z00zztype_typeofz00(obj_t BgL_envz00_1810,
		obj_t BgL_nodez00_1811)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 265 */
			return BGl_za2objza2z00zztype_cachez00;
		}
	}



/* get-type-app-ly3585 */
	obj_t BGl_getzd2typezd2appzd2ly3585zd2zztype_typeofz00(obj_t BgL_envz00_1812,
		obj_t BgL_nodez00_1813)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 259 */
			return BGl_za2objza2z00zztype_cachez00;
		}
	}



/* get-type-box-set!3583 */
	obj_t BGl_getzd2typezd2boxzd2setz123583zc0zztype_typeofz00(obj_t
		BgL_envz00_1814, obj_t BgL_nodez00_1815)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 253 */
			return BGl_za2unspecza2z00zztype_cachez00;
		}
	}



/* get-type-box-ref3581 */
	obj_t BGl_getzd2typezd2boxzd2ref3581zd2zztype_typeofz00(obj_t BgL_envz00_1816,
		obj_t BgL_nodez00_1817)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 247 */
			return BGl_za2objza2z00zztype_cachez00;
		}
	}



/* get-type-make-box3579 */
	obj_t BGl_getzd2typezd2makezd2box3579zd2zztype_typeofz00(obj_t
		BgL_envz00_1818, obj_t BgL_nodez00_1819)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 241 */
			return BGl_za2objza2z00zztype_cachez00;
		}
	}



/* get-type-jump-ex-it3577 */
	obj_t BGl_getzd2typezd2jumpzd2exzd2it3577z00zztype_typeofz00(obj_t
		BgL_envz00_1820, obj_t BgL_nodez00_1821)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 235 */
			return BGl_za2objza2z00zztype_cachez00;
		}
	}



/* get-type-set-ex-it3575 */
	obj_t BGl_getzd2typezd2setzd2exzd2it3575z00zztype_typeofz00(obj_t
		BgL_envz00_1822, obj_t BgL_nodez00_1823)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 229 */
			return BGl_za2objza2z00zztype_cachez00;
		}
	}



/* get-type-let-var3573 */
	obj_t BGl_getzd2typezd2letzd2var3573zd2zztype_typeofz00(obj_t BgL_envz00_1824,
		obj_t BgL_nodez00_1825)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 222 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1428;

				{	/* Type/typeof.scm 223 */
					BgL_typez00_bglt BgL_auxz00_2022;

					BgL_nodez00_1428 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_1825);
					{	/* Type/typeof.scm 223 */
						BgL_nodez00_bglt BgL_arg3732z00_1744;

						BgL_arg3732z00_1744 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1428))->BgL_bodyz00);
						{	/* Type/typeof.scm 223 */
							BgL_typez00_bglt BgL_res3770z00_1772;

							{	/* Type/typeof.scm 223 */
								obj_t BgL_method3545z00_1747;

								{	/* Type/typeof.scm 223 */
									BgL_objectz00_bglt BgL_objz00_1748;

									BgL_objz00_1748 = (BgL_objectz00_bglt) (BgL_arg3732z00_1744);
									{	/* Type/typeof.scm 223 */
										long BgL_objzd2classzd2numz00_1749;

										BgL_objzd2classzd2numz00_1749 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1748);
										{	/* Type/typeof.scm 223 */
											obj_t BgL_arg2643z00_1750;

											BgL_arg2643z00_1750 =
												PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
												(int) (((long) 1)));
											{	/* Type/typeof.scm 223 */
												obj_t BgL_arrayz00_1752;

												int BgL_offsetz00_1753;

												BgL_arrayz00_1752 = BgL_arg2643z00_1750;
												BgL_offsetz00_1753 =
													(int) (BgL_objzd2classzd2numz00_1749);
												{	/* Type/typeof.scm 223 */
													long BgL_offsetz00_1754;

													BgL_offsetz00_1754 =
														((long) (BgL_offsetz00_1753) - OBJECT_TYPE);
													{	/* Type/typeof.scm 223 */
														long BgL_modz00_1755;

														{	/* Type/typeof.scm 223 */
															int BgL_arg2645z00_1756;

															BgL_arg2645z00_1756 = (int) (((long) 16));
															{	/* Type/typeof.scm 223 */
																long BgL_auxz00_2032;

																BgL_auxz00_2032 = (long) (BgL_arg2645z00_1756);
																BgL_modz00_1755 =
																	(BgL_offsetz00_1754 / BgL_auxz00_2032);
														}}
														{	/* Type/typeof.scm 223 */
															long BgL_restz00_1757;

															{	/* Type/typeof.scm 223 */
																int BgL_arg2644z00_1758;

																BgL_arg2644z00_1758 = (int) (((long) 16));
																{	/* Type/typeof.scm 223 */
																	long BgL_auxz00_2036;

																	BgL_auxz00_2036 =
																		(long) (BgL_arg2644z00_1758);
																	BgL_restz00_1757 =
																		(BgL_offsetz00_1754 % BgL_auxz00_2036);
															}}
															{	/* Type/typeof.scm 223 */

																BgL_method3545z00_1747 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1752,
																		(int) (BgL_modz00_1755)),
																	(int) (BgL_restz00_1757));
								}}}}}}}}
								BgL_res3770z00_1772 =
									(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1747)
									(BgL_method3545z00_1747, (obj_t) (BgL_arg3732z00_1744),
										BEOA));
							}
							BgL_auxz00_2022 = BgL_res3770z00_1772;
					}}
					return (obj_t) (BgL_auxz00_2022);
				}
			}
		}
	}



/* get-type-let-fun3571 */
	obj_t BGl_getzd2typezd2letzd2fun3571zd2zztype_typeofz00(obj_t BgL_envz00_1826,
		obj_t BgL_nodez00_1827)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 215 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1421;

				{	/* Type/typeof.scm 216 */
					BgL_typez00_bglt BgL_auxz00_2049;

					BgL_nodez00_1421 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_1827);
					{	/* Type/typeof.scm 216 */
						BgL_nodez00_bglt BgL_arg3730z00_1714;

						BgL_arg3730z00_1714 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1421))->BgL_bodyz00);
						{	/* Type/typeof.scm 216 */
							BgL_typez00_bglt BgL_res3767z00_1742;

							{	/* Type/typeof.scm 216 */
								obj_t BgL_method3545z00_1717;

								{	/* Type/typeof.scm 216 */
									BgL_objectz00_bglt BgL_objz00_1718;

									BgL_objz00_1718 = (BgL_objectz00_bglt) (BgL_arg3730z00_1714);
									{	/* Type/typeof.scm 216 */
										long BgL_objzd2classzd2numz00_1719;

										BgL_objzd2classzd2numz00_1719 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1718);
										{	/* Type/typeof.scm 216 */
											obj_t BgL_arg2643z00_1720;

											BgL_arg2643z00_1720 =
												PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
												(int) (((long) 1)));
											{	/* Type/typeof.scm 216 */
												obj_t BgL_arrayz00_1722;

												int BgL_offsetz00_1723;

												BgL_arrayz00_1722 = BgL_arg2643z00_1720;
												BgL_offsetz00_1723 =
													(int) (BgL_objzd2classzd2numz00_1719);
												{	/* Type/typeof.scm 216 */
													long BgL_offsetz00_1724;

													BgL_offsetz00_1724 =
														((long) (BgL_offsetz00_1723) - OBJECT_TYPE);
													{	/* Type/typeof.scm 216 */
														long BgL_modz00_1725;

														{	/* Type/typeof.scm 216 */
															int BgL_arg2645z00_1726;

															BgL_arg2645z00_1726 = (int) (((long) 16));
															{	/* Type/typeof.scm 216 */
																long BgL_auxz00_2059;

																BgL_auxz00_2059 = (long) (BgL_arg2645z00_1726);
																BgL_modz00_1725 =
																	(BgL_offsetz00_1724 / BgL_auxz00_2059);
														}}
														{	/* Type/typeof.scm 216 */
															long BgL_restz00_1727;

															{	/* Type/typeof.scm 216 */
																int BgL_arg2644z00_1728;

																BgL_arg2644z00_1728 = (int) (((long) 16));
																{	/* Type/typeof.scm 216 */
																	long BgL_auxz00_2063;

																	BgL_auxz00_2063 =
																		(long) (BgL_arg2644z00_1728);
																	BgL_restz00_1727 =
																		(BgL_offsetz00_1724 % BgL_auxz00_2063);
															}}
															{	/* Type/typeof.scm 216 */

																BgL_method3545z00_1717 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1722,
																		(int) (BgL_modz00_1725)),
																	(int) (BgL_restz00_1727));
								}}}}}}}}
								BgL_res3767z00_1742 =
									(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1717)
									(BgL_method3545z00_1717, (obj_t) (BgL_arg3730z00_1714),
										BEOA));
							}
							BgL_auxz00_2049 = BgL_res3767z00_1742;
					}}
					return (obj_t) (BgL_auxz00_2049);
				}
			}
		}
	}



/* get-type-select3569 */
	obj_t BGl_getzd2typezd2select3569z00zztype_typeofz00(obj_t BgL_envz00_1828,
		obj_t BgL_nodez00_1829)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 198 */
			{
				BgL_selectz00_bglt BgL_nodez00_1395;

				BgL_nodez00_1395 = (BgL_selectz00_bglt) (BgL_nodez00_1829);
				{	/* Type/typeof.scm 200 */
					obj_t BgL_g3535z00_1399;

					BgL_typez00_bglt BgL_g3536z00_1400;

					{	/* Type/typeof.scm 200 */
						obj_t BgL_pairz00_1650;

						BgL_pairz00_1650 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1395))->BgL_clausesz00);
						BgL_g3535z00_1399 = CDR(BgL_pairz00_1650);
					}
					{	/* Type/typeof.scm 201 */
						obj_t BgL_arg3726z00_1416;

						{	/* Type/typeof.scm 201 */
							obj_t BgL_pairz00_1653;

							{	/* Type/typeof.scm 201 */
								obj_t BgL_pairz00_1652;

								BgL_pairz00_1652 =
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1395))->
									BgL_clausesz00);
								BgL_pairz00_1653 = CAR(BgL_pairz00_1652);
							}
							BgL_arg3726z00_1416 = CDR(BgL_pairz00_1653);
						}
						{	/* Type/typeof.scm 201 */
							BgL_typez00_bglt BgL_res3761z00_1680;

							{	/* Type/typeof.scm 201 */
								BgL_nodez00_bglt BgL_nodez00_1654;

								BgL_nodez00_1654 = (BgL_nodez00_bglt) (BgL_arg3726z00_1416);
								{	/* Type/typeof.scm 201 */
									obj_t BgL_method3545z00_1655;

									{	/* Type/typeof.scm 201 */
										BgL_objectz00_bglt BgL_objz00_1656;

										BgL_objz00_1656 = (BgL_objectz00_bglt) (BgL_nodez00_1654);
										{	/* Type/typeof.scm 201 */
											long BgL_objzd2classzd2numz00_1657;

											BgL_objzd2classzd2numz00_1657 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1656);
											{	/* Type/typeof.scm 201 */
												obj_t BgL_arg2643z00_1658;

												BgL_arg2643z00_1658 =
													PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
													(int) (((long) 1)));
												{	/* Type/typeof.scm 201 */
													obj_t BgL_arrayz00_1660;

													int BgL_offsetz00_1661;

													BgL_arrayz00_1660 = BgL_arg2643z00_1658;
													BgL_offsetz00_1661 =
														(int) (BgL_objzd2classzd2numz00_1657);
													{	/* Type/typeof.scm 201 */
														long BgL_offsetz00_1662;

														BgL_offsetz00_1662 =
															((long) (BgL_offsetz00_1661) - OBJECT_TYPE);
														{	/* Type/typeof.scm 201 */
															long BgL_modz00_1663;

															{	/* Type/typeof.scm 201 */
																int BgL_arg2645z00_1664;

																BgL_arg2645z00_1664 = (int) (((long) 16));
																{	/* Type/typeof.scm 201 */
																	long BgL_auxz00_2090;

																	BgL_auxz00_2090 =
																		(long) (BgL_arg2645z00_1664);
																	BgL_modz00_1663 =
																		(BgL_offsetz00_1662 / BgL_auxz00_2090);
															}}
															{	/* Type/typeof.scm 201 */
																long BgL_restz00_1665;

																{	/* Type/typeof.scm 201 */
																	int BgL_arg2644z00_1666;

																	BgL_arg2644z00_1666 = (int) (((long) 16));
																	{	/* Type/typeof.scm 201 */
																		long BgL_auxz00_2094;

																		BgL_auxz00_2094 =
																			(long) (BgL_arg2644z00_1666);
																		BgL_restz00_1665 =
																			(BgL_offsetz00_1662 % BgL_auxz00_2094);
																}}
																{	/* Type/typeof.scm 201 */

																	BgL_method3545z00_1655 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1660,
																			(int) (BgL_modz00_1663)),
																		(int) (BgL_restz00_1665));
									}}}}}}}}
									BgL_res3761z00_1680 =
										(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1655)
										(BgL_method3545z00_1655, (obj_t) (BgL_nodez00_1654), BEOA));
							}}
							BgL_g3536z00_1400 = BgL_res3761z00_1680;
					}}
					{
						obj_t BgL_clausesz00_1402;

						BgL_typez00_bglt BgL_typez00_1403;

						BgL_clausesz00_1402 = BgL_g3535z00_1399;
						BgL_typez00_1403 = BgL_g3536z00_1400;
					BgL_zc3anonymousza33716ze3z83_1404:
						if (NULLP(BgL_clausesz00_1402))
							{	/* Type/typeof.scm 202 */
								return (obj_t) (BgL_typez00_1403);
							}
						else
							{	/* Type/typeof.scm 204 */
								BgL_typez00_bglt BgL_ntypez00_1406;

								{	/* Type/typeof.scm 204 */
									obj_t BgL_arg3723z00_1412;

									BgL_arg3723z00_1412 = CDR(CAR(BgL_clausesz00_1402));
									{	/* Type/typeof.scm 204 */
										BgL_typez00_bglt BgL_res3764z00_1710;

										{	/* Type/typeof.scm 204 */
											BgL_nodez00_bglt BgL_nodez00_1684;

											BgL_nodez00_1684 =
												(BgL_nodez00_bglt) (BgL_arg3723z00_1412);
											{	/* Type/typeof.scm 204 */
												obj_t BgL_method3545z00_1685;

												{	/* Type/typeof.scm 204 */
													BgL_objectz00_bglt BgL_objz00_1686;

													BgL_objz00_1686 =
														(BgL_objectz00_bglt) (BgL_nodez00_1684);
													{	/* Type/typeof.scm 204 */
														long BgL_objzd2classzd2numz00_1687;

														BgL_objzd2classzd2numz00_1687 =
															BGL_OBJECT_CLASS_NUM(BgL_objz00_1686);
														{	/* Type/typeof.scm 204 */
															obj_t BgL_arg2643z00_1688;

															BgL_arg2643z00_1688 =
																PROCEDURE_REF
																(BGl_getzd2typezd2envz00zztype_typeofz00,
																(int) (((long) 1)));
															{	/* Type/typeof.scm 204 */
																obj_t BgL_arrayz00_1690;

																int BgL_offsetz00_1691;

																BgL_arrayz00_1690 = BgL_arg2643z00_1688;
																BgL_offsetz00_1691 =
																	(int) (BgL_objzd2classzd2numz00_1687);
																{	/* Type/typeof.scm 204 */
																	long BgL_offsetz00_1692;

																	BgL_offsetz00_1692 =
																		((long) (BgL_offsetz00_1691) - OBJECT_TYPE);
																	{	/* Type/typeof.scm 204 */
																		long BgL_modz00_1693;

																		{	/* Type/typeof.scm 204 */
																			int BgL_arg2645z00_1694;

																			BgL_arg2645z00_1694 = (int) (((long) 16));
																			{	/* Type/typeof.scm 204 */
																				long BgL_auxz00_2119;

																				BgL_auxz00_2119 =
																					(long) (BgL_arg2645z00_1694);
																				BgL_modz00_1693 =
																					(BgL_offsetz00_1692 /
																					BgL_auxz00_2119);
																		}}
																		{	/* Type/typeof.scm 204 */
																			long BgL_restz00_1695;

																			{	/* Type/typeof.scm 204 */
																				int BgL_arg2644z00_1696;

																				BgL_arg2644z00_1696 =
																					(int) (((long) 16));
																				{	/* Type/typeof.scm 204 */
																					long BgL_auxz00_2123;

																					BgL_auxz00_2123 =
																						(long) (BgL_arg2644z00_1696);
																					BgL_restz00_1695 =
																						(BgL_offsetz00_1692 %
																						BgL_auxz00_2123);
																			}}
																			{	/* Type/typeof.scm 204 */

																				BgL_method3545z00_1685 =
																					VECTOR_REF(VECTOR_REF
																					(BgL_arrayz00_1690,
																						(int) (BgL_modz00_1693)),
																					(int) (BgL_restz00_1695));
												}}}}}}}}
												BgL_res3764z00_1710 =
													(BgL_typez00_bglt) (PROCEDURE_ENTRY
													(BgL_method3545z00_1685) (BgL_method3545z00_1685,
														(obj_t) (BgL_nodez00_1684), BEOA));
										}}
										BgL_ntypez00_1406 = BgL_res3764z00_1710;
								}}
								if (
									((obj_t) (BgL_typez00_1403) ==
										BGl_za2magicza2z00zztype_cachez00))
									{
										BgL_typez00_bglt BgL_typez00_2139;

										obj_t BgL_clausesz00_2137;

										BgL_clausesz00_2137 = CDR(BgL_clausesz00_1402);
										BgL_typez00_2139 = BgL_ntypez00_1406;
										BgL_typez00_1403 = BgL_typez00_2139;
										BgL_clausesz00_1402 = BgL_clausesz00_2137;
										goto BgL_zc3anonymousza33716ze3z83_1404;
									}
								else
									{	/* Type/typeof.scm 208 */
										bool_t BgL_testz00_2140;

										if (
											((obj_t) (BgL_ntypez00_1406) ==
												(obj_t) (BgL_typez00_1403)))
											{	/* Type/typeof.scm 208 */
												BgL_testz00_2140 = ((bool_t) 1);
											}
										else
											{	/* Type/typeof.scm 208 */
												BgL_testz00_2140 =
													(
													(obj_t) (BgL_ntypez00_1406) ==
													BGl_za2magicza2z00zztype_cachez00);
											}
										if (BgL_testz00_2140)
											{
												obj_t BgL_clausesz00_2147;

												BgL_clausesz00_2147 = CDR(BgL_clausesz00_1402);
												BgL_clausesz00_1402 = BgL_clausesz00_2147;
												goto BgL_zc3anonymousza33716ze3z83_1404;
											}
										else
											{	/* Type/typeof.scm 208 */
												return BGl_za2objza2z00zztype_cachez00;
											}
									}
							}
					}
				}
			}
		}
	}



/* get-type-fail3567 */
	obj_t BGl_getzd2typezd2fail3567z00zztype_typeofz00(obj_t BgL_envz00_1830,
		obj_t BgL_nodez00_1831)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 192 */
			return BGl_za2magicza2z00zztype_cachez00;
		}
	}



/* get-type-conditional3565 */
	obj_t BGl_getzd2typezd2conditional3565z00zztype_typeofz00(obj_t
		BgL_envz00_1832, obj_t BgL_nodez00_1833)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 181 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1377;

				BgL_nodez00_1377 = (BgL_conditionalz00_bglt) (BgL_nodez00_1833);
				{	/* Type/typeof.scm 183 */
					BgL_typez00_bglt BgL_ttruez00_1381;

					BgL_typez00_bglt BgL_tfalsez00_1382;

					{	/* Type/typeof.scm 183 */
						BgL_nodez00_bglt BgL_arg3712z00_1386;

						BgL_arg3712z00_1386 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1377))->BgL_truez00);
						{	/* Type/typeof.scm 183 */
							BgL_typez00_bglt BgL_res3755z00_1620;

							{	/* Type/typeof.scm 183 */
								obj_t BgL_method3545z00_1595;

								{	/* Type/typeof.scm 183 */
									BgL_objectz00_bglt BgL_objz00_1596;

									BgL_objz00_1596 = (BgL_objectz00_bglt) (BgL_arg3712z00_1386);
									{	/* Type/typeof.scm 183 */
										long BgL_objzd2classzd2numz00_1597;

										BgL_objzd2classzd2numz00_1597 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1596);
										{	/* Type/typeof.scm 183 */
											obj_t BgL_arg2643z00_1598;

											BgL_arg2643z00_1598 =
												PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
												(int) (((long) 1)));
											{	/* Type/typeof.scm 183 */
												obj_t BgL_arrayz00_1600;

												int BgL_offsetz00_1601;

												BgL_arrayz00_1600 = BgL_arg2643z00_1598;
												BgL_offsetz00_1601 =
													(int) (BgL_objzd2classzd2numz00_1597);
												{	/* Type/typeof.scm 183 */
													long BgL_offsetz00_1602;

													BgL_offsetz00_1602 =
														((long) (BgL_offsetz00_1601) - OBJECT_TYPE);
													{	/* Type/typeof.scm 183 */
														long BgL_modz00_1603;

														{	/* Type/typeof.scm 183 */
															int BgL_arg2645z00_1604;

															BgL_arg2645z00_1604 = (int) (((long) 16));
															{	/* Type/typeof.scm 183 */
																long BgL_auxz00_2159;

																BgL_auxz00_2159 = (long) (BgL_arg2645z00_1604);
																BgL_modz00_1603 =
																	(BgL_offsetz00_1602 / BgL_auxz00_2159);
														}}
														{	/* Type/typeof.scm 183 */
															long BgL_restz00_1605;

															{	/* Type/typeof.scm 183 */
																int BgL_arg2644z00_1606;

																BgL_arg2644z00_1606 = (int) (((long) 16));
																{	/* Type/typeof.scm 183 */
																	long BgL_auxz00_2163;

																	BgL_auxz00_2163 =
																		(long) (BgL_arg2644z00_1606);
																	BgL_restz00_1605 =
																		(BgL_offsetz00_1602 % BgL_auxz00_2163);
															}}
															{	/* Type/typeof.scm 183 */

																BgL_method3545z00_1595 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1600,
																		(int) (BgL_modz00_1603)),
																	(int) (BgL_restz00_1605));
								}}}}}}}}
								BgL_res3755z00_1620 =
									(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1595)
									(BgL_method3545z00_1595, (obj_t) (BgL_arg3712z00_1386),
										BEOA));
							}
							BgL_ttruez00_1381 = BgL_res3755z00_1620;
					}}
					{	/* Type/typeof.scm 184 */
						BgL_nodez00_bglt BgL_arg3713z00_1387;

						BgL_arg3713z00_1387 =
							(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1377))->
							BgL_falsez00);
						{	/* Type/typeof.scm 184 */
							BgL_typez00_bglt BgL_res3758z00_1648;

							{	/* Type/typeof.scm 184 */
								obj_t BgL_method3545z00_1623;

								{	/* Type/typeof.scm 184 */
									BgL_objectz00_bglt BgL_objz00_1624;

									BgL_objz00_1624 = (BgL_objectz00_bglt) (BgL_arg3713z00_1387);
									{	/* Type/typeof.scm 184 */
										long BgL_objzd2classzd2numz00_1625;

										BgL_objzd2classzd2numz00_1625 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1624);
										{	/* Type/typeof.scm 184 */
											obj_t BgL_arg2643z00_1626;

											BgL_arg2643z00_1626 =
												PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
												(int) (((long) 1)));
											{	/* Type/typeof.scm 184 */
												obj_t BgL_arrayz00_1628;

												int BgL_offsetz00_1629;

												BgL_arrayz00_1628 = BgL_arg2643z00_1626;
												BgL_offsetz00_1629 =
													(int) (BgL_objzd2classzd2numz00_1625);
												{	/* Type/typeof.scm 184 */
													long BgL_offsetz00_1630;

													BgL_offsetz00_1630 =
														((long) (BgL_offsetz00_1629) - OBJECT_TYPE);
													{	/* Type/typeof.scm 184 */
														long BgL_modz00_1631;

														{	/* Type/typeof.scm 184 */
															int BgL_arg2645z00_1632;

															BgL_arg2645z00_1632 = (int) (((long) 16));
															{	/* Type/typeof.scm 184 */
																long BgL_auxz00_2183;

																BgL_auxz00_2183 = (long) (BgL_arg2645z00_1632);
																BgL_modz00_1631 =
																	(BgL_offsetz00_1630 / BgL_auxz00_2183);
														}}
														{	/* Type/typeof.scm 184 */
															long BgL_restz00_1633;

															{	/* Type/typeof.scm 184 */
																int BgL_arg2644z00_1634;

																BgL_arg2644z00_1634 = (int) (((long) 16));
																{	/* Type/typeof.scm 184 */
																	long BgL_auxz00_2187;

																	BgL_auxz00_2187 =
																		(long) (BgL_arg2644z00_1634);
																	BgL_restz00_1633 =
																		(BgL_offsetz00_1630 % BgL_auxz00_2187);
															}}
															{	/* Type/typeof.scm 184 */

																BgL_method3545z00_1623 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1628,
																		(int) (BgL_modz00_1631)),
																	(int) (BgL_restz00_1633));
								}}}}}}}}
								BgL_res3758z00_1648 =
									(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1623)
									(BgL_method3545z00_1623, (obj_t) (BgL_arg3713z00_1387),
										BEOA));
							}
							BgL_tfalsez00_1382 = BgL_res3758z00_1648;
					}}
					{	/* Type/typeof.scm 185 */
						bool_t BgL_testz00_2198;

						if (((obj_t) (BgL_ttruez00_1381) == (obj_t) (BgL_tfalsez00_1382)))
							{	/* Type/typeof.scm 185 */
								BgL_testz00_2198 = ((bool_t) 1);
							}
						else
							{	/* Type/typeof.scm 185 */
								BgL_testz00_2198 =
									(
									(obj_t) (BgL_tfalsez00_1382) ==
									BGl_za2magicza2z00zztype_cachez00);
							}
						if (BgL_testz00_2198)
							{	/* Type/typeof.scm 185 */
								return (obj_t) (BgL_ttruez00_1381);
							}
						else
							{	/* Type/typeof.scm 185 */
								if (
									((obj_t) (BgL_ttruez00_1381) ==
										BGl_za2magicza2z00zztype_cachez00))
									{	/* Type/typeof.scm 186 */
										return (obj_t) (BgL_tfalsez00_1382);
									}
								else
									{	/* Type/typeof.scm 186 */
										return BGl_za2objza2z00zztype_cachez00;
									}
							}
					}
				}
			}
		}
	}



/* get-type-setq3563 */
	obj_t BGl_getzd2typezd2setq3563z00zztype_typeofz00(obj_t BgL_envz00_1834,
		obj_t BgL_nodez00_1835)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 175 */
			return BGl_za2unspecza2z00zztype_cachez00;
		}
	}



/* get-type-cast3561 */
	obj_t BGl_getzd2typezd2cast3561z00zztype_typeofz00(obj_t BgL_envz00_1836,
		obj_t BgL_nodez00_1837)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 168 */
			{
				BgL_castz00_bglt BgL_nodez00_1366;

				{	/* Type/typeof.scm 169 */
					BgL_typez00_bglt BgL_auxz00_2211;

					BgL_nodez00_1366 = (BgL_castz00_bglt) (BgL_nodez00_1837);
					{
						BgL_nodez00_bglt BgL_auxz00_2212;

						BgL_auxz00_2212 = (BgL_nodez00_bglt) (BgL_nodez00_1366);
						BgL_auxz00_2211 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_2212))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2211);
				}
			}
		}
	}



/* get-type-extern3558 */
	obj_t BGl_getzd2typezd2extern3558z00zztype_typeofz00(obj_t BgL_envz00_1838,
		obj_t BgL_nodez00_1839)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 161 */
			{
				BgL_externz00_bglt BgL_nodez00_1360;

				{	/* Type/typeof.scm 162 */
					BgL_typez00_bglt BgL_auxz00_2217;

					BgL_nodez00_1360 = (BgL_externz00_bglt) (BgL_nodez00_1839);
					{
						BgL_nodez00_bglt BgL_auxz00_2218;

						BgL_auxz00_2218 = (BgL_nodez00_bglt) (BgL_nodez00_1360);
						BgL_auxz00_2217 =
							(((BgL_nodez00_bglt) CREF(BgL_auxz00_2218))->BgL_typez00);
					}
					return (obj_t) (BgL_auxz00_2217);
				}
			}
		}
	}



/* get-type-sequence3555 */
	obj_t BGl_getzd2typezd2sequence3555z00zztype_typeofz00(obj_t BgL_envz00_1840,
		obj_t BgL_nodez00_1841)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 154 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1351;

				{	/* Type/typeof.scm 155 */
					BgL_typez00_bglt BgL_auxz00_2223;

					BgL_nodez00_1351 = (BgL_sequencez00_bglt) (BgL_nodez00_1841);
					{	/* Type/typeof.scm 156 */
						obj_t BgL_arg3702z00_1355;

						BgL_arg3702z00_1355 =
							CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
								(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1351))->
									BgL_nodesz00)));
						{	/* Type/typeof.scm 156 */
							BgL_typez00_bglt BgL_res3752z00_1588;

							{	/* Type/typeof.scm 156 */
								BgL_nodez00_bglt BgL_nodez00_1562;

								BgL_nodez00_1562 = (BgL_nodez00_bglt) (BgL_arg3702z00_1355);
								{	/* Type/typeof.scm 156 */
									obj_t BgL_method3545z00_1563;

									{	/* Type/typeof.scm 156 */
										BgL_objectz00_bglt BgL_objz00_1564;

										BgL_objz00_1564 = (BgL_objectz00_bglt) (BgL_nodez00_1562);
										{	/* Type/typeof.scm 156 */
											long BgL_objzd2classzd2numz00_1565;

											BgL_objzd2classzd2numz00_1565 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1564);
											{	/* Type/typeof.scm 156 */
												obj_t BgL_arg2643z00_1566;

												BgL_arg2643z00_1566 =
													PROCEDURE_REF(BGl_getzd2typezd2envz00zztype_typeofz00,
													(int) (((long) 1)));
												{	/* Type/typeof.scm 156 */
													obj_t BgL_arrayz00_1568;

													int BgL_offsetz00_1569;

													BgL_arrayz00_1568 = BgL_arg2643z00_1566;
													BgL_offsetz00_1569 =
														(int) (BgL_objzd2classzd2numz00_1565);
													{	/* Type/typeof.scm 156 */
														long BgL_offsetz00_1570;

														BgL_offsetz00_1570 =
															((long) (BgL_offsetz00_1569) - OBJECT_TYPE);
														{	/* Type/typeof.scm 156 */
															long BgL_modz00_1571;

															{	/* Type/typeof.scm 156 */
																int BgL_arg2645z00_1572;

																BgL_arg2645z00_1572 = (int) (((long) 16));
																{	/* Type/typeof.scm 156 */
																	long BgL_auxz00_2236;

																	BgL_auxz00_2236 =
																		(long) (BgL_arg2645z00_1572);
																	BgL_modz00_1571 =
																		(BgL_offsetz00_1570 / BgL_auxz00_2236);
															}}
															{	/* Type/typeof.scm 156 */
																long BgL_restz00_1573;

																{	/* Type/typeof.scm 156 */
																	int BgL_arg2644z00_1574;

																	BgL_arg2644z00_1574 = (int) (((long) 16));
																	{	/* Type/typeof.scm 156 */
																		long BgL_auxz00_2240;

																		BgL_auxz00_2240 =
																			(long) (BgL_arg2644z00_1574);
																		BgL_restz00_1573 =
																			(BgL_offsetz00_1570 % BgL_auxz00_2240);
																}}
																{	/* Type/typeof.scm 156 */

																	BgL_method3545z00_1563 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1568,
																			(int) (BgL_modz00_1571)),
																		(int) (BgL_restz00_1573));
									}}}}}}}}
									BgL_res3752z00_1588 =
										(BgL_typez00_bglt) (PROCEDURE_ENTRY(BgL_method3545z00_1563)
										(BgL_method3545z00_1563, (obj_t) (BgL_nodez00_1562), BEOA));
							}}
							BgL_auxz00_2223 = BgL_res3752z00_1588;
					}}
					return (obj_t) (BgL_auxz00_2223);
				}
			}
		}
	}



/* get-type-closure3553 */
	obj_t BGl_getzd2typezd2closure3553z00zztype_typeofz00(obj_t BgL_envz00_1842,
		obj_t BgL_nodez00_1843)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 148 */
			return BGl_za2procedureza2z00zztype_cachez00;
		}
	}



/* get-type-var3551 */
	obj_t BGl_getzd2typezd2var3551z00zztype_typeofz00(obj_t BgL_envz00_1844,
		obj_t BgL_nodez00_1845)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 116 */
			{
				BgL_varz00_bglt BgL_nodez00_1294;

				BgL_nodez00_1294 = (BgL_varz00_bglt) (BgL_nodez00_1845);
				{
					BgL_typez00_bglt BgL_typenz00_1312;

					BgL_typez00_bglt BgL_typevz00_1313;

					BgL_typez00_bglt BgL_ntypez00_1331;

					BgL_typez00_bglt BgL_vtypez00_1332;

					{	/* Type/typeof.scm 131 */
						BgL_valuez00_bglt BgL_valuez00_1300;

						{	/* Type/typeof.scm 131 */
							BgL_variablez00_bglt BgL_obj2768z00_1546;

							BgL_obj2768z00_1546 =
								(((BgL_varz00_bglt) CREF(BgL_nodez00_1294))->BgL_variablez00);
							BgL_valuez00_1300 =
								(((BgL_variablez00_bglt) CREF(BgL_obj2768z00_1546))->
								BgL_valuez00);
						}
						{	/* Type/typeof.scm 133 */
							bool_t BgL_testz00_2255;

							{	/* Type/typeof.scm 133 */
								obj_t BgL_obj3110z00_1547;

								BgL_obj3110z00_1547 = (obj_t) (BgL_valuez00_1300);
								BgL_testz00_2255 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj3110z00_1547,
									BGl_sfunz00zzast_varz00);
							}
							if (BgL_testz00_2255)
								{	/* Type/typeof.scm 133 */
									return BGl_za2procedureza2z00zztype_cachez00;
								}
							else
								{	/* Type/typeof.scm 135 */
									bool_t BgL_testz00_2258;

									{	/* Type/typeof.scm 135 */
										obj_t BgL_obj3174z00_1548;

										BgL_obj3174z00_1548 = (obj_t) (BgL_valuez00_1300);
										BgL_testz00_2258 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj3174z00_1548,
											BGl_cfunz00zzast_varz00);
									}
									if (BgL_testz00_2258)
										{	/* Type/typeof.scm 135 */
											return BGl_za2objza2z00zztype_cachez00;
										}
									else
										{	/* Type/typeof.scm 138 */
											bool_t BgL_testz00_2261;

											if (CBOOL
												(BGl_za2optimzd2dataflowzd2typeszf3za2zf3zzengine_paramz00))
												{	/* Type/typeof.scm 139 */
													BgL_typez00_bglt BgL_arg3677z00_1308;

													BgL_typez00_bglt BgL_arg3678z00_1309;

													{
														BgL_nodez00_bglt BgL_auxz00_2264;

														BgL_auxz00_2264 =
															(BgL_nodez00_bglt) (BgL_nodez00_1294);
														BgL_arg3677z00_1308 =
															(((BgL_nodez00_bglt) CREF(BgL_auxz00_2264))->
															BgL_typez00);
													}
													{	/* Type/typeof.scm 139 */
														BgL_variablez00_bglt BgL_obj2765z00_1551;

														BgL_obj2765z00_1551 =
															(((BgL_varz00_bglt) CREF(BgL_nodez00_1294))->
															BgL_variablez00);
														BgL_arg3678z00_1309 =
															(((BgL_variablez00_bglt)
																CREF(BgL_obj2765z00_1551))->BgL_typez00);
													}
													BgL_ntypez00_1331 = BgL_arg3677z00_1308;
													BgL_vtypez00_1332 = BgL_arg3678z00_1309;
													{	/* Type/typeof.scm 126 */
														bool_t BgL__ortest_3516z00_1334;

														if (
															((obj_t) (BgL_vtypez00_1332) ==
																BGl_za2objza2z00zztype_cachez00))
															{	/* Type/typeof.scm 126 */
																if (BGl_bigloozd2typezf3z21zztype_typez00
																	(BgL_ntypez00_1331))
																	{	/* Type/typeof.scm 126 */
																		if (
																			((obj_t) (BgL_ntypez00_1331) ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Type/typeof.scm 126 */
																				BgL__ortest_3516z00_1334 = ((bool_t) 0);
																			}
																		else
																			{	/* Type/typeof.scm 126 */
																				BgL__ortest_3516z00_1334 = ((bool_t) 1);
																			}
																	}
																else
																	{	/* Type/typeof.scm 126 */
																		BgL__ortest_3516z00_1334 = ((bool_t) 0);
																	}
															}
														else
															{	/* Type/typeof.scm 126 */
																BgL__ortest_3516z00_1334 = ((bool_t) 0);
															}
														if (BgL__ortest_3516z00_1334)
															{	/* Type/typeof.scm 126 */
																BgL_testz00_2261 = BgL__ortest_3516z00_1334;
															}
														else
															{	/* Type/typeof.scm 127 */
																bool_t BgL__ortest_3517z00_1335;

																if (
																	((obj_t) (BgL_vtypez00_1332) ==
																		BGl_za2pairzd2nilza2zd2zztype_cachez00))
																	{	/* Type/typeof.scm 127 */
																		BgL__ortest_3517z00_1335 =
																			(
																			(obj_t) (BgL_ntypez00_1331) ==
																			BGl_za2pairza2z00zztype_cachez00);
																	}
																else
																	{	/* Type/typeof.scm 127 */
																		BgL__ortest_3517z00_1335 = ((bool_t) 0);
																	}
																if (BgL__ortest_3517z00_1335)
																	{	/* Type/typeof.scm 127 */
																		BgL_testz00_2261 = BgL__ortest_3517z00_1335;
																	}
																else
																	{	/* Type/typeof.scm 128 */
																		bool_t BgL_testz00_2284;

																		{	/* Type/typeof.scm 128 */
																			obj_t BgL_obj3293z00_1558;

																			BgL_obj3293z00_1558 =
																				(obj_t) (BgL_vtypez00_1332);
																			BgL_testz00_2284 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj3293z00_1558,
																				BGl_tclassz00zzobject_classz00);
																		}
																		if (BgL_testz00_2284)
																			{	/* Type/typeof.scm 128 */
																				bool_t BgL_testz00_2287;

																				{	/* Type/typeof.scm 128 */
																					obj_t BgL_obj3293z00_1559;

																					BgL_obj3293z00_1559 =
																						(obj_t) (BgL_ntypez00_1331);
																					BgL_testz00_2287 =
																						BGl_iszd2azf3z21zz__objectz00
																						(BgL_obj3293z00_1559,
																						BGl_tclassz00zzobject_classz00);
																				}
																				if (BgL_testz00_2287)
																					{	/* Type/typeof.scm 128 */
																						BgL_testz00_2261 =
																							BGl_typezd2subclasszf3z21zzobject_classz00
																							(BgL_ntypez00_1331,
																							BgL_vtypez00_1332);
																					}
																				else
																					{	/* Type/typeof.scm 128 */
																						BgL_testz00_2261 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Type/typeof.scm 128 */
																				BgL_testz00_2261 = ((bool_t) 0);
																			}
																	}
															}
													}
												}
											else
												{	/* Type/typeof.scm 138 */
													BgL_testz00_2261 = ((bool_t) 0);
												}
											if (BgL_testz00_2261)
												{	/* Type/typeof.scm 138 */
													{	/* Type/typeof.scm 141 */
														BgL_typez00_bglt BgL_arg3672z00_1304;

														BgL_typez00_bglt BgL_arg3673z00_1305;

														{
															BgL_nodez00_bglt BgL_auxz00_2291;

															BgL_auxz00_2291 =
																(BgL_nodez00_bglt) (BgL_nodez00_1294);
															BgL_arg3672z00_1304 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_2291))->
																BgL_typez00);
														}
														{	/* Type/typeof.scm 141 */
															BgL_variablez00_bglt BgL_obj2765z00_1554;

															BgL_obj2765z00_1554 =
																(((BgL_varz00_bglt) CREF(BgL_nodez00_1294))->
																BgL_variablez00);
															BgL_arg3673z00_1305 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_obj2765z00_1554))->BgL_typez00);
														}
														BgL_typenz00_1312 = BgL_arg3672z00_1304;
														BgL_typevz00_1313 = BgL_arg3673z00_1305;
														{	/* Type/typeof.scm 119 */
															bool_t BgL_testz00_2296;

															if (
																((obj_t) (BgL_typenz00_1312) ==
																	BGl_za2objza2z00zztype_cachez00))
																{	/* Type/typeof.scm 119 */
																	BgL_testz00_2296 = ((bool_t) 1);
																}
															else
																{	/* Type/typeof.scm 119 */
																	if (
																		((obj_t) (BgL_typenz00_1312) ==
																			BGl_za2_za2z00zztype_cachez00))
																		{	/* Type/typeof.scm 120 */
																			BgL_testz00_2296 = ((bool_t) 1);
																		}
																	else
																		{	/* Type/typeof.scm 120 */
																			BgL_testz00_2296 =
																				(
																				(obj_t) (BgL_typenz00_1312) ==
																				(obj_t) (BgL_typevz00_1313));
																		}
																}
															if (BgL_testz00_2296)
																{	/* Type/typeof.scm 119 */
																	BFALSE;
																}
															else
																{	/* Type/typeof.scm 122 */
																	obj_t BgL_arg3685z00_1318;

																	obj_t BgL_arg3687z00_1320;

																	obj_t BgL_arg3689z00_1322;

																	BgL_arg3685z00_1318 =
																		BGl_shapez00zztools_shapez00(
																		(obj_t) (BgL_nodez00_1294));
																	BgL_arg3687z00_1320 =
																		BGl_shapez00zztools_shapez00(
																		(obj_t) (BgL_typevz00_1313));
																	BgL_arg3689z00_1322 =
																		BGl_shapez00zztools_shapez00(
																		(obj_t) (BgL_typenz00_1312));
																	{	/* Type/typeof.scm 122 */
																		obj_t BgL_list3690z00_1323;

																		{	/* Type/typeof.scm 122 */
																			obj_t BgL_arg3691z00_1324;

																			{	/* Type/typeof.scm 122 */
																				obj_t BgL_arg3692z00_1325;

																				{	/* Type/typeof.scm 122 */
																					obj_t BgL_arg3693z00_1326;

																					{	/* Type/typeof.scm 122 */
																						obj_t BgL_arg3694z00_1327;

																						{	/* Type/typeof.scm 122 */
																							obj_t BgL_arg3695z00_1328;

																							BgL_arg3695z00_1328 =
																								MAKE_PAIR(BgL_arg3689z00_1322,
																								BNIL);
																							BgL_arg3694z00_1327 =
																								MAKE_PAIR
																								(BGl_string3794z00zztype_typeofz00,
																								BgL_arg3695z00_1328);
																						}
																						BgL_arg3693z00_1326 =
																							MAKE_PAIR(BgL_arg3687z00_1320,
																							BgL_arg3694z00_1327);
																					}
																					BgL_arg3692z00_1325 =
																						MAKE_PAIR
																						(BGl_string3795z00zztype_typeofz00,
																						BgL_arg3693z00_1326);
																				}
																				BgL_arg3691z00_1324 =
																					MAKE_PAIR(BgL_arg3685z00_1318,
																					BgL_arg3692z00_1325);
																			}
																			BgL_list3690z00_1323 =
																				MAKE_PAIR
																				(BGl_string3796z00zztype_typeofz00,
																				BgL_arg3691z00_1324);
																		}
																		BGl_verbosez00zztools_speekz00(BINT(((long)
																					3)), BgL_list3690z00_1323);
													}}}}
													{	/* Type/typeof.scm 141 */
														BgL_nodez00_bglt BgL_obj1601z00_1555;

														BgL_obj1601z00_1555 =
															(BgL_nodez00_bglt) (BgL_nodez00_1294);
														return
															(obj_t) (
															(((BgL_nodez00_bglt) CREF(BgL_obj1601z00_1555))->
																BgL_typez00));
													}
												}
											else
												{	/* Type/typeof.scm 143 */
													BgL_variablez00_bglt BgL_obj2765z00_1557;

													BgL_obj2765z00_1557 =
														(((BgL_varz00_bglt) CREF(BgL_nodez00_1294))->
														BgL_variablez00);
													return (obj_t) ((((BgL_variablez00_bglt)
																CREF(BgL_obj2765z00_1557))->BgL_typez00));
												}
										}
								}
						}
					}
				}
			}
		}
	}



/* get-type-kwote3549 */
	obj_t BGl_getzd2typezd2kwote3549z00zztype_typeofz00(obj_t BgL_envz00_1846,
		obj_t BgL_nodez00_1847)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 94 */
			{
				BgL_kwotez00_bglt BgL_nodez00_1287;

				{	/* Type/typeof.scm 95 */
					BgL_typez00_bglt BgL_auxz00_2327;

					BgL_nodez00_1287 = (BgL_kwotez00_bglt) (BgL_nodez00_1847);
					BgL_auxz00_2327 =
						BGl_getzd2typezd2kwotez00zztype_typeofz00(
						(((BgL_kwotez00_bglt) CREF(BgL_nodez00_1287))->BgL_valuez00));
					return (obj_t) (BgL_auxz00_2327);
				}
			}
		}
	}



/* get-type-atom3547 */
	obj_t BGl_getzd2typezd2atom3547z00zztype_typeofz00(obj_t BgL_envz00_1848,
		obj_t BgL_nodez00_1849)
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 87 */
			{
				BgL_atomz00_bglt BgL_nodez00_1280;

				{	/* Type/typeof.scm 88 */
					BgL_typez00_bglt BgL_auxz00_2332;

					BgL_nodez00_1280 = (BgL_atomz00_bglt) (BgL_nodez00_1849);
					BgL_auxz00_2332 =
						BGl_getzd2typezd2atomz00zztype_typeofz00(
						(((BgL_atomz00_bglt) CREF(BgL_nodez00_1280))->BgL_valuez00));
					return (obj_t) (BgL_auxz00_2332);
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_typeofz00()
	{
		AN_OBJECT;
		{	/* Type/typeof.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
			return
				BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3797z00zztype_typeofz00));
		}
	}

#ifdef __cplusplus
}
#endif
