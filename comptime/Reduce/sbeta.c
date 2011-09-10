/*===========================================================================*/
/*   (Reduce/sbeta.scm)                                                      */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Reduce/sbeta.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_cfunz00_bgl
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
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_nodezf2effectzf2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
	}                       *BgL_nodezf2effectzf2_bglt;

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

	typedef struct BgL_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_fnamez00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                  *BgL_getfieldz00_bglt;

	typedef struct BgL_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2formatzd2;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		bool_t BgL_unsafez00;
	}              *BgL_vrefz00_bglt;

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

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}                      *BgL_boxzd2setz12zc0_bglt;


	extern obj_t BGl_vrefz00zzast_nodez00;
	extern obj_t BGl_nodez00zzast_nodez00;
	static obj_t BGl_nodezd2betaza2z12z62zzreduce_betaz00(obj_t);
	static obj_t BGl_nodezd2betaz12zd2makezd2box3506zc0zzreduce_betaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_kwotez00zzast_nodez00;
	static obj_t BGl__nodezd2betaz12zd2default3479z12zzreduce_betaz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2betaz12zd2setzd2exzd2it3501z12zzreduce_betaz00(obj_t,
		obj_t);
	static long BGl_za2removedza2z00zzreduce_betaz00;
	extern obj_t BGl_conditionalz00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2cast3490z12zzreduce_betaz00(obj_t, obj_t);
	static obj_t BGl__reducezd2betaz12zc0zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzreduce_betaz00();
	static BgL_nodez00_bglt
		BGl_nodezd2betazd2earlyzd2appz12zc0zzreduce_betaz00(BgL_appz00_bglt);
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	extern obj_t BGl_occurzd2varzd2zzast_occurz00(obj_t);
	static obj_t BGl_nodezd2betaz12zd2appzd2ly3486zc0zzreduce_betaz00(obj_t,
		obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 = BUNSPEC;
	static obj_t BGl_nodezd2betaz12zd2funcall3488z12zzreduce_betaz00(obj_t,
		obj_t);
	static BgL_nodez00_bglt
		BGl_findzd2actualzd2expressionz00zzreduce_betaz00(BgL_nodez00_bglt);
	extern obj_t BGl_selectz00zzast_nodez00;
	static obj_t BGl__nodezd2betaz12zc0zzreduce_betaz00(obj_t, obj_t);
	static obj_t BGl_makezd2argszd2listz00zzreduce_betaz00(obj_t, obj_t);
	extern bool_t BGl_sidezd2effectzf3z21zzeffect_effectz00(BgL_nodez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzreduce_betaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzeffect_effectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzreduce_betaz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_nodezd2betaz12zd2setq3492z12zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_za2longza2z00zztype_cachez00;
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static bool_t BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(obj_t);
	static bool_t BGl_iszd2argumentzf3z21zzreduce_betaz00(BgL_variablez00_bglt,
		obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_nodezd2betaz12zd2select3496z12zzreduce_betaz00(obj_t, obj_t);
	static obj_t BGl_za2predicatesza2z00zzreduce_betaz00 = BUNSPEC;
	extern obj_t BGl_za2realza2z00zztype_cachez00;
	static bool_t BGl_dangerouszf3zf3zzreduce_betaz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzreduce_betaz00();
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2app3510z12zzreduce_betaz00(obj_t, obj_t);
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	static obj_t
		BGl_nodezd2betazd2predicatez12z12zzreduce_betaz00(BgL_appz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzreduce_betaz00 = BUNSPEC;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzreduce_betaz00();
	extern obj_t BGl_globalz00zzast_varz00;
	static bool_t BGl_argumentzf3zf3zzreduce_betaz00(BgL_variablez00_bglt, obj_t);
	static obj_t BGl_predicatezf3zf3zzreduce_betaz00(BgL_appz00_bglt);
	extern obj_t BGl_castz00zzast_nodez00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzreduce_betaz00();
	static obj_t BGl_nodezd2betaz12zd2letzd2fun3499zc0zzreduce_betaz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2betaz12zd2jumpzd2exzd2i3503z12zzreduce_betaz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_reducezd2betaz12zc0zzreduce_betaz00(obj_t);
	extern obj_t BGl_getfieldz00zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2sequence3484z12zzreduce_betaz00(obj_t,
		obj_t);
	static obj_t BGl_nodezd2betaz12zd2letzd2var3482zc0zzreduce_betaz00(obj_t,
		obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	static obj_t BGl_nodezd2betaz12zd2boxzd2setz123508zd2zzreduce_betaz00(obj_t,
		obj_t);
	extern obj_t BGl_za2brealza2z00zztype_cachez00;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2typezd2zztype_typeofz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl_nodezd2betaz12zd2condition3494z12zzreduce_betaz00(obj_t,
		obj_t);
	static bool_t BGl_simplezf3zf3zzreduce_betaz00(obj_t);
	static BgL_nodez00_bglt
		BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_nodez00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzreduce_betaz00();
	static obj_t BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 = BUNSPEC;
	static obj_t BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 = BUNSPEC;
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3978z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d3996za7,
		BGl_nodezd2betaz12zd2letzd2var3482zc0zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3980z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d3997za7,
		BGl_nodezd2betaz12zd2appzd2ly3486zc0zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3979z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d3998za7,
		BGl_nodezd2betaz12zd2sequence3484z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3981z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d3999za7,
		BGl_nodezd2betaz12zd2funcall3488z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3982z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4000za7,
		BGl_nodezd2betaz12zd2cast3490z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3983z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4001za7,
		BGl_nodezd2betaz12zd2setq3492z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3984z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4002za7,
		BGl_nodezd2betaz12zd2condition3494z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3985z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4003za7,
		BGl_nodezd2betaz12zd2select3496z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3986z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4004za7,
		BGl_nodezd2betaz12zd2letzd2fun3499zc0zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3987z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4005za7,
		BGl_nodezd2betaz12zd2setzd2exzd2it3501z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3988z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4006za7,
		BGl_nodezd2betaz12zd2jumpzd2exzd2i3503z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3990z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4007za7,
		BGl_nodezd2betaz12zd2boxzd2setz123508zd2zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3989z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4008za7,
		BGl_nodezd2betaz12zd2makezd2box3506zc0zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3991z00zzreduce_betaz00,
		BgL_bgl_nodeza7d2betaza712za7d4009za7,
		BGl_nodezd2betaz12zd2app3510z12zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3973z00zzreduce_betaz00,
		BgL_bgl_string3973za700za7za7r4010za7, "      Simple beta reduction  ", 29);
	      DEFINE_STRING(BGl_string3974z00zzreduce_betaz00,
		BgL_bgl_string3974za700za7za7r4011za7, "(removed: ", 10);
	      DEFINE_STRING(BGl_string3975z00zzreduce_betaz00,
		BgL_bgl_string3975za700za7za7r4012za7, "node-beta-predicate!", 20);
	      DEFINE_STRING(BGl_string3976z00zzreduce_betaz00,
		BgL_bgl_string3976za700za7za7r4013za7, "Illegal predicate", 17);
	      DEFINE_STRING(BGl_string3977z00zzreduce_betaz00,
		BgL_bgl_string3977za700za7za7r4014za7, "node-beta!", 10);
	      DEFINE_STRING(BGl_string3992z00zzreduce_betaz00,
		BgL_bgl_string3992za700za7za7r4015za7, "reduce_beta", 11);
	      DEFINE_STRING(BGl_string3993z00zzreduce_betaz00,
		BgL_bgl_string3993za700za7za7r4016za7,
		"bdb nesting $string-length c-flonum? c-fixnum? foreign ", 55);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_reducezd2betaz12zd2envz12zzreduce_betaz00,
		BgL_bgl__reduceza7d2betaza714017z00,
		BGl__reducezd2betaz12zc0zzreduce_betaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
		BgL_bgl__nodeza7d2betaza712za74018za7,
		BGl__nodezd2betaz12zc0zzreduce_betaz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_nodezd2betaz12zd2default3479zd2envzc0zzreduce_betaz00,
		BgL_bgl__nodeza7d2betaza712za74019za7,
		BGl__nodezd2betaz12zd2default3479z12zzreduce_betaz00, 0L, BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzreduce_betaz00(long
		BgL_checksumz00_2857, char *BgL_fromz00_2858)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzreduce_betaz00))
				{
					BGl_requirezd2initializa7ationz75zzreduce_betaz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzreduce_betaz00();
					BGl_cnstzd2initzd2zzreduce_betaz00();
					BGl_importedzd2moduleszd2initz00zzreduce_betaz00();
					BGl_genericzd2initzd2zzreduce_betaz00();
					BGl_methodzd2initzd2zzreduce_betaz00();
					BGl_toplevelzd2initzd2zzreduce_betaz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzreduce_betaz00()
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "reduce_beta");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "reduce_beta");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"reduce_beta");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzreduce_betaz00()
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			{	/* Reduce/sbeta.scm 25 */
				obj_t BgL_cportz00_2848;

				BgL_cportz00_2848 =
					bgl_open_input_string(BGl_string3993z00zzreduce_betaz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2849;

					BgL_iz00_2849 = ((long) 5);
				BgL_loopz00_2850:
					if ((BgL_iz00_2849 == ((long) -1)))
						{	/* Reduce/sbeta.scm 25 */
							return BUNSPEC;
						}
					else
						{	/* Reduce/sbeta.scm 25 */
							{	/* Reduce/sbeta.scm 25 */
								obj_t BgL_arg3995z00_2852;

								{	/* Reduce/sbeta.scm 25 */

									{	/* Reduce/sbeta.scm 25 */
										obj_t BgL_locationz00_2854;

										BgL_locationz00_2854 = BBOOL(((bool_t) 0));
										{	/* Reduce/sbeta.scm 25 */

											BgL_arg3995z00_2852 =
												BGl_readz00zz__readerz00(BgL_cportz00_2848,
												BgL_locationz00_2854);
										}
									}
								}
								{	/* Reduce/sbeta.scm 25 */
									int BgL_auxz00_2877;

									BgL_auxz00_2877 = (int) (BgL_iz00_2849);
									CNST_TABLE_SET(BgL_auxz00_2877, BgL_arg3995z00_2852);
							}}
							{	/* Reduce/sbeta.scm 25 */
								int BgL_auxz00_2855;

								BgL_auxz00_2855 = (int) ((BgL_iz00_2849 - ((long) 1)));
								{
									long BgL_iz00_2882;

									BgL_iz00_2882 = (long) (BgL_auxz00_2855);
									BgL_iz00_2849 = BgL_iz00_2882;
									goto BgL_loopz00_2850;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzreduce_betaz00()
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			BGl_za2removedza2z00zzreduce_betaz00 = ((long) 0);
			BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 = BUNSPEC;
			BGl_za2predicatesza2z00zzreduce_betaz00 = BNIL;
			return BUNSPEC;
		}
	}



/* reduce-beta! */
	BGL_EXPORTED_DEF obj_t BGl_reducezd2betaz12zc0zzreduce_betaz00(obj_t
		BgL_globalsz00_1)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 47 */
			{	/* Reduce/sbeta.scm 48 */
				obj_t BgL_list3511z00_891;

				BgL_list3511z00_891 =
					MAKE_PAIR(BGl_string3973z00zzreduce_betaz00, BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3511z00_891);
			}
			BGl_occurzd2varzd2zzast_occurz00(BgL_globalsz00_1);
			BGl_za2removedza2z00zzreduce_betaz00 = ((long) 0);
			{	/* Reduce/sbeta.scm 55 */
				obj_t BgL_list3512z00_892;

				BgL_list3512z00_892 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 1)),
					BgL_list3512z00_892);
			}
			{	/* Reduce/sbeta.scm 56 */
				obj_t BgL_list3513z00_893;

				BgL_list3513z00_893 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 2)),
					BgL_list3513z00_893);
			}
			{	/* Reduce/sbeta.scm 57 */
				obj_t BgL_list3514z00_894;

				BgL_list3514z00_894 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
				BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 =
					BGl_findzd2globalzd2zzast_envz00(CNST_TABLE_REF(((long) 3)),
					BgL_list3514z00_894);
			}
			{	/* Reduce/sbeta.scm 58 */
				obj_t BgL_list3515z00_895;

				{	/* Reduce/sbeta.scm 58 */
					obj_t BgL_arg3517z00_896;

					BgL_arg3517z00_896 =
						MAKE_PAIR(BGl_za2czd2flonumzf3za2z21zzreduce_betaz00, BNIL);
					BgL_list3515z00_895 =
						MAKE_PAIR(BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00,
						BgL_arg3517z00_896);
				}
				BGl_za2predicatesza2z00zzreduce_betaz00 = BgL_list3515z00_895;
			}
			{
				obj_t BgL_l3413z00_898;

				BgL_l3413z00_898 = BgL_globalsz00_1;
			BgL_zc3anonymousza33518ze3z83_899:
				if (PAIRP(BgL_l3413z00_898))
					{	/* Reduce/sbeta.scm 60 */
						{	/* Reduce/sbeta.scm 61 */
							obj_t BgL_globalz00_901;

							BgL_globalz00_901 = CAR(BgL_l3413z00_898);
							{	/* Reduce/sbeta.scm 61 */
								BgL_valuez00_bglt BgL_funz00_902;

								{
									BgL_variablez00_bglt BgL_auxz00_2905;

									BgL_auxz00_2905 = (BgL_variablez00_bglt) (BgL_globalz00_901);
									BgL_funz00_902 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_2905))->
										BgL_valuez00);
								}
								{	/* Reduce/sbeta.scm 61 */
									obj_t BgL_nodez00_903;

									{
										BgL_sfunz00_bglt BgL_auxz00_2908;

										BgL_auxz00_2908 = (BgL_sfunz00_bglt) (BgL_funz00_902);
										BgL_nodez00_903 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2908))->BgL_bodyz00);
									}
									{	/* Reduce/sbeta.scm 62 */

										{	/* Reduce/sbeta.scm 63 */
											BgL_nodez00_bglt BgL_arg3520z00_904;

											{	/* Reduce/sbeta.scm 63 */
												BgL_nodez00_bglt BgL_res3906z00_1864;

												{	/* Reduce/sbeta.scm 63 */
													BgL_nodez00_bglt BgL_nodez00_1838;

													BgL_nodez00_1838 =
														(BgL_nodez00_bglt) (BgL_nodez00_903);
													{	/* Reduce/sbeta.scm 63 */
														obj_t BgL_method3480z00_1839;

														{	/* Reduce/sbeta.scm 63 */
															BgL_objectz00_bglt BgL_objz00_1840;

															BgL_objz00_1840 =
																(BgL_objectz00_bglt) (BgL_nodez00_1838);
															{	/* Reduce/sbeta.scm 63 */
																long BgL_objzd2classzd2numz00_1841;

																BgL_objzd2classzd2numz00_1841 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_1840);
																{	/* Reduce/sbeta.scm 63 */
																	obj_t BgL_arg2643z00_1842;

																	BgL_arg2643z00_1842 =
																		PROCEDURE_REF
																		(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
																		(int) (((long) 1)));
																	{	/* Reduce/sbeta.scm 63 */
																		obj_t BgL_arrayz00_1844;

																		int BgL_offsetz00_1845;

																		BgL_arrayz00_1844 = BgL_arg2643z00_1842;
																		BgL_offsetz00_1845 =
																			(int) (BgL_objzd2classzd2numz00_1841);
																		{	/* Reduce/sbeta.scm 63 */
																			long BgL_offsetz00_1846;

																			BgL_offsetz00_1846 =
																				(
																				(long) (BgL_offsetz00_1845) -
																				OBJECT_TYPE);
																			{	/* Reduce/sbeta.scm 63 */
																				long BgL_modz00_1847;

																				{	/* Reduce/sbeta.scm 63 */
																					int BgL_arg2645z00_1848;

																					BgL_arg2645z00_1848 =
																						(int) (((long) 16));
																					{	/* Reduce/sbeta.scm 63 */
																						long BgL_auxz00_2920;

																						BgL_auxz00_2920 =
																							(long) (BgL_arg2645z00_1848);
																						BgL_modz00_1847 =
																							(BgL_offsetz00_1846 /
																							BgL_auxz00_2920);
																				}}
																				{	/* Reduce/sbeta.scm 63 */
																					long BgL_restz00_1849;

																					{	/* Reduce/sbeta.scm 63 */
																						int BgL_arg2644z00_1850;

																						BgL_arg2644z00_1850 =
																							(int) (((long) 16));
																						{	/* Reduce/sbeta.scm 63 */
																							long BgL_auxz00_2924;

																							BgL_auxz00_2924 =
																								(long) (BgL_arg2644z00_1850);
																							BgL_restz00_1849 =
																								(BgL_offsetz00_1846 %
																								BgL_auxz00_2924);
																					}}
																					{	/* Reduce/sbeta.scm 63 */

																						BgL_method3480z00_1839 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_1844,
																								(int) (BgL_modz00_1847)),
																							(int) (BgL_restz00_1849));
														}}}}}}}}
														BgL_res3906z00_1864 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3480z00_1839) (BgL_method3480z00_1839,
																(obj_t) (BgL_nodez00_1838), BEOA));
												}}
												BgL_arg3520z00_904 = BgL_res3906z00_1864;
											}
											{
												obj_t BgL_auxz00_2937;

												BgL_sfunz00_bglt BgL_auxz00_2935;

												BgL_auxz00_2937 = (obj_t) (BgL_arg3520z00_904);
												BgL_auxz00_2935 = (BgL_sfunz00_bglt) (BgL_funz00_902);
												((((BgL_sfunz00_bglt) CREF(BgL_auxz00_2935))->
														BgL_bodyz00) = ((obj_t) BgL_auxz00_2937), BUNSPEC);
										}} BUNSPEC;
						}}}}
						{
							obj_t BgL_l3413z00_2940;

							BgL_l3413z00_2940 = CDR(BgL_l3413z00_898);
							BgL_l3413z00_898 = BgL_l3413z00_2940;
							goto BgL_zc3anonymousza33518ze3z83_899;
						}
					}
				else
					{	/* Reduce/sbeta.scm 60 */
						((bool_t) 1);
					}
			}
			BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2flonumzf3za2z21zzreduce_betaz00 = BUNSPEC;
			BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00 = BUNSPEC;
			BGl_za2predicatesza2z00zzreduce_betaz00 = BNIL;
			{	/* Reduce/sbeta.scm 72 */
				obj_t BgL_list3522z00_907;

				{	/* Reduce/sbeta.scm 72 */
					obj_t BgL_arg3524z00_909;

					{	/* Reduce/sbeta.scm 72 */
						obj_t BgL_arg3525z00_910;

						{	/* Reduce/sbeta.scm 72 */
							obj_t BgL_arg3526z00_911;

							BgL_arg3526z00_911 =
								MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
							BgL_arg3525z00_910 =
								MAKE_PAIR(BCHAR(((unsigned char) ')')), BgL_arg3526z00_911);
						}
						BgL_arg3524z00_909 =
							MAKE_PAIR(BINT(BGl_za2removedza2z00zzreduce_betaz00),
							BgL_arg3525z00_910);
					}
					BgL_list3522z00_907 =
						MAKE_PAIR(BGl_string3974z00zzreduce_betaz00, BgL_arg3524z00_909);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3522z00_907);
			}
			return BgL_globalsz00_1;
		}
	}



/* _reduce-beta! */
	obj_t BGl__reducezd2betaz12zc0zzreduce_betaz00(obj_t BgL_envz00_2800,
		obj_t BgL_globalsz00_2801)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 47 */
			return BGl_reducezd2betaz12zc0zzreduce_betaz00(BgL_globalsz00_2801);
		}
	}



/* find-actual-expression */
	BgL_nodez00_bglt
		BGl_findzd2actualzd2expressionz00zzreduce_betaz00(BgL_nodez00_bglt
		BgL_bodyz00_4)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 97 */
		BGl_findzd2actualzd2expressionz00zzreduce_betaz00:
			{	/* Reduce/sbeta.scm 98 */
				bool_t BgL_testz00_2952;

				{	/* Reduce/sbeta.scm 98 */
					obj_t BgL_obj2328z00_1868;

					BgL_obj2328z00_1868 = (obj_t) (BgL_bodyz00_4);
					BgL_testz00_2952 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj2328z00_1868,
						BGl_sequencez00zzast_nodez00);
				}
				if (BgL_testz00_2952)
					{	/* Reduce/sbeta.scm 99 */
						BgL_sequencez00_bglt BgL_instance3343z00_913;

						BgL_instance3343z00_913 = (BgL_sequencez00_bglt) (BgL_bodyz00_4);
						{	/* Reduce/sbeta.scm 100 */
							bool_t BgL_testz00_2956;

							{	/* Reduce/sbeta.scm 100 */
								bool_t BgL_testz00_2957;

								{	/* Reduce/sbeta.scm 100 */
									obj_t BgL_auxz00_2958;

									BgL_auxz00_2958 =
										(((BgL_sequencez00_bglt) CREF(BgL_instance3343z00_913))->
										BgL_nodesz00);
									BgL_testz00_2957 = PAIRP(BgL_auxz00_2958);
								}
								if (BgL_testz00_2957)
									{	/* Reduce/sbeta.scm 100 */
										obj_t BgL_auxz00_2961;

										{	/* Reduce/sbeta.scm 100 */
											obj_t BgL_pairz00_1872;

											BgL_pairz00_1872 =
												(((BgL_sequencez00_bglt)
													CREF(BgL_instance3343z00_913))->BgL_nodesz00);
											BgL_auxz00_2961 = CDR(BgL_pairz00_1872);
										}
										BgL_testz00_2956 = NULLP(BgL_auxz00_2961);
									}
								else
									{	/* Reduce/sbeta.scm 100 */
										BgL_testz00_2956 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_2956)
								{
									BgL_nodez00_bglt BgL_bodyz00_2965;

									{	/* Reduce/sbeta.scm 101 */
										obj_t BgL_auxz00_2966;

										{	/* Reduce/sbeta.scm 101 */
											obj_t BgL_pairz00_1875;

											BgL_pairz00_1875 =
												(((BgL_sequencez00_bglt)
													CREF(BgL_instance3343z00_913))->BgL_nodesz00);
											BgL_auxz00_2966 = CAR(BgL_pairz00_1875);
										}
										BgL_bodyz00_2965 = (BgL_nodez00_bglt) (BgL_auxz00_2966);
									}
									BgL_bodyz00_4 = BgL_bodyz00_2965;
									goto BGl_findzd2actualzd2expressionz00zzreduce_betaz00;
								}
							else
								{	/* Reduce/sbeta.scm 100 */
									return BgL_bodyz00_4;
								}
						}
					}
				else
					{	/* Reduce/sbeta.scm 98 */
						return BgL_bodyz00_4;
					}
			}
		}
	}



/* is-argument? */
	bool_t BGl_iszd2argumentzf3z21zzreduce_betaz00(BgL_variablez00_bglt
		BgL_varz00_5, obj_t BgL_bodyz00_6)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 108 */
			{	/* Reduce/sbeta.scm 110 */
				bool_t BgL_testz00_2970;

				{	/* Reduce/sbeta.scm 110 */
					bool_t BgL_res3907z00_1882;

					{	/* Reduce/sbeta.scm 110 */
						BgL_nodez00_bglt BgL_nodez00_1877;

						BgL_nodez00_1877 = (BgL_nodez00_bglt) (BgL_bodyz00_6);
						{	/* Reduce/sbeta.scm 110 */
							bool_t BgL_testz00_2972;

							{	/* Reduce/sbeta.scm 110 */
								obj_t BgL_obj2259z00_1880;

								BgL_obj2259z00_1880 = (obj_t) (BgL_nodez00_1877);
								BgL_testz00_2972 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_1880,
									BGl_varz00zzast_nodez00);
							}
							if (BgL_testz00_2972)
								{	/* Reduce/sbeta.scm 110 */
									obj_t BgL_auxz00_2975;

									{	/* Reduce/sbeta.scm 110 */
										BgL_varz00_bglt BgL_obj2244z00_1881;

										BgL_obj2244z00_1881 = (BgL_varz00_bglt) (BgL_nodez00_1877);
										BgL_auxz00_2975 =
											(obj_t) (
											(((BgL_varz00_bglt) CREF(BgL_obj2244z00_1881))->
												BgL_variablez00));
									}
									BgL_res3907z00_1882 =
										(BgL_auxz00_2975 == (obj_t) (BgL_varz00_5));
								}
							else
								{	/* Reduce/sbeta.scm 110 */
									BgL_res3907z00_1882 = ((bool_t) 0);
								}
						}
					}
					BgL_testz00_2970 = BgL_res3907z00_1882;
				}
				if (BgL_testz00_2970)
					{	/* Reduce/sbeta.scm 110 */
						return ((bool_t) 1);
					}
				else
					{	/* Reduce/sbeta.scm 110 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_bodyz00_6,
								BGl_castz00zzast_nodez00))
							{	/* Reduce/sbeta.scm 113 */
								BgL_castz00_bglt BgL_instance3345z00_923;

								BgL_instance3345z00_923 = (BgL_castz00_bglt) (BgL_bodyz00_6);
								{	/* Reduce/sbeta.scm 114 */
									bool_t BgL_res3908z00_1891;

									{	/* Reduce/sbeta.scm 114 */
										BgL_nodez00_bglt BgL_nodez00_1886;

										BgL_nodez00_1886 =
											(((BgL_castz00_bglt) CREF(BgL_instance3345z00_923))->
											BgL_argz00);
										{	/* Reduce/sbeta.scm 114 */
											bool_t BgL_testz00_2985;

											{	/* Reduce/sbeta.scm 114 */
												obj_t BgL_obj2259z00_1889;

												BgL_obj2259z00_1889 = (obj_t) (BgL_nodez00_1886);
												BgL_testz00_2985 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_1889,
													BGl_varz00zzast_nodez00);
											}
											if (BgL_testz00_2985)
												{	/* Reduce/sbeta.scm 114 */
													obj_t BgL_auxz00_2988;

													{	/* Reduce/sbeta.scm 114 */
														BgL_varz00_bglt BgL_obj2244z00_1890;

														BgL_obj2244z00_1890 =
															(BgL_varz00_bglt) (BgL_nodez00_1886);
														BgL_auxz00_2988 =
															(obj_t) (
															(((BgL_varz00_bglt) CREF(BgL_obj2244z00_1890))->
																BgL_variablez00));
													}
													BgL_res3908z00_1891 =
														(BgL_auxz00_2988 == (obj_t) (BgL_varz00_5));
												}
											else
												{	/* Reduce/sbeta.scm 114 */
													BgL_res3908z00_1891 = ((bool_t) 0);
												}
										}
									}
									return BgL_res3908z00_1891;
								}
							}
						else
							{	/* Reduce/sbeta.scm 112 */
								return ((bool_t) 0);
							}
					}
			}
		}
	}



