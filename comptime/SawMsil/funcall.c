/*===========================================================================*/
/*   (SawMsil/funcall.scm)                                                   */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/funcall.scm)*/
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

	typedef struct BgL_dotnetz00_bgl
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
		obj_t BgL_outz00;
		obj_t BgL_qnamez00;
	}                *BgL_dotnetz00_bglt;

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;


	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	extern obj_t
		BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	extern obj_t BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectzd2ze3structz31zz__objectz00(BgL_objectz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(int, obj_t);
	static obj_t BGl__z52allocatezd2indexedz80zzmsil_funcallz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, bool_t,
		obj_t, obj_t, obj_t, obj_t, long, obj_t, obj_t, obj_t);
	extern obj_t BGl_castclassz00zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_loadzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_zc3anonymousza34150ze3z83zzmsil_funcallz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl__modulezd2funcallzf2applyz20zzmsil_funcallz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmsil_funcallz00();
	extern BgL_valuez00_bglt BGl_valuezd2nilzd2zzast_varz00();
	static obj_t BGl__makezd2indexedzd2zzmsil_funcallz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_libcallz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_structzb2objectzd2ze3objec4040z83zzmsil_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_compilezd2forzd2applyz00zzmsil_funcallz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_declarezd2tailzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2ze3structzd2index4038ze3zzmsil_funcallz00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmsil_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
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
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_compilezd2funizd2zzmsil_funcallz00(BgL_dotnetz00_bglt, long,
		obj_t, obj_t, obj_t);
	static long BGl_getzd2maxzd2zzmsil_funcallz00(obj_t, long);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t BGl_callzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	BGL_IMPORT obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_newobjz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	extern obj_t BGl_callzd2superzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_switchz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_openzd2methodzd2virtualz00zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt BGl_indexedzd2nilzd2zzmsil_funcallz00();
	static obj_t BGl__fillzd2indexedz12zc0zzmsil_funcallz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_funcallz00();
	extern obj_t BGl_loadzd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_dupz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT long BGl_classzd2numzd2zz__objectz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	static obj_t BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_fillzd2indexedz12zc0zzmsil_funcallz00(BgL_indexedz00_bglt, int);
	static obj_t BGl_compilezd2dispatchzd2zzmsil_funcallz00(BgL_dotnetz00_bglt,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_funcallz00 = BUNSPEC;
	static obj_t BGl_compilezd2forzd2funcalliz00zzmsil_funcallz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmsil_funcallz00();
	static bool_t BGl_keyzd2optzf3z21zzmsil_funcallz00(obj_t);
	static obj_t BGl__indexedzd2nilzd2zzmsil_funcallz00(obj_t);
	static long BGl_pushedz00zzmsil_funcallz00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	extern obj_t BGl_loadzd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2funcallzf2applyz20zzmsil_funcallz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		obj_t);
	extern BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_funcallz00();
	BGL_IMPORT obj_t make_struct(obj_t, int, obj_t);
	static obj_t BGl_compilezd2applyzd2zzmsil_funcallz00(BgL_dotnetz00_bglt,
		obj_t);
	extern obj_t BGl_storezd2parzd2zzmsil_outz00(BgL_dotnetz00_bglt, int);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_wideningzd2indexedzd2zzmsil_funcallz00(int);
	extern obj_t BGl_closezd2methodzd2zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_EXPORTED_DECL BgL_indexedz00_bglt
		BGl_makezd2indexedzd2zzmsil_funcallz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t, obj_t, bool_t, obj_t,
		bool_t, obj_t, obj_t, obj_t, int);
	extern BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl_getzd2labsz72za0zzmsil_funcallz00(long, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_indexedzf3zf3zzmsil_funcallz00(obj_t);
	BGL_IMPORT obj_t string_to_symbol(char *);
	BGL_IMPORT BgL_objectz00_bglt
		BGl_structzb2objectzd2ze3objectz83zz__objectz00(BgL_objectz00_bglt, obj_t);
	extern BgL_globalz00_bglt BGl_makezd2globalzd2zzast_varz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, obj_t,
		obj_t, bool_t, obj_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_pushzd2constantzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_indexedz00zzmsil_funcallz00 = BUNSPEC;
	extern obj_t BGl_labelz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34084ze3z83zzmsil_funcallz00(obj_t, obj_t,
		obj_t, obj_t);
	static bool_t BGl_neededzf3zf3zzmsil_funcallz00(long, obj_t);
	static obj_t BGl__indexedzf3zf3zzmsil_funcallz00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	extern obj_t BGl_storezd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_objectzd2initzd2zzmsil_funcallz00();
	extern obj_t BGl_returnz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl__wideningzd2indexedzd2zzmsil_funcallz00(obj_t, obj_t);
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_z52allocatezd2indexedz80zzmsil_funcallz00();
	static obj_t BGl_getzd2labszd2zzmsil_funcallz00(long, obj_t, obj_t);
	extern obj_t BGl_popz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_funcallz00();
	static obj_t BGl_funcalliz00zzmsil_funcallz00(BgL_dotnetz00_bglt, long,
		obj_t);
	static obj_t __cnst[13];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4275z00zzmsil_funcallz00,
		BgL_bgl_objectza7d2za7e3stru4285z00,
		BGl_objectzd2ze3structzd2index4038ze3zzmsil_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc4277z00zzmsil_funcallz00,
		BgL_bgl_structza7b2objectza74286z00,
		BGl_structzb2objectzd2ze3objec4040z83zzmsil_funcallz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string4266z00zzmsil_funcallz00,
		BgL_bgl_string4266za700za7za7m4287za7, "funcall", 7);
	      DEFINE_STRING(BGl_string4267z00zzmsil_funcallz00,
		BgL_bgl_string4267za700za7za7m4288za7, "bigloo.procedure", 16);
	      DEFINE_STRING(BGl_string4268z00zzmsil_funcallz00,
		BgL_bgl_string4268za700za7za7m4289za7, "", 0);
	      DEFINE_STRING(BGl_string4270z00zzmsil_funcallz00,
		BgL_bgl_string4270za700za7za7m4290za7, "L", 1);
	      DEFINE_STRING(BGl_string4269z00zzmsil_funcallz00,
		BgL_bgl_string4269za700za7za7m4291za7, "err", 3);
	      DEFINE_STRING(BGl_string4271z00zzmsil_funcallz00,
		BgL_bgl_string4271za700za7za7m4292za7, "make_vector", 11);
	      DEFINE_STRING(BGl_string4272z00zzmsil_funcallz00,
		BgL_bgl_string4272za700za7za7m4293za7, "bigloo.pair", 11);
	      DEFINE_STRING(BGl_string4273z00zzmsil_funcallz00,
		BgL_bgl_string4273za700za7za7m4294za7, "nil", 3);
	      DEFINE_STRING(BGl_string4274z00zzmsil_funcallz00,
		BgL_bgl_string4274za700za7za7m4295za7, "apply", 5);
	      DEFINE_STRING(BGl_string4276z00zzmsil_funcallz00,
		BgL_bgl_string4276za700za7za7m4296za7, "object->struct::struct", 22);
	      DEFINE_STRING(BGl_string4278z00zzmsil_funcallz00,
		BgL_bgl_string4278za700za7za7m4297za7, "struct+object->object::object", 29);
	      DEFINE_STRING(BGl_string4280z00zzmsil_funcallz00,
		BgL_bgl_string4280za700za7za7m4298za7,
		"_ indexed list_to_vector cdr car pair (obj) bigloo.foreign vector (obj obj) index int obj ",
		90);
	      DEFINE_STRING(BGl_string4279z00zzmsil_funcallz00,
		BgL_bgl_string4279za700za7za7m4299za7, "msil_funcall", 12);
	BGL_IMPORT obj_t BGl_objectzd2ze3structzd2envze3zz__objectz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzf3zd2envz21zzmsil_funcallz00,
		BgL_bgl__indexedza7f3za7f3za7za74300z00,
		BGl__indexedzf3zf3zzmsil_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2nilzd2envz00zzmsil_funcallz00,
		BgL_bgl__indexedza7d2nilza7d4301z00, BGl__indexedzd2nilzd2zzmsil_funcallz00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_z52allocatezd2indexedzd2envz52zzmsil_funcallz00,
		BgL_bgl__za752allocateza7d2i4302z00,
		BGl__z52allocatezd2indexedz80zzmsil_funcallz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fillzd2indexedz12zd2envz12zzmsil_funcallz00,
		BgL_bgl__fillza7d2indexedza74303z00,
		BGl__fillzd2indexedz12zc0zzmsil_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2indexedzd2envz00zzmsil_funcallz00,
		BgL_bgl__makeza7d2indexedza74304z00,
		BGl__makezd2indexedzd2zzmsil_funcallz00, 0L, BUNSPEC, 17);
	BGL_IMPORT obj_t BGl_notzd2envzd2zz__r4_booleans_6_1z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wideningzd2indexedzd2envz00zzmsil_funcallz00,
		BgL_bgl__wideningza7d2inde4305za7,
		BGl__wideningzd2indexedzd2zzmsil_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2funcallzf2applyzd2envzf2zzmsil_funcallz00,
		BgL_bgl__moduleza7d2funcal4306za7,
		BGl__modulezd2funcallzf2applyz20zzmsil_funcallz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00;



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_funcallz00(long
		BgL_checksumz00_2047, char *BgL_fromz00_2048)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_funcallz00();
					BGl_cnstzd2initzd2zzmsil_funcallz00();
					BGl_importedzd2moduleszd2initz00zzmsil_funcallz00();
					BGl_objectzd2initzd2zzmsil_funcallz00();
					BGl_methodzd2initzd2zzmsil_funcallz00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"msil_funcall");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"msil_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"msil_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"msil_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 0),
				"msil_funcall");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 1 */
			{	/* SawMsil/funcall.scm 1 */
				obj_t BgL_cportz00_2024;

				BgL_cportz00_2024 =
					bgl_open_input_string(BGl_string4280z00zzmsil_funcallz00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2025;

					BgL_iz00_2025 = ((long) 12);
				BgL_loopz00_2026:
					if ((BgL_iz00_2025 == ((long) -1)))
						{	/* SawMsil/funcall.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/funcall.scm 1 */
							{	/* SawMsil/funcall.scm 1 */
								obj_t BgL_arg4282z00_2028;

								{	/* SawMsil/funcall.scm 1 */

									{	/* SawMsil/funcall.scm 1 */
										obj_t BgL_locationz00_2030;

										BgL_locationz00_2030 = BBOOL(((bool_t) 0));
										{	/* SawMsil/funcall.scm 1 */

											BgL_arg4282z00_2028 =
												BGl_readz00zz__readerz00(BgL_cportz00_2024,
												BgL_locationz00_2030);
										}
									}
								}
								{	/* SawMsil/funcall.scm 1 */
									int BgL_auxz00_2070;

									BgL_auxz00_2070 = (int) (BgL_iz00_2025);
									CNST_TABLE_SET(BgL_auxz00_2070, BgL_arg4282z00_2028);
							}}
							{	/* SawMsil/funcall.scm 1 */
								int BgL_auxz00_2031;

								BgL_auxz00_2031 = (int) ((BgL_iz00_2025 - ((long) 1)));
								{
									long BgL_iz00_2075;

									BgL_iz00_2075 = (long) (BgL_auxz00_2031);
									BgL_iz00_2025 = BgL_iz00_2075;
									goto BgL_loopz00_2026;
								}
							}
						}
				}
			}
		}
	}



