/*===========================================================================*/
/*   (Ast/app.scm)                                                           */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/app.scm)*/
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

	typedef struct BgL_vallocz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzf3z21;
		obj_t BgL_keyz00;
		obj_t BgL_exprza2za2;
		obj_t BgL_effectz00;
		obj_t BgL_czd2heapzd2formatz00;
		struct BgL_typez00_bgl *BgL_ftypez00;
		struct BgL_typez00_bgl *BgL_otypez00;
	}                *BgL_vallocz00_bglt;

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

	typedef struct BgL_vsetz12z12_bgl
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
	}                 *BgL_vsetz12z12_bglt;

	typedef struct BgL_vlengthz00_bgl
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
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                 *BgL_vlengthz00_bglt;

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


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2symzd2zzast_letz00();
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2voidza2z00zztype_cachez00;
	extern obj_t BGl_varz00zzast_nodez00;
	extern BgL_appz00_bglt BGl_makezd2appzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_appz00();
	static obj_t BGl_makezd2optionalszd2appzd2nodezd2zzast_appz00(obj_t, obj_t,
		obj_t, BgL_varz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static BgL_nodez00_bglt BGl_makezd2vazd2appzd2nodezd2zzast_appz00(long, obj_t,
		obj_t, BgL_varz00_bglt, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00(obj_t);
	static obj_t BGl_makezd2argszd2listz00zzast_appz00(obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typeofz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern BgL_sequencez00_bglt BGl_makezd2sequencezd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	extern obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t);
	extern BgL_vlengthz00_bglt BGl_makezd2vlengthzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt);
	static obj_t BGl_makezd2keyszd2appzd2nodezd2zzast_appz00(obj_t, obj_t, obj_t,
		BgL_varz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_to_bstring(char *);
	static obj_t BGl_loopz00zzast_appz00(obj_t, BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_closurez00zzast_nodez00;
	static obj_t BGl_loopz72z72zzast_appz00(BgL_varz00_bglt, obj_t,
		BgL_valuez00_bglt, BgL_variablez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_vallocz00_bglt BGl_makezd2valloczd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_appz00();
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	extern BgL_funcallz00_bglt BGl_makezd2funcallzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, BgL_nodez00_bglt, obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern bool_t BGl_sfunzd2optionalzf3z21zzast_varz00(obj_t);
	BGL_IMPORT obj_t BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__makezd2appzd2nodez00zzast_appz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_appz00 = BUNSPEC;
	extern BgL_atomz00_bglt BGl_makezd2atomzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_makezd2specialzd2appzd2nodezd2zzast_appz00(obj_t,
		BgL_varz00_bglt, obj_t);
	static obj_t BGl_makezd2thezd2appz00zzast_appz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_appz00();
	extern bool_t BGl_sfunzd2keyzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t BGl__correctzd2arityzd2appzf3zf3zzast_appz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt BGl_makezd2appzd2nodez00zzast_appz00(obj_t,
		obj_t, obj_t, BgL_varz00_bglt, obj_t);
	extern BgL_vsetz12z12_bglt BGl_makezd2vsetz12zc0zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_IMPORT obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern obj_t BGl_atomz00zzast_nodez00;
	BGL_EXPORTED_DECL bool_t
		BGl_correctzd2arityzd2appzf3zf3zzast_appz00(BgL_variablez00_bglt, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzast_appz00();
	static BgL_nodez00_bglt
		BGl_wrongzd2numberzd2ofzd2argumentszd2zzast_appz00(obj_t, obj_t,
		BgL_varz00_bglt, obj_t);
	static obj_t BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(obj_t, BgL_varz00_bglt,
		obj_t);
	static obj_t BGl_zc3anonymousza33668ze3z83zzast_appz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_nodez00_bglt
		BGl_applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static long BGl_checkzd2userzd2appz00zzast_appz00(BgL_varz00_bglt, obj_t);
	static BgL_nodez00_bglt
		BGl_cleanzd2userzd2nodez12z12zzast_appz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	static obj_t BGl__applicationzd2ze3nodez31zzast_appz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t);
	extern BgL_vrefz00_bglt BGl_makezd2vrefzd2zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t, BgL_typez00_bglt,
		BgL_typez00_bglt, BgL_typez00_bglt, bool_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_varz00_bglt BGl_makezd2varzd2zzast_nodez00(obj_t, BgL_typez00_bglt,
		BgL_variablez00_bglt);
	BGL_IMPORT char *BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern BgL_letzd2varzd2_bglt BGl_makezd2letzd2varz00zzast_nodez00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, obj_t, BgL_nodez00_bglt, bool_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_appz00();
	static obj_t __cnst[22];


	   
		 
		DEFINE_STRING(BGl_string4000z00zzast_appz00,
		BgL_bgl_string4000za700za7za7a4009za7, "($1)", 4);
	      DEFINE_STRING(BGl_string4001z00zzast_appz00,
		BgL_bgl_string4001za700za7za7a4010za7, "($1,$2)", 7);
	      DEFINE_STRING(BGl_string4002z00zzast_appz00,
		BgL_bgl_string4002za700za7za7a4011za7, "($1,$2,$3)", 10);
	      DEFINE_STRING(BGl_string4003z00zzast_appz00,
		BgL_bgl_string4003za700za7za7a4012za7, "make-special-app-node", 21);
	      DEFINE_STRING(BGl_string4004z00zzast_appz00,
		BgL_bgl_string4004za700za7za7a4013za7, "Illegal special application", 27);
	      DEFINE_STRING(BGl_string4005z00zzast_appz00,
		BgL_bgl_string4005za700za7za7a4014za7, "ast_app", 7);
	      DEFINE_STRING(BGl_string4006z00zzast_appz00,
		BgL_bgl_string4006za700za7za7a4015za7,
		"$create-vector $vector-set-ur! $vector-set! $vector-ref-ur $vector-ref $vector-length c-eq? $vector? c-cons foreign list \077\077? (c-eq? $vector? $vector-length $vector-ref $vector-ref-ur $vector-set! $vector-set-ur! $create-vector) let* arg (@ list __r4_pairs_and_lists_6_3) fun value (quote ()) app @ quote ",
		304);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2appzd2nodezd2envzd2zzast_appz00,
		BgL_bgl__makeza7d2appza7d2no4016z00, BGl__makezd2appzd2nodez00zzast_appz00,
		0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string3990z00zzast_appz00,
		BgL_bgl_string3990za700za7za7a4017za7, "] args expected, ", 17);
	      DEFINE_STRING(BGl_string3991z00zzast_appz00,
		BgL_bgl_string3991za700za7za7a4018za7, "..", 2);
	      DEFINE_STRING(BGl_string3992z00zzast_appz00,
		BgL_bgl_string3992za700za7za7a4019za7, "[", 1);
	      DEFINE_STRING(BGl_string3993z00zzast_appz00,
		BgL_bgl_string3993za700za7za7a4020za7, " arg(s) expected, ", 18);
	      DEFINE_STRING(BGl_string3994z00zzast_appz00,
		BgL_bgl_string3994za700za7za7a4021za7, " or more arg(s) expected, ", 26);
	      DEFINE_STRING(BGl_string3995z00zzast_appz00,
		BgL_bgl_string3995za700za7za7a4022za7, " provided", 9);
	      DEFINE_STRING(BGl_string3996z00zzast_appz00,
		BgL_bgl_string3996za700za7za7a4023za7, "Illegal application: ", 21);
	      DEFINE_STRING(BGl_string3997z00zzast_appz00,
		BgL_bgl_string3997za700za7za7a4024za7, "Illegal duplicated key", 22);
	      DEFINE_STRING(BGl_string3998z00zzast_appz00,
		BgL_bgl_string3998za700za7za7a4025za7, "Illegal keyword(s) argument(s)",
		30);
	      DEFINE_STRING(BGl_string3999z00zzast_appz00,
		BgL_bgl_string3999za700za7za7a4026za7, "Illegal keyword application", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_applicationzd2ze3nodezd2envze3zzast_appz00,
		BgL_bgl__applicationza7d2za74027z00,
		BGl__applicationzd2ze3nodez31zzast_appz00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_correctzd2arityzd2appzf3zd2envz21zzast_appz00,
		BgL_bgl__correctza7d2arity4028za7,
		BGl__correctzd2arityzd2appzf3zf3zzast_appz00, 0L, BUNSPEC, 2);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_appz00(long
		BgL_checksumz00_2637, char *BgL_fromz00_2638)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_appz00))
				{
					BGl_requirezd2initializa7ationz75zzast_appz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_appz00();
					BGl_cnstzd2initzd2zzast_appz00();
					BGl_importedzd2moduleszd2initz00zzast_appz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_appz00()
	{
		AN_OBJECT;
		{	/* Ast/app.scm 14 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_app");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_app");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"ast_app");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_appz00()
	{
		AN_OBJECT;
		{	/* Ast/app.scm 14 */
			{	/* Ast/app.scm 14 */
				obj_t BgL_cportz00_2615;

				BgL_cportz00_2615 =
					bgl_open_input_string(BGl_string4006z00zzast_appz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2616;

					BgL_iz00_2616 = ((long) 21);
				BgL_loopz00_2617:
					if ((BgL_iz00_2616 == ((long) -1)))
						{	/* Ast/app.scm 14 */
							return BUNSPEC;
						}
					else
						{	/* Ast/app.scm 14 */
							{	/* Ast/app.scm 14 */
								obj_t BgL_arg4008z00_2619;

								{	/* Ast/app.scm 14 */

									{	/* Ast/app.scm 14 */
										obj_t BgL_locationz00_2621;

										BgL_locationz00_2621 = BBOOL(((bool_t) 0));
										{	/* Ast/app.scm 14 */

											BgL_arg4008z00_2619 =
												BGl_readz00zz__readerz00(BgL_cportz00_2615,
												BgL_locationz00_2621);
										}
									}
								}
								{	/* Ast/app.scm 14 */
									int BgL_auxz00_2659;

									BgL_auxz00_2659 = (int) (BgL_iz00_2616);
									CNST_TABLE_SET(BgL_auxz00_2659, BgL_arg4008z00_2619);
							}}
							{	/* Ast/app.scm 14 */
								int BgL_auxz00_2622;

								BgL_auxz00_2622 = (int) ((BgL_iz00_2616 - ((long) 1)));
								{
									long BgL_iz00_2664;

									BgL_iz00_2664 = (long) (BgL_auxz00_2622);
									BgL_iz00_2616 = BgL_iz00_2664;
									goto BgL_loopz00_2617;
								}
							}
						}
				}
			}
		}
	}



/* correct-arity-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_correctzd2arityzd2appzf3zf3zzast_appz00(BgL_variablez00_bglt
		BgL_varz00_1, obj_t BgL_argsz00_2)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 38 */
			{	/* Ast/app.scm 39 */
				long BgL_nbzd2argszd2_814;

				BgL_nbzd2argszd2_814 = bgl_list_length(BgL_argsz00_2);
				{	/* Ast/app.scm 40 */
					long BgL_arityz00_815;

					{	/* Ast/app.scm 41 */
						BgL_funz00_bglt BgL_obj1813z00_2043;

						BgL_obj1813z00_2043 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_varz00_1))->BgL_valuez00));
						BgL_arityz00_815 =
							(((BgL_funz00_bglt) CREF(BgL_obj1813z00_2043))->BgL_arityz00);
					}
					{	/* Ast/app.scm 41 */

						if ((BgL_arityz00_815 == ((long) -1)))
							{	/* Ast/app.scm 43 */
								return ((bool_t) 1);
							}
						else
							{	/* Ast/app.scm 43 */
								if ((BgL_arityz00_815 >= ((long) 0)))
									{	/* Ast/app.scm 45 */
										return (BgL_arityz00_815 == BgL_nbzd2argszd2_814);
									}
								else
									{	/* Ast/app.scm 45 */
										return
											(
											(NEG(BgL_arityz00_815) -
												(BgL_nbzd2argszd2_814 + ((long) 1))) <= ((long) 0));
		}}}}}}
	}



/* _correct-arity-app? */
	obj_t BGl__correctzd2arityzd2appzf3zf3zzast_appz00(obj_t BgL_envz00_2587,
		obj_t BgL_varz00_2588, obj_t BgL_argsz00_2589)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 38 */
			return
				BBOOL(BGl_correctzd2arityzd2appzf3zf3zzast_appz00(
					(BgL_variablez00_bglt) (BgL_varz00_2588), BgL_argsz00_2589));
		}
	}



/* clean-user-node! */
	BgL_nodez00_bglt BGl_cleanzd2userzd2nodez12z12zzast_appz00(BgL_nodez00_bglt
		BgL_nodez00_3)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 56 */
			{
				BgL_nodez00_bglt BgL_walkz00_823;

				BgL_walkz00_823 = BgL_nodez00_3;
			BgL_zc3anonymousza33349ze3z83_824:
				{	/* Ast/app.scm 58 */
					bool_t BgL_testz00_2682;

					{	/* Ast/app.scm 58 */
						obj_t BgL_obj3099z00_2055;

						BgL_obj3099z00_2055 = (obj_t) (BgL_walkz00_823);
						BgL_testz00_2682 =
							BGl_iszd2azf3z21zz__objectz00(BgL_obj3099z00_2055,
							BGl_letzd2varzd2zzast_nodez00);
					}
					if (BgL_testz00_2682)
						{	/* Ast/app.scm 58 */
							{	/* Ast/app.scm 60 */
								obj_t BgL_g3287z00_826;

								{
									BgL_letzd2varzd2_bglt BgL_auxz00_2685;

									BgL_auxz00_2685 = (BgL_letzd2varzd2_bglt) (BgL_walkz00_823);
									BgL_g3287z00_826 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2685))->
										BgL_bindingsz00);
								}
								{
									obj_t BgL_l3285z00_828;

									BgL_l3285z00_828 = BgL_g3287z00_826;
								BgL_zc3anonymousza33351ze3z83_829:
									if (PAIRP(BgL_l3285z00_828))
										{	/* Ast/app.scm 62 */
											{	/* Ast/app.scm 61 */
												obj_t BgL_bindingz00_831;

												BgL_bindingz00_831 = CAR(BgL_l3285z00_828);
												{	/* Ast/app.scm 61 */
													obj_t BgL_arg3353z00_832;

													BgL_arg3353z00_832 = CAR(BgL_bindingz00_831);
													{
														BgL_localz00_bglt BgL_auxz00_2692;

														BgL_auxz00_2692 =
															(BgL_localz00_bglt) (BgL_arg3353z00_832);
														((((BgL_localz00_bglt) CREF(BgL_auxz00_2692))->
																BgL_userzf3zf3) =
															((bool_t) ((bool_t) 0)), BUNSPEC);
													}
												}
											}
											{
												obj_t BgL_l3285z00_2695;

												BgL_l3285z00_2695 = CDR(BgL_l3285z00_828);
												BgL_l3285z00_828 = BgL_l3285z00_2695;
												goto BgL_zc3anonymousza33351ze3z83_829;
											}
										}
									else
										{	/* Ast/app.scm 62 */
											((bool_t) 1);
										}
								}
							}
							{	/* Ast/app.scm 63 */
								BgL_nodez00_bglt BgL_arg3355z00_835;

								{
									BgL_letzd2varzd2_bglt BgL_auxz00_2697;

									BgL_auxz00_2697 = (BgL_letzd2varzd2_bglt) (BgL_walkz00_823);
									BgL_arg3355z00_835 =
										(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_2697))->
										BgL_bodyz00);
								}
								{
									BgL_nodez00_bglt BgL_walkz00_2700;

									BgL_walkz00_2700 = BgL_arg3355z00_835;
									BgL_walkz00_823 = BgL_walkz00_2700;
									goto BgL_zc3anonymousza33349ze3z83_824;
								}
							}
						}
					else
						{	/* Ast/app.scm 58 */
							return BgL_nodez00_3;
						}
				}
			}
		}
	}