/* argument? */
	bool_t BGl_argumentzf3zf3zzreduce_betaz00(BgL_variablez00_bglt BgL_varz00_7,
		obj_t BgL_argsz00_8)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 121 */
			{
				obj_t BgL_argsz00_926;

				BgL_argsz00_926 = BgL_argsz00_8;
			BgL_zc3anonymousza33539ze3z83_927:
				if (NULLP(BgL_argsz00_926))
					{	/* Reduce/sbeta.scm 124 */
						return ((bool_t) 0);
					}
				else
					{	/* Reduce/sbeta.scm 124 */
						if (BGl_iszd2argumentzf3z21zzreduce_betaz00(BgL_varz00_7,
								CAR(BgL_argsz00_926)))
							{	/* Reduce/sbeta.scm 126 */
								return ((bool_t) 1);
							}
						else
							{
								obj_t BgL_argsz00_2999;

								BgL_argsz00_2999 = CDR(BgL_argsz00_926);
								BgL_argsz00_926 = BgL_argsz00_2999;
								goto BgL_zc3anonymousza33539ze3z83_927;
							}
					}
			}
		}
	}



/* make-args-list */
	obj_t BGl_makezd2argszd2listz00zzreduce_betaz00(obj_t BgL_bindingsz00_9,
		obj_t BgL_argsz00_10)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 134 */
			if (NULLP(BgL_argsz00_10))
				{	/* Reduce/sbeta.scm 135 */
					return BNIL;
				}
			else
				{	/* Reduce/sbeta.scm 135 */
					obj_t BgL_head3417z00_935;

					BgL_head3417z00_935 = MAKE_PAIR(BNIL, BNIL);
					{
						obj_t BgL_l3415z00_937;

						obj_t BgL_tail3418z00_938;

						BgL_l3415z00_937 = BgL_argsz00_10;
						BgL_tail3418z00_938 = BgL_head3417z00_935;
					BgL_zc3anonymousza33545ze3z83_939:
						if (NULLP(BgL_l3415z00_937))
							{	/* Reduce/sbeta.scm 135 */
								return CDR(BgL_head3417z00_935);
							}
						else
							{	/* Reduce/sbeta.scm 135 */
								obj_t BgL_newtail3419z00_941;

								{	/* Reduce/sbeta.scm 135 */
									obj_t BgL_arg3548z00_943;

									{	/* Reduce/sbeta.scm 135 */
										obj_t BgL_az00_945;

										BgL_az00_945 = CAR(BgL_l3415z00_937);
										{
											obj_t BgL_bindingsz00_947;

											BgL_bindingsz00_947 = BgL_bindingsz00_9;
										BgL_zc3anonymousza33550ze3z83_948:
											if (NULLP(BgL_bindingsz00_947))
												{	/* Reduce/sbeta.scm 138 */
													BgL_arg3548z00_943 = BgL_az00_945;
												}
											else
												{	/* Reduce/sbeta.scm 140 */
													bool_t BgL_testz00_3010;

													{	/* Reduce/sbeta.scm 140 */
														BgL_variablez00_bglt BgL_auxz00_3011;

														{	/* Reduce/sbeta.scm 140 */
															obj_t BgL_auxz00_3012;

															{	/* Reduce/sbeta.scm 140 */
																obj_t BgL_pairz00_1902;

																BgL_pairz00_1902 = BgL_bindingsz00_947;
																BgL_auxz00_3012 = CAR(CAR(BgL_pairz00_1902));
															}
															BgL_auxz00_3011 =
																(BgL_variablez00_bglt) (BgL_auxz00_3012);
														}
														BgL_testz00_3010 =
															BGl_iszd2argumentzf3z21zzreduce_betaz00
															(BgL_auxz00_3011, BgL_az00_945);
													}
													if (BgL_testz00_3010)
														{	/* Reduce/sbeta.scm 141 */
															obj_t BgL_pairz00_1906;

															BgL_pairz00_1906 = BgL_bindingsz00_947;
															BgL_arg3548z00_943 = CDR(CAR(BgL_pairz00_1906));
														}
													else
														{
															obj_t BgL_bindingsz00_3019;

															BgL_bindingsz00_3019 = CDR(BgL_bindingsz00_947);
															BgL_bindingsz00_947 = BgL_bindingsz00_3019;
															goto BgL_zc3anonymousza33550ze3z83_948;
														}
												}
										}
									}
									BgL_newtail3419z00_941 = MAKE_PAIR(BgL_arg3548z00_943, BNIL);
								}
								SET_CDR(BgL_tail3418z00_938, BgL_newtail3419z00_941);
								{
									obj_t BgL_tail3418z00_3025;

									obj_t BgL_l3415z00_3023;

									BgL_l3415z00_3023 = CDR(BgL_l3415z00_937);
									BgL_tail3418z00_3025 = BgL_newtail3419z00_941;
									BgL_tail3418z00_938 = BgL_tail3418z00_3025;
									BgL_l3415z00_937 = BgL_l3415z00_3023;
									goto BgL_zc3anonymousza33545ze3z83_939;
								}
							}
					}
				}
		}
	}



/* dangerous? */
	bool_t BGl_dangerouszf3zf3zzreduce_betaz00(obj_t BgL_exprz00_11)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 149 */
			{	/* Reduce/sbeta.scm 150 */
				BgL_nodez00_bglt BgL_exprz00_955;

				BgL_exprz00_955 =
					BGl_findzd2actualzd2expressionz00zzreduce_betaz00(
					(BgL_nodez00_bglt) (BgL_exprz00_11));
				{	/* Reduce/sbeta.scm 152 */
					bool_t BgL_testz00_3028;

					{	/* Reduce/sbeta.scm 152 */
						bool_t BgL_testz00_3029;

						{	/* Reduce/sbeta.scm 152 */
							obj_t BgL_obj2259z00_1916;

							BgL_obj2259z00_1916 = (obj_t) (BgL_exprz00_955);
							BgL_testz00_3029 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_1916,
								BGl_varz00zzast_nodez00);
						}
						if (BgL_testz00_3029)
							{	/* Reduce/sbeta.scm 152 */
								BgL_testz00_3028 = ((bool_t) 1);
							}
						else
							{	/* Reduce/sbeta.scm 152 */
								bool_t BgL_testz00_3032;

								{	/* Reduce/sbeta.scm 152 */
									obj_t BgL_obj2239z00_1917;

									BgL_obj2239z00_1917 = (obj_t) (BgL_exprz00_955);
									BgL_testz00_3032 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2239z00_1917,
										BGl_atomz00zzast_nodez00);
								}
								if (BgL_testz00_3032)
									{	/* Reduce/sbeta.scm 152 */
										BgL_testz00_3028 = ((bool_t) 1);
									}
								else
									{	/* Reduce/sbeta.scm 152 */
										obj_t BgL_obj2297z00_1918;

										BgL_obj2297z00_1918 = (obj_t) (BgL_exprz00_955);
										BgL_testz00_3028 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2297z00_1918,
											BGl_kwotez00zzast_nodez00);
									}
							}
					}
					if (BgL_testz00_3028)
						{	/* Reduce/sbeta.scm 152 */
							return ((bool_t) 0);
						}
					else
						{	/* Reduce/sbeta.scm 154 */
							bool_t BgL_testz00_3037;

							{	/* Reduce/sbeta.scm 154 */
								obj_t BgL_obj2765z00_1919;

								BgL_obj2765z00_1919 = (obj_t) (BgL_exprz00_955);
								BgL_testz00_3037 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2765z00_1919,
									BGl_vrefz00zzast_nodez00);
							}
							if (BgL_testz00_3037)
								{
									obj_t BgL_l3420z00_960;

									{
										BgL_externz00_bglt BgL_auxz00_3047;

										BgL_auxz00_3047 =
											(BgL_externz00_bglt) (
											(BgL_vrefz00_bglt) (BgL_exprz00_955));
										BgL_l3420z00_960 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_3047))->
											BgL_exprza2za2);
									}
								BgL_zc3anonymousza33557ze3z83_961:
									if (NULLP(BgL_l3420z00_960))
										{	/* Reduce/sbeta.scm 155 */
											return ((bool_t) 0);
										}
									else
										{	/* Reduce/sbeta.scm 155 */
											if (BGl_dangerouszf3zf3zzreduce_betaz00(CAR
													(BgL_l3420z00_960)))
												{	/* Reduce/sbeta.scm 155 */
													return ((bool_t) 1);
												}
											else
												{
													obj_t BgL_l3420z00_3045;

													BgL_l3420z00_3045 = CDR(BgL_l3420z00_960);
													BgL_l3420z00_960 = BgL_l3420z00_3045;
													goto BgL_zc3anonymousza33557ze3z83_961;
												}
										}
								}
							else
								{	/* Reduce/sbeta.scm 156 */
									bool_t BgL_testz00_3051;

									{	/* Reduce/sbeta.scm 156 */
										obj_t BgL_obj2561z00_1924;

										BgL_obj2561z00_1924 = (obj_t) (BgL_exprz00_955);
										BgL_testz00_3051 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2561z00_1924,
											BGl_getfieldz00zzast_nodez00);
									}
									if (BgL_testz00_3051)
										{
											obj_t BgL_l3423z00_970;

											{
												BgL_externz00_bglt BgL_auxz00_3061;

												BgL_auxz00_3061 =
													(BgL_externz00_bglt) (
													(BgL_getfieldz00_bglt) (BgL_exprz00_955));
												BgL_l3423z00_970 =
													(((BgL_externz00_bglt) CREF(BgL_auxz00_3061))->
													BgL_exprza2za2);
											}
										BgL_zc3anonymousza33563ze3z83_971:
											if (NULLP(BgL_l3423z00_970))
												{	/* Reduce/sbeta.scm 157 */
													return ((bool_t) 0);
												}
											else
												{	/* Reduce/sbeta.scm 157 */
													if (BGl_dangerouszf3zf3zzreduce_betaz00(CAR
															(BgL_l3423z00_970)))
														{	/* Reduce/sbeta.scm 157 */
															return ((bool_t) 1);
														}
													else
														{
															obj_t BgL_l3423z00_3059;

															BgL_l3423z00_3059 = CDR(BgL_l3423z00_970);
															BgL_l3423z00_970 = BgL_l3423z00_3059;
															goto BgL_zc3anonymousza33563ze3z83_971;
														}
												}
										}
									else
										{	/* Reduce/sbeta.scm 158 */
											bool_t BgL_testz00_3065;

											{	/* Reduce/sbeta.scm 158 */
												obj_t BgL_obj2366z00_1929;

												BgL_obj2366z00_1929 = (obj_t) (BgL_exprz00_955);
												BgL_testz00_3065 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2366z00_1929,
													BGl_appz00zzast_nodez00);
											}
											if (BgL_testz00_3065)
												{	/* Reduce/sbeta.scm 161 */
													BgL_appz00_bglt BgL_instance3347z00_978;

													BgL_instance3347z00_978 =
														(BgL_appz00_bglt) (BgL_exprz00_955);
													{	/* Reduce/sbeta.scm 162 */
														BgL_variablez00_bglt BgL_varz00_979;

														{	/* Reduce/sbeta.scm 162 */
															BgL_varz00_bglt BgL_obj2244z00_1931;

															BgL_obj2244z00_1931 =
																(((BgL_appz00_bglt)
																	CREF(BgL_instance3347z00_978))->BgL_funz00);
															BgL_varz00_979 =
																(((BgL_varz00_bglt) CREF(BgL_obj2244z00_1931))->
																BgL_variablez00);
														}
														{	/* Reduce/sbeta.scm 162 */
															BgL_valuez00_bglt BgL_valz00_980;

															BgL_valz00_980 =
																(((BgL_variablez00_bglt) CREF(BgL_varz00_979))->
																BgL_valuez00);
															{	/* Reduce/sbeta.scm 163 */

																{	/* Reduce/sbeta.scm 164 */
																	bool_t BgL_testz00_3072;

																	{	/* Reduce/sbeta.scm 164 */
																		bool_t BgL_testz00_3073;

																		{	/* Reduce/sbeta.scm 164 */
																			obj_t BgL_obj1839z00_1933;

																			BgL_obj1839z00_1933 =
																				(obj_t) (BgL_varz00_979);
																			BgL_testz00_3073 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj1839z00_1933,
																				BGl_globalz00zzast_varz00);
																		}
																		if (BgL_testz00_3073)
																			{	/* Reduce/sbeta.scm 165 */
																				bool_t BgL_testz00_3076;

																				{	/* Reduce/sbeta.scm 165 */
																					obj_t BgL_obj2108z00_1934;

																					BgL_obj2108z00_1934 =
																						(obj_t) (BgL_valz00_980);
																					BgL_testz00_3076 =
																						BGl_iszd2azf3z21zz__objectz00
																						(BgL_obj2108z00_1934,
																						BGl_cfunz00zzast_varz00);
																				}
																				if (BgL_testz00_3076)
																					{	/* Reduce/sbeta.scm 166 */
																						bool_t BgL_testz00_3079;

																						{
																							BgL_cfunz00_bglt BgL_auxz00_3080;

																							BgL_auxz00_3080 =
																								(BgL_cfunz00_bglt)
																								(BgL_valz00_980);
																							BgL_testz00_3079 =
																								(((BgL_cfunz00_bglt)
																									CREF(BgL_auxz00_3080))->
																								BgL_macrozf3zf3);
																						}
																						if (BgL_testz00_3079)
																							{	/* Reduce/sbeta.scm 167 */
																								bool_t BgL_testz00_3083;

																								{	/* Reduce/sbeta.scm 167 */
																									obj_t BgL_auxz00_3084;

																									{	/* Reduce/sbeta.scm 167 */
																										obj_t BgL_auxz00_3085;

																										{
																											BgL_globalz00_bglt
																												BgL_auxz00_3087;
																											BgL_auxz00_3087 =
																												(BgL_globalz00_bglt)
																												(BgL_varz00_979);
																											BgL_auxz00_3085 =
																												(((BgL_globalz00_bglt)
																													CREF
																													(BgL_auxz00_3087))->
																												BgL_pragmaz00);
																										}
																										BgL_auxz00_3084 =
																											BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													4)), BgL_auxz00_3085);
																									}
																									BgL_testz00_3083 =
																										CBOOL(BgL_auxz00_3084);
																								}
																								if (BgL_testz00_3083)
																									{	/* Reduce/sbeta.scm 167 */
																										BgL_testz00_3072 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Reduce/sbeta.scm 167 */
																										BgL_testz00_3072 =
																											((bool_t) 1);
																									}
																							}
																						else
																							{	/* Reduce/sbeta.scm 166 */
																								BgL_testz00_3072 = ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Reduce/sbeta.scm 165 */
																						BgL_testz00_3072 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Reduce/sbeta.scm 164 */
																				BgL_testz00_3072 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_3072)
																		{	/* Reduce/sbeta.scm 164 */
																			return ((bool_t) 1);
																		}
																	else
																		{
																			obj_t BgL_l3426z00_984;

																			BgL_l3426z00_984 =
																				(((BgL_appz00_bglt)
																					CREF(BgL_instance3347z00_978))->
																				BgL_argsz00);
																		BgL_zc3anonymousza33570ze3z83_985:
																			if (NULLP(BgL_l3426z00_984))
																				{	/* Reduce/sbeta.scm 169 */
																					return ((bool_t) 0);
																				}
																			else
																				{	/* Reduce/sbeta.scm 169 */
																					if (BGl_dangerouszf3zf3zzreduce_betaz00(CAR(BgL_l3426z00_984)))
																						{	/* Reduce/sbeta.scm 169 */
																							return ((bool_t) 1);
																						}
																					else
																						{
																							obj_t BgL_l3426z00_3097;

																							BgL_l3426z00_3097 =
																								CDR(BgL_l3426z00_984);
																							BgL_l3426z00_984 =
																								BgL_l3426z00_3097;
																							goto
																								BgL_zc3anonymousza33570ze3z83_985;
																						}
																				}
																		}
																}
															}
														}
													}
												}
											else
												{	/* Reduce/sbeta.scm 158 */
													return ((bool_t) 1);
												}
										}
								}
						}
				}
			}
		}
	}



/* side-effect-safe? */
	bool_t BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(obj_t BgL_exprz00_12)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 180 */
			{	/* Reduce/sbeta.scm 181 */
				BgL_nodez00_bglt BgL_exprz00_1000;

				BgL_exprz00_1000 =
					BGl_findzd2actualzd2expressionz00zzreduce_betaz00(
					(BgL_nodez00_bglt) (BgL_exprz00_12));
				{	/* Reduce/sbeta.scm 183 */
					bool_t BgL_testz00_3102;

					{	/* Reduce/sbeta.scm 183 */
						bool_t BgL_testz00_3103;

						{	/* Reduce/sbeta.scm 183 */
							obj_t BgL_obj2259z00_1941;

							BgL_obj2259z00_1941 = (obj_t) (BgL_exprz00_1000);
							BgL_testz00_3103 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj2259z00_1941,
								BGl_varz00zzast_nodez00);
						}
						if (BgL_testz00_3103)
							{	/* Reduce/sbeta.scm 183 */
								BgL_testz00_3102 = ((bool_t) 1);
							}
						else
							{	/* Reduce/sbeta.scm 183 */
								bool_t BgL_testz00_3106;

								{	/* Reduce/sbeta.scm 183 */
									obj_t BgL_obj2239z00_1942;

									BgL_obj2239z00_1942 = (obj_t) (BgL_exprz00_1000);
									BgL_testz00_3106 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj2239z00_1942,
										BGl_atomz00zzast_nodez00);
								}
								if (BgL_testz00_3106)
									{	/* Reduce/sbeta.scm 183 */
										BgL_testz00_3102 = ((bool_t) 1);
									}
								else
									{	/* Reduce/sbeta.scm 183 */
										obj_t BgL_obj2297z00_1943;

										BgL_obj2297z00_1943 = (obj_t) (BgL_exprz00_1000);
										BgL_testz00_3102 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2297z00_1943,
											BGl_kwotez00zzast_nodez00);
									}
							}
					}
					if (BgL_testz00_3102)
						{	/* Reduce/sbeta.scm 183 */
							return ((bool_t) 1);
						}
					else
						{	/* Reduce/sbeta.scm 185 */
							bool_t BgL_testz00_3111;

							{	/* Reduce/sbeta.scm 185 */
								obj_t BgL_obj2765z00_1944;

								BgL_obj2765z00_1944 = (obj_t) (BgL_exprz00_1000);
								BgL_testz00_3111 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2765z00_1944,
									BGl_vrefz00zzast_nodez00);
							}
							if (BgL_testz00_3111)
								{
									obj_t BgL_l3429z00_1005;

									{
										BgL_externz00_bglt BgL_auxz00_3121;

										BgL_auxz00_3121 =
											(BgL_externz00_bglt) (
											(BgL_vrefz00_bglt) (BgL_exprz00_1000));
										BgL_l3429z00_1005 =
											(((BgL_externz00_bglt) CREF(BgL_auxz00_3121))->
											BgL_exprza2za2);
									}
								BgL_zc3anonymousza33586ze3z83_1006:
									if (NULLP(BgL_l3429z00_1005))
										{	/* Reduce/sbeta.scm 186 */
											return ((bool_t) 1);
										}
									else
										{	/* Reduce/sbeta.scm 186 */
											if (BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(CAR
													(BgL_l3429z00_1005)))
												{
													obj_t BgL_l3429z00_3119;

													BgL_l3429z00_3119 = CDR(BgL_l3429z00_1005);
													BgL_l3429z00_1005 = BgL_l3429z00_3119;
													goto BgL_zc3anonymousza33586ze3z83_1006;
												}
											else
												{	/* Reduce/sbeta.scm 186 */
													return ((bool_t) 0);
												}
										}
								}
							else
								{	/* Reduce/sbeta.scm 187 */
									bool_t BgL_testz00_3125;

									{	/* Reduce/sbeta.scm 187 */
										obj_t BgL_obj2561z00_1949;

										BgL_obj2561z00_1949 = (obj_t) (BgL_exprz00_1000);
										BgL_testz00_3125 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2561z00_1949,
											BGl_getfieldz00zzast_nodez00);
									}
									if (BgL_testz00_3125)
										{
											obj_t BgL_l3432z00_1015;

											{
												BgL_externz00_bglt BgL_auxz00_3135;

												BgL_auxz00_3135 =
													(BgL_externz00_bglt) (
													(BgL_getfieldz00_bglt) (BgL_exprz00_1000));
												BgL_l3432z00_1015 =
													(((BgL_externz00_bglt) CREF(BgL_auxz00_3135))->
													BgL_exprza2za2);
											}
										BgL_zc3anonymousza33592ze3z83_1016:
											if (NULLP(BgL_l3432z00_1015))
												{	/* Reduce/sbeta.scm 188 */
													return ((bool_t) 1);
												}
											else
												{	/* Reduce/sbeta.scm 188 */
													if (BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(CAR
															(BgL_l3432z00_1015)))
														{
															obj_t BgL_l3432z00_3133;

															BgL_l3432z00_3133 = CDR(BgL_l3432z00_1015);
															BgL_l3432z00_1015 = BgL_l3432z00_3133;
															goto BgL_zc3anonymousza33592ze3z83_1016;
														}
													else
														{	/* Reduce/sbeta.scm 188 */
															return ((bool_t) 0);
														}
												}
										}
									else
										{	/* Reduce/sbeta.scm 189 */
											bool_t BgL_testz00_3139;

											{	/* Reduce/sbeta.scm 189 */
												obj_t BgL_obj2366z00_1954;

												BgL_obj2366z00_1954 = (obj_t) (BgL_exprz00_1000);
												BgL_testz00_3139 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2366z00_1954,
													BGl_appz00zzast_nodez00);
											}
											if (BgL_testz00_3139)
												{	/* Reduce/sbeta.scm 192 */
													BgL_appz00_bglt BgL_instance3349z00_1023;

													BgL_instance3349z00_1023 =
														(BgL_appz00_bglt) (BgL_exprz00_1000);
													{	/* Reduce/sbeta.scm 193 */
														bool_t BgL_testz00_3143;

														{	/* Reduce/sbeta.scm 193 */
															BgL_funz00_bglt BgL_obj1904z00_1958;

															{	/* Reduce/sbeta.scm 193 */
																BgL_valuez00_bglt BgL_auxz00_3144;

																{	/* Reduce/sbeta.scm 193 */
																	BgL_variablez00_bglt BgL_arg3605z00_1035;

																	{	/* Reduce/sbeta.scm 193 */
																		BgL_varz00_bglt BgL_obj2244z00_1956;

																		BgL_obj2244z00_1956 =
																			(((BgL_appz00_bglt)
																				CREF(BgL_instance3349z00_1023))->
																			BgL_funz00);
																		BgL_arg3605z00_1035 =
																			(((BgL_varz00_bglt)
																				CREF(BgL_obj2244z00_1956))->
																			BgL_variablez00);
																	}
																	BgL_auxz00_3144 =
																		(((BgL_variablez00_bglt)
																			CREF(BgL_arg3605z00_1035))->BgL_valuez00);
																}
																BgL_obj1904z00_1958 =
																	(BgL_funz00_bglt) (BgL_auxz00_3144);
															}
															BgL_testz00_3143 =
																CBOOL(
																(((BgL_funz00_bglt) CREF(BgL_obj1904z00_1958))->
																	BgL_sidezd2effectzf3z21));
														}
														if (BgL_testz00_3143)
															{	/* Reduce/sbeta.scm 193 */
																return ((bool_t) 0);
															}
														else
															{
																obj_t BgL_l3435z00_1027;

																BgL_l3435z00_1027 =
																	(((BgL_appz00_bglt)
																		CREF(BgL_instance3349z00_1023))->
																	BgL_argsz00);
															BgL_zc3anonymousza33599ze3z83_1028:
																if (NULLP(BgL_l3435z00_1027))
																	{	/* Reduce/sbeta.scm 194 */
																		return ((bool_t) 1);
																	}
																else
																	{	/* Reduce/sbeta.scm 194 */
																		if (BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00(CAR(BgL_l3435z00_1027)))
																			{
																				obj_t BgL_l3435z00_3156;

																				BgL_l3435z00_3156 =
																					CDR(BgL_l3435z00_1027);
																				BgL_l3435z00_1027 = BgL_l3435z00_3156;
																				goto BgL_zc3anonymousza33599ze3z83_1028;
																			}
																		else
																			{	/* Reduce/sbeta.scm 194 */
																				return ((bool_t) 0);
																			}
																	}
															}
													}
												}
											else
												{	/* Reduce/sbeta.scm 189 */
													return ((bool_t) 0);
												}
										}
								}
						}
				}
			}
		}
	}



