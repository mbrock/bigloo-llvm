/*===========================================================================*/
/*   (SawJvm/funcall.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/funcall.scm)*/
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

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	static obj_t BGl__z52allocatezd2indexedz80zzsaw_jvm_funcallz00(obj_t);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34148ze3z83zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_funcallz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl__makezd2indexedzd2zzsaw_jvm_funcallz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4085z83zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_compilezd2forzd2applyz00zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_compilezd2funizd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt, long,
		obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2index4083ze3zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	static obj_t BGl_zc3anonymousza34223ze3z83zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_indexedzd2nilzd2zzsaw_jvm_funcallz00();
	static obj_t BGl__fillzd2indexedz12zc0zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_funcallz00();
	static obj_t BGl_namez00zzsaw_jvm_funcallz00(long);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00 = BUNSPEC;
	extern obj_t BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_fillzd2indexedz12zc0zzsaw_jvm_funcallz00(BgL_indexedz00_bglt, int);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_compilezd2dispatchzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00 = BUNSPEC;
	static obj_t BGl_compilezd2forzd2funcalliz00zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_funcallz00();
	static bool_t BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl__indexedzd2nilzd2zzsaw_jvm_funcallz00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_jvmz00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_funcallz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_compilezd2applyzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_wideningzd2indexedzd2zzsaw_jvm_funcallz00(int);
	extern obj_t BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_makezd2indexedzd2zzsaw_jvm_funcallz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t, obj_t, bool_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, int);
	extern BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl_getzd2labsz72za0zzsaw_jvm_funcallz00(long, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_indexedzf3zf3zzsaw_jvm_funcallz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_indexedz00zzsaw_jvm_funcallz00 = BUNSPEC;
	extern obj_t BGl_labelz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static bool_t BGl_neededzf3zf3zzsaw_jvm_funcallz00(long, obj_t);
	static obj_t BGl__indexedzf3zf3zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_funcallz00();
	static obj_t BGl__wideningzd2indexedzd2zzsaw_jvm_funcallz00(obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_z52allocatezd2indexedz80zzsaw_jvm_funcallz00();
	static obj_t BGl_getzd2labszd2zzsaw_jvm_funcallz00(long, obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_funcallz00();
	static obj_t BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt, long,
		obj_t);
	static obj_t __cnst[26];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4348z00zzsaw_jvm_funcallz00,
		BgL_bgl_objectza7d2za7e3stru4358z00,
		BGl_objectzd2ze3structzd2index4083ze3zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4350z00zzsaw_jvm_funcallz00,
		BgL_bgl_structza7b2objectza74359z00,
		BGl_structzb2objectzd2ze3objec4085z83zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4343z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4343za700za7za7s4360za7, "funcall", 7);
	      DEFINE_STRING(BGl_string4344z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4344za700za7za7s4361za7, "p", 1);
	      DEFINE_STRING(BGl_string4345z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4345za700za7za7s4362za7, "L", 1);
	      DEFINE_STRING(BGl_string4346z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4346za700za7za7s4363za7, "make_vector", 11);
	      DEFINE_STRING(BGl_string4347z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4347za700za7za7s4364za7, "", 0);
	      DEFINE_STRING(BGl_string4349z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4349za700za7za7s4365za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4351z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4351za700za7za7s4366za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4352z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4352za700za7za7s4367za7, "saw_jvm_funcall", 15);
	      DEFINE_STRING(BGl_string4353z00zzsaw_jvm_funcallz00,
		BgL_bgl_string4353za700za7za7s4368za7,
		"_ indexed (invokestatic list_to_vector) (astore l) (dup) (getfield cdr) (getfield car) (checkcast pair) (invokespecial papply) (aload l) (this l) apply (getstatic *nil*) invokestatic putstatic getstatic (pop) (invokestatic cons) (areturn) invokespecial err tableswitch (getfield procindex) (aload this) aload this ",
		314);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzf3zd2envz21zzsaw_jvm_funcallz00,
		BgL_bgl__indexedza7f3za7f3za7za74369z00,
		BGl__indexedzf3zf3zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2nilzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl__indexedza7d2nilza7d4370z00,
		BGl__indexedzd2nilzd2zzsaw_jvm_funcallz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2indexedzd2envz52zzsaw_jvm_funcallz00,
		BgL_bgl__za752allocateza7d2i4371z00,
		BGl__z52allocatezd2indexedz80zzsaw_jvm_funcallz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fillzd2indexedz12zd2envz12zzsaw_jvm_funcallz00,
		BgL_bgl__fillza7d2indexedza74372z00,
		BGl__fillzd2indexedz12zc0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2indexedzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl__makeza7d2indexedza74373z00,
		BGl__makezd2indexedzd2zzsaw_jvm_funcallz00, 0L, BUNSPEC, 17);
	BGL_IMPORT obj_t BGl_notzd2envzd2zz__r4_booleans_6_1z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2indexedzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl__wideningza7d2inde4374za7,
		BGl__wideningzd2indexedzd2zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2funcallzf2applyzd2envzf2zzsaw_jvm_funcallz00,
		BgL_bgl__moduleza7d2funcal4375za7,
		BGl__modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long
		BgL_checksumz00_2090, char *BgL_fromz00_2091)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_funcallz00();
					BGl_cnstzd2initzd2zzsaw_jvm_funcallz00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_funcallz00();
					BGl_objectzd2initzd2zzsaw_jvm_funcallz00();
					BGl_methodzd2initzd2zzsaw_jvm_funcallz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"saw_jvm_funcall");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 1 */
			{	/* SawJvm/funcall.scm 1 */
				obj_t BgL_cportz00_2067;

				BgL_cportz00_2067 =
					bgl_open_input_string(BGl_string4353z00zzsaw_jvm_funcallz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2068;

					BgL_iz00_2068 = ((long) 25);
				BgL_loopz00_2069:
					if ((BgL_iz00_2068 == ((long) -1)))
						{	/* SawJvm/funcall.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/funcall.scm 1 */
							{	/* SawJvm/funcall.scm 1 */
								obj_t BgL_arg4355z00_2071;

								{	/* SawJvm/funcall.scm 1 */

									{	/* SawJvm/funcall.scm 1 */
										obj_t BgL_locationz00_2073;

										BgL_locationz00_2073 = BBOOL(((bool_t) 0));
										{	/* SawJvm/funcall.scm 1 */

											BgL_arg4355z00_2071 =
												BGl_readz00zz__readerz00(BgL_cportz00_2067,
												BgL_locationz00_2073);
										}
									}
								}
								{	/* SawJvm/funcall.scm 1 */
									int BgL_auxz00_2114;

									BgL_auxz00_2114 = (int) (BgL_iz00_2068);
									CNST_TABLE_SET(BgL_auxz00_2114, BgL_arg4355z00_2071);
							}}
							{	/* SawJvm/funcall.scm 1 */
								int BgL_auxz00_2074;

								BgL_auxz00_2074 = (int) ((BgL_iz00_2068 - ((long) 1)));
								{
									long BgL_iz00_2119;

									BgL_iz00_2119 = (long) (BgL_auxz00_2074);
									BgL_iz00_2068 = BgL_iz00_2119;
									goto BgL_loopz00_2069;
								}
							}
						}
				}
			}
		}
	}