/* application->node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt
		BGl_applicationzd2ze3nodez31zzast_appz00(obj_t BgL_expz00_4,
		obj_t BgL_stackz00_5, obj_t BgL_locz00_6, obj_t BgL_sitez00_7)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 72 */
			{
				obj_t BgL_expz00_924;

				{	/* Ast/app.scm 91 */
					obj_t BgL_locz00_838;

					BgL_locz00_838 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_4,
						BgL_locz00_6);
					{	/* Ast/app.scm 91 */
						obj_t BgL_errzd2nbzd2_839;

						BgL_errzd2nbzd2_839 =
							BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
						{	/* Ast/app.scm 92 */
							obj_t BgL_debugstampz00_840;

							{	/* Ast/app.scm 93 */

								{	/* Ast/app.scm 93 */

									BgL_debugstampz00_840 =
										BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
								}
							}
							{	/* Ast/app.scm 93 */
								BgL_nodez00_bglt BgL_funz00_841;

								{	/* Ast/app.scm 94 */
									obj_t BgL_arg3416z00_921;

									obj_t BgL_arg3417z00_922;

									BgL_arg3416z00_921 = CAR(BgL_expz00_4);
									BgL_arg3417z00_922 = CNST_TABLE_REF(((long) 2));
									BgL_funz00_841 =
										BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3416z00_921,
										BgL_stackz00_5, BgL_locz00_838, BgL_arg3417z00_922);
								}
								{	/* Ast/app.scm 94 */
									bool_t BgL_funzd2errzf3z21_842;

									BgL_funzd2errzf3z21_842 =
										(
										(long)
										CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
										(long) CINT(BgL_errzd2nbzd2_839));
									{	/* Ast/app.scm 95 */

										{	/* Ast/app.scm 96 */
											bool_t BgL_testz00_2709;

											{	/* Ast/app.scm 96 */
												bool_t BgL_testz00_2710;

												BgL_expz00_924 = BgL_expz00_4;
												{
													obj_t BgL_expz00_927;

													BgL_expz00_927 = BgL_expz00_924;
												BgL_zc3anonymousza33419ze3z83_928:
													if (NULLP(BgL_expz00_927))
														{	/* Ast/app.scm 75 */
															BgL_testz00_2710 = ((bool_t) 1);
														}
													else
														{

															{	/* Ast/app.scm 77 */
																obj_t BgL_ezd21653zd2_936;

																BgL_ezd21653zd2_936 = CAR(BgL_expz00_927);
																if (PAIRP(BgL_ezd21653zd2_936))
																	{	/* Ast/app.scm 77 */
																		if (
																			(CAR(BgL_ezd21653zd2_936) ==
																				CNST_TABLE_REF(((long) 0))))
																			{	/* Ast/app.scm 77 */
																				{
																					obj_t BgL_expz00_2720;

																					BgL_expz00_2720 = CDR(BgL_expz00_927);
																					BgL_expz00_927 = BgL_expz00_2720;
																					goto
																						BgL_zc3anonymousza33419ze3z83_928;
																				}
																			}
																		else
																			{	/* Ast/app.scm 77 */
																				obj_t BgL_cdrzd21659zd2_941;

																				BgL_cdrzd21659zd2_941 =
																					CDR(BgL_ezd21653zd2_936);
																				if (
																					(CAR(BgL_ezd21653zd2_936) ==
																						CNST_TABLE_REF(((long) 1))))
																					{	/* Ast/app.scm 77 */
																						if (PAIRP(BgL_cdrzd21659zd2_941))
																							{	/* Ast/app.scm 77 */
																								obj_t BgL_cdrzd21661zd2_944;

																								BgL_cdrzd21661zd2_944 =
																									CDR(BgL_cdrzd21659zd2_941);
																								{	/* Ast/app.scm 77 */
																									bool_t BgL_testz00_2730;

																									{	/* Ast/app.scm 77 */
																										obj_t BgL_auxz00_2731;

																										BgL_auxz00_2731 =
																											CAR
																											(BgL_cdrzd21659zd2_941);
																										BgL_testz00_2730 =
																											SYMBOLP(BgL_auxz00_2731);
																									}
																									if (BgL_testz00_2730)
																										{	/* Ast/app.scm 77 */
																											if (PAIRP
																												(BgL_cdrzd21661zd2_944))
																												{	/* Ast/app.scm 77 */
																													bool_t
																														BgL_testz00_2736;
																													{	/* Ast/app.scm 77 */
																														obj_t
																															BgL_auxz00_2737;
																														BgL_auxz00_2737 =
																															CAR
																															(BgL_cdrzd21661zd2_944);
																														BgL_testz00_2736 =
																															SYMBOLP
																															(BgL_auxz00_2737);
																													}
																													if (BgL_testz00_2736)
																														{	/* Ast/app.scm 77 */
																															if (NULLP(CDR
																																	(BgL_cdrzd21661zd2_944)))
																																{	/* Ast/app.scm 77 */
																																	{
																																		obj_t
																																			BgL_expz00_2743;
																																		BgL_expz00_2743
																																			=
																																			CDR
																																			(BgL_expz00_927);
																																		BgL_expz00_927
																																			=
																																			BgL_expz00_2743;
																																		goto
																																			BgL_zc3anonymousza33419ze3z83_928;
																																	}
																																}
																															else
																																{	/* Ast/app.scm 77 */
																																BgL_tagzd21652zd2_935:
																																	{	/* Ast/app.scm 89 */
																																		bool_t
																																			BgL_testz00_2745;
																																		{	/* Ast/app.scm 89 */
																																			bool_t
																																				BgL__ortest_3247z00_963;
																																			{	/* Ast/app.scm 89 */
																																				obj_t
																																					BgL_arg3446z00_965;
																																				BgL_arg3446z00_965
																																					=
																																					CAR
																																					(BgL_expz00_927);
																																				BgL__ortest_3247z00_963
																																					=
																																					BGl_iszd2azf3z21zz__objectz00
																																					(BgL_arg3446z00_965,
																																					BGl_atomz00zzast_nodez00);
																																			}
																																			if (BgL__ortest_3247z00_963)
																																				{	/* Ast/app.scm 89 */
																																					BgL_testz00_2745
																																						=
																																						BgL__ortest_3247z00_963;
																																				}
																																			else
																																				{	/* Ast/app.scm 89 */
																																					obj_t
																																						BgL_arg3445z00_964;
																																					BgL_arg3445z00_964
																																						=
																																						CAR
																																						(BgL_expz00_927);
																																					BgL_testz00_2745
																																						=
																																						BGl_iszd2azf3z21zz__objectz00
																																						(BgL_arg3445z00_964,
																																						BGl_varz00zzast_nodez00);
																																				}
																																		}
																																		if (BgL_testz00_2745)
																																			{
																																				obj_t
																																					BgL_expz00_2751;
																																				BgL_expz00_2751
																																					=
																																					CDR
																																					(BgL_expz00_927);
																																				BgL_expz00_927
																																					=
																																					BgL_expz00_2751;
																																				goto
																																					BgL_zc3anonymousza33419ze3z83_928;
																																			}
																																		else
																																			{	/* Ast/app.scm 89 */
																																				BgL_testz00_2710
																																					=
																																					(
																																					(bool_t)
																																					0);
																																			}
																																	}
																																}
																														}
																													else
																														{	/* Ast/app.scm 77 */
																															goto
																																BgL_tagzd21652zd2_935;
																														}
																												}
																											else
																												{	/* Ast/app.scm 77 */
																													goto
																														BgL_tagzd21652zd2_935;
																												}
																										}
																									else
																										{	/* Ast/app.scm 77 */
																											goto
																												BgL_tagzd21652zd2_935;
																										}
																								}
																							}
																						else
																							{	/* Ast/app.scm 77 */
																								goto BgL_tagzd21652zd2_935;
																							}
																					}
																				else
																					{	/* Ast/app.scm 77 */
																						goto BgL_tagzd21652zd2_935;
																					}
																			}
																	}
																else
																	{	/* Ast/app.scm 77 */
																		{
																			obj_t BgL_expz00_2753;

																			BgL_expz00_2753 = CDR(BgL_expz00_927);
																			BgL_expz00_927 = BgL_expz00_2753;
																			goto BgL_zc3anonymousza33419ze3z83_928;
																		}
																	}
															}
														}
												}
												if (BgL_testz00_2710)
													{	/* Ast/app.scm 96 */
														obj_t BgL_obj2170z00_2067;

														BgL_obj2170z00_2067 = (obj_t) (BgL_funz00_841);
														BgL_testz00_2709 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_2067,
															BGl_varz00zzast_nodez00);
													}
												else
													{	/* Ast/app.scm 96 */
														BgL_testz00_2709 = ((bool_t) 0);
													}
											}
											if (BgL_testz00_2709)
												{	/* Ast/app.scm 97 */
													obj_t BgL_argsz00_844;

													BgL_argsz00_844 = CDR(BgL_expz00_4);
													{	/* Ast/app.scm 97 */
														long BgL_deltaz00_845;

														BgL_deltaz00_845 =
															BGl_checkzd2userzd2appz00zzast_appz00(
															(BgL_varz00_bglt) (BgL_funz00_841),
															BgL_argsz00_844);
														{	/* Ast/app.scm 98 */

															{	/* Ast/app.scm 100 */
																bool_t BgL_testz00_2760;

																{	/* Ast/app.scm 100 */
																	obj_t BgL_obj2170z00_2069;

																	BgL_obj2170z00_2069 =
																		(obj_t) (
																		(BgL_varz00_bglt) (BgL_funz00_841));
																	BgL_testz00_2760 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2170z00_2069,
																		BGl_varz00zzast_nodez00);
																}
																if (BgL_testz00_2760)
																	{	/* Ast/app.scm 100 */
																		if ((BgL_deltaz00_845 == ((long) 0)))
																			{	/* Ast/app.scm 102 */
																				return
																					BGl_makezd2appzd2nodez00zzast_appz00
																					(BgL_stackz00_5, BgL_locz00_838,
																					BgL_sitez00_7,
																					(BgL_varz00_bglt) (BgL_funz00_841),
																					BgL_argsz00_844);
																			}
																		else
																			{	/* Ast/app.scm 102 */
																				return
																					BGl_wrongzd2numberzd2ofzd2argumentszd2zzast_appz00
																					(BgL_expz00_4, BgL_locz00_838,
																					(BgL_varz00_bglt) (BgL_funz00_841),
																					BgL_argsz00_844);
																			}
																	}
																else
																	{	/* Ast/app.scm 100 */
																		return
																			BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(CNST_TABLE_REF(((long) 3)),
																			BgL_stackz00_5, BgL_locz00_838,
																			CNST_TABLE_REF(((long) 4)));
												}}}}}
											else
												{	/* Ast/app.scm 106 */
													obj_t BgL_g3248z00_848;

													BgL_g3248z00_848 = CDR(BgL_expz00_4);
													{
														obj_t BgL_oldzd2argszd2_852;

														obj_t BgL_newzd2argszd2_853;

														obj_t BgL_bindingsz00_854;

														BgL_oldzd2argszd2_852 = BgL_g3248z00_848;
														BgL_newzd2argszd2_853 = BNIL;
														BgL_bindingsz00_854 = BNIL;
													BgL_zc3anonymousza33359ze3z83_855:
														if (NULLP(BgL_oldzd2argszd2_852))
															{	/* Ast/app.scm 117 */
																bool_t BgL_testz00_2776;

																{	/* Ast/app.scm 117 */
																	obj_t BgL_obj2170z00_2075;

																	BgL_obj2170z00_2075 =
																		(obj_t) (BgL_funz00_841);
																	BgL_testz00_2776 =
																		BGl_iszd2azf3z21zz__objectz00
																		(BgL_obj2170z00_2075,
																		BGl_varz00zzast_nodez00);
																}
																if (BgL_testz00_2776)
																	{	/* Ast/app.scm 117 */
																		return
																			BGl_cleanzd2userzd2nodez12z12zzast_appz00
																			(BGl_sexpzd2ze3nodez31zzast_sexpz00
																			(BGl_makezd2thezd2appz00zzast_appz00
																				(BgL_bindingsz00_854,
																					BgL_newzd2argszd2_853,
																					(obj_t) ((BgL_varz00_bglt)
																						(BgL_funz00_841))), BgL_stackz00_5,
																				BgL_locz00_838, BgL_sitez00_7));
																	}
																else
																	{	/* Ast/app.scm 124 */
																		obj_t BgL_newzd2funzd2_862;

																		BgL_newzd2funzd2_862 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 5))));
																		{	/* Ast/app.scm 124 */
																			obj_t BgL_lexpz00_863;

																			{	/* Ast/app.scm 125 */
																				obj_t BgL_arg3363z00_865;

																				obj_t BgL_arg3364z00_866;

																				BgL_arg3363z00_865 =
																					BGl_letzd2symzd2zzast_letz00();
																				{	/* Ast/app.scm 125 */
																					obj_t BgL_arg3365z00_867;

																					obj_t BgL_arg3366z00_868;

																					{	/* Ast/app.scm 125 */
																						obj_t BgL_arg3371z00_872;

																						{	/* Ast/app.scm 125 */
																							obj_t BgL_arg3373z00_874;

																							{	/* Ast/app.scm 125 */
																								obj_t BgL_arg3374z00_875;

																								if (BgL_funzd2errzf3z21_842)
																									{	/* Ast/app.scm 125 */
																										BgL_arg3374z00_875 =
																											CNST_TABLE_REF(((long)
																												6));
																									}
																								else
																									{	/* Ast/app.scm 125 */
																										BgL_arg3374z00_875 =
																											(obj_t) (BgL_funz00_841);
																									}
																								{	/* Ast/app.scm 125 */
																									obj_t BgL_list3376z00_877;

																									BgL_list3376z00_877 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg3373z00_874 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3374z00_875,
																										BgL_list3376z00_877);
																								}
																							}
																							BgL_arg3371z00_872 =
																								MAKE_PAIR(BgL_newzd2funzd2_862,
																								BgL_arg3373z00_874);
																						}
																						BgL_arg3365z00_867 =
																							MAKE_PAIR(BgL_arg3371z00_872,
																							BNIL);
																					}
																					BgL_arg3366z00_868 =
																						BGl_makezd2thezd2appz00zzast_appz00
																						(BgL_bindingsz00_854,
																						BgL_newzd2argszd2_853,
																						BgL_newzd2funzd2_862);
																					{	/* Ast/app.scm 125 */
																						obj_t BgL_list3368z00_870;

																						{	/* Ast/app.scm 125 */
																							obj_t BgL_arg3369z00_871;

																							BgL_arg3369z00_871 =
																								MAKE_PAIR(BNIL, BNIL);
																							BgL_list3368z00_870 =
																								MAKE_PAIR(BgL_arg3366z00_868,
																								BgL_arg3369z00_871);
																						}
																						BgL_arg3364z00_866 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg3365z00_867,
																							BgL_list3368z00_870);
																					}
																				}
																				BgL_lexpz00_863 =
																					MAKE_PAIR(BgL_arg3363z00_865,
																					BgL_arg3364z00_866);
																			}
																			{	/* Ast/app.scm 125 */
																				BgL_nodez00_bglt BgL_nodez00_864;

																				BgL_nodez00_864 =
																					BGl_sexpzd2ze3nodez31zzast_sexpz00
																					(BgL_lexpz00_863, BgL_stackz00_5,
																					BgL_locz00_838, BgL_sitez00_7);
																				{	/* Ast/app.scm 129 */

																					return
																						BGl_cleanzd2userzd2nodez12z12zzast_appz00
																						(BgL_nodez00_864);
																				}
																			}
																		}
																	}
															}
														else
															{	/* Ast/app.scm 131 */
																bool_t BgL_testz00_2802;

																{	/* Ast/app.scm 131 */
																	bool_t BgL_testz00_2803;

																	{	/* Ast/app.scm 131 */
																		obj_t BgL_auxz00_2804;

																		BgL_auxz00_2804 =
																			CAR(BgL_oldzd2argszd2_852);
																		BgL_testz00_2803 = SYMBOLP(BgL_auxz00_2804);
																	}
																	if (BgL_testz00_2803)
																		{	/* Ast/app.scm 131 */
																			BgL_testz00_2802 = ((bool_t) 1);
																		}
																	else
																		{	/* Ast/app.scm 132 */
																			bool_t BgL_testz00_2807;

																			{	/* Ast/app.scm 132 */
																				obj_t BgL_auxz00_2808;

																				BgL_auxz00_2808 =
																					CAR(BgL_oldzd2argszd2_852);
																				BgL_testz00_2807 =
																					KEYWORDP(BgL_auxz00_2808);
																			}
																			if (BgL_testz00_2807)
																				{	/* Ast/app.scm 132 */
																					BgL_testz00_2802 = ((bool_t) 1);
																				}
																			else
																				{	/* Ast/app.scm 133 */
																					obj_t BgL_auxz00_2811;

																					BgL_auxz00_2811 =
																						CAR(BgL_oldzd2argszd2_852);
																					BgL_testz00_2802 =
																						CNSTP(BgL_auxz00_2811);
																				}
																		}
																}
																if (BgL_testz00_2802)
																	{	/* Ast/app.scm 134 */
																		obj_t BgL_arg3394z00_897;

																		obj_t BgL_arg3395z00_898;

																		BgL_arg3394z00_897 =
																			CDR(BgL_oldzd2argszd2_852);
																		if (EXTENDED_PAIRP(BgL_oldzd2argszd2_852))
																			{	/* Ast/app.scm 136 */
																				obj_t BgL_arg3397z00_900;

																				obj_t BgL_arg3398z00_901;

																				BgL_arg3397z00_900 =
																					CAR(BgL_oldzd2argszd2_852);
																				BgL_arg3398z00_901 =
																					CER(BgL_oldzd2argszd2_852);
																				{	/* Ast/app.scm 136 */
																					obj_t BgL_res3977z00_2090;

																					BgL_res3977z00_2090 =
																						MAKE_EXTENDED_PAIR
																						(BgL_arg3397z00_900,
																						BgL_newzd2argszd2_853,
																						BgL_arg3398z00_901);
																					BgL_arg3395z00_898 =
																						BgL_res3977z00_2090;
																				}
																			}
																		else
																			{	/* Ast/app.scm 135 */
																				BgL_arg3395z00_898 =
																					MAKE_PAIR(CAR(BgL_oldzd2argszd2_852),
																					BgL_newzd2argszd2_853);
																			}
																		{
																			obj_t BgL_newzd2argszd2_2823;

																			obj_t BgL_oldzd2argszd2_2822;

																			BgL_oldzd2argszd2_2822 =
																				BgL_arg3394z00_897;
																			BgL_newzd2argszd2_2823 =
																				BgL_arg3395z00_898;
																			BgL_newzd2argszd2_853 =
																				BgL_newzd2argszd2_2823;
																			BgL_oldzd2argszd2_852 =
																				BgL_oldzd2argszd2_2822;
																			goto BgL_zc3anonymousza33359ze3z83_855;
																		}
																	}
																else
																	{	/* Ast/app.scm 140 */
																		obj_t BgL_newzd2argzd2_903;

																		BgL_newzd2argzd2_903 =
																			BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
																			(BGl_gensymz00zz__r4_symbols_6_4z00
																			(CNST_TABLE_REF(((long) 7))));
																		{	/* Ast/app.scm 141 */
																			obj_t BgL_arg3400z00_904;

																			obj_t BgL_arg3401z00_905;

																			obj_t BgL_arg3402z00_906;

																			BgL_arg3400z00_904 =
																				CDR(BgL_oldzd2argszd2_852);
																			if (EXTENDED_PAIRP(BgL_oldzd2argszd2_852))
																				{	/* Ast/app.scm 143 */
																					obj_t BgL_arg3404z00_908;

																					BgL_arg3404z00_908 =
																						CER(BgL_oldzd2argszd2_852);
																					{	/* Ast/app.scm 143 */
																						obj_t BgL_res3978z00_2098;

																						BgL_res3978z00_2098 =
																							MAKE_EXTENDED_PAIR
																							(BgL_newzd2argzd2_903,
																							BgL_newzd2argszd2_853,
																							BgL_arg3404z00_908);
																						BgL_arg3401z00_905 =
																							BgL_res3978z00_2098;
																					}
																				}
																			else
																				{	/* Ast/app.scm 142 */
																					BgL_arg3401z00_905 =
																						MAKE_PAIR(BgL_newzd2argzd2_903,
																						BgL_newzd2argszd2_853);
																				}
																			{	/* Ast/app.scm 145 */
																				obj_t BgL_arg3405z00_909;

																				{	/* Ast/app.scm 145 */
																					obj_t BgL_arg3406z00_910;

																					BgL_arg3406z00_910 =
																						CAR(BgL_oldzd2argszd2_852);
																					{	/* Ast/app.scm 145 */
																						obj_t BgL_list3407z00_911;

																						{	/* Ast/app.scm 145 */
																							obj_t BgL_arg3408z00_912;

																							BgL_arg3408z00_912 =
																								MAKE_PAIR(BgL_arg3406z00_910,
																								BNIL);
																							BgL_list3407z00_911 =
																								MAKE_PAIR(BgL_newzd2argzd2_903,
																								BgL_arg3408z00_912);
																						}
																						BgL_arg3405z00_909 =
																							BgL_list3407z00_911;
																					}
																				}
																				BgL_arg3402z00_906 =
																					MAKE_PAIR(BgL_arg3405z00_909,
																					BgL_bindingsz00_854);
																			}
																			{
																				obj_t BgL_bindingsz00_2839;

																				obj_t BgL_newzd2argszd2_2838;

																				obj_t BgL_oldzd2argszd2_2837;

																				BgL_oldzd2argszd2_2837 =
																					BgL_arg3400z00_904;
																				BgL_newzd2argszd2_2838 =
																					BgL_arg3401z00_905;
																				BgL_bindingsz00_2839 =
																					BgL_arg3402z00_906;
																				BgL_bindingsz00_854 =
																					BgL_bindingsz00_2839;
																				BgL_newzd2argszd2_853 =
																					BgL_newzd2argszd2_2838;
																				BgL_oldzd2argszd2_852 =
																					BgL_oldzd2argszd2_2837;
																				goto BgL_zc3anonymousza33359ze3z83_855;
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



/* make-the-app */
	obj_t BGl_makezd2thezd2appz00zzast_appz00(obj_t BgL_bindingsz00_2614,
		obj_t BgL_newzd2argszd2_2613, obj_t BgL_funz00_879)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 112 */
			if (PAIRP(BgL_bindingsz00_2614))
				{	/* Ast/app.scm 114 */
					obj_t BgL_arg3380z00_882;

					obj_t BgL_arg3381z00_883;

					BgL_arg3380z00_882 = BGl_letzd2symzd2zzast_letz00();
					{	/* Ast/app.scm 114 */
						obj_t BgL_arg3382z00_884;

						obj_t BgL_arg3383z00_885;

						BgL_arg3382z00_884 = bgl_reverse_bang(BgL_bindingsz00_2614);
						BgL_arg3383z00_885 =
							MAKE_PAIR(BgL_funz00_879,
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
								(BgL_newzd2argszd2_2613), BNIL));
						{	/* Ast/app.scm 114 */
							obj_t BgL_list3385z00_887;

							{	/* Ast/app.scm 114 */
								obj_t BgL_arg3386z00_888;

								BgL_arg3386z00_888 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3385z00_887 =
									MAKE_PAIR(BgL_arg3383z00_885, BgL_arg3386z00_888);
							}
							BgL_arg3381z00_883 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3382z00_884,
								BgL_list3385z00_887);
						}
					}
					return MAKE_PAIR(BgL_arg3380z00_882, BgL_arg3381z00_883);
				}
			else
				{	/* Ast/app.scm 113 */
					return
						MAKE_PAIR(BgL_funz00_879,
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(bgl_reverse_bang
							(BgL_newzd2argszd2_2613), BNIL));
				}
		}
	}



/* _application->node */
	obj_t BGl__applicationzd2ze3nodez31zzast_appz00(obj_t BgL_envz00_2590,
		obj_t BgL_expz00_2591, obj_t BgL_stackz00_2592, obj_t BgL_locz00_2593,
		obj_t BgL_sitez00_2594)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 72 */
			return
				(obj_t) (BGl_applicationzd2ze3nodez31zzast_appz00(BgL_expz00_2591,
					BgL_stackz00_2592, BgL_locz00_2593, BgL_sitez00_2594));
		}
	}



/* check-user-app */
	long BGl_checkzd2userzd2appz00zzast_appz00(BgL_varz00_bglt BgL_funz00_8,
		obj_t BgL_argsz00_9)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 156 */
			{	/* Ast/app.scm 157 */
				bool_t BgL_testz00_2856;

				{	/* Ast/app.scm 157 */
					obj_t BgL_obj2170z00_2129;

					BgL_obj2170z00_2129 = (obj_t) (BgL_funz00_8);
					BgL_testz00_2856 =
						BGl_iszd2azf3z21zz__objectz00(BgL_obj2170z00_2129,
						BGl_varz00zzast_nodez00);
				}
				if (BgL_testz00_2856)
					{	/* Ast/app.scm 163 */
						BgL_variablez00_bglt BgL_varz00_969;

						BgL_varz00_969 =
							(((BgL_varz00_bglt) CREF(BgL_funz00_8))->BgL_variablez00);
						{	/* Ast/app.scm 163 */
							BgL_valuez00_bglt BgL_funz00_970;

							BgL_funz00_970 =
								(((BgL_variablez00_bglt) CREF(BgL_varz00_969))->BgL_valuez00);
							{	/* Ast/app.scm 164 */
								long BgL_nbzd2argszd2_971;

								BgL_nbzd2argszd2_971 = bgl_list_length(BgL_argsz00_9);
								{	/* Ast/app.scm 165 */
									long BgL_arityz00_972;

									{	/* Ast/app.scm 167 */
										bool_t BgL_testz00_2862;

										{	/* Ast/app.scm 167 */
											obj_t BgL_obj1856z00_2132;

											BgL_obj1856z00_2132 = (obj_t) (BgL_funz00_970);
											BgL_testz00_2862 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2132,
												BGl_funz00zzast_varz00);
										}
										if (BgL_testz00_2862)
											{
												BgL_funz00_bglt BgL_auxz00_2865;

												BgL_auxz00_2865 = (BgL_funz00_bglt) (BgL_funz00_970);
												BgL_arityz00_972 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_2865))->
													BgL_arityz00);
											}
										else
											{	/* Ast/app.scm 167 */
												BgL_arityz00_972 = ((long) -1);
									}}
									{	/* Ast/app.scm 166 */

										if ((BgL_arityz00_972 == ((long) -1)))
											{	/* Ast/app.scm 172 */
												return ((long) 0);
											}
										else
											{	/* Ast/app.scm 172 */
												if ((BgL_arityz00_972 >= ((long) 0)))
													{	/* Ast/app.scm 174 */
														if (BGl_sfunzd2optionalzf3z21zzast_varz00(
																(obj_t) (BgL_funz00_970)))
															{	/* Ast/app.scm 176 */
																if ((BgL_nbzd2argszd2_971 < BgL_arityz00_972))
																	{	/* Ast/app.scm 178 */
																		return
																			(BgL_arityz00_972 - BgL_nbzd2argszd2_971);
																	}
																else
																	{	/* Ast/app.scm 180 */
																		bool_t BgL_testz00_2878;

																		{	/* Ast/app.scm 180 */
																			long BgL_auxz00_2879;

																			{	/* Ast/app.scm 180 */
																				long BgL_auxz00_2880;

																				{	/* Ast/app.scm 180 */
																					obj_t BgL_auxz00_2881;

																					{
																						BgL_sfunz00_bglt BgL_auxz00_2882;

																						BgL_auxz00_2882 =
																							(BgL_sfunz00_bglt)
																							(BgL_funz00_970);
																						BgL_auxz00_2881 =
																							(((BgL_sfunz00_bglt)
																								CREF(BgL_auxz00_2882))->
																							BgL_optionalsz00);
																					}
																					BgL_auxz00_2880 =
																						bgl_list_length(BgL_auxz00_2881);
																				}
																				BgL_auxz00_2879 =
																					(BgL_arityz00_972 + BgL_auxz00_2880);
																			}
																			BgL_testz00_2878 =
																				(BgL_nbzd2argszd2_971 >
																				BgL_auxz00_2879);
																		}
																		if (BgL_testz00_2878)
																			{	/* Ast/app.scm 181 */
																				long BgL_auxz00_2888;

																				{	/* Ast/app.scm 181 */
																					long BgL_auxz00_2889;

																					{	/* Ast/app.scm 181 */
																						obj_t BgL_auxz00_2890;

																						{
																							BgL_sfunz00_bglt BgL_auxz00_2891;

																							BgL_auxz00_2891 =
																								(BgL_sfunz00_bglt)
																								(BgL_funz00_970);
																							BgL_auxz00_2890 =
																								(((BgL_sfunz00_bglt)
																									CREF(BgL_auxz00_2891))->
																								BgL_optionalsz00);
																						}
																						BgL_auxz00_2889 =
																							bgl_list_length(BgL_auxz00_2890);
																					}
																					BgL_auxz00_2888 =
																						(BgL_arityz00_972 +
																						BgL_auxz00_2889);
																				}
																				return
																					(BgL_auxz00_2888 -
																					BgL_nbzd2argszd2_971);
																			}
																		else
																			{	/* Ast/app.scm 180 */
																				return ((long) 0);
															}}}
														else
															{	/* Ast/app.scm 176 */
																if (BGl_sfunzd2keyzf3z21zzast_varz00(
																		(obj_t) (BgL_funz00_970)))
																	{	/* Ast/app.scm 185 */
																		long BgL_klz00_985;

																		{	/* Ast/app.scm 185 */
																			obj_t BgL_auxz00_2900;

																			{
																				BgL_sfunz00_bglt BgL_auxz00_2901;

																				BgL_auxz00_2901 =
																					(BgL_sfunz00_bglt) (BgL_funz00_970);
																				BgL_auxz00_2900 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_2901))->
																					BgL_keysz00);
																			}
																			BgL_klz00_985 =
																				bgl_list_length(BgL_auxz00_2900);
																		}
																		if (
																			(BgL_nbzd2argszd2_971 < BgL_arityz00_972))
																			{	/* Ast/app.scm 187 */
																				return
																					(BgL_arityz00_972 -
																					BgL_nbzd2argszd2_971);
																			}
																		else
																			{	/* Ast/app.scm 187 */
																				if (
																					(BgL_nbzd2argszd2_971 >
																						(BgL_arityz00_972 +
																							(BgL_klz00_985 * ((long) 2)))))
																					{	/* Ast/app.scm 189 */
																						return
																							(
																							(BgL_arityz00_972 +
																								(BgL_klz00_985 * ((long) 2))) -
																							BgL_nbzd2argszd2_971);
																					}
																				else
																					{	/* Ast/app.scm 189 */
																						return ((long) 0);
																	}}}
																else
																	{	/* Ast/app.scm 184 */
																		return
																			(BgL_arityz00_972 - BgL_nbzd2argszd2_971);
																	}
															}
													}
												else
													{	/* Ast/app.scm 174 */
														if (
															((NEG(BgL_arityz00_972) -
																	(BgL_nbzd2argszd2_971 + ((long) 1))) <=
																((long) 0)))
															{	/* Ast/app.scm 196 */
																return ((long) 0);
															}
														else
															{	/* Ast/app.scm 196 */
																return ((long) 1);
					}}}}}}}}
				else
					{	/* Ast/app.scm 157 */
						return ((long) 0);
		}}}
	}