/* predicate? */
	obj_t BGl_predicatezf3zf3zzreduce_betaz00(BgL_appz00_bglt BgL_nodez00_30)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 440 */
			{	/* Reduce/sbeta.scm 442 */
				bool_t BgL_testz00_3159;

				{	/* Reduce/sbeta.scm 442 */
					obj_t BgL_auxz00_3160;

					BgL_auxz00_3160 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_30))->BgL_argsz00);
					BgL_testz00_3159 = PAIRP(BgL_auxz00_3160);
				}
				if (BgL_testz00_3159)
					{	/* Reduce/sbeta.scm 443 */
						bool_t BgL_testz00_3163;

						{	/* Reduce/sbeta.scm 443 */
							obj_t BgL_auxz00_3164;

							{	/* Reduce/sbeta.scm 443 */
								obj_t BgL_pairz00_1972;

								BgL_pairz00_1972 =
									(((BgL_appz00_bglt) CREF(BgL_nodez00_30))->BgL_argsz00);
								BgL_auxz00_3164 = CDR(BgL_pairz00_1972);
							}
							BgL_testz00_3163 = NULLP(BgL_auxz00_3164);
						}
						if (BgL_testz00_3163)
							{	/* Reduce/sbeta.scm 444 */
								bool_t BgL_testz00_3168;

								{	/* Reduce/sbeta.scm 444 */
									bool_t BgL__ortest_3402z00_1048;

									{	/* Reduce/sbeta.scm 444 */
										bool_t BgL_testz00_3169;

										{	/* Reduce/sbeta.scm 444 */
											obj_t BgL_arg3617z00_1052;

											{	/* Reduce/sbeta.scm 444 */
												obj_t BgL_pairz00_1975;

												BgL_pairz00_1975 =
													(((BgL_appz00_bglt) CREF(BgL_nodez00_30))->
													BgL_argsz00);
												BgL_arg3617z00_1052 = CAR(BgL_pairz00_1975);
											}
											BgL_testz00_3169 =
												BGl_sidezd2effectzf3z21zzeffect_effectz00(
												(BgL_nodez00_bglt) (BgL_arg3617z00_1052));
										}
										if (BgL_testz00_3169)
											{	/* Reduce/sbeta.scm 444 */
												BgL__ortest_3402z00_1048 = ((bool_t) 0);
											}
										else
											{	/* Reduce/sbeta.scm 444 */
												BgL__ortest_3402z00_1048 = ((bool_t) 1);
											}
									}
									if (BgL__ortest_3402z00_1048)
										{	/* Reduce/sbeta.scm 444 */
											BgL_testz00_3168 = BgL__ortest_3402z00_1048;
										}
									else
										{	/* Reduce/sbeta.scm 445 */
											obj_t BgL_auxz00_3175;

											{	/* Reduce/sbeta.scm 445 */
												obj_t BgL_pairz00_1977;

												BgL_pairz00_1977 =
													(((BgL_appz00_bglt) CREF(BgL_nodez00_30))->
													BgL_argsz00);
												BgL_auxz00_3175 = CAR(BgL_pairz00_1977);
											}
											BgL_testz00_3168 =
												BGl_sidezd2effectzd2safezf3zf3zzreduce_betaz00
												(BgL_auxz00_3175);
										}
								}
								if (BgL_testz00_3168)
									{	/* Reduce/sbeta.scm 446 */
										BgL_variablez00_bglt BgL_arg3612z00_1046;

										{	/* Reduce/sbeta.scm 446 */
											BgL_varz00_bglt BgL_obj2244z00_1979;

											BgL_obj2244z00_1979 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_30))->BgL_funz00);
											BgL_arg3612z00_1046 =
												(((BgL_varz00_bglt) CREF(BgL_obj2244z00_1979))->
												BgL_variablez00);
										}
										return
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
											(obj_t) (BgL_arg3612z00_1046),
											BGl_za2predicatesza2z00zzreduce_betaz00);
									}
								else
									{	/* Reduce/sbeta.scm 444 */
										return BFALSE;
									}
							}
						else
							{	/* Reduce/sbeta.scm 443 */
								return BFALSE;
							}
					}
				else
					{	/* Reduce/sbeta.scm 442 */
						return BFALSE;
					}
			}
		}
	}



/* node-beta-predicate! */
	obj_t BGl_nodezd2betazd2predicatez12z12zzreduce_betaz00(BgL_appz00_bglt
		BgL_nodez00_31)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 451 */
			{	/* Reduce/sbeta.scm 453 */
				BgL_variablez00_bglt BgL_vfunz00_1058;

				BgL_typez00_bglt BgL_atypez00_1059;

				{	/* Reduce/sbeta.scm 453 */
					BgL_varz00_bglt BgL_obj2244z00_1981;

					BgL_obj2244z00_1981 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_31))->BgL_funz00);
					BgL_vfunz00_1058 =
						(((BgL_varz00_bglt) CREF(BgL_obj2244z00_1981))->BgL_variablez00);
				}
				{	/* Reduce/sbeta.scm 454 */
					obj_t BgL_arg3635z00_1076;

					{	/* Reduce/sbeta.scm 454 */
						obj_t BgL_pairz00_1983;

						BgL_pairz00_1983 =
							(((BgL_appz00_bglt) CREF(BgL_nodez00_31))->BgL_argsz00);
						BgL_arg3635z00_1076 = CAR(BgL_pairz00_1983);
					}
					BgL_atypez00_1059 =
						BGl_getzd2typezd2zztype_typeofz00(
						(BgL_nodez00_bglt) (BgL_arg3635z00_1076));
				}
				if (((obj_t) (BgL_atypez00_1059) == BGl_za2objza2z00zztype_cachez00))
					{	/* Reduce/sbeta.scm 456 */
						return (obj_t) (BgL_nodez00_31);
					}
				else
					{	/* Reduce/sbeta.scm 456 */
						if (
							((obj_t) (BgL_vfunz00_1058) ==
								BGl_za2czd2fixnumzf3za2z21zzreduce_betaz00))
							{	/* Reduce/sbeta.scm 458 */
								BGl_za2removedza2z00zzreduce_betaz00 =
									(BGl_za2removedza2z00zzreduce_betaz00 + ((long) 1));
								{	/* Reduce/sbeta.scm 462 */
									obj_t BgL_arg3624z00_1062;

									BgL_typez00_bglt BgL_arg3625z00_1063;

									bool_t BgL_arg3626z00_1064;

									{
										BgL_nodez00_bglt BgL_auxz00_3197;

										BgL_auxz00_3197 = (BgL_nodez00_bglt) (BgL_nodez00_31);
										BgL_arg3624z00_1062 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3197))->BgL_locz00);
									}
									{
										BgL_nodez00_bglt BgL_auxz00_3200;

										BgL_auxz00_3200 = (BgL_nodez00_bglt) (BgL_nodez00_31);
										BgL_arg3625z00_1063 =
											(((BgL_nodez00_bglt) CREF(BgL_auxz00_3200))->BgL_typez00);
									}
									{	/* Reduce/sbeta.scm 463 */
										bool_t BgL__ortest_3406z00_1065;

										BgL__ortest_3406z00_1065 =
											(
											(obj_t) (BgL_atypez00_1059) ==
											BGl_za2bintza2z00zztype_cachez00);
										if (BgL__ortest_3406z00_1065)
											{	/* Reduce/sbeta.scm 463 */
												BgL_arg3626z00_1064 = BgL__ortest_3406z00_1065;
											}
										else
											{	/* Reduce/sbeta.scm 464 */
												bool_t BgL__ortest_3407z00_1066;

												BgL__ortest_3407z00_1066 =
													(
													(obj_t) (BgL_atypez00_1059) ==
													BGl_za2intza2z00zztype_cachez00);
												if (BgL__ortest_3407z00_1066)
													{	/* Reduce/sbeta.scm 464 */
														BgL_arg3626z00_1064 = BgL__ortest_3407z00_1066;
													}
												else
													{	/* Reduce/sbeta.scm 464 */
														BgL_arg3626z00_1064 =
															(
															(obj_t) (BgL_atypez00_1059) ==
															BGl_za2longza2z00zztype_cachez00);
													}
											}
									}
									return
										(obj_t) (BGl_makezd2atomzd2zzast_nodez00
										(BgL_arg3624z00_1062, BgL_arg3625z00_1063,
											BBOOL(BgL_arg3626z00_1064)));
								}
							}
						else
							{	/* Reduce/sbeta.scm 458 */
								if (
									((obj_t) (BgL_vfunz00_1058) ==
										BGl_za2czd2flonumzf3za2z21zzreduce_betaz00))
									{	/* Reduce/sbeta.scm 466 */
										BGl_za2removedza2z00zzreduce_betaz00 =
											(BGl_za2removedza2z00zzreduce_betaz00 + ((long) 1));
										{	/* Reduce/sbeta.scm 470 */
											obj_t BgL_arg3628z00_1068;

											BgL_typez00_bglt BgL_arg3629z00_1069;

											bool_t BgL_arg3630z00_1070;

											{
												BgL_nodez00_bglt BgL_auxz00_3218;

												BgL_auxz00_3218 = (BgL_nodez00_bglt) (BgL_nodez00_31);
												BgL_arg3628z00_1068 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_3218))->
													BgL_locz00);
											}
											{
												BgL_nodez00_bglt BgL_auxz00_3221;

												BgL_auxz00_3221 = (BgL_nodez00_bglt) (BgL_nodez00_31);
												BgL_arg3629z00_1069 =
													(((BgL_nodez00_bglt) CREF(BgL_auxz00_3221))->
													BgL_typez00);
											}
											{	/* Reduce/sbeta.scm 471 */
												bool_t BgL__ortest_3409z00_1071;

												BgL__ortest_3409z00_1071 =
													(
													(obj_t) (BgL_atypez00_1059) ==
													BGl_za2realza2z00zztype_cachez00);
												if (BgL__ortest_3409z00_1071)
													{	/* Reduce/sbeta.scm 471 */
														BgL_arg3630z00_1070 = BgL__ortest_3409z00_1071;
													}
												else
													{	/* Reduce/sbeta.scm 471 */
														BgL_arg3630z00_1070 =
															(
															(obj_t) (BgL_atypez00_1059) ==
															BGl_za2brealza2z00zztype_cachez00);
													}
											}
											return
												(obj_t) (BGl_makezd2atomzd2zzast_nodez00
												(BgL_arg3628z00_1068, BgL_arg3629z00_1069,
													BBOOL(BgL_arg3630z00_1070)));
										}
									}
								else
									{	/* Reduce/sbeta.scm 466 */
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_string3975z00zzreduce_betaz00,
											BGl_string3976z00zzreduce_betaz00,
											BGl_shapez00zztools_shapez00((obj_t) (BgL_nodez00_31)));
									}
							}
					}
			}
		}
	}



/* node-beta*! */
	obj_t BGl_nodezd2betaza2z12z62zzreduce_betaz00(obj_t BgL_nodesz00_32)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 481 */
			{
				obj_t BgL_nodesz00_1079;

				BgL_nodesz00_1079 = BgL_nodesz00_32;
			BgL_zc3anonymousza33637ze3z83_1080:
				if (NULLP(BgL_nodesz00_1079))
					{	/* Reduce/sbeta.scm 483 */
						return BUNSPEC;
					}
				else
					{	/* Reduce/sbeta.scm 483 */
						{	/* Reduce/sbeta.scm 486 */
							BgL_nodez00_bglt BgL_arg3639z00_1082;

							{	/* Reduce/sbeta.scm 486 */
								obj_t BgL_arg3640z00_1083;

								BgL_arg3640z00_1083 = CAR(BgL_nodesz00_1079);
								{	/* Reduce/sbeta.scm 486 */
									BgL_nodez00_bglt BgL_res3911z00_2020;

									{	/* Reduce/sbeta.scm 486 */
										BgL_nodez00_bglt BgL_nodez00_1994;

										BgL_nodez00_1994 = (BgL_nodez00_bglt) (BgL_arg3640z00_1083);
										{	/* Reduce/sbeta.scm 486 */
											obj_t BgL_method3480z00_1995;

											{	/* Reduce/sbeta.scm 486 */
												BgL_objectz00_bglt BgL_objz00_1996;

												BgL_objz00_1996 =
													(BgL_objectz00_bglt) (BgL_nodez00_1994);
												{	/* Reduce/sbeta.scm 486 */
													long BgL_objzd2classzd2numz00_1997;

													BgL_objzd2classzd2numz00_1997 =
														BGL_OBJECT_CLASS_NUM(BgL_objz00_1996);
													{	/* Reduce/sbeta.scm 486 */
														obj_t BgL_arg2643z00_1998;

														BgL_arg2643z00_1998 =
															PROCEDURE_REF
															(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
															(int) (((long) 1)));
														{	/* Reduce/sbeta.scm 486 */
															obj_t BgL_arrayz00_2000;

															int BgL_offsetz00_2001;

															BgL_arrayz00_2000 = BgL_arg2643z00_1998;
															BgL_offsetz00_2001 =
																(int) (BgL_objzd2classzd2numz00_1997);
															{	/* Reduce/sbeta.scm 486 */
																long BgL_offsetz00_2002;

																BgL_offsetz00_2002 =
																	((long) (BgL_offsetz00_2001) - OBJECT_TYPE);
																{	/* Reduce/sbeta.scm 486 */
																	long BgL_modz00_2003;

																	{	/* Reduce/sbeta.scm 486 */
																		int BgL_arg2645z00_2004;

																		BgL_arg2645z00_2004 = (int) (((long) 16));
																		{	/* Reduce/sbeta.scm 486 */
																			long BgL_auxz00_3247;

																			BgL_auxz00_3247 =
																				(long) (BgL_arg2645z00_2004);
																			BgL_modz00_2003 =
																				(BgL_offsetz00_2002 / BgL_auxz00_3247);
																	}}
																	{	/* Reduce/sbeta.scm 486 */
																		long BgL_restz00_2005;

																		{	/* Reduce/sbeta.scm 486 */
																			int BgL_arg2644z00_2006;

																			BgL_arg2644z00_2006 = (int) (((long) 16));
																			{	/* Reduce/sbeta.scm 486 */
																				long BgL_auxz00_3251;

																				BgL_auxz00_3251 =
																					(long) (BgL_arg2644z00_2006);
																				BgL_restz00_2005 =
																					(BgL_offsetz00_2002 %
																					BgL_auxz00_3251);
																		}}
																		{	/* Reduce/sbeta.scm 486 */

																			BgL_method3480z00_1995 =
																				VECTOR_REF(VECTOR_REF(BgL_arrayz00_2000,
																					(int) (BgL_modz00_2003)),
																				(int) (BgL_restz00_2005));
											}}}}}}}}
											BgL_res3911z00_2020 =
												(BgL_nodez00_bglt) (PROCEDURE_ENTRY
												(BgL_method3480z00_1995) (BgL_method3480z00_1995,
													(obj_t) (BgL_nodez00_1994), BEOA));
									}}
									BgL_arg3639z00_1082 = BgL_res3911z00_2020;
							}}
							{	/* Reduce/sbeta.scm 486 */
								obj_t BgL_auxz00_3262;

								BgL_auxz00_3262 = (obj_t) (BgL_arg3639z00_1082);
								SET_CAR(BgL_nodesz00_1079, BgL_auxz00_3262);
						}}
						{
							obj_t BgL_nodesz00_3265;

							BgL_nodesz00_3265 = CDR(BgL_nodesz00_1079);
							BgL_nodesz00_1079 = BgL_nodesz00_3265;
							goto BgL_zc3anonymousza33637ze3z83_1080;
						}
					}
			}
		}
	}



/* node-beta-early-app! */
	BgL_nodez00_bglt
		BGl_nodezd2betazd2earlyzd2appz12zc0zzreduce_betaz00(BgL_appz00_bglt
		BgL_nodez00_33)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 495 */
			{	/* Reduce/sbeta.scm 497 */
				bool_t BgL_testz00_3267;

				{
					obj_t BgL_l3475z00_1107;

					BgL_l3475z00_1107 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_33))->BgL_argsz00);
				BgL_zc3anonymousza33660ze3z83_1108:
					if (NULLP(BgL_l3475z00_1107))
						{	/* Reduce/sbeta.scm 497 */
							BgL_testz00_3267 = ((bool_t) 1);
						}
					else
						{	/* Reduce/sbeta.scm 497 */
							bool_t BgL_testz00_3270;

							{	/* Reduce/sbeta.scm 497 */
								obj_t BgL_arg3664z00_1112;

								BgL_arg3664z00_1112 = CAR(BgL_l3475z00_1107);
								BgL_testz00_3270 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg3664z00_1112,
									BGl_atomz00zzast_nodez00);
							}
							if (BgL_testz00_3270)
								{
									obj_t BgL_l3475z00_3273;

									BgL_l3475z00_3273 = CDR(BgL_l3475z00_1107);
									BgL_l3475z00_1107 = BgL_l3475z00_3273;
									goto BgL_zc3anonymousza33660ze3z83_1108;
								}
							else
								{	/* Reduce/sbeta.scm 497 */
									BgL_testz00_3267 = ((bool_t) 0);
								}
						}
				}
				if (BgL_testz00_3267)
					{	/* Reduce/sbeta.scm 498 */
						bool_t BgL_testz00_3276;

						if (
							(bgl_list_length(
									(((BgL_appz00_bglt) CREF(BgL_nodez00_33))->BgL_argsz00)) ==
								((long) 1)))
							{	/* Reduce/sbeta.scm 498 */
								obj_t BgL_auxz00_3281;

								{	/* Reduce/sbeta.scm 498 */
									BgL_atomz00_bglt BgL_obj2224z00_2034;

									{	/* Reduce/sbeta.scm 498 */
										obj_t BgL_auxz00_3282;

										{	/* Reduce/sbeta.scm 498 */
											obj_t BgL_pairz00_2033;

											BgL_pairz00_2033 =
												(((BgL_appz00_bglt) CREF(BgL_nodez00_33))->BgL_argsz00);
											BgL_auxz00_3282 = CAR(BgL_pairz00_2033);
										}
										BgL_obj2224z00_2034 = (BgL_atomz00_bglt) (BgL_auxz00_3282);
									}
									BgL_auxz00_3281 =
										(((BgL_atomz00_bglt) CREF(BgL_obj2224z00_2034))->
										BgL_valuez00);
								}
								BgL_testz00_3276 = STRINGP(BgL_auxz00_3281);
							}
						else
							{	/* Reduce/sbeta.scm 498 */
								BgL_testz00_3276 = ((bool_t) 0);
							}
						if (BgL_testz00_3276)
							{	/* Reduce/sbeta.scm 499 */
								bool_t BgL_testz00_3288;

								{	/* Reduce/sbeta.scm 499 */
									BgL_variablez00_bglt BgL_arg3651z00_1096;

									{	/* Reduce/sbeta.scm 499 */
										BgL_varz00_bglt BgL_obj2244z00_2037;

										BgL_obj2244z00_2037 =
											(((BgL_appz00_bglt) CREF(BgL_nodez00_33))->BgL_funz00);
										BgL_arg3651z00_1096 =
											(((BgL_varz00_bglt) CREF(BgL_obj2244z00_2037))->
											BgL_variablez00);
									}
									BgL_testz00_3288 =
										(
										(obj_t) (BgL_arg3651z00_1096) ==
										BGl_za2czd2stringzd2lengthza2z00zzreduce_betaz00);
								}
								if (BgL_testz00_3288)
									{	/* Reduce/sbeta.scm 501 */
										obj_t BgL_arg3645z00_1090;

										BgL_typez00_bglt BgL_arg3646z00_1091;

										long BgL_arg3647z00_1092;

										{
											BgL_nodez00_bglt BgL_auxz00_3293;

											BgL_auxz00_3293 = (BgL_nodez00_bglt) (BgL_nodez00_33);
											BgL_arg3645z00_1090 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3293))->
												BgL_locz00);
										}
										{
											BgL_nodez00_bglt BgL_auxz00_3296;

											BgL_auxz00_3296 = (BgL_nodez00_bglt) (BgL_nodez00_33);
											BgL_arg3646z00_1091 =
												(((BgL_nodez00_bglt) CREF(BgL_auxz00_3296))->
												BgL_typez00);
										}
										{	/* Reduce/sbeta.scm 503 */
											obj_t BgL_stringz00_2043;

											{	/* Reduce/sbeta.scm 503 */
												BgL_atomz00_bglt BgL_obj2224z00_2042;

												{	/* Reduce/sbeta.scm 503 */
													obj_t BgL_auxz00_3299;

													{	/* Reduce/sbeta.scm 503 */
														obj_t BgL_pairz00_2041;

														BgL_pairz00_2041 =
															(((BgL_appz00_bglt) CREF(BgL_nodez00_33))->
															BgL_argsz00);
														BgL_auxz00_3299 = CAR(BgL_pairz00_2041);
													}
													BgL_obj2224z00_2042 =
														(BgL_atomz00_bglt) (BgL_auxz00_3299);
												}
												BgL_stringz00_2043 =
													(((BgL_atomz00_bglt) CREF(BgL_obj2224z00_2042))->
													BgL_valuez00);
											}
											BgL_arg3647z00_1092 = STRING_LENGTH(BgL_stringz00_2043);
										}
										return
											(BgL_nodez00_bglt) (BGl_makezd2atomzd2zzast_nodez00
											(BgL_arg3645z00_1090, BgL_arg3646z00_1091,
												BINT(BgL_arg3647z00_1092)));
									}
								else
									{	/* Reduce/sbeta.scm 499 */
										return (BgL_nodez00_bglt) (BgL_nodez00_33);
									}
							}
						else
							{	/* Reduce/sbeta.scm 498 */
								return (BgL_nodez00_bglt) (BgL_nodez00_33);
							}
					}
				else
					{	/* Reduce/sbeta.scm 497 */
						return (BgL_nodez00_bglt) (BgL_nodez00_33);
					}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzreduce_betaz00()
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_nodezd2betaz12zd2default3479zd2envzc0zzreduce_betaz00,
				BGl_nodez00zzast_nodez00, BGl_string3977z00zzreduce_betaz00);
		}
	}



/* node-beta! */
	BgL_nodez00_bglt BGl_nodezd2betaz12zc0zzreduce_betaz00(BgL_nodez00_bglt
		BgL_nodez00_2)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 91 */
			{	/* Reduce/sbeta.scm 91 */
				obj_t BgL_method3480z00_2044;

				{	/* Reduce/sbeta.scm 91 */
					BgL_objectz00_bglt BgL_objz00_2045;

					BgL_objz00_2045 = (BgL_objectz00_bglt) (BgL_nodez00_2);
					{	/* Reduce/sbeta.scm 91 */
						long BgL_objzd2classzd2numz00_2046;

						BgL_objzd2classzd2numz00_2046 =
							BGL_OBJECT_CLASS_NUM(BgL_objz00_2045);
						{	/* Reduce/sbeta.scm 91 */
							obj_t BgL_arg2643z00_2047;

							BgL_arg2643z00_2047 =
								PROCEDURE_REF(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
								(int) (((long) 1)));
							{	/* Reduce/sbeta.scm 91 */
								obj_t BgL_arrayz00_2049;

								int BgL_offsetz00_2050;

								BgL_arrayz00_2049 = BgL_arg2643z00_2047;
								BgL_offsetz00_2050 = (int) (BgL_objzd2classzd2numz00_2046);
								{	/* Reduce/sbeta.scm 91 */
									long BgL_offsetz00_2051;

									BgL_offsetz00_2051 =
										((long) (BgL_offsetz00_2050) - OBJECT_TYPE);
									{	/* Reduce/sbeta.scm 91 */
										long BgL_modz00_2052;

										{	/* Reduce/sbeta.scm 91 */
											int BgL_arg2645z00_2053;

											BgL_arg2645z00_2053 = (int) (((long) 16));
											{	/* Reduce/sbeta.scm 91 */
												long BgL_auxz00_3320;

												BgL_auxz00_3320 = (long) (BgL_arg2645z00_2053);
												BgL_modz00_2052 =
													(BgL_offsetz00_2051 / BgL_auxz00_3320);
										}}
										{	/* Reduce/sbeta.scm 91 */
											long BgL_restz00_2054;

											{	/* Reduce/sbeta.scm 91 */
												int BgL_arg2644z00_2055;

												BgL_arg2644z00_2055 = (int) (((long) 16));
												{	/* Reduce/sbeta.scm 91 */
													long BgL_auxz00_3324;

													BgL_auxz00_3324 = (long) (BgL_arg2644z00_2055);
													BgL_restz00_2054 =
														(BgL_offsetz00_2051 % BgL_auxz00_3324);
											}}
											{	/* Reduce/sbeta.scm 91 */

												BgL_method3480z00_2044 =
													VECTOR_REF(VECTOR_REF(BgL_arrayz00_2049,
														(int) (BgL_modz00_2052)), (int) (BgL_restz00_2054));
				}}}}}}}}
				return
					(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2044)
					(BgL_method3480z00_2044, (obj_t) (BgL_nodez00_2), BEOA));
			}
		}
	}



/* _node-beta! */
	obj_t BGl__nodezd2betaz12zc0zzreduce_betaz00(obj_t BgL_envz00_2802,
		obj_t BgL_nodez00_2803)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 91 */
			return
				(obj_t) (BGl_nodezd2betaz12zc0zzreduce_betaz00(
					(BgL_nodez00_bglt) (BgL_nodez00_2803)));
		}
	}



