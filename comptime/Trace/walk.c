/*===========================================================================*/
/*   (Trace/walk.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Trace/walk.scm)*/
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
	}                 *BgL_backendz00_bglt;


	static obj_t BGl_findzd2lastzd2nodez00zztrace_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_findzd2lastzd2nodezd2exter3421zd2zztrace_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_tracezd2nodezd2boxzd2ref3471zd2zztrace_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_tracezd2nodezd2fail3457z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2letzd2f3433z00zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_tracezd2nodezd2jumpzd2exzd2i3467z00zztrace_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	static obj_t BGl_tracezd2nodezd2extern3449z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2appzd2l3417z00zztrace_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_tracezd2nodezd2appzd2ly3445zd2zztrace_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zztrace_walkz00();
	static BgL_nodez00_bglt BGl_tracezd2nodezd2zztrace_walkz00(BgL_nodez00_bglt,
		obj_t);
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2setzd2e3435z00zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static obj_t BGl_tracezd2nodezd2condition3455z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztrace_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zztrace_walkz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_tracezd2nodezd2letzd2fun3461zd2zztrace_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_tracezd2nodezd2sequence3441z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	static obj_t BGl_tracezd2nodezd2app3443z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	static obj_t BGl_findzd2lastzd2nodezd2setq3423zd2zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2letzd2v3431z00zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_tracezd2nodezd2letzd2var3463zd2zztrace_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2app3415zd2zztrace_walkz00(obj_t, obj_t);
	static obj_t BGl_tracezd2nodezd2boxzd2setz123474zc0zztrace_walkz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t BGl_tracezd2nodezd2select3459z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__findzd2lastzd2nodez00zztrace_walkz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2tracezd2nodezd23479zd2zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2tracezd2nodezd23481zd2zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl__toplevelzd2tracezd2nodez00zztrace_walkz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	extern obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00;
	static obj_t BGl_findzd2lastzd2sexpz00zztrace_walkz00(obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2selec3429zd2zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_tracezd2nodezd2setzd2exzd2it3465z00zztrace_walkz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztrace_walkz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl__tracezd2nodezd2zztrace_walkz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t BGl_findzd2lastzd2nodezd2fail3427zd2zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2funca3419zd2zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztrace_walkz00 = BUNSPEC;
	static obj_t BGl_tracezd2funz12zc0zztrace_walkz00(obj_t, obj_t);
	static obj_t BGl_tracezd2nodeza2z12z62zztrace_walkz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztrace_walkz00();
	static obj_t BGl__findzd2lastzd2nodezd2defau3410zd2zztrace_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_pragmaz00zzast_nodez00;
	static obj_t BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl_tracezd2nodezd2makezd2box3469zd2zztrace_walkz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_castz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	static BgL_letzd2varzd2_bglt
		BGl_makezd2tracedzd2nodez00zztrace_walkz00(BgL_nodez00_bglt,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_findzd2lastzd2nodezd2seque3413zd2zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_tracezd2idzd2zztrace_walkz00(obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztrace_walkz00();
	static obj_t BGl_findzd2lastzd2nodezd2condi3425zd2zztrace_walkz00(obj_t,
		obj_t);
	static obj_t BGl_tracezd2nodezd2cast3451z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2walkz12zc0zztrace_walkz00(obj_t);
	static obj_t BGl__tracezd2nodezd2default3438z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_string(obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl__toplevelzd2tracezd2nodezd23475zd2zztrace_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl_tracezd2nodezd2funcall3447z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_tracezd2nodezd2setq3453z00zztrace_walkz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__tracezd2walkz12zc0zztrace_walkz00(obj_t, obj_t);
	static obj_t BGl_findzd2lastzd2nodezd2jumpzd23437z00zztrace_walkz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zztrace_walkz00();
	static obj_t __cnst[19];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4016z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4044z00,
		BGl_findzd2lastzd2nodezd2selec3429zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4017z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4045z00,
		BGl_findzd2lastzd2nodezd2letzd2v3431z00zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4018z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4046z00,
		BGl_findzd2lastzd2nodezd2letzd2f3433z00zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4020z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4047z00,
		BGl_findzd2lastzd2nodezd2jumpzd23437z00zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4019z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4048z00,
		BGl_findzd2lastzd2nodezd2setzd2e3435z00zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4021z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2s4049z00,
		BGl_tracezd2nodezd2sequence3441z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4022z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2a4050z00,
		BGl_tracezd2nodezd2app3443z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4023z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2a4051z00,
		BGl_tracezd2nodezd2appzd2ly3445zd2zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4024z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2f4052z00,
		BGl_tracezd2nodezd2funcall3447z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4025z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2e4053z00,
		BGl_tracezd2nodezd2extern3449z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4026z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2c4054z00,
		BGl_tracezd2nodezd2cast3451z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4027z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2s4055z00,
		BGl_tracezd2nodezd2setq3453z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4028z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2c4056z00,
		BGl_tracezd2nodezd2condition3455z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4030z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2s4057z00,
		BGl_tracezd2nodezd2select3459z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4029z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2f4058z00,
		BGl_tracezd2nodezd2fail3457z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4031z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2l4059z00,
		BGl_tracezd2nodezd2letzd2fun3461zd2zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4032z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2l4060z00,
		BGl_tracezd2nodezd2letzd2var3463zd2zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4033z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2s4061z00,
		BGl_tracezd2nodezd2setzd2exzd2it3465z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4034z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2j4062z00,
		BGl_tracezd2nodezd2jumpzd2exzd2i3467z00zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4035z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2m4063z00,
		BGl_tracezd2nodezd2makezd2box3469zd2zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4036z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2b4064z00,
		BGl_tracezd2nodezd2boxzd2ref3471zd2zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4037z00zztrace_walkz00,
		BgL_bgl_traceza7d2nodeza7d2b4065z00,
		BGl_tracezd2nodezd2boxzd2setz123474zc0zztrace_walkz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4038z00zztrace_walkz00,
		BgL_bgl_toplevelza7d2trace4066za7,
		BGl_toplevelzd2tracezd2nodezd23479zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4039z00zztrace_walkz00,
		BgL_bgl_toplevelza7d2trace4067za7,
		BGl_toplevelzd2tracezd2nodezd23481zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string4000z00zztrace_walkz00,
		BgL_bgl_string4000za700za7za7t4068za7, "", 0);
	      DEFINE_STRING(BGl_string4001z00zztrace_walkz00,
		BgL_bgl_string4001za700za7za7t4069za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string4002z00zztrace_walkz00,
		BgL_bgl_string4002za700za7za7t4070za7, "failure during postlude hook", 28);
	      DEFINE_STRING(BGl_string4003z00zztrace_walkz00,
		BgL_bgl_string4003za700za7za7t4071za7, "%toplevel@", 10);
	      DEFINE_STRING(BGl_string4004z00zztrace_walkz00,
		BgL_bgl_string4004za700za7za7t4072za7, "%import@", 8);
	      DEFINE_STRING(BGl_string4005z00zztrace_walkz00,
		BgL_bgl_string4005za700za7za7t4073za7, "find-last-node", 14);
	      DEFINE_STRING(BGl_string4006z00zztrace_walkz00,
		BgL_bgl_string4006za700za7za7t4074za7, "trace-node", 10);
	      DEFINE_STRING(BGl_string4007z00zztrace_walkz00,
		BgL_bgl_string4007za700za7za7t4075za7, "toplevel-trace-node", 19);
	      DEFINE_STRING(BGl_string4040z00zztrace_walkz00,
		BgL_bgl_string4040za700za7za7t4076za7, "trace_walk", 10);
	      DEFINE_STRING(BGl_string4041z00zztrace_walkz00,
		BgL_bgl_string4041za700za7za7t4077za7,
		"done value $env-pop-trace $env-push-trace current-dynamic-env dynamic-env quote let at location |:| env loc name aux no-trace imported-modules-init toplevel-init pass-started ",
		175);
	      DEFINE_STRING(BGl_string3995z00zztrace_walkz00,
		BgL_bgl_string3995za700za7za7t4078za7, "Trace", 5);
	      DEFINE_STRING(BGl_string3996z00zztrace_walkz00,
		BgL_bgl_string3996za700za7za7t4079za7, "   . ", 5);
	      DEFINE_STRING(BGl_string3997z00zztrace_walkz00,
		BgL_bgl_string3997za700za7za7t4080za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string3998z00zztrace_walkz00,
		BgL_bgl_string3998za700za7za7t4081za7, " error", 6);
	      DEFINE_STRING(BGl_string3999z00zztrace_walkz00,
		BgL_bgl_string3999za700za7za7t4082za7, "s", 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_findzd2lastzd2nodezd2defau3410zd2envz00zztrace_walkz00,
		BgL_bgl__findza7d2lastza7d2n4083z00,
		BGl__findzd2lastzd2nodezd2defau3410zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_tracezd2nodezd2envz00zztrace_walkz00,
		BgL_bgl__traceza7d2nodeza7d24084z00, BGl__tracezd2nodezd2zztrace_walkz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
		BgL_bgl__findza7d2lastza7d2n4085z00,
		BGl__findzd2lastzd2nodez00zztrace_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
		BgL_bgl__toplevelza7d2trac4086za7,
		BGl__toplevelzd2tracezd2nodez00zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2walkz12zd2envz12zztrace_walkz00,
		BgL_bgl__traceza7d2walkza7124087z00, BGl__tracezd2walkz12zc0zztrace_walkz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_tracezd2nodezd2default3438zd2envzd2zztrace_walkz00,
		BgL_bgl__traceza7d2nodeza7d24088z00,
		BGl__tracezd2nodezd2default3438z00zztrace_walkz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_toplevelzd2tracezd2nodezd23475zd2envz00zztrace_walkz00,
		BgL_bgl__toplevelza7d2trac4089za7,
		BGl__toplevelzd2tracezd2nodezd23475zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4008z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4090z00,
		BGl_findzd2lastzd2nodezd2seque3413zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4010z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4091z00,
		BGl_findzd2lastzd2nodezd2appzd2l3417z00zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4009z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4092z00,
		BGl_findzd2lastzd2nodezd2app3415zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4011z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4093z00,
		BGl_findzd2lastzd2nodezd2funca3419zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4012z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4094z00,
		BGl_findzd2lastzd2nodezd2exter3421zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4013z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4095z00,
		BGl_findzd2lastzd2nodezd2setq3423zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4014z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4096z00,
		BGl_findzd2lastzd2nodezd2condi3425zd2zztrace_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4015z00zztrace_walkz00,
		BgL_bgl_findza7d2lastza7d2no4097z00,
		BGl_findzd2lastzd2nodezd2fail3427zd2zztrace_walkz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztrace_walkz00(long
		BgL_checksumz00_3528, char *BgL_fromz00_3529)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztrace_walkz00))
				{
					BGl_requirezd2initializa7ationz75zztrace_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zztrace_walkz00();
					BGl_cnstzd2initzd2zztrace_walkz00();
					BGl_importedzd2moduleszd2initz00zztrace_walkz00();
					BGl_genericzd2initzd2zztrace_walkz00();
					BGl_methodzd2initzd2zztrace_walkz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztrace_walkz00()
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"trace_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"trace_walk");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztrace_walkz00()
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			{	/* Trace/walk.scm 15 */
				obj_t BgL_cportz00_3516;

				BgL_cportz00_3516 =
					bgl_open_input_string(BGl_string4041z00zztrace_walkz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3517;

					BgL_iz00_3517 = ((long) 18);
				BgL_loopz00_3518:
					if ((BgL_iz00_3517 == ((long) -1)))
						{	/* Trace/walk.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Trace/walk.scm 15 */
							{	/* Trace/walk.scm 15 */
								obj_t BgL_arg4043z00_3520;

								{	/* Trace/walk.scm 15 */

									{	/* Trace/walk.scm 15 */
										obj_t BgL_locationz00_3522;

										BgL_locationz00_3522 = BBOOL(((bool_t) 0));
										{	/* Trace/walk.scm 15 */

											BgL_arg4043z00_3520 =
												BGl_readz00zz__readerz00(BgL_cportz00_3516,
												BgL_locationz00_3522);
										}
									}
								}
								{	/* Trace/walk.scm 15 */
									int BgL_auxz00_3553;

									BgL_auxz00_3553 = (int) (BgL_iz00_3517);
									CNST_TABLE_SET(BgL_auxz00_3553, BgL_arg4043z00_3520);
							}}
							{	/* Trace/walk.scm 15 */
								int BgL_auxz00_3523;

								BgL_auxz00_3523 = (int) ((BgL_iz00_3517 - ((long) 1)));
								{
									long BgL_iz00_3558;

									BgL_iz00_3558 = (long) (BgL_auxz00_3523);
									BgL_iz00_3517 = BgL_iz00_3558;
									goto BgL_loopz00_3518;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztrace_walkz00()
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			return BUNSPEC;
		}
	}



/* trace-walk! */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2walkz12zc0zztrace_walkz00(obj_t
		BgL_globalsz00_15)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 37 */
			{	/* Trace/walk.scm 38 */
				obj_t BgL_list3491z00_962;

				{	/* Trace/walk.scm 38 */
					obj_t BgL_arg3493z00_964;

					{	/* Trace/walk.scm 38 */
						obj_t BgL_arg3495z00_966;

						BgL_arg3495z00_966 = MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
						BgL_arg3493z00_964 =
							MAKE_PAIR(BGl_string3995z00zztrace_walkz00, BgL_arg3495z00_966);
					}
					BgL_list3491z00_962 =
						MAKE_PAIR(BGl_string3996z00zztrace_walkz00, BgL_arg3493z00_964);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list3491z00_962);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string3995z00zztrace_walkz00;
			{
				obj_t BgL_hooksz00_970;

				obj_t BgL_hnamesz00_971;

				BgL_hooksz00_970 = BNIL;
				BgL_hnamesz00_971 = BNIL;
			BgL_zc3anonymousza33496ze3z83_972:
				if (NULLP(BgL_hooksz00_970))
					{	/* Trace/walk.scm 38 */
						CNST_TABLE_REF(((long) 0));
					}
				else
					{	/* Trace/walk.scm 38 */
						bool_t BgL_testz00_3570;

						{	/* Trace/walk.scm 38 */
							obj_t BgL_fun3504z00_980;

							BgL_fun3504z00_980 = CAR(BgL_hooksz00_970);
							BgL_testz00_3570 =
								CBOOL(PROCEDURE_ENTRY(BgL_fun3504z00_980) (BgL_fun3504z00_980,
									BEOA));
						}
						if (BgL_testz00_3570)
							{
								obj_t BgL_hnamesz00_3577;

								obj_t BgL_hooksz00_3575;

								BgL_hooksz00_3575 = CDR(BgL_hooksz00_970);
								BgL_hnamesz00_3577 = CDR(BgL_hnamesz00_971);
								BgL_hnamesz00_971 = BgL_hnamesz00_3577;
								BgL_hooksz00_970 = BgL_hooksz00_3575;
								goto BgL_zc3anonymousza33496ze3z83_972;
							}
						else
							{	/* Trace/walk.scm 38 */
								BGl_internalzd2errorzd2zztools_errorz00
									(BGl_string3995z00zztrace_walkz00,
									BGl_string3997z00zztrace_walkz00, CAR(BgL_hnamesz00_971));
							}
					}
			}
			{	/* Trace/walk.scm 44 */
				obj_t BgL_idz00_983;

				BgL_idz00_983 = CNST_TABLE_REF(((long) 1));
				{	/* Trace/walk.scm 44 */
					obj_t BgL_gloz00_984;

					{	/* Trace/walk.scm 45 */
						obj_t BgL_list3509z00_989;

						BgL_list3509z00_989 =
							MAKE_PAIR(BGl_za2moduleza2z00zzmodule_modulez00, BNIL);
						BgL_gloz00_984 =
							BGl_findzd2globalzd2zzast_envz00(BgL_idz00_983,
							BgL_list3509z00_989);
					}
					{	/* Trace/walk.scm 45 */

						if (BGl_iszd2azf3z21zz__objectz00(BgL_gloz00_984,
								BGl_globalz00zzast_varz00))
							{	/* Trace/walk.scm 47 */
								BgL_valuez00_bglt BgL_instance3361z00_986;

								{
									BgL_variablez00_bglt BgL_auxz00_3586;

									BgL_auxz00_3586 =
										(BgL_variablez00_bglt) (
										(BgL_globalz00_bglt) (BgL_gloz00_984));
									BgL_instance3361z00_986 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3586))->
										BgL_valuez00);
								}
								{	/* Trace/walk.scm 48 */
									BgL_nodez00_bglt BgL_arg3507z00_987;

									{	/* Trace/walk.scm 48 */
										obj_t BgL_arg3508z00_988;

										{
											BgL_sfunz00_bglt BgL_auxz00_3590;

											BgL_auxz00_3590 =
												(BgL_sfunz00_bglt) (BgL_instance3361z00_986);
											BgL_arg3508z00_988 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3590))->
												BgL_bodyz00);
										}
										{	/* Trace/walk.scm 48 */
											BgL_nodez00_bglt BgL_res3870z00_1931;

											{	/* Trace/walk.scm 48 */
												BgL_nodez00_bglt BgL_nodez00_1905;

												BgL_nodez00_1905 =
													(BgL_nodez00_bglt) (BgL_arg3508z00_988);
												{	/* Trace/walk.scm 48 */
													obj_t BgL_method3476z00_1906;

													{	/* Trace/walk.scm 48 */
														BgL_objectz00_bglt BgL_objz00_1907;

														BgL_objz00_1907 =
															(BgL_objectz00_bglt) (BgL_nodez00_1905);
														{	/* Trace/walk.scm 48 */
															long BgL_objzd2classzd2numz00_1908;

															BgL_objzd2classzd2numz00_1908 =
																BGL_OBJECT_CLASS_NUM(BgL_objz00_1907);
															{	/* Trace/walk.scm 48 */
																obj_t BgL_arg2643z00_1909;

																BgL_arg2643z00_1909 =
																	PROCEDURE_REF
																	(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
																	(int) (((long) 1)));
																{	/* Trace/walk.scm 48 */
																	obj_t BgL_arrayz00_1911;

																	int BgL_offsetz00_1912;

																	BgL_arrayz00_1911 = BgL_arg2643z00_1909;
																	BgL_offsetz00_1912 =
																		(int) (BgL_objzd2classzd2numz00_1908);
																	{	/* Trace/walk.scm 48 */
																		long BgL_offsetz00_1913;

																		BgL_offsetz00_1913 =
																			(
																			(long) (BgL_offsetz00_1912) -
																			OBJECT_TYPE);
																		{	/* Trace/walk.scm 48 */
																			long BgL_modz00_1914;

																			{	/* Trace/walk.scm 48 */
																				int BgL_arg2645z00_1915;

																				BgL_arg2645z00_1915 =
																					(int) (((long) 16));
																				{	/* Trace/walk.scm 48 */
																					long BgL_auxz00_3602;

																					BgL_auxz00_3602 =
																						(long) (BgL_arg2645z00_1915);
																					BgL_modz00_1914 =
																						(BgL_offsetz00_1913 /
																						BgL_auxz00_3602);
																			}}
																			{	/* Trace/walk.scm 48 */
																				long BgL_restz00_1916;

																				{	/* Trace/walk.scm 48 */
																					int BgL_arg2644z00_1917;

																					BgL_arg2644z00_1917 =
																						(int) (((long) 16));
																					{	/* Trace/walk.scm 48 */
																						long BgL_auxz00_3606;

																						BgL_auxz00_3606 =
																							(long) (BgL_arg2644z00_1917);
																						BgL_restz00_1916 =
																							(BgL_offsetz00_1913 %
																							BgL_auxz00_3606);
																				}}
																				{	/* Trace/walk.scm 48 */

																					BgL_method3476z00_1906 =
																						VECTOR_REF(VECTOR_REF
																						(BgL_arrayz00_1911,
																							(int) (BgL_modz00_1914)),
																						(int) (BgL_restz00_1916));
													}}}}}}}}
													BgL_res3870z00_1931 =
														(BgL_nodez00_bglt) (PROCEDURE_ENTRY
														(BgL_method3476z00_1906) (BgL_method3476z00_1906,
															(obj_t) (BgL_nodez00_1905), BEOA));
											}}
											BgL_arg3507z00_987 = BgL_res3870z00_1931;
									}}
									{
										obj_t BgL_auxz00_3619;

										BgL_sfunz00_bglt BgL_auxz00_3617;

										BgL_auxz00_3619 = (obj_t) (BgL_arg3507z00_987);
										BgL_auxz00_3617 =
											(BgL_sfunz00_bglt) (BgL_instance3361z00_986);
										((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3617))->BgL_bodyz00) =
											((obj_t) BgL_auxz00_3619), BUNSPEC);
							}}}
						else
							{	/* Trace/walk.scm 46 */
								BFALSE;
							}
					}
				}
			}
			{
				obj_t BgL_l3398z00_991;

				BgL_l3398z00_991 = BgL_globalsz00_15;
			BgL_zc3anonymousza33510ze3z83_992:
				if (PAIRP(BgL_l3398z00_991))
					{	/* Trace/walk.scm 50 */
						BGl_tracezd2funz12zc0zztrace_walkz00(CAR(BgL_l3398z00_991), BNIL);
						{
							obj_t BgL_l3398z00_3626;

							BgL_l3398z00_3626 = CDR(BgL_l3398z00_991);
							BgL_l3398z00_991 = BgL_l3398z00_3626;
							goto BgL_zc3anonymousza33510ze3z83_992;
						}
					}
				else
					{	/* Trace/walk.scm 50 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Trace/walk.scm 51 */
					{	/* Trace/walk.scm 51 */
						obj_t BgL_port3400z00_999;

						{	/* Trace/walk.scm 51 */
							obj_t BgL_res3871z00_1940;

							{	/* Trace/walk.scm 51 */
								obj_t BgL_auxz00_3631;

								BgL_auxz00_3631 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res3871z00_1940 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_auxz00_3631);
							}
							BgL_port3400z00_999 = BgL_res3871z00_1940;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port3400z00_999);
						bgl_display_string(BGl_string3998z00zztrace_walkz00,
							BgL_port3400z00_999);
						{	/* Trace/walk.scm 51 */
							obj_t BgL_arg3514z00_1000;

							{	/* Trace/walk.scm 51 */
								bool_t BgL_testz00_3636;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Trace/walk.scm 51 */
										BgL_testz00_3636 =
											BGl_2ze3ze3zz__r4_numbers_6_5z00
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
											BINT(((long) 1)));
									}
								else
									{	/* Trace/walk.scm 51 */
										BgL_testz00_3636 = ((bool_t) 0);
									}
								if (BgL_testz00_3636)
									{	/* Trace/walk.scm 51 */
										BgL_arg3514z00_1000 = BGl_string3999z00zztrace_walkz00;
									}
								else
									{	/* Trace/walk.scm 51 */
										BgL_arg3514z00_1000 = BGl_string4000z00zztrace_walkz00;
									}
							}
							bgl_display_obj(BgL_arg3514z00_1000, BgL_port3400z00_999);
						}
						bgl_display_string(BGl_string4001z00zztrace_walkz00,
							BgL_port3400z00_999);
						bgl_display_char(((unsigned char) '\n'), BgL_port3400z00_999);
					}
					{	/* Trace/walk.scm 51 */
						obj_t BgL_list3517z00_1003;

						BgL_list3517z00_1003 = MAKE_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list3517z00_1003);
					}
				}
			else
				{
					obj_t BgL_hooksz00_1007;

					obj_t BgL_hnamesz00_1008;

					BgL_hooksz00_1007 = BNIL;
					BgL_hnamesz00_1008 = BNIL;
				BgL_zc3anonymousza33518ze3z83_1009:
					if (NULLP(BgL_hooksz00_1007))
						{	/* Trace/walk.scm 51 */
							return BgL_globalsz00_15;
						}
					else
						{	/* Trace/walk.scm 51 */
							bool_t BgL_testz00_3649;

							{	/* Trace/walk.scm 51 */
								obj_t BgL_fun3525z00_1016;

								BgL_fun3525z00_1016 = CAR(BgL_hooksz00_1007);
								BgL_testz00_3649 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun3525z00_1016)
									(BgL_fun3525z00_1016, BEOA));
							}
							if (BgL_testz00_3649)
								{
									obj_t BgL_hnamesz00_3656;

									obj_t BgL_hooksz00_3654;

									BgL_hooksz00_3654 = CDR(BgL_hooksz00_1007);
									BgL_hnamesz00_3656 = CDR(BgL_hnamesz00_1008);
									BgL_hnamesz00_1008 = BgL_hnamesz00_3656;
									BgL_hooksz00_1007 = BgL_hooksz00_3654;
									goto BgL_zc3anonymousza33518ze3z83_1009;
								}
							else
								{	/* Trace/walk.scm 51 */
									obj_t BgL_arg3524z00_1015;

									BgL_arg3524z00_1015 = CAR(BgL_hnamesz00_1008);
									return
										BGl_internalzd2errorzd2zztools_errorz00
										(BGl_za2currentzd2passza2zd2zzengine_passz00,
										BGl_string4002z00zztrace_walkz00, BgL_arg3524z00_1015);
								}
						}
				}
		}
	}



/* _trace-walk! */
	obj_t BGl__tracezd2walkz12zc0zztrace_walkz00(obj_t BgL_envz00_3386,
		obj_t BgL_globalsz00_3387)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 37 */
			return BGl_tracezd2walkz12zc0zztrace_walkz00(BgL_globalsz00_3387);
		}
	}



/* trace-id */
	obj_t BGl_tracezd2idzd2zztrace_walkz00(obj_t BgL_vz00_16)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 62 */
			{	/* Trace/walk.scm 64 */
				bool_t BgL_testz00_3661;

				if (BGl_iszd2azf3z21zz__objectz00(BgL_vz00_16,
						BGl_globalz00zzast_varz00))
					{	/* Trace/walk.scm 64 */
						obj_t BgL_auxz00_3664;

						{
							BgL_variablez00_bglt BgL_auxz00_3665;

							BgL_auxz00_3665 =
								(BgL_variablez00_bglt) ((BgL_globalz00_bglt) (BgL_vz00_16));
							BgL_auxz00_3664 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3665))->BgL_idz00);
						}
						BgL_testz00_3661 = (BgL_auxz00_3664 == CNST_TABLE_REF(((long) 1)));
					}
				else
					{	/* Trace/walk.scm 64 */
						BgL_testz00_3661 = ((bool_t) 0);
					}
				if (BgL_testz00_3661)
					{	/* Trace/walk.scm 65 */
						obj_t BgL_arg3528z00_1020;

						{	/* Trace/walk.scm 65 */
							obj_t BgL_arg3529z00_1021;

							obj_t BgL_arg3530z00_1022;

							{	/* Trace/walk.scm 65 */
								obj_t BgL_arg3533z00_1025;

								BgL_arg3533z00_1025 =
									string_to_symbol(BSTRING_TO_STRING
									(BGl_string4003z00zztrace_walkz00));
								{	/* Trace/walk.scm 65 */
									obj_t BgL_res3873z00_1958;

									{	/* Trace/walk.scm 65 */
										obj_t BgL_arg2063z00_1957;

										BgL_arg2063z00_1957 = SYMBOL_TO_STRING(BgL_arg3533z00_1025);
										BgL_res3873z00_1958 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1957);
									}
									BgL_arg3529z00_1021 = BgL_res3873z00_1958;
								}
							}
							{	/* Trace/walk.scm 65 */
								obj_t BgL_arg3535z00_1026;

								{
									BgL_globalz00_bglt BgL_auxz00_3675;

									BgL_auxz00_3675 = (BgL_globalz00_bglt) (BgL_vz00_16);
									BgL_arg3535z00_1026 =
										(((BgL_globalz00_bglt) CREF(BgL_auxz00_3675))->
										BgL_modulez00);
								}
								{	/* Trace/walk.scm 65 */
									obj_t BgL_res3874z00_1962;

									{	/* Trace/walk.scm 65 */
										obj_t BgL_arg2063z00_1961;

										BgL_arg2063z00_1961 = SYMBOL_TO_STRING(BgL_arg3535z00_1026);
										BgL_res3874z00_1962 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_1961);
									}
									BgL_arg3530z00_1022 = BgL_res3874z00_1962;
								}
							}
							{	/* Trace/walk.scm 65 */
								obj_t BgL_list3531z00_1023;

								{	/* Trace/walk.scm 65 */
									obj_t BgL_arg3532z00_1024;

									BgL_arg3532z00_1024 = MAKE_PAIR(BgL_arg3530z00_1022, BNIL);
									BgL_list3531z00_1023 =
										MAKE_PAIR(BgL_arg3529z00_1021, BgL_arg3532z00_1024);
								}
								BgL_arg3528z00_1020 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3531z00_1023);
							}
						}
						return string_to_symbol(BSTRING_TO_STRING(BgL_arg3528z00_1020));
					}
				else
					{	/* Trace/walk.scm 66 */
						bool_t BgL_testz00_3685;

						if (BGl_iszd2azf3z21zz__objectz00(BgL_vz00_16,
								BGl_globalz00zzast_varz00))
							{	/* Trace/walk.scm 66 */
								obj_t BgL_auxz00_3688;

								{
									BgL_variablez00_bglt BgL_auxz00_3689;

									BgL_auxz00_3689 =
										(BgL_variablez00_bglt) ((BgL_globalz00_bglt) (BgL_vz00_16));
									BgL_auxz00_3688 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3689))->BgL_idz00);
								}
								BgL_testz00_3685 =
									(BgL_auxz00_3688 == CNST_TABLE_REF(((long) 2)));
							}
						else
							{	/* Trace/walk.scm 66 */
								BgL_testz00_3685 = ((bool_t) 0);
							}
						if (BgL_testz00_3685)
							{	/* Trace/walk.scm 67 */
								obj_t BgL_arg3537z00_1028;

								{	/* Trace/walk.scm 67 */
									obj_t BgL_arg3538z00_1029;

									obj_t BgL_arg3539z00_1030;

									{	/* Trace/walk.scm 67 */
										obj_t BgL_arg3542z00_1033;

										BgL_arg3542z00_1033 =
											string_to_symbol(BSTRING_TO_STRING
											(BGl_string4004z00zztrace_walkz00));
										{	/* Trace/walk.scm 67 */
											obj_t BgL_res3875z00_1969;

											{	/* Trace/walk.scm 67 */
												obj_t BgL_arg2063z00_1968;

												BgL_arg2063z00_1968 =
													SYMBOL_TO_STRING(BgL_arg3542z00_1033);
												BgL_res3875z00_1969 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1968);
											}
											BgL_arg3538z00_1029 = BgL_res3875z00_1969;
										}
									}
									{	/* Trace/walk.scm 67 */
										obj_t BgL_arg3543z00_1034;

										{
											BgL_globalz00_bglt BgL_auxz00_3699;

											BgL_auxz00_3699 = (BgL_globalz00_bglt) (BgL_vz00_16);
											BgL_arg3543z00_1034 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_3699))->
												BgL_modulez00);
										}
										{	/* Trace/walk.scm 67 */
											obj_t BgL_res3876z00_1973;

											{	/* Trace/walk.scm 67 */
												obj_t BgL_arg2063z00_1972;

												BgL_arg2063z00_1972 =
													SYMBOL_TO_STRING(BgL_arg3543z00_1034);
												BgL_res3876z00_1973 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1972);
											}
											BgL_arg3539z00_1030 = BgL_res3876z00_1973;
										}
									}
									{	/* Trace/walk.scm 67 */
										obj_t BgL_list3540z00_1031;

										{	/* Trace/walk.scm 67 */
											obj_t BgL_arg3541z00_1032;

											BgL_arg3541z00_1032 =
												MAKE_PAIR(BgL_arg3539z00_1030, BNIL);
											BgL_list3540z00_1031 =
												MAKE_PAIR(BgL_arg3538z00_1029, BgL_arg3541z00_1032);
										}
										BgL_arg3537z00_1028 =
											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
											(BgL_list3540z00_1031);
									}
								}
								return string_to_symbol(BSTRING_TO_STRING(BgL_arg3537z00_1028));
							}
						else
							{
								BgL_variablez00_bglt BgL_auxz00_3709;

								BgL_auxz00_3709 = (BgL_variablez00_bglt) (BgL_vz00_16);
								return
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3709))->BgL_idz00);
							}
					}
			}
		}
	}