/* wrong-number-of-arguments */
	BgL_nodez00_bglt BGl_wrongzd2numberzd2ofzd2argumentszd2zzast_appz00(obj_t
		BgL_expz00_10, obj_t BgL_locz00_11, BgL_varz00_bglt BgL_funz00_12,
		obj_t BgL_argsz00_13)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 203 */
			{	/* Ast/app.scm 204 */
				BgL_variablez00_bglt BgL_varz00_999;

				BgL_varz00_999 =
					(((BgL_varz00_bglt) CREF(BgL_funz00_12))->BgL_variablez00);
				{	/* Ast/app.scm 204 */
					BgL_valuez00_bglt BgL_funz00_1000;

					BgL_funz00_1000 =
						(((BgL_variablez00_bglt) CREF(BgL_varz00_999))->BgL_valuez00);
					{	/* Ast/app.scm 206 */
						long BgL_arityz00_1002;

						{	/* Ast/app.scm 208 */
							bool_t BgL_testz00_2923;

							{	/* Ast/app.scm 208 */
								obj_t BgL_obj1856z00_2172;

								BgL_obj1856z00_2172 = (obj_t) (BgL_funz00_1000);
								BgL_testz00_2923 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2172,
									BGl_funz00zzast_varz00);
							}
							if (BgL_testz00_2923)
								{
									BgL_funz00_bglt BgL_auxz00_2926;

									BgL_auxz00_2926 = (BgL_funz00_bglt) (BgL_funz00_1000);
									BgL_arityz00_1002 =
										(((BgL_funz00_bglt) CREF(BgL_auxz00_2926))->BgL_arityz00);
								}
							else
								{	/* Ast/app.scm 208 */
									BgL_arityz00_1002 = ((long) -1);
						}}
						{	/* Ast/app.scm 207 */
							obj_t BgL_expectz00_1003;

							if ((BgL_arityz00_1002 >= ((long) 0)))
								{	/* Ast/app.scm 213 */
									if (BGl_sfunzd2optionalzf3z21zzast_varz00(
											(obj_t) (BgL_funz00_1000)))
										{	/* Ast/app.scm 216 */
											char *BgL_arg3482z00_1015;

											char *BgL_arg3484z00_1017;

											{	/* Ast/app.scm 217 */

												BgL_arg3482z00_1015 =
													BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
													(BgL_arityz00_1002), BINT(((long) 10)));
											}
											{	/* Ast/app.scm 219 */

												{	/* Ast/app.scm 219 */
													obj_t BgL_auxz00_2937;

													{	/* Ast/app.scm 220 */
														long BgL_auxz00_2938;

														{	/* Ast/app.scm 220 */
															long BgL_auxz00_2939;

															{	/* Ast/app.scm 221 */
																obj_t BgL_auxz00_2940;

																{
																	BgL_sfunz00_bglt BgL_auxz00_2941;

																	BgL_auxz00_2941 =
																		(BgL_sfunz00_bglt) (BgL_funz00_1000);
																	BgL_auxz00_2940 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_2941))->BgL_optionalsz00);
																}
																BgL_auxz00_2939 =
																	bgl_list_length(BgL_auxz00_2940);
															}
															BgL_auxz00_2938 =
																(BgL_arityz00_1002 + BgL_auxz00_2939);
														}
														BgL_auxz00_2937 = BINT(BgL_auxz00_2938);
													}
													BgL_arg3484z00_1017 =
														BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
														(BgL_auxz00_2937, BINT(((long) 10)));
											}}
											{	/* Ast/app.scm 216 */
												obj_t BgL_list3486z00_1019;

												{	/* Ast/app.scm 216 */
													obj_t BgL_arg3487z00_1020;

													{	/* Ast/app.scm 216 */
														obj_t BgL_arg3488z00_1021;

														{	/* Ast/app.scm 216 */
															obj_t BgL_arg3489z00_1022;

															{	/* Ast/app.scm 216 */
																obj_t BgL_arg3490z00_1023;

																BgL_arg3490z00_1023 =
																	MAKE_PAIR(BGl_string3990z00zzast_appz00,
																	BNIL);
																BgL_arg3489z00_1022 =
																	MAKE_PAIR(string_to_bstring
																	(BgL_arg3484z00_1017), BgL_arg3490z00_1023);
															}
															BgL_arg3488z00_1021 =
																MAKE_PAIR(BGl_string3991z00zzast_appz00,
																BgL_arg3489z00_1022);
														}
														BgL_arg3487z00_1020 =
															MAKE_PAIR(string_to_bstring(BgL_arg3482z00_1015),
															BgL_arg3488z00_1021);
													}
													BgL_list3486z00_1019 =
														MAKE_PAIR(BGl_string3992z00zzast_appz00,
														BgL_arg3487z00_1020);
												}
												BgL_expectz00_1003 =
													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
													(BgL_list3486z00_1019);
										}}
									else
										{	/* Ast/app.scm 215 */
											if (BGl_sfunzd2keyzf3z21zzast_varz00(
													(obj_t) (BgL_funz00_1000)))
												{	/* Ast/app.scm 224 */
													char *BgL_arg3496z00_1033;

													char *BgL_arg3498z00_1035;

													{	/* Ast/app.scm 225 */

														BgL_arg3496z00_1033 =
															BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
															(BINT(BgL_arityz00_1002), BINT(((long) 10)));
													}
													{	/* Ast/app.scm 227 */

														{	/* Ast/app.scm 227 */
															obj_t BgL_auxz00_2963;

															{	/* Ast/app.scm 228 */
																obj_t BgL_auxz00_2964;

																{	/* Ast/app.scm 229 */
																	long BgL_auxz00_2966;

																	{	/* Ast/app.scm 229 */
																		long BgL_auxz00_2967;

																		{	/* Ast/app.scm 229 */
																			obj_t BgL_auxz00_2968;

																			{
																				BgL_sfunz00_bglt BgL_auxz00_2969;

																				BgL_auxz00_2969 =
																					(BgL_sfunz00_bglt) (BgL_funz00_1000);
																				BgL_auxz00_2968 =
																					(((BgL_sfunz00_bglt)
																						CREF(BgL_auxz00_2969))->
																					BgL_keysz00);
																			}
																			BgL_auxz00_2967 =
																				bgl_list_length(BgL_auxz00_2968);
																		}
																		BgL_auxz00_2966 =
																			(((long) 2) * BgL_auxz00_2967);
																	}
																	BgL_auxz00_2964 = BINT(BgL_auxz00_2966);
																}
																BgL_auxz00_2963 =
																	BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT
																	(BgL_arityz00_1002), BgL_auxz00_2964);
															}
															BgL_arg3498z00_1035 =
																BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
																(BgL_auxz00_2963, BINT(((long) 10)));
													}}
													{	/* Ast/app.scm 224 */
														obj_t BgL_list3500z00_1037;

														{	/* Ast/app.scm 224 */
															obj_t BgL_arg3501z00_1038;

															{	/* Ast/app.scm 224 */
																obj_t BgL_arg3502z00_1039;

																{	/* Ast/app.scm 224 */
																	obj_t BgL_arg3503z00_1040;

																	{	/* Ast/app.scm 224 */
																		obj_t BgL_arg3504z00_1041;

																		BgL_arg3504z00_1041 =
																			MAKE_PAIR(BGl_string3990z00zzast_appz00,
																			BNIL);
																		BgL_arg3503z00_1040 =
																			MAKE_PAIR(string_to_bstring
																			(BgL_arg3498z00_1035),
																			BgL_arg3504z00_1041);
																	}
																	BgL_arg3502z00_1039 =
																		MAKE_PAIR(BGl_string3991z00zzast_appz00,
																		BgL_arg3503z00_1040);
																}
																BgL_arg3501z00_1038 =
																	MAKE_PAIR(string_to_bstring
																	(BgL_arg3496z00_1033), BgL_arg3502z00_1039);
															}
															BgL_list3500z00_1037 =
																MAKE_PAIR(BGl_string3992z00zzast_appz00,
																BgL_arg3501z00_1038);
														}
														BgL_expectz00_1003 =
															BGl_stringzd2appendzd2zz__r4_strings_6_7z00
															(BgL_list3500z00_1037);
												}}
											else
												{	/* Ast/app.scm 232 */
													char *BgL_arg3510z00_1051;

													{	/* Ast/app.scm 232 */

														BgL_arg3510z00_1051 =
															BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00
															(BINT(BgL_arityz00_1002), BINT(((long) 10)));
													}
													BgL_expectz00_1003 =
														string_append(string_to_bstring
														(BgL_arg3510z00_1051),
														BGl_string3993z00zzast_appz00);
								}}}
							else
								{	/* Ast/app.scm 235 */
									char *BgL_arg3512z00_1055;

									{	/* Ast/app.scm 235 */

										BgL_arg3512z00_1055 =
											BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT(NEG(
													(BgL_arityz00_1002 + ((long) 1)))),
											BINT(((long) 10)));
									}
									BgL_expectz00_1003 =
										string_append(string_to_bstring(BgL_arg3512z00_1055),
										BGl_string3994z00zzast_appz00);
								}
							{	/* Ast/app.scm 212 */
								obj_t BgL_providez00_1004;

								{	/* Ast/app.scm 237 */
									char *BgL_arg3475z00_1007;

									{	/* Ast/app.scm 237 */

										BgL_arg3475z00_1007 =
											BGl_numberzd2ze3stringz31zz__r4_numbers_6_5z00(BINT
											(bgl_list_length(BgL_argsz00_13)), BINT(((long) 10)));
									}
									BgL_providez00_1004 =
										string_append(string_to_bstring(BgL_arg3475z00_1007),
										BGl_string3995z00zzast_appz00);
								}
								{	/* Ast/app.scm 237 */

									return
										BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(string_append_3
										(BGl_string3996z00zzast_appz00, BgL_expectz00_1003,
											BgL_providez00_1004),
										BGl_shapez00zztools_shapez00(BgL_expz00_10), BgL_locz00_11);
								}
							}
						}
					}
				}
			}
		}
	}



/* make-app-node */
	BGL_EXPORTED_DEF BgL_nodez00_bglt BGl_makezd2appzd2nodez00zzast_appz00(obj_t
		BgL_stackz00_14, obj_t BgL_locz00_15, obj_t BgL_sitez00_16,
		BgL_varz00_bglt BgL_varz00_17, obj_t BgL_argsz00_18)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 246 */
			{	/* Ast/app.scm 247 */
				BgL_valuez00_bglt BgL_funz00_1062;

				{	/* Ast/app.scm 247 */
					BgL_variablez00_bglt BgL_obj1611z00_2182;

					BgL_obj1611z00_2182 =
						(((BgL_varz00_bglt) CREF(BgL_varz00_17))->BgL_variablez00);
					BgL_funz00_1062 =
						(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_2182))->BgL_valuez00);
				}
				{	/* Ast/app.scm 249 */
					bool_t BgL_testz00_3009;

					{	/* Ast/app.scm 249 */
						bool_t BgL_testz00_3010;

						{	/* Ast/app.scm 249 */
							obj_t BgL_obj1955z00_2183;

							BgL_obj1955z00_2183 = (obj_t) (BgL_funz00_1062);
							BgL_testz00_3010 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2183,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_3010)
							{	/* Ast/app.scm 249 */
								obj_t BgL_auxz00_3013;

								{
									BgL_sfunz00_bglt BgL_auxz00_3014;

									BgL_auxz00_3014 = (BgL_sfunz00_bglt) (BgL_funz00_1062);
									BgL_auxz00_3013 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3014))->
										BgL_optionalsz00);
								}
								BgL_testz00_3009 = PAIRP(BgL_auxz00_3013);
							}
						else
							{	/* Ast/app.scm 249 */
								BgL_testz00_3009 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3009)
						{	/* Ast/app.scm 250 */
							obj_t BgL_argsz00_1064;

							{
								obj_t BgL_argsz00_1067;

								obj_t BgL_resz00_1068;

								BgL_argsz00_1067 = BgL_argsz00_18;
								BgL_resz00_1068 = BNIL;
							BgL_zc3anonymousza33518ze3z83_1069:
								if (NULLP(BgL_argsz00_1067))
									{	/* Ast/app.scm 252 */
										BgL_argsz00_1064 = bgl_reverse_bang(BgL_resz00_1068);
									}
								else
									{	/* Ast/app.scm 254 */
										obj_t BgL_az00_1071;

										obj_t BgL_locz00_1072;

										BgL_az00_1071 = CAR(BgL_argsz00_1067);
										BgL_locz00_1072 =
											BGl_findzd2locationzf2locz20zztools_locationz00
											(BgL_argsz00_1067, BgL_locz00_15);
										{	/* Ast/app.scm 256 */
											obj_t BgL_arg3520z00_1073;

											obj_t BgL_arg3521z00_1074;

											BgL_arg3520z00_1073 = CDR(BgL_argsz00_1067);
											{	/* Ast/app.scm 257 */
												BgL_nodez00_bglt BgL_arg3522z00_1075;

												BgL_arg3522z00_1075 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_az00_1071,
													BgL_stackz00_14, BgL_locz00_1072,
													CNST_TABLE_REF(((long) 4)));
												BgL_arg3521z00_1074 =
													MAKE_PAIR((obj_t) (BgL_arg3522z00_1075),
													BgL_resz00_1068);
											}
											{
												obj_t BgL_resz00_3029;

												obj_t BgL_argsz00_3028;

												BgL_argsz00_3028 = BgL_arg3520z00_1073;
												BgL_resz00_3029 = BgL_arg3521z00_1074;
												BgL_resz00_1068 = BgL_resz00_3029;
												BgL_argsz00_1067 = BgL_argsz00_3028;
												goto BgL_zc3anonymousza33518ze3z83_1069;
											}
										}
									}
							}
							return
								(BgL_nodez00_bglt)
								(BGl_makezd2optionalszd2appzd2nodezd2zzast_appz00
								(BgL_stackz00_14, BgL_locz00_15, BgL_sitez00_16, BgL_varz00_17,
									BgL_argsz00_1064));
						}
					else
						{	/* Ast/app.scm 260 */
							bool_t BgL_testz00_3032;

							{	/* Ast/app.scm 260 */
								bool_t BgL_testz00_3033;

								{	/* Ast/app.scm 260 */
									obj_t BgL_obj1955z00_2189;

									BgL_obj1955z00_2189 = (obj_t) (BgL_funz00_1062);
									BgL_testz00_3033 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_2189,
										BGl_sfunz00zzast_varz00);
								}
								if (BgL_testz00_3033)
									{	/* Ast/app.scm 260 */
										obj_t BgL_auxz00_3036;

										{
											BgL_sfunz00_bglt BgL_auxz00_3037;

											BgL_auxz00_3037 = (BgL_sfunz00_bglt) (BgL_funz00_1062);
											BgL_auxz00_3036 =
												(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3037))->
												BgL_keysz00);
										}
										BgL_testz00_3032 = PAIRP(BgL_auxz00_3036);
									}
								else
									{	/* Ast/app.scm 260 */
										BgL_testz00_3032 = ((bool_t) 0);
									}
							}
							if (BgL_testz00_3032)
								{	/* Ast/app.scm 261 */
									obj_t BgL_argsz00_1078;

									{
										obj_t BgL_argsz00_1081;

										obj_t BgL_resz00_1082;

										BgL_argsz00_1081 = BgL_argsz00_18;
										BgL_resz00_1082 = BNIL;
									BgL_zc3anonymousza33524ze3z83_1083:
										if (NULLP(BgL_argsz00_1081))
											{	/* Ast/app.scm 263 */
												BgL_argsz00_1078 = bgl_reverse_bang(BgL_resz00_1082);
											}
										else
											{	/* Ast/app.scm 265 */
												obj_t BgL_az00_1085;

												obj_t BgL_locz00_1086;

												BgL_az00_1085 = CAR(BgL_argsz00_1081);
												BgL_locz00_1086 =
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_argsz00_1081, BgL_locz00_15);
												{	/* Ast/app.scm 267 */
													obj_t BgL_arg3526z00_1087;

													obj_t BgL_arg3527z00_1088;

													BgL_arg3526z00_1087 = CDR(BgL_argsz00_1081);
													{	/* Ast/app.scm 268 */
														BgL_nodez00_bglt BgL_arg3528z00_1089;

														BgL_arg3528z00_1089 =
															BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_az00_1085,
															BgL_stackz00_14, BgL_locz00_1086,
															CNST_TABLE_REF(((long) 4)));
														BgL_arg3527z00_1088 =
															MAKE_PAIR((obj_t) (BgL_arg3528z00_1089),
															BgL_resz00_1082);
													}
													{
														obj_t BgL_resz00_3052;

														obj_t BgL_argsz00_3051;

														BgL_argsz00_3051 = BgL_arg3526z00_1087;
														BgL_resz00_3052 = BgL_arg3527z00_1088;
														BgL_resz00_1082 = BgL_resz00_3052;
														BgL_argsz00_1081 = BgL_argsz00_3051;
														goto BgL_zc3anonymousza33524ze3z83_1083;
													}
												}
											}
									}
									return
										(BgL_nodez00_bglt)
										(BGl_makezd2keyszd2appzd2nodezd2zzast_appz00
										(BgL_stackz00_14, BgL_locz00_15, BgL_sitez00_16,
											BgL_varz00_17, BgL_argsz00_1078));
								}
							else
								{	/* Ast/app.scm 271 */
									bool_t BgL_testz00_3055;

									{	/* Ast/app.scm 271 */
										bool_t BgL_testz00_3056;

										{	/* Ast/app.scm 271 */
											obj_t BgL_obj1856z00_2195;

											BgL_obj1856z00_2195 = (obj_t) (BgL_funz00_1062);
											BgL_testz00_3056 =
												BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2195,
												BGl_funz00zzast_varz00);
										}
										if (BgL_testz00_3056)
											{	/* Ast/app.scm 271 */
												bool_t BgL_testz00_3059;

												{	/* Ast/app.scm 271 */
													long BgL_auxz00_3060;

													{
														BgL_funz00_bglt BgL_auxz00_3061;

														BgL_auxz00_3061 =
															(BgL_funz00_bglt) (BgL_funz00_1062);
														BgL_auxz00_3060 =
															(((BgL_funz00_bglt) CREF(BgL_auxz00_3061))->
															BgL_arityz00);
													}
													BgL_testz00_3059 = (BgL_auxz00_3060 >= ((long) 0));
												}
												if (BgL_testz00_3059)
													{	/* Ast/app.scm 271 */
														BgL_testz00_3055 = ((bool_t) 1);
													}
												else
													{	/* Ast/app.scm 271 */
														obj_t BgL_obj2019z00_2199;

														BgL_obj2019z00_2199 =
															(obj_t) ((BgL_funz00_bglt) (BgL_funz00_1062));
														BgL_testz00_3055 =
															BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_2199,
															BGl_cfunz00zzast_varz00);
													}
											}
										else
											{	/* Ast/app.scm 271 */
												BgL_testz00_3055 = ((bool_t) 1);
											}
									}
									if (BgL_testz00_3055)
										{	/* Ast/app.scm 272 */
											obj_t BgL_argsz00_1092;

											{
												obj_t BgL_argsz00_1095;

												obj_t BgL_resz00_1096;

												BgL_argsz00_1095 = BgL_argsz00_18;
												BgL_resz00_1096 = BNIL;
											BgL_zc3anonymousza33530ze3z83_1097:
												if (NULLP(BgL_argsz00_1095))
													{	/* Ast/app.scm 274 */
														BgL_argsz00_1092 =
															bgl_reverse_bang(BgL_resz00_1096);
													}
												else
													{	/* Ast/app.scm 276 */
														obj_t BgL_az00_1099;

														obj_t BgL_locz00_1100;

														BgL_az00_1099 = CAR(BgL_argsz00_1095);
														BgL_locz00_1100 =
															BGl_findzd2locationzf2locz20zztools_locationz00
															(BgL_argsz00_1095, BgL_locz00_15);
														{	/* Ast/app.scm 278 */
															obj_t BgL_arg3532z00_1101;

															obj_t BgL_arg3533z00_1102;

															BgL_arg3532z00_1101 = CDR(BgL_argsz00_1095);
															{	/* Ast/app.scm 279 */
																BgL_nodez00_bglt BgL_arg3535z00_1103;

																BgL_arg3535z00_1103 =
																	BGl_sexpzd2ze3nodez31zzast_sexpz00
																	(BgL_az00_1099, BgL_stackz00_14,
																	BgL_locz00_1100, CNST_TABLE_REF(((long) 4)));
																BgL_arg3533z00_1102 =
																	MAKE_PAIR((obj_t) (BgL_arg3535z00_1103),
																	BgL_resz00_1096);
															}
															{
																obj_t BgL_resz00_3079;

																obj_t BgL_argsz00_3078;

																BgL_argsz00_3078 = BgL_arg3532z00_1101;
																BgL_resz00_3079 = BgL_arg3533z00_1102;
																BgL_resz00_1096 = BgL_resz00_3079;
																BgL_argsz00_1095 = BgL_argsz00_3078;
																goto BgL_zc3anonymousza33530ze3z83_1097;
															}
														}
													}
											}
											return
												(BgL_nodez00_bglt)
												(BGl_makezd2fxzd2appzd2nodezd2zzast_appz00
												(BgL_locz00_15, BgL_varz00_17, BgL_argsz00_1092));
										}
									else
										{	/* Ast/app.scm 283 */
											long BgL_arg3536z00_1105;

											{
												BgL_funz00_bglt BgL_auxz00_3082;

												BgL_auxz00_3082 = (BgL_funz00_bglt) (BgL_funz00_1062);
												BgL_arg3536z00_1105 =
													(((BgL_funz00_bglt) CREF(BgL_auxz00_3082))->
													BgL_arityz00);
											}
											return
												BGl_makezd2vazd2appzd2nodezd2zzast_appz00
												(BgL_arg3536z00_1105, BgL_stackz00_14, BgL_locz00_15,
												BgL_varz00_17, BgL_argsz00_18);
										}
								}
						}
				}
			}
		}
	}



