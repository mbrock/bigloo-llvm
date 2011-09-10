/*===========================================================================*/
/*   (Cnst/alloc.scm)                                                        */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cnst/alloc.scm)*/
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


	static obj_t BGl_za2elongzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t ucs2_string_to_utf8_string(obj_t);
	static obj_t BGl_za2cnstzd2tableza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl_za2vectorzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(obj_t,
		long);
	static obj_t BGl__cnstzd2alloczd2structz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00;
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BGL_LONGLONG_T, obj_t);
	static obj_t BGl_za2llongzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl__stopzd2cnstzd2allocz12z12zzcnst_allocz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	BGL_IMPORT obj_t BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00(obj_t);
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzcnst_allocz00();
	static obj_t BGl__cnstzd2alloczd2realz00zzcnst_allocz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	static obj_t BGl__cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2symbolzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern obj_t BGl_za2ucs2stringza2z00zztype_cachez00;
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	extern BgL_kwotez00_bglt BGl_makezd2kwotezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcoerce_coercez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_cnstz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__srfi4z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	extern BgL_sequencez00_bglt BGl_makezd2sequencezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzcnst_allocz00();
	extern obj_t BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00;
	extern obj_t BGl_za2bstringza2z00zztype_cachez00;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl__cnstzd2alloczd2listz00zzcnst_allocz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00;
	static obj_t BGl_za2globalzd2setza2zd2zzcnst_allocz00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl__cnstzd2alloczd2procedurez00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2setz00zzcnst_allocz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl__cnstzd2alloczd2llongz00zzcnst_allocz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopz00zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_cnstz12z12zzcnst_nodez00(BgL_nodez00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl__getzd2cnstzd2offsetz00zzcnst_allocz00(obj_t);
	static obj_t BGl__cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2listzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzcnst_allocz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_za2consza2z00zzcnst_cachez00;
	static obj_t BGl__cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t bigloo_strcmp(obj_t, obj_t);
	extern obj_t BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t, obj_t);
	BGL_IMPORT bool_t ucs2_strcmp(obj_t, obj_t);
	static obj_t BGl__getzd2cnstzd2tablez00zzcnst_allocz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcnst_allocz00 = BUNSPEC;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static BgL_appz00_bglt BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(obj_t,
		obj_t);
	static obj_t BGl__cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzcnst_allocz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2realz00zzcnst_allocz00(obj_t, obj_t);
	extern obj_t BGl_za2symbolza2z00zztype_cachez00;
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl__cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_typedzd2cnstzd2tablezd2idzd2zzcnst_allocz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static obj_t BGl__cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2initzd2modeza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_za2realzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcnst_allocz00();
	static bool_t BGl_cnstzd2equalzf3z21zzcnst_allocz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2listz00zzcnst_allocz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(long, obj_t);
	extern BgL_nodez00_bglt BGl_coercez12z12zzcoerce_coercez00(BgL_nodez00_bglt,
		obj_t, BgL_typez00_bglt, bool_t);
	extern obj_t BGl_za2bnilza2z00zztype_cachez00;
	extern obj_t BGl_za2keywordza2z00zztype_cachez00;
	static obj_t BGl__getzd2cnstzd2setz00zzcnst_allocz00(obj_t);
	extern obj_t BGl_za2structza2z00zztype_cachez00;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(BgL_nodez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_startzd2cnstzd2allocz12z12zzcnst_allocz00();
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__cnstzd2tablezd2idz00zzcnst_allocz00(obj_t);
	extern obj_t BGl_za2listzd2ze3structza2z31zzcnst_cachez00;
	static obj_t BGl__getzd2cnstzd2sexpz00zzcnst_allocz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_za2oldzd2debugza2zd2zzcnst_allocz00 = BUNSPEC;
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00;
	static long BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
	BGL_EXPORTED_DECL obj_t BGl_cnstzd2tablezd2idz00zzcnst_allocz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
	BGL_IMPORT obj_t BGl_structzd2ze3listz31zz__structurez00(obj_t);
	static obj_t BGl_za2keywordzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl__cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_stopzd2cnstzd2allocz12z12zzcnst_allocz00();
	BGL_EXPORTED_DECL obj_t BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	static obj_t BGl__startzd2cnstzd2allocz12z12zzcnst_allocz00(obj_t);
	static obj_t BGl_za2structzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
	static obj_t BGl__cnstzd2alloczd2elongz00zzcnst_allocz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t, obj_t);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_cnstzd2alloczd2structz00zzcnst_allocz00(obj_t, obj_t);
	extern bool_t BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(obj_t);
	extern obj_t BGl_za2pairza2z00zztype_cachez00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcnst_allocz00();
	static obj_t __cnst[56];


	BGL_IMPORT obj_t BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2procedurezd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24187z00,
		BGl__cnstzd2alloczd2procedurez00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2setzd2envzd2zzcnst_allocz00,
		BgL_bgl__getza7d2cnstza7d2se4188z00,
		BGl__getzd2cnstzd2setz00zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2tablezd2idzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2tableza7d24189z00,
		BGl__cnstzd2tablezd2idz00zzcnst_allocz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string4180z00zzcnst_allocz00,
		BgL_bgl_string4180za700za7za7c4190za7,
		"old should be either #f or cnst-info", 36);
	      DEFINE_STRING(BGl_string4181z00zzcnst_allocz00,
		BgL_bgl_string4181za700za7za7c4191za7, "read-alloc-tvector", 18);
	      DEFINE_STRING(BGl_string4182z00zzcnst_allocz00,
		BgL_bgl_string4182za700za7za7c4192za7, "Unimplementable until bootstrap",
		31);
	      DEFINE_STRING(BGl_string4183z00zzcnst_allocz00,
		BgL_bgl_string4183za700za7za7c4193za7, "cnst_alloc", 10);
	      DEFINE_STRING(BGl_string4184z00zzcnst_allocz00,
		BgL_bgl_string4184za700za7za7c4194za7,
		"cnst-struct struct get-tvector-descriptor $tvector-descr-set! stvector tvector tvec hvector f64 f32 u64 s64 u32 s32 u16 s16 u8 s8 list-> vector var cnst-list pair list sllong bllong llong selong belong elong sreal real sfun procedure proc cnst-alloc-bignum a-keyword keyword cnst-alloc-symbol a-symbol symbol lib @ set! an-ucs2-string ucs2string cnst-info sstring bstring string static bdb now cnst-vector cnst* __cnsts_table ",
		426);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
		BgL_bgl__startza7d2cnstza7d24195z00,
		BGl__startzd2cnstzd2allocz12z12zzcnst_allocz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2symbolzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24196z00,
		BGl__cnstzd2alloczd2symbolz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00;
	BGL_IMPORT obj_t BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2vectorzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24197z00,
		BGl__cnstzd2alloczd2vectorz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2homogenouszd2vectorzd2envz00zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24198z00,
		BGl__cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2alloczd2listzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24199z00,
		BGl__cnstzd2alloczd2listz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_cnstzd2alloczd2realzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24200z00,
		BGl__cnstzd2alloczd2realz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2sexpzd2envzd2zzcnst_allocz00,
		BgL_bgl__getza7d2cnstza7d2se4201z00,
		BGl__getzd2cnstzd2sexpz00zzcnst_allocz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2offsetzd2envzd2zzcnst_allocz00,
		BgL_bgl__getza7d2cnstza7d2of4202z00,
		BGl__getzd2cnstzd2offsetz00zzcnst_allocz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2tvectorzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24203z00,
		BGl__cnstzd2alloczd2tvectorz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2stringzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24204z00,
		BGl__cnstzd2alloczd2stringz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2elongzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24205z00,
		BGl__cnstzd2alloczd2elongz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2bignumzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24206z00,
		BGl__cnstzd2alloczd2bignumz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2ucs2zd2stringzd2envz00zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24207z00,
		BGl__cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2cnstzd2tablezd2envzd2zzcnst_allocz00,
		BgL_bgl__getza7d2cnstza7d2ta4208z00,
		BGl__getzd2cnstzd2tablez00zzcnst_allocz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00;
	BGL_IMPORT obj_t BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2cnstzd2allocz12zd2envzc0zzcnst_allocz00,
		BgL_bgl__stopza7d2cnstza7d2a4209z00,
		BGl__stopzd2cnstzd2allocz12z12zzcnst_allocz00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2keywordzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24210z00,
		BGl__cnstzd2alloczd2keywordz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2llongzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24211z00,
		BGl__cnstzd2alloczd2llongz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_cnstzd2alloczd2structzd2envzd2zzcnst_allocz00,
		BgL_bgl__cnstza7d2allocza7d24212z00,
		BGl__cnstzd2alloczd2structz00zzcnst_allocz00, 0L, BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long
		BgL_checksumz00_2784, char *BgL_fromz00_2785)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcnst_allocz00))
				{
					BGl_requirezd2initializa7ationz75zzcnst_allocz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzcnst_allocz00();
					BGl_cnstzd2initzd2zzcnst_allocz00();
					BGl_importedzd2moduleszd2initz00zzcnst_allocz00();
					BGl_toplevelzd2initzd2zzcnst_allocz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__srfi4z00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cnst_alloc");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"cnst_alloc");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 15 */
			{	/* Cnst/alloc.scm 15 */
				obj_t BgL_cportz00_2774;

				BgL_cportz00_2774 =
					bgl_open_input_string(BGl_string4184z00zzcnst_allocz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2775;

					BgL_iz00_2775 = ((long) 55);
				BgL_loopz00_2776:
					if ((BgL_iz00_2775 == ((long) -1)))
						{	/* Cnst/alloc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cnst/alloc.scm 15 */
							{	/* Cnst/alloc.scm 15 */
								obj_t BgL_arg4186z00_2778;

								{	/* Cnst/alloc.scm 15 */

									{	/* Cnst/alloc.scm 15 */
										obj_t BgL_locationz00_2780;

										BgL_locationz00_2780 = BBOOL(((bool_t) 0));
										{	/* Cnst/alloc.scm 15 */

											BgL_arg4186z00_2778 =
												BGl_readz00zz__readerz00(BgL_cportz00_2774,
												BgL_locationz00_2780);
										}
									}
								}
								{	/* Cnst/alloc.scm 15 */
									int BgL_auxz00_2811;

									BgL_auxz00_2811 = (int) (BgL_iz00_2775);
									CNST_TABLE_SET(BgL_auxz00_2811, BgL_arg4186z00_2778);
							}}
							{	/* Cnst/alloc.scm 15 */
								int BgL_auxz00_2781;

								BgL_auxz00_2781 = (int) ((BgL_iz00_2775 - ((long) 1)));
								{
									long BgL_iz00_2816;

									BgL_iz00_2816 = (long) (BgL_auxz00_2781);
									BgL_iz00_2775 = BgL_iz00_2816;
									goto BgL_loopz00_2776;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 15 */
			BGl_za2cnstzd2tableza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 = ((long) -1);
			BGl_za2stringzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2realzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2elongzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2llongzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2symbolzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2keywordzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2listzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2vectorzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2structzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2globalzd2setza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 = BNIL;
			return (BGl_za2oldzd2debugza2zd2zzcnst_allocz00 = BUNSPEC, BUNSPEC);
		}
	}



/* get-cnst-offset */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2offsetz00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 74 */
			return BINT(BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
		}
	}



/* _get-cnst-offset */
	obj_t BGl__getzd2cnstzd2offsetz00zzcnst_allocz00(obj_t BgL_envz00_2700)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 74 */
			return BGl_getzd2cnstzd2offsetz00zzcnst_allocz00();
		}
	}



/* get-cnst-set */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2setz00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 80 */
			return BGl_za2globalzd2setza2zd2zzcnst_allocz00;
		}
	}



/* _get-cnst-set */
	obj_t BGl__getzd2cnstzd2setz00zzcnst_allocz00(obj_t BgL_envz00_2701)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 80 */
			return BGl_za2globalzd2setza2zd2zzcnst_allocz00;
		}
	}



/* get-cnst-table */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 86 */
			return BGl_za2cnstzd2tableza2zd2zzcnst_allocz00;
		}
	}



/* _get-cnst-table */
	obj_t BGl__getzd2cnstzd2tablez00zzcnst_allocz00(obj_t BgL_envz00_2702)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 86 */
			return BGl_za2cnstzd2tableza2zd2zzcnst_allocz00;
		}
	}



/* get-cnst-sexp */
	BGL_EXPORTED_DEF obj_t BGl_getzd2cnstzd2sexpz00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 92 */
			return bgl_reverse_bang(BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
		}
	}



/* _get-cnst-sexp */
	obj_t BGl__getzd2cnstzd2sexpz00zzcnst_allocz00(obj_t BgL_envz00_2703)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 92 */
			return BGl_getzd2cnstzd2sexpz00zzcnst_allocz00();
		}
	}



/* cnst-table-id */
	BGL_EXPORTED_DEF obj_t BGl_cnstzd2tablezd2idz00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 134 */
			return CNST_TABLE_REF(((long) 0));
		}
	}



/* _cnst-table-id */
	obj_t BGl__cnstzd2tablezd2idz00zzcnst_allocz00(obj_t BgL_envz00_2704)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 134 */
			return BGl_cnstzd2tablezd2idz00zzcnst_allocz00();
		}
	}



/* typed-cnst-table-id */
	obj_t BGl_typedzd2cnstzd2tablezd2idzd2zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 140 */
			{	/* Cnst/alloc.scm 141 */
				obj_t BgL_arg3538z00_968;

				obj_t BgL_arg3539z00_969;

				BgL_arg3538z00_968 = CNST_TABLE_REF(((long) 0));
				BgL_arg3539z00_969 = CNST_TABLE_REF(((long) 1));
				return
					BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg3538z00_968,
					BgL_arg3539z00_969);
			}
		}
	}



/* start-cnst-alloc! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2cnstzd2allocz12z12zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 146 */
			BGl_za2oldzd2debugza2zd2zzcnst_allocz00 =
				BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
			BGl_za2compilerzd2debugza2zd2zzengine_paramz00 = BINT(((long) 0));
			{	/* Cnst/alloc.scm 152 */
				obj_t BgL_arg3540z00_970;

				obj_t BgL_arg3541z00_971;

				obj_t BgL_arg3542z00_972;

				BgL_arg3540z00_970 = BGl_typedzd2cnstzd2tablezd2idzd2zzcnst_allocz00();
				BgL_arg3541z00_971 = CNST_TABLE_REF(((long) 2));
				BgL_arg3542z00_972 = CNST_TABLE_REF(((long) 3));
				BGl_za2cnstzd2tableza2zd2zzcnst_allocz00 =
					(obj_t) (BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
					(BgL_arg3540z00_970, BGl_za2moduleza2z00zzmodule_modulez00,
						BgL_arg3541z00_971, BgL_arg3542z00_972));
			}
			{	/* Cnst/alloc.scm 159 */
				bool_t BgL_testz00_2833;

				if (
					((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
						((long) 3)))
					{	/* Cnst/alloc.scm 160 */
						obj_t BgL_arg3545z00_975;

						obj_t BgL_arg3546z00_976;

						BgL_arg3545z00_975 = CNST_TABLE_REF(((long) 4));
						{	/* Cnst/alloc.scm 160 */
							obj_t BgL_arg3547z00_977;

							BgL_arg3547z00_977 = BGl_thezd2backendzd2zzbackend_backendz00();
							{
								BgL_backendz00_bglt BgL_auxz00_2839;

								BgL_auxz00_2839 = (BgL_backendz00_bglt) (BgL_arg3547z00_977);
								BgL_arg3546z00_976 =
									(((BgL_backendz00_bglt) CREF(BgL_auxz00_2839))->
									BgL_debugzd2supportzd2);
						}}
						BgL_testz00_2833 =
							CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_arg3545z00_975,
								BgL_arg3546z00_976));
					}
				else
					{	/* Cnst/alloc.scm 159 */
						BgL_testz00_2833 = ((bool_t) 0);
					}
				if (BgL_testz00_2833)
					{	/* Cnst/alloc.scm 161 */
						BgL_globalz00_bglt BgL_obj1857z00_2108;

						obj_t BgL_val1856z00_2109;

						BgL_obj1857z00_2108 =
							(BgL_globalz00_bglt) (BGl_za2cnstzd2tableza2zd2zzcnst_allocz00);
						BgL_val1856z00_2109 = CNST_TABLE_REF(((long) 5));
						((((BgL_globalz00_bglt) CREF(BgL_obj1857z00_2108))->BgL_importz00) =
							((obj_t) BgL_val1856z00_2109), BUNSPEC);
					}
				else
					{	/* Cnst/alloc.scm 159 */
						BFALSE;
					}
			}
			BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 = ((long) 0);
			BGl_za2stringzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2realzd2envza2zd2zzcnst_allocz00 = BNIL;
			BGl_za2symbolzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2keywordzd2envza2zd2zzcnst_allocz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BNIL;
			return BTRUE;
		}
	}



/* _start-cnst-alloc! */
	obj_t BGl__startzd2cnstzd2allocz12z12zzcnst_allocz00(obj_t BgL_envz00_2705)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 146 */
			return BGl_startzd2cnstzd2allocz12z12zzcnst_allocz00();
		}
	}



/* stop-cnst-alloc! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2cnstzd2allocz12z12zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 174 */
			BGl_za2compilerzd2debugza2zd2zzengine_paramz00 =
				BGl_za2oldzd2debugza2zd2zzcnst_allocz00;
			BGl_za2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2realzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2symbolzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2keywordzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2bignumzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2listzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2vectorzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			BGl_za2structzd2envza2zd2zzcnst_allocz00 = BUNSPEC;
			return BTRUE;
		}
	}



/* _stop-cnst-alloc! */
	obj_t BGl__stopzd2cnstzd2allocz12z12zzcnst_allocz00(obj_t BgL_envz00_2706)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 174 */
			return BGl_stopzd2cnstzd2allocz12z12zzcnst_allocz00();
		}
	}



/* make-cnst-table-ref */
	BgL_appz00_bglt BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(obj_t
		BgL_offsetz00_33, obj_t BgL_locz00_34)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 190 */
			{	/* Cnst/alloc.scm 193 */
				BgL_typez00_bglt BgL_arg3552z00_982;

				BgL_varz00_bglt BgL_arg3554z00_984;

				obj_t BgL_arg3555z00_985;

				BgL_arg3552z00_982 = BGl_getzd2defaultzd2typez00zztype_cachez00();
				{	/* Cnst/alloc.scm 196 */
					BgL_typez00_bglt BgL_arg3556z00_986;

					{
						BgL_variablez00_bglt BgL_auxz00_2854;

						BgL_auxz00_2854 =
							(BgL_variablez00_bglt)
							(BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00);
						BgL_arg3556z00_986 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2854))->BgL_typez00);
					}
					BgL_arg3554z00_984 =
						BGl_makezd2varzd2zzast_nodez00(BgL_locz00_34, BgL_arg3556z00_986,
						(BgL_variablez00_bglt)
						(BGl_za2cnstzd2tablezd2refza2z00zzcnst_cachez00));
				}
				{	/* Cnst/alloc.scm 198 */
					BgL_atomz00_bglt BgL_arg3557z00_987;

					BgL_arg3557z00_987 =
						BGl_makezd2atomzd2zzast_nodez00(BgL_locz00_34,
						(BgL_typez00_bglt) (BGl_za2intza2z00zztype_cachez00),
						BgL_offsetz00_33);
					{	/* Cnst/alloc.scm 198 */
						obj_t BgL_list3558z00_988;

						BgL_list3558z00_988 = MAKE_PAIR((obj_t) (BgL_arg3557z00_987), BNIL);
						BgL_arg3555z00_985 = BgL_list3558z00_988;
					}
				}
				return
					BGl_makezd2appzd2zzast_nodez00(BgL_locz00_34, BgL_arg3552z00_982,
					BUNSPEC, BINT(((long) -1)), BgL_arg3554z00_984, BgL_arg3555z00_985);
		}}
	}



/* cnst-alloc-string */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t BgL_stringz00_35,
		obj_t BgL_locz00_36)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 210 */
			{

				{	/* Cnst/alloc.scm 225 */
					obj_t BgL_oldz00_990;

					{	/* Cnst/alloc.scm 225 */
						obj_t BgL__andtest_3430z00_992;

						BgL__andtest_3430z00_992 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_3430z00_992))
							{	/* Cnst/alloc.scm 225 */
								BgL_oldz00_990 =
									BGl_hashtablezd2getzd2zz__hashz00
									(BGl_za2stringzd2envza2zd2zzcnst_allocz00, BgL_stringz00_35);
							}
						else
							{	/* Cnst/alloc.scm 225 */
								BgL_oldz00_990 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_990))
						{	/* Cnst/alloc.scm 231 */
							obj_t BgL_arg3559z00_991;

							BgL_arg3559z00_991 =
								STRUCT_REF(BgL_oldz00_990, (int) (((long) 1)));
							return
								(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
								(BgL_locz00_36,
									(BgL_typez00_bglt) (BGl_za2bstringza2z00zztype_cachez00),
									(BgL_variablez00_bglt) (BgL_arg3559z00_991)));
						}
					else
						{	/* Cnst/alloc.scm 233 */
							BgL_varz00_bglt BgL_auxz00_2876;

							{	/* Cnst/alloc.scm 213 */
								BgL_globalz00_bglt BgL_varz00_994;

								{	/* Cnst/alloc.scm 213 */
									obj_t BgL_arg3562z00_996;

									obj_t BgL_arg3563z00_997;

									{	/* Cnst/alloc.scm 213 */
										obj_t BgL_arg3564z00_998;

										obj_t BgL_arg3565z00_999;

										BgL_arg3564z00_998 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													6)));
										BgL_arg3565z00_999 = CNST_TABLE_REF(((long) 7));
										BgL_arg3562z00_996 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg3564z00_998, BgL_arg3565z00_999);
									}
									BgL_arg3563z00_997 = CNST_TABLE_REF(((long) 8));
									BgL_varz00_994 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg3562z00_996, BGl_za2moduleza2z00zzmodule_modulez00,
										BgL_stringz00_35, BgL_arg3563z00_997, BgL_locz00_36);
								}
								if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
									{	/* Cnst/alloc.scm 220 */
										obj_t BgL_arg3561z00_995;

										{	/* Cnst/alloc.scm 220 */
											obj_t BgL_newz00_2118;

											BgL_newz00_2118 =
												create_struct(CNST_TABLE_REF(((long) 9)),
												(int) (((long) 2)));
											{	/* Cnst/alloc.scm 220 */
												obj_t BgL_auxz00_2890;

												int BgL_auxz00_2888;

												BgL_auxz00_2890 = (obj_t) (BgL_varz00_994);
												BgL_auxz00_2888 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2118, BgL_auxz00_2888,
													BgL_auxz00_2890);
											}
											{	/* Cnst/alloc.scm 220 */
												int BgL_auxz00_2893;

												BgL_auxz00_2893 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2118, BgL_auxz00_2893,
													BgL_stringz00_35);
											}
											BgL_arg3561z00_995 = BgL_newz00_2118;
										}
										BGl_hashtablezd2putz12zc0zz__hashz00
											(BGl_za2stringzd2envza2zd2zzcnst_allocz00,
											BgL_stringz00_35, BgL_arg3561z00_995);
									}
								else
									{	/* Cnst/alloc.scm 219 */
										BFALSE;
									}
								BgL_auxz00_2876 =
									BGl_makezd2varzd2zzast_nodez00(BgL_locz00_36,
									(BgL_typez00_bglt) (BGl_za2bstringza2z00zztype_cachez00),
									(BgL_variablez00_bglt) (BgL_varz00_994));
							}
							return (BgL_nodez00_bglt) (BgL_auxz00_2876);
						}
				}
			}
		}
	}