/* trace-fun! */
	obj_t BGl_tracezd2funz12zc0zztrace_walkz00(obj_t BgL_varz00_17,
		obj_t BgL_stackz00_18)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 77 */
			{	/* Trace/walk.scm 78 */
				BgL_valuez00_bglt BgL_funz00_1041;

				{
					BgL_variablez00_bglt BgL_auxz00_3712;

					BgL_auxz00_3712 = (BgL_variablez00_bglt) (BgL_varz00_17);
					BgL_funz00_1041 =
						(((BgL_variablez00_bglt) CREF(BgL_auxz00_3712))->BgL_valuez00);
				}
				{	/* Trace/walk.scm 78 */
					obj_t BgL_bodyz00_1042;

					{
						BgL_sfunz00_bglt BgL_auxz00_3715;

						BgL_auxz00_3715 = (BgL_sfunz00_bglt) (BgL_funz00_1041);
						BgL_bodyz00_1042 =
							(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3715))->BgL_bodyz00);
					}
					{	/* Trace/walk.scm 79 */
						BgL_typez00_bglt BgL_typez00_1043;

						{
							BgL_variablez00_bglt BgL_auxz00_3718;

							BgL_auxz00_3718 = (BgL_variablez00_bglt) (BgL_varz00_17);
							BgL_typez00_1043 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_3718))->BgL_typez00);
						}
						{	/* Trace/walk.scm 80 */
							obj_t BgL_llocz00_1044;

							if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_17,
									BGl_globalz00zzast_varz00))
								{	/* Trace/walk.scm 82 */
									obj_t BgL_arg3564z00_1062;

									{	/* Trace/walk.scm 82 */
										obj_t BgL_auxz00_3723;

										{
											BgL_globalz00_bglt BgL_auxz00_3724;

											BgL_auxz00_3724 = (BgL_globalz00_bglt) (BgL_varz00_17);
											BgL_auxz00_3723 =
												(((BgL_globalz00_bglt) CREF(BgL_auxz00_3724))->
												BgL_srcz00);
										}
										BgL_arg3564z00_1062 =
											BGl_findzd2lastzd2sexpz00zztrace_walkz00(BgL_auxz00_3723);
									}
									BgL_llocz00_1044 =
										BGl_findzd2locationzd2zztools_locationz00
										(BgL_arg3564z00_1062);
								}
							else
								{	/* Trace/walk.scm 83 */
									obj_t BgL_arg3566z00_1064;

									{	/* Trace/walk.scm 83 */
										BgL_nodez00_bglt BgL_nodez00_1981;

										BgL_nodez00_1981 = (BgL_nodez00_bglt) (BgL_bodyz00_1042);
										{	/* Trace/walk.scm 83 */
											obj_t BgL_method3411z00_1982;

											{	/* Trace/walk.scm 83 */
												BgL_objectz00_bglt BgL_objz00_1983;

												BgL_objz00_1983 =
													(BgL_objectz00_bglt) (BgL_nodez00_1981);
												{	/* Trace/walk.scm 83 */
													long BgL_objzd2classzd2numz00_1984;

													BgL_objzd2classzd2numz00_1984 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1983);
													{	/* Trace/walk.scm 83 */
														obj_t BgL_arg2643z00_1985;

														BgL_arg2643z00_1985 =
															PROCEDURE_REF
															(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
															(int) (((long) 1)));
														{	/* Trace/walk.scm 83 */
															obj_t BgL_arrayz00_1987;

															int BgL_offsetz00_1988;

															BgL_arrayz00_1987 = BgL_arg2643z00_1985;
															BgL_offsetz00_1988 =
																(int) (BgL_objzd2classzd2numz00_1984);
															{	/* Trace/walk.scm 83 */
																long BgL_offsetz00_1989;

																BgL_offsetz00_1989 =
																	((long) (BgL_offsetz00_1988) - OBJECT_TYPE);
																{	/* Trace/walk.scm 83 */
																	long BgL_modz00_1990;

																	{	/* Trace/walk.scm 83 */
																		int BgL_arg2645z00_1991;

																		BgL_arg2645z00_1991 = (int) (((long) 16));
																		{	/* Trace/walk.scm 83 */
																			long BgL_auxz00_3738;

																			BgL_auxz00_3738 =
																				(long) (BgL_arg2645z00_1991);
																			BgL_modz00_1990 =
																				(BgL_offsetz00_1989 / BgL_auxz00_3738);
																	}}
																	{	/* Trace/walk.scm 83 */
																		long BgL_restz00_1992;

																		{	/* Trace/walk.scm 83 */
																			int BgL_arg2644z00_1993;

																			BgL_arg2644z00_1993 = (int) (((long) 16));
																			{	/* Trace/walk.scm 83 */
																				long BgL_auxz00_3742;

																				BgL_auxz00_3742 =
																					(long) (BgL_arg2644z00_1993);
																				BgL_restz00_1992 =
																					(BgL_offsetz00_1989 %
																					BgL_auxz00_3742);
																		}}
																		{	/* Trace/walk.scm 83 */

																			BgL_method3411z00_1982 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_1987,
																					(int) (BgL_modz00_1990)),
																				(int) (BgL_restz00_1992));
											}}}}}}}}
											BgL_arg3566z00_1064 =
												PROCEDURE_ENTRY(BgL_method3411z00_1982)
												(BgL_method3411z00_1982, (obj_t) (BgL_nodez00_1981),
												BEOA);
									}}
									{
										BgL_nodez00_bglt BgL_auxz00_3752;

										BgL_auxz00_3752 = (BgL_nodez00_bglt) (BgL_arg3566z00_1064);
										BgL_llocz00_1044 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3752))->BgL_locz00);
								}}
							{	/* Trace/walk.scm 81 */

								{	/* Trace/walk.scm 84 */
									bool_t BgL_testz00_3755;

									{	/* Trace/walk.scm 84 */
										bool_t BgL_testz00_3756;

										{	/* Trace/walk.scm 84 */
											BgL_funz00_bglt BgL_obj1817z00_2008;

											BgL_obj1817z00_2008 = (BgL_funz00_bglt) (BgL_funz00_1041);
											BgL_testz00_3756 =
												CBOOL(
												(((BgL_funz00_bglt) CREF(BgL_obj1817z00_2008))->
													BgL_predicatezd2ofzd2));
										}
										if (BgL_testz00_3756)
											{	/* Trace/walk.scm 84 */
												BgL_testz00_3755 = ((bool_t) 0);
											}
										else
											{	/* Trace/walk.scm 85 */
												bool_t BgL_testz00_3760;

												{	/* Trace/walk.scm 85 */
													obj_t BgL_auxz00_3761;

													{	/* Trace/walk.scm 85 */
														obj_t BgL_auxz00_3762;

														{
															BgL_sfunz00_bglt BgL_auxz00_3764;

															BgL_auxz00_3764 =
																(BgL_sfunz00_bglt) (BgL_funz00_1041);
															BgL_auxz00_3762 =
																(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3764))->
																BgL_propertyz00);
														}
														BgL_auxz00_3761 =
															BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(CNST_TABLE_REF(((long) 3)), BgL_auxz00_3762);
													}
													BgL_testz00_3760 = CBOOL(BgL_auxz00_3761);
												}
												if (BgL_testz00_3760)
													{	/* Trace/walk.scm 85 */
														BgL_testz00_3755 = ((bool_t) 0);
													}
												else
													{	/* Trace/walk.scm 86 */
														obj_t BgL_arg3560z00_1058;

														{
															BgL_variablez00_bglt BgL_auxz00_3769;

															BgL_auxz00_3769 =
																(BgL_variablez00_bglt) (BgL_varz00_17);
															BgL_arg3560z00_1058 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3769))->BgL_idz00);
														}
														BgL_testz00_3755 =
															BGl_userzd2symbolzf3z21zzast_identz00
															(BgL_arg3560z00_1058);
													}
											}
									}
									if (BgL_testz00_3755)
										{	/* Trace/walk.scm 84 */
											BGl_enterzd2functionzd2zztools_errorz00
												(BGl_tracezd2idzd2zztrace_walkz00(BgL_varz00_17));
											{	/* Trace/walk.scm 89 */
												obj_t BgL_newzd2bodyzd2_1047;

												{	/* Trace/walk.scm 89 */
													bool_t BgL_testz00_3775;

													if (
														((long)
															CINT
															(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)
															> ((long) 1)))
														{	/* Trace/walk.scm 89 */
															BgL_testz00_3775 = ((bool_t) 1);
														}
													else
														{	/* Trace/walk.scm 89 */
															if (BGl_iszd2azf3z21zz__objectz00(BgL_varz00_17,
																	BGl_globalz00zzast_varz00))
																{	/* Trace/walk.scm 91 */
																	obj_t BgL_auxz00_3781;

																	{
																		BgL_variablez00_bglt BgL_auxz00_3782;

																		BgL_auxz00_3782 =
																			(BgL_variablez00_bglt) (
																			(BgL_globalz00_bglt) (BgL_varz00_17));
																		BgL_auxz00_3781 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_3782))->BgL_idz00);
																	}
																	BgL_testz00_3775 =
																		(BgL_auxz00_3781 ==
																		CNST_TABLE_REF(((long) 1)));
																}
															else
																{	/* Trace/walk.scm 90 */
																	BgL_testz00_3775 = ((bool_t) 0);
																}
														}
													if (BgL_testz00_3775)
														{	/* Trace/walk.scm 100 */
															obj_t BgL_arg3554z00_1051;

															BgL_arg3554z00_1051 =
																MAKE_PAIR(BgL_varz00_17, BgL_stackz00_18);
															{	/* Trace/walk.scm 100 */
																BgL_nodez00_bglt BgL_res3881z00_2042;

																{	/* Trace/walk.scm 100 */
																	BgL_nodez00_bglt BgL_nodez00_2015;

																	BgL_nodez00_2015 =
																		(BgL_nodez00_bglt) (BgL_bodyz00_1042);
																	{	/* Trace/walk.scm 100 */
																		obj_t BgL_method3439z00_2017;

																		{	/* Trace/walk.scm 100 */
																			BgL_objectz00_bglt BgL_objz00_2018;

																			BgL_objz00_2018 =
																				(BgL_objectz00_bglt) (BgL_nodez00_2015);
																			{	/* Trace/walk.scm 100 */
																				long BgL_objzd2classzd2numz00_2019;

																				BgL_objzd2classzd2numz00_2019 =
																					BGL_OBJECT_CLASS_NUM(BgL_objz00_2018);
																				{	/* Trace/walk.scm 100 */
																					obj_t BgL_arg2643z00_2020;

																					BgL_arg2643z00_2020 =
																						PROCEDURE_REF
																						(BGl_tracezd2nodezd2envz00zztrace_walkz00,
																						(int) (((long) 1)));
																					{	/* Trace/walk.scm 100 */
																						obj_t BgL_arrayz00_2022;

																						int BgL_offsetz00_2023;

																						BgL_arrayz00_2022 =
																							BgL_arg2643z00_2020;
																						BgL_offsetz00_2023 =
																							(int)
																							(BgL_objzd2classzd2numz00_2019);
																						{	/* Trace/walk.scm 100 */
																							long BgL_offsetz00_2024;

																							BgL_offsetz00_2024 =
																								(
																								(long) (BgL_offsetz00_2023) -
																								OBJECT_TYPE);
																							{	/* Trace/walk.scm 100 */
																								long BgL_modz00_2025;

																								{	/* Trace/walk.scm 100 */
																									int BgL_arg2645z00_2026;

																									BgL_arg2645z00_2026 =
																										(int) (((long) 16));
																									{	/* Trace/walk.scm 100 */
																										long BgL_auxz00_3798;

																										BgL_auxz00_3798 =
																											(long)
																											(BgL_arg2645z00_2026);
																										BgL_modz00_2025 =
																											(BgL_offsetz00_2024 /
																											BgL_auxz00_3798);
																								}}
																								{	/* Trace/walk.scm 100 */
																									long BgL_restz00_2027;

																									{	/* Trace/walk.scm 100 */
																										int BgL_arg2644z00_2028;

																										BgL_arg2644z00_2028 =
																											(int) (((long) 16));
																										{	/* Trace/walk.scm 100 */
																											long BgL_auxz00_3802;

																											BgL_auxz00_3802 =
																												(long)
																												(BgL_arg2644z00_2028);
																											BgL_restz00_2027 =
																												(BgL_offsetz00_2024 %
																												BgL_auxz00_3802);
																									}}
																									{	/* Trace/walk.scm 100 */

																										BgL_method3439z00_2017 =
																											VECTOR_REF(VECTOR_REF
																											(BgL_arrayz00_2022,
																												(int)
																												(BgL_modz00_2025)),
																											(int) (BgL_restz00_2027));
																		}}}}}}}}
																		BgL_res3881z00_2042 =
																			(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																			(BgL_method3439z00_2017)
																			(BgL_method3439z00_2017,
																				(obj_t) (BgL_nodez00_2015),
																				BgL_arg3554z00_1051, BEOA));
																}}
																BgL_newzd2bodyzd2_1047 =
																	(obj_t) (BgL_res3881z00_2042);
														}}
													else
														{	/* Trace/walk.scm 89 */
															BgL_newzd2bodyzd2_1047 = BgL_bodyz00_1042;
														}
												}
												{	/* Trace/walk.scm 89 */
													BgL_letzd2varzd2_bglt BgL_new2zd2bodyzd2_1048;

													BgL_new2zd2bodyzd2_1048 =
														BGl_makezd2tracedzd2nodez00zztrace_walkz00(
														(BgL_nodez00_bglt) (BgL_newzd2bodyzd2_1047),
														BgL_typez00_1043,
														BGl_tracezd2idzd2zztrace_walkz00(BgL_varz00_17),
														BgL_llocz00_1044, BgL_stackz00_18);
													{	/* Trace/walk.scm 102 */

														{
															obj_t BgL_auxz00_3819;

															BgL_sfunz00_bglt BgL_auxz00_3817;

															BgL_auxz00_3819 =
																(obj_t) (BgL_new2zd2bodyzd2_1048);
															BgL_auxz00_3817 =
																(BgL_sfunz00_bglt) (BgL_funz00_1041);
															((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3817))->
																	BgL_bodyz00) =
																((obj_t) BgL_auxz00_3819), BUNSPEC);
														}
														return BGl_leavezd2functionzd2zztools_errorz00();
													}
												}
											}
										}
									else
										{	/* Trace/walk.scm 84 */
											return BFALSE;
										}
								}
							}
						}
					}
				}
			}
		}
	}



/* find-last-sexp */
	obj_t BGl_findzd2lastzd2sexpz00zztrace_walkz00(obj_t BgL_sexpz00_19)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 117 */
			{
				obj_t BgL_sexpz00_1066;

				obj_t BgL_resz00_1067;

				BgL_sexpz00_1066 = BgL_sexpz00_19;
				BgL_resz00_1067 = BgL_sexpz00_19;
			BgL_zc3anonymousza33567ze3z83_1068:
				if (PAIRP(BgL_sexpz00_1066))
					{	/* Trace/walk.scm 123 */
						bool_t BgL_testz00_3825;

						{	/* Trace/walk.scm 123 */
							obj_t BgL_auxz00_3826;

							BgL_auxz00_3826 = CDR(BgL_sexpz00_1066);
							BgL_testz00_3825 = PAIRP(BgL_auxz00_3826);
						}
						if (BgL_testz00_3825)
							{
								obj_t BgL_resz00_3831;

								obj_t BgL_sexpz00_3829;

								BgL_sexpz00_3829 =
									BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
									(BgL_sexpz00_1066);
								BgL_resz00_3831 = BgL_sexpz00_1066;
								BgL_resz00_1067 = BgL_resz00_3831;
								BgL_sexpz00_1066 = BgL_sexpz00_3829;
								goto BgL_zc3anonymousza33567ze3z83_1068;
							}
						else
							{
								obj_t BgL_resz00_3834;

								obj_t BgL_sexpz00_3832;

								BgL_sexpz00_3832 = CAR(BgL_sexpz00_1066);
								BgL_resz00_3834 = BgL_sexpz00_1066;
								BgL_resz00_1067 = BgL_resz00_3834;
								BgL_sexpz00_1066 = BgL_sexpz00_3832;
								goto BgL_zc3anonymousza33567ze3z83_1068;
							}
					}
				else
					{	/* Trace/walk.scm 121 */
						return BgL_resz00_1067;
					}
			}
		}
	}