/* key-opt? */
	bool_t BGl_keyzd2optzf3z21zzmsil_funcallz00(obj_t BgL_vz00_1)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 18 */
			{	/* SawMsil/funcall.scm 19 */
				BgL_globalz00_bglt BgL_vz00_1031;

				BgL_vz00_1031 =
					BGl_globalzd2entryzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_vz00_1));
				{	/* SawMsil/funcall.scm 20 */
					BgL_valuez00_bglt BgL_valz00_1032;

					{
						BgL_variablez00_bglt BgL_auxz00_2079;

						BgL_auxz00_2079 = (BgL_variablez00_bglt) (BgL_vz00_1031);
						BgL_valz00_1032 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_2079))->BgL_valuez00);
					}
					{	/* SawMsil/funcall.scm 21 */
						bool_t BgL_testz00_2082;

						{	/* SawMsil/funcall.scm 21 */
							obj_t BgL_obj1955z00_1745;

							BgL_obj1955z00_1745 = (obj_t) (BgL_valz00_1032);
							BgL_testz00_2082 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj1955z00_1745,
								BGl_sfunz00zzast_varz00);
						}
						if (BgL_testz00_2082)
							{	/* SawMsil/funcall.scm 22 */
								obj_t BgL_cloz00_1034;

								{
									BgL_sfunz00_bglt BgL_auxz00_2085;

									BgL_auxz00_2085 = (BgL_sfunz00_bglt) (BgL_valz00_1032);
									BgL_cloz00_1034 =
										(((BgL_sfunz00_bglt) CREF(BgL_auxz00_2085))->
										BgL_thezd2closurezd2globalz00);
								}
								{	/* SawMsil/funcall.scm 23 */
									bool_t BgL_oz00_1035;

									bool_t BgL_kz00_1036;

									BgL_oz00_1035 =
										BGl_globalzd2optionalzf3z21zzast_varz00(BgL_cloz00_1034);
									BgL_kz00_1036 =
										BGl_globalzd2keyzf3z21zzast_varz00(BgL_cloz00_1034);
									if (BgL_oz00_1035)
										{	/* SawMsil/funcall.scm 24 */
											return BgL_oz00_1035;
										}
									else
										{	/* SawMsil/funcall.scm 24 */
											return BgL_kz00_1036;
										}
								}
							}
						else
							{	/* SawMsil/funcall.scm 21 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}
	}



/* module-funcall/apply */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2funcallzf2applyz20zzmsil_funcallz00(BgL_dotnetz00_bglt
		BgL_mez00_2)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 29 */
			{	/* SawMsil/funcall.scm 30 */
				obj_t BgL_pz00_1038;

				{	/* SawMsil/funcall.scm 30 */
					obj_t BgL_arg4048z00_1051;

					{
						BgL_backendz00_bglt BgL_auxz00_2091;

						BgL_auxz00_2091 = (BgL_backendz00_bglt) (BgL_mez00_2);
						BgL_arg4048z00_1051 =
							(((BgL_backendz00_bglt) CREF(BgL_auxz00_2091))->BgL_functionsz00);
					}
					BgL_pz00_1038 =
						BGl_getzd2procedureszd2zzsaw_proceduresz00(BgL_arg4048z00_1051);
				}
				{	/* SawMsil/funcall.scm 32 */
					long BgL_nz00_1039;

					BgL_nz00_1039 = ((long) 0);
					{
						obj_t BgL_l4022z00_1041;

						BgL_l4022z00_1041 = BgL_pz00_1038;
					BgL_zc3anonymousza34042ze3z83_1042:
						if (PAIRP(BgL_l4022z00_1041))
							{	/* SawMsil/funcall.scm 33 */
								{	/* SawMsil/funcall.scm 35 */
									obj_t BgL_varz00_1044;

									BgL_varz00_1044 = CAR(BgL_l4022z00_1041);
									{	/* SawMsil/funcall.scm 34 */
										BgL_globalz00_bglt BgL_obj4018z00_1045;

										BgL_obj4018z00_1045 =
											((BgL_globalz00_bglt)
											(BgL_globalz00_bglt) (BgL_varz00_1044));
										{	/* SawMsil/funcall.scm 34 */
											BgL_indexedz00_bglt BgL_arg4044z00_1046;

											{	/* SawMsil/funcall.scm 34 */
												BgL_indexedz00_bglt BgL_res4252z00_1756;

												{	/* SawMsil/funcall.scm 34 */
													int BgL_index3929z00_1750;

													BgL_index3929z00_1750 = (int) (BgL_nz00_1039);
													{	/* SawMsil/funcall.scm 34 */
														BgL_indexedz00_bglt BgL_new3930z00_1751;

														BgL_new3930z00_1751 =
															((BgL_indexedz00_bglt)
															BREF(GC_MALLOC(sizeof(struct
																		BgL_indexedz00_bgl))));
														{	/* SawMsil/funcall.scm 34 */
															BgL_indexedz00_bglt BgL_res4251z00_1755;

															{	/* SawMsil/funcall.scm 34 */
																BgL_indexedz00_bglt BgL_new3952z00_1752;

																BgL_new3952z00_1752 = BgL_new3930z00_1751;
																{	/* SawMsil/funcall.scm 34 */
																	int BgL_index3951z00_1754;

																	BgL_index3951z00_1754 = BgL_index3929z00_1750;
																	((((BgL_indexedz00_bglt)
																				CREF(BgL_new3952z00_1752))->
																			BgL_indexz00) =
																		((int) BgL_index3951z00_1754), BUNSPEC);
																	BgL_res4251z00_1755 = BgL_new3952z00_1752;
															}} BgL_res4251z00_1755;
														}
														BgL_res4252z00_1756 = BgL_new3930z00_1751;
												}}
												BgL_arg4044z00_1046 = BgL_res4252z00_1756;
											}
											{	/* SawMsil/funcall.scm 34 */
												obj_t BgL_auxz00_2105;

												BgL_objectz00_bglt BgL_auxz00_2103;

												BgL_auxz00_2105 = (obj_t) (BgL_arg4044z00_1046);
												BgL_auxz00_2103 =
													(BgL_objectz00_bglt) (BgL_obj4018z00_1045);
												BGL_OBJECT_WIDENING_SET(BgL_auxz00_2103,
													BgL_auxz00_2105);
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											(BgL_objectz00_bglt) (BgL_obj4018z00_1045),
											BGl_classzd2numzd2zz__objectz00
											(BGl_indexedz00zzmsil_funcallz00));
										BgL_obj4018z00_1045;
									}
									BgL_nz00_1039 = (BgL_nz00_1039 + ((long) 1));
								}
								{
									obj_t BgL_l4022z00_2112;

									BgL_l4022z00_2112 = CDR(BgL_l4022z00_1041);
									BgL_l4022z00_1041 = BgL_l4022z00_2112;
									goto BgL_zc3anonymousza34042ze3z83_1042;
								}
							}
						else
							{	/* SawMsil/funcall.scm 33 */
								((bool_t) 1);
							}
					}
				}
				if (NULLP(BgL_pz00_1038))
					{	/* SawMsil/funcall.scm 37 */
						return BFALSE;
					}
				else
					{	/* SawMsil/funcall.scm 37 */
						BGl_funcalliz00zzmsil_funcallz00(BgL_mez00_2, ((long) 0),
							BgL_pz00_1038);
						BGl_funcalliz00zzmsil_funcallz00(BgL_mez00_2, ((long) 1),
							BgL_pz00_1038);
						BGl_funcalliz00zzmsil_funcallz00(BgL_mez00_2, ((long) 2),
							BgL_pz00_1038);
						BGl_funcalliz00zzmsil_funcallz00(BgL_mez00_2, ((long) 3),
							BgL_pz00_1038);
						BGl_funcalliz00zzmsil_funcallz00(BgL_mez00_2, ((long) 4),
							BgL_pz00_1038);
						return BGl_compilezd2applyzd2zzmsil_funcallz00(BgL_mez00_2,
							BgL_pz00_1038);
					}
			}
		}
	}



/* _module-funcall/apply */
	obj_t BGl__modulezd2funcallzf2applyz20zzmsil_funcallz00(obj_t BgL_envz00_1967,
		obj_t BgL_mez00_1968)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 29 */
			return
				BGl_modulezd2funcallzf2applyz20zzmsil_funcallz00(
				(BgL_dotnetz00_bglt) (BgL_mez00_1968));
		}
	}



/* funcalli */
	obj_t BGl_funcalliz00zzmsil_funcallz00(BgL_dotnetz00_bglt BgL_mez00_3,
		long BgL_iz00_4, obj_t BgL_procsz00_5)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 48 */
			{	/* SawMsil/funcall.scm 60 */
				obj_t BgL_needz00_1053;

				if (NULLP(BgL_procsz00_5))
					{	/* SawMsil/funcall.scm 60 */
						BgL_needz00_1053 = BNIL;
					}
				else
					{	/* SawMsil/funcall.scm 60 */
						obj_t BgL_head4026z00_1073;

						{	/* SawMsil/funcall.scm 60 */
							bool_t BgL_arg4067z00_1086;

							BgL_arg4067z00_1086 =
								BGl_neededzf3zf3zzmsil_funcallz00(BgL_iz00_4,
								CAR(BgL_procsz00_5));
							BgL_head4026z00_1073 =
								MAKE_PAIR(BBOOL(BgL_arg4067z00_1086), BNIL);
						}
						{	/* SawMsil/funcall.scm 60 */
							obj_t BgL_g4029z00_1074;

							BgL_g4029z00_1074 = CDR(BgL_procsz00_5);
							{
								obj_t BgL_l4024z00_1076;

								obj_t BgL_tail4027z00_1077;

								BgL_l4024z00_1076 = BgL_g4029z00_1074;
								BgL_tail4027z00_1077 = BgL_head4026z00_1073;
							BgL_zc3anonymousza34061ze3z83_1078:
								if (NULLP(BgL_l4024z00_1076))
									{	/* SawMsil/funcall.scm 60 */
										BgL_needz00_1053 = BgL_head4026z00_1073;
									}
								else
									{	/* SawMsil/funcall.scm 60 */
										obj_t BgL_newtail4028z00_1080;

										{	/* SawMsil/funcall.scm 60 */
											bool_t BgL_arg4064z00_1082;

											BgL_arg4064z00_1082 =
												BGl_neededzf3zf3zzmsil_funcallz00(BgL_iz00_4,
												CAR(BgL_l4024z00_1076));
											BgL_newtail4028z00_1080 =
												MAKE_PAIR(BBOOL(BgL_arg4064z00_1082), BNIL);
										}
										SET_CDR(BgL_tail4027z00_1077, BgL_newtail4028z00_1080);
										{
											obj_t BgL_tail4027z00_2140;

											obj_t BgL_l4024z00_2138;

											BgL_l4024z00_2138 = CDR(BgL_l4024z00_1076);
											BgL_tail4027z00_2140 = BgL_newtail4028z00_1080;
											BgL_tail4027z00_1077 = BgL_tail4027z00_2140;
											BgL_l4024z00_1076 = BgL_l4024z00_2138;
											goto BgL_zc3anonymousza34061ze3z83_1078;
										}
									}
							}
						}
					}
				{	/* SawMsil/funcall.scm 61 */
					bool_t BgL_testz00_2141;

					{	/* SawMsil/funcall.scm 61 */
						obj_t BgL_list4059z00_1070;

						BgL_list4059z00_1070 = MAKE_PAIR(BgL_needz00_1053, BNIL);
						BgL_testz00_2141 =
							CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
							(BGl_notzd2envzd2zz__r4_booleans_6_1z00, BgL_list4059z00_1070));
					}
					if (BgL_testz00_2141)
						{	/* SawMsil/funcall.scm 61 */
							return BFALSE;
						}
					else
						{	/* SawMsil/funcall.scm 62 */
							obj_t BgL_fnamez00_1055;

							{	/* SawMsil/funcall.scm 62 */
								obj_t BgL_arg4058z00_1067;

								{	/* SawMsil/funcall.scm 62 */

									BgL_arg4058z00_1067 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_iz00_4, ((long) 10));
								}
								BgL_fnamez00_1055 =
									string_append(BGl_string4266z00zzmsil_funcallz00,
									BgL_arg4058z00_1067);
							}
							{	/* SawMsil/funcall.scm 62 */

								{	/* SawMsil/funcall.scm 63 */
									obj_t BgL_arg4050z00_1056;

									obj_t BgL_arg4051z00_1057;

									BgL_arg4050z00_1056 = CNST_TABLE_REF(((long) 0));
									{	/* SawMsil/funcall.scm 63 */
										obj_t BgL_list4052z00_1058;

										BgL_list4052z00_1058 =
											MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
										BgL_arg4051z00_1057 =
											BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
											(int) (BgL_iz00_4), BgL_list4052z00_1058);
									}
									BGl_openzd2methodzd2virtualz00zzmsil_outz00(BgL_mez00_3,
										BgL_arg4050z00_1056, BgL_fnamez00_1055,
										BgL_arg4051z00_1057);
								}
								{	/* SawMsil/funcall.scm 64 */
									long BgL_arg4053z00_1059;

									BgL_arg4053z00_1059 = (BgL_iz00_4 + ((long) 2));
									BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_mez00_3,
										BINT(BgL_arg4053z00_1059));
								}
								if (CBOOL
									(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00))
									{	/* SawMsil/funcall.scm 65 */
										((bool_t) 0);
									}
								else
									{
										long BgL_iiz00_1061;

										BgL_iiz00_1061 = ((long) 0);
									BgL_zc3anonymousza34054ze3z83_1062:
										if ((BgL_iiz00_1061 <= BgL_iz00_4))
											{	/* SawMsil/funcall.scm 67 */
												BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_3,
													(int) (BgL_iiz00_1061));
												{
													long BgL_iiz00_2162;

													BgL_iiz00_2162 = (BgL_iiz00_1061 + ((long) 1));
													BgL_iiz00_1061 = BgL_iiz00_2162;
													goto BgL_zc3anonymousza34054ze3z83_1062;
												}
											}
										else
											{	/* SawMsil/funcall.scm 67 */
												((bool_t) 0);
											}
									}
								BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_3, (int) (((long) 0)));
								BGl_loadzd2fieldzd2zzmsil_outz00(BgL_mez00_3,
									CNST_TABLE_REF(((long) 1)),
									BGl_string4267z00zzmsil_funcallz00,
									CNST_TABLE_REF(((long) 2)));
								BGl_compilezd2funizd2zzmsil_funcallz00(BgL_mez00_3, BgL_iz00_4,
									BgL_needz00_1053, BgL_procsz00_5, BgL_fnamez00_1055);
								return BGl_closezd2methodzd2zzmsil_outz00(BgL_mez00_3);
							}
						}
				}
			}
		}
	}