/* key-opt? */
	bool_t BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(obj_t BgL_vz00_1)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 17 */
			{	/* SawJvm/funcall.scm 18 */
				BgL_globalz00_bglt BgL_vz00_1059;

				BgL_vz00_1059 =
					BGl_globalzd2entryzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_vz00_1));
				{	/* SawJvm/funcall.scm 19 */
					BgL_valuez00_bglt BgL_valz00_1060;

					{
						BgL_variablez00_bglt BgL_auxz00_2123;

						BgL_auxz00_2123 = (BgL_variablez00_bglt) (BgL_vz00_1059);
						BgL_valz00_1060 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2123))->BgL_valuez00);
					}
					{	/* SawJvm/funcall.scm 20 */
						bool_t BgL_testz00_2126;

						{	/* SawJvm/funcall.scm 20 */
							obj_t BgL_obj1955z00_1806;

							BgL_obj1955z00_1806 = (obj_t) (BgL_valz00_1060);
							BgL_testz00_2126 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1806,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_2126)
							{	/* SawJvm/funcall.scm 21 */
								obj_t BgL_cloz00_1062;

								{
									BgL_sfunz00_bglt BgL_auxz00_2129;

									BgL_auxz00_2129 = (BgL_sfunz00_bglt) (BgL_valz00_1060);
									BgL_cloz00_1062 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2129))->
										BgL_thezd2closurezd2globalz00);
								}
								{	/* SawJvm/funcall.scm 22 */
									bool_t BgL_oz00_1063;

									bool_t BgL_kz00_1064;

									BgL_oz00_1063 =
										BGl_globalzd2optionalzf3z21zzast_varz00(BgL_cloz00_1062);
									BgL_kz00_1064 =
										BGl_globalzd2keyzf3z21zzast_varz00(BgL_cloz00_1062);
									if (BgL_oz00_1063)
										{	/* SawJvm/funcall.scm 23 */
											return BgL_oz00_1063;
										}
									else
										{	/* SawJvm/funcall.scm 23 */
											return BgL_kz00_1064;
										}
								}
							}
						else
							{	/* SawJvm/funcall.scm 20 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* module-funcall/apply */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_2)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 27 */
			{	/* SawJvm/funcall.scm 28 */
				obj_t BgL_pz00_1066;

				{	/* SawJvm/funcall.scm 28 */
					obj_t BgL_arg4093z00_1079;

					{	/* SawJvm/funcall.scm 28 */
						obj_t BgL_arg4094z00_1080;

						{
							BgL_backendz00_bglt BgL_auxz00_2135;

							BgL_auxz00_2135 = (BgL_backendz00_bglt) (BgL_mez00_2);
							BgL_arg4094z00_1080 =
								(((BgL_backendz00_bglt) CREF(BgL_auxz00_2135))->
								BgL_functionsz00);
						}
						BgL_arg4093z00_1079 =
							BGl_getzd2procedureszd2zzsaw_proceduresz00(BgL_arg4094z00_1080);
					}
					BgL_pz00_1066 = bgl_reverse_bang(BgL_arg4093z00_1079);
				}
				{	/* SawJvm/funcall.scm 30 */
					long BgL_nz00_1067;

					BgL_nz00_1067 = ((long) 0);
					{
						obj_t BgL_l4065z00_1069;

						BgL_l4065z00_1069 = BgL_pz00_1066;
					BgL_zc3anonymousza34087ze3z83_1070:
						if (PAIRP(BgL_l4065z00_1069))
							{	/* SawJvm/funcall.scm 31 */
								{	/* SawJvm/funcall.scm 33 */
									obj_t BgL_varz00_1072;

									BgL_varz00_1072 = CAR(BgL_l4065z00_1069);
									{	/* SawJvm/funcall.scm 32 */
										BgL_globalz00_bglt BgL_obj4061z00_1073;

										BgL_obj4061z00_1073 =
											((BgL_globalz00_bglt)
											(BgL_globalz00_bglt) (BgL_varz00_1072));
										{	/* SawJvm/funcall.scm 32 */
											BgL_indexedz00_bglt BgL_arg4089z00_1074;

											{	/* SawJvm/funcall.scm 32 */
												BgL_indexedz00_bglt BgL_res4329z00_1817;

												{	/* SawJvm/funcall.scm 32 */
													int BgL_index3971z00_1811;

													BgL_index3971z00_1811 = (int) (BgL_nz00_1067);
													{	/* SawJvm/funcall.scm 32 */
														BgL_indexedz00_bglt BgL_new3972z00_1812;

														BgL_new3972z00_1812 =
															((BgL_indexedz00_bglt)
															BREF(GC_MALLOC(sizeof(struct
																		BgL_indexedz00_bgl))));
														{	/* SawJvm/funcall.scm 32 */
															BgL_indexedz00_bglt BgL_res4328z00_1816;

															{	/* SawJvm/funcall.scm 32 */
																BgL_indexedz00_bglt BgL_new3994z00_1813;

																BgL_new3994z00_1813 = BgL_new3972z00_1812;
																{	/* SawJvm/funcall.scm 32 */
																	int BgL_index3993z00_1815;

																	BgL_index3993z00_1815 = BgL_index3971z00_1811;
																	((((BgL_indexedz00_bglt)
																				CREF(BgL_new3994z00_1813))->
																			BgL_indexz00) =
																		((int) BgL_index3993z00_1815), BUNSPEC);
																	BgL_res4328z00_1816 = BgL_new3994z00_1813;
															}} BgL_res4328z00_1816;
														}
														BgL_res4329z00_1817 = BgL_new3972z00_1812;
												}}
												BgL_arg4089z00_1074 = BgL_res4329z00_1817;
											}
											{	/* SawJvm/funcall.scm 32 */
												obj_t BgL_auxz00_2150;

												BgL_objectz00_bglt BgL_auxz00_2148;

												BgL_auxz00_2150 = (obj_t) (BgL_arg4089z00_1074);
												BgL_auxz00_2148 =
													(BgL_objectz00_bglt) (BgL_obj4061z00_1073);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_2148,
													BgL_auxz00_2150);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj4061z00_1073),
											BGl_classzd2numzd2zz__objectz00
											(BGl_indexedz00zzsaw_jvm_funcallz00));
										BgL_obj4061z00_1073;
									}
									BgL_nz00_1067 = (BgL_nz00_1067 + ((long) 1));
								}
								{
									obj_t BgL_l4065z00_2157;

									BgL_l4065z00_2157 = CDR(BgL_l4065z00_1069);
									BgL_l4065z00_1069 = BgL_l4065z00_2157;
									goto BgL_zc3anonymousza34087ze3z83_1070;
								}
							}
						else
							{	/* SawJvm/funcall.scm 31 */
								((bool_t) 1);
							}
					}
				}
				if (NULLP(BgL_pz00_1066))
					{	/* SawJvm/funcall.scm 35 */
						return BFALSE;
					}
				else
					{	/* SawJvm/funcall.scm 35 */
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_2, ((long) 0),
							BgL_pz00_1066);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_2, ((long) 1),
							BgL_pz00_1066);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_2, ((long) 2),
							BgL_pz00_1066);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_2, ((long) 3),
							BgL_pz00_1066);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_2, ((long) 4),
							BgL_pz00_1066);
						return BGl_compilezd2applyzd2zzsaw_jvm_funcallz00(BgL_mez00_2,
							BgL_pz00_1066);
					}
			}
		}
	}



/* _module-funcall/apply */
	obj_t BGl__modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_2010, obj_t BgL_mez00_2011)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 27 */
			return
				BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(
				(BgL_jvmz00_bglt) (BgL_mez00_2011));
		}
	}



/* funcalli */
	obj_t BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt BgL_mez00_6,
		long BgL_iz00_7, obj_t BgL_procsz00_8)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 52 */
			{	/* SawJvm/funcall.scm 63 */
				obj_t BgL_needz00_1087;

				if (NULLP(BgL_procsz00_8))
					{	/* SawJvm/funcall.scm 63 */
						BgL_needz00_1087 = BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 63 */
						obj_t BgL_head4069z00_1112;

						{	/* SawJvm/funcall.scm 63 */
							bool_t BgL_arg4118z00_1125;

							BgL_arg4118z00_1125 =
								BGl_neededzf3zf3zzsaw_jvm_funcallz00(BgL_iz00_7,
								CAR(BgL_procsz00_8));
							BgL_head4069z00_1112 =
								MAKE_PAIR(BBOOL(BgL_arg4118z00_1125), BNIL);
						}
						{	/* SawJvm/funcall.scm 63 */
							obj_t BgL_g4072z00_1113;

							BgL_g4072z00_1113 = CDR(BgL_procsz00_8);
							{
								obj_t BgL_l4067z00_1115;

								obj_t BgL_tail4070z00_1116;

								BgL_l4067z00_1115 = BgL_g4072z00_1113;
								BgL_tail4070z00_1116 = BgL_head4069z00_1112;
							BgL_zc3anonymousza34112ze3z83_1117:
								if (NULLP(BgL_l4067z00_1115))
									{	/* SawJvm/funcall.scm 63 */
										BgL_needz00_1087 = BgL_head4069z00_1112;
									}
								else
									{	/* SawJvm/funcall.scm 63 */
										obj_t BgL_newtail4071z00_1119;

										{	/* SawJvm/funcall.scm 63 */
											bool_t BgL_arg4115z00_1121;

											BgL_arg4115z00_1121 =
												BGl_neededzf3zf3zzsaw_jvm_funcallz00(BgL_iz00_7,
												CAR(BgL_l4067z00_1115));
											BgL_newtail4071z00_1119 =
												MAKE_PAIR(BBOOL(BgL_arg4115z00_1121), BNIL);
										}
										SET_CDR(BgL_tail4070z00_1116, BgL_newtail4071z00_1119);
										{
											obj_t BgL_tail4070z00_2185;

											obj_t BgL_l4067z00_2183;

											BgL_l4067z00_2183 = CDR(BgL_l4067z00_1115);
											BgL_tail4070z00_2185 = BgL_newtail4071z00_1119;
											BgL_tail4070z00_1116 = BgL_tail4070z00_2185;
											BgL_l4067z00_1115 = BgL_l4067z00_2183;
											goto BgL_zc3anonymousza34112ze3z83_1117;
										}
									}
							}
						}
					}
				{	/* SawJvm/funcall.scm 64 */
					bool_t BgL_testz00_2186;

					{	/* SawJvm/funcall.scm 64 */
						obj_t BgL_list4110z00_1109;

						BgL_list4110z00_1109 = MAKE_PAIR(BgL_needz00_1087, BNIL);
						BgL_testz00_2186 =
							CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
							(BGl_notzd2envzd2zz__r4_booleans_6_1z00, BgL_list4110z00_1109));
					}
					if (BgL_testz00_2186)
						{	/* SawJvm/funcall.scm 64 */
							return BFALSE;
						}
					else
						{	/* SawJvm/funcall.scm 65 */
							obj_t BgL_fnamez00_1089;

							{	/* SawJvm/funcall.scm 65 */
								obj_t BgL_arg4109z00_1106;

								{	/* SawJvm/funcall.scm 65 */

									BgL_arg4109z00_1106 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_iz00_7, ((long) 10));
								}
								BgL_fnamez00_1089 =
									string_append(BGl_string4343z00zzsaw_jvm_funcallz00,
									BgL_arg4109z00_1106);
							}
							{	/* SawJvm/funcall.scm 65 */
								obj_t BgL_pz00_1090;

								{	/* SawJvm/funcall.scm 66 */
									obj_t BgL_arg4106z00_1103;

									obj_t BgL_arg4107z00_1104;

									BgL_arg4106z00_1103 = CNST_TABLE_REF(((long) 0));
									BgL_arg4107z00_1104 =
										BGl_namez00zzsaw_jvm_funcallz00(BgL_iz00_7);
									BgL_pz00_1090 =
										MAKE_PAIR(BgL_arg4106z00_1103, BgL_arg4107z00_1104);
								}
								{	/* SawJvm/funcall.scm 66 */

									BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_6,
										string_to_symbol(BSTRING_TO_STRING(BgL_fnamez00_1089)));
									BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_6,
										BgL_pz00_1090, BNIL);
									{
										obj_t BgL_l4073z00_1093;

										BgL_l4073z00_1093 = BgL_pz00_1090;
									BgL_zc3anonymousza34099ze3z83_1094:
										if (PAIRP(BgL_l4073z00_1093))
											{	/* SawJvm/funcall.scm 69 */
												{	/* SawJvm/funcall.scm 69 */
													obj_t BgL_vz00_1096;

													BgL_vz00_1096 = CAR(BgL_l4073z00_1093);
													{	/* SawJvm/funcall.scm 69 */
														obj_t BgL_arg4101z00_1097;

														{	/* SawJvm/funcall.scm 69 */
															obj_t BgL_arg4102z00_1098;

															obj_t BgL_arg4103z00_1099;

															BgL_arg4102z00_1098 = CNST_TABLE_REF(((long) 1));
															{	/* SawJvm/funcall.scm 69 */
																obj_t BgL_list4104z00_1100;

																BgL_list4104z00_1100 = MAKE_PAIR(BNIL, BNIL);
																BgL_arg4103z00_1099 =
																	BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																	(BgL_vz00_1096, BgL_list4104z00_1100);
															}
															BgL_arg4101z00_1097 =
																MAKE_PAIR(BgL_arg4102z00_1098,
																BgL_arg4103z00_1099);
														}
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_6,
															BgL_arg4101z00_1097);
												}}
												{
													obj_t BgL_l4073z00_2207;

													BgL_l4073z00_2207 = CDR(BgL_l4073z00_1093);
													BgL_l4073z00_1093 = BgL_l4073z00_2207;
													goto BgL_zc3anonymousza34099ze3z83_1094;
												}
											}
										else
											{	/* SawJvm/funcall.scm 69 */
												((bool_t) 1);
											}
									}
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_6,
										CNST_TABLE_REF(((long) 2)));
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_6,
										CNST_TABLE_REF(((long) 3)));
									BGl_compilezd2funizd2zzsaw_jvm_funcallz00(BgL_mez00_6,
										BgL_iz00_7, BgL_needz00_1087, BgL_procsz00_8,
										BgL_fnamez00_1089);
									return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_6);
								}
							}
						}
				}
			}
		}
	}