/* make-traced-node */
	BgL_letzd2varzd2_bglt
		BGl_makezd2tracedzd2nodez00zztrace_walkz00(BgL_nodez00_bglt BgL_nodez00_35,
		BgL_typez00_bglt BgL_typez00_36, obj_t BgL_symbolz00_37,
		obj_t BgL_llocz00_38, obj_t BgL_stackz00_39)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 233 */
			{	/* Trace/walk.scm 234 */
				obj_t BgL_locz00_1075;

				BgL_locz00_1075 =
					(((BgL_nodez00_bglt) CREF(BgL_nodez00_35))->BgL_locz00);
				{	/* Trace/walk.scm 234 */
					obj_t BgL_auxz00_1076;

					BgL_auxz00_1076 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 4))));
					{	/* Trace/walk.scm 235 */
						obj_t BgL_tauxz00_1077;

						{	/* Trace/walk.scm 236 */
							obj_t BgL_arg3661z00_1172;

							BgL_arg3661z00_1172 =
								(((BgL_typez00_bglt) CREF(BgL_typez00_36))->BgL_idz00);
							BgL_tauxz00_1077 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_auxz00_1076,
								BgL_arg3661z00_1172);
						}
						{	/* Trace/walk.scm 236 */
							obj_t BgL_tmp1z00_1078;

							BgL_tmp1z00_1078 =
								BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
								(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											5))));
							{	/* Trace/walk.scm 237 */
								obj_t BgL_tmp2z00_1079;

								BgL_tmp2z00_1079 =
									BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
									(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												6))));
								{	/* Trace/walk.scm 238 */
									obj_t BgL_tmp3z00_1080;

									BgL_tmp3z00_1080 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													7))));
									{	/* Trace/walk.scm 239 */
										obj_t BgL_symz00_1081;

										{	/* Trace/walk.scm 240 */
											bool_t BgL_testz00_3850;

											if (PAIRP(BgL_stackz00_39))
												{	/* Trace/walk.scm 240 */
													obj_t BgL_arg3657z00_1168;

													BgL_arg3657z00_1168 = CAR(BgL_stackz00_39);
													BgL_testz00_3850 =
														BGl_iszd2azf3z21zz__objectz00(BgL_arg3657z00_1168,
														BGl_variablez00zzast_varz00);
												}
											else
												{	/* Trace/walk.scm 240 */
													BgL_testz00_3850 = ((bool_t) 0);
												}
											if (BgL_testz00_3850)
												{	/* Trace/walk.scm 241 */
													obj_t BgL_arg3650z00_1161;

													obj_t BgL_arg3651z00_1162;

													BgL_arg3650z00_1161 = CNST_TABLE_REF(((long) 8));
													{
														BgL_variablez00_bglt BgL_auxz00_3856;

														BgL_auxz00_3856 =
															(BgL_variablez00_bglt) (CAR(BgL_stackz00_39));
														BgL_arg3651z00_1162 =
															(((BgL_variablez00_bglt) CREF(BgL_auxz00_3856))->
															BgL_idz00);
													}
													{	/* Trace/walk.scm 241 */
														obj_t BgL_list3652z00_1163;

														{	/* Trace/walk.scm 241 */
															obj_t BgL_arg3653z00_1164;

															{	/* Trace/walk.scm 241 */
																obj_t BgL_arg3654z00_1165;

																BgL_arg3654z00_1165 =
																	MAKE_PAIR(BgL_arg3651z00_1162, BNIL);
																BgL_arg3653z00_1164 =
																	MAKE_PAIR(BgL_arg3650z00_1161,
																	BgL_arg3654z00_1165);
															}
															BgL_list3652z00_1163 =
																MAKE_PAIR(BgL_symbolz00_37,
																BgL_arg3653z00_1164);
														}
														BgL_symz00_1081 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list3652z00_1163);
												}}
											else
												{	/* Trace/walk.scm 240 */
													BgL_symz00_1081 = BgL_symbolz00_37;
												}
										}
										{	/* Trace/walk.scm 240 */
											obj_t BgL_lz00_1082;

											{	/* Trace/walk.scm 243 */
												bool_t BgL_testz00_3864;

												if (STRUCTP(BgL_locz00_1075))
													{	/* Trace/walk.scm 243 */
														BgL_testz00_3864 =
															(STRUCT_KEY(BgL_locz00_1075) ==
															CNST_TABLE_REF(((long) 9)));
													}
												else
													{	/* Trace/walk.scm 243 */
														BgL_testz00_3864 = ((bool_t) 0);
													}
												if (BgL_testz00_3864)
													{	/* Trace/walk.scm 244 */
														obj_t BgL_arg3642z00_1153;

														obj_t BgL_arg3643z00_1154;

														BgL_arg3642z00_1153 = CNST_TABLE_REF(((long) 10));
														{	/* Trace/walk.scm 244 */
															obj_t BgL_arg3644z00_1155;

															obj_t BgL_arg3645z00_1156;

															BgL_arg3644z00_1155 =
																BGl_locationzd2fullzd2fnamez00zztools_locationz00
																(BgL_locz00_1075);
															BgL_arg3645z00_1156 =
																STRUCT_REF(BgL_locz00_1075, (int) (((long) 1)));
															{	/* Trace/walk.scm 244 */
																obj_t BgL_list3647z00_1158;

																{	/* Trace/walk.scm 244 */
																	obj_t BgL_arg3648z00_1159;

																	BgL_arg3648z00_1159 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3647z00_1158 =
																		MAKE_PAIR(BgL_arg3645z00_1156,
																		BgL_arg3648z00_1159);
																}
																BgL_arg3643z00_1154 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3644z00_1155, BgL_list3647z00_1158);
														}}
														BgL_lz00_1082 =
															MAKE_PAIR(BgL_arg3642z00_1153,
															BgL_arg3643z00_1154);
													}
												else
													{	/* Trace/walk.scm 243 */
														BgL_lz00_1082 = BFALSE;
													}
											}
											{	/* Trace/walk.scm 243 */
												obj_t BgL_expz00_1083;

												{	/* Trace/walk.scm 245 */
													obj_t BgL_arg3575z00_1087;

													obj_t BgL_arg3576z00_1088;

													BgL_arg3575z00_1087 = CNST_TABLE_REF(((long) 11));
													{	/* Trace/walk.scm 245 */
														obj_t BgL_arg3577z00_1089;

														obj_t BgL_arg3578z00_1090;

														{	/* Trace/walk.scm 245 */
															obj_t BgL_arg3582z00_1094;

															obj_t BgL_arg3583z00_1095;

															{	/* Trace/walk.scm 245 */
																obj_t BgL_arg3584z00_1096;

																{	/* Trace/walk.scm 245 */
																	obj_t BgL_arg3585z00_1097;

																	{	/* Trace/walk.scm 245 */
																		obj_t BgL_arg3588z00_1100;

																		obj_t BgL_arg3589z00_1101;

																		BgL_arg3588z00_1100 =
																			CNST_TABLE_REF(((long) 12));
																		{	/* Trace/walk.scm 245 */
																			obj_t BgL_list3590z00_1102;

																			BgL_list3590z00_1102 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3589z00_1101 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_symz00_1081, BgL_list3590z00_1102);
																		}
																		BgL_arg3585z00_1097 =
																			MAKE_PAIR(BgL_arg3588z00_1100,
																			BgL_arg3589z00_1101);
																	}
																	{	/* Trace/walk.scm 245 */
																		obj_t BgL_list3587z00_1099;

																		BgL_list3587z00_1099 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg3584z00_1096 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3585z00_1097,
																			BgL_list3587z00_1099);
																}}
																BgL_arg3582z00_1094 =
																	MAKE_PAIR(BgL_tmp1z00_1078,
																	BgL_arg3584z00_1096);
															}
															{	/* Trace/walk.scm 246 */
																obj_t BgL_arg3591z00_1103;

																obj_t BgL_arg3592z00_1104;

																{	/* Trace/walk.scm 246 */
																	obj_t BgL_arg3596z00_1108;

																	{	/* Trace/walk.scm 246 */
																		obj_t BgL_arg3597z00_1109;

																		{	/* Trace/walk.scm 246 */
																			obj_t BgL_arg3600z00_1112;

																			obj_t BgL_arg3601z00_1113;

																			BgL_arg3600z00_1112 =
																				CNST_TABLE_REF(((long) 12));
																			{	/* Trace/walk.scm 246 */
																				obj_t BgL_list3602z00_1114;

																				BgL_list3602z00_1114 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3601z00_1113 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_lz00_1082, BgL_list3602z00_1114);
																			}
																			BgL_arg3597z00_1109 =
																				MAKE_PAIR(BgL_arg3600z00_1112,
																				BgL_arg3601z00_1113);
																		}
																		{	/* Trace/walk.scm 246 */
																			obj_t BgL_list3599z00_1111;

																			BgL_list3599z00_1111 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3596z00_1108 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3597z00_1109,
																				BgL_list3599z00_1111);
																	}}
																	BgL_arg3591z00_1103 =
																		MAKE_PAIR(BgL_tmp2z00_1079,
																		BgL_arg3596z00_1108);
																}
																{	/* Trace/walk.scm 247 */
																	obj_t BgL_arg3603z00_1115;

																	obj_t BgL_arg3604z00_1116;

																	BgL_arg3603z00_1115 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(BgL_tmp3z00_1080,
																		CNST_TABLE_REF(((long) 13)));
																	{	/* Trace/walk.scm 247 */
																		obj_t BgL_arg3605z00_1117;

																		BgL_arg3605z00_1117 =
																			MAKE_PAIR(CNST_TABLE_REF(((long) 14)),
																			BNIL);
																		{	/* Trace/walk.scm 247 */
																			obj_t BgL_list3607z00_1119;

																			BgL_list3607z00_1119 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3604z00_1116 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3605z00_1117,
																				BgL_list3607z00_1119);
																	}}
																	BgL_arg3592z00_1104 =
																		MAKE_PAIR(BgL_arg3603z00_1115,
																		BgL_arg3604z00_1116);
																}
																{	/* Trace/walk.scm 245 */
																	obj_t BgL_list3594z00_1106;

																	{	/* Trace/walk.scm 245 */
																		obj_t BgL_arg3595z00_1107;

																		BgL_arg3595z00_1107 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3594z00_1106 =
																			MAKE_PAIR(BgL_arg3592z00_1104,
																			BgL_arg3595z00_1107);
																	}
																	BgL_arg3583z00_1095 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3591z00_1103, BgL_list3594z00_1106);
															}}
															BgL_arg3577z00_1089 =
																MAKE_PAIR(BgL_arg3582z00_1094,
																BgL_arg3583z00_1095);
														}
														{	/* Trace/walk.scm 248 */
															obj_t BgL_arg3608z00_1120;

															obj_t BgL_arg3609z00_1121;

															BgL_arg3608z00_1120 = CNST_TABLE_REF(((long) 11));
															{	/* Trace/walk.scm 248 */
																obj_t BgL_arg3612z00_1123;

																obj_t BgL_arg3613z00_1124;

																{	/* Trace/walk.scm 249 */
																	obj_t BgL_arg3618z00_1129;

																	obj_t BgL_arg3619z00_1130;

																	BgL_arg3618z00_1129 =
																		CNST_TABLE_REF(((long) 15));
																	{	/* Trace/walk.scm 249 */
																		obj_t BgL_list3620z00_1131;

																		{	/* Trace/walk.scm 249 */
																			obj_t BgL_arg3621z00_1132;

																			{	/* Trace/walk.scm 249 */
																				obj_t BgL_arg3622z00_1133;

																				BgL_arg3622z00_1133 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_arg3621z00_1132 =
																					MAKE_PAIR(BgL_tmp2z00_1079,
																					BgL_arg3622z00_1133);
																			}
																			BgL_list3620z00_1131 =
																				MAKE_PAIR(BgL_tmp1z00_1078,
																				BgL_arg3621z00_1132);
																		}
																		BgL_arg3619z00_1130 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_tmp3z00_1080, BgL_list3620z00_1131);
																	}
																	BgL_arg3612z00_1123 =
																		MAKE_PAIR(BgL_arg3618z00_1129,
																		BgL_arg3619z00_1130);
																}
																{	/* Trace/walk.scm 250 */
																	obj_t BgL_arg3623z00_1134;

																	obj_t BgL_arg3624z00_1135;

																	BgL_arg3623z00_1134 =
																		CNST_TABLE_REF(((long) 11));
																	{	/* Trace/walk.scm 250 */
																		obj_t BgL_arg3625z00_1136;

																		obj_t BgL_arg3626z00_1137;

																		{	/* Trace/walk.scm 250 */
																			obj_t BgL_arg3631z00_1142;

																			{	/* Trace/walk.scm 250 */
																				obj_t BgL_arg3633z00_1144;

																				{	/* Trace/walk.scm 250 */
																					obj_t BgL_list3634z00_1145;

																					BgL_list3634z00_1145 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3633z00_1144 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						((obj_t) (BgL_nodez00_35),
																						BgL_list3634z00_1145);
																				}
																				BgL_arg3631z00_1142 =
																					MAKE_PAIR(BgL_tauxz00_1077,
																					BgL_arg3633z00_1144);
																			}
																			BgL_arg3625z00_1136 =
																				MAKE_PAIR(BgL_arg3631z00_1142, BNIL);
																		}
																		{	/* Trace/walk.scm 251 */
																			bool_t BgL_testz00_3917;

																			if (STRUCTP(BgL_llocz00_38))
																				{	/* Trace/walk.scm 251 */
																					BgL_testz00_3917 =
																						(STRUCT_KEY(BgL_llocz00_38) ==
																						CNST_TABLE_REF(((long) 9)));
																				}
																			else
																				{	/* Trace/walk.scm 251 */
																					BgL_testz00_3917 = ((bool_t) 0);
																				}
																			if (BgL_testz00_3917)
																				{	/* Trace/walk.scm 252 */
																					obj_t BgL_arg3636z00_1147;

																					obj_t BgL_arg3637z00_1148;

																					BgL_arg3636z00_1147 =
																						CNST_TABLE_REF(((long) 16));
																					{	/* Trace/walk.scm 253 */
																						obj_t BgL_res3884z00_2076;

																						BgL_res3884z00_2076 =
																							MAKE_EXTENDED_PAIR
																							(BgL_tmp3z00_1080, BNIL,
																							BgL_llocz00_38);
																						BgL_arg3637z00_1148 =
																							BgL_res3884z00_2076;
																					}
																					{	/* Trace/walk.scm 252 */
																						obj_t BgL_res3885z00_2080;

																						BgL_res3885z00_2080 =
																							MAKE_EXTENDED_PAIR
																							(BgL_arg3636z00_1147,
																							BgL_arg3637z00_1148,
																							BgL_llocz00_38);
																						BgL_arg3626z00_1137 =
																							BgL_res3885z00_2080;
																				}}
																			else
																				{	/* Trace/walk.scm 255 */
																					obj_t BgL_arg3638z00_1149;

																					obj_t BgL_arg3639z00_1150;

																					BgL_arg3638z00_1149 =
																						CNST_TABLE_REF(((long) 16));
																					{	/* Trace/walk.scm 255 */
																						obj_t BgL_list3640z00_1151;

																						BgL_list3640z00_1151 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg3639z00_1150 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_tmp3z00_1080,
																							BgL_list3640z00_1151);
																					}
																					BgL_arg3626z00_1137 =
																						MAKE_PAIR(BgL_arg3638z00_1149,
																						BgL_arg3639z00_1150);
																		}}
																		{	/* Trace/walk.scm 250 */
																			obj_t BgL_list3628z00_1139;

																			{	/* Trace/walk.scm 250 */
																				obj_t BgL_arg3629z00_1140;

																				{	/* Trace/walk.scm 250 */
																					obj_t BgL_arg3630z00_1141;

																					BgL_arg3630z00_1141 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg3629z00_1140 =
																						MAKE_PAIR(BgL_auxz00_1076,
																						BgL_arg3630z00_1141);
																				}
																				BgL_list3628z00_1139 =
																					MAKE_PAIR(BgL_arg3626z00_1137,
																					BgL_arg3629z00_1140);
																			}
																			BgL_arg3624z00_1135 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3625z00_1136,
																				BgL_list3628z00_1139);
																	}}
																	BgL_arg3613z00_1124 =
																		MAKE_PAIR(BgL_arg3623z00_1134,
																		BgL_arg3624z00_1135);
																}
																{	/* Trace/walk.scm 248 */
																	obj_t BgL_list3615z00_1126;

																	{	/* Trace/walk.scm 248 */
																		obj_t BgL_arg3616z00_1127;

																		{	/* Trace/walk.scm 248 */
																			obj_t BgL_arg3617z00_1128;

																			BgL_arg3617z00_1128 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg3616z00_1127 =
																				MAKE_PAIR(BgL_arg3613z00_1124,
																				BgL_arg3617z00_1128);
																		}
																		BgL_list3615z00_1126 =
																			MAKE_PAIR(BgL_arg3612z00_1123,
																			BgL_arg3616z00_1127);
																	}
																	BgL_arg3609z00_1121 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BNIL, BgL_list3615z00_1126);
															}}
															BgL_arg3578z00_1090 =
																MAKE_PAIR(BgL_arg3608z00_1120,
																BgL_arg3609z00_1121);
														}
														{	/* Trace/walk.scm 245 */
															obj_t BgL_list3580z00_1092;

															{	/* Trace/walk.scm 245 */
																obj_t BgL_arg3581z00_1093;

																BgL_arg3581z00_1093 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3580z00_1092 =
																	MAKE_PAIR(BgL_arg3578z00_1090,
																	BgL_arg3581z00_1093);
															}
															BgL_arg3576z00_1088 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3577z00_1089, BgL_list3580z00_1092);
													}}
													BgL_expz00_1083 =
														MAKE_PAIR(BgL_arg3575z00_1087, BgL_arg3576z00_1088);
												}
												{	/* Trace/walk.scm 245 */
													BgL_nodez00_bglt BgL_nnodez00_1084;

													BgL_nnodez00_1084 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_1083,
														BNIL, BgL_locz00_1075, CNST_TABLE_REF(((long) 17)));
													{	/* Trace/walk.scm 257 */

														{	/* Trace/walk.scm 258 */
															bool_t BgL_arg3573z00_1085;

															{	/* Trace/walk.scm 258 */
																obj_t BgL_arg3574z00_1086;

																BgL_arg3574z00_1086 =
																	BGl_thezd2backendzd2zzbackend_backendz00();
																{
																	BgL_backendz00_bglt BgL_auxz00_3947;

																	BgL_auxz00_3947 =
																		(BgL_backendz00_bglt) (BgL_arg3574z00_1086);
																	BgL_arg3573z00_1085 =
																		(((BgL_backendz00_bglt)
																			CREF(BgL_auxz00_3947))->
																		BgL_removezd2emptyzd2letz00);
															}}
															{
																BgL_letzd2varzd2_bglt BgL_auxz00_3950;

																BgL_auxz00_3950 =
																	(BgL_letzd2varzd2_bglt) (BgL_nnodez00_1084);
																((((BgL_letzd2varzd2_bglt)
																			CREF(BgL_auxz00_3950))->
																		BgL_removablezf3zf3) =
																	((bool_t) BgL_arg3573z00_1085), BUNSPEC);
														}}
														return (BgL_letzd2varzd2_bglt) (BgL_nnodez00_1084);
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



/* trace-node*! */
	obj_t BGl_tracezd2nodeza2z12z62zztrace_walkz00(obj_t BgL_nodeza2za2_78,
		obj_t BgL_stackz00_79)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 413 */
		BGl_tracezd2nodeza2z12z62zztrace_walkz00:
			if (NULLP(BgL_nodeza2za2_78))
				{	/* Trace/walk.scm 414 */
					return CNST_TABLE_REF(((long) 18));
				}
			else
				{	/* Trace/walk.scm 414 */
					{	/* Trace/walk.scm 417 */
						BgL_nodez00_bglt BgL_arg3664z00_1175;

						{	/* Trace/walk.scm 417 */
							obj_t BgL_arg3665z00_1176;

							BgL_arg3665z00_1176 = CAR(BgL_nodeza2za2_78);
							{	/* Trace/walk.scm 417 */
								BgL_nodez00_bglt BgL_res3888z00_2113;

								{	/* Trace/walk.scm 417 */
									BgL_nodez00_bglt BgL_nodez00_2086;

									BgL_nodez00_2086 = (BgL_nodez00_bglt) (BgL_arg3665z00_1176);
									{	/* Trace/walk.scm 417 */
										obj_t BgL_method3439z00_2088;

										{	/* Trace/walk.scm 417 */
											BgL_objectz00_bglt BgL_objz00_2089;

											BgL_objz00_2089 = (BgL_objectz00_bglt) (BgL_nodez00_2086);
											{	/* Trace/walk.scm 417 */
												long BgL_objzd2classzd2numz00_2090;

												BgL_objzd2classzd2numz00_2090 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2089);
												{	/* Trace/walk.scm 417 */
													obj_t BgL_arg2643z00_2091;

													BgL_arg2643z00_2091 =
														PROCEDURE_REF
														(BGl_tracezd2nodezd2envz00zztrace_walkz00,
														(int) (((long) 1)));
													{	/* Trace/walk.scm 417 */
														obj_t BgL_arrayz00_2093;

														int BgL_offsetz00_2094;

														BgL_arrayz00_2093 = BgL_arg2643z00_2091;
														BgL_offsetz00_2094 =
															(int) (BgL_objzd2classzd2numz00_2090);
														{	/* Trace/walk.scm 417 */
															long BgL_offsetz00_2095;

															BgL_offsetz00_2095 =
																((long) (BgL_offsetz00_2094) - OBJECT_TYPE);
															{	/* Trace/walk.scm 417 */
																long BgL_modz00_2096;

																{	/* Trace/walk.scm 417 */
																	int BgL_arg2645z00_2097;

																	BgL_arg2645z00_2097 = (int) (((long) 16));
																	{	/* Trace/walk.scm 417 */
																		long BgL_auxz00_3967;

																		BgL_auxz00_3967 =
																			(long) (BgL_arg2645z00_2097);
																		BgL_modz00_2096 =
																			(BgL_offsetz00_2095 / BgL_auxz00_3967);
																}}
																{	/* Trace/walk.scm 417 */
																	long BgL_restz00_2098;

																	{	/* Trace/walk.scm 417 */
																		int BgL_arg2644z00_2099;

																		BgL_arg2644z00_2099 = (int) (((long) 16));
																		{	/* Trace/walk.scm 417 */
																			long BgL_auxz00_3971;

																			BgL_auxz00_3971 =
																				(long) (BgL_arg2644z00_2099);
																			BgL_restz00_2098 =
																				(BgL_offsetz00_2095 % BgL_auxz00_3971);
																	}}
																	{	/* Trace/walk.scm 417 */

																		BgL_method3439z00_2088 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2093,
																				(int) (BgL_modz00_2096)),
																			(int) (BgL_restz00_2098));
										}}}}}}}}
										BgL_res3888z00_2113 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3439z00_2088) (BgL_method3439z00_2088,
												(obj_t) (BgL_nodez00_2086), BgL_stackz00_79, BEOA));
								}}
								BgL_arg3664z00_1175 = BgL_res3888z00_2113;
						}}
						{	/* Trace/walk.scm 417 */
							obj_t BgL_auxz00_3982;

							BgL_auxz00_3982 = (obj_t) (BgL_arg3664z00_1175);
							SET_CAR(BgL_nodeza2za2_78, BgL_auxz00_3982);
					}}
					{
						obj_t BgL_nodeza2za2_3985;

						BgL_nodeza2za2_3985 = CDR(BgL_nodeza2za2_78);
						BgL_nodeza2za2_78 = BgL_nodeza2za2_3985;
						goto BGl_tracezd2nodeza2z12z62zztrace_walkz00;
					}
				}
		}
	}



/* toplevel-trace-node*! */
	obj_t BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00(obj_t
		BgL_nodeza2za2_84)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 458 */
		BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00:
			if (NULLP(BgL_nodeza2za2_84))
				{	/* Trace/walk.scm 459 */
					return CNST_TABLE_REF(((long) 18));
				}
			else
				{	/* Trace/walk.scm 459 */
					{	/* Trace/walk.scm 462 */
						BgL_nodez00_bglt BgL_arg3668z00_1179;

						{	/* Trace/walk.scm 462 */
							obj_t BgL_arg3670z00_1180;

							BgL_arg3670z00_1180 = CAR(BgL_nodeza2za2_84);
							{	/* Trace/walk.scm 462 */
								BgL_nodez00_bglt BgL_res3891z00_2145;

								{	/* Trace/walk.scm 462 */
									BgL_nodez00_bglt BgL_nodez00_2119;

									BgL_nodez00_2119 = (BgL_nodez00_bglt) (BgL_arg3670z00_1180);
									{	/* Trace/walk.scm 462 */
										obj_t BgL_method3476z00_2120;

										{	/* Trace/walk.scm 462 */
											BgL_objectz00_bglt BgL_objz00_2121;

											BgL_objz00_2121 = (BgL_objectz00_bglt) (BgL_nodez00_2119);
											{	/* Trace/walk.scm 462 */
												long BgL_objzd2classzd2numz00_2122;

												BgL_objzd2classzd2numz00_2122 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_2121);
												{	/* Trace/walk.scm 462 */
													obj_t BgL_arg2643z00_2123;

													BgL_arg2643z00_2123 =
														PROCEDURE_REF
														(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
														(int) (((long) 1)));
													{	/* Trace/walk.scm 462 */
														obj_t BgL_arrayz00_2125;

														int BgL_offsetz00_2126;

														BgL_arrayz00_2125 = BgL_arg2643z00_2123;
														BgL_offsetz00_2126 =
															(int) (BgL_objzd2classzd2numz00_2122);
														{	/* Trace/walk.scm 462 */
															long BgL_offsetz00_2127;

															BgL_offsetz00_2127 =
																((long) (BgL_offsetz00_2126) - OBJECT_TYPE);
															{	/* Trace/walk.scm 462 */
																long BgL_modz00_2128;

																{	/* Trace/walk.scm 462 */
																	int BgL_arg2645z00_2129;

																	BgL_arg2645z00_2129 = (int) (((long) 16));
																	{	/* Trace/walk.scm 462 */
																		long BgL_auxz00_4000;

																		BgL_auxz00_4000 =
																			(long) (BgL_arg2645z00_2129);
																		BgL_modz00_2128 =
																			(BgL_offsetz00_2127 / BgL_auxz00_4000);
																}}
																{	/* Trace/walk.scm 462 */
																	long BgL_restz00_2130;

																	{	/* Trace/walk.scm 462 */
																		int BgL_arg2644z00_2131;

																		BgL_arg2644z00_2131 = (int) (((long) 16));
																		{	/* Trace/walk.scm 462 */
																			long BgL_auxz00_4004;

																			BgL_auxz00_4004 =
																				(long) (BgL_arg2644z00_2131);
																			BgL_restz00_2130 =
																				(BgL_offsetz00_2127 % BgL_auxz00_4004);
																	}}
																	{	/* Trace/walk.scm 462 */

																		BgL_method3476z00_2120 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_2125,
																				(int) (BgL_modz00_2128)),
																			(int) (BgL_restz00_2130));
										}}}}}}}}
										BgL_res3891z00_2145 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3476z00_2120) (BgL_method3476z00_2120,
												(obj_t) (BgL_nodez00_2119), BEOA));
								}}
								BgL_arg3668z00_1179 = BgL_res3891z00_2145;
						}}
						{	/* Trace/walk.scm 462 */
							obj_t BgL_auxz00_4015;

							BgL_auxz00_4015 = (obj_t) (BgL_arg3668z00_1179);
							SET_CAR(BgL_nodeza2za2_84, BgL_auxz00_4015);
					}}
					{
						obj_t BgL_nodeza2za2_4018;

						BgL_nodeza2za2_4018 = CDR(BgL_nodeza2za2_84);
						BgL_nodeza2za2_84 = BgL_nodeza2za2_4018;
						goto BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00;
					}
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztrace_walkz00()
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_findzd2lastzd2nodezd2defau3410zd2envz00zztrace_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4005z00zztrace_walkz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_tracezd2nodezd2default3438zd2envzd2zztrace_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4006z00zztrace_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_toplevelzd2tracezd2nodezd23475zd2envz00zztrace_walkz00,
				BGl_nodez00zzast_nodez00, BGl_string4007z00zztrace_walkz00);
		}
	}



/* find-last-node */
	obj_t BGl_findzd2lastzd2nodez00zztrace_walkz00(BgL_nodez00_bglt
		BgL_nodez00_20)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 134 */
			{	/* Trace/walk.scm 134 */
				obj_t BgL_method3411z00_2149;

				{	/* Trace/walk.scm 134 */
					BgL_objectz00_bglt BgL_objz00_2150;

					BgL_objz00_2150 = (BgL_objectz00_bglt) (BgL_nodez00_20);
					{	/* Trace/walk.scm 134 */
						long BgL_objzd2classzd2numz00_2151;

						BgL_objzd2classzd2numz00_2151 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2150);
						{	/* Trace/walk.scm 134 */
							obj_t BgL_arg2643z00_2152;

							BgL_arg2643z00_2152 =
								PROCEDURE_REF(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
								(int) (((long) 1)));
							{	/* Trace/walk.scm 134 */
								obj_t BgL_arrayz00_2154;

								int BgL_offsetz00_2155;

								BgL_arrayz00_2154 = BgL_arg2643z00_2152;
								BgL_offsetz00_2155 = (int) (BgL_objzd2classzd2numz00_2151);
								{	/* Trace/walk.scm 134 */
									long BgL_offsetz00_2156;

									BgL_offsetz00_2156 =
										((long) (BgL_offsetz00_2155) - OBJECT_TYPE);
									{	/* Trace/walk.scm 134 */
										long BgL_modz00_2157;

										{	/* Trace/walk.scm 134 */
											int BgL_arg2645z00_2158;

											BgL_arg2645z00_2158 = (int) (((long) 16));
											{	/* Trace/walk.scm 134 */
												long BgL_auxz00_4031;

												BgL_auxz00_4031 = (long) (BgL_arg2645z00_2158);
												BgL_modz00_2157 =
													(BgL_offsetz00_2156 / BgL_auxz00_4031);
										}}
										{	/* Trace/walk.scm 134 */
											long BgL_restz00_2159;

											{	/* Trace/walk.scm 134 */
												int BgL_arg2644z00_2160;

												BgL_arg2644z00_2160 = (int) (((long) 16));
												{	/* Trace/walk.scm 134 */
													long BgL_auxz00_4035;

													BgL_auxz00_4035 = (long) (BgL_arg2644z00_2160);
													BgL_restz00_2159 =
														(BgL_offsetz00_2156 % BgL_auxz00_4035);
											}}
											{	/* Trace/walk.scm 134 */

												BgL_method3411z00_2149 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2154,
														(int) (BgL_modz00_2157)), (int) (BgL_restz00_2159));
				}}}}}}}}
				return
					PROCEDURE_ENTRY(BgL_method3411z00_2149) (BgL_method3411z00_2149,
					(obj_t) (BgL_nodez00_20), BEOA);
			}
		}
	}



/* _find-last-node */
	obj_t BGl__findzd2lastzd2nodez00zztrace_walkz00(obj_t BgL_envz00_3390,
		obj_t BgL_nodez00_3391)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 134 */
			return
				BGl_findzd2lastzd2nodez00zztrace_walkz00(
				(BgL_nodez00_bglt) (BgL_nodez00_3391));
		}
	}



/* _find-last-node-defau3410 */
	obj_t BGl__findzd2lastzd2nodezd2defau3410zd2zztrace_walkz00(obj_t
		BgL_envz00_3395, obj_t BgL_nodez00_3396)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_3396));
		}
	}



/* trace-node */
	BgL_nodez00_bglt BGl_tracezd2nodezd2zztrace_walkz00(BgL_nodez00_bglt
		BgL_nodez00_40, obj_t BgL_stackz00_41)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 264 */
			{	/* Trace/walk.scm 264 */
				obj_t BgL_method3439z00_2174;

				{	/* Trace/walk.scm 264 */
					BgL_objectz00_bglt BgL_objz00_2175;

					BgL_objz00_2175 = (BgL_objectz00_bglt) (BgL_nodez00_40);
					{	/* Trace/walk.scm 264 */
						long BgL_objzd2classzd2numz00_2176;

						BgL_objzd2classzd2numz00_2176 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2175);
						{	/* Trace/walk.scm 264 */
							obj_t BgL_arg2643z00_2177;

							BgL_arg2643z00_2177 =
								PROCEDURE_REF(BGl_tracezd2nodezd2envz00zztrace_walkz00,
								(int) (((long) 1)));
							{	/* Trace/walk.scm 264 */
								obj_t BgL_arrayz00_2179;

								int BgL_offsetz00_2180;

								BgL_arrayz00_2179 = BgL_arg2643z00_2177;
								BgL_offsetz00_2180 = (int) (BgL_objzd2classzd2numz00_2176);
								{	/* Trace/walk.scm 264 */
									long BgL_offsetz00_2181;

									BgL_offsetz00_2181 =
										((long) (BgL_offsetz00_2180) - OBJECT_TYPE);
									{	/* Trace/walk.scm 264 */
										long BgL_modz00_2182;

										{	/* Trace/walk.scm 264 */
											int BgL_arg2645z00_2183;

											BgL_arg2645z00_2183 = (int) (((long) 16));
											{	/* Trace/walk.scm 264 */
												long BgL_auxz00_4057;

												BgL_auxz00_4057 = (long) (BgL_arg2645z00_2183);
												BgL_modz00_2182 =
													(BgL_offsetz00_2181 / BgL_auxz00_4057);
										}}
										{	/* Trace/walk.scm 264 */
											long BgL_restz00_2184;

											{	/* Trace/walk.scm 264 */
												int BgL_arg2644z00_2185;

												BgL_arg2644z00_2185 = (int) (((long) 16));
												{	/* Trace/walk.scm 264 */
													long BgL_auxz00_4061;

													BgL_auxz00_4061 = (long) (BgL_arg2644z00_2185);
													BgL_restz00_2184 =
														(BgL_offsetz00_2181 % BgL_auxz00_4061);
											}}
											{	/* Trace/walk.scm 264 */

												BgL_method3439z00_2174 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2179,
														(int) (BgL_modz00_2182)), (int) (BgL_restz00_2184));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2174)
					(BgL_method3439z00_2174, (obj_t) (BgL_nodez00_40), BgL_stackz00_41,
						BEOA));
			}
		}
	}



/* _trace-node */
	obj_t BGl__tracezd2nodezd2zztrace_walkz00(obj_t BgL_envz00_3392,
		obj_t BgL_nodez00_3393, obj_t BgL_stackz00_3394)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 264 */
			return
				(obj_t) (BGl_tracezd2nodezd2zztrace_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3393), BgL_stackz00_3394));
		}
	}



/* _trace-node-default3438 */
	obj_t BGl__tracezd2nodezd2default3438z00zztrace_walkz00(obj_t BgL_envz00_3397,
		obj_t BgL_nodez00_3398, obj_t BgL_stackz00_3399)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_3398));
		}
	}



/* toplevel-trace-node */
	BgL_nodez00_bglt
		BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(BgL_nodez00_bglt
		BgL_nodez00_80)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 423 */
			{	/* Trace/walk.scm 423 */
				obj_t BgL_method3476z00_2199;

				{	/* Trace/walk.scm 423 */
					BgL_objectz00_bglt BgL_objz00_2200;

					BgL_objz00_2200 = (BgL_objectz00_bglt) (BgL_nodez00_80);
					{	/* Trace/walk.scm 423 */
						long BgL_objzd2classzd2numz00_2201;

						BgL_objzd2classzd2numz00_2201 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2200);
						{	/* Trace/walk.scm 423 */
							obj_t BgL_arg2643z00_2202;

							BgL_arg2643z00_2202 =
								PROCEDURE_REF
								(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
								(int) (((long) 1)));
							{	/* Trace/walk.scm 423 */
								obj_t BgL_arrayz00_2204;

								int BgL_offsetz00_2205;

								BgL_arrayz00_2204 = BgL_arg2643z00_2202;
								BgL_offsetz00_2205 = (int) (BgL_objzd2classzd2numz00_2201);
								{	/* Trace/walk.scm 423 */
									long BgL_offsetz00_2206;

									BgL_offsetz00_2206 =
										((long) (BgL_offsetz00_2205) - OBJECT_TYPE);
									{	/* Trace/walk.scm 423 */
										long BgL_modz00_2207;

										{	/* Trace/walk.scm 423 */
											int BgL_arg2645z00_2208;

											BgL_arg2645z00_2208 = (int) (((long) 16));
											{	/* Trace/walk.scm 423 */
												long BgL_auxz00_4085;

												BgL_auxz00_4085 = (long) (BgL_arg2645z00_2208);
												BgL_modz00_2207 =
													(BgL_offsetz00_2206 / BgL_auxz00_4085);
										}}
										{	/* Trace/walk.scm 423 */
											long BgL_restz00_2209;

											{	/* Trace/walk.scm 423 */
												int BgL_arg2644z00_2210;

												BgL_arg2644z00_2210 = (int) (((long) 16));
												{	/* Trace/walk.scm 423 */
													long BgL_auxz00_4089;

													BgL_auxz00_4089 = (long) (BgL_arg2644z00_2210);
													BgL_restz00_2209 =
														(BgL_offsetz00_2206 % BgL_auxz00_4089);
											}}
											{	/* Trace/walk.scm 423 */

												BgL_method3476z00_2199 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2204,
														(int) (BgL_modz00_2207)), (int) (BgL_restz00_2209));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3476z00_2199)
					(BgL_method3476z00_2199, (obj_t) (BgL_nodez00_80), BEOA));
			}
		}
	}



/* _toplevel-trace-node */
	obj_t BGl__toplevelzd2tracezd2nodez00zztrace_walkz00(obj_t BgL_envz00_3388,
		obj_t BgL_nodez00_3389)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 423 */
			return
				(obj_t) (BGl_toplevelzd2tracezd2nodez00zztrace_walkz00(
					(BgL_nodez00_bglt) (BgL_nodez00_3389)));
		}
	}



/* _toplevel-trace-node-3475 */
	obj_t BGl__toplevelzd2tracezd2nodezd23475zd2zztrace_walkz00(obj_t
		BgL_envz00_3400, obj_t BgL_nodez00_3401)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_3401));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztrace_walkz00()
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc4008z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_appz00zzast_nodez00, BGl_proc4009z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc4010z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_funcallz00zzast_nodez00, BGl_proc4011z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_externz00zzast_nodez00, BGl_proc4012z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc4013z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4014z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_failz00zzast_nodez00, BGl_proc4015z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_selectz00zzast_nodez00, BGl_proc4016z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4017z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4018z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4019z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4020z00zztrace_walkz00,
				BGl_string4005z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_sequencez00zzast_nodez00,
				BGl_proc4021z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_appz00zzast_nodez00,
				BGl_proc4022z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_appzd2lyzd2zzast_nodez00,
				BGl_proc4023z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_funcallz00zzast_nodez00,
				BGl_proc4024z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_externz00zzast_nodez00,
				BGl_proc4025z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_castz00zzast_nodez00,
				BGl_proc4026z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_setqz00zzast_nodez00,
				BGl_proc4027z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc4028z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_failz00zzast_nodez00,
				BGl_proc4029z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00, BGl_selectz00zzast_nodez00,
				BGl_proc4030z00zztrace_walkz00, BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc4031z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc4032z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc4033z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc4034z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc4035z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc4036z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_tracezd2nodezd2envz00zztrace_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc4037z00zztrace_walkz00,
				BGl_string4006z00zztrace_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_sequencez00zzast_nodez00, BGl_proc4038z00zztrace_walkz00,
				BGl_string4007z00zztrace_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_toplevelzd2tracezd2nodezd2envzd2zztrace_walkz00,
				BGl_setqz00zzast_nodez00, BGl_proc4039z00zztrace_walkz00,
				BGl_string4007z00zztrace_walkz00);
		}
	}