/* needed? */
	bool_t BGl_neededzf3zf3zzmsil_funcallz00(long BgL_iz00_2023,
		obj_t BgL_pz00_1089)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 59 */
			{	/* SawMsil/funcall.scm 50 */
				obj_t BgL_arityz00_1091;

				BgL_arityz00_1091 =
					BGl_globalzd2arityzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_pz00_1089));
				if (CBOOL(BgL_arityz00_1091))
					{	/* SawMsil/funcall.scm 54 */
						bool_t BgL__ortest_4019z00_1092;

						if (((long) CINT(BgL_arityz00_1091) >= ((long) 0)))
							{	/* SawMsil/funcall.scm 54 */
								if (BGl_keyzd2optzf3z21zzmsil_funcallz00(BgL_pz00_1089))
									{	/* SawMsil/funcall.scm 55 */
										BgL__ortest_4019z00_1092 =
											BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_arityz00_1091,
											BINT(BgL_iz00_2023));
									}
								else
									{	/* SawMsil/funcall.scm 55 */
										BgL__ortest_4019z00_1092 =
											((long) CINT(BgL_arityz00_1091) == BgL_iz00_2023);
							}}
						else
							{	/* SawMsil/funcall.scm 54 */
								BgL__ortest_4019z00_1092 = ((bool_t) 0);
							}
						if (BgL__ortest_4019z00_1092)
							{	/* SawMsil/funcall.scm 54 */
								return BgL__ortest_4019z00_1092;
							}
						else
							{	/* SawMsil/funcall.scm 54 */
								if (((long) CINT(BgL_arityz00_1091) < ((long) 0)))
									{	/* SawMsil/funcall.scm 58 */
										return
											BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_arityz00_1091,
											BINT((((long) -1) - BgL_iz00_2023)));
									}
								else
									{	/* SawMsil/funcall.scm 58 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* SawMsil/funcall.scm 51 */
						return (BgL_iz00_2023 <= ((long) 1));
		}}}
	}



/* compile-funi */
	obj_t BGl_compilezd2funizd2zzmsil_funcallz00(BgL_dotnetz00_bglt BgL_mez00_6,
		long BgL_iz00_7, obj_t BgL_needz00_8, obj_t BgL_procsz00_9,
		obj_t BgL_fnamez00_10)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 74 */
			{	/* SawMsil/funcall.scm 81 */
				obj_t BgL_labsz00_1100;

				BgL_labsz00_1100 =
					BGl_getzd2labsz72za0zzmsil_funcallz00(((long) 0), BgL_needz00_8,
					BgL_procsz00_9);
				BGl_switchz00zzmsil_outz00(BgL_mez00_6, BgL_labsz00_1100);
				BGl_labelz00zzmsil_outz00(BgL_mez00_6,
					BGl_string4268z00zzmsil_funcallz00,
					BGl_string4269z00zzmsil_funcallz00);
				if (CBOOL
					(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00))
					{
						long BgL_iiz00_1102;

						BgL_iiz00_1102 = ((long) 0);
					BgL_zc3anonymousza34073ze3z83_1103:
						if ((BgL_iiz00_1102 <= BgL_iz00_7))
							{	/* SawMsil/funcall.scm 86 */
								BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_6,
									(int) (BgL_iiz00_1102));
								{
									long BgL_iiz00_2201;

									BgL_iiz00_2201 = (BgL_iiz00_1102 + ((long) 1));
									BgL_iiz00_1102 = BgL_iiz00_2201;
									goto BgL_zc3anonymousza34073ze3z83_1103;
								}
							}
						else
							{	/* SawMsil/funcall.scm 86 */
								((bool_t) 0);
							}
					}
				else
					{	/* SawMsil/funcall.scm 84 */
						((bool_t) 0);
					}
				{	/* SawMsil/funcall.scm 88 */
					obj_t BgL_arg4076z00_1107;

					obj_t BgL_arg4078z00_1109;

					BgL_arg4076z00_1107 = CNST_TABLE_REF(((long) 0));
					{	/* SawMsil/funcall.scm 88 */
						obj_t BgL_list4079z00_1110;

						BgL_list4079z00_1110 = MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
						BgL_arg4078z00_1109 =
							BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(
							(int) (BgL_iz00_7), BgL_list4079z00_1110);
					}
					BGl_callzd2superzd2zzmsil_outz00(BgL_mez00_6, BgL_arg4076z00_1107,
						BGl_string4267z00zzmsil_funcallz00, BgL_fnamez00_10,
						BgL_arg4078z00_1109);
				}
				BGl_returnz00zzmsil_outz00(BgL_mez00_6);
				{	/* SawMsil/funcall.scm 90 */
					obj_t BgL_zc3anonymousza34084ze3z83_1971;

					BgL_zc3anonymousza34084ze3z83_1971 =
						make_fx_procedure(BGl_zc3anonymousza34084ze3z83zzmsil_funcallz00,
						(int) (((long) 3)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3anonymousza34084ze3z83_1971,
						(int) (((long) 0)), (obj_t) (BgL_mez00_6));
					PROCEDURE_SET(BgL_zc3anonymousza34084ze3z83_1971,
						(int) (((long) 1)), BINT(BgL_iz00_7));
					{	/* SawMsil/funcall.scm 90 */
						obj_t BgL_list4081z00_1112;

						{	/* SawMsil/funcall.scm 90 */
							obj_t BgL_arg4082z00_1113;

							{	/* SawMsil/funcall.scm 90 */
								obj_t BgL_arg4083z00_1114;

								BgL_arg4083z00_1114 = MAKE_PAIR(BgL_procsz00_9, BNIL);
								BgL_arg4082z00_1113 =
									MAKE_PAIR(BgL_labsz00_1100, BgL_arg4083z00_1114);
							}
							BgL_list4081z00_1112 =
								MAKE_PAIR(BgL_needz00_8, BgL_arg4082z00_1113);
						}
						return
							BGl_forzd2eachzd2zz__r4_control_features_6_9z00
							(BgL_zc3anonymousza34084ze3z83_1971, BgL_list4081z00_1112);
					}
				}
			}
		}
	}



/* get-labs' */
	obj_t BGl_getzd2labsz72za0zzmsil_funcallz00(long BgL_iz00_1126,
		obj_t BgL_nsz00_1127, obj_t BgL_psz00_1128)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 80 */
			{
				long BgL_iz00_1120;

				if (NULLP(BgL_nsz00_1127))
					{	/* SawMsil/funcall.scm 77 */
						return BNIL;
					}
				else
					{	/* SawMsil/funcall.scm 79 */
						obj_t BgL_arg4090z00_1131;

						obj_t BgL_arg4091z00_1132;

						{	/* SawMsil/funcall.scm 79 */
							bool_t BgL_testz00_2225;

							{	/* SawMsil/funcall.scm 79 */
								obj_t BgL_pairz00_1792;

								BgL_pairz00_1792 = BgL_nsz00_1127;
								BgL_testz00_2225 = CBOOL(CAR(BgL_pairz00_1792));
							}
							if (BgL_testz00_2225)
								{	/* SawMsil/funcall.scm 79 */
									BgL_iz00_1120 = BgL_iz00_1126;
									{	/* SawMsil/funcall.scm 75 */
										obj_t BgL_arg4087z00_1123;

										{	/* SawMsil/funcall.scm 75 */

											BgL_arg4087z00_1123 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_iz00_1120, ((long) 10));
										}
										BgL_arg4090z00_1131 =
											string_append(BGl_string4270z00zzmsil_funcallz00,
											BgL_arg4087z00_1123);
								}}
							else
								{	/* SawMsil/funcall.scm 79 */
									BgL_arg4090z00_1131 = BGl_string4269z00zzmsil_funcallz00;
								}
						}
						BgL_arg4091z00_1132 =
							BGl_getzd2labsz72za0zzmsil_funcallz00(
							(BgL_iz00_1126 + ((long) 1)),
							CDR(BgL_nsz00_1127), CDR(BgL_psz00_1128));
						return MAKE_PAIR(BgL_arg4090z00_1131, BgL_arg4091z00_1132);
					}
			}
		}
	}



/* <anonymous:4084> */
	obj_t BGl_zc3anonymousza34084ze3z83zzmsil_funcallz00(obj_t BgL_envz00_1972,
		obj_t BgL_nzf3zf3_1975, obj_t BgL_labz00_1976, obj_t BgL_pz00_1977)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 90 */
			{	/* SawMsil/funcall.scm 90 */
				obj_t BgL_mez00_1973;

				obj_t BgL_iz00_1974;

				BgL_mez00_1973 = PROCEDURE_REF(BgL_envz00_1972, (int) (((long) 0)));
				BgL_iz00_1974 = PROCEDURE_REF(BgL_envz00_1972, (int) (((long) 1)));
				{
					obj_t BgL_nzf3zf3_1115;

					obj_t BgL_labz00_1116;

					obj_t BgL_pz00_1117;

					BgL_nzf3zf3_1115 = BgL_nzf3zf3_1975;
					BgL_labz00_1116 = BgL_labz00_1976;
					BgL_pz00_1117 = BgL_pz00_1977;
					if (CBOOL(BgL_nzf3zf3_1115))
						{	/* SawMsil/funcall.scm 90 */
							return
								BGl_compilezd2forzd2funcalliz00zzmsil_funcallz00(BgL_mez00_1973,
								BgL_iz00_1974, BgL_labz00_1116, BgL_pz00_1117);
						}
					else
						{	/* SawMsil/funcall.scm 90 */
							return BFALSE;
						}
				}
			}
		}
	}