/* _cnst-alloc-string */
	obj_t BGl__cnstzd2alloczd2stringz00zzcnst_allocz00(obj_t BgL_envz00_2707,
		obj_t BgL_stringz00_2708, obj_t BgL_locz00_2709)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 210 */
			return
				(obj_t) (BGl_cnstzd2alloczd2stringz00zzcnst_allocz00(BgL_stringz00_2708,
					BgL_locz00_2709));
		}
	}



/* cnst-alloc-ucs2-string */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t BgL_stringz00_37,
		obj_t BgL_locz00_38)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 238 */
			{
				obj_t BgL_bstringz00_1015;

				{	/* Cnst/alloc.scm 270 */
					obj_t BgL_oldz00_1003;

					obj_t BgL_stringzd2aszd2bstringz00_1004;

					BgL_oldz00_1003 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00, BgL_stringz00_37);
					BgL_stringzd2aszd2bstringz00_1004 =
						ucs2_string_to_utf8_string(BgL_stringz00_37);
					if (CBOOL(BgL_oldz00_1003))
						{	/* Cnst/alloc.scm 273 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 277 */
									BgL_typez00_bglt BgL_arg3567z00_1006;

									obj_t BgL_arg3568z00_1007;

									BgL_arg3567z00_1006 =
										BGl_getzd2defaultzd2typez00zztype_cachez00();
									BgL_arg3568z00_1007 =
										STRUCT_REF(BgL_oldz00_1003, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
										(BgL_locz00_38, BgL_arg3567z00_1006,
											(BgL_variablez00_bglt) (BgL_arg3568z00_1007)));
								}
							else
								{	/* Cnst/alloc.scm 279 */
									obj_t BgL_arg3569z00_1008;

									BgL_arg3569z00_1008 =
										STRUCT_REF(BgL_oldz00_1003, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt)
										(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg3569z00_1008, BgL_locz00_38));
								}
						}
					else
						{	/* Cnst/alloc.scm 280 */
							bool_t BgL_testz00_2920;

							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 280 */
									BgL_testz00_2920 = ((bool_t) 1);
								}
							else
								{	/* Cnst/alloc.scm 280 */
									if (
										(STRING_LENGTH(BgL_stringzd2aszd2bstringz00_1004) ==
											((long) 0)))
										{	/* Cnst/alloc.scm 281 */
											BgL_testz00_2920 = ((bool_t) 1);
										}
									else
										{	/* Cnst/alloc.scm 281 */
											BgL_testz00_2920 =
												(STRING_REF(BgL_stringzd2aszd2bstringz00_1004,
													((long) 0)) == ((unsigned char) ';'));
								}}
							if (BgL_testz00_2920)
								{	/* Cnst/alloc.scm 283 */
									BgL_varz00_bglt BgL_auxz00_2929;

									BgL_bstringz00_1015 = BgL_stringzd2aszd2bstringz00_1004;
									{	/* Cnst/alloc.scm 240 */
										BgL_globalz00_bglt BgL_varz00_1017;

										BgL_nodez00_bglt BgL_vsz00_1018;

										{	/* Cnst/alloc.scm 240 */
											obj_t BgL_arg3599z00_1041;

											obj_t BgL_arg3600z00_1042;

											obj_t BgL_arg3601z00_1043;

											{	/* Cnst/alloc.scm 240 */
												obj_t BgL_arg3602z00_1044;

												obj_t BgL_arg3603z00_1045;

												BgL_arg3602z00_1044 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 10)));
												BgL_arg3603z00_1045 = CNST_TABLE_REF(((long) 10));
												BgL_arg3599z00_1041 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg3602z00_1044, BgL_arg3603z00_1045);
											}
											BgL_arg3600z00_1042 = CNST_TABLE_REF(((long) 11));
											BgL_arg3601z00_1043 = CNST_TABLE_REF(((long) 3));
											BgL_varz00_1017 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg3599z00_1041,
												BGl_za2moduleza2z00zzmodule_modulez00,
												BgL_arg3600z00_1042, BgL_arg3601z00_1043);
										}
										BgL_vsz00_1018 =
											BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
											(BgL_bstringz00_1015, BgL_locz00_38);
										{	/* Cnst/alloc.scm 246 */
											obj_t BgL_arg3577z00_1019;

											{	/* Cnst/alloc.scm 246 */
												obj_t BgL_newz00_2145;

												BgL_newz00_2145 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 246 */
													obj_t BgL_auxz00_2943;

													int BgL_auxz00_2941;

													BgL_auxz00_2943 = (obj_t) (BgL_varz00_1017);
													BgL_auxz00_2941 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2145, BgL_auxz00_2941,
														BgL_auxz00_2943);
												}
												{	/* Cnst/alloc.scm 246 */
													int BgL_auxz00_2946;

													BgL_auxz00_2946 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2145, BgL_auxz00_2946,
														BgL_stringz00_37);
												}
												BgL_arg3577z00_1019 = BgL_newz00_2145;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00,
												BgL_stringz00_37, BgL_arg3577z00_1019);
										}
										{	/* Cnst/alloc.scm 247 */
											obj_t BgL_arg3578z00_1020;

											{	/* Cnst/alloc.scm 247 */
												obj_t BgL_arg3579z00_1021;

												obj_t BgL_arg3580z00_1022;

												BgL_arg3579z00_1021 = CNST_TABLE_REF(((long) 12));
												{	/* Cnst/alloc.scm 247 */
													obj_t BgL_arg3581z00_1023;

													BgL_nodez00_bglt BgL_arg3582z00_1024;

													{	/* Cnst/alloc.scm 247 */
														obj_t BgL_arg3586z00_1028;

														obj_t BgL_arg3587z00_1029;

														BgL_arg3586z00_1028 = CNST_TABLE_REF(((long) 13));
														{	/* Cnst/alloc.scm 247 */
															obj_t BgL_arg3588z00_1030;

															obj_t BgL_arg3589z00_1031;

															{
																BgL_variablez00_bglt BgL_auxz00_2952;

																BgL_auxz00_2952 =
																	(BgL_variablez00_bglt) (BgL_varz00_1017);
																BgL_arg3588z00_1030 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_2952))->BgL_idz00);
															}
															BgL_arg3589z00_1031 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1017))->
																BgL_modulez00);
															{	/* Cnst/alloc.scm 247 */
																obj_t BgL_list3591z00_1033;

																{	/* Cnst/alloc.scm 247 */
																	obj_t BgL_arg3592z00_1034;

																	BgL_arg3592z00_1034 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3591z00_1033 =
																		MAKE_PAIR(BgL_arg3589z00_1031,
																		BgL_arg3592z00_1034);
																}
																BgL_arg3587z00_1029 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3588z00_1030, BgL_list3591z00_1033);
														}}
														BgL_arg3581z00_1023 =
															MAKE_PAIR(BgL_arg3586z00_1028,
															BgL_arg3587z00_1029);
													}
													{	/* Cnst/alloc.scm 249 */
														BgL_appz00_bglt BgL_arg3593z00_1035;

														{	/* Cnst/alloc.scm 249 */
															BgL_varz00_bglt BgL_arg3595z00_1037;

															obj_t BgL_arg3596z00_1038;

															BgL_arg3595z00_1037 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_38,
																(BgL_typez00_bglt)
																(BGl_za2ucs2stringza2z00zztype_cachez00),
																(BgL_variablez00_bglt)
																(BGl_za2stringzd2ze3ucs2stringza2z31zzcnst_cachez00));
															{	/* Cnst/alloc.scm 256 */
																obj_t BgL_list3597z00_1039;

																BgL_list3597z00_1039 =
																	MAKE_PAIR((obj_t) (BgL_vsz00_1018), BNIL);
																BgL_arg3596z00_1038 = BgL_list3597z00_1039;
															}
															BgL_arg3593z00_1035 =
																BGl_makezd2appzd2zzast_nodez00(BgL_locz00_38,
																(BgL_typez00_bglt)
																(BGl_za2ucs2stringza2z00zztype_cachez00),
																BUNSPEC, BINT(((long) -1)), BgL_arg3595z00_1037,
																BgL_arg3596z00_1038);
														}
														BgL_arg3582z00_1024 =
															BGl_coercez12z12zzcoerce_coercez00(
															(BgL_nodez00_bglt) (BgL_arg3593z00_1035),
															(obj_t) (BgL_varz00_1017),
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00), ((bool_t) 0));
													}
													{	/* Cnst/alloc.scm 247 */
														obj_t BgL_list3584z00_1026;

														{	/* Cnst/alloc.scm 247 */
															obj_t BgL_arg3585z00_1027;

															BgL_arg3585z00_1027 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3584z00_1026 =
																MAKE_PAIR(
																(obj_t) (BgL_arg3582z00_1024),
																BgL_arg3585z00_1027);
														}
														BgL_arg3580z00_1022 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3581z00_1023, BgL_list3584z00_1026);
												}}
												BgL_arg3578z00_1020 =
													MAKE_PAIR(BgL_arg3579z00_1021, BgL_arg3580z00_1022);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg3578z00_1020,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 262 */
											BgL_typez00_bglt BgL_arg3598z00_1040;

											{
												BgL_variablez00_bglt BgL_auxz00_2978;

												BgL_auxz00_2978 =
													(BgL_variablez00_bglt) (BgL_varz00_1017);
												BgL_arg3598z00_1040 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2978))->
													BgL_typez00);
											}
											BgL_auxz00_2929 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_38,
												BgL_arg3598z00_1040,
												(BgL_variablez00_bglt) (BgL_varz00_1017));
									}}
									return (BgL_nodez00_bglt) (BgL_auxz00_2929);
								}
							else
								{	/* Cnst/alloc.scm 285 */
									BgL_appz00_bglt BgL_auxz00_2984;

									{	/* Cnst/alloc.scm 265 */
										long BgL_offsetz00_1047;

										BgL_offsetz00_1047 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_PAIR(BgL_stringz00_37,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										{	/* Cnst/alloc.scm 268 */
											obj_t BgL_arg3605z00_1048;

											{	/* Cnst/alloc.scm 268 */
												obj_t BgL_newz00_2166;

												BgL_newz00_2166 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 268 */
													obj_t BgL_auxz00_2992;

													int BgL_auxz00_2990;

													BgL_auxz00_2992 = BINT(BgL_offsetz00_1047);
													BgL_auxz00_2990 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2166, BgL_auxz00_2990,
														BgL_auxz00_2992);
												}
												{	/* Cnst/alloc.scm 268 */
													int BgL_auxz00_2995;

													BgL_auxz00_2995 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2166, BgL_auxz00_2995,
														BgL_stringz00_37);
												}
												BgL_arg3605z00_1048 = BgL_newz00_2166;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2ucs2stringzd2envza2zd2zzcnst_allocz00,
												BgL_stringz00_37, BgL_arg3605z00_1048);
										}
										BgL_auxz00_2984 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1047), BgL_locz00_38);
									}
									return (BgL_nodez00_bglt) (BgL_auxz00_2984);
								}
						}
				}
			}
		}
	}



/* _cnst-alloc-ucs2-string */
	obj_t BGl__cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00(obj_t
		BgL_envz00_2710, obj_t BgL_stringz00_2711, obj_t BgL_locz00_2712)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 238 */
			return
				(obj_t) (BGl_cnstzd2alloczd2ucs2zd2stringzd2zzcnst_allocz00
				(BgL_stringz00_2711, BgL_locz00_2712));
		}
	}



/* cnst-alloc-symbol */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t BgL_symbolz00_39,
		obj_t BgL_locz00_40)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 290 */
			{

				{	/* Cnst/alloc.scm 321 */
					obj_t BgL_oldz00_1053;

					obj_t BgL_symbolzd2aszd2stringz00_1054;

					BgL_oldz00_1053 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2symbolzd2envza2zd2zzcnst_allocz00, BgL_symbolz00_39);
					{	/* Cnst/alloc.scm 322 */
						obj_t BgL_res4152z00_2179;

						{	/* Cnst/alloc.scm 322 */
							obj_t BgL_arg2063z00_2178;

							BgL_arg2063z00_2178 = SYMBOL_TO_STRING(BgL_symbolz00_39);
							BgL_res4152z00_2179 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2063z00_2178);
						}
						BgL_symbolzd2aszd2stringz00_1054 = BgL_res4152z00_2179;
					}
					{	/* Cnst/alloc.scm 324 */
						bool_t BgL_testz00_3007;

						if (STRUCTP(BgL_oldz00_1053))
							{	/* Cnst/alloc.scm 324 */
								BgL_testz00_3007 =
									(STRUCT_KEY(BgL_oldz00_1053) == CNST_TABLE_REF(((long) 9)));
							}
						else
							{	/* Cnst/alloc.scm 324 */
								BgL_testz00_3007 = ((bool_t) 0);
							}
						if (BgL_testz00_3007)
							{	/* Cnst/alloc.scm 326 */
								bool_t BgL_testz00_3013;

								{	/* Cnst/alloc.scm 326 */
									obj_t BgL_arg3613z00_1061;

									BgL_arg3613z00_1061 =
										STRUCT_REF(BgL_oldz00_1053, (int) (((long) 1)));
									BgL_testz00_3013 =
										BGl_iszd2azf3z21zz__objectz00(BgL_arg3613z00_1061,
										BGl_variablez00zzast_varz00);
								}
								if (BgL_testz00_3013)
									{	/* Cnst/alloc.scm 330 */
										obj_t BgL_arg3608z00_1057;

										BgL_arg3608z00_1057 =
											STRUCT_REF(BgL_oldz00_1053, (int) (((long) 1)));
										return
											(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
											(BgL_locz00_40,
												(BgL_typez00_bglt) (BGl_za2symbolza2z00zztype_cachez00),
												(BgL_variablez00_bglt) (BgL_arg3608z00_1057)));
									}
								else
									{	/* Cnst/alloc.scm 326 */
										if (
											(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 14))))
											{	/* Cnst/alloc.scm 335 */
												obj_t BgL_arg3610z00_1059;

												BgL_arg3610z00_1059 =
													STRUCT_REF(BgL_oldz00_1053, (int) (((long) 1)));
												return
													(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
													(BgL_locz00_40,
														(BgL_typez00_bglt)
														(BGl_za2symbolza2z00zztype_cachez00),
														(BgL_variablez00_bglt) (BgL_arg3610z00_1059)));
											}
										else
											{	/* Cnst/alloc.scm 337 */
												obj_t BgL_arg3612z00_1060;

												BgL_arg3612z00_1060 =
													STRUCT_REF(BgL_oldz00_1053, (int) (((long) 1)));
												return
													(BgL_nodez00_bglt)
													(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
													(BgL_arg3612z00_1060, BgL_locz00_40));
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 324 */
								if (CBOOL(BgL_oldz00_1053))
									{	/* Cnst/alloc.scm 339 */
										obj_t BgL_arg3614z00_1062;

										obj_t BgL_arg3616z00_1064;

										BgL_arg3614z00_1062 = CNST_TABLE_REF(((long) 17));
										BgL_arg3616z00_1064 =
											BGl_shapez00zztools_shapez00(BgL_oldz00_1053);
										return
											(BgL_nodez00_bglt)
											(BGl_internalzd2errorzd2zztools_errorz00
											(BgL_arg3614z00_1062, BGl_string4180z00zzcnst_allocz00,
												BgL_arg3616z00_1064));
									}
								else
									{	/* Cnst/alloc.scm 342 */
										bool_t BgL_testz00_3042;

										if (
											(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
												CNST_TABLE_REF(((long) 14))))
											{	/* Cnst/alloc.scm 342 */
												BgL_testz00_3042 = ((bool_t) 1);
											}
										else
											{	/* Cnst/alloc.scm 342 */
												if (
													(STRING_LENGTH(BgL_symbolzd2aszd2stringz00_1054) ==
														((long) 0)))
													{	/* Cnst/alloc.scm 343 */
														BgL_testz00_3042 = ((bool_t) 1);
													}
												else
													{	/* Cnst/alloc.scm 343 */
														BgL_testz00_3042 =
															(STRING_REF(BgL_symbolzd2aszd2stringz00_1054,
																((long) 0)) == ((unsigned char) ';'));
											}}
										if (BgL_testz00_3042)
											{	/* Cnst/alloc.scm 345 */
												BgL_varz00_bglt BgL_auxz00_3051;

												{	/* Cnst/alloc.scm 292 */
													BgL_globalz00_bglt BgL_varz00_1072;

													BgL_nodez00_bglt BgL_vsz00_1073;

													{	/* Cnst/alloc.scm 292 */
														obj_t BgL_arg3646z00_1096;

														obj_t BgL_arg3647z00_1097;

														obj_t BgL_arg3648z00_1098;

														{	/* Cnst/alloc.scm 292 */
															obj_t BgL_arg3649z00_1099;

															obj_t BgL_arg3650z00_1100;

															BgL_arg3649z00_1099 =
																BGl_gensymz00zz__r4_symbols_6_4z00
																(CNST_TABLE_REF(((long) 15)));
															BgL_arg3650z00_1100 = CNST_TABLE_REF(((long) 15));
															BgL_arg3646z00_1096 =
																BGl_makezd2typedzd2identz00zzast_identz00
																(BgL_arg3649z00_1099, BgL_arg3650z00_1100);
														}
														BgL_arg3647z00_1097 = CNST_TABLE_REF(((long) 16));
														BgL_arg3648z00_1098 = CNST_TABLE_REF(((long) 3));
														BgL_varz00_1072 =
															BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
															(BgL_arg3646z00_1096,
															BGl_za2moduleza2z00zzmodule_modulez00,
															BgL_arg3647z00_1097, BgL_arg3648z00_1098);
													}
													{	/* Cnst/alloc.scm 296 */
														obj_t BgL_arg3651z00_1101;

														{	/* Cnst/alloc.scm 296 */
															obj_t BgL_res4154z00_2209;

															{	/* Cnst/alloc.scm 296 */
																obj_t BgL_arg2063z00_2208;

																BgL_arg2063z00_2208 =
																	SYMBOL_TO_STRING(BgL_symbolz00_39);
																BgL_res4154z00_2209 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg2063z00_2208);
															}
															BgL_arg3651z00_1101 = BgL_res4154z00_2209;
														}
														BgL_vsz00_1073 =
															BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
															(BgL_arg3651z00_1101, BgL_locz00_40);
													}
													{	/* Cnst/alloc.scm 297 */
														obj_t BgL_arg3624z00_1074;

														{	/* Cnst/alloc.scm 297 */
															obj_t BgL_newz00_2212;

															BgL_newz00_2212 =
																create_struct(CNST_TABLE_REF(((long) 9)),
																(int) (((long) 2)));
															{	/* Cnst/alloc.scm 297 */
																obj_t BgL_auxz00_3067;

																int BgL_auxz00_3065;

																BgL_auxz00_3067 = (obj_t) (BgL_varz00_1072);
																BgL_auxz00_3065 = (int) (((long) 1));
																STRUCT_SET(BgL_newz00_2212, BgL_auxz00_3065,
																	BgL_auxz00_3067);
															}
															{	/* Cnst/alloc.scm 297 */
																int BgL_auxz00_3070;

																BgL_auxz00_3070 = (int) (((long) 0));
																STRUCT_SET(BgL_newz00_2212, BgL_auxz00_3070,
																	BgL_symbolz00_39);
															}
															BgL_arg3624z00_1074 = BgL_newz00_2212;
														}
														BGl_hashtablezd2putz12zc0zz__hashz00
															(BGl_za2symbolzd2envza2zd2zzcnst_allocz00,
															BgL_symbolz00_39, BgL_arg3624z00_1074);
													}
													{	/* Cnst/alloc.scm 298 */
														obj_t BgL_arg3625z00_1075;

														{	/* Cnst/alloc.scm 298 */
															obj_t BgL_arg3626z00_1076;

															obj_t BgL_arg3627z00_1077;

															BgL_arg3626z00_1076 = CNST_TABLE_REF(((long) 12));
															{	/* Cnst/alloc.scm 298 */
																obj_t BgL_arg3628z00_1078;

																BgL_nodez00_bglt BgL_arg3629z00_1079;

																{	/* Cnst/alloc.scm 298 */
																	obj_t BgL_arg3633z00_1083;

																	obj_t BgL_arg3634z00_1084;

																	BgL_arg3633z00_1083 =
																		CNST_TABLE_REF(((long) 13));
																	{	/* Cnst/alloc.scm 298 */
																		obj_t BgL_arg3635z00_1085;

																		obj_t BgL_arg3636z00_1086;

																		{
																			BgL_variablez00_bglt BgL_auxz00_3076;

																			BgL_auxz00_3076 =
																				(BgL_variablez00_bglt)
																				(BgL_varz00_1072);
																			BgL_arg3635z00_1085 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_3076))->BgL_idz00);
																		}
																		BgL_arg3636z00_1086 =
																			(((BgL_globalz00_bglt)
																				CREF(BgL_varz00_1072))->BgL_modulez00);
																		{	/* Cnst/alloc.scm 298 */
																			obj_t BgL_list3638z00_1088;

																			{	/* Cnst/alloc.scm 298 */
																				obj_t BgL_arg3639z00_1089;

																				BgL_arg3639z00_1089 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3638z00_1088 =
																					MAKE_PAIR(BgL_arg3636z00_1086,
																					BgL_arg3639z00_1089);
																			}
																			BgL_arg3634z00_1084 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3635z00_1085,
																				BgL_list3638z00_1088);
																	}}
																	BgL_arg3628z00_1078 =
																		MAKE_PAIR(BgL_arg3633z00_1083,
																		BgL_arg3634z00_1084);
																}
																{	/* Cnst/alloc.scm 300 */
																	BgL_appz00_bglt BgL_arg3640z00_1090;

																	{	/* Cnst/alloc.scm 300 */
																		BgL_varz00_bglt BgL_arg3642z00_1092;

																		obj_t BgL_arg3643z00_1093;

																		BgL_arg3642z00_1092 =
																			BGl_makezd2varzd2zzast_nodez00
																			(BgL_locz00_40,
																			(BgL_typez00_bglt)
																			(BGl_za2symbolza2z00zztype_cachez00),
																			(BgL_variablez00_bglt)
																			(BGl_za2bstringzd2ze3symbolza2z31zzcnst_cachez00));
																		{	/* Cnst/alloc.scm 307 */
																			obj_t BgL_list3644z00_1094;

																			BgL_list3644z00_1094 =
																				MAKE_PAIR(
																				(obj_t) (BgL_vsz00_1073), BNIL);
																			BgL_arg3643z00_1093 =
																				BgL_list3644z00_1094;
																		}
																		BgL_arg3640z00_1090 =
																			BGl_makezd2appzd2zzast_nodez00
																			(BgL_locz00_40,
																			(BgL_typez00_bglt)
																			(BGl_za2symbolza2z00zztype_cachez00),
																			BUNSPEC, BINT(((long) -1)),
																			BgL_arg3642z00_1092, BgL_arg3643z00_1093);
																	}
																	BgL_arg3629z00_1079 =
																		BGl_coercez12z12zzcoerce_coercez00(
																		(BgL_nodez00_bglt) (BgL_arg3640z00_1090),
																		(obj_t) (BgL_varz00_1072),
																		(BgL_typez00_bglt)
																		(BGl_za2objza2z00zztype_cachez00),
																		((bool_t) 0));
																}
																{	/* Cnst/alloc.scm 298 */
																	obj_t BgL_list3631z00_1081;

																	{	/* Cnst/alloc.scm 298 */
																		obj_t BgL_arg3632z00_1082;

																		BgL_arg3632z00_1082 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list3631z00_1081 =
																			MAKE_PAIR(
																			(obj_t) (BgL_arg3629z00_1079),
																			BgL_arg3632z00_1082);
																	}
																	BgL_arg3627z00_1077 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg3628z00_1078, BgL_list3631z00_1081);
															}}
															BgL_arg3625z00_1075 =
																MAKE_PAIR(BgL_arg3626z00_1076,
																BgL_arg3627z00_1077);
														}
														BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
															MAKE_PAIR(BgL_arg3625z00_1075,
															BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
													}
													{	/* Cnst/alloc.scm 313 */
														BgL_typez00_bglt BgL_arg3645z00_1095;

														{
															BgL_variablez00_bglt BgL_auxz00_3102;

															BgL_auxz00_3102 =
																(BgL_variablez00_bglt) (BgL_varz00_1072);
															BgL_arg3645z00_1095 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_auxz00_3102))->BgL_typez00);
														}
														BgL_auxz00_3051 =
															BGl_makezd2varzd2zzast_nodez00(BgL_locz00_40,
															BgL_arg3645z00_1095,
															(BgL_variablez00_bglt) (BgL_varz00_1072));
												}}
												return (BgL_nodez00_bglt) (BgL_auxz00_3051);
											}
										else
											{	/* Cnst/alloc.scm 347 */
												BgL_appz00_bglt BgL_auxz00_3108;

												{	/* Cnst/alloc.scm 316 */
													long BgL_offsetz00_1103;

													BgL_offsetz00_1103 =
														BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
													BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
														(((long) 1) +
														BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
													BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
														MAKE_PAIR(BgL_symbolz00_39,
														BGl_za2globalzd2setza2zd2zzcnst_allocz00);
													{	/* Cnst/alloc.scm 319 */
														obj_t BgL_arg3653z00_1104;

														{	/* Cnst/alloc.scm 319 */
															obj_t BgL_newz00_2233;

															BgL_newz00_2233 =
																create_struct(CNST_TABLE_REF(((long) 9)),
																(int) (((long) 2)));
															{	/* Cnst/alloc.scm 319 */
																obj_t BgL_auxz00_3116;

																int BgL_auxz00_3114;

																BgL_auxz00_3116 = BINT(BgL_offsetz00_1103);
																BgL_auxz00_3114 = (int) (((long) 1));
																STRUCT_SET(BgL_newz00_2233, BgL_auxz00_3114,
																	BgL_auxz00_3116);
															}
															{	/* Cnst/alloc.scm 319 */
																int BgL_auxz00_3119;

																BgL_auxz00_3119 = (int) (((long) 0));
																STRUCT_SET(BgL_newz00_2233, BgL_auxz00_3119,
																	BgL_symbolz00_39);
															}
															BgL_arg3653z00_1104 = BgL_newz00_2233;
														}
														BGl_hashtablezd2putz12zc0zz__hashz00
															(BGl_za2symbolzd2envza2zd2zzcnst_allocz00,
															BgL_symbolz00_39, BgL_arg3653z00_1104);
													}
													BgL_auxz00_3108 =
														BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
														(BgL_offsetz00_1103), BgL_locz00_40);
												}
												return (BgL_nodez00_bglt) (BgL_auxz00_3108);
											}
									}
							}
					}
				}
			}
		}
	}



