/*===========================================================================*/
/*   (Module/impuse.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/impuse.scm)*/
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

	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_importz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_modulez00;
		long BgL_numberz00;
		obj_t BgL_modez00;
		obj_t BgL_varsz00;
		obj_t BgL_checksumz00;
		obj_t BgL_locz00;
		obj_t BgL_srcz00;
		obj_t BgL_declz00;
		obj_t BgL_providez00;
		obj_t BgL_codez00;
		obj_t BgL_accessz00;
	}                *BgL_importz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	static obj_t BGl_readzd2importz12zc0zzmodule_impusez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2importzd2compilerz00zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl__makezd2fromzd2compilerz00zzmodule_impusez00(obj_t);
	static obj_t BGl__importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__importzf3zf3zzmodule_impusez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	extern obj_t BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00();
	static obj_t BGl_z52thezd2importzd2nilz52zzmodule_impusez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
	static obj_t BGl__z52allocatezd2importz80zzmodule_impusez00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readerzd2resetz12zc0zz__readerz00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	static obj_t BGl_toplevelzd2initzd2zzmodule_impusez00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	extern obj_t BGl_parsezd2prototypezd2zzmodule_prototypez00(obj_t);
	static obj_t BGl__importzd2withzd2modulez12z12zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importzd2allzd2modulez00zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_modulezd2addzd2accessz12z12zz__modulez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_IMPORT obj_t BGl_hashtablezd2ze3listz31zz__hashz00(obj_t);
	static obj_t BGl_objectzd2ze3structzd2impor2645ze3zzmodule_impusez00(obj_t,
		obj_t);
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	static obj_t BGl__impusezd2producerzd2zzmodule_impusez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	static BgL_importz00_bglt BGl_importzd2nilzd2zzmodule_impusez00();
	static obj_t BGl_importz00zzmodule_impusez00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	static obj_t BGl_impusezd2finaliza7erz75zzmodule_impusez00();
	static obj_t BGl_importzd2finaliza7erz75zzmodule_impusez00();
	BGL_EXPORTED_DECL obj_t BGl_makezd2usezd2compilerz00zzmodule_impusez00();
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern BgL_ccompz00_bglt BGl_makezd2ccompzd2zzmodule_modulez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3exitza32918ze3z83zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_impusez00();
	extern obj_t
		BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00();
	static obj_t BGl_impusezd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t);
	static obj_t BGl_importzd2modulez12zc0zzmodule_impusez00(obj_t);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t
		BGl_registerzd2importz12zc0zzmodule_impusez00(BgL_importz00_bglt);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl__initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_impusez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza32666ze3z83zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl__makezd2usezd2compilerz00zzmodule_impusez00(obj_t);
	static obj_t BGl_zc3anonymousza32667ze3z83zzmodule_impusez00(obj_t);
	static obj_t BGl__makezd2importzd2compilerz00zzmodule_impusez00(obj_t);
	static obj_t BGl_zc3anonymousza32670ze3z83zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_importzd2wantedzd2zzmodule_impusez00(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_impusez00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_zc3anonymousza32674ze3z83zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza32675ze3z83zzmodule_impusez00(obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_importzd21zd2modulez00zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl__getzd2importedzd2modulesz00zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern obj_t BGl_typez00zztype_typez00;
	static long BGl_za2importzd2numberza2zd2zzmodule_impusez00;
	extern obj_t BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00;
	extern obj_t BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00();
	extern obj_t BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00 =
		BUNSPEC;
	static obj_t BGl__impusezd2finaliza7erz75zzmodule_impusez00(obj_t);
	extern obj_t BGl_za2modulezd2clauseza2zd2zzmodule_modulez00;
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_impusez00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec2647z83zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_comptimezd2expandzf2errorz20zzexpand_epsz00(obj_t);
	static obj_t BGl__importzd2nilzd2zzmodule_impusez00(obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	extern obj_t BGl_compilerzd2readzd2zzread_readerz00(obj_t);
	BGL_IMPORT obj_t BGl_valzd2fromzd2exitzf3zf3zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_importzd2withzd2modulez12z12zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_impusezd2producerzd2zzmodule_impusez00(obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00;
	static obj_t BGl_tracezd2initializa7ezd2moduleza7zzmodule_impusez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_initializa7ezd2modulez75zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32751ze3z83zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_consumezd2modulez12zc0zzmodule_modulez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	extern obj_t BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_za2importsza2z00zzmodule_impusez00 = BUNSPEC;
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza32767ze3z83zzmodule_impusez00(obj_t, obj_t);
	static obj_t BGl_importzd2everythingzd2zzmodule_impusez00(obj_t);
	static obj_t BGl_zc3anonymousza32772ze3z83zzmodule_impusez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_impusez00();
	extern obj_t BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t);
	BGL_IMPORT obj_t BGl_za2loadzd2pathza2zd2zz__evalz00;
	static obj_t BGl_importedzd2moduleszd2unitz00zzmodule_impusez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_impusez00();
	extern long BGl_modulezd2checksumzd2zzmodule_checksumz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	extern obj_t BGl_inlinezd2finaliza7erz75zzread_inlinez00();
	static obj_t __cnst[31];


	extern obj_t BGl_modulezd2initializa7ationzd2idzd2envz75zzmodule_modulez00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_importzf3zd2envz21zzmodule_impusez00,
		BgL_bgl__importza7f3za7f3za7za7m3151z00,
		BGl__importzf3zf3zzmodule_impusez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2importedzd2moduleszd2envzd2zzmodule_impusez00,
		BgL_bgl__getza7d2importedza73152z00,
		BGl__getzd2importedzd2modulesz00zzmodule_impusez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2fromzd2compilerzd2envzd2zzmodule_impusez00,
		BgL_bgl__makeza7d2fromza7d2c3153z00,
		BGl__makezd2fromzd2compilerz00zzmodule_impusez00, 0L, BUNSPEC, 0);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_z52allocatezd2importzd2envz52zzmodule_impusez00,
		BgL_bgl__za752allocateza7d2i3154z00,
		BGl__z52allocatezd2importz80zzmodule_impusez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2usezd2compilerzd2envzd2zzmodule_impusez00,
		BgL_bgl__makeza7d2useza7d2co3155z00,
		BGl__makezd2usezd2compilerz00zzmodule_impusez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_importzd2parserzd2envz00zzmodule_impusez00,
		BgL_bgl__importza7d2parser3156za7, va_generic_entry,
		BGl__importzd2parserzd2zzmodule_impusez00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_importzd2withzd2modulez12zd2envzc0zzmodule_impusez00,
		BgL_bgl__importza7d2withza7d3157z00,
		BGl__importzd2withzd2modulez12z12zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3120z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323158z00,
		BGl_zc3anonymousza32666ze3z83zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3119z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323159z00,
		BGl_zc3anonymousza32667ze3z83zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3121z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323160z00,
		BGl_zc3anonymousza32670ze3z83zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3122z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323161z00,
		BGl_zc3anonymousza32675ze3z83zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3123z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323162z00,
		BGl_zc3anonymousza32674ze3z83zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3128z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323163z00,
		BGl_zc3anonymousza32751ze3z83zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3130z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323164z00,
		BGl_zc3anonymousza32767ze3z83zzmodule_impusez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3129z00zzmodule_impusez00,
		BgL_bgl_za7c3anonymousza7a323165z00,
		BGl_zc3anonymousza32772ze3z83zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3141z00zzmodule_impusez00,
		BgL_bgl_objectza7d2za7e3stru3166z00,
		BGl_objectzd2ze3structzd2impor2645ze3zzmodule_impusez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3143z00zzmodule_impusez00,
		BgL_bgl_structza7b2objectza73167z00,
		BGl_structzb2objectzd2ze3objec2647z83zzmodule_impusez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3124z00zzmodule_impusez00,
		BgL_bgl_string3124za700za7za7m3168za7, "Illegal `~a' clause", 19);
	      DEFINE_STRING(BGl_string3125z00zzmodule_impusez00,
		BgL_bgl_string3125za700za7za7m3169za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string3126z00zzmodule_impusez00,
		BgL_bgl_string3126za700za7za7m3170za7, "Illegal ~a clause", 17);
	      DEFINE_STRING(BGl_string3127z00zzmodule_impusez00,
		BgL_bgl_string3127za700za7za7m3171za7, ".", 1);
	      DEFINE_STRING(BGl_string3131z00zzmodule_impusez00,
		BgL_bgl_string3131za700za7za7m3172za7,
		"bgl_init_module_debug_import(\"~a\", \"~a\")", 40);
	      DEFINE_STRING(BGl_string3132z00zzmodule_impusez00,
		BgL_bgl_string3132za700za7za7m3173za7, "Illegal prototype", 17);
	      DEFINE_STRING(BGl_string3133z00zzmodule_impusez00,
		BgL_bgl_string3133za700za7za7m3174za7,
		"Cannot open source file for module \"~a\"", 39);
	      DEFINE_STRING(BGl_string3134z00zzmodule_impusez00,
		BgL_bgl_string3134za700za7za7m3175za7, "Cannot find module", 18);
	      DEFINE_STRING(BGl_string3135z00zzmodule_impusez00,
		BgL_bgl_string3135za700za7za7m3176za7, "used", 4);
	      DEFINE_STRING(BGl_string3136z00zzmodule_impusez00,
		BgL_bgl_string3136za700za7za7m3177za7, "imported", 8);
	      DEFINE_STRING(BGl_string3137z00zzmodule_impusez00,
		BgL_bgl_string3137za700za7za7m3178za7, "]", 1);
	      DEFINE_STRING(BGl_string3138z00zzmodule_impusez00,
		BgL_bgl_string3138za700za7za7m3179za7, " module ", 8);
	      DEFINE_STRING(BGl_string3140z00zzmodule_impusez00,
		BgL_bgl_string3140za700za7za7m3180za7,
		"Can't find export for these identifiers", 39);
	      DEFINE_STRING(BGl_string3139z00zzmodule_impusez00,
		BgL_bgl_string3139za700za7za7m3181za7, "      [reading ", 15);
	      DEFINE_STRING(BGl_string3142z00zzmodule_impusez00,
		BgL_bgl_string3142za700za7za7m3182za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string3144z00zzmodule_impusez00,
		BgL_bgl_string3144za700za7za7m3183za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string3145z00zzmodule_impusez00,
		BgL_bgl_string3145za700za7za7m3184za7, "module_impuse", 13);
	      DEFINE_STRING(BGl_string3146z00zzmodule_impusez00,
		BgL_bgl_string3146za700za7za7m3185za7,
		"_ expander syntax macro define-macro wide-class final-class abstract-class class svar sgfun sifun sfun unit imported-modules staged pragma::void @ checksum::long from::string begin module (import with from) error nothing with all from use void import ",
		251);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2importzd2compilerzd2envzd2zzmodule_impusez00,
		BgL_bgl__makeza7d2importza7d3186z00,
		BGl__makezd2importzd2compilerz00zzmodule_impusez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_importzd2nilzd2envz00zzmodule_impusez00,
		BgL_bgl__importza7d2nilza7d23187z00, BGl__importzd2nilzd2zzmodule_impusez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_impusezd2finaliza7erzd2envza7zzmodule_impusez00,
		BgL_bgl__impuseza7d2finali3188za7,
		BGl__impusezd2finaliza7erz75zzmodule_impusez00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_impusezd2producerzd2envz00zzmodule_impusez00,
		BgL_bgl__impuseza7d2produc3189za7,
		BGl__impusezd2producerzd2zzmodule_impusez00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_initializa7ezd2importedzd2moduleszd2envz75zzmodule_impusez00,
		BgL_bgl__initializa7a7eza7d23190z00,
		BGl__initializa7ezd2importedzd2modulesza7zzmodule_impusez00, 0L, BUNSPEC,
		1);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long
		BgL_checksumz00_2147, char *BgL_fromz00_2148)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_impusez00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_impusez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmodule_impusez00();
					BGl_cnstzd2initzd2zzmodule_impusez00();
					BGl_importedzd2moduleszd2initz00zzmodule_impusez00();
					BGl_objectzd2initzd2zzmodule_impusez00();
					BGl_methodzd2initzd2zzmodule_impusez00();
					BGl_toplevelzd2initzd2zzmodule_impusez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"module_impuse");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_impuse");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			{	/* Module/impuse.scm 15 */
				obj_t BgL_cportz00_2124;

				BgL_cportz00_2124 =
					bgl_open_input_string(BGl_string3146z00zzmodule_impusez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2125;

					BgL_iz00_2125 = ((long) 30);
				BgL_loopz00_2126:
					if ((BgL_iz00_2125 == ((long) -1)))
						{	/* Module/impuse.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/impuse.scm 15 */
							{	/* Module/impuse.scm 15 */
								obj_t BgL_arg3148z00_2128;

								{	/* Module/impuse.scm 15 */

									{	/* Module/impuse.scm 15 */
										obj_t BgL_locationz00_2130;

										BgL_locationz00_2130 = BBOOL(((bool_t) 0));
										{	/* Module/impuse.scm 15 */

											BgL_arg3148z00_2128 =
												BGl_readz00zz__readerz00(BgL_cportz00_2124,
												BgL_locationz00_2130);
										}
									}
								}
								{	/* Module/impuse.scm 15 */
									int BgL_auxz00_2177;

									BgL_auxz00_2177 = (int) (BgL_iz00_2125);
									CNST_TABLE_SET(BgL_auxz00_2177, BgL_arg3148z00_2128);
							}}
							{	/* Module/impuse.scm 15 */
								int BgL_auxz00_2131;

								BgL_auxz00_2131 = (int) ((BgL_iz00_2125 - ((long) 1)));
								{
									long BgL_iz00_2182;

									BgL_iz00_2182 = (long) (BgL_auxz00_2131);
									BgL_iz00_2125 = BgL_iz00_2182;
									goto BgL_loopz00_2126;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			BGl_za2importsza2z00zzmodule_impusez00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL);
			BGl_za2importzd2numberza2zd2zzmodule_impusez00 = ((long) 0);
			return (BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00 =
				BNIL, BUNSPEC);
		}
	}



/* make-import-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2importzd2compilerz00zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 67 */
			{	/* Module/impuse.scm 69 */
				obj_t BgL_arg2663z00_627;

				BgL_arg2663z00_627 = CNST_TABLE_REF(((long) 0));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2663z00_627,
						BGl_impusezd2producerzd2envz00zzmodule_impusez00,
						BGl_proc3120z00zzmodule_impusez00,
						BGl_proc3119z00zzmodule_impusez00));
			}
		}
	}



/* _make-import-compiler */
	obj_t BGl__makezd2importzd2compilerz00zzmodule_impusez00(obj_t
		BgL_envz00_2059)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 67 */
			return BGl_makezd2importzd2compilerz00zzmodule_impusez00();
		}
	}



/* <anonymous:2667> */
	obj_t BGl_zc3anonymousza32667ze3z83zzmodule_impusez00(obj_t BgL_envz00_2060)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 1));
		}}
	}



/* <anonymous:2666> */
	obj_t BGl_zc3anonymousza32666ze3z83zzmodule_impusez00(obj_t BgL_envz00_2061,
		obj_t BgL_mz00_2062, obj_t BgL_cz00_2063)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* make-use-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2usezd2compilerz00zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 75 */
			{	/* Module/impuse.scm 77 */
				obj_t BgL_arg2668z00_636;

				BgL_arg2668z00_636 = CNST_TABLE_REF(((long) 2));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2668z00_636,
						BGl_impusezd2producerzd2envz00zzmodule_impusez00,
						BGl_proc3121z00zzmodule_impusez00,
						BGl_impusezd2finaliza7erzd2envza7zzmodule_impusez00));
			}
		}
	}



/* _make-use-compiler */
	obj_t BGl__makezd2usezd2compilerz00zzmodule_impusez00(obj_t BgL_envz00_2067)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 75 */
			return BGl_makezd2usezd2compilerz00zzmodule_impusez00();
		}
	}



/* <anonymous:2670> */
	obj_t BGl_zc3anonymousza32670ze3z83zzmodule_impusez00(obj_t BgL_envz00_2068,
		obj_t BgL_mz00_2069, obj_t BgL_cz00_2070)
	{
		AN_OBJECT;
		{	/* Module/module.scm 52 */
			return BNIL;
		}
	}



/* make-from-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2fromzd2compilerz00zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 84 */
			{	/* Module/impuse.scm 86 */
				obj_t BgL_arg2671z00_642;

				BgL_arg2671z00_642 = CNST_TABLE_REF(((long) 3));
				return
					(obj_t) (BGl_makezd2ccompzd2zzmodule_modulez00(BgL_arg2671z00_642,
						BGl_impusezd2producerzd2envz00zzmodule_impusez00,
						BGl_proc3123z00zzmodule_impusez00,
						BGl_proc3122z00zzmodule_impusez00));
			}
		}
	}



/* _make-from-compiler */
	obj_t BGl__makezd2fromzd2compilerz00zzmodule_impusez00(obj_t BgL_envz00_2074)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 84 */
			return BGl_makezd2fromzd2compilerz00zzmodule_impusez00();
		}
	}



/* <anonymous:2675> */
	obj_t BGl_zc3anonymousza32675ze3z83zzmodule_impusez00(obj_t BgL_envz00_2075)
	{
		AN_OBJECT;
		{	/* Module/module.scm 54 */
			{

				return CNST_TABLE_REF(((long) 1));
		}}
	}



/* <anonymous:2674> */
	obj_t BGl_zc3anonymousza32674ze3z83zzmodule_impusez00(obj_t BgL_envz00_2076,
		obj_t BgL_modulez00_2077, obj_t BgL_clausez00_2078)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 88 */
			{	/* Module/impuse.scm 89 */
				obj_t BgL_res3149z00_2138;

				BGl_impusezd2producerzd2zzmodule_impusez00(BgL_clausez00_2078);
				BgL_res3149z00_2138 = BNIL;
				return BgL_res3149z00_2138;
			}
		}
	}



/* register-import! */
	obj_t BGl_registerzd2importz12zc0zzmodule_impusez00(BgL_importz00_bglt
		BgL_importz00_23)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 101 */
			BGl_za2importzd2numberza2zd2zzmodule_impusez00 =
				(((long) 1) + BGl_za2importzd2numberza2zd2zzmodule_impusez00);
			((((BgL_importz00_bglt) CREF(BgL_importz00_23))->BgL_numberz00) =
				((long) BGl_za2importzd2numberza2zd2zzmodule_impusez00), BUNSPEC);
			{	/* Module/impuse.scm 104 */
				obj_t BgL_arg2676z00_651;

				BgL_arg2676z00_651 =
					(((BgL_importz00_bglt) CREF(BgL_importz00_23))->BgL_modulez00);
				return
					BGl_hashtablezd2putz12zc0zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_arg2676z00_651,
					(obj_t) (BgL_importz00_23));
			}
		}
	}