/* compile-for-funcalli */
	obj_t BGl_compilezd2forzd2funcalliz00zzmsil_funcallz00(obj_t BgL_mez00_11,
		obj_t BgL_iz00_12, obj_t BgL_labz00_13, obj_t BgL_pz00_14)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 96 */
			{	/* SawMsil/funcall.scm 97 */
				obj_t BgL_arityz00_1139;

				BgL_arityz00_1139 =
					BGl_globalzd2arityzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_pz00_14));
				{
					obj_t BgL_nz00_1171;

					obj_t BgL_iz00_1164;

					BGl_labelz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_11),
						BGl_string4268z00zzmsil_funcallz00, BgL_labz00_13);
					if (CBOOL
						(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00))
						{
							long BgL_iiz00_1143;

							BgL_iiz00_1143 = ((long) 0);
						BgL_zc3anonymousza34097ze3z83_1144:
							if ((BgL_iiz00_1143 <= (long) CINT(BgL_iz00_12)))
								{	/* SawMsil/funcall.scm 110 */
									BGl_loadzd2parzd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_11),
										(int) (BgL_iiz00_1143));
									{
										long BgL_iiz00_2254;

										BgL_iiz00_2254 = (BgL_iiz00_1143 + ((long) 1));
										BgL_iiz00_1143 = BgL_iiz00_2254;
										goto BgL_zc3anonymousza34097ze3z83_1144;
									}
								}
							else
								{	/* SawMsil/funcall.scm 110 */
									((bool_t) 0);
								}
						}
					else
						{	/* SawMsil/funcall.scm 108 */
							((bool_t) 0);
						}
					if ((BgL_arityz00_1139 == BFALSE))
						{	/* SawMsil/funcall.scm 113 */
							if (((long) CINT(BgL_iz00_12) == ((long) 0)))
								{	/* SawMsil/funcall.scm 114 */
									BGl_popz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_11));
									BGl_loadzd2globalzd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_11),
										(BgL_globalz00_bglt) (BgL_pz00_14));
								}
							else
								{	/* SawMsil/funcall.scm 114 */
									BGl_storezd2globalzd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_11),
										(BgL_globalz00_bglt) (BgL_pz00_14));
								}
						}
					else
						{	/* SawMsil/funcall.scm 113 */
							if (((long) CINT(BgL_arityz00_1139) >= ((long) 0)))
								{	/* SawMsil/funcall.scm 118 */
									if (CBOOL
										(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00))
										{	/* SawMsil/funcall.scm 119 */
											BGl_declarezd2tailzd2zzmsil_outz00(
												(BgL_dotnetz00_bglt) (BgL_mez00_11));
										}
									else
										{	/* SawMsil/funcall.scm 119 */
											BFALSE;
										}
									if (BGl_keyzd2optzf3z21zzmsil_funcallz00(BgL_pz00_14))
										{	/* SawMsil/funcall.scm 121 */
											BgL_globalz00_bglt BgL_vz00_1152;

											BgL_vz00_1152 =
												BGl_globalzd2entryzd2zzbackend_cplibz00(
												(BgL_globalz00_bglt) (BgL_pz00_14));
											{	/* SawMsil/funcall.scm 122 */
												obj_t BgL_arg4104z00_1153;

												obj_t BgL_arg4105z00_1154;

												obj_t BgL_arg4106z00_1155;

												obj_t BgL_arg4107z00_1156;

												BgL_arg4104z00_1153 = CNST_TABLE_REF(((long) 4));
												BgL_arg4105z00_1154 = CNST_TABLE_REF(((long) 5));
												BgL_iz00_1164 = BgL_iz00_12;
												{	/* SawMsil/funcall.scm 99 */
													obj_t BgL_arg4116z00_1166;

													{	/* SawMsil/funcall.scm 99 */
														obj_t BgL_arg4118z00_1168;

														{	/* SawMsil/funcall.scm 99 */

															BgL_arg4118z00_1168 =
																BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																((long) CINT(BgL_iz00_1164), ((long) 10));
														}
														BgL_arg4116z00_1166 =
															string_append(BGl_string4271z00zzmsil_funcallz00,
															BgL_arg4118z00_1168);
													}
													BgL_arg4106z00_1155 =
														string_to_symbol(BSTRING_TO_STRING
														(BgL_arg4116z00_1166));
												}
												{	/* SawMsil/funcall.scm 124 */
													obj_t BgL_list4108z00_1157;

													BgL_list4108z00_1157 =
														MAKE_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
													BgL_arg4107z00_1156 =
														BGl_makezd2listzd2zz__r4_pairs_and_lists_6_3z00(CINT
														(BgL_iz00_12), BgL_list4108z00_1157);
												}
												BGl_libcallz00zzmsil_outz00(
													(BgL_dotnetz00_bglt) (BgL_mez00_11),
													BgL_arg4104z00_1153, BgL_arg4105z00_1154,
													BgL_arg4106z00_1155, BgL_arg4107z00_1156);
											}
											BGl_callzd2globalzd2zzmsil_outz00(
												(BgL_dotnetz00_bglt) (BgL_mez00_11), BgL_vz00_1152);
										}
									else
										{	/* SawMsil/funcall.scm 120 */
											BGl_callzd2globalzd2zzmsil_outz00(
												(BgL_dotnetz00_bglt) (BgL_mez00_11),
												BGl_globalzd2entryzd2zzbackend_cplibz00(
													(BgL_globalz00_bglt) (BgL_pz00_14)));
										}
								}
							else
								{	/* SawMsil/funcall.scm 118 */
									BGl_pushzd2constantzd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_11),
										BGl_string4273z00zzmsil_funcallz00);
									{	/* SawMsil/funcall.scm 129 */
										obj_t BgL_arg4110z00_1159;

										{	/* SawMsil/funcall.scm 129 */
											obj_t BgL_arg4111z00_1160;

											{	/* SawMsil/funcall.scm 129 */
												obj_t BgL_list4112z00_1161;

												{	/* SawMsil/funcall.scm 129 */
													obj_t BgL_arg4114z00_1163;

													BgL_arg4114z00_1163 =
														MAKE_PAIR(BgL_arityz00_1139, BNIL);
													BgL_list4112z00_1161 =
														MAKE_PAIR(BINT(((long) 1)), BgL_arg4114z00_1163);
												}
												BgL_arg4111z00_1160 =
													BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_list4112z00_1161);
											}
											BgL_arg4110z00_1159 =
												BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_12,
												BgL_arg4111z00_1160);
										}
										BgL_nz00_1171 = BgL_arg4110z00_1159;
									BgL_zc3anonymousza34119ze3z83_1172:
										if (BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_nz00_1171,
												BINT(((long) 0))))
											{	/* SawMsil/funcall.scm 101 */
												if (CBOOL
													(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00))
													{	/* SawMsil/funcall.scm 103 */
														BGl_declarezd2tailzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_11));
													}
												else
													{	/* SawMsil/funcall.scm 103 */
														BFALSE;
													}
												BGl_callzd2globalzd2zzmsil_outz00(
													(BgL_dotnetz00_bglt) (BgL_mez00_11),
													BGl_globalzd2entryzd2zzbackend_cplibz00(
														(BgL_globalz00_bglt) (BgL_pz00_14)));
											}
										else
											{	/* SawMsil/funcall.scm 101 */
												BGl_newobjz00zzmsil_outz00(
													(BgL_dotnetz00_bglt) (BgL_mez00_11),
													BGl_string4272z00zzmsil_funcallz00,
													CNST_TABLE_REF(((long) 3)));
												{	/* SawMsil/funcall.scm 106 */
													long BgL_arg4122z00_1175;

													BgL_arg4122z00_1175 =
														((long) CINT(BgL_nz00_1171) - ((long) 1));
													{
														obj_t BgL_nz00_2322;

														BgL_nz00_2322 = BINT(BgL_arg4122z00_1175);
														BgL_nz00_1171 = BgL_nz00_2322;
														goto BgL_zc3anonymousza34119ze3z83_1172;
													}
												}
											}
									}
								}
						}
					return
						BGl_returnz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_11));
				}
			}
		}
	}



/* compile-apply */
	obj_t BGl_compilezd2applyzd2zzmsil_funcallz00(BgL_dotnetz00_bglt BgL_mez00_15,
		obj_t BgL_procsz00_16)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 135 */
			{	/* SawMsil/funcall.scm 136 */
				obj_t BgL_needz00_1178;

				if (NULLP(BgL_procsz00_16))
					{	/* SawMsil/funcall.scm 136 */
						BgL_needz00_1178 = BNIL;
					}
				else
					{	/* SawMsil/funcall.scm 136 */
						obj_t BgL_head4032z00_1184;

						{	/* SawMsil/funcall.scm 136 */
							obj_t BgL_arg4133z00_1197;

							{	/* SawMsil/funcall.scm 136 */
								obj_t BgL_arg4135z00_1199;

								BgL_arg4135z00_1199 = CAR(BgL_procsz00_16);
								BgL_arg4133z00_1197 =
									BGl_globalzd2arityzd2zzbackend_cplibz00(
									(BgL_globalz00_bglt) (BgL_arg4135z00_1199));
							}
							BgL_head4032z00_1184 = MAKE_PAIR(BgL_arg4133z00_1197, BNIL);
						}
						{	/* SawMsil/funcall.scm 136 */
							obj_t BgL_g4035z00_1185;

							BgL_g4035z00_1185 = CDR(BgL_procsz00_16);
							{
								obj_t BgL_l4030z00_1187;

								obj_t BgL_tail4033z00_1188;

								BgL_l4030z00_1187 = BgL_g4035z00_1185;
								BgL_tail4033z00_1188 = BgL_head4032z00_1184;
							BgL_zc3anonymousza34127ze3z83_1189:
								if (NULLP(BgL_l4030z00_1187))
									{	/* SawMsil/funcall.scm 136 */
										BgL_needz00_1178 = BgL_head4032z00_1184;
									}
								else
									{	/* SawMsil/funcall.scm 136 */
										obj_t BgL_newtail4034z00_1191;

										{	/* SawMsil/funcall.scm 136 */
											obj_t BgL_arg4130z00_1193;

											{	/* SawMsil/funcall.scm 136 */
												obj_t BgL_arg4132z00_1195;

												BgL_arg4132z00_1195 = CAR(BgL_l4030z00_1187);
												BgL_arg4130z00_1193 =
													BGl_globalzd2arityzd2zzbackend_cplibz00(
													(BgL_globalz00_bglt) (BgL_arg4132z00_1195));
											}
											BgL_newtail4034z00_1191 =
												MAKE_PAIR(BgL_arg4130z00_1193, BNIL);
										}
										SET_CDR(BgL_tail4033z00_1188, BgL_newtail4034z00_1191);
										{
											obj_t BgL_tail4033z00_2342;

											obj_t BgL_l4030z00_2340;

											BgL_l4030z00_2340 = CDR(BgL_l4030z00_1187);
											BgL_tail4033z00_2342 = BgL_newtail4034z00_1191;
											BgL_tail4033z00_1188 = BgL_tail4033z00_2342;
											BgL_l4030z00_1187 = BgL_l4030z00_2340;
											goto BgL_zc3anonymousza34127ze3z83_1189;
										}
									}
							}
						}
					}
				{	/* SawMsil/funcall.scm 137 */
					bool_t BgL_testz00_2343;

					{	/* SawMsil/funcall.scm 137 */
						obj_t BgL_list4125z00_1181;

						BgL_list4125z00_1181 = MAKE_PAIR(BgL_needz00_1178, BNIL);
						BgL_testz00_2343 =
							CBOOL(BGl_everyz00zz__r4_pairs_and_lists_6_3z00
							(BGl_notzd2envzd2zz__r4_booleans_6_1z00, BgL_list4125z00_1181));
					}
					if (BgL_testz00_2343)
						{	/* SawMsil/funcall.scm 137 */
							return BFALSE;
						}
					else
						{	/* SawMsil/funcall.scm 137 */
							BGl_openzd2methodzd2virtualz00zzmsil_outz00(BgL_mez00_15,
								CNST_TABLE_REF(((long) 0)), BGl_string4274z00zzmsil_funcallz00,
								CNST_TABLE_REF(((long) 6)));
							{	/* SawMsil/funcall.scm 139 */
								long BgL_arg4124z00_1180;

								BgL_arg4124z00_1180 =
									BGl_getzd2maxzd2zzmsil_funcallz00(BgL_procsz00_16,
									((long) 0));
								BGl_declarezd2maxstackzd2zzmsil_outz00(BgL_mez00_15,
									BINT(BgL_arg4124z00_1180));
							}
							if (CBOOL
								(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00))
								{	/* SawMsil/funcall.scm 140 */
									BFALSE;
								}
							else
								{	/* SawMsil/funcall.scm 140 */
									BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_15,
										(int) (((long) 0)));
								}
							BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_15, (int) (((long) 0)));
							BGl_loadzd2fieldzd2zzmsil_outz00(BgL_mez00_15,
								CNST_TABLE_REF(((long) 1)), BGl_string4267z00zzmsil_funcallz00,
								CNST_TABLE_REF(((long) 2)));
							BGl_compilezd2dispatchzd2zzmsil_funcallz00(BgL_mez00_15,
								BgL_needz00_1178, BgL_procsz00_16);
							return BGl_closezd2methodzd2zzmsil_outz00(BgL_mez00_15);
						}
				}
			}
		}
	}