/* _cnst-alloc-symbol */
	obj_t BGl__cnstzd2alloczd2symbolz00zzcnst_allocz00(obj_t BgL_envz00_2713,
		obj_t BgL_symbolz00_2714, obj_t BgL_locz00_2715)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 290 */
			return
				(obj_t) (BGl_cnstzd2alloczd2symbolz00zzcnst_allocz00(BgL_symbolz00_2714,
					BgL_locz00_2715));
		}
	}



/* cnst-alloc-keyword */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t BgL_keywordz00_41,
		obj_t BgL_locz00_42)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 352 */
			{

				{	/* Cnst/alloc.scm 384 */
					obj_t BgL_oldz00_1109;

					obj_t BgL_keywordzd2aszd2stringz00_1110;

					BgL_oldz00_1109 =
						BGl_hashtablezd2getzd2zz__hashz00
						(BGl_za2keywordzd2envza2zd2zzcnst_allocz00, BgL_keywordz00_41);
					{	/* Cnst/alloc.scm 385 */
						obj_t BgL_res4156z00_2246;

						{	/* Cnst/alloc.scm 385 */
							obj_t BgL_arg2060z00_2245;

							BgL_arg2060z00_2245 = KEYWORD_TO_STRING(BgL_keywordz00_41);
							BgL_res4156z00_2246 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg2060z00_2245);
						}
						BgL_keywordzd2aszd2stringz00_1110 = BgL_res4156z00_2246;
					}
					if (CBOOL(BgL_oldz00_1109))
						{	/* Cnst/alloc.scm 387 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 392 */
									obj_t BgL_arg3655z00_1112;

									BgL_arg3655z00_1112 =
										STRUCT_REF(BgL_oldz00_1109, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
										(BgL_locz00_42,
											(BgL_typez00_bglt) (BGl_za2keywordza2z00zztype_cachez00),
											(BgL_variablez00_bglt) (BgL_arg3655z00_1112)));
								}
							else
								{	/* Cnst/alloc.scm 393 */
									obj_t BgL_arg3656z00_1113;

									BgL_arg3656z00_1113 =
										STRUCT_REF(BgL_oldz00_1109, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt)
										(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg3656z00_1113, BgL_locz00_42));
								}
						}
					else
						{	/* Cnst/alloc.scm 394 */
							bool_t BgL_testz00_3146;

							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 394 */
									BgL_testz00_3146 = ((bool_t) 1);
								}
							else
								{	/* Cnst/alloc.scm 394 */
									if (
										(STRING_LENGTH(BgL_keywordzd2aszd2stringz00_1110) ==
											((long) 0)))
										{	/* Cnst/alloc.scm 395 */
											BgL_testz00_3146 = ((bool_t) 1);
										}
									else
										{	/* Cnst/alloc.scm 395 */
											BgL_testz00_3146 =
												(STRING_REF(BgL_keywordzd2aszd2stringz00_1110,
													((long) 0)) == ((unsigned char) ';'));
								}}
							if (BgL_testz00_3146)
								{	/* Cnst/alloc.scm 397 */
									BgL_varz00_bglt BgL_auxz00_3155;

									{	/* Cnst/alloc.scm 354 */
										BgL_globalz00_bglt BgL_varz00_1121;

										BgL_nodez00_bglt BgL_vsz00_1122;

										{	/* Cnst/alloc.scm 354 */
											obj_t BgL_arg3688z00_1145;

											obj_t BgL_arg3689z00_1146;

											obj_t BgL_arg3690z00_1147;

											{	/* Cnst/alloc.scm 354 */
												obj_t BgL_arg3691z00_1148;

												obj_t BgL_arg3692z00_1149;

												BgL_arg3691z00_1148 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 18)));
												BgL_arg3692z00_1149 = CNST_TABLE_REF(((long) 18));
												BgL_arg3688z00_1145 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg3691z00_1148, BgL_arg3692z00_1149);
											}
											BgL_arg3689z00_1146 = CNST_TABLE_REF(((long) 19));
											BgL_arg3690z00_1147 = CNST_TABLE_REF(((long) 3));
											BgL_varz00_1121 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg3688z00_1145,
												BGl_za2moduleza2z00zzmodule_modulez00,
												BgL_arg3689z00_1146, BgL_arg3690z00_1147);
										}
										{	/* Cnst/alloc.scm 359 */
											obj_t BgL_arg3693z00_1150;

											{	/* Cnst/alloc.scm 359 */
												obj_t BgL_res4157z00_2262;

												{	/* Cnst/alloc.scm 359 */
													obj_t BgL_arg2060z00_2261;

													BgL_arg2060z00_2261 =
														KEYWORD_TO_STRING(BgL_keywordz00_41);
													BgL_res4157z00_2262 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg2060z00_2261);
												}
												BgL_arg3693z00_1150 = BgL_res4157z00_2262;
											}
											BgL_vsz00_1122 =
												BGl_cnstzd2alloczd2stringz00zzcnst_allocz00
												(BgL_arg3693z00_1150, BgL_locz00_42);
										}
										{	/* Cnst/alloc.scm 360 */
											obj_t BgL_arg3664z00_1123;

											{	/* Cnst/alloc.scm 360 */
												obj_t BgL_newz00_2265;

												BgL_newz00_2265 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 360 */
													obj_t BgL_auxz00_3171;

													int BgL_auxz00_3169;

													BgL_auxz00_3171 = (obj_t) (BgL_varz00_1121);
													BgL_auxz00_3169 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2265, BgL_auxz00_3169,
														BgL_auxz00_3171);
												}
												{	/* Cnst/alloc.scm 360 */
													int BgL_auxz00_3174;

													BgL_auxz00_3174 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2265, BgL_auxz00_3174,
														BgL_keywordz00_41);
												}
												BgL_arg3664z00_1123 = BgL_newz00_2265;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2keywordzd2envza2zd2zzcnst_allocz00,
												BgL_keywordz00_41, BgL_arg3664z00_1123);
										}
										{	/* Cnst/alloc.scm 361 */
											obj_t BgL_arg3665z00_1124;

											{	/* Cnst/alloc.scm 361 */
												obj_t BgL_arg3666z00_1125;

												obj_t BgL_arg3667z00_1126;

												BgL_arg3666z00_1125 = CNST_TABLE_REF(((long) 12));
												{	/* Cnst/alloc.scm 361 */
													obj_t BgL_arg3668z00_1127;

													BgL_nodez00_bglt BgL_arg3670z00_1128;

													{	/* Cnst/alloc.scm 361 */
														obj_t BgL_arg3674z00_1132;

														obj_t BgL_arg3675z00_1133;

														BgL_arg3674z00_1132 = CNST_TABLE_REF(((long) 13));
														{	/* Cnst/alloc.scm 361 */
															obj_t BgL_arg3677z00_1134;

															obj_t BgL_arg3678z00_1135;

															{
																BgL_variablez00_bglt BgL_auxz00_3180;

																BgL_auxz00_3180 =
																	(BgL_variablez00_bglt) (BgL_varz00_1121);
																BgL_arg3677z00_1134 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3180))->BgL_idz00);
															}
															BgL_arg3678z00_1135 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1121))->
																BgL_modulez00);
															{	/* Cnst/alloc.scm 361 */
																obj_t BgL_list3680z00_1137;

																{	/* Cnst/alloc.scm 361 */
																	obj_t BgL_arg3681z00_1138;

																	BgL_arg3681z00_1138 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3680z00_1137 =
																		MAKE_PAIR(BgL_arg3678z00_1135,
																		BgL_arg3681z00_1138);
																}
																BgL_arg3675z00_1133 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3677z00_1134, BgL_list3680z00_1137);
														}}
														BgL_arg3668z00_1127 =
															MAKE_PAIR(BgL_arg3674z00_1132,
															BgL_arg3675z00_1133);
													}
													{	/* Cnst/alloc.scm 363 */
														BgL_appz00_bglt BgL_arg3682z00_1139;

														{	/* Cnst/alloc.scm 363 */
															BgL_varz00_bglt BgL_arg3684z00_1141;

															obj_t BgL_arg3685z00_1142;

															BgL_arg3684z00_1141 =
																BGl_makezd2varzd2zzast_nodez00(BgL_locz00_42,
																(BgL_typez00_bglt)
																(BGl_za2keywordza2z00zztype_cachez00),
																(BgL_variablez00_bglt)
																(BGl_za2bstringzd2ze3keywordza2z31zzcnst_cachez00));
															{	/* Cnst/alloc.scm 370 */
																obj_t BgL_list3686z00_1143;

																BgL_list3686z00_1143 =
																	MAKE_PAIR((obj_t) (BgL_vsz00_1122), BNIL);
																BgL_arg3685z00_1142 = BgL_list3686z00_1143;
															}
															BgL_arg3682z00_1139 =
																BGl_makezd2appzd2zzast_nodez00(BgL_locz00_42,
																(BgL_typez00_bglt)
																(BGl_za2keywordza2z00zztype_cachez00), BUNSPEC,
																BINT(((long) -1)), BgL_arg3684z00_1141,
																BgL_arg3685z00_1142);
														}
														BgL_arg3670z00_1128 =
															BGl_coercez12z12zzcoerce_coercez00(
															(BgL_nodez00_bglt) (BgL_arg3682z00_1139),
															(obj_t) (BgL_varz00_1121),
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00), ((bool_t) 0));
													}
													{	/* Cnst/alloc.scm 361 */
														obj_t BgL_list3672z00_1130;

														{	/* Cnst/alloc.scm 361 */
															obj_t BgL_arg3673z00_1131;

															BgL_arg3673z00_1131 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3672z00_1130 =
																MAKE_PAIR(
																(obj_t) (BgL_arg3670z00_1128),
																BgL_arg3673z00_1131);
														}
														BgL_arg3667z00_1126 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3668z00_1127, BgL_list3672z00_1130);
												}}
												BgL_arg3665z00_1124 =
													MAKE_PAIR(BgL_arg3666z00_1125, BgL_arg3667z00_1126);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg3665z00_1124,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 376 */
											BgL_typez00_bglt BgL_arg3687z00_1144;

											{
												BgL_variablez00_bglt BgL_auxz00_3206;

												BgL_auxz00_3206 =
													(BgL_variablez00_bglt) (BgL_varz00_1121);
												BgL_arg3687z00_1144 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3206))->
													BgL_typez00);
											}
											BgL_auxz00_3155 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_42,
												BgL_arg3687z00_1144,
												(BgL_variablez00_bglt) (BgL_varz00_1121));
									}}
									return (BgL_nodez00_bglt) (BgL_auxz00_3155);
								}
							else
								{	/* Cnst/alloc.scm 399 */
									BgL_appz00_bglt BgL_auxz00_3212;

									{	/* Cnst/alloc.scm 379 */
										long BgL_offsetz00_1152;

										BgL_offsetz00_1152 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_PAIR(BgL_keywordz00_41,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										{	/* Cnst/alloc.scm 382 */
											obj_t BgL_arg3695z00_1153;

											{	/* Cnst/alloc.scm 382 */
												obj_t BgL_newz00_2286;

												BgL_newz00_2286 =
													create_struct(CNST_TABLE_REF(((long) 9)),
													(int) (((long) 2)));
												{	/* Cnst/alloc.scm 382 */
													obj_t BgL_auxz00_3220;

													int BgL_auxz00_3218;

													BgL_auxz00_3220 = BINT(BgL_offsetz00_1152);
													BgL_auxz00_3218 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2286, BgL_auxz00_3218,
														BgL_auxz00_3220);
												}
												{	/* Cnst/alloc.scm 382 */
													int BgL_auxz00_3223;

													BgL_auxz00_3223 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2286, BgL_auxz00_3223,
														BgL_keywordz00_41);
												}
												BgL_arg3695z00_1153 = BgL_newz00_2286;
											}
											BGl_hashtablezd2putz12zc0zz__hashz00
												(BGl_za2keywordzd2envza2zd2zzcnst_allocz00,
												BgL_keywordz00_41, BgL_arg3695z00_1153);
										}
										BgL_auxz00_3212 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1152), BgL_locz00_42);
									}
									return (BgL_nodez00_bglt) (BgL_auxz00_3212);
								}
						}
				}
			}
		}
	}



/* _cnst-alloc-keyword */
	obj_t BGl__cnstzd2alloczd2keywordz00zzcnst_allocz00(obj_t BgL_envz00_2716,
		obj_t BgL_keywordz00_2717, obj_t BgL_locz00_2718)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 352 */
			return
				(obj_t) (BGl_cnstzd2alloczd2keywordz00zzcnst_allocz00
				(BgL_keywordz00_2717, BgL_locz00_2718));
		}
	}



/* cnst-alloc-bignum */
	BGL_EXPORTED_DEF obj_t BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t
		BgL_bignumz00_43, obj_t BgL_locz00_44)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 404 */
			{

				{	/* Cnst/alloc.scm 416 */
					obj_t BgL_oldz00_1158;

					obj_t BgL_bignumzd2aszd2stringz00_1159;

					BgL_oldz00_1158 =
						BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_bignumz00_43,
						BGl_za2bignumzd2envza2zd2zzcnst_allocz00);
					{	/* Cnst/alloc.scm 417 */

						BgL_bignumzd2aszd2stringz00_1159 =
							BGl_bignumzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
							(BgL_bignumz00_43, ((long) 10));
					}
					if (PAIRP(BgL_oldz00_1158))
						{	/* Cnst/alloc.scm 421 */
							bool_t BgL_testz00_3236;

							{	/* Cnst/alloc.scm 421 */
								obj_t BgL_arg3711z00_1175;

								BgL_arg3711z00_1175 =
									STRUCT_REF(CDR(BgL_oldz00_1158), (int) (((long) 1)));
								BgL_testz00_3236 =
									BGl_iszd2azf3z21zz__objectz00(BgL_arg3711z00_1175,
									BGl_variablez00zzast_varz00);
							}
							if (BgL_testz00_3236)
								{	/* Cnst/alloc.scm 424 */
									BgL_typez00_bglt BgL_arg3698z00_1162;

									obj_t BgL_arg3699z00_1163;

									{
										BgL_variablez00_bglt BgL_auxz00_3241;

										BgL_auxz00_3241 =
											(BgL_variablez00_bglt) (STRUCT_REF(CDR(BgL_oldz00_1158),
												(int) (((long) 1))));
										BgL_arg3698z00_1162 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3241))->
											BgL_typez00);
									}
									BgL_arg3699z00_1163 =
										STRUCT_REF(CDR(BgL_oldz00_1158), (int) (((long) 1)));
									return
										(obj_t) (BGl_makezd2varzd2zzast_nodez00(BgL_locz00_44,
											BgL_arg3698z00_1162,
											(BgL_variablez00_bglt) (BgL_arg3699z00_1163)));
								}
							else
								{	/* Cnst/alloc.scm 421 */
									if (
										(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 14))))
										{	/* Cnst/alloc.scm 429 */
											BgL_typez00_bglt BgL_arg3704z00_1168;

											obj_t BgL_arg3705z00_1169;

											{
												BgL_variablez00_bglt BgL_auxz00_3256;

												BgL_auxz00_3256 =
													(BgL_variablez00_bglt) (STRUCT_REF(CDR
														(BgL_oldz00_1158), (int) (((long) 1))));
												BgL_arg3704z00_1168 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3256))->
													BgL_typez00);
											}
											BgL_arg3705z00_1169 =
												STRUCT_REF(CDR(BgL_oldz00_1158), (int) (((long) 1)));
											return
												(obj_t) (BGl_makezd2varzd2zzast_nodez00(BgL_locz00_44,
													BgL_arg3704z00_1168,
													(BgL_variablez00_bglt) (BgL_arg3705z00_1169)));
										}
									else
										{	/* Cnst/alloc.scm 432 */
											obj_t BgL_arg3709z00_1173;

											BgL_arg3709z00_1173 =
												STRUCT_REF(CDR(BgL_oldz00_1158), (int) (((long) 1)));
											return
												(obj_t) (BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
												(BgL_arg3709z00_1173, BgL_locz00_44));
										}
								}
						}
					else
						{	/* Cnst/alloc.scm 437 */
							bool_t BgL_testz00_3273;

							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 437 */
									BgL_testz00_3273 = ((bool_t) 1);
								}
							else
								{	/* Cnst/alloc.scm 437 */
									if (
										(STRING_LENGTH(BgL_bignumzd2aszd2stringz00_1159) ==
											((long) 0)))
										{	/* Cnst/alloc.scm 438 */
											BgL_testz00_3273 = ((bool_t) 1);
										}
									else
										{	/* Cnst/alloc.scm 438 */
											BgL_testz00_3273 =
												(STRING_REF(BgL_bignumzd2aszd2stringz00_1159,
													((long) 0)) == ((unsigned char) ';'));
								}}
							if (BgL_testz00_3273)
								{	/* Cnst/alloc.scm 437 */
									return BFALSE;
								}
							else
								{	/* Cnst/alloc.scm 442 */
									BgL_appz00_bglt BgL_auxz00_3282;

									{	/* Cnst/alloc.scm 410 */
										long BgL_offsetz00_1192;

										BgL_offsetz00_1192 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_PAIR(BgL_bignumz00_43,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										{	/* Cnst/alloc.scm 413 */
											obj_t BgL_arg3726z00_1193;

											{	/* Cnst/alloc.scm 413 */
												obj_t BgL_arg3727z00_1194;

												{	/* Cnst/alloc.scm 413 */
													obj_t BgL_newz00_2338;

													BgL_newz00_2338 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 413 */
														obj_t BgL_auxz00_3290;

														int BgL_auxz00_3288;

														BgL_auxz00_3290 = BINT(BgL_offsetz00_1192);
														BgL_auxz00_3288 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2338, BgL_auxz00_3288,
															BgL_auxz00_3290);
													}
													{	/* Cnst/alloc.scm 413 */
														int BgL_auxz00_3293;

														BgL_auxz00_3293 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2338, BgL_auxz00_3293,
															BgL_bignumz00_43);
													}
													BgL_arg3727z00_1194 = BgL_newz00_2338;
												}
												BgL_arg3726z00_1193 =
													MAKE_PAIR(BgL_bignumz00_43, BgL_arg3727z00_1194);
											}
											BGl_za2bignumzd2envza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg3726z00_1193,
												BGl_za2bignumzd2envza2zd2zzcnst_allocz00);
										}
										BgL_auxz00_3282 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1192), BgL_locz00_44);
									}
									return (obj_t) (BgL_auxz00_3282);
								}
						}
				}
			}
		}
	}