/* impuse-producer */
	obj_t BGl_impusezd2producerzd2zzmodule_impusez00(obj_t BgL_clausez00_24)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 109 */
			{	/* Module/impuse.scm 110 */
				obj_t BgL_modez00_652;

				BgL_modez00_652 = CAR(BgL_clausez00_24);
				{
					obj_t BgL_protosz00_653;

					if (PAIRP(BgL_clausez00_24))
						{	/* Module/impuse.scm 111 */
							obj_t BgL_arg2678z00_658;

							BgL_arg2678z00_658 = CDR(BgL_clausez00_24);
							{	/* Module/impuse.scm 111 */
								bool_t BgL_auxz00_2209;

								BgL_protosz00_653 = BgL_arg2678z00_658;
								{
									obj_t BgL_l2601z00_660;

									BgL_l2601z00_660 = BgL_protosz00_653;
								BgL_zc3anonymousza32679ze3z83_661:
									if (PAIRP(BgL_l2601z00_660))
										{	/* Module/impuse.scm 113 */
											BGl_impusezd2parserzd2zzmodule_impusez00(CAR
												(BgL_l2601z00_660), BgL_modez00_652, BgL_clausez00_24);
											{
												obj_t BgL_l2601z00_2214;

												BgL_l2601z00_2214 = CDR(BgL_l2601z00_660);
												BgL_l2601z00_660 = BgL_l2601z00_2214;
												goto BgL_zc3anonymousza32679ze3z83_661;
											}
										}
									else
										{	/* Module/impuse.scm 113 */
											BgL_auxz00_2209 = ((bool_t) 1);
										}
								}
								return BBOOL(BgL_auxz00_2209);
							}
						}
					else
						{	/* Module/impuse.scm 111 */
							{	/* Module/impuse.scm 115 */
								obj_t BgL_arg2682z00_666;

								obj_t BgL_arg2684z00_668;

								BgL_arg2682z00_666 =
									BGl_findzd2locationzd2zztools_locationz00
									(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
								{	/* Module/impuse.scm 117 */
									obj_t BgL_list2687z00_671;

									BgL_list2687z00_671 = MAKE_PAIR(BgL_modez00_652, BNIL);
									BgL_arg2684z00_668 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string3124z00zzmodule_impusez00, BgL_list2687z00_671);
								}
								{	/* Module/impuse.scm 115 */
									obj_t BgL_list2686z00_670;

									BgL_list2686z00_670 = MAKE_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzf2locationz20zztools_errorz00
										(BgL_arg2682z00_666, BGl_string3125z00zzmodule_impusez00,
										BgL_arg2684z00_668, BgL_clausez00_24, BgL_list2686z00_670);
								}
							}
						}
				}
			}
		}
	}



/* _impuse-producer */
	obj_t BGl__impusezd2producerzd2zzmodule_impusez00(obj_t BgL_envz00_2064,
		obj_t BgL_clausez00_2065)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 109 */
			return BGl_impusezd2producerzd2zzmodule_impusez00(BgL_clausez00_2065);
		}
	}



/* import-all-module */
	obj_t BGl_importzd2allzd2modulez00zzmodule_impusez00(obj_t BgL_modulez00_25,
		obj_t BgL_modez00_26, obj_t BgL_srcz00_27)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 124 */
			{	/* Module/impuse.scm 125 */
				obj_t BgL_miz00_672;

				BgL_miz00_672 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_modulez00_25);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_miz00_672,
						BGl_importz00zzmodule_impusez00))
					{	/* Module/impuse.scm 127 */
						BgL_importz00_bglt BgL_obj2466z00_1471;

						obj_t BgL_val2465z00_1472;

						BgL_obj2466z00_1471 = (BgL_importz00_bglt) (BgL_miz00_672);
						BgL_val2465z00_1472 = CNST_TABLE_REF(((long) 4));
						return
							((((BgL_importz00_bglt) CREF(BgL_obj2466z00_1471))->BgL_varsz00) =
							((obj_t) BgL_val2465z00_1472), BUNSPEC);
					}
				else
					{	/* Module/impuse.scm 128 */
						obj_t BgL_locz00_674;

						BgL_locz00_674 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srcz00_27,
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
						{	/* Module/impuse.scm 130 */
							BgL_importz00_bglt BgL_arg2689z00_675;

							{	/* Module/impuse.scm 130 */
								BgL_importz00_bglt BgL_res3098z00_1514;

								{	/* Module/impuse.scm 130 */
									obj_t BgL_mode2486z00_1475;

									obj_t BgL_vars2487z00_1476;

									BgL_mode2486z00_1475 = BgL_modez00_26;
									BgL_vars2487z00_1476 = CNST_TABLE_REF(((long) 4));
									{	/* Module/impuse.scm 130 */
										BgL_importz00_bglt BgL_new2495z00_1484;

										{	/* Module/impuse.scm 130 */
											BgL_importz00_bglt BgL_res3096z00_1489;

											{	/* Module/impuse.scm 130 */
												BgL_importz00_bglt BgL_new2521z00_1485;

												BgL_new2521z00_1485 =
													((BgL_importz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_importz00_bgl))));
												BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
													(BgL_new2521z00_1485),
													BGl_classzd2numzd2zz__objectz00
													(BGl_importz00zzmodule_impusez00));
												{	/* Module/impuse.scm 130 */
													BgL_objectz00_bglt BgL_auxz00_2236;

													BgL_auxz00_2236 =
														(BgL_objectz00_bglt) (BgL_new2521z00_1485);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_2236, BFALSE);
												}
												BgL_res3096z00_1489 = BgL_new2521z00_1485;
											}
											BgL_new2495z00_1484 = BgL_res3096z00_1489;
										}
										{	/* Module/impuse.scm 130 */
											BgL_importz00_bglt BgL_res3097z00_1513;

											{	/* Module/impuse.scm 130 */
												BgL_importz00_bglt BgL_new2508z00_1490;

												BgL_new2508z00_1490 = BgL_new2495z00_1484;
												{	/* Module/impuse.scm 130 */
													obj_t BgL_module2497z00_1502;

													long BgL_number2498z00_1503;

													obj_t BgL_mode2499z00_1504;

													obj_t BgL_vars2500z00_1505;

													obj_t BgL_checksum2501z00_1506;

													obj_t BgL_loc2502z00_1507;

													obj_t BgL_src2503z00_1508;

													obj_t BgL_decl2504z00_1509;

													obj_t BgL_provide2505z00_1510;

													obj_t BgL_code2506z00_1511;

													obj_t BgL_access2507z00_1512;

													BgL_module2497z00_1502 = BgL_modulez00_25;
													BgL_number2498z00_1503 = ((long) -1);
													BgL_mode2499z00_1504 = BgL_mode2486z00_1475;
													BgL_vars2500z00_1505 = BgL_vars2487z00_1476;
													BgL_checksum2501z00_1506 = BUNSPEC;
													BgL_loc2502z00_1507 = BgL_locz00_674;
													BgL_src2503z00_1508 = BgL_srcz00_27;
													BgL_decl2504z00_1509 = BUNSPEC;
													BgL_provide2505z00_1510 = BNIL;
													BgL_code2506z00_1511 = BUNSPEC;
													BgL_access2507z00_1512 = BNIL;
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_modulez00) =
														((obj_t) BgL_module2497z00_1502), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_numberz00) =
														((long) BgL_number2498z00_1503), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_modez00) =
														((obj_t) BgL_mode2499z00_1504), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_varsz00) =
														((obj_t) BgL_vars2500z00_1505), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_checksumz00) =
														((obj_t) BgL_checksum2501z00_1506), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_locz00) =
														((obj_t) BgL_loc2502z00_1507), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_srcz00) =
														((obj_t) BgL_src2503z00_1508), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_declz00) =
														((obj_t) BgL_decl2504z00_1509), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_providez00) =
														((obj_t) BgL_provide2505z00_1510), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_codez00) =
														((obj_t) BgL_code2506z00_1511), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1490))->
															BgL_accessz00) =
														((obj_t) BgL_access2507z00_1512), BUNSPEC);
													BgL_res3097z00_1513 = BgL_new2508z00_1490;
											}} BgL_res3097z00_1513;
										}
										BgL_res3098z00_1514 = BgL_new2495z00_1484;
								}}
								BgL_arg2689z00_675 = BgL_res3098z00_1514;
							}
							return
								BGl_registerzd2importz12zc0zzmodule_impusez00
								(BgL_arg2689z00_675);
						}
					}
			}
		}
	}



/* import-1-module */
	obj_t BGl_importzd21zd2modulez00zzmodule_impusez00(obj_t BgL_modulez00_28,
		obj_t BgL_varz00_29, obj_t BgL_modez00_30, obj_t BgL_srcz00_31)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 140 */
			{	/* Module/impuse.scm 141 */
				obj_t BgL_miz00_677;

				BgL_miz00_677 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_modulez00_28);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_miz00_677,
						BGl_importz00zzmodule_impusez00))
					{	/* Module/impuse.scm 144 */
						obj_t BgL_casezd2valuezd2_679;

						{
							BgL_importz00_bglt BgL_auxz00_2254;

							BgL_auxz00_2254 = (BgL_importz00_bglt) (BgL_miz00_677);
							BgL_casezd2valuezd2_679 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2254))->BgL_varsz00);
						}
						if ((BgL_casezd2valuezd2_679 == CNST_TABLE_REF(((long) 5))))
							{	/* Module/impuse.scm 144 */
								{
									BgL_importz00_bglt BgL_auxz00_2260;

									BgL_auxz00_2260 = (BgL_importz00_bglt) (BgL_miz00_677);
									((((BgL_importz00_bglt) CREF(BgL_auxz00_2260))->BgL_modez00) =
										((obj_t) BgL_modez00_30), BUNSPEC);
								}
								{	/* Module/impuse.scm 147 */
									obj_t BgL_arg2693z00_681;

									{	/* Module/impuse.scm 147 */
										obj_t BgL_list2694z00_682;

										BgL_list2694z00_682 = MAKE_PAIR(BgL_varz00_29, BNIL);
										BgL_arg2693z00_681 = BgL_list2694z00_682;
									}
									{
										BgL_importz00_bglt BgL_auxz00_2264;

										BgL_auxz00_2264 = (BgL_importz00_bglt) (BgL_miz00_677);
										return
											((((BgL_importz00_bglt) CREF(BgL_auxz00_2264))->
												BgL_varsz00) = ((obj_t) BgL_arg2693z00_681), BUNSPEC);
									}
								}
							}
						else
							{	/* Module/impuse.scm 144 */
								if ((BgL_casezd2valuezd2_679 == CNST_TABLE_REF(((long) 4))))
									{	/* Module/impuse.scm 144 */
										return CNST_TABLE_REF(((long) 6));
									}
								else
									{	/* Module/impuse.scm 151 */
										obj_t BgL_arg2696z00_684;

										BgL_arg2696z00_684 =
											MAKE_PAIR(BgL_varz00_29, BgL_casezd2valuezd2_679);
										{
											BgL_importz00_bglt BgL_auxz00_2272;

											BgL_auxz00_2272 = (BgL_importz00_bglt) (BgL_miz00_677);
											return
												((((BgL_importz00_bglt) CREF(BgL_auxz00_2272))->
													BgL_varsz00) = ((obj_t) BgL_arg2696z00_684), BUNSPEC);
										}
									}
							}
					}
				else
					{	/* Module/impuse.scm 152 */
						obj_t BgL_locz00_686;

						BgL_locz00_686 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srcz00_31,
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
						{	/* Module/impuse.scm 155 */
							BgL_importz00_bglt BgL_arg2698z00_687;

							{	/* Module/impuse.scm 155 */
								obj_t BgL_arg2700z00_689;

								{	/* Module/impuse.scm 158 */
									obj_t BgL_list2703z00_692;

									BgL_list2703z00_692 = MAKE_PAIR(BgL_varz00_29, BNIL);
									BgL_arg2700z00_689 = BgL_list2703z00_692;
								}
								{	/* Module/impuse.scm 155 */
									BgL_importz00_bglt BgL_res3103z00_1573;

									{	/* Module/impuse.scm 155 */
										obj_t BgL_mode2486z00_1534;

										BgL_mode2486z00_1534 = BgL_modez00_30;
										{	/* Module/impuse.scm 155 */
											BgL_importz00_bglt BgL_new2495z00_1543;

											{	/* Module/impuse.scm 155 */
												BgL_importz00_bglt BgL_res3101z00_1548;

												{	/* Module/impuse.scm 155 */
													BgL_importz00_bglt BgL_new2521z00_1544;

													BgL_new2521z00_1544 =
														((BgL_importz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_importz00_bgl))));
													BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
														(BgL_new2521z00_1544),
														BGl_classzd2numzd2zz__objectz00
														(BGl_importz00zzmodule_impusez00));
													{	/* Module/impuse.scm 155 */
														BgL_objectz00_bglt BgL_auxz00_2282;

														BgL_auxz00_2282 =
															(BgL_objectz00_bglt) (BgL_new2521z00_1544);
														BGL_OBJECT_WIDENING_SET(BgL_auxz00_2282, BFALSE);
													}
													BgL_res3101z00_1548 = BgL_new2521z00_1544;
												}
												BgL_new2495z00_1543 = BgL_res3101z00_1548;
											}
											{	/* Module/impuse.scm 155 */
												BgL_importz00_bglt BgL_res3102z00_1572;

												{	/* Module/impuse.scm 155 */
													BgL_importz00_bglt BgL_new2508z00_1549;

													BgL_new2508z00_1549 = BgL_new2495z00_1543;
													{	/* Module/impuse.scm 155 */
														obj_t BgL_module2497z00_1561;

														long BgL_number2498z00_1562;

														obj_t BgL_mode2499z00_1563;

														obj_t BgL_vars2500z00_1564;

														obj_t BgL_checksum2501z00_1565;

														obj_t BgL_loc2502z00_1566;

														obj_t BgL_src2503z00_1567;

														obj_t BgL_decl2504z00_1568;

														obj_t BgL_provide2505z00_1569;

														obj_t BgL_code2506z00_1570;

														obj_t BgL_access2507z00_1571;

														BgL_module2497z00_1561 = BgL_modulez00_28;
														BgL_number2498z00_1562 = ((long) -1);
														BgL_mode2499z00_1563 = BgL_mode2486z00_1534;
														BgL_vars2500z00_1564 = BgL_arg2700z00_689;
														BgL_checksum2501z00_1565 = BUNSPEC;
														BgL_loc2502z00_1566 = BgL_locz00_686;
														BgL_src2503z00_1567 = BgL_srcz00_31;
														BgL_decl2504z00_1568 = BUNSPEC;
														BgL_provide2505z00_1569 = BNIL;
														BgL_code2506z00_1570 = BUNSPEC;
														BgL_access2507z00_1571 = BNIL;
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_modulez00) =
															((obj_t) BgL_module2497z00_1561), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_numberz00) =
															((long) BgL_number2498z00_1562), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_modez00) =
															((obj_t) BgL_mode2499z00_1563), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_varsz00) =
															((obj_t) BgL_vars2500z00_1564), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_checksumz00) =
															((obj_t) BgL_checksum2501z00_1565), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_locz00) =
															((obj_t) BgL_loc2502z00_1566), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_srcz00) =
															((obj_t) BgL_src2503z00_1567), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_declz00) =
															((obj_t) BgL_decl2504z00_1568), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_providez00) =
															((obj_t) BgL_provide2505z00_1569), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_codez00) =
															((obj_t) BgL_code2506z00_1570), BUNSPEC);
														((((BgL_importz00_bglt) CREF(BgL_new2508z00_1549))->
																BgL_accessz00) =
															((obj_t) BgL_access2507z00_1571), BUNSPEC);
														BgL_res3102z00_1572 = BgL_new2508z00_1549;
												}} BgL_res3102z00_1572;
											}
											BgL_res3103z00_1573 = BgL_new2495z00_1543;
									}}
									BgL_arg2698z00_687 = BgL_res3103z00_1573;
							}}
							return
								BGl_registerzd2importz12zc0zzmodule_impusez00
								(BgL_arg2698z00_687);
						}
					}
			}
		}
	}



/* import-with-module! */
	BGL_EXPORTED_DEF obj_t
		BGl_importzd2withzd2modulez12z12zzmodule_impusez00(obj_t BgL_modulez00_32,
		obj_t BgL_srcz00_33)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 165 */
			{	/* Module/impuse.scm 166 */
				obj_t BgL_miz00_694;

				BgL_miz00_694 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00, BgL_modulez00_32);
				if (BGl_iszd2azf3z21zz__objectz00(BgL_miz00_694,
						BGl_importz00zzmodule_impusez00))
					{	/* Module/impuse.scm 167 */
						return BFALSE;
					}
				else
					{	/* Module/impuse.scm 168 */
						obj_t BgL_locz00_696;

						BgL_locz00_696 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srcz00_33,
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00));
						{	/* Module/impuse.scm 170 */
							BgL_importz00_bglt BgL_arg2706z00_697;

							{	/* Module/impuse.scm 170 */
								BgL_importz00_bglt BgL_res3106z00_1616;

								{	/* Module/impuse.scm 170 */
									obj_t BgL_mode2486z00_1577;

									obj_t BgL_checksum2488z00_1579;

									BgL_mode2486z00_1577 = CNST_TABLE_REF(((long) 5));
									BgL_checksum2488z00_1579 = BINT(((long) 0));
									{	/* Module/impuse.scm 170 */
										BgL_importz00_bglt BgL_new2495z00_1586;

										{	/* Module/impuse.scm 170 */
											BgL_importz00_bglt BgL_res3104z00_1591;

											{	/* Module/impuse.scm 170 */
												BgL_importz00_bglt BgL_new2521z00_1587;

												BgL_new2521z00_1587 =
													((BgL_importz00_bglt) BREF(GC_MALLOC(sizeof(struct
																BgL_importz00_bgl))));
												BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
													(BgL_new2521z00_1587),
													BGl_classzd2numzd2zz__objectz00
													(BGl_importz00zzmodule_impusez00));
												{	/* Module/impuse.scm 170 */
													BgL_objectz00_bglt BgL_auxz00_2308;

													BgL_auxz00_2308 =
														(BgL_objectz00_bglt) (BgL_new2521z00_1587);
													BGL_OBJECT_WIDENING_SET(BgL_auxz00_2308, BFALSE);
												}
												BgL_res3104z00_1591 = BgL_new2521z00_1587;
											}
											BgL_new2495z00_1586 = BgL_res3104z00_1591;
										}
										{	/* Module/impuse.scm 170 */
											BgL_importz00_bglt BgL_res3105z00_1615;

											{	/* Module/impuse.scm 170 */
												BgL_importz00_bglt BgL_new2508z00_1592;

												BgL_new2508z00_1592 = BgL_new2495z00_1586;
												{	/* Module/impuse.scm 170 */
													obj_t BgL_module2497z00_1604;

													long BgL_number2498z00_1605;

													obj_t BgL_mode2499z00_1606;

													obj_t BgL_vars2500z00_1607;

													obj_t BgL_checksum2501z00_1608;

													obj_t BgL_loc2502z00_1609;

													obj_t BgL_src2503z00_1610;

													obj_t BgL_decl2504z00_1611;

													obj_t BgL_provide2505z00_1612;

													obj_t BgL_code2506z00_1613;

													obj_t BgL_access2507z00_1614;

													BgL_module2497z00_1604 = BgL_modulez00_32;
													BgL_number2498z00_1605 = ((long) -1);
													BgL_mode2499z00_1606 = BgL_mode2486z00_1577;
													BgL_vars2500z00_1607 = BNIL;
													BgL_checksum2501z00_1608 = BgL_checksum2488z00_1579;
													BgL_loc2502z00_1609 = BgL_locz00_696;
													BgL_src2503z00_1610 = BgL_srcz00_33;
													BgL_decl2504z00_1611 = BUNSPEC;
													BgL_provide2505z00_1612 = BNIL;
													BgL_code2506z00_1613 = BUNSPEC;
													BgL_access2507z00_1614 = BNIL;
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_modulez00) =
														((obj_t) BgL_module2497z00_1604), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_numberz00) =
														((long) BgL_number2498z00_1605), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_modez00) =
														((obj_t) BgL_mode2499z00_1606), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_varsz00) =
														((obj_t) BgL_vars2500z00_1607), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_checksumz00) =
														((obj_t) BgL_checksum2501z00_1608), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_locz00) =
														((obj_t) BgL_loc2502z00_1609), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_srcz00) =
														((obj_t) BgL_src2503z00_1610), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_declz00) =
														((obj_t) BgL_decl2504z00_1611), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_providez00) =
														((obj_t) BgL_provide2505z00_1612), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_codez00) =
														((obj_t) BgL_code2506z00_1613), BUNSPEC);
													((((BgL_importz00_bglt) CREF(BgL_new2508z00_1592))->
															BgL_accessz00) =
														((obj_t) BgL_access2507z00_1614), BUNSPEC);
													BgL_res3105z00_1615 = BgL_new2508z00_1592;
											}} BgL_res3105z00_1615;
										}
										BgL_res3106z00_1616 = BgL_new2495z00_1586;
								}}
								BgL_arg2706z00_697 = BgL_res3106z00_1616;
							}
							return
								BGl_registerzd2importz12zc0zzmodule_impusez00
								(BgL_arg2706z00_697);
						}
					}
			}
		}
	}