/* needed? */
	bool_t BGl_neededzf3zf3zzsaw_jvm_funcallz00(long BgL_iz00_2066,
		obj_t BgL_pz00_1128)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 61 */
			{	/* SawJvm/funcall.scm 54 */
				obj_t BgL_arityz00_1130;

				BgL_arityz00_1130 =
					BGl_globalzd2arityzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_pz00_1128));
				if (CBOOL(BgL_arityz00_1130))
					{	/* SawJvm/funcall.scm 56 */
						bool_t BgL__ortest_4062z00_1131;

						if (((long) CINT(BgL_arityz00_1130) >= ((long) 0)))
							{	/* SawJvm/funcall.scm 56 */
								if (BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(BgL_pz00_1128))
									{	/* SawJvm/funcall.scm 57 */
										BgL__ortest_4062z00_1131 =
											BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_arityz00_1130,
											BINT(BgL_iz00_2066));
									}
								else
									{	/* SawJvm/funcall.scm 57 */
										BgL__ortest_4062z00_1131 =
											((long) CINT(BgL_arityz00_1130) == BgL_iz00_2066);
							}}
						else
							{	/* SawJvm/funcall.scm 56 */
								BgL__ortest_4062z00_1131 = ((bool_t) 0);
							}
						if (BgL__ortest_4062z00_1131)
							{	/* SawJvm/funcall.scm 56 */
								return BgL__ortest_4062z00_1131;
							}
						else
							{	/* SawJvm/funcall.scm 56 */
								if (((long) CINT(BgL_arityz00_1130) < ((long) 0)))
									{	/* SawJvm/funcall.scm 60 */
										return
											BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_arityz00_1130,
											BINT((((long) -1) - BgL_iz00_2066)));
									}
								else
									{	/* SawJvm/funcall.scm 60 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* SawJvm/funcall.scm 55 */
						return (BgL_iz00_2066 <= ((long) 1));
		}}}
	}



/* name */
	obj_t BGl_namez00zzsaw_jvm_funcallz00(long BgL_nz00_1136)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 62 */
			if ((BgL_nz00_1136 == ((long) 0)))
				{	/* SawJvm/funcall.scm 62 */
					return BNIL;
				}
			else
				{	/* SawJvm/funcall.scm 62 */
					obj_t BgL_arg4126z00_1139;

					obj_t BgL_arg4127z00_1140;

					{	/* SawJvm/funcall.scm 62 */

						{	/* SawJvm/funcall.scm 62 */

							BgL_arg4126z00_1139 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
					BgL_arg4127z00_1140 =
						BGl_namez00zzsaw_jvm_funcallz00((BgL_nz00_1136 - ((long) 1)));
					return MAKE_PAIR(BgL_arg4126z00_1139, BgL_arg4127z00_1140);
				}
		}
	}



/* compile-funi */
	obj_t BGl_compilezd2funizd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt BgL_mez00_9,
		long BgL_iz00_10, obj_t BgL_needz00_11, obj_t BgL_procsz00_12,
		obj_t BgL_fnamez00_13)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 75 */
			{	/* SawJvm/funcall.scm 82 */
				obj_t BgL_labsz00_1147;

				BgL_labsz00_1147 =
					BGl_getzd2labsz72za0zzsaw_jvm_funcallz00(((long) 0), BgL_needz00_11,
					BgL_procsz00_12);
				{	/* SawJvm/funcall.scm 83 */
					obj_t BgL_arg4129z00_1148;

					{	/* SawJvm/funcall.scm 83 */
						obj_t BgL_arg4130z00_1149;

						obj_t BgL_arg4131z00_1150;

						BgL_arg4130z00_1149 = CNST_TABLE_REF(((long) 4));
						{	/* SawJvm/funcall.scm 83 */
							obj_t BgL_arg4132z00_1151;

							obj_t BgL_arg4134z00_1153;

							BgL_arg4132z00_1151 = CNST_TABLE_REF(((long) 5));
							BgL_arg4134z00_1153 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_labsz00_1147, BNIL);
							{	/* SawJvm/funcall.scm 83 */
								obj_t BgL_list4135z00_1154;

								{	/* SawJvm/funcall.scm 83 */
									obj_t BgL_arg4136z00_1155;

									BgL_arg4136z00_1155 = MAKE_PAIR(BgL_arg4134z00_1153, BNIL);
									BgL_list4135z00_1154 =
										MAKE_PAIR(BINT(((long) 0)), BgL_arg4136z00_1155);
								}
								BgL_arg4131z00_1150 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4132z00_1151, BgL_list4135z00_1154);
						}}
						BgL_arg4129z00_1148 =
							MAKE_PAIR(BgL_arg4130z00_1149, BgL_arg4131z00_1150);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_9, BgL_arg4129z00_1148);
				}
				BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_9, CNST_TABLE_REF(((long) 5)));
				{	/* SawJvm/funcall.scm 85 */
					obj_t BgL_arg4137z00_1156;

					{	/* SawJvm/funcall.scm 85 */
						obj_t BgL_arg4138z00_1157;

						obj_t BgL_arg4139z00_1158;

						BgL_arg4138z00_1157 = CNST_TABLE_REF(((long) 6));
						{	/* SawJvm/funcall.scm 85 */
							obj_t BgL_arg4140z00_1159;

							{	/* SawJvm/funcall.scm 85 */
								obj_t BgL_arg4143z00_1162;

								BgL_arg4143z00_1162 =
									string_append(BGl_string4344z00zzsaw_jvm_funcallz00,
									BgL_fnamez00_13);
								BgL_arg4140z00_1159 =
									string_to_symbol(BSTRING_TO_STRING(BgL_arg4143z00_1162));
							}
							{	/* SawJvm/funcall.scm 85 */
								obj_t BgL_list4142z00_1161;

								BgL_list4142z00_1161 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4139z00_1158 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4140z00_1159, BgL_list4142z00_1161);
						}}
						BgL_arg4137z00_1156 =
							MAKE_PAIR(BgL_arg4138z00_1157, BgL_arg4139z00_1158);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_9, BgL_arg4137z00_1156);
				}
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_9, CNST_TABLE_REF(((long) 7)));
				{	/* SawJvm/funcall.scm 87 */
					obj_t BgL_zc3anonymousza34148ze3z83_2014;

					BgL_zc3anonymousza34148ze3z83_2014 =
						make_fx_procedure(BGl_zc3anonymousza34148ze3z83zzsaw_jvm_funcallz00,
						(int) (((long) 3)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza34148ze3z83_2014,
						(int) (((long) 0)), (obj_t) (BgL_mez00_9));
					PROCEDURE_SET(BgL_zc3anonymousza34148ze3z83_2014,
						(int) (((long) 1)), BINT(BgL_iz00_10));
					{	/* SawJvm/funcall.scm 87 */
						obj_t BgL_list4145z00_1164;

						{	/* SawJvm/funcall.scm 87 */
							obj_t BgL_arg4146z00_1165;

							{	/* SawJvm/funcall.scm 87 */
								obj_t BgL_arg4147z00_1166;

								BgL_arg4147z00_1166 = MAKE_PAIR(BgL_procsz00_12, BNIL);
								BgL_arg4146z00_1165 =
									MAKE_PAIR(BgL_labsz00_1147, BgL_arg4147z00_1166);
							}
							BgL_list4145z00_1164 =
								MAKE_PAIR(BgL_needz00_11, BgL_arg4146z00_1165);
						}
						return
							BGl_forzd2eachzd2zz__r4_control_features_6_9z00
							(BgL_zc3anonymousza34148ze3z83_2014, BgL_list4145z00_1164);
					}
				}
			}
		}
	}



/* get-labs' */
	obj_t BGl_getzd2labsz72za0zzsaw_jvm_funcallz00(long BgL_iz00_1179,
		obj_t BgL_nsz00_1180, obj_t BgL_psz00_1181)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 81 */
			{
				long BgL_nz00_1172;

				if (NULLP(BgL_nsz00_1180))
					{	/* SawJvm/funcall.scm 78 */
						return BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 80 */
						obj_t BgL_arg4155z00_1184;

						obj_t BgL_arg4156z00_1185;

						{	/* SawJvm/funcall.scm 80 */
							bool_t BgL_testz00_2279;

							{	/* SawJvm/funcall.scm 80 */
								obj_t BgL_pairz00_1853;

								BgL_pairz00_1853 = BgL_nsz00_1180;
								BgL_testz00_2279 = CBOOL(CAR(BgL_pairz00_1853));
							}
							if (BgL_testz00_2279)
								{	/* SawJvm/funcall.scm 80 */
									BgL_nz00_1172 = BgL_iz00_1179;
									{	/* SawJvm/funcall.scm 76 */
										obj_t BgL_arg4150z00_1174;

										{	/* SawJvm/funcall.scm 76 */
											obj_t BgL_arg4152z00_1176;

											{	/* SawJvm/funcall.scm 76 */

												BgL_arg4152z00_1176 =
													BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
													(BgL_nz00_1172, ((long) 10));
											}
											BgL_arg4150z00_1174 =
												string_append(BGl_string4345z00zzsaw_jvm_funcallz00,
												BgL_arg4152z00_1176);
										}
										BgL_arg4155z00_1184 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg4150z00_1174));
								}}
							else
								{	/* SawJvm/funcall.scm 80 */
									BgL_arg4155z00_1184 = CNST_TABLE_REF(((long) 5));
						}}
						BgL_arg4156z00_1185 =
							BGl_getzd2labsz72za0zzsaw_jvm_funcallz00(
							(BgL_iz00_1179 + ((long) 1)),
							CDR(BgL_nsz00_1180), CDR(BgL_psz00_1181));
						return MAKE_PAIR(BgL_arg4155z00_1184, BgL_arg4156z00_1185);
					}
			}
		}
	}



/* <anonymous:4148> */
	obj_t BGl_zc3anonymousza34148ze3z83zzsaw_jvm_funcallz00(obj_t BgL_envz00_2015,
		obj_t BgL_nzf3zf3_2018, obj_t BgL_labz00_2019, obj_t BgL_pz00_2020)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 87 */
			{	/* SawJvm/funcall.scm 87 */
				obj_t BgL_mez00_2016;

				obj_t BgL_iz00_2017;

				BgL_mez00_2016 = PROCEDURE_REF(BgL_envz00_2015, (int) (((long) 0)));
				BgL_iz00_2017 = PROCEDURE_REF(BgL_envz00_2015, (int) (((long) 1)));
				{
					obj_t BgL_nzf3zf3_1167;

					obj_t BgL_labz00_1168;

					obj_t BgL_pz00_1169;

					BgL_nzf3zf3_1167 = BgL_nzf3zf3_2018;
					BgL_labz00_1168 = BgL_labz00_2019;
					BgL_pz00_1169 = BgL_pz00_2020;
					if (CBOOL(BgL_nzf3zf3_1167))
						{	/* SawJvm/funcall.scm 87 */
							return
								BGl_compilezd2forzd2funcalliz00zzsaw_jvm_funcallz00
								(BgL_mez00_2016, BgL_iz00_2017, BgL_labz00_1168, BgL_pz00_1169);
						}
					else
						{	/* SawJvm/funcall.scm 87 */
							return BFALSE;
						}
				}
			}
		}
	}