/* _node-beta!-default3479 */
	obj_t BGl__nodezd2betaz12zd2default3479z12zzreduce_betaz00(obj_t
		BgL_envz00_2804, obj_t BgL_nodez00_2805)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			return (obj_t) ((BgL_nodez00_bglt) (BgL_nodez00_2805));
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzreduce_betaz00()
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc3978z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_sequencez00zzast_nodez00, BGl_proc3979z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_appzd2lyzd2zzast_nodez00, BGl_proc3980z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_funcallz00zzast_nodez00, BGl_proc3981z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_castz00zzast_nodez00,
				BGl_proc3982z00zzreduce_betaz00, BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_setqz00zzast_nodez00,
				BGl_proc3983z00zzreduce_betaz00, BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_conditionalz00zzast_nodez00, BGl_proc3984z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_selectz00zzast_nodez00, BGl_proc3985z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_letzd2funzd2zzast_nodez00, BGl_proc3986z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_setzd2exzd2itz00zzast_nodez00, BGl_proc3987z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_jumpzd2exzd2itz00zzast_nodez00, BGl_proc3988z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_makezd2boxzd2zzast_nodez00, BGl_proc3989z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc3990z00zzreduce_betaz00,
				BGl_string3977z00zzreduce_betaz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00, BGl_appz00zzast_nodez00,
				BGl_proc3991z00zzreduce_betaz00, BGl_string3977z00zzreduce_betaz00);
		}
	}



/* node-beta!-app3510 */
	obj_t BGl_nodezd2betaz12zd2app3510z12zzreduce_betaz00(obj_t BgL_envz00_2820,
		obj_t BgL_nodez00_2821)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 430 */
			{
				BgL_appz00_bglt BgL_nodez00_1824;

				BgL_nodez00_1824 = (BgL_appz00_bglt) (BgL_nodez00_2821);
				{	/* Reduce/sbeta.scm 432 */
					obj_t BgL_arg3900z00_1828;

					BgL_arg3900z00_1828 =
						(((BgL_appz00_bglt) CREF(BgL_nodez00_1824))->BgL_argsz00);
					BGl_nodezd2betaza2z12z62zzreduce_betaz00(BgL_arg3900z00_1828);
				}
				if (CBOOL(BGl_predicatezf3zf3zzreduce_betaz00(BgL_nodez00_1824)))
					{	/* Reduce/sbeta.scm 433 */
						return
							BGl_nodezd2betazd2predicatez12z12zzreduce_betaz00
							(BgL_nodez00_1824);
					}
				else
					{	/* Reduce/sbeta.scm 433 */
						return
							(obj_t) (BGl_nodezd2betazd2earlyzd2appz12zc0zzreduce_betaz00
							(BgL_nodez00_1824));
					}
			}
		}
	}



/* node-beta!-box-set!3508 */
	obj_t BGl_nodezd2betaz12zd2boxzd2setz123508zd2zzreduce_betaz00(obj_t
		BgL_envz00_2822, obj_t BgL_nodez00_2823)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 422 */
			{
				BgL_boxzd2setz12zc0_bglt BgL_nodez00_1816;

				{	/* Reduce/sbeta.scm 423 */
					BgL_boxzd2setz12zc0_bglt BgL_auxz00_3363;

					BgL_nodez00_1816 = (BgL_boxzd2setz12zc0_bglt) (BgL_nodez00_2823);
					{	/* Reduce/sbeta.scm 424 */
						BgL_nodez00_bglt BgL_arg3897z00_1820;

						{	/* Reduce/sbeta.scm 424 */
							BgL_nodez00_bglt BgL_arg3898z00_1821;

							BgL_arg3898z00_1821 =
								(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1816))->
								BgL_valuez00);
							{	/* Reduce/sbeta.scm 424 */
								BgL_nodez00_bglt BgL_res3972z00_2796;

								{	/* Reduce/sbeta.scm 424 */
									obj_t BgL_method3480z00_2771;

									{	/* Reduce/sbeta.scm 424 */
										BgL_objectz00_bglt BgL_objz00_2772;

										BgL_objz00_2772 =
											(BgL_objectz00_bglt) (BgL_arg3898z00_1821);
										{	/* Reduce/sbeta.scm 424 */
											long BgL_objzd2classzd2numz00_2773;

											BgL_objzd2classzd2numz00_2773 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2772);
											{	/* Reduce/sbeta.scm 424 */
												obj_t BgL_arg2643z00_2774;

												BgL_arg2643z00_2774 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 424 */
													obj_t BgL_arrayz00_2776;

													int BgL_offsetz00_2777;

													BgL_arrayz00_2776 = BgL_arg2643z00_2774;
													BgL_offsetz00_2777 =
														(int) (BgL_objzd2classzd2numz00_2773);
													{	/* Reduce/sbeta.scm 424 */
														long BgL_offsetz00_2778;

														BgL_offsetz00_2778 =
															((long) (BgL_offsetz00_2777) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 424 */
															long BgL_modz00_2779;

															{	/* Reduce/sbeta.scm 424 */
																int BgL_arg2645z00_2780;

																BgL_arg2645z00_2780 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 424 */
																	long BgL_auxz00_3373;

																	BgL_auxz00_3373 =
																		(long) (BgL_arg2645z00_2780);
																	BgL_modz00_2779 =
																		(BgL_offsetz00_2778 / BgL_auxz00_3373);
															}}
															{	/* Reduce/sbeta.scm 424 */
																long BgL_restz00_2781;

																{	/* Reduce/sbeta.scm 424 */
																	int BgL_arg2644z00_2782;

																	BgL_arg2644z00_2782 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 424 */
																		long BgL_auxz00_3377;

																		BgL_auxz00_3377 =
																			(long) (BgL_arg2644z00_2782);
																		BgL_restz00_2781 =
																			(BgL_offsetz00_2778 % BgL_auxz00_3377);
																}}
																{	/* Reduce/sbeta.scm 424 */

																	BgL_method3480z00_2771 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2776,
																			(int) (BgL_modz00_2779)),
																		(int) (BgL_restz00_2781));
									}}}}}}}}
									BgL_res3972z00_2796 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2771)
										(BgL_method3480z00_2771, (obj_t) (BgL_arg3898z00_1821),
											BEOA));
								}
								BgL_arg3897z00_1820 = BgL_res3972z00_2796;
						}}
						((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_nodez00_1816))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3897z00_1820), BUNSPEC);
					}
					BgL_auxz00_3363 = BgL_nodez00_1816;
					return (obj_t) (BgL_auxz00_3363);
				}
			}
		}
	}



/* node-beta!-make-box3506 */
	obj_t BGl_nodezd2betaz12zd2makezd2box3506zc0zzreduce_betaz00(obj_t
		BgL_envz00_2824, obj_t BgL_nodez00_2825)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 414 */
			{
				BgL_makezd2boxzd2_bglt BgL_nodez00_1808;

				{	/* Reduce/sbeta.scm 415 */
					BgL_makezd2boxzd2_bglt BgL_auxz00_3391;

					BgL_nodez00_1808 = (BgL_makezd2boxzd2_bglt) (BgL_nodez00_2825);
					{	/* Reduce/sbeta.scm 416 */
						BgL_nodez00_bglt BgL_arg3894z00_1812;

						{	/* Reduce/sbeta.scm 416 */
							BgL_nodez00_bglt BgL_arg3895z00_1813;

							BgL_arg3895z00_1813 =
								(((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1808))->
								BgL_valuez00);
							{	/* Reduce/sbeta.scm 416 */
								BgL_nodez00_bglt BgL_res3969z00_2766;

								{	/* Reduce/sbeta.scm 416 */
									obj_t BgL_method3480z00_2741;

									{	/* Reduce/sbeta.scm 416 */
										BgL_objectz00_bglt BgL_objz00_2742;

										BgL_objz00_2742 =
											(BgL_objectz00_bglt) (BgL_arg3895z00_1813);
										{	/* Reduce/sbeta.scm 416 */
											long BgL_objzd2classzd2numz00_2743;

											BgL_objzd2classzd2numz00_2743 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2742);
											{	/* Reduce/sbeta.scm 416 */
												obj_t BgL_arg2643z00_2744;

												BgL_arg2643z00_2744 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 416 */
													obj_t BgL_arrayz00_2746;

													int BgL_offsetz00_2747;

													BgL_arrayz00_2746 = BgL_arg2643z00_2744;
													BgL_offsetz00_2747 =
														(int) (BgL_objzd2classzd2numz00_2743);
													{	/* Reduce/sbeta.scm 416 */
														long BgL_offsetz00_2748;

														BgL_offsetz00_2748 =
															((long) (BgL_offsetz00_2747) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 416 */
															long BgL_modz00_2749;

															{	/* Reduce/sbeta.scm 416 */
																int BgL_arg2645z00_2750;

																BgL_arg2645z00_2750 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 416 */
																	long BgL_auxz00_3401;

																	BgL_auxz00_3401 =
																		(long) (BgL_arg2645z00_2750);
																	BgL_modz00_2749 =
																		(BgL_offsetz00_2748 / BgL_auxz00_3401);
															}}
															{	/* Reduce/sbeta.scm 416 */
																long BgL_restz00_2751;

																{	/* Reduce/sbeta.scm 416 */
																	int BgL_arg2644z00_2752;

																	BgL_arg2644z00_2752 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 416 */
																		long BgL_auxz00_3405;

																		BgL_auxz00_3405 =
																			(long) (BgL_arg2644z00_2752);
																		BgL_restz00_2751 =
																			(BgL_offsetz00_2748 % BgL_auxz00_3405);
																}}
																{	/* Reduce/sbeta.scm 416 */

																	BgL_method3480z00_2741 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2746,
																			(int) (BgL_modz00_2749)),
																		(int) (BgL_restz00_2751));
									}}}}}}}}
									BgL_res3969z00_2766 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2741)
										(BgL_method3480z00_2741, (obj_t) (BgL_arg3895z00_1813),
											BEOA));
								}
								BgL_arg3894z00_1812 = BgL_res3969z00_2766;
						}}
						((((BgL_makezd2boxzd2_bglt) CREF(BgL_nodez00_1808))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3894z00_1812), BUNSPEC);
					}
					BgL_auxz00_3391 = BgL_nodez00_1808;
					return (obj_t) (BgL_auxz00_3391);
				}
			}
		}
	}



/* node-beta!-jump-ex-i3503 */
	obj_t BGl_nodezd2betaz12zd2jumpzd2exzd2i3503z12zzreduce_betaz00(obj_t
		BgL_envz00_2826, obj_t BgL_nodez00_2827)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 405 */
			{
				BgL_jumpzd2exzd2itz00_bglt BgL_nodez00_1798;

				{	/* Reduce/sbeta.scm 406 */
					BgL_jumpzd2exzd2itz00_bglt BgL_auxz00_3419;

					BgL_nodez00_1798 = (BgL_jumpzd2exzd2itz00_bglt) (BgL_nodez00_2827);
					{	/* Reduce/sbeta.scm 407 */
						BgL_nodez00_bglt BgL_arg3889z00_1802;

						{	/* Reduce/sbeta.scm 407 */
							BgL_nodez00_bglt BgL_arg3890z00_1803;

							BgL_arg3890z00_1803 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1798))->
								BgL_exitz00);
							{	/* Reduce/sbeta.scm 407 */
								BgL_nodez00_bglt BgL_res3963z00_2706;

								{	/* Reduce/sbeta.scm 407 */
									obj_t BgL_method3480z00_2681;

									{	/* Reduce/sbeta.scm 407 */
										BgL_objectz00_bglt BgL_objz00_2682;

										BgL_objz00_2682 =
											(BgL_objectz00_bglt) (BgL_arg3890z00_1803);
										{	/* Reduce/sbeta.scm 407 */
											long BgL_objzd2classzd2numz00_2683;

											BgL_objzd2classzd2numz00_2683 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2682);
											{	/* Reduce/sbeta.scm 407 */
												obj_t BgL_arg2643z00_2684;

												BgL_arg2643z00_2684 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 407 */
													obj_t BgL_arrayz00_2686;

													int BgL_offsetz00_2687;

													BgL_arrayz00_2686 = BgL_arg2643z00_2684;
													BgL_offsetz00_2687 =
														(int) (BgL_objzd2classzd2numz00_2683);
													{	/* Reduce/sbeta.scm 407 */
														long BgL_offsetz00_2688;

														BgL_offsetz00_2688 =
															((long) (BgL_offsetz00_2687) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 407 */
															long BgL_modz00_2689;

															{	/* Reduce/sbeta.scm 407 */
																int BgL_arg2645z00_2690;

																BgL_arg2645z00_2690 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 407 */
																	long BgL_auxz00_3429;

																	BgL_auxz00_3429 =
																		(long) (BgL_arg2645z00_2690);
																	BgL_modz00_2689 =
																		(BgL_offsetz00_2688 / BgL_auxz00_3429);
															}}
															{	/* Reduce/sbeta.scm 407 */
																long BgL_restz00_2691;

																{	/* Reduce/sbeta.scm 407 */
																	int BgL_arg2644z00_2692;

																	BgL_arg2644z00_2692 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 407 */
																		long BgL_auxz00_3433;

																		BgL_auxz00_3433 =
																			(long) (BgL_arg2644z00_2692);
																		BgL_restz00_2691 =
																			(BgL_offsetz00_2688 % BgL_auxz00_3433);
																}}
																{	/* Reduce/sbeta.scm 407 */

																	BgL_method3480z00_2681 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2686,
																			(int) (BgL_modz00_2689)),
																		(int) (BgL_restz00_2691));
									}}}}}}}}
									BgL_res3963z00_2706 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2681)
										(BgL_method3480z00_2681, (obj_t) (BgL_arg3890z00_1803),
											BEOA));
								}
								BgL_arg3889z00_1802 = BgL_res3963z00_2706;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1798))->
								BgL_exitz00) =
							((BgL_nodez00_bglt) BgL_arg3889z00_1802), BUNSPEC);
					}
					{	/* Reduce/sbeta.scm 408 */
						BgL_nodez00_bglt BgL_arg3891z00_1804;

						{	/* Reduce/sbeta.scm 408 */
							BgL_nodez00_bglt BgL_arg3892z00_1805;

							BgL_arg3892z00_1805 =
								(((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1798))->
								BgL_valuez00);
							{	/* Reduce/sbeta.scm 408 */
								BgL_nodez00_bglt BgL_res3966z00_2736;

								{	/* Reduce/sbeta.scm 408 */
									obj_t BgL_method3480z00_2711;

									{	/* Reduce/sbeta.scm 408 */
										BgL_objectz00_bglt BgL_objz00_2712;

										BgL_objz00_2712 =
											(BgL_objectz00_bglt) (BgL_arg3892z00_1805);
										{	/* Reduce/sbeta.scm 408 */
											long BgL_objzd2classzd2numz00_2713;

											BgL_objzd2classzd2numz00_2713 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2712);
											{	/* Reduce/sbeta.scm 408 */
												obj_t BgL_arg2643z00_2714;

												BgL_arg2643z00_2714 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 408 */
													obj_t BgL_arrayz00_2716;

													int BgL_offsetz00_2717;

													BgL_arrayz00_2716 = BgL_arg2643z00_2714;
													BgL_offsetz00_2717 =
														(int) (BgL_objzd2classzd2numz00_2713);
													{	/* Reduce/sbeta.scm 408 */
														long BgL_offsetz00_2718;

														BgL_offsetz00_2718 =
															((long) (BgL_offsetz00_2717) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 408 */
															long BgL_modz00_2719;

															{	/* Reduce/sbeta.scm 408 */
																int BgL_arg2645z00_2720;

																BgL_arg2645z00_2720 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 408 */
																	long BgL_auxz00_3454;

																	BgL_auxz00_3454 =
																		(long) (BgL_arg2645z00_2720);
																	BgL_modz00_2719 =
																		(BgL_offsetz00_2718 / BgL_auxz00_3454);
															}}
															{	/* Reduce/sbeta.scm 408 */
																long BgL_restz00_2721;

																{	/* Reduce/sbeta.scm 408 */
																	int BgL_arg2644z00_2722;

																	BgL_arg2644z00_2722 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 408 */
																		long BgL_auxz00_3458;

																		BgL_auxz00_3458 =
																			(long) (BgL_arg2644z00_2722);
																		BgL_restz00_2721 =
																			(BgL_offsetz00_2718 % BgL_auxz00_3458);
																}}
																{	/* Reduce/sbeta.scm 408 */

																	BgL_method3480z00_2711 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2716,
																			(int) (BgL_modz00_2719)),
																		(int) (BgL_restz00_2721));
									}}}}}}}}
									BgL_res3966z00_2736 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2711)
										(BgL_method3480z00_2711, (obj_t) (BgL_arg3892z00_1805),
											BEOA));
								}
								BgL_arg3891z00_1804 = BgL_res3966z00_2736;
						}}
						((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_nodez00_1798))->
								BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3891z00_1804), BUNSPEC);
					}
					BgL_auxz00_3419 = BgL_nodez00_1798;
					return (obj_t) (BgL_auxz00_3419);
				}
			}
		}
	}



/* node-beta!-set-ex-it3501 */
	obj_t BGl_nodezd2betaz12zd2setzd2exzd2it3501z12zzreduce_betaz00(obj_t
		BgL_envz00_2828, obj_t BgL_nodez00_2829)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 397 */
			{
				BgL_setzd2exzd2itz00_bglt BgL_nodez00_1790;

				{	/* Reduce/sbeta.scm 398 */
					BgL_setzd2exzd2itz00_bglt BgL_auxz00_3472;

					BgL_nodez00_1790 = (BgL_setzd2exzd2itz00_bglt) (BgL_nodez00_2829);
					{	/* Reduce/sbeta.scm 399 */
						BgL_nodez00_bglt BgL_arg3886z00_1794;

						{	/* Reduce/sbeta.scm 399 */
							BgL_nodez00_bglt BgL_arg3887z00_1795;

							BgL_arg3887z00_1795 =
								(((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1790))->
								BgL_bodyz00);
							{	/* Reduce/sbeta.scm 399 */
								BgL_nodez00_bglt BgL_res3960z00_2676;

								{	/* Reduce/sbeta.scm 399 */
									obj_t BgL_method3480z00_2651;

									{	/* Reduce/sbeta.scm 399 */
										BgL_objectz00_bglt BgL_objz00_2652;

										BgL_objz00_2652 =
											(BgL_objectz00_bglt) (BgL_arg3887z00_1795);
										{	/* Reduce/sbeta.scm 399 */
											long BgL_objzd2classzd2numz00_2653;

											BgL_objzd2classzd2numz00_2653 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2652);
											{	/* Reduce/sbeta.scm 399 */
												obj_t BgL_arg2643z00_2654;

												BgL_arg2643z00_2654 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 399 */
													obj_t BgL_arrayz00_2656;

													int BgL_offsetz00_2657;

													BgL_arrayz00_2656 = BgL_arg2643z00_2654;
													BgL_offsetz00_2657 =
														(int) (BgL_objzd2classzd2numz00_2653);
													{	/* Reduce/sbeta.scm 399 */
														long BgL_offsetz00_2658;

														BgL_offsetz00_2658 =
															((long) (BgL_offsetz00_2657) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 399 */
															long BgL_modz00_2659;

															{	/* Reduce/sbeta.scm 399 */
																int BgL_arg2645z00_2660;

																BgL_arg2645z00_2660 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 399 */
																	long BgL_auxz00_3482;

																	BgL_auxz00_3482 =
																		(long) (BgL_arg2645z00_2660);
																	BgL_modz00_2659 =
																		(BgL_offsetz00_2658 / BgL_auxz00_3482);
															}}
															{	/* Reduce/sbeta.scm 399 */
																long BgL_restz00_2661;

																{	/* Reduce/sbeta.scm 399 */
																	int BgL_arg2644z00_2662;

																	BgL_arg2644z00_2662 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 399 */
																		long BgL_auxz00_3486;

																		BgL_auxz00_3486 =
																			(long) (BgL_arg2644z00_2662);
																		BgL_restz00_2661 =
																			(BgL_offsetz00_2658 % BgL_auxz00_3486);
																}}
																{	/* Reduce/sbeta.scm 399 */

																	BgL_method3480z00_2651 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2656,
																			(int) (BgL_modz00_2659)),
																		(int) (BgL_restz00_2661));
									}}}}}}}}
									BgL_res3960z00_2676 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2651)
										(BgL_method3480z00_2651, (obj_t) (BgL_arg3887z00_1795),
											BEOA));
								}
								BgL_arg3886z00_1794 = BgL_res3960z00_2676;
						}}
						((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_nodez00_1790))->
								BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3886z00_1794), BUNSPEC);
					}
					BgL_auxz00_3472 = BgL_nodez00_1790;
					return (obj_t) (BgL_auxz00_3472);
				}
			}
		}
	}