/* _import-with-module! */
	obj_t BGl__importzd2withzd2modulez12z12zzmodule_impusez00(obj_t
		BgL_envz00_2079, obj_t BgL_modulez00_2080, obj_t BgL_srcz00_2081)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 165 */
			return
				BGl_importzd2withzd2modulez12z12zzmodule_impusez00(BgL_modulez00_2080,
				BgL_srcz00_2081);
		}
	}



/* impuse-parser */
	obj_t BGl_impusezd2parserzd2zzmodule_impusez00(obj_t BgL_prototypez00_34,
		obj_t BgL_modez00_35, obj_t BgL_importzd2srczd2_36)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 186 */
			{

				if (SYMBOLP(BgL_prototypez00_34))
					{	/* Module/impuse.scm 194 */
						return
							BGl_importzd2allzd2modulez00zzmodule_impusez00
							(BgL_prototypez00_34, BgL_modez00_35, BgL_importzd2srczd2_36);
					}
				else
					{	/* Module/impuse.scm 194 */
						if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
							(BgL_prototypez00_34))
							{	/* Module/impuse.scm 198 */
								obj_t BgL_invz00_702;

								BgL_invz00_702 = bgl_reverse(BgL_prototypez00_34);
								{
									obj_t BgL_lstz00_705;

									obj_t BgL_filesz00_706;

									BgL_lstz00_705 = BgL_invz00_702;
									BgL_filesz00_706 = BNIL;
								BgL_zc3anonymousza32710ze3z83_707:
									if (PAIRP(BgL_lstz00_705))
										{	/* Module/impuse.scm 204 */
											bool_t BgL_testz00_2332;

											{	/* Module/impuse.scm 204 */
												obj_t BgL_auxz00_2333;

												BgL_auxz00_2333 = CAR(BgL_lstz00_705);
												BgL_testz00_2332 = STRINGP(BgL_auxz00_2333);
											}
											if (BgL_testz00_2332)
												{	/* Module/impuse.scm 205 */
													obj_t BgL_arg2713z00_710;

													obj_t BgL_arg2714z00_711;

													BgL_arg2713z00_710 = CDR(BgL_lstz00_705);
													BgL_arg2714z00_711 =
														MAKE_PAIR(CAR(BgL_lstz00_705), BgL_filesz00_706);
													{
														obj_t BgL_filesz00_2340;

														obj_t BgL_lstz00_2339;

														BgL_lstz00_2339 = BgL_arg2713z00_710;
														BgL_filesz00_2340 = BgL_arg2714z00_711;
														BgL_filesz00_706 = BgL_filesz00_2340;
														BgL_lstz00_705 = BgL_lstz00_2339;
														goto BgL_zc3anonymousza32710ze3z83_707;
													}
												}
											else
												{	/* Module/impuse.scm 206 */
													bool_t BgL_testz00_2341;

													{	/* Module/impuse.scm 206 */
														obj_t BgL_auxz00_2342;

														BgL_auxz00_2342 = CAR(BgL_lstz00_705);
														BgL_testz00_2341 = SYMBOLP(BgL_auxz00_2342);
													}
													if (BgL_testz00_2341)
														{	/* Module/impuse.scm 207 */
															obj_t BgL_modz00_714;

															obj_t BgL_varsz00_715;

															BgL_modz00_714 = CAR(BgL_lstz00_705);
															BgL_varsz00_715 = CDR(BgL_lstz00_705);
															if (NULLP(BgL_varsz00_715))
																{	/* Module/impuse.scm 210 */
																	if (PAIRP(BgL_filesz00_706))
																		{	/* Module/impuse.scm 212 */
																			BGl_modulezd2addzd2accessz12z12zz__modulez00
																				(BgL_modz00_714, BgL_filesz00_706,
																				BGl_string3127z00zzmodule_impusez00);
																		}
																	else
																		{	/* Module/impuse.scm 212 */
																			BFALSE;
																		}
																	return
																		BGl_importzd2allzd2modulez00zzmodule_impusez00
																		(BgL_modz00_714, BgL_modez00_35,
																		BgL_prototypez00_34);
																}
															else
																{	/* Module/impuse.scm 214 */
																	bool_t BgL_testz00_2353;

																	{
																		obj_t BgL_l2603z00_728;

																		BgL_l2603z00_728 = BgL_varsz00_715;
																	BgL_zc3anonymousza32725ze3z83_729:
																		if (NULLP(BgL_l2603z00_728))
																			{	/* Module/impuse.scm 214 */
																				BgL_testz00_2353 = ((bool_t) 1);
																			}
																		else
																			{	/* Module/impuse.scm 214 */
																				bool_t BgL_testz00_2356;

																				{	/* Module/impuse.scm 214 */
																					obj_t BgL_auxz00_2357;

																					BgL_auxz00_2357 =
																						CAR(BgL_l2603z00_728);
																					BgL_testz00_2356 =
																						SYMBOLP(BgL_auxz00_2357);
																				}
																				if (BgL_testz00_2356)
																					{
																						obj_t BgL_l2603z00_2360;

																						BgL_l2603z00_2360 =
																							CDR(BgL_l2603z00_728);
																						BgL_l2603z00_728 =
																							BgL_l2603z00_2360;
																						goto
																							BgL_zc3anonymousza32725ze3z83_729;
																					}
																				else
																					{	/* Module/impuse.scm 214 */
																						BgL_testz00_2353 = ((bool_t) 0);
																					}
																			}
																	}
																	if (BgL_testz00_2353)
																		{	/* Module/impuse.scm 214 */
																			if (PAIRP(BgL_filesz00_706))
																				{	/* Module/impuse.scm 216 */
																					BGl_modulezd2addzd2accessz12z12zz__modulez00
																						(BgL_modz00_714, BgL_filesz00_706,
																						BGl_string3127z00zzmodule_impusez00);
																				}
																			else
																				{	/* Module/impuse.scm 216 */
																					BFALSE;
																				}
																			{
																				obj_t BgL_l2605z00_721;

																				{	/* Module/impuse.scm 217 */
																					bool_t BgL_auxz00_2365;

																					BgL_l2605z00_721 = BgL_varsz00_715;
																				BgL_zc3anonymousza32722ze3z83_722:
																					if (PAIRP(BgL_l2605z00_721))
																						{	/* Module/impuse.scm 217 */
																							BGl_importzd21zd2modulez00zzmodule_impusez00
																								(BgL_modz00_714,
																								CAR(BgL_l2605z00_721),
																								BgL_modez00_35,
																								BgL_prototypez00_34);
																							{
																								obj_t BgL_l2605z00_2370;

																								BgL_l2605z00_2370 =
																									CDR(BgL_l2605z00_721);
																								BgL_l2605z00_721 =
																									BgL_l2605z00_2370;
																								goto
																									BgL_zc3anonymousza32722ze3z83_722;
																							}
																						}
																					else
																						{	/* Module/impuse.scm 217 */
																							BgL_auxz00_2365 = ((bool_t) 1);
																						}
																					return BBOOL(BgL_auxz00_2365);
																				}
																			}
																		}
																	else
																		{	/* Module/impuse.scm 214 */
																		BgL_zc3anonymousza32732ze3z83_738:
																			{	/* Module/impuse.scm 189 */
																				obj_t BgL_arg2734z00_740;

																				{	/* Module/impuse.scm 190 */
																					obj_t BgL_list2737z00_743;

																					BgL_list2737z00_743 =
																						MAKE_PAIR(BgL_modez00_35, BNIL);
																					BgL_arg2734z00_740 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string3126z00zzmodule_impusez00,
																						BgL_list2737z00_743);
																				}
																				{	/* Module/impuse.scm 189 */
																					obj_t BgL_list2736z00_742;

																					BgL_list2736z00_742 =
																						MAKE_PAIR(BNIL, BNIL);
																					return
																						BGl_userzd2errorzd2zztools_errorz00
																						(BGl_string3125z00zzmodule_impusez00,
																						BgL_arg2734z00_740,
																						BgL_prototypez00_34,
																						BgL_list2736z00_742);
																				}
																			}
																		}
																}
														}
													else
														{	/* Module/impuse.scm 206 */
															goto BgL_zc3anonymousza32732ze3z83_738;
														}
												}
										}
									else
										{	/* Module/impuse.scm 202 */
											goto BgL_zc3anonymousza32732ze3z83_738;
										}
								}
							}
						else
							{	/* Module/impuse.scm 197 */
								goto BgL_zc3anonymousza32732ze3z83_738;
							}
					}
			}
		}
	}



/* get-imported-modules */
	BGL_EXPORTED_DEF obj_t BGl_getzd2importedzd2modulesz00zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 230 */
			{	/* Module/impuse.scm 231 */
				obj_t BgL_l2607z00_745;

				BgL_l2607z00_745 =
					BGl_hashtablezd2ze3listz31zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00);
				if (NULLP(BgL_l2607z00_745))
					{	/* Module/impuse.scm 231 */
						return BNIL;
					}
				else
					{	/* Module/impuse.scm 231 */
						obj_t BgL_head2609z00_747;

						{	/* Module/impuse.scm 231 */
							obj_t BgL_arg2746z00_760;

							{	/* Module/impuse.scm 231 */
								BgL_importz00_bglt BgL_obj2457z00_1639;

								{	/* Module/impuse.scm 231 */
									obj_t BgL_pairz00_1638;

									BgL_pairz00_1638 = BgL_l2607z00_745;
									BgL_obj2457z00_1639 =
										(BgL_importz00_bglt) (CAR(BgL_pairz00_1638));
								}
								BgL_arg2746z00_760 =
									(((BgL_importz00_bglt) CREF(BgL_obj2457z00_1639))->
									BgL_modulez00);
							}
							BgL_head2609z00_747 = MAKE_PAIR(BgL_arg2746z00_760, BNIL);
						}
						{	/* Module/impuse.scm 231 */
							obj_t BgL_g2612z00_748;

							BgL_g2612z00_748 = CDR(BgL_l2607z00_745);
							{
								obj_t BgL_l2607z00_750;

								obj_t BgL_tail2610z00_751;

								BgL_l2607z00_750 = BgL_g2612z00_748;
								BgL_tail2610z00_751 = BgL_head2609z00_747;
							BgL_zc3anonymousza32739ze3z83_752:
								if (NULLP(BgL_l2607z00_750))
									{	/* Module/impuse.scm 231 */
										return BgL_head2609z00_747;
									}
								else
									{	/* Module/impuse.scm 231 */
										obj_t BgL_newtail2611z00_754;

										{	/* Module/impuse.scm 231 */
											obj_t BgL_arg2742z00_756;

											{	/* Module/impuse.scm 231 */
												BgL_importz00_bglt BgL_obj2457z00_1645;

												{	/* Module/impuse.scm 231 */
													obj_t BgL_pairz00_1644;

													BgL_pairz00_1644 = BgL_l2607z00_750;
													BgL_obj2457z00_1645 =
														(BgL_importz00_bglt) (CAR(BgL_pairz00_1644));
												}
												BgL_arg2742z00_756 =
													(((BgL_importz00_bglt) CREF(BgL_obj2457z00_1645))->
													BgL_modulez00);
											}
											BgL_newtail2611z00_754 =
												MAKE_PAIR(BgL_arg2742z00_756, BNIL);
										}
										SET_CDR(BgL_tail2610z00_751, BgL_newtail2611z00_754);
										{
											obj_t BgL_tail2610z00_2394;

											obj_t BgL_l2607z00_2392;

											BgL_l2607z00_2392 = CDR(BgL_l2607z00_750);
											BgL_tail2610z00_2394 = BgL_newtail2611z00_754;
											BgL_tail2610z00_751 = BgL_tail2610z00_2394;
											BgL_l2607z00_750 = BgL_l2607z00_2392;
											goto BgL_zc3anonymousza32739ze3z83_752;
										}
									}
							}
						}
					}
			}
		}
	}



/* _get-imported-modules */
	obj_t BGl__getzd2importedzd2modulesz00zzmodule_impusez00(obj_t
		BgL_envz00_2082)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 230 */
			return BGl_getzd2importedzd2modulesz00zzmodule_impusez00();
		}
	}



/* import-finalizer */
	obj_t BGl_importzd2finaliza7erz75zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 242 */
			{
				long BgL_numz00_764;

				BgL_numz00_764 = BGl_za2importzd2numberza2zd2zzmodule_impusez00;
			BgL_zc3anonymousza32749ze3z83_765:
				BGl_hashtablezd2forzd2eachz00zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00,
					BGl_proc3128z00zzmodule_impusez00);
				if ((BGl_za2importzd2numberza2zd2zzmodule_impusez00 > BgL_numz00_764))
					{
						long BgL_numz00_2399;

						BgL_numz00_2399 = BGl_za2importzd2numberza2zd2zzmodule_impusez00;
						BgL_numz00_764 = BgL_numz00_2399;
						goto BgL_zc3anonymousza32749ze3z83_765;
					}
				else
					{	/* Module/impuse.scm 246 */
						((bool_t) 0);
					}
			}
			{	/* Module/impuse.scm 249 */
				obj_t BgL_importsz00_773;

				BgL_importsz00_773 =
					BGl_sortz00zz__r4_vectors_6_8z00(BGl_proc3129z00zzmodule_impusez00,
					BGl_hashtablezd2ze3listz31zz__hashz00
					(BGl_za2importsza2z00zzmodule_impusez00));
				{
					obj_t BgL_l2613z00_775;

					BgL_l2613z00_775 = BgL_importsz00_773;
				BgL_zc3anonymousza32753ze3z83_776:
					if (PAIRP(BgL_l2613z00_775))
						{	/* Module/impuse.scm 253 */
							{	/* Module/impuse.scm 254 */
								obj_t BgL_iz00_778;

								BgL_iz00_778 = CAR(BgL_l2613z00_775);
								{	/* Module/impuse.scm 254 */
									bool_t BgL_testz00_2405;

									{	/* Module/impuse.scm 254 */
										bool_t BgL_testz00_2406;

										{	/* Module/impuse.scm 254 */
											obj_t BgL_auxz00_2407;

											{
												BgL_importz00_bglt BgL_auxz00_2408;

												BgL_auxz00_2408 = (BgL_importz00_bglt) (BgL_iz00_778);
												BgL_auxz00_2407 =
													(((BgL_importz00_bglt) CREF(BgL_auxz00_2408))->
													BgL_modez00);
											}
											BgL_testz00_2406 =
												(BgL_auxz00_2407 == CNST_TABLE_REF(((long) 5)));
										}
										if (BgL_testz00_2406)
											{	/* Module/impuse.scm 254 */
												BgL_testz00_2405 = ((bool_t) 1);
											}
										else
											{	/* Module/impuse.scm 255 */
												obj_t BgL_auxz00_2413;

												{
													BgL_importz00_bglt BgL_auxz00_2414;

													BgL_auxz00_2414 = (BgL_importz00_bglt) (BgL_iz00_778);
													BgL_auxz00_2413 =
														(((BgL_importz00_bglt) CREF(BgL_auxz00_2414))->
														BgL_declz00);
												}
												BgL_testz00_2405 =
													(BgL_auxz00_2413 == CNST_TABLE_REF(((long) 7)));
									}}
									if (BgL_testz00_2405)
										{	/* Module/impuse.scm 254 */
											BFALSE;
										}
									else
										{	/* Module/impuse.scm 254 */
											BGl_importzd2modulez12zc0zzmodule_impusez00(BgL_iz00_778);
										}
								}
							}
							{
								obj_t BgL_l2613z00_2420;

								BgL_l2613z00_2420 = CDR(BgL_l2613z00_775);
								BgL_l2613z00_775 = BgL_l2613z00_2420;
								goto BgL_zc3anonymousza32753ze3z83_776;
							}
						}
					else
						{	/* Module/impuse.scm 253 */
							((bool_t) 1);
						}
				}
				{	/* Module/impuse.scm 259 */
					obj_t BgL_initsz00_787;

					BgL_initsz00_787 =
						BGl_filterz00zz__r4_control_features_6_9z00
						(BGl_proc3130z00zzmodule_impusez00, BgL_importsz00_773);
					if (PAIRP(BgL_initsz00_787))
						{	/* Module/impuse.scm 263 */
							obj_t BgL_arg2764z00_789;

							BgL_arg2764z00_789 =
								BGl_importedzd2moduleszd2unitz00zzmodule_impusez00
								(BgL_initsz00_787);
							{	/* Module/impuse.scm 263 */
								obj_t BgL_list2765z00_790;

								BgL_list2765z00_790 = MAKE_PAIR(BgL_arg2764z00_789, BNIL);
								return BgL_list2765z00_790;
							}
						}
					else
						{	/* Module/impuse.scm 262 */
							return BNIL;
						}
				}
			}
		}
	}



/* <anonymous:2767> */
	obj_t BGl_zc3anonymousza32767ze3z83zzmodule_impusez00(obj_t BgL_envz00_2086,
		obj_t BgL_iz00_2087)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 259 */
			{
				obj_t BgL_iz00_792;

				BgL_iz00_792 = BgL_iz00_2087;
				{	/* Module/impuse.scm 260 */
					obj_t BgL_auxz00_2427;

					{
						BgL_importz00_bglt BgL_auxz00_2428;

						BgL_auxz00_2428 = (BgL_importz00_bglt) (BgL_iz00_792);
						BgL_auxz00_2427 =
							(((BgL_importz00_bglt) CREF(BgL_auxz00_2428))->BgL_modez00);
					}
					return
						BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_2427,
						CNST_TABLE_REF(((long) 8)));
		}}}
	}