/* toplevel-trace-node-3481 */
	obj_t BGl_toplevelzd2tracezd2nodezd23481zd2zztrace_walkz00(obj_t
		BgL_envz00_3434, obj_t BgL_nodez00_3435)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 441 */
			{
				BgL_setqz00_bglt BgL_nodez00_1860;

				{	/* Trace/walk.scm 442 */
					BgL_setqz00_bglt BgL_auxz00_4137;

					BgL_nodez00_1860 = (BgL_setqz00_bglt) (BgL_nodez00_3435);
					{	/* Trace/walk.scm 443 */
						BgL_varz00_bglt BgL_instance3396z00_1864;

						BgL_instance3396z00_1864 =
							(((BgL_setqz00_bglt) CREF(BgL_nodez00_1860))->BgL_varz00);
						{	/* Trace/walk.scm 444 */
							bool_t BgL_testz00_4139;

							{	/* Trace/walk.scm 444 */
								bool_t BgL_testz00_4140;

								{	/* Trace/walk.scm 444 */
									BgL_variablez00_bglt BgL_arg3863z00_1883;

									BgL_arg3863z00_1883 =
										(((BgL_varz00_bglt) CREF(BgL_instance3396z00_1864))->
										BgL_variablez00);
									{	/* Trace/walk.scm 444 */
										obj_t BgL_obj1751z00_3369;

										BgL_obj1751z00_3369 = (obj_t) (BgL_arg3863z00_1883);
										BgL_testz00_4140 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj1751z00_3369,
											BGl_globalz00zzast_varz00);
									}
								}
								if (BgL_testz00_4140)
									{	/* Trace/walk.scm 445 */
										bool_t BgL_testz00_4144;

										{	/* Trace/walk.scm 445 */
											bool_t BgL_testz00_4145;

											{	/* Trace/walk.scm 445 */
												BgL_nodez00_bglt BgL_arg3862z00_1882;

												BgL_arg3862z00_1882 =
													(((BgL_setqz00_bglt) CREF(BgL_nodez00_1860))->
													BgL_valuez00);
												{	/* Trace/walk.scm 445 */
													obj_t BgL_obj2150z00_3371;

													BgL_obj2150z00_3371 = (obj_t) (BgL_arg3862z00_1882);
													BgL_testz00_4145 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj2150z00_3371,
														BGl_atomz00zzast_nodez00);
												}
											}
											if (BgL_testz00_4145)
												{	/* Trace/walk.scm 445 */
													BgL_testz00_4144 = ((bool_t) 1);
												}
											else
												{	/* Trace/walk.scm 446 */
													bool_t BgL_testz00_4149;

													{	/* Trace/walk.scm 446 */
														BgL_nodez00_bglt BgL_arg3861z00_1881;

														BgL_arg3861z00_1881 =
															(((BgL_setqz00_bglt) CREF(BgL_nodez00_1860))->
															BgL_valuez00);
														{	/* Trace/walk.scm 446 */
															obj_t BgL_obj2170z00_3373;

															BgL_obj2170z00_3373 =
																(obj_t) (BgL_arg3861z00_1881);
															BgL_testz00_4149 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj2170z00_3373, BGl_varz00zzast_nodez00);
														}
													}
													if (BgL_testz00_4149)
														{	/* Trace/walk.scm 446 */
															BgL_testz00_4144 = ((bool_t) 1);
														}
													else
														{	/* Trace/walk.scm 447 */
															bool_t BgL_testz00_4153;

															{	/* Trace/walk.scm 447 */
																BgL_nodez00_bglt BgL_arg3860z00_1880;

																BgL_arg3860z00_1880 =
																	(((BgL_setqz00_bglt) CREF(BgL_nodez00_1860))->
																	BgL_valuez00);
																{	/* Trace/walk.scm 447 */
																	obj_t BgL_obj2208z00_3375;

																	BgL_obj2208z00_3375 =
																		(obj_t) (BgL_arg3860z00_1880);
																	BgL_testz00_4153 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2208z00_3375,
																		BGl_kwotez00zzast_nodez00);
																}
															}
															if (BgL_testz00_4153)
																{	/* Trace/walk.scm 447 */
																	BgL_testz00_4144 = ((bool_t) 1);
																}
															else
																{	/* Trace/walk.scm 448 */
																	BgL_nodez00_bglt BgL_arg3859z00_1879;

																	BgL_arg3859z00_1879 =
																		(((BgL_setqz00_bglt)
																			CREF(BgL_nodez00_1860))->BgL_valuez00);
																	{	/* Trace/walk.scm 448 */
																		obj_t BgL_obj2415z00_3377;

																		BgL_obj2415z00_3377 =
																			(obj_t) (BgL_arg3859z00_1879);
																		BgL_testz00_4144 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj2415z00_3377,
																			BGl_pragmaz00zzast_nodez00);
																	}
																}
														}
												}
										}
										if (BgL_testz00_4144)
											{	/* Trace/walk.scm 445 */
												BgL_testz00_4139 = ((bool_t) 0);
											}
										else
											{	/* Trace/walk.scm 445 */
												BgL_testz00_4139 = ((bool_t) 1);
											}
									}
								else
									{	/* Trace/walk.scm 444 */
										BgL_testz00_4139 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_4139)
								{	/* Trace/walk.scm 449 */
									obj_t BgL_idz00_1866;

									{	/* Trace/walk.scm 449 */
										BgL_variablez00_bglt BgL_obj1604z00_3379;

										BgL_obj1604z00_3379 =
											(((BgL_varz00_bglt) CREF(BgL_instance3396z00_1864))->
											BgL_variablez00);
										BgL_idz00_1866 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1604z00_3379))->
											BgL_idz00);
									}
									{	/* Trace/walk.scm 449 */
										BgL_typez00_bglt BgL_typez00_1867;

										{	/* Trace/walk.scm 450 */
											BgL_variablez00_bglt BgL_obj1608z00_3381;

											BgL_obj1608z00_3381 =
												(((BgL_varz00_bglt) CREF(BgL_instance3396z00_1864))->
												BgL_variablez00);
											BgL_typez00_1867 =
												(((BgL_variablez00_bglt) CREF(BgL_obj1608z00_3381))->
												BgL_typez00);
										}
										{	/* Trace/walk.scm 450 */
											BgL_letzd2varzd2_bglt BgL_tracez00_1868;

											{	/* Trace/walk.scm 451 */
												BgL_nodez00_bglt BgL_arg3849z00_1869;

												obj_t BgL_arg3850z00_1870;

												BgL_arg3849z00_1869 =
													(((BgL_setqz00_bglt) CREF(BgL_nodez00_1860))->
													BgL_valuez00);
												{
													BgL_nodez00_bglt BgL_auxz00_4165;

													BgL_auxz00_4165 =
														(BgL_nodez00_bglt) (BgL_nodez00_1860);
													BgL_arg3850z00_1870 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_4165))->
														BgL_locz00);
												}
												BgL_tracez00_1868 =
													BGl_makezd2tracedzd2nodez00zztrace_walkz00
													(BgL_arg3849z00_1869, BgL_typez00_1867,
													BgL_idz00_1866, BgL_arg3850z00_1870, BNIL);
											}
											{	/* Trace/walk.scm 451 */

												{
													BgL_nodez00_bglt BgL_auxz00_4169;

													BgL_auxz00_4169 =
														(BgL_nodez00_bglt) (BgL_tracez00_1868);
													((((BgL_setqz00_bglt) CREF(BgL_nodez00_1860))->
															BgL_valuez00) =
														((BgL_nodez00_bglt) BgL_auxz00_4169), BUNSPEC);
												}
											}
										}
									}
								}
							else
								{	/* Trace/walk.scm 444 */
									BFALSE;
								}
						}
					}
					BgL_auxz00_4137 = BgL_nodez00_1860;
					return (obj_t) (BgL_auxz00_4137);
				}
			}
		}
	}



/* toplevel-trace-node-3479 */
	obj_t BGl_toplevelzd2tracezd2nodezd23479zd2zztrace_walkz00(obj_t
		BgL_envz00_3436, obj_t BgL_nodez00_3437)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 429 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1854;

				{	/* Trace/walk.scm 430 */
					BgL_sequencez00_bglt BgL_auxz00_4174;

					BgL_nodez00_1854 = (BgL_sequencez00_bglt) (BgL_nodez00_3437);
					{	/* Trace/walk.scm 430 */
						obj_t BgL_arg3846z00_3365;

						BgL_arg3846z00_3365 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1854))->BgL_nodesz00);
						BGl_toplevelzd2tracezd2nodeza2z12zb0zztrace_walkz00
							(BgL_arg3846z00_3365);
					}
					BgL_auxz00_4174 = BgL_nodez00_1854;
					return (obj_t) (BgL_auxz00_4174);
				}
			}
		}
	}



/* trace-node-box-set!3474 */
	obj_t BGl_tracezd2nodezd2boxzd2setz123474zc0zztrace_walkz00(obj_t
		BgL_envz00_3438, obj_t BgL_nodez00_3439, obj_t BgL_stackz00_3440)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 404 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1843;

				obj_t BgL_stackz00_1844;

				{	/* Trace/walk.scm 405 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_4179;

					BgL_nodez00_1843 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_3439);
					BgL_stackz00_1844 = BgL_stackz00_3440;
					{	/* Trace/walk.scm 406 */
						BgL_nodez00_bglt BgL_arg3841z00_1848;

						{	/* Trace/walk.scm 406 */
							BgL_varz00_bglt BgL_arg3842z00_1849;

							BgL_arg3842z00_1849 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1843))->
								BgL_varz00);
							{	/* Trace/walk.scm 406 */
								BgL_nodez00_bglt BgL_res3991z00_3331;

								{	/* Trace/walk.scm 406 */
									BgL_nodez00_bglt BgL_nodez00_3304;

									BgL_nodez00_3304 = (BgL_nodez00_bglt) (BgL_arg3842z00_1849);
									{	/* Trace/walk.scm 406 */
										obj_t BgL_method3439z00_3306;

										{	/* Trace/walk.scm 406 */
											BgL_objectz00_bglt BgL_objz00_3307;

											BgL_objz00_3307 = (BgL_objectz00_bglt) (BgL_nodez00_3304);
											{	/* Trace/walk.scm 406 */
												long BgL_objzd2classzd2numz00_3308;

												BgL_objzd2classzd2numz00_3308 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3307);
												{	/* Trace/walk.scm 406 */
													obj_t BgL_arg2643z00_3309;

													BgL_arg2643z00_3309 =
														PROCEDURE_REF
														(BGl_tracezd2nodezd2envz00zztrace_walkz00,
														(int) (((long) 1)));
													{	/* Trace/walk.scm 406 */
														obj_t BgL_arrayz00_3311;

														int BgL_offsetz00_3312;

														BgL_arrayz00_3311 = BgL_arg2643z00_3309;
														BgL_offsetz00_3312 =
															(int) (BgL_objzd2classzd2numz00_3308);
														{	/* Trace/walk.scm 406 */
															long BgL_offsetz00_3313;

															BgL_offsetz00_3313 =
																((long) (BgL_offsetz00_3312) - OBJECT_TYPE);
															{	/* Trace/walk.scm 406 */
																long BgL_modz00_3314;

																{	/* Trace/walk.scm 406 */
																	int BgL_arg2645z00_3315;

																	BgL_arg2645z00_3315 = (int) (((long) 16));
																	{	/* Trace/walk.scm 406 */
																		long BgL_auxz00_4190;

																		BgL_auxz00_4190 =
																			(long) (BgL_arg2645z00_3315);
																		BgL_modz00_3314 =
																			(BgL_offsetz00_3313 / BgL_auxz00_4190);
																}}
																{	/* Trace/walk.scm 406 */
																	long BgL_restz00_3316;

																	{	/* Trace/walk.scm 406 */
																		int BgL_arg2644z00_3317;

																		BgL_arg2644z00_3317 = (int) (((long) 16));
																		{	/* Trace/walk.scm 406 */
																			long BgL_auxz00_4194;

																			BgL_auxz00_4194 =
																				(long) (BgL_arg2644z00_3317);
																			BgL_restz00_3316 =
																				(BgL_offsetz00_3313 % BgL_auxz00_4194);
																	}}
																	{	/* Trace/walk.scm 406 */

																		BgL_method3439z00_3306 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3311,
																				(int) (BgL_modz00_3314)),
																			(int) (BgL_restz00_3316));
										}}}}}}}}
										BgL_res3991z00_3331 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3439z00_3306) (BgL_method3439z00_3306,
												(obj_t) (BgL_nodez00_3304), BgL_stackz00_1844, BEOA));
								}}
								BgL_arg3841z00_1848 = BgL_res3991z00_3331;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_4205;

							BgL_auxz00_4205 = (BgL_varz00_bglt) (BgL_arg3841z00_1848);
							((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1843))->
									BgL_varz00) = ((BgL_varz00_bglt) BgL_auxz00_4205), BUNSPEC);
					}}
					{	/* Trace/walk.scm 407 */
						BgL_nodez00_bglt BgL_arg3843z00_1850;

						{	/* Trace/walk.scm 407 */
							BgL_nodez00_bglt BgL_arg3844z00_1851;

							BgL_arg3844z00_1851 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1843))->
								BgL_valuez00);
							{	/* Trace/walk.scm 407 */
								BgL_nodez00_bglt BgL_res3994z00_3362;

								{	/* Trace/walk.scm 407 */
									obj_t BgL_method3439z00_3337;

									{	/* Trace/walk.scm 407 */
										BgL_objectz00_bglt BgL_objz00_3338;

										BgL_objz00_3338 =
											(BgL_objectz00_bglt) (BgL_arg3844z00_1851);
										{	/* Trace/walk.scm 407 */
											long BgL_objzd2classzd2numz00_3339;

											BgL_objzd2classzd2numz00_3339 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3338);
											{	/* Trace/walk.scm 407 */
												obj_t BgL_arg2643z00_3340;

												BgL_arg2643z00_3340 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 407 */
													obj_t BgL_arrayz00_3342;

													int BgL_offsetz00_3343;

													BgL_arrayz00_3342 = BgL_arg2643z00_3340;
													BgL_offsetz00_3343 =
														(int) (BgL_objzd2classzd2numz00_3339);
													{	/* Trace/walk.scm 407 */
														long BgL_offsetz00_3344;

														BgL_offsetz00_3344 =
															((long) (BgL_offsetz00_3343) - OBJECT_TYPE);
														{	/* Trace/walk.scm 407 */
															long BgL_modz00_3345;

															{	/* Trace/walk.scm 407 */
																int BgL_arg2645z00_3346;

																BgL_arg2645z00_3346 = (int) (((long) 16));
																{	/* Trace/walk.scm 407 */
																	long BgL_auxz00_4217;

																	BgL_auxz00_4217 =
																		(long) (BgL_arg2645z00_3346);
																	BgL_modz00_3345 =
																		(BgL_offsetz00_3344 / BgL_auxz00_4217);
															}}
															{	/* Trace/walk.scm 407 */
																long BgL_restz00_3347;

																{	/* Trace/walk.scm 407 */
																	int BgL_arg2644z00_3348;

																	BgL_arg2644z00_3348 = (int) (((long) 16));
																	{	/* Trace/walk.scm 407 */
																		long BgL_auxz00_4221;

																		BgL_auxz00_4221 =
																			(long) (BgL_arg2644z00_3348);
																		BgL_restz00_3347 =
																			(BgL_offsetz00_3344 % BgL_auxz00_4221);
																}}
																{	/* Trace/walk.scm 407 */

																	BgL_method3439z00_3337 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3342,
																			(int) (BgL_modz00_3345)),
																		(int) (BgL_restz00_3347));
									}}}}}}}}
									BgL_res3994z00_3362 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3337)
										(BgL_method3439z00_3337, (obj_t) (BgL_arg3844z00_1851),
											BgL_stackz00_1844, BEOA));
								}
								BgL_arg3843z00_1850 = BgL_res3994z00_3362;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1843))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3843z00_1850), BUNSPEC);
					}
					BgL_auxz00_4179 = BgL_nodez00_1843;
					return (obj_t) (BgL_auxz00_4179);
				}
			}
		}
	}



/* trace-node-box-ref3471 */
	obj_t BGl_tracezd2nodezd2boxzd2ref3471zd2zztrace_walkz00(obj_t
		BgL_envz00_3441, obj_t BgL_nodez00_3442, obj_t BgL_stackz00_3443)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 397 */
			{
				BgL_boxzd2refzd2_bglt BgL_nodez00_1835;

				obj_t BgL_stackz00_1836;

				{	/* Trace/walk.scm 398 */
					BgL_boxzd2refzd2_bglt BgL_auxz00_4235;

					BgL_nodez00_1835 = (BgL_boxzd2refzd2_bglt) (BgL_nodez00_3442);
					BgL_stackz00_1836 = BgL_stackz00_3443;
					{	/* Trace/walk.scm 398 */
						BgL_nodez00_bglt BgL_arg3838z00_3270;

						{	/* Trace/walk.scm 398 */
							BgL_varz00_bglt BgL_arg3839z00_3271;

							BgL_arg3839z00_3271 =
								(((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1835))->BgL_varz00);
							{	/* Trace/walk.scm 398 */
								BgL_nodez00_bglt BgL_res3988z00_3300;

								{	/* Trace/walk.scm 398 */
									BgL_nodez00_bglt BgL_nodez00_3273;

									BgL_nodez00_3273 = (BgL_nodez00_bglt) (BgL_arg3839z00_3271);
									{	/* Trace/walk.scm 398 */
										obj_t BgL_method3439z00_3275;

										{	/* Trace/walk.scm 398 */
											BgL_objectz00_bglt BgL_objz00_3276;

											BgL_objz00_3276 = (BgL_objectz00_bglt) (BgL_nodez00_3273);
											{	/* Trace/walk.scm 398 */
												long BgL_objzd2classzd2numz00_3277;

												BgL_objzd2classzd2numz00_3277 =
													BGL_OBJECT_CLASS_NUM(BgL_objz00_3276);
												{	/* Trace/walk.scm 398 */
													obj_t BgL_arg2643z00_3278;

													BgL_arg2643z00_3278 =
														PROCEDURE_REF
														(BGl_tracezd2nodezd2envz00zztrace_walkz00,
														(int) (((long) 1)));
													{	/* Trace/walk.scm 398 */
														obj_t BgL_arrayz00_3280;

														int BgL_offsetz00_3281;

														BgL_arrayz00_3280 = BgL_arg2643z00_3278;
														BgL_offsetz00_3281 =
															(int) (BgL_objzd2classzd2numz00_3277);
														{	/* Trace/walk.scm 398 */
															long BgL_offsetz00_3282;

															BgL_offsetz00_3282 =
																((long) (BgL_offsetz00_3281) - OBJECT_TYPE);
															{	/* Trace/walk.scm 398 */
																long BgL_modz00_3283;

																{	/* Trace/walk.scm 398 */
																	int BgL_arg2645z00_3284;

																	BgL_arg2645z00_3284 = (int) (((long) 16));
																	{	/* Trace/walk.scm 398 */
																		long BgL_auxz00_4246;

																		BgL_auxz00_4246 =
																			(long) (BgL_arg2645z00_3284);
																		BgL_modz00_3283 =
																			(BgL_offsetz00_3282 / BgL_auxz00_4246);
																}}
																{	/* Trace/walk.scm 398 */
																	long BgL_restz00_3285;

																	{	/* Trace/walk.scm 398 */
																		int BgL_arg2644z00_3286;

																		BgL_arg2644z00_3286 = (int) (((long) 16));
																		{	/* Trace/walk.scm 398 */
																			long BgL_auxz00_4250;

																			BgL_auxz00_4250 =
																				(long) (BgL_arg2644z00_3286);
																			BgL_restz00_3285 =
																				(BgL_offsetz00_3282 % BgL_auxz00_4250);
																	}}
																	{	/* Trace/walk.scm 398 */

																		BgL_method3439z00_3275 =
																			VECTOR_REF(VECTOR_REF(BgL_arrayz00_3280,
																				(int) (BgL_modz00_3283)),
																			(int) (BgL_restz00_3285));
										}}}}}}}}
										BgL_res3988z00_3300 =
											(BgL_nodez00_bglt) (PROCEDURE_ENTRY
											(BgL_method3439z00_3275) (BgL_method3439z00_3275,
												(obj_t) (BgL_nodez00_3273), BgL_stackz00_1836, BEOA));
								}}
								BgL_arg3838z00_3270 = BgL_res3988z00_3300;
						}}
						{
							BgL_varz00_bglt BgL_auxz00_4261;

							BgL_auxz00_4261 = (BgL_varz00_bglt) (BgL_arg3838z00_3270);
							((((BgL_boxzd2refzd2_bglt) CREF(BgL_nodez00_1835))->BgL_varz00) =
								((BgL_varz00_bglt) BgL_auxz00_4261), BUNSPEC);
					}}
					BgL_auxz00_4235 = BgL_nodez00_1835;
					return (obj_t) (BgL_auxz00_4235);
				}
			}
		}
	}



/* trace-node-make-box3469 */
	obj_t BGl_tracezd2nodezd2makezd2box3469zd2zztrace_walkz00(obj_t
		BgL_envz00_3444, obj_t BgL_nodez00_3445, obj_t BgL_stackz00_3446)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 390 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1827;

				obj_t BgL_stackz00_1828;

				{	/* Trace/walk.scm 391 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_4266;

					BgL_nodez00_1827 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_3445);
					BgL_stackz00_1828 = BgL_stackz00_3446;
					{	/* Trace/walk.scm 391 */
						BgL_nodez00_bglt BgL_arg3835z00_3237;

						{	/* Trace/walk.scm 391 */
							BgL_nodez00_bglt BgL_arg3836z00_3238;

							BgL_arg3836z00_3238 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1827))->
								BgL_valuez00);
							{	/* Trace/walk.scm 391 */
								BgL_nodez00_bglt BgL_res3985z00_3267;

								{	/* Trace/walk.scm 391 */
									obj_t BgL_method3439z00_3242;

									{	/* Trace/walk.scm 391 */
										BgL_objectz00_bglt BgL_objz00_3243;

										BgL_objz00_3243 =
											(BgL_objectz00_bglt) (BgL_arg3836z00_3238);
										{	/* Trace/walk.scm 391 */
											long BgL_objzd2classzd2numz00_3244;

											BgL_objzd2classzd2numz00_3244 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3243);
											{	/* Trace/walk.scm 391 */
												obj_t BgL_arg2643z00_3245;

												BgL_arg2643z00_3245 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 391 */
													obj_t BgL_arrayz00_3247;

													int BgL_offsetz00_3248;

													BgL_arrayz00_3247 = BgL_arg2643z00_3245;
													BgL_offsetz00_3248 =
														(int) (BgL_objzd2classzd2numz00_3244);
													{	/* Trace/walk.scm 391 */
														long BgL_offsetz00_3249;

														BgL_offsetz00_3249 =
															((long) (BgL_offsetz00_3248) - OBJECT_TYPE);
														{	/* Trace/walk.scm 391 */
															long BgL_modz00_3250;

															{	/* Trace/walk.scm 391 */
																int BgL_arg2645z00_3251;

																BgL_arg2645z00_3251 = (int) (((long) 16));
																{	/* Trace/walk.scm 391 */
																	long BgL_auxz00_4276;

																	BgL_auxz00_4276 =
																		(long) (BgL_arg2645z00_3251);
																	BgL_modz00_3250 =
																		(BgL_offsetz00_3249 / BgL_auxz00_4276);
															}}
															{	/* Trace/walk.scm 391 */
																long BgL_restz00_3252;

																{	/* Trace/walk.scm 391 */
																	int BgL_arg2644z00_3253;

																	BgL_arg2644z00_3253 = (int) (((long) 16));
																	{	/* Trace/walk.scm 391 */
																		long BgL_auxz00_4280;

																		BgL_auxz00_4280 =
																			(long) (BgL_arg2644z00_3253);
																		BgL_restz00_3252 =
																			(BgL_offsetz00_3249 % BgL_auxz00_4280);
																}}
																{	/* Trace/walk.scm 391 */

																	BgL_method3439z00_3242 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3247,
																			(int) (BgL_modz00_3250)),
																		(int) (BgL_restz00_3252));
									}}}}}}}}
									BgL_res3985z00_3267 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3242)
										(BgL_method3439z00_3242, (obj_t) (BgL_arg3836z00_3238),
											BgL_stackz00_1828, BEOA));
								}
								BgL_arg3835z00_3237 = BgL_res3985z00_3267;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1827))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3835z00_3237), BUNSPEC);
					}
					BgL_auxz00_4266 = BgL_nodez00_1827;
					return (obj_t) (BgL_auxz00_4266);
				}
			}
		}
	}



/* trace-node-jump-ex-i3467 */
	obj_t BGl_tracezd2nodezd2jumpzd2exzd2i3467z00zztrace_walkz00(obj_t
		BgL_envz00_3447, obj_t BgL_nodez00_3448, obj_t BgL_stackz00_3449)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 381 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1816;

				obj_t BgL_stackz00_1817;

				{	/* Trace/walk.scm 382 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_4294;

					BgL_nodez00_1816 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3448);
					BgL_stackz00_1817 = BgL_stackz00_3449;
					{	/* Trace/walk.scm 383 */
						BgL_nodez00_bglt BgL_arg3830z00_1821;

						{	/* Trace/walk.scm 383 */
							BgL_nodez00_bglt BgL_arg3831z00_1822;

							BgL_arg3831z00_1822 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1816))->
								BgL_exitz00);
							{	/* Trace/walk.scm 383 */
								BgL_nodez00_bglt BgL_res3979z00_3203;

								{	/* Trace/walk.scm 383 */
									obj_t BgL_method3439z00_3178;

									{	/* Trace/walk.scm 383 */
										BgL_objectz00_bglt BgL_objz00_3179;

										BgL_objz00_3179 =
											(BgL_objectz00_bglt) (BgL_arg3831z00_1822);
										{	/* Trace/walk.scm 383 */
											long BgL_objzd2classzd2numz00_3180;

											BgL_objzd2classzd2numz00_3180 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3179);
											{	/* Trace/walk.scm 383 */
												obj_t BgL_arg2643z00_3181;

												BgL_arg2643z00_3181 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 383 */
													obj_t BgL_arrayz00_3183;

													int BgL_offsetz00_3184;

													BgL_arrayz00_3183 = BgL_arg2643z00_3181;
													BgL_offsetz00_3184 =
														(int) (BgL_objzd2classzd2numz00_3180);
													{	/* Trace/walk.scm 383 */
														long BgL_offsetz00_3185;

														BgL_offsetz00_3185 =
															((long) (BgL_offsetz00_3184) - OBJECT_TYPE);
														{	/* Trace/walk.scm 383 */
															long BgL_modz00_3186;

															{	/* Trace/walk.scm 383 */
																int BgL_arg2645z00_3187;

																BgL_arg2645z00_3187 = (int) (((long) 16));
																{	/* Trace/walk.scm 383 */
																	long BgL_auxz00_4304;

																	BgL_auxz00_4304 =
																		(long) (BgL_arg2645z00_3187);
																	BgL_modz00_3186 =
																		(BgL_offsetz00_3185 / BgL_auxz00_4304);
															}}
															{	/* Trace/walk.scm 383 */
																long BgL_restz00_3188;

																{	/* Trace/walk.scm 383 */
																	int BgL_arg2644z00_3189;

																	BgL_arg2644z00_3189 = (int) (((long) 16));
																	{	/* Trace/walk.scm 383 */
																		long BgL_auxz00_4308;

																		BgL_auxz00_4308 =
																			(long) (BgL_arg2644z00_3189);
																		BgL_restz00_3188 =
																			(BgL_offsetz00_3185 % BgL_auxz00_4308);
																}}
																{	/* Trace/walk.scm 383 */

																	BgL_method3439z00_3178 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3183,
																			(int) (BgL_modz00_3186)),
																		(int) (BgL_restz00_3188));
									}}}}}}}}
									BgL_res3979z00_3203 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3178)
										(BgL_method3439z00_3178, (obj_t) (BgL_arg3831z00_1822),
											BgL_stackz00_1817, BEOA));
								}
								BgL_arg3830z00_1821 = BgL_res3979z00_3203;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1816))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3830z00_1821), BUNSPEC);
					}
					{	/* Trace/walk.scm 384 */
						BgL_nodez00_bglt BgL_arg3832z00_1823;

						{	/* Trace/walk.scm 384 */
							BgL_nodez00_bglt BgL_arg3833z00_1824;

							BgL_arg3833z00_1824 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1816))->
								BgL_valuez00);
							{	/* Trace/walk.scm 384 */
								BgL_nodez00_bglt BgL_res3982z00_3234;

								{	/* Trace/walk.scm 384 */
									obj_t BgL_method3439z00_3209;

									{	/* Trace/walk.scm 384 */
										BgL_objectz00_bglt BgL_objz00_3210;

										BgL_objz00_3210 =
											(BgL_objectz00_bglt) (BgL_arg3833z00_1824);
										{	/* Trace/walk.scm 384 */
											long BgL_objzd2classzd2numz00_3211;

											BgL_objzd2classzd2numz00_3211 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3210);
											{	/* Trace/walk.scm 384 */
												obj_t BgL_arg2643z00_3212;

												BgL_arg2643z00_3212 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 384 */
													obj_t BgL_arrayz00_3214;

													int BgL_offsetz00_3215;

													BgL_arrayz00_3214 = BgL_arg2643z00_3212;
													BgL_offsetz00_3215 =
														(int) (BgL_objzd2classzd2numz00_3211);
													{	/* Trace/walk.scm 384 */
														long BgL_offsetz00_3216;

														BgL_offsetz00_3216 =
															((long) (BgL_offsetz00_3215) - OBJECT_TYPE);
														{	/* Trace/walk.scm 384 */
															long BgL_modz00_3217;

															{	/* Trace/walk.scm 384 */
																int BgL_arg2645z00_3218;

																BgL_arg2645z00_3218 = (int) (((long) 16));
																{	/* Trace/walk.scm 384 */
																	long BgL_auxz00_4329;

																	BgL_auxz00_4329 =
																		(long) (BgL_arg2645z00_3218);
																	BgL_modz00_3217 =
																		(BgL_offsetz00_3216 / BgL_auxz00_4329);
															}}
															{	/* Trace/walk.scm 384 */
																long BgL_restz00_3219;

																{	/* Trace/walk.scm 384 */
																	int BgL_arg2644z00_3220;

																	BgL_arg2644z00_3220 = (int) (((long) 16));
																	{	/* Trace/walk.scm 384 */
																		long BgL_auxz00_4333;

																		BgL_auxz00_4333 =
																			(long) (BgL_arg2644z00_3220);
																		BgL_restz00_3219 =
																			(BgL_offsetz00_3216 % BgL_auxz00_4333);
																}}
																{	/* Trace/walk.scm 384 */

																	BgL_method3439z00_3209 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3214,
																			(int) (BgL_modz00_3217)),
																		(int) (BgL_restz00_3219));
									}}}}}}}}
									BgL_res3982z00_3234 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3209)
										(BgL_method3439z00_3209, (obj_t) (BgL_arg3833z00_1824),
											BgL_stackz00_1817, BEOA));
								}
								BgL_arg3832z00_1823 = BgL_res3982z00_3234;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1816))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3832z00_1823), BUNSPEC);
					}
					BgL_auxz00_4294 = BgL_nodez00_1816;
					return (obj_t) (BgL_auxz00_4294);
				}
			}
		}
	}