/* node-beta!-let-fun3499 */
	obj_t BGl_nodezd2betaz12zd2letzd2fun3499zc0zzreduce_betaz00(obj_t
		BgL_envz00_2830, obj_t BgL_nodez00_2831)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 383 */
			{
				BgL_letzd2funzd2_bglt BgL_nodez00_1771;

				{	/* Reduce/sbeta.scm 384 */
					BgL_letzd2funzd2_bglt BgL_auxz00_3500;

					BgL_nodez00_1771 = (BgL_letzd2funzd2_bglt) (BgL_nodez00_2831);
					{	/* Reduce/sbeta.scm 385 */
						BgL_nodez00_bglt BgL_arg3877z00_1775;

						{	/* Reduce/sbeta.scm 385 */
							BgL_nodez00_bglt BgL_arg3878z00_1776;

							BgL_arg3878z00_1776 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1771))->BgL_bodyz00);
							{	/* Reduce/sbeta.scm 385 */
								BgL_nodez00_bglt BgL_res3954z00_2611;

								{	/* Reduce/sbeta.scm 385 */
									obj_t BgL_method3480z00_2586;

									{	/* Reduce/sbeta.scm 385 */
										BgL_objectz00_bglt BgL_objz00_2587;

										BgL_objz00_2587 =
											(BgL_objectz00_bglt) (BgL_arg3878z00_1776);
										{	/* Reduce/sbeta.scm 385 */
											long BgL_objzd2classzd2numz00_2588;

											BgL_objzd2classzd2numz00_2588 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2587);
											{	/* Reduce/sbeta.scm 385 */
												obj_t BgL_arg2643z00_2589;

												BgL_arg2643z00_2589 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 385 */
													obj_t BgL_arrayz00_2591;

													int BgL_offsetz00_2592;

													BgL_arrayz00_2591 = BgL_arg2643z00_2589;
													BgL_offsetz00_2592 =
														(int) (BgL_objzd2classzd2numz00_2588);
													{	/* Reduce/sbeta.scm 385 */
														long BgL_offsetz00_2593;

														BgL_offsetz00_2593 =
															((long) (BgL_offsetz00_2592) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 385 */
															long BgL_modz00_2594;

															{	/* Reduce/sbeta.scm 385 */
																int BgL_arg2645z00_2595;

																BgL_arg2645z00_2595 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 385 */
																	long BgL_auxz00_3510;

																	BgL_auxz00_3510 =
																		(long) (BgL_arg2645z00_2595);
																	BgL_modz00_2594 =
																		(BgL_offsetz00_2593 / BgL_auxz00_3510);
															}}
															{	/* Reduce/sbeta.scm 385 */
																long BgL_restz00_2596;

																{	/* Reduce/sbeta.scm 385 */
																	int BgL_arg2644z00_2597;

																	BgL_arg2644z00_2597 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 385 */
																		long BgL_auxz00_3514;

																		BgL_auxz00_3514 =
																			(long) (BgL_arg2644z00_2597);
																		BgL_restz00_2596 =
																			(BgL_offsetz00_2593 % BgL_auxz00_3514);
																}}
																{	/* Reduce/sbeta.scm 385 */

																	BgL_method3480z00_2586 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2591,
																			(int) (BgL_modz00_2594)),
																		(int) (BgL_restz00_2596));
									}}}}}}}}
									BgL_res3954z00_2611 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2586)
										(BgL_method3480z00_2586, (obj_t) (BgL_arg3878z00_1776),
											BEOA));
								}
								BgL_arg3877z00_1775 = BgL_res3954z00_2611;
						}}
						((((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1771))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3877z00_1775), BUNSPEC);
					}
					{
						obj_t BgL_localsz00_1779;

						{	/* Reduce/sbeta.scm 386 */
							obj_t BgL_arg3879z00_1778;

							BgL_arg3879z00_1778 =
								(((BgL_letzd2funzd2_bglt) CREF(BgL_nodez00_1771))->
								BgL_localsz00);
							BgL_localsz00_1779 = BgL_arg3879z00_1778;
						BgL_zc3anonymousza33880ze3z83_1780:
							if (NULLP(BgL_localsz00_1779))
								{	/* Reduce/sbeta.scm 387 */
									BgL_auxz00_3500 = BgL_nodez00_1771;
								}
							else
								{	/* Reduce/sbeta.scm 389 */
									obj_t BgL_localz00_1782;

									BgL_localz00_1782 = CAR(BgL_localsz00_1779);
									{	/* Reduce/sbeta.scm 389 */
										BgL_valuez00_bglt BgL_sfunz00_1783;

										{
											BgL_variablez00_bglt BgL_auxz00_3530;

											BgL_auxz00_3530 =
												(BgL_variablez00_bglt) (BgL_localz00_1782);
											BgL_sfunz00_1783 =
												(((BgL_variablez00_bglt) CREF(BgL_auxz00_3530))->
												BgL_valuez00);
										}
										{	/* Reduce/sbeta.scm 390 */

											{	/* Reduce/sbeta.scm 391 */
												BgL_nodez00_bglt BgL_arg3882z00_1784;

												{	/* Reduce/sbeta.scm 391 */
													obj_t BgL_arg3883z00_1785;

													{
														BgL_sfunz00_bglt BgL_auxz00_3533;

														BgL_auxz00_3533 =
															(BgL_sfunz00_bglt) (BgL_sfunz00_1783);
														BgL_arg3883z00_1785 =
															(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3533))->
															BgL_bodyz00);
													}
													{	/* Reduce/sbeta.scm 391 */
														BgL_nodez00_bglt BgL_res3957z00_2645;

														{	/* Reduce/sbeta.scm 391 */
															BgL_nodez00_bglt BgL_nodez00_2619;

															BgL_nodez00_2619 =
																(BgL_nodez00_bglt) (BgL_arg3883z00_1785);
															{	/* Reduce/sbeta.scm 391 */
																obj_t BgL_method3480z00_2620;

																{	/* Reduce/sbeta.scm 391 */
																	BgL_objectz00_bglt BgL_objz00_2621;

																	BgL_objz00_2621 =
																		(BgL_objectz00_bglt) (BgL_nodez00_2619);
																	{	/* Reduce/sbeta.scm 391 */
																		long BgL_objzd2classzd2numz00_2622;

																		BgL_objzd2classzd2numz00_2622 =
																			BGL_OBJECT_CLASS_NUM(BgL_objz00_2621);
																		{	/* Reduce/sbeta.scm 391 */
																			obj_t BgL_arg2643z00_2623;

																			BgL_arg2643z00_2623 =
																				PROCEDURE_REF
																				(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
																				(int) (((long) 1)));
																			{	/* Reduce/sbeta.scm 391 */
																				obj_t BgL_arrayz00_2625;

																				int BgL_offsetz00_2626;

																				BgL_arrayz00_2625 = BgL_arg2643z00_2623;
																				BgL_offsetz00_2626 =
																					(int) (BgL_objzd2classzd2numz00_2622);
																				{	/* Reduce/sbeta.scm 391 */
																					long BgL_offsetz00_2627;

																					BgL_offsetz00_2627 =
																						(
																						(long) (BgL_offsetz00_2626) -
																						OBJECT_TYPE);
																					{	/* Reduce/sbeta.scm 391 */
																						long BgL_modz00_2628;

																						{	/* Reduce/sbeta.scm 391 */
																							int BgL_arg2645z00_2629;

																							BgL_arg2645z00_2629 =
																								(int) (((long) 16));
																							{	/* Reduce/sbeta.scm 391 */
																								long BgL_auxz00_3545;

																								BgL_auxz00_3545 =
																									(long) (BgL_arg2645z00_2629);
																								BgL_modz00_2628 =
																									(BgL_offsetz00_2627 /
																									BgL_auxz00_3545);
																						}}
																						{	/* Reduce/sbeta.scm 391 */
																							long BgL_restz00_2630;

																							{	/* Reduce/sbeta.scm 391 */
																								int BgL_arg2644z00_2631;

																								BgL_arg2644z00_2631 =
																									(int) (((long) 16));
																								{	/* Reduce/sbeta.scm 391 */
																									long BgL_auxz00_3549;

																									BgL_auxz00_3549 =
																										(long)
																										(BgL_arg2644z00_2631);
																									BgL_restz00_2630 =
																										(BgL_offsetz00_2627 %
																										BgL_auxz00_3549);
																							}}
																							{	/* Reduce/sbeta.scm 391 */

																								BgL_method3480z00_2620 =
																									VECTOR_REF(VECTOR_REF
																									(BgL_arrayz00_2625,
																										(int) (BgL_modz00_2628)),
																									(int) (BgL_restz00_2630));
																}}}}}}}}
																BgL_res3957z00_2645 =
																	(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																	(BgL_method3480z00_2620)
																	(BgL_method3480z00_2620,
																		(obj_t) (BgL_nodez00_2619), BEOA));
														}}
														BgL_arg3882z00_1784 = BgL_res3957z00_2645;
												}}
												{
													obj_t BgL_auxz00_3562;

													BgL_sfunz00_bglt BgL_auxz00_3560;

													BgL_auxz00_3562 = (obj_t) (BgL_arg3882z00_1784);
													BgL_auxz00_3560 =
														(BgL_sfunz00_bglt) (BgL_sfunz00_1783);
													((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3560))->
															BgL_bodyz00) =
														((obj_t) BgL_auxz00_3562), BUNSPEC);
											}}
											{
												obj_t BgL_localsz00_3565;

												BgL_localsz00_3565 = CDR(BgL_localsz00_1779);
												BgL_localsz00_1779 = BgL_localsz00_3565;
												goto BgL_zc3anonymousza33880ze3z83_1780;
											}
										}
									}
								}
						}
					}
					return (obj_t) (BgL_auxz00_3500);
				}
			}
		}
	}



/* node-beta!-select3496 */
	obj_t BGl_nodezd2betaz12zd2select3496z12zzreduce_betaz00(obj_t
		BgL_envz00_2832, obj_t BgL_nodez00_2833)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 370 */
			{
				BgL_selectz00_bglt BgL_nodez00_1753;

				{	/* Reduce/sbeta.scm 371 */
					BgL_selectz00_bglt BgL_auxz00_3569;

					BgL_nodez00_1753 = (BgL_selectz00_bglt) (BgL_nodez00_2833);
					{	/* Reduce/sbeta.scm 372 */
						BgL_nodez00_bglt BgL_arg3868z00_1757;

						{	/* Reduce/sbeta.scm 372 */
							BgL_nodez00_bglt BgL_arg3869z00_1758;

							BgL_arg3869z00_1758 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1753))->BgL_testz00);
							{	/* Reduce/sbeta.scm 372 */
								BgL_nodez00_bglt BgL_res3948z00_2547;

								{	/* Reduce/sbeta.scm 372 */
									obj_t BgL_method3480z00_2522;

									{	/* Reduce/sbeta.scm 372 */
										BgL_objectz00_bglt BgL_objz00_2523;

										BgL_objz00_2523 =
											(BgL_objectz00_bglt) (BgL_arg3869z00_1758);
										{	/* Reduce/sbeta.scm 372 */
											long BgL_objzd2classzd2numz00_2524;

											BgL_objzd2classzd2numz00_2524 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2523);
											{	/* Reduce/sbeta.scm 372 */
												obj_t BgL_arg2643z00_2525;

												BgL_arg2643z00_2525 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 372 */
													obj_t BgL_arrayz00_2527;

													int BgL_offsetz00_2528;

													BgL_arrayz00_2527 = BgL_arg2643z00_2525;
													BgL_offsetz00_2528 =
														(int) (BgL_objzd2classzd2numz00_2524);
													{	/* Reduce/sbeta.scm 372 */
														long BgL_offsetz00_2529;

														BgL_offsetz00_2529 =
															((long) (BgL_offsetz00_2528) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 372 */
															long BgL_modz00_2530;

															{	/* Reduce/sbeta.scm 372 */
																int BgL_arg2645z00_2531;

																BgL_arg2645z00_2531 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 372 */
																	long BgL_auxz00_3579;

																	BgL_auxz00_3579 =
																		(long) (BgL_arg2645z00_2531);
																	BgL_modz00_2530 =
																		(BgL_offsetz00_2529 / BgL_auxz00_3579);
															}}
															{	/* Reduce/sbeta.scm 372 */
																long BgL_restz00_2532;

																{	/* Reduce/sbeta.scm 372 */
																	int BgL_arg2644z00_2533;

																	BgL_arg2644z00_2533 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 372 */
																		long BgL_auxz00_3583;

																		BgL_auxz00_3583 =
																			(long) (BgL_arg2644z00_2533);
																		BgL_restz00_2532 =
																			(BgL_offsetz00_2529 % BgL_auxz00_3583);
																}}
																{	/* Reduce/sbeta.scm 372 */

																	BgL_method3480z00_2522 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2527,
																			(int) (BgL_modz00_2530)),
																		(int) (BgL_restz00_2532));
									}}}}}}}}
									BgL_res3948z00_2547 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2522)
										(BgL_method3480z00_2522, (obj_t) (BgL_arg3869z00_1758),
											BEOA));
								}
								BgL_arg3868z00_1757 = BgL_res3948z00_2547;
						}}
						((((BgL_selectz00_bglt) CREF(BgL_nodez00_1753))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3868z00_1757), BUNSPEC);
					}
					{
						obj_t BgL_clausesz00_1761;

						{	/* Reduce/sbeta.scm 373 */
							obj_t BgL_arg3870z00_1760;

							BgL_arg3870z00_1760 =
								(((BgL_selectz00_bglt) CREF(BgL_nodez00_1753))->BgL_clausesz00);
							BgL_clausesz00_1761 = BgL_arg3870z00_1760;
						BgL_zc3anonymousza33871ze3z83_1762:
							if (NULLP(BgL_clausesz00_1761))
								{	/* Reduce/sbeta.scm 374 */
									BgL_auxz00_3569 = BgL_nodez00_1753;
								}
							else
								{	/* Reduce/sbeta.scm 376 */
									obj_t BgL_clausez00_1764;

									BgL_clausez00_1764 = CAR(BgL_clausesz00_1761);
									{	/* Reduce/sbeta.scm 377 */
										BgL_nodez00_bglt BgL_arg3873z00_1765;

										{	/* Reduce/sbeta.scm 377 */
											obj_t BgL_arg3874z00_1766;

											BgL_arg3874z00_1766 = CDR(BgL_clausez00_1764);
											{	/* Reduce/sbeta.scm 377 */
												BgL_nodez00_bglt BgL_res3951z00_2580;

												{	/* Reduce/sbeta.scm 377 */
													BgL_nodez00_bglt BgL_nodez00_2554;

													BgL_nodez00_2554 =
														(BgL_nodez00_bglt) (BgL_arg3874z00_1766);
													{	/* Reduce/sbeta.scm 377 */
														obj_t BgL_method3480z00_2555;

														{	/* Reduce/sbeta.scm 377 */
															BgL_objectz00_bglt BgL_objz00_2556;

															BgL_objz00_2556 =
																(BgL_objectz00_bglt) (BgL_nodez00_2554);
															{	/* Reduce/sbeta.scm 377 */
																long BgL_objzd2classzd2numz00_2557;

																BgL_objzd2classzd2numz00_2557 =
																	BGL_OBJECT_CLASS_NUM(BgL_objz00_2556);
																{	/* Reduce/sbeta.scm 377 */
																	obj_t BgL_arg2643z00_2558;

																	BgL_arg2643z00_2558 =
																		PROCEDURE_REF
																		(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
																		(int) (((long) 1)));
																	{	/* Reduce/sbeta.scm 377 */
																		obj_t BgL_arrayz00_2560;

																		int BgL_offsetz00_2561;

																		BgL_arrayz00_2560 = BgL_arg2643z00_2558;
																		BgL_offsetz00_2561 =
																			(int) (BgL_objzd2classzd2numz00_2557);
																		{	/* Reduce/sbeta.scm 377 */
																			long BgL_offsetz00_2562;

																			BgL_offsetz00_2562 =
																				(
																				(long) (BgL_offsetz00_2561) -
																				OBJECT_TYPE);
																			{	/* Reduce/sbeta.scm 377 */
																				long BgL_modz00_2563;

																				{	/* Reduce/sbeta.scm 377 */
																					int BgL_arg2645z00_2564;

																					BgL_arg2645z00_2564 =
																						(int) (((long) 16));
																					{	/* Reduce/sbeta.scm 377 */
																						long BgL_auxz00_3609;

																						BgL_auxz00_3609 =
																							(long) (BgL_arg2645z00_2564);
																						BgL_modz00_2563 =
																							(BgL_offsetz00_2562 /
																							BgL_auxz00_3609);
																				}}
																				{	/* Reduce/sbeta.scm 377 */
																					long BgL_restz00_2565;

																					{	/* Reduce/sbeta.scm 377 */
																						int BgL_arg2644z00_2566;

																						BgL_arg2644z00_2566 =
																							(int) (((long) 16));
																						{	/* Reduce/sbeta.scm 377 */
																							long BgL_auxz00_3613;

																							BgL_auxz00_3613 =
																								(long) (BgL_arg2644z00_2566);
																							BgL_restz00_2565 =
																								(BgL_offsetz00_2562 %
																								BgL_auxz00_3613);
																					}}
																					{	/* Reduce/sbeta.scm 377 */

																						BgL_method3480z00_2555 =
																							VECTOR_REF(VECTOR_REF
																							(BgL_arrayz00_2560,
																								(int) (BgL_modz00_2563)),
																							(int) (BgL_restz00_2565));
														}}}}}}}}
														BgL_res3951z00_2580 =
															(BgL_nodez00_bglt) (PROCEDURE_ENTRY
															(BgL_method3480z00_2555) (BgL_method3480z00_2555,
																(obj_t) (BgL_nodez00_2554), BEOA));
												}}
												BgL_arg3873z00_1765 = BgL_res3951z00_2580;
										}}
										{	/* Reduce/sbeta.scm 377 */
											obj_t BgL_auxz00_3624;

											BgL_auxz00_3624 = (obj_t) (BgL_arg3873z00_1765);
											SET_CDR(BgL_clausez00_1764, BgL_auxz00_3624);
									}}
									{
										obj_t BgL_clausesz00_3627;

										BgL_clausesz00_3627 = CDR(BgL_clausesz00_1761);
										BgL_clausesz00_1761 = BgL_clausesz00_3627;
										goto BgL_zc3anonymousza33871ze3z83_1762;
									}
								}
						}
					}
					return (obj_t) (BgL_auxz00_3569);
				}
			}
		}
	}



/* node-beta!-condition3494 */
	obj_t BGl_nodezd2betaz12zd2condition3494z12zzreduce_betaz00(obj_t
		BgL_envz00_2834, obj_t BgL_nodez00_2835)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 360 */
			{
				BgL_conditionalz00_bglt BgL_nodez00_1741;

				{	/* Reduce/sbeta.scm 361 */
					BgL_conditionalz00_bglt BgL_auxz00_3631;

					BgL_nodez00_1741 = (BgL_conditionalz00_bglt) (BgL_nodez00_2835);
					{	/* Reduce/sbeta.scm 362 */
						BgL_nodez00_bglt BgL_arg3861z00_1745;

						{	/* Reduce/sbeta.scm 362 */
							BgL_nodez00_bglt BgL_arg3862z00_1746;

							BgL_arg3862z00_1746 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1741))->
								BgL_testz00);
							{	/* Reduce/sbeta.scm 362 */
								BgL_nodez00_bglt BgL_res3939z00_2457;

								{	/* Reduce/sbeta.scm 362 */
									obj_t BgL_method3480z00_2432;

									{	/* Reduce/sbeta.scm 362 */
										BgL_objectz00_bglt BgL_objz00_2433;

										BgL_objz00_2433 =
											(BgL_objectz00_bglt) (BgL_arg3862z00_1746);
										{	/* Reduce/sbeta.scm 362 */
											long BgL_objzd2classzd2numz00_2434;

											BgL_objzd2classzd2numz00_2434 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2433);
											{	/* Reduce/sbeta.scm 362 */
												obj_t BgL_arg2643z00_2435;

												BgL_arg2643z00_2435 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 362 */
													obj_t BgL_arrayz00_2437;

													int BgL_offsetz00_2438;

													BgL_arrayz00_2437 = BgL_arg2643z00_2435;
													BgL_offsetz00_2438 =
														(int) (BgL_objzd2classzd2numz00_2434);
													{	/* Reduce/sbeta.scm 362 */
														long BgL_offsetz00_2439;

														BgL_offsetz00_2439 =
															((long) (BgL_offsetz00_2438) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 362 */
															long BgL_modz00_2440;

															{	/* Reduce/sbeta.scm 362 */
																int BgL_arg2645z00_2441;

																BgL_arg2645z00_2441 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 362 */
																	long BgL_auxz00_3641;

																	BgL_auxz00_3641 =
																		(long) (BgL_arg2645z00_2441);
																	BgL_modz00_2440 =
																		(BgL_offsetz00_2439 / BgL_auxz00_3641);
															}}
															{	/* Reduce/sbeta.scm 362 */
																long BgL_restz00_2442;

																{	/* Reduce/sbeta.scm 362 */
																	int BgL_arg2644z00_2443;

																	BgL_arg2644z00_2443 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 362 */
																		long BgL_auxz00_3645;

																		BgL_auxz00_3645 =
																			(long) (BgL_arg2644z00_2443);
																		BgL_restz00_2442 =
																			(BgL_offsetz00_2439 % BgL_auxz00_3645);
																}}
																{	/* Reduce/sbeta.scm 362 */

																	BgL_method3480z00_2432 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2437,
																			(int) (BgL_modz00_2440)),
																		(int) (BgL_restz00_2442));
									}}}}}}}}
									BgL_res3939z00_2457 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2432)
										(BgL_method3480z00_2432, (obj_t) (BgL_arg3862z00_1746),
											BEOA));
								}
								BgL_arg3861z00_1745 = BgL_res3939z00_2457;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1741))->BgL_testz00) =
							((BgL_nodez00_bglt) BgL_arg3861z00_1745), BUNSPEC);
					}
					{	/* Reduce/sbeta.scm 363 */
						BgL_nodez00_bglt BgL_arg3863z00_1747;

						{	/* Reduce/sbeta.scm 363 */
							BgL_nodez00_bglt BgL_arg3864z00_1748;

							BgL_arg3864z00_1748 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1741))->
								BgL_truez00);
							{	/* Reduce/sbeta.scm 363 */
								BgL_nodez00_bglt BgL_res3942z00_2487;

								{	/* Reduce/sbeta.scm 363 */
									obj_t BgL_method3480z00_2462;

									{	/* Reduce/sbeta.scm 363 */
										BgL_objectz00_bglt BgL_objz00_2463;

										BgL_objz00_2463 =
											(BgL_objectz00_bglt) (BgL_arg3864z00_1748);
										{	/* Reduce/sbeta.scm 363 */
											long BgL_objzd2classzd2numz00_2464;

											BgL_objzd2classzd2numz00_2464 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2463);
											{	/* Reduce/sbeta.scm 363 */
												obj_t BgL_arg2643z00_2465;

												BgL_arg2643z00_2465 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 363 */
													obj_t BgL_arrayz00_2467;

													int BgL_offsetz00_2468;

													BgL_arrayz00_2467 = BgL_arg2643z00_2465;
													BgL_offsetz00_2468 =
														(int) (BgL_objzd2classzd2numz00_2464);
													{	/* Reduce/sbeta.scm 363 */
														long BgL_offsetz00_2469;

														BgL_offsetz00_2469 =
															((long) (BgL_offsetz00_2468) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 363 */
															long BgL_modz00_2470;

															{	/* Reduce/sbeta.scm 363 */
																int BgL_arg2645z00_2471;

																BgL_arg2645z00_2471 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 363 */
																	long BgL_auxz00_3666;

																	BgL_auxz00_3666 =
																		(long) (BgL_arg2645z00_2471);
																	BgL_modz00_2470 =
																		(BgL_offsetz00_2469 / BgL_auxz00_3666);
															}}
															{	/* Reduce/sbeta.scm 363 */
																long BgL_restz00_2472;

																{	/* Reduce/sbeta.scm 363 */
																	int BgL_arg2644z00_2473;

																	BgL_arg2644z00_2473 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 363 */
																		long BgL_auxz00_3670;

																		BgL_auxz00_3670 =
																			(long) (BgL_arg2644z00_2473);
																		BgL_restz00_2472 =
																			(BgL_offsetz00_2469 % BgL_auxz00_3670);
																}}
																{	/* Reduce/sbeta.scm 363 */

																	BgL_method3480z00_2462 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2467,
																			(int) (BgL_modz00_2470)),
																		(int) (BgL_restz00_2472));
									}}}}}}}}
									BgL_res3942z00_2487 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2462)
										(BgL_method3480z00_2462, (obj_t) (BgL_arg3864z00_1748),
											BEOA));
								}
								BgL_arg3863z00_1747 = BgL_res3942z00_2487;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1741))->BgL_truez00) =
							((BgL_nodez00_bglt) BgL_arg3863z00_1747), BUNSPEC);
					}
					{	/* Reduce/sbeta.scm 364 */
						BgL_nodez00_bglt BgL_arg3865z00_1749;

						{	/* Reduce/sbeta.scm 364 */
							BgL_nodez00_bglt BgL_arg3866z00_1750;

							BgL_arg3866z00_1750 =
								(((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1741))->
								BgL_falsez00);
							{	/* Reduce/sbeta.scm 364 */
								BgL_nodez00_bglt BgL_res3945z00_2517;

								{	/* Reduce/sbeta.scm 364 */
									obj_t BgL_method3480z00_2492;

									{	/* Reduce/sbeta.scm 364 */
										BgL_objectz00_bglt BgL_objz00_2493;

										BgL_objz00_2493 =
											(BgL_objectz00_bglt) (BgL_arg3866z00_1750);
										{	/* Reduce/sbeta.scm 364 */
											long BgL_objzd2classzd2numz00_2494;

											BgL_objzd2classzd2numz00_2494 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2493);
											{	/* Reduce/sbeta.scm 364 */
												obj_t BgL_arg2643z00_2495;

												BgL_arg2643z00_2495 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 364 */
													obj_t BgL_arrayz00_2497;

													int BgL_offsetz00_2498;

													BgL_arrayz00_2497 = BgL_arg2643z00_2495;
													BgL_offsetz00_2498 =
														(int) (BgL_objzd2classzd2numz00_2494);
													{	/* Reduce/sbeta.scm 364 */
														long BgL_offsetz00_2499;

														BgL_offsetz00_2499 =
															((long) (BgL_offsetz00_2498) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 364 */
															long BgL_modz00_2500;

															{	/* Reduce/sbeta.scm 364 */
																int BgL_arg2645z00_2501;

																BgL_arg2645z00_2501 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 364 */
																	long BgL_auxz00_3691;

																	BgL_auxz00_3691 =
																		(long) (BgL_arg2645z00_2501);
																	BgL_modz00_2500 =
																		(BgL_offsetz00_2499 / BgL_auxz00_3691);
															}}
															{	/* Reduce/sbeta.scm 364 */
																long BgL_restz00_2502;

																{	/* Reduce/sbeta.scm 364 */
																	int BgL_arg2644z00_2503;

																	BgL_arg2644z00_2503 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 364 */
																		long BgL_auxz00_3695;

																		BgL_auxz00_3695 =
																			(long) (BgL_arg2644z00_2503);
																		BgL_restz00_2502 =
																			(BgL_offsetz00_2499 % BgL_auxz00_3695);
																}}
																{	/* Reduce/sbeta.scm 364 */

																	BgL_method3480z00_2492 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2497,
																			(int) (BgL_modz00_2500)),
																		(int) (BgL_restz00_2502));
									}}}}}}}}
									BgL_res3945z00_2517 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2492)
										(BgL_method3480z00_2492, (obj_t) (BgL_arg3866z00_1750),
											BEOA));
								}
								BgL_arg3865z00_1749 = BgL_res3945z00_2517;
						}}
						((((BgL_conditionalz00_bglt) CREF(BgL_nodez00_1741))->
								BgL_falsez00) =
							((BgL_nodez00_bglt) BgL_arg3865z00_1749), BUNSPEC);
					}
					BgL_auxz00_3631 = BgL_nodez00_1741;
					return (obj_t) (BgL_auxz00_3631);
				}
			}
		}
	}



/* node-beta!-setq3492 */
	obj_t BGl_nodezd2betaz12zd2setq3492z12zzreduce_betaz00(obj_t BgL_envz00_2836,
		obj_t BgL_nodez00_2837)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 352 */
			{
				BgL_setqz00_bglt BgL_nodez00_1733;

				{	/* Reduce/sbeta.scm 353 */
					BgL_setqz00_bglt BgL_auxz00_3709;

					BgL_nodez00_1733 = (BgL_setqz00_bglt) (BgL_nodez00_2837);
					{	/* Reduce/sbeta.scm 354 */
						BgL_nodez00_bglt BgL_arg3858z00_1737;

						{	/* Reduce/sbeta.scm 354 */
							BgL_nodez00_bglt BgL_arg3859z00_1738;

							BgL_arg3859z00_1738 =
								(((BgL_setqz00_bglt) CREF(BgL_nodez00_1733))->BgL_valuez00);
							{	/* Reduce/sbeta.scm 354 */
								BgL_nodez00_bglt BgL_res3936z00_2427;

								{	/* Reduce/sbeta.scm 354 */
									obj_t BgL_method3480z00_2402;

									{	/* Reduce/sbeta.scm 354 */
										BgL_objectz00_bglt BgL_objz00_2403;

										BgL_objz00_2403 =
											(BgL_objectz00_bglt) (BgL_arg3859z00_1738);
										{	/* Reduce/sbeta.scm 354 */
											long BgL_objzd2classzd2numz00_2404;

											BgL_objzd2classzd2numz00_2404 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2403);
											{	/* Reduce/sbeta.scm 354 */
												obj_t BgL_arg2643z00_2405;

												BgL_arg2643z00_2405 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 354 */
													obj_t BgL_arrayz00_2407;

													int BgL_offsetz00_2408;

													BgL_arrayz00_2407 = BgL_arg2643z00_2405;
													BgL_offsetz00_2408 =
														(int) (BgL_objzd2classzd2numz00_2404);
													{	/* Reduce/sbeta.scm 354 */
														long BgL_offsetz00_2409;

														BgL_offsetz00_2409 =
															((long) (BgL_offsetz00_2408) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 354 */
															long BgL_modz00_2410;

															{	/* Reduce/sbeta.scm 354 */
																int BgL_arg2645z00_2411;

																BgL_arg2645z00_2411 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 354 */
																	long BgL_auxz00_3719;

																	BgL_auxz00_3719 =
																		(long) (BgL_arg2645z00_2411);
																	BgL_modz00_2410 =
																		(BgL_offsetz00_2409 / BgL_auxz00_3719);
															}}
															{	/* Reduce/sbeta.scm 354 */
																long BgL_restz00_2412;

																{	/* Reduce/sbeta.scm 354 */
																	int BgL_arg2644z00_2413;

																	BgL_arg2644z00_2413 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 354 */
																		long BgL_auxz00_3723;

																		BgL_auxz00_3723 =
																			(long) (BgL_arg2644z00_2413);
																		BgL_restz00_2412 =
																			(BgL_offsetz00_2409 % BgL_auxz00_3723);
																}}
																{	/* Reduce/sbeta.scm 354 */

																	BgL_method3480z00_2402 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2407,
																			(int) (BgL_modz00_2410)),
																		(int) (BgL_restz00_2412));
									}}}}}}}}
									BgL_res3936z00_2427 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2402)
										(BgL_method3480z00_2402, (obj_t) (BgL_arg3859z00_1738),
											BEOA));
								}
								BgL_arg3858z00_1737 = BgL_res3936z00_2427;
						}}
						((((BgL_setqz00_bglt) CREF(BgL_nodez00_1733))->BgL_valuez00) =
							((BgL_nodez00_bglt) BgL_arg3858z00_1737), BUNSPEC);
					}
					BgL_auxz00_3709 = BgL_nodez00_1733;
					return (obj_t) (BgL_auxz00_3709);
				}
			}
		}
	}