/* <anonymous:2772> */
	obj_t BGl_zc3anonymousza32772ze3z83zzmodule_impusez00(obj_t BgL_envz00_2088,
		obj_t BgL_i1z00_2089, obj_t BgL_i2z00_2090)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 249 */
			{
				obj_t BgL_i1z00_799;

				obj_t BgL_i2z00_800;

				{	/* Module/impuse.scm 250 */
					bool_t BgL_auxz00_2433;

					BgL_i1z00_799 = BgL_i1z00_2089;
					BgL_i2z00_800 = BgL_i2z00_2090;
					{	/* Module/impuse.scm 250 */
						long BgL_auxz00_2438;

						long BgL_auxz00_2434;

						{
							BgL_importz00_bglt BgL_auxz00_2439;

							BgL_auxz00_2439 = (BgL_importz00_bglt) (BgL_i2z00_800);
							BgL_auxz00_2438 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2439))->BgL_numberz00);
						}
						{
							BgL_importz00_bglt BgL_auxz00_2435;

							BgL_auxz00_2435 = (BgL_importz00_bglt) (BgL_i1z00_799);
							BgL_auxz00_2434 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2435))->BgL_numberz00);
						}
						BgL_auxz00_2433 = (BgL_auxz00_2434 < BgL_auxz00_2438);
					}
					return BBOOL(BgL_auxz00_2433);
				}
			}
		}
	}



/* <anonymous:2751> */
	obj_t BGl_zc3anonymousza32751ze3z83zzmodule_impusez00(obj_t BgL_envz00_2091,
		obj_t BgL_kz00_2092, obj_t BgL_iz00_2093)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 245 */
			return BGl_readzd2importz12zc0zzmodule_impusez00(BgL_iz00_2093);
		}
	}



/* initialize-imported-modules */
	BGL_EXPORTED_DEF obj_t
		BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t
		BgL_getzd2initzd2_37)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 274 */
			{	/* Module/impuse.scm 289 */
				obj_t BgL_callsz00_807;

				{	/* Module/impuse.scm 289 */
					obj_t BgL_l2615z00_843;

					BgL_l2615z00_843 =
						BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00;
					if (NULLP(BgL_l2615z00_843))
						{	/* Module/impuse.scm 289 */
							BgL_callsz00_807 = BNIL;
						}
					else
						{	/* Module/impuse.scm 289 */
							obj_t BgL_head2617z00_845;

							BgL_head2617z00_845 =
								MAKE_PAIR(BGl_initializa7ezd2modulez75zzmodule_impusez00
								(BgL_getzd2initzd2_37, CAR(BgL_l2615z00_843)), BNIL);
							{	/* Module/impuse.scm 289 */
								obj_t BgL_g2620z00_846;

								BgL_g2620z00_846 = CDR(BgL_l2615z00_843);
								{
									obj_t BgL_l2615z00_848;

									obj_t BgL_tail2618z00_849;

									BgL_l2615z00_848 = BgL_g2620z00_846;
									BgL_tail2618z00_849 = BgL_head2617z00_845;
								BgL_zc3anonymousza32802ze3z83_850:
									if (NULLP(BgL_l2615z00_848))
										{	/* Module/impuse.scm 289 */
											BgL_callsz00_807 = BgL_head2617z00_845;
										}
									else
										{	/* Module/impuse.scm 289 */
											obj_t BgL_newtail2619z00_852;

											BgL_newtail2619z00_852 =
												MAKE_PAIR(BGl_initializa7ezd2modulez75zzmodule_impusez00
												(BgL_getzd2initzd2_37, CAR(BgL_l2615z00_848)), BNIL);
											SET_CDR(BgL_tail2618z00_849, BgL_newtail2619z00_852);
											{
												obj_t BgL_tail2618z00_2459;

												obj_t BgL_l2615z00_2457;

												BgL_l2615z00_2457 = CDR(BgL_l2615z00_848);
												BgL_tail2618z00_2459 = BgL_newtail2619z00_852;
												BgL_tail2618z00_849 = BgL_tail2618z00_2459;
												BgL_l2615z00_848 = BgL_l2615z00_2457;
												goto BgL_zc3anonymousza32802ze3z83_850;
											}
										}
								}
							}
						}
				}
				{	/* Module/impuse.scm 289 */

					{	/* Module/impuse.scm 290 */
						bool_t BgL_testz00_2460;

						if (
							((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
								((long) 0)))
							{	/* Module/impuse.scm 291 */
								obj_t BgL_arg2798z00_840;

								obj_t BgL_arg2799z00_841;

								BgL_arg2798z00_840 = CNST_TABLE_REF(((long) 9));
								{	/* Module/impuse.scm 291 */
									obj_t BgL_arg2800z00_842;

									BgL_arg2800z00_842 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									{
										BgL_backendz00_bglt BgL_auxz00_2466;

										BgL_auxz00_2466 =
											(BgL_backendz00_bglt) (BgL_arg2800z00_842);
										BgL_arg2799z00_841 =
											(((BgL_backendz00_bglt) CREF(BgL_auxz00_2466))->
											BgL_debugzd2supportzd2);
								}}
								BgL_testz00_2460 =
									CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2798z00_840, BgL_arg2799z00_841));
							}
						else
							{	/* Module/impuse.scm 290 */
								BgL_testz00_2460 = ((bool_t) 0);
							}
						if (BgL_testz00_2460)
							{	/* Module/impuse.scm 292 */
								obj_t BgL_arg2776z00_809;

								{	/* Module/impuse.scm 292 */
									obj_t BgL_arg2778z00_811;

									obj_t BgL_arg2779z00_812;

									BgL_arg2778z00_811 = CNST_TABLE_REF(((long) 10));
									{	/* Module/impuse.scm 293 */
										obj_t BgL_arg2780z00_813;

										{	/* Module/impuse.scm 293 */
											obj_t BgL_ll2621z00_815;

											BgL_ll2621z00_815 =
												BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00;
											if (NULLP(BgL_ll2621z00_815))
												{	/* Module/impuse.scm 293 */
													BgL_arg2780z00_813 = BNIL;
												}
											else
												{	/* Module/impuse.scm 293 */
													obj_t BgL_head2623z00_818;

													BgL_head2623z00_818 =
														MAKE_PAIR
														(BGl_tracezd2initializa7ezd2moduleza7zzmodule_impusez00
														(BgL_getzd2initzd2_37, CAR(BgL_ll2621z00_815),
															CAR(BgL_callsz00_807)), BNIL);
													{	/* Module/impuse.scm 293 */
														obj_t BgL_g2627z00_819;

														obj_t BgL_g2628z00_820;

														BgL_g2627z00_819 = CDR(BgL_ll2621z00_815);
														BgL_g2628z00_820 = CDR(BgL_callsz00_807);
														{
															obj_t BgL_ll2621z00_822;

															obj_t BgL_ll2622z00_823;

															obj_t BgL_tail2624z00_824;

															BgL_ll2621z00_822 = BgL_g2627z00_819;
															BgL_ll2622z00_823 = BgL_g2628z00_820;
															BgL_tail2624z00_824 = BgL_head2623z00_818;
														BgL_zc3anonymousza32784ze3z83_825:
															if (NULLP(BgL_ll2621z00_822))
																{	/* Module/impuse.scm 293 */
																	BgL_arg2780z00_813 = BgL_head2623z00_818;
																}
															else
																{	/* Module/impuse.scm 293 */
																	obj_t BgL_newtail2625z00_827;

																	BgL_newtail2625z00_827 =
																		MAKE_PAIR
																		(BGl_tracezd2initializa7ezd2moduleza7zzmodule_impusez00
																		(BgL_getzd2initzd2_37,
																			CAR(BgL_ll2621z00_822),
																			CAR(BgL_ll2622z00_823)), BNIL);
																	SET_CDR(BgL_tail2624z00_824,
																		BgL_newtail2625z00_827);
																	{
																		obj_t BgL_tail2624z00_2491;

																		obj_t BgL_ll2622z00_2489;

																		obj_t BgL_ll2621z00_2487;

																		BgL_ll2621z00_2487 = CDR(BgL_ll2621z00_822);
																		BgL_ll2622z00_2489 = CDR(BgL_ll2622z00_823);
																		BgL_tail2624z00_2491 =
																			BgL_newtail2625z00_827;
																		BgL_tail2624z00_824 = BgL_tail2624z00_2491;
																		BgL_ll2622z00_823 = BgL_ll2622z00_2489;
																		BgL_ll2621z00_822 = BgL_ll2621z00_2487;
																		goto BgL_zc3anonymousza32784ze3z83_825;
																	}
																}
														}
													}
												}
										}
										BgL_arg2779z00_812 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg2780z00_813, BNIL);
									}
									BgL_arg2776z00_809 =
										MAKE_PAIR(BgL_arg2778z00_811, BgL_arg2779z00_812);
								}
								return MAKE_PAIR(BgL_arg2776z00_809, BNIL);
							}
						else
							{	/* Module/impuse.scm 290 */
								return BgL_callsz00_807;
							}
					}
				}
			}
		}
	}



/* initialize-module */
	obj_t BGl_initializa7ezd2modulez75zzmodule_impusez00(obj_t
		BgL_getzd2initzd2_2121, obj_t BgL_importz00_861)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 282 */
			{	/* Module/impuse.scm 277 */
				obj_t BgL_funz00_864;

				{	/* Module/impuse.scm 277 */
					obj_t BgL_arg2833z00_886;

					{
						BgL_importz00_bglt BgL_auxz00_2495;

						BgL_auxz00_2495 = (BgL_importz00_bglt) (BgL_importz00_861);
						BgL_arg2833z00_886 =
							(((BgL_importz00_bglt) CREF(BgL_auxz00_2495))->BgL_modulez00);
					}
					BgL_funz00_864 =
						PROCEDURE_ENTRY(BgL_getzd2initzd2_2121) (BgL_getzd2initzd2_2121,
						BgL_arg2833z00_886, BEOA);
				}
				{	/* Module/impuse.scm 277 */
					obj_t BgL_varz00_865;

					{	/* Module/impuse.scm 278 */
						obj_t BgL_arg2826z00_879;

						obj_t BgL_arg2827z00_880;

						{
							BgL_importz00_bglt BgL_auxz00_2500;

							BgL_auxz00_2500 = (BgL_importz00_bglt) (BgL_importz00_861);
							BgL_arg2826z00_879 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2500))->BgL_modulez00);
						}
						{	/* Module/impuse.scm 278 */
							obj_t BgL_arg2829z00_882;

							{	/* Module/impuse.scm 278 */
								obj_t BgL_list2830z00_883;

								{	/* Module/impuse.scm 278 */
									obj_t BgL_arg2831z00_884;

									obj_t BgL_arg2832z00_885;

									BgL_arg2831z00_884 = CNST_TABLE_REF(((long) 11));
									BgL_arg2832z00_885 = MAKE_PAIR(BNIL, BNIL);
									BgL_list2830z00_883 =
										MAKE_PAIR(BgL_arg2831z00_884, BgL_arg2832z00_885);
								}
								BgL_arg2829z00_882 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
											(long) 12)), BgL_list2830z00_883);
							}
							BgL_arg2827z00_880 =
								MAKE_PAIR(BgL_funz00_864, BgL_arg2829z00_882);
						}
						BgL_varz00_865 =
							BGl_importzd2parserzd2zzmodule_impusez00(BgL_arg2826z00_879,
							BgL_arg2827z00_880, BNIL);
					}
					{	/* Module/impuse.scm 278 */

						{
							BgL_globalz00_bglt BgL_auxz00_2510;

							BgL_auxz00_2510 = (BgL_globalz00_bglt) (BgL_varz00_865);
							((((BgL_globalz00_bglt) CREF(BgL_auxz00_2510))->
									BgL_evaluablezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
						}
						{	/* Module/impuse.scm 282 */
							obj_t BgL_arg2812z00_866;

							obj_t BgL_arg2813z00_867;

							{	/* Module/impuse.scm 282 */
								obj_t BgL_arg2814z00_868;

								obj_t BgL_arg2815z00_869;

								BgL_arg2814z00_868 = CNST_TABLE_REF(((long) 13));
								{	/* Module/impuse.scm 282 */
									obj_t BgL_arg2816z00_870;

									{
										BgL_importz00_bglt BgL_auxz00_2514;

										BgL_auxz00_2514 = (BgL_importz00_bglt) (BgL_importz00_861);
										BgL_arg2816z00_870 =
											(((BgL_importz00_bglt) CREF(BgL_auxz00_2514))->
											BgL_modulez00);
									}
									{	/* Module/impuse.scm 282 */
										obj_t BgL_list2819z00_872;

										{	/* Module/impuse.scm 282 */
											obj_t BgL_arg2820z00_873;

											BgL_arg2820z00_873 = MAKE_PAIR(BNIL, BNIL);
											BgL_list2819z00_872 =
												MAKE_PAIR(BgL_arg2816z00_870, BgL_arg2820z00_873);
										}
										BgL_arg2815z00_869 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_funz00_864, BgL_list2819z00_872);
								}}
								BgL_arg2812z00_866 =
									MAKE_PAIR(BgL_arg2814z00_868, BgL_arg2815z00_869);
							}
							{	/* Module/impuse.scm 282 */
								obj_t BgL_arg2821z00_874;

								obj_t BgL_arg2822z00_875;

								{
									BgL_importz00_bglt BgL_auxz00_2521;

									BgL_auxz00_2521 = (BgL_importz00_bglt) (BgL_importz00_861);
									BgL_arg2821z00_874 =
										(((BgL_importz00_bglt) CREF(BgL_auxz00_2521))->
										BgL_checksumz00);
								}
								{	/* Module/impuse.scm 282 */
									obj_t BgL_res3108z00_1709;

									{	/* Module/impuse.scm 282 */
										obj_t BgL_symbolz00_1707;

										BgL_symbolz00_1707 = BGl_za2moduleza2z00zzmodule_modulez00;
										{	/* Module/impuse.scm 282 */
											obj_t BgL_arg2063z00_1708;

											BgL_arg2063z00_1708 =
												SYMBOL_TO_STRING(BgL_symbolz00_1707);
											BgL_res3108z00_1709 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1708);
									}}
									BgL_arg2822z00_875 = BgL_res3108z00_1709;
								}
								{	/* Module/impuse.scm 282 */
									obj_t BgL_list2824z00_877;

									{	/* Module/impuse.scm 282 */
										obj_t BgL_arg2825z00_878;

										BgL_arg2825z00_878 = MAKE_PAIR(BNIL, BNIL);
										BgL_list2824z00_877 =
											MAKE_PAIR(BgL_arg2822z00_875, BgL_arg2825z00_878);
									}
									BgL_arg2813z00_867 =
										BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg2821z00_874, BgL_list2824z00_877);
							}}
							return MAKE_PAIR(BgL_arg2812z00_866, BgL_arg2813z00_867);
						}
					}
				}
			}
		}
	}



/* trace-initialize-module */
	obj_t BGl_tracezd2initializa7ezd2moduleza7zzmodule_impusez00(obj_t
		BgL_getzd2initzd2_2122, obj_t BgL_importz00_887, obj_t BgL_callz00_888)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 288 */
			{	/* Module/impuse.scm 284 */
				obj_t BgL_arg2835z00_890;

				obj_t BgL_arg2836z00_891;

				BgL_arg2835z00_890 = CNST_TABLE_REF(((long) 10));
				{	/* Module/impuse.scm 285 */
					obj_t BgL_arg2837z00_892;

					{	/* Module/impuse.scm 285 */
						obj_t BgL_arg2842z00_896;

						obj_t BgL_arg2843z00_897;

						BgL_arg2842z00_896 = CNST_TABLE_REF(((long) 14));
						{	/* Module/impuse.scm 285 */
							obj_t BgL_arg2844z00_898;

							{	/* Module/impuse.scm 285 */
								obj_t BgL_arg2848z00_902;

								obj_t BgL_arg2849z00_903;

								{	/* Module/impuse.scm 286 */
									obj_t BgL_arg2852z00_906;

									BgL_arg2852z00_906 =
										PROCEDURE_ENTRY(BgL_getzd2initzd2_2122)
										(BgL_getzd2initzd2_2122,
										BGl_za2moduleza2z00zzmodule_modulez00, BEOA);
									{	/* Module/impuse.scm 286 */
										obj_t BgL_res3109z00_1712;

										{	/* Module/impuse.scm 286 */
											obj_t BgL_symbolz00_1710;

											BgL_symbolz00_1710 = BgL_arg2852z00_906;
											{	/* Module/impuse.scm 286 */
												obj_t BgL_arg2063z00_1711;

												BgL_arg2063z00_1711 =
													SYMBOL_TO_STRING(BgL_symbolz00_1710);
												BgL_res3109z00_1712 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg2063z00_1711);
										}}
										BgL_arg2848z00_902 = BgL_res3109z00_1712;
								}}
								{	/* Module/impuse.scm 287 */
									obj_t BgL_arg2854z00_907;

									{
										BgL_importz00_bglt BgL_auxz00_2536;

										BgL_auxz00_2536 = (BgL_importz00_bglt) (BgL_importz00_887);
										BgL_arg2854z00_907 =
											(((BgL_importz00_bglt) CREF(BgL_auxz00_2536))->
											BgL_modulez00);
									}
									{	/* Module/impuse.scm 287 */
										obj_t BgL_res3110z00_1716;

										{	/* Module/impuse.scm 287 */
											obj_t BgL_arg2063z00_1715;

											BgL_arg2063z00_1715 =
												SYMBOL_TO_STRING(BgL_arg2854z00_907);
											BgL_res3110z00_1716 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg2063z00_1715);
										}
										BgL_arg2849z00_903 = BgL_res3110z00_1716;
								}}
								{	/* Module/impuse.scm 285 */
									obj_t BgL_list2850z00_904;

									{	/* Module/impuse.scm 285 */
										obj_t BgL_arg2851z00_905;

										BgL_arg2851z00_905 = MAKE_PAIR(BgL_arg2849z00_903, BNIL);
										BgL_list2850z00_904 =
											MAKE_PAIR(BgL_arg2848z00_902, BgL_arg2851z00_905);
									}
									BgL_arg2844z00_898 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string3131z00zzmodule_impusez00, BgL_list2850z00_904);
							}}
							{	/* Module/impuse.scm 285 */
								obj_t BgL_list2846z00_900;

								BgL_list2846z00_900 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg2843z00_897 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg2844z00_898, BgL_list2846z00_900);
						}}
						BgL_arg2837z00_892 =
							MAKE_PAIR(BgL_arg2842z00_896, BgL_arg2843z00_897);
					}
					{	/* Module/impuse.scm 284 */
						obj_t BgL_list2839z00_894;

						{	/* Module/impuse.scm 284 */
							obj_t BgL_arg2841z00_895;

							BgL_arg2841z00_895 = MAKE_PAIR(BNIL, BNIL);
							BgL_list2839z00_894 =
								MAKE_PAIR(BgL_callz00_888, BgL_arg2841z00_895);
						}
						BgL_arg2836z00_891 =
							BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_arg2837z00_892,
							BgL_list2839z00_894);
				}}
				return MAKE_PAIR(BgL_arg2835z00_890, BgL_arg2836z00_891);
			}
		}
	}



/* _initialize-imported-modules */
	obj_t BGl__initializa7ezd2importedzd2modulesza7zzmodule_impusez00(obj_t
		BgL_envz00_2094, obj_t BgL_getzd2initzd2_2095)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 274 */
			return
				BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00
				(BgL_getzd2initzd2_2095);
		}
	}



