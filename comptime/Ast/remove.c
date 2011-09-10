/*===========================================================================*/
/*   (Ast/remove.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/remove.scm)*/
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

	typedef struct BgL_globalz00_bgl
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
		obj_t BgL_modulez00;
		obj_t BgL_importz00;
		bool_t BgL_evaluablezf3zf3;
		obj_t BgL_libraryz00;
		bool_t BgL_userzf3zf3;
		obj_t BgL_pragmaz00;
		obj_t BgL_srcz00;
		obj_t BgL_jvmzd2typezd2namez00;
	}                *BgL_globalz00_bglt;

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
	extern obj_t BGl_occurzd2nodezd2inz12z12zzast_occurz00(BgL_nodez00_bglt,
		BgL_globalz00_bglt);
	static long BGl_za2removedzd2countza2zd2zzast_removez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_nodezd2removez12zd2setq3276z12zzast_removez00(obj_t, obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2removez12zd2default3254z12zzast_removez00(BgL_nodez00_bglt);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_nodezd2removez12zd2extern3272z12zzast_removez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_nodezd2removez12zc0zzast_removez00(BgL_nodez00_bglt);
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl_nodezd2removez12zd2appzd2ly3268zc0zzast_removez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_removez00();
	static obj_t BGl_nodezd2removez12zd2app3266z12zzast_removez00(obj_t, obj_t);
	static obj_t BGl_nodezd2removez12zd2funcall3270z12zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__removezd2varzd2zzast_removez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzast_removez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_nodezd2removez12zd2fail3280z12zzast_removez00(obj_t, obj_t);
	static obj_t BGl_nodezd2removez12zd2conditi3278z12zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	static obj_t BGl_nodezd2removez12zd2select3282z12zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_nodezd2removez12zd2boxzd2ref3286zc0zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl__nodezd2removez12zd2default3254z12zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2removez12zd2var3260z12zzast_removez00(obj_t, obj_t);
	static obj_t BGl_nodezd2removez12zd2kwote3262z12zzast_removez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_removez00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl__nodezd2removez12zc0zzast_removez00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_nodezd2removez12zd2setzd2exzd23294z12zzast_removez00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_removez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzast_removez00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	static obj_t BGl_nodezd2removez12zd2atom3258z12zzast_removez00(obj_t, obj_t);
	static obj_t BGl_nodezd2removez12zd2letzd2fun3290zc0zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_removez00();
	static obj_t BGl_nodezd2removez12zd2letzd2var3292zc0zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2removez12zd2jumpzd2ex3296zc0zzast_removez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_nodezd2removez12zd2boxzd2set3288zc0zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2removez12zd2sequenc3264z12zzast_removez00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_nodezd2removeza2z12z62zzast_removez00(obj_t);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_removezd2varzd2zzast_removez00(obj_t, obj_t);
	static obj_t BGl_globalzd2removezd2sfunz12z12zzast_removez00(obj_t);
	static obj_t BGl_nodezd2removez12zd2makezd2bo3284zc0zzast_removez00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2removez12zd2cast3274z12zzast_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl__removezd2varzd2fromz12z12zzast_removez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_removez00();
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_removezd2varzd2envz00zzast_removez00,
		BgL_bgl__removeza7d2varza7d23624z00, BGl__removezd2varzd2zzast_removez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2removez12zd2default3254zd2envzc0zzast_removez00,
		BgL_bgl__nodeza7d2removeza713625z00,
		BGl__nodezd2removez12zd2default3254z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_GENERIC(BGl_nodezd2removez12zd2envz12zzast_removez00,
		BgL_bgl__nodeza7d2removeza713626z00,
		BGl__nodezd2removez12zc0zzast_removez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_removezd2varzd2fromz12zd2envzc0zzast_removez00,
		BgL_bgl__removeza7d2varza7d23627z00,
		BGl__removezd2varzd2fromz12z12zzast_removez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3600z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123628z00,
		BGl_nodezd2removez12zd2atom3258z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3601z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123629z00,
		BGl_nodezd2removez12zd2var3260z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3602z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123630z00,
		BGl_nodezd2removez12zd2kwote3262z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3603z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123631z00,
		BGl_nodezd2removez12zd2sequenc3264z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3604z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123632z00,
		BGl_nodezd2removez12zd2app3266z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3605z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123633z00,
		BGl_nodezd2removez12zd2appzd2ly3268zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3606z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123634z00,
		BGl_nodezd2removez12zd2funcall3270z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3607z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123635z00,
		BGl_nodezd2removez12zd2extern3272z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3608z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123636z00,
		BGl_nodezd2removez12zd2cast3274z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3610z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123637z00,
		BGl_nodezd2removez12zd2conditi3278z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3609z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123638z00,
		BGl_nodezd2removez12zd2setq3276z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3611z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123639z00,
		BGl_nodezd2removez12zd2fail3280z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3612z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123640z00,
		BGl_nodezd2removez12zd2select3282z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3613z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123641z00,
		BGl_nodezd2removez12zd2makezd2bo3284zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3614z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123642z00,
		BGl_nodezd2removez12zd2boxzd2ref3286zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3615z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123643z00,
		BGl_nodezd2removez12zd2boxzd2set3288zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3616z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123644z00,
		BGl_nodezd2removez12zd2letzd2fun3290zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3617z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123645z00,
		BGl_nodezd2removez12zd2letzd2var3292zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3618z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123646z00,
		BGl_nodezd2removez12zd2setzd2exzd23294z12zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3619z00zzast_removez00,
		BgL_bgl_nodeza7d2removeza7123647z00,
		BGl_nodezd2removez12zd2jumpzd2ex3296zc0zzast_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3590z00zzast_removez00,
		BgL_bgl_string3590za700za7za7a3648za7, "/", 1);
	      DEFINE_STRING(BGl_string3591z00zzast_removez00,
		BgL_bgl_string3591za700za7za7a3649za7, "remove-var-from!", 16);
	      DEFINE_STRING(BGl_string3592z00zzast_removez00,
		BgL_bgl_string3592za700za7za7a3650za7, "already removable variable", 26);
	      DEFINE_STRING(BGl_string3593z00zzast_removez00,
		BgL_bgl_string3593za700za7za7a3651za7, "         removing ", 18);
	      DEFINE_STRING(BGl_string3594z00zzast_removez00,
		BgL_bgl_string3594za700za7za7a3652za7, ")", 1);
	      DEFINE_STRING(BGl_string3595z00zzast_removez00,
		BgL_bgl_string3595za700za7za7a3653za7, " (import: ", 10);
	      DEFINE_STRING(BGl_string3596z00zzast_removez00,
		BgL_bgl_string3596za700za7za7a3654za7, " removed ", 9);
	      DEFINE_STRING(BGl_string3597z00zzast_removez00,
		BgL_bgl_string3597za700za7za7a3655za7, "        ", 8);
	      DEFINE_STRING(BGl_string3598z00zzast_removez00,
		BgL_bgl_string3598za700za7za7a3656za7, "node-remove!", 12);
	      DEFINE_STRING(BGl_string3599z00zzast_removez00,
		BgL_bgl_string3599za700za7za7a3657za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string3620z00zzast_removez00,
		BgL_bgl_string3620za700za7za7a3658za7, "ast_remove", 10);
	      DEFINE_STRING(BGl_string3621z00zzast_removez00,
		BgL_bgl_string3621za700za7za7a3659za7,
		"read node-remove!-default3254 done no-remove export ok now ", 59);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long
		BgL_checksumz00_2458, char *BgL_fromz00_2459)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_removez00))
				{
					BGl_requirezd2initializa7ationz75zzast_removez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_removez00();
					BGl_cnstzd2initzd2zzast_removez00();
					BGl_importedzd2moduleszd2initz00zzast_removez00();
					BGl_genericzd2initzd2zzast_removez00();
					BGl_methodzd2initzd2zzast_removez00();
					BGl_toplevelzd2initzd2zzast_removez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_removez00()
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_remove");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_remove");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_remove");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_removez00()
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			{	/* Ast/remove.scm 16 */
				obj_t BgL_cportz00_2447;

				BgL_cportz00_2447 =
					bgl_open_input_string(BGl_string3621z00zzast_removez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2448;

					BgL_iz00_2448 = ((long) 6);
				BgL_loopz00_2449:
					if ((BgL_iz00_2448 == ((long) -1)))
						{	/* Ast/remove.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Ast/remove.scm 16 */
							{	/* Ast/remove.scm 16 */
								obj_t BgL_arg3623z00_2451;

								{	/* Ast/remove.scm 16 */

									{	/* Ast/remove.scm 16 */
										obj_t BgL_locationz00_2453;

										BgL_locationz00_2453 = BBOOL(((bool_t) 0));
										{	/* Ast/remove.scm 16 */

											BgL_arg3623z00_2451 =
												BGl_readz00zz__readerz00(BgL_cportz00_2447,
												BgL_locationz00_2453);
										}
									}
								}
								{	/* Ast/remove.scm 16 */
									int BgL_auxz00_2480;

									BgL_auxz00_2480 = (int) (BgL_iz00_2448);
									CNST_TABLE_SET(BgL_auxz00_2480, BgL_arg3623z00_2451);
							}}
							{	/* Ast/remove.scm 16 */
								int BgL_auxz00_2454;

								BgL_auxz00_2454 = (int) ((BgL_iz00_2448 - ((long) 1)));
								{
									long BgL_iz00_2485;

									BgL_iz00_2485 = (long) (BgL_auxz00_2454);
									BgL_iz00_2448 = BgL_iz00_2485;
									goto BgL_loopz00_2449;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_removez00()
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			BGl_za2removedzd2countza2zd2zzast_removez00 = ((long) 0);
			return BUNSPEC;
		}
	}



/* remove-var-from! */
	BGL_EXPORTED_DEF obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t
		BgL_passz00_1, BgL_variablez00_bglt BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 32 */
			{	/* Ast/remove.scm 33 */
				obj_t BgL_oldz00_801;

				BgL_oldz00_801 =
					(((BgL_variablez00_bglt) CREF(BgL_varz00_2))->BgL_removablez00);
				if ((BgL_oldz00_801 == CNST_TABLE_REF(((long) 0))))
					{	/* Ast/remove.scm 35 */
						return
							((((BgL_variablez00_bglt) CREF(BgL_varz00_2))->BgL_removablez00) =
							((obj_t) BgL_passz00_1), BUNSPEC);
					}
				else
					{	/* Ast/remove.scm 35 */
						if ((BgL_oldz00_801 == BgL_passz00_1))
							{	/* Ast/remove.scm 38 */
								return CNST_TABLE_REF(((long) 1));
							}
						else
							{	/* Ast/remove.scm 38 */
								if ((BgL_passz00_1 == CNST_TABLE_REF(((long) 0))))
									{	/* Ast/remove.scm 40 */
										return CNST_TABLE_REF(((long) 1));
									}
								else
									{	/* Ast/remove.scm 43 */
										obj_t BgL_arg3302z00_807;

										{	/* Ast/remove.scm 45 */
											obj_t BgL_arg3303z00_808;

											obj_t BgL_arg3305z00_810;

											{	/* Ast/remove.scm 45 */
												obj_t BgL_res3532z00_1476;

												{	/* Ast/remove.scm 45 */
													obj_t BgL_symbolz00_1474;

													BgL_symbolz00_1474 = BgL_oldz00_801;
													{	/* Ast/remove.scm 45 */
														obj_t BgL_arg2063z00_1475;

														BgL_arg2063z00_1475 =
															SYMBOL_TO_STRING(BgL_symbolz00_1474);
														BgL_res3532z00_1476 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1475);
													}
												}
												BgL_arg3303z00_808 = BgL_res3532z00_1476;
											}
											{	/* Ast/remove.scm 47 */
												obj_t BgL_res3533z00_1479;

												{	/* Ast/remove.scm 47 */
													obj_t BgL_arg2063z00_1478;

													BgL_arg2063z00_1478 = SYMBOL_TO_STRING(BgL_passz00_1);
													BgL_res3533z00_1479 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2063z00_1478);
												}
												BgL_arg3305z00_810 = BgL_res3533z00_1479;
											}
											BgL_arg3302z00_807 =
												string_append_3(BgL_arg3303z00_808,
												BGl_string3590z00zzast_removez00, BgL_arg3305z00_810);
										}
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string3591z00zzast_removez00,
											BGl_string3592z00zzast_removez00, BgL_arg3302z00_807);
									}
							}
					}
			}
		}
	}



/* _remove-var-from! */
	obj_t BGl__removezd2varzd2fromz12z12zzast_removez00(obj_t BgL_envz00_2377,
		obj_t BgL_passz00_2378, obj_t BgL_varz00_2379)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 32 */
			return
				BGl_removezd2varzd2fromz12z12zzast_removez00(BgL_passz00_2378,
				(BgL_variablez00_bglt) (BgL_varz00_2379));
		}
	}



