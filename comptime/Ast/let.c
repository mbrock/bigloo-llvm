/*===========================================================================*/
/*   (Ast/let.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/let.scm)*/
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


	static obj_t BGl_makezd2smartzd2genericzd2letzd2zzast_letz00(obj_t,
		BgL_letzd2varzd2_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_letzd2ze3nodez31zzast_letz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_letzd2symzd2zzast_letz00();
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_nodezd2removez12zc0zzast_removez00(BgL_nodez00_bglt);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	static BgL_letzd2varzd2_bglt BGl_letzd2orzd2letrecz00zzast_letz00(obj_t,
		BgL_letzd2varzd2_bglt, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_conditionalz00zzast_nodez00;
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	extern obj_t BGl_varz00zzast_nodez00;
	static obj_t BGl_cnstzd2initzd2zzast_letz00();
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_selectz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_occurz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_substitutez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern BgL_sequencez00_bglt BGl_makezd2sequencezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_letz00();
	static obj_t BGl__letzd2symzd2zzast_letz00(obj_t);
	static obj_t BGl__letzd2ze3nodez31zzast_letz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_setzd2exzd2itz00zzast_nodez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	extern obj_t BGl_externz00zzast_nodez00;
	extern obj_t BGl_sequencez00zzast_nodez00;
	extern obj_t BGl_appz00zzast_nodez00;
	extern BgL_setqz00_bglt BGl_makezd2setqzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_varz00_bglt, BgL_nodez00_bglt);
	extern obj_t BGl_closurez00zzast_nodez00;
	extern BgL_letzd2funzd2_bglt BGl_makezd2letzd2funz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static bool_t BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_letz00();
	static bool_t BGl_safezd2reczd2valzf3zf3zzast_letz00(obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_za2letza2z00zzast_letz00 = BUNSPEC;
	extern obj_t BGl_letzd2funzd2zzast_nodez00;
	extern obj_t BGl_sfunz00zzast_varz00;
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_letz00 = BUNSPEC;
	extern obj_t BGl_usezd2variablez12zc0zzast_sexpz00(BgL_variablez00_bglt,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_letz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_letzd2symzf3z21zzast_letz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_jumpzd2exzd2itz00zzast_nodez00;
	extern obj_t BGl_atomz00zzast_nodez00;
	extern obj_t BGl_failz00zzast_nodez00;
	extern obj_t BGl_funcallz00zzast_nodez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_letz00();
	static BgL_letzd2funzd2_bglt BGl_letzd2ze3labelsz31zzast_letz00(obj_t,
		BgL_nodez00_bglt, obj_t);
	extern BgL_nodez00_bglt BGl_substitutez12z12zzast_substitutez00(obj_t, obj_t,
		BgL_nodez00_bglt, obj_t);
	static BgL_letzd2varzd2_bglt BGl_makezd2genericzd2letz00zzast_letz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_appzd2lyzd2zzast_nodez00;
	static obj_t BGl__letzd2symzf3z21zzast_letz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	extern obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_occurzd2nodez12zc0zzast_occurz00(BgL_nodez00_bglt);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_letz00();
	static obj_t __cnst[7];


	   
		 
		DEFINE_STRING(BGl_string3844z00zzast_letz00,
		BgL_bgl_string3844za700za7za7a3851za7, "Illegal ", 8);
	      DEFINE_STRING(BGl_string3845z00zzast_letz00,
		BgL_bgl_string3845za700za7za7a3852za7, "' form", 6);
	      DEFINE_STRING(BGl_string3846z00zzast_letz00,
		BgL_bgl_string3846za700za7za7a3853za7, "ast_let", 7);
	      DEFINE_STRING(BGl_string3847z00zzast_letz00,
		BgL_bgl_string3847za700za7za7a3854za7,
		"set! letrec* read write value location let ", 43);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2ze3nodezd2envze3zzast_letz00,
		BgL_bgl__letza7d2za7e3nodeza733855za7, BGl__letzd2ze3nodez31zzast_letz00,
		0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2symzd2envz00zzast_letz00,
		BgL_bgl__letza7d2symza7d2za7za7a3856z00, BGl__letzd2symzd2zzast_letz00, 0L,
		BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_letzd2symzf3zd2envzf3zzast_letz00,
		BgL_bgl__letza7d2symza7f3za7213857za7, BGl__letzd2symzf3z21zzast_letz00, 0L,
		BUNSPEC, 1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long
		BgL_checksumz00_2220, char *BgL_fromz00_2221)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_letz00))
				{
					BGl_requirezd2initializa7ationz75zzast_letz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_letz00();
					BGl_cnstzd2initzd2zzast_letz00();
					BGl_importedzd2moduleszd2initz00zzast_letz00();
					BGl_toplevelzd2initzd2zzast_letz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 14 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_let");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_let");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_let");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 14 */
			{	/* Ast/let.scm 14 */
				obj_t BgL_cportz00_2211;

				BgL_cportz00_2211 =
					bgl_open_input_string(BGl_string3847z00zzast_letz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2212;

					BgL_iz00_2212 = ((long) 6);
				BgL_loopz00_2213:
					if ((BgL_iz00_2212 == ((long) -1)))
						{	/* Ast/let.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/let.scm 14 */
							{	/* Ast/let.scm 14 */
								obj_t BgL_arg3849z00_2215;

								{	/* Ast/let.scm 14 */

									{	/* Ast/let.scm 14 */
										obj_t BgL_locationz00_2217;

										BgL_locationz00_2217 = BBOOL(((bool_t) 0));
										{	/* Ast/let.scm 14 */

											BgL_arg3849z00_2215 =
												BGl_readz00zz__readerz00(BgL_cportz00_2211,
												BgL_locationz00_2217);
										}
									}
								}
								{	/* Ast/let.scm 14 */
									int BgL_auxz00_2240;

									BgL_auxz00_2240 = (int) (BgL_iz00_2212);
									CNST_TABLE_SET(BgL_auxz00_2240, BgL_arg3849z00_2215);
							}}
							{	/* Ast/let.scm 14 */
								int BgL_auxz00_2218;

								BgL_auxz00_2218 = (int) ((BgL_iz00_2212 - ((long) 1)));
								{
									long BgL_iz00_2245;

									BgL_iz00_2245 = (long) (BgL_auxz00_2218);
									BgL_iz00_2212 = BgL_iz00_2245;
									goto BgL_loopz00_2213;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 14 */
			return (BGl_za2letza2z00zzast_letz00 =
				BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 0))),
				BUNSPEC);
		}
	}



/* let-sym */
	BGL_EXPORTED_DEF obj_t BGl_letzd2symzd2zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 42 */
			return BGl_za2letza2z00zzast_letz00;
		}
	}



/* _let-sym */
	obj_t BGl__letzd2symzd2zzast_letz00(obj_t BgL_envz00_2202)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 42 */
			return BGl_za2letza2z00zzast_letz00;
		}
	}



/* let-sym? */
	BGL_EXPORTED_DEF obj_t BGl_letzd2symzf3z21zzast_letz00(obj_t BgL_symz00_15)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 48 */
			return BBOOL((BgL_symz00_15 == BGl_za2letza2z00zzast_letz00));
		}
	}



/* _let-sym? */
	obj_t BGl__letzd2symzf3z21zzast_letz00(obj_t BgL_envz00_2203,
		obj_t BgL_symz00_2204)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 48 */
			return BGl_letzd2symzf3z21zzast_letz00(BgL_symz00_2204);
		}
	}



/* let->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_letzd2ze3nodez31zzast_letz00(obj_t
		BgL_expz00_16, obj_t BgL_stackz00_17, obj_t BgL_olocz00_18,
		obj_t BgL_sitez00_19)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 54 */
			{
				obj_t BgL_bindingsz00_902;

				obj_t BgL_bodyz00_900;

				if (PAIRP(BgL_expz00_16))
					{	/* Ast/let.scm 65 */
						obj_t BgL_cdrzd21655zd2_907;

						BgL_cdrzd21655zd2_907 = CDR(BgL_expz00_16);
						if (PAIRP(BgL_cdrzd21655zd2_907))
							{	/* Ast/let.scm 65 */
								if (NULLP(CAR(BgL_cdrzd21655zd2_907)))
									{	/* Ast/let.scm 65 */
										obj_t BgL_arg3477z00_910;

										BgL_arg3477z00_910 = CDR(BgL_cdrzd21655zd2_907);
										{	/* Ast/let.scm 65 */
											BgL_letzd2varzd2_bglt BgL_auxz00_2261;

											BgL_bodyz00_900 = BgL_arg3477z00_910;
											{	/* Ast/let.scm 68 */
												obj_t BgL_nlocz00_914;

												BgL_nlocz00_914 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_expz00_16, BgL_olocz00_18);
												{	/* Ast/let.scm 68 */
													obj_t BgL_blocz00_915;

													if (PAIRP(BgL_bodyz00_900))
														{	/* Ast/let.scm 69 */
															BgL_blocz00_915 =
																BGl_findzd2locationzf2locz20zztools_locationz00
																(CAR(BgL_bodyz00_900), BgL_nlocz00_914);
														}
													else
														{	/* Ast/let.scm 69 */
															BgL_blocz00_915 = BgL_nlocz00_914;
														}
													{	/* Ast/let.scm 69 */
														BgL_nodez00_bglt BgL_bodyz00_916;

														BgL_bodyz00_916 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00
															(BGl_normaliza7ezd2prognz75zztools_prognz00
															(BgL_bodyz00_900), BgL_stackz00_17,
															BgL_blocz00_915, BgL_sitez00_19);
														{	/* Ast/let.scm 72 */

															{	/* Ast/let.scm 79 */
																BgL_typez00_bglt BgL_arg3482z00_917;

																bool_t BgL_arg3485z00_920;

																BgL_arg3482z00_917 =
																	(((BgL_nodez00_bglt) CREF(BgL_bodyz00_916))->
																	BgL_typez00);
																{	/* Ast/let.scm 82 */
																	obj_t BgL_arg3486z00_921;

																	BgL_arg3486z00_921 =
																		BGl_thezd2backendzd2zzbackend_backendz00();
																	{
																		BgL_backendz00_bglt BgL_auxz00_2271;

																		BgL_auxz00_2271 =
																			(BgL_backendz00_bglt)
																			(BgL_arg3486z00_921);
																		BgL_arg3485z00_920 =
																			(((BgL_backendz00_bglt)
																				CREF(BgL_auxz00_2271))->
																			BgL_removezd2emptyzd2letz00);
																	}
																}
																BgL_auxz00_2261 =
																	BGl_makezd2letzd2varz00zzast_nodez00
																	(BgL_nlocz00_914, BgL_arg3482z00_917, BUNSPEC,
																	BINT(((long) -1)), BNIL, BgL_bodyz00_916,
																	BgL_arg3485z00_920);
											}}}}}
											return (BgL_nodez00_bglt) (BgL_auxz00_2261);
										}
									}
								else
									{	/* Ast/let.scm 65 */
										obj_t BgL_arg3478z00_911;

										BgL_arg3478z00_911 = CAR(BgL_cdrzd21655zd2_907);
										{	/* Ast/let.scm 65 */
											obj_t BgL_auxz00_2278;

											BgL_bindingsz00_902 = BgL_arg3478z00_911;
											{	/* Ast/let.scm 84 */
												bool_t BgL_testz00_2279;

												{	/* Ast/let.scm 84 */
													bool_t BgL_testz00_2280;

													if (PAIRP(BgL_bindingsz00_902))
														{	/* Ast/let.scm 84 */
															BgL_testz00_2280 = ((bool_t) 1);
														}
													else
														{	/* Ast/let.scm 84 */
															BgL_testz00_2280 = NULLP(BgL_bindingsz00_902);
														}
													if (BgL_testz00_2280)
														{
															obj_t BgL_bindingsz00_936;

															BgL_bindingsz00_936 = BgL_bindingsz00_902;
														BgL_zc3anonymousza33500ze3z83_937:
															if (NULLP(BgL_bindingsz00_936))
																{	/* Ast/let.scm 86 */
																	BgL_testz00_2279 = ((bool_t) 0);
																}
															else
																{	/* Ast/let.scm 88 */
																	obj_t BgL_bindingz00_939;

																	BgL_bindingz00_939 = CAR(BgL_bindingsz00_936);
																	{

																		if (PAIRP(BgL_bindingz00_939))
																			{	/* Ast/let.scm 89 */
																				obj_t BgL_cdrzd21676zd2_944;

																				BgL_cdrzd21676zd2_944 =
																					CDR(BgL_bindingz00_939);
																				if (PAIRP(BgL_cdrzd21676zd2_944))
																					{	/* Ast/let.scm 89 */
																						if (NULLP(CDR
																								(BgL_cdrzd21676zd2_944)))
																							{	/* Ast/let.scm 89 */
																								{
																									obj_t BgL_bindingsz00_2295;

																									BgL_bindingsz00_2295 =
																										CDR(BgL_bindingsz00_936);
																									BgL_bindingsz00_936 =
																										BgL_bindingsz00_2295;
																									goto
																										BgL_zc3anonymousza33500ze3z83_937;
																								}
																							}
																						else
																							{	/* Ast/let.scm 89 */
																								BgL_testz00_2279 = ((bool_t) 1);
																							}
																					}
																				else
																					{	/* Ast/let.scm 89 */
																						BgL_testz00_2279 = ((bool_t) 1);
																					}
																			}
																		else
																			{	/* Ast/let.scm 89 */
																				BgL_testz00_2279 = ((bool_t) 1);
																			}
																	}
																}
														}
													else
														{	/* Ast/let.scm 84 */
															BgL_testz00_2279 = ((bool_t) 1);
														}
												}
												if (BgL_testz00_2279)
													{	/* Ast/let.scm 94 */
														obj_t BgL_arg3491z00_926;

														obj_t BgL_arg3492z00_927;

														{	/* Ast/let.scm 94 */
															obj_t BgL_arg3494z00_929;

															{	/* Ast/let.scm 95 */
																obj_t BgL_arg3496z00_931;

																BgL_arg3496z00_931 = CAR(BgL_expz00_16);
																{	/* Ast/let.scm 95 */
																	obj_t BgL_res3838z00_1855;

																	{	/* Ast/let.scm 95 */
																		obj_t BgL_symbolz00_1853;

																		BgL_symbolz00_1853 = BgL_arg3496z00_931;
																		{	/* Ast/let.scm 95 */
																			obj_t BgL_arg2063z00_1854;

																			BgL_arg2063z00_1854 =
																				SYMBOL_TO_STRING(BgL_symbolz00_1853);
																			BgL_res3838z00_1855 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg2063z00_1854);
																		}
																	}
																	BgL_arg3494z00_929 = BgL_res3838z00_1855;
																}
															}
															BgL_arg3491z00_926 =
																string_append_3(BGl_string3844z00zzast_letz00,
																BgL_arg3494z00_929,
																BGl_string3845z00zzast_letz00);
														}
														BgL_arg3492z00_927 =
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_expz00_16, BgL_olocz00_18);
														BgL_auxz00_2278 =
															(obj_t)
															(BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
															(BgL_arg3491z00_926, BgL_expz00_16,
																BgL_arg3492z00_927));
													}
												else
													{	/* Ast/let.scm 84 */
														BgL_auxz00_2278 =
															BGl_makezd2smartzd2genericzd2letzd2zzast_letz00
															(CAR(BgL_expz00_16),
															BGl_makezd2genericzd2letz00zzast_letz00
															(BgL_expz00_16, BgL_stackz00_17, BgL_olocz00_18,
																BgL_sitez00_19), BgL_sitez00_19);
													}
											}
											return (BgL_nodez00_bglt) (BgL_auxz00_2278);
										}
									}
							}
						else
							{	/* Ast/let.scm 65 */
							BgL_tagzd21649zd2_904:
								{	/* Ast/let.scm 103 */
									obj_t BgL_arg3508z00_951;

									obj_t BgL_arg3509z00_952;

									{	/* Ast/let.scm 103 */
										obj_t BgL_arg3511z00_954;

										{	/* Ast/let.scm 104 */
											obj_t BgL_arg3513z00_956;

											BgL_arg3513z00_956 = CAR(BgL_expz00_16);
											{	/* Ast/let.scm 104 */
												obj_t BgL_res3839z00_1860;

												{	/* Ast/let.scm 104 */
													obj_t BgL_symbolz00_1858;

													BgL_symbolz00_1858 = BgL_arg3513z00_956;
													{	/* Ast/let.scm 104 */
														obj_t BgL_arg2063z00_1859;

														BgL_arg2063z00_1859 =
															SYMBOL_TO_STRING(BgL_symbolz00_1858);
														BgL_res3839z00_1860 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg2063z00_1859);
													}
												}
												BgL_arg3511z00_954 = BgL_res3839z00_1860;
											}
										}
										BgL_arg3508z00_951 =
											string_append_3(BGl_string3844z00zzast_letz00,
											BgL_arg3511z00_954, BGl_string3845z00zzast_letz00);
									}
									BgL_arg3509z00_952 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_expz00_16, BgL_olocz00_18);
									return
										BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
										(BgL_arg3508z00_951, BgL_expz00_16, BgL_arg3509z00_952);
								}
							}
					}
				else
					{	/* Ast/let.scm 65 */
						goto BgL_tagzd21649zd2_904;
					}
			}
		}
	}