/* compile-for-funcalli */
	obj_t BGl_compilezd2forzd2funcalliz00zzsaw_jvm_funcallz00(obj_t BgL_mez00_14,
		obj_t BgL_iz00_15, obj_t BgL_labz00_16, obj_t BgL_pz00_17)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 93 */
			{	/* SawJvm/funcall.scm 94 */
				obj_t BgL_arityz00_1192;

				BgL_arityz00_1192 =
					BGl_globalzd2arityzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_pz00_17));
				{
					obj_t BgL_nz00_1231;

					obj_t BgL_iz00_1224;

					BGl_labelz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_14), BgL_labz00_16);
					if ((BgL_arityz00_1192 == BFALSE))
						{	/* SawJvm/funcall.scm 104 */
							if (((long) CINT(BgL_iz00_15) == ((long) 0)))
								{	/* SawJvm/funcall.scm 105 */
									BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_14),
										CNST_TABLE_REF(((long) 9)));
									{	/* SawJvm/funcall.scm 107 */
										obj_t BgL_arg4163z00_1197;

										{	/* SawJvm/funcall.scm 107 */
											obj_t BgL_arg4164z00_1198;

											obj_t BgL_arg4165z00_1199;

											BgL_arg4164z00_1198 = CNST_TABLE_REF(((long) 10));
											{	/* SawJvm/funcall.scm 107 */
												obj_t BgL_arg4166z00_1200;

												BgL_arg4166z00_1200 =
													BGl_declarezd2globalzd2zzsaw_jvm_outz00(
													(BgL_jvmz00_bglt) (BgL_mez00_14),
													(BgL_globalz00_bglt) (BgL_pz00_17));
												{	/* SawJvm/funcall.scm 107 */
													obj_t BgL_list4168z00_1202;

													BgL_list4168z00_1202 = MAKE_PAIR(BNIL, BNIL);
													BgL_arg4165z00_1199 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg4166z00_1200, BgL_list4168z00_1202);
											}}
											BgL_arg4163z00_1197 =
												MAKE_PAIR(BgL_arg4164z00_1198, BgL_arg4165z00_1199);
										}
										BGl_codez12z12zzsaw_jvm_outz00(
											(BgL_jvmz00_bglt) (BgL_mez00_14), BgL_arg4163z00_1197);
								}}
							else
								{	/* SawJvm/funcall.scm 108 */
									obj_t BgL_arg4169z00_1203;

									{	/* SawJvm/funcall.scm 108 */
										obj_t BgL_arg4170z00_1204;

										obj_t BgL_arg4171z00_1205;

										BgL_arg4170z00_1204 = CNST_TABLE_REF(((long) 11));
										{	/* SawJvm/funcall.scm 108 */
											obj_t BgL_arg4172z00_1206;

											BgL_arg4172z00_1206 =
												BGl_declarezd2globalzd2zzsaw_jvm_outz00(
												(BgL_jvmz00_bglt) (BgL_mez00_14),
												(BgL_globalz00_bglt) (BgL_pz00_17));
											{	/* SawJvm/funcall.scm 108 */
												obj_t BgL_list4174z00_1208;

												BgL_list4174z00_1208 = MAKE_PAIR(BNIL, BNIL);
												BgL_arg4171z00_1205 =
													BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg4172z00_1206, BgL_list4174z00_1208);
										}}
										BgL_arg4169z00_1203 =
											MAKE_PAIR(BgL_arg4170z00_1204, BgL_arg4171z00_1205);
									}
									BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_14), BgL_arg4169z00_1203);
						}}
					else
						{	/* SawJvm/funcall.scm 104 */
							if (((long) CINT(BgL_arityz00_1192) >= ((long) 0)))
								{	/* SawJvm/funcall.scm 109 */
									if (BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(BgL_pz00_17))
										{	/* SawJvm/funcall.scm 111 */
											BgL_globalz00_bglt BgL_vz00_1211;

											BgL_vz00_1211 =
												BGl_globalzd2entryzd2zzbackend_cplibz00(
												(BgL_globalz00_bglt) (BgL_pz00_17));
											{	/* SawJvm/funcall.scm 112 */
												obj_t BgL_arg4178z00_1212;

												{	/* SawJvm/funcall.scm 112 */
													obj_t BgL_arg4180z00_1213;

													obj_t BgL_arg4181z00_1214;

													BgL_arg4180z00_1213 = CNST_TABLE_REF(((long) 12));
													{	/* SawJvm/funcall.scm 112 */
														obj_t BgL_arg4182z00_1215;

														BgL_iz00_1224 = BgL_iz00_15;
														{	/* SawJvm/funcall.scm 96 */
															obj_t BgL_arg4192z00_1226;

															{	/* SawJvm/funcall.scm 96 */
																obj_t BgL_arg4194z00_1228;

																{	/* SawJvm/funcall.scm 96 */

																	BgL_arg4194z00_1228 =
																		BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																		((long) CINT(BgL_iz00_1224), ((long) 10));
																}
																BgL_arg4192z00_1226 =
																	string_append
																	(BGl_string4346z00zzsaw_jvm_funcallz00,
																	BgL_arg4194z00_1228);
															}
															BgL_arg4182z00_1215 =
																string_to_symbol(BSTRING_TO_STRING
																(BgL_arg4192z00_1226));
														}
														{	/* SawJvm/funcall.scm 112 */
															obj_t BgL_list4184z00_1217;

															BgL_list4184z00_1217 = MAKE_PAIR(BNIL, BNIL);
															BgL_arg4181z00_1214 =
																BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
																(BgL_arg4182z00_1215, BgL_list4184z00_1217);
													}}
													BgL_arg4178z00_1212 =
														MAKE_PAIR(BgL_arg4180z00_1213, BgL_arg4181z00_1214);
												}
												BGl_codez12z12zzsaw_jvm_outz00(
													(BgL_jvmz00_bglt) (BgL_mez00_14),
													BgL_arg4178z00_1212);
											}
											BGl_callzd2globalzd2zzsaw_jvm_outz00(
												(BgL_jvmz00_bglt) (BgL_mez00_14), BgL_vz00_1211);
										}
									else
										{	/* SawJvm/funcall.scm 110 */
											BGl_callzd2globalzd2zzsaw_jvm_outz00(
												(BgL_jvmz00_bglt) (BgL_mez00_14),
												BGl_globalzd2entryzd2zzbackend_cplibz00(
													(BgL_globalz00_bglt) (BgL_pz00_17)));
										}
								}
							else
								{	/* SawJvm/funcall.scm 109 */
									BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_14),
										CNST_TABLE_REF(((long) 13)));
									{	/* SawJvm/funcall.scm 117 */
										obj_t BgL_arg4186z00_1219;

										{	/* SawJvm/funcall.scm 117 */
											obj_t BgL_arg4187z00_1220;

											{	/* SawJvm/funcall.scm 117 */
												obj_t BgL_list4188z00_1221;

												{	/* SawJvm/funcall.scm 117 */
													obj_t BgL_arg4190z00_1223;

													BgL_arg4190z00_1223 =
														MAKE_PAIR(BgL_arityz00_1192, BNIL);
													BgL_list4188z00_1221 =
														MAKE_PAIR(BINT(((long) 1)), BgL_arg4190z00_1223);
												}
												BgL_arg4187z00_1220 =
													BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_list4188z00_1221);
											}
											BgL_arg4186z00_1219 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_15,
												BgL_arg4187z00_1220);
										}
										BgL_nz00_1231 = BgL_arg4186z00_1219;
									BgL_zc3anonymousza34195ze3z83_1232:
										if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_nz00_1231,
												BINT(((long) 0))))
											{	/* SawJvm/funcall.scm 98 */
												BGl_callzd2globalzd2zzsaw_jvm_outz00(
													(BgL_jvmz00_bglt) (BgL_mez00_14),
													BGl_globalzd2entryzd2zzbackend_cplibz00(
														(BgL_globalz00_bglt) (BgL_pz00_17)));
											}
										else
											{	/* SawJvm/funcall.scm 98 */
												BGl_codez12z12zzsaw_jvm_outz00(
													(BgL_jvmz00_bglt) (BgL_mez00_14),
													CNST_TABLE_REF(((long) 8)));
												{	/* SawJvm/funcall.scm 101 */
													long BgL_arg4198z00_1235;

													BgL_arg4198z00_1235 =
														((long) CINT(BgL_nz00_1231) - ((long) 1));
													{
														obj_t BgL_nz00_2373;

														BgL_nz00_2373 = BINT(BgL_arg4198z00_1235);
														BgL_nz00_1231 = BgL_nz00_2373;
														goto BgL_zc3anonymousza34195ze3z83_1232;
													}
												}
											}
									}
								}
						}
					return
						BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_14), CNST_TABLE_REF(((long) 7)));
		}}}
	}