/* node-beta!-cast3490 */
	obj_t BGl_nodezd2betaz12zd2cast3490z12zzreduce_betaz00(obj_t BgL_envz00_2838,
		obj_t BgL_nodez00_2839)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 344 */
			{
				BgL_castz00_bglt BgL_nodez00_1725;

				{	/* Reduce/sbeta.scm 345 */
					BgL_castz00_bglt BgL_auxz00_3737;

					BgL_nodez00_1725 = (BgL_castz00_bglt) (BgL_nodez00_2839);
					{	/* Reduce/sbeta.scm 346 */
						BgL_nodez00_bglt BgL_arg3855z00_1729;

						{	/* Reduce/sbeta.scm 346 */
							BgL_nodez00_bglt BgL_arg3856z00_1730;

							BgL_arg3856z00_1730 =
								(((BgL_castz00_bglt) CREF(BgL_nodez00_1725))->BgL_argz00);
							{	/* Reduce/sbeta.scm 346 */
								BgL_nodez00_bglt BgL_res3933z00_2397;

								{	/* Reduce/sbeta.scm 346 */
									obj_t BgL_method3480z00_2372;

									{	/* Reduce/sbeta.scm 346 */
										BgL_objectz00_bglt BgL_objz00_2373;

										BgL_objz00_2373 =
											(BgL_objectz00_bglt) (BgL_arg3856z00_1730);
										{	/* Reduce/sbeta.scm 346 */
											long BgL_objzd2classzd2numz00_2374;

											BgL_objzd2classzd2numz00_2374 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2373);
											{	/* Reduce/sbeta.scm 346 */
												obj_t BgL_arg2643z00_2375;

												BgL_arg2643z00_2375 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 346 */
													obj_t BgL_arrayz00_2377;

													int BgL_offsetz00_2378;

													BgL_arrayz00_2377 = BgL_arg2643z00_2375;
													BgL_offsetz00_2378 =
														(int) (BgL_objzd2classzd2numz00_2374);
													{	/* Reduce/sbeta.scm 346 */
														long BgL_offsetz00_2379;

														BgL_offsetz00_2379 =
															((long) (BgL_offsetz00_2378) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 346 */
															long BgL_modz00_2380;

															{	/* Reduce/sbeta.scm 346 */
																int BgL_arg2645z00_2381;

																BgL_arg2645z00_2381 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 346 */
																	long BgL_auxz00_3747;

																	BgL_auxz00_3747 =
																		(long) (BgL_arg2645z00_2381);
																	BgL_modz00_2380 =
																		(BgL_offsetz00_2379 / BgL_auxz00_3747);
															}}
															{	/* Reduce/sbeta.scm 346 */
																long BgL_restz00_2382;

																{	/* Reduce/sbeta.scm 346 */
																	int BgL_arg2644z00_2383;

																	BgL_arg2644z00_2383 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 346 */
																		long BgL_auxz00_3751;

																		BgL_auxz00_3751 =
																			(long) (BgL_arg2644z00_2383);
																		BgL_restz00_2382 =
																			(BgL_offsetz00_2379 % BgL_auxz00_3751);
																}}
																{	/* Reduce/sbeta.scm 346 */

																	BgL_method3480z00_2372 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2377,
																			(int) (BgL_modz00_2380)),
																		(int) (BgL_restz00_2382));
									}}}}}}}}
									BgL_res3933z00_2397 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2372)
										(BgL_method3480z00_2372, (obj_t) (BgL_arg3856z00_1730),
											BEOA));
								}
								BgL_arg3855z00_1729 = BgL_res3933z00_2397;
						}}
						((((BgL_castz00_bglt) CREF(BgL_nodez00_1725))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3855z00_1729), BUNSPEC);
					}
					BgL_auxz00_3737 = BgL_nodez00_1725;
					return (obj_t) (BgL_auxz00_3737);
				}
			}
		}
	}



/* node-beta!-funcall3488 */
	obj_t BGl_nodezd2betaz12zd2funcall3488z12zzreduce_betaz00(obj_t
		BgL_envz00_2840, obj_t BgL_nodez00_2841)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 336 */
			{
				BgL_funcallz00_bglt BgL_nodez00_1718;

				{	/* Reduce/sbeta.scm 337 */
					BgL_funcallz00_bglt BgL_auxz00_3765;

					BgL_nodez00_1718 = (BgL_funcallz00_bglt) (BgL_nodez00_2841);
					{	/* Reduce/sbeta.scm 337 */
						obj_t BgL_arg3853z00_2368;

						BgL_arg3853z00_2368 =
							(((BgL_funcallz00_bglt) CREF(BgL_nodez00_1718))->BgL_argsz00);
						BGl_nodezd2betaza2z12z62zzreduce_betaz00(BgL_arg3853z00_2368);
					}
					BgL_auxz00_3765 = BgL_nodez00_1718;
					return (obj_t) (BgL_auxz00_3765);
				}
			}
		}
	}



/* node-beta!-app-ly3486 */
	obj_t BGl_nodezd2betaz12zd2appzd2ly3486zc0zzreduce_betaz00(obj_t
		BgL_envz00_2842, obj_t BgL_nodez00_2843)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 327 */
			{
				BgL_appzd2lyzd2_bglt BgL_nodez00_1708;

				{	/* Reduce/sbeta.scm 328 */
					BgL_appzd2lyzd2_bglt BgL_auxz00_3770;

					BgL_nodez00_1708 = (BgL_appzd2lyzd2_bglt) (BgL_nodez00_2843);
					{	/* Reduce/sbeta.scm 329 */
						BgL_nodez00_bglt BgL_arg3848z00_1712;

						{	/* Reduce/sbeta.scm 329 */
							BgL_nodez00_bglt BgL_arg3849z00_1713;

							BgL_arg3849z00_1713 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1708))->BgL_funz00);
							{	/* Reduce/sbeta.scm 329 */
								BgL_nodez00_bglt BgL_res3927z00_2334;

								{	/* Reduce/sbeta.scm 329 */
									obj_t BgL_method3480z00_2309;

									{	/* Reduce/sbeta.scm 329 */
										BgL_objectz00_bglt BgL_objz00_2310;

										BgL_objz00_2310 =
											(BgL_objectz00_bglt) (BgL_arg3849z00_1713);
										{	/* Reduce/sbeta.scm 329 */
											long BgL_objzd2classzd2numz00_2311;

											BgL_objzd2classzd2numz00_2311 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2310);
											{	/* Reduce/sbeta.scm 329 */
												obj_t BgL_arg2643z00_2312;

												BgL_arg2643z00_2312 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 329 */
													obj_t BgL_arrayz00_2314;

													int BgL_offsetz00_2315;

													BgL_arrayz00_2314 = BgL_arg2643z00_2312;
													BgL_offsetz00_2315 =
														(int) (BgL_objzd2classzd2numz00_2311);
													{	/* Reduce/sbeta.scm 329 */
														long BgL_offsetz00_2316;

														BgL_offsetz00_2316 =
															((long) (BgL_offsetz00_2315) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 329 */
															long BgL_modz00_2317;

															{	/* Reduce/sbeta.scm 329 */
																int BgL_arg2645z00_2318;

																BgL_arg2645z00_2318 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 329 */
																	long BgL_auxz00_3780;

																	BgL_auxz00_3780 =
																		(long) (BgL_arg2645z00_2318);
																	BgL_modz00_2317 =
																		(BgL_offsetz00_2316 / BgL_auxz00_3780);
															}}
															{	/* Reduce/sbeta.scm 329 */
																long BgL_restz00_2319;

																{	/* Reduce/sbeta.scm 329 */
																	int BgL_arg2644z00_2320;

																	BgL_arg2644z00_2320 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 329 */
																		long BgL_auxz00_3784;

																		BgL_auxz00_3784 =
																			(long) (BgL_arg2644z00_2320);
																		BgL_restz00_2319 =
																			(BgL_offsetz00_2316 % BgL_auxz00_3784);
																}}
																{	/* Reduce/sbeta.scm 329 */

																	BgL_method3480z00_2309 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2314,
																			(int) (BgL_modz00_2317)),
																		(int) (BgL_restz00_2319));
									}}}}}}}}
									BgL_res3927z00_2334 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2309)
										(BgL_method3480z00_2309, (obj_t) (BgL_arg3849z00_1713),
											BEOA));
								}
								BgL_arg3848z00_1712 = BgL_res3927z00_2334;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1708))->BgL_funz00) =
							((BgL_nodez00_bglt) BgL_arg3848z00_1712), BUNSPEC);
					}
					{	/* Reduce/sbeta.scm 330 */
						BgL_nodez00_bglt BgL_arg3850z00_1714;

						{	/* Reduce/sbeta.scm 330 */
							BgL_nodez00_bglt BgL_arg3851z00_1715;

							BgL_arg3851z00_1715 =
								(((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1708))->BgL_argz00);
							{	/* Reduce/sbeta.scm 330 */
								BgL_nodez00_bglt BgL_res3930z00_2364;

								{	/* Reduce/sbeta.scm 330 */
									obj_t BgL_method3480z00_2339;

									{	/* Reduce/sbeta.scm 330 */
										BgL_objectz00_bglt BgL_objz00_2340;

										BgL_objz00_2340 =
											(BgL_objectz00_bglt) (BgL_arg3851z00_1715);
										{	/* Reduce/sbeta.scm 330 */
											long BgL_objzd2classzd2numz00_2341;

											BgL_objzd2classzd2numz00_2341 =
												BGL_OBJECT_CLASS_NUM(BgL_objz00_2340);
											{	/* Reduce/sbeta.scm 330 */
												obj_t BgL_arg2643z00_2342;

												BgL_arg2643z00_2342 =
													PROCEDURE_REF
													(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
													(int) (((long) 1)));
												{	/* Reduce/sbeta.scm 330 */
													obj_t BgL_arrayz00_2344;

													int BgL_offsetz00_2345;

													BgL_arrayz00_2344 = BgL_arg2643z00_2342;
													BgL_offsetz00_2345 =
														(int) (BgL_objzd2classzd2numz00_2341);
													{	/* Reduce/sbeta.scm 330 */
														long BgL_offsetz00_2346;

														BgL_offsetz00_2346 =
															((long) (BgL_offsetz00_2345) - OBJECT_TYPE);
														{	/* Reduce/sbeta.scm 330 */
															long BgL_modz00_2347;

															{	/* Reduce/sbeta.scm 330 */
																int BgL_arg2645z00_2348;

																BgL_arg2645z00_2348 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 330 */
																	long BgL_auxz00_3805;

																	BgL_auxz00_3805 =
																		(long) (BgL_arg2645z00_2348);
																	BgL_modz00_2347 =
																		(BgL_offsetz00_2346 / BgL_auxz00_3805);
															}}
															{	/* Reduce/sbeta.scm 330 */
																long BgL_restz00_2349;

																{	/* Reduce/sbeta.scm 330 */
																	int BgL_arg2644z00_2350;

																	BgL_arg2644z00_2350 = (int) (((long) 16));
																	{	/* Reduce/sbeta.scm 330 */
																		long BgL_auxz00_3809;

																		BgL_auxz00_3809 =
																			(long) (BgL_arg2644z00_2350);
																		BgL_restz00_2349 =
																			(BgL_offsetz00_2346 % BgL_auxz00_3809);
																}}
																{	/* Reduce/sbeta.scm 330 */

																	BgL_method3480z00_2339 =
																		VECTOR_REF(VECTOR_REF(BgL_arrayz00_2344,
																			(int) (BgL_modz00_2347)),
																		(int) (BgL_restz00_2349));
									}}}}}}}}
									BgL_res3930z00_2364 =
										(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2339)
										(BgL_method3480z00_2339, (obj_t) (BgL_arg3851z00_1715),
											BEOA));
								}
								BgL_arg3850z00_1714 = BgL_res3930z00_2364;
						}}
						((((BgL_appzd2lyzd2_bglt) CREF(BgL_nodez00_1708))->BgL_argz00) =
							((BgL_nodez00_bglt) BgL_arg3850z00_1714), BUNSPEC);
					}
					BgL_auxz00_3770 = BgL_nodez00_1708;
					return (obj_t) (BgL_auxz00_3770);
				}
			}
		}
	}



/* node-beta!-sequence3484 */
	obj_t BGl_nodezd2betaz12zd2sequence3484z12zzreduce_betaz00(obj_t
		BgL_envz00_2844, obj_t BgL_nodez00_2845)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 319 */
			{
				BgL_sequencez00_bglt BgL_nodez00_1701;

				{	/* Reduce/sbeta.scm 320 */
					BgL_sequencez00_bglt BgL_auxz00_3823;

					BgL_nodez00_1701 = (BgL_sequencez00_bglt) (BgL_nodez00_2845);
					{	/* Reduce/sbeta.scm 320 */
						obj_t BgL_arg3846z00_2305;

						BgL_arg3846z00_2305 =
							(((BgL_sequencez00_bglt) CREF(BgL_nodez00_1701))->BgL_nodesz00);
						BGl_nodezd2betaza2z12z62zzreduce_betaz00(BgL_arg3846z00_2305);
					}
					BgL_auxz00_3823 = BgL_nodez00_1701;
					return (obj_t) (BgL_auxz00_3823);
				}
			}
		}
	}