/* _let->node */
	obj_t BGl__letzd2ze3nodez31zzast_letz00(obj_t BgL_envz00_2205,
		obj_t BgL_expz00_2206, obj_t BgL_stackz00_2207, obj_t BgL_olocz00_2208,
		obj_t BgL_sitez00_2209)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 54 */
			return
				(obj_t) (BGl_letzd2ze3nodez31zzast_letz00(BgL_expz00_2206,
					BgL_stackz00_2207, BgL_olocz00_2208, BgL_sitez00_2209));
		}
	}



/* make-generic-let */
	BgL_letzd2varzd2_bglt BGl_makezd2genericzd2letz00zzast_letz00(obj_t
		BgL_expz00_20, obj_t BgL_stackz00_21, obj_t BgL_olocz00_22,
		obj_t BgL_sitez00_23)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 112 */
			{	/* Ast/let.scm 113 */
				obj_t BgL_bindingsz00_957;

				{	/* Ast/let.scm 113 */
					obj_t BgL_pairz00_1861;

					BgL_pairz00_1861 = BgL_expz00_20;
					BgL_bindingsz00_957 = CAR(CDR(BgL_pairz00_1861));
				}
				{	/* Ast/let.scm 113 */
					obj_t BgL_locz00_958;

					BgL_locz00_958 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_20,
						BgL_olocz00_22);
					{	/* Ast/let.scm 114 */
						obj_t BgL_blocz00_959;

						{	/* Ast/let.scm 115 */
							bool_t BgL_testz00_2319;

							{	/* Ast/let.scm 115 */
								obj_t BgL_auxz00_2320;

								{	/* Ast/let.scm 115 */
									obj_t BgL_pairz00_1865;

									BgL_pairz00_1865 = BgL_expz00_20;
									BgL_auxz00_2320 = CDR(CDR(BgL_pairz00_1865));
								}
								BgL_testz00_2319 = PAIRP(BgL_auxz00_2320);
							}
							if (BgL_testz00_2319)
								{	/* Ast/let.scm 116 */
									obj_t BgL_arg3550z00_1029;

									{	/* Ast/let.scm 116 */
										obj_t BgL_pairz00_1870;

										BgL_pairz00_1870 = BgL_expz00_20;
										BgL_arg3550z00_1029 = CAR(CDR(CDR(BgL_pairz00_1870)));
									}
									BgL_blocz00_959 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_arg3550z00_1029, BFALSE);
								}
							else
								{	/* Ast/let.scm 115 */
									BgL_blocz00_959 = BFALSE;
								}
						}
						{	/* Ast/let.scm 118 */
							obj_t BgL_bodyz00_961;

							{	/* Ast/let.scm 121 */
								obj_t BgL_arg3546z00_1025;

								{	/* Ast/let.scm 121 */
									obj_t BgL_pairz00_1887;

									BgL_pairz00_1887 = BgL_expz00_20;
									BgL_arg3546z00_1025 = CDR(CDR(BgL_pairz00_1887));
								}
								BgL_bodyz00_961 =
									BGl_normaliza7ezd2prognz75zztools_prognz00
									(BgL_arg3546z00_1025);
							}
							{	/* Ast/let.scm 121 */
								obj_t BgL_loczd2biszd2_962;

								BgL_loczd2biszd2_962 =
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_bodyz00_961, BgL_locz00_958);
								{	/* Ast/let.scm 122 */
									obj_t BgL_nlocz00_963;

									{	/* Ast/let.scm 123 */
										bool_t BgL_testz00_2332;

										if (STRUCTP(BgL_blocz00_959))
											{	/* Ast/let.scm 123 */
												BgL_testz00_2332 =
													(STRUCT_KEY(BgL_blocz00_959) ==
													CNST_TABLE_REF(((long) 1)));
											}
										else
											{	/* Ast/let.scm 123 */
												BgL_testz00_2332 = ((bool_t) 0);
											}
										if (BgL_testz00_2332)
											{	/* Ast/let.scm 123 */
												BgL_nlocz00_963 = BgL_blocz00_959;
											}
										else
											{	/* Ast/let.scm 123 */
												BgL_nlocz00_963 = BgL_locz00_958;
											}
									}
									{	/* Ast/let.scm 123 */
										obj_t BgL_framez00_964;

										if (NULLP(BgL_bindingsz00_957))
											{	/* Ast/let.scm 126 */
												BgL_framez00_964 = BNIL;
											}
										else
											{	/* Ast/let.scm 126 */
												obj_t BgL_head3413z00_1007;

												BgL_head3413z00_1007 = MAKE_PAIR(BNIL, BNIL);
												{
													obj_t BgL_l3411z00_1009;

													obj_t BgL_tail3414z00_1010;

													BgL_l3411z00_1009 = BgL_bindingsz00_957;
													BgL_tail3414z00_1010 = BgL_head3413z00_1007;
												BgL_zc3anonymousza33538ze3z83_1011:
													if (NULLP(BgL_l3411z00_1009))
														{	/* Ast/let.scm 126 */
															BgL_framez00_964 = CDR(BgL_head3413z00_1007);
														}
													else
														{	/* Ast/let.scm 126 */
															obj_t BgL_newtail3415z00_1013;

															{	/* Ast/let.scm 126 */
																BgL_localz00_bglt BgL_arg3541z00_1015;

																{	/* Ast/let.scm 126 */
																	obj_t BgL_bindingz00_1017;

																	BgL_bindingz00_1017 = CAR(BgL_l3411z00_1009);
																	{	/* Ast/let.scm 127 */
																		obj_t BgL_varze2idze2_1018;

																		BgL_varze2idze2_1018 =
																			BGl_parsezd2idzd2zzast_identz00(CAR
																			(BgL_bindingz00_1017), BgL_nlocz00_963);
																		{	/* Ast/let.scm 127 */
																			obj_t BgL_idz00_1019;

																			BgL_idz00_1019 =
																				CAR(BgL_varze2idze2_1018);
																			{	/* Ast/let.scm 128 */
																				obj_t BgL_typez00_1020;

																				BgL_typez00_1020 =
																					CDR(BgL_varze2idze2_1018);
																				{	/* Ast/let.scm 129 */

																					if (BGl_userzd2symbolzf3z21zzast_identz00(BgL_idz00_1019))
																						{	/* Ast/let.scm 130 */
																							BgL_arg3541z00_1015 =
																								BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																								(BgL_idz00_1019,
																								(BgL_typez00_bglt)
																								(BgL_typez00_1020));
																						}
																					else
																						{	/* Ast/let.scm 130 */
																							BgL_arg3541z00_1015 =
																								BGl_makezd2localzd2svarz00zzast_localz00
																								(BgL_idz00_1019,
																								(BgL_typez00_bglt)
																								(BgL_typez00_1020));
																						}
																				}
																			}
																		}
																	}
																}
																BgL_newtail3415z00_1013 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg3541z00_1015), BNIL);
															}
															SET_CDR(BgL_tail3414z00_1010,
																BgL_newtail3415z00_1013);
															{
																obj_t BgL_tail3414z00_2360;

																obj_t BgL_l3411z00_2358;

																BgL_l3411z00_2358 = CDR(BgL_l3411z00_1009);
																BgL_tail3414z00_2360 = BgL_newtail3415z00_1013;
																BgL_tail3414z00_1010 = BgL_tail3414z00_2360;
																BgL_l3411z00_1009 = BgL_l3411z00_2358;
																goto BgL_zc3anonymousza33538ze3z83_1011;
															}
														}
												}
											}
										{	/* Ast/let.scm 126 */
											obj_t BgL_newzd2stackzd2_965;

											BgL_newzd2stackzd2_965 =
												bgl_append2(BgL_framez00_964, BgL_stackz00_21);
											{	/* Ast/let.scm 134 */

												{	/* Ast/let.scm 141 */
													BgL_nodez00_bglt BgL_bodyz00_966;

													BgL_bodyz00_966 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_bodyz00_961,
														BgL_newzd2stackzd2_965, BgL_nlocz00_963,
														CNST_TABLE_REF(((long) 2)));
													{	/* Ast/let.scm 141 */
														obj_t BgL_bstackz00_967;

														{	/* Ast/let.scm 142 */
															bool_t BgL_testz00_2364;

															if (
																(CAR(BgL_expz00_20) ==
																	CNST_TABLE_REF(((long) 0))))
																{	/* Ast/let.scm 142 */
																	BgL_testz00_2364 = ((bool_t) 1);
																}
															else
																{	/* Ast/let.scm 142 */
																	obj_t BgL_arg3533z00_1002;

																	BgL_arg3533z00_1002 = CAR(BgL_expz00_20);
																	BgL_testz00_2364 =
																		(BgL_arg3533z00_1002 ==
																		BGl_za2letza2z00zzast_letz00);
																}
															if (BgL_testz00_2364)
																{	/* Ast/let.scm 142 */
																	BgL_bstackz00_967 = BgL_stackz00_21;
																}
															else
																{	/* Ast/let.scm 142 */
																	BgL_bstackz00_967 = BgL_newzd2stackzd2_965;
																}
														}
														{	/* Ast/let.scm 142 */
															obj_t BgL_bindingsz00_968;

															if (NULLP(BgL_bindingsz00_957))
																{	/* Ast/let.scm 145 */
																	BgL_bindingsz00_968 = BNIL;
																}
															else
																{	/* Ast/let.scm 145 */
																	obj_t BgL_head3418z00_980;

																	BgL_head3418z00_980 = MAKE_PAIR(BNIL, BNIL);
																	{
																		obj_t BgL_ll3416z00_982;

																		obj_t BgL_ll3417z00_983;

																		obj_t BgL_tail3419z00_984;

																		BgL_ll3416z00_982 = BgL_bindingsz00_957;
																		BgL_ll3417z00_983 = BgL_framez00_964;
																		BgL_tail3419z00_984 = BgL_head3418z00_980;
																	BgL_zc3anonymousza33520ze3z83_985:
																		if (NULLP(BgL_ll3416z00_982))
																			{	/* Ast/let.scm 145 */
																				BgL_bindingsz00_968 =
																					CDR(BgL_head3418z00_980);
																			}
																		else
																			{	/* Ast/let.scm 145 */
																				obj_t BgL_newtail3420z00_987;

																				{	/* Ast/let.scm 145 */
																					obj_t BgL_arg3524z00_990;

																					{	/* Ast/let.scm 145 */
																						obj_t BgL_bindingz00_992;

																						obj_t BgL_varz00_993;

																						BgL_bindingz00_992 =
																							CAR(BgL_ll3416z00_982);
																						BgL_varz00_993 =
																							CAR(BgL_ll3417z00_983);
																						{	/* Ast/let.scm 148 */
																							BgL_nodez00_bglt
																								BgL_arg3526z00_994;
																							{	/* Ast/let.scm 148 */
																								obj_t BgL_arg3527z00_995;

																								obj_t BgL_arg3528z00_996;

																								obj_t BgL_arg3529z00_997;

																								BgL_arg3527z00_995 =
																									BGl_normaliza7ezd2prognz75zztools_prognz00
																									(CDR(BgL_bindingz00_992));
																								BgL_arg3528z00_996 =
																									BGl_findzd2locationzf2locz20zztools_locationz00
																									(BgL_bindingz00_992,
																									BgL_nlocz00_963);
																								BgL_arg3529z00_997 =
																									CNST_TABLE_REF(((long) 2));
																								BgL_arg3526z00_994 =
																									BGl_sexpzd2ze3nodez31zzast_sexpz00
																									(BgL_arg3527z00_995,
																									BgL_bstackz00_967,
																									BgL_arg3528z00_996,
																									BgL_arg3529z00_997);
																							}
																							BgL_arg3524z00_990 =
																								MAKE_PAIR(BgL_varz00_993,
																								(obj_t) (BgL_arg3526z00_994));
																					}}
																					BgL_newtail3420z00_987 =
																						MAKE_PAIR(BgL_arg3524z00_990, BNIL);
																				}
																				SET_CDR(BgL_tail3419z00_984,
																					BgL_newtail3420z00_987);
																				{
																					obj_t BgL_tail3419z00_2392;

																					obj_t BgL_ll3417z00_2390;

																					obj_t BgL_ll3416z00_2388;

																					BgL_ll3416z00_2388 =
																						CDR(BgL_ll3416z00_982);
																					BgL_ll3417z00_2390 =
																						CDR(BgL_ll3417z00_983);
																					BgL_tail3419z00_2392 =
																						BgL_newtail3420z00_987;
																					BgL_tail3419z00_984 =
																						BgL_tail3419z00_2392;
																					BgL_ll3417z00_983 =
																						BgL_ll3417z00_2390;
																					BgL_ll3416z00_982 =
																						BgL_ll3416z00_2388;
																					goto
																						BgL_zc3anonymousza33520ze3z83_985;
																				}
																			}
																	}
																}
															{	/* Ast/let.scm 145 */
																obj_t BgL_locz00_969;

																{	/* Ast/let.scm 154 */
																	obj_t BgL_locz00_971;

																	{	/* Ast/let.scm 156 */
																		obj_t BgL_arg3515z00_973;

																		if (PAIRP(BgL_bindingsz00_968))
																			{
																				BgL_nodez00_bglt BgL_auxz00_2395;

																				BgL_auxz00_2395 =
																					(BgL_nodez00_bglt) (CDR(CAR
																						(BgL_bindingsz00_968)));
																				BgL_arg3515z00_973 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_2395))->BgL_locz00);
																			}
																		else
																			{	/* Ast/let.scm 156 */
																				BgL_arg3515z00_973 =
																					(((BgL_nodez00_bglt)
																						CREF(BgL_bodyz00_966))->BgL_locz00);
																			}
																		BgL_locz00_971 =
																			BGl_findzd2locationzf2locz20zztools_locationz00
																			(BgL_expz00_20, BgL_arg3515z00_973);
																	}
																	{	/* Ast/let.scm 159 */
																		bool_t BgL_testz00_2402;

																		if (STRUCTP(BgL_locz00_971))
																			{	/* Ast/let.scm 159 */
																				BgL_testz00_2402 =
																					(STRUCT_KEY(BgL_locz00_971) ==
																					CNST_TABLE_REF(((long) 1)));
																			}
																		else
																			{	/* Ast/let.scm 159 */
																				BgL_testz00_2402 = ((bool_t) 0);
																			}
																		if (BgL_testz00_2402)
																			{	/* Ast/let.scm 159 */
																				BgL_locz00_969 = BgL_locz00_971;
																			}
																		else
																			{	/* Ast/let.scm 159 */
																				BgL_locz00_969 = BgL_olocz00_22;
																			}
																	}
																}
																{	/* Ast/let.scm 154 */
																	BgL_letzd2varzd2_bglt BgL_nodez00_970;

																	BgL_nodez00_970 =
																		BGl_makezd2letzd2varz00zzast_nodez00
																		(BgL_locz00_969,
																		(BgL_typez00_bglt)
																		(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
																		BINT(((long) -1)), BgL_bindingsz00_968,
																		BgL_bodyz00_966, ((bool_t) 1));
																	{	/* Ast/let.scm 162 */

																		BGl_occurzd2nodez12zc0zzast_occurz00(
																			(BgL_nodez00_bglt) (BgL_nodez00_970));
																		BGl_nodezd2removez12zc0zzast_removez00(
																			(BgL_nodez00_bglt) (BgL_nodez00_970));
																		return BgL_nodez00_970;
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
			}
		}
	}



/* make-smart-generic-let */
	obj_t BGl_makezd2smartzd2genericzd2letzd2zzast_letz00(obj_t
		BgL_letzf2letreczf2_24, BgL_letzd2varzd2_bglt BgL_nodezd2letzd2_25,
		obj_t BgL_sitez00_26)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 183 */
			{	/* Ast/let.scm 184 */
				obj_t BgL_g3340z00_1031;

				BgL_g3340z00_1031 =
					(((BgL_letzd2varzd2_bglt) CREF(BgL_nodezd2letzd2_25))->
					BgL_bindingsz00);
				{
					obj_t BgL_bindingsz00_1035;

					obj_t BgL_funz00_1036;

					obj_t BgL_valuez00_1037;

					BgL_bindingsz00_1035 = BgL_g3340z00_1031;
					BgL_funz00_1036 = BNIL;
					BgL_valuez00_1037 = BNIL;
				BgL_zc3anonymousza33552ze3z83_1038:
					if (NULLP(BgL_bindingsz00_1035))
						{	/* Ast/let.scm 187 */
							if (NULLP(BgL_funz00_1036))
								{	/* Ast/let.scm 195 */
									obj_t BgL_varsz00_1041;

									{	/* Ast/let.scm 195 */
										obj_t BgL_l3422z00_1042;

										BgL_l3422z00_1042 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_nodezd2letzd2_25))->
											BgL_bindingsz00);
										if (NULLP(BgL_l3422z00_1042))
											{	/* Ast/let.scm 195 */
												BgL_varsz00_1041 = BNIL;
											}
										else
											{	/* Ast/let.scm 195 */
												obj_t BgL_head3424z00_1044;

												BgL_head3424z00_1044 =
													MAKE_PAIR(CAR(CAR(BgL_l3422z00_1042)), BNIL);
												{	/* Ast/let.scm 195 */
													obj_t BgL_g3427z00_1045;

													BgL_g3427z00_1045 = CDR(BgL_l3422z00_1042);
													{
														obj_t BgL_l3422z00_1047;

														obj_t BgL_tail3425z00_1048;

														BgL_l3422z00_1047 = BgL_g3427z00_1045;
														BgL_tail3425z00_1048 = BgL_head3424z00_1044;
													BgL_zc3anonymousza33556ze3z83_1049:
														if (NULLP(BgL_l3422z00_1047))
															{	/* Ast/let.scm 195 */
																BgL_varsz00_1041 = BgL_head3424z00_1044;
															}
														else
															{	/* Ast/let.scm 195 */
																obj_t BgL_newtail3426z00_1051;

																BgL_newtail3426z00_1051 =
																	MAKE_PAIR(CAR(CAR(BgL_l3422z00_1047)), BNIL);
																SET_CDR(BgL_tail3425z00_1048,
																	BgL_newtail3426z00_1051);
																{
																	obj_t BgL_tail3425z00_2435;

																	obj_t BgL_l3422z00_2433;

																	BgL_l3422z00_2433 = CDR(BgL_l3422z00_1047);
																	BgL_tail3425z00_2435 =
																		BgL_newtail3426z00_1051;
																	BgL_tail3425z00_1048 = BgL_tail3425z00_2435;
																	BgL_l3422z00_1047 = BgL_l3422z00_2433;
																	goto BgL_zc3anonymousza33556ze3z83_1049;
																}
															}
													}
												}
											}
									}
									return
										(obj_t) (BGl_letzd2orzd2letrecz00zzast_letz00
										(BgL_letzf2letreczf2_24, BgL_nodezd2letzd2_25,
											BgL_varsz00_1041));
								}
							else
								{	/* Ast/let.scm 194 */
									if (NULLP(BgL_valuez00_1037))
										{	/* Ast/let.scm 198 */
											BgL_nodez00_bglt BgL_arg3566z00_1061;

											BgL_arg3566z00_1061 =
												(((BgL_letzd2varzd2_bglt) CREF(BgL_nodezd2letzd2_25))->
												BgL_bodyz00);
											return (obj_t) (BGl_letzd2ze3labelsz31zzast_letz00
												(BgL_funz00_1036, BgL_arg3566z00_1061, BgL_sitez00_26));
										}
									else
										{	/* Ast/let.scm 200 */
											obj_t BgL_varsz00_1062;

											{	/* Ast/let.scm 200 */
												obj_t BgL_l3428z00_1067;

												BgL_l3428z00_1067 =
													(((BgL_letzd2varzd2_bglt)
														CREF(BgL_nodezd2letzd2_25))->BgL_bindingsz00);
												if (NULLP(BgL_l3428z00_1067))
													{	/* Ast/let.scm 200 */
														BgL_varsz00_1062 = BNIL;
													}
												else
													{	/* Ast/let.scm 200 */
														obj_t BgL_head3430z00_1069;

														BgL_head3430z00_1069 =
															MAKE_PAIR(CAR(CAR(BgL_l3428z00_1067)), BNIL);
														{	/* Ast/let.scm 200 */
															obj_t BgL_g3433z00_1070;

															BgL_g3433z00_1070 = CDR(BgL_l3428z00_1067);
															{
																obj_t BgL_l3428z00_1072;

																obj_t BgL_tail3431z00_1073;

																BgL_l3428z00_1072 = BgL_g3433z00_1070;
																BgL_tail3431z00_1073 = BgL_head3430z00_1069;
															BgL_zc3anonymousza33571ze3z83_1074:
																if (NULLP(BgL_l3428z00_1072))
																	{	/* Ast/let.scm 200 */
																		BgL_varsz00_1062 = BgL_head3430z00_1069;
																	}
																else
																	{	/* Ast/let.scm 200 */
																		obj_t BgL_newtail3432z00_1076;

																		BgL_newtail3432z00_1076 =
																			MAKE_PAIR(CAR(CAR(BgL_l3428z00_1072)),
																			BNIL);
																		SET_CDR(BgL_tail3431z00_1073,
																			BgL_newtail3432z00_1076);
																		{
																			obj_t BgL_tail3431z00_2458;

																			obj_t BgL_l3428z00_2456;

																			BgL_l3428z00_2456 =
																				CDR(BgL_l3428z00_1072);
																			BgL_tail3431z00_2458 =
																				BgL_newtail3432z00_1076;
																			BgL_tail3431z00_1073 =
																				BgL_tail3431z00_2458;
																			BgL_l3428z00_1072 = BgL_l3428z00_2456;
																			goto BgL_zc3anonymousza33571ze3z83_1074;
																		}
																	}
															}
														}
													}
											}
											{
												obj_t BgL_auxz00_2459;

												BgL_auxz00_2459 = bgl_reverse_bang(BgL_valuez00_1037);
												((((BgL_letzd2varzd2_bglt) CREF(BgL_nodezd2letzd2_25))->
														BgL_bindingsz00) =
													((obj_t) BgL_auxz00_2459), BUNSPEC);
											}
											{	/* Ast/let.scm 205 */
												BgL_letzd2varzd2_bglt BgL_nletz00_1064;

												BgL_nletz00_1064 =
													BGl_letzd2orzd2letrecz00zzast_letz00
													(BgL_letzf2letreczf2_24, BgL_nodezd2letzd2_25,
													BgL_varsz00_1062);
												{	/* Ast/let.scm 207 */
													BgL_letzd2funzd2_bglt BgL_arg3568z00_1065;

													{	/* Ast/let.scm 207 */
														BgL_nodez00_bglt BgL_arg3569z00_1066;

														BgL_arg3569z00_1066 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nletz00_1064))->BgL_bodyz00);
														BgL_arg3568z00_1065 =
															BGl_letzd2ze3labelsz31zzast_letz00
															(BgL_funz00_1036, BgL_arg3569z00_1066,
															BgL_sitez00_26);
													}
													{
														BgL_nodez00_bglt BgL_auxz00_2465;

														BgL_auxz00_2465 =
															(BgL_nodez00_bglt) (BgL_arg3568z00_1065);
														((((BgL_letzd2varzd2_bglt) CREF(BgL_nletz00_1064))->
																BgL_bodyz00) =
															((BgL_nodez00_bglt) BgL_auxz00_2465), BUNSPEC);
													}
												}
												return (obj_t) (BgL_nletz00_1064);
											}
										}
								}
						}
					else
						{	/* Ast/let.scm 210 */
							obj_t BgL_bindingz00_1085;

							BgL_bindingz00_1085 = CAR(BgL_bindingsz00_1035);
							{	/* Ast/let.scm 210 */
								obj_t BgL_varz00_1086;

								BgL_varz00_1086 = CAR(BgL_bindingz00_1085);
								{	/* Ast/let.scm 211 */
									obj_t BgL_sexpz00_1087;

									BgL_sexpz00_1087 = CDR(BgL_bindingz00_1085);
									{	/* Ast/let.scm 212 */

										if (BGl_iszd2azf3z21zz__objectz00(BgL_sexpz00_1087,
												BGl_letzd2funzd2zzast_nodez00))
											{	/* Ast/let.scm 214 */
												obj_t BgL_localsz00_1089;

												{
													BgL_letzd2funzd2_bglt BgL_auxz00_2474;

													BgL_auxz00_2474 =
														(BgL_letzd2funzd2_bglt) (BgL_sexpz00_1087);
													BgL_localsz00_1089 =
														(((BgL_letzd2funzd2_bglt) CREF(BgL_auxz00_2474))->
														BgL_localsz00);
												}
												{	/* Ast/let.scm 214 */
													BgL_nodez00_bglt BgL_bodyz00_1090;

													{
														BgL_letzd2funzd2_bglt BgL_auxz00_2477;

														BgL_auxz00_2477 =
															(BgL_letzd2funzd2_bglt) (BgL_sexpz00_1087);
														BgL_bodyz00_1090 =
															(((BgL_letzd2funzd2_bglt) CREF(BgL_auxz00_2477))->
															BgL_bodyz00);
													}
													{	/* Ast/let.scm 215 */

														{	/* Ast/let.scm 216 */
															bool_t BgL_testz00_2480;

															if (NULLP(BgL_localsz00_1089))
																{	/* Ast/let.scm 216 */
																	BgL_testz00_2480 = ((bool_t) 1);
																}
															else
																{	/* Ast/let.scm 216 */
																	if (NULLP(CDR(BgL_localsz00_1089)))
																		{	/* Ast/let.scm 216 */
																			BgL_testz00_2480 = ((bool_t) 0);
																		}
																	else
																		{	/* Ast/let.scm 216 */
																			BgL_testz00_2480 = ((bool_t) 1);
																		}
																}
															if (BgL_testz00_2480)
																{	/* Ast/let.scm 220 */
																	obj_t BgL_arg3582z00_1092;

																	obj_t BgL_arg3583z00_1093;

																	BgL_arg3582z00_1092 =
																		CDR(BgL_bindingsz00_1035);
																	BgL_arg3583z00_1093 =
																		MAKE_PAIR(CAR(BgL_bindingsz00_1035),
																		BgL_valuez00_1037);
																	{
																		obj_t BgL_valuez00_2490;

																		obj_t BgL_bindingsz00_2489;

																		BgL_bindingsz00_2489 = BgL_arg3582z00_1092;
																		BgL_valuez00_2490 = BgL_arg3583z00_1093;
																		BgL_valuez00_1037 = BgL_valuez00_2490;
																		BgL_bindingsz00_1035 = BgL_bindingsz00_2489;
																		goto BgL_zc3anonymousza33552ze3z83_1038;
																	}
																}
															else
																{	/* Ast/let.scm 223 */
																	bool_t BgL_testz00_2491;

																	{	/* Ast/let.scm 223 */
																		obj_t BgL_obj2170z00_1992;

																		BgL_obj2170z00_1992 =
																			(obj_t) (BgL_bodyz00_1090);
																		BgL_testz00_2491 =
																			BGl_iszd2azf3z21zz__objectz00
																			(BgL_obj2170z00_1992,
																			BGl_varz00zzast_nodez00);
																	}
																	if (BgL_testz00_2491)
																		{	/* Ast/let.scm 224 */
																			BgL_variablez00_bglt BgL_resz00_1096;

																			obj_t BgL_auxz00_1097;

																			{
																				BgL_varz00_bglt BgL_auxz00_2494;

																				BgL_auxz00_2494 =
																					(BgL_varz00_bglt) (BgL_bodyz00_1090);
																				BgL_resz00_1096 =
																					(((BgL_varz00_bglt)
																						CREF(BgL_auxz00_2494))->
																					BgL_variablez00);
																			}
																			BgL_auxz00_1097 = CAR(BgL_localsz00_1089);
																			{	/* Ast/let.scm 226 */
																				bool_t BgL_testz00_2498;

																				if (
																					((obj_t) (BgL_resz00_1096) ==
																						BgL_auxz00_1097))
																					{	/* Ast/let.scm 230 */
																						bool_t BgL_testz00_2502;

																						{	/* Ast/let.scm 230 */
																							obj_t BgL_auxz00_2503;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_2504;
																								BgL_auxz00_2504 =
																									(BgL_variablez00_bglt)
																									(BgL_varz00_1086);
																								BgL_auxz00_2503 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_2504))->
																									BgL_accessz00);
																							}
																							BgL_testz00_2502 =
																								(BgL_auxz00_2503 ==
																								CNST_TABLE_REF(((long) 3)));
																						}
																						if (BgL_testz00_2502)
																							{	/* Ast/let.scm 230 */
																								BgL_testz00_2498 = ((bool_t) 1);
																							}
																						else
																							{	/* Ast/let.scm 231 */
																								bool_t BgL_testz00_2509;

																								{	/* Ast/let.scm 232 */
																									bool_t BgL_testz00_2510;

																									{	/* Ast/let.scm 232 */
																										BgL_typez00_bglt
																											BgL_arg3600z00_1112;
																										{
																											BgL_variablez00_bglt
																												BgL_auxz00_2511;
																											BgL_auxz00_2511 =
																												(BgL_variablez00_bglt)
																												(BgL_varz00_1086);
																											BgL_arg3600z00_1112 =
																												(((BgL_variablez00_bglt)
																													CREF
																													(BgL_auxz00_2511))->
																												BgL_typez00);
																										}
																										BgL_testz00_2510 =
																											(
																											(obj_t)
																											(BgL_arg3600z00_1112) ==
																											BGl_za2procedureza2z00zztype_cachez00);
																									}
																									if (BgL_testz00_2510)
																										{	/* Ast/let.scm 232 */
																											BgL_testz00_2509 =
																												((bool_t) 1);
																										}
																									else
																										{	/* Ast/let.scm 233 */
																											bool_t BgL_testz00_2516;

																											{	/* Ast/let.scm 233 */
																												BgL_typez00_bglt
																													BgL_arg3599z00_1111;
																												{
																													BgL_variablez00_bglt
																														BgL_auxz00_2517;
																													BgL_auxz00_2517 =
																														(BgL_variablez00_bglt)
																														(BgL_varz00_1086);
																													BgL_arg3599z00_1111 =
																														(((BgL_variablez00_bglt) CREF(BgL_auxz00_2517))->BgL_typez00);
																												}
																												BgL_testz00_2516 =
																													(
																													(obj_t)
																													(BgL_arg3599z00_1111)
																													==
																													BGl_za2_za2z00zztype_cachez00);
																											}
																											if (BgL_testz00_2516)
																												{	/* Ast/let.scm 233 */
																													BgL_testz00_2509 =
																														((bool_t) 1);
																												}
																											else
																												{	/* Ast/let.scm 234 */
																													BgL_typez00_bglt
																														BgL_arg3598z00_1110;
																													{
																														BgL_variablez00_bglt
																															BgL_auxz00_2522;
																														BgL_auxz00_2522 =
																															(BgL_variablez00_bglt)
																															(BgL_varz00_1086);
																														BgL_arg3598z00_1110
																															=
																															(((BgL_variablez00_bglt) CREF(BgL_auxz00_2522))->BgL_typez00);
																													}
																													BgL_testz00_2509 =
																														(
																														(obj_t)
																														(BgL_arg3598z00_1110)
																														==
																														BGl_za2objza2z00zztype_cachez00);
																												}
																										}
																								}
																								if (BgL_testz00_2509)
																									{	/* Ast/let.scm 231 */
																										BgL_testz00_2498 =
																											((bool_t) 0);
																									}
																								else
																									{	/* Ast/let.scm 231 */
																										BgL_testz00_2498 =
																											((bool_t) 1);
																									}
																							}
																					}
																				else
																					{	/* Ast/let.scm 226 */
																						BgL_testz00_2498 = ((bool_t) 1);
																					}
																				if (BgL_testz00_2498)
																					{	/* Ast/let.scm 237 */
																						obj_t BgL_arg3587z00_1099;

																						obj_t BgL_arg3588z00_1100;

																						BgL_arg3587z00_1099 =
																							CDR(BgL_bindingsz00_1035);
																						BgL_arg3588z00_1100 =
																							MAKE_PAIR(CAR
																							(BgL_bindingsz00_1035),
																							BgL_valuez00_1037);
																						{
																							obj_t BgL_valuez00_2531;

																							obj_t BgL_bindingsz00_2530;

																							BgL_bindingsz00_2530 =
																								BgL_arg3587z00_1099;
																							BgL_valuez00_2531 =
																								BgL_arg3588z00_1100;
																							BgL_valuez00_1037 =
																								BgL_valuez00_2531;
																							BgL_bindingsz00_1035 =
																								BgL_bindingsz00_2530;
																							goto
																								BgL_zc3anonymousza33552ze3z83_1038;
																						}
																					}
																				else
																					{	/* Ast/let.scm 241 */
																						obj_t BgL_arg3590z00_1102;

																						obj_t BgL_arg3591z00_1103;

																						BgL_arg3590z00_1102 =
																							CDR(BgL_bindingsz00_1035);
																						BgL_arg3591z00_1103 =
																							MAKE_PAIR(CAR
																							(BgL_bindingsz00_1035),
																							BgL_funz00_1036);
																						{
																							obj_t BgL_funz00_2536;

																							obj_t BgL_bindingsz00_2535;

																							BgL_bindingsz00_2535 =
																								BgL_arg3590z00_1102;
																							BgL_funz00_2536 =
																								BgL_arg3591z00_1103;
																							BgL_funz00_1036 = BgL_funz00_2536;
																							BgL_bindingsz00_1035 =
																								BgL_bindingsz00_2535;
																							goto
																								BgL_zc3anonymousza33552ze3z83_1038;
																						}
																					}
																			}
																		}
																	else
																		{	/* Ast/let.scm 244 */
																			obj_t BgL_arg3603z00_1115;

																			obj_t BgL_arg3604z00_1116;

																			BgL_arg3603z00_1115 =
																				CDR(BgL_bindingsz00_1035);
																			BgL_arg3604z00_1116 =
																				MAKE_PAIR(CAR(BgL_bindingsz00_1035),
																				BgL_valuez00_1037);
																			{
																				obj_t BgL_valuez00_2541;

																				obj_t BgL_bindingsz00_2540;

																				BgL_bindingsz00_2540 =
																					BgL_arg3603z00_1115;
																				BgL_valuez00_2541 = BgL_arg3604z00_1116;
																				BgL_valuez00_1037 = BgL_valuez00_2541;
																				BgL_bindingsz00_1035 =
																					BgL_bindingsz00_2540;
																				goto BgL_zc3anonymousza33552ze3z83_1038;
																			}
																		}
																}
														}
													}
												}
											}
										else
											{	/* Ast/let.scm 247 */
												obj_t BgL_arg3609z00_1121;

												obj_t BgL_arg3610z00_1122;

												BgL_arg3609z00_1121 = CDR(BgL_bindingsz00_1035);
												BgL_arg3610z00_1122 =
													MAKE_PAIR(CAR(BgL_bindingsz00_1035),
													BgL_valuez00_1037);
												{
													obj_t BgL_valuez00_2546;

													obj_t BgL_bindingsz00_2545;

													BgL_bindingsz00_2545 = BgL_arg3609z00_1121;
													BgL_valuez00_2546 = BgL_arg3610z00_1122;
													BgL_valuez00_1037 = BgL_valuez00_2546;
													BgL_bindingsz00_1035 = BgL_bindingsz00_2545;
													goto BgL_zc3anonymousza33552ze3z83_1038;
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



/* let-or-letrec */
	BgL_letzd2varzd2_bglt BGl_letzd2orzd2letrecz00zzast_letz00(obj_t
		BgL_letzf2letreczf2_27, BgL_letzd2varzd2_bglt BgL_nodezd2letzd2_28,
		obj_t BgL_varsz00_29)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 261 */
			{
				BgL_letzd2varzd2_bglt BgL_nodez00_1338;

				BgL_letzd2varzd2_bglt BgL_nodez00_1351;

				{	/* Ast/let.scm 357 */
					bool_t BgL_testz00_2547;

					if ((BgL_letzf2letreczf2_27 == CNST_TABLE_REF(((long) 0))))
						{	/* Ast/let.scm 357 */
							BgL_testz00_2547 = ((bool_t) 1);
						}
					else
						{	/* Ast/let.scm 357 */
							BgL_testz00_2547 =
								(BgL_letzf2letreczf2_27 == BGl_za2letza2z00zzast_letz00);
						}
					if (BgL_testz00_2547)
						{	/* Ast/let.scm 357 */
							return BgL_nodezd2letzd2_28;
						}
					else
						{	/* Ast/let.scm 359 */
							bool_t BgL_testz00_2552;

							BgL_nodez00_1338 = BgL_nodezd2letzd2_28;
							{
								obj_t BgL_l3448z00_1343;

								BgL_l3448z00_1343 =
									(((BgL_letzd2varzd2_bglt) CREF(BgL_nodez00_1338))->
									BgL_bindingsz00);
							BgL_zc3anonymousza33733ze3z83_1344:
								if (NULLP(BgL_l3448z00_1343))
									{	/* Ast/let.scm 347 */
										BgL_testz00_2552 = ((bool_t) 1);
									}
								else
									{	/* Ast/let.scm 347 */
										if (BGl_safezd2reczd2valzf3zf3zzast_letz00(CDR(CAR
													(BgL_l3448z00_1343))))
											{
												obj_t BgL_l3448z00_2559;

												BgL_l3448z00_2559 = CDR(BgL_l3448z00_1343);
												BgL_l3448z00_1343 = BgL_l3448z00_2559;
												goto BgL_zc3anonymousza33733ze3z83_1344;
											}
										else
											{	/* Ast/let.scm 347 */
												BgL_testz00_2552 = ((bool_t) 0);
											}
									}
							}
							if (BgL_testz00_2552)
								{	/* Ast/let.scm 359 */
									return BgL_nodezd2letzd2_28;
								}
							else
								{	/* Ast/let.scm 361 */
									bool_t BgL_testz00_2562;

									if (
										((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >=
											((long) 1)))
										{	/* Ast/let.scm 361 */
											if (CBOOL(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
												{	/* Ast/let.scm 361 */
													BgL_testz00_2562 = ((bool_t) 0);
												}
											else
												{	/* Ast/let.scm 361 */
													BgL_nodez00_1351 = BgL_nodezd2letzd2_28;
													{
														obj_t BgL_l3451z00_1356;

														BgL_l3451z00_1356 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodez00_1351))->BgL_bindingsz00);
													BgL_zc3anonymousza33739ze3z83_1357:
														if (NULLP(BgL_l3451z00_1356))
															{	/* Ast/let.scm 351 */
																BgL_testz00_2562 = ((bool_t) 1);
															}
														else
															{	/* Ast/let.scm 351 */
																bool_t BgL_testz00_2570;

																{	/* Ast/let.scm 352 */
																	obj_t BgL_bz00_1361;

																	BgL_bz00_1361 = CAR(BgL_l3451z00_1356);
																	{	/* Ast/let.scm 352 */
																		bool_t BgL_testz00_2572;

																		{	/* Ast/let.scm 352 */
																			obj_t BgL_auxz00_2573;

																			{	/* Ast/let.scm 352 */
																				BgL_variablez00_bglt
																					BgL_obj1614z00_2134;
																				{	/* Ast/let.scm 352 */
																					obj_t BgL_pairz00_2133;

																					BgL_pairz00_2133 = BgL_bz00_1361;
																					BgL_obj1614z00_2134 =
																						(BgL_variablez00_bglt) (CAR
																						(BgL_pairz00_2133));
																				}
																				BgL_auxz00_2573 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_obj1614z00_2134))->
																					BgL_accessz00);
																			}
																			BgL_testz00_2572 =
																				(BgL_auxz00_2573 ==
																				CNST_TABLE_REF(((long) 4)));
																		}
																		if (BgL_testz00_2572)
																			{	/* Ast/let.scm 352 */
																				BgL_testz00_2570 =
																					BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00
																					(CDR(BgL_bz00_1361), BgL_varsz00_29);
																			}
																		else
																			{	/* Ast/let.scm 352 */
																				BgL_testz00_2570 = ((bool_t) 0);
																			}
																	}
																}
																if (BgL_testz00_2570)
																	{
																		obj_t BgL_l3451z00_2581;

																		BgL_l3451z00_2581 = CDR(BgL_l3451z00_1356);
																		BgL_l3451z00_1356 = BgL_l3451z00_2581;
																		goto BgL_zc3anonymousza33739ze3z83_1357;
																	}
																else
																	{	/* Ast/let.scm 351 */
																		BgL_testz00_2562 = ((bool_t) 0);
																	}
															}
													}
												}
										}
									else
										{	/* Ast/let.scm 361 */
											BgL_testz00_2562 = ((bool_t) 0);
										}
									if (BgL_testz00_2562)
										{	/* Ast/let.scm 361 */
											return BgL_nodezd2letzd2_28;
										}
									else
										{	/* Ast/let.scm 361 */
											if (
												(BgL_letzf2letreczf2_27 == CNST_TABLE_REF(((long) 5))))
												{	/* Ast/let.scm 364 */
													obj_t BgL_bindingsz00_1133;

													BgL_bindingsz00_1133 =
														(((BgL_letzd2varzd2_bglt)
															CREF(BgL_nodezd2letzd2_28))->BgL_bindingsz00);
													{	/* Ast/let.scm 364 */
														BgL_nodez00_bglt BgL_bodyz00_1134;

														BgL_bodyz00_1134 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodezd2letzd2_28))->BgL_bodyz00);
														{	/* Ast/let.scm 365 */
															BgL_sequencez00_bglt BgL_seqz00_1135;

															{	/* Ast/let.scm 366 */
																bool_t BgL_testz00_2589;

																{	/* Ast/let.scm 366 */
																	obj_t BgL_obj2238z00_2012;

																	BgL_obj2238z00_2012 =
																		(obj_t) (BgL_bodyz00_1134);
																	BgL_testz00_2589 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2238z00_2012,
																		BGl_sequencez00zzast_nodez00);
																}
																if (BgL_testz00_2589)
																	{	/* Ast/let.scm 366 */
																		BgL_seqz00_1135 =
																			(BgL_sequencez00_bglt) (BgL_bodyz00_1134);
																	}
																else
																	{	/* Ast/let.scm 369 */
																		obj_t BgL_arg3630z00_1159;

																		obj_t BgL_arg3632z00_1161;

																		BgL_arg3630z00_1159 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_bodyz00_1134))->BgL_locz00);
																		{	/* Ast/let.scm 371 */
																			obj_t BgL_list3633z00_1162;

																			BgL_list3633z00_1162 =
																				MAKE_PAIR(
																				(obj_t) (BgL_bodyz00_1134), BNIL);
																			BgL_arg3632z00_1161 =
																				BgL_list3633z00_1162;
																		}
																		BgL_seqz00_1135 =
																			BGl_makezd2sequencezd2zzast_nodez00
																			(BgL_arg3630z00_1159,
																			(BgL_typez00_bglt)
																			(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
																			BINT(((long) -1)), BgL_arg3632z00_1161);
															}}
															{	/* Ast/let.scm 366 */

																{
																	BgL_nodez00_bglt BgL_auxz00_2599;

																	BgL_auxz00_2599 =
																		(BgL_nodez00_bglt) (BgL_seqz00_1135);
																	((((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodezd2letzd2_28))->
																			BgL_bodyz00) =
																		((BgL_nodez00_bglt) BgL_auxz00_2599),
																		BUNSPEC);
																}
																{
																	obj_t BgL_bindingsz00_1138;

																	obj_t BgL_nsequencez00_1139;

																	BgL_bindingsz00_1138 = BgL_bindingsz00_1133;
																	BgL_nsequencez00_1139 = BNIL;
																BgL_zc3anonymousza33617ze3z83_1140:
																	if (NULLP(BgL_bindingsz00_1138))
																		{	/* Ast/let.scm 375 */
																			{	/* Ast/let.scm 379 */
																				BgL_sequencez00_bglt
																					BgL_arg3619z00_1142;
																				{	/* Ast/let.scm 379 */
																					obj_t BgL_arg3620z00_1143;

																					obj_t BgL_arg3622z00_1145;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2604;

																						BgL_auxz00_2604 =
																							(BgL_nodez00_bglt)
																							(BgL_seqz00_1135);
																						BgL_arg3620z00_1143 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2604))->
																							BgL_locz00);
																					}
																					{	/* Ast/let.scm 381 */
																						obj_t BgL_arg3623z00_1146;

																						obj_t BgL_arg3624z00_1147;

																						BgL_arg3623z00_1146 =
																							bgl_reverse_bang
																							(BgL_nsequencez00_1139);
																						BgL_arg3624z00_1147 =
																							(((BgL_sequencez00_bglt)
																								CREF(BgL_seqz00_1135))->
																							BgL_nodesz00);
																						BgL_arg3622z00_1145 =
																							bgl_append2(BgL_arg3623z00_1146,
																							BgL_arg3624z00_1147);
																					}
																					BgL_arg3619z00_1142 =
																						BGl_makezd2sequencezd2zzast_nodez00
																						(BgL_arg3620z00_1143,
																						(BgL_typez00_bglt)
																						(BGl_za2_za2z00zztype_cachez00),
																						BUNSPEC, BINT(((long) -1)),
																						BgL_arg3622z00_1145);
																				}
																				{
																					BgL_nodez00_bglt BgL_auxz00_2613;

																					BgL_auxz00_2613 =
																						(BgL_nodez00_bglt)
																						(BgL_arg3619z00_1142);
																					((((BgL_letzd2varzd2_bglt)
																								CREF(BgL_nodezd2letzd2_28))->
																							BgL_bodyz00) =
																						((BgL_nodez00_bglt)
																							BgL_auxz00_2613), BUNSPEC);
																			}}
																			return BgL_nodezd2letzd2_28;
																		}
																	else
																		{	/* Ast/let.scm 384 */
																			obj_t BgL_bindingz00_1148;

																			BgL_bindingz00_1148 =
																				CAR(BgL_bindingsz00_1138);
																			{	/* Ast/let.scm 384 */
																				obj_t BgL_varz00_1149;

																				BgL_varz00_1149 =
																					CAR(BgL_bindingz00_1148);
																				{	/* Ast/let.scm 385 */
																					obj_t BgL_valz00_1150;

																					BgL_valz00_1150 =
																						CDR(BgL_bindingz00_1148);
																					{	/* Ast/let.scm 386 */
																						obj_t BgL_locz00_1151;

																						{
																							BgL_nodez00_bglt BgL_auxz00_2619;

																							BgL_auxz00_2619 =
																								(BgL_nodez00_bglt)
																								(BgL_valz00_1150);
																							BgL_locz00_1151 =
																								(((BgL_nodez00_bglt)
																									CREF(BgL_auxz00_2619))->
																								BgL_locz00);
																						}
																						{	/* Ast/let.scm 387 */

																							{	/* Ast/let.scm 388 */
																								BgL_setqz00_bglt
																									BgL_initz00_1152;
																								{	/* Ast/let.scm 391 */
																									BgL_varz00_bglt
																										BgL_arg3628z00_1156;
																									BgL_arg3628z00_1156 =
																										BGl_makezd2varzd2zzast_nodez00
																										(BgL_locz00_1151,
																										(BgL_typez00_bglt)
																										(BGl_za2_za2z00zztype_cachez00),
																										(BgL_variablez00_bglt)
																										(BgL_varz00_1149));
																									BgL_initz00_1152 =
																										BGl_makezd2setqzd2zzast_nodez00
																										(BgL_locz00_1151,
																										(BgL_typez00_bglt)
																										(BGl_za2unspecza2z00zztype_cachez00),
																										BgL_arg3628z00_1156,
																										(BgL_nodez00_bglt)
																										(BgL_valz00_1150));
																								}
																								BGl_usezd2variablez12zc0zzast_sexpz00
																									((BgL_variablez00_bglt)
																									(BgL_varz00_1149),
																									BgL_locz00_1151,
																									CNST_TABLE_REF(((long) 6)));
																								{	/* Ast/let.scm 398 */
																									BgL_nodez00_bglt
																										BgL_arg3625z00_1153;
																									BgL_arg3625z00_1153 =
																										BGl_sexpzd2ze3nodez31zzast_sexpz00
																										(BUNSPEC, BNIL,
																										BgL_locz00_1151,
																										CNST_TABLE_REF(((long) 2)));
																									{	/* Ast/let.scm 397 */
																										obj_t BgL_auxz00_2633;

																										BgL_auxz00_2633 =
																											(obj_t)
																											(BgL_arg3625z00_1153);
																										SET_CDR(BgL_bindingz00_1148,
																											BgL_auxz00_2633);
																								}}
																								{	/* Ast/let.scm 399 */
																									obj_t BgL_arg3626z00_1154;

																									obj_t BgL_arg3627z00_1155;

																									BgL_arg3626z00_1154 =
																										CDR(BgL_bindingsz00_1138);
																									BgL_arg3627z00_1155 =
																										MAKE_PAIR(
																										(obj_t) (BgL_initz00_1152),
																										BgL_nsequencez00_1139);
																									{
																										obj_t BgL_nsequencez00_2640;

																										obj_t BgL_bindingsz00_2639;

																										BgL_bindingsz00_2639 =
																											BgL_arg3626z00_1154;
																										BgL_nsequencez00_2640 =
																											BgL_arg3627z00_1155;
																										BgL_nsequencez00_1139 =
																											BgL_nsequencez00_2640;
																										BgL_bindingsz00_1138 =
																											BgL_bindingsz00_2639;
																										goto
																											BgL_zc3anonymousza33617ze3z83_1140;
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
											else
												{	/* Ast/let.scm 402 */
													obj_t BgL_bindingsz00_1163;

													BgL_bindingsz00_1163 =
														(((BgL_letzd2varzd2_bglt)
															CREF(BgL_nodezd2letzd2_28))->BgL_bindingsz00);
													{	/* Ast/let.scm 402 */
														BgL_nodez00_bglt BgL_bodyz00_1164;

														BgL_bodyz00_1164 =
															(((BgL_letzd2varzd2_bglt)
																CREF(BgL_nodezd2letzd2_28))->BgL_bodyz00);
														{	/* Ast/let.scm 403 */
															BgL_sequencez00_bglt BgL_seqz00_1165;

															{	/* Ast/let.scm 404 */
																bool_t BgL_testz00_2643;

																{	/* Ast/let.scm 404 */
																	obj_t BgL_obj2238z00_2032;

																	BgL_obj2238z00_2032 =
																		(obj_t) (BgL_bodyz00_1164);
																	BgL_testz00_2643 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2238z00_2032,
																		BGl_sequencez00zzast_nodez00);
																}
																if (BgL_testz00_2643)
																	{	/* Ast/let.scm 404 */
																		BgL_seqz00_1165 =
																			(BgL_sequencez00_bglt) (BgL_bodyz00_1164);
																	}
																else
																	{	/* Ast/let.scm 407 */
																		obj_t BgL_arg3650z00_1198;

																		obj_t BgL_arg3652z00_1200;

																		BgL_arg3650z00_1198 =
																			(((BgL_nodez00_bglt)
																				CREF(BgL_bodyz00_1164))->BgL_locz00);
																		{	/* Ast/let.scm 409 */
																			obj_t BgL_list3653z00_1201;

																			BgL_list3653z00_1201 =
																				MAKE_PAIR(
																				(obj_t) (BgL_bodyz00_1164), BNIL);
																			BgL_arg3652z00_1200 =
																				BgL_list3653z00_1201;
																		}
																		BgL_seqz00_1165 =
																			BGl_makezd2sequencezd2zzast_nodez00
																			(BgL_arg3650z00_1198,
																			(BgL_typez00_bglt)
																			(BGl_za2_za2z00zztype_cachez00), BUNSPEC,
																			BINT(((long) -1)), BgL_arg3652z00_1200);
															}}
															{	/* Ast/let.scm 404 */

																{
																	BgL_nodez00_bglt BgL_auxz00_2653;

																	BgL_auxz00_2653 =
																		(BgL_nodez00_bglt) (BgL_seqz00_1165);
																	((((BgL_letzd2varzd2_bglt)
																				CREF(BgL_nodezd2letzd2_28))->
																			BgL_bodyz00) =
																		((BgL_nodez00_bglt) BgL_auxz00_2653),
																		BUNSPEC);
																}
																{	/* Ast/let.scm 411 */
																	obj_t BgL_g3403z00_1167;

																	BgL_g3403z00_1167 =
																		(((BgL_sequencez00_bglt)
																			CREF(BgL_seqz00_1165))->BgL_nodesz00);
																	{
																		obj_t BgL_bindingsz00_1169;

																		obj_t BgL_nbindingsz00_1170;

																		obj_t BgL_nsequencez00_1171;

																		BgL_bindingsz00_1169 = BgL_bindingsz00_1163;
																		BgL_nbindingsz00_1170 = BNIL;
																		BgL_nsequencez00_1171 = BgL_g3403z00_1167;
																	BgL_zc3anonymousza33634ze3z83_1172:
																		if (NULLP(BgL_bindingsz00_1169))
																			{	/* Ast/let.scm 415 */
																				BgL_sequencez00_bglt BgL_seqz00_1174;

																				{	/* Ast/let.scm 416 */
																					obj_t BgL_arg3639z00_1179;

																					{
																						BgL_nodez00_bglt BgL_auxz00_2659;

																						BgL_auxz00_2659 =
																							(BgL_nodez00_bglt)
																							(BgL_seqz00_1165);
																						BgL_arg3639z00_1179 =
																							(((BgL_nodez00_bglt)
																								CREF(BgL_auxz00_2659))->
																							BgL_locz00);
																					}
																					BgL_seqz00_1174 =
																						BGl_makezd2sequencezd2zzast_nodez00
																						(BgL_arg3639z00_1179,
																						(BgL_typez00_bglt)
																						(BGl_za2_za2z00zztype_cachez00),
																						BUNSPEC, BINT(((long) -1)),
																						BgL_nsequencez00_1171);
																				}
																				{	/* Ast/let.scm 415 */
																					BgL_letzd2varzd2_bglt
																						BgL_letbz00_1175;
																					{	/* Ast/let.scm 420 */
																						obj_t BgL_arg3636z00_1176;

																						BgL_typez00_bglt
																							BgL_arg3637z00_1177;
																						{
																							BgL_nodez00_bglt BgL_auxz00_2665;

																							BgL_auxz00_2665 =
																								(BgL_nodez00_bglt)
																								(BgL_nodezd2letzd2_28);
																							BgL_arg3636z00_1176 =
																								(((BgL_nodez00_bglt)
																									CREF(BgL_auxz00_2665))->
																								BgL_locz00);
																						}
																						{
																							BgL_nodez00_bglt BgL_auxz00_2668;

																							BgL_auxz00_2668 =
																								(BgL_nodez00_bglt)
																								(BgL_nodezd2letzd2_28);
																							BgL_arg3637z00_1177 =
																								(((BgL_nodez00_bglt)
																									CREF(BgL_auxz00_2668))->
																								BgL_typez00);
																						}
																						BgL_letbz00_1175 =
																							BGl_makezd2letzd2varz00zzast_nodez00
																							(BgL_arg3636z00_1176,
																							BgL_arg3637z00_1177, BUNSPEC,
																							BINT(((long) -1)),
																							BgL_nbindingsz00_1170,
																							(BgL_nodez00_bglt)
																							(BgL_seqz00_1174), ((bool_t) 1));
																					}
																					{	/* Ast/let.scm 419 */

																						{
																							BgL_nodez00_bglt BgL_auxz00_2674;

																							BgL_auxz00_2674 =
																								(BgL_nodez00_bglt)
																								(BgL_letbz00_1175);
																							((((BgL_letzd2varzd2_bglt)
																										CREF
																										(BgL_nodezd2letzd2_28))->
																									BgL_bodyz00) =
																								((BgL_nodez00_bglt)
																									BgL_auxz00_2674), BUNSPEC);
																						}
																						return BgL_nodezd2letzd2_28;
																					}
																				}
																			}
																		else
																			{	/* Ast/let.scm 427 */
																				obj_t BgL_bindingz00_1181;

																				BgL_bindingz00_1181 =
																					CAR(BgL_bindingsz00_1169);
																				{	/* Ast/let.scm 427 */
																					obj_t BgL_varz00_1182;

																					BgL_varz00_1182 =
																						CAR(BgL_bindingz00_1181);
																					{	/* Ast/let.scm 428 */
																						obj_t BgL_valz00_1183;

																						BgL_valz00_1183 =
																							CDR(BgL_bindingz00_1181);
																						{	/* Ast/let.scm 429 */
																							obj_t BgL_locz00_1184;

																							{
																								BgL_nodez00_bglt
																									BgL_auxz00_2680;
																								BgL_auxz00_2680 =
																									(BgL_nodez00_bglt)
																									(BgL_valz00_1183);
																								BgL_locz00_1184 =
																									(((BgL_nodez00_bglt)
																										CREF(BgL_auxz00_2680))->
																									BgL_locz00);
																							}
																							{	/* Ast/let.scm 430 */
																								BgL_localz00_bglt
																									BgL_nvarz00_1185;
																								{	/* Ast/let.scm 431 */
																									obj_t BgL_arg3648z00_1194;

																									{	/* Ast/let.scm 431 */

																										{	/* Ast/let.scm 431 */

																											BgL_arg3648z00_1194 =
																												BGl_gensymz00zz__r4_symbols_6_4z00
																												(BFALSE);
																										}
																									}
																									BgL_nvarz00_1185 =
																										BGl_makezd2localzd2svarz00zzast_localz00
																										(BgL_arg3648z00_1194,
																										(BgL_typez00_bglt)
																										(BGl_za2_za2z00zztype_cachez00));
																								}
																								{	/* Ast/let.scm 431 */

																									{	/* Ast/let.scm 432 */
																										BgL_setqz00_bglt
																											BgL_initz00_1186;
																										{	/* Ast/let.scm 435 */
																											BgL_varz00_bglt
																												BgL_arg3646z00_1192;
																											BgL_varz00_bglt
																												BgL_arg3647z00_1193;
																											BgL_arg3646z00_1192 =
																												BGl_makezd2varzd2zzast_nodez00
																												(BgL_locz00_1184,
																												(BgL_typez00_bglt)
																												(BGl_za2_za2z00zztype_cachez00),
																												(BgL_variablez00_bglt)
																												(BgL_varz00_1182));
																											BgL_arg3647z00_1193 =
																												BGl_makezd2varzd2zzast_nodez00
																												(BgL_locz00_1184,
																												(BgL_typez00_bglt)
																												(BGl_za2_za2z00zztype_cachez00),
																												(BgL_variablez00_bglt)
																												(BgL_nvarz00_1185));
																											BgL_initz00_1186 =
																												BGl_makezd2setqzd2zzast_nodez00
																												(BgL_locz00_1184,
																												(BgL_typez00_bglt)
																												(BGl_za2unspecza2z00zztype_cachez00),
																												BgL_arg3646z00_1192,
																												(BgL_nodez00_bglt)
																												(BgL_arg3647z00_1193));
																										}
																										BGl_usezd2variablez12zc0zzast_sexpz00
																											((BgL_variablez00_bglt)
																											(BgL_varz00_1182),
																											BgL_locz00_1184,
																											CNST_TABLE_REF(((long)
																													6)));
																										BGl_usezd2variablez12zc0zzast_sexpz00
																											((BgL_variablez00_bglt)
																											(BgL_nvarz00_1185),
																											BgL_locz00_1184,
																											CNST_TABLE_REF(((long)
																													6)));
																										{	/* Ast/let.scm 446 */
																											BgL_nodez00_bglt
																												BgL_arg3641z00_1187;
																											BgL_arg3641z00_1187 =
																												BGl_sexpzd2ze3nodez31zzast_sexpz00
																												(BUNSPEC, BNIL,
																												BgL_locz00_1184,
																												CNST_TABLE_REF(((long)
																														2)));
																											{	/* Ast/let.scm 445 */
																												obj_t BgL_auxz00_2703;

																												BgL_auxz00_2703 =
																													(obj_t)
																													(BgL_arg3641z00_1187);
																												SET_CDR
																													(BgL_bindingz00_1181,
																													BgL_auxz00_2703);
																										}}
																										{	/* Ast/let.scm 447 */
																											obj_t BgL_arg3642z00_1188;

																											obj_t BgL_arg3643z00_1189;

																											obj_t BgL_arg3644z00_1190;

																											BgL_arg3642z00_1188 =
																												CDR
																												(BgL_bindingsz00_1169);
																											{	/* Ast/let.scm 448 */
																												obj_t
																													BgL_arg3645z00_1191;
																												BgL_arg3645z00_1191 =
																													MAKE_PAIR((obj_t)
																													(BgL_nvarz00_1185),
																													BgL_valz00_1183);
																												BgL_arg3643z00_1189 =
																													MAKE_PAIR
																													(BgL_arg3645z00_1191,
																													BgL_nbindingsz00_1170);
																											}
																											BgL_arg3644z00_1190 =
																												MAKE_PAIR(
																												(obj_t)
																												(BgL_initz00_1186),
																												BgL_nsequencez00_1171);
																											{
																												obj_t
																													BgL_nsequencez00_2714;
																												obj_t
																													BgL_nbindingsz00_2713;
																												obj_t
																													BgL_bindingsz00_2712;
																												BgL_bindingsz00_2712 =
																													BgL_arg3642z00_1188;
																												BgL_nbindingsz00_2713 =
																													BgL_arg3643z00_1189;
																												BgL_nsequencez00_2714 =
																													BgL_arg3644z00_1190;
																												BgL_nsequencez00_1171 =
																													BgL_nsequencez00_2714;
																												BgL_nbindingsz00_1170 =
																													BgL_nbindingsz00_2713;
																												BgL_bindingsz00_1169 =
																													BgL_bindingsz00_2712;
																												goto
																													BgL_zc3anonymousza33634ze3z83_1172;
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
												}
										}
								}
						}
				}
			}
		}
	}



/* safe-rec-val? */
	bool_t BGl_safezd2reczd2valzf3zf3zzast_letz00(obj_t BgL_valz00_1204)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 265 */
			{	/* Ast/let.scm 264 */
				bool_t BgL__ortest_3343z00_1206;

				BgL__ortest_3343z00_1206 =
					BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1204,
					BGl_atomz00zzast_nodez00);
				if (BgL__ortest_3343z00_1206)
					{	/* Ast/let.scm 264 */
						return BgL__ortest_3343z00_1206;
					}
				else
					{	/* Ast/let.scm 264 */
						bool_t BgL__ortest_3344z00_1207;

						BgL__ortest_3344z00_1207 =
							BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1204,
							BGl_closurez00zzast_nodez00);
						if (BgL__ortest_3344z00_1207)
							{	/* Ast/let.scm 264 */
								return BgL__ortest_3344z00_1207;
							}
						else
							{	/* Ast/let.scm 264 */
								bool_t BgL__ortest_3345z00_1208;

								BgL__ortest_3345z00_1208 =
									BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1204,
									BGl_kwotez00zzast_nodez00);
								if (BgL__ortest_3345z00_1208)
									{	/* Ast/let.scm 264 */
										return BgL__ortest_3345z00_1208;
									}
								else
									{	/* Ast/let.scm 264 */
										if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1204,
												BGl_sequencez00zzast_nodez00))
											{
												obj_t BgL_l3434z00_1212;

												{
													BgL_sequencez00_bglt BgL_auxz00_2730;

													BgL_auxz00_2730 =
														(BgL_sequencez00_bglt) (BgL_valz00_1204);
													BgL_l3434z00_1212 =
														(((BgL_sequencez00_bglt) CREF(BgL_auxz00_2730))->
														BgL_nodesz00);
												}
											BgL_zc3anonymousza33657ze3z83_1213:
												if (NULLP(BgL_l3434z00_1212))
													{	/* Ast/let.scm 265 */
														return ((bool_t) 1);
													}
												else
													{	/* Ast/let.scm 265 */
														if (BGl_safezd2reczd2valzf3zf3zzast_letz00(CAR
																(BgL_l3434z00_1212)))
															{
																obj_t BgL_l3434z00_2728;

																BgL_l3434z00_2728 = CDR(BgL_l3434z00_1212);
																BgL_l3434z00_1212 = BgL_l3434z00_2728;
																goto BgL_zc3anonymousza33657ze3z83_1213;
															}
														else
															{	/* Ast/let.scm 265 */
																return ((bool_t) 0);
															}
													}
											}
										else
											{	/* Ast/let.scm 265 */
												return ((bool_t) 0);
											}
									}
							}
					}
			}
		}
	}



/* safe-rec-val-optim? */
	bool_t BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00(obj_t BgL_valz00_1219,
		obj_t BgL_varsz00_1220)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 343 */
		BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00:
			{	/* Ast/let.scm 268 */
				bool_t BgL__ortest_3347z00_1222;

				BgL__ortest_3347z00_1222 =
					BGl_safezd2reczd2valzf3zf3zzast_letz00(BgL_valz00_1219);
				if (BgL__ortest_3347z00_1222)
					{	/* Ast/let.scm 268 */
						return BgL__ortest_3347z00_1222;
					}
				else
					{	/* Ast/let.scm 268 */
						if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219,
								BGl_varz00zzast_nodez00))
							{	/* Ast/let.scm 271 */
								bool_t BgL_testz00_2737;

								{	/* Ast/let.scm 271 */
									obj_t BgL_auxz00_2738;

									{	/* Ast/let.scm 271 */
										obj_t BgL_auxz00_2739;

										{	/* Ast/let.scm 271 */
											BgL_variablez00_bglt BgL_auxz00_2740;

											{
												BgL_varz00_bglt BgL_auxz00_2741;

												BgL_auxz00_2741 = (BgL_varz00_bglt) (BgL_valz00_1219);
												BgL_auxz00_2740 =
													(((BgL_varz00_bglt) CREF(BgL_auxz00_2741))->
													BgL_variablez00);
											}
											BgL_auxz00_2739 = (obj_t) (BgL_auxz00_2740);
										}
										BgL_auxz00_2738 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2739,
											BgL_varsz00_1220);
									}
									BgL_testz00_2737 = CBOOL(BgL_auxz00_2738);
								}
								if (BgL_testz00_2737)
									{	/* Ast/let.scm 271 */
										return ((bool_t) 0);
									}
								else
									{	/* Ast/let.scm 271 */
										return ((bool_t) 1);
									}
							}
						else
							{	/* Ast/let.scm 270 */
								if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219,
										BGl_sequencez00zzast_nodez00))
									{
										obj_t BgL_valz00_2749;

										{
											BgL_sequencez00_bglt BgL_auxz00_2750;

											BgL_auxz00_2750 =
												(BgL_sequencez00_bglt) (BgL_valz00_1219);
											BgL_valz00_2749 =
												(((BgL_sequencez00_bglt) CREF(BgL_auxz00_2750))->
												BgL_nodesz00);
										}
										BgL_valz00_1219 = BgL_valz00_2749;
										goto BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
									}
								else
									{	/* Ast/let.scm 272 */
										if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219,
												BGl_appz00zzast_nodez00))
											{	/* Ast/let.scm 275 */
												BgL_appz00_bglt BgL_instance3348z00_1229;

												BgL_instance3348z00_1229 =
													(BgL_appz00_bglt) (BgL_valz00_1219);
												if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00(
														(obj_t) (
															(((BgL_appz00_bglt)
																	CREF(BgL_instance3348z00_1229))->BgL_funz00)),
														BgL_varsz00_1220))
													{
														obj_t BgL_valz00_2760;

														BgL_valz00_2760 =
															(((BgL_appz00_bglt)
																CREF(BgL_instance3348z00_1229))->BgL_argsz00);
														BgL_valz00_1219 = BgL_valz00_2760;
														goto BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
													}
												else
													{	/* Ast/let.scm 276 */
														return ((bool_t) 0);
													}
											}
										else
											{	/* Ast/let.scm 274 */
												if (PAIRP(BgL_valz00_1219))
													{
														obj_t BgL_l3437z00_1235;

														BgL_l3437z00_1235 = BgL_valz00_1219;
													BgL_zc3anonymousza33673ze3z83_1236:
														if (NULLP(BgL_l3437z00_1235))
															{	/* Ast/let.scm 279 */
																return ((bool_t) 1);
															}
														else
															{	/* Ast/let.scm 279 */
																if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00(CAR(BgL_l3437z00_1235), BgL_varsz00_1220))
																	{
																		obj_t BgL_l3437z00_2769;

																		BgL_l3437z00_2769 = CDR(BgL_l3437z00_1235);
																		BgL_l3437z00_1235 = BgL_l3437z00_2769;
																		goto BgL_zc3anonymousza33673ze3z83_1236;
																	}
																else
																	{	/* Ast/let.scm 279 */
																		return ((bool_t) 0);
																	}
															}
													}
												else
													{	/* Ast/let.scm 278 */
														if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219,
																BGl_appzd2lyzd2zzast_nodez00))
															{	/* Ast/let.scm 281 */
																BgL_appzd2lyzd2_bglt BgL_instance3351z00_1243;

																BgL_instance3351z00_1243 =
																	(BgL_appzd2lyzd2_bglt) (BgL_valz00_1219);
																if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_appzd2lyzd2_bglt) CREF(BgL_instance3351z00_1243))->BgL_funz00)), BgL_varsz00_1220))
																	{
																		obj_t BgL_valz00_2778;

																		BgL_valz00_2778 =
																			(obj_t) (
																			(((BgL_appzd2lyzd2_bglt)
																					CREF(BgL_instance3351z00_1243))->
																				BgL_argz00));
																		BgL_valz00_1219 = BgL_valz00_2778;
																		goto
																			BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																	}
																else
																	{	/* Ast/let.scm 282 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Ast/let.scm 280 */
																if (BGl_iszd2azf3z21zz__objectz00
																	(BgL_valz00_1219,
																		BGl_funcallz00zzast_nodez00))
																	{	/* Ast/let.scm 285 */
																		BgL_funcallz00_bglt
																			BgL_instance3354z00_1248;
																		BgL_instance3354z00_1248 =
																			(BgL_funcallz00_bglt) (BgL_valz00_1219);
																		if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_funcallz00_bglt) CREF(BgL_instance3354z00_1248))->BgL_funz00)), BgL_varsz00_1220))
																			{
																				obj_t BgL_valz00_2788;

																				BgL_valz00_2788 =
																					(((BgL_funcallz00_bglt)
																						CREF(BgL_instance3354z00_1248))->
																					BgL_argsz00);
																				BgL_valz00_1219 = BgL_valz00_2788;
																				goto
																					BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																			}
																		else
																			{	/* Ast/let.scm 286 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Ast/let.scm 284 */
																		if (BGl_iszd2azf3z21zz__objectz00
																			(BgL_valz00_1219,
																				BGl_externz00zzast_nodez00))
																			{	/* Ast/let.scm 289 */
																				BgL_externz00_bglt
																					BgL_instance3357z00_1253;
																				BgL_instance3357z00_1253 =
																					(BgL_externz00_bglt)
																					(BgL_valz00_1219);
																				{
																					obj_t BgL_valz00_2793;

																					BgL_valz00_2793 =
																						(((BgL_externz00_bglt)
																							CREF(BgL_instance3357z00_1253))->
																						BgL_exprza2za2);
																					BgL_valz00_1219 = BgL_valz00_2793;
																					goto
																						BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																				}
																			}
																		else
																			{	/* Ast/let.scm 288 */
																				if (BGl_iszd2azf3z21zz__objectz00
																					(BgL_valz00_1219,
																						BGl_conditionalz00zzast_nodez00))
																					{	/* Ast/let.scm 292 */
																						BgL_conditionalz00_bglt
																							BgL_instance3359z00_1256;
																						BgL_instance3359z00_1256 =
																							(BgL_conditionalz00_bglt)
																							(BgL_valz00_1219);
																						if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_conditionalz00_bglt) CREF(BgL_instance3359z00_1256))->BgL_testz00)), BgL_varsz00_1220))
																							{	/* Ast/let.scm 293 */
																								if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_conditionalz00_bglt) CREF(BgL_instance3359z00_1256))->BgL_truez00)), BgL_varsz00_1220))
																									{
																										obj_t BgL_valz00_2806;

																										BgL_valz00_2806 =
																											(obj_t) (
																											(((BgL_conditionalz00_bglt) CREF(BgL_instance3359z00_1256))->BgL_falsez00));
																										BgL_valz00_1219 =
																											BgL_valz00_2806;
																										goto
																											BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																									}
																								else
																									{	/* Ast/let.scm 294 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Ast/let.scm 293 */
																								return ((bool_t) 0);
																							}
																					}
																				else
																					{	/* Ast/let.scm 291 */
																						if (BGl_iszd2azf3z21zz__objectz00
																							(BgL_valz00_1219,
																								BGl_setqz00zzast_nodez00))
																							{	/* Ast/let.scm 297 */
																								BgL_setqz00_bglt
																									BgL_instance3363z00_1263;
																								BgL_instance3363z00_1263 =
																									(BgL_setqz00_bglt)
																									(BgL_valz00_1219);
																								if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_setqz00_bglt) CREF(BgL_instance3363z00_1263))->BgL_varz00)), BgL_varsz00_1220))
																									{
																										obj_t BgL_valz00_2816;

																										BgL_valz00_2816 =
																											(obj_t) (
																											(((BgL_setqz00_bglt)
																													CREF
																													(BgL_instance3363z00_1263))->
																												BgL_valuez00));
																										BgL_valz00_1219 =
																											BgL_valz00_2816;
																										goto
																											BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																									}
																								else
																									{	/* Ast/let.scm 298 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Ast/let.scm 296 */
																								if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_failz00zzast_nodez00))
																									{	/* Ast/let.scm 301 */
																										BgL_failz00_bglt
																											BgL_instance3366z00_1268;
																										BgL_instance3366z00_1268 =
																											(BgL_failz00_bglt)
																											(BgL_valz00_1219);
																										if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_failz00_bglt) CREF(BgL_instance3366z00_1268))->BgL_procz00)), BgL_varsz00_1220))
																											{	/* Ast/let.scm 302 */
																												if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_failz00_bglt) CREF(BgL_instance3366z00_1268))->BgL_msgz00)), BgL_varsz00_1220))
																													{
																														obj_t
																															BgL_valz00_2830;
																														BgL_valz00_2830 =
																															(obj_t) (((
																																	(BgL_failz00_bglt)
																																	CREF
																																	(BgL_instance3366z00_1268))->
																																BgL_objz00));
																														BgL_valz00_1219 =
																															BgL_valz00_2830;
																														goto
																															BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																													}
																												else
																													{	/* Ast/let.scm 303 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ast/let.scm 302 */
																												return ((bool_t) 0);
																											}
																									}
																								else
																									{	/* Ast/let.scm 300 */
																										if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_selectz00zzast_nodez00))
																											{	/* Ast/let.scm 306 */
																												BgL_selectz00_bglt
																													BgL_instance3370z00_1275;
																												BgL_instance3370z00_1275
																													=
																													(BgL_selectz00_bglt)
																													(BgL_valz00_1219);
																												if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_selectz00_bglt) CREF(BgL_instance3370z00_1275))->BgL_testz00)), BgL_varsz00_1220))
																													{
																														obj_t
																															BgL_l3439z00_1279;
																														BgL_l3439z00_1279 =
																															(((BgL_selectz00_bglt) CREF(BgL_instance3370z00_1275))->BgL_clausesz00);
																													BgL_zc3anonymousza33698ze3z83_1280:
																														if (NULLP
																															(BgL_l3439z00_1279))
																															{	/* Ast/let.scm 308 */
																																return ((bool_t)
																																	1);
																															}
																														else
																															{	/* Ast/let.scm 308 */
																																if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00(CDR(CAR(BgL_l3439z00_1279)), BgL_varsz00_1220))
																																	{
																																		obj_t
																																			BgL_l3439z00_2846;
																																		BgL_l3439z00_2846
																																			=
																																			CDR
																																			(BgL_l3439z00_1279);
																																		BgL_l3439z00_1279
																																			=
																																			BgL_l3439z00_2846;
																																		goto
																																			BgL_zc3anonymousza33698ze3z83_1280;
																																	}
																																else
																																	{	/* Ast/let.scm 308 */
																																		return (
																																			(bool_t)
																																			0);
																																	}
																															}
																													}
																												else
																													{	/* Ast/let.scm 307 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Ast/let.scm 305 */
																												if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_letzd2funzd2zzast_nodez00))
																													{	/* Ast/let.scm 312 */
																														BgL_letzd2funzd2_bglt
																															BgL_instance3373z00_1289;
																														BgL_instance3373z00_1289
																															=
																															(BgL_letzd2funzd2_bglt)
																															(BgL_valz00_1219);
																														if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_letzd2funzd2_bglt) CREF(BgL_instance3373z00_1289))->BgL_bodyz00)), BgL_varsz00_1220))
																															{
																																obj_t
																																	BgL_l3442z00_1293;
																																BgL_l3442z00_1293
																																	=
																																	(((BgL_letzd2funzd2_bglt) CREF(BgL_instance3373z00_1289))->BgL_localsz00);
																															BgL_zc3anonymousza33705ze3z83_1294:
																																if (NULLP
																																	(BgL_l3442z00_1293))
																																	{	/* Ast/let.scm 314 */
																																		return (
																																			(bool_t)
																																			1);
																																	}
																																else
																																	{	/* Ast/let.scm 314 */
																																		bool_t
																																			BgL_testz00_2858;
																																		{	/* Ast/let.scm 315 */
																																			obj_t
																																				BgL_auxz00_2859;
																																			{	/* Ast/let.scm 316 */
																																				BgL_sfunz00_bglt
																																					BgL_obj1884z00_2103;
																																				{	/* Ast/let.scm 316 */
																																					BgL_variablez00_bglt
																																						BgL_obj1611z00_2102;
																																					BgL_obj1611z00_2102
																																						=
																																						(BgL_variablez00_bglt)
																																						(CAR
																																						(BgL_l3442z00_1293));
																																					BgL_obj1884z00_2103
																																						=
																																						(BgL_sfunz00_bglt)
																																						((((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2102))->BgL_valuez00));
																																				}
																																				BgL_auxz00_2859
																																					=
																																					(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2103))->BgL_bodyz00);
																																			}
																																			BgL_testz00_2858
																																				=
																																				BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00
																																				(BgL_auxz00_2859,
																																				BgL_varsz00_1220);
																																		}
																																		if (BgL_testz00_2858)
																																			{
																																				obj_t
																																					BgL_l3442z00_2866;
																																				BgL_l3442z00_2866
																																					=
																																					CDR
																																					(BgL_l3442z00_1293);
																																				BgL_l3442z00_1293
																																					=
																																					BgL_l3442z00_2866;
																																				goto
																																					BgL_zc3anonymousza33705ze3z83_1294;
																																			}
																																		else
																																			{	/* Ast/let.scm 314 */
																																				return (
																																					(bool_t)
																																					0);
																																			}
																																	}
																															}
																														else
																															{	/* Ast/let.scm 313 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Ast/let.scm 311 */
																														if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_letzd2varzd2zzast_nodez00))
																															{	/* Ast/let.scm 319 */
																																BgL_letzd2varzd2_bglt
																																	BgL_instance3376z00_1304;
																																BgL_instance3376z00_1304
																																	=
																																	(BgL_letzd2varzd2_bglt)
																																	(BgL_valz00_1219);
																																if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_letzd2varzd2_bglt) CREF(BgL_instance3376z00_1304))->BgL_bodyz00)), BgL_varsz00_1220))
																																	{
																																		obj_t
																																			BgL_l3445z00_1308;
																																		BgL_l3445z00_1308
																																			=
																																			(((BgL_letzd2varzd2_bglt) CREF(BgL_instance3376z00_1304))->BgL_bindingsz00);
																																	BgL_zc3anonymousza33713ze3z83_1309:
																																		if (NULLP
																																			(BgL_l3445z00_1308))
																																			{	/* Ast/let.scm 321 */
																																				return (
																																					(bool_t)
																																					1);
																																			}
																																		else
																																			{	/* Ast/let.scm 321 */
																																				if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00(CDR(CAR(BgL_l3445z00_1308)), BgL_varsz00_1220))
																																					{
																																						obj_t
																																							BgL_l3445z00_2882;
																																						BgL_l3445z00_2882
																																							=
																																							CDR
																																							(BgL_l3445z00_1308);
																																						BgL_l3445z00_1308
																																							=
																																							BgL_l3445z00_2882;
																																						goto
																																							BgL_zc3anonymousza33713ze3z83_1309;
																																					}
																																				else
																																					{	/* Ast/let.scm 321 */
																																						return
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 320 */
																																		return (
																																			(bool_t)
																																			0);
																																	}
																															}
																														else
																															{	/* Ast/let.scm 318 */
																																if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_setzd2exzd2itz00zzast_nodez00))
																																	{	/* Ast/let.scm 325 */
																																		BgL_setzd2exzd2itz00_bglt
																																			BgL_instance3379z00_1318;
																																		BgL_instance3379z00_1318
																																			=
																																			(BgL_setzd2exzd2itz00_bglt)
																																			(BgL_valz00_1219);
																																		if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_instance3379z00_1318))->BgL_varz00)), BgL_varsz00_1220))
																																			{
																																				obj_t
																																					BgL_valz00_2892;
																																				BgL_valz00_2892
																																					=
																																					(obj_t)
																																					((((BgL_setzd2exzd2itz00_bglt) CREF(BgL_instance3379z00_1318))->BgL_bodyz00));
																																				BgL_valz00_1219
																																					=
																																					BgL_valz00_2892;
																																				goto
																																					BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																																			}
																																		else
																																			{	/* Ast/let.scm 326 */
																																				return (
																																					(bool_t)
																																					0);
																																			}
																																	}
																																else
																																	{	/* Ast/let.scm 324 */
																																		if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_jumpzd2exzd2itz00zzast_nodez00))
																																			{	/* Ast/let.scm 329 */
																																				BgL_jumpzd2exzd2itz00_bglt
																																					BgL_instance3382z00_1323;
																																				BgL_instance3382z00_1323
																																					=
																																					(BgL_jumpzd2exzd2itz00_bglt)
																																					(BgL_valz00_1219);
																																				if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_instance3382z00_1323))->BgL_exitz00)), BgL_varsz00_1220))
																																					{
																																						obj_t
																																							BgL_valz00_2902;
																																						BgL_valz00_2902
																																							=
																																							(obj_t)
																																							((((BgL_jumpzd2exzd2itz00_bglt) CREF(BgL_instance3382z00_1323))->BgL_valuez00));
																																						BgL_valz00_1219
																																							=
																																							BgL_valz00_2902;
																																						goto
																																							BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																																					}
																																				else
																																					{	/* Ast/let.scm 330 */
																																						return
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		else
																																			{	/* Ast/let.scm 328 */
																																				if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_makezd2boxzd2zzast_nodez00))
																																					{	/* Ast/let.scm 333 */
																																						BgL_makezd2boxzd2_bglt
																																							BgL_instance3385z00_1328;
																																						BgL_instance3385z00_1328
																																							=
																																							(BgL_makezd2boxzd2_bglt)
																																							(BgL_valz00_1219);
																																						{
																																							obj_t
																																								BgL_valz00_2908;
																																							BgL_valz00_2908
																																								=
																																								(obj_t)
																																								(
																																								(((BgL_makezd2boxzd2_bglt) CREF(BgL_instance3385z00_1328))->BgL_valuez00));
																																							BgL_valz00_1219
																																								=
																																								BgL_valz00_2908;
																																							goto
																																								BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																																						}
																																					}
																																				else
																																					{	/* Ast/let.scm 332 */
																																						if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_boxzd2refzd2zzast_nodez00))
																																							{	/* Ast/let.scm 336 */
																																								BgL_boxzd2refzd2_bglt
																																									BgL_instance3387z00_1331;
																																								BgL_instance3387z00_1331
																																									=
																																									(BgL_boxzd2refzd2_bglt)
																																									(BgL_valz00_1219);
																																								{
																																									obj_t
																																										BgL_valz00_2914;
																																									BgL_valz00_2914
																																										=
																																										(obj_t)
																																										(
																																										(((BgL_boxzd2refzd2_bglt) CREF(BgL_instance3387z00_1331))->BgL_varz00));
																																									BgL_valz00_1219
																																										=
																																										BgL_valz00_2914;
																																									goto
																																										BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																																								}
																																							}
																																						else
																																							{	/* Ast/let.scm 335 */
																																								if (BGl_iszd2azf3z21zz__objectz00(BgL_valz00_1219, BGl_boxzd2setz12zc0zzast_nodez00))
																																									{	/* Ast/let.scm 339 */
																																										BgL_boxzd2setz12zc0_bglt
																																											BgL_instance3389z00_1334;
																																										BgL_instance3389z00_1334
																																											=
																																											(BgL_boxzd2setz12zc0_bglt)
																																											(BgL_valz00_1219);
																																										if (BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00((obj_t) ((((BgL_boxzd2setz12zc0_bglt) CREF(BgL_instance3389z00_1334))->BgL_varz00)), BgL_varsz00_1220))
																																											{
																																												obj_t
																																													BgL_valz00_2924;
																																												BgL_valz00_2924
																																													=
																																													(obj_t)
																																													(
																																													(((BgL_boxzd2setz12zc0_bglt) CREF(BgL_instance3389z00_1334))->BgL_valuez00));
																																												BgL_valz00_1219
																																													=
																																													BgL_valz00_2924;
																																												goto
																																													BGl_safezd2reczd2valzd2optimzf3z21zzast_letz00;
																																											}
																																										else
																																											{	/* Ast/let.scm 340 */
																																												return
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																								else
																																									{	/* Ast/let.scm 338 */
																																										return
																																											(
																																											(bool_t)
																																											0);
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
													}
											}
									}
							}
					}
			}
		}
	}