/* _make-app-node */
	obj_t BGl__makezd2appzd2nodez00zzast_appz00(obj_t BgL_envz00_2595,
		obj_t BgL_stackz00_2596, obj_t BgL_locz00_2597, obj_t BgL_sitez00_2598,
		obj_t BgL_varz00_2599, obj_t BgL_argsz00_2600)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 246 */
			return
				(obj_t) (BGl_makezd2appzd2nodez00zzast_appz00(BgL_stackz00_2596,
					BgL_locz00_2597, BgL_sitez00_2598,
					(BgL_varz00_bglt) (BgL_varz00_2599), BgL_argsz00_2600));
		}
	}



/* make-optionals-app-node */
	obj_t BGl_makezd2optionalszd2appzd2nodezd2zzast_appz00(obj_t BgL_stackz00_19,
		obj_t BgL_locz00_20, obj_t BgL_sitez00_21, BgL_varz00_bglt BgL_varz00_22,
		obj_t BgL_actualsz00_23)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 288 */
			{	/* Ast/app.scm 289 */
				BgL_variablez00_bglt BgL_vz00_1115;

				long BgL_lenz00_1116;

				BgL_vz00_1115 =
					(((BgL_varz00_bglt) CREF(BgL_varz00_22))->BgL_variablez00);
				BgL_lenz00_1116 = bgl_list_length(BgL_actualsz00_23);
				{	/* Ast/app.scm 291 */
					BgL_valuez00_bglt BgL_instance3254z00_1117;

					BgL_instance3254z00_1117 =
						(((BgL_variablez00_bglt) CREF(BgL_vz00_1115))->BgL_valuez00);
					{	/* Ast/app.scm 292 */
						bool_t BgL_testz00_3092;

						{	/* Ast/app.scm 292 */
							long BgL_auxz00_3093;

							{	/* Ast/app.scm 292 */
								long BgL_auxz00_3098;

								long BgL_auxz00_3094;

								{	/* Ast/app.scm 292 */
									obj_t BgL_auxz00_3099;

									{
										BgL_sfunz00_bglt BgL_auxz00_3100;

										BgL_auxz00_3100 =
											(BgL_sfunz00_bglt) (BgL_instance3254z00_1117);
										BgL_auxz00_3099 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3100))->
											BgL_optionalsz00);
									}
									BgL_auxz00_3098 = bgl_list_length(BgL_auxz00_3099);
								}
								{
									BgL_funz00_bglt BgL_auxz00_3095;

									BgL_auxz00_3095 =
										(BgL_funz00_bglt) (BgL_instance3254z00_1117);
									BgL_auxz00_3094 =
										(((BgL_funz00_bglt) CREF(BgL_auxz00_3095))->BgL_arityz00);
								}
								BgL_auxz00_3093 = (BgL_auxz00_3094 + BgL_auxz00_3098);
							}
							BgL_testz00_3092 = (BgL_lenz00_1116 == BgL_auxz00_3093);
						}
						if (BgL_testz00_3092)
							{	/* Ast/app.scm 296 */
								BgL_typez00_bglt BgL_arg3547z00_1119;

								BgL_varz00_bglt BgL_arg3549z00_1121;

								BgL_arg3547z00_1119 =
									(((BgL_variablez00_bglt) CREF(BgL_vz00_1115))->BgL_typez00);
								{	/* Ast/app.scm 297 */
									bool_t BgL_testz00_3107;

									{	/* Ast/app.scm 297 */
										obj_t BgL_obj2190z00_2213;

										BgL_obj2190z00_2213 = (obj_t) (BgL_varz00_22);
										BgL_testz00_3107 =
											BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_2213,
											BGl_closurez00zzast_nodez00);
									}
									if (BgL_testz00_3107)
										{	/* Ast/app.scm 298 */
											BgL_varz00_bglt BgL_new3258z00_1124;

											{	/* Ast/app.scm 298 */
												obj_t BgL_arg3551z00_1125;

												BgL_typez00_bglt BgL_arg3552z00_1126;

												BgL_variablez00_bglt BgL_arg3553z00_1127;

												{
													BgL_nodez00_bglt BgL_auxz00_3110;

													BgL_auxz00_3110 = (BgL_nodez00_bglt) (BgL_varz00_22);
													BgL_arg3551z00_1125 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3110))->
														BgL_locz00);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_3113;

													BgL_auxz00_3113 = (BgL_nodez00_bglt) (BgL_varz00_22);
													BgL_arg3552z00_1126 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3113))->
														BgL_typez00);
												}
												BgL_arg3553z00_1127 =
													(((BgL_varz00_bglt) CREF(BgL_varz00_22))->
													BgL_variablez00);
												BgL_new3258z00_1124 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3551z00_1125,
													BgL_arg3552z00_1126, BgL_arg3553z00_1127);
											}
											{	/* Ast/app.scm 298 */

												BgL_arg3549z00_1121 = BgL_new3258z00_1124;
											}
										}
									else
										{	/* Ast/app.scm 297 */
											BgL_arg3549z00_1121 = BgL_varz00_22;
										}
								}
								return
									(obj_t) (BGl_makezd2appzd2zzast_nodez00(BgL_locz00_20,
										BgL_arg3547z00_1119, BUNSPEC, BINT(((long) -1)),
										BgL_arg3549z00_1121, BgL_actualsz00_23));
							}
						else
							{	/* Ast/app.scm 302 */
								obj_t BgL_reqsz00_1128;

								{	/* Ast/app.scm 302 */
									long BgL_auxz00_3125;

									obj_t BgL_auxz00_3121;

									{
										BgL_funz00_bglt BgL_auxz00_3126;

										BgL_auxz00_3126 =
											(BgL_funz00_bglt) (BgL_instance3254z00_1117);
										BgL_auxz00_3125 =
											(((BgL_funz00_bglt) CREF(BgL_auxz00_3126))->BgL_arityz00);
									}
									{
										BgL_sfunz00_bglt BgL_auxz00_3122;

										BgL_auxz00_3122 =
											(BgL_sfunz00_bglt) (BgL_instance3254z00_1117);
										BgL_auxz00_3121 =
											(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3122))->
											BgL_argszd2namezd2);
									}
									BgL_reqsz00_1128 =
										BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_3121,
										BgL_auxz00_3125);
								}
								{	/* Ast/app.scm 302 */
									obj_t BgL_provsz00_1129;

									{	/* Ast/app.scm 303 */
										obj_t BgL_l3288z00_1247;

										{	/* Ast/app.scm 303 */
											long BgL_auxz00_3134;

											obj_t BgL_auxz00_3130;

											{	/* Ast/app.scm 303 */
												long BgL_auxz00_3135;

												{
													BgL_funz00_bglt BgL_auxz00_3136;

													BgL_auxz00_3136 =
														(BgL_funz00_bglt) (BgL_instance3254z00_1117);
													BgL_auxz00_3135 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_3136))->
														BgL_arityz00);
												}
												BgL_auxz00_3134 = (BgL_lenz00_1116 - BgL_auxz00_3135);
											}
											{
												BgL_sfunz00_bglt BgL_auxz00_3131;

												BgL_auxz00_3131 =
													(BgL_sfunz00_bglt) (BgL_instance3254z00_1117);
												BgL_auxz00_3130 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3131))->
													BgL_optionalsz00);
											}
											BgL_l3288z00_1247 =
												BGl_takez00zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_3130, BgL_auxz00_3134);
										}
										if (NULLP(BgL_l3288z00_1247))
											{	/* Ast/app.scm 303 */
												BgL_provsz00_1129 = BNIL;
											}
										else
											{	/* Ast/app.scm 303 */
												obj_t BgL_head3290z00_1249;

												BgL_head3290z00_1249 =
													MAKE_PAIR(CAR(CAR(BgL_l3288z00_1247)), BNIL);
												{	/* Ast/app.scm 303 */
													obj_t BgL_g3293z00_1250;

													BgL_g3293z00_1250 = CDR(BgL_l3288z00_1247);
													{
														obj_t BgL_l3288z00_1252;

														obj_t BgL_tail3291z00_1253;

														BgL_l3288z00_1252 = BgL_g3293z00_1250;
														BgL_tail3291z00_1253 = BgL_head3290z00_1249;
													BgL_zc3anonymousza33633ze3z83_1254:
														if (NULLP(BgL_l3288z00_1252))
															{	/* Ast/app.scm 303 */
																BgL_provsz00_1129 = BgL_head3290z00_1249;
															}
														else
															{	/* Ast/app.scm 303 */
																obj_t BgL_newtail3292z00_1256;

																BgL_newtail3292z00_1256 =
																	MAKE_PAIR(CAR(CAR(BgL_l3288z00_1252)), BNIL);
																SET_CDR(BgL_tail3291z00_1253,
																	BgL_newtail3292z00_1256);
																{
																	obj_t BgL_tail3291z00_3155;

																	obj_t BgL_l3288z00_3153;

																	BgL_l3288z00_3153 = CDR(BgL_l3288z00_1252);
																	BgL_tail3291z00_3155 =
																		BgL_newtail3292z00_1256;
																	BgL_tail3291z00_1253 = BgL_tail3291z00_3155;
																	BgL_l3288z00_1252 = BgL_l3288z00_3153;
																	goto BgL_zc3anonymousza33633ze3z83_1254;
																}
															}
													}
												}
											}
									}
									{	/* Ast/app.scm 303 */
										obj_t BgL_optsz00_1130;

										{	/* Ast/app.scm 304 */
											long BgL_auxz00_3160;

											obj_t BgL_auxz00_3156;

											{	/* Ast/app.scm 304 */
												long BgL_auxz00_3161;

												{
													BgL_funz00_bglt BgL_auxz00_3162;

													BgL_auxz00_3162 =
														(BgL_funz00_bglt) (BgL_instance3254z00_1117);
													BgL_auxz00_3161 =
														(((BgL_funz00_bglt) CREF(BgL_auxz00_3162))->
														BgL_arityz00);
												}
												BgL_auxz00_3160 = (BgL_lenz00_1116 - BgL_auxz00_3161);
											}
											{
												BgL_sfunz00_bglt BgL_auxz00_3157;

												BgL_auxz00_3157 =
													(BgL_sfunz00_bglt) (BgL_instance3254z00_1117);
												BgL_auxz00_3156 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3157))->
													BgL_optionalsz00);
											}
											BgL_optsz00_1130 =
												BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00
												(BgL_auxz00_3156, BgL_auxz00_3160);
										}
										{	/* Ast/app.scm 304 */
											obj_t BgL_expz00_1131;

											{	/* Ast/app.scm 305 */
												obj_t BgL_arg3557z00_1135;

												obj_t BgL_arg3558z00_1136;

												BgL_arg3557z00_1135 = BGl_letzd2symzd2zzast_letz00();
												{	/* Ast/app.scm 305 */
													obj_t BgL_arg3559z00_1137;

													obj_t BgL_arg3560z00_1138;

													{	/* Ast/app.scm 305 */
														obj_t BgL_ll3295z00_1143;

														{	/* Ast/app.scm 305 */
															long BgL_auxz00_3168;

															{
																BgL_funz00_bglt BgL_auxz00_3169;

																BgL_auxz00_3169 =
																	(BgL_funz00_bglt) (BgL_instance3254z00_1117);
																BgL_auxz00_3168 =
																	(((BgL_funz00_bglt) CREF(BgL_auxz00_3169))->
																	BgL_arityz00);
															}
															BgL_ll3295z00_1143 =
																BGl_takez00zz__r4_pairs_and_lists_6_3z00
																(BgL_actualsz00_23, BgL_auxz00_3168);
														}
														if (NULLP(BgL_reqsz00_1128))
															{	/* Ast/app.scm 305 */
																BgL_arg3559z00_1137 = BNIL;
															}
														else
															{	/* Ast/app.scm 305 */
																obj_t BgL_head3296z00_1145;

																{	/* Ast/app.scm 305 */
																	obj_t BgL_arg3575z00_1164;

																	{	/* Ast/app.scm 305 */
																		obj_t BgL_arg3577z00_1166;

																		obj_t BgL_arg3578z00_1167;

																		BgL_arg3577z00_1166 = CAR(BgL_reqsz00_1128);
																		BgL_arg3578z00_1167 =
																			CAR(BgL_ll3295z00_1143);
																		{	/* Ast/app.scm 305 */
																			obj_t BgL_list3579z00_1168;

																			{	/* Ast/app.scm 305 */
																				obj_t BgL_arg3580z00_1169;

																				BgL_arg3580z00_1169 =
																					MAKE_PAIR(BgL_arg3578z00_1167, BNIL);
																				BgL_list3579z00_1168 =
																					MAKE_PAIR(BgL_arg3577z00_1166,
																					BgL_arg3580z00_1169);
																			}
																			BgL_arg3575z00_1164 =
																				BgL_list3579z00_1168;
																		}
																	}
																	BgL_head3296z00_1145 =
																		MAKE_PAIR(BgL_arg3575z00_1164, BNIL);
																}
																{	/* Ast/app.scm 305 */
																	obj_t BgL_g3300z00_1146;

																	obj_t BgL_g3301z00_1147;

																	BgL_g3300z00_1146 = CDR(BgL_reqsz00_1128);
																	BgL_g3301z00_1147 = CDR(BgL_ll3295z00_1143);
																	{
																		obj_t BgL_ll3294z00_1149;

																		obj_t BgL_ll3295z00_1150;

																		obj_t BgL_tail3297z00_1151;

																		BgL_ll3294z00_1149 = BgL_g3300z00_1146;
																		BgL_ll3295z00_1150 = BgL_g3301z00_1147;
																		BgL_tail3297z00_1151 = BgL_head3296z00_1145;
																	BgL_zc3anonymousza33565ze3z83_1152:
																		if (NULLP(BgL_ll3294z00_1149))
																			{	/* Ast/app.scm 305 */
																				BgL_arg3559z00_1137 =
																					BgL_head3296z00_1145;
																			}
																		else
																			{	/* Ast/app.scm 305 */
																				obj_t BgL_newtail3298z00_1154;

																				{	/* Ast/app.scm 305 */
																					obj_t BgL_arg3569z00_1157;

																					{	/* Ast/app.scm 305 */
																						obj_t BgL_arg3571z00_1159;

																						obj_t BgL_arg3572z00_1160;

																						BgL_arg3571z00_1159 =
																							CAR(BgL_ll3294z00_1149);
																						BgL_arg3572z00_1160 =
																							CAR(BgL_ll3295z00_1150);
																						{	/* Ast/app.scm 305 */
																							obj_t BgL_list3573z00_1161;

																							{	/* Ast/app.scm 305 */
																								obj_t BgL_arg3574z00_1162;

																								BgL_arg3574z00_1162 =
																									MAKE_PAIR(BgL_arg3572z00_1160,
																									BNIL);
																								BgL_list3573z00_1161 =
																									MAKE_PAIR(BgL_arg3571z00_1159,
																									BgL_arg3574z00_1162);
																							}
																							BgL_arg3569z00_1157 =
																								BgL_list3573z00_1161;
																						}
																					}
																					BgL_newtail3298z00_1154 =
																						MAKE_PAIR(BgL_arg3569z00_1157,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3297z00_1151,
																					BgL_newtail3298z00_1154);
																				{
																					obj_t BgL_tail3297z00_3194;

																					obj_t BgL_ll3295z00_3192;

																					obj_t BgL_ll3294z00_3190;

																					BgL_ll3294z00_3190 =
																						CDR(BgL_ll3294z00_1149);
																					BgL_ll3295z00_3192 =
																						CDR(BgL_ll3295z00_1150);
																					BgL_tail3297z00_3194 =
																						BgL_newtail3298z00_1154;
																					BgL_tail3297z00_1151 =
																						BgL_tail3297z00_3194;
																					BgL_ll3295z00_1150 =
																						BgL_ll3295z00_3192;
																					BgL_ll3294z00_1149 =
																						BgL_ll3294z00_3190;
																					goto
																						BgL_zc3anonymousza33565ze3z83_1152;
																				}
																			}
																	}
																}
															}
													}
													{	/* Ast/app.scm 306 */
														obj_t BgL_arg3582z00_1171;

														obj_t BgL_arg3583z00_1172;

														BgL_arg3582z00_1171 = CNST_TABLE_REF(((long) 8));
														{	/* Ast/app.scm 306 */
															obj_t BgL_arg3584z00_1173;

															obj_t BgL_arg3585z00_1174;

															{	/* Ast/app.scm 306 */
																obj_t BgL_arg3589z00_1178;

																obj_t BgL_arg3590z00_1179;

																{	/* Ast/app.scm 306 */
																	obj_t BgL_ll3303z00_1181;

																	{	/* Ast/app.scm 306 */
																		long BgL_auxz00_3196;

																		{
																			BgL_funz00_bglt BgL_auxz00_3197;

																			BgL_auxz00_3197 =
																				(BgL_funz00_bglt)
																				(BgL_instance3254z00_1117);
																			BgL_auxz00_3196 =
																				(((BgL_funz00_bglt)
																					CREF(BgL_auxz00_3197))->BgL_arityz00);
																		}
																		BgL_ll3303z00_1181 =
																			BGl_dropz00zz__r4_pairs_and_lists_6_3z00
																			(BgL_actualsz00_23, BgL_auxz00_3196);
																	}
																	if (NULLP(BgL_provsz00_1129))
																		{	/* Ast/app.scm 306 */
																			BgL_arg3589z00_1178 = BNIL;
																		}
																	else
																		{	/* Ast/app.scm 306 */
																			obj_t BgL_head3304z00_1183;

																			{	/* Ast/app.scm 306 */
																				obj_t BgL_arg3602z00_1202;

																				{	/* Ast/app.scm 306 */
																					obj_t BgL_arg3604z00_1204;

																					obj_t BgL_arg3605z00_1205;

																					BgL_arg3604z00_1204 =
																						CAR(BgL_provsz00_1129);
																					BgL_arg3605z00_1205 =
																						CAR(BgL_ll3303z00_1181);
																					{	/* Ast/app.scm 306 */
																						obj_t BgL_list3606z00_1206;

																						{	/* Ast/app.scm 306 */
																							obj_t BgL_arg3607z00_1207;

																							BgL_arg3607z00_1207 =
																								MAKE_PAIR(BgL_arg3605z00_1205,
																								BNIL);
																							BgL_list3606z00_1206 =
																								MAKE_PAIR(BgL_arg3604z00_1204,
																								BgL_arg3607z00_1207);
																						}
																						BgL_arg3602z00_1202 =
																							BgL_list3606z00_1206;
																					}
																				}
																				BgL_head3304z00_1183 =
																					MAKE_PAIR(BgL_arg3602z00_1202, BNIL);
																			}
																			{	/* Ast/app.scm 306 */
																				obj_t BgL_g3308z00_1184;

																				obj_t BgL_g3309z00_1185;

																				BgL_g3308z00_1184 =
																					CDR(BgL_provsz00_1129);
																				BgL_g3309z00_1185 =
																					CDR(BgL_ll3303z00_1181);
																				{
																					obj_t BgL_ll3302z00_1187;

																					obj_t BgL_ll3303z00_1188;

																					obj_t BgL_tail3305z00_1189;

																					BgL_ll3302z00_1187 =
																						BgL_g3308z00_1184;
																					BgL_ll3303z00_1188 =
																						BgL_g3309z00_1185;
																					BgL_tail3305z00_1189 =
																						BgL_head3304z00_1183;
																				BgL_zc3anonymousza33592ze3z83_1190:
																					if (NULLP(BgL_ll3302z00_1187))
																						{	/* Ast/app.scm 306 */
																							BgL_arg3589z00_1178 =
																								BgL_head3304z00_1183;
																						}
																					else
																						{	/* Ast/app.scm 306 */
																							obj_t BgL_newtail3306z00_1192;

																							{	/* Ast/app.scm 306 */
																								obj_t BgL_arg3596z00_1195;

																								{	/* Ast/app.scm 306 */
																									obj_t BgL_arg3598z00_1197;

																									obj_t BgL_arg3599z00_1198;

																									BgL_arg3598z00_1197 =
																										CAR(BgL_ll3302z00_1187);
																									BgL_arg3599z00_1198 =
																										CAR(BgL_ll3303z00_1188);
																									{	/* Ast/app.scm 306 */
																										obj_t BgL_list3600z00_1199;

																										{	/* Ast/app.scm 306 */
																											obj_t BgL_arg3601z00_1200;

																											BgL_arg3601z00_1200 =
																												MAKE_PAIR
																												(BgL_arg3599z00_1198,
																												BNIL);
																											BgL_list3600z00_1199 =
																												MAKE_PAIR
																												(BgL_arg3598z00_1197,
																												BgL_arg3601z00_1200);
																										}
																										BgL_arg3596z00_1195 =
																											BgL_list3600z00_1199;
																									}
																								}
																								BgL_newtail3306z00_1192 =
																									MAKE_PAIR(BgL_arg3596z00_1195,
																									BNIL);
																							}
																							SET_CDR(BgL_tail3305z00_1189,
																								BgL_newtail3306z00_1192);
																							{
																								obj_t BgL_tail3305z00_3222;

																								obj_t BgL_ll3303z00_3220;

																								obj_t BgL_ll3302z00_3218;

																								BgL_ll3302z00_3218 =
																									CDR(BgL_ll3302z00_1187);
																								BgL_ll3303z00_3220 =
																									CDR(BgL_ll3303z00_1188);
																								BgL_tail3305z00_3222 =
																									BgL_newtail3306z00_1192;
																								BgL_tail3305z00_1189 =
																									BgL_tail3305z00_3222;
																								BgL_ll3303z00_1188 =
																									BgL_ll3303z00_3220;
																								BgL_ll3302z00_1187 =
																									BgL_ll3302z00_3218;
																								goto
																									BgL_zc3anonymousza33592ze3z83_1190;
																							}
																						}
																				}
																			}
																		}
																}
																BgL_arg3590z00_1179 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_optsz00_1130, BNIL);
																BgL_arg3584z00_1173 =
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3589z00_1178, BgL_arg3590z00_1179);
															}
															{	/* Ast/app.scm 309 */
																obj_t BgL_arg3609z00_1209;

																{	/* Ast/app.scm 309 */
																	obj_t BgL_arg3610z00_1210;

																	{	/* Ast/app.scm 309 */
																		obj_t BgL_arg3612z00_1211;

																		obj_t BgL_arg3613z00_1212;

																		if (NULLP(BgL_provsz00_1129))
																			{	/* Ast/app.scm 309 */
																				BgL_arg3612z00_1211 = BNIL;
																			}
																		else
																			{	/* Ast/app.scm 309 */
																				obj_t BgL_head3312z00_1215;

																				BgL_head3312z00_1215 =
																					MAKE_PAIR(BNIL, BNIL);
																				{
																					obj_t BgL_l3310z00_1217;

																					obj_t BgL_tail3313z00_1218;

																					BgL_l3310z00_1217 = BgL_provsz00_1129;
																					BgL_tail3313z00_1218 =
																						BgL_head3312z00_1215;
																				BgL_zc3anonymousza33615ze3z83_1219:
																					if (NULLP(BgL_l3310z00_1217))
																						{	/* Ast/app.scm 309 */
																							BgL_arg3612z00_1211 =
																								CDR(BgL_head3312z00_1215);
																						}
																					else
																						{	/* Ast/app.scm 309 */
																							obj_t BgL_newtail3314z00_1221;

																							BgL_newtail3314z00_1221 =
																								MAKE_PAIR
																								(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																								(CAR(BgL_l3310z00_1217),
																									BgL_locz00_20), BNIL);
																							SET_CDR(BgL_tail3313z00_1218,
																								BgL_newtail3314z00_1221);
																							{
																								obj_t BgL_tail3313z00_3237;

																								obj_t BgL_l3310z00_3235;

																								BgL_l3310z00_3235 =
																									CDR(BgL_l3310z00_1217);
																								BgL_tail3313z00_3237 =
																									BgL_newtail3314z00_1221;
																								BgL_tail3313z00_1218 =
																									BgL_tail3313z00_3237;
																								BgL_l3310z00_1217 =
																									BgL_l3310z00_3235;
																								goto
																									BgL_zc3anonymousza33615ze3z83_1219;
																							}
																						}
																				}
																			}
																		{	/* Ast/app.scm 312 */
																			obj_t BgL_arg3620z00_1227;

																			if (NULLP(BgL_optsz00_1130))
																				{	/* Ast/app.scm 312 */
																					BgL_arg3620z00_1227 = BNIL;
																				}
																			else
																				{	/* Ast/app.scm 312 */
																					obj_t BgL_head3317z00_1231;

																					BgL_head3317z00_1231 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l3315z00_1233;

																						obj_t BgL_tail3318z00_1234;

																						BgL_l3315z00_1233 =
																							BgL_optsz00_1130;
																						BgL_tail3318z00_1234 =
																							BgL_head3317z00_1231;
																					BgL_zc3anonymousza33623ze3z83_1235:
																						if (NULLP(BgL_l3315z00_1233))
																							{	/* Ast/app.scm 312 */
																								BgL_arg3620z00_1227 =
																									CDR(BgL_head3317z00_1231);
																							}
																						else
																							{	/* Ast/app.scm 312 */
																								obj_t BgL_newtail3319z00_1237;

																								{	/* Ast/app.scm 312 */
																									obj_t BgL_arg3626z00_1239;

																									{	/* Ast/app.scm 312 */
																										obj_t BgL_oz00_1241;

																										BgL_oz00_1241 =
																											CAR(BgL_l3315z00_1233);
																										BgL_arg3626z00_1239 =
																											BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																											(CAR(BgL_oz00_1241),
																											BgL_locz00_20);
																									}
																									BgL_newtail3319z00_1237 =
																										MAKE_PAIR
																										(BgL_arg3626z00_1239, BNIL);
																								}
																								SET_CDR(BgL_tail3318z00_1234,
																									BgL_newtail3319z00_1237);
																								{
																									obj_t BgL_tail3318z00_3251;

																									obj_t BgL_l3315z00_3249;

																									BgL_l3315z00_3249 =
																										CDR(BgL_l3315z00_1233);
																									BgL_tail3318z00_3251 =
																										BgL_newtail3319z00_1237;
																									BgL_tail3318z00_1234 =
																										BgL_tail3318z00_3251;
																									BgL_l3315z00_1233 =
																										BgL_l3315z00_3249;
																									goto
																										BgL_zc3anonymousza33623ze3z83_1235;
																								}
																							}
																					}
																				}
																			BgL_arg3613z00_1212 =
																				BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3620z00_1227, BNIL);
																		}
																		BgL_arg3610z00_1210 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg3612z00_1211,
																			BgL_arg3613z00_1212);
																	}
																	BgL_arg3609z00_1209 =
																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																		(BgL_reqsz00_1128, BgL_arg3610z00_1210);
																}
																BgL_arg3585z00_1174 =
																	MAKE_PAIR(
																	(obj_t) (BgL_varz00_22), BgL_arg3609z00_1209);
															}
															{	/* Ast/app.scm 306 */
																obj_t BgL_list3587z00_1176;

																{	/* Ast/app.scm 306 */
																	obj_t BgL_arg3588z00_1177;

																	BgL_arg3588z00_1177 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list3587z00_1176 =
																		MAKE_PAIR(BgL_arg3585z00_1174,
																		BgL_arg3588z00_1177);
																}
																BgL_arg3583z00_1172 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg3584z00_1173, BgL_list3587z00_1176);
															}
														}
														BgL_arg3560z00_1138 =
															MAKE_PAIR(BgL_arg3582z00_1171,
															BgL_arg3583z00_1172);
													}
													{	/* Ast/app.scm 305 */
														obj_t BgL_list3562z00_1140;

														{	/* Ast/app.scm 305 */
															obj_t BgL_arg3563z00_1141;

															BgL_arg3563z00_1141 = MAKE_PAIR(BNIL, BNIL);
															BgL_list3562z00_1140 =
																MAKE_PAIR(BgL_arg3560z00_1138,
																BgL_arg3563z00_1141);
														}
														BgL_arg3558z00_1136 =
															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
															(BgL_arg3559z00_1137, BgL_list3562z00_1140);
													}
												}
												BgL_expz00_1131 =
													MAKE_PAIR(BgL_arg3557z00_1135, BgL_arg3558z00_1136);
											}
											{	/* Ast/app.scm 305 */

												{	/* Ast/app.scm 315 */
													obj_t BgL_arg3554z00_1132;

													BgL_arg3554z00_1132 =
														BGl_compilezd2expandzd2zzexpand_epsz00
														(BGl_comptimezd2expandzd2zzexpand_epsz00
														(BgL_expz00_1131));
													return (obj_t) (BGl_sexpzd2ze3nodez31zzast_sexpz00
														(BgL_arg3554z00_1132, BNIL, BgL_locz00_20,
															BgL_sitez00_21));
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



/* make-keys-app-node */
	obj_t BGl_makezd2keyszd2appzd2nodezd2zzast_appz00(obj_t BgL_stackz00_24,
		obj_t BgL_locz00_25, obj_t BgL_sitez00_26, BgL_varz00_bglt BgL_varz00_27,
		obj_t BgL_argsz00_28)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 323 */
			{	/* Ast/app.scm 324 */
				BgL_variablez00_bglt BgL_vz00_1274;

				BgL_vz00_1274 =
					(((BgL_varz00_bglt) CREF(BgL_varz00_27))->BgL_variablez00);
				{	/* Ast/app.scm 325 */
					BgL_valuez00_bglt BgL_instance3259z00_1275;

					BgL_instance3259z00_1275 =
						(((BgL_variablez00_bglt) CREF(BgL_vz00_1274))->BgL_valuez00);
					{	/* Ast/app.scm 326 */
						obj_t BgL_collectedz00_1276;

						{	/* Ast/app.scm 326 */
							obj_t BgL_g3261z00_1494;

							{	/* Ast/app.scm 326 */
								long BgL_auxz00_3271;

								{
									BgL_funz00_bglt BgL_auxz00_3272;

									BgL_auxz00_3272 =
										(BgL_funz00_bglt) (BgL_instance3259z00_1275);
									BgL_auxz00_3271 =
										(((BgL_funz00_bglt) CREF(BgL_auxz00_3272))->BgL_arityz00);
								}
								BgL_g3261z00_1494 =
									BGl_listzd2tailzd2zz__r4_pairs_and_lists_6_3z00
									(BgL_argsz00_28, BgL_auxz00_3271);
							}
							BgL_collectedz00_1276 =
								BGl_loopz00zzast_appz00(BgL_locz00_25, BgL_vz00_1274,
								BgL_g3261z00_1494);
						}
						{
							obj_t BgL_valsz00_1379;

							obj_t BgL_keysz00_1403;

							obj_t BgL_valsz00_1404;

							obj_t BgL_stackz00_1405;

							{	/* Ast/app.scm 415 */
								bool_t BgL_testz00_3277;

								{
									obj_t BgL_l3325z00_1352;

									BgL_l3325z00_1352 = BgL_collectedz00_1276;
								BgL_zc3anonymousza33694ze3z83_1353:
									if (NULLP(BgL_l3325z00_1352))
										{	/* Ast/app.scm 415 */
											BgL_testz00_3277 = ((bool_t) 0);
										}
									else
										{	/* Ast/app.scm 415 */
											bool_t BgL_testz00_3280;

											{	/* Ast/app.scm 416 */
												obj_t BgL_vz00_1357;

												BgL_vz00_1357 = CAR(BgL_l3325z00_1352);
												{	/* Ast/app.scm 416 */
													obj_t BgL_az00_1358;

													BgL_az00_1358 = CAR(BgL_vz00_1357);
													{	/* Ast/app.scm 417 */
														bool_t BgL_testz00_3283;

														if (BGl_iszd2azf3z21zz__objectz00(BgL_az00_1358,
																BGl_atomz00zzast_nodez00))
															{	/* Ast/app.scm 417 */
																obj_t BgL_auxz00_3286;

																{
																	BgL_atomz00_bglt BgL_auxz00_3287;

																	BgL_auxz00_3287 =
																		(BgL_atomz00_bglt) (BgL_az00_1358);
																	BgL_auxz00_3286 =
																		(((BgL_atomz00_bglt)
																			CREF(BgL_auxz00_3287))->BgL_valuez00);
																}
																BgL_testz00_3283 = KEYWORDP(BgL_auxz00_3286);
															}
														else
															{	/* Ast/app.scm 417 */
																BgL_testz00_3283 = ((bool_t) 0);
															}
														if (BgL_testz00_3283)
															{	/* Ast/app.scm 417 */
																BgL_testz00_3280 = ((bool_t) 0);
															}
														else
															{	/* Ast/app.scm 417 */
																BgL_testz00_3280 = ((bool_t) 1);
															}
													}
												}
											}
											if (BgL_testz00_3280)
												{	/* Ast/app.scm 415 */
													BgL_testz00_3277 = ((bool_t) 1);
												}
											else
												{
													obj_t BgL_l3325z00_3291;

													BgL_l3325z00_3291 = CDR(BgL_l3325z00_1352);
													BgL_l3325z00_1352 = BgL_l3325z00_3291;
													goto BgL_zc3anonymousza33694ze3z83_1353;
												}
										}
								}
								if (BgL_testz00_3277)
									{	/* Ast/app.scm 419 */
										BgL_nodez00_bglt BgL_auxz00_3293;

										{	/* Ast/app.scm 339 */
											obj_t BgL_fz00_1364;

											{	/* Ast/app.scm 339 */
												obj_t BgL_arg3714z00_1378;

												BgL_arg3714z00_1378 =
													(((BgL_variablez00_bglt) CREF(BgL_vz00_1274))->
													BgL_idz00);
												BgL_fz00_1364 =
													BGl_gensymz00zz__r4_symbols_6_4z00
													(BgL_arg3714z00_1378);
											}
											{	/* Ast/app.scm 344 */
												obj_t BgL_expz00_1365;

												{	/* Ast/app.scm 344 */
													obj_t BgL_arg3702z00_1366;

													obj_t BgL_arg3703z00_1367;

													BgL_arg3702z00_1366 = BGl_letzd2symzd2zzast_letz00();
													{	/* Ast/app.scm 344 */
														obj_t BgL_arg3704z00_1368;

														obj_t BgL_arg3705z00_1369;

														{	/* Ast/app.scm 344 */
															obj_t BgL_arg3709z00_1373;

															{	/* Ast/app.scm 344 */
																obj_t BgL_arg3711z00_1375;

																{	/* Ast/app.scm 344 */
																	obj_t BgL_list3712z00_1376;

																	BgL_list3712z00_1376 = MAKE_PAIR(BNIL, BNIL);
																	BgL_arg3711z00_1375 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(
																		(obj_t) (BgL_vz00_1274),
																		BgL_list3712z00_1376);
																}
																BgL_arg3709z00_1373 =
																	MAKE_PAIR(BgL_fz00_1364, BgL_arg3711z00_1375);
															}
															BgL_arg3704z00_1368 =
																MAKE_PAIR(BgL_arg3709z00_1373, BNIL);
														}
														BgL_arg3705z00_1369 =
															MAKE_PAIR(BgL_fz00_1364,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_argsz00_28, BNIL));
														{	/* Ast/app.scm 344 */
															obj_t BgL_list3707z00_1371;

															{	/* Ast/app.scm 344 */
																obj_t BgL_arg3708z00_1372;

																BgL_arg3708z00_1372 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3707z00_1371 =
																	MAKE_PAIR(BgL_arg3705z00_1369,
																	BgL_arg3708z00_1372);
															}
															BgL_arg3703z00_1367 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3704z00_1368, BgL_list3707z00_1371);
														}
													}
													BgL_expz00_1365 =
														MAKE_PAIR(BgL_arg3702z00_1366, BgL_arg3703z00_1367);
												}
												BgL_auxz00_3293 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_expz00_1365,
													BgL_stackz00_24, BgL_locz00_25, BgL_sitez00_26);
											}
										}
										return (obj_t) (BgL_auxz00_3293);
									}
								else
									{	/* Ast/app.scm 420 */
										obj_t BgL_valsz00_1281;

										{	/* Ast/app.scm 422 */
											obj_t BgL_arg3680z00_1329;

											{	/* Ast/app.scm 422 */
												obj_t BgL_arg3681z00_1330;

												if (NULLP(BgL_collectedz00_1276))
													{	/* Ast/app.scm 422 */
														BgL_arg3681z00_1330 = BNIL;
													}
												else
													{	/* Ast/app.scm 422 */
														obj_t BgL_head3329z00_1333;

														BgL_head3329z00_1333 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l3327z00_1335;

															obj_t BgL_tail3330z00_1336;

															BgL_l3327z00_1335 = BgL_collectedz00_1276;
															BgL_tail3330z00_1336 = BgL_head3329z00_1333;
														BgL_zc3anonymousza33683ze3z83_1337:
															if (NULLP(BgL_l3327z00_1335))
																{	/* Ast/app.scm 422 */
																	BgL_arg3681z00_1330 =
																		CDR(BgL_head3329z00_1333);
																}
															else
																{	/* Ast/app.scm 422 */
																	obj_t BgL_newtail3331z00_1339;

																	{	/* Ast/app.scm 422 */
																		obj_t BgL_arg3686z00_1341;

																		{	/* Ast/app.scm 422 */
																			obj_t BgL_vz00_1343;

																			BgL_vz00_1343 = CAR(BgL_l3327z00_1335);
																			{	/* Ast/app.scm 424 */
																				obj_t BgL_arg3688z00_1344;

																				obj_t BgL_arg3689z00_1345;

																				{	/* Ast/app.scm 424 */
																					obj_t BgL_arg3692z00_1348;

																					{	/* Ast/app.scm 424 */
																						BgL_atomz00_bglt
																							BgL_obj2135z00_2339;
																						{	/* Ast/app.scm 424 */
																							obj_t BgL_pairz00_2338;

																							BgL_pairz00_2338 = BgL_vz00_1343;
																							BgL_obj2135z00_2339 =
																								(BgL_atomz00_bglt) (CAR
																								(BgL_pairz00_2338));
																						}
																						BgL_arg3692z00_1348 =
																							(((BgL_atomz00_bglt)
																								CREF(BgL_obj2135z00_2339))->
																							BgL_valuez00);
																					}
																					BgL_arg3688z00_1344 =
																						BGl_keywordzd2ze3symbolz31zz__r4_symbols_6_4z00
																						(BgL_arg3692z00_1348);
																				}
																				{	/* Ast/app.scm 425 */
																					obj_t BgL_pairz00_2340;

																					BgL_pairz00_2340 = BgL_vz00_1343;
																					BgL_arg3689z00_1345 =
																						CAR(CDR(BgL_pairz00_2340));
																				}
																				{	/* Ast/app.scm 423 */
																					obj_t BgL_list3690z00_1346;

																					{	/* Ast/app.scm 423 */
																						obj_t BgL_arg3691z00_1347;

																						BgL_arg3691z00_1347 =
																							MAKE_PAIR(BgL_arg3689z00_1345,
																							BNIL);
																						BgL_list3690z00_1346 =
																							MAKE_PAIR(BgL_arg3688z00_1344,
																							BgL_arg3691z00_1347);
																					}
																					BgL_arg3686z00_1341 =
																						BgL_list3690z00_1346;
																				}
																			}
																		}
																		BgL_newtail3331z00_1339 =
																			MAKE_PAIR(BgL_arg3686z00_1341, BNIL);
																	}
																	SET_CDR(BgL_tail3330z00_1336,
																		BgL_newtail3331z00_1339);
																	{
																		obj_t BgL_tail3330z00_3329;

																		obj_t BgL_l3327z00_3327;

																		BgL_l3327z00_3327 = CDR(BgL_l3327z00_1335);
																		BgL_tail3330z00_3329 =
																			BgL_newtail3331z00_1339;
																		BgL_tail3330z00_1336 = BgL_tail3330z00_3329;
																		BgL_l3327z00_1335 = BgL_l3327z00_3327;
																		goto BgL_zc3anonymousza33683ze3z83_1337;
																	}
																}
														}
													}
												BgL_arg3680z00_1329 =
													BGl_dssslzd2keyzd2argszd2sortzd2zztools_dssslz00
													(BgL_arg3681z00_1330);
											}
											BgL_valsz00_1379 = BgL_arg3680z00_1329;
											{
												obj_t BgL_vsz00_1383;

												obj_t BgL_nvalsz00_1384;

												BgL_vsz00_1383 = BgL_valsz00_1379;
												BgL_nvalsz00_1384 = BNIL;
											BgL_zc3anonymousza33716ze3z83_1385:
												if (NULLP(BgL_vsz00_1383))
													{	/* Ast/app.scm 350 */
														BgL_valsz00_1281 =
															bgl_reverse_bang(BgL_nvalsz00_1384);
													}
												else
													{	/* Ast/app.scm 350 */
														if (NULLP(CDR(BgL_vsz00_1383)))
															{	/* Ast/app.scm 353 */
																obj_t BgL_arg3719z00_1388;

																BgL_arg3719z00_1388 =
																	MAKE_PAIR(CAR(BgL_vsz00_1383),
																	BgL_nvalsz00_1384);
																BgL_valsz00_1281 =
																	bgl_reverse_bang(BgL_arg3719z00_1388);
															}
														else
															{	/* Ast/app.scm 354 */
																bool_t BgL_testz00_3340;

																{	/* Ast/app.scm 354 */
																	obj_t BgL_auxz00_3344;

																	obj_t BgL_auxz00_3341;

																	{	/* Ast/app.scm 354 */
																		obj_t BgL_pairz00_2395;

																		{	/* Ast/app.scm 354 */
																			obj_t BgL_pairz00_2391;

																			BgL_pairz00_2391 = BgL_vsz00_1383;
																			BgL_pairz00_2395 =
																				CAR(CDR(BgL_pairz00_2391));
																		}
																		BgL_auxz00_3344 = CAR(BgL_pairz00_2395);
																	}
																	{	/* Ast/app.scm 354 */
																		obj_t BgL_pairz00_2387;

																		BgL_pairz00_2387 = BgL_vsz00_1383;
																		BgL_auxz00_3341 =
																			CAR(CAR(BgL_pairz00_2387));
																	}
																	BgL_testz00_3340 =
																		(BgL_auxz00_3341 == BgL_auxz00_3344);
																}
																if (BgL_testz00_3340)
																	{	/* Ast/app.scm 354 */
																		{	/* Ast/app.scm 356 */
																			obj_t BgL_arg3722z00_1391;

																			obj_t BgL_arg3724z00_1393;

																			BgL_arg3722z00_1391 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_vz00_1274))->BgL_idz00);
																			{	/* Ast/app.scm 358 */
																				obj_t BgL_pairz00_2397;

																				BgL_pairz00_2397 = BgL_vsz00_1383;
																				BgL_arg3724z00_1393 =
																					CAR(CAR(BgL_pairz00_2397));
																			}
																			BGl_userzd2warningzf2locationz20zztools_errorz00
																				(BgL_locz00_25, BgL_arg3722z00_1391,
																				BGl_string3997z00zzast_appz00,
																				BgL_arg3724z00_1393);
																		}
																		{
																			obj_t BgL_vsz00_3353;

																			BgL_vsz00_3353 = CDR(BgL_vsz00_1383);
																			BgL_vsz00_1383 = BgL_vsz00_3353;
																			goto BgL_zc3anonymousza33716ze3z83_1385;
																		}
																	}
																else
																	{	/* Ast/app.scm 361 */
																		obj_t BgL_arg3726z00_1395;

																		obj_t BgL_arg3727z00_1396;

																		BgL_arg3726z00_1395 = CDR(BgL_vsz00_1383);
																		BgL_arg3727z00_1396 =
																			MAKE_PAIR(CAR(BgL_vsz00_1383),
																			BgL_nvalsz00_1384);
																		{
																			obj_t BgL_nvalsz00_3359;

																			obj_t BgL_vsz00_3358;

																			BgL_vsz00_3358 = BgL_arg3726z00_1395;
																			BgL_nvalsz00_3359 = BgL_arg3727z00_1396;
																			BgL_nvalsz00_1384 = BgL_nvalsz00_3359;
																			BgL_vsz00_1383 = BgL_vsz00_3358;
																			goto BgL_zc3anonymousza33716ze3z83_1385;
																		}
																	}
															}
													}
											}
										}
										{	/* Ast/app.scm 428 */
											obj_t BgL_fkeysz00_1282;

											{	/* Ast/app.scm 428 */
												obj_t BgL_l3332z00_1313;

												{
													BgL_sfunz00_bglt BgL_auxz00_3360;

													BgL_auxz00_3360 =
														(BgL_sfunz00_bglt) (BgL_instance3259z00_1275);
													BgL_l3332z00_1313 =
														(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3360))->
														BgL_keysz00);
												}
												if (NULLP(BgL_l3332z00_1313))
													{	/* Ast/app.scm 428 */
														BgL_fkeysz00_1282 = BNIL;
													}
												else
													{	/* Ast/app.scm 428 */
														obj_t BgL_head3334z00_1315;

														BgL_head3334z00_1315 = MAKE_PAIR(BNIL, BNIL);
														{
															obj_t BgL_l3332z00_1317;

															obj_t BgL_tail3335z00_1318;

															BgL_l3332z00_1317 = BgL_l3332z00_1313;
															BgL_tail3335z00_1318 = BgL_head3334z00_1315;
														BgL_zc3anonymousza33672ze3z83_1319:
															if (NULLP(BgL_l3332z00_1317))
																{	/* Ast/app.scm 428 */
																	BgL_fkeysz00_1282 = CDR(BgL_head3334z00_1315);
																}
															else
																{	/* Ast/app.scm 428 */
																	obj_t BgL_newtail3336z00_1321;

																	{	/* Ast/app.scm 428 */
																		obj_t BgL_arg3675z00_1323;

																		{	/* Ast/app.scm 428 */
																			obj_t BgL_kz00_1325;

																			BgL_kz00_1325 = CAR(BgL_l3332z00_1317);
																			BgL_arg3675z00_1323 =
																				BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																				(CAR(BgL_kz00_1325), BgL_locz00_25);
																		}
																		BgL_newtail3336z00_1321 =
																			MAKE_PAIR(BgL_arg3675z00_1323, BNIL);
																	}
																	SET_CDR(BgL_tail3335z00_1318,
																		BgL_newtail3336z00_1321);
																	{
																		obj_t BgL_tail3335z00_3376;

																		obj_t BgL_l3332z00_3374;

																		BgL_l3332z00_3374 = CDR(BgL_l3332z00_1317);
																		BgL_tail3335z00_3376 =
																			BgL_newtail3336z00_1321;
																		BgL_tail3335z00_1318 = BgL_tail3335z00_3376;
																		BgL_l3332z00_1317 = BgL_l3332z00_3374;
																		goto BgL_zc3anonymousza33672ze3z83_1319;
																	}
																}
														}
													}
											}
											{	/* Ast/app.scm 428 */
												obj_t BgL_errz00_1283;

												{	/* Ast/app.scm 432 */
													obj_t BgL_zc3anonymousza33668ze3z83_2601;

													BgL_zc3anonymousza33668ze3z83_2601 =
														make_fx_procedure
														(BGl_zc3anonymousza33668ze3z83zzast_appz00,
														(int) (((long) 1)), (int) (((long) 1)));
													PROCEDURE_SET(BgL_zc3anonymousza33668ze3z83_2601,
														(int) (((long) 0)), BgL_fkeysz00_1282);
													BgL_errz00_1283 =
														BGl_filterz00zz__r4_control_features_6_9z00
														(BgL_zc3anonymousza33668ze3z83_2601,
														BgL_valsz00_1281);
												}
												{	/* Ast/app.scm 431 */

													if (PAIRP(BgL_errz00_1283))
														{	/* Ast/app.scm 436 */
															obj_t BgL_arg3653z00_1285;

															obj_t BgL_arg3655z00_1287;

															BgL_arg3653z00_1285 =
																(((BgL_variablez00_bglt) CREF(BgL_vz00_1274))->
																BgL_idz00);
															{	/* Ast/app.scm 438 */
																obj_t BgL_l3337z00_1289;

																BgL_l3337z00_1289 = BgL_errz00_1283;
																{	/* Ast/app.scm 438 */
																	obj_t BgL_head3339z00_1291;

																	BgL_head3339z00_1291 =
																		MAKE_PAIR(CAR(CAR(BgL_l3337z00_1289)),
																		BNIL);
																	{	/* Ast/app.scm 438 */
																		obj_t BgL_g3342z00_1292;

																		BgL_g3342z00_1292 = CDR(BgL_l3337z00_1289);
																		{
																			obj_t BgL_l3337z00_1294;

																			obj_t BgL_tail3340z00_1295;

																			BgL_l3337z00_1294 = BgL_g3342z00_1292;
																			BgL_tail3340z00_1295 =
																				BgL_head3339z00_1291;
																		BgL_zc3anonymousza33658ze3z83_1296:
																			if (NULLP(BgL_l3337z00_1294))
																				{	/* Ast/app.scm 438 */
																					BgL_arg3655z00_1287 =
																						BgL_head3339z00_1291;
																				}
																			else
																				{	/* Ast/app.scm 438 */
																					obj_t BgL_newtail3341z00_1298;

																					BgL_newtail3341z00_1298 =
																						MAKE_PAIR(CAR(CAR
																							(BgL_l3337z00_1294)), BNIL);
																					SET_CDR(BgL_tail3340z00_1295,
																						BgL_newtail3341z00_1298);
																					{
																						obj_t BgL_tail3340z00_3398;

																						obj_t BgL_l3337z00_3396;

																						BgL_l3337z00_3396 =
																							CDR(BgL_l3337z00_1294);
																						BgL_tail3340z00_3398 =
																							BgL_newtail3341z00_1298;
																						BgL_tail3340z00_1295 =
																							BgL_tail3340z00_3398;
																						BgL_l3337z00_1294 =
																							BgL_l3337z00_3396;
																						goto
																							BgL_zc3anonymousza33658ze3z83_1296;
																					}
																				}
																		}
																	}
																}
															}
															BGl_userzd2errorzf2locationz20zztools_errorz00
																(BgL_locz00_25, BgL_arg3653z00_1285,
																BGl_string3998z00zzast_appz00,
																BgL_arg3655z00_1287, BNIL);
														}
													else
														{	/* Ast/app.scm 434 */
															BFALSE;
														}
												}
											}
										}
										{	/* Ast/app.scm 439 */
											obj_t BgL_arg3679z00_1328;

											{
												BgL_sfunz00_bglt BgL_auxz00_3400;

												BgL_auxz00_3400 =
													(BgL_sfunz00_bglt) (BgL_instance3259z00_1275);
												BgL_arg3679z00_1328 =
													(((BgL_sfunz00_bglt) CREF(BgL_auxz00_3400))->
													BgL_keysz00);
											}
											BgL_keysz00_1403 = BgL_arg3679z00_1328;
											BgL_valsz00_1404 = BgL_valsz00_1281;
											BgL_stackz00_1405 = BgL_stackz00_24;
											return
												BGl_loopz72z72zzast_appz00(BgL_varz00_27,
												BgL_argsz00_28, BgL_instance3259z00_1275, BgL_vz00_1274,
												BgL_sitez00_26, BgL_locz00_25, BgL_keysz00_1403,
												BgL_valsz00_1404, BNIL, BgL_stackz00_1405);
										}
									}
							}
						}
					}
				}
			}
		}
	}