/* remove-var */
	BGL_EXPORTED_DEF obj_t BGl_removezd2varzd2zzast_removez00(obj_t BgL_passz00_3,
		obj_t BgL_globalsz00_4)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 57 */
			BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_4);
			{
				obj_t BgL_globalsz00_813;

				obj_t BgL_resz00_814;

				bool_t BgL_fixpz00_815;

				BgL_globalsz00_813 = BgL_globalsz00_4;
				BgL_resz00_814 = BNIL;
				BgL_fixpz00_815 = ((bool_t) 1);
			BgL_zc3anonymousza33306ze3z83_816:
				if (NULLP(BgL_globalsz00_813))
					{	/* Ast/remove.scm 66 */
						obj_t BgL_nglobalsz00_818;

						BgL_nglobalsz00_818 = bgl_reverse_bang(BgL_resz00_814);
						BGl_occurzd2varzd2zzast_occurz00(BgL_nglobalsz00_818);
						if (BgL_fixpz00_815)
							{	/* Ast/remove.scm 69 */
								return BgL_nglobalsz00_818;
							}
						else
							{
								bool_t BgL_fixpz00_2515;

								obj_t BgL_resz00_2514;

								obj_t BgL_globalsz00_2513;

								BgL_globalsz00_2513 = BgL_nglobalsz00_818;
								BgL_resz00_2514 = BNIL;
								BgL_fixpz00_2515 = ((bool_t) 1);
								BgL_fixpz00_815 = BgL_fixpz00_2515;
								BgL_resz00_814 = BgL_resz00_2514;
								BgL_globalsz00_813 = BgL_globalsz00_2513;
								goto BgL_zc3anonymousza33306ze3z83_816;
							}
					}
				else
					{	/* Ast/remove.scm 72 */
						obj_t BgL_globalz00_819;

						BgL_globalz00_819 = CAR(BgL_globalsz00_813);
						{	/* Ast/remove.scm 75 */
							bool_t BgL_testz00_2517;

							{	/* Ast/remove.scm 75 */
								obj_t BgL_auxz00_2518;

								{
									BgL_globalz00_bglt BgL_auxz00_2519;

									BgL_auxz00_2519 = (BgL_globalz00_bglt) (BgL_globalz00_819);
									BgL_auxz00_2518 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_2519))->
										BgL_importz00);
								}
								BgL_testz00_2517 =
									(BgL_auxz00_2518 == CNST_TABLE_REF(((long) 2)));
							}
							if (BgL_testz00_2517)
								{	/* Ast/remove.scm 75 */
									BGl_globalzd2removezd2sfunz12z12zzast_removez00
										(BgL_globalz00_819);
									{	/* Ast/remove.scm 77 */
										obj_t BgL_arg3309z00_821;

										obj_t BgL_arg3310z00_822;

										BgL_arg3309z00_821 = CDR(BgL_globalsz00_813);
										BgL_arg3310z00_822 =
											MAKE_PAIR(BgL_globalz00_819, BgL_resz00_814);
										{
											obj_t BgL_resz00_2528;

											obj_t BgL_globalsz00_2527;

											BgL_globalsz00_2527 = BgL_arg3309z00_821;
											BgL_resz00_2528 = BgL_arg3310z00_822;
											BgL_resz00_814 = BgL_resz00_2528;
											BgL_globalsz00_813 = BgL_globalsz00_2527;
											goto BgL_zc3anonymousza33306ze3z83_816;
										}
									}
								}
							else
								{	/* Ast/remove.scm 80 */
									bool_t BgL_testz00_2529;

									{	/* Ast/remove.scm 80 */
										bool_t BgL_testz00_2530;

										{	/* Ast/remove.scm 80 */
											obj_t BgL_auxz00_2531;

											{
												BgL_variablez00_bglt BgL_auxz00_2532;

												BgL_auxz00_2532 =
													(BgL_variablez00_bglt) (BgL_globalz00_819);
												BgL_auxz00_2531 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2532))->
													BgL_removablez00);
											}
											BgL_testz00_2530 = (BgL_auxz00_2531 == BgL_passz00_3);
										}
										if (BgL_testz00_2530)
											{	/* Ast/remove.scm 80 */
												BgL_testz00_2529 = ((bool_t) 1);
											}
										else
											{	/* Ast/remove.scm 80 */
												if (PAIRP(BgL_passz00_3))
													{	/* Ast/remove.scm 82 */
														obj_t BgL_auxz00_2538;

														{	/* Ast/remove.scm 82 */
															obj_t BgL_auxz00_2539;

															{
																BgL_variablez00_bglt BgL_auxz00_2540;

																BgL_auxz00_2540 =
																	(BgL_variablez00_bglt) (BgL_globalz00_819);
																BgL_auxz00_2539 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2540))->BgL_removablez00);
															}
															BgL_auxz00_2538 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_2539, BgL_passz00_3);
														}
														BgL_testz00_2529 = CBOOL(BgL_auxz00_2538);
													}
												else
													{	/* Ast/remove.scm 81 */
														BgL_testz00_2529 = ((bool_t) 0);
													}
											}
									}
									if (BgL_testz00_2529)
										{	/* Ast/remove.scm 83 */
											bool_t BgL_testz00_2545;

											{	/* Ast/remove.scm 83 */
												long BgL_auxz00_2546;

												{
													BgL_variablez00_bglt BgL_auxz00_2547;

													BgL_auxz00_2547 =
														(BgL_variablez00_bglt) (BgL_globalz00_819);
													BgL_auxz00_2546 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2547))->
														BgL_occurrencez00);
												}
												BgL_testz00_2545 = (BgL_auxz00_2546 <= ((long) 0));
											}
											if (BgL_testz00_2545)
												{	/* Ast/remove.scm 83 */
													{	/* Ast/remove.scm 86 */
														obj_t BgL_arg3315z00_827;

														BgL_arg3315z00_827 =
															BGl_shapez00zztools_shapez00(BgL_globalz00_819);
														{	/* Ast/remove.scm 86 */
															obj_t BgL_list3316z00_828;

															{	/* Ast/remove.scm 86 */
																obj_t BgL_arg3317z00_829;

																{	/* Ast/remove.scm 86 */
																	obj_t BgL_arg3318z00_830;

																	BgL_arg3318z00_830 =
																		MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																		BNIL);
																	BgL_arg3317z00_829 =
																		MAKE_PAIR(BgL_arg3315z00_827,
																		BgL_arg3318z00_830);
																}
																BgL_list3316z00_828 =
																	MAKE_PAIR(BGl_string3593z00zzast_removez00,
																	BgL_arg3317z00_829);
															}
															BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																BgL_list3316z00_828);
													}}
													{
														bool_t BgL_fixpz00_2560;

														obj_t BgL_globalsz00_2558;

														BgL_globalsz00_2558 = CDR(BgL_globalsz00_813);
														BgL_fixpz00_2560 = ((bool_t) 0);
														BgL_fixpz00_815 = BgL_fixpz00_2560;
														BgL_globalsz00_813 = BgL_globalsz00_2558;
														goto BgL_zc3anonymousza33306ze3z83_816;
													}
												}
											else
												{	/* Ast/remove.scm 83 */
													{	/* Ast/remove.scm 90 */
														BgL_variablez00_bglt BgL_obj1622z00_1491;

														obj_t BgL_val1621z00_1492;

														BgL_obj1622z00_1491 =
															(BgL_variablez00_bglt) (BgL_globalz00_819);
														BgL_val1621z00_1492 = CNST_TABLE_REF(((long) 0));
														((((BgL_variablez00_bglt)
																	CREF(BgL_obj1622z00_1491))->
																BgL_removablez00) =
															((obj_t) BgL_val1621z00_1492), BUNSPEC);
													}
													BGl_globalzd2removezd2sfunz12z12zzast_removez00
														(BgL_globalz00_819);
													{	/* Ast/remove.scm 92 */
														obj_t BgL_arg3320z00_832;

														obj_t BgL_arg3321z00_833;

														BgL_arg3320z00_832 = CDR(BgL_globalsz00_813);
														BgL_arg3321z00_833 =
															MAKE_PAIR(BgL_globalz00_819, BgL_resz00_814);
														{
															obj_t BgL_resz00_2568;

															obj_t BgL_globalsz00_2567;

															BgL_globalsz00_2567 = BgL_arg3320z00_832;
															BgL_resz00_2568 = BgL_arg3321z00_833;
															BgL_resz00_814 = BgL_resz00_2568;
															BgL_globalsz00_813 = BgL_globalsz00_2567;
															goto BgL_zc3anonymousza33306ze3z83_816;
														}
													}
												}
										}
									else
										{	/* Ast/remove.scm 93 */
											bool_t BgL_testz00_2569;

											{	/* Ast/remove.scm 93 */
												bool_t BgL_testz00_2570;

												{	/* Ast/remove.scm 93 */
													long BgL_auxz00_2571;

													{
														BgL_variablez00_bglt BgL_auxz00_2572;

														BgL_auxz00_2572 =
															(BgL_variablez00_bglt) (BgL_globalz00_819);
														BgL_auxz00_2571 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2572))->
															BgL_occurrencez00);
													}
													BgL_testz00_2570 = (BgL_auxz00_2571 <= ((long) 0));
												}
												if (BgL_testz00_2570)
													{	/* Ast/remove.scm 94 */
														bool_t BgL_testz00_2576;

														{	/* Ast/remove.scm 94 */
															obj_t BgL_auxz00_2577;

															{
																BgL_variablez00_bglt BgL_auxz00_2578;

																BgL_auxz00_2578 =
																	(BgL_variablez00_bglt) (BgL_globalz00_819);
																BgL_auxz00_2577 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2578))->BgL_removablez00);
															}
															BgL_testz00_2576 =
																(BgL_auxz00_2577 == CNST_TABLE_REF(((long) 0)));
														}
														if (BgL_testz00_2576)
															{	/* Ast/remove.scm 94 */
																if (
																	(BgL_passz00_3 == CNST_TABLE_REF(((long) 3))))
																	{	/* Ast/remove.scm 95 */
																		BgL_testz00_2569 = ((bool_t) 0);
																	}
																else
																	{	/* Ast/remove.scm 95 */
																		BgL_testz00_2569 = ((bool_t) 1);
																	}
															}
														else
															{	/* Ast/remove.scm 94 */
																BgL_testz00_2569 = ((bool_t) 0);
															}
													}
												else
													{	/* Ast/remove.scm 93 */
														BgL_testz00_2569 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_2569)
												{	/* Ast/remove.scm 93 */
													{	/* Ast/remove.scm 97 */
														obj_t BgL_arg3329z00_839;

														obj_t BgL_arg3332z00_842;

														BgL_arg3329z00_839 =
															BGl_shapez00zztools_shapez00(BgL_globalz00_819);
														{
															BgL_globalz00_bglt BgL_auxz00_2587;

															BgL_auxz00_2587 =
																(BgL_globalz00_bglt) (BgL_globalz00_819);
															BgL_arg3332z00_842 =
																(((BgL_globalz00_bglt) CREF(BgL_auxz00_2587))->
																BgL_importz00);
														}
														{	/* Ast/remove.scm 97 */
															obj_t BgL_list3334z00_844;

															{	/* Ast/remove.scm 97 */
																obj_t BgL_arg3335z00_845;

																{	/* Ast/remove.scm 97 */
																	obj_t BgL_arg3336z00_846;

																	{	/* Ast/remove.scm 97 */
																		obj_t BgL_arg3337z00_847;

																		{	/* Ast/remove.scm 97 */
																			obj_t BgL_arg3338z00_848;

																			{	/* Ast/remove.scm 97 */
																				obj_t BgL_arg3339z00_849;

																				{	/* Ast/remove.scm 97 */
																					obj_t BgL_arg3340z00_850;

																					BgL_arg3340z00_850 =
																						MAKE_PAIR(BCHAR(((unsigned char)
																								'\n')), BNIL);
																					BgL_arg3339z00_849 =
																						MAKE_PAIR
																						(BGl_string3594z00zzast_removez00,
																						BgL_arg3340z00_850);
																				}
																				BgL_arg3338z00_848 =
																					MAKE_PAIR(BgL_arg3332z00_842,
																					BgL_arg3339z00_849);
																			}
																			BgL_arg3337z00_847 =
																				MAKE_PAIR
																				(BGl_string3595z00zzast_removez00,
																				BgL_arg3338z00_848);
																		}
																		BgL_arg3336z00_846 =
																			MAKE_PAIR
																			(BGl_string3596z00zzast_removez00,
																			BgL_arg3337z00_847);
																	}
																	BgL_arg3335z00_845 =
																		MAKE_PAIR(BgL_arg3329z00_839,
																		BgL_arg3336z00_846);
																}
																BgL_list3334z00_844 =
																	MAKE_PAIR(BGl_string3597z00zzast_removez00,
																	BgL_arg3335z00_845);
															}
															BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																BgL_list3334z00_844);
													}}
													{
														bool_t BgL_fixpz00_2602;

														obj_t BgL_globalsz00_2600;

														BgL_globalsz00_2600 = CDR(BgL_globalsz00_813);
														BgL_fixpz00_2602 = ((bool_t) 0);
														BgL_fixpz00_815 = BgL_fixpz00_2602;
														BgL_globalsz00_813 = BgL_globalsz00_2600;
														goto BgL_zc3anonymousza33306ze3z83_816;
													}
												}
											else
												{	/* Ast/remove.scm 93 */
													BGl_globalzd2removezd2sfunz12z12zzast_removez00
														(BgL_globalz00_819);
													{	/* Ast/remove.scm 104 */
														obj_t BgL_arg3342z00_852;

														obj_t BgL_arg3343z00_853;

														BgL_arg3342z00_852 = CDR(BgL_globalsz00_813);
														BgL_arg3343z00_853 =
															MAKE_PAIR(BgL_globalz00_819, BgL_resz00_814);
														{
															obj_t BgL_resz00_2607;

															obj_t BgL_globalsz00_2606;

															BgL_globalsz00_2606 = BgL_arg3342z00_852;
															BgL_resz00_2607 = BgL_arg3343z00_853;
															BgL_resz00_814 = BgL_resz00_2607;
															BgL_globalsz00_813 = BgL_globalsz00_2606;
															goto BgL_zc3anonymousza33306ze3z83_816;
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



/* _remove-var */
	obj_t BGl__removezd2varzd2zzast_removez00(obj_t BgL_envz00_2380,
		obj_t BgL_passz00_2381, obj_t BgL_globalsz00_2382)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 57 */
			return
				BGl_removezd2varzd2zzast_removez00(BgL_passz00_2381,
				BgL_globalsz00_2382);
		}
	}



/* global-remove-sfun! */
	obj_t BGl_globalzd2removezd2sfunz12z12zzast_removez00(obj_t BgL_globalz00_5)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 109 */
		BGl_globalzd2removezd2sfunz12z12zzast_removez00:
			{	/* Ast/remove.scm 110 */
				BgL_valuez00_bglt BgL_sfunz00_868;

				{
					BgL_variablez00_bglt BgL_auxz00_2609;

					BgL_auxz00_2609 = (BgL_variablez00_bglt) (BgL_globalz00_5);
					BgL_sfunz00_868 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_2609))->BgL_valuez00);
				}
				BGl_za2removedzd2countza2zd2zzast_removez00 = ((long) 0);
				{	/* Ast/remove.scm 112 */
					obj_t BgL_arg3356z00_869;

					{	/* Ast/remove.scm 112 */
						obj_t BgL_arg3357z00_870;

						{
							BgL_sfunz00_bglt BgL_auxz00_2612;

							BgL_auxz00_2612 = (BgL_sfunz00_bglt) (BgL_sfunz00_868);
							BgL_arg3357z00_870 =
								(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2612))->BgL_bodyz00);
						}
						{	/* Ast/remove.scm 112 */
							BgL_nodez00_bglt BgL_nodez00_1503;

							BgL_nodez00_1503 = (BgL_nodez00_bglt) (BgL_arg3357z00_870);
							{	/* Ast/remove.scm 112 */
								obj_t BgL_method3256z00_1504;

								{	/* Ast/remove.scm 112 */
									BgL_objectz00_bglt BgL_objz00_1505;

									BgL_objz00_1505 = (BgL_objectz00_bglt) (BgL_nodez00_1503);
									{	/* Ast/remove.scm 112 */
										long BgL_objzd2classzd2numz00_1506;

										BgL_objzd2classzd2numz00_1506 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1505);
										{	/* Ast/remove.scm 112 */
											obj_t BgL_arg2643z00_1507;

											BgL_arg2643z00_1507 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 112 */
												obj_t BgL_arrayz00_1509;

												int BgL_offsetz00_1510;

												BgL_arrayz00_1509 = BgL_arg2643z00_1507;
												BgL_offsetz00_1510 =
													(int) (BgL_objzd2classzd2numz00_1506);
												{	/* Ast/remove.scm 112 */
													long BgL_offsetz00_1511;

													BgL_offsetz00_1511 =
														((long) (BgL_offsetz00_1510) - OBJECT_TYPE);
													{	/* Ast/remove.scm 112 */
														long BgL_modz00_1512;

														{	/* Ast/remove.scm 112 */
															int BgL_arg2645z00_1513;

															BgL_arg2645z00_1513 = (int) (((long) 16));
															{	/* Ast/remove.scm 112 */
																long BgL_auxz00_2624;

																BgL_auxz00_2624 = (long) (BgL_arg2645z00_1513);
																BgL_modz00_1512 =
																	(BgL_offsetz00_1511 / BgL_auxz00_2624);
														}}
														{	/* Ast/remove.scm 112 */
															long BgL_restz00_1514;

															{	/* Ast/remove.scm 112 */
																int BgL_arg2644z00_1515;

																BgL_arg2644z00_1515 = (int) (((long) 16));
																{	/* Ast/remove.scm 112 */
																	long BgL_auxz00_2628;

																	BgL_auxz00_2628 =
																		(long) (BgL_arg2644z00_1515);
																	BgL_restz00_1514 =
																		(BgL_offsetz00_1511 % BgL_auxz00_2628);
															}}
															{	/* Ast/remove.scm 112 */

																BgL_method3256z00_1504 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1509,
																		(int) (BgL_modz00_1512)),
																	(int) (BgL_restz00_1514));
								}}}}}}}}
								BgL_arg3356z00_869 =
									PROCEDURE_ENTRY(BgL_method3256z00_1504)
									(BgL_method3256z00_1504, (obj_t) (BgL_nodez00_1503), BEOA);
					}}}
					{
						BgL_sfunz00_bglt BgL_auxz00_2638;

						BgL_auxz00_2638 = (BgL_sfunz00_bglt) (BgL_sfunz00_868);
						((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2638))->BgL_bodyz00) =
							((obj_t) BgL_arg3356z00_869), BUNSPEC);
				}}
				{	/* Ast/remove.scm 113 */
					bool_t BgL_testz00_2641;

					if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >= ((long) 2)))
						{	/* Ast/remove.scm 113 */
							BgL_testz00_2641 =
								(BGl_za2removedzd2countza2zd2zzast_removez00 > ((long) 0));
						}
					else
						{	/* Ast/remove.scm 113 */
							BgL_testz00_2641 = ((bool_t) 0);
						}
					if (BgL_testz00_2641)
						{	/* Ast/remove.scm 113 */
							{	/* Ast/remove.scm 116 */
								obj_t BgL_arg3359z00_872;

								{	/* Ast/remove.scm 116 */
									BgL_sfunz00_bglt BgL_obj1884z00_1536;

									{	/* Ast/remove.scm 116 */
										BgL_variablez00_bglt BgL_obj1611z00_1535;

										BgL_obj1611z00_1535 =
											(BgL_variablez00_bglt) (BgL_globalz00_5);
										BgL_obj1884z00_1536 =
											(BgL_sfunz00_bglt) (
											(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_1535))->
												BgL_valuez00));
									}
									BgL_arg3359z00_872 =
										(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_1536))->
										BgL_bodyz00);
								}
								BGl_occurzd2nodezd2inz12z12zzast_occurz00(
									(BgL_nodez00_bglt) (BgL_arg3359z00_872),
									(BgL_globalz00_bglt) (BgL_globalz00_5));
							}
							{

								goto BGl_globalzd2removezd2sfunz12z12zzast_removez00;
							}
						}
					else
						{	/* Ast/remove.scm 113 */
							return BgL_globalz00_5;
						}
				}
			}
		}
	}



/* node-remove*! */
	obj_t BGl_nodezd2removeza2z12z62zzast_removez00(obj_t BgL_nodeza2za2_28)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 327 */
		BGl_nodezd2removeza2z12z62zzast_removez00:
			if (NULLP(BgL_nodeza2za2_28))
				{	/* Ast/remove.scm 328 */
					return CNST_TABLE_REF(((long) 4));
				}
			else
				{	/* Ast/remove.scm 328 */
					{	/* Ast/remove.scm 331 */
						obj_t BgL_arg3363z00_876;

						{	/* Ast/remove.scm 331 */
							obj_t BgL_arg3364z00_877;

							BgL_arg3364z00_877 = CAR(BgL_nodeza2za2_28);
							{	/* Ast/remove.scm 331 */
								BgL_nodez00_bglt BgL_nodez00_1539;

								BgL_nodez00_1539 = (BgL_nodez00_bglt) (BgL_arg3364z00_877);
								{	/* Ast/remove.scm 331 */
									obj_t BgL_method3256z00_1540;

									{	/* Ast/remove.scm 331 */
										BgL_objectz00_bglt BgL_objz00_1541;

										BgL_objz00_1541 = (BgL_objectz00_bglt) (BgL_nodez00_1539);
										{	/* Ast/remove.scm 331 */
											long BgL_objzd2classzd2numz00_1542;

											BgL_objzd2classzd2numz00_1542 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1541);
											{	/* Ast/remove.scm 331 */
												obj_t BgL_arg2643z00_1543;

												BgL_arg2643z00_1543 =
													PROCEDURE_REF
													(BGl_nodezd2removez12zd2envz12zzast_removez00,
													(int) (((long) 1)));
												{	/* Ast/remove.scm 331 */
													obj_t BgL_arrayz00_1545;

													int BgL_offsetz00_1546;

													BgL_arrayz00_1545 = BgL_arg2643z00_1543;
													BgL_offsetz00_1546 =
														(int) (BgL_objzd2classzd2numz00_1542);
													{	/* Ast/remove.scm 331 */
														long BgL_offsetz00_1547;

														BgL_offsetz00_1547 =
															((long) (BgL_offsetz00_1546) - OBJECT_TYPE);
														{	/* Ast/remove.scm 331 */
															long BgL_modz00_1548;

															{	/* Ast/remove.scm 331 */
																int BgL_arg2645z00_1549;

																BgL_arg2645z00_1549 = (int) (((long) 16));
																{	/* Ast/remove.scm 331 */
																	long BgL_auxz00_2666;

																	BgL_auxz00_2666 =
																		(long) (BgL_arg2645z00_1549);
																	BgL_modz00_1548 =
																		(BgL_offsetz00_1547 / BgL_auxz00_2666);
															}}
															{	/* Ast/remove.scm 331 */
																long BgL_restz00_1550;

																{	/* Ast/remove.scm 331 */
																	int BgL_arg2644z00_1551;

																	BgL_arg2644z00_1551 = (int) (((long) 16));
																	{	/* Ast/remove.scm 331 */
																		long BgL_auxz00_2670;

																		BgL_auxz00_2670 =
																			(long) (BgL_arg2644z00_1551);
																		BgL_restz00_1550 =
																			(BgL_offsetz00_1547 % BgL_auxz00_2670);
																}}
																{	/* Ast/remove.scm 331 */

																	BgL_method3256z00_1540 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1545,
																			(int) (BgL_modz00_1548)),
																		(int) (BgL_restz00_1550));
									}}}}}}}}
									BgL_arg3363z00_876 =
										PROCEDURE_ENTRY(BgL_method3256z00_1540)
										(BgL_method3256z00_1540, (obj_t) (BgL_nodez00_1539), BEOA);
						}}}
						SET_CAR(BgL_nodeza2za2_28, BgL_arg3363z00_876);
					}
					{
						obj_t BgL_nodeza2za2_2681;

						BgL_nodeza2za2_2681 = CDR(BgL_nodeza2za2_28);
						BgL_nodeza2za2_28 = BgL_nodeza2za2_2681;
						goto BGl_nodezd2removeza2z12z62zzast_removez00;
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_removez00()
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_nodezd2removez12zd2default3254zd2envzc0zzast_removez00,
				BGl_nodez00zzast_nodez00, BGl_string3598z00zzast_removez00);
		}
	}