/* node-beta!-let-var3482 */
	obj_t BGl_nodezd2betaz12zd2letzd2var3482zc0zzreduce_betaz00(obj_t
		BgL_envz00_2846, obj_t BgL_nodez00_2847)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 224 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1489;

				BgL_nodez00_1489 = (BgL_letzd2varzd2_bglt) (BgL_nodez00_2847);
				{	/* Reduce/sbeta.scm 232 */
					BgL_nodez00_bglt BgL_abodyz00_1494;

					BgL_abodyz00_1494 =
						BGl_findzd2actualzd2expressionz00zzreduce_betaz00(
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->BgL_bodyz00));
					{	/* Reduce/sbeta.scm 234 */
						BgL_nodez00_bglt BgL_arg3713z00_1495;

						{	/* Reduce/sbeta.scm 234 */
							BgL_nodez00_bglt BgL_res3916z00_2096;

							{	/* Reduce/sbeta.scm 234 */
								obj_t BgL_method3480z00_2071;

								{	/* Reduce/sbeta.scm 234 */
									BgL_objectz00_bglt BgL_objz00_2072;

									BgL_objz00_2072 = (BgL_objectz00_bglt) (BgL_abodyz00_1494);
									{	/* Reduce/sbeta.scm 234 */
										long BgL_objzd2classzd2numz00_2073;

										BgL_objzd2classzd2numz00_2073 =
											BGL_OBJECT_CLASS_NUM(BgL_objz00_2072);
										{	/* Reduce/sbeta.scm 234 */
											obj_t BgL_arg2643z00_2074;

											BgL_arg2643z00_2074 =
												PROCEDURE_REF
												(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
												(int) (((long) 1)));
											{	/* Reduce/sbeta.scm 234 */
												obj_t BgL_arrayz00_2076;

												int BgL_offsetz00_2077;

												BgL_arrayz00_2076 = BgL_arg2643z00_2074;
												BgL_offsetz00_2077 =
													(int) (BgL_objzd2classzd2numz00_2073);
												{	/* Reduce/sbeta.scm 234 */
													long BgL_offsetz00_2078;

													BgL_offsetz00_2078 =
														((long) (BgL_offsetz00_2077) - OBJECT_TYPE);
													{	/* Reduce/sbeta.scm 234 */
														long BgL_modz00_2079;

														{	/* Reduce/sbeta.scm 234 */
															int BgL_arg2645z00_2080;

															BgL_arg2645z00_2080 = (int) (((long) 16));
															{	/* Reduce/sbeta.scm 234 */
																long BgL_auxz00_3838;

																BgL_auxz00_3838 = (long) (BgL_arg2645z00_2080);
																BgL_modz00_2079 =
																	(BgL_offsetz00_2078 / BgL_auxz00_3838);
														}}
														{	/* Reduce/sbeta.scm 234 */
															long BgL_restz00_2081;

															{	/* Reduce/sbeta.scm 234 */
																int BgL_arg2644z00_2082;

																BgL_arg2644z00_2082 = (int) (((long) 16));
																{	/* Reduce/sbeta.scm 234 */
																	long BgL_auxz00_3842;

																	BgL_auxz00_3842 =
																		(long) (BgL_arg2644z00_2082);
																	BgL_restz00_2081 =
																		(BgL_offsetz00_2078 % BgL_auxz00_3842);
															}}
															{	/* Reduce/sbeta.scm 234 */

																BgL_method3480z00_2071 =
																	VECTOR_REF(VECTOR_REF(BgL_arrayz00_2076,
																		(int) (BgL_modz00_2079)),
																	(int) (BgL_restz00_2081));
								}}}}}}}}
								BgL_res3916z00_2096 =
									(BgL_nodez00_bglt) (PROCEDURE_ENTRY(BgL_method3480z00_2071)
									(BgL_method3480z00_2071, (obj_t) (BgL_abodyz00_1494), BEOA));
							}
							BgL_arg3713z00_1495 = BgL_res3916z00_2096;
						}
						((((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->BgL_bodyz00) =
							((BgL_nodez00_bglt) BgL_arg3713z00_1495), BUNSPEC);
					}
					{	/* Reduce/sbeta.scm 236 */
						obj_t BgL_g3449z00_1496;

						BgL_g3449z00_1496 =
							(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
							BgL_bindingsz00);
						{
							obj_t BgL_l3447z00_1498;

							BgL_l3447z00_1498 = BgL_g3449z00_1496;
						BgL_zc3anonymousza33714ze3z83_1499:
							if (PAIRP(BgL_l3447z00_1498))
								{	/* Reduce/sbeta.scm 236 */
									{	/* Reduce/sbeta.scm 237 */
										obj_t BgL_bindingz00_1501;

										BgL_bindingz00_1501 = CAR(BgL_l3447z00_1498);
										{	/* Reduce/sbeta.scm 237 */
											BgL_nodez00_bglt BgL_arg3716z00_1502;

											{	/* Reduce/sbeta.scm 237 */
												obj_t BgL_arg3717z00_1503;

												BgL_arg3717z00_1503 = CDR(BgL_bindingz00_1501);
												{	/* Reduce/sbeta.scm 237 */
													BgL_nodez00_bglt BgL_res3919z00_2129;

													{	/* Reduce/sbeta.scm 237 */
														BgL_nodez00_bglt BgL_nodez00_2103;

														BgL_nodez00_2103 =
															(BgL_nodez00_bglt) (BgL_arg3717z00_1503);
														{	/* Reduce/sbeta.scm 237 */
															obj_t BgL_method3480z00_2104;

															{	/* Reduce/sbeta.scm 237 */
																BgL_objectz00_bglt BgL_objz00_2105;

																BgL_objz00_2105 =
																	(BgL_objectz00_bglt) (BgL_nodez00_2103);
																{	/* Reduce/sbeta.scm 237 */
																	long BgL_objzd2classzd2numz00_2106;

																	BgL_objzd2classzd2numz00_2106 =
																		BGL_OBJECT_CLASS_NUM(BgL_objz00_2105);
																	{	/* Reduce/sbeta.scm 237 */
																		obj_t BgL_arg2643z00_2107;

																		BgL_arg2643z00_2107 =
																			PROCEDURE_REF
																			(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
																			(int) (((long) 1)));
																		{	/* Reduce/sbeta.scm 237 */
																			obj_t BgL_arrayz00_2109;

																			int BgL_offsetz00_2110;

																			BgL_arrayz00_2109 = BgL_arg2643z00_2107;
																			BgL_offsetz00_2110 =
																				(int) (BgL_objzd2classzd2numz00_2106);
																			{	/* Reduce/sbeta.scm 237 */
																				long BgL_offsetz00_2111;

																				BgL_offsetz00_2111 =
																					(
																					(long) (BgL_offsetz00_2110) -
																					OBJECT_TYPE);
																				{	/* Reduce/sbeta.scm 237 */
																					long BgL_modz00_2112;

																					{	/* Reduce/sbeta.scm 237 */
																						int BgL_arg2645z00_2113;

																						BgL_arg2645z00_2113 =
																							(int) (((long) 16));
																						{	/* Reduce/sbeta.scm 237 */
																							long BgL_auxz00_3868;

																							BgL_auxz00_3868 =
																								(long) (BgL_arg2645z00_2113);
																							BgL_modz00_2112 =
																								(BgL_offsetz00_2111 /
																								BgL_auxz00_3868);
																					}}
																					{	/* Reduce/sbeta.scm 237 */
																						long BgL_restz00_2114;

																						{	/* Reduce/sbeta.scm 237 */
																							int BgL_arg2644z00_2115;

																							BgL_arg2644z00_2115 =
																								(int) (((long) 16));
																							{	/* Reduce/sbeta.scm 237 */
																								long BgL_auxz00_3872;

																								BgL_auxz00_3872 =
																									(long) (BgL_arg2644z00_2115);
																								BgL_restz00_2114 =
																									(BgL_offsetz00_2111 %
																									BgL_auxz00_3872);
																						}}
																						{	/* Reduce/sbeta.scm 237 */

																							BgL_method3480z00_2104 =
																								VECTOR_REF(VECTOR_REF
																								(BgL_arrayz00_2109,
																									(int) (BgL_modz00_2112)),
																								(int) (BgL_restz00_2114));
															}}}}}}}}
															BgL_res3919z00_2129 =
																(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																(BgL_method3480z00_2104)
																(BgL_method3480z00_2104,
																	(obj_t) (BgL_nodez00_2103), BEOA));
													}}
													BgL_arg3716z00_1502 = BgL_res3919z00_2129;
											}}
											{	/* Reduce/sbeta.scm 237 */
												obj_t BgL_auxz00_3883;

												BgL_auxz00_3883 = (obj_t) (BgL_arg3716z00_1502);
												SET_CDR(BgL_bindingz00_1501, BgL_auxz00_3883);
									}}}
									{
										obj_t BgL_l3447z00_3886;

										BgL_l3447z00_3886 = CDR(BgL_l3447z00_1498);
										BgL_l3447z00_1498 = BgL_l3447z00_3886;
										goto BgL_zc3anonymousza33714ze3z83_1499;
									}
								}
							else
								{	/* Reduce/sbeta.scm 236 */
									((bool_t) 1);
								}
						}
					}
					if (
						(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
							BgL_removablezf3zf3))
						{	/* Reduce/sbeta.scm 241 */
							if (NULLP(
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
										BgL_bindingsz00)))
								{	/* Reduce/sbeta.scm 243 */
									return (obj_t) (BgL_abodyz00_1494);
								}
							else
								{	/* Reduce/sbeta.scm 245 */
									bool_t BgL_testz00_3894;

									{	/* Reduce/sbeta.scm 245 */
										bool_t BgL_testz00_3895;

										{	/* Reduce/sbeta.scm 245 */
											obj_t BgL_g3452z00_1639;

											BgL_g3452z00_1639 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
												BgL_bindingsz00);
											{
												obj_t BgL_l3450z00_1641;

												BgL_l3450z00_1641 = BgL_g3452z00_1639;
											BgL_zc3anonymousza33815ze3z83_1642:
												if (NULLP(BgL_l3450z00_1641))
													{	/* Reduce/sbeta.scm 245 */
														BgL_testz00_3895 = ((bool_t) 0);
													}
												else
													{	/* Reduce/sbeta.scm 245 */
														bool_t BgL_testz00_3899;

														{	/* Reduce/sbeta.scm 249 */
															obj_t BgL_bz00_1646;

															BgL_bz00_1646 = CAR(BgL_l3450z00_1641);
															{	/* Reduce/sbeta.scm 249 */
																bool_t BgL__ortest_3362z00_1647;

																{	/* Reduce/sbeta.scm 249 */
																	long BgL_auxz00_3901;

																	{	/* Reduce/sbeta.scm 249 */
																		BgL_variablez00_bglt BgL_obj1711z00_2140;

																		{	/* Reduce/sbeta.scm 249 */
																			obj_t BgL_pairz00_2139;

																			BgL_pairz00_2139 = BgL_bz00_1646;
																			BgL_obj1711z00_2140 =
																				(BgL_variablez00_bglt) (CAR
																				(BgL_pairz00_2139));
																		}
																		BgL_auxz00_3901 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_obj1711z00_2140))->
																			BgL_occurrencez00);
																	}
																	BgL__ortest_3362z00_1647 =
																		(BgL_auxz00_3901 > ((long) 1));
																}
																if (BgL__ortest_3362z00_1647)
																	{	/* Reduce/sbeta.scm 249 */
																		BgL_testz00_3899 = BgL__ortest_3362z00_1647;
																	}
																else
																	{	/* Reduce/sbeta.scm 250 */
																		bool_t BgL_testz00_3907;

																		{	/* Reduce/sbeta.scm 250 */
																			BgL_localz00_bglt BgL_obj1864z00_2144;

																			{	/* Reduce/sbeta.scm 250 */
																				obj_t BgL_pairz00_2143;

																				BgL_pairz00_2143 = BgL_bz00_1646;
																				BgL_obj1864z00_2144 =
																					(BgL_localz00_bglt) (CAR
																					(BgL_pairz00_2143));
																			}
																			BgL_testz00_3907 =
																				(((BgL_localz00_bglt)
																					CREF(BgL_obj1864z00_2144))->
																				BgL_userzf3zf3);
																		}
																		if (BgL_testz00_3907)
																			{	/* Reduce/sbeta.scm 251 */
																				obj_t BgL__andtest_3364z00_1649;

																				{	/* Reduce/sbeta.scm 251 */
																					obj_t BgL_arg3819z00_1650;

																					obj_t BgL_arg3820z00_1651;

																					BgL_arg3819z00_1650 =
																						CNST_TABLE_REF(((long) 5));
																					{	/* Reduce/sbeta.scm 252 */
																						obj_t BgL_arg3821z00_1652;

																						BgL_arg3821z00_1652 =
																							BGl_thezd2backendzd2zzbackend_backendz00
																							();
																						{
																							BgL_backendz00_bglt
																								BgL_auxz00_3913;
																							BgL_auxz00_3913 =
																								(BgL_backendz00_bglt)
																								(BgL_arg3821z00_1652);
																							BgL_arg3820z00_1651 =
																								(((BgL_backendz00_bglt)
																									CREF(BgL_auxz00_3913))->
																								BgL_debugzd2supportzd2);
																					}}
																					BgL__andtest_3364z00_1649 =
																						BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3819z00_1650,
																						BgL_arg3820z00_1651);
																				}
																				if (CBOOL(BgL__andtest_3364z00_1649))
																					{	/* Reduce/sbeta.scm 251 */
																						BgL_testz00_3899 =
																							(
																							(long)
																							CINT
																							(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																							> ((long) 0));
																					}
																				else
																					{	/* Reduce/sbeta.scm 251 */
																						BgL_testz00_3899 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Reduce/sbeta.scm 250 */
																				BgL_testz00_3899 = ((bool_t) 0);
																			}
																	}
															}
														}
														if (BgL_testz00_3899)
															{	/* Reduce/sbeta.scm 245 */
																BgL_testz00_3895 = ((bool_t) 1);
															}
														else
															{
																obj_t BgL_l3450z00_3921;

																BgL_l3450z00_3921 = CDR(BgL_l3450z00_1641);
																BgL_l3450z00_1641 = BgL_l3450z00_3921;
																goto BgL_zc3anonymousza33815ze3z83_1642;
															}
													}
											}
										}
										if (BgL_testz00_3895)
											{	/* Reduce/sbeta.scm 245 */
												BgL_testz00_3894 = ((bool_t) 1);
											}
										else
											{
												obj_t BgL_l3453z00_1632;

												BgL_l3453z00_1632 =
													(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
													BgL_bindingsz00);
											BgL_zc3anonymousza33810ze3z83_1633:
												if (NULLP(BgL_l3453z00_1632))
													{	/* Reduce/sbeta.scm 255 */
														BgL_testz00_3894 = ((bool_t) 0);
													}
												else
													{	/* Reduce/sbeta.scm 255 */
														if (BGl_dangerouszf3zf3zzreduce_betaz00(CDR(CAR
																	(BgL_l3453z00_1632))))
															{	/* Reduce/sbeta.scm 255 */
																BgL_testz00_3894 = ((bool_t) 1);
															}
														else
															{
																obj_t BgL_l3453z00_3929;

																BgL_l3453z00_3929 = CDR(BgL_l3453z00_1632);
																BgL_l3453z00_1632 = BgL_l3453z00_3929;
																goto BgL_zc3anonymousza33810ze3z83_1633;
															}
													}
											}
									}
									if (BgL_testz00_3894)
										{	/* Reduce/sbeta.scm 245 */
											return (obj_t) (BgL_nodez00_1489);
										}
									else
										{	/* Reduce/sbeta.scm 257 */
											bool_t BgL_testz00_3933;

											{	/* Reduce/sbeta.scm 257 */
												bool_t BgL_testz00_3934;

												{	/* Reduce/sbeta.scm 257 */
													obj_t BgL_auxz00_3935;

													BgL_auxz00_3935 =
														(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1489))->
														BgL_bindingsz00);
													BgL_testz00_3934 = PAIRP(BgL_auxz00_3935);
												}
												if (BgL_testz00_3934)
													{	/* Reduce/sbeta.scm 258 */
														bool_t BgL_testz00_3938;

														{	/* Reduce/sbeta.scm 258 */
															obj_t BgL_auxz00_3939;

															{	/* Reduce/sbeta.scm 258 */
																obj_t BgL_pairz00_2159;

																BgL_pairz00_2159 =
																	(((BgL_letzd2varzd2_bglt)
																		CREF(BgL_nodez00_1489))->BgL_bindingsz00);
																BgL_auxz00_3939 = CDR(BgL_pairz00_2159);
															}
															BgL_testz00_3938 = NULLP(BgL_auxz00_3939);
														}
														if (BgL_testz00_3938)
															{	/* Reduce/sbeta.scm 259 */
																obj_t BgL_arg3803z00_1623;

																{	/* Reduce/sbeta.scm 259 */
																	obj_t BgL_pairz00_2163;

																	{	/* Reduce/sbeta.scm 259 */
																		obj_t BgL_pairz00_2162;

																		BgL_pairz00_2162 =
																			(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodez00_1489))->
																			BgL_bindingsz00);
																		BgL_pairz00_2163 = CAR(BgL_pairz00_2162);
																	}
																	BgL_arg3803z00_1623 = CAR(BgL_pairz00_2163);
																}
																{	/* Reduce/sbeta.scm 259 */
																	bool_t BgL_res3920z00_2170;

																	{	/* Reduce/sbeta.scm 259 */
																		BgL_variablez00_bglt BgL_varz00_2164;

																		BgL_varz00_2164 =
																			(BgL_variablez00_bglt)
																			(BgL_arg3803z00_1623);
																		{	/* Reduce/sbeta.scm 259 */
																			bool_t BgL_testz00_3947;

																			{	/* Reduce/sbeta.scm 259 */
																				obj_t BgL_obj2259z00_2168;

																				BgL_obj2259z00_2168 =
																					(obj_t) (BgL_abodyz00_1494);
																				BgL_testz00_3947 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj2259z00_2168,
																					BGl_varz00zzast_nodez00);
																			}
																			if (BgL_testz00_3947)
																				{	/* Reduce/sbeta.scm 259 */
																					obj_t BgL_auxz00_3950;

																					{	/* Reduce/sbeta.scm 259 */
																						BgL_varz00_bglt BgL_obj2244z00_2169;

																						BgL_obj2244z00_2169 =
																							(BgL_varz00_bglt)
																							(BgL_abodyz00_1494);
																						BgL_auxz00_3950 =
																							(obj_t) ((((BgL_varz00_bglt)
																									CREF(BgL_obj2244z00_2169))->
																								BgL_variablez00));
																					}
																					BgL_res3920z00_2170 =
																						(BgL_auxz00_3950 ==
																						(obj_t) (BgL_varz00_2164));
																				}
																			else
																				{	/* Reduce/sbeta.scm 259 */
																					BgL_res3920z00_2170 = ((bool_t) 0);
																				}
																		}
																	}
																	BgL_testz00_3933 = BgL_res3920z00_2170;
																}
															}
														else
															{	/* Reduce/sbeta.scm 258 */
																BgL_testz00_3933 = ((bool_t) 0);
															}
													}
												else
													{	/* Reduce/sbeta.scm 257 */
														BgL_testz00_3933 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_3933)
												{	/* Reduce/sbeta.scm 257 */
													BGl_za2removedza2z00zzreduce_betaz00 =
														(BGl_za2removedza2z00zzreduce_betaz00 + ((long) 1));
													{	/* Reduce/sbeta.scm 262 */
														obj_t BgL_arg3723z00_1510;

														{	/* Reduce/sbeta.scm 262 */
															obj_t BgL_pairz00_2174;

															BgL_pairz00_2174 =
																(((BgL_letzd2varzd2_bglt)
																	CREF(BgL_nodez00_1489))->BgL_bindingsz00);
															BgL_arg3723z00_1510 = CDR(CAR(BgL_pairz00_2174));
														}
														{	/* Reduce/sbeta.scm 262 */
															BgL_nodez00_bglt BgL_res3923z00_2204;

															{	/* Reduce/sbeta.scm 262 */
																BgL_nodez00_bglt BgL_nodez00_2178;

																BgL_nodez00_2178 =
																	(BgL_nodez00_bglt) (BgL_arg3723z00_1510);
																{	/* Reduce/sbeta.scm 262 */
																	obj_t BgL_method3480z00_2179;

																	{	/* Reduce/sbeta.scm 262 */
																		BgL_objectz00_bglt BgL_objz00_2180;

																		BgL_objz00_2180 =
																			(BgL_objectz00_bglt) (BgL_nodez00_2178);
																		{	/* Reduce/sbeta.scm 262 */
																			long BgL_objzd2classzd2numz00_2181;

																			BgL_objzd2classzd2numz00_2181 =
																				BGL_OBJECT_CLASS_NUM(BgL_objz00_2180);
																			{	/* Reduce/sbeta.scm 262 */
																				obj_t BgL_arg2643z00_2182;

																				BgL_arg2643z00_2182 =
																					PROCEDURE_REF
																					(BGl_nodezd2betaz12zd2envz12zzreduce_betaz00,
																					(int) (((long) 1)));
																				{	/* Reduce/sbeta.scm 262 */
																					obj_t BgL_arrayz00_2184;

																					int BgL_offsetz00_2185;

																					BgL_arrayz00_2184 =
																						BgL_arg2643z00_2182;
																					BgL_offsetz00_2185 =
																						(int)
																						(BgL_objzd2classzd2numz00_2181);
																					{	/* Reduce/sbeta.scm 262 */
																						long BgL_offsetz00_2186;

																						BgL_offsetz00_2186 =
																							(
																							(long) (BgL_offsetz00_2185) -
																							OBJECT_TYPE);
																						{	/* Reduce/sbeta.scm 262 */
																							long BgL_modz00_2187;

																							{	/* Reduce/sbeta.scm 262 */
																								int BgL_arg2645z00_2188;

																								BgL_arg2645z00_2188 =
																									(int) (((long) 16));
																								{	/* Reduce/sbeta.scm 262 */
																									long BgL_auxz00_3969;

																									BgL_auxz00_3969 =
																										(long)
																										(BgL_arg2645z00_2188);
																									BgL_modz00_2187 =
																										(BgL_offsetz00_2186 /
																										BgL_auxz00_3969);
																							}}
																							{	/* Reduce/sbeta.scm 262 */
																								long BgL_restz00_2189;

																								{	/* Reduce/sbeta.scm 262 */
																									int BgL_arg2644z00_2190;

																									BgL_arg2644z00_2190 =
																										(int) (((long) 16));
																									{	/* Reduce/sbeta.scm 262 */
																										long BgL_auxz00_3973;

																										BgL_auxz00_3973 =
																											(long)
																											(BgL_arg2644z00_2190);
																										BgL_restz00_2189 =
																											(BgL_offsetz00_2186 %
																											BgL_auxz00_3973);
																								}}
																								{	/* Reduce/sbeta.scm 262 */

																									BgL_method3480z00_2179 =
																										VECTOR_REF(VECTOR_REF
																										(BgL_arrayz00_2184,
																											(int) (BgL_modz00_2187)),
																										(int) (BgL_restz00_2189));
																	}}}}}}}}
																	BgL_res3923z00_2204 =
																		(BgL_nodez00_bglt) (PROCEDURE_ENTRY
																		(BgL_method3480z00_2179)
																		(BgL_method3480z00_2179,
																			(obj_t) (BgL_nodez00_2178), BEOA));
															}}
															return (obj_t) (BgL_res3923z00_2204);
														}
													}
												}
											else
												{	/* Reduce/sbeta.scm 263 */
													bool_t BgL_testz00_3985;

													{	/* Reduce/sbeta.scm 263 */
														bool_t BgL_testz00_3986;

														{	/* Reduce/sbeta.scm 263 */
															obj_t BgL_obj3041z00_2205;

															BgL_obj3041z00_2205 = (obj_t) (BgL_abodyz00_1494);
															BgL_testz00_3986 =
																BGl_iszd2azf3z21zz__objectz00
																(BgL_obj3041z00_2205,
																BGl_conditionalz00zzast_nodez00);
														}
														if (BgL_testz00_3986)
															{	/* Reduce/sbeta.scm 264 */
																bool_t BgL_testz00_3989;

																{	/* Reduce/sbeta.scm 264 */
																	obj_t BgL_auxz00_3990;

																	{	/* Reduce/sbeta.scm 264 */
																		obj_t BgL_pairz00_2207;

																		BgL_pairz00_2207 =
																			(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodez00_1489))->
																			BgL_bindingsz00);
																		BgL_auxz00_3990 = CDR(BgL_pairz00_2207);
																	}
																	BgL_testz00_3989 = NULLP(BgL_auxz00_3990);
																}
																if (BgL_testz00_3989)
																	{	/* Reduce/sbeta.scm 265 */
																		obj_t BgL_arg3795z00_1615;

																		{	/* Reduce/sbeta.scm 265 */
																			obj_t BgL_pairz00_2211;

																			{	/* Reduce/sbeta.scm 265 */
																				obj_t BgL_pairz00_2210;

																				BgL_pairz00_2210 =
																					(((BgL_letzd2varzd2_bglt)
																						CREF(BgL_nodez00_1489))->
																					BgL_bindingsz00);
																				BgL_pairz00_2211 =
																					CAR(BgL_pairz00_2210);
																			}
																			BgL_arg3795z00_1615 =
																				CAR(BgL_pairz00_2211);
																		}
																		{	/* Reduce/sbeta.scm 265 */
																			bool_t BgL_res3924z00_2219;

																			{	/* Reduce/sbeta.scm 265 */
																				BgL_variablez00_bglt BgL_varz00_2213;

																				BgL_nodez00_bglt BgL_nodez00_2214;

																				BgL_varz00_2213 =
																					(BgL_variablez00_bglt)
																					(BgL_arg3795z00_1615);
																				{
																					BgL_conditionalz00_bglt
																						BgL_auxz00_3998;
																					BgL_auxz00_3998 =
																						(BgL_conditionalz00_bglt)
																						(BgL_abodyz00_1494);
																					BgL_nodez00_2214 =
																						(((BgL_conditionalz00_bglt)
																							CREF(BgL_auxz00_3998))->
																						BgL_testz00);
																				}
																				{	/* Reduce/sbeta.scm 265 */
																					bool_t BgL_testz00_4001;

																					{	/* Reduce/sbeta.scm 265 */
																						obj_t BgL_obj2259z00_2217;

																						BgL_obj2259z00_2217 =
																							(obj_t) (BgL_nodez00_2214);
																						BgL_testz00_4001 =
																							BGl_iszd2azf3z21zz__objectz00
																							(BgL_obj2259z00_2217,
																							BGl_varz00zzast_nodez00);
																					}
																					if (BgL_testz00_4001)
																						{	/* Reduce/sbeta.scm 265 */
																							obj_t BgL_auxz00_4004;

																							{	/* Reduce/sbeta.scm 265 */
																								BgL_varz00_bglt
																									BgL_obj2244z00_2218;
																								BgL_obj2244z00_2218 =
																									(BgL_varz00_bglt)
																									(BgL_nodez00_2214);
																								BgL_auxz00_4004 =
																									(obj_t) ((((BgL_varz00_bglt)
																											CREF
																											(BgL_obj2244z00_2218))->
																										BgL_variablez00));
																							}
																							BgL_res3924z00_2219 =
																								(BgL_auxz00_4004 ==
																								(obj_t) (BgL_varz00_2213));
																						}
																					else
																						{	/* Reduce/sbeta.scm 265 */
																							BgL_res3924z00_2219 =
																								((bool_t) 0);
																						}
																				}
																			}
																			BgL_testz00_3985 = BgL_res3924z00_2219;
																		}
																	}
																else
																	{	/* Reduce/sbeta.scm 264 */
																		BgL_testz00_3985 = ((bool_t) 0);
																	}
															}
														else
															{	/* Reduce/sbeta.scm 263 */
																BgL_testz00_3985 = ((bool_t) 0);
															}
													}
													if (BgL_testz00_3985)
														{	/* Reduce/sbeta.scm 263 */
															BGl_za2removedza2z00zzreduce_betaz00 =
																(BGl_za2removedza2z00zzreduce_betaz00 +
																((long) 1));
															{	/* Reduce/sbeta.scm 269 */
																obj_t BgL_valz00_1513;

																{	/* Reduce/sbeta.scm 269 */
																	obj_t BgL_pairz00_2224;

																	{	/* Reduce/sbeta.scm 269 */
																		obj_t BgL_pairz00_2223;

																		BgL_pairz00_2223 =
																			(((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodez00_1489))->
																			BgL_bindingsz00);
																		BgL_pairz00_2224 = CAR(BgL_pairz00_2223);
																	}
																	BgL_valz00_1513 = CDR(BgL_pairz00_2224);
																}
																{
																	BgL_nodez00_bglt BgL_auxz00_4016;

																	BgL_conditionalz00_bglt BgL_auxz00_4014;

																	BgL_auxz00_4016 =
																		(BgL_nodez00_bglt) (BgL_valz00_1513);
																	BgL_auxz00_4014 =
																		(BgL_conditionalz00_bglt)
																		(BgL_abodyz00_1494);
																	((((BgL_conditionalz00_bglt)
																				CREF(BgL_auxz00_4014))->BgL_testz00) =
																		((BgL_nodez00_bglt) BgL_auxz00_4016),
																		BUNSPEC);
																}
																{	/* Reduce/sbeta.scm 271 */
																	bool_t BgL_testz00_4019;

																	{	/* Reduce/sbeta.scm 271 */
																		BgL_nodezf2effectzf2_bglt
																			BgL_obj2198z00_2227;
																		BgL_obj2198z00_2227 =
																			(BgL_nodezf2effectzf2_bglt) (
																			(BgL_conditionalz00_bglt)
																			(BgL_abodyz00_1494));
																		BgL_testz00_4019 =
																			CBOOL((((BgL_nodezf2effectzf2_bglt)
																					CREF(BgL_obj2198z00_2227))->
																				BgL_sidezd2effectzf3z21));
																	}
																	if (BgL_testz00_4019)
																		{	/* Reduce/sbeta.scm 271 */
																			BFALSE;
																		}
																	else
																		{	/* Reduce/sbeta.scm 272 */
																			bool_t BgL_arg3727z00_1515;

																			BgL_arg3727z00_1515 =
																				BGl_sidezd2effectzf3z21zzeffect_effectz00
																				((BgL_nodez00_bglt) (BgL_valz00_1513));
																			{
																				obj_t BgL_auxz00_4029;

																				BgL_nodezf2effectzf2_bglt
																					BgL_auxz00_4026;
																				BgL_auxz00_4029 =
																					BBOOL(BgL_arg3727z00_1515);
																				BgL_auxz00_4026 =
																					(BgL_nodezf2effectzf2_bglt) (
																					(BgL_conditionalz00_bglt)
																					(BgL_abodyz00_1494));
																				((((BgL_nodezf2effectzf2_bglt)
																							CREF(BgL_auxz00_4026))->
																						BgL_sidezd2effectzf3z21) =
																					((obj_t) BgL_auxz00_4029), BUNSPEC);
																			}
																		}
																}
															}
															return
																(obj_t) (
																(BgL_conditionalz00_bglt) (BgL_abodyz00_1494));
														}
													else
														{	/* Reduce/sbeta.scm 274 */
															bool_t BgL_testz00_4034;

															{	/* Reduce/sbeta.scm 274 */
																bool_t BgL_testz00_4035;

																{	/* Reduce/sbeta.scm 274 */
																	obj_t BgL_obj2366z00_2230;

																	BgL_obj2366z00_2230 =
																		(obj_t) (BgL_abodyz00_1494);
																	BgL_testz00_4035 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2366z00_2230,
																		BGl_appz00zzast_nodez00);
																}
																if (BgL_testz00_4035)
																	{	/* Reduce/sbeta.scm 275 */
																		bool_t BgL_testz00_4038;

																		{
																			obj_t BgL_l3456z00_1606;

																			{
																				BgL_appz00_bglt BgL_auxz00_4046;

																				BgL_auxz00_4046 =
																					(BgL_appz00_bglt) (BgL_abodyz00_1494);
																				BgL_l3456z00_1606 =
																					(((BgL_appz00_bglt)
																						CREF(BgL_auxz00_4046))->
																					BgL_argsz00);
																			}
																		BgL_zc3anonymousza33788ze3z83_1607:
																			if (NULLP(BgL_l3456z00_1606))
																				{	/* Reduce/sbeta.scm 275 */
																					BgL_testz00_4038 = ((bool_t) 1);
																				}
																			else
																				{	/* Reduce/sbeta.scm 275 */
																					if (BGl_simplezf3zf3zzreduce_betaz00
																						(CAR(BgL_l3456z00_1606)))
																						{
																							obj_t BgL_l3456z00_4044;

																							BgL_l3456z00_4044 =
																								CDR(BgL_l3456z00_1606);
																							BgL_l3456z00_1606 =
																								BgL_l3456z00_4044;
																							goto
																								BgL_zc3anonymousza33788ze3z83_1607;
																						}
																					else
																						{	/* Reduce/sbeta.scm 275 */
																							BgL_testz00_4038 = ((bool_t) 0);
																						}
																				}
																		}
																		if (BgL_testz00_4038)
																			{	/* Reduce/sbeta.scm 276 */
																				bool_t BgL_testz00_4049;

																				{	/* Reduce/sbeta.scm 276 */
																					obj_t BgL_g3461z00_1595;

																					{
																						BgL_appz00_bglt BgL_auxz00_4050;

																						BgL_auxz00_4050 =
																							(BgL_appz00_bglt)
																							(BgL_abodyz00_1494);
																						BgL_g3461z00_1595 =
																							(((BgL_appz00_bglt)
																								CREF(BgL_auxz00_4050))->
																							BgL_argsz00);
																					}
																					{
																						obj_t BgL_l3459z00_1597;

																						BgL_l3459z00_1597 =
																							BgL_g3461z00_1595;
																					BgL_zc3anonymousza33783ze3z83_1598:
																						if (NULLP(BgL_l3459z00_1597))
																							{	/* Reduce/sbeta.scm 276 */
																								BgL_testz00_4049 = ((bool_t) 0);
																							}
																						else
																							{	/* Reduce/sbeta.scm 276 */
																								bool_t BgL_testz00_4055;

																								{	/* Reduce/sbeta.scm 276 */
																									obj_t BgL_arg3787z00_1602;

																									BgL_arg3787z00_1602 =
																										CAR(BgL_l3459z00_1597);
																									BgL_testz00_4055 =
																										BGl_sidezd2effectzf3z21zzeffect_effectz00
																										((BgL_nodez00_bglt)
																										(BgL_arg3787z00_1602));
																								}
																								if (BgL_testz00_4055)
																									{	/* Reduce/sbeta.scm 276 */
																										BgL_testz00_4049 =
																											((bool_t) 1);
																									}
																								else
																									{
																										obj_t BgL_l3459z00_4059;

																										BgL_l3459z00_4059 =
																											CDR(BgL_l3459z00_1597);
																										BgL_l3459z00_1597 =
																											BgL_l3459z00_4059;
																										goto
																											BgL_zc3anonymousza33783ze3z83_1598;
																									}
																							}
																					}
																				}
																				if (BgL_testz00_4049)
																					{	/* Reduce/sbeta.scm 276 */
																						BgL_testz00_4034 = ((bool_t) 0);
																					}
																				else
																					{
																						obj_t BgL_l3462z00_1583;

																						BgL_l3462z00_1583 =
																							(((BgL_letzd2varzd2_bglt)
																								CREF(BgL_nodez00_1489))->
																							BgL_bindingsz00);
																					BgL_zc3anonymousza33775ze3z83_1584:
																						if (NULLP(BgL_l3462z00_1583))
																							{	/* Reduce/sbeta.scm 277 */
																								BgL_testz00_4034 = ((bool_t) 1);
																							}
																						else
																							{	/* Reduce/sbeta.scm 277 */
																								bool_t BgL_testz00_4063;

																								{	/* Reduce/sbeta.scm 278 */
																									obj_t BgL_bz00_1588;

																									BgL_bz00_1588 =
																										CAR(BgL_l3462z00_1583);
																									{	/* Reduce/sbeta.scm 278 */
																										bool_t BgL_testz00_4065;

																										{	/* Reduce/sbeta.scm 278 */
																											obj_t BgL_auxz00_4066;

																											{
																												BgL_appz00_bglt
																													BgL_auxz00_4069;
																												BgL_auxz00_4069 =
																													(BgL_appz00_bglt)
																													(BgL_abodyz00_1494);
																												BgL_auxz00_4066 =
																													(((BgL_appz00_bglt)
																														CREF
																														(BgL_auxz00_4069))->
																													BgL_argsz00);
																											}
																											BgL_testz00_4065 =
																												BGl_argumentzf3zf3zzreduce_betaz00
																												((BgL_variablez00_bglt)
																												(CAR(BgL_bz00_1588)),
																												BgL_auxz00_4066);
																										}
																										if (BgL_testz00_4065)
																											{	/* Reduce/sbeta.scm 282 */
																												bool_t BgL_testz00_4073;

																												{	/* Reduce/sbeta.scm 282 */
																													obj_t
																														BgL_arg3780z00_1591;
																													BgL_arg3780z00_1591 =
																														CDR(BgL_bz00_1588);
																													BgL_testz00_4073 =
																														BGl_iszd2azf3z21zz__objectz00
																														(BgL_arg3780z00_1591,
																														BGl_kwotez00zzast_nodez00);
																												}
																												if (BgL_testz00_4073)
																													{	/* Reduce/sbeta.scm 282 */
																														BgL_testz00_4063 =
																															((bool_t) 0);
																													}
																												else
																													{	/* Reduce/sbeta.scm 282 */
																														BgL_testz00_4063 =
																															((bool_t) 1);
																													}
																											}
																										else
																											{	/* Reduce/sbeta.scm 278 */
																												BgL_testz00_4063 =
																													((bool_t) 0);
																											}
																									}
																								}
																								if (BgL_testz00_4063)
																									{
																										obj_t BgL_l3462z00_4076;

																										BgL_l3462z00_4076 =
																											CDR(BgL_l3462z00_1583);
																										BgL_l3462z00_1583 =
																											BgL_l3462z00_4076;
																										goto
																											BgL_zc3anonymousza33775ze3z83_1584;
																									}
																								else
																									{	/* Reduce/sbeta.scm 277 */
																										BgL_testz00_4034 =
																											((bool_t) 0);
																									}
																							}
																					}
																			}
																		else
																			{	/* Reduce/sbeta.scm 275 */
																				BgL_testz00_4034 = ((bool_t) 0);
																			}
																	}
																else
																	{	/* Reduce/sbeta.scm 274 */
																		BgL_testz00_4034 = ((bool_t) 0);
																	}
															}
															if (BgL_testz00_4034)
																{	/* Reduce/sbeta.scm 274 */
																	{	/* Reduce/sbeta.scm 286 */
																		long BgL_arg3731z00_1519;

																		BgL_arg3731z00_1519 =
																			bgl_list_length(
																			(((BgL_letzd2varzd2_bglt)
																					CREF(BgL_nodez00_1489))->
																				BgL_bindingsz00));
																		BGl_za2removedza2z00zzreduce_betaz00 =
																			(BGl_za2removedza2z00zzreduce_betaz00 +
																			BgL_arg3731z00_1519);
																	}
																	{	/* Reduce/sbeta.scm 287 */
																		BgL_appz00_bglt BgL_instance3366z00_1521;

																		BgL_instance3366z00_1521 =
																			(BgL_appz00_bglt) (BgL_abodyz00_1494);
																		{	/* Reduce/sbeta.scm 288 */
																			obj_t BgL_nargsz00_1522;

																			{	/* Reduce/sbeta.scm 288 */
																				obj_t BgL_arg3740z00_1533;

																				obj_t BgL_arg3741z00_1534;

																				BgL_arg3740z00_1533 =
																					(((BgL_letzd2varzd2_bglt)
																						CREF(BgL_nodez00_1489))->
																					BgL_bindingsz00);
																				BgL_arg3741z00_1534 =
																					(((BgL_appz00_bglt)
																						CREF(BgL_instance3366z00_1521))->
																					BgL_argsz00);
																				BgL_nargsz00_1522 =
																					BGl_makezd2argszd2listz00zzreduce_betaz00
																					(BgL_arg3740z00_1533,
																					BgL_arg3741z00_1534);
																			}
																			((((BgL_appz00_bglt)
																						CREF(BgL_instance3366z00_1521))->
																					BgL_argsz00) =
																				((obj_t) BgL_nargsz00_1522), BUNSPEC);
																			{	/* Reduce/sbeta.scm 290 */
																				bool_t BgL_testz00_4087;

																				{	/* Reduce/sbeta.scm 290 */
																					BgL_nodezf2effectzf2_bglt
																						BgL_obj2198z00_2254;
																					BgL_obj2198z00_2254 =
																						(BgL_nodezf2effectzf2_bglt) (
																						(BgL_appz00_bglt)
																						(BgL_abodyz00_1494));
																					BgL_testz00_4087 =
																						CBOOL((((BgL_nodezf2effectzf2_bglt)
																								CREF(BgL_obj2198z00_2254))->
																							BgL_sidezd2effectzf3z21));
																				}
																				if (BgL_testz00_4087)
																					{	/* Reduce/sbeta.scm 290 */
																						BFALSE;
																					}
																				else
																					{	/* Reduce/sbeta.scm 292 */
																						bool_t BgL_arg3734z00_1524;

																						{
																							obj_t BgL_l3465z00_1526;

																							BgL_l3465z00_1526 =
																								BgL_nargsz00_1522;
																						BgL_zc3anonymousza33735ze3z83_1527:
																							if (NULLP(BgL_l3465z00_1526))
																								{	/* Reduce/sbeta.scm 292 */
																									BgL_arg3734z00_1524 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Reduce/sbeta.scm 292 */
																									bool_t BgL_testz00_4094;

																									{	/* Reduce/sbeta.scm 292 */
																										obj_t BgL_arg3739z00_1531;

																										BgL_arg3739z00_1531 =
																											CAR(BgL_l3465z00_1526);
																										BgL_testz00_4094 =
																											BGl_sidezd2effectzf3z21zzeffect_effectz00
																											((BgL_nodez00_bglt)
																											(BgL_arg3739z00_1531));
																									}
																									if (BgL_testz00_4094)
																										{	/* Reduce/sbeta.scm 292 */
																											BgL_arg3734z00_1524 =
																												((bool_t) 1);
																										}
																									else
																										{
																											obj_t BgL_l3465z00_4098;

																											BgL_l3465z00_4098 =
																												CDR(BgL_l3465z00_1526);
																											BgL_l3465z00_1526 =
																												BgL_l3465z00_4098;
																											goto
																												BgL_zc3anonymousza33735ze3z83_1527;
																										}
																								}
																						}
																						{
																							obj_t BgL_auxz00_4103;

																							BgL_nodezf2effectzf2_bglt
																								BgL_auxz00_4100;
																							BgL_auxz00_4103 =
																								BBOOL(BgL_arg3734z00_1524);
																							BgL_auxz00_4100 =
																								(BgL_nodezf2effectzf2_bglt) (
																								(BgL_appz00_bglt)
																								(BgL_abodyz00_1494));
																							((((BgL_nodezf2effectzf2_bglt)
																										CREF(BgL_auxz00_4100))->
																									BgL_sidezd2effectzf3z21) =
																								((obj_t) BgL_auxz00_4103),
																								BUNSPEC);
																						}
																					}
																			}
																		}
																	}
																	return
																		(obj_t) (
																		(BgL_appz00_bglt) (BgL_abodyz00_1494));
																}
															else
																{	/* Reduce/sbeta.scm 294 */
																	bool_t BgL_testz00_4108;

																	{	/* Reduce/sbeta.scm 294 */
																		bool_t BgL_testz00_4109;

																		{	/* Reduce/sbeta.scm 294 */
																			obj_t BgL_obj2469z00_2260;

																			BgL_obj2469z00_2260 =
																				(obj_t) (BgL_abodyz00_1494);
																			BgL_testz00_4109 =
																				BGl_iszd2azf3z21zz__objectz00
																				(BgL_obj2469z00_2260,
																				BGl_externz00zzast_nodez00);
																		}
																		if (BgL_testz00_4109)
																			{	/* Reduce/sbeta.scm 295 */
																				bool_t BgL_testz00_4112;

																				{
																					obj_t BgL_l3467z00_1571;

																					{
																						BgL_externz00_bglt BgL_auxz00_4120;

																						BgL_auxz00_4120 =
																							(BgL_externz00_bglt)
																							(BgL_abodyz00_1494);
																						BgL_l3467z00_1571 =
																							(((BgL_externz00_bglt)
																								CREF(BgL_auxz00_4120))->
																							BgL_exprza2za2);
																					}
																				BgL_zc3anonymousza33767ze3z83_1572:
																					if (NULLP(BgL_l3467z00_1571))
																						{	/* Reduce/sbeta.scm 295 */
																							BgL_testz00_4112 = ((bool_t) 1);
																						}
																					else
																						{	/* Reduce/sbeta.scm 295 */
																							if (BGl_simplezf3zf3zzreduce_betaz00(CAR(BgL_l3467z00_1571)))
																								{
																									obj_t BgL_l3467z00_4118;

																									BgL_l3467z00_4118 =
																										CDR(BgL_l3467z00_1571);
																									BgL_l3467z00_1571 =
																										BgL_l3467z00_4118;
																									goto
																										BgL_zc3anonymousza33767ze3z83_1572;
																								}
																							else
																								{	/* Reduce/sbeta.scm 295 */
																									BgL_testz00_4112 =
																										((bool_t) 0);
																								}
																						}
																				}
																				if (BgL_testz00_4112)
																					{
																						obj_t BgL_l3470z00_1557;

																						BgL_l3470z00_1557 =
																							(((BgL_letzd2varzd2_bglt)
																								CREF(BgL_nodez00_1489))->
																							BgL_bindingsz00);
																					BgL_zc3anonymousza33759ze3z83_1558:
																						if (NULLP(BgL_l3470z00_1557))
																							{	/* Reduce/sbeta.scm 296 */
																								BgL_testz00_4108 = ((bool_t) 1);
																							}
																						else
																							{	/* Reduce/sbeta.scm 296 */
																								bool_t BgL_testz00_4125;

																								{	/* Reduce/sbeta.scm 297 */
																									obj_t BgL_bz00_1562;

																									BgL_bz00_1562 =
																										CAR(BgL_l3470z00_1557);
																									{	/* Reduce/sbeta.scm 297 */
																										bool_t BgL_testz00_4127;

																										{	/* Reduce/sbeta.scm 297 */
																											obj_t BgL_auxz00_4128;

																											{
																												BgL_externz00_bglt
																													BgL_auxz00_4131;
																												BgL_auxz00_4131 =
																													(BgL_externz00_bglt)
																													(BgL_abodyz00_1494);
																												BgL_auxz00_4128 =
																													(((BgL_externz00_bglt)
																														CREF
																														(BgL_auxz00_4131))->
																													BgL_exprza2za2);
																											}
																											BgL_testz00_4127 =
																												BGl_argumentzf3zf3zzreduce_betaz00
																												((BgL_variablez00_bglt)
																												(CAR(BgL_bz00_1562)),
																												BgL_auxz00_4128);
																										}
																										if (BgL_testz00_4127)
																											{	/* Reduce/sbeta.scm 301 */
																												bool_t BgL_testz00_4135;

																												{	/* Reduce/sbeta.scm 301 */
																													obj_t
																														BgL_arg3764z00_1565;
																													BgL_arg3764z00_1565 =
																														CDR(BgL_bz00_1562);
																													BgL_testz00_4135 =
																														BGl_iszd2azf3z21zz__objectz00
																														(BgL_arg3764z00_1565,
																														BGl_kwotez00zzast_nodez00);
																												}
																												if (BgL_testz00_4135)
																													{	/* Reduce/sbeta.scm 301 */
																														BgL_testz00_4125 =
																															((bool_t) 0);
																													}
																												else
																													{	/* Reduce/sbeta.scm 301 */
																														BgL_testz00_4125 =
																															((bool_t) 1);
																													}
																											}
																										else
																											{	/* Reduce/sbeta.scm 297 */
																												BgL_testz00_4125 =
																													((bool_t) 0);
																											}
																									}
																								}
																								if (BgL_testz00_4125)
																									{
																										obj_t BgL_l3470z00_4138;

																										BgL_l3470z00_4138 =
																											CDR(BgL_l3470z00_1557);
																										BgL_l3470z00_1557 =
																											BgL_l3470z00_4138;
																										goto
																											BgL_zc3anonymousza33759ze3z83_1558;
																									}
																								else
																									{	/* Reduce/sbeta.scm 296 */
																										BgL_testz00_4108 =
																											((bool_t) 0);
																									}
																							}
																					}
																				else
																					{	/* Reduce/sbeta.scm 295 */
																						BgL_testz00_4108 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Reduce/sbeta.scm 294 */
																				BgL_testz00_4108 = ((bool_t) 0);
																			}
																	}
																	if (BgL_testz00_4108)
																		{	/* Reduce/sbeta.scm 294 */
																			{	/* Reduce/sbeta.scm 305 */
																				long BgL_arg3745z00_1536;

																				BgL_arg3745z00_1536 =
																					bgl_list_length(
																					(((BgL_letzd2varzd2_bglt)
																							CREF(BgL_nodez00_1489))->
																						BgL_bindingsz00));
																				BGl_za2removedza2z00zzreduce_betaz00 =
																					(BGl_za2removedza2z00zzreduce_betaz00
																					+ BgL_arg3745z00_1536);
																			}
																			{	/* Reduce/sbeta.scm 307 */
																				obj_t BgL_nexprza2za2_1539;

																				{	/* Reduce/sbeta.scm 307 */
																					obj_t BgL_arg3754z00_1550;

																					obj_t BgL_arg3755z00_1551;

																					BgL_arg3754z00_1550 =
																						(((BgL_letzd2varzd2_bglt)
																							CREF(BgL_nodez00_1489))->
																						BgL_bindingsz00);
																					{	/* Reduce/sbeta.scm 307 */
																						BgL_externz00_bglt
																							BgL_obj2442z00_2278;
																						BgL_obj2442z00_2278 =
																							(BgL_externz00_bglt) (((
																									(BgL_letzd2varzd2_bglt)
																									CREF(BgL_nodez00_1489))->
																								BgL_bodyz00));
																						BgL_arg3755z00_1551 =
																							(((BgL_externz00_bglt)
																								CREF(BgL_obj2442z00_2278))->
																							BgL_exprza2za2);
																					}
																					BgL_nexprza2za2_1539 =
																						BGl_makezd2argszd2listz00zzreduce_betaz00
																						(BgL_arg3754z00_1550,
																						BgL_arg3755z00_1551);
																				}
																				{
																					BgL_externz00_bglt BgL_auxz00_4149;

																					BgL_auxz00_4149 =
																						(BgL_externz00_bglt)
																						(BgL_abodyz00_1494);
																					((((BgL_externz00_bglt)
																								CREF(BgL_auxz00_4149))->
																							BgL_exprza2za2) =
																						((obj_t) BgL_nexprza2za2_1539),
																						BUNSPEC);
																				}
																				{	/* Reduce/sbeta.scm 309 */
																					bool_t BgL_testz00_4152;

																					{	/* Reduce/sbeta.scm 309 */
																						BgL_nodezf2effectzf2_bglt
																							BgL_obj2198z00_2281;
																						BgL_obj2198z00_2281 =
																							(BgL_nodezf2effectzf2_bglt) (
																							(BgL_externz00_bglt)
																							(BgL_abodyz00_1494));
																						BgL_testz00_4152 =
																							CBOOL(((
																									(BgL_nodezf2effectzf2_bglt)
																									CREF(BgL_obj2198z00_2281))->
																								BgL_sidezd2effectzf3z21));
																					}
																					if (BgL_testz00_4152)
																						{	/* Reduce/sbeta.scm 309 */
																							BFALSE;
																						}
																					else
																						{	/* Reduce/sbeta.scm 311 */
																							bool_t BgL_arg3748z00_1541;

																							{
																								obj_t BgL_l3473z00_1543;

																								BgL_l3473z00_1543 =
																									BgL_nexprza2za2_1539;
																							BgL_zc3anonymousza33749ze3z83_1544:
																								if (NULLP
																									(BgL_l3473z00_1543))
																									{	/* Reduce/sbeta.scm 311 */
																										BgL_arg3748z00_1541 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Reduce/sbeta.scm 311 */
																										bool_t BgL_testz00_4159;

																										{	/* Reduce/sbeta.scm 311 */
																											obj_t BgL_arg3753z00_1548;

																											BgL_arg3753z00_1548 =
																												CAR(BgL_l3473z00_1543);
																											BgL_testz00_4159 =
																												BGl_sidezd2effectzf3z21zzeffect_effectz00
																												((BgL_nodez00_bglt)
																												(BgL_arg3753z00_1548));
																										}
																										if (BgL_testz00_4159)
																											{	/* Reduce/sbeta.scm 311 */
																												BgL_arg3748z00_1541 =
																													((bool_t) 1);
																											}
																										else
																											{
																												obj_t BgL_l3473z00_4163;

																												BgL_l3473z00_4163 =
																													CDR
																													(BgL_l3473z00_1543);
																												BgL_l3473z00_1543 =
																													BgL_l3473z00_4163;
																												goto
																													BgL_zc3anonymousza33749ze3z83_1544;
																											}
																									}
																							}
																							{
																								obj_t BgL_auxz00_4168;

																								BgL_nodezf2effectzf2_bglt
																									BgL_auxz00_4165;
																								BgL_auxz00_4168 =
																									BBOOL(BgL_arg3748z00_1541);
																								BgL_auxz00_4165 =
																									(BgL_nodezf2effectzf2_bglt) (
																									(BgL_externz00_bglt)
																									(BgL_abodyz00_1494));
																								((((BgL_nodezf2effectzf2_bglt)
																											CREF(BgL_auxz00_4165))->
																										BgL_sidezd2effectzf3z21) =
																									((obj_t) BgL_auxz00_4168),
																									BUNSPEC);
																							}
																						}
																				}
																			}
																			return
																				(obj_t) (
																				(BgL_externz00_bglt)
																				(BgL_abodyz00_1494));
																		}
																	else
																		{	/* Reduce/sbeta.scm 294 */
																			return (obj_t) (BgL_nodez00_1489);
																		}
																}
														}
												}
										}
								}
						}
					else
						{	/* Reduce/sbeta.scm 241 */
							return (obj_t) (BgL_nodez00_1489);
						}
				}
			}
		}
	}