/* loop */
	obj_t BGl_loopz00zzast_appz00(obj_t BgL_locz00_2606,
		BgL_variablez00_bglt BgL_vz00_2605, obj_t BgL_lz00_1496)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 326 */
			if (NULLP(BgL_lz00_1496))
				{	/* Ast/app.scm 328 */
					return BNIL;
				}
			else
				{	/* Ast/app.scm 330 */
					bool_t BgL_testz00_3406;

					{	/* Ast/app.scm 330 */
						obj_t BgL_auxz00_3407;

						BgL_auxz00_3407 = CDR(BgL_lz00_1496);
						BgL_testz00_3406 = PAIRP(BgL_auxz00_3407);
					}
					if (BgL_testz00_3406)
						{	/* Ast/app.scm 331 */
							obj_t BgL_arg3788z00_1500;

							obj_t BgL_arg3789z00_1501;

							{	/* Ast/app.scm 331 */
								obj_t BgL_arg3790z00_1502;

								obj_t BgL_arg3791z00_1503;

								BgL_arg3790z00_1502 = CAR(BgL_lz00_1496);
								{	/* Ast/app.scm 331 */
									obj_t BgL_pairz00_2313;

									BgL_pairz00_2313 = BgL_lz00_1496;
									BgL_arg3791z00_1503 = CAR(CDR(BgL_pairz00_2313));
								}
								{	/* Ast/app.scm 331 */
									obj_t BgL_list3792z00_1504;

									{	/* Ast/app.scm 331 */
										obj_t BgL_arg3793z00_1505;

										BgL_arg3793z00_1505 = MAKE_PAIR(BgL_arg3791z00_1503, BNIL);
										BgL_list3792z00_1504 =
											MAKE_PAIR(BgL_arg3790z00_1502, BgL_arg3793z00_1505);
									}
									BgL_arg3788z00_1500 = BgL_list3792z00_1504;
								}
							}
							{	/* Ast/app.scm 332 */
								obj_t BgL_arg3794z00_1506;

								{	/* Ast/app.scm 332 */
									obj_t BgL_pairz00_2319;

									BgL_pairz00_2319 = BgL_lz00_1496;
									BgL_arg3794z00_1506 = CDR(CDR(BgL_pairz00_2319));
								}
								BgL_arg3789z00_1501 =
									BGl_loopz00zzast_appz00(BgL_locz00_2606, BgL_vz00_2605,
									BgL_arg3794z00_1506);
							}
							return MAKE_PAIR(BgL_arg3788z00_1500, BgL_arg3789z00_1501);
						}
					else
						{	/* Ast/app.scm 335 */
							obj_t BgL_arg3795z00_1507;

							obj_t BgL_arg3797z00_1509;

							BgL_arg3795z00_1507 =
								(((BgL_variablez00_bglt) CREF(BgL_vz00_2605))->BgL_idz00);
							BgL_arg3797z00_1509 =
								BGl_shapez00zztools_shapez00(CAR(BgL_lz00_1496));
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_2606,
								BgL_arg3795z00_1507, BGl_string3999z00zzast_appz00,
								BgL_arg3797z00_1509, BNIL);
						}
				}
		}
	}