/* get-max */
	long BGl_getzd2maxzd2zzmsil_funcallz00(obj_t BgL_lz00_17, long BgL_maxz00_18)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 147 */
		BGl_getzd2maxzd2zzmsil_funcallz00:
			if (NULLP(BgL_lz00_17))
				{	/* SawMsil/funcall.scm 148 */
					return BgL_maxz00_18;
				}
			else
				{	/* SawMsil/funcall.scm 150 */
					long BgL_nbpushz00_1201;

					BgL_nbpushz00_1201 = BGl_pushedz00zzmsil_funcallz00(CAR(BgL_lz00_17));
					{	/* SawMsil/funcall.scm 151 */
						obj_t BgL_arg4137z00_1202;

						long BgL_arg4138z00_1203;

						BgL_arg4137z00_1202 = CDR(BgL_lz00_17);
						if ((BgL_nbpushz00_1201 > BgL_maxz00_18))
							{	/* SawMsil/funcall.scm 151 */
								BgL_arg4138z00_1203 = BgL_nbpushz00_1201;
							}
						else
							{	/* SawMsil/funcall.scm 151 */
								BgL_arg4138z00_1203 = BgL_maxz00_18;
							}
						{
							long BgL_maxz00_2372;

							obj_t BgL_lz00_2371;

							BgL_lz00_2371 = BgL_arg4137z00_1202;
							BgL_maxz00_2372 = BgL_arg4138z00_1203;
							BgL_maxz00_18 = BgL_maxz00_2372;
							BgL_lz00_17 = BgL_lz00_2371;
							goto BGl_getzd2maxzd2zzmsil_funcallz00;
						}
					}
				}
		}
	}



/* pushed */
	long BGl_pushedz00zzmsil_funcallz00(obj_t BgL_pz00_19)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 153 */
			{	/* SawMsil/funcall.scm 154 */
				obj_t BgL_arityz00_1206;

				BgL_arityz00_1206 =
					BGl_globalzd2arityzd2zzbackend_cplibz00(
					(BgL_globalz00_bglt) (BgL_pz00_19));
				if ((BgL_arityz00_1206 == BFALSE))
					{	/* SawMsil/funcall.scm 155 */
						return ((long) 2);
					}
				else
					{	/* SawMsil/funcall.scm 155 */
						if (((long) CINT(BgL_arityz00_1206) == ((long) 0)))
							{	/* SawMsil/funcall.scm 156 */
								return ((long) 2);
							}
						else
							{	/* SawMsil/funcall.scm 156 */
								if (((long) CINT(BgL_arityz00_1206) > ((long) 0)))
									{	/* SawMsil/funcall.scm 157 */
										return ((long) CINT(BgL_arityz00_1206) + ((long) 1));
									}
								else
									{	/* SawMsil/funcall.scm 157 */
										return
											(((long) 2) +
											(((long) -1) - (long) CINT(BgL_arityz00_1206)));
		}}}}}
	}



/* compile-dispatch */
	obj_t BGl_compilezd2dispatchzd2zzmsil_funcallz00(BgL_dotnetz00_bglt
		BgL_mez00_20, obj_t BgL_needz00_21, obj_t BgL_procsz00_22)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 160 */
			{	/* SawMsil/funcall.scm 167 */
				obj_t BgL_labsz00_1214;

				BgL_labsz00_1214 =
					BGl_getzd2labszd2zzmsil_funcallz00(((long) 0), BgL_needz00_21,
					BgL_procsz00_22);
				BGl_switchz00zzmsil_outz00(BgL_mez00_20, BgL_labsz00_1214);
				BGl_labelz00zzmsil_outz00(BgL_mez00_20,
					BGl_string4268z00zzmsil_funcallz00,
					BGl_string4269z00zzmsil_funcallz00);
				if (CBOOL
					(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00))
					{	/* SawMsil/funcall.scm 170 */
						BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_20, (int) (((long) 0)));
					}
				else
					{	/* SawMsil/funcall.scm 170 */
						BFALSE;
					}
				BGl_loadzd2parzd2zzmsil_outz00(BgL_mez00_20, (int) (((long) 1)));
				BGl_callzd2superzd2zzmsil_outz00(BgL_mez00_20,
					CNST_TABLE_REF(((long) 0)), BGl_string4267z00zzmsil_funcallz00,
					BGl_string4274z00zzmsil_funcallz00, CNST_TABLE_REF(((long) 6)));
				BGl_returnz00zzmsil_outz00(BgL_mez00_20);
				{	/* SawMsil/funcall.scm 175 */
					obj_t BgL_zc3anonymousza34150ze3z83_1978;

					BgL_zc3anonymousza34150ze3z83_1978 =
						make_fx_procedure(BGl_zc3anonymousza34150ze3z83zzmsil_funcallz00,
						(int) (((long) 3)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3anonymousza34150ze3z83_1978,
						(int) (((long) 0)), (obj_t) (BgL_mez00_20));
					{	/* SawMsil/funcall.scm 175 */
						obj_t BgL_list4147z00_1216;

						{	/* SawMsil/funcall.scm 175 */
							obj_t BgL_arg4148z00_1217;

							{	/* SawMsil/funcall.scm 175 */
								obj_t BgL_arg4149z00_1218;

								BgL_arg4149z00_1218 = MAKE_PAIR(BgL_procsz00_22, BNIL);
								BgL_arg4148z00_1217 =
									MAKE_PAIR(BgL_labsz00_1214, BgL_arg4149z00_1218);
							}
							BgL_list4147z00_1216 =
								MAKE_PAIR(BgL_needz00_21, BgL_arg4148z00_1217);
						}
						return
							BGl_forzd2eachzd2zz__r4_control_features_6_9z00
							(BgL_zc3anonymousza34150ze3z83_1978, BgL_list4147z00_1216);
					}
				}
			}
		}
	}



/* get-labs */
	obj_t BGl_getzd2labszd2zzmsil_funcallz00(long BgL_iz00_1230,
		obj_t BgL_nsz00_1231, obj_t BgL_psz00_1232)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 166 */
			{
				long BgL_iz00_1224;

				if (NULLP(BgL_nsz00_1231))
					{	/* SawMsil/funcall.scm 163 */
						return BNIL;
					}
				else
					{	/* SawMsil/funcall.scm 165 */
						obj_t BgL_arg4156z00_1235;

						obj_t BgL_arg4158z00_1236;

						{	/* SawMsil/funcall.scm 165 */
							bool_t BgL_testz00_2413;

							{	/* SawMsil/funcall.scm 165 */
								obj_t BgL_pairz00_1836;

								BgL_pairz00_1836 = BgL_nsz00_1231;
								BgL_testz00_2413 = CBOOL(CAR(BgL_pairz00_1836));
							}
							if (BgL_testz00_2413)
								{	/* SawMsil/funcall.scm 165 */
									BgL_iz00_1224 = BgL_iz00_1230;
									{	/* SawMsil/funcall.scm 161 */
										obj_t BgL_arg4153z00_1227;

										{	/* SawMsil/funcall.scm 161 */

											BgL_arg4153z00_1227 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_iz00_1224, ((long) 10));
										}
										BgL_arg4156z00_1235 =
											string_append(BGl_string4270z00zzmsil_funcallz00,
											BgL_arg4153z00_1227);
								}}
							else
								{	/* SawMsil/funcall.scm 165 */
									BgL_arg4156z00_1235 = BGl_string4269z00zzmsil_funcallz00;
								}
						}
						BgL_arg4158z00_1236 =
							BGl_getzd2labszd2zzmsil_funcallz00(
							(BgL_iz00_1230 + ((long) 1)),
							CDR(BgL_nsz00_1231), CDR(BgL_psz00_1232));
						return MAKE_PAIR(BgL_arg4156z00_1235, BgL_arg4158z00_1236);
					}
			}
		}
	}



/* <anonymous:4150> */
	obj_t BGl_zc3anonymousza34150ze3z83zzmsil_funcallz00(obj_t BgL_envz00_1979,
		obj_t BgL_nzf3zf3_1981, obj_t BgL_labz00_1982, obj_t BgL_pz00_1983)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 175 */
			{	/* SawMsil/funcall.scm 175 */
				obj_t BgL_mez00_1980;

				BgL_mez00_1980 = PROCEDURE_REF(BgL_envz00_1979, (int) (((long) 0)));
				{
					obj_t BgL_nzf3zf3_1219;

					obj_t BgL_labz00_1220;

					obj_t BgL_pz00_1221;

					BgL_nzf3zf3_1219 = BgL_nzf3zf3_1981;
					BgL_labz00_1220 = BgL_labz00_1982;
					BgL_pz00_1221 = BgL_pz00_1983;
					if (CBOOL(BgL_nzf3zf3_1219))
						{	/* SawMsil/funcall.scm 175 */
							return
								BGl_compilezd2forzd2applyz00zzmsil_funcallz00(BgL_mez00_1980,
								BgL_labz00_1220, BgL_pz00_1221);
						}
					else
						{	/* SawMsil/funcall.scm 175 */
							return BFALSE;
						}
				}
			}
		}
	}