/* imported-modules-unit */
	obj_t BGl_importedzd2moduleszd2unitz00zzmodule_impusez00(obj_t
		BgL_importsz00_38)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 300 */
			BGl_za2importedzd2moduleszd2inzd2unitza2zd2zzmodule_impusez00 =
				BgL_importsz00_38;
			{	/* Module/impuse.scm 302 */
				obj_t BgL_bodyz00_910;

				long BgL_priorityz00_911;

				BgL_bodyz00_910 =
					BGl_initializa7ezd2importedzd2modulesza7zzmodule_impusez00
					(BGl_modulezd2initializa7ationzd2idzd2envz75zzmodule_modulez00);
				if ((BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
						CNST_TABLE_REF(((long) 15))))
					{	/* Module/impuse.scm 303 */
						BgL_priorityz00_911 = ((long) 22);
					}
				else
					{	/* Module/impuse.scm 303 */
						BgL_priorityz00_911 = ((long) 12);
					}
				{	/* Module/impuse.scm 304 */
					obj_t BgL_idz00_1717;

					BgL_idz00_1717 = CNST_TABLE_REF(((long) 16));
					{	/* Module/impuse.scm 304 */
						obj_t BgL_newz00_1722;

						BgL_newz00_1722 =
							create_struct(CNST_TABLE_REF(((long) 17)), (int) (((long) 5)));
						{	/* Module/impuse.scm 304 */
							int BgL_auxz00_2560;

							BgL_auxz00_2560 = (int) (((long) 4));
							STRUCT_SET(BgL_newz00_1722, BgL_auxz00_2560, BFALSE);
						}
						{	/* Module/impuse.scm 304 */
							int BgL_auxz00_2563;

							BgL_auxz00_2563 = (int) (((long) 3));
							STRUCT_SET(BgL_newz00_1722, BgL_auxz00_2563, BTRUE);
						}
						{	/* Module/impuse.scm 304 */
							int BgL_auxz00_2566;

							BgL_auxz00_2566 = (int) (((long) 2));
							STRUCT_SET(BgL_newz00_1722, BgL_auxz00_2566, BgL_bodyz00_910);
						}
						{	/* Module/impuse.scm 304 */
							obj_t BgL_auxz00_2571;

							int BgL_auxz00_2569;

							BgL_auxz00_2571 = BINT(BgL_priorityz00_911);
							BgL_auxz00_2569 = (int) (((long) 1));
							STRUCT_SET(BgL_newz00_1722, BgL_auxz00_2569, BgL_auxz00_2571);
						}
						{	/* Module/impuse.scm 304 */
							int BgL_auxz00_2574;

							BgL_auxz00_2574 = (int) (((long) 0));
							STRUCT_SET(BgL_newz00_1722, BgL_auxz00_2574, BgL_idz00_1717);
						}
						return BgL_newz00_1722;
					}
				}
			}
		}
	}



/* impuse-finalizer */
	obj_t BGl_impusezd2finaliza7erz75zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 313 */
			{	/* Module/impuse.scm 314 */
				obj_t BgL_importsz00_913;

				BgL_importsz00_913 = BGl_importzd2finaliza7erz75zzmodule_impusez00();
				{	/* Module/impuse.scm 314 */
					obj_t BgL_inlinesz00_914;

					BgL_inlinesz00_914 = BGl_inlinezd2finaliza7erz75zzread_inlinez00();
					{	/* Module/impuse.scm 315 */
						obj_t BgL_finaliza7ersza7_915;

						BgL_finaliza7ersza7_915 =
							bgl_append2(BgL_importsz00_913, BgL_inlinesz00_914);
						{	/* Module/impuse.scm 316 */

							if (NULLP(BgL_finaliza7ersza7_915))
								{	/* Module/impuse.scm 317 */
									return CNST_TABLE_REF(((long) 1));
								}
							else
								{	/* Module/impuse.scm 317 */
									return BgL_finaliza7ersza7_915;
								}
						}
					}
				}
			}
		}
	}



/* _impuse-finalizer */
	obj_t BGl__impusezd2finaliza7erz75zzmodule_impusez00(obj_t BgL_envz00_2071)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 313 */
			return BGl_impusezd2finaliza7erz75zzmodule_impusez00();
		}
	}



/* import-parser */
	BGL_EXPORTED_DEF obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t
		BgL_modulez00_39, obj_t BgL_prototypez00_40, obj_t BgL_importzd2srczd2_41)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 324 */
			{	/* Module/impuse.scm 325 */
				obj_t BgL_protoz00_917;

				obj_t BgL_srcz00_918;

				BgL_protoz00_917 =
					BGl_parsezd2prototypezd2zzmodule_prototypez00(BgL_prototypez00_40);
				if (PAIRP(BgL_importzd2srczd2_41))
					{	/* Module/impuse.scm 326 */
						BgL_srcz00_918 = CAR(BgL_importzd2srczd2_41);
					}
				else
					{	/* Module/impuse.scm 326 */
						BgL_srcz00_918 = BFALSE;
					}
				if (PAIRP(BgL_protoz00_917))
					{	/* Module/impuse.scm 335 */
						obj_t BgL_casezd2valuezd2_920;

						BgL_casezd2valuezd2_920 = CAR(BgL_protoz00_917);
						{	/* Module/impuse.scm 335 */
							bool_t BgL_testz00_2591;

							{	/* Module/impuse.scm 335 */
								bool_t BgL__ortest_2582z00_948;

								BgL__ortest_2582z00_948 =
									(BgL_casezd2valuezd2_920 == CNST_TABLE_REF(((long) 18)));
								if (BgL__ortest_2582z00_948)
									{	/* Module/impuse.scm 335 */
										BgL_testz00_2591 = BgL__ortest_2582z00_948;
									}
								else
									{	/* Module/impuse.scm 335 */
										bool_t BgL__ortest_2583z00_949;

										BgL__ortest_2583z00_949 =
											(BgL_casezd2valuezd2_920 == CNST_TABLE_REF(((long) 19)));
										if (BgL__ortest_2583z00_949)
											{	/* Module/impuse.scm 335 */
												BgL_testz00_2591 = BgL__ortest_2583z00_949;
											}
										else
											{	/* Module/impuse.scm 335 */
												BgL_testz00_2591 =
													(BgL_casezd2valuezd2_920 ==
													CNST_TABLE_REF(((long) 20)));
							}}}
							if (BgL_testz00_2591)
								{	/* Module/impuse.scm 337 */
									obj_t BgL_arg2859z00_922;

									obj_t BgL_arg2861z00_923;

									obj_t BgL_arg2862z00_924;

									BgL_arg2859z00_922 = CAR(CDR(BgL_protoz00_917));
									BgL_arg2861z00_923 = CAR(CDR(CDR(BgL_protoz00_917)));
									BgL_arg2862z00_924 = CNST_TABLE_REF(((long) 0));
									return
										(obj_t)
										(BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
										(BgL_arg2859z00_922, BgL_arg2861z00_923, BgL_modulez00_39,
											BgL_arg2862z00_924, BgL_casezd2valuezd2_920,
											BgL_prototypez00_40, BgL_srcz00_918));
								}
							else
								{	/* Module/impuse.scm 335 */
									if ((BgL_casezd2valuezd2_920 == CNST_TABLE_REF(((long) 21))))
										{	/* Module/impuse.scm 345 */
											obj_t BgL_arg2865z00_927;

											obj_t BgL_arg2866z00_928;

											BgL_arg2865z00_927 = CAR(CDR(BgL_protoz00_917));
											BgL_arg2866z00_928 = CNST_TABLE_REF(((long) 0));
											return
												(obj_t)
												(BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
												(BgL_arg2865z00_927, BgL_modulez00_39,
													BgL_arg2866z00_928, BgL_prototypez00_40,
													BgL_srcz00_918));
										}
									else
										{	/* Module/impuse.scm 335 */
											if (
												(BgL_casezd2valuezd2_920 ==
													CNST_TABLE_REF(((long) 22))))
												{	/* Module/impuse.scm 347 */
													obj_t BgL_arg2868z00_930;

													obj_t BgL_arg2869z00_931;

													BgL_arg2868z00_930 = CDR(BgL_protoz00_917);
													BgL_arg2869z00_931 = CNST_TABLE_REF(((long) 0));
													return
														BGl_declarezd2classz12zc0zzmodule_classz00
														(BgL_arg2868z00_930, BgL_modulez00_39,
														BgL_arg2869z00_931, ((bool_t) 0), ((bool_t) 0),
														BgL_prototypez00_40, BgL_srcz00_918);
												}
											else
												{	/* Module/impuse.scm 335 */
													if (
														(BgL_casezd2valuezd2_920 ==
															CNST_TABLE_REF(((long) 23))))
														{	/* Module/impuse.scm 349 */
															obj_t BgL_arg2871z00_933;

															obj_t BgL_arg2872z00_934;

															BgL_arg2871z00_933 = CDR(BgL_protoz00_917);
															BgL_arg2872z00_934 = CNST_TABLE_REF(((long) 0));
															return
																BGl_declarezd2classz12zc0zzmodule_classz00
																(BgL_arg2871z00_933, BgL_modulez00_39,
																BgL_arg2872z00_934, ((bool_t) 0), ((bool_t) 1),
																BgL_prototypez00_40, BgL_srcz00_918);
														}
													else
														{	/* Module/impuse.scm 335 */
															if (
																(BgL_casezd2valuezd2_920 ==
																	CNST_TABLE_REF(((long) 24))))
																{	/* Module/impuse.scm 351 */
																	obj_t BgL_arg2874z00_936;

																	obj_t BgL_arg2875z00_937;

																	BgL_arg2874z00_936 = CDR(BgL_protoz00_917);
																	BgL_arg2875z00_937 =
																		CNST_TABLE_REF(((long) 0));
																	return
																		BGl_declarezd2classz12zc0zzmodule_classz00
																		(BgL_arg2874z00_936, BgL_modulez00_39,
																		BgL_arg2875z00_937, ((bool_t) 1),
																		((bool_t) 0), BgL_prototypez00_40,
																		BgL_srcz00_918);
																}
															else
																{	/* Module/impuse.scm 335 */
																	if (
																		(BgL_casezd2valuezd2_920 ==
																			CNST_TABLE_REF(((long) 25))))
																		{	/* Module/impuse.scm 353 */
																			obj_t BgL_arg2877z00_939;

																			obj_t BgL_arg2878z00_940;

																			BgL_arg2877z00_939 =
																				CDR(BgL_protoz00_917);
																			BgL_arg2878z00_940 =
																				CNST_TABLE_REF(((long) 0));
																			return
																				BGl_declarezd2widezd2classz12z12zzmodule_classz00
																				(BgL_arg2877z00_939, BgL_modulez00_39,
																				BgL_arg2878z00_940, BgL_prototypez00_40,
																				BgL_srcz00_918);
																		}
																	else
																		{	/* Module/impuse.scm 335 */
																			if (
																				(BgL_casezd2valuezd2_920 ==
																					CNST_TABLE_REF(((long) 26))))
																				{	/* Module/impuse.scm 355 */
																					obj_t BgL_g2668z00_942;

																					BgL_g2668z00_942 = BgL_protoz00_917;
																					{	/* Module/impuse.scm 355 */
																						obj_t BgL_envz00_943;

																						BgL_envz00_943 =
																							BGl_defaultzd2environmentzd2zz__evalz00
																							();
																						{	/* Module/impuse.scm 355 */

																							return
																								BGl_evalz00zz__evalz00
																								(BgL_g2668z00_942,
																								BgL_envz00_943);
																						}
																					}
																				}
																			else
																				{	/* Module/impuse.scm 335 */
																					if (
																						(BgL_casezd2valuezd2_920 ==
																							CNST_TABLE_REF(((long) 27))))
																						{	/* Module/impuse.scm 335 */
																							return BgL_protoz00_917;
																						}
																					else
																						{	/* Module/impuse.scm 335 */
																							if (
																								(BgL_casezd2valuezd2_920 ==
																									CNST_TABLE_REF(((long) 28))))
																								{	/* Module/impuse.scm 335 */
																									return BgL_protoz00_917;
																								}
																							else
																								{	/* Module/impuse.scm 335 */
																									if (
																										(BgL_casezd2valuezd2_920 ==
																											CNST_TABLE_REF(((long)
																													29))))
																										{	/* Module/impuse.scm 335 */
																											return BgL_protoz00_917;
																										}
																									else
																										{	/* Module/impuse.scm 363 */
																											obj_t BgL_list2883z00_947;

																											BgL_list2883z00_947 =
																												MAKE_PAIR(BNIL, BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string3125z00zzmodule_impusez00,
																												BGl_string3132z00zzmodule_impusez00,
																												BgL_prototypez00_40,
																												BgL_list2883z00_947);
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
					{	/* Module/impuse.scm 330 */
						obj_t BgL_arg2884z00_950;

						BgL_arg2884z00_950 =
							BGl_findzd2locationzd2zztools_locationz00
							(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
						{	/* Module/impuse.scm 330 */
							obj_t BgL_list2888z00_954;

							BgL_list2888z00_954 = MAKE_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzf2locationz20zztools_errorz00
								(BgL_arg2884z00_950, BGl_string3125z00zzmodule_impusez00,
								BGl_string3132z00zzmodule_impusez00, BgL_prototypez00_40,
								BgL_list2888z00_954);
						}
					}
			}
		}
	}



/* _import-parser */
	obj_t BGl__importzd2parserzd2zzmodule_impusez00(obj_t BgL_envz00_2098,
		obj_t BgL_modulez00_2099, obj_t BgL_prototypez00_2100,
		obj_t BgL_importzd2srczd2_2101)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 324 */
			return
				BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_2099,
				BgL_prototypez00_2100, BgL_importzd2srczd2_2101);
		}
	}



/* import-module! */
	obj_t BGl_importzd2modulez12zc0zzmodule_impusez00(obj_t BgL_importz00_42)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 368 */
			{	/* Module/impuse.scm 370 */
				obj_t BgL_inlinez00_957;

				{	/* Module/impuse.scm 371 */
					bool_t BgL_testz00_2660;

					{	/* Module/impuse.scm 371 */
						obj_t BgL_auxz00_2661;

						{
							BgL_importz00_bglt BgL_auxz00_2662;

							BgL_auxz00_2662 = (BgL_importz00_bglt) (BgL_importz00_42);
							BgL_auxz00_2661 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2662))->BgL_varsz00);
						}
						BgL_testz00_2660 = PAIRP(BgL_auxz00_2661);
					}
					if (BgL_testz00_2660)
						{	/* Module/impuse.scm 371 */
							BgL_inlinez00_957 =
								BGl_importzd2wantedzd2zzmodule_impusez00(BgL_importz00_42);
						}
					else
						{	/* Module/impuse.scm 371 */
							BgL_inlinez00_957 =
								BGl_importzd2everythingzd2zzmodule_impusez00(BgL_importz00_42);
						}
				}
				{	/* Module/impuse.scm 374 */
					obj_t BgL_macroz00_958;

					obj_t BgL_syntaxz00_959;

					obj_t BgL_expanderz00_960;

					{	/* Module/impuse.scm 374 */
						int BgL_auxz00_2668;

						BgL_auxz00_2668 = (int) (((long) 1));
						BgL_macroz00_958 = BGL_MVALUES_VAL(BgL_auxz00_2668);
					}
					{	/* Module/impuse.scm 374 */
						int BgL_auxz00_2671;

						BgL_auxz00_2671 = (int) (((long) 2));
						BgL_syntaxz00_959 = BGL_MVALUES_VAL(BgL_auxz00_2671);
					}
					{	/* Module/impuse.scm 374 */
						int BgL_auxz00_2674;

						BgL_auxz00_2674 = (int) (((long) 3));
						BgL_expanderz00_960 = BGL_MVALUES_VAL(BgL_auxz00_2674);
					}
					{	/* Module/impuse.scm 374 */
						obj_t BgL_arg2890z00_961;

						obj_t BgL_arg2891z00_962;

						obj_t BgL_arg2892z00_963;

						obj_t BgL_arg2893z00_964;

						{
							BgL_importz00_bglt BgL_auxz00_2677;

							BgL_auxz00_2677 = (BgL_importz00_bglt) (BgL_importz00_42);
							BgL_arg2890z00_961 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2677))->BgL_codez00);
						}
						{	/* Module/impuse.scm 379 */
							obj_t BgL_arg2894z00_965;

							{
								BgL_importz00_bglt BgL_auxz00_2680;

								BgL_auxz00_2680 = (BgL_importz00_bglt) (BgL_importz00_42);
								BgL_arg2894z00_965 =
									(((BgL_importz00_bglt) CREF(BgL_auxz00_2680))->BgL_declz00);
							}
							BgL_arg2891z00_962 =
								BGl_prognzd2tailzd2expressionsz00zztools_prognz00
								(BgL_arg2894z00_965);
						}
						{
							BgL_importz00_bglt BgL_auxz00_2684;

							BgL_auxz00_2684 = (BgL_importz00_bglt) (BgL_importz00_42);
							BgL_arg2892z00_963 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2684))->BgL_accessz00);
						}
						{
							BgL_importz00_bglt BgL_auxz00_2687;

							BgL_auxz00_2687 = (BgL_importz00_bglt) (BgL_importz00_42);
							BgL_arg2893z00_964 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2687))->BgL_modulez00);
						}
						return
							BGl_lookzd2forzd2inlineszd2andzd2macrosz00zzread_inlinez00
							(BgL_inlinez00_957, BgL_macroz00_958, BgL_syntaxz00_959,
							BgL_expanderz00_960, BgL_arg2890z00_961, BgL_arg2891z00_962,
							BgL_arg2892z00_963, BgL_arg2893z00_964);
					}
				}
			}
		}
	}