/* node-remove! */
	BGL_EXPORTED_DEF obj_t BGl_nodezd2removez12zc0zzast_removez00(BgL_nodez00_bglt
		BgL_nodez00_6)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 123 */
			{	/* Ast/remove.scm 123 */
				obj_t BgL_method3256z00_1568;

				{	/* Ast/remove.scm 123 */
					BgL_objectz00_bglt BgL_objz00_1569;

					BgL_objz00_1569 = (BgL_objectz00_bglt) (BgL_nodez00_6);
					{	/* Ast/remove.scm 123 */
						long BgL_objzd2classzd2numz00_1570;

						BgL_objzd2classzd2numz00_1570 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_1569);
						{	/* Ast/remove.scm 123 */
							obj_t BgL_arg2643z00_1571;

							BgL_arg2643z00_1571 =
								PROCEDURE_REF(BGl_nodezd2removez12zd2envz12zzast_removez00,
								(int) (((long) 1)));
							{	/* Ast/remove.scm 123 */
								obj_t BgL_arrayz00_1573;

								int BgL_offsetz00_1574;

								BgL_arrayz00_1573 = BgL_arg2643z00_1571;
								BgL_offsetz00_1574 = (int) (BgL_objzd2classzd2numz00_1570);
								{	/* Ast/remove.scm 123 */
									long BgL_offsetz00_1575;

									BgL_offsetz00_1575 =
										((long) (BgL_offsetz00_1574) - OBJECT_TYPE);
									{	/* Ast/remove.scm 123 */
										long BgL_modz00_1576;

										{	/* Ast/remove.scm 123 */
											int BgL_arg2645z00_1577;

											BgL_arg2645z00_1577 = (int) (((long) 16));
											{	/* Ast/remove.scm 123 */
												long BgL_auxz00_2692;

												BgL_auxz00_2692 = (long) (BgL_arg2645z00_1577);
												BgL_modz00_1576 =
													(BgL_offsetz00_1575 / BgL_auxz00_2692);
										}}
										{	/* Ast/remove.scm 123 */
											long BgL_restz00_1578;

											{	/* Ast/remove.scm 123 */
												int BgL_arg2644z00_1579;

												BgL_arg2644z00_1579 = (int) (((long) 16));
												{	/* Ast/remove.scm 123 */
													long BgL_auxz00_2696;

													BgL_auxz00_2696 = (long) (BgL_arg2644z00_1579);
													BgL_restz00_1578 =
														(BgL_offsetz00_1575 % BgL_auxz00_2696);
											}}
											{	/* Ast/remove.scm 123 */

												BgL_method3256z00_1568 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_1573,
														(int) (BgL_modz00_1576)), (int) (BgL_restz00_1578));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3256z00_1568) (BgL_method3256z00_1568,
					(obj_t) (BgL_nodez00_6), BEOA);
			}
		}
	}



/* _node-remove! */
	obj_t BGl__nodezd2removez12zc0zzast_removez00(obj_t BgL_envz00_2383,
		obj_t BgL_nodez00_2384)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 123 */
			return
				BGl_nodezd2removez12zc0zzast_removez00(
				(BgL_nodez00_bglt) (BgL_nodez00_2384));
		}
	}



/* node-remove!-default3254 */
	BgL_nodez00_bglt
		BGl_nodezd2removez12zd2default3254z12zzast_removez00(BgL_nodez00_bglt
		BgL_nodez00_7)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			return
				(BgL_nodez00_bglt) (BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 5)),
					BGl_string3599z00zzast_removez00, (obj_t) (BgL_nodez00_7)));
		}
	}



/* _node-remove!-default3254 */
	obj_t BGl__nodezd2removez12zd2default3254z12zzast_removez00(obj_t
		BgL_envz00_2385, obj_t BgL_nodez00_2386)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			return
				(obj_t) (BGl_nodezd2removez12zd2default3254z12zzast_removez00(
					(BgL_nodez00_bglt) (BgL_nodez00_2386)));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_removez00()
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_atomz00zzast_nodez00,
				BGl_proc3600z00zzast_removez00, BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_varz00zzast_nodez00,
				BGl_proc3601z00zzast_removez00, BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_kwotez00zzast_nodez00, BGl_proc3602z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_sequencez00zzast_nodez00, BGl_proc3603z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_appz00zzast_nodez00,
				BGl_proc3604z00zzast_removez00, BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3605z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_funcallz00zzast_nodez00, BGl_proc3606z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_externz00zzast_nodez00, BGl_proc3607z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_castz00zzast_nodez00,
				BGl_proc3608z00zzast_removez00, BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_setqz00zzast_nodez00,
				BGl_proc3609z00zzast_removez00, BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3610z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00, BGl_failz00zzast_nodez00,
				BGl_proc3611z00zzast_removez00, BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_selectz00zzast_nodez00, BGl_proc3612z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3613z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc3614z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3615z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3616z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3617z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3618z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2removez12zd2envz12zzast_removez00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3619z00zzast_removez00,
				BGl_string3598z00zzast_removez00);
		}
	}



/* node-remove!-jump-ex3296 */
	obj_t BGl_nodezd2removez12zd2jumpzd2ex3296zc0zzast_removez00(obj_t
		BgL_envz00_2407, obj_t BgL_nodez00_2408)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 319 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1462;

				{	/* Ast/remove.scm 320 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_2735;

					BgL_nodez00_1462 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2408);
					{	/* Ast/remove.scm 320 */
						obj_t BgL_arg3527z00_1465;

						{	/* Ast/remove.scm 320 */
							BgL_nodez00_bglt BgL_arg3528z00_1466;

							BgL_arg3528z00_1466 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1462))->
								BgL_exitz00);
							{	/* Ast/remove.scm 320 */
								obj_t BgL_method3256z00_2321;

								{	/* Ast/remove.scm 320 */
									BgL_objectz00_bglt BgL_objz00_2322;

									BgL_objz00_2322 = (BgL_objectz00_bglt) (BgL_arg3528z00_1466);
									{	/* Ast/remove.scm 320 */
										long BgL_objzd2classzd2numz00_2323;

										BgL_objzd2classzd2numz00_2323 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2322);
										{	/* Ast/remove.scm 320 */
											obj_t BgL_arg2643z00_2324;

											BgL_arg2643z00_2324 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 320 */
												obj_t BgL_arrayz00_2326;

												int BgL_offsetz00_2327;

												BgL_arrayz00_2326 = BgL_arg2643z00_2324;
												BgL_offsetz00_2327 =
													(int) (BgL_objzd2classzd2numz00_2323);
												{	/* Ast/remove.scm 320 */
													long BgL_offsetz00_2328;

													BgL_offsetz00_2328 =
														((long) (BgL_offsetz00_2327) - OBJECT_TYPE);
													{	/* Ast/remove.scm 320 */
														long BgL_modz00_2329;

														{	/* Ast/remove.scm 320 */
															int BgL_arg2645z00_2330;

															BgL_arg2645z00_2330 = (int) (((long) 16));
															{	/* Ast/remove.scm 320 */
																long BgL_auxz00_2745;

																BgL_auxz00_2745 = (long) (BgL_arg2645z00_2330);
																BgL_modz00_2329 =
																	(BgL_offsetz00_2328 / BgL_auxz00_2745);
														}}
														{	/* Ast/remove.scm 320 */
															long BgL_restz00_2331;

															{	/* Ast/remove.scm 320 */
																int BgL_arg2644z00_2332;

																BgL_arg2644z00_2332 = (int) (((long) 16));
																{	/* Ast/remove.scm 320 */
																	long BgL_auxz00_2749;

																	BgL_auxz00_2749 =
																		(long) (BgL_arg2644z00_2332);
																	BgL_restz00_2331 =
																		(BgL_offsetz00_2328 % BgL_auxz00_2749);
															}}
															{	/* Ast/remove.scm 320 */

																BgL_method3256z00_2321 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2326,
																		(int) (BgL_modz00_2329)),
																	(int) (BgL_restz00_2331));
								}}}}}}}}
								BgL_arg3527z00_1465 =
									PROCEDURE_ENTRY(BgL_method3256z00_2321)
									(BgL_method3256z00_2321, (obj_t) (BgL_arg3528z00_1466), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_2759;

							BgL_auxz00_2759 = (BgL_nodez00_bglt) (BgL_arg3527z00_1465);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1462))->
									BgL_exitz00) = ((BgL_nodez00_bglt) BgL_auxz00_2759), BUNSPEC);
					}}
					{	/* Ast/remove.scm 321 */
						obj_t BgL_arg3529z00_1467;

						{	/* Ast/remove.scm 321 */
							BgL_nodez00_bglt BgL_arg3530z00_1468;

							BgL_arg3530z00_1468 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1462))->
								BgL_valuez00);
							{	/* Ast/remove.scm 321 */
								obj_t BgL_method3256z00_2350;

								{	/* Ast/remove.scm 321 */
									BgL_objectz00_bglt BgL_objz00_2351;

									BgL_objz00_2351 = (BgL_objectz00_bglt) (BgL_arg3530z00_1468);
									{	/* Ast/remove.scm 321 */
										long BgL_objzd2classzd2numz00_2352;

										BgL_objzd2classzd2numz00_2352 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2351);
										{	/* Ast/remove.scm 321 */
											obj_t BgL_arg2643z00_2353;

											BgL_arg2643z00_2353 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 321 */
												obj_t BgL_arrayz00_2355;

												int BgL_offsetz00_2356;

												BgL_arrayz00_2355 = BgL_arg2643z00_2353;
												BgL_offsetz00_2356 =
													(int) (BgL_objzd2classzd2numz00_2352);
												{	/* Ast/remove.scm 321 */
													long BgL_offsetz00_2357;

													BgL_offsetz00_2357 =
														((long) (BgL_offsetz00_2356) - OBJECT_TYPE);
													{	/* Ast/remove.scm 321 */
														long BgL_modz00_2358;

														{	/* Ast/remove.scm 321 */
															int BgL_arg2645z00_2359;

															BgL_arg2645z00_2359 = (int) (((long) 16));
															{	/* Ast/remove.scm 321 */
																long BgL_auxz00_2771;

																BgL_auxz00_2771 = (long) (BgL_arg2645z00_2359);
																BgL_modz00_2358 =
																	(BgL_offsetz00_2357 / BgL_auxz00_2771);
														}}
														{	/* Ast/remove.scm 321 */
															long BgL_restz00_2360;

															{	/* Ast/remove.scm 321 */
																int BgL_arg2644z00_2361;

																BgL_arg2644z00_2361 = (int) (((long) 16));
																{	/* Ast/remove.scm 321 */
																	long BgL_auxz00_2775;

																	BgL_auxz00_2775 =
																		(long) (BgL_arg2644z00_2361);
																	BgL_restz00_2360 =
																		(BgL_offsetz00_2357 % BgL_auxz00_2775);
															}}
															{	/* Ast/remove.scm 321 */

																BgL_method3256z00_2350 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2355,
																		(int) (BgL_modz00_2358)),
																	(int) (BgL_restz00_2360));
								}}}}}}}}
								BgL_arg3529z00_1467 =
									PROCEDURE_ENTRY(BgL_method3256z00_2350)
									(BgL_method3256z00_2350, (obj_t) (BgL_arg3530z00_1468), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_2785;

							BgL_auxz00_2785 = (BgL_nodez00_bglt) (BgL_arg3529z00_1467);
							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1462))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_2785), BUNSPEC);
					}}
					BgL_auxz00_2735 = BgL_nodez00_1462;
					return (obj_t) (BgL_auxz00_2735);
				}
			}
		}
	}



/* node-remove!-set-ex-3294 */
	obj_t BGl_nodezd2removez12zd2setzd2exzd23294z12zzast_removez00(obj_t
		BgL_envz00_2409, obj_t BgL_nodez00_2410)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 310 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1450;

				BgL_nodez00_1450 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2410);
				{	/* Ast/remove.scm 311 */
					obj_t BgL_arg3519z00_1453;

					{	/* Ast/remove.scm 311 */
						BgL_nodez00_bglt BgL_arg3520z00_1454;

						BgL_arg3520z00_1454 =
							(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
							BgL_bodyz00);
						{	/* Ast/remove.scm 311 */
							obj_t BgL_method3256z00_2286;

							{	/* Ast/remove.scm 311 */
								BgL_objectz00_bglt BgL_objz00_2287;

								BgL_objz00_2287 = (BgL_objectz00_bglt) (BgL_arg3520z00_1454);
								{	/* Ast/remove.scm 311 */
									long BgL_objzd2classzd2numz00_2288;

									BgL_objzd2classzd2numz00_2288 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2287);
									{	/* Ast/remove.scm 311 */
										obj_t BgL_arg2643z00_2289;

										BgL_arg2643z00_2289 =
											PROCEDURE_REF
											(BGl_nodezd2removez12zd2envz12zzast_removez00,
											(int) (((long) 1)));
										{	/* Ast/remove.scm 311 */
											obj_t BgL_arrayz00_2291;

											int BgL_offsetz00_2292;

											BgL_arrayz00_2291 = BgL_arg2643z00_2289;
											BgL_offsetz00_2292 =
												(int) (BgL_objzd2classzd2numz00_2288);
											{	/* Ast/remove.scm 311 */
												long BgL_offsetz00_2293;

												BgL_offsetz00_2293 =
													((long) (BgL_offsetz00_2292) - OBJECT_TYPE);
												{	/* Ast/remove.scm 311 */
													long BgL_modz00_2294;

													{	/* Ast/remove.scm 311 */
														int BgL_arg2645z00_2295;

														BgL_arg2645z00_2295 = (int) (((long) 16));
														{	/* Ast/remove.scm 311 */
															long BgL_auxz00_2799;

															BgL_auxz00_2799 = (long) (BgL_arg2645z00_2295);
															BgL_modz00_2294 =
																(BgL_offsetz00_2293 / BgL_auxz00_2799);
													}}
													{	/* Ast/remove.scm 311 */
														long BgL_restz00_2296;

														{	/* Ast/remove.scm 311 */
															int BgL_arg2644z00_2297;

															BgL_arg2644z00_2297 = (int) (((long) 16));
															{	/* Ast/remove.scm 311 */
																long BgL_auxz00_2803;

																BgL_auxz00_2803 = (long) (BgL_arg2644z00_2297);
																BgL_restz00_2296 =
																	(BgL_offsetz00_2293 % BgL_auxz00_2803);
														}}
														{	/* Ast/remove.scm 311 */

															BgL_method3256z00_2286 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2291,
																	(int) (BgL_modz00_2294)),
																(int) (BgL_restz00_2296));
							}}}}}}}}
							BgL_arg3519z00_1453 =
								PROCEDURE_ENTRY(BgL_method3256z00_2286) (BgL_method3256z00_2286,
								(obj_t) (BgL_arg3520z00_1454), BEOA);
					}}
					{
						BgL_nodez00_bglt BgL_auxz00_2813;

						BgL_auxz00_2813 = (BgL_nodez00_bglt) (BgL_arg3519z00_1453);
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
								BgL_bodyz00) = ((BgL_nodez00_bglt) BgL_auxz00_2813), BUNSPEC);
				}}
				{	/* Ast/remove.scm 312 */
					bool_t BgL_testz00_2816;

					{	/* Ast/remove.scm 312 */
						long BgL_auxz00_2817;

						{	/* Ast/remove.scm 312 */
							BgL_variablez00_bglt BgL_arg3524z00_1458;

							{	/* Ast/remove.scm 312 */
								BgL_varz00_bglt BgL_obj2155z00_2314;

								BgL_obj2155z00_2314 =
									(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
									BgL_varz00);
								BgL_arg3524z00_1458 =
									(((BgL_varz00_bglt) CREF(BgL_obj2155z00_2314))->
									BgL_variablez00);
							}
							BgL_auxz00_2817 =
								(((BgL_variablez00_bglt) CREF(BgL_arg3524z00_1458))->
								BgL_occurrencez00);
						}
						BgL_testz00_2816 = (BgL_auxz00_2817 <= ((long) 0));
					}
					if (BgL_testz00_2816)
						{	/* Ast/remove.scm 312 */
							return
								(obj_t) (
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1450))->
									BgL_bodyz00));
						}
					else
						{	/* Ast/remove.scm 312 */
							return (obj_t) (BgL_nodez00_1450);
						}
				}
			}
		}
	}