/* trace-node-set-ex-it3465 */
	obj_t BGl_tracezd2nodezd2setzd2exzd2it3465z00zztrace_walkz00(obj_t
		BgL_envz00_3450, obj_t BgL_nodez00_3451, obj_t BgL_stackz00_3452)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 374 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1808;

				obj_t BgL_stackz00_1809;

				{	/* Trace/walk.scm 375 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_4347;

					BgL_nodez00_1808 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3451);
					BgL_stackz00_1809 = BgL_stackz00_3452;
					{	/* Trace/walk.scm 375 */
						BgL_nodez00_bglt BgL_arg3827z00_3142;

						{	/* Trace/walk.scm 375 */
							BgL_nodez00_bglt BgL_arg3828z00_3143;

							BgL_arg3828z00_3143 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1808))->
								BgL_bodyz00);
							{	/* Trace/walk.scm 375 */
								BgL_nodez00_bglt BgL_res3976z00_3172;

								{	/* Trace/walk.scm 375 */
									obj_t BgL_method3439z00_3147;

									{	/* Trace/walk.scm 375 */
										BgL_objectz00_bglt BgL_objz00_3148;

										BgL_objz00_3148 =
											(BgL_objectz00_bglt) (BgL_arg3828z00_3143);
										{	/* Trace/walk.scm 375 */
											long BgL_objzd2classzd2numz00_3149;

											BgL_objzd2classzd2numz00_3149 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3148);
											{	/* Trace/walk.scm 375 */
												obj_t BgL_arg2643z00_3150;

												BgL_arg2643z00_3150 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 375 */
													obj_t BgL_arrayz00_3152;

													int BgL_offsetz00_3153;

													BgL_arrayz00_3152 = BgL_arg2643z00_3150;
													BgL_offsetz00_3153 =
														(int) (BgL_objzd2classzd2numz00_3149);
													{	/* Trace/walk.scm 375 */
														long BgL_offsetz00_3154;

														BgL_offsetz00_3154 =
															((long) (BgL_offsetz00_3153) - OBJECT_TYPE);
														{	/* Trace/walk.scm 375 */
															long BgL_modz00_3155;

															{	/* Trace/walk.scm 375 */
																int BgL_arg2645z00_3156;

																BgL_arg2645z00_3156 = (int) (((long) 16));
																{	/* Trace/walk.scm 375 */
																	long BgL_auxz00_4357;

																	BgL_auxz00_4357 =
																		(long) (BgL_arg2645z00_3156);
																	BgL_modz00_3155 =
																		(BgL_offsetz00_3154 / BgL_auxz00_4357);
															}}
															{	/* Trace/walk.scm 375 */
																long BgL_restz00_3157;

																{	/* Trace/walk.scm 375 */
																	int BgL_arg2644z00_3158;

																	BgL_arg2644z00_3158 = (int) (((long) 16));
																	{	/* Trace/walk.scm 375 */
																		long BgL_auxz00_4361;

																		BgL_auxz00_4361 =
																			(long) (BgL_arg2644z00_3158);
																		BgL_restz00_3157 =
																			(BgL_offsetz00_3154 % BgL_auxz00_4361);
																}}
																{	/* Trace/walk.scm 375 */

																	BgL_method3439z00_3147 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3152,
																			(int) (BgL_modz00_3155)),
																		(int) (BgL_restz00_3157));
									}}}}}}}}
									BgL_res3976z00_3172 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3147)
										(BgL_method3439z00_3147, (obj_t) (BgL_arg3828z00_3143),
											BgL_stackz00_1809, BEOA));
								}
								BgL_arg3827z00_3142 = BgL_res3976z00_3172;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1808))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3827z00_3142), BUNSPEC);
					}
					BgL_auxz00_4347 = BgL_nodez00_1808;
					return (obj_t) (BgL_auxz00_4347);
				}
			}
		}
	}



/* trace-node-let-var3463 */
	obj_t BGl_tracezd2nodezd2letzd2var3463zd2zztrace_walkz00(obj_t
		BgL_envz00_3453, obj_t BgL_nodez00_3454, obj_t BgL_stackz00_3455)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 363 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1789;

				obj_t BgL_stackz00_1790;

				{	/* Trace/walk.scm 364 */
					BgL_letzd2varzd2_bglt BgL_auxz00_4375;

					BgL_nodez00_1789 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3454);
					BgL_stackz00_1790 = BgL_stackz00_3455;
					{	/* Trace/walk.scm 365 */
						obj_t BgL_g3409z00_1794;

						BgL_g3409z00_1794 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1789))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3407z00_1796;

							BgL_l3407z00_1796 = BgL_g3409z00_1794;
						BgL_zc3anonymousza33819ze3z83_1797:
							if (PAIRP(BgL_l3407z00_1796))
								{	/* Trace/walk.scm 365 */
									{	/* Trace/walk.scm 366 */
										obj_t BgL_bindingz00_1799;

										BgL_bindingz00_1799 = CAR(BgL_l3407z00_1796);
										{	/* Trace/walk.scm 366 */
											BgL_nodez00_bglt BgL_arg3821z00_1800;

											{	/* Trace/walk.scm 366 */
												obj_t BgL_arg3822z00_1801;

												BgL_arg3822z00_1801 = CDR(BgL_bindingz00_1799);
												{	/* Trace/walk.scm 366 */
													BgL_nodez00_bglt BgL_res3970z00_3107;

													{	/* Trace/walk.scm 366 */
														BgL_nodez00_bglt BgL_nodez00_3080;

														BgL_nodez00_3080 =
															(BgL_nodez00_bglt) (BgL_arg3822z00_1801);
														{	/* Trace/walk.scm 366 */
															obj_t BgL_method3439z00_3082;

															{	/* Trace/walk.scm 366 */
																BgL_objectz00_bglt BgL_objz00_3083;

																BgL_objz00_3083 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3080);
																{	/* Trace/walk.scm 366 */
																	long BgL_objzd2classzd2numz00_3084;

																	BgL_objzd2classzd2numz00_3084 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3083);
																	{	/* Trace/walk.scm 366 */
																		obj_t BgL_arg2643z00_3085;

																		BgL_arg2643z00_3085 =
																			PROCEDURE_REF
																			(BGl_tracezd2nodezd2envz00zztrace_walkz00,
																			(int) (((long) 1)));
																		{	/* Trace/walk.scm 366 */
																			obj_t BgL_arrayz00_3087;

																			int BgL_offsetz00_3088;

																			BgL_arrayz00_3087 = BgL_arg2643z00_3085;
																			BgL_offsetz00_3088 =
																				(int) (BgL_objzd2classzd2numz00_3084);
																			{	/* Trace/walk.scm 366 */
																				long BgL_offsetz00_3089;

																				BgL_offsetz00_3089 =
																					(
																					(long) (BgL_offsetz00_3088) -
																					OBJECT_TYPE);
																				{	/* Trace/walk.scm 366 */
																					long BgL_modz00_3090;

																					{	/* Trace/walk.scm 366 */
																						int BgL_arg2645z00_3091;

																						BgL_arg2645z00_3091 =
																							(int) (((long) 16));
																						{	/* Trace/walk.scm 366 */
																							long BgL_auxz00_4390;

																							BgL_auxz00_4390 =
																								(long) (BgL_arg2645z00_3091);
																							BgL_modz00_3090 =
																								(BgL_offsetz00_3089 /
																								BgL_auxz00_4390);
																					}}
																					{	/* Trace/walk.scm 366 */
																						long BgL_restz00_3092;

																						{	/* Trace/walk.scm 366 */
																							int BgL_arg2644z00_3093;

																							BgL_arg2644z00_3093 =
																								(int) (((long) 16));
																							{	/* Trace/walk.scm 366 */
																								long BgL_auxz00_4394;

																								BgL_auxz00_4394 =
																									(long) (BgL_arg2644z00_3093);
																								BgL_restz00_3092 =
																									(BgL_offsetz00_3089 %
																									BgL_auxz00_4394);
																						}}
																						{	/* Trace/walk.scm 366 */

																							BgL_method3439z00_3082 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3087,
																									(int) (BgL_modz00_3090)),
																								(int) (BgL_restz00_3092));
															}}}}}}}}
															BgL_res3970z00_3107 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3439z00_3082)
																(BgL_method3439z00_3082,
																	(obj_t) (BgL_nodez00_3080), BgL_stackz00_1790,
																	BEOA));
													}}
													BgL_arg3821z00_1800 = BgL_res3970z00_3107;
											}}
											{	/* Trace/walk.scm 366 */
												obj_t BgL_auxz00_4405;

												BgL_auxz00_4405 = (obj_t) (BgL_arg3821z00_1800);
												SET_CDR(BgL_bindingz00_1799, BgL_auxz00_4405);
									}}}
									{
										obj_t BgL_l3407z00_4408;

										BgL_l3407z00_4408 = CDR(BgL_l3407z00_1796);
										BgL_l3407z00_1796 = BgL_l3407z00_4408;
										goto BgL_zc3anonymousza33819ze3z83_1797;
									}
								}
							else
								{	/* Trace/walk.scm 365 */
									((bool_t) 1);
								}
						}
					}
					{	/* Trace/walk.scm 368 */
						BgL_nodez00_bglt BgL_arg3824z00_1804;

						{	/* Trace/walk.scm 368 */
							BgL_nodez00_bglt BgL_arg3825z00_1805;

							BgL_arg3825z00_1805 =
								(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1789))->BgL_bodyz00);
							{	/* Trace/walk.scm 368 */
								BgL_nodez00_bglt BgL_res3973z00_3139;

								{	/* Trace/walk.scm 368 */
									obj_t BgL_method3439z00_3114;

									{	/* Trace/walk.scm 368 */
										BgL_objectz00_bglt BgL_objz00_3115;

										BgL_objz00_3115 =
											(BgL_objectz00_bglt) (BgL_arg3825z00_1805);
										{	/* Trace/walk.scm 368 */
											long BgL_objzd2classzd2numz00_3116;

											BgL_objzd2classzd2numz00_3116 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3115);
											{	/* Trace/walk.scm 368 */
												obj_t BgL_arg2643z00_3117;

												BgL_arg2643z00_3117 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 368 */
													obj_t BgL_arrayz00_3119;

													int BgL_offsetz00_3120;

													BgL_arrayz00_3119 = BgL_arg2643z00_3117;
													BgL_offsetz00_3120 =
														(int) (BgL_objzd2classzd2numz00_3116);
													{	/* Trace/walk.scm 368 */
														long BgL_offsetz00_3121;

														BgL_offsetz00_3121 =
															((long) (BgL_offsetz00_3120) - OBJECT_TYPE);
														{	/* Trace/walk.scm 368 */
															long BgL_modz00_3122;

															{	/* Trace/walk.scm 368 */
																int BgL_arg2645z00_3123;

																BgL_arg2645z00_3123 = (int) (((long) 16));
																{	/* Trace/walk.scm 368 */
																	long BgL_auxz00_4419;

																	BgL_auxz00_4419 =
																		(long) (BgL_arg2645z00_3123);
																	BgL_modz00_3122 =
																		(BgL_offsetz00_3121 / BgL_auxz00_4419);
															}}
															{	/* Trace/walk.scm 368 */
																long BgL_restz00_3124;

																{	/* Trace/walk.scm 368 */
																	int BgL_arg2644z00_3125;

																	BgL_arg2644z00_3125 = (int) (((long) 16));
																	{	/* Trace/walk.scm 368 */
																		long BgL_auxz00_4423;

																		BgL_auxz00_4423 =
																			(long) (BgL_arg2644z00_3125);
																		BgL_restz00_3124 =
																			(BgL_offsetz00_3121 % BgL_auxz00_4423);
																}}
																{	/* Trace/walk.scm 368 */

																	BgL_method3439z00_3114 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3119,
																			(int) (BgL_modz00_3122)),
																		(int) (BgL_restz00_3124));
									}}}}}}}}
									BgL_res3973z00_3139 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3114)
										(BgL_method3439z00_3114, (obj_t) (BgL_arg3825z00_1805),
											BgL_stackz00_1790, BEOA));
								}
								BgL_arg3824z00_1804 = BgL_res3973z00_3139;
						}}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1789))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3824z00_1804), BUNSPEC);
					}
					BgL_auxz00_4375 = BgL_nodez00_1789;
					return (obj_t) (BgL_auxz00_4375);
				}
			}
		}
	}



/* trace-node-let-fun3461 */
	obj_t BGl_tracezd2nodezd2letzd2fun3461zd2zztrace_walkz00(obj_t
		BgL_envz00_3456, obj_t BgL_nodez00_3457, obj_t BgL_stackz00_3458)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 354 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1772;

				obj_t BgL_stackz00_1773;

				{	/* Trace/walk.scm 355 */
					BgL_letzd2funzd2_bglt BgL_auxz00_4437;

					BgL_nodez00_1772 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3457);
					BgL_stackz00_1773 = BgL_stackz00_3458;
					{	/* Trace/walk.scm 356 */
						obj_t BgL_g3406z00_1777;

						BgL_g3406z00_1777 =
							(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1772))->BgL_localsz00);
						{
							obj_t BgL_l3404z00_1779;

							BgL_l3404z00_1779 = BgL_g3406z00_1777;
						BgL_zc3anonymousza33813ze3z83_1780:
							if (PAIRP(BgL_l3404z00_1779))
								{	/* Trace/walk.scm 356 */
									BGl_tracezd2funz12zc0zztrace_walkz00(CAR(BgL_l3404z00_1779),
										BgL_stackz00_1773);
									{
										obj_t BgL_l3404z00_4443;

										BgL_l3404z00_4443 = CDR(BgL_l3404z00_1779);
										BgL_l3404z00_1779 = BgL_l3404z00_4443;
										goto BgL_zc3anonymousza33813ze3z83_1780;
									}
								}
							else
								{	/* Trace/walk.scm 356 */
									((bool_t) 1);
								}
						}
					}
					{	/* Trace/walk.scm 357 */
						BgL_nodez00_bglt BgL_arg3816z00_1785;

						{	/* Trace/walk.scm 357 */
							BgL_nodez00_bglt BgL_arg3817z00_1786;

							BgL_arg3817z00_1786 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1772))->BgL_bodyz00);
							{	/* Trace/walk.scm 357 */
								BgL_nodez00_bglt BgL_res3967z00_3073;

								{	/* Trace/walk.scm 357 */
									obj_t BgL_method3439z00_3048;

									{	/* Trace/walk.scm 357 */
										BgL_objectz00_bglt BgL_objz00_3049;

										BgL_objz00_3049 =
											(BgL_objectz00_bglt) (BgL_arg3817z00_1786);
										{	/* Trace/walk.scm 357 */
											long BgL_objzd2classzd2numz00_3050;

											BgL_objzd2classzd2numz00_3050 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_3049);
											{	/* Trace/walk.scm 357 */
												obj_t BgL_arg2643z00_3051;

												BgL_arg2643z00_3051 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 357 */
													obj_t BgL_arrayz00_3053;

													int BgL_offsetz00_3054;

													BgL_arrayz00_3053 = BgL_arg2643z00_3051;
													BgL_offsetz00_3054 =
														(int) (BgL_objzd2classzd2numz00_3050);
													{	/* Trace/walk.scm 357 */
														long BgL_offsetz00_3055;

														BgL_offsetz00_3055 =
															((long) (BgL_offsetz00_3054) - OBJECT_TYPE);
														{	/* Trace/walk.scm 357 */
															long BgL_modz00_3056;

															{	/* Trace/walk.scm 357 */
																int BgL_arg2645z00_3057;

																BgL_arg2645z00_3057 = (int) (((long) 16));
																{	/* Trace/walk.scm 357 */
																	long BgL_auxz00_4454;

																	BgL_auxz00_4454 =
																		(long) (BgL_arg2645z00_3057);
																	BgL_modz00_3056 =
																		(BgL_offsetz00_3055 / BgL_auxz00_4454);
															}}
															{	/* Trace/walk.scm 357 */
																long BgL_restz00_3058;

																{	/* Trace/walk.scm 357 */
																	int BgL_arg2644z00_3059;

																	BgL_arg2644z00_3059 = (int) (((long) 16));
																	{	/* Trace/walk.scm 357 */
																		long BgL_auxz00_4458;

																		BgL_auxz00_4458 =
																			(long) (BgL_arg2644z00_3059);
																		BgL_restz00_3058 =
																			(BgL_offsetz00_3055 % BgL_auxz00_4458);
																}}
																{	/* Trace/walk.scm 357 */

																	BgL_method3439z00_3048 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_3053,
																			(int) (BgL_modz00_3056)),
																		(int) (BgL_restz00_3058));
									}}}}}}}}
									BgL_res3967z00_3073 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_3048)
										(BgL_method3439z00_3048, (obj_t) (BgL_arg3817z00_1786),
											BgL_stackz00_1773, BEOA));
								}
								BgL_arg3816z00_1785 = BgL_res3967z00_3073;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1772))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3816z00_1785), BUNSPEC);
					}
					BgL_auxz00_4437 = BgL_nodez00_1772;
					return (obj_t) (BgL_auxz00_4437);
				}
			}
		}
	}



/* trace-node-select3459 */
	obj_t BGl_tracezd2nodezd2select3459z00zztrace_walkz00(obj_t BgL_envz00_3459,
		obj_t BgL_nodez00_3460, obj_t BgL_stackz00_3461)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 343 */
			{
				BgL_selectz00_bglt BgL_nodez00_1753;

				obj_t BgL_stackz00_1754;

				{	/* Trace/walk.scm 344 */
					BgL_selectz00_bglt BgL_auxz00_4472;

					BgL_nodez00_1753 = (BgL_selectz00_bglt) (BgL_nodez00_3460);
					BgL_stackz00_1754 = BgL_stackz00_3461;
					{	/* Trace/walk.scm 345 */
						BgL_nodez00_bglt BgL_arg3805z00_1758;

						{	/* Trace/walk.scm 345 */
							BgL_nodez00_bglt BgL_arg3806z00_1759;

							BgL_arg3806z00_1759 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1753))->BgL_testz00);
							{	/* Trace/walk.scm 345 */
								BgL_nodez00_bglt BgL_res3961z00_3003;

								{	/* Trace/walk.scm 345 */
									obj_t BgL_method3439z00_2978;

									{	/* Trace/walk.scm 345 */
										BgL_objectz00_bglt BgL_objz00_2979;

										BgL_objz00_2979 =
											(BgL_objectz00_bglt) (BgL_arg3806z00_1759);
										{	/* Trace/walk.scm 345 */
											long BgL_objzd2classzd2numz00_2980;

											BgL_objzd2classzd2numz00_2980 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2979);
											{	/* Trace/walk.scm 345 */
												obj_t BgL_arg2643z00_2981;

												BgL_arg2643z00_2981 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 345 */
													obj_t BgL_arrayz00_2983;

													int BgL_offsetz00_2984;

													BgL_arrayz00_2983 = BgL_arg2643z00_2981;
													BgL_offsetz00_2984 =
														(int) (BgL_objzd2classzd2numz00_2980);
													{	/* Trace/walk.scm 345 */
														long BgL_offsetz00_2985;

														BgL_offsetz00_2985 =
															((long) (BgL_offsetz00_2984) - OBJECT_TYPE);
														{	/* Trace/walk.scm 345 */
															long BgL_modz00_2986;

															{	/* Trace/walk.scm 345 */
																int BgL_arg2645z00_2987;

																BgL_arg2645z00_2987 = (int) (((long) 16));
																{	/* Trace/walk.scm 345 */
																	long BgL_auxz00_4482;

																	BgL_auxz00_4482 =
																		(long) (BgL_arg2645z00_2987);
																	BgL_modz00_2986 =
																		(BgL_offsetz00_2985 / BgL_auxz00_4482);
															}}
															{	/* Trace/walk.scm 345 */
																long BgL_restz00_2988;

																{	/* Trace/walk.scm 345 */
																	int BgL_arg2644z00_2989;

																	BgL_arg2644z00_2989 = (int) (((long) 16));
																	{	/* Trace/walk.scm 345 */
																		long BgL_auxz00_4486;

																		BgL_auxz00_4486 =
																			(long) (BgL_arg2644z00_2989);
																		BgL_restz00_2988 =
																			(BgL_offsetz00_2985 % BgL_auxz00_4486);
																}}
																{	/* Trace/walk.scm 345 */

																	BgL_method3439z00_2978 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2983,
																			(int) (BgL_modz00_2986)),
																		(int) (BgL_restz00_2988));
									}}}}}}}}
									BgL_res3961z00_3003 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2978)
										(BgL_method3439z00_2978, (obj_t) (BgL_arg3806z00_1759),
											BgL_stackz00_1754, BEOA));
								}
								BgL_arg3805z00_1758 = BgL_res3961z00_3003;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1753))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3805z00_1758), BUNSPEC);
					}
					{	/* Trace/walk.scm 346 */
						obj_t BgL_g3403z00_1760;

						BgL_g3403z00_1760 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1753))->BgL_clausesz00);
						{
							obj_t BgL_l3401z00_1762;

							BgL_l3401z00_1762 = BgL_g3403z00_1760;
						BgL_zc3anonymousza33807ze3z83_1763:
							if (PAIRP(BgL_l3401z00_1762))
								{	/* Trace/walk.scm 346 */
									{	/* Trace/walk.scm 347 */
										obj_t BgL_clausez00_1765;

										BgL_clausez00_1765 = CAR(BgL_l3401z00_1762);
										{	/* Trace/walk.scm 347 */
											BgL_nodez00_bglt BgL_arg3809z00_1766;

											{	/* Trace/walk.scm 347 */
												obj_t BgL_arg3810z00_1767;

												BgL_arg3810z00_1767 = CDR(BgL_clausez00_1765);
												{	/* Trace/walk.scm 347 */
													BgL_nodez00_bglt BgL_res3964z00_3037;

													{	/* Trace/walk.scm 347 */
														BgL_nodez00_bglt BgL_nodez00_3010;

														BgL_nodez00_3010 =
															(BgL_nodez00_bglt) (BgL_arg3810z00_1767);
														{	/* Trace/walk.scm 347 */
															obj_t BgL_method3439z00_3012;

															{	/* Trace/walk.scm 347 */
																BgL_objectz00_bglt BgL_objz00_3013;

																BgL_objz00_3013 =
																	(BgL_objectz00_bglt) (BgL_nodez00_3010);
																{	/* Trace/walk.scm 347 */
																	long BgL_objzd2classzd2numz00_3014;

																	BgL_objzd2classzd2numz00_3014 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_3013);
																	{	/* Trace/walk.scm 347 */
																		obj_t BgL_arg2643z00_3015;

																		BgL_arg2643z00_3015 =
																			PROCEDURE_REF
																			(BGl_tracezd2nodezd2envz00zztrace_walkz00,
																			(int) (((long) 1)));
																		{	/* Trace/walk.scm 347 */
																			obj_t BgL_arrayz00_3017;

																			int BgL_offsetz00_3018;

																			BgL_arrayz00_3017 = BgL_arg2643z00_3015;
																			BgL_offsetz00_3018 =
																				(int) (BgL_objzd2classzd2numz00_3014);
																			{	/* Trace/walk.scm 347 */
																				long BgL_offsetz00_3019;

																				BgL_offsetz00_3019 =
																					(
																					(long) (BgL_offsetz00_3018) -
																					OBJECT_TYPE);
																				{	/* Trace/walk.scm 347 */
																					long BgL_modz00_3020;

																					{	/* Trace/walk.scm 347 */
																						int BgL_arg2645z00_3021;

																						BgL_arg2645z00_3021 =
																							(int) (((long) 16));
																						{	/* Trace/walk.scm 347 */
																							long BgL_auxz00_4512;

																							BgL_auxz00_4512 =
																								(long) (BgL_arg2645z00_3021);
																							BgL_modz00_3020 =
																								(BgL_offsetz00_3019 /
																								BgL_auxz00_4512);
																					}}
																					{	/* Trace/walk.scm 347 */
																						long BgL_restz00_3022;

																						{	/* Trace/walk.scm 347 */
																							int BgL_arg2644z00_3023;

																							BgL_arg2644z00_3023 =
																								(int) (((long) 16));
																							{	/* Trace/walk.scm 347 */
																								long BgL_auxz00_4516;

																								BgL_auxz00_4516 =
																									(long) (BgL_arg2644z00_3023);
																								BgL_restz00_3022 =
																									(BgL_offsetz00_3019 %
																									BgL_auxz00_4516);
																						}}
																						{	/* Trace/walk.scm 347 */

																							BgL_method3439z00_3012 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_3017,
																									(int) (BgL_modz00_3020)),
																								(int) (BgL_restz00_3022));
															}}}}}}}}
															BgL_res3964z00_3037 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3439z00_3012)
																(BgL_method3439z00_3012,
																	(obj_t) (BgL_nodez00_3010), BgL_stackz00_1754,
																	BEOA));
													}}
													BgL_arg3809z00_1766 = BgL_res3964z00_3037;
											}}
											{	/* Trace/walk.scm 347 */
												obj_t BgL_auxz00_4527;

												BgL_auxz00_4527 = (obj_t) (BgL_arg3809z00_1766);
												SET_CDR(BgL_clausez00_1765, BgL_auxz00_4527);
									}}}
									{
										obj_t BgL_l3401z00_4530;

										BgL_l3401z00_4530 = CDR(BgL_l3401z00_1762);
										BgL_l3401z00_1762 = BgL_l3401z00_4530;
										goto BgL_zc3anonymousza33807ze3z83_1763;
									}
								}
							else
								{	/* Trace/walk.scm 346 */
									((bool_t) 1);
								}
						}
					}
					BgL_auxz00_4472 = BgL_nodez00_1753;
					return (obj_t) (BgL_auxz00_4472);
				}
			}
		}
	}