/* simple? */
	bool_t BGl_simplezf3zf3zzreduce_betaz00(obj_t BgL_ez00_1660)
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 230 */
			{	/* Reduce/sbeta.scm 226 */
				bool_t BgL__ortest_3352z00_1662;

				BgL__ortest_3352z00_1662 =
					BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1660,
					BGl_atomz00zzast_nodez00);
				if (BgL__ortest_3352z00_1662)
					{	/* Reduce/sbeta.scm 226 */
						return BgL__ortest_3352z00_1662;
					}
				else
					{	/* Reduce/sbeta.scm 227 */
						bool_t BgL__ortest_3353z00_1663;

						BgL__ortest_3353z00_1663 =
							BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1660,
							BGl_varz00zzast_nodez00);
						if (BgL__ortest_3353z00_1663)
							{	/* Reduce/sbeta.scm 227 */
								return BgL__ortest_3353z00_1663;
							}
						else
							{	/* Reduce/sbeta.scm 228 */
								bool_t BgL__ortest_3354z00_1664;

								if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1660,
										BGl_vrefz00zzast_nodez00))
									{
										obj_t BgL_l3438z00_1691;

										{
											BgL_externz00_bglt BgL_auxz00_4189;

											BgL_auxz00_4189 =
												(BgL_externz00_bglt) (
												(BgL_vrefz00_bglt) (BgL_ez00_1660));
											BgL_l3438z00_1691 =
												(((BgL_externz00_bglt) CREF(BgL_auxz00_4189))->
												BgL_exprza2za2);
										}
									BgL_zc3anonymousza33840ze3z83_1692:
										if (NULLP(BgL_l3438z00_1691))
											{	/* Reduce/sbeta.scm 228 */
												BgL__ortest_3354z00_1664 = ((bool_t) 1);
											}
										else
											{	/* Reduce/sbeta.scm 228 */
												if (BGl_simplezf3zf3zzreduce_betaz00(CAR
														(BgL_l3438z00_1691)))
													{
														obj_t BgL_l3438z00_4187;

														BgL_l3438z00_4187 = CDR(BgL_l3438z00_1691);
														BgL_l3438z00_1691 = BgL_l3438z00_4187;
														goto BgL_zc3anonymousza33840ze3z83_1692;
													}
												else
													{	/* Reduce/sbeta.scm 228 */
														BgL__ortest_3354z00_1664 = ((bool_t) 0);
													}
											}
									}
								else
									{	/* Reduce/sbeta.scm 228 */
										BgL__ortest_3354z00_1664 = ((bool_t) 0);
									}
								if (BgL__ortest_3354z00_1664)
									{	/* Reduce/sbeta.scm 228 */
										return BgL__ortest_3354z00_1664;
									}
								else
									{	/* Reduce/sbeta.scm 229 */
										bool_t BgL__ortest_3355z00_1665;

										if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1660,
												BGl_appz00zzast_nodez00))
											{	/* Reduce/sbeta.scm 229 */
												bool_t BgL_testz00_4196;

												{
													obj_t BgL_l3441z00_1681;

													{
														BgL_appz00_bglt BgL_auxz00_4204;

														BgL_auxz00_4204 = (BgL_appz00_bglt) (BgL_ez00_1660);
														BgL_l3441z00_1681 =
															(((BgL_appz00_bglt) CREF(BgL_auxz00_4204))->
															BgL_argsz00);
													}
												BgL_zc3anonymousza33835ze3z83_1682:
													if (NULLP(BgL_l3441z00_1681))
														{	/* Reduce/sbeta.scm 229 */
															BgL_testz00_4196 = ((bool_t) 1);
														}
													else
														{	/* Reduce/sbeta.scm 229 */
															if (BGl_simplezf3zf3zzreduce_betaz00(CAR
																	(BgL_l3441z00_1681)))
																{
																	obj_t BgL_l3441z00_4202;

																	BgL_l3441z00_4202 = CDR(BgL_l3441z00_1681);
																	BgL_l3441z00_1681 = BgL_l3441z00_4202;
																	goto BgL_zc3anonymousza33835ze3z83_1682;
																}
															else
																{	/* Reduce/sbeta.scm 229 */
																	BgL_testz00_4196 = ((bool_t) 0);
																}
														}
												}
												if (BgL_testz00_4196)
													{	/* Reduce/sbeta.scm 229 */
														if (BGl_dangerouszf3zf3zzreduce_betaz00
															(BgL_ez00_1660))
															{	/* Reduce/sbeta.scm 229 */
																BgL__ortest_3355z00_1665 = ((bool_t) 0);
															}
														else
															{	/* Reduce/sbeta.scm 229 */
																BgL__ortest_3355z00_1665 = ((bool_t) 1);
															}
													}
												else
													{	/* Reduce/sbeta.scm 229 */
														BgL__ortest_3355z00_1665 = ((bool_t) 0);
													}
											}
										else
											{	/* Reduce/sbeta.scm 229 */
												BgL__ortest_3355z00_1665 = ((bool_t) 0);
											}
										if (BgL__ortest_3355z00_1665)
											{	/* Reduce/sbeta.scm 229 */
												return BgL__ortest_3355z00_1665;
											}
										else
											{	/* Reduce/sbeta.scm 229 */
												if (BGl_iszd2azf3z21zz__objectz00(BgL_ez00_1660,
														BGl_getfieldz00zzast_nodez00))
													{
														obj_t BgL_l3444z00_1669;

														{
															BgL_externz00_bglt BgL_auxz00_4219;

															BgL_auxz00_4219 =
																(BgL_externz00_bglt) (
																(BgL_getfieldz00_bglt) (BgL_ez00_1660));
															BgL_l3444z00_1669 =
																(((BgL_externz00_bglt) CREF(BgL_auxz00_4219))->
																BgL_exprza2za2);
														}
													BgL_zc3anonymousza33829ze3z83_1670:
														if (NULLP(BgL_l3444z00_1669))
															{	/* Reduce/sbeta.scm 230 */
																return ((bool_t) 1);
															}
														else
															{	/* Reduce/sbeta.scm 230 */
																if (BGl_simplezf3zf3zzreduce_betaz00(CAR
																		(BgL_l3444z00_1669)))
																	{
																		obj_t BgL_l3444z00_4217;

																		BgL_l3444z00_4217 = CDR(BgL_l3444z00_1669);
																		BgL_l3444z00_1669 = BgL_l3444z00_4217;
																		goto BgL_zc3anonymousza33829ze3z83_1670;
																	}
																else
																	{	/* Reduce/sbeta.scm 230 */
																		return ((bool_t) 0);
																	}
															}
													}
												else
													{	/* Reduce/sbeta.scm 230 */
														return ((bool_t) 0);
													}
											}
									}
							}
					}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzreduce_betaz00()
	{
		AN_OBJECT;
		{	/* Reduce/sbeta.scm 25 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzeffect_effectz00(((long) 470955713),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 498901618),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
			return
				BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string3992z00zzreduce_betaz00));
		}
	}

#ifdef __cplusplus
}
#endif