/* _cnst-alloc-bignum */
	obj_t BGl__cnstzd2alloczd2bignumz00zzcnst_allocz00(obj_t BgL_envz00_2719,
		obj_t BgL_bignumz00_2720, obj_t BgL_locz00_2721)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 404 */
			return
				BGl_cnstzd2alloczd2bignumz00zzcnst_allocz00(BgL_bignumz00_2720,
				BgL_locz00_2721);
		}
	}



/* cnst-alloc-procedure */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(BgL_nodez00_bglt
		BgL_procedurez00_45, obj_t BgL_locz00_46)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 447 */
			{	/* Cnst/alloc.scm 448 */
				BgL_globalz00_bglt BgL_varz00_1197;

				{	/* Cnst/alloc.scm 448 */
					obj_t BgL_arg3729z00_1199;

					obj_t BgL_arg3730z00_1200;

					{	/* Cnst/alloc.scm 448 */
						obj_t BgL_arg3731z00_1201;

						obj_t BgL_arg3732z00_1202;

						BgL_arg3731z00_1201 =
							BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 21)));
						BgL_arg3732z00_1202 = CNST_TABLE_REF(((long) 22));
						BgL_arg3729z00_1199 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_arg3731z00_1201,
							BgL_arg3732z00_1202);
					}
					BgL_arg3730z00_1200 = CNST_TABLE_REF(((long) 23));
					BgL_varz00_1197 =
						BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
						(BgL_arg3729z00_1199, BGl_za2moduleza2z00zzmodule_modulez00,
						(obj_t) (BgL_procedurez00_45), BgL_arg3730z00_1200, BgL_locz00_46);
				}
				{	/* Cnst/alloc.scm 455 */
					BgL_typez00_bglt BgL_arg3728z00_1198;

					{
						BgL_variablez00_bglt BgL_auxz00_3309;

						BgL_auxz00_3309 = (BgL_variablez00_bglt) (BgL_varz00_1197);
						BgL_arg3728z00_1198 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3309))->BgL_typez00);
					}
					return
						(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00(BgL_locz00_46,
							BgL_arg3728z00_1198, (BgL_variablez00_bglt) (BgL_varz00_1197)));
				}
			}
		}
	}



/* _cnst-alloc-procedure */
	obj_t BGl__cnstzd2alloczd2procedurez00zzcnst_allocz00(obj_t BgL_envz00_2722,
		obj_t BgL_procedurez00_2723, obj_t BgL_locz00_2724)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 447 */
			return
				(obj_t) (BGl_cnstzd2alloczd2procedurez00zzcnst_allocz00(
					(BgL_nodez00_bglt) (BgL_procedurez00_2723), BgL_locz00_2724));
		}
	}



/* cnst-alloc-real */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2realz00zzcnst_allocz00(obj_t BgL_realz00_47,
		obj_t BgL_locz00_48)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 461 */
			{

				{	/* Cnst/alloc.scm 482 */
					obj_t BgL_oldz00_1205;

					{
						obj_t BgL_listz00_1217;

						BgL_listz00_1217 = BGl_za2realzd2envza2zd2zzcnst_allocz00;
					BgL_zc3anonymousza33742ze3z83_1218:
						if (NULLP(BgL_listz00_1217))
							{	/* Cnst/alloc.scm 476 */
								BgL_oldz00_1205 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 476 */
								if (
									(REAL_TO_DOUBLE(CAR(CAR(BgL_listz00_1217))) ==
										REAL_TO_DOUBLE(BgL_realz00_47)))
									{	/* Cnst/alloc.scm 478 */
										BgL_oldz00_1205 = CDR(CAR(BgL_listz00_1217));
									}
								else
									{
										obj_t BgL_listz00_3328;

										BgL_listz00_3328 = CDR(BgL_listz00_1217);
										BgL_listz00_1217 = BgL_listz00_3328;
										goto BgL_zc3anonymousza33742ze3z83_1218;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1205))
						{	/* Cnst/alloc.scm 487 */
							BgL_typez00_bglt BgL_arg3733z00_1206;

							{
								BgL_variablez00_bglt BgL_auxz00_3332;

								BgL_auxz00_3332 = (BgL_variablez00_bglt) (BgL_oldz00_1205);
								BgL_arg3733z00_1206 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3332))->BgL_typez00);
							}
							return
								(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
								(BgL_locz00_48, BgL_arg3733z00_1206,
									(BgL_variablez00_bglt) (BgL_oldz00_1205)));
						}
					else
						{	/* Cnst/alloc.scm 490 */
							BgL_varz00_bglt BgL_auxz00_3338;

							{	/* Cnst/alloc.scm 463 */
								BgL_globalz00_bglt BgL_varz00_1208;

								{	/* Cnst/alloc.scm 463 */
									obj_t BgL_arg3737z00_1211;

									obj_t BgL_arg3738z00_1212;

									{	/* Cnst/alloc.scm 463 */
										obj_t BgL_arg3739z00_1213;

										obj_t BgL_arg3740z00_1214;

										BgL_arg3739z00_1213 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													24)));
										BgL_arg3740z00_1214 = CNST_TABLE_REF(((long) 24));
										BgL_arg3737z00_1211 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg3739z00_1213, BgL_arg3740z00_1214);
									}
									BgL_arg3738z00_1212 = CNST_TABLE_REF(((long) 25));
									BgL_varz00_1208 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg3737z00_1211, BGl_za2moduleza2z00zzmodule_modulez00,
										BgL_realz00_47, BgL_arg3738z00_1212, BgL_locz00_48);
								}
								{	/* Cnst/alloc.scm 468 */
									obj_t BgL_arg3735z00_1209;

									BgL_arg3735z00_1209 =
										MAKE_PAIR(BgL_realz00_47, (obj_t) (BgL_varz00_1208));
									BGl_za2realzd2envza2zd2zzcnst_allocz00 =
										MAKE_PAIR(BgL_arg3735z00_1209,
										BGl_za2realzd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 471 */
									BgL_typez00_bglt BgL_arg3736z00_1210;

									{
										BgL_variablez00_bglt BgL_auxz00_3348;

										BgL_auxz00_3348 = (BgL_variablez00_bglt) (BgL_varz00_1208);
										BgL_arg3736z00_1210 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3348))->
											BgL_typez00);
									}
									BgL_auxz00_3338 =
										BGl_makezd2varzd2zzast_nodez00(BgL_locz00_48,
										BgL_arg3736z00_1210,
										(BgL_variablez00_bglt) (BgL_varz00_1208));
							}}
							return (BgL_nodez00_bglt) (BgL_auxz00_3338);
						}
				}
			}
		}
	}



/* _cnst-alloc-real */
	obj_t BGl__cnstzd2alloczd2realz00zzcnst_allocz00(obj_t BgL_envz00_2725,
		obj_t BgL_realz00_2726, obj_t BgL_locz00_2727)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 461 */
			return
				(obj_t) (BGl_cnstzd2alloczd2realz00zzcnst_allocz00(BgL_realz00_2726,
					BgL_locz00_2727));
		}
	}



/* cnst-alloc-elong */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(long BgL_elongz00_49,
		obj_t BgL_locz00_50)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 495 */
			{

				{	/* Cnst/alloc.scm 516 */
					obj_t BgL_oldz00_1230;

					{
						obj_t BgL_listz00_1242;

						BgL_listz00_1242 = BGl_za2elongzd2envza2zd2zzcnst_allocz00;
					BgL_zc3anonymousza33758ze3z83_1243:
						if (NULLP(BgL_listz00_1242))
							{	/* Cnst/alloc.scm 510 */
								BgL_oldz00_1230 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 512 */
								bool_t BgL_testz00_3358;

								{	/* Cnst/alloc.scm 512 */
									obj_t BgL_arg3763z00_1248;

									BgL_arg3763z00_1248 = CAR(CAR(BgL_listz00_1242));
									{	/* Cnst/alloc.scm 512 */
										long BgL_n1z00_2365;

										BgL_n1z00_2365 = BELONG_TO_LONG(BgL_arg3763z00_1248);
										BgL_testz00_3358 = (BgL_n1z00_2365 == BgL_elongz00_49);
								}}
								if (BgL_testz00_3358)
									{	/* Cnst/alloc.scm 512 */
										BgL_oldz00_1230 = CDR(CAR(BgL_listz00_1242));
									}
								else
									{
										obj_t BgL_listz00_3365;

										BgL_listz00_3365 = CDR(BgL_listz00_1242);
										BgL_listz00_1242 = BgL_listz00_3365;
										goto BgL_zc3anonymousza33758ze3z83_1243;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1230))
						{	/* Cnst/alloc.scm 521 */
							BgL_typez00_bglt BgL_arg3749z00_1231;

							{
								BgL_variablez00_bglt BgL_auxz00_3369;

								BgL_auxz00_3369 = (BgL_variablez00_bglt) (BgL_oldz00_1230);
								BgL_arg3749z00_1231 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3369))->BgL_typez00);
							}
							return
								(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
								(BgL_locz00_50, BgL_arg3749z00_1231,
									(BgL_variablez00_bglt) (BgL_oldz00_1230)));
						}
					else
						{	/* Cnst/alloc.scm 524 */
							BgL_varz00_bglt BgL_auxz00_3375;

							{	/* Cnst/alloc.scm 497 */
								BgL_globalz00_bglt BgL_varz00_1233;

								{	/* Cnst/alloc.scm 497 */
									obj_t BgL_arg3753z00_1236;

									obj_t BgL_arg3754z00_1237;

									{	/* Cnst/alloc.scm 497 */
										obj_t BgL_arg3755z00_1238;

										obj_t BgL_arg3756z00_1239;

										BgL_arg3755z00_1238 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													26)));
										BgL_arg3756z00_1239 = CNST_TABLE_REF(((long) 27));
										BgL_arg3753z00_1236 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg3755z00_1238, BgL_arg3756z00_1239);
									}
									BgL_arg3754z00_1237 = CNST_TABLE_REF(((long) 28));
									BgL_varz00_1233 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg3753z00_1236, BGl_za2moduleza2z00zzmodule_modulez00,
										make_belong(BgL_elongz00_49), BgL_arg3754z00_1237,
										BgL_locz00_50);
								}
								{	/* Cnst/alloc.scm 502 */
									obj_t BgL_arg3751z00_1234;

									BgL_arg3751z00_1234 =
										MAKE_PAIR(make_belong(BgL_elongz00_49),
										(obj_t) (BgL_varz00_1233));
									BGl_za2elongzd2envza2zd2zzcnst_allocz00 =
										MAKE_PAIR(BgL_arg3751z00_1234,
										BGl_za2elongzd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 505 */
									BgL_typez00_bglt BgL_arg3752z00_1235;

									{
										BgL_variablez00_bglt BgL_auxz00_3387;

										BgL_auxz00_3387 = (BgL_variablez00_bglt) (BgL_varz00_1233);
										BgL_arg3752z00_1235 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3387))->
											BgL_typez00);
									}
									BgL_auxz00_3375 =
										BGl_makezd2varzd2zzast_nodez00(BgL_locz00_50,
										BgL_arg3752z00_1235,
										(BgL_variablez00_bglt) (BgL_varz00_1233));
							}}
							return (BgL_nodez00_bglt) (BgL_auxz00_3375);
						}
				}
			}
		}
	}



/* _cnst-alloc-elong */
	obj_t BGl__cnstzd2alloczd2elongz00zzcnst_allocz00(obj_t BgL_envz00_2728,
		obj_t BgL_elongz00_2729, obj_t BgL_locz00_2730)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 495 */
			return
				(obj_t) (BGl_cnstzd2alloczd2elongz00zzcnst_allocz00(BELONG_TO_LONG
					(BgL_elongz00_2729), BgL_locz00_2730));
		}
	}



/* cnst-alloc-llong */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BGL_LONGLONG_T BgL_llongz00_51,
		obj_t BgL_locz00_52)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 529 */
			{

				{	/* Cnst/alloc.scm 550 */
					obj_t BgL_oldz00_1255;

					{
						obj_t BgL_listz00_1267;

						BgL_listz00_1267 = BGl_za2llongzd2envza2zd2zzcnst_allocz00;
					BgL_zc3anonymousza33774ze3z83_1268:
						if (NULLP(BgL_listz00_1267))
							{	/* Cnst/alloc.scm 544 */
								BgL_oldz00_1255 = BFALSE;
							}
						else
							{	/* Cnst/alloc.scm 544 */
								if (
									(BLLONG_TO_LLONG(CAR(CAR(BgL_listz00_1267))) ==
										BgL_llongz00_51))
									{	/* Cnst/alloc.scm 546 */
										BgL_oldz00_1255 = CDR(CAR(BgL_listz00_1267));
									}
								else
									{
										obj_t BgL_listz00_3405;

										BgL_listz00_3405 = CDR(BgL_listz00_1267);
										BgL_listz00_1267 = BgL_listz00_3405;
										goto BgL_zc3anonymousza33774ze3z83_1268;
									}
							}
					}
					if (CBOOL(BgL_oldz00_1255))
						{	/* Cnst/alloc.scm 555 */
							BgL_typez00_bglt BgL_arg3765z00_1256;

							{
								BgL_variablez00_bglt BgL_auxz00_3409;

								BgL_auxz00_3409 = (BgL_variablez00_bglt) (BgL_oldz00_1255);
								BgL_arg3765z00_1256 =
									(((BgL_variablez00_bglt) CREF(BgL_auxz00_3409))->BgL_typez00);
							}
							return
								(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
								(BgL_locz00_52, BgL_arg3765z00_1256,
									(BgL_variablez00_bglt) (BgL_oldz00_1255)));
						}
					else
						{	/* Cnst/alloc.scm 558 */
							BgL_varz00_bglt BgL_auxz00_3415;

							{	/* Cnst/alloc.scm 531 */
								BgL_globalz00_bglt BgL_varz00_1258;

								{	/* Cnst/alloc.scm 531 */
									obj_t BgL_arg3769z00_1261;

									obj_t BgL_arg3770z00_1262;

									{	/* Cnst/alloc.scm 531 */
										obj_t BgL_arg3771z00_1263;

										obj_t BgL_arg3772z00_1264;

										BgL_arg3771z00_1263 =
											BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													29)));
										BgL_arg3772z00_1264 = CNST_TABLE_REF(((long) 30));
										BgL_arg3769z00_1261 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg3771z00_1263, BgL_arg3772z00_1264);
									}
									BgL_arg3770z00_1262 = CNST_TABLE_REF(((long) 31));
									BgL_varz00_1258 =
										BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
										(BgL_arg3769z00_1261, BGl_za2moduleza2z00zzmodule_modulez00,
										make_bllong(BgL_llongz00_51), BgL_arg3770z00_1262,
										BgL_locz00_52);
								}
								{	/* Cnst/alloc.scm 536 */
									obj_t BgL_arg3767z00_1259;

									BgL_arg3767z00_1259 =
										MAKE_PAIR(make_bllong(BgL_llongz00_51),
										(obj_t) (BgL_varz00_1258));
									BGl_za2llongzd2envza2zd2zzcnst_allocz00 =
										MAKE_PAIR(BgL_arg3767z00_1259,
										BGl_za2llongzd2envza2zd2zzcnst_allocz00);
								}
								{	/* Cnst/alloc.scm 539 */
									BgL_typez00_bglt BgL_arg3768z00_1260;

									{
										BgL_variablez00_bglt BgL_auxz00_3427;

										BgL_auxz00_3427 = (BgL_variablez00_bglt) (BgL_varz00_1258);
										BgL_arg3768z00_1260 =
											(((BgL_variablez00_bglt) CREF(BgL_auxz00_3427))->
											BgL_typez00);
									}
									BgL_auxz00_3415 =
										BGl_makezd2varzd2zzast_nodez00(BgL_locz00_52,
										BgL_arg3768z00_1260,
										(BgL_variablez00_bglt) (BgL_varz00_1258));
							}}
							return (BgL_nodez00_bglt) (BgL_auxz00_3415);
						}
				}
			}
		}
	}



/* _cnst-alloc-llong */
	obj_t BGl__cnstzd2alloczd2llongz00zzcnst_allocz00(obj_t BgL_envz00_2731,
		obj_t BgL_llongz00_2732, obj_t BgL_locz00_2733)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 529 */
			return
				(obj_t) (BGl_cnstzd2alloczd2llongz00zzcnst_allocz00(BLLONG_TO_LLONG
					(BgL_llongz00_2732), BgL_locz00_2733));
		}
	}