/* trace-node-fail3457 */
	obj_t BGl_tracezd2nodezd2fail3457z00zztrace_walkz00(obj_t BgL_envz00_3462,
		obj_t BgL_nodez00_3463, obj_t BgL_stackz00_3464)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 333 */
			{
				BgL_failz00_bglt BgL_nodez00_1740;

				obj_t BgL_stackz00_1741;

				{	/* Trace/walk.scm 334 */
					BgL_failz00_bglt BgL_auxz00_4534;

					BgL_nodez00_1740 = (BgL_failz00_bglt) (BgL_nodez00_3463);
					BgL_stackz00_1741 = BgL_stackz00_3464;
					{	/* Trace/walk.scm 335 */
						BgL_nodez00_bglt BgL_arg3797z00_1745;

						{	/* Trace/walk.scm 335 */
							BgL_nodez00_bglt BgL_arg3798z00_1746;

							BgL_arg3798z00_1746 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1740))->BgL_procz00);
							{	/* Trace/walk.scm 335 */
								BgL_nodez00_bglt BgL_res3952z00_2910;

								{	/* Trace/walk.scm 335 */
									obj_t BgL_method3439z00_2885;

									{	/* Trace/walk.scm 335 */
										BgL_objectz00_bglt BgL_objz00_2886;

										BgL_objz00_2886 =
											(BgL_objectz00_bglt) (BgL_arg3798z00_1746);
										{	/* Trace/walk.scm 335 */
											long BgL_objzd2classzd2numz00_2887;

											BgL_objzd2classzd2numz00_2887 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2886);
											{	/* Trace/walk.scm 335 */
												obj_t BgL_arg2643z00_2888;

												BgL_arg2643z00_2888 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 335 */
													obj_t BgL_arrayz00_2890;

													int BgL_offsetz00_2891;

													BgL_arrayz00_2890 = BgL_arg2643z00_2888;
													BgL_offsetz00_2891 =
														(int) (BgL_objzd2classzd2numz00_2887);
													{	/* Trace/walk.scm 335 */
														long BgL_offsetz00_2892;

														BgL_offsetz00_2892 =
															((long) (BgL_offsetz00_2891) - OBJECT_TYPE);
														{	/* Trace/walk.scm 335 */
															long BgL_modz00_2893;

															{	/* Trace/walk.scm 335 */
																int BgL_arg2645z00_2894;

																BgL_arg2645z00_2894 = (int) (((long) 16));
																{	/* Trace/walk.scm 335 */
																	long BgL_auxz00_4544;

																	BgL_auxz00_4544 =
																		(long) (BgL_arg2645z00_2894);
																	BgL_modz00_2893 =
																		(BgL_offsetz00_2892 / BgL_auxz00_4544);
															}}
															{	/* Trace/walk.scm 335 */
																long BgL_restz00_2895;

																{	/* Trace/walk.scm 335 */
																	int BgL_arg2644z00_2896;

																	BgL_arg2644z00_2896 = (int) (((long) 16));
																	{	/* Trace/walk.scm 335 */
																		long BgL_auxz00_4548;

																		BgL_auxz00_4548 =
																			(long) (BgL_arg2644z00_2896);
																		BgL_restz00_2895 =
																			(BgL_offsetz00_2892 % BgL_auxz00_4548);
																}}
																{	/* Trace/walk.scm 335 */

																	BgL_method3439z00_2885 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2890,
																			(int) (BgL_modz00_2893)),
																		(int) (BgL_restz00_2895));
									}}}}}}}}
									BgL_res3952z00_2910 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2885)
										(BgL_method3439z00_2885, (obj_t) (BgL_arg3798z00_1746),
											BgL_stackz00_1741, BEOA));
								}
								BgL_arg3797z00_1745 = BgL_res3952z00_2910;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1740))->BgL_procz00) =
							((BgL_nodez00_bglt) BgL_arg3797z00_1745), BUNSPEC);
					}
					{	/* Trace/walk.scm 336 */
						BgL_nodez00_bglt BgL_arg3799z00_1747;

						{	/* Trace/walk.scm 336 */
							BgL_nodez00_bglt BgL_arg3800z00_1748;

							BgL_arg3800z00_1748 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1740))->BgL_msgz00);
							{	/* Trace/walk.scm 336 */
								BgL_nodez00_bglt BgL_res3955z00_2941;

								{	/* Trace/walk.scm 336 */
									obj_t BgL_method3439z00_2916;

									{	/* Trace/walk.scm 336 */
										BgL_objectz00_bglt BgL_objz00_2917;

										BgL_objz00_2917 =
											(BgL_objectz00_bglt) (BgL_arg3800z00_1748);
										{	/* Trace/walk.scm 336 */
											long BgL_objzd2classzd2numz00_2918;

											BgL_objzd2classzd2numz00_2918 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2917);
											{	/* Trace/walk.scm 336 */
												obj_t BgL_arg2643z00_2919;

												BgL_arg2643z00_2919 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 336 */
													obj_t BgL_arrayz00_2921;

													int BgL_offsetz00_2922;

													BgL_arrayz00_2921 = BgL_arg2643z00_2919;
													BgL_offsetz00_2922 =
														(int) (BgL_objzd2classzd2numz00_2918);
													{	/* Trace/walk.scm 336 */
														long BgL_offsetz00_2923;

														BgL_offsetz00_2923 =
															((long) (BgL_offsetz00_2922) - OBJECT_TYPE);
														{	/* Trace/walk.scm 336 */
															long BgL_modz00_2924;

															{	/* Trace/walk.scm 336 */
																int BgL_arg2645z00_2925;

																BgL_arg2645z00_2925 = (int) (((long) 16));
																{	/* Trace/walk.scm 336 */
																	long BgL_auxz00_4569;

																	BgL_auxz00_4569 =
																		(long) (BgL_arg2645z00_2925);
																	BgL_modz00_2924 =
																		(BgL_offsetz00_2923 / BgL_auxz00_4569);
															}}
															{	/* Trace/walk.scm 336 */
																long BgL_restz00_2926;

																{	/* Trace/walk.scm 336 */
																	int BgL_arg2644z00_2927;

																	BgL_arg2644z00_2927 = (int) (((long) 16));
																	{	/* Trace/walk.scm 336 */
																		long BgL_auxz00_4573;

																		BgL_auxz00_4573 =
																			(long) (BgL_arg2644z00_2927);
																		BgL_restz00_2926 =
																			(BgL_offsetz00_2923 % BgL_auxz00_4573);
																}}
																{	/* Trace/walk.scm 336 */

																	BgL_method3439z00_2916 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2921,
																			(int) (BgL_modz00_2924)),
																		(int) (BgL_restz00_2926));
									}}}}}}}}
									BgL_res3955z00_2941 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2916)
										(BgL_method3439z00_2916, (obj_t) (BgL_arg3800z00_1748),
											BgL_stackz00_1741, BEOA));
								}
								BgL_arg3799z00_1747 = BgL_res3955z00_2941;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1740))->BgL_msgz00) =
							((BgL_nodez00_bglt) BgL_arg3799z00_1747), BUNSPEC);
					}
					{	/* Trace/walk.scm 337 */
						BgL_nodez00_bglt BgL_arg3801z00_1749;

						{	/* Trace/walk.scm 337 */
							BgL_nodez00_bglt BgL_arg3803z00_1750;

							BgL_arg3803z00_1750 =
								(((BgL_failz00_bglt) CREF(BgL_nodez00_1740))->BgL_objz00);
							{	/* Trace/walk.scm 337 */
								BgL_nodez00_bglt BgL_res3958z00_2972;

								{	/* Trace/walk.scm 337 */
									obj_t BgL_method3439z00_2947;

									{	/* Trace/walk.scm 337 */
										BgL_objectz00_bglt BgL_objz00_2948;

										BgL_objz00_2948 =
											(BgL_objectz00_bglt) (BgL_arg3803z00_1750);
										{	/* Trace/walk.scm 337 */
											long BgL_objzd2classzd2numz00_2949;

											BgL_objzd2classzd2numz00_2949 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2948);
											{	/* Trace/walk.scm 337 */
												obj_t BgL_arg2643z00_2950;

												BgL_arg2643z00_2950 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 337 */
													obj_t BgL_arrayz00_2952;

													int BgL_offsetz00_2953;

													BgL_arrayz00_2952 = BgL_arg2643z00_2950;
													BgL_offsetz00_2953 =
														(int) (BgL_objzd2classzd2numz00_2949);
													{	/* Trace/walk.scm 337 */
														long BgL_offsetz00_2954;

														BgL_offsetz00_2954 =
															((long) (BgL_offsetz00_2953) - OBJECT_TYPE);
														{	/* Trace/walk.scm 337 */
															long BgL_modz00_2955;

															{	/* Trace/walk.scm 337 */
																int BgL_arg2645z00_2956;

																BgL_arg2645z00_2956 = (int) (((long) 16));
																{	/* Trace/walk.scm 337 */
																	long BgL_auxz00_4594;

																	BgL_auxz00_4594 =
																		(long) (BgL_arg2645z00_2956);
																	BgL_modz00_2955 =
																		(BgL_offsetz00_2954 / BgL_auxz00_4594);
															}}
															{	/* Trace/walk.scm 337 */
																long BgL_restz00_2957;

																{	/* Trace/walk.scm 337 */
																	int BgL_arg2644z00_2958;

																	BgL_arg2644z00_2958 = (int) (((long) 16));
																	{	/* Trace/walk.scm 337 */
																		long BgL_auxz00_4598;

																		BgL_auxz00_4598 =
																			(long) (BgL_arg2644z00_2958);
																		BgL_restz00_2957 =
																			(BgL_offsetz00_2954 % BgL_auxz00_4598);
																}}
																{	/* Trace/walk.scm 337 */

																	BgL_method3439z00_2947 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2952,
																			(int) (BgL_modz00_2955)),
																		(int) (BgL_restz00_2957));
									}}}}}}}}
									BgL_res3958z00_2972 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2947)
										(BgL_method3439z00_2947, (obj_t) (BgL_arg3803z00_1750),
											BgL_stackz00_1741, BEOA));
								}
								BgL_arg3801z00_1749 = BgL_res3958z00_2972;
						}}
						((((BgL_failz00_bglt) CREF(BgL_nodez00_1740))->BgL_objz00) =
							((BgL_nodez00_bglt) BgL_arg3801z00_1749), BUNSPEC);
					}
					BgL_auxz00_4534 = BgL_nodez00_1740;
					return (obj_t) (BgL_auxz00_4534);
				}
			}
		}
	}



/* trace-node-condition3455 */
	obj_t BGl_tracezd2nodezd2condition3455z00zztrace_walkz00(obj_t
		BgL_envz00_3465, obj_t BgL_nodez00_3466, obj_t BgL_stackz00_3467)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 323 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1727;

				obj_t BgL_stackz00_1728;

				{	/* Trace/walk.scm 324 */
					BgL_conditionalz00_bglt BgL_auxz00_4612;

					BgL_nodez00_1727 = (BgL_conditionalz00_bglt) (BgL_nodez00_3466);
					BgL_stackz00_1728 = BgL_stackz00_3467;
					{	/* Trace/walk.scm 325 */
						BgL_nodez00_bglt BgL_arg3790z00_1732;

						{	/* Trace/walk.scm 325 */
							BgL_nodez00_bglt BgL_arg3791z00_1733;

							BgL_arg3791z00_1733 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1727))->
								BgL_testz00);
							{	/* Trace/walk.scm 325 */
								BgL_nodez00_bglt BgL_res3943z00_2817;

								{	/* Trace/walk.scm 325 */
									obj_t BgL_method3439z00_2792;

									{	/* Trace/walk.scm 325 */
										BgL_objectz00_bglt BgL_objz00_2793;

										BgL_objz00_2793 =
											(BgL_objectz00_bglt) (BgL_arg3791z00_1733);
										{	/* Trace/walk.scm 325 */
											long BgL_objzd2classzd2numz00_2794;

											BgL_objzd2classzd2numz00_2794 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2793);
											{	/* Trace/walk.scm 325 */
												obj_t BgL_arg2643z00_2795;

												BgL_arg2643z00_2795 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 325 */
													obj_t BgL_arrayz00_2797;

													int BgL_offsetz00_2798;

													BgL_arrayz00_2797 = BgL_arg2643z00_2795;
													BgL_offsetz00_2798 =
														(int) (BgL_objzd2classzd2numz00_2794);
													{	/* Trace/walk.scm 325 */
														long BgL_offsetz00_2799;

														BgL_offsetz00_2799 =
															((long) (BgL_offsetz00_2798) - OBJECT_TYPE);
														{	/* Trace/walk.scm 325 */
															long BgL_modz00_2800;

															{	/* Trace/walk.scm 325 */
																int BgL_arg2645z00_2801;

																BgL_arg2645z00_2801 = (int) (((long) 16));
																{	/* Trace/walk.scm 325 */
																	long BgL_auxz00_4622;

																	BgL_auxz00_4622 =
																		(long) (BgL_arg2645z00_2801);
																	BgL_modz00_2800 =
																		(BgL_offsetz00_2799 / BgL_auxz00_4622);
															}}
															{	/* Trace/walk.scm 325 */
																long BgL_restz00_2802;

																{	/* Trace/walk.scm 325 */
																	int BgL_arg2644z00_2803;

																	BgL_arg2644z00_2803 = (int) (((long) 16));
																	{	/* Trace/walk.scm 325 */
																		long BgL_auxz00_4626;

																		BgL_auxz00_4626 =
																			(long) (BgL_arg2644z00_2803);
																		BgL_restz00_2802 =
																			(BgL_offsetz00_2799 % BgL_auxz00_4626);
																}}
																{	/* Trace/walk.scm 325 */

																	BgL_method3439z00_2792 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2797,
																			(int) (BgL_modz00_2800)),
																		(int) (BgL_restz00_2802));
									}}}}}}}}
									BgL_res3943z00_2817 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2792)
										(BgL_method3439z00_2792, (obj_t) (BgL_arg3791z00_1733),
											BgL_stackz00_1728, BEOA));
								}
								BgL_arg3790z00_1732 = BgL_res3943z00_2817;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1727))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3790z00_1732), BUNSPEC);
					}
					{	/* Trace/walk.scm 326 */
						BgL_nodez00_bglt BgL_arg3792z00_1734;

						{	/* Trace/walk.scm 326 */
							BgL_nodez00_bglt BgL_arg3793z00_1735;

							BgL_arg3793z00_1735 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1727))->
								BgL_truez00);
							{	/* Trace/walk.scm 326 */
								BgL_nodez00_bglt BgL_res3946z00_2848;

								{	/* Trace/walk.scm 326 */
									obj_t BgL_method3439z00_2823;

									{	/* Trace/walk.scm 326 */
										BgL_objectz00_bglt BgL_objz00_2824;

										BgL_objz00_2824 =
											(BgL_objectz00_bglt) (BgL_arg3793z00_1735);
										{	/* Trace/walk.scm 326 */
											long BgL_objzd2classzd2numz00_2825;

											BgL_objzd2classzd2numz00_2825 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2824);
											{	/* Trace/walk.scm 326 */
												obj_t BgL_arg2643z00_2826;

												BgL_arg2643z00_2826 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 326 */
													obj_t BgL_arrayz00_2828;

													int BgL_offsetz00_2829;

													BgL_arrayz00_2828 = BgL_arg2643z00_2826;
													BgL_offsetz00_2829 =
														(int) (BgL_objzd2classzd2numz00_2825);
													{	/* Trace/walk.scm 326 */
														long BgL_offsetz00_2830;

														BgL_offsetz00_2830 =
															((long) (BgL_offsetz00_2829) - OBJECT_TYPE);
														{	/* Trace/walk.scm 326 */
															long BgL_modz00_2831;

															{	/* Trace/walk.scm 326 */
																int BgL_arg2645z00_2832;

																BgL_arg2645z00_2832 = (int) (((long) 16));
																{	/* Trace/walk.scm 326 */
																	long BgL_auxz00_4647;

																	BgL_auxz00_4647 =
																		(long) (BgL_arg2645z00_2832);
																	BgL_modz00_2831 =
																		(BgL_offsetz00_2830 / BgL_auxz00_4647);
															}}
															{	/* Trace/walk.scm 326 */
																long BgL_restz00_2833;

																{	/* Trace/walk.scm 326 */
																	int BgL_arg2644z00_2834;

																	BgL_arg2644z00_2834 = (int) (((long) 16));
																	{	/* Trace/walk.scm 326 */
																		long BgL_auxz00_4651;

																		BgL_auxz00_4651 =
																			(long) (BgL_arg2644z00_2834);
																		BgL_restz00_2833 =
																			(BgL_offsetz00_2830 % BgL_auxz00_4651);
																}}
																{	/* Trace/walk.scm 326 */

																	BgL_method3439z00_2823 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2828,
																			(int) (BgL_modz00_2831)),
																		(int) (BgL_restz00_2833));
									}}}}}}}}
									BgL_res3946z00_2848 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2823)
										(BgL_method3439z00_2823, (obj_t) (BgL_arg3793z00_1735),
											BgL_stackz00_1728, BEOA));
								}
								BgL_arg3792z00_1734 = BgL_res3946z00_2848;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1727))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3792z00_1734), BUNSPEC);
					}
					{	/* Trace/walk.scm 327 */
						BgL_nodez00_bglt BgL_arg3794z00_1736;

						{	/* Trace/walk.scm 327 */
							BgL_nodez00_bglt BgL_arg3795z00_1737;

							BgL_arg3795z00_1737 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1727))->
								BgL_falsez00);
							{	/* Trace/walk.scm 327 */
								BgL_nodez00_bglt BgL_res3949z00_2879;

								{	/* Trace/walk.scm 327 */
									obj_t BgL_method3439z00_2854;

									{	/* Trace/walk.scm 327 */
										BgL_objectz00_bglt BgL_objz00_2855;

										BgL_objz00_2855 =
											(BgL_objectz00_bglt) (BgL_arg3795z00_1737);
										{	/* Trace/walk.scm 327 */
											long BgL_objzd2classzd2numz00_2856;

											BgL_objzd2classzd2numz00_2856 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2855);
											{	/* Trace/walk.scm 327 */
												obj_t BgL_arg2643z00_2857;

												BgL_arg2643z00_2857 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 327 */
													obj_t BgL_arrayz00_2859;

													int BgL_offsetz00_2860;

													BgL_arrayz00_2859 = BgL_arg2643z00_2857;
													BgL_offsetz00_2860 =
														(int) (BgL_objzd2classzd2numz00_2856);
													{	/* Trace/walk.scm 327 */
														long BgL_offsetz00_2861;

														BgL_offsetz00_2861 =
															((long) (BgL_offsetz00_2860) - OBJECT_TYPE);
														{	/* Trace/walk.scm 327 */
															long BgL_modz00_2862;

															{	/* Trace/walk.scm 327 */
																int BgL_arg2645z00_2863;

																BgL_arg2645z00_2863 = (int) (((long) 16));
																{	/* Trace/walk.scm 327 */
																	long BgL_auxz00_4672;

																	BgL_auxz00_4672 =
																		(long) (BgL_arg2645z00_2863);
																	BgL_modz00_2862 =
																		(BgL_offsetz00_2861 / BgL_auxz00_4672);
															}}
															{	/* Trace/walk.scm 327 */
																long BgL_restz00_2864;

																{	/* Trace/walk.scm 327 */
																	int BgL_arg2644z00_2865;

																	BgL_arg2644z00_2865 = (int) (((long) 16));
																	{	/* Trace/walk.scm 327 */
																		long BgL_auxz00_4676;

																		BgL_auxz00_4676 =
																			(long) (BgL_arg2644z00_2865);
																		BgL_restz00_2864 =
																			(BgL_offsetz00_2861 % BgL_auxz00_4676);
																}}
																{	/* Trace/walk.scm 327 */

																	BgL_method3439z00_2854 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2859,
																			(int) (BgL_modz00_2862)),
																		(int) (BgL_restz00_2864));
									}}}}}}}}
									BgL_res3949z00_2879 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2854)
										(BgL_method3439z00_2854, (obj_t) (BgL_arg3795z00_1737),
											BgL_stackz00_1728, BEOA));
								}
								BgL_arg3794z00_1736 = BgL_res3949z00_2879;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1727))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3794z00_1736), BUNSPEC);
					}
					BgL_auxz00_4612 = BgL_nodez00_1727;
					return (obj_t) (BgL_auxz00_4612);
				}
			}
		}
	}



/* trace-node-setq3453 */
	obj_t BGl_tracezd2nodezd2setq3453z00zztrace_walkz00(obj_t BgL_envz00_3468,
		obj_t BgL_nodez00_3469, obj_t BgL_stackz00_3470)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 316 */
			{
				BgL_setqz00_bglt BgL_nodez00_1719;

				obj_t BgL_stackz00_1720;

				{	/* Trace/walk.scm 317 */
					BgL_setqz00_bglt BgL_auxz00_4690;

					BgL_nodez00_1719 = (BgL_setqz00_bglt) (BgL_nodez00_3469);
					BgL_stackz00_1720 = BgL_stackz00_3470;
					{	/* Trace/walk.scm 317 */
						BgL_nodez00_bglt BgL_arg3787z00_2756;

						{	/* Trace/walk.scm 317 */
							BgL_nodez00_bglt BgL_arg3788z00_2757;

							BgL_arg3788z00_2757 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1719))->BgL_valuez00);
							{	/* Trace/walk.scm 317 */
								BgL_nodez00_bglt BgL_res3940z00_2786;

								{	/* Trace/walk.scm 317 */
									obj_t BgL_method3439z00_2761;

									{	/* Trace/walk.scm 317 */
										BgL_objectz00_bglt BgL_objz00_2762;

										BgL_objz00_2762 =
											(BgL_objectz00_bglt) (BgL_arg3788z00_2757);
										{	/* Trace/walk.scm 317 */
											long BgL_objzd2classzd2numz00_2763;

											BgL_objzd2classzd2numz00_2763 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2762);
											{	/* Trace/walk.scm 317 */
												obj_t BgL_arg2643z00_2764;

												BgL_arg2643z00_2764 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 317 */
													obj_t BgL_arrayz00_2766;

													int BgL_offsetz00_2767;

													BgL_arrayz00_2766 = BgL_arg2643z00_2764;
													BgL_offsetz00_2767 =
														(int) (BgL_objzd2classzd2numz00_2763);
													{	/* Trace/walk.scm 317 */
														long BgL_offsetz00_2768;

														BgL_offsetz00_2768 =
															((long) (BgL_offsetz00_2767) - OBJECT_TYPE);
														{	/* Trace/walk.scm 317 */
															long BgL_modz00_2769;

															{	/* Trace/walk.scm 317 */
																int BgL_arg2645z00_2770;

																BgL_arg2645z00_2770 = (int) (((long) 16));
																{	/* Trace/walk.scm 317 */
																	long BgL_auxz00_4700;

																	BgL_auxz00_4700 =
																		(long) (BgL_arg2645z00_2770);
																	BgL_modz00_2769 =
																		(BgL_offsetz00_2768 / BgL_auxz00_4700);
															}}
															{	/* Trace/walk.scm 317 */
																long BgL_restz00_2771;

																{	/* Trace/walk.scm 317 */
																	int BgL_arg2644z00_2772;

																	BgL_arg2644z00_2772 = (int) (((long) 16));
																	{	/* Trace/walk.scm 317 */
																		long BgL_auxz00_4704;

																		BgL_auxz00_4704 =
																			(long) (BgL_arg2644z00_2772);
																		BgL_restz00_2771 =
																			(BgL_offsetz00_2768 % BgL_auxz00_4704);
																}}
																{	/* Trace/walk.scm 317 */

																	BgL_method3439z00_2761 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2766,
																			(int) (BgL_modz00_2769)),
																		(int) (BgL_restz00_2771));
									}}}}}}}}
									BgL_res3940z00_2786 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2761)
										(BgL_method3439z00_2761, (obj_t) (BgL_arg3788z00_2757),
											BgL_stackz00_1720, BEOA));
								}
								BgL_arg3787z00_2756 = BgL_res3940z00_2786;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1719))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3787z00_2756), BUNSPEC);
					}
					BgL_auxz00_4690 = BgL_nodez00_1719;
					return (obj_t) (BgL_auxz00_4690);
				}
			}
		}
	}



/* trace-node-cast3451 */
	obj_t BGl_tracezd2nodezd2cast3451z00zztrace_walkz00(obj_t BgL_envz00_3471,
		obj_t BgL_nodez00_3472, obj_t BgL_stackz00_3473)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 309 */
			{
				BgL_castz00_bglt BgL_nodez00_1712;

				obj_t BgL_stackz00_1713;

				{	/* Trace/walk.scm 310 */
					BgL_castz00_bglt BgL_auxz00_4718;

					BgL_nodez00_1712 = (BgL_castz00_bglt) (BgL_nodez00_3472);
					BgL_stackz00_1713 = BgL_stackz00_3473;
					{	/* Trace/walk.scm 310 */
						BgL_nodez00_bglt BgL_arg3785z00_2726;

						BgL_arg3785z00_2726 =
							(((BgL_castz00_bglt) CREF(BgL_nodez00_1712))->BgL_argz00);
						{	/* Trace/walk.scm 310 */
							BgL_nodez00_bglt BgL_res3937z00_2755;

							{	/* Trace/walk.scm 310 */
								obj_t BgL_method3439z00_2730;

								{	/* Trace/walk.scm 310 */
									BgL_objectz00_bglt BgL_objz00_2731;

									BgL_objz00_2731 = (BgL_objectz00_bglt) (BgL_arg3785z00_2726);
									{	/* Trace/walk.scm 310 */
										long BgL_objzd2classzd2numz00_2732;

										BgL_objzd2classzd2numz00_2732 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2731);
										{	/* Trace/walk.scm 310 */
											obj_t BgL_arg2643z00_2733;

											BgL_arg2643z00_2733 =
												PROCEDURE_REF(BGl_tracezd2nodezd2envz00zztrace_walkz00,
												(int) (((long) 1)));
											{	/* Trace/walk.scm 310 */
												obj_t BgL_arrayz00_2735;

												int BgL_offsetz00_2736;

												BgL_arrayz00_2735 = BgL_arg2643z00_2733;
												BgL_offsetz00_2736 =
													(int) (BgL_objzd2classzd2numz00_2732);
												{	/* Trace/walk.scm 310 */
													long BgL_offsetz00_2737;

													BgL_offsetz00_2737 =
														((long) (BgL_offsetz00_2736) - OBJECT_TYPE);
													{	/* Trace/walk.scm 310 */
														long BgL_modz00_2738;

														{	/* Trace/walk.scm 310 */
															int BgL_arg2645z00_2739;

															BgL_arg2645z00_2739 = (int) (((long) 16));
															{	/* Trace/walk.scm 310 */
																long BgL_auxz00_4728;

																BgL_auxz00_4728 = (long) (BgL_arg2645z00_2739);
																BgL_modz00_2738 =
																	(BgL_offsetz00_2737 / BgL_auxz00_4728);
														}}
														{	/* Trace/walk.scm 310 */
															long BgL_restz00_2740;

															{	/* Trace/walk.scm 310 */
																int BgL_arg2644z00_2741;

																BgL_arg2644z00_2741 = (int) (((long) 16));
																{	/* Trace/walk.scm 310 */
																	long BgL_auxz00_4732;

																	BgL_auxz00_4732 =
																		(long) (BgL_arg2644z00_2741);
																	BgL_restz00_2740 =
																		(BgL_offsetz00_2737 % BgL_auxz00_4732);
															}}
															{	/* Trace/walk.scm 310 */

																BgL_method3439z00_2730 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2735,
																		(int) (BgL_modz00_2738)),
																	(int) (BgL_restz00_2740));
								}}}}}}}}
								BgL_res3937z00_2755 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2730)
									(BgL_method3439z00_2730, (obj_t) (BgL_arg3785z00_2726),
										BgL_stackz00_1713, BEOA));
							} BgL_res3937z00_2755;
					}}
					BgL_auxz00_4718 = BgL_nodez00_1712;
					return (obj_t) (BgL_auxz00_4718);
				}
			}
		}
	}



/* trace-node-extern3449 */
	obj_t BGl_tracezd2nodezd2extern3449z00zztrace_walkz00(obj_t BgL_envz00_3474,
		obj_t BgL_nodez00_3475, obj_t BgL_stackz00_3476)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 302 */
			{
				BgL_externz00_bglt BgL_nodez00_1705;

				obj_t BgL_stackz00_1706;

				{	/* Trace/walk.scm 303 */
					BgL_externz00_bglt BgL_auxz00_4745;

					BgL_nodez00_1705 = (BgL_externz00_bglt) (BgL_nodez00_3475);
					BgL_stackz00_1706 = BgL_stackz00_3476;
					{	/* Trace/walk.scm 303 */
						obj_t BgL_arg3783z00_2724;

						BgL_arg3783z00_2724 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1705))->BgL_exprza2za2);
						BGl_tracezd2nodeza2z12z62zztrace_walkz00(BgL_arg3783z00_2724,
							BgL_stackz00_1706);
					}
					BgL_auxz00_4745 = BgL_nodez00_1705;
					return (obj_t) (BgL_auxz00_4745);
				}
			}
		}
	}



