/*===========================================================================*/
/*   (Ast/unit.scm)                                                          */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/unit.scm)*/
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
	}                *BgL_tclassz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_declarezd2unitz12zc0zzast_unitz00(obj_t, long);
	static obj_t BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(obj_t);
	static obj_t BGl_makezd2sfunzd2keyzd2definitionzd2zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_etazd2expansezd2zzast_unitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_letzd2symzd2zzast_letz00();
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_unitzd2initializa7ersz75zzast_unitz00();
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2procedureza2z00zztype_cachez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_makezd2methodzd2definitionz00zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_makezd2sfunzd2optzd2definitionzd2zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_unitz00();
	extern obj_t BGl_getzd2toplevelzd2unitz00zzmodule_includez00();
	BGL_EXPORTED_DECL obj_t BGl_unitzd2initializa7erzd2idza7zzast_unitz00(obj_t);
	extern bool_t BGl_userzd2symbolzf3z21zzast_identz00(obj_t);
	static obj_t BGl__unitzd2initializa7ersz75zzast_unitz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2initzd2callsz00zzast_unitz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_methodz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_genericz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_letz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzast_unitz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_appendzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_comptimezd2expandzd2zzexpand_epsz00(obj_t);
	static obj_t BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00(obj_t);
	static obj_t BGl_toplevelza2zd2ze3astz93zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2(obj_t);
	BGL_IMPORT obj_t BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	static BgL_globalz00_bglt
		BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(BgL_globalz00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(BgL_globalz00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2svarzd2definitionz00zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00(obj_t);
	static obj_t BGl__unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern BgL_nodez00_bglt BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unitzd2ze3defsz31zzast_unitz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_makezd2genericzd2bodyz00zzobject_genericz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2ze3astz31zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_unitz00();
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	extern obj_t BGl_makezd2methodzd2bodyz00zzobject_methodz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_getzd2methodzd2unitz00zzmodule_classz00();
	static obj_t BGl_makezd2genericzd2definitionz00zzast_unitz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_unitz00 = BUNSPEC;
	extern obj_t BGl_za2unsafezd2arityza2zd2zzengine_paramz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_genericzd2initzd2zzast_unitz00();
	static obj_t BGl_zc3anonymousza34843ze3z83zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_getzd2genericzd2unitz00zzmodule_classz00();
	static obj_t BGl_makezd2sfunzd2nooptzd2definitionzd2zzast_unitz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_makezd2sgfunzd2defaultz00zzast_unitz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_funz00zzast_varz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	BGL_IMPORT obj_t BGl_takez00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_dozd2etazd2expansez00zzast_unitz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_makezd2sfunzd2definitionz00zzast_unitz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl__unitzd2initializa7erzd2idza7zzast_unitz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_unitz00();
	extern obj_t
		BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	static obj_t BGl__unitzd2ze3defsz31zzast_unitz00(obj_t, obj_t);
	extern obj_t BGl_za2vectorza2z00zztype_cachez00;
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	static obj_t BGl__unitzd2initzd2callsz00zzast_unitz00(obj_t);
	extern obj_t BGl_checkzd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t, obj_t);
	extern BgL_localz00_bglt BGl_makezd2localzd2svarz00zzast_localz00(obj_t,
		BgL_typez00_bglt);
	extern obj_t BGl_makezd2nzd2protoz00zztools_argsz00(obj_t);
	static obj_t BGl_za2unitzd2listza2zd2zzast_unitz00 = BUNSPEC;
	extern obj_t BGl_compilezd2expandzd2zzexpand_epsz00(obj_t);
	static obj_t BGl_zc3anonymousza33714ze3z83zzast_unitz00(obj_t, obj_t);
	static obj_t BGl__unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t, obj_t,
		obj_t);
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	extern BgL_localz00_bglt
		BGl_makezd2userzd2localzd2svarzd2zzast_localz00(obj_t, BgL_typez00_bglt);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_unitz00();
	static obj_t __cnst[57];


	extern obj_t BGl_userzd2errorzd2envz00zztools_errorz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unitzd2sexpza2zd2addzd2headz12zd2envzb0zzast_unitz00,
		BgL_bgl__unitza7d2sexpza7a2za75083za7,
		BGl__unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unitzd2ze3defszd2envze3zzast_unitz00,
		BgL_bgl__unitza7d2za7e3defsza75084za7, BGl__unitzd2ze3defsz31zzast_unitz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5068z00zzast_unitz00,
		BgL_bgl_string5068za700za7za7a5085za7, "]", 1);
	      DEFINE_STRING(BGl_string5070z00zzast_unitz00,
		BgL_bgl_string5070za700za7za7a5086za7,
		"Unable to eta-expand #!optional alias", 37);
	      DEFINE_STRING(BGl_string5069z00zzast_unitz00,
		BgL_bgl_string5069za700za7za7a5087za7, "      [", 7);
	      DEFINE_STRING(BGl_string5071z00zzast_unitz00,
		BgL_bgl_string5071za700za7za7a5088za7, "Unable to eta-expand #!key alias",
		32);
	      DEFINE_STRING(BGl_string5072z00zzast_unitz00,
		BgL_bgl_string5072za700za7za7a5089za7, "Illegal '() expression", 22);
	      DEFINE_STRING(BGl_string5073z00zzast_unitz00,
		BgL_bgl_string5073za700za7za7a5090za7, "] expected, provided", 20);
	      DEFINE_STRING(BGl_string5074z00zzast_unitz00,
		BgL_bgl_string5074za700za7za7a5091za7, "..", 2);
	      DEFINE_STRING(BGl_string5075z00zzast_unitz00,
		BgL_bgl_string5075za700za7za7a5092za7, "wrong number of arguments: [", 28);
	      DEFINE_STRING(BGl_string5076z00zzast_unitz00,
		BgL_bgl_string5076za700za7za7a5093za7, "Illegal keyword argument", 24);
	      DEFINE_STRING(BGl_string5077z00zzast_unitz00,
		BgL_bgl_string5077za700za7za7a5094za7, "No method for this object", 25);
	      DEFINE_STRING(BGl_string5078z00zzast_unitz00,
		BgL_bgl_string5078za700za7za7a5095za7,
		"Illegal generic definition (first argument missing)", 51);
	      DEFINE_STRING(BGl_string5080z00zzast_unitz00,
		BgL_bgl_string5080za700za7za7a5096za7,
		"unit register-generic! sgfun -default >=fx when index vector-ref memq let -fx +fx eq? v =fx i k1 labels vector-length var check search l globalization (env opt) env _ quote error __error else let* $vector-length case opt $vector-ref-ur cons* apply define-method define-generic define-inline define sifun lambda sfun read -require-initialization -init now export cgen snifun obj set! begin @ if ",
		394);
	      DEFINE_STRING(BGl_string5079z00zzast_unitz00,
		BgL_bgl_string5079za700za7za7a5097za7, "ast_unit", 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unitzd2initializa7erzd2idzd2envz75zzast_unitz00,
		BgL_bgl__unitza7d2initiali5098za7,
		BGl__unitzd2initializa7erzd2idza7zzast_unitz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_unitzd2sexpza2zd2addz12zd2envz62zzast_unitz00,
		BgL_bgl__unitza7d2sexpza7a2za75099za7,
		BGl__unitzd2sexpza2zd2addz12zb0zzast_unitz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unitzd2initializa7erszd2envza7zzast_unitz00,
		BgL_bgl__unitza7d2initiali5100za7,
		BGl__unitzd2initializa7ersz75zzast_unitz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_unitzd2initzd2callszd2envzd2zzast_unitz00,
		BgL_bgl__unitza7d2initza7d2c5101z00,
		BGl__unitzd2initzd2callsz00zzast_unitz00, 0L, BUNSPEC, 0);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_unitz00(long
		BgL_checksumz00_4161, char *BgL_fromz00_4162)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_unitz00))
				{
					BGl_requirezd2initializa7ationz75zzast_unitz00 = BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzast_unitz00();
					BGl_cnstzd2initzd2zzast_unitz00();
					BGl_importedzd2moduleszd2initz00zzast_unitz00();
					BGl_toplevelzd2initzd2zzast_unitz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 21 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_unit");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_unit");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_unit");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 21 */
			{	/* Ast/unit.scm 21 */
				obj_t BgL_cportz00_4146;

				BgL_cportz00_4146 =
					bgl_open_input_string(BGl_string5080z00zzast_unitz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_4147;

					BgL_iz00_4147 = ((long) 56);
				BgL_loopz00_4148:
					if ((BgL_iz00_4147 == ((long) -1)))
						{	/* Ast/unit.scm 21 */
							return BUNSPEC;
						}
					else
						{	/* Ast/unit.scm 21 */
							{	/* Ast/unit.scm 21 */
								obj_t BgL_arg5082z00_4150;

								{	/* Ast/unit.scm 21 */

									{	/* Ast/unit.scm 21 */
										obj_t BgL_locationz00_4152;

										BgL_locationz00_4152 = BBOOL(((bool_t) 0));
										{	/* Ast/unit.scm 21 */

											BgL_arg5082z00_4150 =
												BGl_readz00zz__readerz00(BgL_cportz00_4146,
												BgL_locationz00_4152);
										}
									}
								}
								{	/* Ast/unit.scm 21 */
									int BgL_auxz00_4184;

									BgL_auxz00_4184 = (int) (BgL_iz00_4147);
									CNST_TABLE_SET(BgL_auxz00_4184, BgL_arg5082z00_4150);
							}}
							{	/* Ast/unit.scm 21 */
								int BgL_auxz00_4153;

								BgL_auxz00_4153 = (int) ((BgL_iz00_4147 - ((long) 1)));
								{
									long BgL_iz00_4189;

									BgL_iz00_4189 = (long) (BgL_auxz00_4153);
									BgL_iz00_4147 = BgL_iz00_4189;
									goto BgL_loopz00_4148;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 21 */
			return (BGl_za2unitzd2listza2zd2zzast_unitz00 = BNIL, BUNSPEC);
		}
	}



/* unit-sexp*-add! */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t
		BgL_unitz00_23, obj_t BgL_sexpz00_24)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 60 */
			if (NULLP(STRUCT_REF(BgL_unitz00_23, (int) (((long) 2)))))
				{	/* Ast/unit.scm 62 */
					int BgL_auxz00_4195;

					BgL_auxz00_4195 = (int) (((long) 2));
					return STRUCT_SET(BgL_unitz00_23, BgL_auxz00_4195, BgL_sexpz00_24);
				}
			else
				{	/* Ast/unit.scm 63 */
					obj_t BgL_auxz00_4198;

					BgL_auxz00_4198 =
						BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(STRUCT_REF
						(BgL_unitz00_23, (int) (((long) 2))));
					return SET_CDR(BgL_auxz00_4198, BgL_sexpz00_24);
				}
		}
	}



/* _unit-sexp*-add! */
	obj_t BGl__unitzd2sexpza2zd2addz12zb0zzast_unitz00(obj_t BgL_envz00_4118,
		obj_t BgL_unitz00_4119, obj_t BgL_sexpz00_4120)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 60 */
			return
				BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00(BgL_unitz00_4119,
				BgL_sexpz00_4120);
		}
	}



/* unit-sexp*-add-head! */
	BGL_EXPORTED_DEF obj_t
		BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t BgL_unitz00_25,
		obj_t BgL_sexpz00_26)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 68 */
			{	/* Ast/unit.scm 69 */
				obj_t BgL_auxz00_4206;

				int BgL_auxz00_4204;

				BgL_auxz00_4206 =
					bgl_append2(BgL_sexpz00_26,
					STRUCT_REF(BgL_unitz00_25, (int) (((long) 2))));
				BgL_auxz00_4204 = (int) (((long) 2));
				return STRUCT_SET(BgL_unitz00_25, BgL_auxz00_4204, BgL_auxz00_4206);
			}
		}
	}



/* _unit-sexp*-add-head! */
	obj_t BGl__unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(obj_t
		BgL_envz00_4121, obj_t BgL_unitz00_4122, obj_t BgL_sexpz00_4123)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 68 */
			return
				BGl_unitzd2sexpza2zd2addzd2headz12z62zzast_unitz00(BgL_unitz00_4122,
				BgL_sexpz00_4123);
		}
	}



/* unit->defs */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2ze3defsz31zzast_unitz00(obj_t
		BgL_unitz00_27)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 74 */
			{	/* Ast/unit.scm 75 */
				obj_t BgL_arg3653z00_959;

				{	/* Ast/unit.scm 76 */
					obj_t BgL_arg3659z00_965;

					{	/* Ast/unit.scm 76 */
						obj_t BgL_arg3660z00_966;

						BgL_arg3660z00_966 = STRUCT_REF(BgL_unitz00_27, (int) (((long) 0)));
						{	/* Ast/unit.scm 76 */
							obj_t BgL_res5031z00_3177;

							{	/* Ast/unit.scm 76 */
								obj_t BgL_symbolz00_3175;

								BgL_symbolz00_3175 = BgL_arg3660z00_966;
								{	/* Ast/unit.scm 76 */
									obj_t BgL_arg2063z00_3176;

									BgL_arg2063z00_3176 = SYMBOL_TO_STRING(BgL_symbolz00_3175);
									BgL_res5031z00_3177 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg2063z00_3176);
							}}
							BgL_arg3659z00_965 = BgL_res5031z00_3177;
					}}
					BgL_arg3653z00_959 =
						BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(BgL_arg3659z00_965);
				}
				{	/* Ast/unit.scm 75 */
					obj_t BgL_list3655z00_961;

					{	/* Ast/unit.scm 75 */
						obj_t BgL_arg3656z00_962;

						{	/* Ast/unit.scm 75 */
							obj_t BgL_arg3657z00_963;

							{	/* Ast/unit.scm 75 */
								obj_t BgL_arg3658z00_964;

								BgL_arg3658z00_964 =
									MAKE_PAIR(BCHAR(((unsigned char) '\n')), BNIL);
								BgL_arg3657z00_963 =
									MAKE_PAIR(BGl_string5068z00zzast_unitz00, BgL_arg3658z00_964);
							}
							BgL_arg3656z00_962 =
								MAKE_PAIR(BgL_arg3653z00_959, BgL_arg3657z00_963);
						}
						BgL_list3655z00_961 =
							MAKE_PAIR(BGl_string5069z00zzast_unitz00, BgL_arg3656z00_962);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list3655z00_961);
			}}
			{	/* Ast/unit.scm 80 */
				obj_t BgL_idz00_967;

				BgL_idz00_967 = STRUCT_REF(BgL_unitz00_27, (int) (((long) 0)));
				{	/* Ast/unit.scm 80 */
					obj_t BgL_weightz00_968;

					BgL_weightz00_968 = STRUCT_REF(BgL_unitz00_27, (int) (((long) 1)));
					{	/* Ast/unit.scm 81 */
						obj_t BgL_sexpza2za2_969;

						BgL_sexpza2za2_969 = STRUCT_REF(BgL_unitz00_27, (int) (((long) 2)));
						{	/* Ast/unit.scm 82 */
							obj_t BgL_gdefsz00_970;

							BgL_gdefsz00_970 =
								BGl_findzd2globalzd2defsz00zzast_findzd2gdefszd2
								(BgL_sexpza2za2_969);
							{	/* Ast/unit.scm 83 */

								{	/* Ast/unit.scm 85 */
									obj_t BgL_g3533z00_971;

									obj_t BgL_g3534z00_972;

									if (PROCEDUREP(BgL_sexpza2za2_969))
										{	/* Ast/unit.scm 85 */
											BgL_g3533z00_971 =
												PROCEDURE_ENTRY(BgL_sexpza2za2_969) (BgL_sexpza2za2_969,
												BEOA);
										}
									else
										{	/* Ast/unit.scm 85 */
											BgL_g3533z00_971 =
												BGl_toplevelza2zd2ze3astz93zzast_unitz00
												(BgL_sexpza2za2_969, BgL_gdefsz00_970);
										}
									{	/* Ast/unit.scm 88 */
										bool_t BgL_testz00_4236;

										{	/* Ast/unit.scm 88 */
											obj_t BgL_sz00_3190;

											BgL_sz00_3190 = BgL_unitz00_27;
											BgL_testz00_4236 =
												CBOOL(STRUCT_REF(BgL_sz00_3190, (int) (((long) 4))));
										}
										if (BgL_testz00_4236)
											{	/* Ast/unit.scm 88 */
												obj_t BgL_list3728z00_1050;

												BgL_list3728z00_1050 = MAKE_PAIR(BUNSPEC, BNIL);
												BgL_g3534z00_972 = BgL_list3728z00_1050;
											}
										else
											{	/* Ast/unit.scm 88 */
												BgL_g3534z00_972 = BNIL;
											}
									}
									{
										obj_t BgL_aexpza2za2_975;

										obj_t BgL_initza2za2_976;

										obj_t BgL_defza2za2_977;

										BgL_aexpza2za2_975 = BgL_g3533z00_971;
										BgL_initza2za2_976 = BgL_g3534z00_972;
										BgL_defza2za2_977 = BNIL;
									BgL_zc3anonymousza33661ze3z83_978:
										if (NULLP(BgL_aexpza2za2_975))
											{	/* Ast/unit.scm 90 */
												if (PAIRP(BgL_initza2za2_976))
													{	/* Ast/unit.scm 92 */
														obj_t BgL_bodyz00_981;

														{	/* Ast/unit.scm 92 */
															bool_t BgL_testz00_4245;

															{	/* Ast/unit.scm 92 */
																obj_t BgL_sz00_3197;

																BgL_sz00_3197 = BgL_unitz00_27;
																BgL_testz00_4245 =
																	CBOOL(STRUCT_REF(BgL_sz00_3197,
																		(int) (((long) 4))));
															}
															if (BgL_testz00_4245)
																{	/* Ast/unit.scm 93 */
																	obj_t BgL_arg3681z00_1000;

																	obj_t BgL_arg3682z00_1001;

																	BgL_arg3681z00_1000 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Ast/unit.scm 93 */
																		obj_t BgL_arg3683z00_1002;

																		obj_t BgL_arg3684z00_1003;

																		{	/* Ast/unit.scm 93 */
																			obj_t BgL_arg3688z00_1007;

																			obj_t BgL_arg3689z00_1008;

																			BgL_arg3688z00_1007 =
																				CNST_TABLE_REF(((long) 1));
																			{	/* Ast/unit.scm 93 */
																				obj_t BgL_arg3690z00_1009;

																				BgL_arg3690z00_1009 =
																					BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00
																					(BgL_idz00_967);
																				{	/* Ast/unit.scm 93 */
																					obj_t BgL_list3692z00_1011;

																					{	/* Ast/unit.scm 93 */
																						obj_t BgL_arg3693z00_1012;

																						BgL_arg3693z00_1012 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list3692z00_1011 =
																							MAKE_PAIR
																							(BGl_za2moduleza2z00zzmodule_modulez00,
																							BgL_arg3693z00_1012);
																					}
																					BgL_arg3689z00_1008 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3690z00_1009,
																						BgL_list3692z00_1011);
																			}}
																			BgL_arg3683z00_1002 =
																				MAKE_PAIR(BgL_arg3688z00_1007,
																				BgL_arg3689z00_1008);
																		}
																		{	/* Ast/unit.scm 94 */
																			obj_t BgL_arg3694z00_1013;

																			obj_t BgL_arg3695z00_1014;

																			BgL_arg3694z00_1013 =
																				CNST_TABLE_REF(((long) 2));
																			{	/* Ast/unit.scm 95 */
																				obj_t BgL_arg3696z00_1015;

																				obj_t BgL_arg3697z00_1016;

																				{	/* Ast/unit.scm 95 */
																					obj_t BgL_arg3699z00_1018;

																					obj_t BgL_arg3700z00_1019;

																					BgL_arg3699z00_1018 =
																						CNST_TABLE_REF(((long) 3));
																					{	/* Ast/unit.scm 95 */
																						obj_t BgL_arg3701z00_1020;

																						{	/* Ast/unit.scm 95 */
																							obj_t BgL_arg3705z00_1024;

																							obj_t BgL_arg3706z00_1025;

																							BgL_arg3705z00_1024 =
																								CNST_TABLE_REF(((long) 1));
																							{	/* Ast/unit.scm 95 */
																								obj_t BgL_arg3707z00_1026;

																								BgL_arg3707z00_1026 =
																									BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00
																									(BgL_idz00_967);
																								{	/* Ast/unit.scm 95 */
																									obj_t BgL_list3709z00_1028;

																									{	/* Ast/unit.scm 95 */
																										obj_t BgL_arg3710z00_1029;

																										BgL_arg3710z00_1029 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list3709z00_1028 =
																											MAKE_PAIR
																											(BGl_za2moduleza2z00zzmodule_modulez00,
																											BgL_arg3710z00_1029);
																									}
																									BgL_arg3706z00_1025 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg3707z00_1026,
																										BgL_list3709z00_1028);
																							}}
																							BgL_arg3701z00_1020 =
																								MAKE_PAIR(BgL_arg3705z00_1024,
																								BgL_arg3706z00_1025);
																						}
																						{	/* Ast/unit.scm 95 */
																							obj_t BgL_list3703z00_1022;

																							{	/* Ast/unit.scm 95 */
																								obj_t BgL_arg3704z00_1023;

																								BgL_arg3704z00_1023 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list3703z00_1022 =
																									MAKE_PAIR(BFALSE,
																									BgL_arg3704z00_1023);
																							}
																							BgL_arg3700z00_1019 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg3701z00_1020,
																								BgL_list3703z00_1022);
																					}}
																					BgL_arg3696z00_1015 =
																						MAKE_PAIR(BgL_arg3699z00_1018,
																						BgL_arg3700z00_1019);
																				}
																				{	/* Ast/unit.scm 98 */
																					obj_t BgL_arg3711z00_1030;

																					obj_t BgL_arg3712z00_1031;

																					{	/* Ast/unit.scm 98 */
																						obj_t
																							BgL_zc3anonymousza33714ze3z83_4124;
																						BgL_zc3anonymousza33714ze3z83_4124 =
																							make_fx_procedure
																							(BGl_zc3anonymousza33714ze3z83zzast_unitz00,
																							(int) (((long) 1)),
																							(int) (((long) 1)));
																						PROCEDURE_SET
																							(BgL_zc3anonymousza33714ze3z83_4124,
																							(int) (((long) 0)),
																							BgL_idz00_967);
																						BgL_arg3711z00_1030 =
																							BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00
																							(BgL_zc3anonymousza33714ze3z83_4124);
																					}
																					BgL_arg3712z00_1031 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(bgl_reverse_bang
																						(BgL_initza2za2_976), BNIL);
																					BgL_arg3697z00_1016 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3711z00_1030,
																						BgL_arg3712z00_1031);
																				}
																				{	/* Ast/unit.scm 94 */
																					obj_t BgL_list3698z00_1017;

																					BgL_list3698z00_1017 =
																						MAKE_PAIR(BgL_arg3697z00_1016,
																						BNIL);
																					BgL_arg3695z00_1014 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg3696z00_1015,
																						BgL_list3698z00_1017);
																			}}
																			BgL_arg3684z00_1003 =
																				MAKE_PAIR(BgL_arg3694z00_1013,
																				BgL_arg3695z00_1014);
																		}
																		{	/* Ast/unit.scm 93 */
																			obj_t BgL_list3686z00_1005;

																			{	/* Ast/unit.scm 93 */
																				obj_t BgL_arg3687z00_1006;

																				BgL_arg3687z00_1006 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list3686z00_1005 =
																					MAKE_PAIR(BgL_arg3684z00_1003,
																					BgL_arg3687z00_1006);
																			}
																			BgL_arg3682z00_1001 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg3683z00_1002,
																				BgL_list3686z00_1005);
																	}}
																	BgL_bodyz00_981 =
																		MAKE_PAIR(BgL_arg3681z00_1000,
																		BgL_arg3682z00_1001);
																}
															else
																{	/* Ast/unit.scm 92 */
																	BgL_bodyz00_981 =
																		BGl_normaliza7ezd2prognz75zztools_prognz00
																		(bgl_reverse_bang(BgL_initza2za2_976));
																}
														}
														{	/* Ast/unit.scm 92 */
															BgL_globalz00_bglt BgL_initz00_982;

															{	/* Ast/unit.scm 103 */
																obj_t BgL_arg3672z00_992;

																obj_t BgL_arg3675z00_995;

																obj_t BgL_arg3677z00_996;

																{	/* Ast/unit.scm 103 */
																	obj_t BgL_arg3678z00_997;

																	obj_t BgL_arg3679z00_998;

																	BgL_arg3678z00_997 =
																		BGl_unitzd2initializa7erzd2idza7zzast_unitz00
																		(BgL_idz00_967);
																	BgL_arg3679z00_998 =
																		CNST_TABLE_REF(((long) 4));
																	BgL_arg3672z00_992 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(BgL_arg3678z00_997, BgL_arg3679z00_998);
																}
																BgL_arg3675z00_995 = CNST_TABLE_REF(((long) 5));
																BgL_arg3677z00_996 = CNST_TABLE_REF(((long) 6));
																BgL_initz00_982 =
																	BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
																	(BgL_arg3672z00_992, BNIL, BNIL,
																	BGl_za2moduleza2z00zzmodule_modulez00,
																	BgL_arg3675z00_995,
																	BGl_za2modulezd2clauseza2zd2zzmodule_modulez00,
																	BgL_arg3677z00_996, BgL_bodyz00_981);
															}
															{	/* Ast/unit.scm 101 */

																{	/* Ast/unit.scm 112 */
																	bool_t BgL_testz00_4292;

																	{	/* Ast/unit.scm 112 */
																		obj_t BgL_sz00_3200;

																		BgL_sz00_3200 = BgL_unitz00_27;
																		BgL_testz00_4292 =
																			CBOOL(STRUCT_REF(BgL_sz00_3200,
																				(int) (((long) 4))));
																	}
																	if (BgL_testz00_4292)
																		{	/* Ast/unit.scm 113 */
																			BgL_globalz00_bglt BgL_obj1681z00_3202;

																			obj_t BgL_val1680z00_3203;

																			BgL_obj1681z00_3202 = BgL_initz00_982;
																			BgL_val1680z00_3203 =
																				CNST_TABLE_REF(((long) 7));
																			((((BgL_globalz00_bglt)
																						CREF(BgL_obj1681z00_3202))->
																					BgL_importz00) =
																				((obj_t) BgL_val1680z00_3203), BUNSPEC);
																		}
																	else
																		{	/* Ast/unit.scm 112 */
																			BFALSE;
																		}
																}
																if (
																	(BgL_unitz00_27 ==
																		BGl_getzd2toplevelzd2unitz00zzmodule_includez00
																		()))
																	{	/* Ast/unit.scm 116 */
																		BFALSE;
																	}
																else
																	{	/* Ast/unit.scm 116 */
																		((((BgL_globalz00_bglt)
																					CREF(BgL_initz00_982))->
																				BgL_userzf3zf3) =
																			((bool_t) ((bool_t) 0)), BUNSPEC);
																	}
																BGl_declarezd2unitz12zc0zzast_unitz00
																	(BgL_idz00_967,
																	(long) CINT(BgL_weightz00_968));
																((((BgL_globalz00_bglt) CREF(BgL_initz00_982))->
																		BgL_evaluablezf3zf3) =
																	((bool_t) ((bool_t) 0)), BUNSPEC);
																{	/* Ast/unit.scm 126 */
																	bool_t BgL_testz00_4305;

																	{	/* Ast/unit.scm 126 */
																		obj_t BgL_sz00_3209;

																		BgL_sz00_3209 = BgL_unitz00_27;
																		BgL_testz00_4305 =
																			CBOOL(STRUCT_REF(BgL_sz00_3209,
																				(int) (((long) 4))));
																	}
																	if (BgL_testz00_4305)
																		{	/* Ast/unit.scm 127 */
																			obj_t BgL_idz00_987;

																			{	/* Ast/unit.scm 127 */
																				obj_t BgL_arg3668z00_989;

																				obj_t BgL_arg3670z00_990;

																				BgL_arg3668z00_989 =
																					BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00
																					(BgL_idz00_967);
																				BgL_arg3670z00_990 =
																					CNST_TABLE_REF(((long) 4));
																				BgL_idz00_987 =
																					BGl_makezd2typedzd2identz00zzast_identz00
																					(BgL_arg3668z00_989,
																					BgL_arg3670z00_990);
																			}
																			{	/* Ast/unit.scm 127 */
																				BgL_globalz00_bglt BgL_gloz00_988;

																				BgL_gloz00_988 =
																					BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2
																					(BgL_idz00_987,
																					BGl_za2moduleza2z00zzmodule_modulez00,
																					BGl_za2modulezd2clauseza2zd2zzmodule_modulez00,
																					CNST_TABLE_REF(((long) 8)));
																				{	/* Ast/unit.scm 129 */

																					((((BgL_globalz00_bglt)
																								CREF(BgL_gloz00_988))->
																							BgL_userzf3zf3) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																					((((BgL_globalz00_bglt)
																								CREF(BgL_gloz00_988))->
																							BgL_evaluablezf3zf3) =
																						((bool_t) ((bool_t) 0)), BUNSPEC);
																		}}}
																	else
																		{	/* Ast/unit.scm 126 */
																			BFALSE;
																		}
																}
																return
																	MAKE_PAIR(
																	(obj_t) (BgL_initz00_982),
																	bgl_reverse_bang(BgL_defza2za2_977));
															}
														}
													}
												else
													{	/* Ast/unit.scm 91 */
														return bgl_reverse_bang(BgL_defza2za2_977);
													}
											}
										else
											{	/* Ast/unit.scm 135 */
												bool_t BgL_testz00_4320;

												{	/* Ast/unit.scm 135 */
													obj_t BgL_arg3725z00_1046;

													BgL_arg3725z00_1046 = CAR(BgL_aexpza2za2_975);
													BgL_testz00_4320 =
														BGl_iszd2azf3z21zz__objectz00(BgL_arg3725z00_1046,
														BGl_globalz00zzast_varz00);
												}
												if (BgL_testz00_4320)
													{	/* Ast/unit.scm 136 */
														obj_t BgL_arg3719z00_1040;

														obj_t BgL_arg3720z00_1041;

														BgL_arg3719z00_1040 = CDR(BgL_aexpza2za2_975);
														BgL_arg3720z00_1041 =
															MAKE_PAIR(CAR(BgL_aexpza2za2_975),
															BgL_defza2za2_977);
														{
															obj_t BgL_defza2za2_4327;

															obj_t BgL_aexpza2za2_4326;

															BgL_aexpza2za2_4326 = BgL_arg3719z00_1040;
															BgL_defza2za2_4327 = BgL_arg3720z00_1041;
															BgL_defza2za2_977 = BgL_defza2za2_4327;
															BgL_aexpza2za2_975 = BgL_aexpza2za2_4326;
															goto BgL_zc3anonymousza33661ze3z83_978;
														}
													}
												else
													{	/* Ast/unit.scm 139 */
														obj_t BgL_arg3722z00_1043;

														obj_t BgL_arg3723z00_1044;

														BgL_arg3722z00_1043 = CDR(BgL_aexpza2za2_975);
														BgL_arg3723z00_1044 =
															MAKE_PAIR(CAR(BgL_aexpza2za2_975),
															BgL_initza2za2_976);
														{
															obj_t BgL_initza2za2_4332;

															obj_t BgL_aexpza2za2_4331;

															BgL_aexpza2za2_4331 = BgL_arg3722z00_1043;
															BgL_initza2za2_4332 = BgL_arg3723z00_1044;
															BgL_initza2za2_976 = BgL_initza2za2_4332;
															BgL_aexpza2za2_975 = BgL_aexpza2za2_4331;
															goto BgL_zc3anonymousza33661ze3z83_978;
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



/* _unit->defs */
	obj_t BGl__unitzd2ze3defsz31zzast_unitz00(obj_t BgL_envz00_4125,
		obj_t BgL_unitz00_4126)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 74 */
			return BGl_unitzd2ze3defsz31zzast_unitz00(BgL_unitz00_4126);
		}
	}



/* <anonymous:3714> */
	obj_t BGl_zc3anonymousza33714ze3z83zzast_unitz00(obj_t BgL_envz00_4127,
		obj_t BgL_mz00_4129)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 97 */
			return
				BGl_unitzd2initializa7erzd2idza7zzast_unitz00(PROCEDURE_REF
				(BgL_envz00_4127, (int) (((long) 0))));
		}
	}



/* declare-unit! */
	obj_t BGl_declarezd2unitz12zc0zzast_unitz00(obj_t BgL_idz00_28,
		long BgL_weightz00_29)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 151 */
			{	/* Ast/unit.scm 152 */
				bool_t BgL_testz00_4337;

				if (NULLP(BGl_za2unitzd2listza2zd2zzast_unitz00))
					{	/* Ast/unit.scm 152 */
						BgL_testz00_4337 = ((bool_t) 1);
					}
				else
					{	/* Ast/unit.scm 152 */
						obj_t BgL_arg3748z00_1071;

						BgL_arg3748z00_1071 =
							CDR(CAR(BGl_za2unitzd2listza2zd2zzast_unitz00));
						BgL_testz00_4337 =
							(BgL_weightz00_29 < (long) CINT(BgL_arg3748z00_1071));
					}
				if (BgL_testz00_4337)
					{	/* Ast/unit.scm 153 */
						obj_t BgL_arg3730z00_1052;

						BgL_arg3730z00_1052 =
							MAKE_PAIR(BgL_idz00_28, BINT(BgL_weightz00_29));
						return (BGl_za2unitzd2listza2zd2zzast_unitz00 =
							MAKE_PAIR(BgL_arg3730z00_1052,
								BGl_za2unitzd2listza2zd2zzast_unitz00), BUNSPEC);
					}
				else
					{
						obj_t BgL_ulistz00_1054;

						BgL_ulistz00_1054 = BGl_za2unitzd2listza2zd2zzast_unitz00;
					BgL_zc3anonymousza33731ze3z83_1055:
						if ((BgL_weightz00_29 < (long) CINT(CDR(CAR(BgL_ulistz00_1054)))))
							{	/* Ast/unit.scm 156 */
								{	/* Ast/unit.scm 157 */
									obj_t BgL_arg3733z00_1057;

									BgL_arg3733z00_1057 =
										MAKE_PAIR(CAR(BgL_ulistz00_1054), CDR(BgL_ulistz00_1054));
									SET_CDR(BgL_ulistz00_1054, BgL_arg3733z00_1057);
								}
								{	/* Ast/unit.scm 158 */
									obj_t BgL_arg3736z00_1060;

									BgL_arg3736z00_1060 =
										MAKE_PAIR(BgL_idz00_28, BINT(BgL_weightz00_29));
									return SET_CAR(BgL_ulistz00_1054, BgL_arg3736z00_1060);
								}
							}
						else
							{	/* Ast/unit.scm 156 */
								if (NULLP(CDR(BgL_ulistz00_1054)))
									{	/* Ast/unit.scm 160 */
										obj_t BgL_arg3738z00_1062;

										{	/* Ast/unit.scm 160 */
											obj_t BgL_arg3739z00_1063;

											BgL_arg3739z00_1063 =
												MAKE_PAIR(BgL_idz00_28, BINT(BgL_weightz00_29));
											{	/* Ast/unit.scm 160 */
												obj_t BgL_list3740z00_1064;

												BgL_list3740z00_1064 =
													MAKE_PAIR(BgL_arg3739z00_1063, BNIL);
												BgL_arg3738z00_1062 = BgL_list3740z00_1064;
											}
										}
										return SET_CDR(BgL_ulistz00_1054, BgL_arg3738z00_1062);
									}
								else
									{
										obj_t BgL_ulistz00_4366;

										BgL_ulistz00_4366 = CDR(BgL_ulistz00_1054);
										BgL_ulistz00_1054 = BgL_ulistz00_4366;
										goto BgL_zc3anonymousza33731ze3z83_1055;
									}
							}
					}
			}
		}
	}



/* unit-initializer-id */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2initializa7erzd2idza7zzast_unitz00(obj_t
		BgL_idz00_30)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 167 */
			{	/* Ast/unit.scm 168 */
				obj_t BgL_arg3750z00_1073;

				{	/* Ast/unit.scm 168 */
					obj_t BgL_arg3751z00_1074;

					obj_t BgL_arg3752z00_1075;

					{	/* Ast/unit.scm 168 */
						obj_t BgL_res5034z00_3245;

						{	/* Ast/unit.scm 168 */
							obj_t BgL_symbolz00_3243;

							BgL_symbolz00_3243 = BgL_idz00_30;
							{	/* Ast/unit.scm 168 */
								obj_t BgL_arg2063z00_3244;

								BgL_arg2063z00_3244 = SYMBOL_TO_STRING(BgL_symbolz00_3243);
								BgL_res5034z00_3245 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_3244);
							}
						}
						BgL_arg3751z00_1074 = BgL_res5034z00_3245;
					}
					{	/* Ast/unit.scm 168 */
						obj_t BgL_res5035z00_3248;

						{	/* Ast/unit.scm 168 */
							obj_t BgL_symbolz00_3246;

							BgL_symbolz00_3246 = CNST_TABLE_REF(((long) 9));
							{	/* Ast/unit.scm 168 */
								obj_t BgL_arg2063z00_3247;

								BgL_arg2063z00_3247 = SYMBOL_TO_STRING(BgL_symbolz00_3246);
								BgL_res5035z00_3248 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_3247);
						}}
						BgL_arg3752z00_1075 = BgL_res5035z00_3248;
					}
					{	/* Ast/unit.scm 168 */
						obj_t BgL_list3753z00_1076;

						{	/* Ast/unit.scm 168 */
							obj_t BgL_arg3754z00_1077;

							BgL_arg3754z00_1077 = MAKE_PAIR(BgL_arg3752z00_1075, BNIL);
							BgL_list3753z00_1076 =
								MAKE_PAIR(BgL_arg3751z00_1074, BgL_arg3754z00_1077);
						}
						BgL_arg3750z00_1073 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3753z00_1076);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg3750z00_1073));
			}
		}
	}



/* _unit-initializer-id */
	obj_t BGl__unitzd2initializa7erzd2idza7zzast_unitz00(obj_t BgL_envz00_4130,
		obj_t BgL_idz00_4131)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 167 */
			return BGl_unitzd2initializa7erzd2idza7zzast_unitz00(BgL_idz00_4131);
		}
	}



/* unit-require-init-id */
	obj_t BGl_unitzd2requirezd2initzd2idzd2zzast_unitz00(obj_t BgL_idz00_31)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 173 */
			{	/* Ast/unit.scm 174 */
				obj_t BgL_arg3755z00_1078;

				{	/* Ast/unit.scm 174 */
					obj_t BgL_arg3756z00_1079;

					obj_t BgL_arg3757z00_1080;

					{	/* Ast/unit.scm 174 */
						obj_t BgL_res5036z00_3252;

						{	/* Ast/unit.scm 174 */
							obj_t BgL_symbolz00_3250;

							BgL_symbolz00_3250 = BgL_idz00_31;
							{	/* Ast/unit.scm 174 */
								obj_t BgL_arg2063z00_3251;

								BgL_arg2063z00_3251 = SYMBOL_TO_STRING(BgL_symbolz00_3250);
								BgL_res5036z00_3252 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_3251);
							}
						}
						BgL_arg3756z00_1079 = BgL_res5036z00_3252;
					}
					{	/* Ast/unit.scm 174 */
						obj_t BgL_res5037z00_3255;

						{	/* Ast/unit.scm 174 */
							obj_t BgL_symbolz00_3253;

							BgL_symbolz00_3253 = CNST_TABLE_REF(((long) 10));
							{	/* Ast/unit.scm 174 */
								obj_t BgL_arg2063z00_3254;

								BgL_arg2063z00_3254 = SYMBOL_TO_STRING(BgL_symbolz00_3253);
								BgL_res5037z00_3255 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg2063z00_3254);
						}}
						BgL_arg3757z00_1080 = BgL_res5037z00_3255;
					}
					{	/* Ast/unit.scm 174 */
						obj_t BgL_list3758z00_1081;

						{	/* Ast/unit.scm 174 */
							obj_t BgL_arg3759z00_1082;

							BgL_arg3759z00_1082 = MAKE_PAIR(BgL_arg3757z00_1080, BNIL);
							BgL_list3758z00_1081 =
								MAKE_PAIR(BgL_arg3756z00_1079, BgL_arg3759z00_1082);
						}
						BgL_arg3755z00_1078 =
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list3758z00_1081);
				}}
				return string_to_symbol(BSTRING_TO_STRING(BgL_arg3755z00_1078));
			}
		}
	}



/* unit-initializers */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2initializa7ersz75zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 179 */
			{	/* Ast/unit.scm 180 */
				obj_t BgL_l3547z00_1083;

				BgL_l3547z00_1083 = BGl_za2unitzd2listza2zd2zzast_unitz00;
				if (NULLP(BgL_l3547z00_1083))
					{	/* Ast/unit.scm 180 */
						return BNIL;
					}
				else
					{	/* Ast/unit.scm 180 */
						obj_t BgL_head3549z00_1085;

						BgL_head3549z00_1085 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3547z00_1087;

							obj_t BgL_tail3550z00_1088;

							BgL_l3547z00_1087 = BgL_l3547z00_1083;
							BgL_tail3550z00_1088 = BgL_head3549z00_1085;
						BgL_zc3anonymousza33761ze3z83_1089:
							if (NULLP(BgL_l3547z00_1087))
								{	/* Ast/unit.scm 180 */
									return CDR(BgL_head3549z00_1085);
								}
							else
								{	/* Ast/unit.scm 180 */
									obj_t BgL_newtail3551z00_1091;

									{	/* Ast/unit.scm 180 */
										obj_t BgL_arg3764z00_1093;

										{	/* Ast/unit.scm 180 */
											obj_t BgL_unitz00_1095;

											BgL_unitz00_1095 = CAR(BgL_l3547z00_1087);
											{	/* Ast/unit.scm 181 */
												obj_t BgL_arg3766z00_1096;

												BgL_arg3766z00_1096 =
													BGl_unitzd2initializa7erzd2idza7zzast_unitz00(CAR
													(BgL_unitz00_1095));
												BgL_arg3764z00_1093 =
													BGl_findzd2globalzf2modulez20zzast_envz00
													(BgL_arg3766z00_1096,
													BGl_za2moduleza2z00zzmodule_modulez00);
											}
										}
										BgL_newtail3551z00_1091 =
											MAKE_PAIR(BgL_arg3764z00_1093, BNIL);
									}
									SET_CDR(BgL_tail3550z00_1088, BgL_newtail3551z00_1091);
									{
										obj_t BgL_tail3550z00_4403;

										obj_t BgL_l3547z00_4401;

										BgL_l3547z00_4401 = CDR(BgL_l3547z00_1087);
										BgL_tail3550z00_4403 = BgL_newtail3551z00_1091;
										BgL_tail3550z00_1088 = BgL_tail3550z00_4403;
										BgL_l3547z00_1087 = BgL_l3547z00_4401;
										goto BgL_zc3anonymousza33761ze3z83_1089;
									}
								}
						}
					}
			}
		}
	}



/* _unit-initializers */
	obj_t BGl__unitzd2initializa7ersz75zzast_unitz00(obj_t BgL_envz00_4132)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 179 */
			return BGl_unitzd2initializa7ersz75zzast_unitz00();
		}
	}



/* unit-init-calls */
	BGL_EXPORTED_DEF obj_t BGl_unitzd2initzd2callsz00zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 187 */
			{	/* Ast/unit.scm 188 */
				obj_t BgL_l3552z00_1099;

				BgL_l3552z00_1099 = BGl_za2unitzd2listza2zd2zzast_unitz00;
				if (NULLP(BgL_l3552z00_1099))
					{	/* Ast/unit.scm 188 */
						return BNIL;
					}
				else
					{	/* Ast/unit.scm 188 */
						obj_t BgL_head3554z00_1101;

						BgL_head3554z00_1101 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3552z00_1103;

							obj_t BgL_tail3555z00_1104;

							BgL_l3552z00_1103 = BgL_l3552z00_1099;
							BgL_tail3555z00_1104 = BgL_head3554z00_1101;
						BgL_zc3anonymousza33769ze3z83_1105:
							if (NULLP(BgL_l3552z00_1103))
								{	/* Ast/unit.scm 188 */
									return CDR(BgL_head3554z00_1101);
								}
							else
								{	/* Ast/unit.scm 188 */
									obj_t BgL_newtail3556z00_1107;

									{	/* Ast/unit.scm 188 */
										obj_t BgL_arg3772z00_1109;

										{	/* Ast/unit.scm 188 */
											obj_t BgL_unitz00_1111;

											BgL_unitz00_1111 = CAR(BgL_l3552z00_1103);
											{	/* Ast/unit.scm 188 */
												obj_t BgL_arg3774z00_1112;

												{	/* Ast/unit.scm 188 */
													obj_t BgL_arg3776z00_1114;

													obj_t BgL_arg3777z00_1115;

													BgL_arg3776z00_1114 = CNST_TABLE_REF(((long) 1));
													{	/* Ast/unit.scm 188 */
														obj_t BgL_arg3778z00_1116;

														BgL_arg3778z00_1116 =
															BGl_unitzd2initializa7erzd2idza7zzast_unitz00(CAR
															(BgL_unitz00_1111));
														{	/* Ast/unit.scm 188 */
															obj_t BgL_list3780z00_1118;

															{	/* Ast/unit.scm 188 */
																obj_t BgL_arg3781z00_1119;

																BgL_arg3781z00_1119 = MAKE_PAIR(BNIL, BNIL);
																BgL_list3780z00_1118 =
																	MAKE_PAIR
																	(BGl_za2moduleza2z00zzmodule_modulez00,
																	BgL_arg3781z00_1119);
															}
															BgL_arg3777z00_1115 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg3778z00_1116, BgL_list3780z00_1118);
													}}
													BgL_arg3774z00_1112 =
														MAKE_PAIR(BgL_arg3776z00_1114, BgL_arg3777z00_1115);
												}
												BgL_arg3772z00_1109 =
													MAKE_PAIR(BgL_arg3774z00_1112, BNIL);
										}}
										BgL_newtail3556z00_1107 =
											MAKE_PAIR(BgL_arg3772z00_1109, BNIL);
									}
									SET_CDR(BgL_tail3555z00_1104, BgL_newtail3556z00_1107);
									{
										obj_t BgL_tail3555z00_4424;

										obj_t BgL_l3552z00_4422;

										BgL_l3552z00_4422 = CDR(BgL_l3552z00_1103);
										BgL_tail3555z00_4424 = BgL_newtail3556z00_1107;
										BgL_tail3555z00_1104 = BgL_tail3555z00_4424;
										BgL_l3552z00_1103 = BgL_l3552z00_4422;
										goto BgL_zc3anonymousza33769ze3z83_1105;
									}
								}
						}
					}
			}
		}
	}



/* _unit-init-calls */
	obj_t BGl__unitzd2initzd2callsz00zzast_unitz00(obj_t BgL_envz00_4133)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 187 */
			return BGl_unitzd2initzd2callsz00zzast_unitz00();
		}
	}



/* toplevel*->ast */
	obj_t BGl_toplevelza2zd2ze3astz93zzast_unitz00(obj_t BgL_sexpza2za2_32,
		obj_t BgL_gdefsz00_33)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 194 */
			{
				obj_t BgL_sexpza2za2_1124;

				obj_t BgL_aexpza2za2_1125;

				BgL_sexpza2za2_1124 = BgL_sexpza2za2_32;
				BgL_aexpza2za2_1125 = BNIL;
			BgL_zc3anonymousza33783ze3z83_1126:
				if (NULLP(BgL_sexpza2za2_1124))
					{	/* Ast/unit.scm 197 */
						return bgl_reverse_bang(BgL_aexpza2za2_1125);
					}
				else
					{
						obj_t BgL_aexpza2za2_4431;

						obj_t BgL_sexpza2za2_4429;

						BgL_sexpza2za2_4429 = CDR(BgL_sexpza2za2_1124);
						BgL_aexpza2za2_4431 =
							bgl_append2(BGl_toplevelzd2ze3astz31zzast_unitz00(CAR
								(BgL_sexpza2za2_1124), BgL_gdefsz00_33), BgL_aexpza2za2_1125);
						BgL_aexpza2za2_1125 = BgL_aexpza2za2_4431;
						BgL_sexpza2za2_1124 = BgL_sexpza2za2_4429;
						goto BgL_zc3anonymousza33783ze3z83_1126;
					}
			}
		}
	}



/* toplevel->ast */
	obj_t BGl_toplevelzd2ze3astz31zzast_unitz00(obj_t BgL_sexpz00_34,
		obj_t BgL_gdefsz00_35)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 207 */
		BGl_toplevelzd2ze3astz31zzast_unitz00:
			{
				obj_t BgL_varz00_1162;

				obj_t BgL_argsz00_1163;

				obj_t BgL_expz00_1164;

				obj_t BgL_varz00_1150;

				obj_t BgL_var2z00_1151;

				obj_t BgL_modulez00_1152;

				obj_t BgL_varz00_1147;

				obj_t BgL_var2z00_1148;

				obj_t BgL_varz00_1140;

				obj_t BgL_argsz00_1141;

				obj_t BgL_expz00_1142;

				obj_t BgL_varz00_1136;

				obj_t BgL_argsz00_1137;

				obj_t BgL_expz00_1138;

				if (PAIRP(BgL_sexpz00_34))
					{	/* Ast/unit.scm 208 */
						if ((CAR(BgL_sexpz00_34) == CNST_TABLE_REF(((long) 2))))
							{	/* Ast/unit.scm 208 */
								if (NULLP(CDR(BgL_sexpz00_34)))
									{	/* Ast/unit.scm 208 */
										{	/* Ast/unit.scm 210 */
											obj_t BgL_list3971z00_1442;

											BgL_list3971z00_1442 = MAKE_PAIR(BgL_sexpz00_34, BNIL);
											return BgL_list3971z00_1442;
										}
									}
								else
									{	/* Ast/unit.scm 208 */
										obj_t BgL_arg3792z00_1184;

										BgL_arg3792z00_1184 = CDR(BgL_sexpz00_34);
										return
											bgl_reverse_bang(BGl_toplevelza2zd2ze3astz93zzast_unitz00
											(BgL_arg3792z00_1184, BgL_gdefsz00_35));
									}
							}
						else
							{	/* Ast/unit.scm 208 */
								obj_t BgL_cdrzd21700zd2_1186;

								BgL_cdrzd21700zd2_1186 = CDR(BgL_sexpz00_34);
								if ((CAR(BgL_sexpz00_34) == CNST_TABLE_REF(((long) 15))))
									{	/* Ast/unit.scm 208 */
										if (PAIRP(BgL_cdrzd21700zd2_1186))
											{	/* Ast/unit.scm 208 */
												obj_t BgL_carzd21704zd2_1189;

												BgL_carzd21704zd2_1189 = CAR(BgL_cdrzd21700zd2_1186);
												if (PAIRP(BgL_carzd21704zd2_1189))
													{	/* Ast/unit.scm 208 */
														BgL_varz00_1136 = CAR(BgL_carzd21704zd2_1189);
														BgL_argsz00_1137 = CDR(BgL_carzd21704zd2_1189);
														BgL_expz00_1138 = CDR(BgL_cdrzd21700zd2_1186);
														{	/* Ast/unit.scm 214 */
															obj_t BgL_idz00_1444;

															BgL_idz00_1444 =
																BGl_idzd2ofzd2idz00zzast_identz00
																(BgL_varz00_1136,
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_sexpz00_34));
															{	/* Ast/unit.scm 214 */
																obj_t BgL_defz00_1445;

																BgL_defz00_1445 =
																	BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																	(BgL_idz00_1444, BgL_gdefsz00_35);
																{	/* Ast/unit.scm 215 */
																	obj_t BgL_globalz00_1446;

																	BgL_globalz00_1446 =
																		BGl_findzd2globalzf2modulez20zzast_envz00
																		(BgL_idz00_1444,
																		BGl_za2moduleza2z00zzmodule_modulez00);
																	{	/* Ast/unit.scm 216 */

																		{	/* Ast/unit.scm 224 */
																			bool_t BgL_testz00_4462;

																			if (PAIRP(BgL_defz00_1445))
																				{	/* Ast/unit.scm 224 */
																					if (
																						(CAR(CDR(BgL_defz00_1445)) ==
																							CNST_TABLE_REF(((long) 11))))
																						{	/* Ast/unit.scm 226 */
																							bool_t BgL__ortest_3538z00_1465;

																							if (BGl_iszd2azf3z21zz__objectz00
																								(BgL_globalz00_1446,
																									BGl_globalz00zzast_varz00))
																								{	/* Ast/unit.scm 226 */
																									BgL__ortest_3538z00_1465 =
																										((bool_t) 0);
																								}
																							else
																								{	/* Ast/unit.scm 226 */
																									BgL__ortest_3538z00_1465 =
																										((bool_t) 1);
																								}
																							if (BgL__ortest_3538z00_1465)
																								{	/* Ast/unit.scm 226 */
																									BgL_testz00_4462 =
																										BgL__ortest_3538z00_1465;
																								}
																							else
																								{	/* Ast/unit.scm 227 */
																									obj_t BgL_auxz00_4473;

																									{
																										BgL_variablez00_bglt
																											BgL_auxz00_4474;
																										BgL_auxz00_4474 =
																											(BgL_variablez00_bglt)
																											(BgL_globalz00_1446);
																										BgL_auxz00_4473 =
																											(((BgL_variablez00_bglt)
																												CREF(BgL_auxz00_4474))->
																											BgL_accessz00);
																									}
																									BgL_testz00_4462 =
																										(BgL_auxz00_4473 ==
																										CNST_TABLE_REF(((long)
																												11)));
																						}}
																					else
																						{	/* Ast/unit.scm 225 */
																							BgL_testz00_4462 = ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Ast/unit.scm 224 */
																					BgL_testz00_4462 = ((bool_t) 1);
																				}
																			if (BgL_testz00_4462)
																				{	/* Ast/unit.scm 234 */
																					obj_t BgL_arg3974z00_1448;

																					obj_t BgL_arg3975z00_1449;

																					{	/* Ast/unit.scm 234 */
																						obj_t BgL_arg3976z00_1450;

																						{	/* Ast/unit.scm 234 */
																							obj_t BgL_arg3977z00_1451;

																							{	/* Ast/unit.scm 234 */
																								obj_t BgL_pairz00_3623;

																								BgL_pairz00_3623 =
																									BgL_sexpz00_34;
																								BgL_arg3977z00_1451 =
																									CDR(CDR(BgL_pairz00_3623));
																							}
																							BgL_arg3976z00_1450 =
																								BGl_findzd2locationzd2zztools_locationz00
																								(BgL_arg3977z00_1451);
																						}
																						BgL_arg3974z00_1448 =
																							BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																							(BgL_expz00_1138, BgL_sexpz00_34,
																							BgL_arg3976z00_1450);
																					}
																					BgL_arg3975z00_1449 =
																						CNST_TABLE_REF(((long) 12));
																					return
																						BGl_makezd2sfunzd2definitionz00zzast_unitz00
																						(BgL_varz00_1136,
																						BGl_za2moduleza2z00zzmodule_modulez00,
																						BgL_argsz00_1137,
																						BgL_arg3974z00_1448, BgL_sexpz00_34,
																						BgL_arg3975z00_1449);
																				}
																			else
																				{	/* Ast/unit.scm 237 */
																					obj_t BgL_newzd2sexpzd2_1452;

																					{	/* Ast/unit.scm 237 */
																						obj_t BgL_arg3978z00_1453;

																						obj_t BgL_arg3979z00_1454;

																						BgL_arg3978z00_1453 =
																							CNST_TABLE_REF(((long) 3));
																						{	/* Ast/unit.scm 237 */
																							obj_t BgL_arg3980z00_1455;

																							{	/* Ast/unit.scm 237 */
																								obj_t BgL_arg3984z00_1459;

																								obj_t BgL_arg3985z00_1460;

																								BgL_arg3984z00_1459 =
																									CNST_TABLE_REF(((long) 13));
																								{	/* Ast/unit.scm 237 */
																									obj_t BgL_arg3986z00_1461;

																									BgL_arg3986z00_1461 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_expz00_1138, BNIL);
																									{	/* Ast/unit.scm 237 */
																										obj_t BgL_list3987z00_1462;

																										BgL_list3987z00_1462 =
																											MAKE_PAIR
																											(BgL_arg3986z00_1461,
																											BNIL);
																										BgL_arg3985z00_1460 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_argsz00_1137,
																											BgL_list3987z00_1462);
																								}}
																								BgL_arg3980z00_1455 =
																									MAKE_PAIR(BgL_arg3984z00_1459,
																									BgL_arg3985z00_1460);
																							}
																							{	/* Ast/unit.scm 237 */
																								obj_t BgL_list3982z00_1457;

																								{	/* Ast/unit.scm 237 */
																									obj_t BgL_arg3983z00_1458;

																									BgL_arg3983z00_1458 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list3982z00_1457 =
																										MAKE_PAIR
																										(BgL_arg3980z00_1455,
																										BgL_arg3983z00_1458);
																								}
																								BgL_arg3979z00_1454 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_varz00_1136,
																									BgL_list3982z00_1457);
																						}}
																						BgL_newzd2sexpzd2_1452 =
																							MAKE_PAIR(BgL_arg3978z00_1453,
																							BgL_arg3979z00_1454);
																					}
																					BGl_replacez12z12zztools_miscz00
																						(BgL_sexpz00_34,
																						BgL_newzd2sexpzd2_1452);
																					return
																						BGl_makezd2svarzd2definitionz00zzast_unitz00
																						(BgL_varz00_1136, BgL_sexpz00_34);
																				}
																		}
																	}
																}
															}
														}
													}
												else
													{	/* Ast/unit.scm 208 */
														obj_t BgL_cdrzd21728zd2_1195;

														BgL_cdrzd21728zd2_1195 =
															CDR(BgL_cdrzd21700zd2_1186);
														if (PAIRP(BgL_cdrzd21728zd2_1195))
															{	/* Ast/unit.scm 208 */
																obj_t BgL_carzd21732zd2_1197;

																BgL_carzd21732zd2_1197 =
																	CAR(BgL_cdrzd21728zd2_1195);
																if (PAIRP(BgL_carzd21732zd2_1197))
																	{	/* Ast/unit.scm 208 */
																		obj_t BgL_cdrzd21737zd2_1199;

																		BgL_cdrzd21737zd2_1199 =
																			CDR(BgL_carzd21732zd2_1197);
																		if (
																			(CAR(BgL_carzd21732zd2_1197) ==
																				CNST_TABLE_REF(((long) 13))))
																			{	/* Ast/unit.scm 208 */
																				if (PAIRP(BgL_cdrzd21737zd2_1199))
																					{	/* Ast/unit.scm 208 */
																						if (NULLP(CDR
																								(BgL_cdrzd21728zd2_1195)))
																							{	/* Ast/unit.scm 208 */
																								BgL_varz00_1140 =
																									CAR(BgL_cdrzd21700zd2_1186);
																								BgL_argsz00_1141 =
																									CAR(BgL_cdrzd21737zd2_1199);
																								BgL_expz00_1142 =
																									CDR(BgL_cdrzd21737zd2_1199);
																								{	/* Ast/unit.scm 241 */
																									obj_t BgL_idz00_1473;

																									BgL_idz00_1473 =
																										BGl_idzd2ofzd2idz00zzast_identz00
																										(BgL_varz00_1140,
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_sexpz00_34));
																									{	/* Ast/unit.scm 241 */
																										obj_t BgL_defz00_1474;

																										BgL_defz00_1474 =
																											BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																											(BgL_idz00_1473,
																											BgL_gdefsz00_35);
																										{	/* Ast/unit.scm 242 */
																											obj_t BgL_globalz00_1475;

																											BgL_globalz00_1475 =
																												BGl_findzd2globalzf2modulez20zzast_envz00
																												(BgL_idz00_1473,
																												BGl_za2moduleza2z00zzmodule_modulez00);
																											{	/* Ast/unit.scm 243 */

																												{	/* Ast/unit.scm 245 */
																													bool_t
																														BgL_testz00_4520;
																													if ((CAR(CDR
																																(BgL_defz00_1474))
																															==
																															CNST_TABLE_REF((
																																	(long) 11))))
																														{	/* Ast/unit.scm 246 */
																															bool_t
																																BgL__ortest_3539z00_1482;
																															if (BGl_iszd2azf3z21zz__objectz00(BgL_globalz00_1475, BGl_globalz00zzast_varz00))
																																{	/* Ast/unit.scm 246 */
																																	BgL__ortest_3539z00_1482
																																		=
																																		((bool_t)
																																		0);
																																}
																															else
																																{	/* Ast/unit.scm 246 */
																																	BgL__ortest_3539z00_1482
																																		=
																																		((bool_t)
																																		1);
																																}
																															if (BgL__ortest_3539z00_1482)
																																{	/* Ast/unit.scm 246 */
																																	BgL_testz00_4520
																																		=
																																		BgL__ortest_3539z00_1482;
																																}
																															else
																																{	/* Ast/unit.scm 247 */
																																	obj_t
																																		BgL_auxz00_4529;
																																	{
																																		BgL_variablez00_bglt
																																			BgL_auxz00_4530;
																																		BgL_auxz00_4530
																																			=
																																			(BgL_variablez00_bglt)
																																			(BgL_globalz00_1475);
																																		BgL_auxz00_4529
																																			=
																																			(((BgL_variablez00_bglt) CREF(BgL_auxz00_4530))->BgL_accessz00);
																																	}
																																	BgL_testz00_4520
																																		=
																																		(BgL_auxz00_4529
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				11)));
																														}}
																													else
																														{	/* Ast/unit.scm 245 */
																															BgL_testz00_4520 =
																																((bool_t) 0);
																														}
																													if (BgL_testz00_4520)
																														{	/* Ast/unit.scm 254 */
																															obj_t
																																BgL_arg3997z00_1477;
																															obj_t
																																BgL_arg3998z00_1478;
																															{	/* Ast/unit.scm 254 */
																																obj_t
																																	BgL_arg3999z00_1479;
																																{	/* Ast/unit.scm 254 */
																																	obj_t
																																		BgL_arg4000z00_1480;
																																	{	/* Ast/unit.scm 254 */
																																		obj_t
																																			BgL_pairz00_3631;
																																		BgL_pairz00_3631
																																			=
																																			BgL_sexpz00_34;
																																		BgL_arg4000z00_1480
																																			=
																																			CDR(CDR
																																			(BgL_pairz00_3631));
																																	}
																																	BgL_arg3999z00_1479
																																		=
																																		BGl_findzd2locationzd2zztools_locationz00
																																		(BgL_arg4000z00_1480);
																																}
																																BgL_arg3997z00_1477
																																	=
																																	BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																																	(BgL_expz00_1142,
																																	BgL_sexpz00_34,
																																	BgL_arg3999z00_1479);
																															}
																															BgL_arg3998z00_1478
																																=
																																CNST_TABLE_REF((
																																	(long) 12));
																															return
																																BGl_makezd2sfunzd2definitionz00zzast_unitz00
																																(BgL_varz00_1140,
																																BGl_za2moduleza2z00zzmodule_modulez00,
																																BgL_argsz00_1141,
																																BgL_arg3997z00_1477,
																																BgL_sexpz00_34,
																																BgL_arg3998z00_1478);
																														}
																													else
																														{	/* Ast/unit.scm 245 */
																															return
																																BGl_makezd2svarzd2definitionz00zzast_unitz00
																																(BgL_varz00_1140,
																																BgL_sexpz00_34);
																														}
																												}
																											}
																										}
																									}
																								}
																							}
																						else
																							{	/* Ast/unit.scm 208 */
																								obj_t BgL_cdrzd21778zd2_1206;

																								BgL_cdrzd21778zd2_1206 =
																									CDR(BgL_sexpz00_34);
																								return
																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																									(CAR(BgL_cdrzd21778zd2_1206),
																									BgL_sexpz00_34);
																							}
																					}
																				else
																					{	/* Ast/unit.scm 208 */
																						obj_t BgL_cdrzd21805zd2_1210;

																						BgL_cdrzd21805zd2_1210 =
																							CDR(BgL_sexpz00_34);
																						{	/* Ast/unit.scm 208 */
																							obj_t BgL_cdrzd21810zd2_1211;

																							BgL_cdrzd21810zd2_1211 =
																								CDR(BgL_cdrzd21805zd2_1210);
																							{	/* Ast/unit.scm 208 */
																								obj_t BgL_carzd21814zd2_1212;

																								BgL_carzd21814zd2_1212 =
																									CAR(BgL_cdrzd21810zd2_1211);
																								if (SYMBOLP
																									(BgL_carzd21814zd2_1212))
																									{	/* Ast/unit.scm 208 */
																										if (NULLP(CDR
																												(BgL_cdrzd21810zd2_1211)))
																											{	/* Ast/unit.scm 208 */
																												BgL_varz00_1147 =
																													CAR
																													(BgL_cdrzd21805zd2_1210);
																												BgL_var2z00_1148 =
																													BgL_carzd21814zd2_1212;
																											BgL_tagzd21652zd2_1149:
																												{	/* Ast/unit.scm 262 */
																													obj_t BgL_defz00_1491;

																													BgL_defz00_1491 =
																														BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																														(BGl_idzd2ofzd2idz00zzast_identz00
																														(BgL_varz00_1147,
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_sexpz00_34)),
																														BgL_gdefsz00_35);
																													if ((CAR(CDR
																																(BgL_defz00_1491))
																															==
																															CNST_TABLE_REF((
																																	(long) 11))))
																														{	/* Ast/unit.scm 264 */
																															obj_t
																																BgL_gz00_1493;
																															BgL_gz00_1493 =
																																BGl_findzd2globalzd2zzast_envz00
																																(BgL_var2z00_1148,
																																BNIL);
																															{	/* Ast/unit.scm 264 */
																																obj_t
																																	BgL_arityz00_1494;
																																if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1493, BGl_globalz00zzast_varz00))
																																	{	/* Ast/unit.scm 266 */
																																		bool_t
																																			BgL_testz00_4567;
																																		{	/* Ast/unit.scm 266 */
																																			BgL_valuez00_bglt
																																				BgL_arg4015z00_1502;
																																			{
																																				BgL_variablez00_bglt
																																					BgL_auxz00_4568;
																																				BgL_auxz00_4568
																																					=
																																					(BgL_variablez00_bglt)
																																					(
																																					(BgL_globalz00_bglt)
																																					(BgL_gz00_1493));
																																				BgL_arg4015z00_1502
																																					=
																																					(((BgL_variablez00_bglt) CREF(BgL_auxz00_4568))->BgL_valuez00);
																																			}
																																			{	/* Ast/unit.scm 266 */
																																				obj_t
																																					BgL_obj1856z00_3646;
																																				BgL_obj1856z00_3646
																																					=
																																					(obj_t)
																																					(BgL_arg4015z00_1502);
																																				BgL_testz00_4567
																																					=
																																					BGl_iszd2azf3z21zz__objectz00
																																					(BgL_obj1856z00_3646,
																																					BGl_funz00zzast_varz00);
																																			}
																																		}
																																		if (BgL_testz00_4567)
																																			{	/* Ast/unit.scm 267 */
																																				BgL_funz00_bglt
																																					BgL_obj1813z00_3648;
																																				{	/* Ast/unit.scm 267 */
																																					BgL_variablez00_bglt
																																						BgL_obj1611z00_3647;
																																					BgL_obj1611z00_3647
																																						=
																																						(BgL_variablez00_bglt)
																																						(
																																						(BgL_globalz00_bglt)
																																						(BgL_gz00_1493));
																																					BgL_obj1813z00_3648
																																						=
																																						(BgL_funz00_bglt)
																																						((((BgL_variablez00_bglt) CREF(BgL_obj1611z00_3647))->BgL_valuez00));
																																				}
																																				BgL_arityz00_1494
																																					=
																																					BINT((
																																						((BgL_funz00_bglt) CREF(BgL_obj1813z00_3648))->BgL_arityz00));
																																			}
																																		else
																																			{	/* Ast/unit.scm 266 */
																																				BgL_arityz00_1494
																																					=
																																					BFALSE;
																																			}
																																	}
																																else
																																	{	/* Ast/unit.scm 265 */
																																		BgL_arityz00_1494
																																			= BFALSE;
																																	}
																																{	/* Ast/unit.scm 265 */

																																	if (INTEGERP
																																		(BgL_arityz00_1494))
																																		{	/* Ast/unit.scm 268 */
																																			if (BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_1493))
																																				{	/* Ast/unit.scm 270 */
																																					BGl_userzd2warningzd2zztools_errorz00
																																						(BgL_varz00_1147,
																																						BGl_string5070z00zzast_unitz00,
																																						BgL_sexpz00_34);
																																					return
																																						BGl_makezd2svarzd2definitionz00zzast_unitz00
																																						(BgL_varz00_1147,
																																						BgL_sexpz00_34);
																																				}
																																			else
																																				{	/* Ast/unit.scm 270 */
																																					if (BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_1493))
																																						{	/* Ast/unit.scm 275 */
																																							BGl_userzd2warningzd2zztools_errorz00
																																								(BgL_varz00_1147,
																																								BGl_string5071z00zzast_unitz00,
																																								BgL_sexpz00_34);
																																							return
																																								BGl_makezd2svarzd2definitionz00zzast_unitz00
																																								(BgL_varz00_1147,
																																								BgL_sexpz00_34);
																																						}
																																					else
																																						{
																																							obj_t
																																								BgL_sexpz00_4590;
																																							BgL_sexpz00_4590
																																								=
																																								BGl_etazd2expansezd2zzast_unitz00
																																								(BgL_sexpz00_34,
																																								BgL_arityz00_1494);
																																							BgL_sexpz00_34
																																								=
																																								BgL_sexpz00_4590;
																																							goto
																																								BGl_toplevelzd2ze3astz31zzast_unitz00;
																																						}
																																				}
																																		}
																																	else
																																		{	/* Ast/unit.scm 268 */
																																			return
																																				BGl_makezd2svarzd2definitionz00zzast_unitz00
																																				(BgL_varz00_1147,
																																				BgL_sexpz00_34);
																																		}
																																}
																															}
																														}
																													else
																														{	/* Ast/unit.scm 263 */
																															return
																																BGl_makezd2svarzd2definitionz00zzast_unitz00
																																(BgL_varz00_1147,
																																BgL_sexpz00_34);
																														}
																												}
																											}
																										else
																											{	/* Ast/unit.scm 208 */
																												return
																													BGl_makezd2svarzd2definitionz00zzast_unitz00
																													(CAR
																													(BgL_cdrzd21805zd2_1210),
																													BgL_sexpz00_34);
																											}
																									}
																								else
																									{	/* Ast/unit.scm 208 */
																										return
																											BGl_makezd2svarzd2definitionz00zzast_unitz00
																											(CAR
																											(BgL_cdrzd21805zd2_1210),
																											BgL_sexpz00_34);
																									}
																							}
																						}
																					}
																			}
																		else
																			{	/* Ast/unit.scm 208 */
																				obj_t BgL_cdrzd21881zd2_1223;

																				BgL_cdrzd21881zd2_1223 =
																					CDR(BgL_sexpz00_34);
																				{	/* Ast/unit.scm 208 */
																					obj_t BgL_cdrzd21886zd2_1224;

																					BgL_cdrzd21886zd2_1224 =
																						CDR(BgL_cdrzd21881zd2_1223);
																					{	/* Ast/unit.scm 208 */
																						obj_t BgL_carzd21890zd2_1225;

																						BgL_carzd21890zd2_1225 =
																							CAR(BgL_cdrzd21886zd2_1224);
																						{	/* Ast/unit.scm 208 */
																							obj_t BgL_cdrzd21894zd2_1226;

																							BgL_cdrzd21894zd2_1226 =
																								CDR(BgL_carzd21890zd2_1225);
																							if (
																								(CAR(BgL_carzd21890zd2_1225) ==
																									CNST_TABLE_REF(((long) 2))))
																								{	/* Ast/unit.scm 208 */
																									if (PAIRP
																										(BgL_cdrzd21894zd2_1226))
																										{	/* Ast/unit.scm 208 */
																											if (NULLP(CDR
																													(BgL_cdrzd21894zd2_1226)))
																												{	/* Ast/unit.scm 208 */
																													if (NULLP(CDR
																															(BgL_cdrzd21886zd2_1224)))
																														{	/* Ast/unit.scm 208 */
																															obj_t
																																BgL_arg3824z00_1232;
																															BgL_arg3824z00_1232
																																=
																																CAR
																																(BgL_cdrzd21894zd2_1226);
																															{	/* Ast/unit.scm 208 */
																																obj_t
																																	BgL_arg4009z00_3348;
																																{	/* Ast/unit.scm 208 */
																																	obj_t
																																		BgL_pairz00_3349;
																																	BgL_pairz00_3349
																																		=
																																		BgL_sexpz00_34;
																																	BgL_arg4009z00_3348
																																		=
																																		CDR(CDR
																																		(BgL_pairz00_3349));
																																}
																																SET_CAR
																																	(BgL_arg4009z00_3348,
																																	BgL_arg3824z00_1232);
																															}
																															{

																																goto
																																	BGl_toplevelzd2ze3astz31zzast_unitz00;
																															}
																														}
																													else
																														{	/* Ast/unit.scm 208 */
																															return
																																BGl_makezd2svarzd2definitionz00zzast_unitz00
																																(CAR
																																(BgL_cdrzd21881zd2_1223),
																																BgL_sexpz00_34);
																														}
																												}
																											else
																												{	/* Ast/unit.scm 208 */
																													obj_t
																														BgL_cdrzd21947zd2_1238;
																													BgL_cdrzd21947zd2_1238
																														=
																														CDR
																														(BgL_cdrzd21881zd2_1223);
																													{	/* Ast/unit.scm 208 */
																														obj_t
																															BgL_carzd21951zd2_1239;
																														BgL_carzd21951zd2_1239
																															=
																															CAR
																															(BgL_cdrzd21947zd2_1238);
																														if (SYMBOLP
																															(BgL_carzd21951zd2_1239))
																															{	/* Ast/unit.scm 208 */
																																if (NULLP(CDR
																																		(BgL_cdrzd21947zd2_1238)))
																																	{
																																		obj_t
																																			BgL_var2z00_4630;
																																		obj_t
																																			BgL_varz00_4628;
																																		BgL_varz00_4628
																																			=
																																			CAR
																																			(BgL_cdrzd21881zd2_1223);
																																		BgL_var2z00_4630
																																			=
																																			BgL_carzd21951zd2_1239;
																																		BgL_var2z00_1148
																																			=
																																			BgL_var2z00_4630;
																																		BgL_varz00_1147
																																			=
																																			BgL_varz00_4628;
																																		goto
																																			BgL_tagzd21652zd2_1149;
																																	}
																																else
																																	{	/* Ast/unit.scm 208 */
																																		obj_t
																																			BgL_cdrzd21973zd2_1243;
																																		BgL_cdrzd21973zd2_1243
																																			=
																																			CDR
																																			(BgL_sexpz00_34);
																																		return
																																			BGl_makezd2svarzd2definitionz00zzast_unitz00
																																			(CAR
																																			(BgL_cdrzd21973zd2_1243),
																																			BgL_sexpz00_34);
																																	}
																															}
																														else
																															{	/* Ast/unit.scm 208 */
																																obj_t
																																	BgL_cdrzd21999zd2_1247;
																																BgL_cdrzd21999zd2_1247
																																	=
																																	CDR
																																	(BgL_sexpz00_34);
																																return
																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																	(CAR
																																	(BgL_cdrzd21999zd2_1247),
																																	BgL_sexpz00_34);
																															}
																													}
																												}
																										}
																									else
																										{	/* Ast/unit.scm 208 */
																											obj_t
																												BgL_cdrzd22022zd2_1252;
																											BgL_cdrzd22022zd2_1252 =
																												CDR
																												(BgL_cdrzd21881zd2_1223);
																											{	/* Ast/unit.scm 208 */
																												obj_t
																													BgL_carzd22026zd2_1253;
																												BgL_carzd22026zd2_1253 =
																													CAR
																													(BgL_cdrzd22022zd2_1252);
																												if (SYMBOLP
																													(BgL_carzd22026zd2_1253))
																													{	/* Ast/unit.scm 208 */
																														if (NULLP(CDR
																																(BgL_cdrzd22022zd2_1252)))
																															{
																																obj_t
																																	BgL_var2z00_4646;
																																obj_t
																																	BgL_varz00_4644;
																																BgL_varz00_4644
																																	=
																																	CAR
																																	(BgL_cdrzd21881zd2_1223);
																																BgL_var2z00_4646
																																	=
																																	BgL_carzd22026zd2_1253;
																																BgL_var2z00_1148
																																	=
																																	BgL_var2z00_4646;
																																BgL_varz00_1147
																																	=
																																	BgL_varz00_4644;
																																goto
																																	BgL_tagzd21652zd2_1149;
																															}
																														else
																															{	/* Ast/unit.scm 208 */
																																obj_t
																																	BgL_cdrzd22048zd2_1257;
																																BgL_cdrzd22048zd2_1257
																																	=
																																	CDR
																																	(BgL_sexpz00_34);
																																return
																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																	(CAR
																																	(BgL_cdrzd22048zd2_1257),
																																	BgL_sexpz00_34);
																															}
																													}
																												else
																													{	/* Ast/unit.scm 208 */
																														obj_t
																															BgL_cdrzd22074zd2_1261;
																														BgL_cdrzd22074zd2_1261
																															=
																															CDR
																															(BgL_sexpz00_34);
																														return
																															BGl_makezd2svarzd2definitionz00zzast_unitz00
																															(CAR
																															(BgL_cdrzd22074zd2_1261),
																															BgL_sexpz00_34);
																													}
																											}
																										}
																								}
																							else
																								{	/* Ast/unit.scm 208 */
																									obj_t BgL_cdrzd22097zd2_1265;

																									BgL_cdrzd22097zd2_1265 =
																										CDR(BgL_cdrzd21881zd2_1223);
																									{	/* Ast/unit.scm 208 */
																										obj_t
																											BgL_carzd22101zd2_1266;
																										BgL_carzd22101zd2_1266 =
																											CAR
																											(BgL_cdrzd22097zd2_1265);
																										if (SYMBOLP
																											(BgL_carzd22101zd2_1266))
																											{	/* Ast/unit.scm 208 */
																												if (NULLP(CDR
																														(BgL_cdrzd22097zd2_1265)))
																													{
																														obj_t
																															BgL_var2z00_4662;
																														obj_t
																															BgL_varz00_4660;
																														BgL_varz00_4660 =
																															CAR
																															(BgL_cdrzd21881zd2_1223);
																														BgL_var2z00_4662 =
																															BgL_carzd22101zd2_1266;
																														BgL_var2z00_1148 =
																															BgL_var2z00_4662;
																														BgL_varz00_1147 =
																															BgL_varz00_4660;
																														goto
																															BgL_tagzd21652zd2_1149;
																													}
																												else
																													{	/* Ast/unit.scm 208 */
																														obj_t
																															BgL_cdrzd22123zd2_1270;
																														BgL_cdrzd22123zd2_1270
																															=
																															CDR
																															(BgL_sexpz00_34);
																														return
																															BGl_makezd2svarzd2definitionz00zzast_unitz00
																															(CAR
																															(BgL_cdrzd22123zd2_1270),
																															BgL_sexpz00_34);
																													}
																											}
																										else
																											{	/* Ast/unit.scm 208 */
																												obj_t
																													BgL_cdrzd22142zd2_1274;
																												BgL_cdrzd22142zd2_1274 =
																													CDR(BgL_sexpz00_34);
																												{	/* Ast/unit.scm 208 */
																													obj_t
																														BgL_cdrzd22148zd2_1275;
																													BgL_cdrzd22148zd2_1275
																														=
																														CDR
																														(BgL_cdrzd22142zd2_1274);
																													{	/* Ast/unit.scm 208 */
																														obj_t
																															BgL_carzd22153zd2_1276;
																														BgL_carzd22153zd2_1276
																															=
																															CAR
																															(BgL_cdrzd22148zd2_1275);
																														{	/* Ast/unit.scm 208 */
																															obj_t
																																BgL_cdrzd22158zd2_1277;
																															BgL_cdrzd22158zd2_1277
																																=
																																CDR
																																(BgL_carzd22153zd2_1276);
																															if ((CAR
																																	(BgL_carzd22153zd2_1276)
																																	==
																																	CNST_TABLE_REF
																																	(((long) 1))))
																																{	/* Ast/unit.scm 208 */
																																	if (PAIRP
																																		(BgL_cdrzd22158zd2_1277))
																																		{	/* Ast/unit.scm 208 */
																																			obj_t
																																				BgL_carzd22161zd2_1280;
																																			obj_t
																																				BgL_cdrzd22162zd2_1281;
																																			BgL_carzd22161zd2_1280
																																				=
																																				CAR
																																				(BgL_cdrzd22158zd2_1277);
																																			BgL_cdrzd22162zd2_1281
																																				=
																																				CDR
																																				(BgL_cdrzd22158zd2_1277);
																																			if (SYMBOLP(BgL_carzd22161zd2_1280))
																																				{	/* Ast/unit.scm 208 */
																																					if (PAIRP(BgL_cdrzd22162zd2_1281))
																																						{	/* Ast/unit.scm 208 */
																																							obj_t
																																								BgL_carzd22167zd2_1284;
																																							BgL_carzd22167zd2_1284
																																								=
																																								CAR
																																								(BgL_cdrzd22162zd2_1281);
																																							if (SYMBOLP(BgL_carzd22167zd2_1284))
																																								{	/* Ast/unit.scm 208 */
																																									if (NULLP(CDR(BgL_cdrzd22162zd2_1281)))
																																										{	/* Ast/unit.scm 208 */
																																											if (NULLP(CDR(BgL_cdrzd22148zd2_1275)))
																																												{	/* Ast/unit.scm 208 */
																																													BgL_varz00_1150
																																														=
																																														CAR
																																														(BgL_cdrzd22142zd2_1274);
																																													BgL_var2z00_1151
																																														=
																																														BgL_carzd22161zd2_1280;
																																													BgL_modulez00_1152
																																														=
																																														BgL_carzd22167zd2_1284;
																																													{	/* Ast/unit.scm 286 */
																																														obj_t
																																															BgL_defz00_1509;
																																														BgL_defz00_1509
																																															=
																																															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
																																															(BGl_idzd2ofzd2idz00zzast_identz00
																																															(BgL_varz00_1150,
																																																BGl_findzd2locationzd2zztools_locationz00
																																																(BgL_sexpz00_34)),
																																															BgL_gdefsz00_35);
																																														if ((CAR(CDR(BgL_defz00_1509)) == CNST_TABLE_REF(((long) 11))))
																																															{	/* Ast/unit.scm 288 */
																																																obj_t
																																																	BgL_gz00_1511;
																																																BgL_gz00_1511
																																																	=
																																																	BGl_findzd2globalzf2modulez20zzast_envz00
																																																	(BgL_var2z00_1151,
																																																	BgL_modulez00_1152);
																																																{	/* Ast/unit.scm 288 */
																																																	obj_t
																																																		BgL_arityz00_1512;
																																																	if (BGl_iszd2azf3z21zz__objectz00(BgL_gz00_1511, BGl_globalz00zzast_varz00))
																																																		{	/* Ast/unit.scm 290 */
																																																			bool_t
																																																				BgL_testz00_4702;
																																																			{	/* Ast/unit.scm 290 */
																																																				BgL_valuez00_bglt
																																																					BgL_arg4026z00_1519;
																																																				{
																																																					BgL_variablez00_bglt
																																																						BgL_auxz00_4703;
																																																					BgL_auxz00_4703
																																																						=
																																																						(BgL_variablez00_bglt)
																																																						(
																																																						(BgL_globalz00_bglt)
																																																						(BgL_gz00_1511));
																																																					BgL_arg4026z00_1519
																																																						=
																																																						(
																																																						((BgL_variablez00_bglt) CREF(BgL_auxz00_4703))->BgL_valuez00);
																																																				}
																																																				{	/* Ast/unit.scm 290 */
																																																					obj_t
																																																						BgL_obj1856z00_3654;
																																																					BgL_obj1856z00_3654
																																																						=
																																																						(obj_t)
																																																						(BgL_arg4026z00_1519);
																																																					BgL_testz00_4702
																																																						=
																																																						BGl_iszd2azf3z21zz__objectz00
																																																						(BgL_obj1856z00_3654,
																																																						BGl_funz00zzast_varz00);
																																																				}
																																																			}
																																																			if (BgL_testz00_4702)
																																																				{	/* Ast/unit.scm 290 */
																																																					BgL_arityz00_1512
																																																						=
																																																						BINT
																																																						(BGl_globalzd2arityzd2zztools_argsz00
																																																						(BgL_gz00_1511));
																																																				}
																																																			else
																																																				{	/* Ast/unit.scm 290 */
																																																					BgL_arityz00_1512
																																																						=
																																																						BFALSE;
																																																				}
																																																		}
																																																	else
																																																		{	/* Ast/unit.scm 289 */
																																																			BgL_arityz00_1512
																																																				=
																																																				BFALSE;
																																																		}
																																																	{	/* Ast/unit.scm 289 */

																																																		if (INTEGERP(BgL_arityz00_1512))
																																																			{	/* Ast/unit.scm 292 */
																																																				if (BGl_globalzd2optionalzf3z21zzast_varz00(BgL_gz00_1511))
																																																					{	/* Ast/unit.scm 294 */
																																																						BGl_userzd2warningzd2zztools_errorz00
																																																							(BgL_varz00_1150,
																																																							BGl_string5070z00zzast_unitz00,
																																																							BgL_sexpz00_34);
																																																						return
																																																							BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																							(BgL_varz00_1150,
																																																							BgL_sexpz00_34);
																																																					}
																																																				else
																																																					{	/* Ast/unit.scm 294 */
																																																						if (BGl_globalzd2keyzf3z21zzast_varz00(BgL_gz00_1511))
																																																							{	/* Ast/unit.scm 299 */
																																																								BGl_userzd2warningzd2zztools_errorz00
																																																									(BgL_varz00_1150,
																																																									BGl_string5071z00zzast_unitz00,
																																																									BgL_sexpz00_34);
																																																								return
																																																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																									(BgL_varz00_1150,
																																																									BgL_sexpz00_34);
																																																							}
																																																						else
																																																							{
																																																								obj_t
																																																									BgL_sexpz00_4721;
																																																								BgL_sexpz00_4721
																																																									=
																																																									BGl_etazd2expansezd2zzast_unitz00
																																																									(BgL_sexpz00_34,
																																																									BgL_arityz00_1512);
																																																								BgL_sexpz00_34
																																																									=
																																																									BgL_sexpz00_4721;
																																																								goto
																																																									BGl_toplevelzd2ze3astz31zzast_unitz00;
																																																							}
																																																					}
																																																			}
																																																		else
																																																			{	/* Ast/unit.scm 292 */
																																																				return
																																																					BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																					(BgL_varz00_1150,
																																																					BgL_sexpz00_34);
																																																			}
																																																	}
																																																}
																																															}
																																														else
																																															{	/* Ast/unit.scm 287 */
																																																return
																																																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																																																	(BgL_varz00_1150,
																																																	BgL_sexpz00_34);
																																															}
																																													}
																																												}
																																											else
																																												{	/* Ast/unit.scm 208 */
																																													return
																																														BGl_makezd2svarzd2definitionz00zzast_unitz00
																																														(CAR
																																														(BgL_cdrzd22142zd2_1274),
																																														BgL_sexpz00_34);
																																												}
																																										}
																																									else
																																										{	/* Ast/unit.scm 208 */
																																											return
																																												BGl_makezd2svarzd2definitionz00zzast_unitz00
																																												(CAR
																																												(BgL_cdrzd22142zd2_1274),
																																												BgL_sexpz00_34);
																																										}
																																								}
																																							else
																																								{	/* Ast/unit.scm 208 */
																																									return
																																										BGl_makezd2svarzd2definitionz00zzast_unitz00
																																										(CAR
																																										(BgL_cdrzd22142zd2_1274),
																																										BgL_sexpz00_34);
																																								}
																																						}
																																					else
																																						{	/* Ast/unit.scm 208 */
																																							return
																																								BGl_makezd2svarzd2definitionz00zzast_unitz00
																																								(CAR
																																								(BgL_cdrzd22142zd2_1274),
																																								BgL_sexpz00_34);
																																						}
																																				}
																																			else
																																				{	/* Ast/unit.scm 208 */
																																					return
																																						BGl_makezd2svarzd2definitionz00zzast_unitz00
																																						(CAR
																																						(BgL_cdrzd22142zd2_1274),
																																						BgL_sexpz00_34);
																																				}
																																		}
																																	else
																																		{	/* Ast/unit.scm 208 */
																																			return
																																				BGl_makezd2svarzd2definitionz00zzast_unitz00
																																				(CAR
																																				(BgL_cdrzd22142zd2_1274),
																																				BgL_sexpz00_34);
																																		}
																																}
																															else
																																{	/* Ast/unit.scm 208 */
																																	return
																																		BGl_makezd2svarzd2definitionz00zzast_unitz00
																																		(CAR
																																		(BgL_cdrzd22142zd2_1274),
																																		BgL_sexpz00_34);
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
																	{	/* Ast/unit.scm 208 */
																		obj_t BgL_cdrzd22309zd2_1318;

																		BgL_cdrzd22309zd2_1318 =
																			CDR(BgL_sexpz00_34);
																		{	/* Ast/unit.scm 208 */
																			obj_t BgL_cdrzd22314zd2_1319;

																			BgL_cdrzd22314zd2_1319 =
																				CDR(BgL_cdrzd22309zd2_1318);
																			{	/* Ast/unit.scm 208 */
																				obj_t BgL_carzd22318zd2_1320;

																				BgL_carzd22318zd2_1320 =
																					CAR(BgL_cdrzd22314zd2_1319);
																				if (SYMBOLP(BgL_carzd22318zd2_1320))
																					{	/* Ast/unit.scm 208 */
																						if (NULLP(CDR
																								(BgL_cdrzd22314zd2_1319)))
																							{
																								obj_t BgL_var2z00_4750;

																								obj_t BgL_varz00_4748;

																								BgL_varz00_4748 =
																									CAR(BgL_cdrzd22309zd2_1318);
																								BgL_var2z00_4750 =
																									BgL_carzd22318zd2_1320;
																								BgL_var2z00_1148 =
																									BgL_var2z00_4750;
																								BgL_varz00_1147 =
																									BgL_varz00_4748;
																								goto BgL_tagzd21652zd2_1149;
																							}
																						else
																							{	/* Ast/unit.scm 208 */
																								return
																									BGl_makezd2svarzd2definitionz00zzast_unitz00
																									(CAR(BgL_cdrzd22309zd2_1318),
																									BgL_sexpz00_34);
																							}
																					}
																				else
																					{	/* Ast/unit.scm 208 */
																						return
																							BGl_makezd2svarzd2definitionz00zzast_unitz00
																							(CAR(BgL_cdrzd22309zd2_1318),
																							BgL_sexpz00_34);
																					}
																			}
																		}
																	}
															}
														else
															{	/* Ast/unit.scm 208 */
																obj_t BgL_cdrzd22409zd2_1331;

																BgL_cdrzd22409zd2_1331 = CDR(BgL_sexpz00_34);
																return
																	BGl_makezd2svarzd2definitionz00zzast_unitz00
																	(CAR(BgL_cdrzd22409zd2_1331), BgL_sexpz00_34);
															}
													}
											}
										else
											{	/* Ast/unit.scm 208 */
											BgL_tagzd21660zd2_1179:
												{	/* Ast/unit.scm 352 */
													obj_t BgL_list4043z00_1536;

													BgL_list4043z00_1536 =
														MAKE_PAIR(BgL_sexpz00_34, BNIL);
													return BgL_list4043z00_1536;
												}
											}
									}
								else
									{	/* Ast/unit.scm 208 */
										if ((CAR(BgL_sexpz00_34) == CNST_TABLE_REF(((long) 16))))
											{	/* Ast/unit.scm 208 */
												if (PAIRP(BgL_cdrzd21700zd2_1186))
													{	/* Ast/unit.scm 208 */
														obj_t BgL_carzd22543zd2_1337;

														BgL_carzd22543zd2_1337 =
															CAR(BgL_cdrzd21700zd2_1186);
														if (PAIRP(BgL_carzd22543zd2_1337))
															{	/* Ast/unit.scm 208 */
																obj_t BgL_carzd22548zd2_1339;

																BgL_carzd22548zd2_1339 =
																	CAR(BgL_carzd22543zd2_1337);
																if (PAIRP(BgL_carzd22548zd2_1339))
																	{	/* Ast/unit.scm 208 */
																		obj_t BgL_cdrzd22553zd2_1341;

																		BgL_cdrzd22553zd2_1341 =
																			CDR(BgL_carzd22548zd2_1339);
																		if (
																			(CAR(BgL_carzd22548zd2_1339) ==
																				CNST_TABLE_REF(((long) 1))))
																			{	/* Ast/unit.scm 208 */
																				if (PAIRP(BgL_cdrzd22553zd2_1341))
																					{	/* Ast/unit.scm 208 */
																						obj_t BgL_cdrzd22557zd2_1344;

																						BgL_cdrzd22557zd2_1344 =
																							CDR(BgL_cdrzd22553zd2_1341);
																						if (PAIRP(BgL_cdrzd22557zd2_1344))
																							{	/* Ast/unit.scm 208 */
																								if (NULLP(CDR
																										(BgL_cdrzd22557zd2_1344)))
																									{	/* Ast/unit.scm 208 */
																										obj_t BgL_arg3899z00_1347;

																										obj_t BgL_arg3900z00_1348;

																										obj_t BgL_arg3901z00_1349;

																										obj_t BgL_arg3902z00_1350;

																										BgL_arg3899z00_1347 =
																											CAR
																											(BgL_cdrzd22553zd2_1341);
																										BgL_arg3900z00_1348 =
																											CAR
																											(BgL_cdrzd22557zd2_1344);
																										BgL_arg3901z00_1349 =
																											CDR
																											(BgL_carzd22543zd2_1337);
																										BgL_arg3902z00_1350 =
																											CDR
																											(BgL_cdrzd21700zd2_1186);
																										{	/* Ast/unit.scm 208 */
																											obj_t BgL_arg4032z00_3502;

																											obj_t BgL_arg4033z00_3503;

																											{	/* Ast/unit.scm 208 */
																												obj_t
																													BgL_arg4034z00_3504;
																												{	/* Ast/unit.scm 208 */
																													obj_t
																														BgL_arg4035z00_3505;
																													{	/* Ast/unit.scm 208 */
																														obj_t
																															BgL_pairz00_3506;
																														BgL_pairz00_3506 =
																															BgL_sexpz00_34;
																														BgL_arg4035z00_3505
																															=
																															CDR(CDR
																															(BgL_pairz00_3506));
																													}
																													BgL_arg4034z00_3504 =
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_arg4035z00_3505);
																												}
																												BgL_arg4032z00_3502 =
																													BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																													(BgL_arg3902z00_1350,
																													BgL_sexpz00_34,
																													BgL_arg4034z00_3504);
																											}
																											BgL_arg4033z00_3503 =
																												CNST_TABLE_REF(((long)
																													14));
																											return
																												BGl_makezd2sfunzd2definitionz00zzast_unitz00
																												(BgL_arg3899z00_1347,
																												BgL_arg3900z00_1348,
																												BgL_arg3901z00_1349,
																												BgL_arg4032z00_3502,
																												BgL_sexpz00_34,
																												BgL_arg4033z00_3503);
																										}
																									}
																								else
																									{	/* Ast/unit.scm 208 */
																										obj_t
																											BgL_cdrzd22573zd2_1351;
																										BgL_cdrzd22573zd2_1351 =
																											CDR(BgL_sexpz00_34);
																										{	/* Ast/unit.scm 208 */
																											obj_t
																												BgL_carzd22577zd2_1352;
																											BgL_carzd22577zd2_1352 =
																												CAR
																												(BgL_cdrzd22573zd2_1351);
																											BgL_varz00_1162 =
																												CAR
																												(BgL_carzd22577zd2_1352);
																											BgL_argsz00_1163 =
																												CDR
																												(BgL_carzd22577zd2_1352);
																											BgL_expz00_1164 =
																												CDR
																												(BgL_cdrzd22573zd2_1351);
																										BgL_tagzd21656zd2_1165:
																											{	/* Ast/unit.scm 327 */
																												obj_t
																													BgL_arg4036z00_1529;
																												obj_t
																													BgL_arg4037z00_1530;
																												{	/* Ast/unit.scm 327 */
																													obj_t
																														BgL_arg4038z00_1531;
																													{	/* Ast/unit.scm 327 */
																														obj_t
																															BgL_arg4039z00_1532;
																														{	/* Ast/unit.scm 327 */
																															obj_t
																																BgL_pairz00_3664;
																															BgL_pairz00_3664 =
																																BgL_sexpz00_34;
																															BgL_arg4039z00_1532
																																=
																																CDR(CDR
																																(BgL_pairz00_3664));
																														}
																														BgL_arg4038z00_1531
																															=
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_arg4039z00_1532);
																													}
																													BgL_arg4036z00_1529 =
																														BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																														(BgL_expz00_1164,
																														BgL_sexpz00_34,
																														BgL_arg4038z00_1531);
																												}
																												BgL_arg4037z00_1530 =
																													CNST_TABLE_REF(((long)
																														14));
																												return
																													BGl_makezd2sfunzd2definitionz00zzast_unitz00
																													(BgL_varz00_1162,
																													BGl_za2moduleza2z00zzmodule_modulez00,
																													BgL_argsz00_1163,
																													BgL_arg4036z00_1529,
																													BgL_sexpz00_34,
																													BgL_arg4037z00_1530);
																											}
																										}
																									}
																							}
																						else
																							{	/* Ast/unit.scm 208 */
																								obj_t BgL_cdrzd22594zd2_1357;

																								BgL_cdrzd22594zd2_1357 =
																									CDR(BgL_sexpz00_34);
																								{	/* Ast/unit.scm 208 */
																									obj_t BgL_carzd22598zd2_1358;

																									BgL_carzd22598zd2_1358 =
																										CAR(BgL_cdrzd22594zd2_1357);
																									{
																										obj_t BgL_expz00_4811;

																										obj_t BgL_argsz00_4809;

																										obj_t BgL_varz00_4807;

																										BgL_varz00_4807 =
																											CAR
																											(BgL_carzd22598zd2_1358);
																										BgL_argsz00_4809 =
																											CDR
																											(BgL_carzd22598zd2_1358);
																										BgL_expz00_4811 =
																											CDR
																											(BgL_cdrzd22594zd2_1357);
																										BgL_expz00_1164 =
																											BgL_expz00_4811;
																										BgL_argsz00_1163 =
																											BgL_argsz00_4809;
																										BgL_varz00_1162 =
																											BgL_varz00_4807;
																										goto BgL_tagzd21656zd2_1165;
																									}
																								}
																							}
																					}
																				else
																					{	/* Ast/unit.scm 208 */
																						obj_t BgL_cdrzd22615zd2_1362;

																						BgL_cdrzd22615zd2_1362 =
																							CDR(BgL_sexpz00_34);
																						{	/* Ast/unit.scm 208 */
																							obj_t BgL_carzd22619zd2_1363;

																							BgL_carzd22619zd2_1363 =
																								CAR(BgL_cdrzd22615zd2_1362);
																							{
																								obj_t BgL_expz00_4819;

																								obj_t BgL_argsz00_4817;

																								obj_t BgL_varz00_4815;

																								BgL_varz00_4815 =
																									CAR(BgL_carzd22619zd2_1363);
																								BgL_argsz00_4817 =
																									CDR(BgL_carzd22619zd2_1363);
																								BgL_expz00_4819 =
																									CDR(BgL_cdrzd22615zd2_1362);
																								BgL_expz00_1164 =
																									BgL_expz00_4819;
																								BgL_argsz00_1163 =
																									BgL_argsz00_4817;
																								BgL_varz00_1162 =
																									BgL_varz00_4815;
																								goto BgL_tagzd21656zd2_1165;
																							}
																						}
																					}
																			}
																		else
																			{	/* Ast/unit.scm 208 */
																				obj_t BgL_cdrzd22636zd2_1367;

																				BgL_cdrzd22636zd2_1367 =
																					CDR(BgL_sexpz00_34);
																				{	/* Ast/unit.scm 208 */
																					obj_t BgL_carzd22640zd2_1368;

																					BgL_carzd22640zd2_1368 =
																						CAR(BgL_cdrzd22636zd2_1367);
																					{
																						obj_t BgL_expz00_4827;

																						obj_t BgL_argsz00_4825;

																						obj_t BgL_varz00_4823;

																						BgL_varz00_4823 =
																							CAR(BgL_carzd22640zd2_1368);
																						BgL_argsz00_4825 =
																							CDR(BgL_carzd22640zd2_1368);
																						BgL_expz00_4827 =
																							CDR(BgL_cdrzd22636zd2_1367);
																						BgL_expz00_1164 = BgL_expz00_4827;
																						BgL_argsz00_1163 = BgL_argsz00_4825;
																						BgL_varz00_1162 = BgL_varz00_4823;
																						goto BgL_tagzd21656zd2_1165;
																					}
																				}
																			}
																	}
																else
																	{	/* Ast/unit.scm 208 */
																		obj_t BgL_cdrzd22657zd2_1374;

																		BgL_cdrzd22657zd2_1374 =
																			CDR(BgL_sexpz00_34);
																		{	/* Ast/unit.scm 208 */
																			obj_t BgL_carzd22661zd2_1375;

																			BgL_carzd22661zd2_1375 =
																				CAR(BgL_cdrzd22657zd2_1374);
																			{
																				obj_t BgL_expz00_4835;

																				obj_t BgL_argsz00_4833;

																				obj_t BgL_varz00_4831;

																				BgL_varz00_4831 =
																					CAR(BgL_carzd22661zd2_1375);
																				BgL_argsz00_4833 =
																					CDR(BgL_carzd22661zd2_1375);
																				BgL_expz00_4835 =
																					CDR(BgL_cdrzd22657zd2_1374);
																				BgL_expz00_1164 = BgL_expz00_4835;
																				BgL_argsz00_1163 = BgL_argsz00_4833;
																				BgL_varz00_1162 = BgL_varz00_4831;
																				goto BgL_tagzd21656zd2_1165;
																			}
																		}
																	}
															}
														else
															{	/* Ast/unit.scm 208 */
																goto BgL_tagzd21660zd2_1179;
															}
													}
												else
													{	/* Ast/unit.scm 208 */
														goto BgL_tagzd21660zd2_1179;
													}
											}
										else
											{	/* Ast/unit.scm 208 */
												obj_t BgL_cdrzd22740zd2_1379;

												BgL_cdrzd22740zd2_1379 = CDR(BgL_sexpz00_34);
												if (
													(CAR(BgL_sexpz00_34) == CNST_TABLE_REF(((long) 17))))
													{	/* Ast/unit.scm 208 */
														if (PAIRP(BgL_cdrzd22740zd2_1379))
															{	/* Ast/unit.scm 208 */
																obj_t BgL_carzd22745zd2_1382;

																BgL_carzd22745zd2_1382 =
																	CAR(BgL_cdrzd22740zd2_1379);
																if (PAIRP(BgL_carzd22745zd2_1382))
																	{	/* Ast/unit.scm 208 */
																		obj_t BgL_carzd22750zd2_1384;

																		BgL_carzd22750zd2_1384 =
																			CAR(BgL_carzd22745zd2_1382);
																		if (PAIRP(BgL_carzd22750zd2_1384))
																			{	/* Ast/unit.scm 208 */
																				obj_t BgL_cdrzd22755zd2_1386;

																				BgL_cdrzd22755zd2_1386 =
																					CDR(BgL_carzd22750zd2_1384);
																				if (
																					(CAR(BgL_carzd22750zd2_1384) ==
																						CNST_TABLE_REF(((long) 1))))
																					{	/* Ast/unit.scm 208 */
																						if (PAIRP(BgL_cdrzd22755zd2_1386))
																							{	/* Ast/unit.scm 208 */
																								obj_t BgL_cdrzd22759zd2_1389;

																								BgL_cdrzd22759zd2_1389 =
																									CDR(BgL_cdrzd22755zd2_1386);
																								if (PAIRP
																									(BgL_cdrzd22759zd2_1389))
																									{	/* Ast/unit.scm 208 */
																										if (NULLP(CDR
																												(BgL_cdrzd22759zd2_1389)))
																											{	/* Ast/unit.scm 208 */
																												return
																													BGl_makezd2genericzd2definitionz00zzast_unitz00
																													(CAR
																													(BgL_cdrzd22755zd2_1386),
																													CAR
																													(BgL_cdrzd22759zd2_1389),
																													CDR
																													(BgL_carzd22745zd2_1382),
																													CDR
																													(BgL_cdrzd22740zd2_1379),
																													BgL_sexpz00_34,
																													BgL_gdefsz00_35);
																											}
																										else
																											{	/* Ast/unit.scm 208 */
																												obj_t
																													BgL_carzd22778zd2_1397;
																												BgL_carzd22778zd2_1397 =
																													CAR
																													(BgL_cdrzd22740zd2_1379);
																												{	/* Ast/unit.scm 208 */
																													obj_t
																														BgL_arg3935z00_1398;
																													obj_t
																														BgL_arg3936z00_1399;
																													obj_t
																														BgL_arg3937z00_1400;
																													BgL_arg3935z00_1398 =
																														CAR
																														(BgL_carzd22778zd2_1397);
																													BgL_arg3936z00_1399 =
																														CDR
																														(BgL_carzd22778zd2_1397);
																													BgL_arg3937z00_1400 =
																														CDR
																														(BgL_cdrzd22740zd2_1379);
																													return
																														BGl_makezd2genericzd2definitionz00zzast_unitz00
																														(BgL_arg3935z00_1398,
																														BGl_za2moduleza2z00zzmodule_modulez00,
																														BgL_arg3936z00_1399,
																														BgL_arg3937z00_1400,
																														BgL_sexpz00_34,
																														BgL_gdefsz00_35);
																												}
																											}
																									}
																								else
																									{	/* Ast/unit.scm 208 */
																										obj_t
																											BgL_carzd22798zd2_1403;
																										BgL_carzd22798zd2_1403 =
																											CAR
																											(BgL_cdrzd22740zd2_1379);
																										{	/* Ast/unit.scm 208 */
																											obj_t BgL_arg3939z00_1404;

																											obj_t BgL_arg3940z00_1405;

																											obj_t BgL_arg3941z00_1406;

																											BgL_arg3939z00_1404 =
																												CAR
																												(BgL_carzd22798zd2_1403);
																											BgL_arg3940z00_1405 =
																												CDR
																												(BgL_carzd22798zd2_1403);
																											BgL_arg3941z00_1406 =
																												CDR
																												(BgL_cdrzd22740zd2_1379);
																											return
																												BGl_makezd2genericzd2definitionz00zzast_unitz00
																												(BgL_arg3939z00_1404,
																												BGl_za2moduleza2z00zzmodule_modulez00,
																												BgL_arg3940z00_1405,
																												BgL_arg3941z00_1406,
																												BgL_sexpz00_34,
																												BgL_gdefsz00_35);
																										}
																									}
																							}
																						else
																							{	/* Ast/unit.scm 208 */
																								obj_t BgL_carzd22818zd2_1408;

																								BgL_carzd22818zd2_1408 =
																									CAR(BgL_cdrzd22740zd2_1379);
																								{	/* Ast/unit.scm 208 */
																									obj_t BgL_arg3942z00_1409;

																									obj_t BgL_arg3943z00_1410;

																									obj_t BgL_arg3944z00_1411;

																									BgL_arg3942z00_1409 =
																										CAR(BgL_carzd22818zd2_1408);
																									BgL_arg3943z00_1410 =
																										CDR(BgL_carzd22818zd2_1408);
																									BgL_arg3944z00_1411 =
																										CDR(BgL_cdrzd22740zd2_1379);
																									return
																										BGl_makezd2genericzd2definitionz00zzast_unitz00
																										(BgL_arg3942z00_1409,
																										BGl_za2moduleza2z00zzmodule_modulez00,
																										BgL_arg3943z00_1410,
																										BgL_arg3944z00_1411,
																										BgL_sexpz00_34,
																										BgL_gdefsz00_35);
																								}
																							}
																					}
																				else
																					{	/* Ast/unit.scm 208 */
																						obj_t BgL_carzd22838zd2_1413;

																						BgL_carzd22838zd2_1413 =
																							CAR(BgL_cdrzd22740zd2_1379);
																						{	/* Ast/unit.scm 208 */
																							obj_t BgL_arg3945z00_1414;

																							obj_t BgL_arg3946z00_1415;

																							obj_t BgL_arg3947z00_1416;

																							BgL_arg3945z00_1414 =
																								CAR(BgL_carzd22838zd2_1413);
																							BgL_arg3946z00_1415 =
																								CDR(BgL_carzd22838zd2_1413);
																							BgL_arg3947z00_1416 =
																								CDR(BgL_cdrzd22740zd2_1379);
																							return
																								BGl_makezd2genericzd2definitionz00zzast_unitz00
																								(BgL_arg3945z00_1414,
																								BGl_za2moduleza2z00zzmodule_modulez00,
																								BgL_arg3946z00_1415,
																								BgL_arg3947z00_1416,
																								BgL_sexpz00_34,
																								BgL_gdefsz00_35);
																						}
																					}
																			}
																		else
																			{	/* Ast/unit.scm 208 */
																				obj_t BgL_carzd22858zd2_1420;

																				BgL_carzd22858zd2_1420 =
																					CAR(BgL_cdrzd22740zd2_1379);
																				{	/* Ast/unit.scm 208 */
																					obj_t BgL_arg3950z00_1421;

																					obj_t BgL_arg3951z00_1422;

																					obj_t BgL_arg3953z00_1423;

																					BgL_arg3950z00_1421 =
																						CAR(BgL_carzd22858zd2_1420);
																					BgL_arg3951z00_1422 =
																						CDR(BgL_carzd22858zd2_1420);
																					BgL_arg3953z00_1423 =
																						CDR(BgL_cdrzd22740zd2_1379);
																					return
																						BGl_makezd2genericzd2definitionz00zzast_unitz00
																						(BgL_arg3950z00_1421,
																						BGl_za2moduleza2z00zzmodule_modulez00,
																						BgL_arg3951z00_1422,
																						BgL_arg3953z00_1423, BgL_sexpz00_34,
																						BgL_gdefsz00_35);
																				}
																			}
																	}
																else
																	{	/* Ast/unit.scm 208 */
																		goto BgL_tagzd21660zd2_1179;
																	}
															}
														else
															{	/* Ast/unit.scm 208 */
																goto BgL_tagzd21660zd2_1179;
															}
													}
												else
													{	/* Ast/unit.scm 208 */
														if (
															(CAR(BgL_sexpz00_34) ==
																CNST_TABLE_REF(((long) 18))))
															{	/* Ast/unit.scm 208 */
																if (PAIRP(BgL_cdrzd22740zd2_1379))
																	{	/* Ast/unit.scm 208 */
																		obj_t BgL_carzd22908zd2_1427;

																		BgL_carzd22908zd2_1427 =
																			CAR(BgL_cdrzd22740zd2_1379);
																		if (PAIRP(BgL_carzd22908zd2_1427))
																			{	/* Ast/unit.scm 208 */
																				obj_t BgL_arg3958z00_1429;

																				obj_t BgL_arg3959z00_1430;

																				obj_t BgL_arg3960z00_1431;

																				BgL_arg3958z00_1429 =
																					CAR(BgL_carzd22908zd2_1427);
																				BgL_arg3959z00_1430 =
																					CDR(BgL_carzd22908zd2_1427);
																				BgL_arg3960z00_1431 =
																					CDR(BgL_cdrzd22740zd2_1379);
																				{	/* Ast/unit.scm 208 */
																					obj_t BgL_arg4040z00_3608;

																					{	/* Ast/unit.scm 208 */
																						obj_t BgL_arg4041z00_3609;

																						{	/* Ast/unit.scm 208 */
																							obj_t BgL_arg4042z00_3610;

																							{	/* Ast/unit.scm 208 */
																								obj_t BgL_pairz00_3611;

																								BgL_pairz00_3611 =
																									BgL_sexpz00_34;
																								BgL_arg4042z00_3610 =
																									CDR(CDR(BgL_pairz00_3611));
																							}
																							BgL_arg4041z00_3609 =
																								BGl_findzd2locationzd2zztools_locationz00
																								(BgL_arg4042z00_3610);
																						}
																						BgL_arg4040z00_3608 =
																							BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00
																							(BgL_arg3960z00_1431,
																							BgL_sexpz00_34,
																							BgL_arg4041z00_3609);
																					}
																					return
																						BGl_makezd2methodzd2definitionz00zzast_unitz00
																						(BgL_arg3958z00_1429,
																						BgL_arg3959z00_1430,
																						BgL_arg4040z00_3608,
																						BgL_sexpz00_34);
																				}
																			}
																		else
																			{	/* Ast/unit.scm 208 */
																				goto BgL_tagzd21660zd2_1179;
																			}
																	}
																else
																	{	/* Ast/unit.scm 208 */
																		goto BgL_tagzd21660zd2_1179;
																	}
															}
														else
															{	/* Ast/unit.scm 208 */
																goto BgL_tagzd21660zd2_1179;
															}
													}
											}
									}
							}
					}
				else
					{	/* Ast/unit.scm 208 */
						goto BgL_tagzd21660zd2_1179;
					}
			}
		}
	}



/* normalize-progn/error */
	obj_t BGl_normaliza7ezd2prognzf2errorz87zzast_unitz00(obj_t BgL_expz00_36,
		obj_t BgL_srcz00_37, obj_t BgL_locz00_38)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 357 */
			if (NULLP(BgL_expz00_36))
				{	/* Ast/unit.scm 359 */
					obj_t BgL_arg4046z00_1539;

					BgL_arg4046z00_1539 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_37);
					return
						(obj_t) (BGl_errorzd2sexpzd2ze3nodeze3zzast_sexpz00
						(BGl_string5072z00zzast_unitz00, BgL_srcz00_37,
							BgL_arg4046z00_1539));
				}
			else
				{	/* Ast/unit.scm 360 */
					obj_t BgL_expz00_1540;

					BgL_expz00_1540 =
						BGl_normaliza7ezd2prognz75zztools_prognz00(BgL_expz00_36);
					if (CBOOL(BgL_locz00_38))
						{	/* Ast/unit.scm 362 */
							if (EXTENDED_PAIRP(BgL_expz00_1540))
								{	/* Ast/unit.scm 364 */
									return BgL_expz00_1540;
								}
							else
								{	/* Ast/unit.scm 364 */
									if (PAIRP(BgL_expz00_1540))
										{	/* Ast/unit.scm 367 */
											obj_t BgL_arg4049z00_1543;

											obj_t BgL_arg4050z00_1544;

											BgL_arg4049z00_1543 = CAR(BgL_expz00_1540);
											BgL_arg4050z00_1544 = CDR(BgL_expz00_1540);
											{	/* Ast/unit.scm 367 */
												obj_t BgL_res5040z00_3685;

												BgL_res5040z00_3685 =
													MAKE_EXTENDED_PAIR(BgL_arg4049z00_1543,
													BgL_arg4050z00_1544, BgL_locz00_38);
												return BgL_res5040z00_3685;
											}
										}
									else
										{	/* Ast/unit.scm 369 */
											obj_t BgL_arg4051z00_1545;

											obj_t BgL_arg4052z00_1546;

											BgL_arg4051z00_1545 = CNST_TABLE_REF(((long) 2));
											{	/* Ast/unit.scm 369 */
												obj_t BgL_list4053z00_1547;

												BgL_list4053z00_1547 = MAKE_PAIR(BgL_expz00_1540, BNIL);
												BgL_arg4052z00_1546 = BgL_list4053z00_1547;
											}
											{	/* Ast/unit.scm 369 */
												obj_t BgL_res5042z00_3691;

												BgL_res5042z00_3691 =
													MAKE_EXTENDED_PAIR(BgL_arg4051z00_1545,
													BgL_arg4052z00_1546, BgL_locz00_38);
												return BgL_res5042z00_3691;
											}
										}
								}
						}
					else
						{	/* Ast/unit.scm 362 */
							return BgL_expz00_1540;
						}
				}
		}
	}



/* eta-expanse */
	obj_t BGl_etazd2expansezd2zzast_unitz00(obj_t BgL_sexpz00_42,
		obj_t BgL_arityz00_43)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 387 */
			{	/* Ast/unit.scm 388 */
				obj_t BgL_argsz00_1555;

				BgL_argsz00_1555 =
					BGl_makezd2nzd2protoz00zztools_argsz00(BgL_arityz00_43);
				{
					obj_t BgL_varz00_1626;

					obj_t BgL_id2z00_1627;

					obj_t BgL_modulez00_1628;

					if (PAIRP(BgL_sexpz00_42))
						{	/* Ast/unit.scm 412 */
							obj_t BgL_cdrzd23017zd2_1567;

							BgL_cdrzd23017zd2_1567 = CDR(BgL_sexpz00_42);
							if ((CAR(BgL_sexpz00_42) == CNST_TABLE_REF(((long) 15))))
								{	/* Ast/unit.scm 412 */
									if (PAIRP(BgL_cdrzd23017zd2_1567))
										{	/* Ast/unit.scm 412 */
											obj_t BgL_cdrzd23022zd2_1570;

											BgL_cdrzd23022zd2_1570 = CDR(BgL_cdrzd23017zd2_1567);
											if (PAIRP(BgL_cdrzd23022zd2_1570))
												{	/* Ast/unit.scm 412 */
													obj_t BgL_carzd23026zd2_1572;

													BgL_carzd23026zd2_1572 = CAR(BgL_cdrzd23022zd2_1570);
													if (PAIRP(BgL_carzd23026zd2_1572))
														{	/* Ast/unit.scm 412 */
															obj_t BgL_cdrzd23031zd2_1574;

															BgL_cdrzd23031zd2_1574 =
																CDR(BgL_carzd23026zd2_1572);
															if (
																(CAR(BgL_carzd23026zd2_1572) ==
																	CNST_TABLE_REF(((long) 1))))
																{	/* Ast/unit.scm 412 */
																	if (PAIRP(BgL_cdrzd23031zd2_1574))
																		{	/* Ast/unit.scm 412 */
																			obj_t BgL_cdrzd23035zd2_1577;

																			BgL_cdrzd23035zd2_1577 =
																				CDR(BgL_cdrzd23031zd2_1574);
																			if (PAIRP(BgL_cdrzd23035zd2_1577))
																				{	/* Ast/unit.scm 412 */
																					if (NULLP(CDR
																							(BgL_cdrzd23035zd2_1577)))
																						{	/* Ast/unit.scm 412 */
																							if (NULLP(CDR
																									(BgL_cdrzd23022zd2_1570)))
																								{	/* Ast/unit.scm 412 */
																									obj_t BgL_arg4071z00_1582;

																									obj_t BgL_arg4072z00_1583;

																									BgL_arg4071z00_1582 =
																										CAR(BgL_cdrzd23031zd2_1574);
																									BgL_arg4072z00_1583 =
																										CAR(BgL_cdrzd23035zd2_1577);
																									{	/* Ast/unit.scm 412 */
																										obj_t BgL_id2z00_3715;

																										BgL_id2z00_3715 =
																											BGl_idzd2ofzd2idz00zzast_identz00
																											(BgL_arg4071z00_1582,
																											BGl_findzd2locationzd2zztools_locationz00
																											(BgL_sexpz00_42));
																										{	/* Ast/unit.scm 412 */

																											{	/* Ast/unit.scm 412 */
																												obj_t BgL_auxz00_4964;

																												BgL_varz00_1626 =
																													BgL_arg4071z00_1582;
																												BgL_id2z00_1627 =
																													BgL_id2z00_3715;
																												BgL_modulez00_1628 =
																													BgL_arg4072z00_1583;
																												if (((long)
																														CINT
																														(BgL_arityz00_43) >=
																														((long) 0)))
																													{	/* Ast/unit.scm 392 */
																														obj_t
																															BgL_arg4107z00_1631;
																														obj_t
																															BgL_arg4108z00_1632;
																														BgL_arg4107z00_1631
																															=
																															CNST_TABLE_REF((
																																(long) 15));
																														{	/* Ast/unit.scm 392 */
																															obj_t
																																BgL_arg4109z00_1633;
																															obj_t
																																BgL_arg4110z00_1634;
																															BgL_arg4109z00_1633
																																=
																																MAKE_PAIR
																																(BgL_varz00_1626,
																																BgL_argsz00_1555);
																															{	/* Ast/unit.scm 393 */
																																obj_t
																																	BgL_arg4114z00_1638;
																																obj_t
																																	BgL_arg4115z00_1639;
																																{	/* Ast/unit.scm 393 */
																																	obj_t
																																		BgL_arg4116z00_1640;
																																	obj_t
																																		BgL_arg4117z00_1641;
																																	BgL_arg4116z00_1640
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			1));
																																	{	/* Ast/unit.scm 393 */
																																		obj_t
																																			BgL_list4118z00_1642;
																																		{	/* Ast/unit.scm 393 */
																																			obj_t
																																				BgL_arg4119z00_1643;
																																			BgL_arg4119z00_1643
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4118z00_1642
																																				=
																																				MAKE_PAIR
																																				(BgL_modulez00_1628,
																																				BgL_arg4119z00_1643);
																																		}
																																		BgL_arg4117z00_1641
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_id2z00_1627,
																																			BgL_list4118z00_1642);
																																	}
																																	BgL_arg4114z00_1638
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4116z00_1640,
																																		BgL_arg4117z00_1641);
																																}
																																BgL_arg4115z00_1639
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_argsz00_1555,
																																	BNIL);
																																BgL_arg4110z00_1634
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4114z00_1638,
																																	BgL_arg4115z00_1639);
																															}
																															{	/* Ast/unit.scm 392 */
																																obj_t
																																	BgL_list4112z00_1636;
																																{	/* Ast/unit.scm 392 */
																																	obj_t
																																		BgL_arg4113z00_1637;
																																	BgL_arg4113z00_1637
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list4112z00_1636
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4110z00_1634,
																																		BgL_arg4113z00_1637);
																																}
																																BgL_arg4108z00_1632
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg4109z00_1633,
																																	BgL_list4112z00_1636);
																														}}
																														BgL_auxz00_4964 =
																															MAKE_PAIR
																															(BgL_arg4107z00_1631,
																															BgL_arg4108z00_1632);
																													}
																												else
																													{	/* Ast/unit.scm 391 */
																														if (
																															((long)
																																CINT
																																(BgL_arityz00_43)
																																== ((long) -1)))
																															{	/* Ast/unit.scm 395 */
																																obj_t
																																	BgL_arg4121z00_1645;
																																obj_t
																																	BgL_arg4122z00_1646;
																																BgL_arg4121z00_1645
																																	=
																																	CNST_TABLE_REF
																																	(((long) 15));
																																{	/* Ast/unit.scm 395 */
																																	obj_t
																																		BgL_arg4123z00_1647;
																																	obj_t
																																		BgL_arg4124z00_1648;
																																	BgL_arg4123z00_1647
																																		=
																																		MAKE_PAIR
																																		(BgL_varz00_1626,
																																		BgL_argsz00_1555);
																																	{	/* Ast/unit.scm 396 */
																																		obj_t
																																			BgL_arg4128z00_1652;
																																		obj_t
																																			BgL_arg4129z00_1653;
																																		BgL_arg4128z00_1652
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				19));
																																		{	/* Ast/unit.scm 396 */
																																			obj_t
																																				BgL_arg4130z00_1654;
																																			{	/* Ast/unit.scm 396 */
																																				obj_t
																																					BgL_arg4134z00_1658;
																																				obj_t
																																					BgL_arg4135z00_1659;
																																				BgL_arg4134z00_1658
																																					=
																																					CNST_TABLE_REF
																																					(((long) 1));
																																				{	/* Ast/unit.scm 396 */
																																					obj_t
																																						BgL_list4136z00_1660;
																																					{	/* Ast/unit.scm 396 */
																																						obj_t
																																							BgL_arg4137z00_1661;
																																						BgL_arg4137z00_1661
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_list4136z00_1660
																																							=
																																							MAKE_PAIR
																																							(BgL_modulez00_1628,
																																							BgL_arg4137z00_1661);
																																					}
																																					BgL_arg4135z00_1659
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_id2z00_1627,
																																						BgL_list4136z00_1660);
																																				}
																																				BgL_arg4130z00_1654
																																					=
																																					MAKE_PAIR
																																					(BgL_arg4134z00_1658,
																																					BgL_arg4135z00_1659);
																																			}
																																			{	/* Ast/unit.scm 396 */
																																				obj_t
																																					BgL_list4132z00_1656;
																																				{	/* Ast/unit.scm 396 */
																																					obj_t
																																						BgL_arg4133z00_1657;
																																					BgL_arg4133z00_1657
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list4132z00_1656
																																						=
																																						MAKE_PAIR
																																						(BgL_argsz00_1555,
																																						BgL_arg4133z00_1657);
																																				}
																																				BgL_arg4129z00_1653
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg4130z00_1654,
																																					BgL_list4132z00_1656);
																																		}}
																																		BgL_arg4124z00_1648
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4128z00_1652,
																																			BgL_arg4129z00_1653);
																																	}
																																	{	/* Ast/unit.scm 395 */
																																		obj_t
																																			BgL_list4126z00_1650;
																																		{	/* Ast/unit.scm 395 */
																																			obj_t
																																				BgL_arg4127z00_1651;
																																			BgL_arg4127z00_1651
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4126z00_1650
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4124z00_1648,
																																				BgL_arg4127z00_1651);
																																		}
																																		BgL_arg4122z00_1646
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg4123z00_1647,
																																			BgL_list4126z00_1650);
																																}}
																																BgL_auxz00_4964
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4121z00_1645,
																																	BgL_arg4122z00_1646);
																															}
																														else
																															{	/* Ast/unit.scm 398 */
																																obj_t
																																	BgL_arg4138z00_1662;
																																obj_t
																																	BgL_arg4139z00_1663;
																																BgL_arg4138z00_1662
																																	=
																																	CNST_TABLE_REF
																																	(((long) 15));
																																{	/* Ast/unit.scm 398 */
																																	obj_t
																																		BgL_arg4140z00_1664;
																																	obj_t
																																		BgL_arg4141z00_1665;
																																	BgL_arg4140z00_1664
																																		=
																																		MAKE_PAIR
																																		(BgL_varz00_1626,
																																		BgL_argsz00_1555);
																																	{	/* Ast/unit.scm 399 */
																																		obj_t
																																			BgL_arg4145z00_1669;
																																		obj_t
																																			BgL_arg4146z00_1670;
																																		BgL_arg4145z00_1669
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				19));
																																		{	/* Ast/unit.scm 399 */
																																			obj_t
																																				BgL_arg4147z00_1671;
																																			obj_t
																																				BgL_arg4148z00_1672;
																																			{	/* Ast/unit.scm 399 */
																																				obj_t
																																					BgL_arg4152z00_1676;
																																				obj_t
																																					BgL_arg4153z00_1677;
																																				BgL_arg4152z00_1676
																																					=
																																					CNST_TABLE_REF
																																					(((long) 1));
																																				{	/* Ast/unit.scm 399 */
																																					obj_t
																																						BgL_list4154z00_1678;
																																					{	/* Ast/unit.scm 399 */
																																						obj_t
																																							BgL_arg4155z00_1679;
																																						BgL_arg4155z00_1679
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_list4154z00_1678
																																							=
																																							MAKE_PAIR
																																							(BgL_modulez00_1628,
																																							BgL_arg4155z00_1679);
																																					}
																																					BgL_arg4153z00_1677
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_id2z00_1627,
																																						BgL_list4154z00_1678);
																																				}
																																				BgL_arg4147z00_1671
																																					=
																																					MAKE_PAIR
																																					(BgL_arg4152z00_1676,
																																					BgL_arg4153z00_1677);
																																			}
																																			{	/* Ast/unit.scm 400 */
																																				obj_t
																																					BgL_arg4156z00_1680;
																																				obj_t
																																					BgL_arg4158z00_1681;
																																				BgL_arg4156z00_1680
																																					=
																																					CNST_TABLE_REF
																																					(((long) 20));
																																				BgL_arg4158z00_1681
																																					=
																																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																					(BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																																					(BgL_argsz00_1555),
																																					BNIL);
																																				BgL_arg4148z00_1672
																																					=
																																					MAKE_PAIR
																																					(BgL_arg4156z00_1680,
																																					BgL_arg4158z00_1681);
																																			}
																																			{	/* Ast/unit.scm 399 */
																																				obj_t
																																					BgL_list4150z00_1674;
																																				{	/* Ast/unit.scm 399 */
																																					obj_t
																																						BgL_arg4151z00_1675;
																																					BgL_arg4151z00_1675
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list4150z00_1674
																																						=
																																						MAKE_PAIR
																																						(BgL_arg4148z00_1672,
																																						BgL_arg4151z00_1675);
																																				}
																																				BgL_arg4146z00_1670
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg4147z00_1671,
																																					BgL_list4150z00_1674);
																																		}}
																																		BgL_arg4141z00_1665
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4145z00_1669,
																																			BgL_arg4146z00_1670);
																																	}
																																	{	/* Ast/unit.scm 398 */
																																		obj_t
																																			BgL_list4143z00_1667;
																																		{	/* Ast/unit.scm 398 */
																																			obj_t
																																				BgL_arg4144z00_1668;
																																			BgL_arg4144z00_1668
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4143z00_1667
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4141z00_1665,
																																				BgL_arg4144z00_1668);
																																		}
																																		BgL_arg4139z00_1663
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg4140z00_1664,
																																			BgL_list4143z00_1667);
																																}}
																																BgL_auxz00_4964
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4138z00_1662,
																																	BgL_arg4139z00_1663);
																													}}
																												return
																													BGl_replacez12z12zztools_miscz00
																													(BgL_sexpz00_42,
																													BgL_auxz00_4964);
																											}
																										}
																									}
																								}
																							else
																								{	/* Ast/unit.scm 412 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Ast/unit.scm 412 */
																							obj_t BgL_cdrzd23057zd2_1586;

																							BgL_cdrzd23057zd2_1586 =
																								CDR(BgL_cdrzd23017zd2_1567);
																							if (NULLP(CDR
																									(BgL_cdrzd23057zd2_1586)))
																								{	/* Ast/unit.scm 412 */
																									obj_t BgL_arg4075z00_1588;

																									obj_t BgL_arg4076z00_1589;

																									BgL_arg4075z00_1588 =
																										CAR(BgL_cdrzd23017zd2_1567);
																									BgL_arg4076z00_1589 =
																										CAR(BgL_cdrzd23057zd2_1586);
																									{	/* Ast/unit.scm 412 */
																										obj_t BgL_id2z00_3726;

																										BgL_id2z00_3726 =
																											BGl_idzd2ofzd2idz00zzast_identz00
																											(BgL_arg4076z00_1589,
																											BGl_findzd2locationzd2zztools_locationz00
																											(BgL_sexpz00_42));
																										return
																											BGl_replacez12z12zztools_miscz00
																											(BgL_sexpz00_42,
																											BGl_dozd2etazd2expansez00zzast_unitz00
																											(BgL_arityz00_43,
																												BgL_argsz00_1555,
																												BgL_arg4075z00_1588,
																												BgL_id2z00_3726));
																									}
																								}
																							else
																								{	/* Ast/unit.scm 412 */
																									return BFALSE;
																								}
																						}
																				}
																			else
																				{	/* Ast/unit.scm 412 */
																					obj_t BgL_cdrzd23075zd2_1593;

																					BgL_cdrzd23075zd2_1593 =
																						CDR(BgL_cdrzd23017zd2_1567);
																					if (NULLP(CDR
																							(BgL_cdrzd23075zd2_1593)))
																						{	/* Ast/unit.scm 412 */
																							obj_t BgL_arg4080z00_1595;

																							obj_t BgL_arg4081z00_1596;

																							BgL_arg4080z00_1595 =
																								CAR(BgL_cdrzd23017zd2_1567);
																							BgL_arg4081z00_1596 =
																								CAR(BgL_cdrzd23075zd2_1593);
																							{	/* Ast/unit.scm 412 */
																								obj_t BgL_id2z00_3737;

																								BgL_id2z00_3737 =
																									BGl_idzd2ofzd2idz00zzast_identz00
																									(BgL_arg4081z00_1596,
																									BGl_findzd2locationzd2zztools_locationz00
																									(BgL_sexpz00_42));
																								return
																									BGl_replacez12z12zztools_miscz00
																									(BgL_sexpz00_42,
																									BGl_dozd2etazd2expansez00zzast_unitz00
																									(BgL_arityz00_43,
																										BgL_argsz00_1555,
																										BgL_arg4080z00_1595,
																										BgL_id2z00_3737));
																							}
																						}
																					else
																						{	/* Ast/unit.scm 412 */
																							return BFALSE;
																						}
																				}
																		}
																	else
																		{	/* Ast/unit.scm 412 */
																			obj_t BgL_cdrzd23093zd2_1599;

																			BgL_cdrzd23093zd2_1599 =
																				CDR(BgL_cdrzd23017zd2_1567);
																			if (NULLP(CDR(BgL_cdrzd23093zd2_1599)))
																				{	/* Ast/unit.scm 412 */
																					obj_t BgL_arg4084z00_1601;

																					obj_t BgL_arg4085z00_1602;

																					BgL_arg4084z00_1601 =
																						CAR(BgL_cdrzd23017zd2_1567);
																					BgL_arg4085z00_1602 =
																						CAR(BgL_cdrzd23093zd2_1599);
																					{	/* Ast/unit.scm 412 */
																						obj_t BgL_id2z00_3748;

																						BgL_id2z00_3748 =
																							BGl_idzd2ofzd2idz00zzast_identz00
																							(BgL_arg4085z00_1602,
																							BGl_findzd2locationzd2zztools_locationz00
																							(BgL_sexpz00_42));
																						return
																							BGl_replacez12z12zztools_miscz00
																							(BgL_sexpz00_42,
																							BGl_dozd2etazd2expansez00zzast_unitz00
																							(BgL_arityz00_43,
																								BgL_argsz00_1555,
																								BgL_arg4084z00_1601,
																								BgL_id2z00_3748));
																					}
																				}
																			else
																				{	/* Ast/unit.scm 412 */
																					return BFALSE;
																				}
																		}
																}
															else
																{	/* Ast/unit.scm 412 */
																	obj_t BgL_cdrzd23111zd2_1605;

																	BgL_cdrzd23111zd2_1605 =
																		CDR(BgL_cdrzd23017zd2_1567);
																	if (NULLP(CDR(BgL_cdrzd23111zd2_1605)))
																		{	/* Ast/unit.scm 412 */
																			obj_t BgL_arg4089z00_1607;

																			obj_t BgL_arg4090z00_1608;

																			BgL_arg4089z00_1607 =
																				CAR(BgL_cdrzd23017zd2_1567);
																			BgL_arg4090z00_1608 =
																				CAR(BgL_cdrzd23111zd2_1605);
																			{	/* Ast/unit.scm 412 */
																				obj_t BgL_id2z00_3759;

																				BgL_id2z00_3759 =
																					BGl_idzd2ofzd2idz00zzast_identz00
																					(BgL_arg4090z00_1608,
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_sexpz00_42));
																				return
																					BGl_replacez12z12zztools_miscz00
																					(BgL_sexpz00_42,
																					BGl_dozd2etazd2expansez00zzast_unitz00
																					(BgL_arityz00_43, BgL_argsz00_1555,
																						BgL_arg4089z00_1607,
																						BgL_id2z00_3759));
																			}
																		}
																	else
																		{	/* Ast/unit.scm 412 */
																			return BFALSE;
																		}
																}
														}
													else
														{	/* Ast/unit.scm 412 */
															obj_t BgL_cdrzd23129zd2_1613;

															BgL_cdrzd23129zd2_1613 =
																CDR(BgL_cdrzd23017zd2_1567);
															if (NULLP(CDR(BgL_cdrzd23129zd2_1613)))
																{	/* Ast/unit.scm 412 */
																	obj_t BgL_arg4096z00_1615;

																	obj_t BgL_arg4097z00_1616;

																	BgL_arg4096z00_1615 =
																		CAR(BgL_cdrzd23017zd2_1567);
																	BgL_arg4097z00_1616 =
																		CAR(BgL_cdrzd23129zd2_1613);
																	{	/* Ast/unit.scm 412 */
																		obj_t BgL_id2z00_3770;

																		BgL_id2z00_3770 =
																			BGl_idzd2ofzd2idz00zzast_identz00
																			(BgL_arg4097z00_1616,
																			BGl_findzd2locationzd2zztools_locationz00
																			(BgL_sexpz00_42));
																		return
																			BGl_replacez12z12zztools_miscz00
																			(BgL_sexpz00_42,
																			BGl_dozd2etazd2expansez00zzast_unitz00
																			(BgL_arityz00_43, BgL_argsz00_1555,
																				BgL_arg4096z00_1615, BgL_id2z00_3770));
																	}
																}
															else
																{	/* Ast/unit.scm 412 */
																	return BFALSE;
																}
														}
												}
											else
												{	/* Ast/unit.scm 412 */
													return BFALSE;
												}
										}
									else
										{	/* Ast/unit.scm 412 */
											return BFALSE;
										}
								}
							else
								{	/* Ast/unit.scm 412 */
									return BFALSE;
								}
						}
					else
						{	/* Ast/unit.scm 412 */
							return BFALSE;
						}
				}
			}
		}
	}



/* do-eta-expanse */
	obj_t BGl_dozd2etazd2expansez00zzast_unitz00(obj_t BgL_arityz00_4144,
		obj_t BgL_argsz00_4143, obj_t BgL_varz00_1684, obj_t BgL_id2z00_1685)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 411 */
			if (((long) CINT(BgL_arityz00_4144) >= ((long) 0)))
				{	/* Ast/unit.scm 404 */
					obj_t BgL_arg4163z00_1688;

					obj_t BgL_arg4164z00_1689;

					BgL_arg4163z00_1688 = CNST_TABLE_REF(((long) 15));
					{	/* Ast/unit.scm 404 */
						obj_t BgL_arg4165z00_1690;

						obj_t BgL_arg4166z00_1691;

						BgL_arg4165z00_1690 = MAKE_PAIR(BgL_varz00_1684, BgL_argsz00_4143);
						BgL_arg4166z00_1691 =
							MAKE_PAIR(BgL_id2z00_1685,
							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_argsz00_4143,
								BNIL));
						{	/* Ast/unit.scm 404 */
							obj_t BgL_list4168z00_1693;

							{	/* Ast/unit.scm 404 */
								obj_t BgL_arg4169z00_1694;

								BgL_arg4169z00_1694 = MAKE_PAIR(BNIL, BNIL);
								BgL_list4168z00_1693 =
									MAKE_PAIR(BgL_arg4166z00_1691, BgL_arg4169z00_1694);
							}
							BgL_arg4164z00_1689 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg4165z00_1690,
								BgL_list4168z00_1693);
					}}
					return MAKE_PAIR(BgL_arg4163z00_1688, BgL_arg4164z00_1689);
				}
			else
				{	/* Ast/unit.scm 403 */
					if (((long) CINT(BgL_arityz00_4144) == ((long) -1)))
						{	/* Ast/unit.scm 407 */
							obj_t BgL_arg4172z00_1697;

							obj_t BgL_arg4173z00_1698;

							BgL_arg4172z00_1697 = CNST_TABLE_REF(((long) 15));
							{	/* Ast/unit.scm 407 */
								obj_t BgL_arg4174z00_1699;

								obj_t BgL_arg4175z00_1700;

								BgL_arg4174z00_1699 =
									MAKE_PAIR(BgL_varz00_1684, BgL_argsz00_4143);
								{	/* Ast/unit.scm 408 */
									obj_t BgL_arg4180z00_1704;

									obj_t BgL_arg4181z00_1705;

									BgL_arg4180z00_1704 = CNST_TABLE_REF(((long) 19));
									{	/* Ast/unit.scm 408 */
										obj_t BgL_list4182z00_1706;

										{	/* Ast/unit.scm 408 */
											obj_t BgL_arg4183z00_1707;

											BgL_arg4183z00_1707 = MAKE_PAIR(BNIL, BNIL);
											BgL_list4182z00_1706 =
												MAKE_PAIR(BgL_argsz00_4143, BgL_arg4183z00_1707);
										}
										BgL_arg4181z00_1705 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_id2z00_1685, BgL_list4182z00_1706);
									}
									BgL_arg4175z00_1700 =
										MAKE_PAIR(BgL_arg4180z00_1704, BgL_arg4181z00_1705);
								}
								{	/* Ast/unit.scm 407 */
									obj_t BgL_list4177z00_1702;

									{	/* Ast/unit.scm 407 */
										obj_t BgL_arg4178z00_1703;

										BgL_arg4178z00_1703 = MAKE_PAIR(BNIL, BNIL);
										BgL_list4177z00_1702 =
											MAKE_PAIR(BgL_arg4175z00_1700, BgL_arg4178z00_1703);
									}
									BgL_arg4173z00_1698 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg4174z00_1699, BgL_list4177z00_1702);
							}}
							return MAKE_PAIR(BgL_arg4172z00_1697, BgL_arg4173z00_1698);
						}
					else
						{	/* Ast/unit.scm 410 */
							obj_t BgL_arg4184z00_1708;

							obj_t BgL_arg4185z00_1709;

							BgL_arg4184z00_1708 = CNST_TABLE_REF(((long) 15));
							{	/* Ast/unit.scm 410 */
								obj_t BgL_arg4186z00_1710;

								obj_t BgL_arg4187z00_1711;

								BgL_arg4186z00_1710 =
									MAKE_PAIR(BgL_varz00_1684, BgL_argsz00_4143);
								{	/* Ast/unit.scm 411 */
									obj_t BgL_arg4191z00_1715;

									obj_t BgL_arg4192z00_1716;

									BgL_arg4191z00_1715 = CNST_TABLE_REF(((long) 19));
									{	/* Ast/unit.scm 411 */
										obj_t BgL_arg4193z00_1717;

										{	/* Ast/unit.scm 411 */
											obj_t BgL_arg4197z00_1721;

											obj_t BgL_arg4198z00_1722;

											BgL_arg4197z00_1721 = CNST_TABLE_REF(((long) 20));
											BgL_arg4198z00_1722 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
												(BgL_argsz00_4143), BNIL);
											BgL_arg4193z00_1717 =
												MAKE_PAIR(BgL_arg4197z00_1721, BgL_arg4198z00_1722);
										}
										{	/* Ast/unit.scm 411 */
											obj_t BgL_list4195z00_1719;

											{	/* Ast/unit.scm 411 */
												obj_t BgL_arg4196z00_1720;

												BgL_arg4196z00_1720 = MAKE_PAIR(BNIL, BNIL);
												BgL_list4195z00_1719 =
													MAKE_PAIR(BgL_arg4193z00_1717, BgL_arg4196z00_1720);
											}
											BgL_arg4192z00_1716 =
												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
												(BgL_id2z00_1685, BgL_list4195z00_1719);
									}}
									BgL_arg4187z00_1711 =
										MAKE_PAIR(BgL_arg4191z00_1715, BgL_arg4192z00_1716);
								}
								{	/* Ast/unit.scm 410 */
									obj_t BgL_list4189z00_1713;

									{	/* Ast/unit.scm 410 */
										obj_t BgL_arg4190z00_1714;

										BgL_arg4190z00_1714 = MAKE_PAIR(BNIL, BNIL);
										BgL_list4189z00_1713 =
											MAKE_PAIR(BgL_arg4187z00_1711, BgL_arg4190z00_1714);
									}
									BgL_arg4185z00_1709 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg4186z00_1710, BgL_list4189z00_1713);
							}}
							return MAKE_PAIR(BgL_arg4184z00_1708, BgL_arg4185z00_1709);
						}
				}
		}
	}



/* make-sfun-definition */
	obj_t BGl_makezd2sfunzd2definitionz00zzast_unitz00(obj_t BgL_idz00_44,
		obj_t BgL_modulez00_45, obj_t BgL_argsz00_46, obj_t BgL_bodyz00_47,
		obj_t BgL_srcz00_48, obj_t BgL_classz00_49)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 423 */
			{	/* Ast/unit.scm 424 */
				obj_t BgL_locz00_1727;

				obj_t BgL_optsz00_1728;

				obj_t BgL_keysz00_1729;

				BgL_locz00_1727 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_48);
				BgL_optsz00_1728 =
					BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_46);
				BgL_keysz00_1729 = BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_46);
				if (PAIRP(BgL_optsz00_1728))
					{	/* Ast/unit.scm 428 */
						return
							BGl_makezd2sfunzd2optzd2definitionzd2zzast_unitz00
							(BgL_optsz00_1728, BgL_idz00_44, BgL_modulez00_45, BgL_argsz00_46,
							BgL_bodyz00_47, BgL_srcz00_48, BgL_classz00_49, BgL_locz00_1727);
					}
				else
					{	/* Ast/unit.scm 428 */
						if (PAIRP(BgL_keysz00_1729))
							{	/* Ast/unit.scm 430 */
								return
									BGl_makezd2sfunzd2keyzd2definitionzd2zzast_unitz00
									(BgL_keysz00_1729, BgL_idz00_44, BgL_modulez00_45,
									BgL_argsz00_46, BgL_bodyz00_47, BgL_srcz00_48,
									BgL_classz00_49, BgL_locz00_1727);
							}
						else
							{	/* Ast/unit.scm 430 */
								return
									BGl_makezd2sfunzd2nooptzd2definitionzd2zzast_unitz00
									(BgL_idz00_44, BgL_modulez00_45, BgL_argsz00_46,
									BgL_bodyz00_47, BgL_srcz00_48, BgL_classz00_49,
									BgL_locz00_1727);
							}
					}
			}
		}
	}



/* make-sfun-opt-definition */
	obj_t BGl_makezd2sfunzd2optzd2definitionzd2zzast_unitz00(obj_t
		BgL_optionalsz00_50, obj_t BgL_idz00_51, obj_t BgL_modulez00_52,
		obj_t BgL_argsz00_53, obj_t BgL_bodyz00_54, obj_t BgL_srcz00_55,
		obj_t BgL_classz00_56, obj_t BgL_locz00_57)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 438 */
			{	/* Ast/unit.scm 439 */
				obj_t BgL_localsz00_1732;

				{	/* Ast/unit.scm 439 */
					obj_t BgL_arg4205z00_1737;

					obj_t BgL_arg4206z00_1738;

					{	/* Ast/unit.scm 439 */
						obj_t BgL_l3557z00_1739;

						BgL_l3557z00_1739 =
							BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(BgL_argsz00_53);
						if (NULLP(BgL_l3557z00_1739))
							{	/* Ast/unit.scm 439 */
								BgL_arg4205z00_1737 = BNIL;
							}
						else
							{	/* Ast/unit.scm 439 */
								obj_t BgL_head3559z00_1741;

								BgL_head3559z00_1741 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3557z00_1743;

									obj_t BgL_tail3560z00_1744;

									BgL_l3557z00_1743 = BgL_l3557z00_1739;
									BgL_tail3560z00_1744 = BgL_head3559z00_1741;
								BgL_zc3anonymousza34208ze3z83_1745:
									if (NULLP(BgL_l3557z00_1743))
										{	/* Ast/unit.scm 439 */
											BgL_arg4205z00_1737 = CDR(BgL_head3559z00_1741);
										}
									else
										{	/* Ast/unit.scm 439 */
											obj_t BgL_newtail3561z00_1747;

											{	/* Ast/unit.scm 439 */
												BgL_localz00_bglt BgL_arg4211z00_1749;

												{	/* Ast/unit.scm 439 */
													obj_t BgL_az00_1751;

													BgL_az00_1751 = CAR(BgL_l3557z00_1743);
													{	/* Ast/unit.scm 440 */
														obj_t BgL_pidz00_1752;

														BgL_pidz00_1752 =
															BGl_checkzd2idzd2zzast_identz00
															(BGl_parsezd2idzd2zzast_identz00(BgL_az00_1751,
																BgL_locz00_57), BgL_srcz00_55);
														{	/* Ast/unit.scm 440 */
															obj_t BgL_idz00_1753;

															BgL_idz00_1753 = CAR(BgL_pidz00_1752);
															{	/* Ast/unit.scm 441 */
																obj_t BgL_typez00_1754;

																BgL_typez00_1754 = CDR(BgL_pidz00_1752);
																{	/* Ast/unit.scm 442 */

																	if (BGl_userzd2symbolzf3z21zzast_identz00
																		(BgL_idz00_1753))
																		{	/* Ast/unit.scm 443 */
																			BgL_arg4211z00_1749 =
																				BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																				(BgL_idz00_1753,
																				(BgL_typez00_bglt) (BgL_typez00_1754));
																		}
																	else
																		{	/* Ast/unit.scm 443 */
																			BgL_arg4211z00_1749 =
																				BGl_makezd2localzd2svarz00zzast_localz00
																				(BgL_idz00_1753,
																				(BgL_typez00_bglt) (BgL_typez00_1754));
																		}
																}
															}
														}
													}
												}
												BgL_newtail3561z00_1747 =
													MAKE_PAIR((obj_t) (BgL_arg4211z00_1749), BNIL);
											}
											SET_CDR(BgL_tail3560z00_1744, BgL_newtail3561z00_1747);
											{
												obj_t BgL_tail3560z00_5144;

												obj_t BgL_l3557z00_5142;

												BgL_l3557z00_5142 = CDR(BgL_l3557z00_1743);
												BgL_tail3560z00_5144 = BgL_newtail3561z00_1747;
												BgL_tail3560z00_1744 = BgL_tail3560z00_5144;
												BgL_l3557z00_1743 = BgL_l3557z00_5142;
												goto BgL_zc3anonymousza34208ze3z83_1745;
											}
										}
								}
							}
					}
					{	/* Ast/unit.scm 447 */
						obj_t BgL_head3564z00_1760;

						BgL_head3564z00_1760 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3562z00_1762;

							obj_t BgL_tail3565z00_1763;

							BgL_l3562z00_1762 = BgL_optionalsz00_50;
							BgL_tail3565z00_1763 = BgL_head3564z00_1760;
						BgL_zc3anonymousza34216ze3z83_1764:
							if (NULLP(BgL_l3562z00_1762))
								{	/* Ast/unit.scm 447 */
									BgL_arg4206z00_1738 = CDR(BgL_head3564z00_1760);
								}
							else
								{	/* Ast/unit.scm 447 */
									obj_t BgL_newtail3566z00_1766;

									{	/* Ast/unit.scm 447 */
										BgL_localz00_bglt BgL_arg4219z00_1768;

										{	/* Ast/unit.scm 447 */
											obj_t BgL_oz00_1770;

											BgL_oz00_1770 = CAR(BgL_l3562z00_1762);
											{	/* Ast/unit.scm 448 */
												obj_t BgL_az00_1771;

												BgL_az00_1771 = CAR(BgL_oz00_1770);
												{	/* Ast/unit.scm 448 */
													obj_t BgL_pidz00_1772;

													BgL_pidz00_1772 =
														BGl_checkzd2idzd2zzast_identz00
														(BGl_parsezd2idzd2zzast_identz00(BgL_az00_1771,
															BgL_locz00_57), BgL_srcz00_55);
													{	/* Ast/unit.scm 449 */
														obj_t BgL_idz00_1773;

														BgL_idz00_1773 = CAR(BgL_pidz00_1772);
														{	/* Ast/unit.scm 450 */
															obj_t BgL_typez00_1774;

															BgL_typez00_1774 = CDR(BgL_pidz00_1772);
															{	/* Ast/unit.scm 451 */

																BgL_arg4219z00_1768 =
																	BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																	(BgL_idz00_1773,
																	(BgL_typez00_bglt) (BgL_typez00_1774));
															}
														}
													}
												}
											}
										}
										BgL_newtail3566z00_1766 =
											MAKE_PAIR((obj_t) (BgL_arg4219z00_1768), BNIL);
									}
									SET_CDR(BgL_tail3565z00_1763, BgL_newtail3566z00_1766);
									{
										obj_t BgL_tail3565z00_5162;

										obj_t BgL_l3562z00_5160;

										BgL_l3562z00_5160 = CDR(BgL_l3562z00_1762);
										BgL_tail3565z00_5162 = BgL_newtail3566z00_1766;
										BgL_tail3565z00_1763 = BgL_tail3565z00_5162;
										BgL_l3562z00_1762 = BgL_l3562z00_5160;
										goto BgL_zc3anonymousza34216ze3z83_1764;
									}
								}
						}
					}
					BgL_localsz00_1732 =
						bgl_append2(BgL_arg4205z00_1737, BgL_arg4206z00_1738);
				}
				{	/* Ast/unit.scm 439 */
					BgL_globalz00_bglt BgL_gloz00_1733;

					BgL_gloz00_1733 =
						BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_51,
						BgL_argsz00_53, BgL_localsz00_1732, BgL_modulez00_52,
						BgL_classz00_56, BgL_srcz00_55, CNST_TABLE_REF(((long) 8)),
						BgL_bodyz00_54);
					{	/* Ast/unit.scm 454 */
						BgL_globalz00_bglt BgL_cloz00_1734;

						BgL_cloz00_1734 =
							BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(BgL_gloz00_1733,
							BgL_optionalsz00_50, BgL_idz00_51, BgL_modulez00_52,
							BgL_argsz00_53, BgL_bodyz00_54, BgL_srcz00_55, BgL_classz00_56,
							BgL_locz00_57);
						{	/* Ast/unit.scm 455 */

							{	/* Ast/unit.scm 456 */
								obj_t BgL_list4203z00_1735;

								{	/* Ast/unit.scm 456 */
									obj_t BgL_arg4204z00_1736;

									BgL_arg4204z00_1736 =
										MAKE_PAIR((obj_t) (BgL_cloz00_1734), BNIL);
									BgL_list4203z00_1735 =
										MAKE_PAIR((obj_t) (BgL_gloz00_1733), BgL_arg4204z00_1736);
								}
								return BgL_list4203z00_1735;
							}
						}
					}
				}
			}
		}
	}



/* make-sfun-opt-closure */
	BgL_globalz00_bglt
		BGl_makezd2sfunzd2optzd2closurezd2zzast_unitz00(BgL_globalz00_bglt
		BgL_gloz00_58, obj_t BgL_optionalsz00_59, obj_t BgL_idz00_60,
		obj_t BgL_modulez00_61, obj_t BgL_argsz00_62, obj_t BgL_bodyz00_63,
		obj_t BgL_srcz00_64, obj_t BgL_classz00_65, obj_t BgL_locz00_66)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 469 */
			{	/* Ast/unit.scm 470 */
				long BgL_arityz00_1777;

				{	/* Ast/unit.scm 470 */
					BgL_funz00_bglt BgL_obj1813z00_3819;

					{	/* Ast/unit.scm 470 */
						BgL_variablez00_bglt BgL_obj1611z00_3818;

						BgL_obj1611z00_3818 = (BgL_variablez00_bglt) (BgL_gloz00_58);
						BgL_obj1813z00_3819 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_3818))->
								BgL_valuez00));
					}
					BgL_arityz00_1777 =
						(((BgL_funz00_bglt) CREF(BgL_obj1813z00_3819))->BgL_arityz00);
				}
				{

					{	/* Ast/unit.scm 508 */
						obj_t BgL_idz00_1779;

						{	/* Ast/unit.scm 508 */
							obj_t BgL_arg4231z00_1791;

							{	/* Ast/unit.scm 508 */
								obj_t BgL_arg4232z00_1792;

								obj_t BgL_arg4233z00_1793;

								{	/* Ast/unit.scm 508 */
									obj_t BgL_res5044z00_3822;

									{	/* Ast/unit.scm 508 */
										obj_t BgL_symbolz00_3820;

										BgL_symbolz00_3820 = CNST_TABLE_REF(((long) 30));
										{	/* Ast/unit.scm 508 */
											obj_t BgL_arg2063z00_3821;

											BgL_arg2063z00_3821 =
												SYMBOL_TO_STRING(BgL_symbolz00_3820);
											BgL_res5044z00_3822 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_3821);
									}}
									BgL_arg4232z00_1792 = BgL_res5044z00_3822;
								}
								{	/* Ast/unit.scm 508 */
									obj_t BgL_res5045z00_3825;

									{	/* Ast/unit.scm 508 */
										obj_t BgL_arg2063z00_3824;

										BgL_arg2063z00_3824 = SYMBOL_TO_STRING(BgL_idz00_60);
										BgL_res5045z00_3825 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_3824);
									}
									BgL_arg4233z00_1793 = BgL_res5045z00_3825;
								}
								{	/* Ast/unit.scm 508 */
									obj_t BgL_list4234z00_1794;

									{	/* Ast/unit.scm 508 */
										obj_t BgL_arg4235z00_1795;

										BgL_arg4235z00_1795 = MAKE_PAIR(BgL_arg4233z00_1793, BNIL);
										BgL_list4234z00_1794 =
											MAKE_PAIR(BgL_arg4232z00_1792, BgL_arg4235z00_1795);
									}
									BgL_arg4231z00_1791 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list4234z00_1794);
							}}
							BgL_idz00_1779 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg4231z00_1791));
						}
						{	/* Ast/unit.scm 508 */
							BgL_localz00_bglt BgL_optz00_1780;

							BgL_optz00_1780 =
								BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF(((long)
										22)),
								(BgL_typez00_bglt) (BGl_za2vectorza2z00zztype_cachez00));
							{	/* Ast/unit.scm 509 */
								BgL_localz00_bglt BgL_envz00_1781;

								BgL_envz00_1781 =
									BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
											(long) 31)),
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
								{	/* Ast/unit.scm 510 */
									BgL_globalz00_bglt BgL_gz00_1782;

									{	/* Ast/unit.scm 511 */
										obj_t BgL_arg4222z00_1783;

										obj_t BgL_arg4223z00_1784;

										obj_t BgL_arg4224z00_1785;

										obj_t BgL_arg4225z00_1786;

										BgL_arg4222z00_1783 = CNST_TABLE_REF(((long) 32));
										{	/* Ast/unit.scm 511 */
											obj_t BgL_list4226z00_1787;

											{	/* Ast/unit.scm 511 */
												obj_t BgL_arg4228z00_1788;

												BgL_arg4228z00_1788 =
													MAKE_PAIR((obj_t) (BgL_optz00_1780), BNIL);
												BgL_list4226z00_1787 =
													MAKE_PAIR(
													(obj_t) (BgL_envz00_1781), BgL_arg4228z00_1788);
											}
											BgL_arg4223z00_1784 = BgL_list4226z00_1787;
										}
										BgL_arg4224z00_1785 = CNST_TABLE_REF(((long) 33));
										{	/* Ast/unit.scm 513 */
											obj_t BgL_auxz00_5197;

											{	/* Ast/unit.scm 513 */
												obj_t BgL_auxz00_5198;

												{	/* Ast/unit.scm 472 */
													long BgL_loptz00_1797;

													obj_t BgL_formsz00_1798;

													obj_t BgL_optsz00_1799;

													BgL_loptz00_1797 =
														bgl_list_length(BgL_optionalsz00_59);
													{	/* Ast/unit.scm 473 */
														obj_t BgL_l3567z00_1972;

														{	/* Ast/unit.scm 473 */
															BgL_sfunz00_bglt BgL_obj1880z00_3834;

															{	/* Ast/unit.scm 473 */
																BgL_variablez00_bglt BgL_obj1611z00_3833;

																BgL_obj1611z00_3833 =
																	(BgL_variablez00_bglt) (BgL_gloz00_58);
																BgL_obj1880z00_3834 =
																	(BgL_sfunz00_bglt) (
																	(((BgL_variablez00_bglt)
																			CREF(BgL_obj1611z00_3833))->
																		BgL_valuez00));
															}
															BgL_l3567z00_1972 =
																(((BgL_sfunz00_bglt)
																	CREF(BgL_obj1880z00_3834))->BgL_argsz00);
														}
														if (NULLP(BgL_l3567z00_1972))
															{	/* Ast/unit.scm 473 */
																BgL_formsz00_1798 = BNIL;
															}
														else
															{	/* Ast/unit.scm 473 */
																obj_t BgL_head3569z00_1974;

																{	/* Ast/unit.scm 473 */
																	obj_t BgL_arg4380z00_1987;

																	{	/* Ast/unit.scm 473 */
																		BgL_variablez00_bglt BgL_obj1604z00_3837;

																		{	/* Ast/unit.scm 473 */
																			obj_t BgL_pairz00_3836;

																			BgL_pairz00_3836 = BgL_l3567z00_1972;
																			BgL_obj1604z00_3837 =
																				(BgL_variablez00_bglt) (CAR
																				(BgL_pairz00_3836));
																		}
																		BgL_arg4380z00_1987 =
																			(((BgL_variablez00_bglt)
																				CREF(BgL_obj1604z00_3837))->BgL_idz00);
																	}
																	BgL_head3569z00_1974 =
																		MAKE_PAIR(BgL_arg4380z00_1987, BNIL);
																}
																{	/* Ast/unit.scm 473 */
																	obj_t BgL_g3572z00_1975;

																	BgL_g3572z00_1975 = CDR(BgL_l3567z00_1972);
																	{
																		obj_t BgL_l3567z00_1977;

																		obj_t BgL_tail3570z00_1978;

																		BgL_l3567z00_1977 = BgL_g3572z00_1975;
																		BgL_tail3570z00_1978 = BgL_head3569z00_1974;
																	BgL_zc3anonymousza34374ze3z83_1979:
																		if (NULLP(BgL_l3567z00_1977))
																			{	/* Ast/unit.scm 473 */
																				BgL_formsz00_1798 =
																					BgL_head3569z00_1974;
																			}
																		else
																			{	/* Ast/unit.scm 473 */
																				obj_t BgL_newtail3571z00_1981;

																				{	/* Ast/unit.scm 473 */
																					obj_t BgL_arg4377z00_1983;

																					{	/* Ast/unit.scm 473 */
																						BgL_variablez00_bglt
																							BgL_obj1604z00_3843;
																						{	/* Ast/unit.scm 473 */
																							obj_t BgL_pairz00_3842;

																							BgL_pairz00_3842 =
																								BgL_l3567z00_1977;
																							BgL_obj1604z00_3843 =
																								(BgL_variablez00_bglt) (CAR
																								(BgL_pairz00_3842));
																						}
																						BgL_arg4377z00_1983 =
																							(((BgL_variablez00_bglt)
																								CREF(BgL_obj1604z00_3843))->
																							BgL_idz00);
																					}
																					BgL_newtail3571z00_1981 =
																						MAKE_PAIR(BgL_arg4377z00_1983,
																						BNIL);
																				}
																				SET_CDR(BgL_tail3570z00_1978,
																					BgL_newtail3571z00_1981);
																				{
																					obj_t BgL_tail3570z00_5220;

																					obj_t BgL_l3567z00_5218;

																					BgL_l3567z00_5218 =
																						CDR(BgL_l3567z00_1977);
																					BgL_tail3570z00_5220 =
																						BgL_newtail3571z00_1981;
																					BgL_tail3570z00_1978 =
																						BgL_tail3570z00_5220;
																					BgL_l3567z00_1977 = BgL_l3567z00_5218;
																					goto
																						BgL_zc3anonymousza34374ze3z83_1979;
																				}
																			}
																	}
																}
															}
													}
													{	/* Ast/unit.scm 474 */
														obj_t BgL_l3573z00_1991;

														{	/* Ast/unit.scm 476 */
															BgL_sfunz00_bglt BgL_obj1896z00_3850;

															{	/* Ast/unit.scm 476 */
																BgL_variablez00_bglt BgL_obj1611z00_3849;

																BgL_obj1611z00_3849 =
																	(BgL_variablez00_bglt) (BgL_gloz00_58);
																BgL_obj1896z00_3850 =
																	(BgL_sfunz00_bglt) (
																	(((BgL_variablez00_bglt)
																			CREF(BgL_obj1611z00_3849))->
																		BgL_valuez00));
															}
															BgL_l3573z00_1991 =
																(((BgL_sfunz00_bglt)
																	CREF(BgL_obj1896z00_3850))->BgL_optionalsz00);
														}
														if (NULLP(BgL_l3573z00_1991))
															{	/* Ast/unit.scm 474 */
																BgL_optsz00_1799 = BNIL;
															}
														else
															{	/* Ast/unit.scm 474 */
																obj_t BgL_head3575z00_1993;

																BgL_head3575z00_1993 = MAKE_PAIR(BNIL, BNIL);
																{
																	obj_t BgL_l3573z00_1995;

																	obj_t BgL_tail3576z00_1996;

																	BgL_l3573z00_1995 = BgL_l3573z00_1991;
																	BgL_tail3576z00_1996 = BgL_head3575z00_1993;
																BgL_zc3anonymousza34385ze3z83_1997:
																	if (NULLP(BgL_l3573z00_1995))
																		{	/* Ast/unit.scm 474 */
																			BgL_optsz00_1799 =
																				CDR(BgL_head3575z00_1993);
																		}
																	else
																		{	/* Ast/unit.scm 474 */
																			obj_t BgL_newtail3577z00_1999;

																			{	/* Ast/unit.scm 474 */
																				obj_t BgL_arg4388z00_2001;

																				{	/* Ast/unit.scm 474 */
																					obj_t BgL_oz00_2003;

																					BgL_oz00_2003 =
																						CAR(BgL_l3573z00_1995);
																					BgL_arg4388z00_2001 =
																						BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																						(CAR(BgL_oz00_2003), BgL_locz00_66);
																				}
																				BgL_newtail3577z00_1999 =
																					MAKE_PAIR(BgL_arg4388z00_2001, BNIL);
																			}
																			SET_CDR(BgL_tail3576z00_1996,
																				BgL_newtail3577z00_1999);
																			{
																				obj_t BgL_tail3576z00_5238;

																				obj_t BgL_l3573z00_5236;

																				BgL_l3573z00_5236 =
																					CDR(BgL_l3573z00_1995);
																				BgL_tail3576z00_5238 =
																					BgL_newtail3577z00_1999;
																				BgL_tail3576z00_1996 =
																					BgL_tail3576z00_5238;
																				BgL_l3573z00_1995 = BgL_l3573z00_5236;
																				goto BgL_zc3anonymousza34385ze3z83_1997;
																			}
																		}
																}
															}
													}
													{	/* Ast/unit.scm 477 */
														obj_t BgL_arg4237z00_1800;

														obj_t BgL_arg4238z00_1801;

														BgL_arg4237z00_1800 =
															BGl_letzd2symzd2zzast_letz00();
														{	/* Ast/unit.scm 477 */
															obj_t BgL_arg4239z00_1802;

															obj_t BgL_arg4240z00_1803;

															{	/* Ast/unit.scm 477 */
																obj_t BgL_ll3578z00_1807;

																obj_t BgL_ll3579z00_1808;

																{	/* Ast/unit.scm 479 */
																	obj_t BgL_auxz00_5240;

																	{	/* Ast/unit.scm 479 */
																		BgL_sfunz00_bglt BgL_obj1883z00_3864;

																		{	/* Ast/unit.scm 479 */
																			BgL_variablez00_bglt BgL_obj1611z00_3863;

																			BgL_obj1611z00_3863 =
																				(BgL_variablez00_bglt) (BgL_gloz00_58);
																			BgL_obj1883z00_3864 =
																				(BgL_sfunz00_bglt) (
																				(((BgL_variablez00_bglt)
																						CREF(BgL_obj1611z00_3863))->
																					BgL_valuez00));
																		}
																		BgL_auxz00_5240 =
																			(((BgL_sfunz00_bglt)
																				CREF(BgL_obj1883z00_3864))->
																			BgL_argszd2namezd2);
																	}
																	BgL_ll3578z00_1807 =
																		BGl_takez00zz__r4_pairs_and_lists_6_3z00
																		(BgL_auxz00_5240, BgL_arityz00_1777);
																}
																BgL_ll3579z00_1808 =
																	BGl_iotaz00zz__r4_pairs_and_lists_6_3z00(
																	(int) (BgL_arityz00_1777), BNIL);
																if (NULLP(BgL_ll3578z00_1807))
																	{	/* Ast/unit.scm 477 */
																		BgL_arg4239z00_1802 = BNIL;
																	}
																else
																	{	/* Ast/unit.scm 477 */
																		obj_t BgL_head3580z00_1810;

																		BgL_head3580z00_1810 =
																			MAKE_PAIR(BNIL, BNIL);
																		{
																			obj_t BgL_ll3578z00_1812;

																			obj_t BgL_ll3579z00_1813;

																			obj_t BgL_tail3581z00_1814;

																			BgL_ll3578z00_1812 = BgL_ll3578z00_1807;
																			BgL_ll3579z00_1813 = BgL_ll3579z00_1808;
																			BgL_tail3581z00_1814 =
																				BgL_head3580z00_1810;
																		BgL_zc3anonymousza34245ze3z83_1815:
																			if (NULLP(BgL_ll3578z00_1812))
																				{	/* Ast/unit.scm 477 */
																					BgL_arg4239z00_1802 =
																						CDR(BgL_head3580z00_1810);
																				}
																			else
																				{	/* Ast/unit.scm 477 */
																					obj_t BgL_newtail3582z00_1817;

																					{	/* Ast/unit.scm 477 */
																						obj_t BgL_arg4249z00_1820;

																						{	/* Ast/unit.scm 477 */
																							obj_t BgL_vz00_1822;

																							obj_t BgL_iz00_1823;

																							BgL_vz00_1822 =
																								CAR(BgL_ll3578z00_1812);
																							BgL_iz00_1823 =
																								CAR(BgL_ll3579z00_1813);
																							{	/* Ast/unit.scm 478 */
																								obj_t BgL_arg4252z00_1824;

																								{	/* Ast/unit.scm 478 */
																									obj_t BgL_arg4253z00_1825;

																									{	/* Ast/unit.scm 478 */
																										obj_t BgL_arg4257z00_1828;

																										obj_t BgL_arg4258z00_1829;

																										BgL_arg4257z00_1828 =
																											CNST_TABLE_REF(((long)
																												21));
																										{	/* Ast/unit.scm 478 */
																											obj_t
																												BgL_list4259z00_1830;
																											{	/* Ast/unit.scm 478 */
																												obj_t
																													BgL_arg4260z00_1831;
																												BgL_arg4260z00_1831 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4259z00_1830 =
																													MAKE_PAIR
																													(BgL_iz00_1823,
																													BgL_arg4260z00_1831);
																											}
																											BgL_arg4258z00_1829 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														22)),
																												BgL_list4259z00_1830);
																										}
																										BgL_arg4253z00_1825 =
																											MAKE_PAIR
																											(BgL_arg4257z00_1828,
																											BgL_arg4258z00_1829);
																									}
																									{	/* Ast/unit.scm 478 */
																										obj_t BgL_list4255z00_1827;

																										BgL_list4255z00_1827 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4252z00_1824 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_arg4253z00_1825,
																											BgL_list4255z00_1827);
																								}}
																								BgL_arg4249z00_1820 =
																									MAKE_PAIR(BgL_vz00_1822,
																									BgL_arg4252z00_1824);
																						}}
																						BgL_newtail3582z00_1817 =
																							MAKE_PAIR(BgL_arg4249z00_1820,
																							BNIL);
																					}
																					SET_CDR(BgL_tail3581z00_1814,
																						BgL_newtail3582z00_1817);
																					{
																						obj_t BgL_tail3581z00_5271;

																						obj_t BgL_ll3579z00_5269;

																						obj_t BgL_ll3578z00_5267;

																						BgL_ll3578z00_5267 =
																							CDR(BgL_ll3578z00_1812);
																						BgL_ll3579z00_5269 =
																							CDR(BgL_ll3579z00_1813);
																						BgL_tail3581z00_5271 =
																							BgL_newtail3582z00_1817;
																						BgL_tail3581z00_1814 =
																							BgL_tail3581z00_5271;
																						BgL_ll3579z00_1813 =
																							BgL_ll3579z00_5269;
																						BgL_ll3578z00_1812 =
																							BgL_ll3578z00_5267;
																						goto
																							BgL_zc3anonymousza34245ze3z83_1815;
																					}
																				}
																		}
																	}
															}
															{	/* Ast/unit.scm 481 */
																obj_t BgL_arg4265z00_1836;

																obj_t BgL_arg4266z00_1837;

																BgL_arg4265z00_1836 =
																	CNST_TABLE_REF(((long) 23));
																{	/* Ast/unit.scm 481 */
																	obj_t BgL_arg4267z00_1838;

																	obj_t BgL_arg4268z00_1839;

																	{	/* Ast/unit.scm 481 */
																		obj_t BgL_arg4270z00_1841;

																		obj_t BgL_arg4271z00_1842;

																		BgL_arg4270z00_1841 =
																			CNST_TABLE_REF(((long) 24));
																		{	/* Ast/unit.scm 481 */
																			obj_t BgL_list4272z00_1843;

																			BgL_list4272z00_1843 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4271z00_1842 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(CNST_TABLE_REF(((long) 22)),
																				BgL_list4272z00_1843);
																		}
																		BgL_arg4267z00_1838 =
																			MAKE_PAIR(BgL_arg4270z00_1841,
																			BgL_arg4271z00_1842);
																	}
																	{	/* Ast/unit.scm 482 */
																		obj_t BgL_arg4273z00_1844;

																		obj_t BgL_arg4274z00_1845;

																		{	/* Ast/unit.scm 482 */
																			obj_t BgL_l3595z00_1846;

																			{	/* Ast/unit.scm 496 */
																				obj_t BgL_arg4333z00_1928;

																				BgL_arg4333z00_1928 =
																					BINT((((long) 1) + BgL_loptz00_1797));
																				BgL_l3595z00_1846 =
																					BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																					(CINT(BgL_arg4333z00_1928), BNIL);
																			}
																			if (NULLP(BgL_l3595z00_1846))
																				{	/* Ast/unit.scm 482 */
																					BgL_arg4273z00_1844 = BNIL;
																				}
																			else
																				{	/* Ast/unit.scm 482 */
																					obj_t BgL_head3597z00_1848;

																					BgL_head3597z00_1848 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l3595z00_1850;

																						obj_t BgL_tail3598z00_1851;

																						BgL_l3595z00_1850 =
																							BgL_l3595z00_1846;
																						BgL_tail3598z00_1851 =
																							BgL_head3597z00_1848;
																					BgL_zc3anonymousza34276ze3z83_1852:
																						if (NULLP(BgL_l3595z00_1850))
																							{	/* Ast/unit.scm 482 */
																								BgL_arg4273z00_1844 =
																									CDR(BgL_head3597z00_1848);
																							}
																						else
																							{	/* Ast/unit.scm 482 */
																								obj_t BgL_newtail3599z00_1854;

																								{	/* Ast/unit.scm 482 */
																									obj_t BgL_arg4279z00_1856;

																									{	/* Ast/unit.scm 482 */
																										obj_t BgL_iz00_1858;

																										BgL_iz00_1858 =
																											CAR(BgL_l3595z00_1850);
																										{	/* Ast/unit.scm 483 */
																											obj_t BgL_arg4282z00_1859;

																											obj_t BgL_arg4283z00_1860;

																											{	/* Ast/unit.scm 483 */
																												long
																													BgL_arg4285z00_1861;
																												BgL_arg4285z00_1861 =
																													(BgL_arityz00_1777 +
																													(long)
																													CINT(BgL_iz00_1858));
																												BgL_arg4282z00_1859 =
																													MAKE_PAIR(BINT
																													(BgL_arg4285z00_1861),
																													BNIL);
																											}
																											{	/* Ast/unit.scm 484 */
																												obj_t
																													BgL_arg4287z00_1863;
																												{	/* Ast/unit.scm 484 */
																													obj_t
																														BgL_arg4291z00_1866;
																													obj_t
																														BgL_arg4292z00_1867;
																													BgL_arg4291z00_1866 =
																														CNST_TABLE_REF((
																															(long) 25));
																													{	/* Ast/unit.scm 484 */
																														obj_t
																															BgL_arg4293z00_1868;
																														obj_t
																															BgL_arg4294z00_1869;
																														{	/* Ast/unit.scm 484 */
																															obj_t
																																BgL_arg4298z00_1873;
																															obj_t
																																BgL_arg4299z00_1874;
																															{	/* Ast/unit.scm 484 */
																																obj_t
																																	BgL_ll3584z00_1875;
																																obj_t
																																	BgL_ll3585z00_1876;
																																BgL_ll3584z00_1875
																																	=
																																	BGl_takez00zz__r4_pairs_and_lists_6_3z00
																																	(BGl_dropz00zz__r4_pairs_and_lists_6_3z00
																																	(BgL_formsz00_1798,
																																		BgL_arityz00_1777),
																																	(long)
																																	CINT
																																	(BgL_iz00_1858));
																																{	/* Ast/unit.scm 487 */
																																	obj_t
																																		BgL_list4316z00_1902;
																																	BgL_list4316z00_1902
																																		=
																																		MAKE_PAIR
																																		(BINT
																																		(BgL_arityz00_1777),
																																		BNIL);
																																	BgL_ll3585z00_1876
																																		=
																																		BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																																		(CINT
																																		(BgL_iz00_1858),
																																		BgL_list4316z00_1902);
																																}
																																if (NULLP
																																	(BgL_ll3584z00_1875))
																																	{	/* Ast/unit.scm 484 */
																																		BgL_arg4298z00_1873
																																			= BNIL;
																																	}
																																else
																																	{	/* Ast/unit.scm 484 */
																																		obj_t
																																			BgL_head3586z00_1878;
																																		BgL_head3586z00_1878
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		{
																																			obj_t
																																				BgL_ll3584z00_1880;
																																			obj_t
																																				BgL_ll3585z00_1881;
																																			obj_t
																																				BgL_tail3587z00_1882;
																																			BgL_ll3584z00_1880
																																				=
																																				BgL_ll3584z00_1875;
																																			BgL_ll3585z00_1881
																																				=
																																				BgL_ll3585z00_1876;
																																			BgL_tail3587z00_1882
																																				=
																																				BgL_head3586z00_1878;
																																		BgL_zc3anonymousza34301ze3z83_1883:
																																			if (NULLP
																																				(BgL_ll3584z00_1880))
																																				{	/* Ast/unit.scm 484 */
																																					BgL_arg4298z00_1873
																																						=
																																						CDR
																																						(BgL_head3586z00_1878);
																																				}
																																			else
																																				{	/* Ast/unit.scm 484 */
																																					obj_t
																																						BgL_newtail3588z00_1885;
																																					{	/* Ast/unit.scm 484 */
																																						obj_t
																																							BgL_arg4305z00_1888;
																																						{	/* Ast/unit.scm 484 */
																																							obj_t
																																								BgL_vz00_1890;
																																							obj_t
																																								BgL_jz00_1891;
																																							BgL_vz00_1890
																																								=
																																								CAR
																																								(BgL_ll3584z00_1880);
																																							BgL_jz00_1891
																																								=
																																								CAR
																																								(BgL_ll3585z00_1881);
																																							{	/* Ast/unit.scm 485 */
																																								obj_t
																																									BgL_arg4307z00_1892;
																																								{	/* Ast/unit.scm 485 */
																																									obj_t
																																										BgL_arg4308z00_1893;
																																									{	/* Ast/unit.scm 485 */
																																										obj_t
																																											BgL_arg4311z00_1896;
																																										obj_t
																																											BgL_arg4312z00_1897;
																																										BgL_arg4311z00_1896
																																											=
																																											CNST_TABLE_REF
																																											(
																																											((long) 21));
																																										{	/* Ast/unit.scm 485 */
																																											obj_t
																																												BgL_list4313z00_1898;
																																											{	/* Ast/unit.scm 485 */
																																												obj_t
																																													BgL_arg4314z00_1899;
																																												BgL_arg4314z00_1899
																																													=
																																													MAKE_PAIR
																																													(BNIL,
																																													BNIL);
																																												BgL_list4313z00_1898
																																													=
																																													MAKE_PAIR
																																													(BgL_jz00_1891,
																																													BgL_arg4314z00_1899);
																																											}
																																											BgL_arg4312z00_1897
																																												=
																																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																												(CNST_TABLE_REF
																																												(((long) 22)), BgL_list4313z00_1898);
																																										}
																																										BgL_arg4308z00_1893
																																											=
																																											MAKE_PAIR
																																											(BgL_arg4311z00_1896,
																																											BgL_arg4312z00_1897);
																																									}
																																									{	/* Ast/unit.scm 485 */
																																										obj_t
																																											BgL_list4310z00_1895;
																																										BgL_list4310z00_1895
																																											=
																																											MAKE_PAIR
																																											(BNIL,
																																											BNIL);
																																										BgL_arg4307z00_1892
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(BgL_arg4308z00_1893,
																																											BgL_list4310z00_1895);
																																								}}
																																								BgL_arg4305z00_1888
																																									=
																																									MAKE_PAIR
																																									(BgL_vz00_1890,
																																									BgL_arg4307z00_1892);
																																						}}
																																						BgL_newtail3588z00_1885
																																							=
																																							MAKE_PAIR
																																							(BgL_arg4305z00_1888,
																																							BNIL);
																																					}
																																					SET_CDR
																																						(BgL_tail3587z00_1882,
																																						BgL_newtail3588z00_1885);
																																					{
																																						obj_t
																																							BgL_tail3587z00_5324;
																																						obj_t
																																							BgL_ll3585z00_5322;
																																						obj_t
																																							BgL_ll3584z00_5320;
																																						BgL_ll3584z00_5320
																																							=
																																							CDR
																																							(BgL_ll3584z00_1880);
																																						BgL_ll3585z00_5322
																																							=
																																							CDR
																																							(BgL_ll3585z00_1881);
																																						BgL_tail3587z00_5324
																																							=
																																							BgL_newtail3588z00_1885;
																																						BgL_tail3587z00_1882
																																							=
																																							BgL_tail3587z00_5324;
																																						BgL_ll3585z00_1881
																																							=
																																							BgL_ll3585z00_5322;
																																						BgL_ll3584z00_1880
																																							=
																																							BgL_ll3584z00_5320;
																																						goto
																																							BgL_zc3anonymousza34301ze3z83_1883;
																																					}
																																				}
																																		}
																																	}
																															}
																															BgL_arg4299z00_1874
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BGl_dropz00zz__r4_pairs_and_lists_6_3z00
																																(BgL_optionalsz00_59,
																																	(long)
																																	CINT
																																	(BgL_iz00_1858)),
																																BNIL);
																															BgL_arg4293z00_1868
																																=
																																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg4298z00_1873,
																																BgL_arg4299z00_1874);
																														}
																														{	/* Ast/unit.scm 491 */
																															obj_t
																																BgL_arg4319z00_1905;
																															{	/* Ast/unit.scm 491 */
																																obj_t
																																	BgL_arg4320z00_1906;
																																obj_t
																																	BgL_arg4321z00_1907;
																																{	/* Ast/unit.scm 491 */
																																	obj_t
																																		BgL_l3590z00_1908;
																																	BgL_l3590z00_1908
																																		=
																																		BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																																		((int)
																																		(BgL_arityz00_1777),
																																		BNIL);
																																	if (NULLP
																																		(BgL_l3590z00_1908))
																																		{	/* Ast/unit.scm 491 */
																																			BgL_arg4320z00_1906
																																				= BNIL;
																																		}
																																	else
																																		{	/* Ast/unit.scm 491 */
																																			obj_t
																																				BgL_head3592z00_1910;
																																			BgL_head3592z00_1910
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			{
																																				obj_t
																																					BgL_l3590z00_1912;
																																				obj_t
																																					BgL_tail3593z00_1913;
																																				BgL_l3590z00_1912
																																					=
																																					BgL_l3590z00_1908;
																																				BgL_tail3593z00_1913
																																					=
																																					BgL_head3592z00_1910;
																																			BgL_zc3anonymousza34323ze3z83_1914:
																																				if (NULLP(BgL_l3590z00_1912))
																																					{	/* Ast/unit.scm 491 */
																																						BgL_arg4320z00_1906
																																							=
																																							CDR
																																							(BgL_head3592z00_1910);
																																					}
																																				else
																																					{	/* Ast/unit.scm 491 */
																																						obj_t
																																							BgL_newtail3594z00_1916;
																																						{	/* Ast/unit.scm 491 */
																																							obj_t
																																								BgL_arg4326z00_1918;
																																							{	/* Ast/unit.scm 491 */
																																								obj_t
																																									BgL_jz00_1920;
																																								BgL_jz00_1920
																																									=
																																									CAR
																																									(BgL_l3590z00_1912);
																																								{	/* Ast/unit.scm 492 */
																																									obj_t
																																										BgL_arg4328z00_1921;
																																									obj_t
																																										BgL_arg4329z00_1922;
																																									BgL_arg4328z00_1921
																																										=
																																										CNST_TABLE_REF
																																										(
																																										((long) 21));
																																									{	/* Ast/unit.scm 492 */
																																										obj_t
																																											BgL_list4330z00_1923;
																																										{	/* Ast/unit.scm 492 */
																																											obj_t
																																												BgL_arg4331z00_1924;
																																											BgL_arg4331z00_1924
																																												=
																																												MAKE_PAIR
																																												(BNIL,
																																												BNIL);
																																											BgL_list4330z00_1923
																																												=
																																												MAKE_PAIR
																																												(BgL_jz00_1920,
																																												BgL_arg4331z00_1924);
																																										}
																																										BgL_arg4329z00_1922
																																											=
																																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																											(CNST_TABLE_REF
																																											(((long) 22)), BgL_list4330z00_1923);
																																									}
																																									BgL_arg4326z00_1918
																																										=
																																										MAKE_PAIR
																																										(BgL_arg4328z00_1921,
																																										BgL_arg4329z00_1922);
																																							}}
																																							BgL_newtail3594z00_1916
																																								=
																																								MAKE_PAIR
																																								(BgL_arg4326z00_1918,
																																								BNIL);
																																						}
																																						SET_CDR
																																							(BgL_tail3593z00_1913,
																																							BgL_newtail3594z00_1916);
																																						{
																																							obj_t
																																								BgL_tail3593z00_5348;
																																							obj_t
																																								BgL_l3590z00_5346;
																																							BgL_l3590z00_5346
																																								=
																																								CDR
																																								(BgL_l3590z00_1912);
																																							BgL_tail3593z00_5348
																																								=
																																								BgL_newtail3594z00_1916;
																																							BgL_tail3593z00_1913
																																								=
																																								BgL_tail3593z00_5348;
																																							BgL_l3590z00_1912
																																								=
																																								BgL_l3590z00_5346;
																																							goto
																																								BgL_zc3anonymousza34323ze3z83_1914;
																																						}
																																					}
																																			}
																																		}
																																}
																																BgL_arg4321z00_1907
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_optsz00_1799,
																																	BNIL);
																																BgL_arg4319z00_1905
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg4320z00_1906,
																																	BgL_arg4321z00_1907);
																															}
																															BgL_arg4294z00_1869
																																=
																																MAKE_PAIR(
																																(obj_t)
																																(BgL_gloz00_58),
																																BgL_arg4319z00_1905);
																														}
																														{	/* Ast/unit.scm 484 */
																															obj_t
																																BgL_list4296z00_1871;
																															{	/* Ast/unit.scm 484 */
																																obj_t
																																	BgL_arg4297z00_1872;
																																BgL_arg4297z00_1872
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list4296z00_1871
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4294z00_1869,
																																	BgL_arg4297z00_1872);
																															}
																															BgL_arg4292z00_1867
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg4293z00_1868,
																																BgL_list4296z00_1871);
																														}
																													}
																													BgL_arg4287z00_1863 =
																														MAKE_PAIR
																														(BgL_arg4291z00_1866,
																														BgL_arg4292z00_1867);
																												}
																												{	/* Ast/unit.scm 483 */
																													obj_t
																														BgL_list4289z00_1865;
																													BgL_list4289z00_1865 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg4283z00_1860 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg4287z00_1863,
																														BgL_list4289z00_1865);
																												}
																											}
																											BgL_arg4279z00_1856 =
																												MAKE_PAIR
																												(BgL_arg4282z00_1859,
																												BgL_arg4283z00_1860);
																										}
																									}
																									BgL_newtail3599z00_1854 =
																										MAKE_PAIR
																										(BgL_arg4279z00_1856, BNIL);
																								}
																								SET_CDR(BgL_tail3598z00_1851,
																									BgL_newtail3599z00_1854);
																								{
																									obj_t BgL_tail3598z00_5364;

																									obj_t BgL_l3595z00_5362;

																									BgL_l3595z00_5362 =
																										CDR(BgL_l3595z00_1850);
																									BgL_tail3598z00_5364 =
																										BgL_newtail3599z00_1854;
																									BgL_tail3598z00_1851 =
																										BgL_tail3598z00_5364;
																									BgL_l3595z00_1850 =
																										BgL_l3595z00_5362;
																									goto
																										BgL_zc3anonymousza34276ze3z83_1852;
																								}
																							}
																					}
																				}
																		}
																		{	/* Ast/unit.scm 497 */
																			obj_t BgL_arg4335z00_1930;

																			{	/* Ast/unit.scm 497 */
																				obj_t BgL_arg4337z00_1932;

																				obj_t BgL_arg4338z00_1933;

																				BgL_arg4337z00_1932 =
																					CNST_TABLE_REF(((long) 26));
																				{	/* Ast/unit.scm 498 */
																					obj_t BgL_arg4339z00_1934;

																					if (CBOOL
																						(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
																						{	/* Ast/unit.scm 498 */
																							BgL_arg4339z00_1934 = BUNSPEC;
																						}
																					else
																						{	/* Ast/unit.scm 500 */
																							obj_t BgL_arg4342z00_1937;

																							obj_t BgL_arg4343z00_1938;

																							{	/* Ast/unit.scm 500 */
																								obj_t BgL_arg4344z00_1939;

																								obj_t BgL_arg4345z00_1940;

																								BgL_arg4344z00_1939 =
																									CNST_TABLE_REF(((long) 1));
																								{	/* Ast/unit.scm 500 */
																									obj_t BgL_list4346z00_1941;

																									{	/* Ast/unit.scm 500 */
																										obj_t BgL_arg4347z00_1942;

																										obj_t BgL_arg4348z00_1943;

																										BgL_arg4347z00_1942 =
																											CNST_TABLE_REF(((long)
																												27));
																										BgL_arg4348z00_1943 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list4346z00_1941 =
																											MAKE_PAIR
																											(BgL_arg4347z00_1942,
																											BgL_arg4348z00_1943);
																									}
																									BgL_arg4345z00_1940 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(CNST_TABLE_REF(((long)
																												28)),
																										BgL_list4346z00_1941);
																								}
																								BgL_arg4342z00_1937 =
																									MAKE_PAIR(BgL_arg4344z00_1939,
																									BgL_arg4345z00_1940);
																							}
																							{	/* Ast/unit.scm 501 */
																								obj_t BgL_arg4349z00_1944;

																								obj_t BgL_arg4350z00_1945;

																								obj_t BgL_arg4351z00_1946;

																								{	/* Ast/unit.scm 501 */
																									obj_t BgL_arg4356z00_1951;

																									obj_t BgL_arg4357z00_1952;

																									BgL_arg4356z00_1951 =
																										CNST_TABLE_REF(((long) 29));
																									{	/* Ast/unit.scm 501 */
																										obj_t BgL_list4358z00_1953;

																										BgL_list4358z00_1953 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4357z00_1952 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(BgL_idz00_60,
																											BgL_list4358z00_1953);
																									}
																									BgL_arg4349z00_1944 =
																										MAKE_PAIR
																										(BgL_arg4356z00_1951,
																										BgL_arg4357z00_1952);
																								}
																								{	/* Ast/unit.scm 502 */
																									obj_t BgL_arg4360z00_1955;

																									obj_t BgL_arg4362z00_1957;

																									{	/* Ast/unit.scm 504 */

																										BgL_arg4360z00_1955 =
																											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																											(BgL_arityz00_1777,
																											((long) 10));
																									}
																									{	/* Ast/unit.scm 505 */

																										BgL_arg4362z00_1957 =
																											BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																											((long)
																											CINT(BINT(
																													(BgL_arityz00_1777 +
																														BgL_loptz00_1797))),
																											((long) 10));
																									}
																									{	/* Ast/unit.scm 502 */
																										obj_t BgL_list4364z00_1959;

																										{	/* Ast/unit.scm 502 */
																											obj_t BgL_arg4365z00_1960;

																											{	/* Ast/unit.scm 502 */
																												obj_t
																													BgL_arg4366z00_1961;
																												{	/* Ast/unit.scm 502 */
																													obj_t
																														BgL_arg4367z00_1962;
																													{	/* Ast/unit.scm 502 */
																														obj_t
																															BgL_arg4368z00_1963;
																														BgL_arg4368z00_1963
																															=
																															MAKE_PAIR
																															(BGl_string5073z00zzast_unitz00,
																															BNIL);
																														BgL_arg4367z00_1962
																															=
																															MAKE_PAIR
																															(BgL_arg4362z00_1957,
																															BgL_arg4368z00_1963);
																													}
																													BgL_arg4366z00_1961 =
																														MAKE_PAIR
																														(BGl_string5074z00zzast_unitz00,
																														BgL_arg4367z00_1962);
																												}
																												BgL_arg4365z00_1960 =
																													MAKE_PAIR
																													(BgL_arg4360z00_1955,
																													BgL_arg4366z00_1961);
																											}
																											BgL_list4364z00_1959 =
																												MAKE_PAIR
																												(BGl_string5075z00zzast_unitz00,
																												BgL_arg4365z00_1960);
																										}
																										BgL_arg4350z00_1945 =
																											BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																											(BgL_list4364z00_1959);
																								}}
																								{	/* Ast/unit.scm 507 */
																									obj_t BgL_arg4370z00_1969;

																									obj_t BgL_arg4371z00_1970;

																									BgL_arg4370z00_1969 =
																										CNST_TABLE_REF(((long) 24));
																									{	/* Ast/unit.scm 507 */
																										obj_t BgL_list4372z00_1971;

																										BgL_list4372z00_1971 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_arg4371z00_1970 =
																											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																											(CNST_TABLE_REF(((long)
																													22)),
																											BgL_list4372z00_1971);
																									}
																									BgL_arg4351z00_1946 =
																										MAKE_PAIR
																										(BgL_arg4370z00_1969,
																										BgL_arg4371z00_1970);
																								}
																								{	/* Ast/unit.scm 500 */
																									obj_t BgL_list4353z00_1948;

																									{	/* Ast/unit.scm 500 */
																										obj_t BgL_arg4354z00_1949;

																										{	/* Ast/unit.scm 500 */
																											obj_t BgL_arg4355z00_1950;

																											BgL_arg4355z00_1950 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4354z00_1949 =
																												MAKE_PAIR
																												(BgL_arg4351z00_1946,
																												BgL_arg4355z00_1950);
																										}
																										BgL_list4353z00_1948 =
																											MAKE_PAIR
																											(BgL_arg4350z00_1945,
																											BgL_arg4354z00_1949);
																									}
																									BgL_arg4343z00_1938 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4349z00_1944,
																										BgL_list4353z00_1948);
																							}}
																							BgL_arg4339z00_1934 =
																								MAKE_PAIR(BgL_arg4342z00_1937,
																								BgL_arg4343z00_1938);
																						}
																					{	/* Ast/unit.scm 497 */
																						obj_t BgL_list4341z00_1936;

																						BgL_list4341z00_1936 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4338z00_1933 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4339z00_1934,
																							BgL_list4341z00_1936);
																				}}
																				BgL_arg4335z00_1930 =
																					MAKE_PAIR(BgL_arg4337z00_1932,
																					BgL_arg4338z00_1933);
																			}
																			BgL_arg4274z00_1845 =
																				MAKE_PAIR(BgL_arg4335z00_1930, BNIL);
																		}
																		BgL_arg4268z00_1839 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4273z00_1844,
																			BgL_arg4274z00_1845);
																	}
																	{	/* Ast/unit.scm 481 */
																		obj_t BgL_list4269z00_1840;

																		BgL_list4269z00_1840 =
																			MAKE_PAIR(BgL_arg4268z00_1839, BNIL);
																		BgL_arg4266z00_1837 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4267z00_1838,
																			BgL_list4269z00_1840);
																}}
																BgL_arg4240z00_1803 =
																	MAKE_PAIR(BgL_arg4265z00_1836,
																	BgL_arg4266z00_1837);
															}
															{	/* Ast/unit.scm 477 */
																obj_t BgL_list4242z00_1805;

																{	/* Ast/unit.scm 477 */
																	obj_t BgL_arg4243z00_1806;

																	BgL_arg4243z00_1806 = MAKE_PAIR(BNIL, BNIL);
																	BgL_list4242z00_1805 =
																		MAKE_PAIR(BgL_arg4240z00_1803,
																		BgL_arg4243z00_1806);
																}
																BgL_arg4238z00_1801 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_arg4239z00_1802, BgL_list4242z00_1805);
														}}
														BgL_auxz00_5198 =
															MAKE_PAIR(BgL_arg4237z00_1800,
															BgL_arg4238z00_1801);
												}}
												BgL_auxz00_5197 =
													BGl_comptimezd2expandzd2zzexpand_epsz00
													(BgL_auxz00_5198);
											}
											BgL_arg4225z00_1786 =
												BGl_compilezd2expandzd2zzexpand_epsz00(BgL_auxz00_5197);
										}
										BgL_gz00_1782 =
											BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
											(BgL_idz00_1779, BgL_arg4222z00_1783, BgL_arg4223z00_1784,
											BgL_modulez00_61, BgL_classz00_65, BgL_srcz00_64,
											BgL_arg4224z00_1785, BgL_arg4225z00_1786);
									}
									{	/* Ast/unit.scm 511 */

										((((BgL_globalz00_bglt) CREF(BgL_gz00_1782))->
												BgL_evaluablezf3zf3) =
											((bool_t) ((bool_t) 0)), BUNSPEC);
										{
											BgL_typez00_bglt BgL_auxz00_5418;

											BgL_variablez00_bglt BgL_auxz00_5416;

											BgL_auxz00_5418 =
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
											BgL_auxz00_5416 = (BgL_variablez00_bglt) (BgL_gz00_1782);
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_5416))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_5418), BUNSPEC);
										}
										return BgL_gz00_1782;
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* make-sfun-key-definition */
	obj_t BGl_makezd2sfunzd2keyzd2definitionzd2zzast_unitz00(obj_t BgL_keysz00_67,
		obj_t BgL_idz00_68, obj_t BgL_modulez00_69, obj_t BgL_argsz00_70,
		obj_t BgL_bodyz00_71, obj_t BgL_srcz00_72, obj_t BgL_classz00_73,
		obj_t BgL_locz00_74)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 521 */
			{	/* Ast/unit.scm 522 */
				obj_t BgL_localsz00_2009;

				{	/* Ast/unit.scm 522 */
					obj_t BgL_arg4395z00_2014;

					obj_t BgL_arg4396z00_2015;

					{	/* Ast/unit.scm 522 */
						obj_t BgL_l3600z00_2016;

						BgL_l3600z00_2016 =
							BGl_dssslzd2beforezd2dssslz00zztools_dssslz00(BgL_argsz00_70);
						if (NULLP(BgL_l3600z00_2016))
							{	/* Ast/unit.scm 522 */
								BgL_arg4395z00_2014 = BNIL;
							}
						else
							{	/* Ast/unit.scm 522 */
								obj_t BgL_head3602z00_2018;

								BgL_head3602z00_2018 = MAKE_PAIR(BNIL, BNIL);
								{
									obj_t BgL_l3600z00_2020;

									obj_t BgL_tail3603z00_2021;

									BgL_l3600z00_2020 = BgL_l3600z00_2016;
									BgL_tail3603z00_2021 = BgL_head3602z00_2018;
								BgL_zc3anonymousza34398ze3z83_2022:
									if (NULLP(BgL_l3600z00_2020))
										{	/* Ast/unit.scm 522 */
											BgL_arg4395z00_2014 = CDR(BgL_head3602z00_2018);
										}
									else
										{	/* Ast/unit.scm 522 */
											obj_t BgL_newtail3604z00_2024;

											{	/* Ast/unit.scm 522 */
												BgL_localz00_bglt BgL_arg4401z00_2026;

												{	/* Ast/unit.scm 522 */
													obj_t BgL_az00_2028;

													BgL_az00_2028 = CAR(BgL_l3600z00_2020);
													{	/* Ast/unit.scm 523 */
														obj_t BgL_pidz00_2029;

														BgL_pidz00_2029 =
															BGl_checkzd2idzd2zzast_identz00
															(BGl_parsezd2idzd2zzast_identz00(BgL_az00_2028,
																BgL_locz00_74), BgL_srcz00_72);
														{	/* Ast/unit.scm 523 */
															obj_t BgL_idz00_2030;

															BgL_idz00_2030 = CAR(BgL_pidz00_2029);
															{	/* Ast/unit.scm 524 */
																obj_t BgL_typez00_2031;

																BgL_typez00_2031 = CDR(BgL_pidz00_2029);
																{	/* Ast/unit.scm 525 */

																	if (BGl_userzd2symbolzf3z21zzast_identz00
																		(BgL_idz00_2030))
																		{	/* Ast/unit.scm 526 */
																			BgL_arg4401z00_2026 =
																				BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																				(BgL_idz00_2030,
																				(BgL_typez00_bglt) (BgL_typez00_2031));
																		}
																	else
																		{	/* Ast/unit.scm 526 */
																			BgL_arg4401z00_2026 =
																				BGl_makezd2localzd2svarz00zzast_localz00
																				(BgL_idz00_2030,
																				(BgL_typez00_bglt) (BgL_typez00_2031));
																		}
																}
															}
														}
													}
												}
												BgL_newtail3604z00_2024 =
													MAKE_PAIR((obj_t) (BgL_arg4401z00_2026), BNIL);
											}
											SET_CDR(BgL_tail3603z00_2021, BgL_newtail3604z00_2024);
											{
												obj_t BgL_tail3603z00_5444;

												obj_t BgL_l3600z00_5442;

												BgL_l3600z00_5442 = CDR(BgL_l3600z00_2020);
												BgL_tail3603z00_5444 = BgL_newtail3604z00_2024;
												BgL_tail3603z00_2021 = BgL_tail3603z00_5444;
												BgL_l3600z00_2020 = BgL_l3600z00_5442;
												goto BgL_zc3anonymousza34398ze3z83_2022;
											}
										}
								}
							}
					}
					{	/* Ast/unit.scm 530 */
						obj_t BgL_head3607z00_2037;

						BgL_head3607z00_2037 = MAKE_PAIR(BNIL, BNIL);
						{
							obj_t BgL_l3605z00_2039;

							obj_t BgL_tail3608z00_2040;

							BgL_l3605z00_2039 = BgL_keysz00_67;
							BgL_tail3608z00_2040 = BgL_head3607z00_2037;
						BgL_zc3anonymousza34406ze3z83_2041:
							if (NULLP(BgL_l3605z00_2039))
								{	/* Ast/unit.scm 530 */
									BgL_arg4396z00_2015 = CDR(BgL_head3607z00_2037);
								}
							else
								{	/* Ast/unit.scm 530 */
									obj_t BgL_newtail3609z00_2043;

									{	/* Ast/unit.scm 530 */
										BgL_localz00_bglt BgL_arg4409z00_2045;

										{	/* Ast/unit.scm 530 */
											obj_t BgL_oz00_2047;

											BgL_oz00_2047 = CAR(BgL_l3605z00_2039);
											{	/* Ast/unit.scm 531 */
												obj_t BgL_az00_2048;

												BgL_az00_2048 = CAR(BgL_oz00_2047);
												{	/* Ast/unit.scm 531 */
													obj_t BgL_pidz00_2049;

													BgL_pidz00_2049 =
														BGl_checkzd2idzd2zzast_identz00
														(BGl_parsezd2idzd2zzast_identz00(BgL_az00_2048,
															BgL_locz00_74), BgL_srcz00_72);
													{	/* Ast/unit.scm 532 */
														obj_t BgL_idz00_2050;

														BgL_idz00_2050 = CAR(BgL_pidz00_2049);
														{	/* Ast/unit.scm 533 */
															obj_t BgL_typez00_2051;

															BgL_typez00_2051 = CDR(BgL_pidz00_2049);
															{	/* Ast/unit.scm 534 */

																BgL_arg4409z00_2045 =
																	BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																	(BgL_idz00_2050,
																	(BgL_typez00_bglt) (BgL_typez00_2051));
															}
														}
													}
												}
											}
										}
										BgL_newtail3609z00_2043 =
											MAKE_PAIR((obj_t) (BgL_arg4409z00_2045), BNIL);
									}
									SET_CDR(BgL_tail3608z00_2040, BgL_newtail3609z00_2043);
									{
										obj_t BgL_tail3608z00_5462;

										obj_t BgL_l3605z00_5460;

										BgL_l3605z00_5460 = CDR(BgL_l3605z00_2039);
										BgL_tail3608z00_5462 = BgL_newtail3609z00_2043;
										BgL_tail3608z00_2040 = BgL_tail3608z00_5462;
										BgL_l3605z00_2039 = BgL_l3605z00_5460;
										goto BgL_zc3anonymousza34406ze3z83_2041;
									}
								}
						}
					}
					BgL_localsz00_2009 =
						bgl_append2(BgL_arg4395z00_2014, BgL_arg4396z00_2015);
				}
				{	/* Ast/unit.scm 522 */
					BgL_globalz00_bglt BgL_gloz00_2010;

					BgL_gloz00_2010 =
						BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_68,
						BgL_argsz00_70, BgL_localsz00_2009, BgL_modulez00_69,
						BgL_classz00_73, BgL_srcz00_72, CNST_TABLE_REF(((long) 8)),
						BgL_bodyz00_71);
					{	/* Ast/unit.scm 537 */
						BgL_globalz00_bglt BgL_cloz00_2011;

						BgL_cloz00_2011 =
							BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(BgL_gloz00_2010,
							BgL_keysz00_67, BgL_idz00_68, BgL_modulez00_69, BgL_argsz00_70,
							BgL_bodyz00_71, BgL_srcz00_72, BgL_classz00_73, BgL_locz00_74);
						{	/* Ast/unit.scm 538 */

							{	/* Ast/unit.scm 539 */
								obj_t BgL_list4393z00_2012;

								{	/* Ast/unit.scm 539 */
									obj_t BgL_arg4394z00_2013;

									BgL_arg4394z00_2013 =
										MAKE_PAIR((obj_t) (BgL_cloz00_2011), BNIL);
									BgL_list4393z00_2012 =
										MAKE_PAIR((obj_t) (BgL_gloz00_2010), BgL_arg4394z00_2013);
								}
								return BgL_list4393z00_2012;
							}
						}
					}
				}
			}
		}
	}



/* make-sfun-key-closure */
	BgL_globalz00_bglt
		BGl_makezd2sfunzd2keyzd2closurezd2zzast_unitz00(BgL_globalz00_bglt
		BgL_gloz00_75, obj_t BgL_keysz00_76, obj_t BgL_idz00_77,
		obj_t BgL_modulez00_78, obj_t BgL_argsz00_79, obj_t BgL_bodyz00_80,
		obj_t BgL_srcz00_81, obj_t BgL_classz00_82, obj_t BgL_locz00_83)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 546 */
			{	/* Ast/unit.scm 547 */
				long BgL_arityz00_2054;

				obj_t BgL_ioptz00_2055;

				long BgL_loptz00_2056;

				obj_t BgL_lz00_2057;

				obj_t BgL_searchz00_2058;

				obj_t BgL_checkz00_2059;

				obj_t BgL_varz00_2060;

				{	/* Ast/unit.scm 547 */
					BgL_funz00_bglt BgL_obj1813z00_3945;

					{	/* Ast/unit.scm 547 */
						BgL_variablez00_bglt BgL_obj1611z00_3944;

						BgL_obj1611z00_3944 = (BgL_variablez00_bglt) (BgL_gloz00_75);
						BgL_obj1813z00_3945 =
							(BgL_funz00_bglt) (
							(((BgL_variablez00_bglt) CREF(BgL_obj1611z00_3944))->
								BgL_valuez00));
					}
					BgL_arityz00_2054 =
						(((BgL_funz00_bglt) CREF(BgL_obj1813z00_3945))->BgL_arityz00);
				}
				BgL_ioptz00_2055 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 22)));
				BgL_loptz00_2056 = bgl_list_length(BgL_keysz00_76);
				BgL_lz00_2057 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 34)));
				BgL_searchz00_2058 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 35)));
				BgL_checkz00_2059 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 36)));
				BgL_varz00_2060 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 37)));
				{
					obj_t BgL_keysz00_2080;

					{	/* Ast/unit.scm 619 */
						obj_t BgL_idz00_2063;

						{	/* Ast/unit.scm 619 */
							obj_t BgL_arg4420z00_2075;

							{	/* Ast/unit.scm 619 */
								obj_t BgL_arg4421z00_2076;

								obj_t BgL_arg4422z00_2077;

								{	/* Ast/unit.scm 619 */
									obj_t BgL_res5048z00_3948;

									{	/* Ast/unit.scm 619 */
										obj_t BgL_symbolz00_3946;

										BgL_symbolz00_3946 = CNST_TABLE_REF(((long) 30));
										{	/* Ast/unit.scm 619 */
											obj_t BgL_arg2063z00_3947;

											BgL_arg2063z00_3947 =
												SYMBOL_TO_STRING(BgL_symbolz00_3946);
											BgL_res5048z00_3948 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_3947);
									}}
									BgL_arg4421z00_2076 = BgL_res5048z00_3948;
								}
								{	/* Ast/unit.scm 619 */
									obj_t BgL_res5049z00_3951;

									{	/* Ast/unit.scm 619 */
										obj_t BgL_arg2063z00_3950;

										BgL_arg2063z00_3950 = SYMBOL_TO_STRING(BgL_idz00_77);
										BgL_res5049z00_3951 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg2063z00_3950);
									}
									BgL_arg4422z00_2077 = BgL_res5049z00_3951;
								}
								{	/* Ast/unit.scm 619 */
									obj_t BgL_list4423z00_2078;

									{	/* Ast/unit.scm 619 */
										obj_t BgL_arg4424z00_2079;

										BgL_arg4424z00_2079 = MAKE_PAIR(BgL_arg4422z00_2077, BNIL);
										BgL_list4423z00_2078 =
											MAKE_PAIR(BgL_arg4421z00_2076, BgL_arg4424z00_2079);
									}
									BgL_arg4420z00_2075 =
										BGl_stringzd2appendzd2zz__r4_strings_6_7z00
										(BgL_list4423z00_2078);
							}}
							BgL_idz00_2063 =
								string_to_symbol(BSTRING_TO_STRING(BgL_arg4420z00_2075));
						}
						{	/* Ast/unit.scm 619 */
							BgL_localz00_bglt BgL_optz00_2064;

							BgL_optz00_2064 =
								BGl_makezd2localzd2svarz00zzast_localz00(BgL_ioptz00_2055,
								(BgL_typez00_bglt) (BGl_za2vectorza2z00zztype_cachez00));
							{	/* Ast/unit.scm 620 */
								BgL_localz00_bglt BgL_envz00_2065;

								BgL_envz00_2065 =
									BGl_makezd2localzd2svarz00zzast_localz00(CNST_TABLE_REF((
											(long) 31)),
									(BgL_typez00_bglt) (BGl_za2procedureza2z00zztype_cachez00));
								{	/* Ast/unit.scm 621 */
									BgL_globalz00_bglt BgL_gz00_2066;

									{	/* Ast/unit.scm 622 */
										obj_t BgL_arg4412z00_2067;

										obj_t BgL_arg4413z00_2068;

										obj_t BgL_arg4414z00_2069;

										obj_t BgL_arg4415z00_2070;

										BgL_arg4412z00_2067 = CNST_TABLE_REF(((long) 32));
										{	/* Ast/unit.scm 622 */
											obj_t BgL_list4416z00_2071;

											{	/* Ast/unit.scm 622 */
												obj_t BgL_arg4417z00_2072;

												BgL_arg4417z00_2072 =
													MAKE_PAIR((obj_t) (BgL_optz00_2064), BNIL);
												BgL_list4416z00_2071 =
													MAKE_PAIR(
													(obj_t) (BgL_envz00_2065), BgL_arg4417z00_2072);
											}
											BgL_arg4413z00_2068 = BgL_list4416z00_2071;
										}
										BgL_arg4414z00_2069 = CNST_TABLE_REF(((long) 33));
										{	/* Ast/unit.scm 624 */
											obj_t BgL_auxz00_5507;

											{	/* Ast/unit.scm 625 */
												obj_t BgL_auxz00_5508;

												{	/* Ast/unit.scm 560 */
													obj_t BgL_arg4435z00_2099;

													obj_t BgL_arg4437z00_2100;

													BgL_arg4435z00_2099 = BGl_letzd2symzd2zzast_letz00();
													{	/* Ast/unit.scm 560 */
														obj_t BgL_arg4438z00_2101;

														obj_t BgL_arg4439z00_2102;

														{	/* Ast/unit.scm 560 */
															obj_t BgL_arg4443z00_2106;

															{	/* Ast/unit.scm 560 */
																obj_t BgL_arg4445z00_2108;

																{	/* Ast/unit.scm 560 */
																	obj_t BgL_arg4446z00_2109;

																	{	/* Ast/unit.scm 560 */
																		obj_t BgL_arg4449z00_2112;

																		obj_t BgL_arg4450z00_2113;

																		BgL_arg4449z00_2112 =
																			CNST_TABLE_REF(((long) 38));
																		{	/* Ast/unit.scm 560 */
																			obj_t BgL_list4451z00_2114;

																			BgL_list4451z00_2114 =
																				MAKE_PAIR(BNIL, BNIL);
																			BgL_arg4450z00_2113 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_ioptz00_2055,
																				BgL_list4451z00_2114);
																		}
																		BgL_arg4446z00_2109 =
																			MAKE_PAIR(BgL_arg4449z00_2112,
																			BgL_arg4450z00_2113);
																	}
																	{	/* Ast/unit.scm 560 */
																		obj_t BgL_list4448z00_2111;

																		BgL_list4448z00_2111 =
																			MAKE_PAIR(BNIL, BNIL);
																		BgL_arg4445z00_2108 =
																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg4446z00_2109,
																			BgL_list4448z00_2111);
																}}
																BgL_arg4443z00_2106 =
																	MAKE_PAIR(BgL_lz00_2057, BgL_arg4445z00_2108);
															}
															BgL_arg4438z00_2101 =
																MAKE_PAIR(BgL_arg4443z00_2106, BNIL);
														}
														{	/* Ast/unit.scm 561 */
															obj_t BgL_arg4452z00_2115;

															obj_t BgL_arg4453z00_2116;

															BgL_arg4452z00_2115 = CNST_TABLE_REF(((long) 39));
															{	/* Ast/unit.scm 561 */
																obj_t BgL_arg4454z00_2117;

																obj_t BgL_arg4455z00_2118;

																{	/* Ast/unit.scm 561 */
																	obj_t BgL_arg4459z00_2122;

																	{	/* Ast/unit.scm 561 */
																		obj_t BgL_arg4461z00_2124;

																		{	/* Ast/unit.scm 561 */
																			obj_t BgL_arg4462z00_2125;

																			obj_t BgL_arg4463z00_2126;

																			{	/* Ast/unit.scm 561 */
																				obj_t BgL_arg4467z00_2130;

																				obj_t BgL_arg4468z00_2131;

																				BgL_arg4467z00_2130 =
																					CNST_TABLE_REF(((long) 40));
																				{	/* Ast/unit.scm 561 */
																					obj_t BgL_list4469z00_2132;

																					BgL_list4469z00_2132 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_arg4468z00_2131 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 41)),
																						BgL_list4469z00_2132);
																				}
																				BgL_arg4462z00_2125 =
																					MAKE_PAIR(BgL_arg4467z00_2130,
																					BgL_arg4468z00_2131);
																			}
																			{	/* Ast/unit.scm 562 */
																				obj_t BgL_arg4470z00_2133;

																				obj_t BgL_arg4471z00_2134;

																				BgL_arg4470z00_2133 =
																					CNST_TABLE_REF(((long) 0));
																				{	/* Ast/unit.scm 562 */
																					obj_t BgL_arg4472z00_2135;

																					obj_t BgL_arg4474z00_2137;

																					{	/* Ast/unit.scm 562 */
																						obj_t BgL_arg4479z00_2142;

																						obj_t BgL_arg4480z00_2143;

																						BgL_arg4479z00_2142 =
																							CNST_TABLE_REF(((long) 42));
																						{	/* Ast/unit.scm 562 */
																							obj_t BgL_list4481z00_2144;

																							{	/* Ast/unit.scm 562 */
																								obj_t BgL_arg4482z00_2145;

																								BgL_arg4482z00_2145 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_list4481z00_2144 =
																									MAKE_PAIR(BgL_lz00_2057,
																									BgL_arg4482z00_2145);
																							}
																							BgL_arg4480z00_2143 =
																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																								(CNST_TABLE_REF(((long) 41)),
																								BgL_list4481z00_2144);
																						}
																						BgL_arg4472z00_2135 =
																							MAKE_PAIR(BgL_arg4479z00_2142,
																							BgL_arg4480z00_2143);
																					}
																					if (CBOOL
																						(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
																						{	/* Ast/unit.scm 565 */
																							obj_t BgL_arg4483z00_2146;

																							obj_t BgL_arg4484z00_2147;

																							BgL_arg4483z00_2146 =
																								BGl_letzd2symzd2zzast_letz00();
																							{	/* Ast/unit.scm 565 */
																								obj_t BgL_arg4485z00_2148;

																								obj_t BgL_arg4486z00_2149;

																								{	/* Ast/unit.scm 565 */
																									obj_t BgL_arg4490z00_2153;

																									{	/* Ast/unit.scm 565 */
																										obj_t BgL_arg4492z00_2155;

																										obj_t BgL_arg4493z00_2156;

																										BgL_arg4492z00_2155 =
																											CNST_TABLE_REF(((long)
																												43));
																										{	/* Ast/unit.scm 565 */
																											obj_t BgL_arg4494z00_2157;

																											{	/* Ast/unit.scm 565 */
																												obj_t
																													BgL_arg4497z00_2160;
																												obj_t
																													BgL_arg4498z00_2161;
																												BgL_arg4497z00_2160 =
																													CNST_TABLE_REF(((long)
																														21));
																												{	/* Ast/unit.scm 565 */
																													obj_t
																														BgL_list4499z00_2162;
																													{	/* Ast/unit.scm 565 */
																														obj_t
																															BgL_arg4500z00_2163;
																														obj_t
																															BgL_arg4501z00_2164;
																														BgL_arg4500z00_2163
																															=
																															CNST_TABLE_REF((
																																(long) 41));
																														BgL_arg4501z00_2164
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list4499z00_2162
																															=
																															MAKE_PAIR
																															(BgL_arg4500z00_2163,
																															BgL_arg4501z00_2164);
																													}
																													BgL_arg4498z00_2161 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_ioptz00_2055,
																														BgL_list4499z00_2162);
																												}
																												BgL_arg4494z00_2157 =
																													MAKE_PAIR
																													(BgL_arg4497z00_2160,
																													BgL_arg4498z00_2161);
																											}
																											{	/* Ast/unit.scm 565 */
																												obj_t
																													BgL_list4496z00_2159;
																												BgL_list4496z00_2159 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4493z00_2156 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_arg4494z00_2157,
																													BgL_list4496z00_2159);
																										}}
																										BgL_arg4490z00_2153 =
																											MAKE_PAIR
																											(BgL_arg4492z00_2155,
																											BgL_arg4493z00_2156);
																									}
																									BgL_arg4485z00_2148 =
																										MAKE_PAIR
																										(BgL_arg4490z00_2153, BNIL);
																								}
																								{	/* Ast/unit.scm 566 */
																									obj_t BgL_arg4502z00_2165;

																									obj_t BgL_arg4503z00_2166;

																									BgL_arg4502z00_2165 =
																										CNST_TABLE_REF(((long) 0));
																									{	/* Ast/unit.scm 566 */
																										obj_t BgL_arg4504z00_2167;

																										obj_t BgL_arg4505z00_2168;

																										obj_t BgL_arg4506z00_2169;

																										{	/* Ast/unit.scm 566 */
																											obj_t BgL_arg4511z00_2174;

																											obj_t BgL_arg4512z00_2175;

																											BgL_arg4511z00_2174 =
																												CNST_TABLE_REF(((long)
																													44));
																											{	/* Ast/unit.scm 566 */
																												obj_t
																													BgL_list4513z00_2176;
																												{	/* Ast/unit.scm 566 */
																													obj_t
																														BgL_arg4514z00_2177;
																													obj_t
																														BgL_arg4515z00_2178;
																													BgL_arg4514z00_2177 =
																														CNST_TABLE_REF((
																															(long) 40));
																													BgL_arg4515z00_2178 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list4513z00_2176 =
																														MAKE_PAIR
																														(BgL_arg4514z00_2177,
																														BgL_arg4515z00_2178);
																												}
																												BgL_arg4512z00_2175 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 43)),
																													BgL_list4513z00_2176);
																											}
																											BgL_arg4504z00_2167 =
																												MAKE_PAIR
																												(BgL_arg4511z00_2174,
																												BgL_arg4512z00_2175);
																										}
																										{	/* Ast/unit.scm 567 */
																											obj_t BgL_arg4516z00_2179;

																											obj_t BgL_arg4517z00_2180;

																											BgL_arg4516z00_2179 =
																												CNST_TABLE_REF(((long)
																													45));
																											{	/* Ast/unit.scm 567 */
																												obj_t
																													BgL_list4518z00_2181;
																												{	/* Ast/unit.scm 567 */
																													obj_t
																														BgL_arg4520z00_2183;
																													BgL_arg4520z00_2183 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list4518z00_2181 =
																														MAKE_PAIR(BINT((
																																(long) 1)),
																														BgL_arg4520z00_2183);
																												}
																												BgL_arg4517z00_2180 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(CNST_TABLE_REF((
																															(long) 41)),
																													BgL_list4518z00_2181);
																											}
																											BgL_arg4505z00_2168 =
																												MAKE_PAIR
																												(BgL_arg4516z00_2179,
																												BgL_arg4517z00_2180);
																										}
																										{	/* Ast/unit.scm 568 */
																											obj_t BgL_arg4521z00_2184;

																											{	/* Ast/unit.scm 568 */
																												obj_t
																													BgL_arg4522z00_2185;
																												obj_t
																													BgL_arg4523z00_2186;
																												BgL_arg4522z00_2185 =
																													CNST_TABLE_REF(((long)
																														40));
																												{	/* Ast/unit.scm 568 */
																													obj_t
																														BgL_arg4527z00_2190;
																													obj_t
																														BgL_arg4528z00_2191;
																													BgL_arg4527z00_2190 =
																														CNST_TABLE_REF((
																															(long) 45));
																													{	/* Ast/unit.scm 568 */
																														obj_t
																															BgL_list4529z00_2192;
																														{	/* Ast/unit.scm 568 */
																															obj_t
																																BgL_arg4531z00_2194;
																															BgL_arg4531z00_2194
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list4529z00_2192
																																=
																																MAKE_PAIR(BINT((
																																		(long) 2)),
																																BgL_arg4531z00_2194);
																														}
																														BgL_arg4528z00_2191
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 41)),
																															BgL_list4529z00_2192);
																													}
																													BgL_arg4523z00_2186 =
																														MAKE_PAIR
																														(BgL_arg4527z00_2190,
																														BgL_arg4528z00_2191);
																												}
																												{	/* Ast/unit.scm 568 */
																													obj_t
																														BgL_list4525z00_2188;
																													{	/* Ast/unit.scm 568 */
																														obj_t
																															BgL_arg4526z00_2189;
																														BgL_arg4526z00_2189
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_list4525z00_2188
																															=
																															MAKE_PAIR
																															(BgL_arg4523z00_2186,
																															BgL_arg4526z00_2189);
																													}
																													BgL_arg4521z00_2184 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg4522z00_2185,
																														BgL_list4525z00_2188);
																											}}
																											BgL_arg4506z00_2169 =
																												MAKE_PAIR
																												(BgL_searchz00_2058,
																												BgL_arg4521z00_2184);
																										}
																										{	/* Ast/unit.scm 566 */
																											obj_t
																												BgL_list4508z00_2171;
																											{	/* Ast/unit.scm 566 */
																												obj_t
																													BgL_arg4509z00_2172;
																												{	/* Ast/unit.scm 566 */
																													obj_t
																														BgL_arg4510z00_2173;
																													BgL_arg4510z00_2173 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg4509z00_2172 =
																														MAKE_PAIR
																														(BgL_arg4506z00_2169,
																														BgL_arg4510z00_2173);
																												}
																												BgL_list4508z00_2171 =
																													MAKE_PAIR
																													(BgL_arg4505z00_2168,
																													BgL_arg4509z00_2172);
																											}
																											BgL_arg4503z00_2166 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4504z00_2167,
																												BgL_list4508z00_2171);
																									}}
																									BgL_arg4486z00_2149 =
																										MAKE_PAIR
																										(BgL_arg4502z00_2165,
																										BgL_arg4503z00_2166);
																								}
																								{	/* Ast/unit.scm 565 */
																									obj_t BgL_list4488z00_2151;

																									{	/* Ast/unit.scm 565 */
																										obj_t BgL_arg4489z00_2152;

																										BgL_arg4489z00_2152 =
																											MAKE_PAIR(BNIL, BNIL);
																										BgL_list4488z00_2151 =
																											MAKE_PAIR
																											(BgL_arg4486z00_2149,
																											BgL_arg4489z00_2152);
																									}
																									BgL_arg4484z00_2147 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4485z00_2148,
																										BgL_list4488z00_2151);
																							}}
																							BgL_arg4474z00_2137 =
																								MAKE_PAIR(BgL_arg4483z00_2146,
																								BgL_arg4484z00_2147);
																						}
																					else
																						{	/* Ast/unit.scm 569 */
																							obj_t BgL_arg4532z00_2195;

																							obj_t BgL_arg4533z00_2196;

																							BgL_arg4532z00_2195 =
																								CNST_TABLE_REF(((long) 0));
																							{	/* Ast/unit.scm 569 */
																								obj_t BgL_arg4534z00_2197;

																								obj_t BgL_arg4535z00_2198;

																								obj_t BgL_arg4536z00_2199;

																								{	/* Ast/unit.scm 569 */
																									obj_t BgL_arg4541z00_2204;

																									obj_t BgL_arg4542z00_2205;

																									BgL_arg4541z00_2204 =
																										CNST_TABLE_REF(((long) 42));
																									{	/* Ast/unit.scm 569 */
																										obj_t BgL_arg4543z00_2206;

																										obj_t BgL_arg4544z00_2207;

																										BgL_arg4543z00_2206 =
																											CNST_TABLE_REF(((long)
																												41));
																										{	/* Ast/unit.scm 569 */
																											obj_t BgL_arg4548z00_2211;

																											obj_t BgL_arg4549z00_2212;

																											BgL_arg4548z00_2211 =
																												CNST_TABLE_REF(((long)
																													46));
																											{	/* Ast/unit.scm 569 */
																												obj_t
																													BgL_list4550z00_2213;
																												{	/* Ast/unit.scm 569 */
																													obj_t
																														BgL_arg4552z00_2215;
																													BgL_arg4552z00_2215 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_list4550z00_2213 =
																														MAKE_PAIR(BINT((
																																(long) 1)),
																														BgL_arg4552z00_2215);
																												}
																												BgL_arg4549z00_2212 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_lz00_2057,
																													BgL_list4550z00_2213);
																											}
																											BgL_arg4544z00_2207 =
																												MAKE_PAIR
																												(BgL_arg4548z00_2211,
																												BgL_arg4549z00_2212);
																										}
																										{	/* Ast/unit.scm 569 */
																											obj_t
																												BgL_list4546z00_2209;
																											{	/* Ast/unit.scm 569 */
																												obj_t
																													BgL_arg4547z00_2210;
																												BgL_arg4547z00_2210 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4546z00_2209 =
																													MAKE_PAIR
																													(BgL_arg4544z00_2207,
																													BgL_arg4547z00_2210);
																											}
																											BgL_arg4542z00_2205 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4543z00_2206,
																												BgL_list4546z00_2209);
																									}}
																									BgL_arg4534z00_2197 =
																										MAKE_PAIR
																										(BgL_arg4541z00_2204,
																										BgL_arg4542z00_2205);
																								}
																								{	/* Ast/unit.scm 570 */
																									obj_t BgL_arg4553z00_2216;

																									obj_t BgL_arg4554z00_2217;

																									{	/* Ast/unit.scm 570 */
																										obj_t BgL_arg4555z00_2218;

																										obj_t BgL_arg4556z00_2219;

																										BgL_arg4555z00_2218 =
																											CNST_TABLE_REF(((long)
																												1));
																										{	/* Ast/unit.scm 570 */
																											obj_t
																												BgL_list4557z00_2220;
																											{	/* Ast/unit.scm 570 */
																												obj_t
																													BgL_arg4558z00_2221;
																												obj_t
																													BgL_arg4559z00_2222;
																												BgL_arg4558z00_2221 =
																													CNST_TABLE_REF(((long)
																														27));
																												BgL_arg4559z00_2222 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4557z00_2220 =
																													MAKE_PAIR
																													(BgL_arg4558z00_2221,
																													BgL_arg4559z00_2222);
																											}
																											BgL_arg4556z00_2219 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(CNST_TABLE_REF(((long)
																														28)),
																												BgL_list4557z00_2220);
																										}
																										BgL_arg4553z00_2216 =
																											MAKE_PAIR
																											(BgL_arg4555z00_2218,
																											BgL_arg4556z00_2219);
																									}
																									{	/* Ast/unit.scm 571 */
																										obj_t BgL_arg4560z00_2223;

																										obj_t BgL_arg4561z00_2224;

																										obj_t BgL_arg4562z00_2225;

																										{	/* Ast/unit.scm 571 */
																											obj_t BgL_arg4567z00_2230;

																											obj_t BgL_arg4568z00_2231;

																											BgL_arg4567z00_2230 =
																												CNST_TABLE_REF(((long)
																													29));
																											{	/* Ast/unit.scm 571 */
																												obj_t
																													BgL_list4569z00_2232;
																												BgL_list4569z00_2232 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4568z00_2231 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_idz00_77,
																													BgL_list4569z00_2232);
																											}
																											BgL_arg4560z00_2223 =
																												MAKE_PAIR
																												(BgL_arg4567z00_2230,
																												BgL_arg4568z00_2231);
																										}
																										{	/* Ast/unit.scm 572 */
																											obj_t BgL_arg4571z00_2234;

																											obj_t BgL_arg4573z00_2236;

																											{	/* Ast/unit.scm 574 */

																												BgL_arg4571z00_2234 =
																													BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																													(BgL_arityz00_2054,
																													((long) 10));
																											}
																											{	/* Ast/unit.scm 575 */

																												BgL_arg4573z00_2236 =
																													BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																													((long)
																													CINT(BINT(
																															(BgL_arityz00_2054
																																+
																																BgL_loptz00_2056))),
																													((long) 10));
																											}
																											{	/* Ast/unit.scm 572 */
																												obj_t
																													BgL_list4576z00_2238;
																												{	/* Ast/unit.scm 572 */
																													obj_t
																														BgL_arg4577z00_2239;
																													{	/* Ast/unit.scm 572 */
																														obj_t
																															BgL_arg4578z00_2240;
																														{	/* Ast/unit.scm 572 */
																															obj_t
																																BgL_arg4579z00_2241;
																															{	/* Ast/unit.scm 572 */
																																obj_t
																																	BgL_arg4580z00_2242;
																																BgL_arg4580z00_2242
																																	=
																																	MAKE_PAIR
																																	(BGl_string5073z00zzast_unitz00,
																																	BNIL);
																																BgL_arg4579z00_2241
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4573z00_2236,
																																	BgL_arg4580z00_2242);
																															}
																															BgL_arg4578z00_2240
																																=
																																MAKE_PAIR
																																(BGl_string5074z00zzast_unitz00,
																																BgL_arg4579z00_2241);
																														}
																														BgL_arg4577z00_2239
																															=
																															MAKE_PAIR
																															(BgL_arg4571z00_2234,
																															BgL_arg4578z00_2240);
																													}
																													BgL_list4576z00_2238 =
																														MAKE_PAIR
																														(BGl_string5075z00zzast_unitz00,
																														BgL_arg4577z00_2239);
																												}
																												BgL_arg4561z00_2224 =
																													BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																													(BgL_list4576z00_2238);
																										}}
																										{	/* Ast/unit.scm 577 */
																											obj_t BgL_arg4582z00_2248;

																											obj_t BgL_arg4583z00_2249;

																											BgL_arg4582z00_2248 =
																												CNST_TABLE_REF(((long)
																													24));
																											{	/* Ast/unit.scm 577 */
																												obj_t
																													BgL_list4584z00_2250;
																												BgL_list4584z00_2250 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_arg4583z00_2249 =
																													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																													(BgL_ioptz00_2055,
																													BgL_list4584z00_2250);
																											}
																											BgL_arg4562z00_2225 =
																												MAKE_PAIR
																												(BgL_arg4582z00_2248,
																												BgL_arg4583z00_2249);
																										}
																										{	/* Ast/unit.scm 570 */
																											obj_t
																												BgL_list4564z00_2227;
																											{	/* Ast/unit.scm 570 */
																												obj_t
																													BgL_arg4565z00_2228;
																												{	/* Ast/unit.scm 570 */
																													obj_t
																														BgL_arg4566z00_2229;
																													BgL_arg4566z00_2229 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg4565z00_2228 =
																														MAKE_PAIR
																														(BgL_arg4562z00_2225,
																														BgL_arg4566z00_2229);
																												}
																												BgL_list4564z00_2227 =
																													MAKE_PAIR
																													(BgL_arg4561z00_2224,
																													BgL_arg4565z00_2228);
																											}
																											BgL_arg4554z00_2217 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4560z00_2223,
																												BgL_list4564z00_2227);
																									}}
																									BgL_arg4535z00_2198 =
																										MAKE_PAIR
																										(BgL_arg4553z00_2216,
																										BgL_arg4554z00_2217);
																								}
																								{	/* Ast/unit.scm 578 */
																									obj_t BgL_arg4585z00_2251;

																									obj_t BgL_arg4586z00_2252;

																									BgL_arg4585z00_2251 =
																										CNST_TABLE_REF(((long) 47));
																									{	/* Ast/unit.scm 578 */
																										obj_t BgL_arg4587z00_2253;

																										obj_t BgL_arg4588z00_2254;

																										{	/* Ast/unit.scm 578 */
																											obj_t BgL_arg4592z00_2258;

																											{	/* Ast/unit.scm 578 */
																												obj_t
																													BgL_arg4594z00_2260;
																												obj_t
																													BgL_arg4595z00_2261;
																												BgL_arg4594z00_2260 =
																													CNST_TABLE_REF(((long)
																														43));
																												{	/* Ast/unit.scm 578 */
																													obj_t
																														BgL_arg4596z00_2262;
																													{	/* Ast/unit.scm 578 */
																														obj_t
																															BgL_arg4600z00_2265;
																														obj_t
																															BgL_arg4601z00_2266;
																														BgL_arg4600z00_2265
																															=
																															CNST_TABLE_REF((
																																(long) 21));
																														{	/* Ast/unit.scm 578 */
																															obj_t
																																BgL_list4602z00_2267;
																															{	/* Ast/unit.scm 578 */
																																obj_t
																																	BgL_arg4603z00_2268;
																																obj_t
																																	BgL_arg4604z00_2269;
																																BgL_arg4603z00_2268
																																	=
																																	CNST_TABLE_REF
																																	(((long) 41));
																																BgL_arg4604z00_2269
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list4602z00_2267
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4603z00_2268,
																																	BgL_arg4604z00_2269);
																															}
																															BgL_arg4601z00_2266
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_ioptz00_2055,
																																BgL_list4602z00_2267);
																														}
																														BgL_arg4596z00_2262
																															=
																															MAKE_PAIR
																															(BgL_arg4600z00_2265,
																															BgL_arg4601z00_2266);
																													}
																													{	/* Ast/unit.scm 578 */
																														obj_t
																															BgL_list4598z00_2264;
																														BgL_list4598z00_2264
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg4595z00_2261
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_arg4596z00_2262,
																															BgL_list4598z00_2264);
																												}}
																												BgL_arg4592z00_2258 =
																													MAKE_PAIR
																													(BgL_arg4594z00_2260,
																													BgL_arg4595z00_2261);
																											}
																											BgL_arg4587z00_2253 =
																												MAKE_PAIR
																												(BgL_arg4592z00_2258,
																												BNIL);
																										}
																										{	/* Ast/unit.scm 579 */
																											obj_t BgL_arg4605z00_2270;

																											obj_t BgL_arg4606z00_2271;

																											BgL_arg4605z00_2270 =
																												CNST_TABLE_REF(((long)
																													0));
																											{	/* Ast/unit.scm 579 */
																												obj_t
																													BgL_arg4607z00_2272;
																												obj_t
																													BgL_arg4608z00_2273;
																												obj_t
																													BgL_arg4609z00_2274;
																												{	/* Ast/unit.scm 579 */
																													obj_t
																														BgL_arg4614z00_2279;
																													obj_t
																														BgL_arg4615z00_2280;
																													BgL_arg4614z00_2279 =
																														CNST_TABLE_REF((
																															(long) 44));
																													{	/* Ast/unit.scm 579 */
																														obj_t
																															BgL_list4616z00_2281;
																														{	/* Ast/unit.scm 579 */
																															obj_t
																																BgL_arg4617z00_2282;
																															obj_t
																																BgL_arg4618z00_2283;
																															BgL_arg4617z00_2282
																																=
																																CNST_TABLE_REF((
																																	(long) 40));
																															BgL_arg4618z00_2283
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list4616z00_2281
																																=
																																MAKE_PAIR
																																(BgL_arg4617z00_2282,
																																BgL_arg4618z00_2283);
																														}
																														BgL_arg4615z00_2280
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 43)),
																															BgL_list4616z00_2281);
																													}
																													BgL_arg4607z00_2272 =
																														MAKE_PAIR
																														(BgL_arg4614z00_2279,
																														BgL_arg4615z00_2280);
																												}
																												{	/* Ast/unit.scm 580 */
																													obj_t
																														BgL_arg4619z00_2284;
																													obj_t
																														BgL_arg4620z00_2285;
																													BgL_arg4619z00_2284 =
																														CNST_TABLE_REF((
																															(long) 45));
																													{	/* Ast/unit.scm 580 */
																														obj_t
																															BgL_list4621z00_2286;
																														{	/* Ast/unit.scm 580 */
																															obj_t
																																BgL_arg4623z00_2288;
																															BgL_arg4623z00_2288
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list4621z00_2286
																																=
																																MAKE_PAIR(BINT((
																																		(long) 1)),
																																BgL_arg4623z00_2288);
																														}
																														BgL_arg4620z00_2285
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 41)),
																															BgL_list4621z00_2286);
																													}
																													BgL_arg4608z00_2273 =
																														MAKE_PAIR
																														(BgL_arg4619z00_2284,
																														BgL_arg4620z00_2285);
																												}
																												{	/* Ast/unit.scm 581 */
																													obj_t
																														BgL_arg4624z00_2289;
																													{	/* Ast/unit.scm 581 */
																														obj_t
																															BgL_arg4625z00_2290;
																														obj_t
																															BgL_arg4626z00_2291;
																														BgL_arg4625z00_2290
																															=
																															CNST_TABLE_REF((
																																(long) 40));
																														{	/* Ast/unit.scm 581 */
																															obj_t
																																BgL_arg4630z00_2295;
																															obj_t
																																BgL_arg4631z00_2296;
																															BgL_arg4630z00_2295
																																=
																																CNST_TABLE_REF((
																																	(long) 45));
																															{	/* Ast/unit.scm 581 */
																																obj_t
																																	BgL_list4632z00_2297;
																																{	/* Ast/unit.scm 581 */
																																	obj_t
																																		BgL_arg4634z00_2299;
																																	BgL_arg4634z00_2299
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_list4632z00_2297
																																		=
																																		MAKE_PAIR
																																		(BINT((
																																				(long)
																																				2)),
																																		BgL_arg4634z00_2299);
																																}
																																BgL_arg4631z00_2296
																																	=
																																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																	(CNST_TABLE_REF
																																	(((long) 41)),
																																	BgL_list4632z00_2297);
																															}
																															BgL_arg4626z00_2291
																																=
																																MAKE_PAIR
																																(BgL_arg4630z00_2295,
																																BgL_arg4631z00_2296);
																														}
																														{	/* Ast/unit.scm 581 */
																															obj_t
																																BgL_list4628z00_2293;
																															{	/* Ast/unit.scm 581 */
																																obj_t
																																	BgL_arg4629z00_2294;
																																BgL_arg4629z00_2294
																																	=
																																	MAKE_PAIR
																																	(BNIL, BNIL);
																																BgL_list4628z00_2293
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4626z00_2291,
																																	BgL_arg4629z00_2294);
																															}
																															BgL_arg4624z00_2289
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg4625z00_2290,
																																BgL_list4628z00_2293);
																													}}
																													BgL_arg4609z00_2274 =
																														MAKE_PAIR
																														(BgL_searchz00_2058,
																														BgL_arg4624z00_2289);
																												}
																												{	/* Ast/unit.scm 579 */
																													obj_t
																														BgL_list4611z00_2276;
																													{	/* Ast/unit.scm 579 */
																														obj_t
																															BgL_arg4612z00_2277;
																														{	/* Ast/unit.scm 579 */
																															obj_t
																																BgL_arg4613z00_2278;
																															BgL_arg4613z00_2278
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg4612z00_2277
																																=
																																MAKE_PAIR
																																(BgL_arg4609z00_2274,
																																BgL_arg4613z00_2278);
																														}
																														BgL_list4611z00_2276
																															=
																															MAKE_PAIR
																															(BgL_arg4608z00_2273,
																															BgL_arg4612z00_2277);
																													}
																													BgL_arg4606z00_2271 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg4607z00_2272,
																														BgL_list4611z00_2276);
																											}}
																											BgL_arg4588z00_2254 =
																												MAKE_PAIR
																												(BgL_arg4605z00_2270,
																												BgL_arg4606z00_2271);
																										}
																										{	/* Ast/unit.scm 578 */
																											obj_t
																												BgL_list4590z00_2256;
																											{	/* Ast/unit.scm 578 */
																												obj_t
																													BgL_arg4591z00_2257;
																												BgL_arg4591z00_2257 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4590z00_2256 =
																													MAKE_PAIR
																													(BgL_arg4588z00_2254,
																													BgL_arg4591z00_2257);
																											}
																											BgL_arg4586z00_2252 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4587z00_2253,
																												BgL_list4590z00_2256);
																									}}
																									BgL_arg4536z00_2199 =
																										MAKE_PAIR
																										(BgL_arg4585z00_2251,
																										BgL_arg4586z00_2252);
																								}
																								{	/* Ast/unit.scm 569 */
																									obj_t BgL_list4538z00_2201;

																									{	/* Ast/unit.scm 569 */
																										obj_t BgL_arg4539z00_2202;

																										{	/* Ast/unit.scm 569 */
																											obj_t BgL_arg4540z00_2203;

																											BgL_arg4540z00_2203 =
																												MAKE_PAIR(BNIL, BNIL);
																											BgL_arg4539z00_2202 =
																												MAKE_PAIR
																												(BgL_arg4536z00_2199,
																												BgL_arg4540z00_2203);
																										}
																										BgL_list4538z00_2201 =
																											MAKE_PAIR
																											(BgL_arg4535z00_2198,
																											BgL_arg4539z00_2202);
																									}
																									BgL_arg4533z00_2196 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4534z00_2197,
																										BgL_list4538z00_2201);
																							}}
																							BgL_arg4474z00_2137 =
																								MAKE_PAIR(BgL_arg4532z00_2195,
																								BgL_arg4533z00_2196);
																						}
																					{	/* Ast/unit.scm 562 */
																						obj_t BgL_list4476z00_2139;

																						{	/* Ast/unit.scm 562 */
																							obj_t BgL_arg4477z00_2140;

																							{	/* Ast/unit.scm 562 */
																								obj_t BgL_arg4478z00_2141;

																								BgL_arg4478z00_2141 =
																									MAKE_PAIR(BNIL, BNIL);
																								BgL_arg4477z00_2140 =
																									MAKE_PAIR(BgL_arg4474z00_2137,
																									BgL_arg4478z00_2141);
																							}
																							BgL_list4476z00_2139 =
																								MAKE_PAIR(BINT(((long) -1)),
																								BgL_arg4477z00_2140);
																						}
																						BgL_arg4471z00_2134 =
																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg4472z00_2135,
																							BgL_list4476z00_2139);
																				}}
																				BgL_arg4463z00_2126 =
																					MAKE_PAIR(BgL_arg4470z00_2133,
																					BgL_arg4471z00_2134);
																			}
																			{	/* Ast/unit.scm 561 */
																				obj_t BgL_list4465z00_2128;

																				{	/* Ast/unit.scm 561 */
																					obj_t BgL_arg4466z00_2129;

																					BgL_arg4466z00_2129 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4465z00_2128 =
																						MAKE_PAIR(BgL_arg4463z00_2126,
																						BgL_arg4466z00_2129);
																				}
																				BgL_arg4461z00_2124 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg4462z00_2125,
																					BgL_list4465z00_2128);
																		}}
																		BgL_arg4459z00_2122 =
																			MAKE_PAIR(BgL_searchz00_2058,
																			BgL_arg4461z00_2124);
																	}
																	BgL_arg4454z00_2117 =
																		MAKE_PAIR(BgL_arg4459z00_2122, BNIL);
																}
																{	/* Ast/unit.scm 582 */
																	obj_t BgL_arg4635z00_2300;

																	obj_t BgL_arg4636z00_2301;

																	BgL_arg4635z00_2300 =
																		CNST_TABLE_REF(((long) 47));
																	{	/* Ast/unit.scm 582 */
																		obj_t BgL_arg4637z00_2302;

																		obj_t BgL_arg4638z00_2303;

																		{	/* Ast/unit.scm 582 */
																			obj_t BgL_ll3615z00_2307;

																			obj_t BgL_ll3616z00_2308;

																			{	/* Ast/unit.scm 584 */
																				obj_t BgL_auxz00_5690;

																				{	/* Ast/unit.scm 584 */
																					BgL_sfunz00_bglt BgL_obj1883z00_3972;

																					{	/* Ast/unit.scm 584 */
																						BgL_variablez00_bglt
																							BgL_obj1611z00_3971;
																						BgL_obj1611z00_3971 =
																							(BgL_variablez00_bglt)
																							(BgL_gloz00_75);
																						BgL_obj1883z00_3972 =
																							(BgL_sfunz00_bglt) (((
																									(BgL_variablez00_bglt)
																									CREF(BgL_obj1611z00_3971))->
																								BgL_valuez00));
																					}
																					BgL_auxz00_5690 =
																						(((BgL_sfunz00_bglt)
																							CREF(BgL_obj1883z00_3972))->
																						BgL_argszd2namezd2);
																				}
																				BgL_ll3615z00_2307 =
																					BGl_takez00zz__r4_pairs_and_lists_6_3z00
																					(BgL_auxz00_5690, BgL_arityz00_2054);
																			}
																			BgL_ll3616z00_2308 =
																				BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																				((int) (BgL_arityz00_2054), BNIL);
																			if (NULLP(BgL_ll3615z00_2307))
																				{	/* Ast/unit.scm 582 */
																					BgL_arg4637z00_2302 = BNIL;
																				}
																			else
																				{	/* Ast/unit.scm 582 */
																					obj_t BgL_head3617z00_2310;

																					BgL_head3617z00_2310 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_ll3615z00_2312;

																						obj_t BgL_ll3616z00_2313;

																						obj_t BgL_tail3618z00_2314;

																						BgL_ll3615z00_2312 =
																							BgL_ll3615z00_2307;
																						BgL_ll3616z00_2313 =
																							BgL_ll3616z00_2308;
																						BgL_tail3618z00_2314 =
																							BgL_head3617z00_2310;
																					BgL_zc3anonymousza34643ze3z83_2315:
																						if (NULLP(BgL_ll3615z00_2312))
																							{	/* Ast/unit.scm 582 */
																								BgL_arg4637z00_2302 =
																									CDR(BgL_head3617z00_2310);
																							}
																						else
																							{	/* Ast/unit.scm 582 */
																								obj_t BgL_newtail3619z00_2317;

																								{	/* Ast/unit.scm 582 */
																									obj_t BgL_arg4648z00_2320;

																									{	/* Ast/unit.scm 582 */
																										obj_t BgL_vz00_2322;

																										obj_t BgL_iz00_2323;

																										BgL_vz00_2322 =
																											CAR(BgL_ll3615z00_2312);
																										BgL_iz00_2323 =
																											CAR(BgL_ll3616z00_2313);
																										{	/* Ast/unit.scm 583 */
																											obj_t BgL_arg4650z00_2324;

																											{	/* Ast/unit.scm 583 */
																												obj_t
																													BgL_arg4651z00_2325;
																												{	/* Ast/unit.scm 583 */
																													obj_t
																														BgL_arg4654z00_2328;
																													obj_t
																														BgL_arg4655z00_2329;
																													BgL_arg4654z00_2328 =
																														CNST_TABLE_REF((
																															(long) 21));
																													{	/* Ast/unit.scm 583 */
																														obj_t
																															BgL_list4656z00_2330;
																														{	/* Ast/unit.scm 583 */
																															obj_t
																																BgL_arg4657z00_2331;
																															BgL_arg4657z00_2331
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list4656z00_2330
																																=
																																MAKE_PAIR
																																(BgL_iz00_2323,
																																BgL_arg4657z00_2331);
																														}
																														BgL_arg4655z00_2329
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BgL_ioptz00_2055,
																															BgL_list4656z00_2330);
																													}
																													BgL_arg4651z00_2325 =
																														MAKE_PAIR
																														(BgL_arg4654z00_2328,
																														BgL_arg4655z00_2329);
																												}
																												{	/* Ast/unit.scm 583 */
																													obj_t
																														BgL_list4653z00_2327;
																													BgL_list4653z00_2327 =
																														MAKE_PAIR(BNIL,
																														BNIL);
																													BgL_arg4650z00_2324 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg4651z00_2325,
																														BgL_list4653z00_2327);
																											}}
																											BgL_arg4648z00_2320 =
																												MAKE_PAIR(BgL_vz00_2322,
																												BgL_arg4650z00_2324);
																									}}
																									BgL_newtail3619z00_2317 =
																										MAKE_PAIR
																										(BgL_arg4648z00_2320, BNIL);
																								}
																								SET_CDR(BgL_tail3618z00_2314,
																									BgL_newtail3619z00_2317);
																								{
																									obj_t BgL_tail3618z00_5720;

																									obj_t BgL_ll3616z00_5718;

																									obj_t BgL_ll3615z00_5716;

																									BgL_ll3615z00_5716 =
																										CDR(BgL_ll3615z00_2312);
																									BgL_ll3616z00_5718 =
																										CDR(BgL_ll3616z00_2313);
																									BgL_tail3618z00_5720 =
																										BgL_newtail3619z00_2317;
																									BgL_tail3618z00_2314 =
																										BgL_tail3618z00_5720;
																									BgL_ll3616z00_2313 =
																										BgL_ll3616z00_5718;
																									BgL_ll3615z00_2312 =
																										BgL_ll3615z00_5716;
																									goto
																										BgL_zc3anonymousza34643ze3z83_2315;
																								}
																							}
																					}
																				}
																		}
																		{	/* Ast/unit.scm 586 */
																			obj_t BgL_arg4661z00_2336;

																			obj_t BgL_arg4662z00_2337;

																			BgL_arg4661z00_2336 =
																				CNST_TABLE_REF(((long) 25));
																			{	/* Ast/unit.scm 586 */
																				obj_t BgL_arg4663z00_2338;

																				obj_t BgL_arg4664z00_2339;

																				obj_t BgL_arg4665z00_2340;

																				{	/* Ast/unit.scm 586 */
																					obj_t BgL_head3623z00_2345;

																					BgL_head3623z00_2345 =
																						MAKE_PAIR(BNIL, BNIL);
																					{
																						obj_t BgL_l3621z00_2347;

																						obj_t BgL_tail3624z00_2348;

																						BgL_l3621z00_2347 = BgL_keysz00_76;
																						BgL_tail3624z00_2348 =
																							BgL_head3623z00_2345;
																					BgL_zc3anonymousza34669ze3z83_2349:
																						if (NULLP(BgL_l3621z00_2347))
																							{	/* Ast/unit.scm 586 */
																								BgL_arg4663z00_2338 =
																									CDR(BgL_head3623z00_2345);
																							}
																						else
																							{	/* Ast/unit.scm 586 */
																								obj_t BgL_newtail3625z00_2351;

																								{	/* Ast/unit.scm 586 */
																									obj_t BgL_arg4672z00_2353;

																									{	/* Ast/unit.scm 586 */
																										obj_t BgL_pz00_2355;

																										BgL_pz00_2355 =
																											CAR(BgL_l3621z00_2347);
																										{	/* Ast/unit.scm 586 */
																											obj_t BgL_arg4674z00_2356;

																											obj_t BgL_arg4675z00_2357;

																											BgL_arg4674z00_2356 =
																												CAR(BgL_pz00_2355);
																											{	/* Ast/unit.scm 586 */
																												obj_t BgL_pairz00_3993;

																												BgL_pairz00_3993 =
																													BgL_pz00_2355;
																												BgL_arg4675z00_2357 =
																													CAR(CDR
																													(BgL_pairz00_3993));
																											}
																											{	/* Ast/unit.scm 586 */
																												obj_t
																													BgL_list4676z00_2358;
																												{	/* Ast/unit.scm 586 */
																													obj_t
																														BgL_arg4677z00_2359;
																													BgL_arg4677z00_2359 =
																														MAKE_PAIR
																														(BgL_arg4675z00_2357,
																														BNIL);
																													BgL_list4676z00_2358 =
																														MAKE_PAIR
																														(BgL_arg4674z00_2356,
																														BgL_arg4677z00_2359);
																												}
																												BgL_arg4672z00_2353 =
																													BgL_list4676z00_2358;
																											}
																										}
																									}
																									BgL_newtail3625z00_2351 =
																										MAKE_PAIR
																										(BgL_arg4672z00_2353, BNIL);
																								}
																								SET_CDR(BgL_tail3624z00_2348,
																									BgL_newtail3625z00_2351);
																								{
																									obj_t BgL_tail3624z00_5736;

																									obj_t BgL_l3621z00_5734;

																									BgL_l3621z00_5734 =
																										CDR(BgL_l3621z00_2347);
																									BgL_tail3624z00_5736 =
																										BgL_newtail3625z00_2351;
																									BgL_tail3624z00_2348 =
																										BgL_tail3624z00_5736;
																									BgL_l3621z00_2347 =
																										BgL_l3621z00_5734;
																									goto
																										BgL_zc3anonymousza34669ze3z83_2349;
																								}
																							}
																					}
																				}
																				if (CBOOL
																					(BGl_za2unsafezd2arityza2zd2zzengine_paramz00))
																					{	/* Ast/unit.scm 588 */
																						BgL_arg4664z00_2339 = BUNSPEC;
																					}
																				else
																					{	/* Ast/unit.scm 590 */
																						obj_t BgL_arg4678z00_2361;

																						obj_t BgL_arg4679z00_2362;

																						BgL_arg4678z00_2361 =
																							CNST_TABLE_REF(((long) 39));
																						{	/* Ast/unit.scm 590 */
																							obj_t BgL_arg4680z00_2363;

																							obj_t BgL_arg4681z00_2364;

																							{	/* Ast/unit.scm 590 */
																								obj_t BgL_arg4685z00_2368;

																								{	/* Ast/unit.scm 590 */
																									obj_t BgL_arg4687z00_2370;

																									{	/* Ast/unit.scm 590 */
																										obj_t BgL_arg4688z00_2371;

																										obj_t BgL_arg4689z00_2372;

																										BgL_arg4688z00_2371 =
																											MAKE_PAIR(CNST_TABLE_REF((
																													(long) 41)), BNIL);
																										{	/* Ast/unit.scm 591 */
																											obj_t BgL_arg4693z00_2376;

																											obj_t BgL_arg4694z00_2377;

																											BgL_arg4693z00_2376 =
																												CNST_TABLE_REF(((long)
																													0));
																											{	/* Ast/unit.scm 591 */
																												obj_t
																													BgL_arg4695z00_2378;
																												obj_t
																													BgL_arg4696z00_2379;
																												obj_t
																													BgL_arg4697z00_2380;
																												{	/* Ast/unit.scm 591 */
																													obj_t
																														BgL_arg4702z00_2385;
																													obj_t
																														BgL_arg4703z00_2386;
																													BgL_arg4702z00_2385 =
																														CNST_TABLE_REF((
																															(long) 42));
																													{	/* Ast/unit.scm 591 */
																														obj_t
																															BgL_list4704z00_2387;
																														{	/* Ast/unit.scm 591 */
																															obj_t
																																BgL_arg4705z00_2388;
																															BgL_arg4705z00_2388
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_list4704z00_2387
																																=
																																MAKE_PAIR
																																(BgL_lz00_2057,
																																BgL_arg4705z00_2388);
																														}
																														BgL_arg4703z00_2386
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(CNST_TABLE_REF((
																																	(long) 41)),
																															BgL_list4704z00_2387);
																													}
																													BgL_arg4695z00_2378 =
																														MAKE_PAIR
																														(BgL_arg4702z00_2385,
																														BgL_arg4703z00_2386);
																												}
																												{	/* Ast/unit.scm 592 */
																													obj_t
																														BgL_arg4706z00_2389;
																													obj_t
																														BgL_arg4707z00_2390;
																													BgL_arg4706z00_2389 =
																														CNST_TABLE_REF((
																															(long) 29));
																													{	/* Ast/unit.scm 592 */
																														obj_t
																															BgL_list4708z00_2391;
																														BgL_list4708z00_2391
																															=
																															MAKE_PAIR(BNIL,
																															BNIL);
																														BgL_arg4707z00_2390
																															=
																															BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																															(BNIL,
																															BgL_list4708z00_2391);
																													}
																													BgL_arg4696z00_2379 =
																														MAKE_PAIR
																														(BgL_arg4706z00_2389,
																														BgL_arg4707z00_2390);
																												}
																												{	/* Ast/unit.scm 593 */
																													obj_t
																														BgL_arg4710z00_2392;
																													obj_t
																														BgL_arg4711z00_2393;
																													BgL_arg4710z00_2392 =
																														CNST_TABLE_REF((
																															(long) 0));
																													{	/* Ast/unit.scm 593 */
																														obj_t
																															BgL_arg4712z00_2394;
																														obj_t
																															BgL_arg4713z00_2395;
																														obj_t
																															BgL_arg4714z00_2396;
																														{	/* Ast/unit.scm 593 */
																															obj_t
																																BgL_arg4719z00_2401;
																															obj_t
																																BgL_arg4720z00_2402;
																															BgL_arg4719z00_2401
																																=
																																CNST_TABLE_REF((
																																	(long) 48));
																															{	/* Ast/unit.scm 593 */
																																obj_t
																																	BgL_arg4721z00_2403;
																																obj_t
																																	BgL_arg4722z00_2404;
																																{	/* Ast/unit.scm 593 */
																																	obj_t
																																		BgL_arg4726z00_2408;
																																	obj_t
																																		BgL_arg4727z00_2409;
																																	BgL_arg4726z00_2408
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			49));
																																	{	/* Ast/unit.scm 593 */
																																		obj_t
																																			BgL_list4728z00_2410;
																																		{	/* Ast/unit.scm 593 */
																																			obj_t
																																				BgL_arg4729z00_2411;
																																			obj_t
																																				BgL_arg4730z00_2412;
																																			BgL_arg4729z00_2411
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					41));
																																			BgL_arg4730z00_2412
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4728z00_2410
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4729z00_2411,
																																				BgL_arg4730z00_2412);
																																		}
																																		BgL_arg4727z00_2409
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_ioptz00_2055,
																																			BgL_list4728z00_2410);
																																	}
																																	BgL_arg4721z00_2403
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4726z00_2408,
																																		BgL_arg4727z00_2409);
																																}
																																{	/* Ast/unit.scm 594 */
																																	obj_t
																																		BgL_arg4731z00_2413;
																																	obj_t
																																		BgL_arg4732z00_2414;
																																	BgL_arg4731z00_2413
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			29));
																																	{	/* Ast/unit.scm 594 */
																																		obj_t
																																			BgL_arg4733z00_2415;
																																		BgL_keysz00_2080
																																			=
																																			BgL_keysz00_76;
																																		{	/* Ast/unit.scm 556 */
																																			obj_t
																																				BgL_head3612z00_2084;
																																			BgL_head3612z00_2084
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			{
																																				obj_t
																																					BgL_l3610z00_2086;
																																				obj_t
																																					BgL_tail3613z00_2087;
																																				BgL_l3610z00_2086
																																					=
																																					BgL_keysz00_2080;
																																				BgL_tail3613z00_2087
																																					=
																																					BgL_head3612z00_2084;
																																			BgL_zc3anonymousza34427ze3z83_2088:
																																				if (NULLP(BgL_l3610z00_2086))
																																					{	/* Ast/unit.scm 556 */
																																						BgL_arg4733z00_2415
																																							=
																																							CDR
																																							(BgL_head3612z00_2084);
																																					}
																																				else
																																					{	/* Ast/unit.scm 556 */
																																						obj_t
																																							BgL_newtail3614z00_2090;
																																						{	/* Ast/unit.scm 556 */
																																							obj_t
																																								BgL_arg4430z00_2092;
																																							{	/* Ast/unit.scm 556 */
																																								obj_t
																																									BgL_kz00_2094;
																																								BgL_kz00_2094
																																									=
																																									CAR
																																									(BgL_l3610z00_2086);
																																								BgL_arg4430z00_2092
																																									=
																																									BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																																									(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																																									(CAR
																																										(BgL_kz00_2094),
																																										BgL_locz00_83));
																																							}
																																							BgL_newtail3614z00_2090
																																								=
																																								MAKE_PAIR
																																								(BgL_arg4430z00_2092,
																																								BNIL);
																																						}
																																						SET_CDR
																																							(BgL_tail3613z00_2087,
																																							BgL_newtail3614z00_2090);
																																						{
																																							obj_t
																																								BgL_tail3613z00_5774;
																																							obj_t
																																								BgL_l3610z00_5772;
																																							BgL_l3610z00_5772
																																								=
																																								CDR
																																								(BgL_l3610z00_2086);
																																							BgL_tail3613z00_5774
																																								=
																																								BgL_newtail3614z00_2090;
																																							BgL_tail3613z00_2087
																																								=
																																								BgL_tail3613z00_5774;
																																							BgL_l3610z00_2086
																																								=
																																								BgL_l3610z00_5772;
																																							goto
																																								BgL_zc3anonymousza34427ze3z83_2088;
																																						}
																																					}
																																			}
																																		}
																																		{	/* Ast/unit.scm 594 */
																																			obj_t
																																				BgL_list4735z00_2417;
																																			BgL_list4735z00_2417
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg4732z00_2414
																																				=
																																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																				(BgL_arg4733z00_2415,
																																				BgL_list4735z00_2417);
																																		}
																																	}
																																	BgL_arg4722z00_2404
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4731z00_2413,
																																		BgL_arg4732z00_2414);
																																}
																																{	/* Ast/unit.scm 593 */
																																	obj_t
																																		BgL_list4724z00_2406;
																																	{	/* Ast/unit.scm 593 */
																																		obj_t
																																			BgL_arg4725z00_2407;
																																		BgL_arg4725z00_2407
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list4724z00_2406
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4722z00_2404,
																																			BgL_arg4725z00_2407);
																																	}
																																	BgL_arg4720z00_2402
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg4721z00_2403,
																																		BgL_list4724z00_2406);
																																}
																															}
																															BgL_arg4712z00_2394
																																=
																																MAKE_PAIR
																																(BgL_arg4719z00_2401,
																																BgL_arg4720z00_2402);
																														}
																														{	/* Ast/unit.scm 595 */
																															obj_t
																																BgL_arg4736z00_2418;
																															{	/* Ast/unit.scm 595 */
																																obj_t
																																	BgL_arg4737z00_2419;
																																{	/* Ast/unit.scm 595 */
																																	obj_t
																																		BgL_arg4741z00_2422;
																																	obj_t
																																		BgL_arg4742z00_2423;
																																	BgL_arg4741z00_2422
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			45));
																																	{	/* Ast/unit.scm 595 */
																																		obj_t
																																			BgL_list4743z00_2424;
																																		{	/* Ast/unit.scm 595 */
																																			obj_t
																																				BgL_arg4745z00_2426;
																																			BgL_arg4745z00_2426
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4743z00_2424
																																				=
																																				MAKE_PAIR
																																				(BINT((
																																						(long)
																																						2)),
																																				BgL_arg4745z00_2426);
																																		}
																																		BgL_arg4742z00_2423
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(CNST_TABLE_REF
																																			(((long)
																																					41)),
																																			BgL_list4743z00_2424);
																																	}
																																	BgL_arg4737z00_2419
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4741z00_2422,
																																		BgL_arg4742z00_2423);
																																}
																																{	/* Ast/unit.scm 595 */
																																	obj_t
																																		BgL_list4740z00_2421;
																																	BgL_list4740z00_2421
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg4736z00_2418
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg4737z00_2419,
																																		BgL_list4740z00_2421);
																															}}
																															BgL_arg4713z00_2395
																																=
																																MAKE_PAIR
																																(BgL_checkz00_2059,
																																BgL_arg4736z00_2418);
																														}
																														{	/* Ast/unit.scm 596 */
																															obj_t
																																BgL_arg4746z00_2427;
																															obj_t
																																BgL_arg4747z00_2428;
																															{	/* Ast/unit.scm 596 */
																																obj_t
																																	BgL_arg4748z00_2429;
																																obj_t
																																	BgL_arg4749z00_2430;
																																BgL_arg4748z00_2429
																																	=
																																	CNST_TABLE_REF
																																	(((long) 1));
																																{	/* Ast/unit.scm 596 */
																																	obj_t
																																		BgL_list4750z00_2431;
																																	{	/* Ast/unit.scm 596 */
																																		obj_t
																																			BgL_arg4751z00_2432;
																																		obj_t
																																			BgL_arg4752z00_2433;
																																		BgL_arg4751z00_2432
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				27));
																																		BgL_arg4752z00_2433
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_list4750z00_2431
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4751z00_2432,
																																			BgL_arg4752z00_2433);
																																	}
																																	BgL_arg4749z00_2430
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(CNST_TABLE_REF
																																		(((long)
																																				28)),
																																		BgL_list4750z00_2431);
																																}
																																BgL_arg4746z00_2427
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4748z00_2429,
																																	BgL_arg4749z00_2430);
																															}
																															{	/* Ast/unit.scm 597 */
																																obj_t
																																	BgL_arg4753z00_2434;
																																obj_t
																																	BgL_arg4755z00_2436;
																																{	/* Ast/unit.scm 597 */
																																	obj_t
																																		BgL_arg4761z00_2441;
																																	obj_t
																																		BgL_arg4762z00_2442;
																																	BgL_arg4761z00_2441
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			29));
																																	{	/* Ast/unit.scm 597 */
																																		obj_t
																																			BgL_list4763z00_2443;
																																		BgL_list4763z00_2443
																																			=
																																			MAKE_PAIR
																																			(BNIL,
																																			BNIL);
																																		BgL_arg4762z00_2442
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_idz00_77,
																																			BgL_list4763z00_2443);
																																	}
																																	BgL_arg4753z00_2434
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4761z00_2441,
																																		BgL_arg4762z00_2442);
																																}
																																{	/* Ast/unit.scm 599 */
																																	obj_t
																																		BgL_arg4764z00_2444;
																																	obj_t
																																		BgL_arg4765z00_2445;
																																	BgL_arg4764z00_2444
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			49));
																																	{	/* Ast/unit.scm 599 */
																																		obj_t
																																			BgL_list4766z00_2446;
																																		{	/* Ast/unit.scm 599 */
																																			obj_t
																																				BgL_arg4767z00_2447;
																																			obj_t
																																				BgL_arg4768z00_2448;
																																			BgL_arg4767z00_2447
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					41));
																																			BgL_arg4768z00_2448
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4766z00_2446
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4767z00_2447,
																																				BgL_arg4768z00_2448);
																																		}
																																		BgL_arg4765z00_2445
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_ioptz00_2055,
																																			BgL_list4766z00_2446);
																																	}
																																	BgL_arg4755z00_2436
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4764z00_2444,
																																		BgL_arg4765z00_2445);
																																}
																																{	/* Ast/unit.scm 596 */
																																	obj_t
																																		BgL_list4757z00_2438;
																																	{	/* Ast/unit.scm 596 */
																																		obj_t
																																			BgL_arg4758z00_2439;
																																		{	/* Ast/unit.scm 596 */
																																			obj_t
																																				BgL_arg4760z00_2440;
																																			BgL_arg4760z00_2440
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_arg4758z00_2439
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4755z00_2436,
																																				BgL_arg4760z00_2440);
																																		}
																																		BgL_list4757z00_2438
																																			=
																																			MAKE_PAIR
																																			(BGl_string5076z00zzast_unitz00,
																																			BgL_arg4758z00_2439);
																																	}
																																	BgL_arg4747z00_2428
																																		=
																																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																		(BgL_arg4753z00_2434,
																																		BgL_list4757z00_2438);
																															}}
																															BgL_arg4714z00_2396
																																=
																																MAKE_PAIR
																																(BgL_arg4746z00_2427,
																																BgL_arg4747z00_2428);
																														}
																														{	/* Ast/unit.scm 593 */
																															obj_t
																																BgL_list4716z00_2398;
																															{	/* Ast/unit.scm 593 */
																																obj_t
																																	BgL_arg4717z00_2399;
																																{	/* Ast/unit.scm 593 */
																																	obj_t
																																		BgL_arg4718z00_2400;
																																	BgL_arg4718z00_2400
																																		=
																																		MAKE_PAIR
																																		(BNIL,
																																		BNIL);
																																	BgL_arg4717z00_2399
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4714z00_2396,
																																		BgL_arg4718z00_2400);
																																}
																																BgL_list4716z00_2398
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4713z00_2395,
																																	BgL_arg4717z00_2399);
																															}
																															BgL_arg4711z00_2393
																																=
																																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																(BgL_arg4712z00_2394,
																																BgL_list4716z00_2398);
																													}}
																													BgL_arg4697z00_2380 =
																														MAKE_PAIR
																														(BgL_arg4710z00_2392,
																														BgL_arg4711z00_2393);
																												}
																												{	/* Ast/unit.scm 591 */
																													obj_t
																														BgL_list4699z00_2382;
																													{	/* Ast/unit.scm 591 */
																														obj_t
																															BgL_arg4700z00_2383;
																														{	/* Ast/unit.scm 591 */
																															obj_t
																																BgL_arg4701z00_2384;
																															BgL_arg4701z00_2384
																																=
																																MAKE_PAIR(BNIL,
																																BNIL);
																															BgL_arg4700z00_2383
																																=
																																MAKE_PAIR
																																(BgL_arg4697z00_2380,
																																BgL_arg4701z00_2384);
																														}
																														BgL_list4699z00_2382
																															=
																															MAKE_PAIR
																															(BgL_arg4696z00_2379,
																															BgL_arg4700z00_2383);
																													}
																													BgL_arg4694z00_2377 =
																														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																														(BgL_arg4695z00_2378,
																														BgL_list4699z00_2382);
																											}}
																											BgL_arg4689z00_2372 =
																												MAKE_PAIR
																												(BgL_arg4693z00_2376,
																												BgL_arg4694z00_2377);
																										}
																										{	/* Ast/unit.scm 590 */
																											obj_t
																												BgL_list4691z00_2374;
																											{	/* Ast/unit.scm 590 */
																												obj_t
																													BgL_arg4692z00_2375;
																												BgL_arg4692z00_2375 =
																													MAKE_PAIR(BNIL, BNIL);
																												BgL_list4691z00_2374 =
																													MAKE_PAIR
																													(BgL_arg4689z00_2372,
																													BgL_arg4692z00_2375);
																											}
																											BgL_arg4687z00_2370 =
																												BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																												(BgL_arg4688z00_2371,
																												BgL_list4691z00_2374);
																									}}
																									BgL_arg4685z00_2368 =
																										MAKE_PAIR(BgL_checkz00_2059,
																										BgL_arg4687z00_2370);
																								}
																								BgL_arg4680z00_2363 =
																									MAKE_PAIR(BgL_arg4685z00_2368,
																									BNIL);
																							}
																							{	/* Ast/unit.scm 600 */
																								obj_t BgL_arg4769z00_2449;

																								{	/* Ast/unit.scm 600 */
																									obj_t BgL_list4770z00_2450;

																									BgL_list4770z00_2450 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_arg4769z00_2449 =
																										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																										(BINT(BgL_arityz00_2054),
																										BgL_list4770z00_2450);
																								}
																								BgL_arg4681z00_2364 =
																									MAKE_PAIR(BgL_checkz00_2059,
																									BgL_arg4769z00_2449);
																							}
																							{	/* Ast/unit.scm 590 */
																								obj_t BgL_list4683z00_2366;

																								{	/* Ast/unit.scm 590 */
																									obj_t BgL_arg4684z00_2367;

																									BgL_arg4684z00_2367 =
																										MAKE_PAIR(BNIL, BNIL);
																									BgL_list4683z00_2366 =
																										MAKE_PAIR
																										(BgL_arg4681z00_2364,
																										BgL_arg4684z00_2367);
																								}
																								BgL_arg4679z00_2362 =
																									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4680z00_2363,
																									BgL_list4683z00_2366);
																						}}
																						BgL_arg4664z00_2339 =
																							MAKE_PAIR(BgL_arg4678z00_2361,
																							BgL_arg4679z00_2362);
																					}
																				{	/* Ast/unit.scm 601 */
																					obj_t BgL_arg4771z00_2451;

																					obj_t BgL_arg4772z00_2452;

																					{	/* Ast/unit.scm 601 */
																						obj_t BgL_head3628z00_2455;

																						BgL_head3628z00_2455 =
																							MAKE_PAIR(BNIL, BNIL);
																						{
																							obj_t BgL_l3626z00_2457;

																							obj_t BgL_tail3629z00_2458;

																							BgL_l3626z00_2457 =
																								BgL_keysz00_76;
																							BgL_tail3629z00_2458 =
																								BgL_head3628z00_2455;
																						BgL_zc3anonymousza34774ze3z83_2459:
																							if (NULLP(BgL_l3626z00_2457))
																								{	/* Ast/unit.scm 601 */
																									BgL_arg4771z00_2451 =
																										CDR(BgL_head3628z00_2455);
																								}
																							else
																								{	/* Ast/unit.scm 601 */
																									obj_t BgL_newtail3630z00_2461;

																									{	/* Ast/unit.scm 601 */
																										obj_t BgL_arg4777z00_2463;

																										{	/* Ast/unit.scm 601 */
																											obj_t BgL_pz00_2465;

																											BgL_pz00_2465 =
																												CAR(BgL_l3626z00_2457);
																											{	/* Ast/unit.scm 602 */
																												obj_t BgL_iz00_2466;

																												BgL_iz00_2466 =
																													BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																													(CAR(BgL_pz00_2465),
																													BgL_locz00_83);
																												{	/* Ast/unit.scm 602 */
																													obj_t BgL_k1z00_2467;

																													BgL_k1z00_2467 =
																														BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00
																														(BgL_iz00_2466);
																													{	/* Ast/unit.scm 603 */
																														obj_t
																															BgL_indz00_2468;
																														BgL_indz00_2468 =
																															BGl_gensymz00zz__r4_symbols_6_4z00
																															(CNST_TABLE_REF((
																																	(long) 50)));
																														{	/* Ast/unit.scm 604 */

																															{	/* Ast/unit.scm 605 */
																																obj_t
																																	BgL_arg4780z00_2469;
																																obj_t
																																	BgL_arg4782z00_2470;
																																BgL_arg4780z00_2469
																																	=
																																	BGl_letzd2symzd2zzast_letz00
																																	();
																																{	/* Ast/unit.scm 605 */
																																	obj_t
																																		BgL_arg4783z00_2471;
																																	obj_t
																																		BgL_arg4784z00_2472;
																																	{	/* Ast/unit.scm 605 */
																																		obj_t
																																			BgL_arg4788z00_2476;
																																		{	/* Ast/unit.scm 605 */
																																			obj_t
																																				BgL_arg4790z00_2478;
																																			{	/* Ast/unit.scm 605 */
																																				obj_t
																																					BgL_arg4791z00_2479;
																																				{	/* Ast/unit.scm 605 */
																																					obj_t
																																						BgL_arg4794z00_2482;
																																					{	/* Ast/unit.scm 605 */
																																						obj_t
																																							BgL_list4795z00_2483;
																																						{	/* Ast/unit.scm 605 */
																																							obj_t
																																								BgL_arg4796z00_2484;
																																							BgL_arg4796z00_2484
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_list4795z00_2483
																																								=
																																								MAKE_PAIR
																																								(BINT
																																								(BgL_arityz00_2054),
																																								BgL_arg4796z00_2484);
																																						}
																																						BgL_arg4794z00_2482
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_k1z00_2467,
																																							BgL_list4795z00_2483);
																																					}
																																					BgL_arg4791z00_2479
																																						=
																																						MAKE_PAIR
																																						(BgL_searchz00_2058,
																																						BgL_arg4794z00_2482);
																																				}
																																				{	/* Ast/unit.scm 605 */
																																					obj_t
																																						BgL_list4793z00_2481;
																																					BgL_list4793z00_2481
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_arg4790z00_2478
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_arg4791z00_2479,
																																						BgL_list4793z00_2481);
																																			}}
																																			BgL_arg4788z00_2476
																																				=
																																				MAKE_PAIR
																																				(BgL_indz00_2468,
																																				BgL_arg4790z00_2478);
																																		}
																																		BgL_arg4783z00_2471
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4788z00_2476,
																																			BNIL);
																																	}
																																	{	/* Ast/unit.scm 606 */
																																		obj_t
																																			BgL_arg4797z00_2485;
																																		obj_t
																																			BgL_arg4798z00_2486;
																																		BgL_arg4797z00_2485
																																			=
																																			CNST_TABLE_REF
																																			(((long)
																																				51));
																																		{	/* Ast/unit.scm 606 */
																																			obj_t
																																				BgL_arg4799z00_2487;
																																			obj_t
																																				BgL_arg4800z00_2488;
																																			{	/* Ast/unit.scm 606 */
																																				obj_t
																																					BgL_arg4805z00_2492;
																																				obj_t
																																					BgL_arg4806z00_2493;
																																				BgL_arg4805z00_2492
																																					=
																																					CNST_TABLE_REF
																																					(((long) 52));
																																				{	/* Ast/unit.scm 606 */
																																					obj_t
																																						BgL_list4807z00_2494;
																																					{	/* Ast/unit.scm 606 */
																																						obj_t
																																							BgL_arg4810z00_2496;
																																						BgL_arg4810z00_2496
																																							=
																																							MAKE_PAIR
																																							(BNIL,
																																							BNIL);
																																						BgL_list4807z00_2494
																																							=
																																							MAKE_PAIR
																																							(BINT
																																							(((long) 0)), BgL_arg4810z00_2496);
																																					}
																																					BgL_arg4806z00_2493
																																						=
																																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																						(BgL_indz00_2468,
																																						BgL_list4807z00_2494);
																																				}
																																				BgL_arg4799z00_2487
																																					=
																																					MAKE_PAIR
																																					(BgL_arg4805z00_2492,
																																					BgL_arg4806z00_2493);
																																			}
																																			{	/* Ast/unit.scm 607 */
																																				obj_t
																																					BgL_arg4811z00_2497;
																																				obj_t
																																					BgL_arg4812z00_2498;
																																				BgL_arg4811z00_2497
																																					=
																																					CNST_TABLE_REF
																																					(((long) 3));
																																				{	/* Ast/unit.scm 607 */
																																					obj_t
																																						BgL_arg4813z00_2499;
																																					{	/* Ast/unit.scm 607 */
																																						obj_t
																																							BgL_arg4817z00_2503;
																																						obj_t
																																							BgL_arg4819z00_2504;
																																						BgL_arg4817z00_2503
																																							=
																																							CNST_TABLE_REF
																																							(((long) 21));
																																						{	/* Ast/unit.scm 607 */
																																							obj_t
																																								BgL_list4820z00_2505;
																																							{	/* Ast/unit.scm 607 */
																																								obj_t
																																									BgL_arg4821z00_2506;
																																								BgL_arg4821z00_2506
																																									=
																																									MAKE_PAIR
																																									(BNIL,
																																									BNIL);
																																								BgL_list4820z00_2505
																																									=
																																									MAKE_PAIR
																																									(BgL_indz00_2468,
																																									BgL_arg4821z00_2506);
																																							}
																																							BgL_arg4819z00_2504
																																								=
																																								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																								(BgL_ioptz00_2055,
																																								BgL_list4820z00_2505);
																																						}
																																						BgL_arg4813z00_2499
																																							=
																																							MAKE_PAIR
																																							(BgL_arg4817z00_2503,
																																							BgL_arg4819z00_2504);
																																					}
																																					{	/* Ast/unit.scm 607 */
																																						obj_t
																																							BgL_list4815z00_2501;
																																						{	/* Ast/unit.scm 607 */
																																							obj_t
																																								BgL_arg4816z00_2502;
																																							BgL_arg4816z00_2502
																																								=
																																								MAKE_PAIR
																																								(BNIL,
																																								BNIL);
																																							BgL_list4815z00_2501
																																								=
																																								MAKE_PAIR
																																								(BgL_arg4813z00_2499,
																																								BgL_arg4816z00_2502);
																																						}
																																						BgL_arg4812z00_2498
																																							=
																																							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																							(BgL_iz00_2466,
																																							BgL_list4815z00_2501);
																																				}}
																																				BgL_arg4800z00_2488
																																					=
																																					MAKE_PAIR
																																					(BgL_arg4811z00_2497,
																																					BgL_arg4812z00_2498);
																																			}
																																			{	/* Ast/unit.scm 606 */
																																				obj_t
																																					BgL_list4802z00_2490;
																																				{	/* Ast/unit.scm 606 */
																																					obj_t
																																						BgL_arg4804z00_2491;
																																					BgL_arg4804z00_2491
																																						=
																																						MAKE_PAIR
																																						(BNIL,
																																						BNIL);
																																					BgL_list4802z00_2490
																																						=
																																						MAKE_PAIR
																																						(BgL_arg4800z00_2488,
																																						BgL_arg4804z00_2491);
																																				}
																																				BgL_arg4798z00_2486
																																					=
																																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																					(BgL_arg4799z00_2487,
																																					BgL_list4802z00_2490);
																																		}}
																																		BgL_arg4784z00_2472
																																			=
																																			MAKE_PAIR
																																			(BgL_arg4797z00_2485,
																																			BgL_arg4798z00_2486);
																																	}
																																	{	/* Ast/unit.scm 605 */
																																		obj_t
																																			BgL_list4786z00_2474;
																																		{	/* Ast/unit.scm 605 */
																																			obj_t
																																				BgL_arg4787z00_2475;
																																			BgL_arg4787z00_2475
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4786z00_2474
																																				=
																																				MAKE_PAIR
																																				(BgL_arg4784z00_2472,
																																				BgL_arg4787z00_2475);
																																		}
																																		BgL_arg4782z00_2470
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg4783z00_2471,
																																			BgL_list4786z00_2474);
																																}}
																																BgL_arg4777z00_2463
																																	=
																																	MAKE_PAIR
																																	(BgL_arg4780z00_2469,
																																	BgL_arg4782z00_2470);
																										}}}}}}
																										BgL_newtail3630z00_2461 =
																											MAKE_PAIR
																											(BgL_arg4777z00_2463,
																											BNIL);
																									}
																									SET_CDR(BgL_tail3629z00_2458,
																										BgL_newtail3630z00_2461);
																									{
																										obj_t BgL_tail3629z00_5886;

																										obj_t BgL_l3626z00_5884;

																										BgL_l3626z00_5884 =
																											CDR(BgL_l3626z00_2457);
																										BgL_tail3629z00_5886 =
																											BgL_newtail3630z00_2461;
																										BgL_tail3629z00_2458 =
																											BgL_tail3629z00_5886;
																										BgL_l3626z00_2457 =
																											BgL_l3626z00_5884;
																										goto
																											BgL_zc3anonymousza34774ze3z83_2459;
																									}
																								}
																						}
																					}
																					{	/* Ast/unit.scm 609 */
																						obj_t BgL_arg4823z00_2509;

																						{	/* Ast/unit.scm 609 */
																							obj_t BgL_arg4825z00_2511;

																							{	/* Ast/unit.scm 609 */
																								obj_t BgL_arg4826z00_2512;

																								obj_t BgL_arg4827z00_2513;

																								{	/* Ast/unit.scm 609 */
																									obj_t BgL_l3631z00_2514;

																									BgL_l3631z00_2514 =
																										BGl_iotaz00zz__r4_pairs_and_lists_6_3z00
																										((int) (BgL_arityz00_2054),
																										BNIL);
																									if (NULLP(BgL_l3631z00_2514))
																										{	/* Ast/unit.scm 609 */
																											BgL_arg4826z00_2512 =
																												BNIL;
																										}
																									else
																										{	/* Ast/unit.scm 609 */
																											obj_t
																												BgL_head3633z00_2516;
																											BgL_head3633z00_2516 =
																												MAKE_PAIR(BNIL, BNIL);
																											{
																												obj_t BgL_l3631z00_2518;

																												obj_t
																													BgL_tail3634z00_2519;
																												BgL_l3631z00_2518 =
																													BgL_l3631z00_2514;
																												BgL_tail3634z00_2519 =
																													BgL_head3633z00_2516;
																											BgL_zc3anonymousza34829ze3z83_2520:
																												if (NULLP
																													(BgL_l3631z00_2518))
																													{	/* Ast/unit.scm 609 */
																														BgL_arg4826z00_2512
																															=
																															CDR
																															(BgL_head3633z00_2516);
																													}
																												else
																													{	/* Ast/unit.scm 609 */
																														obj_t
																															BgL_newtail3635z00_2522;
																														{	/* Ast/unit.scm 609 */
																															obj_t
																																BgL_arg4832z00_2524;
																															{	/* Ast/unit.scm 609 */
																																obj_t
																																	BgL_jz00_2526;
																																BgL_jz00_2526 =
																																	CAR
																																	(BgL_l3631z00_2518);
																																{	/* Ast/unit.scm 610 */
																																	obj_t
																																		BgL_arg4834z00_2527;
																																	obj_t
																																		BgL_arg4835z00_2528;
																																	BgL_arg4834z00_2527
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			21));
																																	{	/* Ast/unit.scm 610 */
																																		obj_t
																																			BgL_list4836z00_2529;
																																		{	/* Ast/unit.scm 610 */
																																			obj_t
																																				BgL_arg4837z00_2530;
																																			BgL_arg4837z00_2530
																																				=
																																				MAKE_PAIR
																																				(BNIL,
																																				BNIL);
																																			BgL_list4836z00_2529
																																				=
																																				MAKE_PAIR
																																				(BgL_jz00_2526,
																																				BgL_arg4837z00_2530);
																																		}
																																		BgL_arg4835z00_2528
																																			=
																																			BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_ioptz00_2055,
																																			BgL_list4836z00_2529);
																																	}
																																	BgL_arg4832z00_2524
																																		=
																																		MAKE_PAIR
																																		(BgL_arg4834z00_2527,
																																		BgL_arg4835z00_2528);
																															}}
																															BgL_newtail3635z00_2522
																																=
																																MAKE_PAIR
																																(BgL_arg4832z00_2524,
																																BNIL);
																														}
																														SET_CDR
																															(BgL_tail3634z00_2519,
																															BgL_newtail3635z00_2522);
																														{
																															obj_t
																																BgL_tail3634z00_5905;
																															obj_t
																																BgL_l3631z00_5903;
																															BgL_l3631z00_5903
																																=
																																CDR
																																(BgL_l3631z00_2518);
																															BgL_tail3634z00_5905
																																=
																																BgL_newtail3635z00_2522;
																															BgL_tail3634z00_2519
																																=
																																BgL_tail3634z00_5905;
																															BgL_l3631z00_2518
																																=
																																BgL_l3631z00_5903;
																															goto
																																BgL_zc3anonymousza34829ze3z83_2520;
																														}
																													}
																											}
																										}
																								}
																								{	/* Ast/unit.scm 613 */
																									obj_t BgL_arg4839z00_2533;

																									{	/* Ast/unit.scm 613 */
																										obj_t
																											BgL_zc3anonymousza34843ze3z83_4134;
																										BgL_zc3anonymousza34843ze3z83_4134
																											=
																											make_fx_procedure
																											(BGl_zc3anonymousza34843ze3z83zzast_unitz00,
																											(int) (((long) 1)),
																											(int) (((long) 1)));
																										PROCEDURE_SET
																											(BgL_zc3anonymousza34843ze3z83_4134,
																											(int) (((long) 0)),
																											BgL_locz00_83);
																										{	/* Ast/unit.scm 612 */
																											obj_t
																												BgL_list4842z00_2536;
																											BgL_list4842z00_2536 =
																												MAKE_PAIR
																												(BgL_keysz00_76, BNIL);
																											BgL_arg4839z00_2533 =
																												BGl_appendzd2mapzd2zz__r4_control_features_6_9z00
																												(BgL_zc3anonymousza34843ze3z83_4134,
																												BgL_list4842z00_2536);
																									}}
																									BgL_arg4827z00_2513 =
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg4839z00_2533, BNIL);
																								}
																								BgL_arg4825z00_2511 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg4826z00_2512,
																									BgL_arg4827z00_2513);
																							}
																							BgL_arg4823z00_2509 =
																								MAKE_PAIR(
																								(obj_t) (BgL_gloz00_75),
																								BgL_arg4825z00_2511);
																						}
																						BgL_arg4772z00_2452 =
																							MAKE_PAIR(BgL_arg4823z00_2509,
																							BNIL);
																					}
																					BgL_arg4665z00_2340 =
																						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg4771z00_2451,
																						BgL_arg4772z00_2452);
																				}
																				{	/* Ast/unit.scm 586 */
																					obj_t BgL_list4666z00_2341;

																					{	/* Ast/unit.scm 586 */
																						obj_t BgL_arg4667z00_2342;

																						BgL_arg4667z00_2342 =
																							MAKE_PAIR(BgL_arg4665z00_2340,
																							BNIL);
																						BgL_list4666z00_2341 =
																							MAKE_PAIR(BgL_arg4664z00_2339,
																							BgL_arg4667z00_2342);
																					}
																					BgL_arg4662z00_2337 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg4663z00_2338,
																						BgL_list4666z00_2341);
																			}}
																			BgL_arg4638z00_2303 =
																				MAKE_PAIR(BgL_arg4661z00_2336,
																				BgL_arg4662z00_2337);
																		}
																		{	/* Ast/unit.scm 582 */
																			obj_t BgL_list4640z00_2305;

																			{	/* Ast/unit.scm 582 */
																				obj_t BgL_arg4641z00_2306;

																				BgL_arg4641z00_2306 =
																					MAKE_PAIR(BNIL, BNIL);
																				BgL_list4640z00_2305 =
																					MAKE_PAIR(BgL_arg4638z00_2303,
																					BgL_arg4641z00_2306);
																			}
																			BgL_arg4636z00_2301 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg4637z00_2302,
																				BgL_list4640z00_2305);
																	}}
																	BgL_arg4455z00_2118 =
																		MAKE_PAIR(BgL_arg4635z00_2300,
																		BgL_arg4636z00_2301);
																}
																{	/* Ast/unit.scm 561 */
																	obj_t BgL_list4457z00_2120;

																	{	/* Ast/unit.scm 561 */
																		obj_t BgL_arg4458z00_2121;

																		BgL_arg4458z00_2121 = MAKE_PAIR(BNIL, BNIL);
																		BgL_list4457z00_2120 =
																			MAKE_PAIR(BgL_arg4455z00_2118,
																			BgL_arg4458z00_2121);
																	}
																	BgL_arg4453z00_2116 =
																		BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																		(BgL_arg4454z00_2117, BgL_list4457z00_2120);
															}}
															BgL_arg4439z00_2102 =
																MAKE_PAIR(BgL_arg4452z00_2115,
																BgL_arg4453z00_2116);
														}
														{	/* Ast/unit.scm 560 */
															obj_t BgL_list4441z00_2104;

															{	/* Ast/unit.scm 560 */
																obj_t BgL_arg4442z00_2105;

																BgL_arg4442z00_2105 = MAKE_PAIR(BNIL, BNIL);
																BgL_list4441z00_2104 =
																	MAKE_PAIR(BgL_arg4439z00_2102,
																	BgL_arg4442z00_2105);
															}
															BgL_arg4437z00_2100 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg4438z00_2101, BgL_list4441z00_2104);
													}}
													BgL_auxz00_5508 =
														MAKE_PAIR(BgL_arg4435z00_2099, BgL_arg4437z00_2100);
												}
												BgL_auxz00_5507 =
													BGl_comptimezd2expandzd2zzexpand_epsz00
													(BgL_auxz00_5508);
											}
											BgL_arg4415z00_2070 =
												BGl_compilezd2expandzd2zzexpand_epsz00(BgL_auxz00_5507);
										}
										BgL_gz00_2066 =
											BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
											(BgL_idz00_2063, BgL_arg4412z00_2067, BgL_arg4413z00_2068,
											BgL_modulez00_78, BgL_classz00_82, BgL_srcz00_81,
											BgL_arg4414z00_2069, BgL_arg4415z00_2070);
									}
									{	/* Ast/unit.scm 622 */

										{
											BgL_typez00_bglt BgL_auxz00_5940;

											BgL_variablez00_bglt BgL_auxz00_5938;

											BgL_auxz00_5940 =
												(BgL_typez00_bglt) (BGl_za2objza2z00zztype_cachez00);
											BgL_auxz00_5938 = (BgL_variablez00_bglt) (BgL_gz00_2066);
											((((BgL_variablez00_bglt) CREF(BgL_auxz00_5938))->
													BgL_typez00) =
												((BgL_typez00_bglt) BgL_auxz00_5940), BUNSPEC);
										}
										((((BgL_globalz00_bglt) CREF(BgL_gz00_2066))->
												BgL_evaluablezf3zf3) =
											((bool_t) ((bool_t) 0)), BUNSPEC);
										return BgL_gz00_2066;
									}
								}
							}
						}
					}
				}
			}
		}
	}



/* <anonymous:4843> */
	obj_t BGl_zc3anonymousza34843ze3z83zzast_unitz00(obj_t BgL_envz00_4135,
		obj_t BgL_pz00_4137)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 612 */
			{	/* Ast/unit.scm 613 */
				obj_t BgL_locz00_4136;

				BgL_locz00_4136 = PROCEDURE_REF(BgL_envz00_4135, (int) (((long) 0)));
				{
					obj_t BgL_pz00_2537;

					BgL_pz00_2537 = BgL_pz00_4137;
					{	/* Ast/unit.scm 613 */
						obj_t BgL_idz00_2539;

						BgL_idz00_2539 =
							BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR(BgL_pz00_2537),
							BgL_locz00_4136);
						{	/* Ast/unit.scm 616 */
							obj_t BgL_arg4844z00_2540;

							BgL_arg4844z00_2540 =
								BGl_symbolzd2ze3keywordz31zz__r4_symbols_6_4z00(BgL_idz00_2539);
							{	/* Ast/unit.scm 615 */
								obj_t BgL_list4845z00_2541;

								{	/* Ast/unit.scm 615 */
									obj_t BgL_arg4846z00_2542;

									BgL_arg4846z00_2542 = MAKE_PAIR(BgL_idz00_2539, BNIL);
									BgL_list4845z00_2541 =
										MAKE_PAIR(BgL_arg4844z00_2540, BgL_arg4846z00_2542);
								}
								return BgL_list4845z00_2541;
							}
						}
					}
				}
			}
		}
	}



/* make-sfun-noopt-definition */
	obj_t BGl_makezd2sfunzd2nooptzd2definitionzd2zzast_unitz00(obj_t BgL_idz00_84,
		obj_t BgL_modulez00_85, obj_t BgL_argsz00_86, obj_t BgL_bodyz00_87,
		obj_t BgL_srcz00_88, obj_t BgL_classz00_89, obj_t BgL_locz00_90)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 633 */
			{	/* Ast/unit.scm 634 */
				obj_t BgL_localsz00_2548;

				obj_t BgL_bodyz00_2549;

				{
					obj_t BgL_argsz00_2554;

					obj_t BgL_resz00_2555;

					BgL_argsz00_2554 = BgL_argsz00_86;
					BgL_resz00_2555 = BNIL;
				BgL_zc3anonymousza34851ze3z83_2556:
					if (NULLP(BgL_argsz00_2554))
						{	/* Ast/unit.scm 637 */
							BgL_localsz00_2548 = bgl_reverse_bang(BgL_resz00_2555);
						}
					else
						{	/* Ast/unit.scm 637 */
							if (PAIRP(BgL_argsz00_2554))
								{	/* Ast/unit.scm 639 */
									if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(CAR
											(BgL_argsz00_2554)))
										{	/* Ast/unit.scm 649 */
											obj_t BgL_argz00_2560;

											BgL_argz00_2560 =
												BGl_dssslzd2findzd2firstzd2formalzd2zztools_dssslz00
												(BgL_argsz00_2554);
											if (CBOOL(BgL_argz00_2560))
												{	/* Ast/unit.scm 652 */
													obj_t BgL_arg4855z00_2561;

													{	/* Ast/unit.scm 652 */
														BgL_localz00_bglt BgL_arg4856z00_2562;

														BgL_arg4856z00_2562 =
															BGl_makezd2userzd2localzd2svarzd2zzast_localz00
															(BgL_argz00_2560,
															(BgL_typez00_bglt)
															(BGl_za2objza2z00zztype_cachez00));
														BgL_arg4855z00_2561 =
															MAKE_PAIR((obj_t) (BgL_arg4856z00_2562),
															BgL_resz00_2555);
													}
													BgL_localsz00_2548 =
														bgl_reverse_bang(BgL_arg4855z00_2561);
												}
											else
												{	/* Ast/unit.scm 650 */
													BgL_localsz00_2548 =
														bgl_reverse_bang(BgL_resz00_2555);
												}
										}
									else
										{	/* Ast/unit.scm 655 */
											obj_t BgL_pidz00_2563;

											BgL_pidz00_2563 =
												BGl_checkzd2idzd2zzast_identz00
												(BGl_parsezd2idzd2zzast_identz00(CAR(BgL_argsz00_2554),
													BgL_locz00_90), BgL_srcz00_88);
											{	/* Ast/unit.scm 655 */
												obj_t BgL_idz00_2564;

												BgL_idz00_2564 = CAR(BgL_pidz00_2563);
												{	/* Ast/unit.scm 657 */
													obj_t BgL_typez00_2565;

													BgL_typez00_2565 = CDR(BgL_pidz00_2563);
													{	/* Ast/unit.scm 658 */

														{	/* Ast/unit.scm 659 */
															obj_t BgL_arg4857z00_2566;

															obj_t BgL_arg4858z00_2567;

															BgL_arg4857z00_2566 = CDR(BgL_argsz00_2554);
															{	/* Ast/unit.scm 660 */
																BgL_localz00_bglt BgL_arg4859z00_2568;

																if (BGl_userzd2symbolzf3z21zzast_identz00
																	(BgL_idz00_2564))
																	{	/* Ast/unit.scm 660 */
																		BgL_arg4859z00_2568 =
																			BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																			(BgL_idz00_2564,
																			(BgL_typez00_bglt) (BgL_typez00_2565));
																	}
																else
																	{	/* Ast/unit.scm 660 */
																		BgL_arg4859z00_2568 =
																			BGl_makezd2localzd2svarz00zzast_localz00
																			(BgL_idz00_2564,
																			(BgL_typez00_bglt) (BgL_typez00_2565));
																	}
																BgL_arg4858z00_2567 =
																	MAKE_PAIR(
																	(obj_t) (BgL_arg4859z00_2568),
																	BgL_resz00_2555);
															}
															{
																obj_t BgL_resz00_5983;

																obj_t BgL_argsz00_5982;

																BgL_argsz00_5982 = BgL_arg4857z00_2566;
																BgL_resz00_5983 = BgL_arg4858z00_2567;
																BgL_resz00_2555 = BgL_resz00_5983;
																BgL_argsz00_2554 = BgL_argsz00_5982;
																goto BgL_zc3anonymousza34851ze3z83_2556;
															}
														}
													}
												}
											}
										}
								}
							else
								{	/* Ast/unit.scm 640 */
									obj_t BgL_pidz00_2573;

									BgL_pidz00_2573 =
										BGl_checkzd2idzd2zzast_identz00
										(BGl_parsezd2idzd2zzast_identz00(BgL_argsz00_2554,
											BgL_locz00_90), BgL_srcz00_88);
									{	/* Ast/unit.scm 640 */
										obj_t BgL_idz00_2574;

										BgL_idz00_2574 = CAR(BgL_pidz00_2573);
										{	/* Ast/unit.scm 641 */
											obj_t BgL_typez00_2575;

											BgL_typez00_2575 = CDR(BgL_pidz00_2573);
											{	/* Ast/unit.scm 642 */

												{	/* Ast/unit.scm 646 */
													obj_t BgL_arg4864z00_2576;

													{	/* Ast/unit.scm 646 */
														BgL_localz00_bglt BgL_arg4865z00_2577;

														BgL_arg4865z00_2577 =
															BGl_makezd2userzd2localzd2svarzd2zzast_localz00
															(BgL_idz00_2574,
															(BgL_typez00_bglt) (BgL_typez00_2575));
														BgL_arg4864z00_2576 =
															MAKE_PAIR((obj_t) (BgL_arg4865z00_2577),
															BgL_resz00_2555);
													}
													BgL_localsz00_2548 =
														bgl_reverse_bang(BgL_arg4864z00_2576);
												}
											}
										}
									}
								}
						}
				}
				BgL_bodyz00_2549 =
					BGl_makezd2dssslzd2functionzd2preludezd2zz__dssslz00(BgL_idz00_84,
					BgL_argsz00_86, BgL_bodyz00_87,
					BGl_userzd2errorzd2envz00zztools_errorz00);
				{	/* Ast/unit.scm 665 */
					BgL_globalz00_bglt BgL_arg4849z00_2550;

					BgL_arg4849z00_2550 =
						BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_84,
						BgL_argsz00_86, BgL_localsz00_2548, BgL_modulez00_85,
						BgL_classz00_89, BgL_srcz00_88, CNST_TABLE_REF(((long) 8)),
						BgL_bodyz00_2549);
					{	/* Ast/unit.scm 665 */
						obj_t BgL_list4850z00_2551;

						BgL_list4850z00_2551 =
							MAKE_PAIR((obj_t) (BgL_arg4849z00_2550), BNIL);
						return BgL_list4850z00_2551;
					}
				}
			}
		}
	}



/* make-svar-definition */
	obj_t BGl_makezd2svarzd2definitionz00zzast_unitz00(obj_t BgL_idz00_91,
		obj_t BgL_srcz00_92)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 670 */
			BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(BgL_idz00_91,
				BGl_za2moduleza2z00zzmodule_modulez00, BgL_srcz00_92,
				CNST_TABLE_REF(((long) 8)));
			{	/* Ast/unit.scm 674 */
				obj_t BgL_auxz00_6002;

				obj_t BgL_auxz00_6000;

				BgL_auxz00_6002 =
					CAR(BGl_checkzd2idzd2zzast_identz00(BGl_parsezd2idzd2zzast_identz00
						(BgL_idz00_91,
							BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_92)),
						BgL_srcz00_92));
				BgL_auxz00_6000 = CDR(BgL_srcz00_92);
				SET_CAR(BgL_auxz00_6000, BgL_auxz00_6002);
			}
			{	/* Ast/unit.scm 675 */
				obj_t BgL_list4872z00_2585;

				BgL_list4872z00_2585 = MAKE_PAIR(BgL_srcz00_92, BNIL);
				return BgL_list4872z00_2585;
			}
		}
	}



/* make-sgfun-default */
	obj_t BGl_makezd2sgfunzd2defaultz00zzast_unitz00(obj_t BgL_namez00_93,
		obj_t BgL_typez00_94, obj_t BgL_argsz00_95, obj_t BgL_bodyz00_96,
		obj_t BgL_srcz00_97, obj_t BgL_gdefsz00_98)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 680 */
			{	/* Ast/unit.scm 682 */
				obj_t BgL_defaultzd2tidzd2_2587;

				if ((BgL_typez00_94 == BGl_za2_za2z00zztype_cachez00))
					{	/* Ast/unit.scm 683 */
						BgL_defaultzd2tidzd2_2587 = BgL_namez00_93;
					}
				else
					{	/* Ast/unit.scm 685 */
						obj_t BgL_arg4908z00_2627;

						{
							BgL_typez00_bglt BgL_auxz00_6011;

							BgL_auxz00_6011 = (BgL_typez00_bglt) (BgL_typez00_94);
							BgL_arg4908z00_2627 =
								(((BgL_typez00_bglt) CREF(BgL_auxz00_6011))->BgL_idz00);
						}
						BgL_defaultzd2tidzd2_2587 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_namez00_93,
							BgL_arg4908z00_2627);
					}
				{	/* Ast/unit.scm 683 */
					obj_t BgL_defaultzd2bodyzd2_2588;

					if (PAIRP(BgL_bodyz00_96))
						{	/* Ast/unit.scm 686 */
							BgL_defaultzd2bodyzd2_2588 =
								BGl_normaliza7ezd2prognz75zztools_prognz00(BgL_bodyz00_96);
						}
					else
						{	/* Ast/unit.scm 688 */
							obj_t BgL_arg4888z00_2607;

							obj_t BgL_arg4889z00_2608;

							{	/* Ast/unit.scm 688 */
								obj_t BgL_arg4890z00_2609;

								obj_t BgL_arg4891z00_2610;

								BgL_arg4890z00_2609 = CNST_TABLE_REF(((long) 1));
								{	/* Ast/unit.scm 688 */
									obj_t BgL_list4892z00_2611;

									{	/* Ast/unit.scm 688 */
										obj_t BgL_arg4893z00_2612;

										obj_t BgL_arg4894z00_2613;

										BgL_arg4893z00_2612 = CNST_TABLE_REF(((long) 27));
										BgL_arg4894z00_2613 = MAKE_PAIR(BNIL, BNIL);
										BgL_list4892z00_2611 =
											MAKE_PAIR(BgL_arg4893z00_2612, BgL_arg4894z00_2613);
									}
									BgL_arg4891z00_2610 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
												(long) 28)), BgL_list4892z00_2611);
								}
								BgL_arg4888z00_2607 =
									MAKE_PAIR(BgL_arg4890z00_2609, BgL_arg4891z00_2610);
							}
							{	/* Ast/unit.scm 689 */
								obj_t BgL_arg4895z00_2614;

								obj_t BgL_arg4897z00_2616;

								{	/* Ast/unit.scm 689 */
									obj_t BgL_arg4902z00_2621;

									obj_t BgL_arg4903z00_2622;

									BgL_arg4902z00_2621 = CNST_TABLE_REF(((long) 29));
									{	/* Ast/unit.scm 689 */
										obj_t BgL_list4904z00_2623;

										BgL_list4904z00_2623 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg4903z00_2622 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_namez00_93, BgL_list4904z00_2623);
									}
									BgL_arg4895z00_2614 =
										MAKE_PAIR(BgL_arg4902z00_2621, BgL_arg4903z00_2622);
								}
								BgL_arg4897z00_2616 =
									BGl_idzd2ofzd2idz00zzast_identz00(CAR(BgL_argsz00_95),
									BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_97));
								{	/* Ast/unit.scm 688 */
									obj_t BgL_list4899z00_2618;

									{	/* Ast/unit.scm 688 */
										obj_t BgL_arg4900z00_2619;

										{	/* Ast/unit.scm 688 */
											obj_t BgL_arg4901z00_2620;

											BgL_arg4901z00_2620 = MAKE_PAIR(BNIL, BNIL);
											BgL_arg4900z00_2619 =
												MAKE_PAIR(BgL_arg4897z00_2616, BgL_arg4901z00_2620);
										}
										BgL_list4899z00_2618 =
											MAKE_PAIR(BGl_string5077z00zzast_unitz00,
											BgL_arg4900z00_2619);
									}
									BgL_arg4889z00_2608 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg4895z00_2614, BgL_list4899z00_2618);
							}}
							BgL_defaultzd2bodyzd2_2588 =
								MAKE_PAIR(BgL_arg4888z00_2607, BgL_arg4889z00_2608);
						}
					{	/* Ast/unit.scm 686 */
						obj_t BgL_formz00_2589;

						{	/* Ast/unit.scm 693 */
							obj_t BgL_tmpz00_2595;

							{	/* Ast/unit.scm 693 */
								obj_t BgL_arg4881z00_2600;

								obj_t BgL_arg4882z00_2601;

								BgL_arg4881z00_2600 = CNST_TABLE_REF(((long) 15));
								{	/* Ast/unit.scm 693 */
									obj_t BgL_arg4883z00_2602;

									BgL_arg4883z00_2602 =
										MAKE_PAIR(BgL_defaultzd2tidzd2_2587, BgL_argsz00_95);
									{	/* Ast/unit.scm 693 */
										obj_t BgL_list4885z00_2604;

										{	/* Ast/unit.scm 693 */
											obj_t BgL_arg4886z00_2605;

											BgL_arg4886z00_2605 = MAKE_PAIR(BNIL, BNIL);
											BgL_list4885z00_2604 =
												MAKE_PAIR(BgL_defaultzd2bodyzd2_2588,
												BgL_arg4886z00_2605);
										}
										BgL_arg4882z00_2601 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg4883z00_2602, BgL_list4885z00_2604);
								}}
								BgL_tmpz00_2595 =
									MAKE_PAIR(BgL_arg4881z00_2600, BgL_arg4882z00_2601);
							}
							if (EXTENDED_PAIRP
								(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00))
								{	/* Ast/unit.scm 695 */
									obj_t BgL_arg4878z00_2597;

									obj_t BgL_arg4879z00_2598;

									obj_t BgL_arg4880z00_2599;

									BgL_arg4878z00_2597 = CAR(BgL_tmpz00_2595);
									BgL_arg4879z00_2598 = CDR(BgL_tmpz00_2595);
									BgL_arg4880z00_2599 =
										CER(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
									{	/* Ast/unit.scm 695 */
										obj_t BgL_res5055z00_4057;

										BgL_res5055z00_4057 =
											MAKE_EXTENDED_PAIR(BgL_arg4878z00_2597,
											BgL_arg4879z00_2598, BgL_arg4880z00_2599);
										BgL_formz00_2589 = BgL_res5055z00_4057;
									}
								}
							else
								{	/* Ast/unit.scm 694 */
									BgL_formz00_2589 = BgL_tmpz00_2595;
								}
						}
						{	/* Ast/unit.scm 693 */

							{	/* Ast/unit.scm 698 */
								obj_t BgL_astz00_2590;

								BgL_astz00_2590 =
									BGl_toplevelzd2ze3astz31zzast_unitz00(BgL_formz00_2589,
									BgL_gdefsz00_98);
								if (PAIRP(BgL_astz00_2590))
									{	/* Ast/unit.scm 701 */
										bool_t BgL_testz00_6052;

										{	/* Ast/unit.scm 701 */
											obj_t BgL_arg4876z00_2594;

											BgL_arg4876z00_2594 = CAR(BgL_astz00_2590);
											BgL_testz00_6052 =
												BGl_iszd2azf3z21zz__objectz00(BgL_arg4876z00_2594,
												BGl_globalz00zzast_varz00);
										}
										if (BgL_testz00_6052)
											{	/* Ast/unit.scm 705 */
												obj_t BgL_arg4875z00_2593;

												BgL_arg4875z00_2593 = CAR(BgL_astz00_2590);
												{
													BgL_globalz00_bglt BgL_auxz00_6056;

													BgL_auxz00_6056 =
														(BgL_globalz00_bglt) (BgL_arg4875z00_2593);
													((((BgL_globalz00_bglt) CREF(BgL_auxz00_6056))->
															BgL_userzf3zf3) =
														((bool_t) ((bool_t) 1)), BUNSPEC);
												}
											}
										else
											{	/* Ast/unit.scm 701 */
												BFALSE;
											}
									}
								else
									{	/* Ast/unit.scm 700 */
										BFALSE;
									}
								return BgL_astz00_2590;
							}
						}
					}
				}
			}
		}
	}



/* make-generic-definition */
	obj_t BGl_makezd2genericzd2definitionz00zzast_unitz00(obj_t BgL_idz00_99,
		obj_t BgL_modulez00_100, obj_t BgL_argsz00_101, obj_t BgL_bodyz00_102,
		obj_t BgL_srcz00_103, obj_t BgL_gdefsz00_104)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 711 */
			{	/* Ast/unit.scm 714 */
				obj_t BgL_locz00_2628;

				BgL_locz00_2628 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_103);
				{	/* Ast/unit.scm 714 */
					obj_t BgL_localsz00_2629;

					if (NULLP(BgL_argsz00_101))
						{	/* Ast/unit.scm 715 */
							BgL_localsz00_2629 =
								BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_99,
								BGl_string5078z00zzast_unitz00, BgL_srcz00_103, BNIL);
						}
					else
						{
							obj_t BgL_argsz00_2680;

							obj_t BgL_resz00_2681;

							BgL_argsz00_2680 = BgL_argsz00_101;
							BgL_resz00_2681 = BNIL;
						BgL_zc3anonymousza34948ze3z83_2682:
							if (NULLP(BgL_argsz00_2680))
								{	/* Ast/unit.scm 722 */
									BgL_localsz00_2629 = bgl_reverse_bang(BgL_resz00_2681);
								}
							else
								{	/* Ast/unit.scm 722 */
									if (PAIRP(BgL_argsz00_2680))
										{	/* Ast/unit.scm 734 */
											obj_t BgL_pidz00_2685;

											BgL_pidz00_2685 =
												BGl_checkzd2idzd2zzast_identz00
												(BGl_parsezd2idzd2zzast_identz00(CAR(BgL_argsz00_2680),
													BgL_locz00_2628), BgL_srcz00_103);
											{	/* Ast/unit.scm 734 */
												obj_t BgL_idz00_2686;

												BgL_idz00_2686 = CAR(BgL_pidz00_2685);
												{	/* Ast/unit.scm 736 */
													obj_t BgL_typez00_2687;

													BgL_typez00_2687 = CDR(BgL_pidz00_2685);
													{	/* Ast/unit.scm 737 */

														{	/* Ast/unit.scm 738 */
															obj_t BgL_arg4954z00_2688;

															obj_t BgL_arg4955z00_2689;

															BgL_arg4954z00_2688 = CDR(BgL_argsz00_2680);
															{	/* Ast/unit.scm 739 */
																BgL_localz00_bglt BgL_arg4956z00_2690;

																BgL_arg4956z00_2690 =
																	BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																	(BgL_idz00_2686,
																	(BgL_typez00_bglt) (BgL_typez00_2687));
																BgL_arg4955z00_2689 =
																	MAKE_PAIR((obj_t) (BgL_arg4956z00_2690),
																	BgL_resz00_2681);
															}
															{
																obj_t BgL_resz00_6079;

																obj_t BgL_argsz00_6078;

																BgL_argsz00_6078 = BgL_arg4954z00_2688;
																BgL_resz00_6079 = BgL_arg4955z00_2689;
																BgL_resz00_2681 = BgL_resz00_6079;
																BgL_argsz00_2680 = BgL_argsz00_6078;
																goto BgL_zc3anonymousza34948ze3z83_2682;
															}
														}
													}
												}
											}
										}
									else
										{	/* Ast/unit.scm 725 */
											obj_t BgL_pidz00_2693;

											BgL_pidz00_2693 =
												BGl_checkzd2idzd2zzast_identz00
												(BGl_parsezd2idzd2zzast_identz00(BgL_argsz00_2680,
													BgL_locz00_2628), BgL_srcz00_103);
											{	/* Ast/unit.scm 725 */
												obj_t BgL_idz00_2694;

												BgL_idz00_2694 = CAR(BgL_pidz00_2693);
												{	/* Ast/unit.scm 726 */
													obj_t BgL_typez00_2695;

													BgL_typez00_2695 = CDR(BgL_pidz00_2693);
													{	/* Ast/unit.scm 727 */

														{	/* Ast/unit.scm 731 */
															obj_t BgL_arg4959z00_2696;

															{	/* Ast/unit.scm 731 */
																BgL_localz00_bglt BgL_arg4960z00_2697;

																BgL_arg4960z00_2697 =
																	BGl_makezd2userzd2localzd2svarzd2zzast_localz00
																	(BgL_idz00_2694,
																	(BgL_typez00_bglt) (BgL_typez00_2695));
																BgL_arg4959z00_2696 =
																	MAKE_PAIR((obj_t) (BgL_arg4960z00_2697),
																	BgL_resz00_2681);
															}
															BgL_localsz00_2629 =
																bgl_reverse_bang(BgL_arg4959z00_2696);
														}
													}
												}
											}
										}
								}
						}
					{	/* Ast/unit.scm 715 */
						obj_t BgL_pidz00_2630;

						BgL_pidz00_2630 =
							BGl_checkzd2idzd2zzast_identz00(BGl_parsezd2idzd2zzast_identz00
							(BgL_idz00_99, BgL_locz00_2628), BgL_srcz00_103);
						{	/* Ast/unit.scm 741 */
							obj_t BgL_namez00_2631;

							BgL_namez00_2631 = CAR(BgL_pidz00_2630);
							{	/* Ast/unit.scm 742 */
								obj_t BgL_typez00_2632;

								BgL_typez00_2632 = CDR(BgL_pidz00_2630);
								{	/* Ast/unit.scm 743 */
									obj_t BgL_dnamez00_2633;

									{	/* Ast/unit.scm 744 */
										obj_t BgL_arg4939z00_2669;

										{	/* Ast/unit.scm 744 */
											obj_t BgL_arg4940z00_2670;

											{	/* Ast/unit.scm 744 */
												obj_t BgL_arg4941z00_2671;

												obj_t BgL_arg4942z00_2672;

												{	/* Ast/unit.scm 744 */
													obj_t BgL_res5056z00_4077;

													{	/* Ast/unit.scm 744 */
														obj_t BgL_symbolz00_4075;

														BgL_symbolz00_4075 = BgL_namez00_2631;
														{	/* Ast/unit.scm 744 */
															obj_t BgL_arg2063z00_4076;

															BgL_arg2063z00_4076 =
																SYMBOL_TO_STRING(BgL_symbolz00_4075);
															BgL_res5056z00_4077 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_4076);
														}
													}
													BgL_arg4941z00_2671 = BgL_res5056z00_4077;
												}
												{	/* Ast/unit.scm 744 */
													obj_t BgL_res5057z00_4080;

													{	/* Ast/unit.scm 744 */
														obj_t BgL_symbolz00_4078;

														BgL_symbolz00_4078 = CNST_TABLE_REF(((long) 53));
														{	/* Ast/unit.scm 744 */
															obj_t BgL_arg2063z00_4079;

															BgL_arg2063z00_4079 =
																SYMBOL_TO_STRING(BgL_symbolz00_4078);
															BgL_res5057z00_4080 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg2063z00_4079);
													}}
													BgL_arg4942z00_2672 = BgL_res5057z00_4080;
												}
												{	/* Ast/unit.scm 744 */
													obj_t BgL_list4943z00_2673;

													{	/* Ast/unit.scm 744 */
														obj_t BgL_arg4944z00_2674;

														BgL_arg4944z00_2674 =
															MAKE_PAIR(BgL_arg4942z00_2672, BNIL);
														BgL_list4943z00_2673 =
															MAKE_PAIR(BgL_arg4941z00_2671,
															BgL_arg4944z00_2674);
													}
													BgL_arg4940z00_2670 =
														BGl_stringzd2appendzd2zz__r4_strings_6_7z00
														(BgL_list4943z00_2673);
											}}
											BgL_arg4939z00_2669 =
												string_to_symbol(BSTRING_TO_STRING
												(BgL_arg4940z00_2670));
										}
										BgL_dnamez00_2633 =
											BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg4939z00_2669);
									}
									{	/* Ast/unit.scm 744 */
										obj_t BgL_defaultz00_2634;

										if (
											(BgL_modulez00_100 ==
												BGl_za2moduleza2z00zzmodule_modulez00))
											{	/* Ast/unit.scm 745 */
												BgL_defaultz00_2634 =
													BGl_makezd2sgfunzd2defaultz00zzast_unitz00
													(BgL_dnamez00_2633, BgL_typez00_2632, BgL_argsz00_101,
													BgL_bodyz00_102, BgL_srcz00_103, BgL_gdefsz00_104);
											}
										else
											{	/* Ast/unit.scm 745 */
												BgL_defaultz00_2634 = BNIL;
											}
										{	/* Ast/unit.scm 745 */
											obj_t BgL_bodyz00_2635;

											BgL_bodyz00_2635 =
												BGl_makezd2genericzd2bodyz00zzobject_genericz00
												(BgL_idz00_99, BgL_localsz00_2629, BgL_argsz00_101,
												BgL_srcz00_103);
											{	/* Ast/unit.scm 748 */
												BgL_globalz00_bglt BgL_genericz00_2636;

												BgL_genericz00_2636 =
													BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2
													(BgL_idz00_99, BgL_argsz00_101, BgL_localsz00_2629,
													BgL_modulez00_100, CNST_TABLE_REF(((long) 54)),
													BgL_srcz00_103, CNST_TABLE_REF(((long) 8)),
													BgL_bodyz00_2635);
												{	/* Ast/unit.scm 749 */

													{	/* Ast/unit.scm 758 */
														obj_t BgL_ozd2unitzd2_2637;

														BgL_ozd2unitzd2_2637 =
															BGl_getzd2genericzd2unitz00zzmodule_classz00();
														{	/* Ast/unit.scm 758 */
															BgL_typez00_bglt BgL_typez00_2638;

															{	/* Ast/unit.scm 759 */
																BgL_variablez00_bglt BgL_obj1608z00_4083;

																{	/* Ast/unit.scm 759 */
																	obj_t BgL_pairz00_4082;

																	BgL_pairz00_4082 = BgL_localsz00_2629;
																	BgL_obj1608z00_4083 =
																		(BgL_variablez00_bglt) (CAR
																		(BgL_pairz00_4082));
																}
																BgL_typez00_2638 =
																	(((BgL_variablez00_bglt)
																		CREF(BgL_obj1608z00_4083))->BgL_typez00);
															}
															{	/* Ast/unit.scm 759 */
																obj_t BgL_genz00_2639;

																{	/* Ast/unit.scm 760 */
																	obj_t BgL_arg4913z00_2645;

																	obj_t BgL_arg4914z00_2646;

																	BgL_arg4913z00_2645 =
																		CNST_TABLE_REF(((long) 55));
																	{	/* Ast/unit.scm 760 */
																		obj_t BgL_arg4915z00_2647;

																		obj_t BgL_arg4916z00_2648;

																		obj_t BgL_arg4917z00_2649;

																		obj_t BgL_arg4918z00_2650;

																		{	/* Ast/unit.scm 760 */
																			obj_t BgL_arg4924z00_2656;

																			obj_t BgL_arg4925z00_2657;

																			BgL_arg4924z00_2656 =
																				CNST_TABLE_REF(((long) 1));
																			{	/* Ast/unit.scm 760 */
																				obj_t BgL_arg4926z00_2658;

																				{
																					BgL_variablez00_bglt BgL_auxz00_6117;

																					BgL_auxz00_6117 =
																						(BgL_variablez00_bglt)
																						(BgL_genericz00_2636);
																					BgL_arg4926z00_2658 =
																						(((BgL_variablez00_bglt)
																							CREF(BgL_auxz00_6117))->
																						BgL_idz00);
																				}
																				{	/* Ast/unit.scm 760 */
																					obj_t BgL_list4928z00_2660;

																					{	/* Ast/unit.scm 760 */
																						obj_t BgL_arg4929z00_2661;

																						BgL_arg4929z00_2661 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_list4928z00_2660 =
																							MAKE_PAIR(BgL_modulez00_100,
																							BgL_arg4929z00_2661);
																					}
																					BgL_arg4925z00_2657 =
																						BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																						(BgL_arg4926z00_2658,
																						BgL_list4928z00_2660);
																			}}
																			BgL_arg4915z00_2647 =
																				MAKE_PAIR(BgL_arg4924z00_2656,
																				BgL_arg4925z00_2657);
																		}
																		{	/* Ast/unit.scm 761 */
																			obj_t BgL_arg4930z00_2662;

																			obj_t BgL_arg4931z00_2663;

																			BgL_arg4930z00_2662 =
																				CNST_TABLE_REF(((long) 1));
																			{	/* Ast/unit.scm 761 */
																				obj_t BgL_list4932z00_2664;

																				{	/* Ast/unit.scm 761 */
																					obj_t BgL_arg4933z00_2665;

																					BgL_arg4933z00_2665 =
																						MAKE_PAIR(BNIL, BNIL);
																					BgL_list4932z00_2664 =
																						MAKE_PAIR
																						(BGl_za2moduleza2z00zzmodule_modulez00,
																						BgL_arg4933z00_2665);
																				}
																				BgL_arg4931z00_2663 =
																					BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																					(BgL_dnamez00_2633,
																					BgL_list4932z00_2664);
																			}
																			BgL_arg4916z00_2648 =
																				MAKE_PAIR(BgL_arg4930z00_2662,
																				BgL_arg4931z00_2663);
																		}
																		{	/* Ast/unit.scm 762 */
																			bool_t BgL_testz00_6129;

																			{	/* Ast/unit.scm 762 */
																				obj_t BgL_obj3290z00_4085;

																				BgL_obj3290z00_4085 =
																					(obj_t) (BgL_typez00_2638);
																				BgL_testz00_6129 =
																					BGl_iszd2azf3z21zz__objectz00
																					(BgL_obj3290z00_4085,
																					BGl_tclassz00zzobject_classz00);
																			}
																			if (BgL_testz00_6129)
																				{	/* Ast/unit.scm 763 */
																					BgL_tclassz00_bglt
																						BgL_obj3297z00_4086;
																					BgL_obj3297z00_4086 =
																						(BgL_tclassz00_bglt)
																						(BgL_typez00_2638);
																					{	/* Ast/unit.scm 763 */
																						BgL_globalz00_bglt BgL_auxz00_6133;

																						{
																							obj_t BgL_auxz00_6134;

																							{	/* Ast/unit.scm 763 */
																								BgL_objectz00_bglt
																									BgL_auxz00_6135;
																								BgL_auxz00_6135 =
																									(BgL_objectz00_bglt)
																									(BgL_obj3297z00_4086);
																								BgL_auxz00_6134 =
																									BGL_OBJECT_WIDENING
																									(BgL_auxz00_6135);
																							}
																							BgL_auxz00_6133 =
																								(((BgL_tclassz00_bglt)
																									CREF(BgL_auxz00_6134))->
																								BgL_holderz00);
																						}
																						BgL_arg4917z00_2649 =
																							(obj_t) (BgL_auxz00_6133);
																					}
																				}
																			else
																				{	/* Ast/unit.scm 762 */
																					BgL_arg4917z00_2649 = BFALSE;
																				}
																		}
																		{	/* Ast/unit.scm 765 */
																			obj_t BgL_res5058z00_4089;

																			{	/* Ast/unit.scm 765 */
																				obj_t BgL_symbolz00_4087;

																				BgL_symbolz00_4087 = BgL_namez00_2631;
																				{	/* Ast/unit.scm 765 */
																					obj_t BgL_arg2063z00_4088;

																					BgL_arg2063z00_4088 =
																						SYMBOL_TO_STRING
																						(BgL_symbolz00_4087);
																					BgL_res5058z00_4089 =
																						BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																						(BgL_arg2063z00_4088);
																				}
																			}
																			BgL_arg4918z00_2650 = BgL_res5058z00_4089;
																		}
																		{	/* Ast/unit.scm 760 */
																			obj_t BgL_list4920z00_2652;

																			{	/* Ast/unit.scm 760 */
																				obj_t BgL_arg4921z00_2653;

																				{	/* Ast/unit.scm 760 */
																					obj_t BgL_arg4922z00_2654;

																					{	/* Ast/unit.scm 760 */
																						obj_t BgL_arg4923z00_2655;

																						BgL_arg4923z00_2655 =
																							MAKE_PAIR(BNIL, BNIL);
																						BgL_arg4922z00_2654 =
																							MAKE_PAIR(BgL_arg4918z00_2650,
																							BgL_arg4923z00_2655);
																					}
																					BgL_arg4921z00_2653 =
																						MAKE_PAIR(BgL_arg4917z00_2649,
																						BgL_arg4922z00_2654);
																				}
																				BgL_list4920z00_2652 =
																					MAKE_PAIR(BgL_arg4916z00_2648,
																					BgL_arg4921z00_2653);
																			}
																			BgL_arg4914z00_2646 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_arg4915z00_2647,
																				BgL_list4920z00_2652);
																		}
																	}
																	BgL_genz00_2639 =
																		MAKE_PAIR(BgL_arg4913z00_2645,
																		BgL_arg4914z00_2646);
																}
																{	/* Ast/unit.scm 760 */
																	obj_t BgL_sexpza2za2_2640;

																	{	/* Ast/unit.scm 766 */
																		obj_t BgL_arg4911z00_2643;

																		{	/* Ast/unit.scm 766 */
																			obj_t BgL_list4912z00_2644;

																			BgL_list4912z00_2644 =
																				MAKE_PAIR(BgL_defaultz00_2634, BNIL);
																			BgL_arg4911z00_2643 =
																				BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																				(BgL_genz00_2639, BgL_list4912z00_2644);
																		}
																		BgL_sexpza2za2_2640 =
																			MAKE_PAIR(
																			(obj_t) (BgL_genericz00_2636),
																			BgL_arg4911z00_2643);
																	}
																	{	/* Ast/unit.scm 766 */

																		{	/* Ast/unit.scm 767 */
																			bool_t BgL_testz00_6152;

																			if (STRUCTP(BgL_ozd2unitzd2_2637))
																				{	/* Ast/unit.scm 767 */
																					BgL_testz00_6152 =
																						(STRUCT_KEY(BgL_ozd2unitzd2_2637) ==
																						CNST_TABLE_REF(((long) 56)));
																				}
																			else
																				{	/* Ast/unit.scm 767 */
																					BgL_testz00_6152 = ((bool_t) 0);
																				}
																			if (BgL_testz00_6152)
																				{	/* Ast/unit.scm 767 */
																					BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00
																						(BgL_ozd2unitzd2_2637,
																						BgL_sexpza2za2_2640);
																					{	/* Ast/unit.scm 771 */
																						obj_t BgL_list4910z00_2642;

																						BgL_list4910z00_2642 =
																							MAKE_PAIR(BUNSPEC, BNIL);
																						return BgL_list4910z00_2642;
																					}
																				}
																			else
																				{	/* Ast/unit.scm 767 */
																					return BgL_sexpza2za2_2640;
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



/* make-method-definition */
	obj_t BGl_makezd2methodzd2definitionz00zzast_unitz00(obj_t BgL_idz00_105,
		obj_t BgL_argsz00_106, obj_t BgL_bodyz00_107, obj_t BgL_srcz00_108)
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 776 */
			{	/* Ast/unit.scm 777 */
				obj_t BgL_locz00_2700;

				BgL_locz00_2700 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_108);
				{	/* Ast/unit.scm 777 */
					obj_t BgL_localsz00_2701;

					{
						obj_t BgL_argsz00_2710;

						obj_t BgL_resz00_2711;

						BgL_argsz00_2710 = BgL_argsz00_106;
						BgL_resz00_2711 = BNIL;
					BgL_zc3anonymousza34966ze3z83_2712:
						if (NULLP(BgL_argsz00_2710))
							{	/* Ast/unit.scm 781 */
								BgL_localsz00_2701 = bgl_reverse_bang(BgL_resz00_2711);
							}
						else
							{	/* Ast/unit.scm 781 */
								if (PAIRP(BgL_argsz00_2710))
									{	/* Ast/unit.scm 792 */
										obj_t BgL_pidz00_2715;

										BgL_pidz00_2715 =
											BGl_checkzd2idzd2zzast_identz00
											(BGl_parsezd2idzd2zzast_identz00(CAR(BgL_argsz00_2710),
												BgL_locz00_2700), BgL_srcz00_108);
										{	/* Ast/unit.scm 792 */
											obj_t BgL_idz00_2716;

											BgL_idz00_2716 = CAR(BgL_pidz00_2715);
											{	/* Ast/unit.scm 793 */
												obj_t BgL_typez00_2717;

												BgL_typez00_2717 = CDR(BgL_pidz00_2715);
												{	/* Ast/unit.scm 794 */

													{	/* Ast/unit.scm 795 */
														obj_t BgL_arg4969z00_2718;

														obj_t BgL_arg4970z00_2719;

														BgL_arg4969z00_2718 = CDR(BgL_argsz00_2710);
														{	/* Ast/unit.scm 796 */
															BgL_localz00_bglt BgL_arg4971z00_2720;

															BgL_arg4971z00_2720 =
																BGl_makezd2localzd2svarz00zzast_localz00
																(BgL_idz00_2716,
																(BgL_typez00_bglt) (BgL_typez00_2717));
															BgL_arg4970z00_2719 =
																MAKE_PAIR((obj_t) (BgL_arg4971z00_2720),
																BgL_resz00_2711);
														}
														{
															obj_t BgL_resz00_6177;

															obj_t BgL_argsz00_6176;

															BgL_argsz00_6176 = BgL_arg4969z00_2718;
															BgL_resz00_6177 = BgL_arg4970z00_2719;
															BgL_resz00_2711 = BgL_resz00_6177;
															BgL_argsz00_2710 = BgL_argsz00_6176;
															goto BgL_zc3anonymousza34966ze3z83_2712;
														}
													}
												}
											}
										}
									}
								else
									{	/* Ast/unit.scm 784 */
										obj_t BgL_pidz00_2723;

										BgL_pidz00_2723 =
											BGl_checkzd2idzd2zzast_identz00
											(BGl_parsezd2idzd2zzast_identz00(BgL_argsz00_2710,
												BgL_locz00_2700), BgL_srcz00_108);
										{	/* Ast/unit.scm 784 */
											obj_t BgL_idz00_2724;

											BgL_idz00_2724 = CAR(BgL_pidz00_2723);
											{	/* Ast/unit.scm 785 */
												obj_t BgL_typez00_2725;

												BgL_typez00_2725 = CDR(BgL_pidz00_2723);
												{	/* Ast/unit.scm 786 */

													{	/* Ast/unit.scm 790 */
														obj_t BgL_arg4974z00_2726;

														{	/* Ast/unit.scm 790 */
															BgL_localz00_bglt BgL_arg4975z00_2727;

															BgL_arg4975z00_2727 =
																BGl_makezd2localzd2svarz00zzast_localz00
																(BgL_idz00_2724,
																(BgL_typez00_bglt) (BgL_typez00_2725));
															BgL_arg4974z00_2726 =
																MAKE_PAIR((obj_t) (BgL_arg4975z00_2727),
																BgL_resz00_2711);
														}
														BgL_localsz00_2701 =
															bgl_reverse_bang(BgL_arg4974z00_2726);
													}
												}
											}
										}
									}
							}
					}
					{	/* Ast/unit.scm 778 */

						if (BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2
							(BgL_idz00_105, BgL_argsz00_106, BgL_localsz00_2701,
								BgL_srcz00_108))
							{	/* Ast/unit.scm 799 */
								obj_t BgL_ozd2unitzd2_2703;

								obj_t BgL_sexpza2za2_2704;

								BgL_ozd2unitzd2_2703 =
									BGl_getzd2methodzd2unitz00zzmodule_classz00();
								BgL_sexpza2za2_2704 =
									BGl_makezd2methodzd2bodyz00zzobject_methodz00(BgL_idz00_105,
									BgL_argsz00_106, BgL_localsz00_2701, BgL_bodyz00_107,
									BgL_srcz00_108);
								{	/* Ast/unit.scm 801 */
									bool_t BgL_testz00_6191;

									if (STRUCTP(BgL_ozd2unitzd2_2703))
										{	/* Ast/unit.scm 801 */
											BgL_testz00_6191 =
												(STRUCT_KEY(BgL_ozd2unitzd2_2703) ==
												CNST_TABLE_REF(((long) 56)));
										}
									else
										{	/* Ast/unit.scm 801 */
											BgL_testz00_6191 = ((bool_t) 0);
										}
									if (BgL_testz00_6191)
										{	/* Ast/unit.scm 801 */
											BGl_unitzd2sexpza2zd2addz12zb0zzast_unitz00
												(BgL_ozd2unitzd2_2703, BgL_sexpza2za2_2704);
											{	/* Ast/unit.scm 805 */
												obj_t BgL_list4964z00_2706;

												BgL_list4964z00_2706 = MAKE_PAIR(BUNSPEC, BNIL);
												return BgL_list4964z00_2706;
											}
										}
									else
										{	/* Ast/unit.scm 801 */
											return BgL_sexpza2za2_2704;
										}
								}
							}
						else
							{	/* Ast/unit.scm 798 */
								obj_t BgL_list4965z00_2707;

								BgL_list4965z00_2707 = MAKE_PAIR(BUNSPEC, BNIL);
								return BgL_list4965z00_2707;
							}
					}
				}
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 21 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 21 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_unitz00()
	{
		AN_OBJECT;
		{	/* Ast/unit.scm 21 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 356303425),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(((long) 189731515),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 499216671),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 80496154),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzast_letz00(((long) 352861756),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzobject_genericz00(((long) 100381775),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzobject_methodz00(((long) 417755542),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 320731191),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 315910987),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 399603825),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 315398661),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 468691571),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 328872856),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
			return
				BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string5079z00zzast_unitz00));
		}
	}

#ifdef __cplusplus
}
#endif