/* read-import! */
	obj_t BGl_readzd2importz12zc0zzmodule_impusez00(obj_t BgL_importz00_43)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 386 */
			{
				obj_t BgL_objz00_1035;

				obj_t BgL_modulez00_1042;

				obj_t BgL_filez00_1043;

				{	/* Module/impuse.scm 401 */
					bool_t BgL_testz00_2691;

					{	/* Module/impuse.scm 401 */
						obj_t BgL_auxz00_2692;

						{
							BgL_importz00_bglt BgL_auxz00_2693;

							BgL_auxz00_2693 = (BgL_importz00_bglt) (BgL_importz00_43);
							BgL_auxz00_2692 =
								(((BgL_importz00_bglt) CREF(BgL_auxz00_2693))->BgL_declz00);
						}
						BgL_testz00_2691 = (BgL_auxz00_2692 == BUNSPEC);
					}
					if (BgL_testz00_2691)
						{	/* Module/impuse.scm 402 */
							obj_t BgL_modulez00_971;

							{
								BgL_importz00_bglt BgL_auxz00_2697;

								BgL_auxz00_2697 = (BgL_importz00_bglt) (BgL_importz00_43);
								BgL_modulez00_971 =
									(((BgL_importz00_bglt) CREF(BgL_auxz00_2697))->BgL_modulez00);
							}
							{	/* Module/impuse.scm 402 */
								obj_t BgL_abasez00_972;

								{	/* Module/impuse.scm 403 */
									obj_t BgL_l2629z00_1016;

									BgL_l2629z00_1016 =
										BGl_za2accesszd2filesza2zd2zzengine_paramz00;
									if (NULLP(BgL_l2629z00_1016))
										{	/* Module/impuse.scm 403 */
											BgL_abasez00_972 = BNIL;
										}
									else
										{	/* Module/impuse.scm 403 */
											obj_t BgL_head2631z00_1018;

											BgL_head2631z00_1018 =
												MAKE_PAIR(BGl_dirnamez00zz__osz00(CAR
													(BgL_l2629z00_1016)), BNIL);
											{	/* Module/impuse.scm 403 */
												obj_t BgL_g2634z00_1019;

												BgL_g2634z00_1019 = CDR(BgL_l2629z00_1016);
												{
													obj_t BgL_l2629z00_1021;

													obj_t BgL_tail2632z00_1022;

													BgL_l2629z00_1021 = BgL_g2634z00_1019;
													BgL_tail2632z00_1022 = BgL_head2631z00_1018;
												BgL_zc3anonymousza32926ze3z83_1023:
													if (NULLP(BgL_l2629z00_1021))
														{	/* Module/impuse.scm 403 */
															BgL_abasez00_972 = BgL_head2631z00_1018;
														}
													else
														{	/* Module/impuse.scm 403 */
															obj_t BgL_newtail2633z00_1025;

															BgL_newtail2633z00_1025 =
																MAKE_PAIR(BGl_dirnamez00zz__osz00(CAR
																	(BgL_l2629z00_1021)), BNIL);
															SET_CDR(BgL_tail2632z00_1022,
																BgL_newtail2633z00_1025);
															{
																obj_t BgL_tail2632z00_2714;

																obj_t BgL_l2629z00_2712;

																BgL_l2629z00_2712 = CDR(BgL_l2629z00_1021);
																BgL_tail2632z00_2714 = BgL_newtail2633z00_1025;
																BgL_tail2632z00_1022 = BgL_tail2632z00_2714;
																BgL_l2629z00_1021 = BgL_l2629z00_2712;
																goto BgL_zc3anonymousza32926ze3z83_1023;
															}
														}
												}
											}
										}
								}
								{	/* Module/impuse.scm 403 */
									obj_t BgL_fnamesz00_973;

									{	/* Module/impuse.scm 404 */
										obj_t BgL_fun2924z00_1015;

										BgL_fun2924z00_1015 =
											BGl_bigloozd2modulezd2resolverz00zz__modulez00();
										BgL_fnamesz00_973 =
											PROCEDURE_ENTRY(BgL_fun2924z00_1015) (BgL_fun2924z00_1015,
											BgL_modulez00_971, BgL_abasez00_972, BEOA);
									}
									{	/* Module/impuse.scm 404 */

										{	/* Module/impuse.scm 405 */
											obj_t BgL_arg2900z00_976;

											{	/* Module/impuse.scm 406 */
												bool_t BgL_testz00_2718;

												{	/* Module/impuse.scm 406 */
													obj_t BgL_auxz00_2719;

													{
														BgL_importz00_bglt BgL_auxz00_2720;

														BgL_auxz00_2720 =
															(BgL_importz00_bglt) (BgL_importz00_43);
														BgL_auxz00_2719 =
															(((BgL_importz00_bglt) CREF(BgL_auxz00_2720))->
															BgL_modez00);
													}
													BgL_testz00_2718 =
														(BgL_auxz00_2719 == CNST_TABLE_REF(((long) 2)));
												}
												if (BgL_testz00_2718)
													{	/* Module/impuse.scm 406 */
														BgL_arg2900z00_976 =
															BGl_string3135z00zzmodule_impusez00;
													}
												else
													{	/* Module/impuse.scm 406 */
														BgL_arg2900z00_976 =
															BGl_string3136z00zzmodule_impusez00;
													}
											}
											{	/* Module/impuse.scm 405 */
												obj_t BgL_list2903z00_979;

												{	/* Module/impuse.scm 405 */
													obj_t BgL_arg2904z00_980;

													{	/* Module/impuse.scm 405 */
														obj_t BgL_arg2905z00_981;

														{	/* Module/impuse.scm 405 */
															obj_t BgL_arg2906z00_982;

															{	/* Module/impuse.scm 405 */
																obj_t BgL_arg2907z00_983;

																{	/* Module/impuse.scm 405 */
																	obj_t BgL_arg2908z00_984;

																	BgL_arg2908z00_984 =
																		MAKE_PAIR(BCHAR(((unsigned char) '\n')),
																		BNIL);
																	BgL_arg2907z00_983 =
																		MAKE_PAIR
																		(BGl_string3137z00zzmodule_impusez00,
																		BgL_arg2908z00_984);
																}
																BgL_arg2906z00_982 =
																	MAKE_PAIR(BgL_modulez00_971,
																	BgL_arg2907z00_983);
															}
															BgL_arg2905z00_981 =
																MAKE_PAIR(BGl_string3138z00zzmodule_impusez00,
																BgL_arg2906z00_982);
														}
														BgL_arg2904z00_980 =
															MAKE_PAIR(BgL_arg2900z00_976, BgL_arg2905z00_981);
													}
													BgL_list2903z00_979 =
														MAKE_PAIR(BGl_string3139z00zzmodule_impusez00,
														BgL_arg2904z00_980);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
													BgL_list2903z00_979);
										}}
										if (PAIRP(BgL_fnamesz00_973))
											{	/* Module/impuse.scm 410 */
												obj_t BgL_fnamez00_989;

												{	/* Module/impuse.scm 410 */
													obj_t BgL_arg2923z00_1014;

													BgL_arg2923z00_1014 = CAR(BgL_fnamesz00_973);
													BgL_fnamez00_989 =
														BGl_findzd2filezf2pathz20zz__osz00
														(BgL_arg2923z00_1014,
														BGl_za2loadzd2pathza2zd2zz__evalz00);
												}
												if (STRINGP(BgL_fnamez00_989))
													{	/* Module/impuse.scm 413 */
														obj_t BgL_portz00_991;

														{	/* Module/impuse.scm 413 */
															obj_t BgL_g2673z00_1011;

															BgL_g2673z00_1011 = BgL_fnamez00_989;
															{	/* Module/impuse.scm 413 */

																BgL_portz00_991 =
																	BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
																	(BgL_g2673z00_1011, BTRUE);
															}
														}
														{
															BgL_importz00_bglt BgL_auxz00_2741;

															BgL_auxz00_2741 =
																(BgL_importz00_bglt) (BgL_importz00_43);
															((((BgL_importz00_bglt) CREF(BgL_auxz00_2741))->
																	BgL_accessz00) =
																((obj_t) BgL_fnamesz00_973), BUNSPEC);
														}
														BGl_readerzd2resetz12zc0zz__readerz00();
														if (INPUT_PORTP(BgL_portz00_991))
															{	/* Module/impuse.scm 418 */
																obj_t BgL_val2586z00_993;

																BgL_val2586z00_993 =
																	BGl_zc3exitza32918ze3z83zzmodule_impusez00
																	(BgL_importz00_43, BgL_modulez00_971,
																	BgL_portz00_991);
																bgl_close_input_port(BgL_portz00_991);
																if (CBOOL
																	(BGl_valzd2fromzd2exitzf3zf3zz__bexitz00
																		(BgL_val2586z00_993)))
																	{	/* Module/impuse.scm 434 */
																		return
																			BGl_unwindzd2untilz12zc0zz__bexitz00(CAR
																			(BgL_val2586z00_993),
																			CDR(BgL_val2586z00_993));
																	}
																else
																	{	/* Module/impuse.scm 434 */
																		return BgL_val2586z00_993;
																	}
															}
														else
															{	/* Module/impuse.scm 416 */
																BgL_modulez00_1042 = BgL_modulez00_971;
																BgL_filez00_1043 = CAR(BgL_fnamesz00_973);
															BgL_zc3anonymousza32942ze3z83_1044:
																{	/* Module/impuse.scm 395 */
																	BgL_importz00_bglt BgL_obj2474z00_1836;

																	obj_t BgL_val2473z00_1837;

																	BgL_obj2474z00_1836 =
																		(BgL_importz00_bglt) (BgL_importz00_43);
																	BgL_val2473z00_1837 =
																		CNST_TABLE_REF(((long) 7));
																	((((BgL_importz00_bglt)
																				CREF(BgL_obj2474z00_1836))->
																			BgL_declz00) =
																		((obj_t) BgL_val2473z00_1837), BUNSPEC);
																}
																{	/* Module/impuse.scm 397 */
																	obj_t BgL_arg2943z00_1045;

																	obj_t BgL_arg2944z00_1046;

																	obj_t BgL_arg2945z00_1047;

																	{
																		BgL_importz00_bglt BgL_auxz00_2758;

																		BgL_auxz00_2758 =
																			(BgL_importz00_bglt) (BgL_importz00_43);
																		BgL_arg2943z00_1045 =
																			(((BgL_importz00_bglt)
																				CREF(BgL_auxz00_2758))->BgL_locz00);
																	}
																	BgL_arg2944z00_1046 =
																		CNST_TABLE_REF(((long) 0));
																	{	/* Module/impuse.scm 399 */
																		obj_t BgL_list2947z00_1049;

																		BgL_list2947z00_1049 =
																			MAKE_PAIR(BgL_modulez00_1042, BNIL);
																		BgL_arg2945z00_1047 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BGl_string3133z00zzmodule_impusez00,
																			BgL_list2947z00_1049);
																	}
																	return
																		BGl_userzd2errorzf2locationz20zztools_errorz00
																		(BgL_arg2943z00_1045, BgL_arg2944z00_1046,
																		BgL_arg2945z00_1047, BgL_filez00_1043,
																		BNIL);
																}
															}
													}
												else
													{
														obj_t BgL_filez00_2767;

														obj_t BgL_modulez00_2766;

														BgL_modulez00_2766 = BgL_modulez00_971;
														BgL_filez00_2767 = CAR(BgL_fnamesz00_973);
														BgL_filez00_1043 = BgL_filez00_2767;
														BgL_modulez00_1042 = BgL_modulez00_2766;
														goto BgL_zc3anonymousza32942ze3z83_1044;
													}
											}
										else
											{	/* Module/impuse.scm 408 */
												BgL_objz00_1035 = BgL_modulez00_971;
												{	/* Module/impuse.scm 388 */
													BgL_importz00_bglt BgL_obj2474z00_1833;

													obj_t BgL_val2473z00_1834;

													BgL_obj2474z00_1833 =
														(BgL_importz00_bglt) (BgL_importz00_43);
													BgL_val2473z00_1834 = CNST_TABLE_REF(((long) 7));
													((((BgL_importz00_bglt) CREF(BgL_obj2474z00_1833))->
															BgL_declz00) =
														((obj_t) BgL_val2473z00_1834), BUNSPEC);
												}
												{	/* Module/impuse.scm 389 */
													obj_t BgL_arg2937z00_1037;

													obj_t BgL_arg2938z00_1038;

													{
														BgL_importz00_bglt BgL_auxz00_2772;

														BgL_auxz00_2772 =
															(BgL_importz00_bglt) (BgL_importz00_43);
														BgL_arg2937z00_1037 =
															(((BgL_importz00_bglt) CREF(BgL_auxz00_2772))->
															BgL_locz00);
													}
													BgL_arg2938z00_1038 = CNST_TABLE_REF(((long) 0));
													{	/* Module/impuse.scm 389 */
														obj_t BgL_list2941z00_1041;

														BgL_list2941z00_1041 = MAKE_PAIR(BNIL, BNIL);
														return
															BGl_userzd2errorzf2locationz20zztools_errorz00
															(BgL_arg2937z00_1037, BgL_arg2938z00_1038,
															BGl_string3134z00zzmodule_impusez00,
															BgL_objz00_1035, BgL_list2941z00_1041);
													}
												}
											}
									}
								}
							}
						}
					else
						{	/* Module/impuse.scm 401 */
							return BFALSE;
						}
				}
			}
		}
	}



/* <exit:2918> */
	obj_t BGl_zc3exitza32918ze3z83zzmodule_impusez00(obj_t BgL_importz00_2120,
		obj_t BgL_modulez00_2119, obj_t BgL_portz00_2118)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 434 */
			jmp_buf_t jmpbuf;

			void *BgL_an_exit2587z00_998;

			if (SET_EXIT(BgL_an_exit2587z00_998))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
					BgL_an_exit2587z00_998 = (void *) jmpbuf;
					{	/* Module/impuse.scm 434 */

						PUSH_EXIT(BgL_an_exit2587z00_998, ((long) 0));
						{	/* Module/impuse.scm 419 */
							obj_t BgL_val2588z00_999;

							{	/* Module/impuse.scm 419 */
								obj_t BgL_mdeclz00_1000;

								{	/* Module/impuse.scm 419 */
									obj_t BgL_list2919z00_1008;

									{	/* Module/impuse.scm 419 */
										obj_t BgL_arg2920z00_1009;

										BgL_arg2920z00_1009 = MAKE_PAIR(BTRUE, BNIL);
										BgL_list2919z00_1008 =
											MAKE_PAIR(BgL_portz00_2118, BgL_arg2920z00_1009);
									}
									BgL_mdeclz00_1000 =
										BGl_compilerzd2readzd2zzread_readerz00
										(BgL_list2919z00_1008);
								}
								{	/* Module/impuse.scm 419 */
									obj_t BgL_emdeclz00_1001;

									BgL_emdeclz00_1001 =
										BGl_comptimezd2expandzf2errorz20zzexpand_epsz00
										(BgL_mdeclz00_1000);
									{	/* Module/impuse.scm 420 */
										obj_t BgL_modz00_1002;

										BgL_modz00_1002 =
											BGl_prognzd2firstzd2expressionz00zztools_prognz00
											(BgL_emdeclz00_1001);
										{	/* Module/impuse.scm 421 */

											BGl_resetzd2includezd2consumedzd2directivez12zc0zzmodule_includez00
												();
											BGl_resetzd2includezd2consumedzd2codez12zc0zzmodule_includez00
												();
											{	/* Module/impuse.scm 424 */
												obj_t BgL_cmz00_1003;

												BgL_cmz00_1003 =
													BGl_consumezd2modulez12zc0zzmodule_modulez00
													(BgL_modulez00_2119, BgL_modz00_1002);
												{	/* Module/impuse.scm 424 */
													obj_t BgL_cimz00_1004;

													BgL_cimz00_1004 =
														BGl_getzd2includezd2consumedzd2directivezd2zzmodule_includez00
														();
													{	/* Module/impuse.scm 425 */
														obj_t BgL_proz00_1005;

														BgL_proz00_1005 =
															bgl_append2(BgL_cmz00_1003, BgL_cimz00_1004);
														{	/* Module/impuse.scm 426 */
															obj_t BgL_codez00_1006;

															BgL_codez00_1006 =
																BGl_getzd2includezd2consumedzd2codezd2zzmodule_includez00
																();
															{	/* Module/impuse.scm 427 */
																long BgL_checkz00_1007;

																BgL_checkz00_1007 =
																	BGl_modulezd2checksumzd2zzmodule_checksumz00
																	(BgL_modz00_1002,
																	BGl_za2mcozd2includezd2pathza2z00zzengine_paramz00);
																{	/* Module/impuse.scm 428 */

																	{
																		BgL_importz00_bglt BgL_auxz00_2793;

																		BgL_auxz00_2793 =
																			(BgL_importz00_bglt) (BgL_importz00_2120);
																		((((BgL_importz00_bglt)
																					CREF(BgL_auxz00_2793))->BgL_declz00) =
																			((obj_t) BgL_emdeclz00_1001), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_2798;

																		BgL_importz00_bglt BgL_auxz00_2796;

																		BgL_auxz00_2798 = BINT(BgL_checkz00_1007);
																		BgL_auxz00_2796 =
																			(BgL_importz00_bglt) (BgL_importz00_2120);
																		((((BgL_importz00_bglt)
																					CREF(BgL_auxz00_2796))->
																				BgL_checksumz00) =
																			((obj_t) BgL_auxz00_2798), BUNSPEC);
																	}
																	{
																		BgL_importz00_bglt BgL_auxz00_2801;

																		BgL_auxz00_2801 =
																			(BgL_importz00_bglt) (BgL_importz00_2120);
																		((((BgL_importz00_bglt)
																					CREF(BgL_auxz00_2801))->BgL_codez00) =
																			((obj_t) BgL_codez00_1006), BUNSPEC);
																	}
																	{
																		BgL_importz00_bglt BgL_auxz00_2804;

																		BgL_auxz00_2804 =
																			(BgL_importz00_bglt) (BgL_importz00_2120);
																		BgL_val2588z00_999 =
																			((((BgL_importz00_bglt)
																					CREF(BgL_auxz00_2804))->
																				BgL_providez00) =
																			((obj_t) BgL_proz00_1005), BUNSPEC);
							}}}}}}}}}}}
							POP_EXIT();
							return BgL_val2588z00_999;
						}
					}
				}
		}
	}