/* trace-node-funcall3447 */
	obj_t BGl_tracezd2nodezd2funcall3447z00zztrace_walkz00(obj_t BgL_envz00_3477,
		obj_t BgL_nodez00_3478, obj_t BgL_stackz00_3479)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 293 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1695;

				obj_t BgL_stackz00_1696;

				{	/* Trace/walk.scm 294 */
					BgL_funcallz00_bglt BgL_auxz00_4750;

					BgL_nodez00_1695 = (BgL_funcallz00_bglt) (BgL_nodez00_3478);
					BgL_stackz00_1696 = BgL_stackz00_3479;
					{	/* Trace/walk.scm 295 */
						BgL_nodez00_bglt BgL_arg3779z00_1700;

						{	/* Trace/walk.scm 295 */
							BgL_nodez00_bglt BgL_arg3780z00_1701;

							BgL_arg3780z00_1701 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1695))->BgL_funz00);
							{	/* Trace/walk.scm 295 */
								BgL_nodez00_bglt BgL_res3934z00_2720;

								{	/* Trace/walk.scm 295 */
									obj_t BgL_method3439z00_2695;

									{	/* Trace/walk.scm 295 */
										BgL_objectz00_bglt BgL_objz00_2696;

										BgL_objz00_2696 =
											(BgL_objectz00_bglt) (BgL_arg3780z00_1701);
										{	/* Trace/walk.scm 295 */
											long BgL_objzd2classzd2numz00_2697;

											BgL_objzd2classzd2numz00_2697 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2696);
											{	/* Trace/walk.scm 295 */
												obj_t BgL_arg2643z00_2698;

												BgL_arg2643z00_2698 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 295 */
													obj_t BgL_arrayz00_2700;

													int BgL_offsetz00_2701;

													BgL_arrayz00_2700 = BgL_arg2643z00_2698;
													BgL_offsetz00_2701 =
														(int) (BgL_objzd2classzd2numz00_2697);
													{	/* Trace/walk.scm 295 */
														long BgL_offsetz00_2702;

														BgL_offsetz00_2702 =
															((long) (BgL_offsetz00_2701) - OBJECT_TYPE);
														{	/* Trace/walk.scm 295 */
															long BgL_modz00_2703;

															{	/* Trace/walk.scm 295 */
																int BgL_arg2645z00_2704;

																BgL_arg2645z00_2704 = (int) (((long) 16));
																{	/* Trace/walk.scm 295 */
																	long BgL_auxz00_4760;

																	BgL_auxz00_4760 =
																		(long) (BgL_arg2645z00_2704);
																	BgL_modz00_2703 =
																		(BgL_offsetz00_2702 / BgL_auxz00_4760);
															}}
															{	/* Trace/walk.scm 295 */
																long BgL_restz00_2705;

																{	/* Trace/walk.scm 295 */
																	int BgL_arg2644z00_2706;

																	BgL_arg2644z00_2706 = (int) (((long) 16));
																	{	/* Trace/walk.scm 295 */
																		long BgL_auxz00_4764;

																		BgL_auxz00_4764 =
																			(long) (BgL_arg2644z00_2706);
																		BgL_restz00_2705 =
																			(BgL_offsetz00_2702 % BgL_auxz00_4764);
																}}
																{	/* Trace/walk.scm 295 */

																	BgL_method3439z00_2695 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2700,
																			(int) (BgL_modz00_2703)),
																		(int) (BgL_restz00_2705));
									}}}}}}}}
									BgL_res3934z00_2720 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2695)
										(BgL_method3439z00_2695, (obj_t) (BgL_arg3780z00_1701),
											BgL_stackz00_1696, BEOA));
								}
								BgL_arg3779z00_1700 = BgL_res3934z00_2720;
						}}
						((((BgL_funcallz00_bglt) CREF(BgL_nodez00_1695))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3779z00_1700), BUNSPEC);
					}
					{	/* Trace/walk.scm 296 */
						obj_t BgL_arg3781z00_1702;

						BgL_arg3781z00_1702 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1695))->BgL_argsz00);
						BGl_tracezd2nodeza2z12z62zztrace_walkz00(BgL_arg3781z00_1702,
							BgL_stackz00_1696);
					}
					BgL_auxz00_4750 = BgL_nodez00_1695;
					return (obj_t) (BgL_auxz00_4750);
				}
			}
		}
	}



/* trace-node-app-ly3445 */
	obj_t BGl_tracezd2nodezd2appzd2ly3445zd2zztrace_walkz00(obj_t BgL_envz00_3480,
		obj_t BgL_nodez00_3481, obj_t BgL_stackz00_3482)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 284 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1684;

				obj_t BgL_stackz00_1685;

				{	/* Trace/walk.scm 285 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_4780;

					BgL_nodez00_1684 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3481);
					BgL_stackz00_1685 = BgL_stackz00_3482;
					{	/* Trace/walk.scm 286 */
						BgL_nodez00_bglt BgL_arg3774z00_1689;

						{	/* Trace/walk.scm 286 */
							BgL_nodez00_bglt BgL_arg3775z00_1690;

							BgL_arg3775z00_1690 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1684))->BgL_funz00);
							{	/* Trace/walk.scm 286 */
								BgL_nodez00_bglt BgL_res3928z00_2658;

								{	/* Trace/walk.scm 286 */
									obj_t BgL_method3439z00_2633;

									{	/* Trace/walk.scm 286 */
										BgL_objectz00_bglt BgL_objz00_2634;

										BgL_objz00_2634 =
											(BgL_objectz00_bglt) (BgL_arg3775z00_1690);
										{	/* Trace/walk.scm 286 */
											long BgL_objzd2classzd2numz00_2635;

											BgL_objzd2classzd2numz00_2635 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2634);
											{	/* Trace/walk.scm 286 */
												obj_t BgL_arg2643z00_2636;

												BgL_arg2643z00_2636 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 286 */
													obj_t BgL_arrayz00_2638;

													int BgL_offsetz00_2639;

													BgL_arrayz00_2638 = BgL_arg2643z00_2636;
													BgL_offsetz00_2639 =
														(int) (BgL_objzd2classzd2numz00_2635);
													{	/* Trace/walk.scm 286 */
														long BgL_offsetz00_2640;

														BgL_offsetz00_2640 =
															((long) (BgL_offsetz00_2639) - OBJECT_TYPE);
														{	/* Trace/walk.scm 286 */
															long BgL_modz00_2641;

															{	/* Trace/walk.scm 286 */
																int BgL_arg2645z00_2642;

																BgL_arg2645z00_2642 = (int) (((long) 16));
																{	/* Trace/walk.scm 286 */
																	long BgL_auxz00_4790;

																	BgL_auxz00_4790 =
																		(long) (BgL_arg2645z00_2642);
																	BgL_modz00_2641 =
																		(BgL_offsetz00_2640 / BgL_auxz00_4790);
															}}
															{	/* Trace/walk.scm 286 */
																long BgL_restz00_2643;

																{	/* Trace/walk.scm 286 */
																	int BgL_arg2644z00_2644;

																	BgL_arg2644z00_2644 = (int) (((long) 16));
																	{	/* Trace/walk.scm 286 */
																		long BgL_auxz00_4794;

																		BgL_auxz00_4794 =
																			(long) (BgL_arg2644z00_2644);
																		BgL_restz00_2643 =
																			(BgL_offsetz00_2640 % BgL_auxz00_4794);
																}}
																{	/* Trace/walk.scm 286 */

																	BgL_method3439z00_2633 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2638,
																			(int) (BgL_modz00_2641)),
																		(int) (BgL_restz00_2643));
									}}}}}}}}
									BgL_res3928z00_2658 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2633)
										(BgL_method3439z00_2633, (obj_t) (BgL_arg3775z00_1690),
											BgL_stackz00_1685, BEOA));
								}
								BgL_arg3774z00_1689 = BgL_res3928z00_2658;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1684))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3774z00_1689), BUNSPEC);
					}
					{	/* Trace/walk.scm 287 */
						BgL_nodez00_bglt BgL_arg3776z00_1691;

						{	/* Trace/walk.scm 287 */
							BgL_nodez00_bglt BgL_arg3777z00_1692;

							BgL_arg3777z00_1692 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1684))->BgL_argz00);
							{	/* Trace/walk.scm 287 */
								BgL_nodez00_bglt BgL_res3931z00_2689;

								{	/* Trace/walk.scm 287 */
									obj_t BgL_method3439z00_2664;

									{	/* Trace/walk.scm 287 */
										BgL_objectz00_bglt BgL_objz00_2665;

										BgL_objz00_2665 =
											(BgL_objectz00_bglt) (BgL_arg3777z00_1692);
										{	/* Trace/walk.scm 287 */
											long BgL_objzd2classzd2numz00_2666;

											BgL_objzd2classzd2numz00_2666 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2665);
											{	/* Trace/walk.scm 287 */
												obj_t BgL_arg2643z00_2667;

												BgL_arg2643z00_2667 =
													PROCEDURE_REF
													(BGl_tracezd2nodezd2envz00zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 287 */
													obj_t BgL_arrayz00_2669;

													int BgL_offsetz00_2670;

													BgL_arrayz00_2669 = BgL_arg2643z00_2667;
													BgL_offsetz00_2670 =
														(int) (BgL_objzd2classzd2numz00_2666);
													{	/* Trace/walk.scm 287 */
														long BgL_offsetz00_2671;

														BgL_offsetz00_2671 =
															((long) (BgL_offsetz00_2670) - OBJECT_TYPE);
														{	/* Trace/walk.scm 287 */
															long BgL_modz00_2672;

															{	/* Trace/walk.scm 287 */
																int BgL_arg2645z00_2673;

																BgL_arg2645z00_2673 = (int) (((long) 16));
																{	/* Trace/walk.scm 287 */
																	long BgL_auxz00_4815;

																	BgL_auxz00_4815 =
																		(long) (BgL_arg2645z00_2673);
																	BgL_modz00_2672 =
																		(BgL_offsetz00_2671 / BgL_auxz00_4815);
															}}
															{	/* Trace/walk.scm 287 */
																long BgL_restz00_2674;

																{	/* Trace/walk.scm 287 */
																	int BgL_arg2644z00_2675;

																	BgL_arg2644z00_2675 = (int) (((long) 16));
																	{	/* Trace/walk.scm 287 */
																		long BgL_auxz00_4819;

																		BgL_auxz00_4819 =
																			(long) (BgL_arg2644z00_2675);
																		BgL_restz00_2674 =
																			(BgL_offsetz00_2671 % BgL_auxz00_4819);
																}}
																{	/* Trace/walk.scm 287 */

																	BgL_method3439z00_2664 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2669,
																			(int) (BgL_modz00_2672)),
																		(int) (BgL_restz00_2674));
									}}}}}}}}
									BgL_res3931z00_2689 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3439z00_2664)
										(BgL_method3439z00_2664, (obj_t) (BgL_arg3777z00_1692),
											BgL_stackz00_1685, BEOA));
								}
								BgL_arg3776z00_1691 = BgL_res3931z00_2689;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1684))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3776z00_1691), BUNSPEC);
					}
					BgL_auxz00_4780 = BgL_nodez00_1684;
					return (obj_t) (BgL_auxz00_4780);
				}
			}
		}
	}



/* trace-node-app3443 */
	obj_t BGl_tracezd2nodezd2app3443z00zztrace_walkz00(obj_t BgL_envz00_3483,
		obj_t BgL_nodez00_3484, obj_t BgL_stackz00_3485)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 277 */
			{
				BgL_appz00_bglt BgL_nodez00_1677;

				obj_t BgL_stackz00_1678;

				{	/* Trace/walk.scm 278 */
					BgL_appz00_bglt BgL_auxz00_4833;

					BgL_nodez00_1677 = (BgL_appz00_bglt) (BgL_nodez00_3484);
					BgL_stackz00_1678 = BgL_stackz00_3485;
					{	/* Trace/walk.scm 278 */
						obj_t BgL_arg3772z00_2628;

						BgL_arg3772z00_2628 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1677))->BgL_argsz00);
						BGl_tracezd2nodeza2z12z62zztrace_walkz00(BgL_arg3772z00_2628,
							BgL_stackz00_1678);
					}
					BgL_auxz00_4833 = BgL_nodez00_1677;
					return (obj_t) (BgL_auxz00_4833);
				}
			}
		}
	}



/* trace-node-sequence3441 */
	obj_t BGl_tracezd2nodezd2sequence3441z00zztrace_walkz00(obj_t BgL_envz00_3486,
		obj_t BgL_nodez00_3487, obj_t BgL_stackz00_3488)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 270 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1670;

				obj_t BgL_stackz00_1671;

				{	/* Trace/walk.scm 271 */
					BgL_sequencez00_bglt BgL_auxz00_4838;

					BgL_nodez00_1670 = (BgL_sequencez00_bglt) (BgL_nodez00_3487);
					BgL_stackz00_1671 = BgL_stackz00_3488;
					{	/* Trace/walk.scm 271 */
						obj_t BgL_arg3770z00_2626;

						BgL_arg3770z00_2626 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1670))->BgL_nodesz00);
						BGl_tracezd2nodeza2z12z62zztrace_walkz00(BgL_arg3770z00_2626,
							BgL_stackz00_1671);
					}
					BgL_auxz00_4838 = BgL_nodez00_1670;
					return (obj_t) (BgL_auxz00_4838);
				}
			}
		}
	}