/* loop' */
	obj_t BGl_loopz72z72zzast_appz00(BgL_varz00_bglt BgL_varz00_2612,
		obj_t BgL_argsz00_2611, BgL_valuez00_bglt BgL_instance3259z00_2610,
		BgL_variablez00_bglt BgL_vz00_2609, obj_t BgL_sitez00_2608,
		obj_t BgL_locz00_2607, obj_t BgL_keysz00_1409, obj_t BgL_valsz00_1410,
		obj_t BgL_envz00_1411, obj_t BgL_stackz00_1412)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 364 */
			if (NULLP(BgL_keysz00_1409))
				{	/* Ast/app.scm 372 */
					BgL_typez00_bglt BgL_arg3736z00_1415;

					obj_t BgL_arg3738z00_1417;

					BgL_arg3736z00_1415 =
						(((BgL_variablez00_bglt) CREF(BgL_vz00_2609))->BgL_typez00);
					{	/* Ast/app.scm 375 */
						obj_t BgL_arg3739z00_1418;

						obj_t BgL_arg3740z00_1419;

						{	/* Ast/app.scm 375 */
							long BgL_auxz00_3426;

							{
								BgL_funz00_bglt BgL_auxz00_3427;

								BgL_auxz00_3427 = (BgL_funz00_bglt) (BgL_instance3259z00_2610);
								BgL_auxz00_3426 =
									(((BgL_funz00_bglt) CREF(BgL_auxz00_3427))->BgL_arityz00);
							}
							BgL_arg3739z00_1418 =
								BGl_takez00zz__r4_pairs_and_lists_6_3z00(BgL_argsz00_2611,
								BgL_auxz00_3426);
						}
						{	/* Ast/app.scm 376 */
							obj_t BgL_l3320z00_1421;

							BgL_l3320z00_1421 = bgl_reverse_bang(BgL_envz00_1411);
							if (NULLP(BgL_l3320z00_1421))
								{	/* Ast/app.scm 376 */
									BgL_arg3740z00_1419 = BNIL;
								}
							else
								{	/* Ast/app.scm 376 */
									obj_t BgL_head3322z00_1423;

									BgL_head3322z00_1423 = MAKE_PAIR(BNIL, BNIL);
									{
										obj_t BgL_l3320z00_1425;

										obj_t BgL_tail3323z00_1426;

										BgL_l3320z00_1425 = BgL_l3320z00_1421;
										BgL_tail3323z00_1426 = BgL_head3322z00_1423;
									BgL_zc3anonymousza33743ze3z83_1427:
										if (NULLP(BgL_l3320z00_1425))
											{	/* Ast/app.scm 376 */
												BgL_arg3740z00_1419 = CDR(BgL_head3322z00_1423);
											}
										else
											{	/* Ast/app.scm 376 */
												obj_t BgL_newtail3324z00_1429;

												{	/* Ast/app.scm 376 */
													BgL_nodez00_bglt BgL_arg3746z00_1431;

													BgL_arg3746z00_1431 =
														BGl_sexpzd2ze3nodez31zzast_sexpz00(CAR
														(BgL_l3320z00_1425), BgL_stackz00_1412,
														BgL_locz00_2607, BgL_sitez00_2608);
													BgL_newtail3324z00_1429 =
														MAKE_PAIR((obj_t) (BgL_arg3746z00_1431), BNIL);
												}
												SET_CDR(BgL_tail3323z00_1426, BgL_newtail3324z00_1429);
												{
													obj_t BgL_tail3323z00_3445;

													obj_t BgL_l3320z00_3443;

													BgL_l3320z00_3443 = CDR(BgL_l3320z00_1425);
													BgL_tail3323z00_3445 = BgL_newtail3324z00_1429;
													BgL_tail3323z00_1426 = BgL_tail3323z00_3445;
													BgL_l3320z00_1425 = BgL_l3320z00_3443;
													goto BgL_zc3anonymousza33743ze3z83_1427;
												}
											}
									}
								}
						}
						BgL_arg3738z00_1417 =
							bgl_append2(BgL_arg3739z00_1418, BgL_arg3740z00_1419);
					}
					return
						(obj_t) (BGl_makezd2appzd2zzast_nodez00(BgL_locz00_2607,
							BgL_arg3736z00_1415, BUNSPEC, BINT(((long) -1)), BgL_varz00_2612,
							BgL_arg3738z00_1417));
				}
			else
				{	/* Ast/app.scm 369 */
					if (NULLP(BgL_valsz00_1410))
						{	/* Ast/app.scm 380 */
							obj_t BgL_itz00_1436;

							{	/* Ast/app.scm 380 */
								obj_t BgL_arg3759z00_1452;

								{	/* Ast/app.scm 380 */
									obj_t BgL_pairz00_2419;

									BgL_pairz00_2419 = BgL_keysz00_1409;
									BgL_arg3759z00_1452 = CAR(CAR(BgL_pairz00_2419));
								}
								BgL_itz00_1436 =
									BGl_parsezd2idzd2zzast_identz00(BgL_arg3759z00_1452,
									BgL_locz00_2607);
							}
							{	/* Ast/app.scm 380 */
								BgL_localz00_bglt BgL_varz00_1437;

								{	/* Ast/app.scm 381 */
									obj_t BgL_arg3757z00_1450;

									obj_t BgL_arg3758z00_1451;

									BgL_arg3757z00_1450 = CAR(BgL_itz00_1436);
									BgL_arg3758z00_1451 = CDR(BgL_itz00_1436);
									BgL_varz00_1437 =
										BGl_makezd2userzd2localzd2svarzd2zzast_localz00
										(BgL_arg3757z00_1450,
										(BgL_typez00_bglt) (BgL_arg3758z00_1451));
								}
								{	/* Ast/app.scm 381 */
									BgL_nodez00_bglt BgL_valz00_1438;

									{	/* Ast/app.scm 382 */
										obj_t BgL_arg3756z00_1449;

										{	/* Ast/app.scm 382 */
											obj_t BgL_pairz00_2425;

											BgL_pairz00_2425 = BgL_keysz00_1409;
											BgL_arg3756z00_1449 = CAR(CDR(CAR(BgL_pairz00_2425)));
										}
										BgL_valz00_1438 =
											BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3756z00_1449,
											BgL_stackz00_1412, BgL_locz00_2607, BgL_sitez00_2608);
									}
									{	/* Ast/app.scm 382 */
										obj_t BgL_nenvz00_1439;

										BgL_nenvz00_1439 =
											MAKE_PAIR((obj_t) (BgL_varz00_1437), BgL_envz00_1411);
										{	/* Ast/app.scm 383 */
											obj_t BgL_nstackz00_1440;

											BgL_nstackz00_1440 =
												MAKE_PAIR((obj_t) (BgL_varz00_1437), BgL_stackz00_1412);
											{	/* Ast/app.scm 384 */
												obj_t BgL_bodyz00_1441;

												BgL_bodyz00_1441 =
													BGl_loopz72z72zzast_appz00(BgL_varz00_2612,
													BgL_argsz00_2611, BgL_instance3259z00_2610,
													BgL_vz00_2609, BgL_sitez00_2608, BgL_locz00_2607,
													CDR(BgL_keysz00_1409), BNIL, BgL_nenvz00_1439,
													BgL_nstackz00_1440);
												{	/* Ast/app.scm 385 */

													{	/* Ast/app.scm 388 */
														BgL_typez00_bglt BgL_arg3749z00_1442;

														obj_t BgL_arg3751z00_1444;

														BgL_arg3749z00_1442 =
															(((BgL_variablez00_bglt) CREF(BgL_vz00_2609))->
															BgL_typez00);
														{	/* Ast/app.scm 389 */
															obj_t BgL_arg3752z00_1445;

															BgL_arg3752z00_1445 =
																MAKE_PAIR(
																(obj_t) (BgL_varz00_1437),
																(obj_t) (BgL_valz00_1438));
															{	/* Ast/app.scm 389 */
																obj_t BgL_list3753z00_1446;

																BgL_list3753z00_1446 =
																	MAKE_PAIR(BgL_arg3752z00_1445, BNIL);
																BgL_arg3751z00_1444 = BgL_list3753z00_1446;
															}
														}
														return
															(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
															(BgL_locz00_2607, BgL_arg3749z00_1442, BUNSPEC,
																BINT(((long) -1)), BgL_arg3751z00_1444,
																(BgL_nodez00_bglt) (BgL_bodyz00_1441),
																((bool_t) 1)));
						}}}}}}}}
					else
						{	/* Ast/app.scm 391 */
							bool_t BgL_testz00_3478;

							{	/* Ast/app.scm 391 */
								obj_t BgL_arg3782z00_1487;

								obj_t BgL_arg3783z00_1488;

								{	/* Ast/app.scm 391 */
									obj_t BgL_arg3784z00_1489;

									{	/* Ast/app.scm 391 */
										obj_t BgL_pairz00_2435;

										BgL_pairz00_2435 = BgL_keysz00_1409;
										BgL_arg3784z00_1489 = CAR(CAR(BgL_pairz00_2435));
									}
									BgL_arg3782z00_1487 =
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
										(BgL_arg3784z00_1489, BgL_locz00_2607);
								}
								{	/* Ast/app.scm 391 */
									obj_t BgL_pairz00_2439;

									BgL_pairz00_2439 = BgL_valsz00_1410;
									BgL_arg3783z00_1488 = CAR(CAR(BgL_pairz00_2439));
								}
								BgL_testz00_3478 = (BgL_arg3782z00_1487 == BgL_arg3783z00_1488);
							}
							if (BgL_testz00_3478)
								{	/* Ast/app.scm 392 */
									obj_t BgL_itz00_1454;

									{	/* Ast/app.scm 392 */
										obj_t BgL_arg3771z00_1470;

										{	/* Ast/app.scm 392 */
											obj_t BgL_pairz00_2443;

											BgL_pairz00_2443 = BgL_valsz00_1410;
											BgL_arg3771z00_1470 = CAR(CAR(BgL_pairz00_2443));
										}
										BgL_itz00_1454 =
											BGl_parsezd2idzd2zzast_identz00(BgL_arg3771z00_1470,
											BgL_locz00_2607);
									}
									{	/* Ast/app.scm 392 */
										BgL_localz00_bglt BgL_varz00_1455;

										{	/* Ast/app.scm 393 */
											obj_t BgL_arg3769z00_1468;

											obj_t BgL_arg3770z00_1469;

											BgL_arg3769z00_1468 = CAR(BgL_itz00_1454);
											BgL_arg3770z00_1469 = CDR(BgL_itz00_1454);
											BgL_varz00_1455 =
												BGl_makezd2userzd2localzd2svarzd2zzast_localz00
												(BgL_arg3769z00_1468,
												(BgL_typez00_bglt) (BgL_arg3770z00_1469));
										}
										{	/* Ast/app.scm 393 */
											BgL_nodez00_bglt BgL_valz00_1456;

											{	/* Ast/app.scm 394 */
												obj_t BgL_arg3768z00_1467;

												{	/* Ast/app.scm 394 */
													obj_t BgL_pairz00_2449;

													BgL_pairz00_2449 = BgL_valsz00_1410;
													BgL_arg3768z00_1467 = CAR(CDR(CAR(BgL_pairz00_2449)));
												}
												BgL_valz00_1456 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg3768z00_1467, BgL_stackz00_1412,
													BgL_locz00_2607, BgL_sitez00_2608);
											}
											{	/* Ast/app.scm 394 */
												obj_t BgL_nenvz00_1457;

												BgL_nenvz00_1457 =
													MAKE_PAIR((obj_t) (BgL_varz00_1455), BgL_envz00_1411);
												{	/* Ast/app.scm 395 */
													obj_t BgL_nstackz00_1458;

													BgL_nstackz00_1458 =
														MAKE_PAIR(
														(obj_t) (BgL_varz00_1455), BgL_stackz00_1412);
													{	/* Ast/app.scm 396 */
														obj_t BgL_bodyz00_1459;

														BgL_bodyz00_1459 =
															BGl_loopz72z72zzast_appz00(BgL_varz00_2612,
															BgL_argsz00_2611, BgL_instance3259z00_2610,
															BgL_vz00_2609, BgL_sitez00_2608, BgL_locz00_2607,
															CDR(BgL_keysz00_1409), CDR(BgL_valsz00_1410),
															BgL_nenvz00_1457, BgL_nstackz00_1458);
														{	/* Ast/app.scm 397 */

															{	/* Ast/app.scm 400 */
																BgL_typez00_bglt BgL_arg3761z00_1460;

																obj_t BgL_arg3763z00_1462;

																BgL_arg3761z00_1460 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_vz00_2609))->BgL_typez00);
																{	/* Ast/app.scm 401 */
																	obj_t BgL_arg3764z00_1463;

																	BgL_arg3764z00_1463 =
																		MAKE_PAIR(
																		(obj_t) (BgL_varz00_1455),
																		(obj_t) (BgL_valz00_1456));
																	{	/* Ast/app.scm 401 */
																		obj_t BgL_list3765z00_1464;

																		BgL_list3765z00_1464 =
																			MAKE_PAIR(BgL_arg3764z00_1463, BNIL);
																		BgL_arg3763z00_1462 = BgL_list3765z00_1464;
																	}
																}
																return
																	(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
																	(BgL_locz00_2607, BgL_arg3761z00_1460,
																		BUNSPEC, BINT(((long) -1)),
																		BgL_arg3763z00_1462,
																		(BgL_nodez00_bglt) (BgL_bodyz00_1459),
																		((bool_t) 1)));
								}}}}}}}}
							else
								{	/* Ast/app.scm 404 */
									obj_t BgL_itz00_1471;

									{	/* Ast/app.scm 404 */
										obj_t BgL_arg3781z00_1486;

										{	/* Ast/app.scm 404 */
											obj_t BgL_pairz00_2460;

											BgL_pairz00_2460 = BgL_keysz00_1409;
											BgL_arg3781z00_1486 = CAR(CAR(BgL_pairz00_2460));
										}
										BgL_itz00_1471 =
											BGl_parsezd2idzd2zzast_identz00(BgL_arg3781z00_1486,
											BgL_locz00_2607);
									}
									{	/* Ast/app.scm 404 */
										BgL_localz00_bglt BgL_varz00_1472;

										{	/* Ast/app.scm 405 */
											obj_t BgL_arg3779z00_1484;

											obj_t BgL_arg3780z00_1485;

											BgL_arg3779z00_1484 = CAR(BgL_itz00_1471);
											BgL_arg3780z00_1485 = CDR(BgL_itz00_1471);
											BgL_varz00_1472 =
												BGl_makezd2userzd2localzd2svarzd2zzast_localz00
												(BgL_arg3779z00_1484,
												(BgL_typez00_bglt) (BgL_arg3780z00_1485));
										}
										{	/* Ast/app.scm 405 */
											BgL_nodez00_bglt BgL_valz00_1473;

											{	/* Ast/app.scm 406 */
												obj_t BgL_arg3778z00_1483;

												{	/* Ast/app.scm 406 */
													obj_t BgL_pairz00_2466;

													BgL_pairz00_2466 = BgL_keysz00_1409;
													BgL_arg3778z00_1483 = CAR(CDR(CAR(BgL_pairz00_2466)));
												}
												BgL_valz00_1473 =
													BGl_sexpzd2ze3nodez31zzast_sexpz00
													(BgL_arg3778z00_1483, BgL_stackz00_1412,
													BgL_locz00_2607, BgL_sitez00_2608);
											}
											{	/* Ast/app.scm 406 */
												obj_t BgL_nenvz00_1474;

												BgL_nenvz00_1474 =
													MAKE_PAIR((obj_t) (BgL_varz00_1472), BgL_envz00_1411);
												{	/* Ast/app.scm 407 */
													obj_t BgL_nstackz00_1475;

													BgL_nstackz00_1475 =
														MAKE_PAIR(
														(obj_t) (BgL_varz00_1472), BgL_stackz00_1412);
													{	/* Ast/app.scm 408 */
														obj_t BgL_bodyz00_1476;

														BgL_bodyz00_1476 =
															BGl_loopz72z72zzast_appz00(BgL_varz00_2612,
															BgL_argsz00_2611, BgL_instance3259z00_2610,
															BgL_vz00_2609, BgL_sitez00_2608, BgL_locz00_2607,
															CDR(BgL_keysz00_1409), BgL_valsz00_1410,
															BgL_nenvz00_1474, BgL_nstackz00_1475);
														{	/* Ast/app.scm 409 */

															{	/* Ast/app.scm 412 */
																BgL_typez00_bglt BgL_arg3772z00_1477;

																obj_t BgL_arg3774z00_1479;

																BgL_arg3772z00_1477 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_vz00_2609))->BgL_typez00);
																{	/* Ast/app.scm 413 */
																	obj_t BgL_arg3775z00_1480;

																	BgL_arg3775z00_1480 =
																		MAKE_PAIR(
																		(obj_t) (BgL_varz00_1472),
																		(obj_t) (BgL_valz00_1473));
																	{	/* Ast/app.scm 413 */
																		obj_t BgL_list3776z00_1481;

																		BgL_list3776z00_1481 =
																			MAKE_PAIR(BgL_arg3775z00_1480, BNIL);
																		BgL_arg3774z00_1479 = BgL_list3776z00_1481;
																	}
																}
																return
																	(obj_t) (BGl_makezd2letzd2varz00zzast_nodez00
																	(BgL_locz00_2607, BgL_arg3772z00_1477,
																		BUNSPEC, BINT(((long) -1)),
																		BgL_arg3774z00_1479,
																		(BgL_nodez00_bglt) (BgL_bodyz00_1476),
																		((bool_t) 1)));
		}}}}}}}}}}}
	}