/* node-remove!-let-var3292 */
	obj_t BGl_nodezd2removez12zd2letzd2var3292zc0zzast_removez00(obj_t
		BgL_envz00_2411, obj_t BgL_nodez00_2412)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 271 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1409;

				BgL_nodez00_1409 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2412);
				{	/* Ast/remove.scm 273 */
					obj_t BgL_arg3492z00_1413;

					{	/* Ast/remove.scm 273 */
						BgL_nodez00_bglt BgL_arg3493z00_1414;

						BgL_arg3493z00_1414 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->BgL_bodyz00);
						{	/* Ast/remove.scm 273 */
							obj_t BgL_method3256z00_2199;

							{	/* Ast/remove.scm 273 */
								BgL_objectz00_bglt BgL_objz00_2200;

								BgL_objz00_2200 = (BgL_objectz00_bglt) (BgL_arg3493z00_1414);
								{	/* Ast/remove.scm 273 */
									long BgL_objzd2classzd2numz00_2201;

									BgL_objzd2classzd2numz00_2201 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2200);
									{	/* Ast/remove.scm 273 */
										obj_t BgL_arg2643z00_2202;

										BgL_arg2643z00_2202 =
											PROCEDURE_REF
											(BGl_nodezd2removez12zd2envz12zzast_removez00,
											(int) (((long) 1)));
										{	/* Ast/remove.scm 273 */
											obj_t BgL_arrayz00_2204;

											int BgL_offsetz00_2205;

											BgL_arrayz00_2204 = BgL_arg2643z00_2202;
											BgL_offsetz00_2205 =
												(int) (BgL_objzd2classzd2numz00_2201);
											{	/* Ast/remove.scm 273 */
												long BgL_offsetz00_2206;

												BgL_offsetz00_2206 =
													((long) (BgL_offsetz00_2205) - OBJECT_TYPE);
												{	/* Ast/remove.scm 273 */
													long BgL_modz00_2207;

													{	/* Ast/remove.scm 273 */
														int BgL_arg2645z00_2208;

														BgL_arg2645z00_2208 = (int) (((long) 16));
														{	/* Ast/remove.scm 273 */
															long BgL_auxz00_2835;

															BgL_auxz00_2835 = (long) (BgL_arg2645z00_2208);
															BgL_modz00_2207 =
																(BgL_offsetz00_2206 / BgL_auxz00_2835);
													}}
													{	/* Ast/remove.scm 273 */
														long BgL_restz00_2209;

														{	/* Ast/remove.scm 273 */
															int BgL_arg2644z00_2210;

															BgL_arg2644z00_2210 = (int) (((long) 16));
															{	/* Ast/remove.scm 273 */
																long BgL_auxz00_2839;

																BgL_auxz00_2839 = (long) (BgL_arg2644z00_2210);
																BgL_restz00_2209 =
																	(BgL_offsetz00_2206 % BgL_auxz00_2839);
														}}
														{	/* Ast/remove.scm 273 */

															BgL_method3256z00_2199 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2204,
																	(int) (BgL_modz00_2207)),
																(int) (BgL_restz00_2209));
							}}}}}}}}
							BgL_arg3492z00_1413 =
								PROCEDURE_ENTRY(BgL_method3256z00_2199) (BgL_method3256z00_2199,
								(obj_t) (BgL_arg3493z00_1414), BEOA);
					}}
					{
						BgL_nodez00_bglt BgL_auxz00_2849;

						BgL_auxz00_2849 = (BgL_nodez00_bglt) (BgL_arg3492z00_1413);
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_auxz00_2849), BUNSPEC);
				}}
				{
					obj_t BgL_oldzd2bindingszd2_1418;

					obj_t BgL_newzd2bindingszd2_1419;

					{	/* Ast/remove.scm 274 */
						obj_t BgL_arg3494z00_1417;

						BgL_arg3494z00_1417 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->
							BgL_bindingsz00);
						BgL_oldzd2bindingszd2_1418 = BgL_arg3494z00_1417;
						BgL_newzd2bindingszd2_1419 = BNIL;
					BgL_zc3anonymousza33495ze3z83_1420:
						if (NULLP(BgL_oldzd2bindingszd2_1418))
							{	/* Ast/remove.scm 276 */
								if (NULLP(BgL_newzd2bindingszd2_1419))
									{	/* Ast/remove.scm 277 */
										if (
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->
												BgL_removablezf3zf3))
											{	/* Ast/remove.scm 278 */
												return
													(obj_t) (
													(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->
														BgL_bodyz00));
											}
										else
											{	/* Ast/remove.scm 278 */
												((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->
														BgL_bindingsz00) = ((obj_t) BNIL), BUNSPEC);
												return (obj_t) (BgL_nodez00_1409);
											}
									}
								else
									{	/* Ast/remove.scm 277 */
										{
											obj_t BgL_auxz00_2863;

											BgL_auxz00_2863 =
												bgl_reverse_bang(BgL_newzd2bindingszd2_1419);
											((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1409))->
													BgL_bindingsz00) =
												((obj_t) BgL_auxz00_2863), BUNSPEC);
										}
										return (obj_t) (BgL_nodez00_1409);
									}
							}
						else
							{	/* Ast/remove.scm 286 */
								obj_t BgL_bindingz00_1425;

								BgL_bindingz00_1425 = CAR(BgL_oldzd2bindingszd2_1418);
								{	/* Ast/remove.scm 286 */
									obj_t BgL_varz00_1426;

									BgL_varz00_1426 = CAR(BgL_bindingz00_1425);
									{	/* Ast/remove.scm 287 */
										obj_t BgL_valz00_1427;

										{	/* Ast/remove.scm 288 */
											obj_t BgL_arg3517z00_1446;

											BgL_arg3517z00_1446 = CDR(BgL_bindingz00_1425);
											{	/* Ast/remove.scm 288 */
												BgL_nodez00_bglt BgL_nodez00_2238;

												BgL_nodez00_2238 =
													(BgL_nodez00_bglt) (BgL_arg3517z00_1446);
												{	/* Ast/remove.scm 288 */
													obj_t BgL_method3256z00_2239;

													{	/* Ast/remove.scm 288 */
														BgL_objectz00_bglt BgL_objz00_2240;

														BgL_objz00_2240 =
															(BgL_objectz00_bglt) (BgL_nodez00_2238);
														{	/* Ast/remove.scm 288 */
															long BgL_objzd2classzd2numz00_2241;

															BgL_objzd2classzd2numz00_2241 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_2240);
															{	/* Ast/remove.scm 288 */
																obj_t BgL_arg2643z00_2242;

																BgL_arg2643z00_2242 =
																	PROCEDURE_REF
																	(BGl_nodezd2removez12zd2envz12zzast_removez00,
																	(int) (((long) 1)));
																{	/* Ast/remove.scm 288 */
																	obj_t BgL_arrayz00_2244;

																	int BgL_offsetz00_2245;

																	BgL_arrayz00_2244 = BgL_arg2643z00_2242;
																	BgL_offsetz00_2245 =
																		(int) (BgL_objzd2classzd2numz00_2241);
																	{	/* Ast/remove.scm 288 */
																		long BgL_offsetz00_2246;

																		BgL_offsetz00_2246 =
																			(
																			(long) (BgL_offsetz00_2245) -
																			OBJECT_TYPE);
																		{	/* Ast/remove.scm 288 */
																			long BgL_modz00_2247;

																			{	/* Ast/remove.scm 288 */
																				int BgL_arg2645z00_2248;

																				BgL_arg2645z00_2248 =
																					(int) (((long) 16));
																				{	/* Ast/remove.scm 288 */
																					long BgL_auxz00_2879;

																					BgL_auxz00_2879 =
																						(long) (BgL_arg2645z00_2248);
																					BgL_modz00_2247 =
																						(BgL_offsetz00_2246 /
																						BgL_auxz00_2879);
																			}}
																			{	/* Ast/remove.scm 288 */
																				long BgL_restz00_2249;

																				{	/* Ast/remove.scm 288 */
																					int BgL_arg2644z00_2250;

																					BgL_arg2644z00_2250 =
																						(int) (((long) 16));
																					{	/* Ast/remove.scm 288 */
																						long BgL_auxz00_2883;

																						BgL_auxz00_2883 =
																							(long) (BgL_arg2644z00_2250);
																						BgL_restz00_2249 =
																							(BgL_offsetz00_2246 %
																							BgL_auxz00_2883);
																				}}
																				{	/* Ast/remove.scm 288 */

																					BgL_method3256z00_2239 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_2244,
																							(int) (BgL_modz00_2247)),
																						(int) (BgL_restz00_2249));
													}}}}}}}}
													BgL_valz00_1427 =
														PROCEDURE_ENTRY(BgL_method3256z00_2239)
														(BgL_method3256z00_2239, (obj_t) (BgL_nodez00_2238),
														BEOA);
										}}}
										{	/* Ast/remove.scm 288 */

											{	/* Ast/remove.scm 289 */
												bool_t BgL_testz00_2893;

												{	/* Ast/remove.scm 289 */
													bool_t BgL_testz00_2894;

													{	/* Ast/remove.scm 289 */
														long BgL_auxz00_2895;

														{
															BgL_variablez00_bglt BgL_auxz00_2896;

															BgL_auxz00_2896 =
																(BgL_variablez00_bglt) (BgL_varz00_1426);
															BgL_auxz00_2895 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_2896))->BgL_occurrencez00);
														}
														BgL_testz00_2894 = (BgL_auxz00_2895 <= ((long) 0));
													}
													if (BgL_testz00_2894)
														{	/* Ast/remove.scm 289 */
															if (BGl_sidezd2effectzf3z21zzeffect_effectz00(
																	(BgL_nodez00_bglt) (BgL_valz00_1427)))
																{	/* Ast/remove.scm 290 */
																	BgL_testz00_2893 = ((bool_t) 0);
																}
															else
																{	/* Ast/remove.scm 291 */
																	bool_t BgL_testz00_2903;

																	{	/* Ast/remove.scm 291 */
																		obj_t BgL_auxz00_2904;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2905;

																			BgL_auxz00_2905 =
																				(BgL_variablez00_bglt)
																				(BgL_varz00_1426);
																			BgL_auxz00_2904 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2905))->
																				BgL_accessz00);
																		}
																		BgL_testz00_2903 =
																			(BgL_auxz00_2904 ==
																			CNST_TABLE_REF(((long) 6)));
																	}
																	if (BgL_testz00_2903)
																		{	/* Ast/remove.scm 292 */
																			bool_t BgL__ortest_3250z00_1440;

																			{	/* Ast/remove.scm 292 */
																				bool_t BgL_testz00_2910;

																				{
																					BgL_localz00_bglt BgL_auxz00_2911;

																					BgL_auxz00_2911 =
																						(BgL_localz00_bglt)
																						(BgL_varz00_1426);
																					BgL_testz00_2910 =
																						(((BgL_localz00_bglt)
																							CREF(BgL_auxz00_2911))->
																						BgL_userzf3zf3);
																				}
																				if (BgL_testz00_2910)
																					{	/* Ast/remove.scm 292 */
																						BgL__ortest_3250z00_1440 =
																							((bool_t) 0);
																					}
																				else
																					{	/* Ast/remove.scm 292 */
																						BgL__ortest_3250z00_1440 =
																							((bool_t) 1);
																					}
																			}
																			if (BgL__ortest_3250z00_1440)
																				{	/* Ast/remove.scm 292 */
																					BgL_testz00_2893 =
																						BgL__ortest_3250z00_1440;
																				}
																			else
																				{	/* Ast/remove.scm 292 */
																					BgL_testz00_2893 =
																						(
																						(long)
																						CINT
																						(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																						== ((long) 0));
																		}}
																	else
																		{	/* Ast/remove.scm 291 */
																			BgL_testz00_2893 = ((bool_t) 0);
																		}
																}
														}
													else
														{	/* Ast/remove.scm 289 */
															BgL_testz00_2893 = ((bool_t) 0);
														}
												}
												if (BgL_testz00_2893)
													{	/* Ast/remove.scm 289 */
														if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1427,
																BGl_varz00zzast_nodez00))
															{	/* Ast/remove.scm 296 */
																BgL_variablez00_bglt BgL_vz00_1430;

																{
																	BgL_varz00_bglt BgL_auxz00_2919;

																	BgL_auxz00_2919 =
																		(BgL_varz00_bglt) (BgL_valz00_1427);
																	BgL_vz00_1430 =
																		(((BgL_varz00_bglt) CREF(BgL_auxz00_2919))->
																		BgL_variablez00);
																}
																{	/* Ast/remove.scm 299 */
																	long BgL_arg3502z00_1431;

																	BgL_arg3502z00_1431 =
																		(
																		(((BgL_variablez00_bglt)
																				CREF(BgL_vz00_1430))->
																			BgL_occurrencez00) - ((long) 1));
																	((((BgL_variablez00_bglt)
																				CREF(BgL_vz00_1430))->
																			BgL_occurrencez00) =
																		((long) BgL_arg3502z00_1431), BUNSPEC);
															}}
														else
															{	/* Ast/remove.scm 295 */
																BFALSE;
															}
														BGl_za2removedzd2countza2zd2zzast_removez00 =
															(BGl_za2removedzd2countza2zd2zzast_removez00 +
															((long) 1));
														{
															obj_t BgL_oldzd2bindingszd2_2926;

															BgL_oldzd2bindingszd2_2926 =
																CDR(BgL_oldzd2bindingszd2_1418);
															BgL_oldzd2bindingszd2_1418 =
																BgL_oldzd2bindingszd2_2926;
															goto BgL_zc3anonymousza33495ze3z83_1420;
														}
													}
												else
													{	/* Ast/remove.scm 289 */
														SET_CDR(BgL_bindingz00_1425, BgL_valz00_1427);
														{	/* Ast/remove.scm 304 */
															obj_t BgL_arg3506z00_1435;

															obj_t BgL_arg3507z00_1436;

															BgL_arg3506z00_1435 =
																CDR(BgL_oldzd2bindingszd2_1418);
															BgL_arg3507z00_1436 =
																MAKE_PAIR(BgL_bindingz00_1425,
																BgL_newzd2bindingszd2_1419);
															{
																obj_t BgL_newzd2bindingszd2_2932;

																obj_t BgL_oldzd2bindingszd2_2931;

																BgL_oldzd2bindingszd2_2931 =
																	BgL_arg3506z00_1435;
																BgL_newzd2bindingszd2_2932 =
																	BgL_arg3507z00_1436;
																BgL_newzd2bindingszd2_1419 =
																	BgL_newzd2bindingszd2_2932;
																BgL_oldzd2bindingszd2_1418 =
																	BgL_oldzd2bindingszd2_2931;
																goto BgL_zc3anonymousza33495ze3z83_1420;
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



/* node-remove!-let-fun3290 */
	obj_t BGl_nodezd2removez12zd2letzd2fun3290zc0zzast_removez00(obj_t
		BgL_envz00_2413, obj_t BgL_nodez00_2414)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 248 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1381;

				BgL_nodez00_1381 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2414);
				{	/* Ast/remove.scm 250 */
					obj_t BgL_arg3475z00_1385;

					{	/* Ast/remove.scm 250 */
						BgL_nodez00_bglt BgL_arg3476z00_1386;

						BgL_arg3476z00_1386 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->BgL_bodyz00);
						{	/* Ast/remove.scm 250 */
							obj_t BgL_method3256z00_2126;

							{	/* Ast/remove.scm 250 */
								BgL_objectz00_bglt BgL_objz00_2127;

								BgL_objz00_2127 = (BgL_objectz00_bglt) (BgL_arg3476z00_1386);
								{	/* Ast/remove.scm 250 */
									long BgL_objzd2classzd2numz00_2128;

									BgL_objzd2classzd2numz00_2128 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_2127);
									{	/* Ast/remove.scm 250 */
										obj_t BgL_arg2643z00_2129;

										BgL_arg2643z00_2129 =
											PROCEDURE_REF
											(BGl_nodezd2removez12zd2envz12zzast_removez00,
											(int) (((long) 1)));
										{	/* Ast/remove.scm 250 */
											obj_t BgL_arrayz00_2131;

											int BgL_offsetz00_2132;

											BgL_arrayz00_2131 = BgL_arg2643z00_2129;
											BgL_offsetz00_2132 =
												(int) (BgL_objzd2classzd2numz00_2128);
											{	/* Ast/remove.scm 250 */
												long BgL_offsetz00_2133;

												BgL_offsetz00_2133 =
													((long) (BgL_offsetz00_2132) - OBJECT_TYPE);
												{	/* Ast/remove.scm 250 */
													long BgL_modz00_2134;

													{	/* Ast/remove.scm 250 */
														int BgL_arg2645z00_2135;

														BgL_arg2645z00_2135 = (int) (((long) 16));
														{	/* Ast/remove.scm 250 */
															long BgL_auxz00_2943;

															BgL_auxz00_2943 = (long) (BgL_arg2645z00_2135);
															BgL_modz00_2134 =
																(BgL_offsetz00_2133 / BgL_auxz00_2943);
													}}
													{	/* Ast/remove.scm 250 */
														long BgL_restz00_2136;

														{	/* Ast/remove.scm 250 */
															int BgL_arg2644z00_2137;

															BgL_arg2644z00_2137 = (int) (((long) 16));
															{	/* Ast/remove.scm 250 */
																long BgL_auxz00_2947;

																BgL_auxz00_2947 = (long) (BgL_arg2644z00_2137);
																BgL_restz00_2136 =
																	(BgL_offsetz00_2133 % BgL_auxz00_2947);
														}}
														{	/* Ast/remove.scm 250 */

															BgL_method3256z00_2126 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_2131,
																	(int) (BgL_modz00_2134)),
																(int) (BgL_restz00_2136));
							}}}}}}}}
							BgL_arg3475z00_1385 =
								PROCEDURE_ENTRY(BgL_method3256z00_2126) (BgL_method3256z00_2126,
								(obj_t) (BgL_arg3476z00_1386), BEOA);
					}}
					{
						BgL_nodez00_bglt BgL_auxz00_2957;

						BgL_auxz00_2957 = (BgL_nodez00_bglt) (BgL_arg3475z00_1385);
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_auxz00_2957), BUNSPEC);
				}}
				{
					obj_t BgL_oldzd2localszd2_1390;

					obj_t BgL_newzd2localszd2_1391;

					{	/* Ast/remove.scm 251 */
						obj_t BgL_arg3477z00_1389;

						BgL_arg3477z00_1389 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->BgL_localsz00);
						BgL_oldzd2localszd2_1390 = BgL_arg3477z00_1389;
						BgL_newzd2localszd2_1391 = BNIL;
					BgL_zc3anonymousza33478ze3z83_1392:
						if (NULLP(BgL_oldzd2localszd2_1390))
							{	/* Ast/remove.scm 253 */
								if (NULLP(BgL_newzd2localszd2_1391))
									{	/* Ast/remove.scm 254 */
										return
											(obj_t) (
											(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->
												BgL_bodyz00));
									}
								else
									{	/* Ast/remove.scm 254 */
										{
											obj_t BgL_auxz00_2967;

											BgL_auxz00_2967 =
												bgl_reverse_bang(BgL_newzd2localszd2_1391);
											((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1381))->
													BgL_localsz00) = ((obj_t) BgL_auxz00_2967), BUNSPEC);
										}
										return (obj_t) (BgL_nodez00_1381);
									}
							}
						else
							{	/* Ast/remove.scm 259 */
								obj_t BgL_localz00_1396;

								BgL_localz00_1396 = CAR(BgL_oldzd2localszd2_1390);
								{	/* Ast/remove.scm 260 */
									bool_t BgL_testz00_2972;

									{	/* Ast/remove.scm 260 */
										long BgL_auxz00_2973;

										{
											BgL_variablez00_bglt BgL_auxz00_2974;

											BgL_auxz00_2974 =
												(BgL_variablez00_bglt) (BgL_localz00_1396);
											BgL_auxz00_2973 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_2974))->
												BgL_occurrencez00);
										}
										BgL_testz00_2972 = (BgL_auxz00_2973 <= ((long) 0));
									}
									if (BgL_testz00_2972)
										{	/* Ast/remove.scm 260 */
											BGl_za2removedzd2countza2zd2zzast_removez00 =
												(BGl_za2removedzd2countza2zd2zzast_removez00 +
												((long) 1));
											{
												obj_t BgL_oldzd2localszd2_2979;

												BgL_oldzd2localszd2_2979 =
													CDR(BgL_oldzd2localszd2_1390);
												BgL_oldzd2localszd2_1390 = BgL_oldzd2localszd2_2979;
												goto BgL_zc3anonymousza33478ze3z83_1392;
											}
										}
									else
										{	/* Ast/remove.scm 264 */
											BgL_valuez00_bglt BgL_sfunz00_1399;

											{
												BgL_variablez00_bglt BgL_auxz00_2981;

												BgL_auxz00_2981 =
													(BgL_variablez00_bglt) (BgL_localz00_1396);
												BgL_sfunz00_1399 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2981))->
													BgL_valuez00);
											}
											{	/* Ast/remove.scm 265 */
												obj_t BgL_arg3485z00_1400;

												{	/* Ast/remove.scm 265 */
													obj_t BgL_arg3486z00_1401;

													{
														BgL_sfunz00_bglt BgL_auxz00_2984;

														BgL_auxz00_2984 =
															(BgL_sfunz00_bglt) (BgL_sfunz00_1399);
														BgL_arg3486z00_1401 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2984))->
															BgL_bodyz00);
													}
													{	/* Ast/remove.scm 265 */
														BgL_nodez00_bglt BgL_nodez00_2168;

														BgL_nodez00_2168 =
															(BgL_nodez00_bglt) (BgL_arg3486z00_1401);
														{	/* Ast/remove.scm 265 */
															obj_t BgL_method3256z00_2169;

															{	/* Ast/remove.scm 265 */
																BgL_objectz00_bglt BgL_objz00_2170;

																BgL_objz00_2170 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2168);
																{	/* Ast/remove.scm 265 */
																	long BgL_objzd2classzd2numz00_2171;

																	BgL_objzd2classzd2numz00_2171 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2170);
																	{	/* Ast/remove.scm 265 */
																		obj_t BgL_arg2643z00_2172;

																		BgL_arg2643z00_2172 =
																			PROCEDURE_REF
																			(BGl_nodezd2removez12zd2envz12zzast_removez00,
																			(int) (((long) 1)));
																		{	/* Ast/remove.scm 265 */
																			obj_t BgL_arrayz00_2174;

																			int BgL_offsetz00_2175;

																			BgL_arrayz00_2174 = BgL_arg2643z00_2172;
																			BgL_offsetz00_2175 =
																				(int) (BgL_objzd2classzd2numz00_2171);
																			{	/* Ast/remove.scm 265 */
																				long BgL_offsetz00_2176;

																				BgL_offsetz00_2176 =
																					(
																					(long) (BgL_offsetz00_2175) -
																					OBJECT_TYPE);
																				{	/* Ast/remove.scm 265 */
																					long BgL_modz00_2177;

																					{	/* Ast/remove.scm 265 */
																						int BgL_arg2645z00_2178;

																						BgL_arg2645z00_2178 =
																							(int) (((long) 16));
																						{	/* Ast/remove.scm 265 */
																							long BgL_auxz00_2996;

																							BgL_auxz00_2996 =
																								(long) (BgL_arg2645z00_2178);
																							BgL_modz00_2177 =
																								(BgL_offsetz00_2176 /
																								BgL_auxz00_2996);
																					}}
																					{	/* Ast/remove.scm 265 */
																						long BgL_restz00_2179;

																						{	/* Ast/remove.scm 265 */
																							int BgL_arg2644z00_2180;

																							BgL_arg2644z00_2180 =
																								(int) (((long) 16));
																							{	/* Ast/remove.scm 265 */
																								long BgL_auxz00_3000;

																								BgL_auxz00_3000 =
																									(long) (BgL_arg2644z00_2180);
																								BgL_restz00_2179 =
																									(BgL_offsetz00_2176 %
																									BgL_auxz00_3000);
																						}}
																						{	/* Ast/remove.scm 265 */

																							BgL_method3256z00_2169 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2174,
																									(int) (BgL_modz00_2177)),
																								(int) (BgL_restz00_2179));
															}}}}}}}}
															BgL_arg3485z00_1400 =
																PROCEDURE_ENTRY(BgL_method3256z00_2169)
																(BgL_method3256z00_2169,
																(obj_t) (BgL_nodez00_2168), BEOA);
												}}}
												{
													BgL_sfunz00_bglt BgL_auxz00_3010;

													BgL_auxz00_3010 =
														(BgL_sfunz00_bglt) (BgL_sfunz00_1399);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3010))->
															BgL_bodyz00) =
														((obj_t) BgL_arg3485z00_1400), BUNSPEC);
											}}
											{	/* Ast/remove.scm 266 */
												obj_t BgL_arg3487z00_1402;

												obj_t BgL_arg3488z00_1403;

												BgL_arg3487z00_1402 = CDR(BgL_oldzd2localszd2_1390);
												BgL_arg3488z00_1403 =
													MAKE_PAIR(BgL_localz00_1396,
													BgL_newzd2localszd2_1391);
												{
													obj_t BgL_newzd2localszd2_3016;

													obj_t BgL_oldzd2localszd2_3015;

													BgL_oldzd2localszd2_3015 = BgL_arg3487z00_1402;
													BgL_newzd2localszd2_3016 = BgL_arg3488z00_1403;
													BgL_newzd2localszd2_1391 = BgL_newzd2localszd2_3016;
													BgL_oldzd2localszd2_1390 = BgL_oldzd2localszd2_3015;
													goto BgL_zc3anonymousza33478ze3z83_1392;
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



/* node-remove!-box-set3288 */
	obj_t BGl_nodezd2removez12zd2boxzd2set3288zc0zzast_removez00(obj_t
		BgL_envz00_2415, obj_t BgL_nodez00_2416)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 240 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1372;

				{	/* Ast/remove.scm 241 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3018;

					BgL_nodez00_1372 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2416);
					{	/* Ast/remove.scm 241 */
						obj_t BgL_arg3470z00_1375;

						{	/* Ast/remove.scm 241 */
							BgL_varz00_bglt BgL_arg3471z00_1376;

							BgL_arg3471z00_1376 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1372))->
								BgL_varz00);
							{	/* Ast/remove.scm 241 */
								BgL_nodez00_bglt BgL_nodez00_2067;

								BgL_nodez00_2067 = (BgL_nodez00_bglt) (BgL_arg3471z00_1376);
								{	/* Ast/remove.scm 241 */
									obj_t BgL_method3256z00_2068;

									{	/* Ast/remove.scm 241 */
										BgL_objectz00_bglt BgL_objz00_2069;

										BgL_objz00_2069 = (BgL_objectz00_bglt) (BgL_nodez00_2067);
										{	/* Ast/remove.scm 241 */
											long BgL_objzd2classzd2numz00_2070;

											BgL_objzd2classzd2numz00_2070 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2069);
											{	/* Ast/remove.scm 241 */
												obj_t BgL_arg2643z00_2071;

												BgL_arg2643z00_2071 =
													PROCEDURE_REF
													(BGl_nodezd2removez12zd2envz12zzast_removez00,
													(int) (((long) 1)));
												{	/* Ast/remove.scm 241 */
													obj_t BgL_arrayz00_2073;

													int BgL_offsetz00_2074;

													BgL_arrayz00_2073 = BgL_arg2643z00_2071;
													BgL_offsetz00_2074 =
														(int) (BgL_objzd2classzd2numz00_2070);
													{	/* Ast/remove.scm 241 */
														long BgL_offsetz00_2075;

														BgL_offsetz00_2075 =
															((long) (BgL_offsetz00_2074) - OBJECT_TYPE);
														{	/* Ast/remove.scm 241 */
															long BgL_modz00_2076;

															{	/* Ast/remove.scm 241 */
																int BgL_arg2645z00_2077;

																BgL_arg2645z00_2077 = (int) (((long) 16));
																{	/* Ast/remove.scm 241 */
																	long BgL_auxz00_3029;

																	BgL_auxz00_3029 =
																		(long) (BgL_arg2645z00_2077);
																	BgL_modz00_2076 =
																		(BgL_offsetz00_2075 / BgL_auxz00_3029);
															}}
															{	/* Ast/remove.scm 241 */
																long BgL_restz00_2078;

																{	/* Ast/remove.scm 241 */
																	int BgL_arg2644z00_2079;

																	BgL_arg2644z00_2079 = (int) (((long) 16));
																	{	/* Ast/remove.scm 241 */
																		long BgL_auxz00_3033;

																		BgL_auxz00_3033 =
																			(long) (BgL_arg2644z00_2079);
																		BgL_restz00_2078 =
																			(BgL_offsetz00_2075 % BgL_auxz00_3033);
																}}
																{	/* Ast/remove.scm 241 */

																	BgL_method3256z00_2068 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2073,
																			(int) (BgL_modz00_2076)),
																		(int) (BgL_restz00_2078));
									}}}}}}}}
									BgL_arg3470z00_1375 =
										PROCEDURE_ENTRY(BgL_method3256z00_2068)
										(BgL_method3256z00_2068, (obj_t) (BgL_nodez00_2067), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_3043;

							BgL_auxz00_3043 = (BgL_varz00_bglt) (BgL_arg3470z00_1375);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1372))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_3043), BUNSPEC);
					}}
					{	/* Ast/remove.scm 242 */
						obj_t BgL_arg3472z00_1377;

						{	/* Ast/remove.scm 242 */
							BgL_nodez00_bglt BgL_arg3473z00_1378;

							BgL_arg3473z00_1378 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1372))->
								BgL_valuez00);
							{	/* Ast/remove.scm 242 */
								obj_t BgL_method3256z00_2097;

								{	/* Ast/remove.scm 242 */
									BgL_objectz00_bglt BgL_objz00_2098;

									BgL_objz00_2098 = (BgL_objectz00_bglt) (BgL_arg3473z00_1378);
									{	/* Ast/remove.scm 242 */
										long BgL_objzd2classzd2numz00_2099;

										BgL_objzd2classzd2numz00_2099 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2098);
										{	/* Ast/remove.scm 242 */
											obj_t BgL_arg2643z00_2100;

											BgL_arg2643z00_2100 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 242 */
												obj_t BgL_arrayz00_2102;

												int BgL_offsetz00_2103;

												BgL_arrayz00_2102 = BgL_arg2643z00_2100;
												BgL_offsetz00_2103 =
													(int) (BgL_objzd2classzd2numz00_2099);
												{	/* Ast/remove.scm 242 */
													long BgL_offsetz00_2104;

													BgL_offsetz00_2104 =
														((long) (BgL_offsetz00_2103) - OBJECT_TYPE);
													{	/* Ast/remove.scm 242 */
														long BgL_modz00_2105;

														{	/* Ast/remove.scm 242 */
															int BgL_arg2645z00_2106;

															BgL_arg2645z00_2106 = (int) (((long) 16));
															{	/* Ast/remove.scm 242 */
																long BgL_auxz00_3055;

																BgL_auxz00_3055 = (long) (BgL_arg2645z00_2106);
																BgL_modz00_2105 =
																	(BgL_offsetz00_2104 / BgL_auxz00_3055);
														}}
														{	/* Ast/remove.scm 242 */
															long BgL_restz00_2107;

															{	/* Ast/remove.scm 242 */
																int BgL_arg2644z00_2108;

																BgL_arg2644z00_2108 = (int) (((long) 16));
																{	/* Ast/remove.scm 242 */
																	long BgL_auxz00_3059;

																	BgL_auxz00_3059 =
																		(long) (BgL_arg2644z00_2108);
																	BgL_restz00_2107 =
																		(BgL_offsetz00_2104 % BgL_auxz00_3059);
															}}
															{	/* Ast/remove.scm 242 */

																BgL_method3256z00_2097 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2102,
																		(int) (BgL_modz00_2105)),
																	(int) (BgL_restz00_2107));
								}}}}}}}}
								BgL_arg3472z00_1377 =
									PROCEDURE_ENTRY(BgL_method3256z00_2097)
									(BgL_method3256z00_2097, (obj_t) (BgL_arg3473z00_1378), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3069;

							BgL_auxz00_3069 = (BgL_nodez00_bglt) (BgL_arg3472z00_1377);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1372))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3069), BUNSPEC);
					}}
					BgL_auxz00_3018 = BgL_nodez00_1372;
					return (obj_t) (BgL_auxz00_3018);
				}
			}
		}
	}