/* cnst-alloc-list */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2listz00zzcnst_allocz00(obj_t BgL_pairz00_53,
		obj_t BgL_locz00_54)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 563 */
			{

				{	/* Cnst/alloc.scm 607 */
					obj_t BgL_oldz00_1281;

					{	/* Cnst/alloc.scm 607 */
						obj_t BgL__andtest_3460z00_1288;

						BgL__andtest_3460z00_1288 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_3460z00_1288))
							{
								obj_t BgL_envz00_1290;

								BgL_envz00_1290 = BGl_za2listzd2envza2zd2zzcnst_allocz00;
							BgL_zc3anonymousza33787ze3z83_1291:
								if (NULLP(BgL_envz00_1290))
									{	/* Cnst/alloc.scm 610 */
										BgL_oldz00_1281 = BFALSE;
									}
								else
									{	/* Cnst/alloc.scm 610 */
										if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(STRUCT_REF(CAR
													(BgL_envz00_1290), (int) (((long) 0))),
												BgL_pairz00_53))
											{	/* Cnst/alloc.scm 612 */
												BgL_oldz00_1281 = CAR(BgL_envz00_1290);
											}
										else
											{
												obj_t BgL_envz00_3446;

												BgL_envz00_3446 = CDR(BgL_envz00_1290);
												BgL_envz00_1290 = BgL_envz00_3446;
												goto BgL_zc3anonymousza33787ze3z83_1291;
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 607 */
								BgL_oldz00_1281 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_1281))
						{	/* Cnst/alloc.scm 617 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 621 */
									BgL_typez00_bglt BgL_arg3782z00_1283;

									obj_t BgL_arg3783z00_1284;

									{	/* Cnst/alloc.scm 621 */
										BgL_variablez00_bglt BgL_obj1784z00_2390;

										{	/* Cnst/alloc.scm 621 */
											obj_t BgL_sz00_2388;

											BgL_sz00_2388 = BgL_oldz00_1281;
											BgL_obj1784z00_2390 =
												(BgL_variablez00_bglt) (STRUCT_REF(BgL_sz00_2388,
													(int) (((long) 1))));
										}
										BgL_arg3782z00_1283 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1784z00_2390))->
											BgL_typez00);
									}
									BgL_arg3783z00_1284 =
										STRUCT_REF(BgL_oldz00_1281, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
										(BgL_locz00_54, BgL_arg3782z00_1283,
											(BgL_variablez00_bglt) (BgL_arg3783z00_1284)));
								}
							else
								{	/* Cnst/alloc.scm 623 */
									obj_t BgL_arg3785z00_1286;

									BgL_arg3785z00_1286 =
										STRUCT_REF(BgL_oldz00_1281, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt)
										(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg3785z00_1286, BgL_locz00_54));
								}
						}
					else
						{	/* Cnst/alloc.scm 617 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 625 */
									BgL_varz00_bglt BgL_auxz00_3469;

									{	/* Cnst/alloc.scm 588 */
										BgL_globalz00_bglt BgL_varz00_1320;

										{	/* Cnst/alloc.scm 588 */
											obj_t BgL_arg3830z00_1339;

											obj_t BgL_arg3831z00_1340;

											obj_t BgL_arg3832z00_1341;

											{	/* Cnst/alloc.scm 588 */
												obj_t BgL_arg3833z00_1342;

												obj_t BgL_arg3834z00_1343;

												BgL_arg3833z00_1342 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 32)));
												BgL_arg3834z00_1343 = CNST_TABLE_REF(((long) 33));
												BgL_arg3830z00_1339 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg3833z00_1342, BgL_arg3834z00_1343);
											}
											BgL_arg3831z00_1340 = CNST_TABLE_REF(((long) 34));
											BgL_arg3832z00_1341 = CNST_TABLE_REF(((long) 3));
											BgL_varz00_1320 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg3830z00_1339,
												BGl_za2moduleza2z00zzmodule_modulez00,
												BgL_arg3831z00_1340, BgL_arg3832z00_1341);
										}
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 593 */
												obj_t BgL_arg3812z00_1321;

												{	/* Cnst/alloc.scm 593 */
													obj_t BgL_newz00_2406;

													BgL_newz00_2406 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 593 */
														obj_t BgL_auxz00_3484;

														int BgL_auxz00_3482;

														BgL_auxz00_3484 = (obj_t) (BgL_varz00_1320);
														BgL_auxz00_3482 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2406, BgL_auxz00_3482,
															BgL_auxz00_3484);
													}
													{	/* Cnst/alloc.scm 593 */
														int BgL_auxz00_3487;

														BgL_auxz00_3487 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2406, BgL_auxz00_3487,
															BgL_pairz00_53);
													}
													BgL_arg3812z00_1321 = BgL_newz00_2406;
												}
												BGl_za2listzd2envza2zd2zzcnst_allocz00 =
													MAKE_PAIR(BgL_arg3812z00_1321,
													BGl_za2listzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 592 */
												BFALSE;
											}
										{	/* Cnst/alloc.scm 594 */
											obj_t BgL_arg3813z00_1322;

											{	/* Cnst/alloc.scm 594 */
												obj_t BgL_arg3814z00_1323;

												obj_t BgL_arg3815z00_1324;

												BgL_arg3814z00_1323 = CNST_TABLE_REF(((long) 12));
												{	/* Cnst/alloc.scm 594 */
													obj_t BgL_arg3816z00_1325;

													BgL_nodez00_bglt BgL_arg3817z00_1326;

													{	/* Cnst/alloc.scm 594 */
														obj_t BgL_arg3821z00_1330;

														obj_t BgL_arg3822z00_1331;

														BgL_arg3821z00_1330 = CNST_TABLE_REF(((long) 13));
														{	/* Cnst/alloc.scm 594 */
															obj_t BgL_arg3823z00_1332;

															obj_t BgL_arg3824z00_1333;

															{
																BgL_variablez00_bglt BgL_auxz00_3493;

																BgL_auxz00_3493 =
																	(BgL_variablez00_bglt) (BgL_varz00_1320);
																BgL_arg3823z00_1332 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3493))->BgL_idz00);
															}
															BgL_arg3824z00_1333 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1320))->
																BgL_modulez00);
															{	/* Cnst/alloc.scm 594 */
																obj_t BgL_list3826z00_1335;

																{	/* Cnst/alloc.scm 594 */
																	obj_t BgL_arg3827z00_1336;

																	BgL_arg3827z00_1336 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3826z00_1335 =
																		MAKE_PAIR(BgL_arg3824z00_1333,
																		BgL_arg3827z00_1336);
																}
																BgL_arg3822z00_1331 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3823z00_1332, BgL_list3826z00_1335);
														}}
														BgL_arg3816z00_1325 =
															MAKE_PAIR(BgL_arg3821z00_1330,
															BgL_arg3822z00_1331);
													}
													{	/* Cnst/alloc.scm 595 */
														obj_t BgL_arg3828z00_1337;

														BgL_arg3828z00_1337 =
															BGl_loopz00zzcnst_allocz00(BgL_locz00_54,
															BgL_pairz00_53);
														BgL_arg3817z00_1326 =
															BGl_coercez12z12zzcoerce_coercez00(
															(BgL_nodez00_bglt) (BgL_arg3828z00_1337),
															(obj_t) (BgL_varz00_1320),
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00), ((bool_t) 0));
													}
													{	/* Cnst/alloc.scm 594 */
														obj_t BgL_list3819z00_1328;

														{	/* Cnst/alloc.scm 594 */
															obj_t BgL_arg3820z00_1329;

															BgL_arg3820z00_1329 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3819z00_1328 =
																MAKE_PAIR(
																(obj_t) (BgL_arg3817z00_1326),
																BgL_arg3820z00_1329);
														}
														BgL_arg3815z00_1324 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3816z00_1325, BgL_list3819z00_1328);
												}}
												BgL_arg3813z00_1322 =
													MAKE_PAIR(BgL_arg3814z00_1323, BgL_arg3815z00_1324);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg3813z00_1322,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 598 */
											BgL_typez00_bglt BgL_arg3829z00_1338;

											{
												BgL_variablez00_bglt BgL_auxz00_3512;

												BgL_auxz00_3512 =
													(BgL_variablez00_bglt) (BgL_varz00_1320);
												BgL_arg3829z00_1338 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3512))->
													BgL_typez00);
											}
											BgL_auxz00_3469 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_54,
												BgL_arg3829z00_1338,
												(BgL_variablez00_bglt) (BgL_varz00_1320));
									}}
									return (BgL_nodez00_bglt) (BgL_auxz00_3469);
								}
							else
								{	/* Cnst/alloc.scm 627 */
									BgL_appz00_bglt BgL_auxz00_3518;

									{	/* Cnst/alloc.scm 601 */
										long BgL_offsetz00_1345;

										BgL_offsetz00_1345 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_PAIR(BgL_pairz00_53,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 605 */
												obj_t BgL_arg3836z00_1346;

												{	/* Cnst/alloc.scm 605 */
													obj_t BgL_newz00_2425;

													BgL_newz00_2425 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 605 */
														obj_t BgL_auxz00_3528;

														int BgL_auxz00_3526;

														BgL_auxz00_3528 = BINT(BgL_offsetz00_1345);
														BgL_auxz00_3526 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2425, BgL_auxz00_3526,
															BgL_auxz00_3528);
													}
													{	/* Cnst/alloc.scm 605 */
														int BgL_auxz00_3531;

														BgL_auxz00_3531 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2425, BgL_auxz00_3531,
															BgL_pairz00_53);
													}
													BgL_arg3836z00_1346 = BgL_newz00_2425;
												}
												BGl_za2listzd2envza2zd2zzcnst_allocz00 =
													MAKE_PAIR(BgL_arg3836z00_1346,
													BGl_za2listzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 604 */
												BFALSE;
											}
										BgL_auxz00_3518 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1345), BgL_locz00_54);
									}
									return (BgL_nodez00_bglt) (BgL_auxz00_3518);
								}
						}
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzcnst_allocz00(obj_t BgL_locz00_2769,
		obj_t BgL_pairz00_1301)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 565 */
			if (NULLP(BgL_pairz00_1301))
				{	/* Cnst/alloc.scm 567 */
					return
						(obj_t) (BGl_makezd2atomzd2zzast_nodez00(BgL_locz00_2769,
							(BgL_typez00_bglt) (BGl_za2bnilza2z00zztype_cachez00), BNIL));
				}
			else
				{	/* Cnst/alloc.scm 567 */
					if (PAIRP(BgL_pairz00_1301))
						{	/* Cnst/alloc.scm 575 */
							BgL_varz00_bglt BgL_arg3798z00_1306;

							obj_t BgL_arg3799z00_1307;

							{	/* Cnst/alloc.scm 580 */
								BgL_typez00_bglt BgL_arg3800z00_1308;

								{
									BgL_variablez00_bglt BgL_auxz00_3545;

									BgL_auxz00_3545 =
										(BgL_variablez00_bglt) (BGl_za2consza2z00zzcnst_cachez00);
									BgL_arg3800z00_1308 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3545))->
										BgL_typez00);
								}
								BgL_arg3798z00_1306 =
									BGl_makezd2varzd2zzast_nodez00(BgL_locz00_2769,
									BgL_arg3800z00_1308,
									(BgL_variablez00_bglt) (BGl_za2consza2z00zzcnst_cachez00));
							}
							{	/* Cnst/alloc.scm 584 */
								BgL_nodez00_bglt BgL_arg3801z00_1309;

								obj_t BgL_arg3803z00_1310;

								{	/* Cnst/alloc.scm 584 */
									BgL_kwotez00_bglt BgL_arg3806z00_1313;

									BgL_arg3806z00_1313 =
										BGl_makezd2kwotezd2zzast_nodez00(BgL_locz00_2769,
										BGl_getzd2defaultzd2typez00zztype_cachez00(),
										CAR(BgL_pairz00_1301));
									BgL_arg3801z00_1309 =
										BGl_cnstz12z12zzcnst_nodez00(
										(BgL_nodez00_bglt) (BgL_arg3806z00_1313));
								}
								BgL_arg3803z00_1310 =
									BGl_loopz00zzcnst_allocz00(BgL_locz00_2769,
									CDR(BgL_pairz00_1301));
								{	/* Cnst/alloc.scm 582 */
									obj_t BgL_list3804z00_1311;

									{	/* Cnst/alloc.scm 582 */
										obj_t BgL_arg3805z00_1312;

										BgL_arg3805z00_1312 = MAKE_PAIR(BgL_arg3803z00_1310, BNIL);
										BgL_list3804z00_1311 =
											MAKE_PAIR(
											(obj_t) (BgL_arg3801z00_1309), BgL_arg3805z00_1312);
									}
									BgL_arg3799z00_1307 = BgL_list3804z00_1311;
								}
							}
							return
								(obj_t) (BGl_makezd2appzd2zzast_nodez00(BgL_locz00_2769,
									(BgL_typez00_bglt) (BGl_za2pairza2z00zztype_cachez00),
									BUNSPEC, BINT(((long) -1)), BgL_arg3798z00_1306,
									BgL_arg3799z00_1307));
						}
					else
						{	/* Cnst/alloc.scm 570 */
							BgL_kwotez00_bglt BgL_arg3810z00_1317;

							BgL_arg3810z00_1317 =
								BGl_makezd2kwotezd2zzast_nodez00(BgL_locz00_2769,
								(BgL_typez00_bglt) (BGl_za2pairza2z00zztype_cachez00),
								BgL_pairz00_1301);
							return (obj_t) (BGl_cnstz12z12zzcnst_nodez00((BgL_nodez00_bglt)
									(BgL_arg3810z00_1317)));
						}
				}
		}
	}



/* _cnst-alloc-list */
	obj_t BGl__cnstzd2alloczd2listz00zzcnst_allocz00(obj_t BgL_envz00_2734,
		obj_t BgL_pairz00_2735, obj_t BgL_locz00_2736)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 563 */
			return
				(obj_t) (BGl_cnstzd2alloczd2listz00zzcnst_allocz00(BgL_pairz00_2735,
					BgL_locz00_2736));
		}
	}



/* cnst-alloc-vector */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t BgL_vecz00_55,
		obj_t BgL_locz00_56)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 632 */
			{

				{	/* Cnst/alloc.scm 707 */
					obj_t BgL_oldz00_1353;

					{	/* Cnst/alloc.scm 707 */
						obj_t BgL__andtest_3473z00_1360;

						BgL__andtest_3473z00_1360 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_3473z00_1360))
							{
								obj_t BgL_envz00_1362;

								BgL_envz00_1362 = BGl_za2vectorzd2envza2zd2zzcnst_allocz00;
							BgL_zc3anonymousza33843ze3z83_1363:
								if (NULLP(BgL_envz00_1362))
									{	/* Cnst/alloc.scm 710 */
										BgL_oldz00_1353 = BFALSE;
									}
								else
									{	/* Cnst/alloc.scm 710 */
										if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(STRUCT_REF(CAR
													(BgL_envz00_1362), (int) (((long) 0))),
												BgL_vecz00_55))
											{	/* Cnst/alloc.scm 712 */
												BgL_oldz00_1353 = CAR(BgL_envz00_1362);
											}
										else
											{
												obj_t BgL_envz00_3581;

												BgL_envz00_3581 = CDR(BgL_envz00_1362);
												BgL_envz00_1362 = BgL_envz00_3581;
												goto BgL_zc3anonymousza33843ze3z83_1363;
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 707 */
								BgL_oldz00_1353 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_1353))
						{	/* Cnst/alloc.scm 717 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 721 */
									BgL_typez00_bglt BgL_arg3838z00_1355;

									obj_t BgL_arg3839z00_1356;

									{	/* Cnst/alloc.scm 721 */
										BgL_variablez00_bglt BgL_obj1784z00_2446;

										{	/* Cnst/alloc.scm 721 */
											obj_t BgL_sz00_2444;

											BgL_sz00_2444 = BgL_oldz00_1353;
											BgL_obj1784z00_2446 =
												(BgL_variablez00_bglt) (STRUCT_REF(BgL_sz00_2444,
													(int) (((long) 1))));
										}
										BgL_arg3838z00_1355 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1784z00_2446))->
											BgL_typez00);
									}
									BgL_arg3839z00_1356 =
										STRUCT_REF(BgL_oldz00_1353, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
										(BgL_locz00_56, BgL_arg3838z00_1355,
											(BgL_variablez00_bglt) (BgL_arg3839z00_1356)));
								}
							else
								{	/* Cnst/alloc.scm 723 */
									obj_t BgL_arg3841z00_1358;

									BgL_arg3841z00_1358 =
										STRUCT_REF(BgL_oldz00_1353, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt)
										(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg3841z00_1358, BgL_locz00_56));
								}
						}
					else
						{	/* Cnst/alloc.scm 717 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 725 */
									BgL_varz00_bglt BgL_auxz00_3604;

									{	/* Cnst/alloc.scm 695 */
										BgL_globalz00_bglt BgL_varz00_1411;

										{	/* Cnst/alloc.scm 695 */
											obj_t BgL_arg3904z00_1429;

											obj_t BgL_arg3905z00_1430;

											obj_t BgL_arg3906z00_1431;

											{	/* Cnst/alloc.scm 695 */
												obj_t BgL_arg3908z00_1432;

												obj_t BgL_arg3909z00_1433;

												BgL_arg3908z00_1432 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 36)));
												BgL_arg3909z00_1433 = CNST_TABLE_REF(((long) 36));
												BgL_arg3904z00_1429 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg3908z00_1432, BgL_arg3909z00_1433);
											}
											BgL_arg3905z00_1430 = CNST_TABLE_REF(((long) 2));
											BgL_arg3906z00_1431 = CNST_TABLE_REF(((long) 3));
											BgL_varz00_1411 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg3904z00_1429,
												BGl_za2moduleza2z00zzmodule_modulez00,
												BgL_arg3905z00_1430, BgL_arg3906z00_1431);
										}
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 700 */
												obj_t BgL_arg3887z00_1412;

												{	/* Cnst/alloc.scm 700 */
													obj_t BgL_newz00_2486;

													BgL_newz00_2486 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 700 */
														obj_t BgL_auxz00_3619;

														int BgL_auxz00_3617;

														BgL_auxz00_3619 = (obj_t) (BgL_varz00_1411);
														BgL_auxz00_3617 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2486, BgL_auxz00_3617,
															BgL_auxz00_3619);
													}
													{	/* Cnst/alloc.scm 700 */
														int BgL_auxz00_3622;

														BgL_auxz00_3622 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2486, BgL_auxz00_3622,
															BgL_vecz00_55);
													}
													BgL_arg3887z00_1412 = BgL_newz00_2486;
												}
												BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
													MAKE_PAIR(BgL_arg3887z00_1412,
													BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 699 */
												BFALSE;
											}
										{	/* Cnst/alloc.scm 701 */
											obj_t BgL_arg3888z00_1413;

											{	/* Cnst/alloc.scm 701 */
												obj_t BgL_arg3889z00_1414;

												obj_t BgL_arg3890z00_1415;

												BgL_arg3889z00_1414 = CNST_TABLE_REF(((long) 12));
												{	/* Cnst/alloc.scm 701 */
													obj_t BgL_arg3891z00_1416;

													BgL_nodez00_bglt BgL_arg3892z00_1417;

													{	/* Cnst/alloc.scm 701 */
														obj_t BgL_arg3896z00_1421;

														obj_t BgL_arg3897z00_1422;

														BgL_arg3896z00_1421 = CNST_TABLE_REF(((long) 13));
														{	/* Cnst/alloc.scm 701 */
															obj_t BgL_arg3898z00_1423;

															obj_t BgL_arg3899z00_1424;

															{
																BgL_variablez00_bglt BgL_auxz00_3628;

																BgL_auxz00_3628 =
																	(BgL_variablez00_bglt) (BgL_varz00_1411);
																BgL_arg3898z00_1423 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3628))->BgL_idz00);
															}
															BgL_arg3899z00_1424 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1411))->
																BgL_modulez00);
															{	/* Cnst/alloc.scm 701 */
																obj_t BgL_list3901z00_1426;

																{	/* Cnst/alloc.scm 701 */
																	obj_t BgL_arg3902z00_1427;

																	BgL_arg3902z00_1427 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3901z00_1426 =
																		MAKE_PAIR(BgL_arg3899z00_1424,
																		BgL_arg3902z00_1427);
																}
																BgL_arg3897z00_1422 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3898z00_1423, BgL_list3901z00_1426);
														}}
														BgL_arg3891z00_1416 =
															MAKE_PAIR(BgL_arg3896z00_1421,
															BgL_arg3897z00_1422);
													}
													{	/* Cnst/alloc.scm 636 */
														BgL_nodez00_bglt BgL_arg3850z00_1371;

														{	/* Cnst/alloc.scm 636 */
															BgL_letzd2varzd2_bglt BgL_arg3851z00_1372;

															{	/* Cnst/alloc.scm 636 */
																BgL_localz00_bglt BgL_varz00_1373;

																BgL_varz00_1373 =
																	BGl_makezd2localzd2svarz00zzast_localz00
																	(CNST_TABLE_REF(((long) 35)),
																	(BgL_typez00_bglt)
																	(BGl_za2vectorza2z00zztype_cachez00));
																{	/* Cnst/alloc.scm 637 */
																	obj_t BgL_arg3853z00_1375;

																	obj_t BgL_arg3854z00_1376;

																	{	/* Cnst/alloc.scm 643 */
																		obj_t BgL_arg3855z00_1377;

																		{	/* Cnst/alloc.scm 643 */
																			BgL_appz00_bglt BgL_arg3857z00_1379;

																			{	/* Cnst/alloc.scm 643 */
																				BgL_varz00_bglt BgL_arg3859z00_1381;

																				obj_t BgL_arg3860z00_1382;

																				{	/* Cnst/alloc.scm 648 */
																					BgL_typez00_bglt BgL_arg3861z00_1383;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_3639;
																						BgL_auxz00_3639 =
																							(BgL_variablez00_bglt)
																							(BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00);
																						BgL_arg3861z00_1383 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_3639))->
																							BgL_typez00);
																					}
																					BgL_arg3859z00_1381 =
																						BGl_makezd2varzd2zzast_nodez00
																						(BgL_locz00_56, BgL_arg3861z00_1383,
																						(BgL_variablez00_bglt)
																						(BGl_za2listzd2ze3vectorza2z31zzcnst_cachez00));
																				}
																				{	/* Cnst/alloc.scm 654 */
																					BgL_kwotez00_bglt BgL_arg3862z00_1384;

																					{	/* Cnst/alloc.scm 654 */
																						obj_t BgL_arg3864z00_1386;

																						BgL_arg3864z00_1386 =
																							BGl_vectorzd2ze3listz31zz__r4_vectors_6_8z00
																							(BgL_vecz00_55);
																						BgL_arg3862z00_1384 =
																							BGl_makezd2kwotezd2zzast_nodez00
																							(BgL_locz00_56,
																							(BgL_typez00_bglt)
																							(BGl_za2objza2z00zztype_cachez00),
																							BgL_arg3864z00_1386);
																					}
																					{	/* Cnst/alloc.scm 650 */
																						obj_t BgL_list3863z00_1385;

																						BgL_list3863z00_1385 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg3862z00_1384),
																							BNIL);
																						BgL_arg3860z00_1382 =
																							BgL_list3863z00_1385;
																				}}
																				BgL_arg3857z00_1379 =
																					BGl_makezd2appzd2zzast_nodez00
																					(BgL_locz00_56,
																					(BgL_typez00_bglt)
																					(BGl_za2vectorza2z00zztype_cachez00),
																					BUNSPEC, BINT(((long) -1)),
																					BgL_arg3859z00_1381,
																					BgL_arg3860z00_1382);
																			}
																			BgL_arg3855z00_1377 =
																				MAKE_PAIR(
																				(obj_t) (BgL_varz00_1373),
																				(obj_t) (BgL_arg3857z00_1379));
																		}
																		{	/* Cnst/alloc.scm 640 */
																			obj_t BgL_list3856z00_1378;

																			BgL_list3856z00_1378 =
																				MAKE_PAIR(BgL_arg3855z00_1377, BNIL);
																			BgL_arg3853z00_1375 =
																				BgL_list3856z00_1378;
																	}}
																	{	/* Cnst/alloc.scm 655 */
																		BgL_varz00_bglt BgL_varzd2bodyzd2_1387;

																		{	/* Cnst/alloc.scm 657 */
																			BgL_typez00_bglt BgL_arg3883z00_1406;

																			{
																				BgL_variablez00_bglt BgL_auxz00_3656;

																				BgL_auxz00_3656 =
																					(BgL_variablez00_bglt)
																					(BgL_varz00_1373);
																				BgL_arg3883z00_1406 =
																					(((BgL_variablez00_bglt)
																						CREF(BgL_auxz00_3656))->
																					BgL_typez00);
																			}
																			BgL_varzd2bodyzd2_1387 =
																				BGl_makezd2varzd2zzast_nodez00
																				(BgL_locz00_56, BgL_arg3883z00_1406,
																				(BgL_variablez00_bglt)
																				(BgL_varz00_1373));
																		}
																		{	/* Cnst/alloc.scm 659 */
																			bool_t BgL_testz00_3661;

																			{	/* Cnst/alloc.scm 659 */
																				int BgL_arg3881z00_1404;

																				BgL_arg3881z00_1404 =
																					VECTOR_TAG(BgL_vecz00_55);
																				BgL_testz00_3661 =
																					(
																					(long) (BgL_arg3881z00_1404) >
																					((long) 0));
																			}
																			if (BgL_testz00_3661)
																				{	/* Cnst/alloc.scm 660 */
																					obj_t BgL_arg3867z00_1390;

																					{	/* Cnst/alloc.scm 665 */
																						BgL_appz00_bglt BgL_arg3868z00_1391;

																						{	/* Cnst/alloc.scm 665 */
																							BgL_varz00_bglt
																								BgL_arg3872z00_1395;
																							obj_t BgL_arg3873z00_1396;

																							{	/* Cnst/alloc.scm 670 */
																								BgL_typez00_bglt
																									BgL_arg3874z00_1397;
																								{
																									BgL_variablez00_bglt
																										BgL_auxz00_3665;
																									BgL_auxz00_3665 =
																										(BgL_variablez00_bglt)
																										(BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00);
																									BgL_arg3874z00_1397 =
																										(((BgL_variablez00_bglt)
																											CREF(BgL_auxz00_3665))->
																										BgL_typez00);
																								}
																								BgL_arg3872z00_1395 =
																									BGl_makezd2varzd2zzast_nodez00
																									(BgL_locz00_56,
																									BgL_arg3874z00_1397,
																									(BgL_variablez00_bglt)
																									(BGl_za2vectorzd2tagzd2setz12za2z12zzcnst_cachez00));
																							}
																							{	/* Cnst/alloc.scm 676 */
																								BgL_varz00_bglt
																									BgL_arg3875z00_1398;
																								BgL_atomz00_bglt
																									BgL_arg3876z00_1399;
																								{	/* Cnst/alloc.scm 676 */
																									BgL_typez00_bglt
																										BgL_arg3879z00_1402;
																									{
																										BgL_variablez00_bglt
																											BgL_auxz00_3670;
																										BgL_auxz00_3670 =
																											(BgL_variablez00_bglt)
																											(BgL_varz00_1373);
																										BgL_arg3879z00_1402 =
																											(((BgL_variablez00_bglt)
																												CREF(BgL_auxz00_3670))->
																											BgL_typez00);
																									}
																									BgL_arg3875z00_1398 =
																										BGl_makezd2varzd2zzast_nodez00
																										(BgL_locz00_56,
																										BgL_arg3879z00_1402,
																										(BgL_variablez00_bglt)
																										(BgL_varz00_1373));
																								}
																								{	/* Cnst/alloc.scm 681 */
																									int BgL_arg3880z00_1403;

																									BgL_arg3880z00_1403 =
																										VECTOR_TAG(BgL_vecz00_55);
																									BgL_arg3876z00_1399 =
																										BGl_makezd2atomzd2zzast_nodez00
																										(BgL_locz00_56,
																										(BgL_typez00_bglt)
																										(BGl_za2objza2z00zztype_cachez00),
																										BINT(BgL_arg3880z00_1403));
																								}
																								{	/* Cnst/alloc.scm 673 */
																									obj_t BgL_list3877z00_1400;

																									{	/* Cnst/alloc.scm 673 */
																										obj_t BgL_arg3878z00_1401;

																										BgL_arg3878z00_1401 =
																											MAKE_PAIR(
																											(obj_t)
																											(BgL_arg3876z00_1399),
																											BNIL);
																										BgL_list3877z00_1400 =
																											MAKE_PAIR((obj_t)
																											(BgL_arg3875z00_1398),
																											BgL_arg3878z00_1401);
																									}
																									BgL_arg3873z00_1396 =
																										BgL_list3877z00_1400;
																							}}
																							BgL_arg3868z00_1391 =
																								BGl_makezd2appzd2zzast_nodez00
																								(BgL_locz00_56,
																								(BgL_typez00_bglt)
																								(BGl_za2objza2z00zztype_cachez00),
																								BUNSPEC, BINT(((long) -1)),
																								BgL_arg3872z00_1395,
																								BgL_arg3873z00_1396);
																						}
																						{	/* Cnst/alloc.scm 663 */
																							obj_t BgL_list3869z00_1392;

																							{	/* Cnst/alloc.scm 663 */
																								obj_t BgL_arg3870z00_1393;

																								BgL_arg3870z00_1393 =
																									MAKE_PAIR(
																									(obj_t)
																									(BgL_varzd2bodyzd2_1387),
																									BNIL);
																								BgL_list3869z00_1392 =
																									MAKE_PAIR((obj_t)
																									(BgL_arg3868z00_1391),
																									BgL_arg3870z00_1393);
																							}
																							BgL_arg3867z00_1390 =
																								BgL_list3869z00_1392;
																					}}
																					BgL_arg3854z00_1376 =
																						(obj_t)
																						(BGl_makezd2sequencezd2zzast_nodez00
																						(BgL_locz00_56,
																							(BgL_typez00_bglt)
																							(BGl_za2vectorza2z00zztype_cachez00),
																							BUNSPEC, BINT(((long) -1)),
																							BgL_arg3867z00_1390));
																				}
																			else
																				{	/* Cnst/alloc.scm 659 */
																					BgL_arg3854z00_1376 =
																						(obj_t) (BgL_varzd2bodyzd2_1387);
																				}
																		}
																	}
																	BgL_arg3851z00_1372 =
																		BGl_makezd2letzd2varz00zzast_nodez00
																		(BgL_locz00_56,
																		(BgL_typez00_bglt)
																		(BGl_za2objza2z00zztype_cachez00), BUNSPEC,
																		BINT(((long) -1)), BgL_arg3853z00_1375,
																		(BgL_nodez00_bglt) (BgL_arg3854z00_1376),
																		((bool_t) 1));
															}}
															BgL_arg3850z00_1371 =
																BGl_coercez12z12zzcoerce_coercez00(
																(BgL_nodez00_bglt) (BgL_arg3851z00_1372),
																BUNSPEC,
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00),
																((bool_t) 0));
														}
														BgL_arg3892z00_1417 =
															BGl_cnstz12z12zzcnst_nodez00(BgL_arg3850z00_1371);
													}
													{	/* Cnst/alloc.scm 701 */
														obj_t BgL_list3894z00_1419;

														{	/* Cnst/alloc.scm 701 */
															obj_t BgL_arg3895z00_1420;

															BgL_arg3895z00_1420 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3894z00_1419 =
																MAKE_PAIR(
																(obj_t) (BgL_arg3892z00_1417),
																BgL_arg3895z00_1420);
														}
														BgL_arg3890z00_1415 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3891z00_1416, BgL_list3894z00_1419);
												}}
												BgL_arg3888z00_1413 =
													MAKE_PAIR(BgL_arg3889z00_1414, BgL_arg3890z00_1415);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg3888z00_1413,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 705 */
											BgL_typez00_bglt BgL_arg3903z00_1428;

											{
												BgL_variablez00_bglt BgL_auxz00_3709;

												BgL_auxz00_3709 =
													(BgL_variablez00_bglt) (BgL_varz00_1411);
												BgL_arg3903z00_1428 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_3709))->
													BgL_typez00);
											}
											BgL_auxz00_3604 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_56,
												BgL_arg3903z00_1428,
												(BgL_variablez00_bglt) (BgL_varz00_1411));
									}}
									return (BgL_nodez00_bglt) (BgL_auxz00_3604);
								}
							else
								{	/* Cnst/alloc.scm 727 */
									BgL_appz00_bglt BgL_auxz00_3715;

									{	/* Cnst/alloc.scm 688 */
										long BgL_offsetz00_1408;

										BgL_offsetz00_1408 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_PAIR(BgL_vecz00_55,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 692 */
												obj_t BgL_arg3885z00_1409;

												{	/* Cnst/alloc.scm 692 */
													obj_t BgL_newz00_2473;

													BgL_newz00_2473 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 692 */
														obj_t BgL_auxz00_3725;

														int BgL_auxz00_3723;

														BgL_auxz00_3725 = BINT(BgL_offsetz00_1408);
														BgL_auxz00_3723 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2473, BgL_auxz00_3723,
															BgL_auxz00_3725);
													}
													{	/* Cnst/alloc.scm 692 */
														int BgL_auxz00_3728;

														BgL_auxz00_3728 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2473, BgL_auxz00_3728,
															BgL_vecz00_55);
													}
													BgL_arg3885z00_1409 = BgL_newz00_2473;
												}
												BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
													MAKE_PAIR(BgL_arg3885z00_1409,
													BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 691 */
												BFALSE;
											}
										BgL_auxz00_3715 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1408), BgL_locz00_56);
									}
									return (BgL_nodez00_bglt) (BgL_auxz00_3715);
								}
						}
				}
			}
		}
	}