/* <anonymous:3668> */
	obj_t BGl_zc3anonymousza33668ze3z83zzast_appz00(obj_t BgL_envz00_2602,
		obj_t BgL_vz00_2604)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 431 */
			{	/* Ast/app.scm 432 */
				obj_t BgL_fkeysz00_2603;

				BgL_fkeysz00_2603 = PROCEDURE_REF(BgL_envz00_2602, (int) (((long) 0)));
				{
					obj_t BgL_vz00_1308;

					{	/* Ast/app.scm 432 */
						bool_t BgL_auxz00_3540;

						BgL_vz00_1308 = BgL_vz00_2604;
						if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
									(BgL_vz00_1308), BgL_fkeysz00_2603)))
							{	/* Ast/app.scm 432 */
								BgL_auxz00_3540 = ((bool_t) 0);
							}
						else
							{	/* Ast/app.scm 432 */
								BgL_auxz00_3540 = ((bool_t) 1);
							}
						return BBOOL(BgL_auxz00_3540);
					}
				}
			}
		}
	}



/* make-fx-app-node */
	obj_t BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(obj_t BgL_locz00_29,
		BgL_varz00_bglt BgL_varz00_30, obj_t BgL_argsz00_31)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 450 */
			{	/* Ast/app.scm 451 */
				BgL_variablez00_bglt BgL_vz00_1515;

				BgL_vz00_1515 =
					(((BgL_varz00_bglt) CREF(BgL_varz00_30))->BgL_variablez00);
				{	/* Ast/app.scm 453 */
					bool_t BgL_testz00_3547;

					{	/* Ast/app.scm 453 */
						bool_t BgL_testz00_3548;

						{	/* Ast/app.scm 453 */
							BgL_valuez00_bglt BgL_arg3825z00_1545;

							BgL_arg3825z00_1545 =
								(((BgL_variablez00_bglt) CREF(BgL_vz00_1515))->BgL_valuez00);
							{	/* Ast/app.scm 453 */
								obj_t BgL_obj2019z00_2478;

								BgL_obj2019z00_2478 = (obj_t) (BgL_arg3825z00_1545);
								BgL_testz00_3548 =
									BGl_iszd2azf3z21zz__objectz00(BgL_obj2019z00_2478,
									BGl_cfunz00zzast_varz00);
							}
						}
						if (BgL_testz00_3548)
							{	/* Ast/app.scm 453 */
								BgL_testz00_3547 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
										(((BgL_variablez00_bglt) CREF(BgL_vz00_1515))->BgL_idz00),
										CNST_TABLE_REF(((long) 9))));
							}
						else
							{	/* Ast/app.scm 453 */
								BgL_testz00_3547 = ((bool_t) 0);
							}
					}
					if (BgL_testz00_3547)
						{	/* Ast/app.scm 453 */
							return
								BGl_makezd2specialzd2appzd2nodezd2zzast_appz00(BgL_locz00_29,
								BgL_varz00_30, BgL_argsz00_31);
						}
					else
						{	/* Ast/app.scm 457 */
							bool_t BgL_testz00_3557;

							{	/* Ast/app.scm 457 */
								BgL_valuez00_bglt BgL_arg3823z00_1543;

								BgL_arg3823z00_1543 =
									(((BgL_variablez00_bglt) CREF(BgL_vz00_1515))->BgL_valuez00);
								{	/* Ast/app.scm 457 */
									obj_t BgL_obj1856z00_2484;

									BgL_obj1856z00_2484 = (obj_t) (BgL_arg3823z00_1543);
									BgL_testz00_3557 =
										BGl_iszd2azf3z21zz__objectz00(BgL_obj1856z00_2484,
										BGl_funz00zzast_varz00);
								}
							}
							if (BgL_testz00_3557)
								{	/* Ast/app.scm 459 */
									BgL_appz00_bglt BgL_callz00_1518;

									{	/* Ast/app.scm 461 */
										BgL_typez00_bglt BgL_arg3810z00_1526;

										BgL_varz00_bglt BgL_arg3812z00_1528;

										BgL_arg3810z00_1526 =
											(((BgL_variablez00_bglt) CREF(BgL_vz00_1515))->
											BgL_typez00);
										{	/* Ast/app.scm 462 */
											bool_t BgL_testz00_3562;

											{	/* Ast/app.scm 462 */
												obj_t BgL_obj2190z00_2486;

												BgL_obj2190z00_2486 = (obj_t) (BgL_varz00_30);
												BgL_testz00_3562 =
													BGl_iszd2azf3z21zz__objectz00(BgL_obj2190z00_2486,
													BGl_closurez00zzast_nodez00);
											}
											if (BgL_testz00_3562)
												{	/* Ast/app.scm 463 */
													BgL_varz00_bglt BgL_new3270z00_1531;

													{	/* Ast/app.scm 463 */
														obj_t BgL_arg3814z00_1532;

														BgL_typez00_bglt BgL_arg3815z00_1533;

														BgL_variablez00_bglt BgL_arg3816z00_1534;

														{
															BgL_nodez00_bglt BgL_auxz00_3565;

															BgL_auxz00_3565 =
																(BgL_nodez00_bglt) (BgL_varz00_30);
															BgL_arg3814z00_1532 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_3565))->
																BgL_locz00);
														}
														{
															BgL_nodez00_bglt BgL_auxz00_3568;

															BgL_auxz00_3568 =
																(BgL_nodez00_bglt) (BgL_varz00_30);
															BgL_arg3815z00_1533 =
																(((BgL_nodez00_bglt) CREF(BgL_auxz00_3568))->
																BgL_typez00);
														}
														BgL_arg3816z00_1534 =
															(((BgL_varz00_bglt) CREF(BgL_varz00_30))->
															BgL_variablez00);
														BgL_new3270z00_1531 =
															BGl_makezd2varzd2zzast_nodez00
															(BgL_arg3814z00_1532, BgL_arg3815z00_1533,
															BgL_arg3816z00_1534);
													}
													{	/* Ast/app.scm 463 */

														BgL_arg3812z00_1528 = BgL_new3270z00_1531;
													}
												}
											else
												{	/* Ast/app.scm 462 */
													BgL_arg3812z00_1528 = BgL_varz00_30;
												}
										}
										BgL_callz00_1518 =
											BGl_makezd2appzd2zzast_nodez00(BgL_locz00_29,
											BgL_arg3810z00_1526, BUNSPEC, BINT(((long) -1)),
											BgL_arg3812z00_1528, BgL_argsz00_31);
									}
									{	/* Ast/app.scm 466 */
										bool_t BgL_testz00_3575;

										{	/* Ast/app.scm 466 */
											BgL_typez00_bglt BgL_arg3809z00_1525;

											BgL_arg3809z00_1525 =
												(((BgL_variablez00_bglt) CREF(BgL_vz00_1515))->
												BgL_typez00);
											BgL_testz00_3575 =
												((obj_t) (BgL_arg3809z00_1525) ==
												BGl_za2voidza2z00zztype_cachez00);
										}
										if (BgL_testz00_3575)
											{	/* Ast/app.scm 468 */
												BgL_atomz00_bglt BgL_unspecz00_1520;

												BgL_unspecz00_1520 =
													BGl_makezd2atomzd2zzast_nodez00(BFALSE,
													(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00),
													BUNSPEC);
												{	/* Ast/app.scm 471 */
													obj_t BgL_arg3806z00_1522;

													{	/* Ast/app.scm 473 */
														obj_t BgL_list3807z00_1523;

														{	/* Ast/app.scm 473 */
															obj_t BgL_arg3808z00_1524;

															BgL_arg3808z00_1524 =
																MAKE_PAIR((obj_t) (BgL_unspecz00_1520), BNIL);
															BgL_list3807z00_1523 =
																MAKE_PAIR(
																(obj_t) (BgL_callz00_1518),
																BgL_arg3808z00_1524);
														}
														BgL_arg3806z00_1522 = BgL_list3807z00_1523;
													}
													return
														(obj_t) (BGl_makezd2sequencezd2zzast_nodez00(BFALSE,
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00), BUNSPEC,
															BINT(((long) -1)), BgL_arg3806z00_1522));
											}}
										else
											{	/* Ast/app.scm 466 */
												return (obj_t) (BgL_callz00_1518);
											}
									}
								}
							else
								{	/* Ast/app.scm 481 */
									obj_t BgL_arg3817z00_1535;

									obj_t BgL_arg3818z00_1536;

									{	/* Ast/app.scm 481 */
										BgL_varz00_bglt BgL_arg3819z00_1537;

										{	/* Ast/app.scm 481 */
											BgL_varz00_bglt BgL_new3275z00_1539;

											{	/* Ast/app.scm 481 */
												obj_t BgL_arg3820z00_1540;

												BgL_typez00_bglt BgL_arg3821z00_1541;

												BgL_variablez00_bglt BgL_arg3822z00_1542;

												{
													BgL_nodez00_bglt BgL_auxz00_3590;

													BgL_auxz00_3590 = (BgL_nodez00_bglt) (BgL_varz00_30);
													BgL_arg3820z00_1540 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3590))->
														BgL_locz00);
												}
												{
													BgL_nodez00_bglt BgL_auxz00_3593;

													BgL_auxz00_3593 = (BgL_nodez00_bglt) (BgL_varz00_30);
													BgL_arg3821z00_1541 =
														(((BgL_nodez00_bglt) CREF(BgL_auxz00_3593))->
														BgL_typez00);
												}
												BgL_arg3822z00_1542 =
													(((BgL_varz00_bglt) CREF(BgL_varz00_30))->
													BgL_variablez00);
												BgL_new3275z00_1539 =
													BGl_makezd2varzd2zzast_nodez00(BgL_arg3820z00_1540,
													BgL_arg3821z00_1541, BgL_arg3822z00_1542);
											}
											{	/* Ast/app.scm 481 */

												BgL_arg3819z00_1537 = BgL_new3275z00_1539;
											}
										}
										BgL_arg3817z00_1535 =
											MAKE_PAIR((obj_t) (BgL_arg3819z00_1537), BgL_argsz00_31);
									}
									BgL_arg3818z00_1536 = CNST_TABLE_REF(((long) 10));
									return
										(obj_t) (BGl_makezd2funcallzd2zzast_nodez00(BgL_locz00_29,
											(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00),
											(BgL_nodez00_bglt) (BgL_varz00_30), BgL_arg3817z00_1535,
											BgL_arg3818z00_1536));
								}
						}
				}
			}
		}
	}



/* make-va-app-node */
	BgL_nodez00_bglt BGl_makezd2vazd2appzd2nodezd2zzast_appz00(long
		BgL_arityz00_32, obj_t BgL_stackz00_33, obj_t BgL_locz00_34,
		BgL_varz00_bglt BgL_varz00_35, obj_t BgL_argsz00_36)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 486 */
			{
				obj_t BgL_oldzd2argszd2_1549;

				long BgL_arityz00_1550;

				obj_t BgL_fzd2argszd2_1551;

				BgL_oldzd2argszd2_1549 = BgL_argsz00_36;
				BgL_arityz00_1550 = BgL_arityz00_32;
				BgL_fzd2argszd2_1551 = BNIL;
			BgL_zc3anonymousza33826ze3z83_1552:
				if ((BgL_arityz00_1550 == ((long) -1)))
					{	/* Ast/app.scm 495 */
						obj_t BgL_lzd2argzd2_1554;

						BgL_lzd2argzd2_1554 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 11))));
						{	/* Ast/app.scm 495 */
							obj_t BgL_lzd2expzd2_1555;

							{	/* Ast/app.scm 496 */
								obj_t BgL_arg3830z00_1561;

								obj_t BgL_arg3831z00_1562;

								BgL_arg3830z00_1561 = BGl_letzd2symzd2zzast_letz00();
								{	/* Ast/app.scm 496 */
									obj_t BgL_arg3832z00_1563;

									{	/* Ast/app.scm 496 */
										obj_t BgL_arg3836z00_1567;

										{	/* Ast/app.scm 496 */
											obj_t BgL_arg3838z00_1569;

											{	/* Ast/app.scm 496 */
												obj_t BgL_arg3839z00_1570;

												BgL_arg3839z00_1570 =
													BGl_makezd2argszd2listz00zzast_appz00
													(BgL_oldzd2argszd2_1549);
												{	/* Ast/app.scm 496 */
													obj_t BgL_list3841z00_1572;

													BgL_list3841z00_1572 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg3838z00_1569 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg3839z00_1570, BgL_list3841z00_1572);
											}}
											BgL_arg3836z00_1567 =
												MAKE_PAIR(BgL_lzd2argzd2_1554, BgL_arg3838z00_1569);
										}
										BgL_arg3832z00_1563 = MAKE_PAIR(BgL_arg3836z00_1567, BNIL);
									}
									{	/* Ast/app.scm 496 */
										obj_t BgL_list3834z00_1565;

										{	/* Ast/app.scm 496 */
											obj_t BgL_arg3835z00_1566;

											BgL_arg3835z00_1566 = MAKE_PAIR(BNIL, BNIL);
											BgL_list3834z00_1565 =
												MAKE_PAIR(BgL_lzd2argzd2_1554, BgL_arg3835z00_1566);
										}
										BgL_arg3831z00_1562 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg3832z00_1563, BgL_list3834z00_1565);
								}}
								BgL_lzd2expzd2_1555 =
									MAKE_PAIR(BgL_arg3830z00_1561, BgL_arg3831z00_1562);
							}
							{	/* Ast/app.scm 496 */
								BgL_nodez00_bglt BgL_lzd2nodezd2_1556;

								BgL_lzd2nodezd2_1556 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_lzd2expzd2_1555,
									BgL_stackz00_33, BgL_locz00_34, CNST_TABLE_REF(((long) 4)));
								{	/* Ast/app.scm 498 */
									BgL_nodez00_bglt BgL_lzd2varzd2_1557;

									{
										BgL_letzd2varzd2_bglt BgL_auxz00_3622;

										BgL_auxz00_3622 =
											(BgL_letzd2varzd2_bglt) (BgL_lzd2nodezd2_1556);
										BgL_lzd2varzd2_1557 =
											(((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_3622))->
											BgL_bodyz00);
									}
									{	/* Ast/app.scm 499 */
										obj_t BgL_appz00_1558;

										{	/* Ast/app.scm 502 */
											obj_t BgL_arg3828z00_1559;

											{	/* Ast/app.scm 502 */
												obj_t BgL_arg3829z00_1560;

												BgL_arg3829z00_1560 =
													MAKE_PAIR(
													(obj_t) (BgL_lzd2varzd2_1557), BgL_fzd2argszd2_1551);
												BgL_arg3828z00_1559 =
													bgl_reverse_bang(BgL_arg3829z00_1560);
											}
											BgL_appz00_1558 =
												BGl_makezd2fxzd2appzd2nodezd2zzast_appz00(BgL_locz00_34,
												BgL_varz00_35, BgL_arg3828z00_1559);
										}
										{	/* Ast/app.scm 500 */

											{
												BgL_nodez00_bglt BgL_auxz00_3631;

												BgL_letzd2varzd2_bglt BgL_auxz00_3629;

												BgL_auxz00_3631 = (BgL_nodez00_bglt) (BgL_appz00_1558);
												BgL_auxz00_3629 =
													(BgL_letzd2varzd2_bglt) (BgL_lzd2nodezd2_1556);
												((((BgL_letzd2varzd2_bglt) CREF(BgL_auxz00_3629))->
														BgL_bodyz00) =
													((BgL_nodez00_bglt) BgL_auxz00_3631), BUNSPEC);
											}
											return
												BGl_cleanzd2userzd2nodez12z12zzast_appz00
												(BgL_lzd2nodezd2_1556);
										}
									}
								}
							}
						}
					}
				else
					{	/* Ast/app.scm 505 */
						obj_t BgL_arg3843z00_1574;

						long BgL_arg3844z00_1575;

						obj_t BgL_arg3845z00_1576;

						BgL_arg3843z00_1574 = CDR(BgL_oldzd2argszd2_1549);
						BgL_arg3844z00_1575 = (BgL_arityz00_1550 + ((long) 1));
						{	/* Ast/app.scm 507 */
							BgL_nodez00_bglt BgL_arg3846z00_1577;

							{	/* Ast/app.scm 507 */
								obj_t BgL_arg3847z00_1578;

								obj_t BgL_arg3848z00_1579;

								BgL_arg3847z00_1578 = CAR(BgL_oldzd2argszd2_1549);
								BgL_arg3848z00_1579 = CNST_TABLE_REF(((long) 4));
								BgL_arg3846z00_1577 =
									BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg3847z00_1578,
									BgL_stackz00_33, BgL_locz00_34, BgL_arg3848z00_1579);
							}
							BgL_arg3845z00_1576 =
								MAKE_PAIR((obj_t) (BgL_arg3846z00_1577), BgL_fzd2argszd2_1551);
						}
						{
							obj_t BgL_fzd2argszd2_3644;

							long BgL_arityz00_3643;

							obj_t BgL_oldzd2argszd2_3642;

							BgL_oldzd2argszd2_3642 = BgL_arg3843z00_1574;
							BgL_arityz00_3643 = BgL_arg3844z00_1575;
							BgL_fzd2argszd2_3644 = BgL_arg3845z00_1576;
							BgL_fzd2argszd2_1551 = BgL_fzd2argszd2_3644;
							BgL_arityz00_1550 = BgL_arityz00_3643;
							BgL_oldzd2argszd2_1549 = BgL_oldzd2argszd2_3642;
							goto BgL_zc3anonymousza33826ze3z83_1552;
						}
					}
			}
		}
	}