/* node-remove!-box-ref3286 */
	obj_t BGl_nodezd2removez12zd2boxzd2ref3286zc0zzast_removez00(obj_t
		BgL_envz00_2417, obj_t BgL_nodez00_2418)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 233 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1365;

				{	/* Ast/remove.scm 234 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_3074;

					BgL_nodez00_1365 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_2418);
					{	/* Ast/remove.scm 234 */
						obj_t BgL_arg3467z00_1368;

						{	/* Ast/remove.scm 234 */
							BgL_varz00_bglt BgL_arg3468z00_1369;

							BgL_arg3468z00_1369 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1365))->BgL_varz00);
							{	/* Ast/remove.scm 234 */
								BgL_nodez00_bglt BgL_nodez00_2038;

								BgL_nodez00_2038 = (BgL_nodez00_bglt) (BgL_arg3468z00_1369);
								{	/* Ast/remove.scm 234 */
									obj_t BgL_method3256z00_2039;

									{	/* Ast/remove.scm 234 */
										BgL_objectz00_bglt BgL_objz00_2040;

										BgL_objz00_2040 = (BgL_objectz00_bglt) (BgL_nodez00_2038);
										{	/* Ast/remove.scm 234 */
											long BgL_objzd2classzd2numz00_2041;

											BgL_objzd2classzd2numz00_2041 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2040);
											{	/* Ast/remove.scm 234 */
												obj_t BgL_arg2643z00_2042;

												BgL_arg2643z00_2042 =
													PROCEDURE_REF
													(BGl_nodezd2removez12zd2envz12zzast_removez00,
													(int) (((long) 1)));
												{	/* Ast/remove.scm 234 */
													obj_t BgL_arrayz00_2044;

													int BgL_offsetz00_2045;

													BgL_arrayz00_2044 = BgL_arg2643z00_2042;
													BgL_offsetz00_2045 =
														(int) (BgL_objzd2classzd2numz00_2041);
													{	/* Ast/remove.scm 234 */
														long BgL_offsetz00_2046;

														BgL_offsetz00_2046 =
															((long) (BgL_offsetz00_2045) - OBJECT_TYPE);
														{	/* Ast/remove.scm 234 */
															long BgL_modz00_2047;

															{	/* Ast/remove.scm 234 */
																int BgL_arg2645z00_2048;

																BgL_arg2645z00_2048 = (int) (((long) 16));
																{	/* Ast/remove.scm 234 */
																	long BgL_auxz00_3085;

																	BgL_auxz00_3085 =
																		(long) (BgL_arg2645z00_2048);
																	BgL_modz00_2047 =
																		(BgL_offsetz00_2046 / BgL_auxz00_3085);
															}}
															{	/* Ast/remove.scm 234 */
																long BgL_restz00_2049;

																{	/* Ast/remove.scm 234 */
																	int BgL_arg2644z00_2050;

																	BgL_arg2644z00_2050 = (int) (((long) 16));
																	{	/* Ast/remove.scm 234 */
																		long BgL_auxz00_3089;

																		BgL_auxz00_3089 =
																			(long) (BgL_arg2644z00_2050);
																		BgL_restz00_2049 =
																			(BgL_offsetz00_2046 % BgL_auxz00_3089);
																}}
																{	/* Ast/remove.scm 234 */

																	BgL_method3256z00_2039 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2044,
																			(int) (BgL_modz00_2047)),
																		(int) (BgL_restz00_2049));
									}}}}}}}}
									BgL_arg3467z00_1368 =
										PROCEDURE_ENTRY(BgL_method3256z00_2039)
										(BgL_method3256z00_2039, (obj_t) (BgL_nodez00_2038), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_3099;

							BgL_auxz00_3099 = (BgL_varz00_bglt) (BgL_arg3467z00_1368);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1365))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_3099), BUNSPEC);
					}}
					BgL_auxz00_3074 = BgL_nodez00_1365;
					return (obj_t) (BgL_auxz00_3074);
				}
			}
		}
	}