/* compile-apply */
	obj_t BGl_compilezd2applyzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt BgL_mez00_18,
		obj_t BgL_procsz00_19)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 123 */
			{	/* SawJvm/funcall.scm 124 */
				obj_t BgL_needz00_1238;

				if (NULLP(BgL_procsz00_19))
					{	/* SawJvm/funcall.scm 124 */
						BgL_needz00_1238 = BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 124 */
						obj_t BgL_head4077z00_1243;

						{	/* SawJvm/funcall.scm 124 */
							obj_t BgL_arg4208z00_1256;

							{	/* SawJvm/funcall.scm 124 */
								obj_t BgL_arg4210z00_1258;

								BgL_arg4210z00_1258 = CAR(BgL_procsz00_19);
								BgL_arg4208z00_1256 =
									BGl_globalzd2arityzd2zzbackend_cplibz00(
									(BgL_globalz00_bglt) (BgL_arg4210z00_1258));
							}
							BgL_head4077z00_1243 = MAKE_PAIR(BgL_arg4208z00_1256, BNIL);
						}
						{	/* SawJvm/funcall.scm 124 */
							obj_t BgL_g4080z00_1244;

							BgL_g4080z00_1244 = CDR(BgL_procsz00_19);
							{
								obj_t BgL_l4075z00_1246;

								obj_t BgL_tail4078z00_1247;

								BgL_l4075z00_1246 = BgL_g4080z00_1244;
								BgL_tail4078z00_1247 = BgL_head4077z00_1243;
							BgL_zc3anonymousza34202ze3z83_1248:
								if (NULLP(BgL_l4075z00_1246))
									{	/* SawJvm/funcall.scm 124 */
										BgL_needz00_1238 = BgL_head4077z00_1243;
									}
								else
									{	/* SawJvm/funcall.scm 124 */
										obj_t BgL_newtail4079z00_1250;

										{	/* SawJvm/funcall.scm 124 */
											obj_t BgL_arg4205z00_1252;

											{	/* SawJvm/funcall.scm 124 */
												obj_t BgL_arg4207z00_1254;

												BgL_arg4207z00_1254 = CAR(BgL_l4075z00_1246);
												BgL_arg4205z00_1252 =
													BGl_globalzd2arityzd2zzbackend_cplibz00(
													(BgL_globalz00_bglt) (BgL_arg4207z00_1254));
											}
											BgL_newtail4079z00_1250 =
												MAKE_PAIR(BgL_arg4205z00_1252, BNIL);
										}
										SET_CDR(BgL_tail4078z00_1247, BgL_newtail4079z00_1250);
										{
											obj_t BgL_tail4078z00_2394;

											obj_t BgL_l4075z00_2392;

											BgL_l4075z00_2392 = CDR(BgL_l4075z00_1246);
											BgL_tail4078z00_2394 = BgL_newtail4079z00_1250;
											BgL_tail4078z00_1247 = BgL_tail4078z00_2394;
											BgL_l4075z00_1246 = BgL_l4075z00_2392;
											goto BgL_zc3anonymousza34202ze3z83_1248;
										}
									}
							}
						}
					}
				{	/* SawJvm/funcall.scm 125 */
					bool_t BgL_testz00_2395;

					{	/* SawJvm/funcall.scm 125 */
						obj_t BgL_list4200z00_1240;

						BgL_list4200z00_1240 = MAKE_PAIR(BgL_needz00_1238, BNIL);
						BgL_testz00_2395 =
							CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
							(BGl_notzd2envzd2zz__r4_booleans_6_1z00, BgL_list4200z00_1240));
					}
					if (BgL_testz00_2395)
						{	/* SawJvm/funcall.scm 125 */
							return BFALSE;
						}
					else
						{	/* SawJvm/funcall.scm 125 */
							BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_18,
								CNST_TABLE_REF(((long) 14)));
							BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_18,
								CNST_TABLE_REF(((long) 15)), BNIL);
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_18,
								CNST_TABLE_REF(((long) 2)));
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_18,
								CNST_TABLE_REF(((long) 2)));
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_18,
								CNST_TABLE_REF(((long) 3)));
							BGl_compilezd2dispatchzd2zzsaw_jvm_funcallz00(BgL_mez00_18,
								BgL_needz00_1238, BgL_procsz00_19);
							return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_18);
						}
				}
			}
		}
	}



/* compile-dispatch */
	obj_t BGl_compilezd2dispatchzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_20, obj_t BgL_needz00_21, obj_t BgL_procsz00_22)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 134 */
			{	/* SawJvm/funcall.scm 141 */
				obj_t BgL_labsz00_1261;

				BgL_labsz00_1261 =
					BGl_getzd2labszd2zzsaw_jvm_funcallz00(((long) 0), BgL_needz00_21,
					BgL_procsz00_22);
				{	/* SawJvm/funcall.scm 142 */
					obj_t BgL_arg4211z00_1262;

					{	/* SawJvm/funcall.scm 142 */
						obj_t BgL_arg4212z00_1263;

						obj_t BgL_arg4213z00_1264;

						BgL_arg4212z00_1263 = CNST_TABLE_REF(((long) 4));
						{	/* SawJvm/funcall.scm 142 */
							obj_t BgL_arg4214z00_1265;

							obj_t BgL_arg4216z00_1267;

							BgL_arg4214z00_1265 = CNST_TABLE_REF(((long) 5));
							BgL_arg4216z00_1267 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_labsz00_1261, BNIL);
							{	/* SawJvm/funcall.scm 142 */
								obj_t BgL_list4217z00_1268;

								{	/* SawJvm/funcall.scm 142 */
									obj_t BgL_arg4218z00_1269;

									BgL_arg4218z00_1269 = MAKE_PAIR(BgL_arg4216z00_1267, BNIL);
									BgL_list4217z00_1268 =
										MAKE_PAIR(BINT(((long) 0)), BgL_arg4218z00_1269);
								}
								BgL_arg4213z00_1264 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4214z00_1265, BgL_list4217z00_1268);
						}}
						BgL_arg4211z00_1262 =
							MAKE_PAIR(BgL_arg4212z00_1263, BgL_arg4213z00_1264);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_20, BgL_arg4211z00_1262);
				}
				BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_20, CNST_TABLE_REF(((long) 5)));
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_20,
					CNST_TABLE_REF(((long) 16)));
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_20,
					CNST_TABLE_REF(((long) 17)));
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_20,
					CNST_TABLE_REF(((long) 7)));
				{	/* SawJvm/funcall.scm 147 */
					obj_t BgL_zc3anonymousza34223ze3z83_2021;

					BgL_zc3anonymousza34223ze3z83_2021 =
						make_fx_procedure(BGl_zc3anonymousza34223ze3z83zzsaw_jvm_funcallz00,
						(int) (((long) 3)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34223ze3z83_2021,
						(int) (((long) 0)), (obj_t) (BgL_mez00_20));
					{	/* SawJvm/funcall.scm 147 */
						obj_t BgL_list4220z00_1271;

						{	/* SawJvm/funcall.scm 147 */
							obj_t BgL_arg4221z00_1272;

							{	/* SawJvm/funcall.scm 147 */
								obj_t BgL_arg4222z00_1273;

								BgL_arg4222z00_1273 = MAKE_PAIR(BgL_procsz00_22, BNIL);
								BgL_arg4221z00_1272 =
									MAKE_PAIR(BgL_labsz00_1261, BgL_arg4222z00_1273);
							}
							BgL_list4220z00_1271 =
								MAKE_PAIR(BgL_needz00_21, BgL_arg4221z00_1272);
						}
						return
							BGl_forzd2eachzd2zz__r4_control_features_6_9z00
							(BgL_zc3anonymousza34223ze3z83_2021, BgL_list4220z00_1271);
					}
				}
			}
		}
	}



/* get-labs */
	obj_t BGl_getzd2labszd2zzsaw_jvm_funcallz00(long BgL_iz00_1286,
		obj_t BgL_nsz00_1287, obj_t BgL_psz00_1288)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 140 */
			{
				long BgL_nz00_1279;

				if (NULLP(BgL_nsz00_1287))
					{	/* SawJvm/funcall.scm 137 */
						return BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 139 */
						obj_t BgL_arg4231z00_1291;

						obj_t BgL_arg4232z00_1292;

						{	/* SawJvm/funcall.scm 139 */
							bool_t BgL_testz00_2441;

							{	/* SawJvm/funcall.scm 139 */
								obj_t BgL_pairz00_1879;

								BgL_pairz00_1879 = BgL_nsz00_1287;
								BgL_testz00_2441 = CBOOL(CAR(BgL_pairz00_1879));
							}
							if (BgL_testz00_2441)
								{	/* SawJvm/funcall.scm 139 */
									BgL_nz00_1279 = BgL_iz00_1286;
									{	/* SawJvm/funcall.scm 135 */
										obj_t BgL_arg4225z00_1281;

										{	/* SawJvm/funcall.scm 135 */
											obj_t BgL_arg4228z00_1283;

											{	/* SawJvm/funcall.scm 135 */

												BgL_arg4228z00_1283 =
													BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
													(BgL_nz00_1279, ((long) 10));
											}
											BgL_arg4225z00_1281 =
												string_append(BGl_string4345z00zzsaw_jvm_funcallz00,
												BgL_arg4228z00_1283);
										}
										BgL_arg4231z00_1291 =
											string_to_symbol(BSTRING_TO_STRING(BgL_arg4225z00_1281));
								}}
							else
								{	/* SawJvm/funcall.scm 139 */
									BgL_arg4231z00_1291 = CNST_TABLE_REF(((long) 5));
						}}
						BgL_arg4232z00_1292 =
							BGl_getzd2labszd2zzsaw_jvm_funcallz00(
							(BgL_iz00_1286 + ((long) 1)),
							CDR(BgL_nsz00_1287), CDR(BgL_psz00_1288));
						return MAKE_PAIR(BgL_arg4231z00_1291, BgL_arg4232z00_1292);
					}
			}
		}
	}



/* <anonymous:4223> */
	obj_t BGl_zc3anonymousza34223ze3z83zzsaw_jvm_funcallz00(obj_t BgL_envz00_2022,
		obj_t BgL_nzf3zf3_2024, obj_t BgL_labz00_2025, obj_t BgL_pz00_2026)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 147 */
			{	/* SawJvm/funcall.scm 147 */
				obj_t BgL_mez00_2023;

				BgL_mez00_2023 = PROCEDURE_REF(BgL_envz00_2022, (int) (((long) 0)));
				{
					obj_t BgL_nzf3zf3_1274;

					obj_t BgL_labz00_1275;

					obj_t BgL_pz00_1276;

					BgL_nzf3zf3_1274 = BgL_nzf3zf3_2024;
					BgL_labz00_1275 = BgL_labz00_2025;
					BgL_pz00_1276 = BgL_pz00_2026;
					if (CBOOL(BgL_nzf3zf3_1274))
						{	/* SawJvm/funcall.scm 147 */
							return
								BGl_compilezd2forzd2applyz00zzsaw_jvm_funcallz00(BgL_mez00_2023,
								BgL_labz00_1275, BgL_pz00_1276);
						}
					else
						{	/* SawJvm/funcall.scm 147 */
							return BFALSE;
						}
				}
			}
		}
	}