/* _cnst-alloc-vector */
	obj_t BGl__cnstzd2alloczd2vectorz00zzcnst_allocz00(obj_t BgL_envz00_2737,
		obj_t BgL_vecz00_2738, obj_t BgL_locz00_2739)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 632 */
			return
				(obj_t) (BGl_cnstzd2alloczd2vectorz00zzcnst_allocz00(BgL_vecz00_2738,
					BgL_locz00_2739));
		}
	}



/* cnst-alloc-homogenous-vector */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t
		BgL_vecz00_57, obj_t BgL_locz00_58)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 732 */
			{	/* Cnst/alloc.scm 734 */
				obj_t BgL_veczd2tagzd2_1437;

				{	/* Cnst/alloc.scm 734 */
					obj_t BgL_tagz00_1528;

					BgL_tagz00_1528 =
						BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(BgL_vecz00_57);
					{	/* Cnst/alloc.scm 734 */
						obj_t BgL__z00_1529;

						obj_t BgL__z00_1530;

						obj_t BgL__z00_1531;

						{	/* Cnst/alloc.scm 734 */
							int BgL_auxz00_3738;

							BgL_auxz00_3738 = (int) (((long) 1));
							BgL__z00_1529 = BGL_MVALUES_VAL(BgL_auxz00_3738);
						}
						{	/* Cnst/alloc.scm 734 */
							int BgL_auxz00_3741;

							BgL_auxz00_3741 = (int) (((long) 2));
							BgL__z00_1530 = BGL_MVALUES_VAL(BgL_auxz00_3741);
						}
						{	/* Cnst/alloc.scm 734 */
							int BgL_auxz00_3744;

							BgL_auxz00_3744 = (int) (((long) 3));
							BgL__z00_1531 = BGL_MVALUES_VAL(BgL_auxz00_3744);
						}
						BgL_veczd2tagzd2_1437 = BgL_tagz00_1528;
				}}
				{	/* Cnst/alloc.scm 734 */
					obj_t BgL_veczd2typezd2idz00_1438;

					{	/* Cnst/alloc.scm 737 */
						obj_t BgL_arg3979z00_1523;

						{	/* Cnst/alloc.scm 737 */
							obj_t BgL_arg3980z00_1524;

							obj_t BgL_arg3981z00_1525;

							{	/* Cnst/alloc.scm 737 */
								obj_t BgL_res4164z00_2506;

								{	/* Cnst/alloc.scm 737 */
									obj_t BgL_symbolz00_2504;

									BgL_symbolz00_2504 = BgL_veczd2tagzd2_1437;
									{	/* Cnst/alloc.scm 737 */
										obj_t BgL_arg2063z00_2505;

										BgL_arg2063z00_2505 = SYMBOL_TO_STRING(BgL_symbolz00_2504);
										BgL_res4164z00_2506 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_2505);
								}}
								BgL_arg3980z00_1524 = BgL_res4164z00_2506;
							}
							{	/* Cnst/alloc.scm 737 */
								obj_t BgL_res4165z00_2509;

								{	/* Cnst/alloc.scm 737 */
									obj_t BgL_symbolz00_2507;

									BgL_symbolz00_2507 = CNST_TABLE_REF(((long) 36));
									{	/* Cnst/alloc.scm 737 */
										obj_t BgL_arg2063z00_2508;

										BgL_arg2063z00_2508 = SYMBOL_TO_STRING(BgL_symbolz00_2507);
										BgL_res4165z00_2509 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_2508);
								}}
								BgL_arg3981z00_1525 = BgL_res4165z00_2509;
							}
							{	/* Cnst/alloc.scm 737 */
								obj_t BgL_list3982z00_1526;

								{	/* Cnst/alloc.scm 737 */
									obj_t BgL_arg3983z00_1527;

									BgL_arg3983z00_1527 = MAKE_PAIR(BgL_arg3981z00_1525, BNIL);
									BgL_list3982z00_1526 =
										MAKE_PAIR(BgL_arg3980z00_1524, BgL_arg3983z00_1527);
								}
								BgL_arg3979z00_1523 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list3982z00_1526);
						}}
						BgL_veczd2typezd2idz00_1438 =
							string_to_symbol(BSTRING_TO_STRING(BgL_arg3979z00_1523));
					}
					{	/* Cnst/alloc.scm 737 */
						BgL_typez00_bglt BgL_veczd2typezd2_1439;

						BgL_veczd2typezd2_1439 =
							BGl_findzd2typezd2zztype_envz00(BgL_veczd2typezd2idz00_1438);
						{	/* Cnst/alloc.scm 738 */
							obj_t BgL_listzd2ze3vectorz31_1440;

							{	/* Cnst/alloc.scm 739 */
								obj_t BgL_list3975z00_1519;

								{	/* Cnst/alloc.scm 739 */
									obj_t BgL_arg3976z00_1520;

									obj_t BgL_arg3977z00_1521;

									BgL_arg3976z00_1520 = CNST_TABLE_REF(((long) 37));
									{	/* Cnst/alloc.scm 739 */
										obj_t BgL_arg3978z00_1522;

										BgL_arg3978z00_1522 =
											MAKE_PAIR(CNST_TABLE_REF(((long) 36)), BNIL);
										BgL_arg3977z00_1521 =
											MAKE_PAIR(BgL_veczd2tagzd2_1437, BgL_arg3978z00_1522);
									}
									BgL_list3975z00_1519 =
										MAKE_PAIR(BgL_arg3976z00_1520, BgL_arg3977z00_1521);
								}
								BgL_listzd2ze3vectorz31_1440 =
									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
									(BgL_list3975z00_1519);
							}
							{	/* Cnst/alloc.scm 739 */
								obj_t BgL_vectorzd2ze3listz31_1441;

								if ((BgL_veczd2tagzd2_1437 == CNST_TABLE_REF(((long) 38))))
									{	/* Cnst/alloc.scm 740 */
										BgL_vectorzd2ze3listz31_1441 =
											BGl_s8vectorzd2ze3listzd2envze3zz__srfi4z00;
									}
								else
									{	/* Cnst/alloc.scm 740 */
										if ((BgL_veczd2tagzd2_1437 == CNST_TABLE_REF(((long) 39))))
											{	/* Cnst/alloc.scm 740 */
												BgL_vectorzd2ze3listz31_1441 =
													BGl_u8vectorzd2ze3listzd2envze3zz__srfi4z00;
											}
										else
											{	/* Cnst/alloc.scm 740 */
												if (
													(BgL_veczd2tagzd2_1437 ==
														CNST_TABLE_REF(((long) 40))))
													{	/* Cnst/alloc.scm 740 */
														BgL_vectorzd2ze3listz31_1441 =
															BGl_s16vectorzd2ze3listzd2envze3zz__srfi4z00;
													}
												else
													{	/* Cnst/alloc.scm 740 */
														if (
															(BgL_veczd2tagzd2_1437 ==
																CNST_TABLE_REF(((long) 41))))
															{	/* Cnst/alloc.scm 740 */
																BgL_vectorzd2ze3listz31_1441 =
																	BGl_u16vectorzd2ze3listzd2envze3zz__srfi4z00;
															}
														else
															{	/* Cnst/alloc.scm 740 */
																if (
																	(BgL_veczd2tagzd2_1437 ==
																		CNST_TABLE_REF(((long) 42))))
																	{	/* Cnst/alloc.scm 740 */
																		BgL_vectorzd2ze3listz31_1441 =
																			BGl_s32vectorzd2ze3listzd2envze3zz__srfi4z00;
																	}
																else
																	{	/* Cnst/alloc.scm 740 */
																		if (
																			(BgL_veczd2tagzd2_1437 ==
																				CNST_TABLE_REF(((long) 43))))
																			{	/* Cnst/alloc.scm 740 */
																				BgL_vectorzd2ze3listz31_1441 =
																					BGl_u32vectorzd2ze3listzd2envze3zz__srfi4z00;
																			}
																		else
																			{	/* Cnst/alloc.scm 740 */
																				if (
																					(BgL_veczd2tagzd2_1437 ==
																						CNST_TABLE_REF(((long) 44))))
																					{	/* Cnst/alloc.scm 740 */
																						BgL_vectorzd2ze3listz31_1441 =
																							BGl_s64vectorzd2ze3listzd2envze3zz__srfi4z00;
																					}
																				else
																					{	/* Cnst/alloc.scm 740 */
																						if (
																							(BgL_veczd2tagzd2_1437 ==
																								CNST_TABLE_REF(((long) 45))))
																							{	/* Cnst/alloc.scm 740 */
																								BgL_vectorzd2ze3listz31_1441 =
																									BGl_u64vectorzd2ze3listzd2envze3zz__srfi4z00;
																							}
																						else
																							{	/* Cnst/alloc.scm 740 */
																								if (
																									(BgL_veczd2tagzd2_1437 ==
																										CNST_TABLE_REF(((long)
																												46))))
																									{	/* Cnst/alloc.scm 740 */
																										BgL_vectorzd2ze3listz31_1441
																											=
																											BGl_f32vectorzd2ze3listzd2envze3zz__srfi4z00;
																									}
																								else
																									{	/* Cnst/alloc.scm 740 */
																										if (
																											(BgL_veczd2tagzd2_1437 ==
																												CNST_TABLE_REF(((long)
																														47))))
																											{	/* Cnst/alloc.scm 740 */
																												BgL_vectorzd2ze3listz31_1441
																													=
																													BGl_f64vectorzd2ze3listzd2envze3zz__srfi4z00;
																											}
																										else
																											{	/* Cnst/alloc.scm 740 */
																												BgL_vectorzd2ze3listz31_1441
																													= BUNSPEC;
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
								{	/* Cnst/alloc.scm 740 */

									{

										{	/* Cnst/alloc.scm 805 */
											obj_t BgL_oldz00_1445;

											{	/* Cnst/alloc.scm 805 */
												obj_t BgL__andtest_3481z00_1452;

												BgL__andtest_3481z00_1452 =
													BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
												if (CBOOL(BgL__andtest_3481z00_1452))
													{
														obj_t BgL_envz00_1454;

														BgL_envz00_1454 =
															BGl_za2vectorzd2envza2zd2zzcnst_allocz00;
													BgL_zc3anonymousza33916ze3z83_1455:
														if (NULLP(BgL_envz00_1454))
															{	/* Cnst/alloc.scm 808 */
																BgL_oldz00_1445 = BFALSE;
															}
														else
															{	/* Cnst/alloc.scm 808 */
																if (BGl_cnstzd2equalzf3z21zzcnst_allocz00
																	(STRUCT_REF(CAR(BgL_envz00_1454),
																			(int) (((long) 0))), BgL_vecz00_57))
																	{	/* Cnst/alloc.scm 810 */
																		BgL_oldz00_1445 = CAR(BgL_envz00_1454);
																	}
																else
																	{
																		obj_t BgL_envz00_3804;

																		BgL_envz00_3804 = CDR(BgL_envz00_1454);
																		BgL_envz00_1454 = BgL_envz00_3804;
																		goto BgL_zc3anonymousza33916ze3z83_1455;
																	}
															}
													}
												else
													{	/* Cnst/alloc.scm 805 */
														BgL_oldz00_1445 = BFALSE;
													}
											}
											if (CBOOL(BgL_oldz00_1445))
												{	/* Cnst/alloc.scm 815 */
													if (
														(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
															CNST_TABLE_REF(((long) 14))))
														{	/* Cnst/alloc.scm 819 */
															BgL_typez00_bglt BgL_arg3911z00_1447;

															obj_t BgL_arg3912z00_1448;

															{	/* Cnst/alloc.scm 819 */
																BgL_variablez00_bglt BgL_obj1784z00_2541;

																{	/* Cnst/alloc.scm 819 */
																	obj_t BgL_sz00_2539;

																	BgL_sz00_2539 = BgL_oldz00_1445;
																	BgL_obj1784z00_2541 =
																		(BgL_variablez00_bglt) (STRUCT_REF
																		(BgL_sz00_2539, (int) (((long) 1))));
																}
																BgL_arg3911z00_1447 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_obj1784z00_2541))->BgL_typez00);
															}
															BgL_arg3912z00_1448 =
																STRUCT_REF(BgL_oldz00_1445, (int) (((long) 1)));
															return
																(BgL_nodez00_bglt)
																(BGl_makezd2varzd2zzast_nodez00(BgL_locz00_58,
																	BgL_arg3911z00_1447,
																	(BgL_variablez00_bglt)
																	(BgL_arg3912z00_1448)));
														}
													else
														{	/* Cnst/alloc.scm 821 */
															obj_t BgL_arg3914z00_1450;

															BgL_arg3914z00_1450 =
																STRUCT_REF(BgL_oldz00_1445, (int) (((long) 1)));
															return
																(BgL_nodez00_bglt)
																(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
																(BgL_arg3914z00_1450, BgL_locz00_58));
														}
												}
											else
												{	/* Cnst/alloc.scm 815 */
													if (
														(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
															CNST_TABLE_REF(((long) 14))))
														{	/* Cnst/alloc.scm 823 */
															BgL_varz00_bglt BgL_auxz00_3827;

															{	/* Cnst/alloc.scm 791 */
																BgL_globalz00_bglt BgL_varz00_1484;

																{	/* Cnst/alloc.scm 792 */
																	obj_t BgL_arg3961z00_1501;

																	obj_t BgL_arg3962z00_1502;

																	obj_t BgL_arg3963z00_1503;

																	BgL_arg3961z00_1501 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(BGl_gensymz00zz__r4_symbols_6_4z00
																		(CNST_TABLE_REF(((long) 48))),
																		BgL_veczd2typezd2idz00_1438);
																	BgL_arg3962z00_1502 =
																		CNST_TABLE_REF(((long) 2));
																	BgL_arg3963z00_1503 =
																		CNST_TABLE_REF(((long) 3));
																	BgL_varz00_1484 =
																		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
																		(BgL_arg3961z00_1501,
																		BGl_za2moduleza2z00zzmodule_modulez00,
																		BgL_arg3962z00_1502, BgL_arg3963z00_1503);
																}
																if (CBOOL
																	(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
																	{	/* Cnst/alloc.scm 797 */
																		obj_t BgL_arg3943z00_1485;

																		{	/* Cnst/alloc.scm 797 */
																			obj_t BgL_newz00_2569;

																			BgL_newz00_2569 =
																				create_struct(CNST_TABLE_REF(((long)
																						9)), (int) (((long) 2)));
																			{	/* Cnst/alloc.scm 797 */
																				obj_t BgL_auxz00_3841;

																				int BgL_auxz00_3839;

																				BgL_auxz00_3841 =
																					(obj_t) (BgL_varz00_1484);
																				BgL_auxz00_3839 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_2569,
																					BgL_auxz00_3839, BgL_auxz00_3841);
																			}
																			{	/* Cnst/alloc.scm 797 */
																				int BgL_auxz00_3844;

																				BgL_auxz00_3844 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_2569,
																					BgL_auxz00_3844, BgL_vecz00_57);
																			}
																			BgL_arg3943z00_1485 = BgL_newz00_2569;
																		}
																		BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
																			MAKE_PAIR(BgL_arg3943z00_1485,
																			BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
																	}
																else
																	{	/* Cnst/alloc.scm 796 */
																		BFALSE;
																	}
																{	/* Cnst/alloc.scm 798 */
																	obj_t BgL_arg3944z00_1486;

																	{	/* Cnst/alloc.scm 798 */
																		obj_t BgL_arg3945z00_1487;

																		obj_t BgL_arg3946z00_1488;

																		BgL_arg3945z00_1487 =
																			CNST_TABLE_REF(((long) 12));
																		{	/* Cnst/alloc.scm 798 */
																			obj_t BgL_arg3947z00_1489;

																			BgL_nodez00_bglt BgL_arg3948z00_1490;

																			{	/* Cnst/alloc.scm 798 */
																				obj_t BgL_arg3953z00_1494;

																				obj_t BgL_arg3954z00_1495;

																				BgL_arg3953z00_1494 =
																					CNST_TABLE_REF(((long) 13));
																				{	/* Cnst/alloc.scm 798 */
																					obj_t BgL_arg3955z00_1496;

																					obj_t BgL_arg3956z00_1497;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_3850;
																						BgL_auxz00_3850 =
																							(BgL_variablez00_bglt)
																							(BgL_varz00_1484);
																						BgL_arg3955z00_1496 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_3850))->
																							BgL_idz00);
																					}
																					BgL_arg3956z00_1497 =
																						(((BgL_globalz00_bglt)
																							CREF(BgL_varz00_1484))->
																						BgL_modulez00);
																					{	/* Cnst/alloc.scm 798 */
																						obj_t BgL_list3959z00_1499;

																						{	/* Cnst/alloc.scm 798 */
																							obj_t BgL_arg3960z00_1500;

																							BgL_arg3960z00_1500 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3959z00_1499 =
																								MAKE_PAIR(BgL_arg3956z00_1497,
																								BgL_arg3960z00_1500);
																						}
																						BgL_arg3954z00_1495 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3955z00_1496,
																							BgL_list3959z00_1499);
																				}}
																				BgL_arg3947z00_1489 =
																					MAKE_PAIR(BgL_arg3953z00_1494,
																					BgL_arg3954z00_1495);
																			}
																			{	/* Cnst/alloc.scm 755 */
																				BgL_nodez00_bglt BgL_arg3924z00_1463;

																				{	/* Cnst/alloc.scm 755 */
																					BgL_letzd2varzd2_bglt
																						BgL_arg3925z00_1464;
																					{	/* Cnst/alloc.scm 755 */
																						BgL_localz00_bglt BgL_varz00_1465;

																						BgL_varz00_1465 =
																							BGl_makezd2localzd2svarz00zzast_localz00
																							(CNST_TABLE_REF(((long) 35)),
																							BgL_veczd2typezd2_1439);
																						{	/* Cnst/alloc.scm 756 */
																							obj_t BgL_arg3927z00_1467;

																							BgL_varz00_bglt
																								BgL_arg3928z00_1468;
																							{	/* Cnst/alloc.scm 762 */
																								obj_t BgL_arg3929z00_1469;

																								{	/* Cnst/alloc.scm 762 */
																									BgL_appz00_bglt
																										BgL_arg3931z00_1471;
																									{	/* Cnst/alloc.scm 762 */
																										BgL_varz00_bglt
																											BgL_arg3933z00_1473;
																										obj_t BgL_arg3934z00_1474;

																										{	/* Cnst/alloc.scm 768 */
																											obj_t BgL_arg3935z00_1475;

																											BgL_arg3935z00_1475 =
																												BGl_findzd2globalzd2zzast_envz00
																												(BgL_listzd2ze3vectorz31_1440,
																												BNIL);
																											BgL_arg3933z00_1473 =
																												BGl_makezd2varzd2zzast_nodez00
																												(BgL_locz00_58,
																												BgL_veczd2typezd2_1439,
																												(BgL_variablez00_bglt)
																												(BgL_arg3935z00_1475));
																										}
																										{	/* Cnst/alloc.scm 773 */
																											BgL_kwotez00_bglt
																												BgL_arg3937z00_1477;
																											{	/* Cnst/alloc.scm 773 */
																												obj_t
																													BgL_arg3939z00_1479;
																												BgL_arg3939z00_1479 =
																													PROCEDURE_ENTRY
																													(BgL_vectorzd2ze3listz31_1441)
																													(BgL_vectorzd2ze3listz31_1441,
																													BgL_vecz00_57, BEOA);
																												BgL_arg3937z00_1477 =
																													BGl_makezd2kwotezd2zzast_nodez00
																													(BgL_locz00_58,
																													(BgL_typez00_bglt)
																													(BGl_za2objza2z00zztype_cachez00),
																													BgL_arg3939z00_1479);
																											}
																											{	/* Cnst/alloc.scm 769 */
																												obj_t
																													BgL_list3938z00_1478;
																												BgL_list3938z00_1478 =
																													MAKE_PAIR((obj_t)
																													(BgL_arg3937z00_1477),
																													BNIL);
																												BgL_arg3934z00_1474 =
																													BgL_list3938z00_1478;
																										}}
																										BgL_arg3931z00_1471 =
																											BGl_makezd2appzd2zzast_nodez00
																											(BgL_locz00_58,
																											BgL_veczd2typezd2_1439,
																											BUNSPEC,
																											BINT(((long) -1)),
																											BgL_arg3933z00_1473,
																											BgL_arg3934z00_1474);
																									}
																									BgL_arg3929z00_1469 =
																										MAKE_PAIR(
																										(obj_t) (BgL_varz00_1465),
																										(obj_t)
																										(BgL_arg3931z00_1471));
																								}
																								{	/* Cnst/alloc.scm 759 */
																									obj_t BgL_list3930z00_1470;

																									BgL_list3930z00_1470 =
																										MAKE_PAIR
																										(BgL_arg3929z00_1469, BNIL);
																									BgL_arg3927z00_1467 =
																										BgL_list3930z00_1470;
																							}}
																							BgL_arg3928z00_1468 =
																								BGl_makezd2varzd2zzast_nodez00
																								(BgL_locz00_58,
																								BgL_veczd2typezd2_1439,
																								(BgL_variablez00_bglt)
																								(BgL_varz00_1465));
																							BgL_arg3925z00_1464 =
																								BGl_makezd2letzd2varz00zzast_nodez00
																								(BgL_locz00_58,
																								(BgL_typez00_bglt)
																								(BGl_za2objza2z00zztype_cachez00),
																								BUNSPEC, BINT(((long) -1)),
																								BgL_arg3927z00_1467,
																								(BgL_nodez00_bglt)
																								(BgL_arg3928z00_1468),
																								((bool_t) 1));
																					}}
																					BgL_arg3924z00_1463 =
																						BGl_coercez12z12zzcoerce_coercez00(
																						(BgL_nodez00_bglt)
																						(BgL_arg3925z00_1464), BUNSPEC,
																						(BgL_typez00_bglt)
																						(BGl_za2objza2z00zztype_cachez00),
																						((bool_t) 0));
																				}
																				BgL_arg3948z00_1490 =
																					BGl_cnstz12z12zzcnst_nodez00
																					(BgL_arg3924z00_1463);
																			}
																			{	/* Cnst/alloc.scm 798 */
																				obj_t BgL_list3950z00_1492;

																				{	/* Cnst/alloc.scm 798 */
																					obj_t BgL_arg3951z00_1493;

																					BgL_arg3951z00_1493 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list3950z00_1492 =
																						MAKE_PAIR(
																						(obj_t) (BgL_arg3948z00_1490),
																						BgL_arg3951z00_1493);
																				}
																				BgL_arg3946z00_1488 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg3947z00_1489,
																					BgL_list3950z00_1492);
																		}}
																		BgL_arg3944z00_1486 =
																			MAKE_PAIR(BgL_arg3945z00_1487,
																			BgL_arg3946z00_1488);
																	}
																	BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
																		MAKE_PAIR(BgL_arg3944z00_1486,
																		BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
																}
																BgL_auxz00_3827 =
																	BGl_makezd2varzd2zzast_nodez00(BgL_locz00_58,
																	BgL_veczd2typezd2_1439,
																	(BgL_variablez00_bglt) (BgL_varz00_1484));
															}
															return (BgL_nodez00_bglt) (BgL_auxz00_3827);
														}
													else
														{	/* Cnst/alloc.scm 825 */
															BgL_appz00_bglt BgL_auxz00_3894;

															{	/* Cnst/alloc.scm 783 */
																long BgL_offsetz00_1481;

																BgL_offsetz00_1481 =
																	BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
																BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
																	(((long) 1) +
																	BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
																BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
																	MAKE_PAIR(BgL_vecz00_57,
																	BGl_za2globalzd2setza2zd2zzcnst_allocz00);
																if (CBOOL
																	(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
																	{	/* Cnst/alloc.scm 787 */
																		obj_t BgL_arg3941z00_1482;

																		{	/* Cnst/alloc.scm 787 */
																			obj_t BgL_newz00_2556;

																			BgL_newz00_2556 =
																				create_struct(CNST_TABLE_REF(((long)
																						9)), (int) (((long) 2)));
																			{	/* Cnst/alloc.scm 787 */
																				obj_t BgL_auxz00_3904;

																				int BgL_auxz00_3902;

																				BgL_auxz00_3904 =
																					BINT(BgL_offsetz00_1481);
																				BgL_auxz00_3902 = (int) (((long) 1));
																				STRUCT_SET(BgL_newz00_2556,
																					BgL_auxz00_3902, BgL_auxz00_3904);
																			}
																			{	/* Cnst/alloc.scm 787 */
																				int BgL_auxz00_3907;

																				BgL_auxz00_3907 = (int) (((long) 0));
																				STRUCT_SET(BgL_newz00_2556,
																					BgL_auxz00_3907, BgL_vecz00_57);
																			}
																			BgL_arg3941z00_1482 = BgL_newz00_2556;
																		}
																		BGl_za2vectorzd2envza2zd2zzcnst_allocz00 =
																			MAKE_PAIR(BgL_arg3941z00_1482,
																			BGl_za2vectorzd2envza2zd2zzcnst_allocz00);
																	}
																else
																	{	/* Cnst/alloc.scm 786 */
																		BFALSE;
																	}
																BgL_auxz00_3894 =
																	BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
																	(BINT(BgL_offsetz00_1481), BgL_locz00_58);
															}
															return (BgL_nodez00_bglt) (BgL_auxz00_3894);
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



/* _cnst-alloc-homogenous-vector */
	obj_t BGl__cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00(obj_t
		BgL_envz00_2740, obj_t BgL_vecz00_2741, obj_t BgL_locz00_2742)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 732 */
			return
				(obj_t) (BGl_cnstzd2alloczd2homogenouszd2vectorzd2zzcnst_allocz00
				(BgL_vecz00_2741, BgL_locz00_2742));
		}
	}



/* cnst-alloc-tvector */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t BgL_tvecz00_59,
		obj_t BgL_locz00_60)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 830 */
			{

				if (BGl_tvectorzd2Czd2staticzf3zf3zztvector_cnstz00(BgL_tvecz00_59))
					{	/* Cnst/alloc.scm 861 */
						BgL_varz00_bglt BgL_auxz00_3918;

						{	/* Cnst/alloc.scm 832 */
							BgL_globalz00_bglt BgL_varz00_1536;

							{	/* Cnst/alloc.scm 832 */
								obj_t BgL_arg4008z00_1561;

								obj_t BgL_arg4009z00_1562;

								{	/* Cnst/alloc.scm 832 */
									obj_t BgL_arg4010z00_1563;

									obj_t BgL_arg4011z00_1564;

									BgL_arg4010z00_1563 =
										BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
												49)));
									BgL_arg4011z00_1564 = CNST_TABLE_REF(((long) 50));
									BgL_arg4008z00_1561 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_arg4010z00_1563, BgL_arg4011z00_1564);
								}
								BgL_arg4009z00_1562 = CNST_TABLE_REF(((long) 51));
								BgL_varz00_1536 =
									BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2
									(BgL_arg4008z00_1561, BGl_za2moduleza2z00zzmodule_modulez00,
									BgL_tvecz00_59, BgL_arg4009z00_1562, BgL_locz00_60);
							}
							{	/* Cnst/alloc.scm 837 */
								obj_t BgL_idz00_1537;

								{	/* Cnst/alloc.scm 837 */
									BgL_typez00_bglt BgL_obj1615z00_2586;

									{	/* Cnst/alloc.scm 837 */
										obj_t BgL_sz00_2584;

										BgL_sz00_2584 = BgL_tvecz00_59;
										BgL_obj1615z00_2586 =
											(BgL_typez00_bglt) (STRUCT_REF(BgL_sz00_2584,
												(int) (((long) 0))));
									}
									BgL_idz00_1537 =
										(((BgL_typez00_bglt) CREF(BgL_obj1615z00_2586))->BgL_idz00);
								}
								{	/* Cnst/alloc.scm 837 */
									BgL_nodez00_bglt BgL_aidz00_1538;

									{	/* Cnst/alloc.scm 840 */
										BgL_kwotez00_bglt BgL_arg4004z00_1557;

										BgL_arg4004z00_1557 =
											BGl_makezd2kwotezd2zzast_nodez00(BgL_locz00_60,
											BGl_getzd2defaultzd2typez00zztype_cachez00(),
											BgL_idz00_1537);
										BgL_aidz00_1538 =
											BGl_cnstz12z12zzcnst_nodez00((BgL_nodez00_bglt)
											(BgL_arg4004z00_1557));
									}
									{	/* Cnst/alloc.scm 838 */

										{	/* Cnst/alloc.scm 845 */
											obj_t BgL_arg3986z00_1539;

											{	/* Cnst/alloc.scm 845 */
												obj_t BgL_arg3987z00_1540;

												obj_t BgL_arg3988z00_1541;

												BgL_arg3987z00_1540 = CNST_TABLE_REF(((long) 52));
												{	/* Cnst/alloc.scm 846 */
													obj_t BgL_arg3989z00_1542;

													obj_t BgL_arg3990z00_1543;

													{	/* Cnst/alloc.scm 846 */
														obj_t BgL_arg3994z00_1547;

														obj_t BgL_arg3995z00_1548;

														BgL_arg3994z00_1547 = CNST_TABLE_REF(((long) 13));
														{	/* Cnst/alloc.scm 846 */
															obj_t BgL_arg3996z00_1549;

															obj_t BgL_arg3997z00_1550;

															{
																BgL_variablez00_bglt BgL_auxz00_3935;

																BgL_auxz00_3935 =
																	(BgL_variablez00_bglt) (BgL_varz00_1536);
																BgL_arg3996z00_1549 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_3935))->BgL_idz00);
															}
															BgL_arg3997z00_1550 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1536))->
																BgL_modulez00);
															{	/* Cnst/alloc.scm 846 */
																obj_t BgL_list3999z00_1552;

																{	/* Cnst/alloc.scm 846 */
																	obj_t BgL_arg4000z00_1553;

																	BgL_arg4000z00_1553 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3999z00_1552 =
																		MAKE_PAIR(BgL_arg3997z00_1550,
																		BgL_arg4000z00_1553);
																}
																BgL_arg3995z00_1548 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3996z00_1549, BgL_list3999z00_1552);
														}}
														BgL_arg3989z00_1542 =
															MAKE_PAIR(BgL_arg3994z00_1547,
															BgL_arg3995z00_1548);
													}
													{	/* Cnst/alloc.scm 847 */
														obj_t BgL_arg4001z00_1554;

														obj_t BgL_arg4002z00_1555;

														BgL_arg4001z00_1554 = CNST_TABLE_REF(((long) 53));
														{	/* Cnst/alloc.scm 847 */
															obj_t BgL_list4003z00_1556;

															BgL_list4003z00_1556 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg4002z00_1555 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
																(obj_t) (BgL_aidz00_1538),
																BgL_list4003z00_1556);
														}
														BgL_arg3990z00_1543 =
															MAKE_PAIR(BgL_arg4001z00_1554,
															BgL_arg4002z00_1555);
													}
													{	/* Cnst/alloc.scm 845 */
														obj_t BgL_list3992z00_1545;

														{	/* Cnst/alloc.scm 845 */
															obj_t BgL_arg3993z00_1546;

															BgL_arg3993z00_1546 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3992z00_1545 =
																MAKE_PAIR(BgL_arg3990z00_1543,
																BgL_arg3993z00_1546);
														}
														BgL_arg3988z00_1541 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3989z00_1542, BgL_list3992z00_1545);
												}}
												BgL_arg3986z00_1539 =
													MAKE_PAIR(BgL_arg3987z00_1540, BgL_arg3988z00_1541);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg3986z00_1539,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
							}}}}
							{	/* Cnst/alloc.scm 850 */
								BgL_typez00_bglt BgL_arg4007z00_1560;

								{
									BgL_variablez00_bglt BgL_auxz00_3953;

									BgL_auxz00_3953 = (BgL_variablez00_bglt) (BgL_varz00_1536);
									BgL_arg4007z00_1560 =
										(((BgL_variablez00_bglt) CREF(BgL_auxz00_3953))->
										BgL_typez00);
								}
								BgL_auxz00_3918 =
									BGl_makezd2varzd2zzast_nodez00(BgL_locz00_60,
									BgL_arg4007z00_1560,
									(BgL_variablez00_bglt) (BgL_varz00_1536));
						}}
						return (BgL_nodez00_bglt) (BgL_auxz00_3918);
					}
				else
					{	/* Cnst/alloc.scm 862 */
						BgL_appz00_bglt BgL_auxz00_3959;

						BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string4181z00zzcnst_allocz00,
							BGl_string4182z00zzcnst_allocz00, BgL_tvecz00_59);
						{	/* Cnst/alloc.scm 856 */
							long BgL_offsetz00_1566;

							BgL_offsetz00_1566 = BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
							BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
								(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
							BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
								MAKE_PAIR(BgL_tvecz00_59,
								BGl_za2globalzd2setza2zd2zzcnst_allocz00);
							BgL_auxz00_3959 =
								BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
								(BgL_offsetz00_1566), BgL_locz00_60);
						}
						return (BgL_nodez00_bglt) (BgL_auxz00_3959);
					}
			}
		}
	}