/* compile-for-apply */
	obj_t BGl_compilezd2forzd2applyz00zzmsil_funcallz00(obj_t BgL_mez00_23,
		obj_t BgL_labz00_24, obj_t BgL_pz00_25)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 180 */
			{	/* SawMsil/funcall.scm 181 */
				BgL_typez00_bglt BgL_pairz00_1243;

				BgL_typez00_bglt BgL_objz00_1244;

				BgL_pairz00_1243 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 7)));
				BgL_objz00_1244 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0)));
				{
					obj_t BgL_mez00_1251;

					obj_t BgL_nz00_1252;

					bool_t BgL_fixedarityzf3zf3_1253;

					{	/* SawMsil/funcall.scm 203 */
						obj_t BgL_arityz00_1246;

						BgL_arityz00_1246 =
							BGl_globalzd2arityzd2zzbackend_cplibz00(
							(BgL_globalz00_bglt) (BgL_pz00_25));
						BGl_labelz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_23),
							BGl_string4268z00zzmsil_funcallz00, BgL_labz00_24);
						if (CBOOL
							(BGl_za2dotnetzd2monozd2workaroundzd2switchza2zd2zzengine_paramz00))
							{	/* SawMsil/funcall.scm 205 */
								BGl_loadzd2parzd2zzmsil_outz00(
									(BgL_dotnetz00_bglt) (BgL_mez00_23), (int) (((long) 0)));
							}
						else
							{	/* SawMsil/funcall.scm 205 */
								BFALSE;
							}
						if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_arityz00_1246,
								BINT(((long) 0))))
							{	/* SawMsil/funcall.scm 207 */
								if (BGl_keyzd2optzf3z21zzmsil_funcallz00(BgL_pz00_25))
									{	/* SawMsil/funcall.scm 208 */
										BGl_loadzd2parzd2zzmsil_outz00(
											(BgL_dotnetz00_bglt) (BgL_mez00_23), (int) (((long) 1)));
										BGl_libcallz00zzmsil_outz00(
											(BgL_dotnetz00_bglt) (BgL_mez00_23),
											CNST_TABLE_REF(((long) 4)),
											CNST_TABLE_REF(((long) 5)),
											CNST_TABLE_REF(((long) 10)), CNST_TABLE_REF(((long) 6)));
									}
								else
									{	/* SawMsil/funcall.scm 208 */
										BgL_mez00_1251 = BgL_mez00_23;
										BgL_nz00_1252 = BgL_arityz00_1246;
										BgL_fixedarityzf3zf3_1253 = ((bool_t) 1);
									BgL_zc3anonymousza34167ze3z83_1254:
										if (((long) CINT(BgL_nz00_1252) == ((long) 0)))
											{	/* SawMsil/funcall.scm 184 */
												if (BgL_fixedarityzf3zf3_1253)
													{	/* SawMsil/funcall.scm 185 */
														BFALSE;
													}
												else
													{	/* SawMsil/funcall.scm 185 */
														BGl_loadzd2parzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															(int) (((long) 1)));
											}}
										else
											{	/* SawMsil/funcall.scm 184 */
												if (((long) CINT(BgL_nz00_1252) == ((long) 1)))
													{	/* SawMsil/funcall.scm 187 */
														BGl_loadzd2parzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															(int) (((long) 1)));
														BGl_castclassz00zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															BgL_pairz00_1243);
														BGl_loadzd2fieldzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															(obj_t) (BgL_objz00_1244),
															BGl_string4272z00zzmsil_funcallz00,
															CNST_TABLE_REF(((long) 8)));
														if (BgL_fixedarityzf3zf3_1253)
															{	/* SawMsil/funcall.scm 191 */
																BFALSE;
															}
														else
															{	/* SawMsil/funcall.scm 191 */
																BGl_loadzd2parzd2zzmsil_outz00(
																	(BgL_dotnetz00_bglt) (BgL_mez00_1251),
																	(int) (((long) 1)));
																BGl_castclassz00zzmsil_outz00(
																	(BgL_dotnetz00_bglt) (BgL_mez00_1251),
																	BgL_pairz00_1243);
																BGl_loadzd2fieldzd2zzmsil_outz00(
																	(BgL_dotnetz00_bglt) (BgL_mez00_1251),
																	(obj_t) (BgL_objz00_1244),
																	BGl_string4272z00zzmsil_funcallz00,
																	CNST_TABLE_REF(((long) 9)));
													}}
												else
													{	/* SawMsil/funcall.scm 187 */
														BGl_loadzd2parzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															(int) (((long) 1)));
														BGl_castclassz00zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															BgL_pairz00_1243);
														BGl_dupz00zzmsil_outz00((BgL_dotnetz00_bglt)
															(BgL_mez00_1251));
														BGl_loadzd2fieldzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															(obj_t) (BgL_objz00_1244),
															BGl_string4272z00zzmsil_funcallz00,
															CNST_TABLE_REF(((long) 9)));
														BGl_storezd2parzd2zzmsil_outz00((BgL_dotnetz00_bglt)
															(BgL_mez00_1251), (int) (((long) 1)));
														BGl_loadzd2fieldzd2zzmsil_outz00(
															(BgL_dotnetz00_bglt) (BgL_mez00_1251),
															(obj_t) (BgL_objz00_1244),
															BGl_string4272z00zzmsil_funcallz00,
															CNST_TABLE_REF(((long) 8)));
														{
															obj_t BgL_nz00_2502;

															BgL_nz00_2502 =
																BGl_2zd2zd2zz__r4_numbers_6_5z00(BgL_nz00_1252,
																BINT(((long) 1)));
															BgL_nz00_1252 = BgL_nz00_2502;
															goto BgL_zc3anonymousza34167ze3z83_1254;
														}
													}
											}
									}
							}
						else
							{
								bool_t BgL_fixedarityzf3zf3_2509;

								obj_t BgL_nz00_2506;

								obj_t BgL_mez00_2505;

								BgL_mez00_2505 = BgL_mez00_23;
								BgL_nz00_2506 =
									BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(((long) -1)),
									BgL_arityz00_1246);
								BgL_fixedarityzf3zf3_2509 = ((bool_t) 0);
								BgL_fixedarityzf3zf3_1253 = BgL_fixedarityzf3zf3_2509;
								BgL_nz00_1252 = BgL_nz00_2506;
								BgL_mez00_1251 = BgL_mez00_2505;
								goto BgL_zc3anonymousza34167ze3z83_1254;
							}
						if (CBOOL(BGl_za2dotnetzd2tailzd2funcallza2z00zzengine_paramz00))
							{	/* SawMsil/funcall.scm 214 */
								BGl_declarezd2tailzd2zzmsil_outz00(
									(BgL_dotnetz00_bglt) (BgL_mez00_23));
							}
						else
							{	/* SawMsil/funcall.scm 214 */
								BFALSE;
							}
						BGl_callzd2globalzd2zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_23),
							BGl_globalzd2entryzd2zzbackend_cplibz00(
								(BgL_globalz00_bglt) (BgL_pz00_25)));
						return
							BGl_returnz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_23));
					}
				}
			}
		}
	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 1 */
			{	/* SawMsil/funcall.scm 15 */
				obj_t BgL_arg4171z00_1259;

				obj_t BgL_arg4172z00_1260;

				obj_t BgL_arg4175z00_1263;

				BgL_arg4171z00_1259 = CNST_TABLE_REF(((long) 11));
				BgL_arg4172z00_1260 = BGl_globalz00zzast_varz00;
				{	/* SawMsil/funcall.scm 15 */
					obj_t BgL_v4036z00_1264;

					BgL_v4036z00_1264 = create_vector((int) (((long) 0)));
					BgL_arg4175z00_1263 = BgL_v4036z00_1264;
				}
				BGl_indexedz00zzmsil_funcallz00 =
					BGl_registerzd2classz12zc0zz__objectz00(BgL_arg4171z00_1259,
					BgL_arg4172z00_1260, ((bool_t) 0), BFALSE,
					BGl_z52allocatezd2indexedzd2envz52zzmsil_funcallz00,
					BGl_indexedzd2nilzd2envz00zzmsil_funcallz00,
					BGl_indexedzf3zd2envz21zzmsil_funcallz00, ((long) 281989186), BFALSE,
					BFALSE, BgL_arg4175z00_1263);
			}
			return (BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00 =
				BUNSPEC, BUNSPEC);
		}
	}



/* indexed? */
	BGL_EXPORTED_DEF bool_t BGl_indexedzf3zf3zzmsil_funcallz00(obj_t
		BgL_obj3962z00_26)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			return
				BGl_iszd2azf3z21zz__objectz00(BgL_obj3962z00_26,
				BGl_indexedz00zzmsil_funcallz00);
		}
	}



/* _indexed? */
	obj_t BGl__indexedzf3zf3zzmsil_funcallz00(obj_t BgL_envz00_1986,
		obj_t BgL_obj3962z00_1987)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			return
				BBOOL(BGl_iszd2azf3z21zz__objectz00(BgL_obj3962z00_1987,
					BGl_indexedz00zzmsil_funcallz00));
		}
	}



/* widening-indexed */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_wideningzd2indexedzd2zzmsil_funcallz00(int BgL_index3929z00_30)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{	/* SawMsil/funcall.scm 15 */
				BgL_indexedz00_bglt BgL_new3930z00_1845;

				BgL_new3930z00_1845 =
					((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_indexedz00_bgl))));
				{	/* SawMsil/funcall.scm 15 */
					BgL_indexedz00_bglt BgL_res4253z00_1849;

					{	/* SawMsil/funcall.scm 15 */
						BgL_indexedz00_bglt BgL_new3952z00_1846;

						BgL_new3952z00_1846 = BgL_new3930z00_1845;
						{	/* SawMsil/funcall.scm 15 */
							int BgL_index3951z00_1848;

							BgL_index3951z00_1848 = BgL_index3929z00_30;
							((((BgL_indexedz00_bglt) CREF(BgL_new3952z00_1846))->
									BgL_indexz00) = ((int) BgL_index3951z00_1848), BUNSPEC);
							BgL_res4253z00_1849 = BgL_new3952z00_1846;
					}} BgL_res4253z00_1849;
				}
				return BgL_new3930z00_1845;
			}
		}
	}



/* _widening-indexed */
	obj_t BGl__wideningzd2indexedzd2zzmsil_funcallz00(obj_t BgL_envz00_1988,
		obj_t BgL_index3929z00_1989)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			return
				(obj_t) (BGl_wideningzd2indexedzd2zzmsil_funcallz00(CINT
					(BgL_index3929z00_1989)));
		}
	}



/* make-indexed */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_makezd2indexedzd2zzmsil_funcallz00(obj_t BgL_id3933z00_31,
		obj_t BgL_name3934z00_32, BgL_typez00_bglt BgL_type3935z00_33,
		BgL_valuez00_bglt BgL_value3936z00_34, obj_t BgL_access3937z00_35,
		obj_t BgL_fastzd2alpha3938zd2_36, obj_t BgL_removable3939z00_37,
		long BgL_occurrence3940z00_38, obj_t BgL_module3941z00_39,
		obj_t BgL_import3942z00_40, bool_t BgL_evaluablezf33943zf3_41,
		obj_t BgL_library3944z00_42, bool_t BgL_userzf33945zf3_43,
		obj_t BgL_pragma3946z00_44, obj_t BgL_src3947z00_45,
		obj_t BgL_jvmzd2typezd2name3948z00_46, int BgL_index3932z00_47)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{	/* SawMsil/funcall.scm 15 */
				BgL_globalz00_bglt BgL_aux3949z00_1850;

				BgL_aux3949z00_1850 =
					BGl_makezd2globalzd2zzast_varz00(BgL_id3933z00_31, BgL_name3934z00_32,
					BgL_type3935z00_33, BgL_value3936z00_34, BgL_access3937z00_35,
					BgL_fastzd2alpha3938zd2_36, BgL_removable3939z00_37,
					BgL_occurrence3940z00_38, BgL_module3941z00_39, BgL_import3942z00_40,
					BgL_evaluablezf33943zf3_41, BgL_library3944z00_42,
					BgL_userzf33945zf3_43, BgL_pragma3946z00_44, BgL_src3947z00_45,
					BgL_jvmzd2typezd2name3948z00_46);
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_aux3949z00_1850),
					BGl_classzd2numzd2zz__objectz00(BGl_indexedz00zzmsil_funcallz00));
				{	/* SawMsil/funcall.scm 15 */
					BgL_indexedz00_bglt BgL_arg4178z00_1852;

					{	/* SawMsil/funcall.scm 15 */
						BgL_indexedz00_bglt BgL_res4255z00_1862;

						{	/* SawMsil/funcall.scm 15 */
							BgL_indexedz00_bglt BgL_new3930z00_1857;

							BgL_new3930z00_1857 =
								((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_indexedz00_bgl))));
							{	/* SawMsil/funcall.scm 15 */
								BgL_indexedz00_bglt BgL_res4254z00_1861;

								{	/* SawMsil/funcall.scm 15 */
									BgL_indexedz00_bglt BgL_new3952z00_1858;

									BgL_new3952z00_1858 = BgL_new3930z00_1857;
									{	/* SawMsil/funcall.scm 15 */
										int BgL_index3951z00_1860;

										BgL_index3951z00_1860 = BgL_index3932z00_47;
										((((BgL_indexedz00_bglt) CREF(BgL_new3952z00_1858))->
												BgL_indexz00) = ((int) BgL_index3951z00_1860), BUNSPEC);
										BgL_res4254z00_1861 = BgL_new3952z00_1858;
								}} BgL_res4254z00_1861;
							}
							BgL_res4255z00_1862 = BgL_new3930z00_1857;
						}
						BgL_arg4178z00_1852 = BgL_res4255z00_1862;
					}
					{	/* SawMsil/funcall.scm 15 */
						obj_t BgL_auxz00_2540;

						BgL_objectz00_bglt BgL_auxz00_2538;

						BgL_auxz00_2540 = (obj_t) (BgL_arg4178z00_1852);
						BgL_auxz00_2538 = (BgL_objectz00_bglt) (BgL_aux3949z00_1850);
						BGL_OBJECT_WIDENING_SET(BgL_auxz00_2538, BgL_auxz00_2540);
				}}
				return
					((BgL_indexedz00_bglt) (BgL_indexedz00_bglt) (BgL_aux3949z00_1850));
			}
		}
	}