/* compile-for-apply */
	obj_t BGl_compilezd2forzd2applyz00zzsaw_jvm_funcallz00(obj_t BgL_mez00_23,
		obj_t BgL_labz00_24, obj_t BgL_pz00_25)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 152 */
			{
				obj_t BgL_mez00_1305;

				obj_t BgL_nz00_1306;

				bool_t BgL_fixedarityzf3zf3_1307;

				{	/* SawJvm/funcall.scm 174 */
					obj_t BgL_arityz00_1300;

					BgL_arityz00_1300 =
						BGl_globalzd2arityzd2zzbackend_cplibz00(
						(BgL_globalz00_bglt) (BgL_pz00_25));
					BGl_labelz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_23), BgL_labz00_24);
					if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_arityz00_1300,
							BINT(((long) 0))))
						{	/* SawJvm/funcall.scm 176 */
							if (BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(BgL_pz00_25))
								{	/* SawJvm/funcall.scm 177 */
									BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_23),
										CNST_TABLE_REF(((long) 16)));
									BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_23),
										CNST_TABLE_REF(((long) 23)));
								}
							else
								{	/* SawJvm/funcall.scm 177 */
									BgL_mez00_1305 = BgL_mez00_23;
									BgL_nz00_1306 = BgL_arityz00_1300;
									BgL_fixedarityzf3zf3_1307 = ((bool_t) 1);
								BgL_zc3anonymousza34241ze3z83_1308:
									if (((long) CINT(BgL_nz00_1306) == ((long) 0)))
										{	/* SawJvm/funcall.scm 155 */
											if (BgL_fixedarityzf3zf3_1307)
												{	/* SawJvm/funcall.scm 156 */
													BFALSE;
												}
											else
												{	/* SawJvm/funcall.scm 156 */
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 16)));
										}}
									else
										{	/* SawJvm/funcall.scm 155 */
											if (((long) CINT(BgL_nz00_1306) == ((long) 1)))
												{	/* SawJvm/funcall.scm 158 */
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 16)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 18)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 19)));
													if (BgL_fixedarityzf3zf3_1307)
														{	/* SawJvm/funcall.scm 162 */
															BFALSE;
														}
													else
														{	/* SawJvm/funcall.scm 162 */
															BGl_codez12z12zzsaw_jvm_outz00(
																(BgL_jvmz00_bglt) (BgL_mez00_1305),
																CNST_TABLE_REF(((long) 16)));
															BGl_codez12z12zzsaw_jvm_outz00(
																(BgL_jvmz00_bglt) (BgL_mez00_1305),
																CNST_TABLE_REF(((long) 18)));
															BGl_codez12z12zzsaw_jvm_outz00(
																(BgL_jvmz00_bglt) (BgL_mez00_1305),
																CNST_TABLE_REF(((long) 20)));
												}}
											else
												{	/* SawJvm/funcall.scm 158 */
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 16)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 18)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 21)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 20)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 22)));
													BGl_codez12z12zzsaw_jvm_outz00(
														(BgL_jvmz00_bglt) (BgL_mez00_1305),
														CNST_TABLE_REF(((long) 19)));
													{
														obj_t BgL_nz00_2521;

														BgL_nz00_2521 =
															BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_nz00_1306,
															BINT(((long) 1)));
														BgL_nz00_1306 = BgL_nz00_2521;
														goto BgL_zc3anonymousza34241ze3z83_1308;
													}
												}
										}
								}
						}
					else
						{
							bool_t BgL_fixedarityzf3zf3_2528;

							obj_t BgL_nz00_2525;

							obj_t BgL_mez00_2524;

							BgL_mez00_2524 = BgL_mez00_23;
							BgL_nz00_2525 =
								BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(((long) -1)),
								BgL_arityz00_1300);
							BgL_fixedarityzf3zf3_2528 = ((bool_t) 0);
							BgL_fixedarityzf3zf3_1307 = BgL_fixedarityzf3zf3_2528;
							BgL_nz00_1306 = BgL_nz00_2525;
							BgL_mez00_1305 = BgL_mez00_2524;
							goto BgL_zc3anonymousza34241ze3z83_1308;
						}
					BGl_callzd2globalzd2zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_23),
						BGl_globalzd2entryzd2zzbackend_cplibz00(
							(BgL_globalz00_bglt) (BgL_pz00_25)));
					return
						BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_23), CNST_TABLE_REF(((long) 7)));
		}}}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 1 */
			{	/* SawJvm/funcall.scm 14 */
				obj_t BgL_arg4245z00_1313;

				obj_t BgL_arg4246z00_1314;

				obj_t BgL_arg4249z00_1317;

				BgL_arg4245z00_1313 = CNST_TABLE_REF(((long) 24));
				BgL_arg4246z00_1314 = BGl_globalz00zzast_varz00;
				{	/* SawJvm/funcall.scm 14 */
					obj_t BgL_v4081z00_1318;

					BgL_v4081z00_1318 = create_vector((int) (((long) 0)));
					BgL_arg4249z00_1317 = BgL_v4081z00_1318;
				}
				BGl_indexedz00zzsaw_jvm_funcallz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4245z00_1313,
					BgL_arg4246z00_1314, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2indexedzd2envz52zzsaw_jvm_funcallz00,
					BGl_indexedzd2nilzd2envz00zzsaw_jvm_funcallz00,
					BGl_indexedzf3zd2envz21zzsaw_jvm_funcallz00, ((long) 281989186),
					BFALSE, BFALSE, BgL_arg4249z00_1317);
			}
			return (BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* indexed? */
	BGL_EXPORTED_DEF bool_t BGl_indexedzf3zf3zzsaw_jvm_funcallz00(obj_t
		BgL_obj4004z00_26)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj4004z00_26,
				BGl_indexedz00zzsaw_jvm_funcallz00);
		}
	}



/* _indexed? */
	obj_t BGl__indexedzf3zf3zzsaw_jvm_funcallz00(obj_t BgL_envz00_2029,
		obj_t BgL_obj4004z00_2030)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj4004z00_2030,
					BGl_indexedz00zzsaw_jvm_funcallz00));
		}
	}



/* widening-indexed */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_wideningzd2indexedzd2zzsaw_jvm_funcallz00(int BgL_index3971z00_30)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{	/* SawJvm/funcall.scm 14 */
				BgL_indexedz00_bglt BgL_new3972z00_1888;

				BgL_new3972z00_1888 =
					((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_indexedz00_bgl))));
				{	/* SawJvm/funcall.scm 14 */
					BgL_indexedz00_bglt BgL_res4330z00_1892;

					{	/* SawJvm/funcall.scm 14 */
						BgL_indexedz00_bglt BgL_new3994z00_1889;

						BgL_new3994z00_1889 = BgL_new3972z00_1888;
						{	/* SawJvm/funcall.scm 14 */
							int BgL_index3993z00_1891;

							BgL_index3993z00_1891 = BgL_index3971z00_30;
							((((BgL_indexedz00_bglt) CREF(BgL_new3994z00_1889))->
									BgL_indexz00) = ((int) BgL_index3993z00_1891), BUNSPEC);
							BgL_res4330z00_1892 = BgL_new3994z00_1889;
					}} BgL_res4330z00_1892;
				}
				return BgL_new3972z00_1888;
			}
		}
	}



/* _widening-indexed */
	obj_t BGl__wideningzd2indexedzd2zzsaw_jvm_funcallz00(obj_t BgL_envz00_2031,
		obj_t BgL_index3971z00_2032)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			return
				(obj_t) (BGl_wideningzd2indexedzd2zzsaw_jvm_funcallz00(CINT
					(BgL_index3971z00_2032)));
		}
	}



/* make-indexed */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_makezd2indexedzd2zzsaw_jvm_funcallz00(obj_t BgL_id3975z00_31,
		obj_t BgL_name3976z00_32, BgL_typez00_bglt BgL_type3977z00_33,
		BgL_valuez00_bglt BgL_value3978z00_34, obj_t BgL_access3979z00_35,
		obj_t BgL_fastzd2alpha3980zd2_36, obj_t BgL_removable3981z00_37,
		long BgL_occurrence3982z00_38, obj_t BgL_module3983z00_39,
		obj_t BgL_import3984z00_40, bool_t BgL_evaluablezf33985zf3_41,
		obj_t BgL_library3986z00_42, bool_t BgL_userzf33987zf3_43,
		obj_t BgL_pragma3988z00_44, obj_t BgL_src3989z00_45,
		obj_t BgL_jvmzd2typezd2name3990z00_46, int BgL_index3974z00_47)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{	/* SawJvm/funcall.scm 14 */
				BgL_globalz00_bglt BgL_aux3991z00_1893;

				BgL_aux3991z00_1893 =
					BGl_makezd2globalzd2zzast_varz00(BgL_id3975z00_31, BgL_name3976z00_32,
					BgL_type3977z00_33, BgL_value3978z00_34, BgL_access3979z00_35,
					BgL_fastzd2alpha3980zd2_36, BgL_removable3981z00_37,
					BgL_occurrence3982z00_38, BgL_module3983z00_39, BgL_import3984z00_40,
					BgL_evaluablezf33985zf3_41, BgL_library3986z00_42,
					BgL_userzf33987zf3_43, BgL_pragma3988z00_44, BgL_src3989z00_45,
					BgL_jvmzd2typezd2name3990z00_46);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3991z00_1893),
					BGl_classzd2numzd2zz__objectz00(BGl_indexedz00zzsaw_jvm_funcallz00));
				{	/* SawJvm/funcall.scm 14 */
					BgL_indexedz00_bglt BgL_arg4252z00_1895;

					{	/* SawJvm/funcall.scm 14 */
						BgL_indexedz00_bglt BgL_res4332z00_1905;

						{	/* SawJvm/funcall.scm 14 */
							BgL_indexedz00_bglt BgL_new3972z00_1900;

							BgL_new3972z00_1900 =
								((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_indexedz00_bgl))));
							{	/* SawJvm/funcall.scm 14 */
								BgL_indexedz00_bglt BgL_res4331z00_1904;

								{	/* SawJvm/funcall.scm 14 */
									BgL_indexedz00_bglt BgL_new3994z00_1901;

									BgL_new3994z00_1901 = BgL_new3972z00_1900;
									{	/* SawJvm/funcall.scm 14 */
										int BgL_index3993z00_1903;

										BgL_index3993z00_1903 = BgL_index3974z00_47;
										((((BgL_indexedz00_bglt) CREF(BgL_new3994z00_1901))->
												BgL_indexz00) = ((int) BgL_index3993z00_1903), BUNSPEC);
										BgL_res4331z00_1904 = BgL_new3994z00_1901;
								}} BgL_res4331z00_1904;
							}
							BgL_res4332z00_1905 = BgL_new3972z00_1900;
						}
						BgL_arg4252z00_1895 = BgL_res4332z00_1905;
					}
					{	/* SawJvm/funcall.scm 14 */
						obj_t BgL_auxz00_2556;

						BgL_objectz00_bglt BgL_auxz00_2554;

						BgL_auxz00_2556 = (obj_t) (BgL_arg4252z00_1895);
						BgL_auxz00_2554 = (BgL_objectz00_bglt) (BgL_aux3991z00_1893);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2554, BgL_auxz00_2556);
				}}
				return
					((BgL_indexedz00_bglt) (BgL_indexedz00_bglt) (BgL_aux3991z00_1893));
			}
		}
	}