/* _cnst-alloc-tvector */
	obj_t BGl__cnstzd2alloczd2tvectorz00zzcnst_allocz00(obj_t BgL_envz00_2763,
		obj_t BgL_tvecz00_2764, obj_t BgL_locz00_2765)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 830 */
			return
				(obj_t) (BGl_cnstzd2alloczd2tvectorz00zzcnst_allocz00(BgL_tvecz00_2764,
					BgL_locz00_2765));
		}
	}



/* cnst-alloc-struct */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_cnstzd2alloczd2structz00zzcnst_allocz00(obj_t BgL_structz00_61,
		obj_t BgL_locz00_62)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 867 */
			{

				{	/* Cnst/alloc.scm 917 */
					obj_t BgL_oldz00_1572;

					{	/* Cnst/alloc.scm 917 */
						obj_t BgL__andtest_3491z00_1579;

						BgL__andtest_3491z00_1579 =
							BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00;
						if (CBOOL(BgL__andtest_3491z00_1579))
							{
								obj_t BgL_envz00_1581;

								BgL_envz00_1581 = BGl_za2structzd2envza2zd2zzcnst_allocz00;
							BgL_zc3anonymousza34019ze3z83_1582:
								if (NULLP(BgL_envz00_1581))
									{	/* Cnst/alloc.scm 920 */
										BgL_oldz00_1572 = BFALSE;
									}
								else
									{	/* Cnst/alloc.scm 920 */
										if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(STRUCT_REF(CAR
													(BgL_envz00_1581), (int) (((long) 0))),
												BgL_structz00_61))
											{	/* Cnst/alloc.scm 922 */
												BgL_oldz00_1572 = CAR(BgL_envz00_1581);
											}
										else
											{
												obj_t BgL_envz00_3978;

												BgL_envz00_3978 = CDR(BgL_envz00_1581);
												BgL_envz00_1581 = BgL_envz00_3978;
												goto BgL_zc3anonymousza34019ze3z83_1582;
											}
									}
							}
						else
							{	/* Cnst/alloc.scm 917 */
								BgL_oldz00_1572 = BFALSE;
							}
					}
					if (CBOOL(BgL_oldz00_1572))
						{	/* Cnst/alloc.scm 927 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 931 */
									BgL_typez00_bglt BgL_arg4014z00_1574;

									obj_t BgL_arg4015z00_1575;

									{	/* Cnst/alloc.scm 931 */
										BgL_variablez00_bglt BgL_obj1784z00_2603;

										{	/* Cnst/alloc.scm 931 */
											obj_t BgL_sz00_2601;

											BgL_sz00_2601 = BgL_oldz00_1572;
											BgL_obj1784z00_2603 =
												(BgL_variablez00_bglt) (STRUCT_REF(BgL_sz00_2601,
													(int) (((long) 1))));
										}
										BgL_arg4014z00_1574 =
											(((BgL_variablez00_bglt) CREF(BgL_obj1784z00_2603))->
											BgL_typez00);
									}
									BgL_arg4015z00_1575 =
										STRUCT_REF(BgL_oldz00_1572, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt) (BGl_makezd2varzd2zzast_nodez00
										(BgL_locz00_62, BgL_arg4014z00_1574,
											(BgL_variablez00_bglt) (BgL_arg4015z00_1575)));
								}
							else
								{	/* Cnst/alloc.scm 933 */
									obj_t BgL_arg4017z00_1577;

									BgL_arg4017z00_1577 =
										STRUCT_REF(BgL_oldz00_1572, (int) (((long) 1)));
									return
										(BgL_nodez00_bglt)
										(BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00
										(BgL_arg4017z00_1577, BgL_locz00_62));
								}
						}
					else
						{	/* Cnst/alloc.scm 927 */
							if (
								(BGl_za2initzd2modeza2zd2zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 14))))
								{	/* Cnst/alloc.scm 935 */
									BgL_varz00_bglt BgL_auxz00_4001;

									{	/* Cnst/alloc.scm 905 */
										BgL_globalz00_bglt BgL_varz00_1611;

										{	/* Cnst/alloc.scm 905 */
											obj_t BgL_arg4062z00_1629;

											obj_t BgL_arg4063z00_1630;

											obj_t BgL_arg4064z00_1631;

											{	/* Cnst/alloc.scm 905 */
												obj_t BgL_arg4065z00_1632;

												obj_t BgL_arg4066z00_1633;

												BgL_arg4065z00_1632 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 54)));
												BgL_arg4066z00_1633 = CNST_TABLE_REF(((long) 54));
												BgL_arg4062z00_1629 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_arg4065z00_1632, BgL_arg4066z00_1633);
											}
											BgL_arg4063z00_1630 = CNST_TABLE_REF(((long) 55));
											BgL_arg4064z00_1631 = CNST_TABLE_REF(((long) 3));
											BgL_varz00_1611 =
												BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
												(BgL_arg4062z00_1629,
												BGl_za2moduleza2z00zzmodule_modulez00,
												BgL_arg4063z00_1630, BgL_arg4064z00_1631);
										}
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 910 */
												obj_t BgL_arg4045z00_1612;

												{	/* Cnst/alloc.scm 910 */
													obj_t BgL_newz00_2633;

													BgL_newz00_2633 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 910 */
														obj_t BgL_auxz00_4016;

														int BgL_auxz00_4014;

														BgL_auxz00_4016 = (obj_t) (BgL_varz00_1611);
														BgL_auxz00_4014 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2633, BgL_auxz00_4014,
															BgL_auxz00_4016);
													}
													{	/* Cnst/alloc.scm 910 */
														int BgL_auxz00_4019;

														BgL_auxz00_4019 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2633, BgL_auxz00_4019,
															BgL_structz00_61);
													}
													BgL_arg4045z00_1612 = BgL_newz00_2633;
												}
												BGl_za2structzd2envza2zd2zzcnst_allocz00 =
													MAKE_PAIR(BgL_arg4045z00_1612,
													BGl_za2structzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 909 */
												BFALSE;
											}
										{	/* Cnst/alloc.scm 911 */
											obj_t BgL_arg4046z00_1613;

											{	/* Cnst/alloc.scm 911 */
												obj_t BgL_arg4047z00_1614;

												obj_t BgL_arg4048z00_1615;

												BgL_arg4047z00_1614 = CNST_TABLE_REF(((long) 12));
												{	/* Cnst/alloc.scm 911 */
													obj_t BgL_arg4049z00_1616;

													BgL_nodez00_bglt BgL_arg4050z00_1617;

													{	/* Cnst/alloc.scm 911 */
														obj_t BgL_arg4054z00_1621;

														obj_t BgL_arg4055z00_1622;

														BgL_arg4054z00_1621 = CNST_TABLE_REF(((long) 13));
														{	/* Cnst/alloc.scm 911 */
															obj_t BgL_arg4056z00_1623;

															obj_t BgL_arg4057z00_1624;

															{
																BgL_variablez00_bglt BgL_auxz00_4025;

																BgL_auxz00_4025 =
																	(BgL_variablez00_bglt) (BgL_varz00_1611);
																BgL_arg4056z00_1623 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_auxz00_4025))->BgL_idz00);
															}
															BgL_arg4057z00_1624 =
																(((BgL_globalz00_bglt) CREF(BgL_varz00_1611))->
																BgL_modulez00);
															{	/* Cnst/alloc.scm 911 */
																obj_t BgL_list4059z00_1626;

																{	/* Cnst/alloc.scm 911 */
																	obj_t BgL_arg4060z00_1627;

																	BgL_arg4060z00_1627 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4059z00_1626 =
																		MAKE_PAIR(BgL_arg4057z00_1624,
																		BgL_arg4060z00_1627);
																}
																BgL_arg4055z00_1622 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4056z00_1623, BgL_list4059z00_1626);
														}}
														BgL_arg4049z00_1616 =
															MAKE_PAIR(BgL_arg4054z00_1621,
															BgL_arg4055z00_1622);
													}
													{	/* Cnst/alloc.scm 871 */
														BgL_nodez00_bglt BgL_arg4026z00_1590;

														{	/* Cnst/alloc.scm 871 */
															BgL_letzd2varzd2_bglt BgL_arg4027z00_1591;

															{	/* Cnst/alloc.scm 871 */
																BgL_localz00_bglt BgL_varz00_1592;

																BgL_varz00_1592 =
																	BGl_makezd2localzd2svarz00zzast_localz00
																	(CNST_TABLE_REF(((long) 35)),
																	(BgL_typez00_bglt)
																	(BGl_za2structza2z00zztype_cachez00));
																{	/* Cnst/alloc.scm 872 */
																	obj_t BgL_arg4029z00_1594;

																	BgL_varz00_bglt BgL_arg4030z00_1595;

																	{	/* Cnst/alloc.scm 878 */
																		obj_t BgL_arg4031z00_1596;

																		{	/* Cnst/alloc.scm 878 */
																			BgL_appz00_bglt BgL_arg4033z00_1598;

																			{	/* Cnst/alloc.scm 878 */
																				BgL_varz00_bglt BgL_arg4035z00_1600;

																				obj_t BgL_arg4036z00_1601;

																				{	/* Cnst/alloc.scm 883 */
																					BgL_typez00_bglt BgL_arg4037z00_1602;

																					{
																						BgL_variablez00_bglt
																							BgL_auxz00_4036;
																						BgL_auxz00_4036 =
																							(BgL_variablez00_bglt)
																							(BGl_za2listzd2ze3structza2z31zzcnst_cachez00);
																						BgL_arg4037z00_1602 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_auxz00_4036))->
																							BgL_typez00);
																					}
																					BgL_arg4035z00_1600 =
																						BGl_makezd2varzd2zzast_nodez00
																						(BgL_locz00_62, BgL_arg4037z00_1602,
																						(BgL_variablez00_bglt)
																						(BGl_za2listzd2ze3structza2z31zzcnst_cachez00));
																				}
																				{	/* Cnst/alloc.scm 889 */
																					BgL_kwotez00_bglt BgL_arg4038z00_1603;

																					{	/* Cnst/alloc.scm 889 */
																						obj_t BgL_arg4040z00_1605;

																						BgL_arg4040z00_1605 =
																							BGl_structzd2ze3listz31zz__structurez00
																							(BgL_structz00_61);
																						BgL_arg4038z00_1603 =
																							BGl_makezd2kwotezd2zzast_nodez00
																							(BgL_locz00_62,
																							(BgL_typez00_bglt)
																							(BGl_za2objza2z00zztype_cachez00),
																							BgL_arg4040z00_1605);
																					}
																					{	/* Cnst/alloc.scm 885 */
																						obj_t BgL_list4039z00_1604;

																						BgL_list4039z00_1604 =
																							MAKE_PAIR(
																							(obj_t) (BgL_arg4038z00_1603),
																							BNIL);
																						BgL_arg4036z00_1601 =
																							BgL_list4039z00_1604;
																				}}
																				BgL_arg4033z00_1598 =
																					BGl_makezd2appzd2zzast_nodez00
																					(BgL_locz00_62,
																					(BgL_typez00_bglt)
																					(BGl_za2structza2z00zztype_cachez00),
																					BUNSPEC, BINT(((long) -1)),
																					BgL_arg4035z00_1600,
																					BgL_arg4036z00_1601);
																			}
																			BgL_arg4031z00_1596 =
																				MAKE_PAIR(
																				(obj_t) (BgL_varz00_1592),
																				(obj_t) (BgL_arg4033z00_1598));
																		}
																		{	/* Cnst/alloc.scm 875 */
																			obj_t BgL_list4032z00_1597;

																			BgL_list4032z00_1597 =
																				MAKE_PAIR(BgL_arg4031z00_1596, BNIL);
																			BgL_arg4029z00_1594 =
																				BgL_list4032z00_1597;
																	}}
																	{	/* Cnst/alloc.scm 892 */
																		BgL_typez00_bglt BgL_arg4041z00_1606;

																		{
																			BgL_variablez00_bglt BgL_auxz00_4053;

																			BgL_auxz00_4053 =
																				(BgL_variablez00_bglt)
																				(BgL_varz00_1592);
																			BgL_arg4041z00_1606 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_4053))->BgL_typez00);
																		}
																		BgL_arg4030z00_1595 =
																			BGl_makezd2varzd2zzast_nodez00
																			(BgL_locz00_62, BgL_arg4041z00_1606,
																			(BgL_variablez00_bglt) (BgL_varz00_1592));
																	}
																	BgL_arg4027z00_1591 =
																		BGl_makezd2letzd2varz00zzast_nodez00
																		(BgL_locz00_62,
																		(BgL_typez00_bglt)
																		(BGl_za2objza2z00zztype_cachez00), BUNSPEC,
																		BINT(((long) -1)), BgL_arg4029z00_1594,
																		(BgL_nodez00_bglt) (BgL_arg4030z00_1595),
																		((bool_t) 1));
															}}
															BgL_arg4026z00_1590 =
																BGl_coercez12z12zzcoerce_coercez00(
																(BgL_nodez00_bglt) (BgL_arg4027z00_1591),
																BUNSPEC,
																(BgL_typez00_bglt)
																(BGl_za2objza2z00zztype_cachez00),
																((bool_t) 0));
														}
														BgL_arg4050z00_1617 =
															BGl_cnstz12z12zzcnst_nodez00(BgL_arg4026z00_1590);
													}
													{	/* Cnst/alloc.scm 911 */
														obj_t BgL_list4052z00_1619;

														{	/* Cnst/alloc.scm 911 */
															obj_t BgL_arg4053z00_1620;

															BgL_arg4053z00_1620 = MAKE_PAIR(BNIL, BNIL);
															BgL_list4052z00_1619 =
																MAKE_PAIR(
																(obj_t) (BgL_arg4050z00_1617),
																BgL_arg4053z00_1620);
														}
														BgL_arg4048z00_1615 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg4049z00_1616, BgL_list4052z00_1619);
												}}
												BgL_arg4046z00_1613 =
													MAKE_PAIR(BgL_arg4047z00_1614, BgL_arg4048z00_1615);
											}
											BGl_za2globalzd2sexpza2zd2zzcnst_allocz00 =
												MAKE_PAIR(BgL_arg4046z00_1613,
												BGl_za2globalzd2sexpza2zd2zzcnst_allocz00);
										}
										{	/* Cnst/alloc.scm 915 */
											BgL_typez00_bglt BgL_arg4061z00_1628;

											{
												BgL_variablez00_bglt BgL_auxz00_4072;

												BgL_auxz00_4072 =
													(BgL_variablez00_bglt) (BgL_varz00_1611);
												BgL_arg4061z00_1628 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_4072))->
													BgL_typez00);
											}
											BgL_auxz00_4001 =
												BGl_makezd2varzd2zzast_nodez00(BgL_locz00_62,
												BgL_arg4061z00_1628,
												(BgL_variablez00_bglt) (BgL_varz00_1611));
									}}
									return (BgL_nodez00_bglt) (BgL_auxz00_4001);
								}
							else
								{	/* Cnst/alloc.scm 937 */
									BgL_appz00_bglt BgL_auxz00_4078;

									{	/* Cnst/alloc.scm 898 */
										long BgL_offsetz00_1608;

										BgL_offsetz00_1608 =
											BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00;
										BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00 =
											(((long) 1) + BGl_za2cnstzd2offsetza2zd2zzcnst_allocz00);
										BGl_za2globalzd2setza2zd2zzcnst_allocz00 =
											MAKE_PAIR(BgL_structz00_61,
											BGl_za2globalzd2setza2zd2zzcnst_allocz00);
										if (CBOOL(BGl_za2sharedzd2cnstzf3za2z21zzengine_paramz00))
											{	/* Cnst/alloc.scm 902 */
												obj_t BgL_arg4043z00_1609;

												{	/* Cnst/alloc.scm 902 */
													obj_t BgL_newz00_2620;

													BgL_newz00_2620 =
														create_struct(CNST_TABLE_REF(((long) 9)),
														(int) (((long) 2)));
													{	/* Cnst/alloc.scm 902 */
														obj_t BgL_auxz00_4088;

														int BgL_auxz00_4086;

														BgL_auxz00_4088 = BINT(BgL_offsetz00_1608);
														BgL_auxz00_4086 = (int) (((long) 1));
														STRUCT_SET(BgL_newz00_2620, BgL_auxz00_4086,
															BgL_auxz00_4088);
													}
													{	/* Cnst/alloc.scm 902 */
														int BgL_auxz00_4091;

														BgL_auxz00_4091 = (int) (((long) 0));
														STRUCT_SET(BgL_newz00_2620, BgL_auxz00_4091,
															BgL_structz00_61);
													}
													BgL_arg4043z00_1609 = BgL_newz00_2620;
												}
												BGl_za2structzd2envza2zd2zzcnst_allocz00 =
													MAKE_PAIR(BgL_arg4043z00_1609,
													BGl_za2structzd2envza2zd2zzcnst_allocz00);
											}
										else
											{	/* Cnst/alloc.scm 901 */
												BFALSE;
											}
										BgL_auxz00_4078 =
											BGl_makezd2cnstzd2tablezd2refzd2zzcnst_allocz00(BINT
											(BgL_offsetz00_1608), BgL_locz00_62);
									}
									return (BgL_nodez00_bglt) (BgL_auxz00_4078);
								}
						}
				}
			}
		}
	}