/* _make-indexed */
	obj_t BGl__makezd2indexedzd2zzmsil_funcallz00(obj_t BgL_envz00_1990,
		obj_t BgL_id3933z00_1991, obj_t BgL_name3934z00_1992,
		obj_t BgL_type3935z00_1993, obj_t BgL_value3936z00_1994,
		obj_t BgL_access3937z00_1995, obj_t BgL_fastzd2alpha3938zd2_1996,
		obj_t BgL_removable3939z00_1997, obj_t BgL_occurrence3940z00_1998,
		obj_t BgL_module3941z00_1999, obj_t BgL_import3942z00_2000,
		obj_t BgL_evaluablezf33943zf3_2001, obj_t BgL_library3944z00_2002,
		obj_t BgL_userzf33945zf3_2003, obj_t BgL_pragma3946z00_2004,
		obj_t BgL_src3947z00_2005, obj_t BgL_jvmzd2typezd2name3948z00_2006,
		obj_t BgL_index3932z00_2007)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			return
				(obj_t) (BGl_makezd2indexedzd2zzmsil_funcallz00(BgL_id3933z00_1991,
					BgL_name3934z00_1992, (BgL_typez00_bglt) (BgL_type3935z00_1993),
					(BgL_valuez00_bglt) (BgL_value3936z00_1994), BgL_access3937z00_1995,
					BgL_fastzd2alpha3938zd2_1996, BgL_removable3939z00_1997,
					(long) CINT(BgL_occurrence3940z00_1998), BgL_module3941z00_1999,
					BgL_import3942z00_2000, CBOOL(BgL_evaluablezf33943zf3_2001),
					BgL_library3944z00_2002, CBOOL(BgL_userzf33945zf3_2003),
					BgL_pragma3946z00_2004, BgL_src3947z00_2005,
					BgL_jvmzd2typezd2name3948z00_2006, CINT(BgL_index3932z00_2007)));
		}
	}



/* fill-indexed! */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt
		BGl_fillzd2indexedz12zc0zzmsil_funcallz00(BgL_indexedz00_bglt
		BgL_new3952z00_48, int BgL_index3951z00_49)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{	/* SawMsil/funcall.scm 15 */
				int BgL_index3951z00_2037;

				BgL_index3951z00_2037 = BgL_index3951z00_49;
				((((BgL_indexedz00_bglt) CREF(BgL_new3952z00_48))->BgL_indexz00) =
					((int) BgL_index3951z00_2037), BUNSPEC);
				return BgL_new3952z00_48;
			}
		}
	}



/* _fill-indexed! */
	obj_t BGl__fillzd2indexedz12zc0zzmsil_funcallz00(obj_t BgL_envz00_2008,
		obj_t BgL_new3952z00_2009, obj_t BgL_index3951z00_2010)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{	/* SawMsil/funcall.scm 15 */
				BgL_indexedz00_bglt BgL_auxz00_2554;

				{	/* SawMsil/funcall.scm 15 */
					BgL_indexedz00_bglt BgL_res4283z00_2041;

					{	/* SawMsil/funcall.scm 15 */
						BgL_indexedz00_bglt BgL_new3952z00_2038;

						int BgL_index3951z00_2039;

						BgL_new3952z00_2038 = (BgL_indexedz00_bglt) (BgL_new3952z00_2009);
						BgL_index3951z00_2039 = CINT(BgL_index3951z00_2010);
						{	/* SawMsil/funcall.scm 15 */
							int BgL_index3951z00_2040;

							BgL_index3951z00_2040 = BgL_index3951z00_2039;
							((((BgL_indexedz00_bglt) CREF(BgL_new3952z00_2038))->
									BgL_indexz00) = ((int) BgL_index3951z00_2040), BUNSPEC);
							BgL_res4283z00_2041 = BgL_new3952z00_2038;
					}}
					BgL_auxz00_2554 = BgL_res4283z00_2041;
				}
				return (obj_t) (BgL_auxz00_2554);
			}
		}
	}



/* %allocate-indexed */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_z52allocatezd2indexedz80zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{	/* SawMsil/funcall.scm 15 */
				BgL_globalz00_bglt BgL_new3955z00_2042;

				BgL_new3955z00_2042 =
					((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
								BgL_globalz00_bgl))));
				BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3955z00_2042),
					BGl_classzd2numzd2zz__objectz00(BGl_indexedz00zzmsil_funcallz00));
				{	/* SawMsil/funcall.scm 15 */
					BgL_objectz00_bglt BgL_auxz00_2563;

					BgL_auxz00_2563 = (BgL_objectz00_bglt) (BgL_new3955z00_2042);
					BGL_OBJECT_WIDENING_SET(BgL_auxz00_2563, BFALSE);
				}
				return BgL_new3955z00_2042;
			}
		}
	}



/* _%allocate-indexed */
	obj_t BGl__z52allocatezd2indexedz80zzmsil_funcallz00(obj_t BgL_envz00_1984)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{	/* SawMsil/funcall.scm 15 */
				BgL_globalz00_bglt BgL_auxz00_2566;

				{	/* SawMsil/funcall.scm 15 */
					BgL_globalz00_bglt BgL_res4284z00_2046;

					{	/* SawMsil/funcall.scm 15 */
						BgL_globalz00_bglt BgL_new3955z00_2044;

						BgL_new3955z00_2044 =
							((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
										BgL_globalz00_bgl))));
						BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt) (BgL_new3955z00_2044),
							BGl_classzd2numzd2zz__objectz00(BGl_indexedz00zzmsil_funcallz00));
						{	/* SawMsil/funcall.scm 15 */
							BgL_objectz00_bglt BgL_auxz00_2571;

							BgL_auxz00_2571 = (BgL_objectz00_bglt) (BgL_new3955z00_2044);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2571, BFALSE);
						}
						BgL_res4284z00_2046 = BgL_new3955z00_2044;
					}
					BgL_auxz00_2566 = BgL_res4284z00_2046;
				}
				return (obj_t) (BgL_auxz00_2566);
			}
		}
	}



/* indexed-nil */
	BGL_EXPORTED_DEF BgL_indexedz00_bglt BGl_indexedzd2nilzd2zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			if ((BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00 == BUNSPEC))
				{	/* SawMsil/funcall.scm 15 */
					{	/* SawMsil/funcall.scm 15 */
						BgL_globalz00_bglt BgL_res4256z00_1872;

						{	/* SawMsil/funcall.scm 15 */
							BgL_globalz00_bglt BgL_new1750z00_1868;

							BgL_new1750z00_1868 =
								((BgL_globalz00_bglt) BREF(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							BGL_OBJECT_CLASS_NUM_SET((BgL_objectz00_bglt)
								(BgL_new1750z00_1868),
								BGl_classzd2numzd2zz__objectz00(BGl_globalz00zzast_varz00));
							{	/* SawMsil/funcall.scm 15 */
								BgL_objectz00_bglt BgL_auxz00_2581;

								BgL_auxz00_2581 = (BgL_objectz00_bglt) (BgL_new1750z00_1868);
								BGL_OBJECT_WIDENING_SET(BgL_auxz00_2581, BFALSE);
							}
							BgL_res4256z00_1872 = BgL_new1750z00_1868;
						}
						BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00 =
							(obj_t) (BgL_res4256z00_1872);
					}
					{	/* SawMsil/funcall.scm 15 */
						obj_t BgL_arg4182z00_1274;

						BgL_typez00_bglt BgL_arg4183z00_1275;

						BgL_valuez00_bglt BgL_arg4184z00_1276;

						obj_t BgL_arg4186z00_1278;

						BgL_arg4182z00_1274 = CNST_TABLE_REF(((long) 12));
						BgL_arg4183z00_1275 = BGl_typezd2nilzd2zztype_typez00();
						BgL_arg4184z00_1276 = BGl_valuezd2nilzd2zzast_varz00();
						BgL_arg4186z00_1278 = CNST_TABLE_REF(((long) 12));
						{	/* SawMsil/funcall.scm 15 */
							BgL_globalz00_bglt BgL_res4257z00_1906;

							{	/* SawMsil/funcall.scm 15 */
								BgL_globalz00_bglt BgL_new1732z00_1873;

								BgL_new1732z00_1873 =
									(BgL_globalz00_bglt)
									(BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00);
								{	/* SawMsil/funcall.scm 15 */
									obj_t BgL_id1716z00_1890;

									obj_t BgL_name1717z00_1891;

									BgL_typez00_bglt BgL_type1718z00_1892;

									BgL_valuez00_bglt BgL_value1719z00_1893;

									obj_t BgL_access1720z00_1894;

									obj_t BgL_fastzd2alpha1721zd2_1895;

									obj_t BgL_removable1722z00_1896;

									long BgL_occurrence1723z00_1897;

									obj_t BgL_module1724z00_1898;

									obj_t BgL_import1725z00_1899;

									bool_t BgL_evaluablezf31726zf3_1900;

									obj_t BgL_library1727z00_1901;

									bool_t BgL_userzf31728zf3_1902;

									obj_t BgL_pragma1729z00_1903;

									obj_t BgL_src1730z00_1904;

									obj_t BgL_jvmzd2typezd2name1731z00_1905;

									BgL_id1716z00_1890 = BgL_arg4182z00_1274;
									BgL_name1717z00_1891 = BUNSPEC;
									BgL_type1718z00_1892 = BgL_arg4183z00_1275;
									BgL_value1719z00_1893 = BgL_arg4184z00_1276;
									BgL_access1720z00_1894 = BUNSPEC;
									BgL_fastzd2alpha1721zd2_1895 = BUNSPEC;
									BgL_removable1722z00_1896 = BUNSPEC;
									BgL_occurrence1723z00_1897 = ((long) 0);
									BgL_module1724z00_1898 = BgL_arg4186z00_1278;
									BgL_import1725z00_1899 = BUNSPEC;
									BgL_evaluablezf31726zf3_1900 = ((bool_t) 0);
									BgL_library1727z00_1901 = BUNSPEC;
									BgL_userzf31728zf3_1902 = ((bool_t) 0);
									BgL_pragma1729z00_1903 = BUNSPEC;
									BgL_src1730z00_1904 = BUNSPEC;
									BgL_jvmzd2typezd2name1731z00_1905 =
										BGl_string4268z00zzmsil_funcallz00;
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_idz00) = ((obj_t) BgL_id1716z00_1890), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_namez00) = ((obj_t) BgL_name1717z00_1891), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_type1718z00_1892), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_valuez00) =
										((BgL_valuez00_bglt) BgL_value1719z00_1893), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_accessz00) =
										((obj_t) BgL_access1720z00_1894), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_fastzd2alphazd2) =
										((obj_t) BgL_fastzd2alpha1721zd2_1895), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_removablez00) =
										((obj_t) BgL_removable1722z00_1896), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_occurrencez00) =
										((long) BgL_occurrence1723z00_1897), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_modulez00) =
										((obj_t) BgL_module1724z00_1898), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_importz00) =
										((obj_t) BgL_import1725z00_1899), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_evaluablezf3zf3) =
										((bool_t) BgL_evaluablezf31726zf3_1900), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_libraryz00) =
										((obj_t) BgL_library1727z00_1901), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_userzf3zf3) =
										((bool_t) BgL_userzf31728zf3_1902), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_pragmaz00) =
										((obj_t) BgL_pragma1729z00_1903), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_srcz00) = ((obj_t) BgL_src1730z00_1904), BUNSPEC);
									((((BgL_globalz00_bglt) CREF(BgL_new1732z00_1873))->
											BgL_jvmzd2typezd2namez00) =
										((obj_t) BgL_jvmzd2typezd2name1731z00_1905), BUNSPEC);
									BgL_res4257z00_1906 = BgL_new1732z00_1873;
							}} BgL_res4257z00_1906;
					}}
					{	/* SawMsil/funcall.scm 15 */
						long BgL_arg4188z00_1280;

						BgL_arg4188z00_1280 =
							BGl_classzd2numzd2zz__objectz00(BGl_indexedz00zzmsil_funcallz00);
						BGL_OBJECT_CLASS_NUM_SET(
							(BgL_objectz00_bglt)
							(BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00),
							BgL_arg4188z00_1280);
					}
					{	/* SawMsil/funcall.scm 15 */
						BgL_indexedz00_bglt BgL_arg4189z00_1281;

						{	/* SawMsil/funcall.scm 15 */
							BgL_indexedz00_bglt BgL_res4259z00_1915;

							{	/* SawMsil/funcall.scm 15 */
								int BgL_index3929z00_1909;

								BgL_index3929z00_1909 = (int) (((long) 0));
								{	/* SawMsil/funcall.scm 15 */
									BgL_indexedz00_bglt BgL_new3930z00_1910;

									BgL_new3930z00_1910 =
										((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
													BgL_indexedz00_bgl))));
									{	/* SawMsil/funcall.scm 15 */
										BgL_indexedz00_bglt BgL_res4258z00_1914;

										{	/* SawMsil/funcall.scm 15 */
											BgL_indexedz00_bglt BgL_new3952z00_1911;

											BgL_new3952z00_1911 = BgL_new3930z00_1910;
											{	/* SawMsil/funcall.scm 15 */
												int BgL_index3951z00_1913;

												BgL_index3951z00_1913 = BgL_index3929z00_1909;
												((((BgL_indexedz00_bglt) CREF(BgL_new3952z00_1911))->
														BgL_indexz00) =
													((int) BgL_index3951z00_1913), BUNSPEC);
												BgL_res4258z00_1914 = BgL_new3952z00_1911;
										}} BgL_res4258z00_1914;
									}
									BgL_res4259z00_1915 = BgL_new3930z00_1910;
							}}
							BgL_arg4189z00_1281 = BgL_res4259z00_1915;
						}
						{	/* SawMsil/funcall.scm 15 */
							obj_t BgL_auxz00_2614;

							BgL_objectz00_bglt BgL_auxz00_2612;

							BgL_auxz00_2614 = (obj_t) (BgL_arg4189z00_1281);
							BgL_auxz00_2612 =
								(BgL_objectz00_bglt)
								(BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00);
							BGL_OBJECT_WIDENING_SET(BgL_auxz00_2612, BgL_auxz00_2614);
				}}}
			else
				{	/* SawMsil/funcall.scm 15 */
					BFALSE;
				}
			return
				(BgL_indexedz00_bglt) (BGl_z52thezd2indexedzd2nilz52zzmsil_funcallz00);
		}
	}