/* _make-indexed */
	obj_t BGl__makezd2indexedzd2zzsaw_jvm_funcallz00(obj_t BgL_envz00_2033,
		obj_t BgL_id3975z00_2034, obj_t BgL_name3976z00_2035,
		obj_t BgL_type3977z00_2036, obj_t BgL_value3978z00_2037,
		obj_t BgL_access3979z00_2038, obj_t BgL_fastzd2alpha3980zd2_2039,
		obj_t BgL_removable3981z00_2040, obj_t BgL_occurrence3982z00_2041,
		obj_t BgL_module3983z00_2042, obj_t BgL_import3984z00_2043,
		obj_t BgL_evaluablezf33985zf3_2044, obj_t BgL_library3986z00_2045,
		obj_t BgL_userzf33987zf3_2046, obj_t BgL_pragma3988z00_2047,
		obj_t BgL_src3989z00_2048, obj_t BgL_jvmzd2typezd2name3990z00_2049,
		obj_t BgL_index3974z00_2050)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			return
				(obj_t) (BGl_makezd2indexedzd2zzsaw_jvm_funcallz00(BgL_id3975z00_2034,
					BgL_name3976z00_2035, (BgL_typez00_bglt) (BgL_type3977z00_2036),
					(BgL_valuez00_bglt) (BgL_value3978z00_2037), BgL_access3979z00_2038,
					BgL_fastzd2alpha3980zd2_2039, BgL_removable3981z00_2040,
					(long) CINT(BgL_occurrence3982z00_2041), BgL_module3983z00_2042,
					BgL_import3984z00_2043, CBOOL(BgL_evaluablezf33985zf3_2044),
					BgL_library3986z00_2045, CBOOL(BgL_userzf33987zf3_2046),
					BgL_pragma3988z00_2047, BgL_src3989z00_2048,
					BgL_jvmzd2typezd2name3990z00_2049, CINT(BgL_index3974z00_2050)));
		}
	}



/* fill-indexed! */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_fillzd2indexedz12zc0zzsaw_jvm_funcallz00(BgL_indexedz00_bglt
		BgL_new3994z00_48, int BgL_index3993z00_49)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{	/* SawJvm/funcall.scm 14 */
				int BgL_index3993z00_2080;

				BgL_index3993z00_2080 = BgL_index3993z00_49;
				((((BgL_indexedz00_bglt) CREF(BgL_new3994z00_48))->BgL_indexz00) =
					((int) BgL_index3993z00_2080), BUNSPEC);
				return BgL_new3994z00_48;
			}
		}
	}



/* _fill-indexed! */
	obj_t BGl__fillzd2indexedz12zc0zzsaw_jvm_funcallz00(obj_t BgL_envz00_2051,
		obj_t BgL_new3994z00_2052, obj_t BgL_index3993z00_2053)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{	/* SawJvm/funcall.scm 14 */
				BgL_indexedz00_bglt BgL_auxz00_2570;

				{	/* SawJvm/funcall.scm 14 */
					BgL_indexedz00_bglt BgL_res4356z00_2084;

					{	/* SawJvm/funcall.scm 14 */
						BgL_indexedz00_bglt BgL_new3994z00_2081;

						int BgL_index3993z00_2082;

						BgL_new3994z00_2081 = (BgL_indexedz00_bglt) (BgL_new3994z00_2052);
						BgL_index3993z00_2082 = CINT(BgL_index3993z00_2053);
						{	/* SawJvm/funcall.scm 14 */
							int BgL_index3993z00_2083;

							BgL_index3993z00_2083 = BgL_index3993z00_2082;
							((((BgL_indexedz00_bglt) CREF(BgL_new3994z00_2081))->
									BgL_indexz00) = ((int) BgL_index3993z00_2083), BUNSPEC);
							BgL_res4356z00_2084 = BgL_new3994z00_2081;
					}}
					BgL_auxz00_2570 = BgL_res4356z00_2084;
				}
				return (obj_t) (BgL_auxz00_2570);
			}
		}
	}



/* %allocate-indexed */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_z52allocatezd2indexedz80zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{	/* SawJvm/funcall.scm 14 */
				BgL_globalz00_bglt BgL_new3997z00_2085;

				BgL_new3997z00_2085 =
					((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3997z00_2085),
					BGl_classzd2numzd2zz__objectz00(BGl_indexedz00zzsaw_jvm_funcallz00));
				{	/* SawJvm/funcall.scm 14 */
					BgL_objectz00_bglt BgL_auxz00_2579;

					BgL_auxz00_2579 = (BgL_objectz00_bglt) (BgL_new3997z00_2085);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2579, BFALSE);
				}
				return BgL_new3997z00_2085;
			}
		}
	}



/* _%allocate-indexed */
	obj_t BGl__z52allocatezd2indexedz80zzsaw_jvm_funcallz00(obj_t BgL_envz00_2027)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{	/* SawJvm/funcall.scm 14 */
				BgL_globalz00_bglt BgL_auxz00_2582;

				{	/* SawJvm/funcall.scm 14 */
					BgL_globalz00_bglt BgL_res4357z00_2089;

					{	/* SawJvm/funcall.scm 14 */
						BgL_globalz00_bglt BgL_new3997z00_2087;

						BgL_new3997z00_2087 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3997z00_2087),
							BGl_classzd2numzd2zz__objectz00
							(BGl_indexedz00zzsaw_jvm_funcallz00));
						{	/* SawJvm/funcall.scm 14 */
							BgL_objectz00_bglt BgL_auxz00_2587;

							BgL_auxz00_2587 = (BgL_objectz00_bglt) (BgL_new3997z00_2087);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2587, BFALSE);
						}
						BgL_res4357z00_2089 = BgL_new3997z00_2087;
					}
					BgL_auxz00_2582 = BgL_res4357z00_2089;
				}
				return (obj_t) (BgL_auxz00_2582);
			}
		}
	}



/* indexed-nil */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_indexedzd2nilzd2zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			if ((BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00 == BUNSPEC))
				{	/* SawJvm/funcall.scm 14 */
					{	/* SawJvm/funcall.scm 14 */
						BgL_globalz00_bglt BgL_res4333z00_1915;

						{	/* SawJvm/funcall.scm 14 */
							BgL_globalz00_bglt BgL_new1750z00_1911;

							BgL_new1750z00_1911 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1750z00_1911),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* SawJvm/funcall.scm 14 */
								BgL_objectz00_bglt BgL_auxz00_2597;

								BgL_auxz00_2597 = (BgL_objectz00_bglt) (BgL_new1750z00_1911);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2597, BFALSE);
							}
							BgL_res4333z00_1915 = BgL_new1750z00_1911;
						}
						BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00 =
							(obj_t) (BgL_res4333z00_1915);
					}
					{	/* SawJvm/funcall.scm 14 */
						obj_t BgL_arg4255z00_1328;

						BgL_typez00_bglt BgL_arg4257z00_1329;

						BgL_valuez00_bglt BgL_arg4258z00_1330;

						obj_t BgL_arg4260z00_1332;

						BgL_arg4255z00_1328 = CNST_TABLE_REF(((long) 25));
						BgL_arg4257z00_1329 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4258z00_1330 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg4260z00_1332 = CNST_TABLE_REF(((long) 25));
						{	/* SawJvm/funcall.scm 14 */
							BgL_globalz00_bglt BgL_res4334z00_1949;

							{	/* SawJvm/funcall.scm 14 */
								BgL_globalz00_bglt BgL_new1732z00_1916;

								BgL_new1732z00_1916 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00);
								{	/* SawJvm/funcall.scm 14 */
									obj_t BgL_id1716z00_1933;

									obj_t BgL_name1717z00_1934;

									BgL_typez00_bglt BgL_type1718z00_1935;

									BgL_valuez00_bglt BgL_value1719z00_1936;

									obj_t BgL_access1720z00_1937;

									obj_t BgL_fastzd2alpha1721zd2_1938;

									obj_t BgL_removable1722z00_1939;

									long BgL_occurrence1723z00_1940;

									obj_t BgL_module1724z00_1941;

									obj_t BgL_import1725z00_1942;

									bool_t BgL_evaluablezf31726zf3_1943;

									obj_t BgL_library1727z00_1944;

									bool_t BgL_userzf31728zf3_1945;

									obj_t BgL_pragma1729z00_1946;

									obj_t BgL_src1730z00_1947;

									obj_t BgL_jvmzd2typezd2name1731z00_1948;

									BgL_id1716z00_1933 = BgL_arg4255z00_1328;
									BgL_name1717z00_1934 = BUNSPEC;
									BgL_type1718z00_1935 = BgL_arg4257z00_1329;
									BgL_value1719z00_1936 = BgL_arg4258z00_1330;
									BgL_access1720z00_1937 = BUNSPEC;
									BgL_fastzd2alpha1721zd2_1938 = BUNSPEC;
									BgL_removable1722z00_1939 = BUNSPEC;
									BgL_occurrence1723z00_1940 = ((long) 0);
									BgL_module1724z00_1941 = BgL_arg4260z00_1332;
									BgL_import1725z00_1942 = BUNSPEC;
									BgL_evaluablezf31726zf3_1943 = ((bool_t) 0);
									BgL_library1727z00_1944 = BUNSPEC;
									BgL_userzf31728zf3_1945 = ((bool_t) 0);
									BgL_pragma1729z00_1946 = BUNSPEC;
									BgL_src1730z00_1947 = BUNSPEC;
									BgL_jvmzd2typezd2name1731z00_1948 =
										BGl_string4347z00zzsaw_jvm_funcallz00;
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_idz00) = ((obj_t) BgL_id1716z00_1933), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_namez00) = ((obj_t) BgL_name1717z00_1934), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1718z00_1935), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1719z00_1936), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_accessz00) =
										((obj_t) BgL_access1720z00_1937), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1721zd2_1938), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_removablez00) =
										((obj_t) BgL_removable1722z00_1939), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1723z00_1940), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_modulez00) =
										((obj_t) BgL_module1724z00_1941), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_importz00) =
										((obj_t) BgL_import1725z00_1942), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31726zf3_1943), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_libraryz00) =
										((obj_t) BgL_library1727z00_1944), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31728zf3_1945), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1729z00_1946), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_srcz00) = ((obj_t) BgL_src1730z00_1947), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1916))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1731z00_1948), BUNSPEC);
									BgL_res4334z00_1949 = BgL_new1732z00_1916;
							}} BgL_res4334z00_1949;
					}}
					{	/* SawJvm/funcall.scm 14 */
						long BgL_arg4262z00_1334;

						BgL_arg4262z00_1334 =
							BGl_classzd2numzd2zz__objectz00
							(BGl_indexedz00zzsaw_jvm_funcallz00);
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
							(BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00),
							BgL_arg4262z00_1334);
					}
					{	/* SawJvm/funcall.scm 14 */
						BgL_indexedz00_bglt BgL_arg4263z00_1335;

						{	/* SawJvm/funcall.scm 14 */
							BgL_indexedz00_bglt BgL_res4336z00_1958;

							{	/* SawJvm/funcall.scm 14 */
								int BgL_index3971z00_1952;

								BgL_index3971z00_1952 = (int) (((long) 0));
								{	/* SawJvm/funcall.scm 14 */
									BgL_indexedz00_bglt BgL_new3972z00_1953;

									BgL_new3972z00_1953 =
										((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_indexedz00_bgl))));
									{	/* SawJvm/funcall.scm 14 */
										BgL_indexedz00_bglt BgL_res4335z00_1957;

										{	/* SawJvm/funcall.scm 14 */
											BgL_indexedz00_bglt BgL_new3994z00_1954;

											BgL_new3994z00_1954 = BgL_new3972z00_1953;
											{	/* SawJvm/funcall.scm 14 */
												int BgL_index3993z00_1956;

												BgL_index3993z00_1956 = BgL_index3971z00_1952;
												((((BgL_indexedz00_bglt) CREF(BgL_new3994z00_1954))->
														BgL_indexz00) =
													((int) BgL_index3993z00_1956), BUNSPEC);
												BgL_res4335z00_1957 = BgL_new3994z00_1954;
										}} BgL_res4335z00_1957;
									}
									BgL_res4336z00_1958 = BgL_new3972z00_1953;
							}}
							BgL_arg4263z00_1335 = BgL_res4336z00_1958;
						}
						{	/* SawJvm/funcall.scm 14 */
							obj_t BgL_auxz00_2630;

							BgL_objectz00_bglt BgL_auxz00_2628;

							BgL_auxz00_2630 = (obj_t) (BgL_arg4263z00_1335);
							BgL_auxz00_2628 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2628, BgL_auxz00_2630);
				}}}
			else
				{	/* SawJvm/funcall.scm 14 */
					BFALSE;
				}
			return
				(BgL_indexedz00_bglt)
				(BGl_z52thezd2indexedzd2nilz52zzsaw_jvm_funcallz00);
		}
	}