/* _cnst-alloc-struct */
	obj_t BGl__cnstzd2alloczd2structz00zzcnst_allocz00(obj_t BgL_envz00_2766,
		obj_t BgL_structz00_2767, obj_t BgL_locz00_2768)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 867 */
			return
				(obj_t) (BGl_cnstzd2alloczd2structz00zzcnst_allocz00(BgL_structz00_2767,
					BgL_locz00_2768));
		}
	}



/* cnst-equal? */
	bool_t BGl_cnstzd2equalzf3z21zzcnst_allocz00(obj_t BgL_obj1z00_63,
		obj_t BgL_obj2z00_64)
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 942 */
		BGl_cnstzd2equalzf3z21zzcnst_allocz00:
			if ((BgL_obj1z00_63 == BgL_obj2z00_64))
				{	/* Cnst/alloc.scm 944 */
					return ((bool_t) 1);
				}
			else
				{	/* Cnst/alloc.scm 944 */
					if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_obj1z00_63))
						{	/* Cnst/alloc.scm 946 */
							return ((bool_t) 0);
						}
					else
						{	/* Cnst/alloc.scm 946 */
							if (STRINGP(BgL_obj1z00_63))
								{	/* Cnst/alloc.scm 948 */
									if (STRINGP(BgL_obj2z00_64))
										{	/* Cnst/alloc.scm 949 */
											return bigloo_strcmp(BgL_obj1z00_63, BgL_obj2z00_64);
										}
									else
										{	/* Cnst/alloc.scm 949 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Cnst/alloc.scm 948 */
									if (SYMBOLP(BgL_obj1z00_63))
										{	/* Cnst/alloc.scm 950 */
											return ((bool_t) 0);
										}
									else
										{	/* Cnst/alloc.scm 950 */
											if (PAIRP(BgL_obj1z00_63))
												{	/* Cnst/alloc.scm 952 */
													if (PAIRP(BgL_obj2z00_64))
														{	/* Cnst/alloc.scm 953 */
															if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(CAR
																	(BgL_obj1z00_63), CAR(BgL_obj2z00_64)))
																{
																	obj_t BgL_obj2z00_4121;

																	obj_t BgL_obj1z00_4119;

																	BgL_obj1z00_4119 = CDR(BgL_obj1z00_63);
																	BgL_obj2z00_4121 = CDR(BgL_obj2z00_64);
																	BgL_obj2z00_64 = BgL_obj2z00_4121;
																	BgL_obj1z00_63 = BgL_obj1z00_4119;
																	goto BGl_cnstzd2equalzf3z21zzcnst_allocz00;
																}
															else
																{	/* Cnst/alloc.scm 954 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Cnst/alloc.scm 953 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Cnst/alloc.scm 952 */
													if (VECTORP(BgL_obj1z00_63))
														{	/* Cnst/alloc.scm 957 */
															int BgL_lobj1z00_1650;

															BgL_lobj1z00_1650 = VECTOR_LENGTH(BgL_obj1z00_63);
															if (VECTORP(BgL_obj2z00_64))
																{	/* Cnst/alloc.scm 959 */
																	bool_t BgL_testz00_4128;

																	{	/* Cnst/alloc.scm 959 */
																		int BgL_arg4083z00_1665;

																		BgL_arg4083z00_1665 =
																			VECTOR_LENGTH(BgL_obj2z00_64);
																		BgL_testz00_4128 =
																			(
																			(long) (BgL_arg4083z00_1665) ==
																			(long) (BgL_lobj1z00_1650));
																	}
																	if (BgL_testz00_4128)
																		{	/* Cnst/alloc.scm 960 */
																			bool_t BgL_testz00_4133;

																			{	/* Cnst/alloc.scm 960 */
																				int BgL_arg4081z00_1663;

																				int BgL_arg4082z00_1664;

																				BgL_arg4081z00_1663 =
																					VECTOR_TAG(BgL_obj1z00_63);
																				BgL_arg4082z00_1664 =
																					VECTOR_TAG(BgL_obj2z00_64);
																				BgL_testz00_4133 =
																					(
																					(long) (BgL_arg4081z00_1663) ==
																					(long) (BgL_arg4082z00_1664));
																			}
																			if (BgL_testz00_4133)
																				{
																					long BgL_iz00_1655;

																					BgL_iz00_1655 = ((long) 0);
																				BgL_zc3anonymousza34077ze3z83_1656:
																					{	/* Cnst/alloc.scm 962 */
																						bool_t BgL__ortest_3499z00_1657;

																						BgL__ortest_3499z00_1657 =
																							(BgL_iz00_1655 ==
																							(long) (BgL_lobj1z00_1650));
																						if (BgL__ortest_3499z00_1657)
																							{	/* Cnst/alloc.scm 962 */
																								return BgL__ortest_3499z00_1657;
																							}
																						else
																							{	/* Cnst/alloc.scm 962 */
																								if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(VECTOR_REF(BgL_obj1z00_63, (int) (BgL_iz00_1655)), VECTOR_REF(BgL_obj2z00_64, (int) (BgL_iz00_1655))))
																									{
																										long BgL_iz00_4148;

																										BgL_iz00_4148 =
																											(BgL_iz00_1655 +
																											((long) 1));
																										BgL_iz00_1655 =
																											BgL_iz00_4148;
																										goto
																											BgL_zc3anonymousza34077ze3z83_1656;
																									}
																								else
																									{	/* Cnst/alloc.scm 963 */
																										return ((bool_t) 0);
																									}
																							}
																					}
																				}
																			else
																				{	/* Cnst/alloc.scm 960 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Cnst/alloc.scm 959 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Cnst/alloc.scm 958 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Cnst/alloc.scm 956 */
															if (BGL_HVECTORP(BgL_obj1z00_63))
																{	/* Cnst/alloc.scm 966 */
																	return
																		BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																		(BgL_obj1z00_63, BgL_obj2z00_64);
																}
															else
																{	/* Cnst/alloc.scm 966 */
																	if (STRUCTP(BgL_obj1z00_63))
																		{	/* Cnst/alloc.scm 969 */
																			int BgL_lobj1z00_1668;

																			BgL_lobj1z00_1668 =
																				STRUCT_LENGTH(BgL_obj1z00_63);
																			if (STRUCTP(BgL_obj2z00_64))
																				{	/* Cnst/alloc.scm 970 */
																					if (
																						((long) (STRUCT_LENGTH
																								(BgL_obj2z00_64)) ==
																							(long) (BgL_lobj1z00_1668)))
																						{
																							long BgL_iz00_1672;

																							BgL_iz00_1672 = ((long) 0);
																						BgL_zc3anonymousza34086ze3z83_1673:
																							{	/* Cnst/alloc.scm 973 */
																								bool_t BgL__ortest_3503z00_1674;

																								BgL__ortest_3503z00_1674 =
																									(BgL_iz00_1672 ==
																									(long) (BgL_lobj1z00_1668));
																								if (BgL__ortest_3503z00_1674)
																									{	/* Cnst/alloc.scm 973 */
																										return
																											BgL__ortest_3503z00_1674;
																									}
																								else
																									{	/* Cnst/alloc.scm 973 */
																										if (BGl_cnstzd2equalzf3z21zzcnst_allocz00(STRUCT_REF(BgL_obj1z00_63, (int) (BgL_iz00_1672)), STRUCT_REF(BgL_obj2z00_64, (int) (BgL_iz00_1672))))
																											{
																												long BgL_iz00_4172;

																												BgL_iz00_4172 =
																													(BgL_iz00_1672 +
																													((long) 1));
																												BgL_iz00_1672 =
																													BgL_iz00_4172;
																												goto
																													BgL_zc3anonymousza34086ze3z83_1673;
																											}
																										else
																											{	/* Cnst/alloc.scm 974 */
																												return ((bool_t) 0);
																											}
																									}
																							}
																						}
																					else
																						{	/* Cnst/alloc.scm 971 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cnst/alloc.scm 970 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Cnst/alloc.scm 968 */
																			if (CELLP(BgL_obj1z00_63))
																				{	/* Cnst/alloc.scm 976 */
																					if (CELLP(BgL_obj2z00_64))
																						{
																							obj_t BgL_obj2z00_4180;

																							obj_t BgL_obj1z00_4178;

																							BgL_obj1z00_4178 =
																								CELL_REF(BgL_obj1z00_63);
																							BgL_obj2z00_4180 =
																								CELL_REF(BgL_obj2z00_64);
																							BgL_obj2z00_64 = BgL_obj2z00_4180;
																							BgL_obj1z00_63 = BgL_obj1z00_4178;
																							goto
																								BGl_cnstzd2equalzf3z21zzcnst_allocz00;
																						}
																					else
																						{	/* Cnst/alloc.scm 977 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Cnst/alloc.scm 976 */
																					if (UCS2_STRINGP(BgL_obj1z00_63))
																						{	/* Cnst/alloc.scm 978 */
																							if (UCS2_STRINGP(BgL_obj2z00_64))
																								{	/* Cnst/alloc.scm 979 */
																									return
																										ucs2_strcmp(BgL_obj1z00_63,
																										BgL_obj2z00_64);
																								}
																							else
																								{	/* Cnst/alloc.scm 979 */
																									return ((bool_t) 0);
																								}
																						}
																					else
																						{	/* Cnst/alloc.scm 978 */
																							if (UCS2P(BgL_obj1z00_63))
																								{	/* Cnst/alloc.scm 980 */
																									if (UCS2P(BgL_obj2z00_64))
																										{	/* Cnst/alloc.scm 981 */
																											return
																												(CUCS2(BgL_obj1z00_63)
																												==
																												CUCS2(BgL_obj2z00_64));
																										}
																									else
																										{	/* Cnst/alloc.scm 981 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Cnst/alloc.scm 980 */
																									if (BGL_DATEP(BgL_obj1z00_63))
																										{	/* Cnst/alloc.scm 982 */
																											return
																												BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																												(BgL_obj1z00_63,
																												BgL_obj2z00_64);
																										}
																									else
																										{	/* Cnst/alloc.scm 982 */
																											return ((bool_t) 0);
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



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 15 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcnst_allocz00()
	{
		AN_OBJECT;
		{	/* Cnst/alloc.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 2222742),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zztvector_cnstz00(((long) 462574443),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzcoerce_coercez00(((long) 387636515),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzcnst_cachez00(((long) 182307917),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzcnst_nodez00(((long) 110472871),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
			return
				BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4183z00zzcnst_allocz00));
		}
	}

#ifdef __cplusplus
}
#endif