/* let->labels */
	BgL_letzd2funzd2_bglt BGl_letzd2ze3labelsz31zzast_letz00(obj_t
		BgL_valuezd2bindingszd2_30, BgL_nodez00_bglt BgL_nodez00_31,
		obj_t BgL_sitez00_32)
	{
		AN_OBJECT;
		{	/* Ast/let.scm 458 */
			{	/* Ast/let.scm 460 */
				obj_t BgL_oldzd2funszd2_1372;

				obj_t BgL_newzd2funszd2_1373;

				if (NULLP(BgL_valuezd2bindingszd2_30))
					{	/* Ast/let.scm 460 */
						BgL_oldzd2funszd2_1372 = BNIL;
					}
				else
					{	/* Ast/let.scm 460 */
						obj_t BgL_head3456z00_1407;

						BgL_head3456z00_1407 =
							MAKE_PAIR(CAR(CAR(BgL_valuezd2bindingszd2_30)), BNIL);
						{	/* Ast/let.scm 460 */
							obj_t BgL_g3459z00_1408;

							BgL_g3459z00_1408 = CDR(BgL_valuezd2bindingszd2_30);
							{
								obj_t BgL_l3454z00_1410;

								obj_t BgL_tail3457z00_1411;

								BgL_l3454z00_1410 = BgL_g3459z00_1408;
								BgL_tail3457z00_1411 = BgL_head3456z00_1407;
							BgL_zc3anonymousza33768ze3z83_1412:
								if (NULLP(BgL_l3454z00_1410))
									{	/* Ast/let.scm 460 */
										BgL_oldzd2funszd2_1372 = BgL_head3456z00_1407;
									}
								else
									{	/* Ast/let.scm 460 */
										obj_t BgL_newtail3458z00_1414;

										BgL_newtail3458z00_1414 =
											MAKE_PAIR(CAR(CAR(BgL_l3454z00_1410)), BNIL);
										SET_CDR(BgL_tail3457z00_1411, BgL_newtail3458z00_1414);
										{
											obj_t BgL_tail3457z00_2941;

											obj_t BgL_l3454z00_2939;

											BgL_l3454z00_2939 = CDR(BgL_l3454z00_1410);
											BgL_tail3457z00_2941 = BgL_newtail3458z00_1414;
											BgL_tail3457z00_1411 = BgL_tail3457z00_2941;
											BgL_l3454z00_1410 = BgL_l3454z00_2939;
											goto BgL_zc3anonymousza33768ze3z83_1412;
										}
									}
							}
						}
					}
				if (NULLP(BgL_valuezd2bindingszd2_30))
					{	/* Ast/let.scm 461 */
						BgL_newzd2funszd2_1373 = BNIL;
					}
				else
					{	/* Ast/let.scm 461 */
						obj_t BgL_head3462z00_1425;

						BgL_head3462z00_1425 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3460z00_1427;

							obj_t BgL_tail3463z00_1428;

							BgL_l3460z00_1427 = BgL_valuezd2bindingszd2_30;
							BgL_tail3463z00_1428 = BgL_head3462z00_1425;
						BgL_zc3anonymousza33778ze3z83_1429:
							if (NULLP(BgL_l3460z00_1427))
								{	/* Ast/let.scm 461 */
									BgL_newzd2funszd2_1373 = CDR(BgL_head3462z00_1425);
								}
							else
								{	/* Ast/let.scm 461 */
									obj_t BgL_newtail3464z00_1431;

									{	/* Ast/let.scm 461 */
										BgL_localz00_bglt BgL_arg3781z00_1433;

										{	/* Ast/let.scm 461 */
											obj_t BgL_bindingz00_1435;

											BgL_bindingz00_1435 = CAR(BgL_l3460z00_1427);
											{	/* Ast/let.scm 462 */
												obj_t BgL_ovarz00_1436;

												BgL_ovarz00_1436 = CAR(BgL_bindingz00_1435);
												{	/* Ast/let.scm 462 */
													obj_t BgL_valz00_1437;

													BgL_valz00_1437 = CDR(BgL_bindingz00_1435);
													{	/* Ast/let.scm 463 */
														obj_t BgL_auxz00_1438;

														{	/* Ast/let.scm 464 */
															obj_t BgL_pairz00_2160;

															{
																BgL_letzd2funzd2_bglt BgL_auxz00_2951;

																BgL_auxz00_2951 =
																	(BgL_letzd2funzd2_bglt) (BgL_valz00_1437);
																BgL_pairz00_2160 =
																	(((BgL_letzd2funzd2_bglt)
																		CREF(BgL_auxz00_2951))->BgL_localsz00);
															}
															BgL_auxz00_1438 = CAR(BgL_pairz00_2160);
														}
														{	/* Ast/let.scm 464 */
															obj_t BgL_idz00_1439;

															{	/* Ast/let.scm 465 */
																bool_t BgL_testz00_2955;

																{
																	BgL_localz00_bglt BgL_auxz00_2956;

																	BgL_auxz00_2956 =
																		(BgL_localz00_bglt) (BgL_ovarz00_1436);
																	BgL_testz00_2955 =
																		(((BgL_localz00_bglt)
																			CREF(BgL_auxz00_2956))->BgL_userzf3zf3);
																}
																if (BgL_testz00_2955)
																	{
																		BgL_variablez00_bglt BgL_auxz00_2959;

																		BgL_auxz00_2959 =
																			(BgL_variablez00_bglt) (BgL_ovarz00_1436);
																		BgL_idz00_1439 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_2959))->BgL_idz00);
																	}
																else
																	{
																		BgL_variablez00_bglt BgL_auxz00_2962;

																		BgL_auxz00_2962 =
																			(BgL_variablez00_bglt) (BgL_auxz00_1438);
																		BgL_idz00_1439 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_2962))->BgL_idz00);
																	}
															}
															{	/* Ast/let.scm 465 */
																BgL_localz00_bglt BgL_newz00_1440;

																{	/* Ast/let.scm 468 */
																	BgL_typez00_bglt BgL_arg3786z00_1445;

																	{
																		BgL_variablez00_bglt BgL_auxz00_2965;

																		BgL_auxz00_2965 =
																			(BgL_variablez00_bglt) (BgL_auxz00_1438);
																		BgL_arg3786z00_1445 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_auxz00_2965))->BgL_typez00);
																	}
																	BgL_newz00_1440 =
																		BGl_makezd2localzd2svarz00zzast_localz00
																		(BgL_idz00_1439, BgL_arg3786z00_1445);
																}
																{	/* Ast/let.scm 468 */

																	{	/* Ast/let.scm 469 */
																		BgL_valuez00_bglt BgL_arg3783z00_1441;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2969;

																			BgL_auxz00_2969 =
																				(BgL_variablez00_bglt)
																				(BgL_auxz00_1438);
																			BgL_arg3783z00_1441 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2969))->BgL_valuez00);
																		}
																		{
																			BgL_variablez00_bglt BgL_auxz00_2972;

																			BgL_auxz00_2972 =
																				(BgL_variablez00_bglt)
																				(BgL_newz00_1440);
																			((((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_2972))->
																					BgL_valuez00) =
																				((BgL_valuez00_bglt)
																					BgL_arg3783z00_1441), BUNSPEC);
																		}
																	}
																	{	/* Ast/let.scm 470 */
																		bool_t BgL_arg3784z00_1442;

																		{	/* Ast/let.scm 470 */
																			bool_t BgL__ortest_3409z00_1443;

																			{
																				BgL_localz00_bglt BgL_auxz00_2975;

																				BgL_auxz00_2975 =
																					(BgL_localz00_bglt) (BgL_auxz00_1438);
																				BgL__ortest_3409z00_1443 =
																					(((BgL_localz00_bglt)
																						CREF(BgL_auxz00_2975))->
																					BgL_userzf3zf3);
																			}
																			if (BgL__ortest_3409z00_1443)
																				{	/* Ast/let.scm 470 */
																					BgL_arg3784z00_1442 =
																						BgL__ortest_3409z00_1443;
																				}
																			else
																				{
																					BgL_localz00_bglt BgL_auxz00_2979;

																					BgL_auxz00_2979 =
																						(BgL_localz00_bglt)
																						(BgL_ovarz00_1436);
																					BgL_arg3784z00_1442 =
																						(((BgL_localz00_bglt)
																							CREF(BgL_auxz00_2979))->
																						BgL_userzf3zf3);
																				}
																		}
																		((((BgL_localz00_bglt)
																					CREF(BgL_newz00_1440))->
																				BgL_userzf3zf3) =
																			((bool_t) BgL_arg3784z00_1442), BUNSPEC);
																	}
																	{	/* Ast/let.scm 472 */
																		obj_t BgL_arg3785z00_1444;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2983;

																			BgL_auxz00_2983 =
																				(BgL_variablez00_bglt)
																				(BgL_auxz00_1438);
																			BgL_arg3785z00_1444 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2983))->BgL_namez00);
																		}
																		{
																			BgL_variablez00_bglt BgL_auxz00_2986;

																			BgL_auxz00_2986 =
																				(BgL_variablez00_bglt)
																				(BgL_newz00_1440);
																			((((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_2986))->
																					BgL_namez00) =
																				((obj_t) BgL_arg3785z00_1444), BUNSPEC);
																		}
																	}
																	BgL_arg3781z00_1433 = BgL_newz00_1440;
																}
															}
														}
													}
												}
											}
										}
										BgL_newtail3464z00_1431 =
											MAKE_PAIR((obj_t) (BgL_arg3781z00_1433), BNIL);
									}
									SET_CDR(BgL_tail3463z00_1428, BgL_newtail3464z00_1431);
									{
										obj_t BgL_tail3463z00_2994;

										obj_t BgL_l3460z00_2992;

										BgL_l3460z00_2992 = CDR(BgL_l3460z00_1427);
										BgL_tail3463z00_2994 = BgL_newtail3464z00_1431;
										BgL_tail3463z00_1428 = BgL_tail3463z00_2994;
										BgL_l3460z00_1427 = BgL_l3460z00_2992;
										goto BgL_zc3anonymousza33778ze3z83_1429;
									}
								}
						}
					}
				{
					obj_t BgL_vbindingsz00_1375;

					obj_t BgL_nvarsz00_1376;

					BgL_vbindingsz00_1375 = BgL_valuezd2bindingszd2_30;
					BgL_nvarsz00_1376 = BgL_newzd2funszd2_1373;
				BgL_zc3anonymousza33749ze3z83_1377:
					if (NULLP(BgL_vbindingsz00_1375))
						{	/* Ast/let.scm 480 */
							BgL_nodez00_bglt BgL_bodyz00_1379;

							BgL_bodyz00_1379 =
								BGl_substitutez12z12zzast_substitutez00(BgL_oldzd2funszd2_1372,
								BgL_newzd2funszd2_1373, BgL_nodez00_31, BgL_sitez00_32);
							{	/* Ast/let.scm 480 */
								obj_t BgL_funsz00_1380;

								BgL_funsz00_1380 = bgl_reverse_bang(BgL_newzd2funszd2_1373);
								{	/* Ast/let.scm 481 */
									obj_t BgL_locz00_1381;

									{	/* Ast/let.scm 482 */
										bool_t BgL_testz00_2999;

										if (PAIRP(BgL_funsz00_1380))
											{	/* Ast/let.scm 483 */
												BgL_valuez00_bglt BgL_arg3758z00_1389;

												{
													BgL_variablez00_bglt BgL_auxz00_3002;

													BgL_auxz00_3002 =
														(BgL_variablez00_bglt) (CAR(BgL_funsz00_1380));
													BgL_arg3758z00_1389 =
														(((BgL_variablez00_bglt) CREF(BgL_auxz00_3002))->
														BgL_valuez00);
												}
												{	/* Ast/let.scm 483 */
													obj_t BgL_obj1955z00_2184;

													BgL_obj1955z00_2184 = (obj_t) (BgL_arg3758z00_1389);
													BgL_testz00_2999 =
														BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2184,
														BGl_sfunz00zzast_varz00);
												}
											}
										else
											{	/* Ast/let.scm 482 */
												BgL_testz00_2999 = ((bool_t) 0);
											}
										if (BgL_testz00_2999)
											{	/* Ast/let.scm 484 */
												BgL_nodez00_bglt BgL_obj2091z00_2188;

												{	/* Ast/let.scm 484 */
													obj_t BgL_auxz00_3008;

													{	/* Ast/let.scm 484 */
														BgL_sfunz00_bglt BgL_obj1884z00_2187;

														{	/* Ast/let.scm 484 */
															BgL_valuez00_bglt BgL_auxz00_3009;

															{
																BgL_variablez00_bglt BgL_auxz00_3010;

																BgL_auxz00_3010 =
																	(BgL_variablez00_bglt) (CAR
																	(BgL_funsz00_1380));
																BgL_auxz00_3009 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3010))->BgL_valuez00);
															}
															BgL_obj1884z00_2187 =
																(BgL_sfunz00_bglt) (BgL_auxz00_3009);
														}
														BgL_auxz00_3008 =
															(((BgL_sfunz00_bglt) CREF(BgL_obj1884z00_2187))->
															BgL_bodyz00);
													}
													BgL_obj2091z00_2188 =
														(BgL_nodez00_bglt) (BgL_auxz00_3008);
												}
												BgL_locz00_1381 =
													(((BgL_nodez00_bglt) CREF(BgL_obj2091z00_2188))->
													BgL_locz00);
											}
										else
											{	/* Ast/let.scm 482 */
												BgL_locz00_1381 =
													(((BgL_nodez00_bglt) CREF(BgL_nodez00_31))->
													BgL_locz00);
											}
									}
									{	/* Ast/let.scm 482 */

										{	/* Ast/let.scm 488 */
											BgL_typez00_bglt BgL_arg3751z00_1382;

											BgL_arg3751z00_1382 =
												(((BgL_nodez00_bglt) CREF(BgL_nodez00_31))->
												BgL_typez00);
											return
												BGl_makezd2letzd2funz00zzast_nodez00(BgL_locz00_1381,
												BgL_arg3751z00_1382, BUNSPEC, BINT(((long) -1)),
												BgL_funsz00_1380, BgL_bodyz00_1379);
						}}}}}
					else
						{	/* Ast/let.scm 492 */
							obj_t BgL_bindingz00_1391;

							BgL_bindingz00_1391 = CAR(BgL_vbindingsz00_1375);
							{	/* Ast/let.scm 492 */
								obj_t BgL_nvarz00_1392;

								BgL_nvarz00_1392 = CAR(BgL_nvarsz00_1376);
								{	/* Ast/let.scm 493 */
									BgL_valuez00_bglt BgL_sfunz00_1393;

									{
										BgL_variablez00_bglt BgL_auxz00_3024;

										BgL_auxz00_3024 = (BgL_variablez00_bglt) (BgL_nvarz00_1392);
										BgL_sfunz00_1393 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3024))->
											BgL_valuez00);
									}
									{	/* Ast/let.scm 494 */
										obj_t BgL_bodyz00_1394;

										{
											BgL_sfunz00_bglt BgL_auxz00_3027;

											BgL_auxz00_3027 = (BgL_sfunz00_bglt) (BgL_sfunz00_1393);
											BgL_bodyz00_1394 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3027))->
												BgL_bodyz00);
										}
										{	/* Ast/let.scm 495 */
											obj_t BgL_valz00_1395;

											BgL_valz00_1395 = CDR(BgL_bindingz00_1391);
											{	/* Ast/let.scm 496 */
												obj_t BgL_auxz00_1396;

												{	/* Ast/let.scm 497 */
													obj_t BgL_pairz00_2197;

													{
														BgL_letzd2funzd2_bglt BgL_auxz00_3031;

														BgL_auxz00_3031 =
															(BgL_letzd2funzd2_bglt) (BgL_valz00_1395);
														BgL_pairz00_2197 =
															(((BgL_letzd2funzd2_bglt) CREF(BgL_auxz00_3031))->
															BgL_localsz00);
													}
													BgL_auxz00_1396 = CAR(BgL_pairz00_2197);
												}
												{	/* Ast/let.scm 497 */

													{	/* Ast/let.scm 499 */
														BgL_nodez00_bglt BgL_arg3760z00_1397;

														{	/* Ast/let.scm 499 */
															obj_t BgL_arg3761z00_1398;

															obj_t BgL_arg3762z00_1399;

															obj_t BgL_arg3763z00_1400;

															BgL_arg3761z00_1398 =
																MAKE_PAIR(BgL_auxz00_1396,
																BgL_oldzd2funszd2_1372);
															BgL_arg3762z00_1399 =
																MAKE_PAIR(BgL_nvarz00_1392,
																BgL_newzd2funszd2_1373);
															BgL_arg3763z00_1400 = CNST_TABLE_REF(((long) 2));
															BgL_arg3760z00_1397 =
																BGl_substitutez12z12zzast_substitutez00
																(BgL_arg3761z00_1398, BgL_arg3762z00_1399,
																(BgL_nodez00_bglt) (BgL_bodyz00_1394),
																BgL_arg3763z00_1400);
														}
														{
															obj_t BgL_auxz00_3042;

															BgL_sfunz00_bglt BgL_auxz00_3040;

															BgL_auxz00_3042 = (obj_t) (BgL_arg3760z00_1397);
															BgL_auxz00_3040 =
																(BgL_sfunz00_bglt) (BgL_sfunz00_1393);
															((((BgL_sfunz00_bglt) CREF(BgL_auxz00_3040))->
																	BgL_bodyz00) =
																((obj_t) BgL_auxz00_3042), BUNSPEC);
													}}
													{
														obj_t BgL_nvarsz00_3047;

														obj_t BgL_vbindingsz00_3045;

														BgL_vbindingsz00_3045 = CDR(BgL_vbindingsz00_1375);
														BgL_nvarsz00_3047 = CDR(BgL_nvarsz00_1376);
														BgL_nvarsz00_1376 = BgL_nvarsz00_3047;
														BgL_vbindingsz00_1375 = BgL_vbindingsz00_3045;
														goto BgL_zc3anonymousza33749ze3z83_1377;
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_letz00()
	{
		AN_OBJECT;
		{	/* Ast/let.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_substitutez00(((long) 320228296),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_occurz00(((long) 335751924),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 52292466),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3846z00zzast_letz00));
		}
	}

#ifdef __cplusplus
}
#endif