/* node-remove!-make-bo3284 */
	obj_t BGl_nodezd2removez12zd2makezd2bo3284zc0zzast_removez00(obj_t
		BgL_envz00_2419, obj_t BgL_nodez00_2420)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 226 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1358;

				{	/* Ast/remove.scm 227 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3104;

					BgL_nodez00_1358 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2420);
					{	/* Ast/remove.scm 227 */
						obj_t BgL_arg3464z00_1361;

						{	/* Ast/remove.scm 227 */
							BgL_nodez00_bglt BgL_arg3465z00_1362;

							BgL_arg3465z00_1362 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1358))->
								BgL_valuez00);
							{	/* Ast/remove.scm 227 */
								obj_t BgL_method3256z00_2010;

								{	/* Ast/remove.scm 227 */
									BgL_objectz00_bglt BgL_objz00_2011;

									BgL_objz00_2011 = (BgL_objectz00_bglt) (BgL_arg3465z00_1362);
									{	/* Ast/remove.scm 227 */
										long BgL_objzd2classzd2numz00_2012;

										BgL_objzd2classzd2numz00_2012 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2011);
										{	/* Ast/remove.scm 227 */
											obj_t BgL_arg2643z00_2013;

											BgL_arg2643z00_2013 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 227 */
												obj_t BgL_arrayz00_2015;

												int BgL_offsetz00_2016;

												BgL_arrayz00_2015 = BgL_arg2643z00_2013;
												BgL_offsetz00_2016 =
													(int) (BgL_objzd2classzd2numz00_2012);
												{	/* Ast/remove.scm 227 */
													long BgL_offsetz00_2017;

													BgL_offsetz00_2017 =
														((long) (BgL_offsetz00_2016) - OBJECT_TYPE);
													{	/* Ast/remove.scm 227 */
														long BgL_modz00_2018;

														{	/* Ast/remove.scm 227 */
															int BgL_arg2645z00_2019;

															BgL_arg2645z00_2019 = (int) (((long) 16));
															{	/* Ast/remove.scm 227 */
																long BgL_auxz00_3114;

																BgL_auxz00_3114 = (long) (BgL_arg2645z00_2019);
																BgL_modz00_2018 =
																	(BgL_offsetz00_2017 / BgL_auxz00_3114);
														}}
														{	/* Ast/remove.scm 227 */
															long BgL_restz00_2020;

															{	/* Ast/remove.scm 227 */
																int BgL_arg2644z00_2021;

																BgL_arg2644z00_2021 = (int) (((long) 16));
																{	/* Ast/remove.scm 227 */
																	long BgL_auxz00_3118;

																	BgL_auxz00_3118 =
																		(long) (BgL_arg2644z00_2021);
																	BgL_restz00_2020 =
																		(BgL_offsetz00_2017 % BgL_auxz00_3118);
															}}
															{	/* Ast/remove.scm 227 */

																BgL_method3256z00_2010 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2015,
																		(int) (BgL_modz00_2018)),
																	(int) (BgL_restz00_2020));
								}}}}}}}}
								BgL_arg3464z00_1361 =
									PROCEDURE_ENTRY(BgL_method3256z00_2010)
									(BgL_method3256z00_2010, (obj_t) (BgL_arg3465z00_1362), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3128;

							BgL_auxz00_3128 = (BgL_nodez00_bglt) (BgL_arg3464z00_1361);
							((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1358))->
									BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3128), BUNSPEC);
					}}
					BgL_auxz00_3104 = BgL_nodez00_1358;
					return (obj_t) (BgL_auxz00_3104);
				}
			}
		}
	}



/* node-remove!-select3282 */
	obj_t BGl_nodezd2removez12zd2select3282z12zzast_removez00(obj_t
		BgL_envz00_2421, obj_t BgL_nodez00_2422)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 216 */
			{
				BgL_selectz00_bglt BgL_nodez00_1341;

				{	/* Ast/remove.scm 217 */
					BgL_selectz00_bglt BgL_auxz00_3133;

					BgL_nodez00_1341 = (BgL_selectz00_bglt) (BgL_nodez00_2422);
					{	/* Ast/remove.scm 217 */
						obj_t BgL_arg3456z00_1344;

						{	/* Ast/remove.scm 217 */
							BgL_nodez00_bglt BgL_arg3457z00_1345;

							BgL_arg3457z00_1345 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1341))->BgL_testz00);
							{	/* Ast/remove.scm 217 */
								obj_t BgL_method3256z00_1948;

								{	/* Ast/remove.scm 217 */
									BgL_objectz00_bglt BgL_objz00_1949;

									BgL_objz00_1949 = (BgL_objectz00_bglt) (BgL_arg3457z00_1345);
									{	/* Ast/remove.scm 217 */
										long BgL_objzd2classzd2numz00_1950;

										BgL_objzd2classzd2numz00_1950 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1949);
										{	/* Ast/remove.scm 217 */
											obj_t BgL_arg2643z00_1951;

											BgL_arg2643z00_1951 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 217 */
												obj_t BgL_arrayz00_1953;

												int BgL_offsetz00_1954;

												BgL_arrayz00_1953 = BgL_arg2643z00_1951;
												BgL_offsetz00_1954 =
													(int) (BgL_objzd2classzd2numz00_1950);
												{	/* Ast/remove.scm 217 */
													long BgL_offsetz00_1955;

													BgL_offsetz00_1955 =
														((long) (BgL_offsetz00_1954) - OBJECT_TYPE);
													{	/* Ast/remove.scm 217 */
														long BgL_modz00_1956;

														{	/* Ast/remove.scm 217 */
															int BgL_arg2645z00_1957;

															BgL_arg2645z00_1957 = (int) (((long) 16));
															{	/* Ast/remove.scm 217 */
																long BgL_auxz00_3143;

																BgL_auxz00_3143 = (long) (BgL_arg2645z00_1957);
																BgL_modz00_1956 =
																	(BgL_offsetz00_1955 / BgL_auxz00_3143);
														}}
														{	/* Ast/remove.scm 217 */
															long BgL_restz00_1958;

															{	/* Ast/remove.scm 217 */
																int BgL_arg2644z00_1959;

																BgL_arg2644z00_1959 = (int) (((long) 16));
																{	/* Ast/remove.scm 217 */
																	long BgL_auxz00_3147;

																	BgL_auxz00_3147 =
																		(long) (BgL_arg2644z00_1959);
																	BgL_restz00_1958 =
																		(BgL_offsetz00_1955 % BgL_auxz00_3147);
															}}
															{	/* Ast/remove.scm 217 */

																BgL_method3256z00_1948 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1953,
																		(int) (BgL_modz00_1956)),
																	(int) (BgL_restz00_1958));
								}}}}}}}}
								BgL_arg3456z00_1344 =
									PROCEDURE_ENTRY(BgL_method3256z00_1948)
									(BgL_method3256z00_1948, (obj_t) (BgL_arg3457z00_1345), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3157;

							BgL_auxz00_3157 = (BgL_nodez00_bglt) (BgL_arg3456z00_1344);
							((((BgL_selectz00_bglt) CREF(BgL_nodez00_1341))->BgL_testz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3157), BUNSPEC);
					}}
					{	/* Ast/remove.scm 218 */
						obj_t BgL_g3253z00_1346;

						BgL_g3253z00_1346 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1341))->BgL_clausesz00);
						{
							obj_t BgL_l3251z00_1348;

							BgL_l3251z00_1348 = BgL_g3253z00_1346;
						BgL_zc3anonymousza33458ze3z83_1349:
							if (PAIRP(BgL_l3251z00_1348))
								{	/* Ast/remove.scm 220 */
									{	/* Ast/remove.scm 219 */
										obj_t BgL_clausez00_1351;

										BgL_clausez00_1351 = CAR(BgL_l3251z00_1348);
										{	/* Ast/remove.scm 219 */
											obj_t BgL_arg3460z00_1352;

											{	/* Ast/remove.scm 219 */
												obj_t BgL_arg3461z00_1353;

												BgL_arg3461z00_1353 = CDR(BgL_clausez00_1351);
												{	/* Ast/remove.scm 219 */
													BgL_nodez00_bglt BgL_nodez00_1979;

													BgL_nodez00_1979 =
														(BgL_nodez00_bglt) (BgL_arg3461z00_1353);
													{	/* Ast/remove.scm 219 */
														obj_t BgL_method3256z00_1980;

														{	/* Ast/remove.scm 219 */
															BgL_objectz00_bglt BgL_objz00_1981;

															BgL_objz00_1981 =
																(BgL_objectz00_bglt) (BgL_nodez00_1979);
															{	/* Ast/remove.scm 219 */
																long BgL_objzd2classzd2numz00_1982;

																BgL_objzd2classzd2numz00_1982 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1981);
																{	/* Ast/remove.scm 219 */
																	obj_t BgL_arg2643z00_1983;

																	BgL_arg2643z00_1983 =
																		PROCEDURE_REF
																		(BGl_nodezd2removez12zd2envz12zzast_removez00,
																		(int) (((long) 1)));
																	{	/* Ast/remove.scm 219 */
																		obj_t BgL_arrayz00_1985;

																		int BgL_offsetz00_1986;

																		BgL_arrayz00_1985 = BgL_arg2643z00_1983;
																		BgL_offsetz00_1986 =
																			(int) (BgL_objzd2classzd2numz00_1982);
																		{	/* Ast/remove.scm 219 */
																			long BgL_offsetz00_1987;

																			BgL_offsetz00_1987 =
																				(
																				(long) (BgL_offsetz00_1986) -
																				OBJECT_TYPE);
																			{	/* Ast/remove.scm 219 */
																				long BgL_modz00_1988;

																				{	/* Ast/remove.scm 219 */
																					int BgL_arg2645z00_1989;

																					BgL_arg2645z00_1989 =
																						(int) (((long) 16));
																					{	/* Ast/remove.scm 219 */
																						long BgL_auxz00_3174;

																						BgL_auxz00_3174 =
																							(long) (BgL_arg2645z00_1989);
																						BgL_modz00_1988 =
																							(BgL_offsetz00_1987 /
																							BgL_auxz00_3174);
																				}}
																				{	/* Ast/remove.scm 219 */
																					long BgL_restz00_1990;

																					{	/* Ast/remove.scm 219 */
																						int BgL_arg2644z00_1991;

																						BgL_arg2644z00_1991 =
																							(int) (((long) 16));
																						{	/* Ast/remove.scm 219 */
																							long BgL_auxz00_3178;

																							BgL_auxz00_3178 =
																								(long) (BgL_arg2644z00_1991);
																							BgL_restz00_1990 =
																								(BgL_offsetz00_1987 %
																								BgL_auxz00_3178);
																					}}
																					{	/* Ast/remove.scm 219 */

																						BgL_method3256z00_1980 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1985,
																								(int) (BgL_modz00_1988)),
																							(int) (BgL_restz00_1990));
														}}}}}}}}
														BgL_arg3460z00_1352 =
															PROCEDURE_ENTRY(BgL_method3256z00_1980)
															(BgL_method3256z00_1980,
															(obj_t) (BgL_nodez00_1979), BEOA);
											}}}
											SET_CDR(BgL_clausez00_1351, BgL_arg3460z00_1352);
									}}
									{
										obj_t BgL_l3251z00_3189;

										BgL_l3251z00_3189 = CDR(BgL_l3251z00_1348);
										BgL_l3251z00_1348 = BgL_l3251z00_3189;
										goto BgL_zc3anonymousza33458ze3z83_1349;
									}
								}
							else
								{	/* Ast/remove.scm 220 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_3133 = BgL_nodez00_1341;
					return (obj_t) (BgL_auxz00_3133);
				}
			}
		}
	}



/* node-remove!-fail3280 */
	obj_t BGl_nodezd2removez12zd2fail3280z12zzast_removez00(obj_t BgL_envz00_2423,
		obj_t BgL_nodez00_2424)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 207 */
			{
				BgL_failz00_bglt BgL_nodez00_1330;

				{	/* Ast/remove.scm 208 */
					BgL_failz00_bglt BgL_auxz00_3193;

					BgL_nodez00_1330 = (BgL_failz00_bglt) (BgL_nodez00_2424);
					{	/* Ast/remove.scm 208 */
						obj_t BgL_arg3449z00_1333;

						{	/* Ast/remove.scm 208 */
							BgL_nodez00_bglt BgL_arg3450z00_1334;

							BgL_arg3450z00_1334 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1330))->BgL_procz00);
							{	/* Ast/remove.scm 208 */
								obj_t BgL_method3256z00_1861;

								{	/* Ast/remove.scm 208 */
									BgL_objectz00_bglt BgL_objz00_1862;

									BgL_objz00_1862 = (BgL_objectz00_bglt) (BgL_arg3450z00_1334);
									{	/* Ast/remove.scm 208 */
										long BgL_objzd2classzd2numz00_1863;

										BgL_objzd2classzd2numz00_1863 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1862);
										{	/* Ast/remove.scm 208 */
											obj_t BgL_arg2643z00_1864;

											BgL_arg2643z00_1864 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 208 */
												obj_t BgL_arrayz00_1866;

												int BgL_offsetz00_1867;

												BgL_arrayz00_1866 = BgL_arg2643z00_1864;
												BgL_offsetz00_1867 =
													(int) (BgL_objzd2classzd2numz00_1863);
												{	/* Ast/remove.scm 208 */
													long BgL_offsetz00_1868;

													BgL_offsetz00_1868 =
														((long) (BgL_offsetz00_1867) - OBJECT_TYPE);
													{	/* Ast/remove.scm 208 */
														long BgL_modz00_1869;

														{	/* Ast/remove.scm 208 */
															int BgL_arg2645z00_1870;

															BgL_arg2645z00_1870 = (int) (((long) 16));
															{	/* Ast/remove.scm 208 */
																long BgL_auxz00_3203;

																BgL_auxz00_3203 = (long) (BgL_arg2645z00_1870);
																BgL_modz00_1869 =
																	(BgL_offsetz00_1868 / BgL_auxz00_3203);
														}}
														{	/* Ast/remove.scm 208 */
															long BgL_restz00_1871;

															{	/* Ast/remove.scm 208 */
																int BgL_arg2644z00_1872;

																BgL_arg2644z00_1872 = (int) (((long) 16));
																{	/* Ast/remove.scm 208 */
																	long BgL_auxz00_3207;

																	BgL_auxz00_3207 =
																		(long) (BgL_arg2644z00_1872);
																	BgL_restz00_1871 =
																		(BgL_offsetz00_1868 % BgL_auxz00_3207);
															}}
															{	/* Ast/remove.scm 208 */

																BgL_method3256z00_1861 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1866,
																		(int) (BgL_modz00_1869)),
																	(int) (BgL_restz00_1871));
								}}}}}}}}
								BgL_arg3449z00_1333 =
									PROCEDURE_ENTRY(BgL_method3256z00_1861)
									(BgL_method3256z00_1861, (obj_t) (BgL_arg3450z00_1334), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3217;

							BgL_auxz00_3217 = (BgL_nodez00_bglt) (BgL_arg3449z00_1333);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1330))->BgL_procz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3217), BUNSPEC);
					}}
					{	/* Ast/remove.scm 209 */
						obj_t BgL_arg3451z00_1335;

						{	/* Ast/remove.scm 209 */
							BgL_nodez00_bglt BgL_arg3452z00_1336;

							BgL_arg3452z00_1336 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1330))->BgL_msgz00);
							{	/* Ast/remove.scm 209 */
								obj_t BgL_method3256z00_1890;

								{	/* Ast/remove.scm 209 */
									BgL_objectz00_bglt BgL_objz00_1891;

									BgL_objz00_1891 = (BgL_objectz00_bglt) (BgL_arg3452z00_1336);
									{	/* Ast/remove.scm 209 */
										long BgL_objzd2classzd2numz00_1892;

										BgL_objzd2classzd2numz00_1892 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1891);
										{	/* Ast/remove.scm 209 */
											obj_t BgL_arg2643z00_1893;

											BgL_arg2643z00_1893 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 209 */
												obj_t BgL_arrayz00_1895;

												int BgL_offsetz00_1896;

												BgL_arrayz00_1895 = BgL_arg2643z00_1893;
												BgL_offsetz00_1896 =
													(int) (BgL_objzd2classzd2numz00_1892);
												{	/* Ast/remove.scm 209 */
													long BgL_offsetz00_1897;

													BgL_offsetz00_1897 =
														((long) (BgL_offsetz00_1896) - OBJECT_TYPE);
													{	/* Ast/remove.scm 209 */
														long BgL_modz00_1898;

														{	/* Ast/remove.scm 209 */
															int BgL_arg2645z00_1899;

															BgL_arg2645z00_1899 = (int) (((long) 16));
															{	/* Ast/remove.scm 209 */
																long BgL_auxz00_3229;

																BgL_auxz00_3229 = (long) (BgL_arg2645z00_1899);
																BgL_modz00_1898 =
																	(BgL_offsetz00_1897 / BgL_auxz00_3229);
														}}
														{	/* Ast/remove.scm 209 */
															long BgL_restz00_1900;

															{	/* Ast/remove.scm 209 */
																int BgL_arg2644z00_1901;

																BgL_arg2644z00_1901 = (int) (((long) 16));
																{	/* Ast/remove.scm 209 */
																	long BgL_auxz00_3233;

																	BgL_auxz00_3233 =
																		(long) (BgL_arg2644z00_1901);
																	BgL_restz00_1900 =
																		(BgL_offsetz00_1897 % BgL_auxz00_3233);
															}}
															{	/* Ast/remove.scm 209 */

																BgL_method3256z00_1890 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1895,
																		(int) (BgL_modz00_1898)),
																	(int) (BgL_restz00_1900));
								}}}}}}}}
								BgL_arg3451z00_1335 =
									PROCEDURE_ENTRY(BgL_method3256z00_1890)
									(BgL_method3256z00_1890, (obj_t) (BgL_arg3452z00_1336), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3243;

							BgL_auxz00_3243 = (BgL_nodez00_bglt) (BgL_arg3451z00_1335);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1330))->BgL_msgz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3243), BUNSPEC);
					}}
					{	/* Ast/remove.scm 210 */
						obj_t BgL_arg3453z00_1337;

						{	/* Ast/remove.scm 210 */
							BgL_nodez00_bglt BgL_arg3454z00_1338;

							BgL_arg3454z00_1338 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1330))->BgL_objz00);
							{	/* Ast/remove.scm 210 */
								obj_t BgL_method3256z00_1919;

								{	/* Ast/remove.scm 210 */
									BgL_objectz00_bglt BgL_objz00_1920;

									BgL_objz00_1920 = (BgL_objectz00_bglt) (BgL_arg3454z00_1338);
									{	/* Ast/remove.scm 210 */
										long BgL_objzd2classzd2numz00_1921;

										BgL_objzd2classzd2numz00_1921 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1920);
										{	/* Ast/remove.scm 210 */
											obj_t BgL_arg2643z00_1922;

											BgL_arg2643z00_1922 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 210 */
												obj_t BgL_arrayz00_1924;

												int BgL_offsetz00_1925;

												BgL_arrayz00_1924 = BgL_arg2643z00_1922;
												BgL_offsetz00_1925 =
													(int) (BgL_objzd2classzd2numz00_1921);
												{	/* Ast/remove.scm 210 */
													long BgL_offsetz00_1926;

													BgL_offsetz00_1926 =
														((long) (BgL_offsetz00_1925) - OBJECT_TYPE);
													{	/* Ast/remove.scm 210 */
														long BgL_modz00_1927;

														{	/* Ast/remove.scm 210 */
															int BgL_arg2645z00_1928;

															BgL_arg2645z00_1928 = (int) (((long) 16));
															{	/* Ast/remove.scm 210 */
																long BgL_auxz00_3255;

																BgL_auxz00_3255 = (long) (BgL_arg2645z00_1928);
																BgL_modz00_1927 =
																	(BgL_offsetz00_1926 / BgL_auxz00_3255);
														}}
														{	/* Ast/remove.scm 210 */
															long BgL_restz00_1929;

															{	/* Ast/remove.scm 210 */
																int BgL_arg2644z00_1930;

																BgL_arg2644z00_1930 = (int) (((long) 16));
																{	/* Ast/remove.scm 210 */
																	long BgL_auxz00_3259;

																	BgL_auxz00_3259 =
																		(long) (BgL_arg2644z00_1930);
																	BgL_restz00_1929 =
																		(BgL_offsetz00_1926 % BgL_auxz00_3259);
															}}
															{	/* Ast/remove.scm 210 */

																BgL_method3256z00_1919 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1924,
																		(int) (BgL_modz00_1927)),
																	(int) (BgL_restz00_1929));
								}}}}}}}}
								BgL_arg3453z00_1337 =
									PROCEDURE_ENTRY(BgL_method3256z00_1919)
									(BgL_method3256z00_1919, (obj_t) (BgL_arg3454z00_1338), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3269;

							BgL_auxz00_3269 = (BgL_nodez00_bglt) (BgL_arg3453z00_1337);
							((((BgL_failz00_bglt) CREF(BgL_nodez00_1330))->BgL_objz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3269), BUNSPEC);
					}}
					BgL_auxz00_3193 = BgL_nodez00_1330;
					return (obj_t) (BgL_auxz00_3193);
				}
			}
		}
	}