/* import-everything */
	obj_t BGl_importzd2everythingzd2zzmodule_impusez00(obj_t BgL_importz00_44)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 439 */
			{
				obj_t BgL_providedz00_1059;

				obj_t BgL_inlinez00_1060;

				obj_t BgL_macroz00_1061;

				obj_t BgL_syntaxz00_1062;

				obj_t BgL_expdz00_1063;

				{	/* Module/impuse.scm 441 */
					obj_t BgL_arg2948z00_1058;

					{
						BgL_importz00_bglt BgL_auxz00_2808;

						BgL_auxz00_2808 = (BgL_importz00_bglt) (BgL_importz00_44);
						BgL_arg2948z00_1058 =
							(((BgL_importz00_bglt) CREF(BgL_auxz00_2808))->BgL_providez00);
					}
					BgL_providedz00_1059 = BgL_arg2948z00_1058;
					BgL_inlinez00_1060 = BNIL;
					BgL_macroz00_1061 = BNIL;
					BgL_syntaxz00_1062 = BNIL;
					BgL_expdz00_1063 = BNIL;
				BgL_zc3anonymousza32949ze3z83_1064:
					if (NULLP(BgL_providedz00_1059))
						{	/* Module/impuse.scm 446 */
							{	/* Module/impuse.scm 447 */
								int BgL_auxz00_2813;

								BgL_auxz00_2813 = (int) (((long) 4));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_2813);
							}
							{	/* Module/impuse.scm 447 */
								int BgL_auxz00_2816;

								BgL_auxz00_2816 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2816, BgL_macroz00_1061);
							}
							{	/* Module/impuse.scm 447 */
								int BgL_auxz00_2819;

								BgL_auxz00_2819 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2819, BgL_syntaxz00_1062);
							}
							{	/* Module/impuse.scm 447 */
								int BgL_auxz00_2822;

								BgL_auxz00_2822 = (int) (((long) 3));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2822, BgL_expdz00_1063);
							}
							return BgL_inlinez00_1060;
						}
					else
						{	/* Module/impuse.scm 448 */
							obj_t BgL_pz00_1070;

							{	/* Module/impuse.scm 448 */
								obj_t BgL_arg2983z00_1113;

								obj_t BgL_arg2984z00_1114;

								obj_t BgL_arg2985z00_1115;

								{
									BgL_importz00_bglt BgL_auxz00_2825;

									BgL_auxz00_2825 = (BgL_importz00_bglt) (BgL_importz00_44);
									BgL_arg2983z00_1113 =
										(((BgL_importz00_bglt) CREF(BgL_auxz00_2825))->
										BgL_modulez00);
								}
								BgL_arg2984z00_1114 = CAR(BgL_providedz00_1059);
								{
									BgL_importz00_bglt BgL_auxz00_2829;

									BgL_auxz00_2829 = (BgL_importz00_bglt) (BgL_importz00_44);
									BgL_arg2985z00_1115 =
										(((BgL_importz00_bglt) CREF(BgL_auxz00_2829))->BgL_srcz00);
								}
								{	/* Module/impuse.scm 448 */
									obj_t BgL_list2986z00_1116;

									BgL_list2986z00_1116 = MAKE_PAIR(BgL_arg2985z00_1115, BNIL);
									BgL_pz00_1070 =
										BGl_importzd2parserzd2zzmodule_impusez00
										(BgL_arg2983z00_1113, BgL_arg2984z00_1114,
										BgL_list2986z00_1116);
								}
							}
							{
								obj_t BgL_expz00_1076;

								obj_t BgL_synz00_1074;

								obj_t BgL_macz00_1072;

								if (BGl_iszd2azf3z21zz__objectz00(BgL_pz00_1070,
										BGl_globalz00zzast_varz00))
									{	/* Module/impuse.scm 449 */
										{	/* Module/impuse.scm 451 */
											BgL_valuez00_bglt BgL_valz00_1094;

											{
												BgL_variablez00_bglt BgL_auxz00_2836;

												BgL_auxz00_2836 =
													(BgL_variablez00_bglt) (BgL_pz00_1070);
												BgL_valz00_1094 =
													(((BgL_variablez00_bglt) CREF(BgL_auxz00_2836))->
													BgL_valuez00);
											}
											{	/* Module/impuse.scm 452 */
												obj_t BgL_arg2965z00_1095;

												obj_t BgL_arg2966z00_1096;

												BgL_arg2965z00_1095 = CDR(BgL_providedz00_1059);
												{	/* Module/impuse.scm 454 */
													bool_t BgL_testz00_2840;

													if (BGl_iszd2azf3z21zz__objectz00(BgL_pz00_1070,
															BGl_globalz00zzast_varz00))
														{	/* Module/impuse.scm 454 */
															bool_t BgL_testz00_2843;

															{	/* Module/impuse.scm 454 */
																obj_t BgL_obj2322z00_1862;

																BgL_obj2322z00_1862 = (obj_t) (BgL_valz00_1094);
																BgL_testz00_2843 =
																	BGl_iszd2azf3z21zz__objectz00
																	(BgL_obj2322z00_1862,
																	BGl_sfunz00zzast_varz00);
															}
															if (BgL_testz00_2843)
																{	/* Module/impuse.scm 454 */
																	BgL_testz00_2840 = ((bool_t) 0);
																}
															else
																{	/* Module/impuse.scm 454 */
																	BgL_testz00_2840 = ((bool_t) 1);
																}
														}
													else
														{	/* Module/impuse.scm 454 */
															BgL_testz00_2840 = ((bool_t) 1);
														}
													if (BgL_testz00_2840)
														{	/* Module/impuse.scm 454 */
															BgL_arg2966z00_1096 = BgL_inlinez00_1060;
														}
													else
														{	/* Module/impuse.scm 456 */
															bool_t BgL_testz00_2846;

															{	/* Module/impuse.scm 456 */
																obj_t BgL_auxz00_2847;

																{
																	BgL_sfunz00_bglt BgL_auxz00_2848;

																	BgL_auxz00_2848 =
																		(BgL_sfunz00_bglt) (BgL_valz00_1094);
																	BgL_auxz00_2847 =
																		(((BgL_sfunz00_bglt)
																			CREF(BgL_auxz00_2848))->BgL_classz00);
																}
																BgL_testz00_2846 =
																	(BgL_auxz00_2847 ==
																	CNST_TABLE_REF(((long) 19)));
															}
															if (BgL_testz00_2846)
																{	/* Module/impuse.scm 457 */
																	obj_t BgL_arg2969z00_1099;

																	{	/* Module/impuse.scm 457 */
																		obj_t BgL_arg2970z00_1100;

																		obj_t BgL_arg2971z00_1101;

																		{
																			BgL_variablez00_bglt BgL_auxz00_2853;

																			BgL_auxz00_2853 =
																				(BgL_variablez00_bglt) (BgL_pz00_1070);
																			BgL_arg2970z00_1100 =
																				(((BgL_variablez00_bglt)
																					CREF(BgL_auxz00_2853))->BgL_idz00);
																		}
																		BgL_arg2971z00_1101 =
																			CNST_TABLE_REF(((long) 19));
																		BgL_arg2969z00_1099 =
																			MAKE_PAIR(BgL_arg2970z00_1100,
																			BgL_arg2971z00_1101);
																	}
																	BgL_arg2966z00_1096 =
																		MAKE_PAIR(BgL_arg2969z00_1099,
																		BgL_inlinez00_1060);
																}
															else
																{	/* Module/impuse.scm 456 */
																	BgL_arg2966z00_1096 = BgL_inlinez00_1060;
																}
														}
												}
												{
													obj_t BgL_inlinez00_2860;

													obj_t BgL_providedz00_2859;

													BgL_providedz00_2859 = BgL_arg2965z00_1095;
													BgL_inlinez00_2860 = BgL_arg2966z00_1096;
													BgL_inlinez00_1060 = BgL_inlinez00_2860;
													BgL_providedz00_1059 = BgL_providedz00_2859;
													goto BgL_zc3anonymousza32949ze3z83_1064;
												}
											}
										}
									}
								else
									{	/* Module/impuse.scm 449 */
										if (PAIRP(BgL_pz00_1070))
											{	/* Module/impuse.scm 449 */
												if ((CAR(BgL_pz00_1070) == CNST_TABLE_REF(((long) 27))))
													{	/* Module/impuse.scm 449 */
														BgL_macz00_1072 = CDR(BgL_pz00_1070);
														{	/* Module/impuse.scm 464 */
															obj_t BgL_arg2976z00_1106;

															obj_t BgL_arg2977z00_1107;

															BgL_arg2976z00_1106 = CDR(BgL_providedz00_1059);
															BgL_arg2977z00_1107 =
																MAKE_PAIR(BgL_macz00_1072, BgL_macroz00_1061);
															{
																obj_t BgL_macroz00_2870;

																obj_t BgL_providedz00_2869;

																BgL_providedz00_2869 = BgL_arg2976z00_1106;
																BgL_macroz00_2870 = BgL_arg2977z00_1107;
																BgL_macroz00_1061 = BgL_macroz00_2870;
																BgL_providedz00_1059 = BgL_providedz00_2869;
																goto BgL_zc3anonymousza32949ze3z83_1064;
															}
														}
													}
												else
													{	/* Module/impuse.scm 449 */
														if (
															(CAR(BgL_pz00_1070) ==
																CNST_TABLE_REF(((long) 28))))
															{	/* Module/impuse.scm 449 */
																BgL_synz00_1074 = CDR(BgL_pz00_1070);
																{	/* Module/impuse.scm 466 */
																	obj_t BgL_arg2978z00_1108;

																	obj_t BgL_arg2979z00_1109;

																	BgL_arg2978z00_1108 =
																		CDR(BgL_providedz00_1059);
																	BgL_arg2979z00_1109 =
																		MAKE_PAIR(BgL_synz00_1074,
																		BgL_syntaxz00_1062);
																	{
																		obj_t BgL_syntaxz00_2879;

																		obj_t BgL_providedz00_2878;

																		BgL_providedz00_2878 = BgL_arg2978z00_1108;
																		BgL_syntaxz00_2879 = BgL_arg2979z00_1109;
																		BgL_syntaxz00_1062 = BgL_syntaxz00_2879;
																		BgL_providedz00_1059 = BgL_providedz00_2878;
																		goto BgL_zc3anonymousza32949ze3z83_1064;
																	}
																}
															}
														else
															{	/* Module/impuse.scm 449 */
																if (
																	(CAR(BgL_pz00_1070) ==
																		CNST_TABLE_REF(((long) 29))))
																	{	/* Module/impuse.scm 449 */
																		BgL_expz00_1076 = CDR(BgL_pz00_1070);
																		{	/* Module/impuse.scm 468 */
																			obj_t BgL_arg2980z00_1110;

																			obj_t BgL_arg2981z00_1111;

																			BgL_arg2980z00_1110 =
																				CDR(BgL_providedz00_1059);
																			BgL_arg2981z00_1111 =
																				MAKE_PAIR(BgL_expz00_1076,
																				BgL_expdz00_1063);
																			{
																				obj_t BgL_expdz00_2888;

																				obj_t BgL_providedz00_2887;

																				BgL_providedz00_2887 =
																					BgL_arg2980z00_1110;
																				BgL_expdz00_2888 = BgL_arg2981z00_1111;
																				BgL_expdz00_1063 = BgL_expdz00_2888;
																				BgL_providedz00_1059 =
																					BgL_providedz00_2887;
																				goto BgL_zc3anonymousza32949ze3z83_1064;
																			}
																		}
																	}
																else
																	{	/* Module/impuse.scm 449 */
																	BgL_tagzd21659zd2_1078:
																		{
																			obj_t BgL_providedz00_2890;

																			BgL_providedz00_2890 =
																				CDR(BgL_providedz00_1059);
																			BgL_providedz00_1059 =
																				BgL_providedz00_2890;
																			goto BgL_zc3anonymousza32949ze3z83_1064;
																		}
																	}
															}
													}
											}
										else
											{	/* Module/impuse.scm 449 */
												goto BgL_tagzd21659zd2_1078;
											}
									}
							}
						}
				}
			}
		}
	}



/* import-wanted */
	obj_t BGl_importzd2wantedzd2zzmodule_impusez00(obj_t BgL_importz00_45)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 475 */
			{
				obj_t BgL_providedz00_1126;

				obj_t BgL_inlinez00_1127;

				obj_t BgL_macroz00_1128;

				obj_t BgL_syntaxz00_1129;

				obj_t BgL_expanderz00_1130;

				obj_t BgL_wantedz00_1131;

				{	/* Module/impuse.scm 477 */
					obj_t BgL_arg2987z00_1124;

					obj_t BgL_arg2988z00_1125;

					{
						BgL_importz00_bglt BgL_auxz00_2892;

						BgL_auxz00_2892 = (BgL_importz00_bglt) (BgL_importz00_45);
						BgL_arg2987z00_1124 =
							(((BgL_importz00_bglt) CREF(BgL_auxz00_2892))->BgL_providez00);
					}
					{
						BgL_importz00_bglt BgL_auxz00_2895;

						BgL_auxz00_2895 = (BgL_importz00_bglt) (BgL_importz00_45);
						BgL_arg2988z00_1125 =
							(((BgL_importz00_bglt) CREF(BgL_auxz00_2895))->BgL_varsz00);
					}
					BgL_providedz00_1126 = BgL_arg2987z00_1124;
					BgL_inlinez00_1127 = BNIL;
					BgL_macroz00_1128 = BNIL;
					BgL_syntaxz00_1129 = BNIL;
					BgL_expanderz00_1130 = BNIL;
					BgL_wantedz00_1131 = BgL_arg2988z00_1125;
				BgL_zc3anonymousza32989ze3z83_1132:
					if (NULLP(BgL_wantedz00_1131))
						{	/* Module/impuse.scm 487 */
							{	/* Module/impuse.scm 488 */
								int BgL_auxz00_2900;

								BgL_auxz00_2900 = (int) (((long) 4));
								BGL_MVALUES_NUMBER_SET(BgL_auxz00_2900);
							}
							{	/* Module/impuse.scm 488 */
								int BgL_auxz00_2903;

								BgL_auxz00_2903 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2903, BgL_macroz00_1128);
							}
							{	/* Module/impuse.scm 488 */
								int BgL_auxz00_2906;

								BgL_auxz00_2906 = (int) (((long) 2));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2906, BgL_syntaxz00_1129);
							}
							{	/* Module/impuse.scm 488 */
								int BgL_auxz00_2909;

								BgL_auxz00_2909 = (int) (((long) 3));
								BGL_MVALUES_VAL_SET(BgL_auxz00_2909, BgL_expanderz00_1130);
							}
							return BgL_inlinez00_1127;
						}
					else
						{	/* Module/impuse.scm 487 */
							if (NULLP(BgL_providedz00_1126))
								{	/* Module/impuse.scm 490 */
									obj_t BgL_arg2992z00_1139;

									obj_t BgL_arg2993z00_1140;

									BgL_arg2992z00_1139 =
										BGl_findzd2locationzd2zztools_locationz00
										(BGl_za2modulezd2clauseza2zd2zzmodule_modulez00);
									{
										BgL_importz00_bglt BgL_auxz00_2915;

										BgL_auxz00_2915 = (BgL_importz00_bglt) (BgL_importz00_45);
										BgL_arg2993z00_1140 =
											(((BgL_importz00_bglt) CREF(BgL_auxz00_2915))->
											BgL_modulez00);
									}
									{	/* Module/impuse.scm 490 */
										obj_t BgL_list2996z00_1143;

										BgL_list2996z00_1143 = MAKE_PAIR(BNIL, BNIL);
										return
											BGl_userzd2errorzf2locationz20zztools_errorz00
											(BgL_arg2992z00_1139, BgL_arg2993z00_1140,
											BGl_string3140z00zzmodule_impusez00, BgL_wantedz00_1131,
											BgL_list2996z00_1143);
									}
								}
							else
								{	/* Module/impuse.scm 496 */
									obj_t BgL_protoz00_1144;

									BgL_protoz00_1144 =
										BGl_parsezd2prototypezd2zzmodule_prototypez00(CAR
										(BgL_providedz00_1126));
									if (PAIRP(BgL_protoz00_1144))
										{	/* Module/impuse.scm 498 */
											obj_t BgL_idz00_1146;

											BgL_idz00_1146 =
												BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(CAR(CDR
													(BgL_protoz00_1144)),
												BGl_findzd2locationzd2zztools_locationz00(CAR
													(BgL_providedz00_1126)));
											if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_idz00_1146, BgL_wantedz00_1131)))
												{	/* Module/impuse.scm 507 */
													obj_t BgL_pz00_1148;

													{	/* Module/impuse.scm 507 */
														obj_t BgL_arg3034z00_1194;

														obj_t BgL_arg3035z00_1195;

														obj_t BgL_arg3036z00_1196;

														{
															BgL_importz00_bglt BgL_auxz00_2932;

															BgL_auxz00_2932 =
																(BgL_importz00_bglt) (BgL_importz00_45);
															BgL_arg3034z00_1194 =
																(((BgL_importz00_bglt) CREF(BgL_auxz00_2932))->
																BgL_modulez00);
														}
														BgL_arg3035z00_1195 = CAR(BgL_providedz00_1126);
														{
															BgL_importz00_bglt BgL_auxz00_2936;

															BgL_auxz00_2936 =
																(BgL_importz00_bglt) (BgL_importz00_45);
															BgL_arg3036z00_1196 =
																(((BgL_importz00_bglt) CREF(BgL_auxz00_2936))->
																BgL_srcz00);
														}
														{	/* Module/impuse.scm 507 */
															obj_t BgL_list3037z00_1197;

															BgL_list3037z00_1197 =
																MAKE_PAIR(BgL_arg3036z00_1196, BNIL);
															BgL_pz00_1148 =
																BGl_importzd2parserzd2zzmodule_impusez00
																(BgL_arg3034z00_1194, BgL_arg3035z00_1195,
																BgL_list3037z00_1197);
														}
													}
													{
														obj_t BgL_expz00_1155;

														obj_t BgL_synz00_1153;

														obj_t BgL_macz00_1151;

														if (BGl_iszd2azf3z21zz__objectz00(BgL_pz00_1148,
																BGl_globalz00zzast_varz00))
															{	/* Module/impuse.scm 508 */
																{	/* Module/impuse.scm 510 */
																	obj_t BgL_arg3014z00_1174;

																	obj_t BgL_arg3015z00_1175;

																	obj_t BgL_arg3016z00_1176;

																	BgL_arg3014z00_1174 =
																		CDR(BgL_providedz00_1126);
																	if (
																		(CAR(BgL_protoz00_1144) ==
																			CNST_TABLE_REF(((long) 19))))
																		{	/* Module/impuse.scm 513 */
																			obj_t BgL_arg3018z00_1178;

																			BgL_arg3018z00_1178 =
																				MAKE_PAIR(BgL_idz00_1146,
																				CNST_TABLE_REF(((long) 19)));
																			BgL_arg3015z00_1175 =
																				MAKE_PAIR(BgL_arg3018z00_1178,
																				BgL_inlinez00_1127);
																		}
																	else
																		{	/* Module/impuse.scm 512 */
																			BgL_arg3015z00_1175 = BgL_inlinez00_1127;
																		}
																	BgL_arg3016z00_1176 =
																		bgl_remq_bang(BgL_idz00_1146,
																		BgL_wantedz00_1131);
																	{
																		obj_t BgL_wantedz00_2954;

																		obj_t BgL_inlinez00_2953;

																		obj_t BgL_providedz00_2952;

																		BgL_providedz00_2952 = BgL_arg3014z00_1174;
																		BgL_inlinez00_2953 = BgL_arg3015z00_1175;
																		BgL_wantedz00_2954 = BgL_arg3016z00_1176;
																		BgL_wantedz00_1131 = BgL_wantedz00_2954;
																		BgL_inlinez00_1127 = BgL_inlinez00_2953;
																		BgL_providedz00_1126 = BgL_providedz00_2952;
																		goto BgL_zc3anonymousza32989ze3z83_1132;
																	}
																}
															}
														else
															{	/* Module/impuse.scm 508 */
																if (BGl_iszd2azf3z21zz__objectz00(BgL_pz00_1148,
																		BGl_typez00zztype_typez00))
																	{	/* Module/impuse.scm 508 */
																		{
																			obj_t BgL_wantedz00_2959;

																			obj_t BgL_providedz00_2957;

																			BgL_providedz00_2957 =
																				CDR(BgL_providedz00_1126);
																			BgL_wantedz00_2959 =
																				bgl_remq_bang(BgL_idz00_1146,
																				BgL_wantedz00_1131);
																			BgL_wantedz00_1131 = BgL_wantedz00_2959;
																			BgL_providedz00_1126 =
																				BgL_providedz00_2957;
																			goto BgL_zc3anonymousza32989ze3z83_1132;
																		}
																	}
																else
																	{	/* Module/impuse.scm 508 */
																		if (PAIRP(BgL_pz00_1148))
																			{	/* Module/impuse.scm 508 */
																				if (
																					(CAR(BgL_pz00_1148) ==
																						CNST_TABLE_REF(((long) 27))))
																					{	/* Module/impuse.scm 508 */
																						BgL_macz00_1151 =
																							CDR(BgL_pz00_1148);
																						{	/* Module/impuse.scm 528 */
																							obj_t BgL_arg3023z00_1183;

																							obj_t BgL_arg3024z00_1184;

																							obj_t BgL_arg3025z00_1185;

																							BgL_arg3023z00_1183 =
																								CDR(BgL_providedz00_1126);
																							BgL_arg3024z00_1184 =
																								MAKE_PAIR(BgL_macz00_1151,
																								BgL_macroz00_1128);
																							BgL_arg3025z00_1185 =
																								bgl_remq_bang(BgL_idz00_1146,
																								BgL_wantedz00_1131);
																							{
																								obj_t BgL_wantedz00_2972;

																								obj_t BgL_macroz00_2971;

																								obj_t BgL_providedz00_2970;

																								BgL_providedz00_2970 =
																									BgL_arg3023z00_1183;
																								BgL_macroz00_2971 =
																									BgL_arg3024z00_1184;
																								BgL_wantedz00_2972 =
																									BgL_arg3025z00_1185;
																								BgL_wantedz00_1131 =
																									BgL_wantedz00_2972;
																								BgL_macroz00_1128 =
																									BgL_macroz00_2971;
																								BgL_providedz00_1126 =
																									BgL_providedz00_2970;
																								goto
																									BgL_zc3anonymousza32989ze3z83_1132;
																							}
																						}
																					}
																				else
																					{	/* Module/impuse.scm 508 */
																						if (
																							(CAR(BgL_pz00_1148) ==
																								CNST_TABLE_REF(((long) 28))))
																							{	/* Module/impuse.scm 508 */
																								BgL_synz00_1153 =
																									CDR(BgL_pz00_1148);
																								{	/* Module/impuse.scm 535 */
																									obj_t BgL_arg3026z00_1186;

																									obj_t BgL_arg3027z00_1187;

																									obj_t BgL_arg3028z00_1188;

																									BgL_arg3026z00_1186 =
																										CDR(BgL_providedz00_1126);
																									BgL_arg3027z00_1187 =
																										MAKE_PAIR(BgL_synz00_1153,
																										BgL_syntaxz00_1129);
																									BgL_arg3028z00_1188 =
																										bgl_remq_bang
																										(BgL_idz00_1146,
																										BgL_wantedz00_1131);
																									{
																										obj_t BgL_wantedz00_2983;

																										obj_t BgL_syntaxz00_2982;

																										obj_t BgL_providedz00_2981;

																										BgL_providedz00_2981 =
																											BgL_arg3026z00_1186;
																										BgL_syntaxz00_2982 =
																											BgL_arg3027z00_1187;
																										BgL_wantedz00_2983 =
																											BgL_arg3028z00_1188;
																										BgL_wantedz00_1131 =
																											BgL_wantedz00_2983;
																										BgL_syntaxz00_1129 =
																											BgL_syntaxz00_2982;
																										BgL_providedz00_1126 =
																											BgL_providedz00_2981;
																										goto
																											BgL_zc3anonymousza32989ze3z83_1132;
																									}
																								}
																							}
																						else
																							{	/* Module/impuse.scm 508 */
																								if (
																									(CAR(BgL_pz00_1148) ==
																										CNST_TABLE_REF(((long)
																												29))))
																									{	/* Module/impuse.scm 508 */
																										BgL_expz00_1155 =
																											CDR(BgL_pz00_1148);
																										{	/* Module/impuse.scm 542 */
																											obj_t BgL_arg3029z00_1189;

																											obj_t BgL_arg3030z00_1190;

																											obj_t BgL_arg3031z00_1191;

																											BgL_arg3029z00_1189 =
																												CDR
																												(BgL_providedz00_1126);
																											BgL_arg3030z00_1190 =
																												MAKE_PAIR
																												(BgL_expz00_1155,
																												BgL_expanderz00_1130);
																											BgL_arg3031z00_1191 =
																												bgl_remq_bang
																												(BgL_idz00_1146,
																												BgL_wantedz00_1131);
																											{
																												obj_t
																													BgL_wantedz00_2994;
																												obj_t
																													BgL_expanderz00_2993;
																												obj_t
																													BgL_providedz00_2992;
																												BgL_providedz00_2992 =
																													BgL_arg3029z00_1189;
																												BgL_expanderz00_2993 =
																													BgL_arg3030z00_1190;
																												BgL_wantedz00_2994 =
																													BgL_arg3031z00_1191;
																												BgL_wantedz00_1131 =
																													BgL_wantedz00_2994;
																												BgL_expanderz00_1130 =
																													BgL_expanderz00_2993;
																												BgL_providedz00_1126 =
																													BgL_providedz00_2992;
																												goto
																													BgL_zc3anonymousza32989ze3z83_1132;
																											}
																										}
																									}
																								else
																									{	/* Module/impuse.scm 508 */
																									BgL_tagzd21692zd2_1157:
																										{
																											obj_t BgL_wantedz00_2998;

																											obj_t
																												BgL_providedz00_2996;
																											BgL_providedz00_2996 =
																												CDR
																												(BgL_providedz00_1126);
																											BgL_wantedz00_2998 =
																												bgl_remq_bang
																												(BgL_idz00_1146,
																												BgL_wantedz00_1131);
																											BgL_wantedz00_1131 =
																												BgL_wantedz00_2998;
																											BgL_providedz00_1126 =
																												BgL_providedz00_2996;
																											goto
																												BgL_zc3anonymousza32989ze3z83_1132;
																										}
																									}
																							}
																					}
																			}
																		else
																			{	/* Module/impuse.scm 508 */
																				goto BgL_tagzd21692zd2_1157;
																			}
																	}
															}
													}
												}
											else
												{
													obj_t BgL_providedz00_3000;

													BgL_providedz00_3000 = CDR(BgL_providedz00_1126);
													BgL_providedz00_1126 = BgL_providedz00_3000;
													goto BgL_zc3anonymousza32989ze3z83_1132;
												}
										}
									else
										{
											obj_t BgL_providedz00_3002;

											BgL_providedz00_3002 = CDR(BgL_providedz00_1126);
											BgL_providedz00_1126 = BgL_providedz00_3002;
											goto BgL_zc3anonymousza32989ze3z83_1132;
										}
								}
						}
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			{	/* Module/impuse.scm 43 */
				obj_t BgL_arg3044z00_1205;

				obj_t BgL_arg3045z00_1206;

				obj_t BgL_arg3048z00_1209;

				BgL_arg3044z00_1205 = CNST_TABLE_REF(((long) 0));
				BgL_arg3045z00_1206 = BGl_objectz00zz__objectz00;
				{	/* Module/impuse.scm 43 */
					obj_t BgL_v2643z00_1210;

					BgL_v2643z00_1210 = create_vector((int) (((long) 0)));
					BgL_arg3048z00_1209 = BgL_v2643z00_1210;
				}
				BGl_importz00zzmodule_impusez00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg3044z00_1205,
					BgL_arg3045z00_1206, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2importzd2envz52zzmodule_impusez00,
					BGl_importzd2nilzd2envz00zzmodule_impusez00,
					BGl_importzf3zd2envz21zzmodule_impusez00, ((long) 508992720), BFALSE,
					BFALSE, BgL_arg3048z00_1209);
			}
			return (BGl_z52thezd2importzd2nilz52zzmodule_impusez00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* _import? */
	obj_t BGl__importzf3zf3zzmodule_impusez00(obj_t BgL_envz00_2104,
		obj_t BgL_obj2568z00_2105)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 43 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj2568z00_2105,
					BGl_importz00zzmodule_impusez00));
		}
	}