/* find-last-node-jump-3437 */
	obj_t BGl_findzd2lastzd2nodezd2jumpzd23437z00zztrace_walkz00(obj_t
		BgL_envz00_3489, obj_t BgL_nodez00_3490)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 227 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1664;

				BgL_nodez00_1664 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_3490);
				{	/* Trace/walk.scm 228 */
					BgL_nodez00_bglt BgL_arg3768z00_2598;

					BgL_arg3768z00_2598 =
						(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1664))->
						BgL_valuez00);
					{	/* Trace/walk.scm 228 */
						obj_t BgL_method3411z00_2601;

						{	/* Trace/walk.scm 228 */
							BgL_objectz00_bglt BgL_objz00_2602;

							BgL_objz00_2602 = (BgL_objectz00_bglt) (BgL_arg3768z00_2598);
							{	/* Trace/walk.scm 228 */
								long BgL_objzd2classzd2numz00_2603;

								BgL_objzd2classzd2numz00_2603 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2602);
								{	/* Trace/walk.scm 228 */
									obj_t BgL_arg2643z00_2604;

									BgL_arg2643z00_2604 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 228 */
										obj_t BgL_arrayz00_2606;

										int BgL_offsetz00_2607;

										BgL_arrayz00_2606 = BgL_arg2643z00_2604;
										BgL_offsetz00_2607 = (int) (BgL_objzd2classzd2numz00_2603);
										{	/* Trace/walk.scm 228 */
											long BgL_offsetz00_2608;

											BgL_offsetz00_2608 =
												((long) (BgL_offsetz00_2607) - OBJECT_TYPE);
											{	/* Trace/walk.scm 228 */
												long BgL_modz00_2609;

												{	/* Trace/walk.scm 228 */
													int BgL_arg2645z00_2610;

													BgL_arg2645z00_2610 = (int) (((long) 16));
													{	/* Trace/walk.scm 228 */
														long BgL_auxz00_4852;

														BgL_auxz00_4852 = (long) (BgL_arg2645z00_2610);
														BgL_modz00_2609 =
															(BgL_offsetz00_2608 / BgL_auxz00_4852);
												}}
												{	/* Trace/walk.scm 228 */
													long BgL_restz00_2611;

													{	/* Trace/walk.scm 228 */
														int BgL_arg2644z00_2612;

														BgL_arg2644z00_2612 = (int) (((long) 16));
														{	/* Trace/walk.scm 228 */
															long BgL_auxz00_4856;

															BgL_auxz00_4856 = (long) (BgL_arg2644z00_2612);
															BgL_restz00_2611 =
																(BgL_offsetz00_2608 % BgL_auxz00_4856);
													}}
													{	/* Trace/walk.scm 228 */

														BgL_method3411z00_2601 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2606,
																(int) (BgL_modz00_2609)),
															(int) (BgL_restz00_2611));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2601) (BgL_method3411z00_2601,
							(obj_t) (BgL_arg3768z00_2598), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-set-e3435 */
	obj_t BGl_findzd2lastzd2nodezd2setzd2e3435z00zztrace_walkz00(obj_t
		BgL_envz00_3491, obj_t BgL_nodez00_3492)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 221 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1658;

				BgL_nodez00_1658 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_3492);
				{	/* Trace/walk.scm 222 */
					BgL_nodez00_bglt BgL_arg3766z00_2570;

					BgL_arg3766z00_2570 =
						(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1658))->BgL_bodyz00);
					{	/* Trace/walk.scm 222 */
						obj_t BgL_method3411z00_2573;

						{	/* Trace/walk.scm 222 */
							BgL_objectz00_bglt BgL_objz00_2574;

							BgL_objz00_2574 = (BgL_objectz00_bglt) (BgL_arg3766z00_2570);
							{	/* Trace/walk.scm 222 */
								long BgL_objzd2classzd2numz00_2575;

								BgL_objzd2classzd2numz00_2575 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2574);
								{	/* Trace/walk.scm 222 */
									obj_t BgL_arg2643z00_2576;

									BgL_arg2643z00_2576 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 222 */
										obj_t BgL_arrayz00_2578;

										int BgL_offsetz00_2579;

										BgL_arrayz00_2578 = BgL_arg2643z00_2576;
										BgL_offsetz00_2579 = (int) (BgL_objzd2classzd2numz00_2575);
										{	/* Trace/walk.scm 222 */
											long BgL_offsetz00_2580;

											BgL_offsetz00_2580 =
												((long) (BgL_offsetz00_2579) - OBJECT_TYPE);
											{	/* Trace/walk.scm 222 */
												long BgL_modz00_2581;

												{	/* Trace/walk.scm 222 */
													int BgL_arg2645z00_2582;

													BgL_arg2645z00_2582 = (int) (((long) 16));
													{	/* Trace/walk.scm 222 */
														long BgL_auxz00_4876;

														BgL_auxz00_4876 = (long) (BgL_arg2645z00_2582);
														BgL_modz00_2581 =
															(BgL_offsetz00_2580 / BgL_auxz00_4876);
												}}
												{	/* Trace/walk.scm 222 */
													long BgL_restz00_2583;

													{	/* Trace/walk.scm 222 */
														int BgL_arg2644z00_2584;

														BgL_arg2644z00_2584 = (int) (((long) 16));
														{	/* Trace/walk.scm 222 */
															long BgL_auxz00_4880;

															BgL_auxz00_4880 = (long) (BgL_arg2644z00_2584);
															BgL_restz00_2583 =
																(BgL_offsetz00_2580 % BgL_auxz00_4880);
													}}
													{	/* Trace/walk.scm 222 */

														BgL_method3411z00_2573 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2578,
																(int) (BgL_modz00_2581)),
															(int) (BgL_restz00_2583));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2573) (BgL_method3411z00_2573,
							(obj_t) (BgL_arg3766z00_2570), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-let-f3433 */
	obj_t BGl_findzd2lastzd2nodezd2letzd2f3433z00zztrace_walkz00(obj_t
		BgL_envz00_3493, obj_t BgL_nodez00_3494)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 215 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1652;

				BgL_nodez00_1652 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_3494);
				{	/* Trace/walk.scm 216 */
					BgL_nodez00_bglt BgL_arg3764z00_2542;

					BgL_arg3764z00_2542 =
						(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1652))->BgL_bodyz00);
					{	/* Trace/walk.scm 216 */
						obj_t BgL_method3411z00_2545;

						{	/* Trace/walk.scm 216 */
							BgL_objectz00_bglt BgL_objz00_2546;

							BgL_objz00_2546 = (BgL_objectz00_bglt) (BgL_arg3764z00_2542);
							{	/* Trace/walk.scm 216 */
								long BgL_objzd2classzd2numz00_2547;

								BgL_objzd2classzd2numz00_2547 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2546);
								{	/* Trace/walk.scm 216 */
									obj_t BgL_arg2643z00_2548;

									BgL_arg2643z00_2548 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 216 */
										obj_t BgL_arrayz00_2550;

										int BgL_offsetz00_2551;

										BgL_arrayz00_2550 = BgL_arg2643z00_2548;
										BgL_offsetz00_2551 = (int) (BgL_objzd2classzd2numz00_2547);
										{	/* Trace/walk.scm 216 */
											long BgL_offsetz00_2552;

											BgL_offsetz00_2552 =
												((long) (BgL_offsetz00_2551) - OBJECT_TYPE);
											{	/* Trace/walk.scm 216 */
												long BgL_modz00_2553;

												{	/* Trace/walk.scm 216 */
													int BgL_arg2645z00_2554;

													BgL_arg2645z00_2554 = (int) (((long) 16));
													{	/* Trace/walk.scm 216 */
														long BgL_auxz00_4900;

														BgL_auxz00_4900 = (long) (BgL_arg2645z00_2554);
														BgL_modz00_2553 =
															(BgL_offsetz00_2552 / BgL_auxz00_4900);
												}}
												{	/* Trace/walk.scm 216 */
													long BgL_restz00_2555;

													{	/* Trace/walk.scm 216 */
														int BgL_arg2644z00_2556;

														BgL_arg2644z00_2556 = (int) (((long) 16));
														{	/* Trace/walk.scm 216 */
															long BgL_auxz00_4904;

															BgL_auxz00_4904 = (long) (BgL_arg2644z00_2556);
															BgL_restz00_2555 =
																(BgL_offsetz00_2552 % BgL_auxz00_4904);
													}}
													{	/* Trace/walk.scm 216 */

														BgL_method3411z00_2545 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2550,
																(int) (BgL_modz00_2553)),
															(int) (BgL_restz00_2555));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2545) (BgL_method3411z00_2545,
							(obj_t) (BgL_arg3764z00_2542), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-let-v3431 */
	obj_t BGl_findzd2lastzd2nodezd2letzd2v3431z00zztrace_walkz00(obj_t
		BgL_envz00_3495, obj_t BgL_nodez00_3496)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 209 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1646;

				BgL_nodez00_1646 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_3496);
				{	/* Trace/walk.scm 210 */
					BgL_nodez00_bglt BgL_arg3762z00_2514;

					BgL_arg3762z00_2514 =
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1646))->BgL_bodyz00);
					{	/* Trace/walk.scm 210 */
						obj_t BgL_method3411z00_2517;

						{	/* Trace/walk.scm 210 */
							BgL_objectz00_bglt BgL_objz00_2518;

							BgL_objz00_2518 = (BgL_objectz00_bglt) (BgL_arg3762z00_2514);
							{	/* Trace/walk.scm 210 */
								long BgL_objzd2classzd2numz00_2519;

								BgL_objzd2classzd2numz00_2519 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2518);
								{	/* Trace/walk.scm 210 */
									obj_t BgL_arg2643z00_2520;

									BgL_arg2643z00_2520 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 210 */
										obj_t BgL_arrayz00_2522;

										int BgL_offsetz00_2523;

										BgL_arrayz00_2522 = BgL_arg2643z00_2520;
										BgL_offsetz00_2523 = (int) (BgL_objzd2classzd2numz00_2519);
										{	/* Trace/walk.scm 210 */
											long BgL_offsetz00_2524;

											BgL_offsetz00_2524 =
												((long) (BgL_offsetz00_2523) - OBJECT_TYPE);
											{	/* Trace/walk.scm 210 */
												long BgL_modz00_2525;

												{	/* Trace/walk.scm 210 */
													int BgL_arg2645z00_2526;

													BgL_arg2645z00_2526 = (int) (((long) 16));
													{	/* Trace/walk.scm 210 */
														long BgL_auxz00_4924;

														BgL_auxz00_4924 = (long) (BgL_arg2645z00_2526);
														BgL_modz00_2525 =
															(BgL_offsetz00_2524 / BgL_auxz00_4924);
												}}
												{	/* Trace/walk.scm 210 */
													long BgL_restz00_2527;

													{	/* Trace/walk.scm 210 */
														int BgL_arg2644z00_2528;

														BgL_arg2644z00_2528 = (int) (((long) 16));
														{	/* Trace/walk.scm 210 */
															long BgL_auxz00_4928;

															BgL_auxz00_4928 = (long) (BgL_arg2644z00_2528);
															BgL_restz00_2527 =
																(BgL_offsetz00_2524 % BgL_auxz00_4928);
													}}
													{	/* Trace/walk.scm 210 */

														BgL_method3411z00_2517 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2522,
																(int) (BgL_modz00_2525)),
															(int) (BgL_restz00_2527));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2517) (BgL_method3411z00_2517,
							(obj_t) (BgL_arg3762z00_2514), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-selec3429 */
	obj_t BGl_findzd2lastzd2nodezd2selec3429zd2zztrace_walkz00(obj_t
		BgL_envz00_3497, obj_t BgL_nodez00_3498)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 200 */
			{
				BgL_selectz00_bglt BgL_nodez00_1634;

				BgL_nodez00_1634 = (BgL_selectz00_bglt) (BgL_nodez00_3498);
				{	/* Trace/walk.scm 202 */
					bool_t BgL_testz00_4939;

					{	/* Trace/walk.scm 202 */
						obj_t BgL_auxz00_4940;

						BgL_auxz00_4940 =
							(((BgL_selectz00_bglt) CREF(BgL_nodez00_1634))->BgL_clausesz00);
						BgL_testz00_4939 = PAIRP(BgL_auxz00_4940);
					}
					if (BgL_testz00_4939)
						{	/* Trace/walk.scm 203 */
							obj_t BgL_arg3756z00_1639;

							BgL_arg3756z00_1639 =
								CDR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1634))->
										BgL_clausesz00)));
							{	/* Trace/walk.scm 203 */
								BgL_nodez00_bglt BgL_nodez00_2487;

								BgL_nodez00_2487 = (BgL_nodez00_bglt) (BgL_arg3756z00_1639);
								{	/* Trace/walk.scm 203 */
									obj_t BgL_method3411z00_2488;

									{	/* Trace/walk.scm 203 */
										BgL_objectz00_bglt BgL_objz00_2489;

										BgL_objz00_2489 = (BgL_objectz00_bglt) (BgL_nodez00_2487);
										{	/* Trace/walk.scm 203 */
											long BgL_objzd2classzd2numz00_2490;

											BgL_objzd2classzd2numz00_2490 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2489);
											{	/* Trace/walk.scm 203 */
												obj_t BgL_arg2643z00_2491;

												BgL_arg2643z00_2491 =
													PROCEDURE_REF
													(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 203 */
													obj_t BgL_arrayz00_2493;

													int BgL_offsetz00_2494;

													BgL_arrayz00_2493 = BgL_arg2643z00_2491;
													BgL_offsetz00_2494 =
														(int) (BgL_objzd2classzd2numz00_2490);
													{	/* Trace/walk.scm 203 */
														long BgL_offsetz00_2495;

														BgL_offsetz00_2495 =
															((long) (BgL_offsetz00_2494) - OBJECT_TYPE);
														{	/* Trace/walk.scm 203 */
															long BgL_modz00_2496;

															{	/* Trace/walk.scm 203 */
																int BgL_arg2645z00_2497;

																BgL_arg2645z00_2497 = (int) (((long) 16));
																{	/* Trace/walk.scm 203 */
																	long BgL_auxz00_4955;

																	BgL_auxz00_4955 =
																		(long) (BgL_arg2645z00_2497);
																	BgL_modz00_2496 =
																		(BgL_offsetz00_2495 / BgL_auxz00_4955);
															}}
															{	/* Trace/walk.scm 203 */
																long BgL_restz00_2498;

																{	/* Trace/walk.scm 203 */
																	int BgL_arg2644z00_2499;

																	BgL_arg2644z00_2499 = (int) (((long) 16));
																	{	/* Trace/walk.scm 203 */
																		long BgL_auxz00_4959;

																		BgL_auxz00_4959 =
																			(long) (BgL_arg2644z00_2499);
																		BgL_restz00_2498 =
																			(BgL_offsetz00_2495 % BgL_auxz00_4959);
																}}
																{	/* Trace/walk.scm 203 */

																	BgL_method3411z00_2488 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2493,
																			(int) (BgL_modz00_2496)),
																		(int) (BgL_restz00_2498));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3411z00_2488)
										(BgL_method3411z00_2488, (obj_t) (BgL_nodez00_2487), BEOA);
								}
							}
						}
					else
						{	/* Trace/walk.scm 202 */
							return
								BGl_findzd2lastzd2sexpz00zztrace_walkz00(
								(obj_t) (
									(((BgL_selectz00_bglt) CREF(BgL_nodez00_1634))->
										BgL_testz00)));
						}
				}
			}
		}
	}



/* find-last-node-fail3427 */
	obj_t BGl_findzd2lastzd2nodezd2fail3427zd2zztrace_walkz00(obj_t
		BgL_envz00_3499, obj_t BgL_nodez00_3500)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 194 */
			{
				BgL_failz00_bglt BgL_nodez00_1628;

				BgL_nodez00_1628 = (BgL_failz00_bglt) (BgL_nodez00_3500);
				{	/* Trace/walk.scm 195 */
					BgL_nodez00_bglt BgL_arg3753z00_2455;

					BgL_arg3753z00_2455 =
						(((BgL_failz00_bglt) CREF(BgL_nodez00_1628))->BgL_objz00);
					{	/* Trace/walk.scm 195 */
						obj_t BgL_method3411z00_2458;

						{	/* Trace/walk.scm 195 */
							BgL_objectz00_bglt BgL_objz00_2459;

							BgL_objz00_2459 = (BgL_objectz00_bglt) (BgL_arg3753z00_2455);
							{	/* Trace/walk.scm 195 */
								long BgL_objzd2classzd2numz00_2460;

								BgL_objzd2classzd2numz00_2460 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2459);
								{	/* Trace/walk.scm 195 */
									obj_t BgL_arg2643z00_2461;

									BgL_arg2643z00_2461 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 195 */
										obj_t BgL_arrayz00_2463;

										int BgL_offsetz00_2464;

										BgL_arrayz00_2463 = BgL_arg2643z00_2461;
										BgL_offsetz00_2464 = (int) (BgL_objzd2classzd2numz00_2460);
										{	/* Trace/walk.scm 195 */
											long BgL_offsetz00_2465;

											BgL_offsetz00_2465 =
												((long) (BgL_offsetz00_2464) - OBJECT_TYPE);
											{	/* Trace/walk.scm 195 */
												long BgL_modz00_2466;

												{	/* Trace/walk.scm 195 */
													int BgL_arg2645z00_2467;

													BgL_arg2645z00_2467 = (int) (((long) 16));
													{	/* Trace/walk.scm 195 */
														long BgL_auxz00_4982;

														BgL_auxz00_4982 = (long) (BgL_arg2645z00_2467);
														BgL_modz00_2466 =
															(BgL_offsetz00_2465 / BgL_auxz00_4982);
												}}
												{	/* Trace/walk.scm 195 */
													long BgL_restz00_2468;

													{	/* Trace/walk.scm 195 */
														int BgL_arg2644z00_2469;

														BgL_arg2644z00_2469 = (int) (((long) 16));
														{	/* Trace/walk.scm 195 */
															long BgL_auxz00_4986;

															BgL_auxz00_4986 = (long) (BgL_arg2644z00_2469);
															BgL_restz00_2468 =
																(BgL_offsetz00_2465 % BgL_auxz00_4986);
													}}
													{	/* Trace/walk.scm 195 */

														BgL_method3411z00_2458 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2463,
																(int) (BgL_modz00_2466)),
															(int) (BgL_restz00_2468));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2458) (BgL_method3411z00_2458,
							(obj_t) (BgL_arg3753z00_2455), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-condi3425 */
	obj_t BGl_findzd2lastzd2nodezd2condi3425zd2zztrace_walkz00(obj_t
		BgL_envz00_3501, obj_t BgL_nodez00_3502)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 188 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1622;

				BgL_nodez00_1622 = (BgL_conditionalz00_bglt) (BgL_nodez00_3502);
				{	/* Trace/walk.scm 189 */
					BgL_nodez00_bglt BgL_arg3751z00_2427;

					BgL_arg3751z00_2427 =
						(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1622))->BgL_falsez00);
					{	/* Trace/walk.scm 189 */
						obj_t BgL_method3411z00_2430;

						{	/* Trace/walk.scm 189 */
							BgL_objectz00_bglt BgL_objz00_2431;

							BgL_objz00_2431 = (BgL_objectz00_bglt) (BgL_arg3751z00_2427);
							{	/* Trace/walk.scm 189 */
								long BgL_objzd2classzd2numz00_2432;

								BgL_objzd2classzd2numz00_2432 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2431);
								{	/* Trace/walk.scm 189 */
									obj_t BgL_arg2643z00_2433;

									BgL_arg2643z00_2433 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 189 */
										obj_t BgL_arrayz00_2435;

										int BgL_offsetz00_2436;

										BgL_arrayz00_2435 = BgL_arg2643z00_2433;
										BgL_offsetz00_2436 = (int) (BgL_objzd2classzd2numz00_2432);
										{	/* Trace/walk.scm 189 */
											long BgL_offsetz00_2437;

											BgL_offsetz00_2437 =
												((long) (BgL_offsetz00_2436) - OBJECT_TYPE);
											{	/* Trace/walk.scm 189 */
												long BgL_modz00_2438;

												{	/* Trace/walk.scm 189 */
													int BgL_arg2645z00_2439;

													BgL_arg2645z00_2439 = (int) (((long) 16));
													{	/* Trace/walk.scm 189 */
														long BgL_auxz00_5006;

														BgL_auxz00_5006 = (long) (BgL_arg2645z00_2439);
														BgL_modz00_2438 =
															(BgL_offsetz00_2437 / BgL_auxz00_5006);
												}}
												{	/* Trace/walk.scm 189 */
													long BgL_restz00_2440;

													{	/* Trace/walk.scm 189 */
														int BgL_arg2644z00_2441;

														BgL_arg2644z00_2441 = (int) (((long) 16));
														{	/* Trace/walk.scm 189 */
															long BgL_auxz00_5010;

															BgL_auxz00_5010 = (long) (BgL_arg2644z00_2441);
															BgL_restz00_2440 =
																(BgL_offsetz00_2437 % BgL_auxz00_5010);
													}}
													{	/* Trace/walk.scm 189 */

														BgL_method3411z00_2430 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2435,
																(int) (BgL_modz00_2438)),
															(int) (BgL_restz00_2440));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2430) (BgL_method3411z00_2430,
							(obj_t) (BgL_arg3751z00_2427), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-setq3423 */
	obj_t BGl_findzd2lastzd2nodezd2setq3423zd2zztrace_walkz00(obj_t
		BgL_envz00_3503, obj_t BgL_nodez00_3504)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 182 */
			{
				BgL_setqz00_bglt BgL_nodez00_1616;

				BgL_nodez00_1616 = (BgL_setqz00_bglt) (BgL_nodez00_3504);
				{	/* Trace/walk.scm 183 */
					BgL_nodez00_bglt BgL_arg3749z00_2399;

					BgL_arg3749z00_2399 =
						(((BgL_setqz00_bglt) CREF(BgL_nodez00_1616))->BgL_valuez00);
					{	/* Trace/walk.scm 183 */
						obj_t BgL_method3411z00_2402;

						{	/* Trace/walk.scm 183 */
							BgL_objectz00_bglt BgL_objz00_2403;

							BgL_objz00_2403 = (BgL_objectz00_bglt) (BgL_arg3749z00_2399);
							{	/* Trace/walk.scm 183 */
								long BgL_objzd2classzd2numz00_2404;

								BgL_objzd2classzd2numz00_2404 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2403);
								{	/* Trace/walk.scm 183 */
									obj_t BgL_arg2643z00_2405;

									BgL_arg2643z00_2405 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 183 */
										obj_t BgL_arrayz00_2407;

										int BgL_offsetz00_2408;

										BgL_arrayz00_2407 = BgL_arg2643z00_2405;
										BgL_offsetz00_2408 = (int) (BgL_objzd2classzd2numz00_2404);
										{	/* Trace/walk.scm 183 */
											long BgL_offsetz00_2409;

											BgL_offsetz00_2409 =
												((long) (BgL_offsetz00_2408) - OBJECT_TYPE);
											{	/* Trace/walk.scm 183 */
												long BgL_modz00_2410;

												{	/* Trace/walk.scm 183 */
													int BgL_arg2645z00_2411;

													BgL_arg2645z00_2411 = (int) (((long) 16));
													{	/* Trace/walk.scm 183 */
														long BgL_auxz00_5030;

														BgL_auxz00_5030 = (long) (BgL_arg2645z00_2411);
														BgL_modz00_2410 =
															(BgL_offsetz00_2409 / BgL_auxz00_5030);
												}}
												{	/* Trace/walk.scm 183 */
													long BgL_restz00_2412;

													{	/* Trace/walk.scm 183 */
														int BgL_arg2644z00_2413;

														BgL_arg2644z00_2413 = (int) (((long) 16));
														{	/* Trace/walk.scm 183 */
															long BgL_auxz00_5034;

															BgL_auxz00_5034 = (long) (BgL_arg2644z00_2413);
															BgL_restz00_2412 =
																(BgL_offsetz00_2409 % BgL_auxz00_5034);
													}}
													{	/* Trace/walk.scm 183 */

														BgL_method3411z00_2402 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2407,
																(int) (BgL_modz00_2410)),
															(int) (BgL_restz00_2412));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2402) (BgL_method3411z00_2402,
							(obj_t) (BgL_arg3749z00_2399), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-exter3421 */
	obj_t BGl_findzd2lastzd2nodezd2exter3421zd2zztrace_walkz00(obj_t
		BgL_envz00_3505, obj_t BgL_nodez00_3506)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 173 */
			{
				BgL_externz00_bglt BgL_nodez00_1605;

				BgL_nodez00_1605 = (BgL_externz00_bglt) (BgL_nodez00_3506);
				{	/* Trace/walk.scm 175 */
					bool_t BgL_testz00_5045;

					{	/* Trace/walk.scm 175 */
						obj_t BgL_auxz00_5046;

						BgL_auxz00_5046 =
							(((BgL_externz00_bglt) CREF(BgL_nodez00_1605))->BgL_exprza2za2);
						BgL_testz00_5045 = PAIRP(BgL_auxz00_5046);
					}
					if (BgL_testz00_5045)
						{	/* Trace/walk.scm 176 */
							obj_t BgL_arg3742z00_1610;

							BgL_arg3742z00_1610 =
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
									(((BgL_externz00_bglt) CREF(BgL_nodez00_1605))->
										BgL_exprza2za2)));
							{	/* Trace/walk.scm 176 */
								BgL_nodez00_bglt BgL_nodez00_2373;

								BgL_nodez00_2373 = (BgL_nodez00_bglt) (BgL_arg3742z00_1610);
								{	/* Trace/walk.scm 176 */
									obj_t BgL_method3411z00_2374;

									{	/* Trace/walk.scm 176 */
										BgL_objectz00_bglt BgL_objz00_2375;

										BgL_objz00_2375 = (BgL_objectz00_bglt) (BgL_nodez00_2373);
										{	/* Trace/walk.scm 176 */
											long BgL_objzd2classzd2numz00_2376;

											BgL_objzd2classzd2numz00_2376 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2375);
											{	/* Trace/walk.scm 176 */
												obj_t BgL_arg2643z00_2377;

												BgL_arg2643z00_2377 =
													PROCEDURE_REF
													(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 176 */
													obj_t BgL_arrayz00_2379;

													int BgL_offsetz00_2380;

													BgL_arrayz00_2379 = BgL_arg2643z00_2377;
													BgL_offsetz00_2380 =
														(int) (BgL_objzd2classzd2numz00_2376);
													{	/* Trace/walk.scm 176 */
														long BgL_offsetz00_2381;

														BgL_offsetz00_2381 =
															((long) (BgL_offsetz00_2380) - OBJECT_TYPE);
														{	/* Trace/walk.scm 176 */
															long BgL_modz00_2382;

															{	/* Trace/walk.scm 176 */
																int BgL_arg2645z00_2383;

																BgL_arg2645z00_2383 = (int) (((long) 16));
																{	/* Trace/walk.scm 176 */
																	long BgL_auxz00_5061;

																	BgL_auxz00_5061 =
																		(long) (BgL_arg2645z00_2383);
																	BgL_modz00_2382 =
																		(BgL_offsetz00_2381 / BgL_auxz00_5061);
															}}
															{	/* Trace/walk.scm 176 */
																long BgL_restz00_2384;

																{	/* Trace/walk.scm 176 */
																	int BgL_arg2644z00_2385;

																	BgL_arg2644z00_2385 = (int) (((long) 16));
																	{	/* Trace/walk.scm 176 */
																		long BgL_auxz00_5065;

																		BgL_auxz00_5065 =
																			(long) (BgL_arg2644z00_2385);
																		BgL_restz00_2384 =
																			(BgL_offsetz00_2381 % BgL_auxz00_5065);
																}}
																{	/* Trace/walk.scm 176 */

																	BgL_method3411z00_2374 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2379,
																			(int) (BgL_modz00_2382)),
																		(int) (BgL_restz00_2384));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3411z00_2374)
										(BgL_method3411z00_2374, (obj_t) (BgL_nodez00_2373), BEOA);
								}
							}
						}
					else
						{	/* Trace/walk.scm 175 */
							return (obj_t) (BgL_nodez00_1605);
						}
				}
			}
		}
	}



/* find-last-node-funca3419 */
	obj_t BGl_findzd2lastzd2nodezd2funca3419zd2zztrace_walkz00(obj_t
		BgL_envz00_3507, obj_t BgL_nodez00_3508)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 164 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1593;

				BgL_nodez00_1593 = (BgL_funcallz00_bglt) (BgL_nodez00_3508);
				{	/* Trace/walk.scm 166 */
					bool_t BgL_testz00_5077;

					{	/* Trace/walk.scm 166 */
						obj_t BgL_auxz00_5078;

						BgL_auxz00_5078 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1593))->BgL_argsz00);
						BgL_testz00_5077 = PAIRP(BgL_auxz00_5078);
					}
					if (BgL_testz00_5077)
						{	/* Trace/walk.scm 167 */
							obj_t BgL_arg3735z00_1598;

							BgL_arg3735z00_1598 =
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
									(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1593))->
										BgL_argsz00)));
							{	/* Trace/walk.scm 167 */
								BgL_nodez00_bglt BgL_nodez00_2316;

								BgL_nodez00_2316 = (BgL_nodez00_bglt) (BgL_arg3735z00_1598);
								{	/* Trace/walk.scm 167 */
									obj_t BgL_method3411z00_2317;

									{	/* Trace/walk.scm 167 */
										BgL_objectz00_bglt BgL_objz00_2318;

										BgL_objz00_2318 = (BgL_objectz00_bglt) (BgL_nodez00_2316);
										{	/* Trace/walk.scm 167 */
											long BgL_objzd2classzd2numz00_2319;

											BgL_objzd2classzd2numz00_2319 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2318);
											{	/* Trace/walk.scm 167 */
												obj_t BgL_arg2643z00_2320;

												BgL_arg2643z00_2320 =
													PROCEDURE_REF
													(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 167 */
													obj_t BgL_arrayz00_2322;

													int BgL_offsetz00_2323;

													BgL_arrayz00_2322 = BgL_arg2643z00_2320;
													BgL_offsetz00_2323 =
														(int) (BgL_objzd2classzd2numz00_2319);
													{	/* Trace/walk.scm 167 */
														long BgL_offsetz00_2324;

														BgL_offsetz00_2324 =
															((long) (BgL_offsetz00_2323) - OBJECT_TYPE);
														{	/* Trace/walk.scm 167 */
															long BgL_modz00_2325;

															{	/* Trace/walk.scm 167 */
																int BgL_arg2645z00_2326;

																BgL_arg2645z00_2326 = (int) (((long) 16));
																{	/* Trace/walk.scm 167 */
																	long BgL_auxz00_5093;

																	BgL_auxz00_5093 =
																		(long) (BgL_arg2645z00_2326);
																	BgL_modz00_2325 =
																		(BgL_offsetz00_2324 / BgL_auxz00_5093);
															}}
															{	/* Trace/walk.scm 167 */
																long BgL_restz00_2327;

																{	/* Trace/walk.scm 167 */
																	int BgL_arg2644z00_2328;

																	BgL_arg2644z00_2328 = (int) (((long) 16));
																	{	/* Trace/walk.scm 167 */
																		long BgL_auxz00_5097;

																		BgL_auxz00_5097 =
																			(long) (BgL_arg2644z00_2328);
																		BgL_restz00_2327 =
																			(BgL_offsetz00_2324 % BgL_auxz00_5097);
																}}
																{	/* Trace/walk.scm 167 */

																	BgL_method3411z00_2317 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2322,
																			(int) (BgL_modz00_2325)),
																		(int) (BgL_restz00_2327));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3411z00_2317)
										(BgL_method3411z00_2317, (obj_t) (BgL_nodez00_2316), BEOA);
								}
							}
						}
					else
						{	/* Trace/walk.scm 168 */
							BgL_nodez00_bglt BgL_arg3738z00_1601;

							BgL_arg3738z00_1601 =
								(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1593))->BgL_funz00);
							{	/* Trace/walk.scm 168 */
								obj_t BgL_method3411z00_2344;

								{	/* Trace/walk.scm 168 */
									BgL_objectz00_bglt BgL_objz00_2345;

									BgL_objz00_2345 = (BgL_objectz00_bglt) (BgL_arg3738z00_1601);
									{	/* Trace/walk.scm 168 */
										long BgL_objzd2classzd2numz00_2346;

										BgL_objzd2classzd2numz00_2346 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2345);
										{	/* Trace/walk.scm 168 */
											obj_t BgL_arg2643z00_2347;

											BgL_arg2643z00_2347 =
												PROCEDURE_REF
												(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
												(int) (((long) 1)));
											{	/* Trace/walk.scm 168 */
												obj_t BgL_arrayz00_2349;

												int BgL_offsetz00_2350;

												BgL_arrayz00_2349 = BgL_arg2643z00_2347;
												BgL_offsetz00_2350 =
													(int) (BgL_objzd2classzd2numz00_2346);
												{	/* Trace/walk.scm 168 */
													long BgL_offsetz00_2351;

													BgL_offsetz00_2351 =
														((long) (BgL_offsetz00_2350) - OBJECT_TYPE);
													{	/* Trace/walk.scm 168 */
														long BgL_modz00_2352;

														{	/* Trace/walk.scm 168 */
															int BgL_arg2645z00_2353;

															BgL_arg2645z00_2353 = (int) (((long) 16));
															{	/* Trace/walk.scm 168 */
																long BgL_auxz00_5116;

																BgL_auxz00_5116 = (long) (BgL_arg2645z00_2353);
																BgL_modz00_2352 =
																	(BgL_offsetz00_2351 / BgL_auxz00_5116);
														}}
														{	/* Trace/walk.scm 168 */
															long BgL_restz00_2354;

															{	/* Trace/walk.scm 168 */
																int BgL_arg2644z00_2355;

																BgL_arg2644z00_2355 = (int) (((long) 16));
																{	/* Trace/walk.scm 168 */
																	long BgL_auxz00_5120;

																	BgL_auxz00_5120 =
																		(long) (BgL_arg2644z00_2355);
																	BgL_restz00_2354 =
																		(BgL_offsetz00_2351 % BgL_auxz00_5120);
															}}
															{	/* Trace/walk.scm 168 */

																BgL_method3411z00_2344 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2349,
																		(int) (BgL_modz00_2352)),
																	(int) (BgL_restz00_2354));
								}}}}}}}}
								return
									PROCEDURE_ENTRY(BgL_method3411z00_2344)
									(BgL_method3411z00_2344, (obj_t) (BgL_arg3738z00_1601), BEOA);
							}
						}
				}
			}
		}
	}



/* find-last-node-app-l3417 */
	obj_t BGl_findzd2lastzd2nodezd2appzd2l3417z00zztrace_walkz00(obj_t
		BgL_envz00_3509, obj_t BgL_nodez00_3510)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 158 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1587;

				BgL_nodez00_1587 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_3510);
				{	/* Trace/walk.scm 159 */
					BgL_nodez00_bglt BgL_arg3732z00_2284;

					BgL_arg3732z00_2284 =
						(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1587))->BgL_argz00);
					{	/* Trace/walk.scm 159 */
						obj_t BgL_method3411z00_2287;

						{	/* Trace/walk.scm 159 */
							BgL_objectz00_bglt BgL_objz00_2288;

							BgL_objz00_2288 = (BgL_objectz00_bglt) (BgL_arg3732z00_2284);
							{	/* Trace/walk.scm 159 */
								long BgL_objzd2classzd2numz00_2289;

								BgL_objzd2classzd2numz00_2289 =
									BGL_OBJECT_CLASS_NUM(BgL_objz00_2288);
								{	/* Trace/walk.scm 159 */
									obj_t BgL_arg2643z00_2290;

									BgL_arg2643z00_2290 =
										PROCEDURE_REF
										(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
										(int) (((long) 1)));
									{	/* Trace/walk.scm 159 */
										obj_t BgL_arrayz00_2292;

										int BgL_offsetz00_2293;

										BgL_arrayz00_2292 = BgL_arg2643z00_2290;
										BgL_offsetz00_2293 = (int) (BgL_objzd2classzd2numz00_2289);
										{	/* Trace/walk.scm 159 */
											long BgL_offsetz00_2294;

											BgL_offsetz00_2294 =
												((long) (BgL_offsetz00_2293) - OBJECT_TYPE);
											{	/* Trace/walk.scm 159 */
												long BgL_modz00_2295;

												{	/* Trace/walk.scm 159 */
													int BgL_arg2645z00_2296;

													BgL_arg2645z00_2296 = (int) (((long) 16));
													{	/* Trace/walk.scm 159 */
														long BgL_auxz00_5140;

														BgL_auxz00_5140 = (long) (BgL_arg2645z00_2296);
														BgL_modz00_2295 =
															(BgL_offsetz00_2294 / BgL_auxz00_5140);
												}}
												{	/* Trace/walk.scm 159 */
													long BgL_restz00_2297;

													{	/* Trace/walk.scm 159 */
														int BgL_arg2644z00_2298;

														BgL_arg2644z00_2298 = (int) (((long) 16));
														{	/* Trace/walk.scm 159 */
															long BgL_auxz00_5144;

															BgL_auxz00_5144 = (long) (BgL_arg2644z00_2298);
															BgL_restz00_2297 =
																(BgL_offsetz00_2294 % BgL_auxz00_5144);
													}}
													{	/* Trace/walk.scm 159 */

														BgL_method3411z00_2287 =
															VECTOR_REF(VECTOR_REF(BgL_arrayz00_2292,
																(int) (BgL_modz00_2295)),
															(int) (BgL_restz00_2297));
						}}}}}}}}
						return
							PROCEDURE_ENTRY(BgL_method3411z00_2287) (BgL_method3411z00_2287,
							(obj_t) (BgL_arg3732z00_2284), BEOA);
					}
				}
			}
		}
	}



/* find-last-node-app3415 */
	obj_t BGl_findzd2lastzd2nodezd2app3415zd2zztrace_walkz00(obj_t
		BgL_envz00_3511, obj_t BgL_nodez00_3512)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 149 */
			{
				BgL_appz00_bglt BgL_nodez00_1576;

				BgL_nodez00_1576 = (BgL_appz00_bglt) (BgL_nodez00_3512);
				{	/* Trace/walk.scm 151 */
					bool_t BgL_testz00_5155;

					{	/* Trace/walk.scm 151 */
						obj_t BgL_auxz00_5156;

						BgL_auxz00_5156 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_1576))->BgL_argsz00);
						BgL_testz00_5155 = PAIRP(BgL_auxz00_5156);
					}
					if (BgL_testz00_5155)
						{	/* Trace/walk.scm 152 */
							obj_t BgL_arg3727z00_1581;

							BgL_arg3727z00_1581 =
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
									(((BgL_appz00_bglt) CREF(BgL_nodez00_1576))->BgL_argsz00)));
							{	/* Trace/walk.scm 152 */
								BgL_nodez00_bglt BgL_nodez00_2258;

								BgL_nodez00_2258 = (BgL_nodez00_bglt) (BgL_arg3727z00_1581);
								{	/* Trace/walk.scm 152 */
									obj_t BgL_method3411z00_2259;

									{	/* Trace/walk.scm 152 */
										BgL_objectz00_bglt BgL_objz00_2260;

										BgL_objz00_2260 = (BgL_objectz00_bglt) (BgL_nodez00_2258);
										{	/* Trace/walk.scm 152 */
											long BgL_objzd2classzd2numz00_2261;

											BgL_objzd2classzd2numz00_2261 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2260);
											{	/* Trace/walk.scm 152 */
												obj_t BgL_arg2643z00_2262;

												BgL_arg2643z00_2262 =
													PROCEDURE_REF
													(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 152 */
													obj_t BgL_arrayz00_2264;

													int BgL_offsetz00_2265;

													BgL_arrayz00_2264 = BgL_arg2643z00_2262;
													BgL_offsetz00_2265 =
														(int) (BgL_objzd2classzd2numz00_2261);
													{	/* Trace/walk.scm 152 */
														long BgL_offsetz00_2266;

														BgL_offsetz00_2266 =
															((long) (BgL_offsetz00_2265) - OBJECT_TYPE);
														{	/* Trace/walk.scm 152 */
															long BgL_modz00_2267;

															{	/* Trace/walk.scm 152 */
																int BgL_arg2645z00_2268;

																BgL_arg2645z00_2268 = (int) (((long) 16));
																{	/* Trace/walk.scm 152 */
																	long BgL_auxz00_5171;

																	BgL_auxz00_5171 =
																		(long) (BgL_arg2645z00_2268);
																	BgL_modz00_2267 =
																		(BgL_offsetz00_2266 / BgL_auxz00_5171);
															}}
															{	/* Trace/walk.scm 152 */
																long BgL_restz00_2269;

																{	/* Trace/walk.scm 152 */
																	int BgL_arg2644z00_2270;

																	BgL_arg2644z00_2270 = (int) (((long) 16));
																	{	/* Trace/walk.scm 152 */
																		long BgL_auxz00_5175;

																		BgL_auxz00_5175 =
																			(long) (BgL_arg2644z00_2270);
																		BgL_restz00_2269 =
																			(BgL_offsetz00_2266 % BgL_auxz00_5175);
																}}
																{	/* Trace/walk.scm 152 */

																	BgL_method3411z00_2259 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2264,
																			(int) (BgL_modz00_2267)),
																		(int) (BgL_restz00_2269));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3411z00_2259)
										(BgL_method3411z00_2259, (obj_t) (BgL_nodez00_2258), BEOA);
								}
							}
						}
					else
						{	/* Trace/walk.scm 151 */
							return (obj_t) (BgL_nodez00_1576);
						}
				}
			}
		}
	}



/* find-last-node-seque3413 */
	obj_t BGl_findzd2lastzd2nodezd2seque3413zd2zztrace_walkz00(obj_t
		BgL_envz00_3513, obj_t BgL_nodez00_3514)
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 140 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1565;

				BgL_nodez00_1565 = (BgL_sequencez00_bglt) (BgL_nodez00_3514);
				{	/* Trace/walk.scm 142 */
					bool_t BgL_testz00_5187;

					{	/* Trace/walk.scm 142 */
						obj_t BgL_auxz00_5188;

						BgL_auxz00_5188 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1565))->BgL_nodesz00);
						BgL_testz00_5187 = PAIRP(BgL_auxz00_5188);
					}
					if (BgL_testz00_5187)
						{	/* Trace/walk.scm 143 */
							obj_t BgL_arg3721z00_1570;

							BgL_arg3721z00_1570 =
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
									(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1565))->
										BgL_nodesz00)));
							{	/* Trace/walk.scm 143 */
								BgL_nodez00_bglt BgL_nodez00_2228;

								BgL_nodez00_2228 = (BgL_nodez00_bglt) (BgL_arg3721z00_1570);
								{	/* Trace/walk.scm 143 */
									obj_t BgL_method3411z00_2229;

									{	/* Trace/walk.scm 143 */
										BgL_objectz00_bglt BgL_objz00_2230;

										BgL_objz00_2230 = (BgL_objectz00_bglt) (BgL_nodez00_2228);
										{	/* Trace/walk.scm 143 */
											long BgL_objzd2classzd2numz00_2231;

											BgL_objzd2classzd2numz00_2231 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2230);
											{	/* Trace/walk.scm 143 */
												obj_t BgL_arg2643z00_2232;

												BgL_arg2643z00_2232 =
													PROCEDURE_REF
													(BGl_findzd2lastzd2nodezd2envzd2zztrace_walkz00,
													(int) (((long) 1)));
												{	/* Trace/walk.scm 143 */
													obj_t BgL_arrayz00_2234;

													int BgL_offsetz00_2235;

													BgL_arrayz00_2234 = BgL_arg2643z00_2232;
													BgL_offsetz00_2235 =
														(int) (BgL_objzd2classzd2numz00_2231);
													{	/* Trace/walk.scm 143 */
														long BgL_offsetz00_2236;

														BgL_offsetz00_2236 =
															((long) (BgL_offsetz00_2235) - OBJECT_TYPE);
														{	/* Trace/walk.scm 143 */
															long BgL_modz00_2237;

															{	/* Trace/walk.scm 143 */
																int BgL_arg2645z00_2238;

																BgL_arg2645z00_2238 = (int) (((long) 16));
																{	/* Trace/walk.scm 143 */
																	long BgL_auxz00_5203;

																	BgL_auxz00_5203 =
																		(long) (BgL_arg2645z00_2238);
																	BgL_modz00_2237 =
																		(BgL_offsetz00_2236 / BgL_auxz00_5203);
															}}
															{	/* Trace/walk.scm 143 */
																long BgL_restz00_2239;

																{	/* Trace/walk.scm 143 */
																	int BgL_arg2644z00_2240;

																	BgL_arg2644z00_2240 = (int) (((long) 16));
																	{	/* Trace/walk.scm 143 */
																		long BgL_auxz00_5207;

																		BgL_auxz00_5207 =
																			(long) (BgL_arg2644z00_2240);
																		BgL_restz00_2239 =
																			(BgL_offsetz00_2236 % BgL_auxz00_5207);
																}}
																{	/* Trace/walk.scm 143 */

																	BgL_method3411z00_2229 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2234,
																			(int) (BgL_modz00_2237)),
																		(int) (BgL_restz00_2239));
									}}}}}}}}
									return
										PROCEDURE_ENTRY(BgL_method3411z00_2229)
										(BgL_method3411z00_2229, (obj_t) (BgL_nodez00_2228), BEOA);
								}
							}
						}
					else
						{	/* Trace/walk.scm 142 */
							return (obj_t) (BgL_nodez00_1565);
						}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztrace_walkz00()
	{
		AN_OBJECT;
		{	/* Trace/walk.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 216344604),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4040z00zztrace_walkz00));
		}
	}

#ifdef __cplusplus
}
#endif