/* node-remove!-conditi3278 */
	obj_t BGl_nodezd2removez12zd2conditi3278z12zzast_removez00(obj_t
		BgL_envz00_2425, obj_t BgL_nodez00_2426)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 198 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1319;

				{	/* Ast/remove.scm 199 */
					BgL_conditionalz00_bglt BgL_auxz00_3274;

					BgL_nodez00_1319 = (BgL_conditionalz00_bglt) (BgL_nodez00_2426);
					{	/* Ast/remove.scm 199 */
						obj_t BgL_arg3441z00_1322;

						{	/* Ast/remove.scm 199 */
							BgL_nodez00_bglt BgL_arg3443z00_1323;

							BgL_arg3443z00_1323 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1319))->
								BgL_testz00);
							{	/* Ast/remove.scm 199 */
								obj_t BgL_method3256z00_1774;

								{	/* Ast/remove.scm 199 */
									BgL_objectz00_bglt BgL_objz00_1775;

									BgL_objz00_1775 = (BgL_objectz00_bglt) (BgL_arg3443z00_1323);
									{	/* Ast/remove.scm 199 */
										long BgL_objzd2classzd2numz00_1776;

										BgL_objzd2classzd2numz00_1776 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1775);
										{	/* Ast/remove.scm 199 */
											obj_t BgL_arg2643z00_1777;

											BgL_arg2643z00_1777 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 199 */
												obj_t BgL_arrayz00_1779;

												int BgL_offsetz00_1780;

												BgL_arrayz00_1779 = BgL_arg2643z00_1777;
												BgL_offsetz00_1780 =
													(int) (BgL_objzd2classzd2numz00_1776);
												{	/* Ast/remove.scm 199 */
													long BgL_offsetz00_1781;

													BgL_offsetz00_1781 =
														((long) (BgL_offsetz00_1780) - OBJECT_TYPE);
													{	/* Ast/remove.scm 199 */
														long BgL_modz00_1782;

														{	/* Ast/remove.scm 199 */
															int BgL_arg2645z00_1783;

															BgL_arg2645z00_1783 = (int) (((long) 16));
															{	/* Ast/remove.scm 199 */
																long BgL_auxz00_3284;

																BgL_auxz00_3284 = (long) (BgL_arg2645z00_1783);
																BgL_modz00_1782 =
																	(BgL_offsetz00_1781 / BgL_auxz00_3284);
														}}
														{	/* Ast/remove.scm 199 */
															long BgL_restz00_1784;

															{	/* Ast/remove.scm 199 */
																int BgL_arg2644z00_1785;

																BgL_arg2644z00_1785 = (int) (((long) 16));
																{	/* Ast/remove.scm 199 */
																	long BgL_auxz00_3288;

																	BgL_auxz00_3288 =
																		(long) (BgL_arg2644z00_1785);
																	BgL_restz00_1784 =
																		(BgL_offsetz00_1781 % BgL_auxz00_3288);
															}}
															{	/* Ast/remove.scm 199 */

																BgL_method3256z00_1774 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1779,
																		(int) (BgL_modz00_1782)),
																	(int) (BgL_restz00_1784));
								}}}}}}}}
								BgL_arg3441z00_1322 =
									PROCEDURE_ENTRY(BgL_method3256z00_1774)
									(BgL_method3256z00_1774, (obj_t) (BgL_arg3443z00_1323), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3298;

							BgL_auxz00_3298 = (BgL_nodez00_bglt) (BgL_arg3441z00_1322);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1319))->
									BgL_testz00) = ((BgL_nodez00_bglt) BgL_auxz00_3298), BUNSPEC);
					}}
					{	/* Ast/remove.scm 200 */
						obj_t BgL_arg3444z00_1324;

						{	/* Ast/remove.scm 200 */
							BgL_nodez00_bglt BgL_arg3445z00_1325;

							BgL_arg3445z00_1325 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1319))->
								BgL_truez00);
							{	/* Ast/remove.scm 200 */
								obj_t BgL_method3256z00_1803;

								{	/* Ast/remove.scm 200 */
									BgL_objectz00_bglt BgL_objz00_1804;

									BgL_objz00_1804 = (BgL_objectz00_bglt) (BgL_arg3445z00_1325);
									{	/* Ast/remove.scm 200 */
										long BgL_objzd2classzd2numz00_1805;

										BgL_objzd2classzd2numz00_1805 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1804);
										{	/* Ast/remove.scm 200 */
											obj_t BgL_arg2643z00_1806;

											BgL_arg2643z00_1806 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 200 */
												obj_t BgL_arrayz00_1808;

												int BgL_offsetz00_1809;

												BgL_arrayz00_1808 = BgL_arg2643z00_1806;
												BgL_offsetz00_1809 =
													(int) (BgL_objzd2classzd2numz00_1805);
												{	/* Ast/remove.scm 200 */
													long BgL_offsetz00_1810;

													BgL_offsetz00_1810 =
														((long) (BgL_offsetz00_1809) - OBJECT_TYPE);
													{	/* Ast/remove.scm 200 */
														long BgL_modz00_1811;

														{	/* Ast/remove.scm 200 */
															int BgL_arg2645z00_1812;

															BgL_arg2645z00_1812 = (int) (((long) 16));
															{	/* Ast/remove.scm 200 */
																long BgL_auxz00_3310;

																BgL_auxz00_3310 = (long) (BgL_arg2645z00_1812);
																BgL_modz00_1811 =
																	(BgL_offsetz00_1810 / BgL_auxz00_3310);
														}}
														{	/* Ast/remove.scm 200 */
															long BgL_restz00_1813;

															{	/* Ast/remove.scm 200 */
																int BgL_arg2644z00_1814;

																BgL_arg2644z00_1814 = (int) (((long) 16));
																{	/* Ast/remove.scm 200 */
																	long BgL_auxz00_3314;

																	BgL_auxz00_3314 =
																		(long) (BgL_arg2644z00_1814);
																	BgL_restz00_1813 =
																		(BgL_offsetz00_1810 % BgL_auxz00_3314);
															}}
															{	/* Ast/remove.scm 200 */

																BgL_method3256z00_1803 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1808,
																		(int) (BgL_modz00_1811)),
																	(int) (BgL_restz00_1813));
								}}}}}}}}
								BgL_arg3444z00_1324 =
									PROCEDURE_ENTRY(BgL_method3256z00_1803)
									(BgL_method3256z00_1803, (obj_t) (BgL_arg3445z00_1325), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3324;

							BgL_auxz00_3324 = (BgL_nodez00_bglt) (BgL_arg3444z00_1324);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1319))->
									BgL_truez00) = ((BgL_nodez00_bglt) BgL_auxz00_3324), BUNSPEC);
					}}
					{	/* Ast/remove.scm 201 */
						obj_t BgL_arg3446z00_1326;

						{	/* Ast/remove.scm 201 */
							BgL_nodez00_bglt BgL_arg3447z00_1327;

							BgL_arg3447z00_1327 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1319))->
								BgL_falsez00);
							{	/* Ast/remove.scm 201 */
								obj_t BgL_method3256z00_1832;

								{	/* Ast/remove.scm 201 */
									BgL_objectz00_bglt BgL_objz00_1833;

									BgL_objz00_1833 = (BgL_objectz00_bglt) (BgL_arg3447z00_1327);
									{	/* Ast/remove.scm 201 */
										long BgL_objzd2classzd2numz00_1834;

										BgL_objzd2classzd2numz00_1834 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1833);
										{	/* Ast/remove.scm 201 */
											obj_t BgL_arg2643z00_1835;

											BgL_arg2643z00_1835 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 201 */
												obj_t BgL_arrayz00_1837;

												int BgL_offsetz00_1838;

												BgL_arrayz00_1837 = BgL_arg2643z00_1835;
												BgL_offsetz00_1838 =
													(int) (BgL_objzd2classzd2numz00_1834);
												{	/* Ast/remove.scm 201 */
													long BgL_offsetz00_1839;

													BgL_offsetz00_1839 =
														((long) (BgL_offsetz00_1838) - OBJECT_TYPE);
													{	/* Ast/remove.scm 201 */
														long BgL_modz00_1840;

														{	/* Ast/remove.scm 201 */
															int BgL_arg2645z00_1841;

															BgL_arg2645z00_1841 = (int) (((long) 16));
															{	/* Ast/remove.scm 201 */
																long BgL_auxz00_3336;

																BgL_auxz00_3336 = (long) (BgL_arg2645z00_1841);
																BgL_modz00_1840 =
																	(BgL_offsetz00_1839 / BgL_auxz00_3336);
														}}
														{	/* Ast/remove.scm 201 */
															long BgL_restz00_1842;

															{	/* Ast/remove.scm 201 */
																int BgL_arg2644z00_1843;

																BgL_arg2644z00_1843 = (int) (((long) 16));
																{	/* Ast/remove.scm 201 */
																	long BgL_auxz00_3340;

																	BgL_auxz00_3340 =
																		(long) (BgL_arg2644z00_1843);
																	BgL_restz00_1842 =
																		(BgL_offsetz00_1839 % BgL_auxz00_3340);
															}}
															{	/* Ast/remove.scm 201 */

																BgL_method3256z00_1832 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1837,
																		(int) (BgL_modz00_1840)),
																	(int) (BgL_restz00_1842));
								}}}}}}}}
								BgL_arg3446z00_1326 =
									PROCEDURE_ENTRY(BgL_method3256z00_1832)
									(BgL_method3256z00_1832, (obj_t) (BgL_arg3447z00_1327), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3350;

							BgL_auxz00_3350 = (BgL_nodez00_bglt) (BgL_arg3446z00_1326);
							((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1319))->
									BgL_falsez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3350), BUNSPEC);
					}}
					BgL_auxz00_3274 = BgL_nodez00_1319;
					return (obj_t) (BgL_auxz00_3274);
				}
			}
		}
	}



/* node-remove!-setq3276 */
	obj_t BGl_nodezd2removez12zd2setq3276z12zzast_removez00(obj_t BgL_envz00_2427,
		obj_t BgL_nodez00_2428)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 191 */
			{
				BgL_setqz00_bglt BgL_nodez00_1312;

				{	/* Ast/remove.scm 192 */
					BgL_setqz00_bglt BgL_auxz00_3355;

					BgL_nodez00_1312 = (BgL_setqz00_bglt) (BgL_nodez00_2428);
					{	/* Ast/remove.scm 192 */
						obj_t BgL_arg3438z00_1315;

						{	/* Ast/remove.scm 192 */
							BgL_nodez00_bglt BgL_arg3439z00_1316;

							BgL_arg3439z00_1316 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1312))->BgL_valuez00);
							{	/* Ast/remove.scm 192 */
								obj_t BgL_method3256z00_1745;

								{	/* Ast/remove.scm 192 */
									BgL_objectz00_bglt BgL_objz00_1746;

									BgL_objz00_1746 = (BgL_objectz00_bglt) (BgL_arg3439z00_1316);
									{	/* Ast/remove.scm 192 */
										long BgL_objzd2classzd2numz00_1747;

										BgL_objzd2classzd2numz00_1747 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1746);
										{	/* Ast/remove.scm 192 */
											obj_t BgL_arg2643z00_1748;

											BgL_arg2643z00_1748 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 192 */
												obj_t BgL_arrayz00_1750;

												int BgL_offsetz00_1751;

												BgL_arrayz00_1750 = BgL_arg2643z00_1748;
												BgL_offsetz00_1751 =
													(int) (BgL_objzd2classzd2numz00_1747);
												{	/* Ast/remove.scm 192 */
													long BgL_offsetz00_1752;

													BgL_offsetz00_1752 =
														((long) (BgL_offsetz00_1751) - OBJECT_TYPE);
													{	/* Ast/remove.scm 192 */
														long BgL_modz00_1753;

														{	/* Ast/remove.scm 192 */
															int BgL_arg2645z00_1754;

															BgL_arg2645z00_1754 = (int) (((long) 16));
															{	/* Ast/remove.scm 192 */
																long BgL_auxz00_3365;

																BgL_auxz00_3365 = (long) (BgL_arg2645z00_1754);
																BgL_modz00_1753 =
																	(BgL_offsetz00_1752 / BgL_auxz00_3365);
														}}
														{	/* Ast/remove.scm 192 */
															long BgL_restz00_1755;

															{	/* Ast/remove.scm 192 */
																int BgL_arg2644z00_1756;

																BgL_arg2644z00_1756 = (int) (((long) 16));
																{	/* Ast/remove.scm 192 */
																	long BgL_auxz00_3369;

																	BgL_auxz00_3369 =
																		(long) (BgL_arg2644z00_1756);
																	BgL_restz00_1755 =
																		(BgL_offsetz00_1752 % BgL_auxz00_3369);
															}}
															{	/* Ast/remove.scm 192 */

																BgL_method3256z00_1745 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1750,
																		(int) (BgL_modz00_1753)),
																	(int) (BgL_restz00_1755));
								}}}}}}}}
								BgL_arg3438z00_1315 =
									PROCEDURE_ENTRY(BgL_method3256z00_1745)
									(BgL_method3256z00_1745, (obj_t) (BgL_arg3439z00_1316), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3379;

							BgL_auxz00_3379 = (BgL_nodez00_bglt) (BgL_arg3438z00_1315);
							((((BgL_setqz00_bglt) CREF(BgL_nodez00_1312))->BgL_valuez00) =
								((BgL_nodez00_bglt) BgL_auxz00_3379), BUNSPEC);
					}}
					BgL_auxz00_3355 = BgL_nodez00_1312;
					return (obj_t) (BgL_auxz00_3355);
				}
			}
		}
	}



/* node-remove!-cast3274 */
	obj_t BGl_nodezd2removez12zd2cast3274z12zzast_removez00(obj_t BgL_envz00_2429,
		obj_t BgL_nodez00_2430)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 184 */
			{
				BgL_castz00_bglt BgL_nodez00_1306;

				{	/* Ast/remove.scm 185 */
					BgL_castz00_bglt BgL_auxz00_3384;

					BgL_nodez00_1306 = (BgL_castz00_bglt) (BgL_nodez00_2430);
					{	/* Ast/remove.scm 185 */
						BgL_nodez00_bglt BgL_arg3436z00_1715;

						BgL_arg3436z00_1715 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1306))->BgL_argz00);
						{	/* Ast/remove.scm 185 */
							obj_t BgL_method3256z00_1718;

							{	/* Ast/remove.scm 185 */
								BgL_objectz00_bglt BgL_objz00_1719;

								BgL_objz00_1719 = (BgL_objectz00_bglt) (BgL_arg3436z00_1715);
								{	/* Ast/remove.scm 185 */
									long BgL_objzd2classzd2numz00_1720;

									BgL_objzd2classzd2numz00_1720 =
										BGL_OBJECT_CLASS_NUM(BgL_objz00_1719);
									{	/* Ast/remove.scm 185 */
										obj_t BgL_arg2643z00_1721;

										BgL_arg2643z00_1721 =
											PROCEDURE_REF
											(BGl_nodezd2removez12zd2envz12zzast_removez00,
											(int) (((long) 1)));
										{	/* Ast/remove.scm 185 */
											obj_t BgL_arrayz00_1723;

											int BgL_offsetz00_1724;

											BgL_arrayz00_1723 = BgL_arg2643z00_1721;
											BgL_offsetz00_1724 =
												(int) (BgL_objzd2classzd2numz00_1720);
											{	/* Ast/remove.scm 185 */
												long BgL_offsetz00_1725;

												BgL_offsetz00_1725 =
													((long) (BgL_offsetz00_1724) - OBJECT_TYPE);
												{	/* Ast/remove.scm 185 */
													long BgL_modz00_1726;

													{	/* Ast/remove.scm 185 */
														int BgL_arg2645z00_1727;

														BgL_arg2645z00_1727 = (int) (((long) 16));
														{	/* Ast/remove.scm 185 */
															long BgL_auxz00_3394;

															BgL_auxz00_3394 = (long) (BgL_arg2645z00_1727);
															BgL_modz00_1726 =
																(BgL_offsetz00_1725 / BgL_auxz00_3394);
													}}
													{	/* Ast/remove.scm 185 */
														long BgL_restz00_1728;

														{	/* Ast/remove.scm 185 */
															int BgL_arg2644z00_1729;

															BgL_arg2644z00_1729 = (int) (((long) 16));
															{	/* Ast/remove.scm 185 */
																long BgL_auxz00_3398;

																BgL_auxz00_3398 = (long) (BgL_arg2644z00_1729);
																BgL_restz00_1728 =
																	(BgL_offsetz00_1725 % BgL_auxz00_3398);
														}}
														{	/* Ast/remove.scm 185 */

															BgL_method3256z00_1718 =
																VECTOR_REF(VECTOR_REF(BgL_arrayz00_1723,
																	(int) (BgL_modz00_1726)),
																(int) (BgL_restz00_1728));
							}}}}}}}}
							PROCEDURE_ENTRY(BgL_method3256z00_1718) (BgL_method3256z00_1718,
								(obj_t) (BgL_arg3436z00_1715), BEOA);
					}}
					BgL_auxz00_3384 = BgL_nodez00_1306;
					return (obj_t) (BgL_auxz00_3384);
				}
			}
		}
	}