/* make-args-list */
	obj_t BGl_makezd2argszd2listz00zzast_appz00(obj_t BgL_argsz00_1581)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 490 */
			if (NULLP(BgL_argsz00_1581))
				{	/* Ast/app.scm 488 */
					return CNST_TABLE_REF(((long) 3));
				}
			else
				{	/* Ast/app.scm 490 */
					obj_t BgL_arg3851z00_1584;

					obj_t BgL_arg3852z00_1585;

					{	/* Ast/app.scm 490 */
						obj_t BgL_arg3853z00_1586;

						obj_t BgL_arg3854z00_1587;

						BgL_arg3853z00_1586 = CNST_TABLE_REF(((long) 1));
						{	/* Ast/app.scm 490 */
							obj_t BgL_list3855z00_1588;

							{	/* Ast/app.scm 490 */
								obj_t BgL_arg3856z00_1589;

								obj_t BgL_arg3857z00_1590;

								BgL_arg3856z00_1589 = CNST_TABLE_REF(((long) 12));
								BgL_arg3857z00_1590 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3855z00_1588 =
									MAKE_PAIR(BgL_arg3856z00_1589, BgL_arg3857z00_1590);
							}
							BgL_arg3854z00_1587 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
										(long) 13)), BgL_list3855z00_1588);
						}
						BgL_arg3851z00_1584 =
							MAKE_PAIR(BgL_arg3853z00_1586, BgL_arg3854z00_1587);
					}
					{	/* Ast/app.scm 490 */
						obj_t BgL_arg3858z00_1591;

						obj_t BgL_arg3859z00_1592;

						BgL_arg3858z00_1591 = CAR(BgL_argsz00_1581);
						BgL_arg3859z00_1592 =
							BGl_makezd2argszd2listz00zzast_appz00(CDR(BgL_argsz00_1581));
						{	/* Ast/app.scm 490 */
							obj_t BgL_list3861z00_1594;

							{	/* Ast/app.scm 490 */
								obj_t BgL_arg3862z00_1595;

								BgL_arg3862z00_1595 = MAKE_PAIR(BNIL, BNIL);
								BgL_list3861z00_1594 =
									MAKE_PAIR(BgL_arg3859z00_1592, BgL_arg3862z00_1595);
							}
							BgL_arg3852z00_1585 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg3858z00_1591,
								BgL_list3861z00_1594);
					}}
					return MAKE_PAIR(BgL_arg3851z00_1584, BgL_arg3852z00_1585);
				}
		}
	}



/* make-special-app-node */
	obj_t BGl_makezd2specialzd2appzd2nodezd2zzast_appz00(obj_t BgL_locz00_38,
		BgL_varz00_bglt BgL_varz00_39, obj_t BgL_argsz00_40)
	{
		AN_OBJECT;
		{	/* Ast/app.scm 527 */
			{	/* Ast/app.scm 528 */
				BgL_variablez00_bglt BgL_variablez00_1600;

				BgL_variablez00_1600 =
					(((BgL_varz00_bglt) CREF(BgL_varz00_39))->BgL_variablez00);
				{	/* Ast/app.scm 528 */
					obj_t BgL_gnamez00_1601;

					BgL_gnamez00_1601 =
						(((BgL_variablez00_bglt) CREF(BgL_variablez00_1600))->BgL_namez00);
					{	/* Ast/app.scm 529 */

						{	/* Ast/app.scm 530 */
							obj_t BgL_casezd2valuezd2_1602;

							BgL_casezd2valuezd2_1602 =
								(((BgL_variablez00_bglt) CREF(BgL_variablez00_1600))->
								BgL_idz00);
							if ((BgL_casezd2valuezd2_1602 == CNST_TABLE_REF(((long) 14))))
								{	/* Ast/app.scm 530 */
									{	/* Ast/app.scm 534 */
										obj_t BgL_arg3867z00_1604;

										BgL_arg3867z00_1604 = CAR(BgL_argsz00_40);
										{
											BgL_typez00_bglt BgL_auxz00_3671;

											BgL_nodez00_bglt BgL_auxz00_3669;

											BgL_auxz00_3671 =
												(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00);
											BgL_auxz00_3669 =
												(BgL_nodez00_bglt) (BgL_arg3867z00_1604);
											((((BgL_nodez00_bglt) CREF(BgL_auxz00_3669))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_3671), BUNSPEC);
									}}
									{	/* Ast/app.scm 537 */
										BgL_typez00_bglt BgL_arg3868z00_1605;

										BgL_arg3868z00_1605 =
											(((BgL_variablez00_bglt) CREF(BgL_variablez00_1600))->
											BgL_typez00);
										return (obj_t) (BGl_makezd2appzd2zzast_nodez00
											(BgL_locz00_38, BgL_arg3868z00_1605, BUNSPEC,
												BINT(((long) -1)), BgL_varz00_39, BgL_argsz00_40));
								}}
							else
								{	/* Ast/app.scm 530 */
									if ((BgL_casezd2valuezd2_1602 == CNST_TABLE_REF(((long) 15))))
										{	/* Ast/app.scm 530 */
											{	/* Ast/app.scm 543 */
												obj_t BgL_arg3871z00_1608;

												BgL_arg3871z00_1608 = CAR(BgL_argsz00_40);
												{
													BgL_typez00_bglt BgL_auxz00_3684;

													BgL_nodez00_bglt BgL_auxz00_3682;

													BgL_auxz00_3684 =
														(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00);
													BgL_auxz00_3682 =
														(BgL_nodez00_bglt) (BgL_arg3871z00_1608);
													((((BgL_nodez00_bglt) CREF(BgL_auxz00_3682))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_3684), BUNSPEC);
											}}
											{	/* Ast/app.scm 544 */
												obj_t BgL_arg3872z00_1609;

												{	/* Ast/app.scm 544 */
													obj_t BgL_pairz00_2525;

													BgL_pairz00_2525 = BgL_argsz00_40;
													BgL_arg3872z00_1609 = CAR(CDR(BgL_pairz00_2525));
												}
												{
													BgL_typez00_bglt BgL_auxz00_3691;

													BgL_nodez00_bglt BgL_auxz00_3689;

													BgL_auxz00_3691 =
														(BgL_typez00_bglt) (BGl_za2_za2z00zztype_cachez00);
													BgL_auxz00_3689 =
														(BgL_nodez00_bglt) (BgL_arg3872z00_1609);
													((((BgL_nodez00_bglt) CREF(BgL_auxz00_3689))->
															BgL_typez00) =
														((BgL_typez00_bglt) BgL_auxz00_3691), BUNSPEC);
											}}
											{	/* Ast/app.scm 547 */
												BgL_typez00_bglt BgL_arg3873z00_1610;

												BgL_arg3873z00_1610 =
													(((BgL_variablez00_bglt) CREF(BgL_variablez00_1600))->
													BgL_typez00);
												return (obj_t) (BGl_makezd2appzd2zzast_nodez00
													(BgL_locz00_38, BgL_arg3873z00_1610, BUNSPEC,
														BINT(((long) -1)), BgL_varz00_39, BgL_argsz00_40));
										}}
									else
										{	/* Ast/app.scm 530 */
											if (
												(BgL_casezd2valuezd2_1602 ==
													CNST_TABLE_REF(((long) 16))))
												{	/* Ast/app.scm 553 */
													BgL_typez00_bglt BgL_arg3876z00_1613;

													obj_t BgL_arg3878z00_1615;

													obj_t BgL_arg3879z00_1616;

													BgL_arg3876z00_1613 =
														(((BgL_variablez00_bglt)
															CREF(BgL_variablez00_1600))->BgL_typez00);
													BgL_arg3878z00_1615 =
														string_append(BgL_gnamez00_1601,
														BGl_string4000z00zzast_appz00);
													{	/* Ast/app.scm 556 */
														obj_t BgL_pairz00_2537;

														{	/* Ast/app.scm 556 */
															BgL_cfunz00_bglt BgL_obj1975z00_2536;

															BgL_obj1975z00_2536 =
																(BgL_cfunz00_bglt) (
																(((BgL_variablez00_bglt)
																		CREF(BgL_variablez00_1600))->BgL_valuez00));
															BgL_pairz00_2537 =
																(((BgL_cfunz00_bglt)
																	CREF(BgL_obj1975z00_2536))->
																BgL_argszd2typezd2);
														}
														BgL_arg3879z00_1616 = CAR(BgL_pairz00_2537);
													}
													return
														(obj_t) (BGl_makezd2vlengthzd2zzast_nodez00
														(BgL_locz00_38, BgL_arg3876z00_1613, BUNSPEC,
															BINT(((long) -1)), BgL_argsz00_40, BUNSPEC,
															BgL_arg3878z00_1615,
															(BgL_typez00_bglt) (BgL_arg3879z00_1616)));
												}
											else
												{	/* Ast/app.scm 530 */
													bool_t BgL_testz00_3711;

													{	/* Ast/app.scm 530 */
														bool_t BgL__ortest_3280z00_1667;

														BgL__ortest_3280z00_1667 =
															(BgL_casezd2valuezd2_1602 ==
															CNST_TABLE_REF(((long) 17)));
														if (BgL__ortest_3280z00_1667)
															{	/* Ast/app.scm 530 */
																BgL_testz00_3711 = BgL__ortest_3280z00_1667;
															}
														else
															{	/* Ast/app.scm 530 */
																BgL_testz00_3711 =
																	(BgL_casezd2valuezd2_1602 ==
																	CNST_TABLE_REF(((long) 18)));
													}}
													if (BgL_testz00_3711)
														{	/* Ast/app.scm 560 */
															BgL_typez00_bglt BgL_arg3883z00_1620;

															obj_t BgL_arg3885z00_1622;

															BgL_typez00_bglt BgL_arg3886z00_1623;

															obj_t BgL_arg3887z00_1624;

															obj_t BgL_arg3888z00_1625;

															bool_t BgL_arg3889z00_1626;

															BgL_arg3883z00_1620 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_variablez00_1600))->BgL_typez00);
															BgL_arg3885z00_1622 =
																string_append(BgL_gnamez00_1601,
																BGl_string4001z00zzast_appz00);
															BgL_arg3886z00_1623 =
																(((BgL_variablez00_bglt)
																	CREF(BgL_variablez00_1600))->BgL_typez00);
															{	/* Ast/app.scm 566 */
																obj_t BgL_pairz00_2542;

																{	/* Ast/app.scm 566 */
																	BgL_cfunz00_bglt BgL_obj1975z00_2541;

																	BgL_obj1975z00_2541 =
																		(BgL_cfunz00_bglt) (
																		(((BgL_variablez00_bglt)
																				CREF(BgL_variablez00_1600))->
																			BgL_valuez00));
																	BgL_pairz00_2542 =
																		(((BgL_cfunz00_bglt)
																			CREF(BgL_obj1975z00_2541))->
																		BgL_argszd2typezd2);
																}
																BgL_arg3887z00_1624 =
																	CAR(CDR(BgL_pairz00_2542));
															}
															{	/* Ast/app.scm 564 */
																obj_t BgL_pairz00_2548;

																{	/* Ast/app.scm 564 */
																	BgL_cfunz00_bglt BgL_obj1975z00_2547;

																	BgL_obj1975z00_2547 =
																		(BgL_cfunz00_bglt) (
																		(((BgL_variablez00_bglt)
																				CREF(BgL_variablez00_1600))->
																			BgL_valuez00));
																	BgL_pairz00_2548 =
																		(((BgL_cfunz00_bglt)
																			CREF(BgL_obj1975z00_2547))->
																		BgL_argszd2typezd2);
																}
																BgL_arg3888z00_1625 = CAR(BgL_pairz00_2548);
															}
															BgL_arg3889z00_1626 =
																(
																(((BgL_variablez00_bglt)
																		CREF(BgL_variablez00_1600))->BgL_idz00) ==
																CNST_TABLE_REF(((long) 18)));
															return (obj_t) (BGl_makezd2vrefzd2zzast_nodez00
																(BgL_locz00_38, BgL_arg3883z00_1620, BUNSPEC,
																	BINT(((long) -1)), BgL_argsz00_40, BUNSPEC,
																	BgL_arg3885z00_1622, BgL_arg3886z00_1623,
																	(BgL_typez00_bglt) (BgL_arg3887z00_1624),
																	(BgL_typez00_bglt) (BgL_arg3888z00_1625),
																	BgL_arg3889z00_1626));
														}
													else
														{	/* Ast/app.scm 530 */
															bool_t BgL_testz00_3737;

															{	/* Ast/app.scm 530 */
																bool_t BgL__ortest_3282z00_1666;

																BgL__ortest_3282z00_1666 =
																	(BgL_casezd2valuezd2_1602 ==
																	CNST_TABLE_REF(((long) 19)));
																if (BgL__ortest_3282z00_1666)
																	{	/* Ast/app.scm 530 */
																		BgL_testz00_3737 = BgL__ortest_3282z00_1666;
																	}
																else
																	{	/* Ast/app.scm 530 */
																		BgL_testz00_3737 =
																			(BgL_casezd2valuezd2_1602 ==
																			CNST_TABLE_REF(((long) 20)));
															}}
															if (BgL_testz00_3737)
																{	/* Ast/app.scm 530 */
																	{	/* Ast/app.scm 570 */
																		obj_t BgL_arg3897z00_1634;

																		{	/* Ast/app.scm 570 */
																			obj_t BgL_pairz00_2550;

																			BgL_pairz00_2550 = BgL_argsz00_40;
																			BgL_arg3897z00_1634 =
																				CAR(CDR(CDR(BgL_pairz00_2550)));
																		}
																		{
																			BgL_typez00_bglt BgL_auxz00_3748;

																			BgL_nodez00_bglt BgL_auxz00_3746;

																			BgL_auxz00_3748 =
																				(BgL_typez00_bglt)
																				(BGl_za2_za2z00zztype_cachez00);
																			BgL_auxz00_3746 =
																				(BgL_nodez00_bglt)
																				(BgL_arg3897z00_1634);
																			((((BgL_nodez00_bglt)
																						CREF(BgL_auxz00_3746))->
																					BgL_typez00) =
																				((BgL_typez00_bglt) BgL_auxz00_3748),
																				BUNSPEC);
																		}
																	}
																	{	/* Ast/app.scm 573 */
																		BgL_typez00_bglt BgL_arg3898z00_1635;

																		obj_t BgL_arg3900z00_1637;

																		obj_t BgL_arg3901z00_1638;

																		obj_t BgL_arg3902z00_1639;

																		obj_t BgL_arg3903z00_1640;

																		bool_t BgL_arg3904z00_1641;

																		BgL_arg3898z00_1635 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_variablez00_1600))->
																			BgL_typez00);
																		BgL_arg3900z00_1637 =
																			string_append(BgL_gnamez00_1601,
																			BGl_string4002z00zzast_appz00);
																		{	/* Ast/app.scm 579 */
																			obj_t BgL_pairz00_2561;

																			{	/* Ast/app.scm 579 */
																				BgL_cfunz00_bglt BgL_obj1975z00_2560;

																				BgL_obj1975z00_2560 =
																					(BgL_cfunz00_bglt) (
																					(((BgL_variablez00_bglt)
																							CREF(BgL_variablez00_1600))->
																						BgL_valuez00));
																				BgL_pairz00_2561 =
																					(((BgL_cfunz00_bglt)
																						CREF(BgL_obj1975z00_2560))->
																					BgL_argszd2typezd2);
																			}
																			BgL_arg3901z00_1638 =
																				CAR(CDR(CDR(BgL_pairz00_2561)));
																		}
																		{	/* Ast/app.scm 578 */
																			obj_t BgL_pairz00_2569;

																			{	/* Ast/app.scm 578 */
																				BgL_cfunz00_bglt BgL_obj1975z00_2568;

																				BgL_obj1975z00_2568 =
																					(BgL_cfunz00_bglt) (
																					(((BgL_variablez00_bglt)
																							CREF(BgL_variablez00_1600))->
																						BgL_valuez00));
																				BgL_pairz00_2569 =
																					(((BgL_cfunz00_bglt)
																						CREF(BgL_obj1975z00_2568))->
																					BgL_argszd2typezd2);
																			}
																			BgL_arg3902z00_1639 =
																				CAR(CDR(BgL_pairz00_2569));
																		}
																		{	/* Ast/app.scm 577 */
																			obj_t BgL_pairz00_2575;

																			{	/* Ast/app.scm 577 */
																				BgL_cfunz00_bglt BgL_obj1975z00_2574;

																				BgL_obj1975z00_2574 =
																					(BgL_cfunz00_bglt) (
																					(((BgL_variablez00_bglt)
																							CREF(BgL_variablez00_1600))->
																						BgL_valuez00));
																				BgL_pairz00_2575 =
																					(((BgL_cfunz00_bglt)
																						CREF(BgL_obj1975z00_2574))->
																					BgL_argszd2typezd2);
																			}
																			BgL_arg3903z00_1640 =
																				CAR(BgL_pairz00_2575);
																		}
																		BgL_arg3904z00_1641 =
																			(
																			(((BgL_variablez00_bglt)
																					CREF(BgL_variablez00_1600))->
																				BgL_idz00) ==
																			CNST_TABLE_REF(((long) 20)));
																		return (obj_t)
																			(BGl_makezd2vsetz12zc0zzast_nodez00
																			(BgL_locz00_38, BgL_arg3898z00_1635,
																				BUNSPEC, BINT(((long) -1)),
																				BgL_argsz00_40, BUNSPEC,
																				BgL_arg3900z00_1637,
																				(BgL_typez00_bglt)
																				(BgL_arg3901z00_1638),
																				(BgL_typez00_bglt)
																				(BgL_arg3902z00_1639),
																				(BgL_typez00_bglt)
																				(BgL_arg3903z00_1640),
																				BgL_arg3904z00_1641));
																}}
															else
																{	/* Ast/app.scm 530 */
																	if (
																		(BgL_casezd2valuezd2_1602 ==
																			CNST_TABLE_REF(((long) 21))))
																		{	/* Ast/app.scm 581 */
																			obj_t BgL_stackzd2alloczd2_1651;

																			{	/* Ast/app.scm 581 */
																				BgL_funz00_bglt BgL_obj1820z00_2580;

																				BgL_obj1820z00_2580 =
																					(BgL_funz00_bglt) (
																					(((BgL_variablez00_bglt)
																							CREF(BgL_variablez00_1600))->
																						BgL_valuez00));
																				BgL_stackzd2alloczd2_1651 =
																					(((BgL_funz00_bglt)
																						CREF(BgL_obj1820z00_2580))->
																					BgL_stackzd2allocatorzd2);
																			}
																			{	/* Ast/app.scm 581 */
																				obj_t BgL_heapzd2formatzd2_1652;

																				BgL_heapzd2formatzd2_1652 =
																					string_append(BgL_gnamez00_1601,
																					BGl_string4000z00zzast_appz00);
																				{	/* Ast/app.scm 582 */
																					obj_t BgL_stackzd2formatzd2_1653;

																					if (BGl_iszd2azf3z21zz__objectz00
																						(BgL_stackzd2alloczd2_1651,
																							BGl_globalz00zzast_varz00))
																						{	/* Ast/app.scm 584 */
																							obj_t BgL_arg3922z00_1660;

																							{
																								BgL_variablez00_bglt
																									BgL_auxz00_3786;
																								BgL_auxz00_3786 =
																									(BgL_variablez00_bglt) (
																									(BgL_globalz00_bglt)
																									(BgL_stackzd2alloczd2_1651));
																								BgL_arg3922z00_1660 =
																									(((BgL_variablez00_bglt)
																										CREF(BgL_auxz00_3786))->
																									BgL_namez00);
																							}
																							BgL_stackzd2formatzd2_1653 =
																								string_append
																								(BgL_arg3922z00_1660,
																								BGl_string4000z00zzast_appz00);
																						}
																					else
																						{	/* Ast/app.scm 583 */
																							BgL_stackzd2formatzd2_1653 =
																								BgL_heapzd2formatzd2_1652;
																						}
																					{	/* Ast/app.scm 583 */

																						{	/* Ast/app.scm 589 */
																							BgL_typez00_bglt
																								BgL_arg3915z00_1654;
																							obj_t BgL_arg3917z00_1656;

																							BgL_arg3915z00_1654 =
																								(((BgL_variablez00_bglt)
																									CREF(BgL_variablez00_1600))->
																								BgL_typez00);
																							{	/* Ast/app.scm 591 */
																								obj_t BgL_pairz00_2586;

																								{	/* Ast/app.scm 591 */
																									BgL_cfunz00_bglt
																										BgL_obj1975z00_2585;
																									BgL_obj1975z00_2585 =
																										(BgL_cfunz00_bglt) (((
																												(BgL_variablez00_bglt)
																												CREF
																												(BgL_variablez00_1600))->
																											BgL_valuez00));
																									BgL_pairz00_2586 =
																										(((BgL_cfunz00_bglt)
																											CREF
																											(BgL_obj1975z00_2585))->
																										BgL_argszd2typezd2);
																								}
																								BgL_arg3917z00_1656 =
																									CAR(BgL_pairz00_2586);
																							}
																							return
																								(obj_t)
																								(BGl_makezd2valloczd2zzast_nodez00
																								(BgL_locz00_38,
																									BgL_arg3915z00_1654, BUNSPEC,
																									BINT(((long) -1)),
																									BgL_argsz00_40, BUNSPEC,
																									BgL_heapzd2formatzd2_1652,
																									(BgL_typez00_bglt)
																									(BGl_za2objza2z00zztype_cachez00),
																									(BgL_typez00_bglt)
																									(BgL_arg3917z00_1656)));
																		}}}}}
																	else
																		{	/* Ast/app.scm 530 */
																			return
																				BGl_errorz00zz__errorz00
																				(BGl_string4003z00zzast_appz00,
																				BGl_string4004z00zzast_appz00,
																				BGl_shapez00zztools_shapez00((obj_t)
																					(BgL_varz00_39)));
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
	obj_t BGl_genericzd2initzd2zzast_appz00()
	{
		AN_OBJECT;
		{	/* Ast/app.scm 14 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_appz00()
	{
		AN_OBJECT;
		{	/* Ast/app.scm 14 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_appz00()
	{
		AN_OBJECT;
		{	/* Ast/app.scm 14 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 352861756),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
			return
				BGl_modulezd2initializa7ationz75zztype_typeofz00(((long) 341705556),
				BSTRING_TO_STRING(BGl_string4005z00zzast_appz00));
		}
	}

#ifdef __cplusplus
}
#endif