/* _indexed-nil */
	obj_t BGl__indexedzd2nilzd2zzmsil_funcallz00(obj_t BgL_envz00_1985)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			return (obj_t) (BGl_indexedzd2nilzd2zzmsil_funcallz00());
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_objectzd2ze3structzd2envze3zz__objectz00,
				BGl_indexedz00zzmsil_funcallz00, BGl_proc4275z00zzmsil_funcallz00,
				BGl_string4276z00zzmsil_funcallz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
				BGl_indexedz00zzmsil_funcallz00, BGl_proc4277z00zzmsil_funcallz00,
				BGl_string4278z00zzmsil_funcallz00);
		}
	}



/* struct+object->objec4040 */
	obj_t BGl_structzb2objectzd2ze3objec4040z83zzmsil_funcallz00(obj_t
		BgL_envz00_2018, obj_t BgL_oz00_2019, obj_t BgL_sz00_2020)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{
				BgL_indexedz00_bglt BgL_oz00_1732;

				obj_t BgL_sz00_1733;

				{	/* SawMsil/funcall.scm 15 */
					BgL_indexedz00_bglt BgL_auxz00_2622;

					BgL_oz00_1732 = (BgL_indexedz00_bglt) (BgL_oz00_2019);
					BgL_sz00_1733 = BgL_sz00_2020;
					{

						{	/* SawMsil/funcall.scm 15 */
							obj_t BgL_old3959z00_1736;

							obj_t BgL_aux3960z00_1737;

							{	/* SawMsil/funcall.scm 15 */
								obj_t BgL_nextzd2method4039zd2_1742;

								BgL_nextzd2method4039zd2_1742 =
									BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
									(BgL_objectz00_bglt) (BgL_oz00_1732),
									BGl_structzb2objectzd2ze3objectzd2envz51zz__objectz00,
									BGl_indexedz00zzmsil_funcallz00);
								if (PROCEDUREP(BgL_nextzd2method4039zd2_1742))
									{	/* SawMsil/funcall.scm 15 */
										BgL_old3959z00_1736 =
											PROCEDURE_ENTRY(BgL_nextzd2method4039zd2_1742)
											(BgL_nextzd2method4039zd2_1742, (obj_t) (BgL_oz00_1732),
											BgL_sz00_1733, BEOA);
									}
								else
									{	/* SawMsil/funcall.scm 15 */
										BgL_old3959z00_1736 =
											(obj_t) (BGl_structzb2objectzd2ze3objectz83zz__objectz00(
												(BgL_objectz00_bglt) (BgL_oz00_1732), BgL_sz00_1733));
									}
							}
							BgL_aux3960z00_1737 =
								STRUCT_REF(BgL_sz00_1733, (int) (((long) 0)));
							{	/* SawMsil/funcall.scm 15 */
								BgL_indexedz00_bglt BgL_new3961z00_1738;

								BgL_new3961z00_1738 =
									((BgL_indexedz00_bglt) (BgL_old3959z00_1736));
								BGL_OBJECT_CLASS_NUM_SET(
									(BgL_objectz00_bglt) (BgL_new3961z00_1738),
									BGl_classzd2numzd2zz__objectz00
									(BGl_indexedz00zzmsil_funcallz00));
								{	/* SawMsil/funcall.scm 15 */
									BgL_indexedz00_bglt BgL_arg4248z00_1740;

									{	/* SawMsil/funcall.scm 15 */
										obj_t BgL_arg4249z00_1741;

										BgL_arg4249z00_1741 =
											STRUCT_REF(BgL_aux3960z00_1737, (int) (((long) 0)));
										{	/* SawMsil/funcall.scm 15 */
											BgL_indexedz00_bglt BgL_res4262z00_1965;

											{	/* SawMsil/funcall.scm 15 */
												int BgL_index3929z00_1959;

												BgL_index3929z00_1959 = CINT(BgL_arg4249z00_1741);
												{	/* SawMsil/funcall.scm 15 */
													BgL_indexedz00_bglt BgL_new3930z00_1960;

													BgL_new3930z00_1960 =
														((BgL_indexedz00_bglt) BREF(GC_MALLOC(sizeof(struct
																	BgL_indexedz00_bgl))));
													{	/* SawMsil/funcall.scm 15 */
														BgL_indexedz00_bglt BgL_res4261z00_1964;

														{	/* SawMsil/funcall.scm 15 */
															BgL_indexedz00_bglt BgL_new3952z00_1961;

															BgL_new3952z00_1961 = BgL_new3930z00_1960;
															{	/* SawMsil/funcall.scm 15 */
																int BgL_index3951z00_1963;

																BgL_index3951z00_1963 = BgL_index3929z00_1959;
																((((BgL_indexedz00_bglt)
																			CREF(BgL_new3952z00_1961))->
																		BgL_indexz00) =
																	((int) BgL_index3951z00_1963), BUNSPEC);
																BgL_res4261z00_1964 = BgL_new3952z00_1961;
														}} BgL_res4261z00_1964;
													}
													BgL_res4262z00_1965 = BgL_new3930z00_1960;
											}}
											BgL_arg4248z00_1740 = BgL_res4262z00_1965;
									}}
									{	/* SawMsil/funcall.scm 15 */
										obj_t BgL_auxz00_2646;

										BgL_objectz00_bglt BgL_auxz00_2644;

										BgL_auxz00_2646 = (obj_t) (BgL_arg4248z00_1740);
										BgL_auxz00_2644 =
											(BgL_objectz00_bglt) (BgL_new3961z00_1738);
										BGL_OBJECT_WIDENING_SET(BgL_auxz00_2644, BgL_auxz00_2646);
								}}
								BgL_auxz00_2622 = BgL_new3961z00_1738;
					}}}
					return (obj_t) (BgL_auxz00_2622);
				}
			}
		}
	}



/* object->struct-index4038 */
	obj_t BGl_objectzd2ze3structzd2index4038ze3zzmsil_funcallz00(obj_t
		BgL_envz00_2021, obj_t BgL_obj3956z00_2022)
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 15 */
			{
				BgL_indexedz00_bglt BgL_obj3956z00_1722;

				BgL_obj3956z00_1722 = (BgL_indexedz00_bglt) (BgL_obj3956z00_2022);
				{

					{	/* SawMsil/funcall.scm 15 */
						obj_t BgL_res3957z00_1725;

						{	/* SawMsil/funcall.scm 15 */
							obj_t BgL_nextzd2method4037zd2_1730;

							BgL_nextzd2method4037zd2_1730 =
								BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
								(BgL_objectz00_bglt) (BgL_obj3956z00_1722),
								BGl_objectzd2ze3structzd2envze3zz__objectz00,
								BGl_indexedz00zzmsil_funcallz00);
							if (PROCEDUREP(BgL_nextzd2method4037zd2_1730))
								{	/* SawMsil/funcall.scm 15 */
									BgL_res3957z00_1725 =
										PROCEDURE_ENTRY(BgL_nextzd2method4037zd2_1730)
										(BgL_nextzd2method4037zd2_1730,
										(obj_t) (BgL_obj3956z00_1722), BEOA);
								}
							else
								{	/* SawMsil/funcall.scm 15 */
									BgL_res3957z00_1725 =
										BGl_objectzd2ze3structz31zz__objectz00(
										(BgL_objectz00_bglt) (BgL_obj3956z00_1722));
								}
						}
						{	/* SawMsil/funcall.scm 15 */
							obj_t BgL_aux3958z00_1726;

							{	/* SawMsil/funcall.scm 15 */
								obj_t BgL_keyz00_1936;

								BgL_keyz00_1936 = CNST_TABLE_REF(((long) 11));
								BgL_aux3958z00_1726 =
									make_struct(BgL_keyz00_1936, (int) (((long) 1)), BUNSPEC);
							}
							{	/* SawMsil/funcall.scm 15 */
								int BgL_arg4244z00_1728;

								{
									obj_t BgL_auxz00_2663;

									{	/* SawMsil/funcall.scm 15 */
										BgL_objectz00_bglt BgL_auxz00_2664;

										BgL_auxz00_2664 =
											(BgL_objectz00_bglt) (BgL_obj3956z00_1722);
										BgL_auxz00_2663 = BGL_OBJECT_WIDENING(BgL_auxz00_2664);
									}
									BgL_arg4244z00_1728 =
										(((BgL_indexedz00_bglt) CREF(BgL_auxz00_2663))->
										BgL_indexz00);
								}
								{	/* SawMsil/funcall.scm 15 */
									obj_t BgL_auxz00_2670;

									int BgL_auxz00_2668;

									BgL_auxz00_2670 = BINT(BgL_arg4244z00_1728);
									BgL_auxz00_2668 = (int) (((long) 0));
									STRUCT_SET(BgL_aux3958z00_1726, BgL_auxz00_2668,
										BgL_auxz00_2670);
							}}
							{	/* SawMsil/funcall.scm 15 */
								int BgL_auxz00_2673;

								BgL_auxz00_2673 = (int) (((long) 0));
								STRUCT_SET(BgL_res3957z00_1725, BgL_auxz00_2673,
									BgL_aux3958z00_1726);
							}
							{	/* SawMsil/funcall.scm 15 */
								obj_t BgL_auxz00_2676;

								BgL_auxz00_2676 = STRUCT_KEY(BgL_res3957z00_1725);
								STRUCT_KEY_SET(BgL_aux3958z00_1726, BgL_auxz00_2676);
							}
							{	/* SawMsil/funcall.scm 15 */
								obj_t BgL_kz00_1951;

								BgL_kz00_1951 = CNST_TABLE_REF(((long) 11));
								STRUCT_KEY_SET(BgL_res3957z00_1725, BgL_kz00_1951);
							}
							return BgL_res3957z00_1725;
						}
					}
				}
			}
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_funcallz00()
	{
		AN_OBJECT;
		{	/* SawMsil/funcall.scm 1 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 256265790),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 254412896),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(((long) 3755867),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzmsil_outz00(((long) 112026228),
				BSTRING_TO_STRING(BGl_string4279z00zzmsil_funcallz00));
		}
	}

#ifdef __cplusplus
}
#endif