/* _indexed-nil */
	obj_t BGl__indexedzd2nilzd2zzsaw_jvm_funcallz00(obj_t BgL_envz00_2028)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			return (obj_t) (BGl_indexedzd2nilzd2zzsaw_jvm_funcallz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_indexedz00zzsaw_jvm_funcallz00, BGl_proc4348z00zzsaw_jvm_funcallz00,
				BGl_string4349z00zzsaw_jvm_funcallz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_indexedz00zzsaw_jvm_funcallz00, BGl_proc4350z00zzsaw_jvm_funcallz00,
				BGl_string4351z00zzsaw_jvm_funcallz00);
		}
	}



/* struct+object->objec4085 */
	obj_t BGl_structzb2objectzd2ze3objec4085z83zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_2061, obj_t BgL_oz00_2062, obj_t BgL_sz00_2063)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{
				BgL_indexedz00_bglt BgL_oz00_1793;

				obj_t BgL_sz00_1794;

				{	/* SawJvm/funcall.scm 14 */
					BgL_indexedz00_bglt BgL_auxz00_2638;

					BgL_oz00_1793 = (BgL_indexedz00_bglt) (BgL_oz00_2062);
					BgL_sz00_1794 = BgL_sz00_2063;
					{

						{	/* SawJvm/funcall.scm 14 */
							obj_t BgL_old4001z00_1797;

							obj_t BgL_aux4002z00_1798;

							{	/* SawJvm/funcall.scm 14 */
								obj_t BgL_nextzd2method4084zd2_1803;

								BgL_nextzd2method4084zd2_1803 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1793),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_indexedz00zzsaw_jvm_funcallz00);
								if (PROCEDUREP(BgL_nextzd2method4084zd2_1803))
									{	/* SawJvm/funcall.scm 14 */
										BgL_old4001z00_1797 =
											PROCEDURE_ENTRY(BgL_nextzd2method4084zd2_1803)
											(BgL_nextzd2method4084zd2_1803, (obj_t) (BgL_oz00_1793),
											BgL_sz00_1794, BEOA);
									}
								else
									{	/* SawJvm/funcall.scm 14 */
										BgL_old4001z00_1797 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1793), BgL_sz00_1794));
									}
							}
							BgL_aux4002z00_1798 =
								STRUCT_REF(BgL_sz00_1794, (int) (((long) 0)));
							{	/* SawJvm/funcall.scm 14 */
								BgL_indexedz00_bglt BgL_new4003z00_1799;

								BgL_new4003z00_1799 =
									((BgL_indexedz00_bglt) (BgL_old4001z00_1797));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new4003z00_1799),
									BGl_classzd2numzd2zz__objectz00
									(BGl_indexedz00zzsaw_jvm_funcallz00));
								{	/* SawJvm/funcall.scm 14 */
									BgL_indexedz00_bglt BgL_arg4325z00_1801;

									{	/* SawJvm/funcall.scm 14 */
										obj_t BgL_arg4326z00_1802;

										BgL_arg4326z00_1802 =
											STRUCT_REF(BgL_aux4002z00_1798, (int) (((long) 0)));
										{	/* SawJvm/funcall.scm 14 */
											BgL_indexedz00_bglt BgL_res4339z00_2008;

											{	/* SawJvm/funcall.scm 14 */
												int BgL_index3971z00_2002;

												BgL_index3971z00_2002 = CINT(BgL_arg4326z00_1802);
												{	/* SawJvm/funcall.scm 14 */
													BgL_indexedz00_bglt BgL_new3972z00_2003;

													BgL_new3972z00_2003 =
														((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_indexedz00_bgl))));
													{	/* SawJvm/funcall.scm 14 */
														BgL_indexedz00_bglt BgL_res4338z00_2007;

														{	/* SawJvm/funcall.scm 14 */
															BgL_indexedz00_bglt BgL_new3994z00_2004;

															BgL_new3994z00_2004 = BgL_new3972z00_2003;
															{	/* SawJvm/funcall.scm 14 */
																int BgL_index3993z00_2006;

																BgL_index3993z00_2006 = BgL_index3971z00_2002;
																((((BgL_indexedz00_bglt)
																			CREF(BgL_new3994z00_2004))->
																		BgL_indexz00) =
																	((int) BgL_index3993z00_2006), BUNSPEC);
																BgL_res4338z00_2007 = BgL_new3994z00_2004;
														}} BgL_res4338z00_2007;
													}
													BgL_res4339z00_2008 = BgL_new3972z00_2003;
											}}
											BgL_arg4325z00_1801 = BgL_res4339z00_2008;
									}}
									{	/* SawJvm/funcall.scm 14 */
										obj_t BgL_auxz00_2662;

										BgL_objectz00_bglt BgL_auxz00_2660;

										BgL_auxz00_2662 = (obj_t) (BgL_arg4325z00_1801);
										BgL_auxz00_2660 =
											(BgL_objectz00_bglt) (BgL_new4003z00_1799);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2660, BgL_auxz00_2662);
								}}
								BgL_auxz00_2638 = BgL_new4003z00_1799;
					}}}
					return (obj_t) (BgL_auxz00_2638);
				}
			}
		}
	}



/* object->struct-index4083 */
	obj_t BGl_objectzd2ze3structzd2index4083ze3zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_2064, obj_t BgL_obj3998z00_2065)
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 14 */
			{
				BgL_indexedz00_bglt BgL_obj3998z00_1783;

				BgL_obj3998z00_1783 = (BgL_indexedz00_bglt) (BgL_obj3998z00_2065);
				{

					{	/* SawJvm/funcall.scm 14 */
						obj_t BgL_res3999z00_1786;

						{	/* SawJvm/funcall.scm 14 */
							obj_t BgL_nextzd2method4082zd2_1791;

							BgL_nextzd2method4082zd2_1791 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3998z00_1783),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_indexedz00zzsaw_jvm_funcallz00);
							if (PROCEDUREP(BgL_nextzd2method4082zd2_1791))
								{	/* SawJvm/funcall.scm 14 */
									BgL_res3999z00_1786 =
										PROCEDURE_ENTRY(BgL_nextzd2method4082zd2_1791)
										(BgL_nextzd2method4082zd2_1791,
										(obj_t) (BgL_obj3998z00_1783), BEOA);
								}
							else
								{	/* SawJvm/funcall.scm 14 */
									BgL_res3999z00_1786 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3998z00_1783));
								}
						}
						{	/* SawJvm/funcall.scm 14 */
							obj_t BgL_aux4000z00_1787;

							{	/* SawJvm/funcall.scm 14 */
								obj_t BgL_keyz00_1979;

								BgL_keyz00_1979 = CNST_TABLE_REF(((long) 24));
								BgL_aux4000z00_1787 =
									make_struct(BgL_keyz00_1979, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawJvm/funcall.scm 14 */
								int BgL_arg4321z00_1789;

								{
									obj_t BgL_auxz00_2679;

									{	/* SawJvm/funcall.scm 14 */
										BgL_objectz00_bglt BgL_auxz00_2680;

										BgL_auxz00_2680 =
											(BgL_objectz00_bglt) (BgL_obj3998z00_1783);
										BgL_auxz00_2679 = BGL_OBJECT_WIDENING(BgL_auxz00_2680);
									}
									BgL_arg4321z00_1789 =
										(((BgL_indexedz00_bglt) CREF(BgL_auxz00_2679))->
										BgL_indexz00);
								}
								{	/* SawJvm/funcall.scm 14 */
									obj_t BgL_auxz00_2686;

									int BgL_auxz00_2684;

									BgL_auxz00_2686 = BINT(BgL_arg4321z00_1789);
									BgL_auxz00_2684 = (int) (((long) 0));
									STRUCT_SET(BgL_aux4000z00_1787, BgL_auxz00_2684,
										BgL_auxz00_2686);
							}}
							{	/* SawJvm/funcall.scm 14 */
								int BgL_auxz00_2689;

								BgL_auxz00_2689 = (int) (((long) 0));
								STRUCT_SET(BgL_res3999z00_1786, BgL_auxz00_2689,
									BgL_aux4000z00_1787);
							}
							{	/* SawJvm/funcall.scm 14 */
								obj_t BgL_auxz00_2692;

								BgL_auxz00_2692 = STRUCT_KEY(BgL_res3999z00_1786);
								STRUCT_KEY_SET(BgL_aux4000z00_1787, BgL_auxz00_2692);
							}
							{	/* SawJvm/funcall.scm 14 */
								obj_t BgL_kz00_1994;

								BgL_kz00_1994 = CNST_TABLE_REF(((long) 24));
								STRUCT_KEY_SET(BgL_res3999z00_1786, BgL_kz00_1994);
							}
							return BgL_res3999z00_1786;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_funcallz00()
	{
		AN_OBJECT;
		{	/* SawJvm/funcall.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 256265790),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(((long) 3755867),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 71277553),
				BSTRING_TO_STRING(BGl_string4352z00zzsaw_jvm_funcallz00));
		}
	}

#ifdef __cplusplus
}
#endif