/* _%allocate-import */
	obj_t BGl__z52allocatezd2importz80zzmodule_impusez00(obj_t BgL_envz00_2102)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 43 */
			{	/* Module/impuse.scm 43 */
				BgL_importz00_bglt BgL_auxz00_3010;

				{	/* Module/impuse.scm 43 */
					BgL_importz00_bglt BgL_res3150z00_2146;

					{	/* Module/impuse.scm 43 */
						BgL_importz00_bglt BgL_new2521z00_2144;

						BgL_new2521z00_2144 =
							((BgL_importz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_importz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new2521z00_2144),
							BGl_classzd2numzd2zz__objectz00(BGl_importz00zzmodule_impusez00));
						{	/* Module/impuse.scm 43 */
							BgL_objectz00_bglt BgL_auxz00_3015;

							BgL_auxz00_3015 = (BgL_objectz00_bglt) (BgL_new2521z00_2144);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3015, BFALSE);
						}
						BgL_res3150z00_2146 = BgL_new2521z00_2144;
					}
					BgL_auxz00_3010 = BgL_res3150z00_2146;
				}
				return (obj_t) (BgL_auxz00_3010);
			}
		}
	}



/* import-nil */
	BgL_importz00_bglt BGl_importzd2nilzd2zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 43 */
			if ((BGl_z52thezd2importzd2nilz52zzmodule_impusez00 == BUNSPEC))
				{	/* Module/impuse.scm 43 */
					{	/* Module/impuse.scm 43 */
						BgL_importz00_bglt BgL_res3113z00_1958;

						{	/* Module/impuse.scm 43 */
							BgL_importz00_bglt BgL_new2521z00_1954;

							BgL_new2521z00_1954 =
								((BgL_importz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_importz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new2521z00_1954),
								BGl_classzd2numzd2zz__objectz00
								(BGl_importz00zzmodule_impusez00));
							{	/* Module/impuse.scm 43 */
								BgL_objectz00_bglt BgL_auxz00_3025;

								BgL_auxz00_3025 = (BgL_objectz00_bglt) (BgL_new2521z00_1954);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_3025, BFALSE);
							}
							BgL_res3113z00_1958 = BgL_new2521z00_1954;
						}
						BGl_z52thezd2importzd2nilz52zzmodule_impusez00 =
							(obj_t) (BgL_res3113z00_1958);
					}
					{	/* Module/impuse.scm 43 */
						BgL_importz00_bglt BgL_res3114z00_1982;

						{	/* Module/impuse.scm 43 */
							BgL_importz00_bglt BgL_new2508z00_1959;

							obj_t BgL_module2497z00_1960;

							obj_t BgL_mode2499z00_1962;

							BgL_new2508z00_1959 =
								(BgL_importz00_bglt)
								(BGl_z52thezd2importzd2nilz52zzmodule_impusez00);
							BgL_module2497z00_1960 = CNST_TABLE_REF(((long) 30));
							BgL_mode2499z00_1962 = CNST_TABLE_REF(((long) 30));
							{	/* Module/impuse.scm 43 */
								obj_t BgL_module2497z00_1971;

								long BgL_number2498z00_1972;

								obj_t BgL_mode2499z00_1973;

								obj_t BgL_vars2500z00_1974;

								obj_t BgL_checksum2501z00_1975;

								obj_t BgL_loc2502z00_1976;

								obj_t BgL_src2503z00_1977;

								obj_t BgL_decl2504z00_1978;

								obj_t BgL_provide2505z00_1979;

								obj_t BgL_code2506z00_1980;

								obj_t BgL_access2507z00_1981;

								BgL_module2497z00_1971 = BgL_module2497z00_1960;
								BgL_number2498z00_1972 = ((long) 0);
								BgL_mode2499z00_1973 = BgL_mode2499z00_1962;
								BgL_vars2500z00_1974 = BUNSPEC;
								BgL_checksum2501z00_1975 = BUNSPEC;
								BgL_loc2502z00_1976 = BUNSPEC;
								BgL_src2503z00_1977 = BUNSPEC;
								BgL_decl2504z00_1978 = BUNSPEC;
								BgL_provide2505z00_1979 = BNIL;
								BgL_code2506z00_1980 = BUNSPEC;
								BgL_access2507z00_1981 = BUNSPEC;
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_modulez00) = ((obj_t) BgL_module2497z00_1971), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_numberz00) = ((long) BgL_number2498z00_1972), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_modez00) = ((obj_t) BgL_mode2499z00_1973), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_varsz00) = ((obj_t) BgL_vars2500z00_1974), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_checksumz00) =
									((obj_t) BgL_checksum2501z00_1975), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_locz00) = ((obj_t) BgL_loc2502z00_1976), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_srcz00) = ((obj_t) BgL_src2503z00_1977), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_declz00) = ((obj_t) BgL_decl2504z00_1978), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_providez00) =
									((obj_t) BgL_provide2505z00_1979), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_codez00) = ((obj_t) BgL_code2506z00_1980), BUNSPEC);
								((((BgL_importz00_bglt) CREF(BgL_new2508z00_1959))->
										BgL_accessz00) = ((obj_t) BgL_access2507z00_1981), BUNSPEC);
								BgL_res3114z00_1982 = BgL_new2508z00_1959;
						}}
						(obj_t) (BgL_res3114z00_1982);
				}}
			else
				{	/* Module/impuse.scm 43 */
					BFALSE;
				}
			return
				(BgL_importz00_bglt) (BGl_z52thezd2importzd2nilz52zzmodule_impusez00);
		}
	}



/* _import-nil */
	obj_t BGl__importzd2nilzd2zzmodule_impusez00(obj_t BgL_envz00_2103)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 43 */
			return (obj_t) (BGl_importzd2nilzd2zzmodule_impusez00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_importz00zzmodule_impusez00, BGl_proc3141z00zzmodule_impusez00,
				BGl_string3142z00zzmodule_impusez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_importz00zzmodule_impusez00, BGl_proc3143z00zzmodule_impusez00,
				BGl_string3144z00zzmodule_impusez00);
		}
	}



/* struct+object->objec2647 */
	obj_t BGl_structzb2objectzd2ze3objec2647z83zzmodule_impusez00(obj_t
		BgL_envz00_2108, obj_t BgL_oz00_2109, obj_t BgL_sz00_2110)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 43 */
			{
				BgL_importz00_bglt BgL_oz00_1399;

				obj_t BgL_sz00_1400;

				{	/* Module/impuse.scm 43 */
					BgL_importz00_bglt BgL_auxz00_3049;

					BgL_oz00_1399 = (BgL_importz00_bglt) (BgL_oz00_2109);
					BgL_sz00_1400 = BgL_sz00_2110;
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3093z00_1403;

						BgL_arg3093z00_1403 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 0)));
						{	/* Module/impuse.scm 43 */
							BgL_objectz00_bglt BgL_auxz00_3052;

							BgL_auxz00_3052 = (BgL_objectz00_bglt) (BgL_oz00_1399);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_3052, BgL_arg3093z00_1403);
					}}
					{
						obj_t BgL_auxz00_3055;

						BgL_auxz00_3055 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 1)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_modulez00) =
							((obj_t) BgL_auxz00_3055), BUNSPEC);
					}
					{
						long BgL_auxz00_3059;

						BgL_auxz00_3059 =
							(long) CINT(STRUCT_REF(BgL_sz00_1400, (int) (((long) 2))));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_numberz00) =
							((long) BgL_auxz00_3059), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3064;

						BgL_auxz00_3064 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 3)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_modez00) =
							((obj_t) BgL_auxz00_3064), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3068;

						BgL_auxz00_3068 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 4)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_varsz00) =
							((obj_t) BgL_auxz00_3068), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3072;

						BgL_auxz00_3072 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 5)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_checksumz00) =
							((obj_t) BgL_auxz00_3072), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3076;

						BgL_auxz00_3076 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 6)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_locz00) =
							((obj_t) BgL_auxz00_3076), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3080;

						BgL_auxz00_3080 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 7)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_srcz00) =
							((obj_t) BgL_auxz00_3080), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3084;

						BgL_auxz00_3084 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 8)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_declz00) =
							((obj_t) BgL_auxz00_3084), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3088;

						BgL_auxz00_3088 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 9)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_providez00) =
							((obj_t) BgL_auxz00_3088), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3092;

						BgL_auxz00_3092 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 10)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_codez00) =
							((obj_t) BgL_auxz00_3092), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_3096;

						BgL_auxz00_3096 = STRUCT_REF(BgL_sz00_1400, (int) (((long) 11)));
						((((BgL_importz00_bglt) CREF(BgL_oz00_1399))->BgL_accessz00) =
							((obj_t) BgL_auxz00_3096), BUNSPEC);
					}
					BgL_auxz00_3049 = BgL_oz00_1399;
					return (obj_t) (BgL_auxz00_3049);
				}
			}
		}
	}



/* object->struct-impor2645 */
	obj_t BGl_objectzd2ze3structzd2impor2645ze3zzmodule_impusez00(obj_t
		BgL_envz00_2111, obj_t BgL_obj2522z00_2112)
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 43 */
			{
				BgL_importz00_bglt BgL_obj2522z00_1371;

				BgL_obj2522z00_1371 = (BgL_importz00_bglt) (BgL_obj2522z00_2112);
				{	/* Module/impuse.scm 43 */
					obj_t BgL_res2523z00_1374;

					{	/* Module/impuse.scm 43 */
						obj_t BgL_keyz00_1983;

						BgL_keyz00_1983 = CNST_TABLE_REF(((long) 0));
						BgL_res2523z00_1374 =
							make_struct(BgL_keyz00_1983, (int) (((long) 12)), BUNSPEC);
					}
					{	/* Module/impuse.scm 43 */
						int BgL_auxz00_3105;

						BgL_auxz00_3105 = (int) (((long) 0));
						STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3105, BFALSE);
					}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3070z00_1376;

						BgL_arg3070z00_1376 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_modulez00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3109;

							BgL_auxz00_3109 = (int) (((long) 1));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3109,
								BgL_arg3070z00_1376);
					}}
					{	/* Module/impuse.scm 43 */
						long BgL_arg3072z00_1378;

						BgL_arg3072z00_1378 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_numberz00);
						{	/* Module/impuse.scm 43 */
							obj_t BgL_auxz00_3115;

							int BgL_auxz00_3113;

							BgL_auxz00_3115 = BINT(BgL_arg3072z00_1378);
							BgL_auxz00_3113 = (int) (((long) 2));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3113, BgL_auxz00_3115);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3074z00_1380;

						BgL_arg3074z00_1380 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_modez00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3119;

							BgL_auxz00_3119 = (int) (((long) 3));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3119,
								BgL_arg3074z00_1380);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3076z00_1382;

						BgL_arg3076z00_1382 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_varsz00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3123;

							BgL_auxz00_3123 = (int) (((long) 4));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3123,
								BgL_arg3076z00_1382);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3078z00_1384;

						BgL_arg3078z00_1384 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->
							BgL_checksumz00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3127;

							BgL_auxz00_3127 = (int) (((long) 5));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3127,
								BgL_arg3078z00_1384);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3081z00_1386;

						BgL_arg3081z00_1386 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_locz00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3131;

							BgL_auxz00_3131 = (int) (((long) 6));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3131,
								BgL_arg3081z00_1386);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3083z00_1388;

						BgL_arg3083z00_1388 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_srcz00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3135;

							BgL_auxz00_3135 = (int) (((long) 7));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3135,
								BgL_arg3083z00_1388);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3085z00_1390;

						BgL_arg3085z00_1390 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_declz00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3139;

							BgL_auxz00_3139 = (int) (((long) 8));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3139,
								BgL_arg3085z00_1390);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3087z00_1392;

						BgL_arg3087z00_1392 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->
							BgL_providez00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3143;

							BgL_auxz00_3143 = (int) (((long) 9));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3143,
								BgL_arg3087z00_1392);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3089z00_1394;

						BgL_arg3089z00_1394 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_codez00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3147;

							BgL_auxz00_3147 = (int) (((long) 10));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3147,
								BgL_arg3089z00_1394);
					}}
					{	/* Module/impuse.scm 43 */
						obj_t BgL_arg3091z00_1396;

						BgL_arg3091z00_1396 =
							(((BgL_importz00_bglt) CREF(BgL_obj2522z00_1371))->BgL_accessz00);
						{	/* Module/impuse.scm 43 */
							int BgL_auxz00_3151;

							BgL_auxz00_3151 = (int) (((long) 11));
							STRUCT_SET(BgL_res2523z00_1374, BgL_auxz00_3151,
								BgL_arg3091z00_1396);
					}}
					return BgL_res2523z00_1374;
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_impusez00()
	{
		AN_OBJECT;
		{	/* Module/impuse.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 12445515),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzread_readerz00(((long) 182269387),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 280176011),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 315716763),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 256968439),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 27432102),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 182148081),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 139755433),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 345457731),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 139728077),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzread_accessz00(((long) 514536036),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzread_inlinez00(((long) 155491372),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_findzd2gdefszd2(((long) 356303425),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 237711330),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 498714928),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 230845835),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
			return
				BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 46603742),
				BSTRING_TO_STRING(BGl_string3145z00zzmodule_impusez00));
		}
	}

#ifdef __cplusplus
}
#endif