/* node-remove!-extern3272 */
	obj_t BGl_nodezd2removez12zd2extern3272z12zzast_removez00(obj_t
		BgL_envz00_2431, obj_t BgL_nodez00_2432)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 177 */
			{
				BgL_externz00_bglt BgL_nodez00_1300;

				{	/* Ast/remove.scm 178 */
					BgL_externz00_bglt BgL_auxz00_3410;

					BgL_nodez00_1300 = (BgL_externz00_bglt) (BgL_nodez00_2432);
					{	/* Ast/remove.scm 178 */
						obj_t BgL_arg3434z00_1713;

						BgL_arg3434z00_1713 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1300))->BgL_exprza2za2);
						BGl_nodezd2removeza2z12z62zzast_removez00(BgL_arg3434z00_1713);
					}
					BgL_auxz00_3410 = BgL_nodez00_1300;
					return (obj_t) (BgL_auxz00_3410);
				}
			}
		}
	}



/* node-remove!-funcall3270 */
	obj_t BGl_nodezd2removez12zd2funcall3270z12zzast_removez00(obj_t
		BgL_envz00_2433, obj_t BgL_nodez00_2434)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 169 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1292;

				{	/* Ast/remove.scm 170 */
					BgL_funcallz00_bglt BgL_auxz00_3415;

					BgL_nodez00_1292 = (BgL_funcallz00_bglt) (BgL_nodez00_2434);
					{	/* Ast/remove.scm 170 */
						obj_t BgL_arg3430z00_1295;

						{	/* Ast/remove.scm 170 */
							BgL_nodez00_bglt BgL_arg3431z00_1296;

							BgL_arg3431z00_1296 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1292))->BgL_funz00);
							{	/* Ast/remove.scm 170 */
								obj_t BgL_method3256z00_1685;

								{	/* Ast/remove.scm 170 */
									BgL_objectz00_bglt BgL_objz00_1686;

									BgL_objz00_1686 = (BgL_objectz00_bglt) (BgL_arg3431z00_1296);
									{	/* Ast/remove.scm 170 */
										long BgL_objzd2classzd2numz00_1687;

										BgL_objzd2classzd2numz00_1687 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1686);
										{	/* Ast/remove.scm 170 */
											obj_t BgL_arg2643z00_1688;

											BgL_arg2643z00_1688 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 170 */
												obj_t BgL_arrayz00_1690;

												int BgL_offsetz00_1691;

												BgL_arrayz00_1690 = BgL_arg2643z00_1688;
												BgL_offsetz00_1691 =
													(int) (BgL_objzd2classzd2numz00_1687);
												{	/* Ast/remove.scm 170 */
													long BgL_offsetz00_1692;

													BgL_offsetz00_1692 =
														((long) (BgL_offsetz00_1691) - OBJECT_TYPE);
													{	/* Ast/remove.scm 170 */
														long BgL_modz00_1693;

														{	/* Ast/remove.scm 170 */
															int BgL_arg2645z00_1694;

															BgL_arg2645z00_1694 = (int) (((long) 16));
															{	/* Ast/remove.scm 170 */
																long BgL_auxz00_3425;

																BgL_auxz00_3425 = (long) (BgL_arg2645z00_1694);
																BgL_modz00_1693 =
																	(BgL_offsetz00_1692 / BgL_auxz00_3425);
														}}
														{	/* Ast/remove.scm 170 */
															long BgL_restz00_1695;

															{	/* Ast/remove.scm 170 */
																int BgL_arg2644z00_1696;

																BgL_arg2644z00_1696 = (int) (((long) 16));
																{	/* Ast/remove.scm 170 */
																	long BgL_auxz00_3429;

																	BgL_auxz00_3429 =
																		(long) (BgL_arg2644z00_1696);
																	BgL_restz00_1695 =
																		(BgL_offsetz00_1692 % BgL_auxz00_3429);
															}}
															{	/* Ast/remove.scm 170 */

																BgL_method3256z00_1685 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1690,
																		(int) (BgL_modz00_1693)),
																	(int) (BgL_restz00_1695));
								}}}}}}}}
								BgL_arg3430z00_1295 =
									PROCEDURE_ENTRY(BgL_method3256z00_1685)
									(BgL_method3256z00_1685, (obj_t) (BgL_arg3431z00_1296), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3439;

							BgL_auxz00_3439 = (BgL_nodez00_bglt) (BgL_arg3430z00_1295);
							((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1292))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3439), BUNSPEC);
					}}
					{	/* Ast/remove.scm 171 */
						obj_t BgL_arg3432z00_1297;

						BgL_arg3432z00_1297 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1292))->BgL_argsz00);
						BGl_nodezd2removeza2z12z62zzast_removez00(BgL_arg3432z00_1297);
					}
					BgL_auxz00_3415 = BgL_nodez00_1292;
					return (obj_t) (BgL_auxz00_3415);
				}
			}
		}
	}



/* node-remove!-app-ly3268 */
	obj_t BGl_nodezd2removez12zd2appzd2ly3268zc0zzast_removez00(obj_t
		BgL_envz00_2435, obj_t BgL_nodez00_2436)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 161 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1283;

				{	/* Ast/remove.scm 162 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3446;

					BgL_nodez00_1283 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2436);
					{	/* Ast/remove.scm 162 */
						obj_t BgL_arg3422z00_1286;

						{	/* Ast/remove.scm 162 */
							BgL_nodez00_bglt BgL_arg3424z00_1287;

							BgL_arg3424z00_1287 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1283))->BgL_funz00);
							{	/* Ast/remove.scm 162 */
								obj_t BgL_method3256z00_1627;

								{	/* Ast/remove.scm 162 */
									BgL_objectz00_bglt BgL_objz00_1628;

									BgL_objz00_1628 = (BgL_objectz00_bglt) (BgL_arg3424z00_1287);
									{	/* Ast/remove.scm 162 */
										long BgL_objzd2classzd2numz00_1629;

										BgL_objzd2classzd2numz00_1629 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1628);
										{	/* Ast/remove.scm 162 */
											obj_t BgL_arg2643z00_1630;

											BgL_arg2643z00_1630 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 162 */
												obj_t BgL_arrayz00_1632;

												int BgL_offsetz00_1633;

												BgL_arrayz00_1632 = BgL_arg2643z00_1630;
												BgL_offsetz00_1633 =
													(int) (BgL_objzd2classzd2numz00_1629);
												{	/* Ast/remove.scm 162 */
													long BgL_offsetz00_1634;

													BgL_offsetz00_1634 =
														((long) (BgL_offsetz00_1633) - OBJECT_TYPE);
													{	/* Ast/remove.scm 162 */
														long BgL_modz00_1635;

														{	/* Ast/remove.scm 162 */
															int BgL_arg2645z00_1636;

															BgL_arg2645z00_1636 = (int) (((long) 16));
															{	/* Ast/remove.scm 162 */
																long BgL_auxz00_3456;

																BgL_auxz00_3456 = (long) (BgL_arg2645z00_1636);
																BgL_modz00_1635 =
																	(BgL_offsetz00_1634 / BgL_auxz00_3456);
														}}
														{	/* Ast/remove.scm 162 */
															long BgL_restz00_1637;

															{	/* Ast/remove.scm 162 */
																int BgL_arg2644z00_1638;

																BgL_arg2644z00_1638 = (int) (((long) 16));
																{	/* Ast/remove.scm 162 */
																	long BgL_auxz00_3460;

																	BgL_auxz00_3460 =
																		(long) (BgL_arg2644z00_1638);
																	BgL_restz00_1637 =
																		(BgL_offsetz00_1634 % BgL_auxz00_3460);
															}}
															{	/* Ast/remove.scm 162 */

																BgL_method3256z00_1627 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1632,
																		(int) (BgL_modz00_1635)),
																	(int) (BgL_restz00_1637));
								}}}}}}}}
								BgL_arg3422z00_1286 =
									PROCEDURE_ENTRY(BgL_method3256z00_1627)
									(BgL_method3256z00_1627, (obj_t) (BgL_arg3424z00_1287), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3470;

							BgL_auxz00_3470 = (BgL_nodez00_bglt) (BgL_arg3422z00_1286);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1283))->BgL_funz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3470), BUNSPEC);
					}}
					{	/* Ast/remove.scm 163 */
						obj_t BgL_arg3425z00_1288;

						{	/* Ast/remove.scm 163 */
							BgL_nodez00_bglt BgL_arg3426z00_1289;

							BgL_arg3426z00_1289 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1283))->BgL_argz00);
							{	/* Ast/remove.scm 163 */
								obj_t BgL_method3256z00_1656;

								{	/* Ast/remove.scm 163 */
									BgL_objectz00_bglt BgL_objz00_1657;

									BgL_objz00_1657 = (BgL_objectz00_bglt) (BgL_arg3426z00_1289);
									{	/* Ast/remove.scm 163 */
										long BgL_objzd2classzd2numz00_1658;

										BgL_objzd2classzd2numz00_1658 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_1657);
										{	/* Ast/remove.scm 163 */
											obj_t BgL_arg2643z00_1659;

											BgL_arg2643z00_1659 =
												PROCEDURE_REF
												(BGl_nodezd2removez12zd2envz12zzast_removez00,
												(int) (((long) 1)));
											{	/* Ast/remove.scm 163 */
												obj_t BgL_arrayz00_1661;

												int BgL_offsetz00_1662;

												BgL_arrayz00_1661 = BgL_arg2643z00_1659;
												BgL_offsetz00_1662 =
													(int) (BgL_objzd2classzd2numz00_1658);
												{	/* Ast/remove.scm 163 */
													long BgL_offsetz00_1663;

													BgL_offsetz00_1663 =
														((long) (BgL_offsetz00_1662) - OBJECT_TYPE);
													{	/* Ast/remove.scm 163 */
														long BgL_modz00_1664;

														{	/* Ast/remove.scm 163 */
															int BgL_arg2645z00_1665;

															BgL_arg2645z00_1665 = (int) (((long) 16));
															{	/* Ast/remove.scm 163 */
																long BgL_auxz00_3482;

																BgL_auxz00_3482 = (long) (BgL_arg2645z00_1665);
																BgL_modz00_1664 =
																	(BgL_offsetz00_1663 / BgL_auxz00_3482);
														}}
														{	/* Ast/remove.scm 163 */
															long BgL_restz00_1666;

															{	/* Ast/remove.scm 163 */
																int BgL_arg2644z00_1667;

																BgL_arg2644z00_1667 = (int) (((long) 16));
																{	/* Ast/remove.scm 163 */
																	long BgL_auxz00_3486;

																	BgL_auxz00_3486 =
																		(long) (BgL_arg2644z00_1667);
																	BgL_restz00_1666 =
																		(BgL_offsetz00_1663 % BgL_auxz00_3486);
															}}
															{	/* Ast/remove.scm 163 */

																BgL_method3256z00_1656 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_1661,
																		(int) (BgL_modz00_1664)),
																	(int) (BgL_restz00_1666));
								}}}}}}}}
								BgL_arg3425z00_1288 =
									PROCEDURE_ENTRY(BgL_method3256z00_1656)
									(BgL_method3256z00_1656, (obj_t) (BgL_arg3426z00_1289), BEOA);
						}}
						{
							BgL_nodez00_bglt BgL_auxz00_3496;

							BgL_auxz00_3496 = (BgL_nodez00_bglt) (BgL_arg3425z00_1288);
							((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1283))->BgL_argz00) =
								((BgL_nodez00_bglt) BgL_auxz00_3496), BUNSPEC);
					}}
					BgL_auxz00_3446 = BgL_nodez00_1283;
					return (obj_t) (BgL_auxz00_3446);
				}
			}
		}
	}



/* node-remove!-app3266 */
	obj_t BGl_nodezd2removez12zd2app3266z12zzast_removez00(obj_t BgL_envz00_2437,
		obj_t BgL_nodez00_2438)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 153 */
			{
				BgL_appz00_bglt BgL_nodez00_1275;

				{	/* Ast/remove.scm 154 */
					BgL_appz00_bglt BgL_auxz00_3501;

					BgL_nodez00_1275 = (BgL_appz00_bglt) (BgL_nodez00_2438);
					{	/* Ast/remove.scm 154 */
						obj_t BgL_arg3418z00_1278;

						{	/* Ast/remove.scm 154 */
							BgL_varz00_bglt BgL_arg3419z00_1279;

							BgL_arg3419z00_1279 =
								(((BgL_appz00_bglt) CREF(BgL_nodez00_1275))->BgL_funz00);
							{	/* Ast/remove.scm 154 */
								BgL_nodez00_bglt BgL_nodez00_1596;

								BgL_nodez00_1596 = (BgL_nodez00_bglt) (BgL_arg3419z00_1279);
								{	/* Ast/remove.scm 154 */
									obj_t BgL_method3256z00_1597;

									{	/* Ast/remove.scm 154 */
										BgL_objectz00_bglt BgL_objz00_1598;

										BgL_objz00_1598 = (BgL_objectz00_bglt) (BgL_nodez00_1596);
										{	/* Ast/remove.scm 154 */
											long BgL_objzd2classzd2numz00_1599;

											BgL_objzd2classzd2numz00_1599 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_1598);
											{	/* Ast/remove.scm 154 */
												obj_t BgL_arg2643z00_1600;

												BgL_arg2643z00_1600 =
													PROCEDURE_REF
													(BGl_nodezd2removez12zd2envz12zzast_removez00,
													(int) (((long) 1)));
												{	/* Ast/remove.scm 154 */
													obj_t BgL_arrayz00_1602;

													int BgL_offsetz00_1603;

													BgL_arrayz00_1602 = BgL_arg2643z00_1600;
													BgL_offsetz00_1603 =
														(int) (BgL_objzd2classzd2numz00_1599);
													{	/* Ast/remove.scm 154 */
														long BgL_offsetz00_1604;

														BgL_offsetz00_1604 =
															((long) (BgL_offsetz00_1603) - OBJECT_TYPE);
														{	/* Ast/remove.scm 154 */
															long BgL_modz00_1605;

															{	/* Ast/remove.scm 154 */
																int BgL_arg2645z00_1606;

																BgL_arg2645z00_1606 = (int) (((long) 16));
																{	/* Ast/remove.scm 154 */
																	long BgL_auxz00_3512;

																	BgL_auxz00_3512 =
																		(long) (BgL_arg2645z00_1606);
																	BgL_modz00_1605 =
																		(BgL_offsetz00_1604 / BgL_auxz00_3512);
															}}
															{	/* Ast/remove.scm 154 */
																long BgL_restz00_1607;

																{	/* Ast/remove.scm 154 */
																	int BgL_arg2644z00_1608;

																	BgL_arg2644z00_1608 = (int) (((long) 16));
																	{	/* Ast/remove.scm 154 */
																		long BgL_auxz00_3516;

																		BgL_auxz00_3516 =
																			(long) (BgL_arg2644z00_1608);
																		BgL_restz00_1607 =
																			(BgL_offsetz00_1604 % BgL_auxz00_3516);
																}}
																{	/* Ast/remove.scm 154 */

																	BgL_method3256z00_1597 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_1602,
																			(int) (BgL_modz00_1605)),
																		(int) (BgL_restz00_1607));
									}}}}}}}}
									BgL_arg3418z00_1278 =
										PROCEDURE_ENTRY(BgL_method3256z00_1597)
										(BgL_method3256z00_1597, (obj_t) (BgL_nodez00_1596), BEOA);
						}}}
						{
							BgL_varz00_bglt BgL_auxz00_3526;

							BgL_auxz00_3526 = (BgL_varz00_bglt) (BgL_arg3418z00_1278);
							((((BgL_appz00_bglt) CREF(BgL_nodez00_1275))->BgL_funz00) =
								((BgL_varz00_bglt) BgL_auxz00_3526), BUNSPEC);
					}}
					{	/* Ast/remove.scm 155 */
						obj_t BgL_arg3420z00_1280;

						BgL_arg3420z00_1280 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1275))->BgL_argsz00);
						BGl_nodezd2removeza2z12z62zzast_removez00(BgL_arg3420z00_1280);
					}
					BgL_auxz00_3501 = BgL_nodez00_1275;
					return (obj_t) (BgL_auxz00_3501);
				}
			}
		}
	}



/* node-remove!-sequenc3264 */
	obj_t BGl_nodezd2removez12zd2sequenc3264z12zzast_removez00(obj_t
		BgL_envz00_2439, obj_t BgL_nodez00_2440)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 146 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1269;

				{	/* Ast/remove.scm 147 */
					BgL_sequencez00_bglt BgL_auxz00_3533;

					BgL_nodez00_1269 = (BgL_sequencez00_bglt) (BgL_nodez00_2440);
					{	/* Ast/remove.scm 147 */
						obj_t BgL_arg3416z00_1593;

						BgL_arg3416z00_1593 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1269))->BgL_nodesz00);
						BGl_nodezd2removeza2z12z62zzast_removez00(BgL_arg3416z00_1593);
					}
					BgL_auxz00_3533 = BgL_nodez00_1269;
					return (obj_t) (BgL_auxz00_3533);
				}
			}
		}
	}



/* node-remove!-kwote3262 */
	obj_t BGl_nodezd2removez12zd2kwote3262z12zzast_removez00(obj_t
		BgL_envz00_2441, obj_t BgL_nodez00_2442)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 140 */
			return (obj_t) ((BgL_kwotez00_bglt) (BgL_nodez00_2442));
		}
	}



/* node-remove!-var3260 */
	obj_t BGl_nodezd2removez12zd2var3260z12zzast_removez00(obj_t BgL_envz00_2443,
		obj_t BgL_nodez00_2444)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 134 */
			return (obj_t) ((BgL_varz00_bglt) (BgL_nodez00_2444));
		}
	}



/* node-remove!-atom3258 */
	obj_t BGl_nodezd2removez12zd2atom3258z12zzast_removez00(obj_t BgL_envz00_2445,
		obj_t BgL_nodez00_2446)
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 128 */
			return (obj_t) ((BgL_atomz00_bglt) (BgL_nodez00_2446));
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_removez00()
	{
		AN_OBJECT;
		{	/* Ast/remove.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3620z00zzast_removez00));
		}
	}

#ifdef __cplusplus
}
#endif
