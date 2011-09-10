/*===========================================================================*/
/*   (SawJvm/inline.scm)                                                     */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/inline.scm)*/
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* Object type definitions */
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;


	static obj_t BGl_zc3anonymousza35060ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34961ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35064ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34966ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35069ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34971ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35074ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34976ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00(obj_t);
	static obj_t BGl_zc3anonymousza35079ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_zc3anonymousza34981ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00;
	static obj_t BGl_zc3anonymousza35084ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34986ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35089ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34991ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35101ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35093ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t BGl_zc3anonymousza35105ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34996ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl__inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35097ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t);
	static obj_t BGl_zc3anonymousza35109ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_branchz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35113ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34734ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35118ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35122ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35126ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_zc3anonymousza35130ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34747ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_zc3anonymousza35134ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_inlinez00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35138ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35142ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34761ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35146ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_zc3anonymousza35150ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl__inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34768ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35154ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34775ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35158ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35162ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34783ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35166ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35170ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_zc3anonymousza34787ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34791ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35174ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34803ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34795ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35178ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34807ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35182ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34799ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_genzd2exprzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_zc3anonymousza34813ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35186ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35190ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35202ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_zc3anonymousza35194ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35198ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35209ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34831ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35214ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34836ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_za2jvmzd2inlinesza2zd2zzsaw_jvm_inlinez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34841ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_zc3anonymousza34846ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_zc3anonymousza34855ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34859ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34867ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_inlinez00();
	static obj_t BGl_zc3anonymousza34871ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34876ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_skipzd2movzd2zzsaw_jvm_inlinez00(obj_t);
	static obj_t BGl_zc3anonymousza34881ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl__inlinezd2callzf3z21zzsaw_jvm_inlinez00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34886ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34900ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35000ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34891ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34904ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35004ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34896ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34908ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35008ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34912ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35012ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34916ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35016ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34920ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35020ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t BGl_zc3anonymousza34924ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35024ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34928ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35028ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34932ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35032ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t BGl_zc3anonymousza34936ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35036ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34940ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35040ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_za2toozd2hardza2zd2zzsaw_jvm_inlinez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34944ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35044ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34948ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35048ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
	static obj_t BGl_zc3anonymousza34952ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35052ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_inlinez00();
	static obj_t BGl_zc3anonymousza34956ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35056ze3z83zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t __cnst[188];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2jvmzd2inlineszd2envzd2zzsaw_jvm_inlinez00,
		BgL_bgl__checkza7d2jvmza7d2i5445z00,
		BGl__checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5333z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345446z00,
		BGl_zc3anonymousza34734ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5334z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345447z00,
		BGl_zc3anonymousza34747ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5335z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345448z00,
		BGl_zc3anonymousza34761ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5336z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345449z00,
		BGl_zc3anonymousza34768ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5337z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345450z00,
		BGl_zc3anonymousza34775ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5338z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345451z00,
		BGl_zc3anonymousza34783ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5340z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345452z00,
		BGl_zc3anonymousza34791ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5339z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345453z00,
		BGl_zc3anonymousza34787ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5341z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345454z00,
		BGl_zc3anonymousza34795ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5342z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345455z00,
		BGl_zc3anonymousza34799ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5343z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345456z00,
		BGl_zc3anonymousza34803ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5344z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345457z00,
		BGl_zc3anonymousza34807ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5345z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345458z00,
		BGl_zc3anonymousza34813ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5346z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345459z00,
		BGl_zc3anonymousza34831ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5347z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345460z00,
		BGl_zc3anonymousza34836ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5348z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345461z00,
		BGl_zc3anonymousza34841ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5350z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345462z00,
		BGl_zc3anonymousza34855ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5349z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345463z00,
		BGl_zc3anonymousza34846ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5351z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345464z00,
		BGl_zc3anonymousza34859ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5352z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345465z00,
		BGl_zc3anonymousza34867ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5353z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345466z00,
		BGl_zc3anonymousza34871ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5354z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345467z00,
		BGl_zc3anonymousza34876ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5355z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345468z00,
		BGl_zc3anonymousza34881ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5356z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345469z00,
		BGl_zc3anonymousza34886ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5357z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345470z00,
		BGl_zc3anonymousza34891ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5358z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345471z00,
		BGl_zc3anonymousza34896ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5360z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345472z00,
		BGl_zc3anonymousza34904ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5359z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345473z00,
		BGl_zc3anonymousza34900ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5361z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345474z00,
		BGl_zc3anonymousza34908ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5362z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345475z00,
		BGl_zc3anonymousza34912ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5363z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345476z00,
		BGl_zc3anonymousza34916ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5364z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345477z00,
		BGl_zc3anonymousza34920ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5365z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345478z00,
		BGl_zc3anonymousza34924ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5366z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345479z00,
		BGl_zc3anonymousza34928ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5367z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345480z00,
		BGl_zc3anonymousza34932ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5368z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345481z00,
		BGl_zc3anonymousza34936ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5370z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345482z00,
		BGl_zc3anonymousza34944ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5369z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345483z00,
		BGl_zc3anonymousza34940ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5371z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345484z00,
		BGl_zc3anonymousza34948ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5372z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345485z00,
		BGl_zc3anonymousza34952ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5373z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345486z00,
		BGl_zc3anonymousza34956ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5374z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345487z00,
		BGl_zc3anonymousza34961ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5375z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345488z00,
		BGl_zc3anonymousza34966ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5376z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345489z00,
		BGl_zc3anonymousza34971ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5377z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345490z00,
		BGl_zc3anonymousza34976ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5378z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345491z00,
		BGl_zc3anonymousza34981ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5380z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345492z00,
		BGl_zc3anonymousza34991ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5379z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345493z00,
		BGl_zc3anonymousza34986ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5381z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a345494z00,
		BGl_zc3anonymousza34996ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5382z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355495z00,
		BGl_zc3anonymousza35000ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5383z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355496z00,
		BGl_zc3anonymousza35004ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5384z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355497z00,
		BGl_zc3anonymousza35008ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5385z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355498z00,
		BGl_zc3anonymousza35012ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5386z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355499z00,
		BGl_zc3anonymousza35016ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5387z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355500z00,
		BGl_zc3anonymousza35020ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5388z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355501z00,
		BGl_zc3anonymousza35024ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5400z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355502z00,
		BGl_zc3anonymousza35074ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5390z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355503z00,
		BGl_zc3anonymousza35032ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5389z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355504z00,
		BGl_zc3anonymousza35028ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5401z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355505z00,
		BGl_zc3anonymousza35079ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5391z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355506z00,
		BGl_zc3anonymousza35036ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5402z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355507z00,
		BGl_zc3anonymousza35084ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5392z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355508z00,
		BGl_zc3anonymousza35040ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5403z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355509z00,
		BGl_zc3anonymousza35089ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5393z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355510z00,
		BGl_zc3anonymousza35044ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5404z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355511z00,
		BGl_zc3anonymousza35093ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5394z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355512z00,
		BGl_zc3anonymousza35048ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5405z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355513z00,
		BGl_zc3anonymousza35097ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5395z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355514z00,
		BGl_zc3anonymousza35052ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5406z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355515z00,
		BGl_zc3anonymousza35101ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5396z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355516z00,
		BGl_zc3anonymousza35056ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5407z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355517z00,
		BGl_zc3anonymousza35105ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5397z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355518z00,
		BGl_zc3anonymousza35060ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5408z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355519z00,
		BGl_zc3anonymousza35109ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5398z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355520z00,
		BGl_zc3anonymousza35064ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5410z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355521z00,
		BGl_zc3anonymousza35118ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5409z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355522z00,
		BGl_zc3anonymousza35113ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5399z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355523z00,
		BGl_zc3anonymousza35069ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5411z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355524z00,
		BGl_zc3anonymousza35122ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5412z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355525z00,
		BGl_zc3anonymousza35126ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5413z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355526z00,
		BGl_zc3anonymousza35130ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5414z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355527z00,
		BGl_zc3anonymousza35134ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5415z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355528z00,
		BGl_zc3anonymousza35138ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5416z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355529z00,
		BGl_zc3anonymousza35142ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5417z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355530z00,
		BGl_zc3anonymousza35146ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5418z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355531z00,
		BGl_zc3anonymousza35150ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5420z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355532z00,
		BGl_zc3anonymousza35158ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5419z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355533z00,
		BGl_zc3anonymousza35154ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5421z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355534z00,
		BGl_zc3anonymousza35162ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5422z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355535z00,
		BGl_zc3anonymousza35166ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5423z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355536z00,
		BGl_zc3anonymousza35170ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5424z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355537z00,
		BGl_zc3anonymousza35174ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5425z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355538z00,
		BGl_zc3anonymousza35178ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5426z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355539z00,
		BGl_zc3anonymousza35182ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5427z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355540z00,
		BGl_zc3anonymousza35186ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5428z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355541z00,
		BGl_zc3anonymousza35190ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5430z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355542z00,
		BGl_zc3anonymousza35198ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5429z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355543z00,
		BGl_zc3anonymousza35194ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5431z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355544z00,
		BGl_zc3anonymousza35202ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5432z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355545z00,
		BGl_zc3anonymousza35209ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5434z00zzsaw_jvm_inlinez00,
		BgL_bgl_za7c3anonymousza7a355546z00,
		BGl_zc3anonymousza35214ze3z83zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5433z00zzsaw_jvm_inlinez00,
		BgL_bgl_string5433za700za7za7s5547za7, "I", 1);
	      DEFINE_STRING(BGl_string5435z00zzsaw_jvm_inlinez00,
		BgL_bgl_string5435za700za7za7s5548za7, "Cannot find inlined functions", 29);
	      DEFINE_STRING(BGl_string5436z00zzsaw_jvm_inlinez00,
		BgL_bgl_string5436za700za7za7s5549za7, "saw_jvm_inline", 14);
	      DEFINE_STRING(BGl_string5437z00zzsaw_jvm_inlinez00,
		BgL_bgl_string5437za700za7za7s5550za7,
		"(iconst_0) SawJvm (putfield procarity) (putfield procenv) (putfield procindex) (invokespecial init) (dup) (new me) (anewarray obj) (aconst_null) (pop) (instanceof bbool) goto (getstatic faux) (getstatic vrai) not-inlined (instanceof bchar) bchar_allocated getstatic (getfield bchar_value) bchar_value getfield (instanceof bint) (instanceof belong) (i2s) (i2b) (getfield bint_value) if_icmpne if_icmpeq if_icmple if_icmpgt if_icmplt if_icmpge (iadd) (isub) (imul) (idiv) (irem) (ior) (ixor) (ineg) (iconst_1) (instanceof real) (getfield real_value) (i2d) (d2i) (l2d) (d2l) ifne ifeq (dcmpl) ifle ifgt iflt ifge (dcmpg) (dadd) (dsub) (dmul) (ddiv) (dneg) if_acmpne if_acmpeq (getstatic *nil*) (instanceof (vector byte)) ok (iand) (sipush 255) (baload) (bastore) (arraylength) (newarray byte) (instanceof symbol) (getfield symbol_string) (putfield ccar) (getfield ccar) (instanceof pair) (getfield car) (getfield cdr) (putfield car) (putfield cdr) (instanceof extended_pair) (getfield cer) (putfield cer) (instanceof (vector ob"
		"j)) (instanceof procedure) no-value (aastore) (aaload) (getfield procenv) procedure-ref procedure-set! c-procedure? $vector? c-set-cer! c-cer c-epair? c-set-cdr! c-set-car! c-cdr c-car c-pair? cell-ref cell-set! c-symbol->string c-symbol? $make-string/wo-fill $string-length $string-set! $string-ref $bstring->string $string->bstring $string? c-null? c-negfl c-/fl c-*fl c--fl c-+fl c->=fl c->fl c-<=fl c-<fl c-=fl $flonum->llong $llong->flonum $flonum->elong $elong->flonum $flonum->fixnum $fixnum->flonum $real->double c-flonum? c-bitnot c-bitxor c-bitand c-bitor c-remainderfx c-quotientfx c-/fx c-*fx c--fx c-+fx c-oddfx? c-evenfx? c->=fx c->fx c-<=fx c-<fx c-=fx $bint->int $long->int $int->long $bint->long $short->int $int->byte $int->short char->integer c-elong? c-fixnum? c-char>=? c-char>? c-char<=? c-char<? c-char=? $uchar->char $bchar->uchar $bchar->char $uchar->bchar c-char? c-eq? c-boxed-eq? $bool->bbool saw_jvm_inline_predicate $obj->bool c-boolean? procedure-1-el-ref make-el-procedure-1 procedure-el-set!"
		" procedure-el-ref saw_jvm_inline_function make-el-procedure make-l-procedure make-va-procedure make-fx-procedure cnst-table-set! saw_jvm_inline_function_args cnst-table-ref (%exit long->bint c-cons c-write-char) ",
		2260);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2callzf3zd2envzf3zzsaw_jvm_inlinez00,
		BgL_bgl__inlineza7d2callza7f5551z00,
		BGl__inlinezd2callzf3z21zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2callzd2withzd2argszf3zd2envzf3zzsaw_jvm_inlinez00,
		BgL_bgl__inlineza7d2callza7d5552z00,
		BGl__inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2predicatezf3zd2envzf3zzsaw_jvm_inlinez00,
		BgL_bgl__inlineza7d2predic5553za7,
		BGl__inlinezd2predicatezf3z21zzsaw_jvm_inlinez00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long
		BgL_checksumz00_3220, char *BgL_fromz00_3221)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_inlinez00();
					BGl_cnstzd2initzd2zzsaw_jvm_inlinez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_inlinez00();
					BGl_toplevelzd2initzd2zzsaw_jvm_inlinez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_jvm_inline");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 1 */
			{	/* SawJvm/inline.scm 1 */
				obj_t BgL_cportz00_3202;

				BgL_cportz00_3202 =
					bgl_open_input_string(BGl_string5437z00zzsaw_jvm_inlinez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_3203;

					BgL_iz00_3203 = ((long) 187);
				BgL_loopz00_3204:
					if ((BgL_iz00_3203 == ((long) -1)))
						{	/* SawJvm/inline.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/inline.scm 1 */
							{	/* SawJvm/inline.scm 1 */
								obj_t BgL_arg5439z00_3206;

								{	/* SawJvm/inline.scm 1 */

									{	/* SawJvm/inline.scm 1 */
										obj_t BgL_locationz00_3208;

										BgL_locationz00_3208 = BBOOL(((bool_t) 0));
										{	/* SawJvm/inline.scm 1 */

											BgL_arg5439z00_3206 =
												BGl_readz00zz__readerz00(BgL_cportz00_3202,
												BgL_locationz00_3208);
										}
									}
								}
								{	/* SawJvm/inline.scm 1 */
									int BgL_auxz00_3241;

									BgL_auxz00_3241 = (int) (BgL_iz00_3203);
									CNST_TABLE_SET(BgL_auxz00_3241, BgL_arg5439z00_3206);
							}}
							{	/* SawJvm/inline.scm 1 */
								int BgL_auxz00_3209;

								BgL_auxz00_3209 = (int) ((BgL_iz00_3203 - ((long) 1)));
								{
									long BgL_iz00_3246;

									BgL_iz00_3246 = (long) (BgL_auxz00_3209);
									BgL_iz00_3203 = BgL_iz00_3246;
									goto BgL_loopz00_3204;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 1 */
			BGl_za2jvmzd2inlinesza2zd2zzsaw_jvm_inlinez00 = BNIL;
			BGl_za2toozd2hardza2zd2zzsaw_jvm_inlinez00 = CNST_TABLE_REF(((long) 0));
			{	/* SawJvm/inline.scm 91 */
				obj_t BgL_arg4731z00_1345;

				obj_t BgL_arg4732z00_1346;

				BgL_arg4731z00_1345 = CNST_TABLE_REF(((long) 1));
				BgL_arg4732z00_1346 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4731z00_1345,
					BgL_arg4732z00_1346, BGl_proc5333z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 96 */
				obj_t BgL_arg4744z00_1360;

				obj_t BgL_arg4745z00_1361;

				BgL_arg4744z00_1360 = CNST_TABLE_REF(((long) 3));
				BgL_arg4745z00_1361 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4744z00_1360,
					BgL_arg4745z00_1361, BGl_proc5334z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 103 */
				obj_t BgL_arg4757z00_1376;

				obj_t BgL_arg4758z00_1377;

				BgL_arg4757z00_1376 = CNST_TABLE_REF(((long) 4));
				BgL_arg4758z00_1377 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4757z00_1376,
					BgL_arg4758z00_1377, BGl_proc5335z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 118 */
				obj_t BgL_arg4765z00_1386;

				obj_t BgL_arg4766z00_1387;

				BgL_arg4765z00_1386 = CNST_TABLE_REF(((long) 5));
				BgL_arg4766z00_1387 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4765z00_1386,
					BgL_arg4766z00_1387, BGl_proc5336z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 133 */
				obj_t BgL_arg4772z00_1396;

				obj_t BgL_arg4773z00_1397;

				BgL_arg4772z00_1396 = CNST_TABLE_REF(((long) 6));
				BgL_arg4773z00_1397 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4772z00_1396,
					BgL_arg4773z00_1397, BGl_proc5337z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 145 */
				obj_t BgL_arg4778z00_1405;

				obj_t BgL_arg4780z00_1406;

				BgL_arg4778z00_1405 = CNST_TABLE_REF(((long) 7));
				BgL_arg4780z00_1406 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4778z00_1405,
					BgL_arg4780z00_1406, BGl_proc5338z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 148 */
				obj_t BgL_arg4784z00_1411;

				obj_t BgL_arg4785z00_1412;

				BgL_arg4784z00_1411 = CNST_TABLE_REF(((long) 9));
				BgL_arg4785z00_1412 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4784z00_1411,
					BgL_arg4785z00_1412, BGl_proc5339z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 151 */
				obj_t BgL_arg4788z00_1417;

				obj_t BgL_arg4789z00_1418;

				BgL_arg4788z00_1417 = CNST_TABLE_REF(((long) 10));
				BgL_arg4789z00_1418 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4788z00_1417,
					BgL_arg4789z00_1418, BGl_proc5340z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 155 */
				obj_t BgL_arg4792z00_1423;

				obj_t BgL_arg4793z00_1424;

				BgL_arg4792z00_1423 = CNST_TABLE_REF(((long) 11));
				BgL_arg4793z00_1424 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4792z00_1423,
					BgL_arg4793z00_1424, BGl_proc5341z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 158 */
				obj_t BgL_arg4796z00_1430;

				obj_t BgL_arg4797z00_1431;

				BgL_arg4796z00_1430 = CNST_TABLE_REF(((long) 12));
				BgL_arg4797z00_1431 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4796z00_1430,
					BgL_arg4797z00_1431, BGl_proc5342z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 167 */
				obj_t BgL_arg4800z00_1436;

				obj_t BgL_arg4801z00_1437;

				BgL_arg4800z00_1436 = CNST_TABLE_REF(((long) 13));
				BgL_arg4801z00_1437 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4800z00_1436,
					BgL_arg4801z00_1437, BGl_proc5343z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 170 */
				obj_t BgL_arg4804z00_1442;

				obj_t BgL_arg4805z00_1443;

				BgL_arg4804z00_1442 = CNST_TABLE_REF(((long) 14));
				BgL_arg4805z00_1443 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4804z00_1442,
					BgL_arg4805z00_1443, BGl_proc5344z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 174 */
				obj_t BgL_arg4810z00_1451;

				obj_t BgL_arg4811z00_1452;

				BgL_arg4810z00_1451 = CNST_TABLE_REF(((long) 16));
				BgL_arg4811z00_1452 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4810z00_1451,
					BgL_arg4811z00_1452, BGl_proc5345z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 189 */
				obj_t BgL_arg4828z00_1474;

				obj_t BgL_arg4829z00_1475;

				BgL_arg4828z00_1474 = CNST_TABLE_REF(((long) 17));
				BgL_arg4829z00_1475 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4828z00_1474,
					BgL_arg4829z00_1475, BGl_proc5346z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 192 */
				obj_t BgL_arg4833z00_1483;

				obj_t BgL_arg4834z00_1484;

				BgL_arg4833z00_1483 = CNST_TABLE_REF(((long) 18));
				BgL_arg4834z00_1484 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4833z00_1483,
					BgL_arg4834z00_1484, BGl_proc5347z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 200 */
				obj_t BgL_arg4838z00_1492;

				obj_t BgL_arg4839z00_1493;

				BgL_arg4838z00_1492 = CNST_TABLE_REF(((long) 19));
				BgL_arg4839z00_1493 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4838z00_1492,
					BgL_arg4839z00_1493, BGl_proc5348z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 203 */
				obj_t BgL_arg4842z00_1498;

				obj_t BgL_arg4844z00_1499;

				BgL_arg4842z00_1498 = CNST_TABLE_REF(((long) 20));
				BgL_arg4844z00_1499 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4842z00_1498,
					BgL_arg4844z00_1499, BGl_proc5349z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 210 */
				obj_t BgL_arg4852z00_1510;

				obj_t BgL_arg4853z00_1511;

				BgL_arg4852z00_1510 = CNST_TABLE_REF(((long) 21));
				BgL_arg4853z00_1511 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4852z00_1510,
					BgL_arg4853z00_1511, BGl_proc5350z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 213 */
				obj_t BgL_arg4856z00_1516;

				obj_t BgL_arg4857z00_1517;

				BgL_arg4856z00_1516 = CNST_TABLE_REF(((long) 22));
				BgL_arg4857z00_1517 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4856z00_1516,
					BgL_arg4857z00_1517, BGl_proc5351z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 218 */
				obj_t BgL_arg4864z00_1526;

				obj_t BgL_arg4865z00_1527;

				BgL_arg4864z00_1526 = CNST_TABLE_REF(((long) 23));
				BgL_arg4865z00_1527 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4864z00_1526,
					BgL_arg4865z00_1527, BGl_proc5352z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 221 */
				obj_t BgL_arg4868z00_1532;

				obj_t BgL_arg4869z00_1533;

				BgL_arg4868z00_1532 = CNST_TABLE_REF(((long) 24));
				BgL_arg4869z00_1533 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4868z00_1532,
					BgL_arg4869z00_1533, BGl_proc5353z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 224 */
				obj_t BgL_arg4873z00_1541;

				obj_t BgL_arg4874z00_1542;

				BgL_arg4873z00_1541 = CNST_TABLE_REF(((long) 25));
				BgL_arg4874z00_1542 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4873z00_1541,
					BgL_arg4874z00_1542, BGl_proc5354z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 227 */
				obj_t BgL_arg4878z00_1550;

				obj_t BgL_arg4879z00_1551;

				BgL_arg4878z00_1550 = CNST_TABLE_REF(((long) 26));
				BgL_arg4879z00_1551 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4878z00_1550,
					BgL_arg4879z00_1551, BGl_proc5355z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 230 */
				obj_t BgL_arg4883z00_1559;

				obj_t BgL_arg4884z00_1560;

				BgL_arg4883z00_1559 = CNST_TABLE_REF(((long) 27));
				BgL_arg4884z00_1560 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4883z00_1559,
					BgL_arg4884z00_1560, BGl_proc5356z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 233 */
				obj_t BgL_arg4888z00_1568;

				obj_t BgL_arg4889z00_1569;

				BgL_arg4888z00_1568 = CNST_TABLE_REF(((long) 28));
				BgL_arg4889z00_1569 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4888z00_1568,
					BgL_arg4889z00_1569, BGl_proc5357z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 239 */
				obj_t BgL_arg4893z00_1577;

				obj_t BgL_arg4894z00_1578;

				BgL_arg4893z00_1577 = CNST_TABLE_REF(((long) 29));
				BgL_arg4894z00_1578 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4893z00_1577,
					BgL_arg4894z00_1578, BGl_proc5358z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 242 */
				obj_t BgL_arg4897z00_1583;

				obj_t BgL_arg4898z00_1584;

				BgL_arg4897z00_1583 = CNST_TABLE_REF(((long) 30));
				BgL_arg4898z00_1584 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4897z00_1583,
					BgL_arg4898z00_1584, BGl_proc5359z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 245 */
				obj_t BgL_arg4901z00_1589;

				obj_t BgL_arg4902z00_1590;

				BgL_arg4901z00_1589 = CNST_TABLE_REF(((long) 31));
				BgL_arg4902z00_1590 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4901z00_1589,
					BgL_arg4902z00_1590, BGl_proc5360z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 249 */
				obj_t BgL_arg4905z00_1595;

				obj_t BgL_arg4906z00_1596;

				BgL_arg4905z00_1595 = CNST_TABLE_REF(((long) 32));
				BgL_arg4906z00_1596 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4905z00_1595,
					BgL_arg4906z00_1596, BGl_proc5361z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 252 */
				obj_t BgL_arg4909z00_1601;

				obj_t BgL_arg4910z00_1602;

				BgL_arg4909z00_1601 = CNST_TABLE_REF(((long) 33));
				BgL_arg4910z00_1602 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4909z00_1601,
					BgL_arg4910z00_1602, BGl_proc5362z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 255 */
				obj_t BgL_arg4913z00_1607;

				obj_t BgL_arg4914z00_1608;

				BgL_arg4913z00_1607 = CNST_TABLE_REF(((long) 34));
				BgL_arg4914z00_1608 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4913z00_1607,
					BgL_arg4914z00_1608, BGl_proc5363z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 258 */
				obj_t BgL_arg4917z00_1613;

				obj_t BgL_arg4918z00_1614;

				BgL_arg4917z00_1613 = CNST_TABLE_REF(((long) 35));
				BgL_arg4918z00_1614 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4917z00_1613,
					BgL_arg4918z00_1614, BGl_proc5364z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 264 */
				obj_t BgL_arg4921z00_1619;

				obj_t BgL_arg4922z00_1620;

				BgL_arg4921z00_1619 = CNST_TABLE_REF(((long) 36));
				BgL_arg4922z00_1620 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4921z00_1619,
					BgL_arg4922z00_1620, BGl_proc5365z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 267 */
				obj_t BgL_arg4925z00_1625;

				obj_t BgL_arg4926z00_1626;

				BgL_arg4925z00_1625 = CNST_TABLE_REF(((long) 37));
				BgL_arg4926z00_1626 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4925z00_1625,
					BgL_arg4926z00_1626, BGl_proc5366z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 270 */
				obj_t BgL_arg4929z00_1631;

				obj_t BgL_arg4930z00_1632;

				BgL_arg4929z00_1631 = CNST_TABLE_REF(((long) 38));
				BgL_arg4930z00_1632 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4929z00_1631,
					BgL_arg4930z00_1632, BGl_proc5367z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 283 */
				obj_t BgL_arg4933z00_1637;

				obj_t BgL_arg4934z00_1638;

				BgL_arg4933z00_1637 = CNST_TABLE_REF(((long) 39));
				BgL_arg4934z00_1638 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4933z00_1637,
					BgL_arg4934z00_1638, BGl_proc5368z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 286 */
				obj_t BgL_arg4937z00_1643;

				obj_t BgL_arg4938z00_1644;

				BgL_arg4937z00_1643 = CNST_TABLE_REF(((long) 40));
				BgL_arg4938z00_1644 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4937z00_1643,
					BgL_arg4938z00_1644, BGl_proc5369z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 289 */
				obj_t BgL_arg4941z00_1649;

				obj_t BgL_arg4942z00_1650;

				BgL_arg4941z00_1649 = CNST_TABLE_REF(((long) 41));
				BgL_arg4942z00_1650 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4941z00_1649,
					BgL_arg4942z00_1650, BGl_proc5370z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 292 */
				obj_t BgL_arg4945z00_1655;

				obj_t BgL_arg4946z00_1656;

				BgL_arg4945z00_1655 = CNST_TABLE_REF(((long) 42));
				BgL_arg4946z00_1656 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4945z00_1655,
					BgL_arg4946z00_1656, BGl_proc5371z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 295 */
				obj_t BgL_arg4949z00_1661;

				obj_t BgL_arg4950z00_1662;

				BgL_arg4949z00_1661 = CNST_TABLE_REF(((long) 43));
				BgL_arg4950z00_1662 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4949z00_1661,
					BgL_arg4950z00_1662, BGl_proc5372z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 298 */
				obj_t BgL_arg4953z00_1667;

				obj_t BgL_arg4954z00_1668;

				BgL_arg4953z00_1667 = CNST_TABLE_REF(((long) 39));
				BgL_arg4954z00_1668 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4953z00_1667,
					BgL_arg4954z00_1668, BGl_proc5373z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 301 */
				obj_t BgL_arg4958z00_1676;

				obj_t BgL_arg4959z00_1677;

				BgL_arg4958z00_1676 = CNST_TABLE_REF(((long) 40));
				BgL_arg4959z00_1677 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4958z00_1676,
					BgL_arg4959z00_1677, BGl_proc5374z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 304 */
				obj_t BgL_arg4963z00_1685;

				obj_t BgL_arg4964z00_1686;

				BgL_arg4963z00_1685 = CNST_TABLE_REF(((long) 41));
				BgL_arg4964z00_1686 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4963z00_1685,
					BgL_arg4964z00_1686, BGl_proc5375z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 307 */
				obj_t BgL_arg4968z00_1694;

				obj_t BgL_arg4969z00_1695;

				BgL_arg4968z00_1694 = CNST_TABLE_REF(((long) 42));
				BgL_arg4969z00_1695 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4968z00_1694,
					BgL_arg4969z00_1695, BGl_proc5376z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 310 */
				obj_t BgL_arg4973z00_1703;

				obj_t BgL_arg4974z00_1704;

				BgL_arg4973z00_1703 = CNST_TABLE_REF(((long) 43));
				BgL_arg4974z00_1704 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4973z00_1703,
					BgL_arg4974z00_1704, BGl_proc5377z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 313 */
				obj_t BgL_arg4978z00_1712;

				obj_t BgL_arg4979z00_1713;

				BgL_arg4978z00_1712 = CNST_TABLE_REF(((long) 44));
				BgL_arg4979z00_1713 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4978z00_1712,
					BgL_arg4979z00_1713, BGl_proc5378z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 318 */
				obj_t BgL_arg4983z00_1721;

				obj_t BgL_arg4984z00_1722;

				BgL_arg4983z00_1721 = CNST_TABLE_REF(((long) 45));
				BgL_arg4984z00_1722 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4983z00_1721,
					BgL_arg4984z00_1722, BGl_proc5379z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 323 */
				obj_t BgL_arg4988z00_1730;

				obj_t BgL_arg4989z00_1731;

				BgL_arg4988z00_1730 = CNST_TABLE_REF(((long) 46));
				BgL_arg4989z00_1731 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4988z00_1730,
					BgL_arg4989z00_1731, BGl_proc5380z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 324 */
				obj_t BgL_arg4993z00_1736;

				obj_t BgL_arg4994z00_1737;

				BgL_arg4993z00_1736 = CNST_TABLE_REF(((long) 47));
				BgL_arg4994z00_1737 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4993z00_1736,
					BgL_arg4994z00_1737, BGl_proc5381z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 325 */
				obj_t BgL_arg4997z00_1742;

				obj_t BgL_arg4998z00_1743;

				BgL_arg4997z00_1742 = CNST_TABLE_REF(((long) 48));
				BgL_arg4998z00_1743 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4997z00_1742,
					BgL_arg4998z00_1743, BGl_proc5382z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 326 */
				obj_t BgL_arg5001z00_1748;

				obj_t BgL_arg5002z00_1749;

				BgL_arg5001z00_1748 = CNST_TABLE_REF(((long) 49));
				BgL_arg5002z00_1749 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5001z00_1748,
					BgL_arg5002z00_1749, BGl_proc5383z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 327 */
				obj_t BgL_arg5005z00_1754;

				obj_t BgL_arg5006z00_1755;

				BgL_arg5005z00_1754 = CNST_TABLE_REF(((long) 50));
				BgL_arg5006z00_1755 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5005z00_1754,
					BgL_arg5006z00_1755, BGl_proc5384z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 328 */
				obj_t BgL_arg5009z00_1760;

				obj_t BgL_arg5010z00_1761;

				BgL_arg5009z00_1760 = CNST_TABLE_REF(((long) 51));
				BgL_arg5010z00_1761 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5009z00_1760,
					BgL_arg5010z00_1761, BGl_proc5385z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 329 */
				obj_t BgL_arg5013z00_1766;

				obj_t BgL_arg5014z00_1767;

				BgL_arg5013z00_1766 = CNST_TABLE_REF(((long) 52));
				BgL_arg5014z00_1767 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5013z00_1766,
					BgL_arg5014z00_1767, BGl_proc5386z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 330 */
				obj_t BgL_arg5017z00_1772;

				obj_t BgL_arg5018z00_1773;

				BgL_arg5017z00_1772 = CNST_TABLE_REF(((long) 53));
				BgL_arg5018z00_1773 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5017z00_1772,
					BgL_arg5018z00_1773, BGl_proc5387z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 331 */
				obj_t BgL_arg5021z00_1778;

				obj_t BgL_arg5022z00_1779;

				BgL_arg5021z00_1778 = CNST_TABLE_REF(((long) 54));
				BgL_arg5022z00_1779 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5021z00_1778,
					BgL_arg5022z00_1779, BGl_proc5388z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 332 */
				obj_t BgL_arg5025z00_1784;

				obj_t BgL_arg5026z00_1785;

				BgL_arg5025z00_1784 = CNST_TABLE_REF(((long) 55));
				BgL_arg5026z00_1785 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5025z00_1784,
					BgL_arg5026z00_1785, BGl_proc5389z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 340 */
				obj_t BgL_arg5029z00_1790;

				obj_t BgL_arg5030z00_1791;

				BgL_arg5029z00_1790 = CNST_TABLE_REF(((long) 56));
				BgL_arg5030z00_1791 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5029z00_1790,
					BgL_arg5030z00_1791, BGl_proc5390z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 343 */
				obj_t BgL_arg5033z00_1796;

				obj_t BgL_arg5034z00_1797;

				BgL_arg5033z00_1796 = CNST_TABLE_REF(((long) 57));
				BgL_arg5034z00_1797 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5033z00_1796,
					BgL_arg5034z00_1797, BGl_proc5391z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 346 */
				obj_t BgL_arg5037z00_1802;

				obj_t BgL_arg5038z00_1803;

				BgL_arg5037z00_1802 = CNST_TABLE_REF(((long) 58));
				BgL_arg5038z00_1803 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5037z00_1802,
					BgL_arg5038z00_1803, BGl_proc5392z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 349 */
				obj_t BgL_arg5041z00_1808;

				obj_t BgL_arg5042z00_1809;

				BgL_arg5041z00_1808 = CNST_TABLE_REF(((long) 59));
				BgL_arg5042z00_1809 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5041z00_1808,
					BgL_arg5042z00_1809, BGl_proc5393z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 352 */
				obj_t BgL_arg5045z00_1814;

				obj_t BgL_arg5046z00_1815;

				BgL_arg5045z00_1814 = CNST_TABLE_REF(((long) 60));
				BgL_arg5046z00_1815 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5045z00_1814,
					BgL_arg5046z00_1815, BGl_proc5394z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 355 */
				obj_t BgL_arg5049z00_1820;

				obj_t BgL_arg5050z00_1821;

				BgL_arg5049z00_1820 = CNST_TABLE_REF(((long) 61));
				BgL_arg5050z00_1821 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5049z00_1820,
					BgL_arg5050z00_1821, BGl_proc5395z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 358 */
				obj_t BgL_arg5053z00_1826;

				obj_t BgL_arg5054z00_1827;

				BgL_arg5053z00_1826 = CNST_TABLE_REF(((long) 62));
				BgL_arg5054z00_1827 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5053z00_1826,
					BgL_arg5054z00_1827, BGl_proc5396z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 361 */
				obj_t BgL_arg5057z00_1832;

				obj_t BgL_arg5058z00_1833;

				BgL_arg5057z00_1832 = CNST_TABLE_REF(((long) 63));
				BgL_arg5058z00_1833 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5057z00_1832,
					BgL_arg5058z00_1833, BGl_proc5397z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 364 */
				obj_t BgL_arg5061z00_1838;

				obj_t BgL_arg5062z00_1839;

				BgL_arg5061z00_1838 = CNST_TABLE_REF(((long) 64));
				BgL_arg5062z00_1839 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5061z00_1838,
					BgL_arg5062z00_1839, BGl_proc5398z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 368 */
				obj_t BgL_arg5066z00_1847;

				obj_t BgL_arg5067z00_1848;

				BgL_arg5066z00_1847 = CNST_TABLE_REF(((long) 65));
				BgL_arg5067z00_1848 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5066z00_1847,
					BgL_arg5067z00_1848, BGl_proc5399z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 372 */
				obj_t BgL_arg5071z00_1856;

				obj_t BgL_arg5072z00_1857;

				BgL_arg5071z00_1856 = CNST_TABLE_REF(((long) 66));
				BgL_arg5072z00_1857 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5071z00_1856,
					BgL_arg5072z00_1857, BGl_proc5400z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 376 */
				obj_t BgL_arg5076z00_1865;

				obj_t BgL_arg5077z00_1866;

				BgL_arg5076z00_1865 = CNST_TABLE_REF(((long) 67));
				BgL_arg5077z00_1866 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5076z00_1865,
					BgL_arg5077z00_1866, BGl_proc5401z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 380 */
				obj_t BgL_arg5081z00_1874;

				obj_t BgL_arg5082z00_1875;

				BgL_arg5081z00_1874 = CNST_TABLE_REF(((long) 68));
				BgL_arg5082z00_1875 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5081z00_1874,
					BgL_arg5082z00_1875, BGl_proc5402z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 384 */
				obj_t BgL_arg5086z00_1883;

				obj_t BgL_arg5087z00_1884;

				BgL_arg5086z00_1883 = CNST_TABLE_REF(((long) 69));
				BgL_arg5087z00_1884 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5086z00_1883,
					BgL_arg5087z00_1884, BGl_proc5403z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 385 */
				obj_t BgL_arg5090z00_1889;

				obj_t BgL_arg5091z00_1890;

				BgL_arg5090z00_1889 = CNST_TABLE_REF(((long) 70));
				BgL_arg5091z00_1890 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5090z00_1889,
					BgL_arg5091z00_1890, BGl_proc5404z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 386 */
				obj_t BgL_arg5094z00_1895;

				obj_t BgL_arg5095z00_1896;

				BgL_arg5094z00_1895 = CNST_TABLE_REF(((long) 71));
				BgL_arg5095z00_1896 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5094z00_1895,
					BgL_arg5095z00_1896, BGl_proc5405z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 387 */
				obj_t BgL_arg5098z00_1901;

				obj_t BgL_arg5099z00_1902;

				BgL_arg5098z00_1901 = CNST_TABLE_REF(((long) 72));
				BgL_arg5099z00_1902 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5098z00_1901,
					BgL_arg5099z00_1902, BGl_proc5406z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 388 */
				obj_t BgL_arg5102z00_1907;

				obj_t BgL_arg5103z00_1908;

				BgL_arg5102z00_1907 = CNST_TABLE_REF(((long) 73));
				BgL_arg5103z00_1908 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5102z00_1907,
					BgL_arg5103z00_1908, BGl_proc5407z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 396 */
				obj_t BgL_arg5106z00_1913;

				obj_t BgL_arg5107z00_1914;

				BgL_arg5106z00_1913 = CNST_TABLE_REF(((long) 74));
				BgL_arg5107z00_1914 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5106z00_1913,
					BgL_arg5107z00_1914, BGl_proc5408z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 400 */
				obj_t BgL_arg5110z00_1919;

				obj_t BgL_arg5111z00_1920;

				BgL_arg5110z00_1919 = CNST_TABLE_REF(((long) 74));
				BgL_arg5111z00_1920 = CNST_TABLE_REF(((long) 15));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5110z00_1919,
					BgL_arg5111z00_1920, BGl_proc5409z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 425 */
				obj_t BgL_arg5115z00_1928;

				obj_t BgL_arg5116z00_1929;

				BgL_arg5115z00_1928 = CNST_TABLE_REF(((long) 75));
				BgL_arg5116z00_1929 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5115z00_1928,
					BgL_arg5116z00_1929, BGl_proc5410z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 428 */
				obj_t BgL_arg5119z00_1934;

				obj_t BgL_arg5120z00_1935;

				BgL_arg5119z00_1934 = CNST_TABLE_REF(((long) 76));
				BgL_arg5120z00_1935 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5119z00_1934,
					BgL_arg5120z00_1935, BGl_proc5411z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 431 */
				obj_t BgL_arg5123z00_1940;

				obj_t BgL_arg5124z00_1941;

				BgL_arg5123z00_1940 = CNST_TABLE_REF(((long) 77));
				BgL_arg5124z00_1941 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5123z00_1940,
					BgL_arg5124z00_1941, BGl_proc5412z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 434 */
				obj_t BgL_arg5127z00_1946;

				obj_t BgL_arg5128z00_1947;

				BgL_arg5127z00_1946 = CNST_TABLE_REF(((long) 78));
				BgL_arg5128z00_1947 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5127z00_1946,
					BgL_arg5128z00_1947, BGl_proc5413z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 439 */
				obj_t BgL_arg5131z00_1952;

				obj_t BgL_arg5132z00_1953;

				BgL_arg5131z00_1952 = CNST_TABLE_REF(((long) 79));
				BgL_arg5132z00_1953 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5131z00_1952,
					BgL_arg5132z00_1953, BGl_proc5414z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 443 */
				obj_t BgL_arg5135z00_1958;

				obj_t BgL_arg5136z00_1959;

				BgL_arg5135z00_1958 = CNST_TABLE_REF(((long) 80));
				BgL_arg5136z00_1959 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5135z00_1958,
					BgL_arg5136z00_1959, BGl_proc5415z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 446 */
				obj_t BgL_arg5139z00_1964;

				obj_t BgL_arg5140z00_1965;

				BgL_arg5139z00_1964 = CNST_TABLE_REF(((long) 81));
				BgL_arg5140z00_1965 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5139z00_1964,
					BgL_arg5140z00_1965, BGl_proc5416z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 465 */
				obj_t BgL_arg5143z00_1970;

				obj_t BgL_arg5144z00_1971;

				BgL_arg5143z00_1970 = CNST_TABLE_REF(((long) 82));
				BgL_arg5144z00_1971 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5143z00_1970,
					BgL_arg5144z00_1971, BGl_proc5417z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 468 */
				obj_t BgL_arg5147z00_1976;

				obj_t BgL_arg5148z00_1977;

				BgL_arg5147z00_1976 = CNST_TABLE_REF(((long) 83));
				BgL_arg5148z00_1977 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5147z00_1976,
					BgL_arg5148z00_1977, BGl_proc5418z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 474 */
				obj_t BgL_arg5151z00_1982;

				obj_t BgL_arg5152z00_1983;

				BgL_arg5151z00_1982 = CNST_TABLE_REF(((long) 84));
				BgL_arg5152z00_1983 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5151z00_1982,
					BgL_arg5152z00_1983, BGl_proc5419z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 478 */
				obj_t BgL_arg5155z00_1988;

				obj_t BgL_arg5156z00_1989;

				BgL_arg5155z00_1988 = CNST_TABLE_REF(((long) 85));
				BgL_arg5156z00_1989 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5155z00_1988,
					BgL_arg5156z00_1989, BGl_proc5420z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 494 */
				obj_t BgL_arg5159z00_1994;

				obj_t BgL_arg5160z00_1995;

				BgL_arg5159z00_1994 = CNST_TABLE_REF(((long) 86));
				BgL_arg5160z00_1995 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5159z00_1994,
					BgL_arg5160z00_1995, BGl_proc5421z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 497 */
				obj_t BgL_arg5163z00_2000;

				obj_t BgL_arg5164z00_2001;

				BgL_arg5163z00_2000 = CNST_TABLE_REF(((long) 87));
				BgL_arg5164z00_2001 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5163z00_2000,
					BgL_arg5164z00_2001, BGl_proc5422z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 500 */
				obj_t BgL_arg5167z00_2006;

				obj_t BgL_arg5168z00_2007;

				BgL_arg5167z00_2006 = CNST_TABLE_REF(((long) 88));
				BgL_arg5168z00_2007 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5167z00_2006,
					BgL_arg5168z00_2007, BGl_proc5423z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 503 */
				obj_t BgL_arg5171z00_2012;

				obj_t BgL_arg5172z00_2013;

				BgL_arg5171z00_2012 = CNST_TABLE_REF(((long) 89));
				BgL_arg5172z00_2013 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5171z00_2012,
					BgL_arg5172z00_2013, BGl_proc5424z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 507 */
				obj_t BgL_arg5175z00_2018;

				obj_t BgL_arg5176z00_2019;

				BgL_arg5175z00_2018 = CNST_TABLE_REF(((long) 90));
				BgL_arg5176z00_2019 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5175z00_2018,
					BgL_arg5176z00_2019, BGl_proc5425z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 514 */
				obj_t BgL_arg5179z00_2024;

				obj_t BgL_arg5180z00_2025;

				BgL_arg5179z00_2024 = CNST_TABLE_REF(((long) 91));
				BgL_arg5180z00_2025 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5179z00_2024,
					BgL_arg5180z00_2025, BGl_proc5426z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 517 */
				obj_t BgL_arg5183z00_2030;

				obj_t BgL_arg5184z00_2031;

				BgL_arg5183z00_2030 = CNST_TABLE_REF(((long) 92));
				BgL_arg5184z00_2031 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5183z00_2030,
					BgL_arg5184z00_2031, BGl_proc5427z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 520 */
				obj_t BgL_arg5187z00_2036;

				obj_t BgL_arg5188z00_2037;

				BgL_arg5187z00_2036 = CNST_TABLE_REF(((long) 93));
				BgL_arg5188z00_2037 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5187z00_2036,
					BgL_arg5188z00_2037, BGl_proc5428z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 527 */
				obj_t BgL_arg5191z00_2042;

				obj_t BgL_arg5192z00_2043;

				BgL_arg5191z00_2042 = CNST_TABLE_REF(((long) 94));
				BgL_arg5192z00_2043 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5191z00_2042,
					BgL_arg5192z00_2043, BGl_proc5429z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 545 */
				obj_t BgL_arg5195z00_2048;

				obj_t BgL_arg5196z00_2049;

				BgL_arg5195z00_2048 = CNST_TABLE_REF(((long) 95));
				BgL_arg5196z00_2049 = CNST_TABLE_REF(((long) 8));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5195z00_2048,
					BgL_arg5196z00_2049, BGl_proc5430z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 548 */
				obj_t BgL_arg5199z00_2054;

				obj_t BgL_arg5200z00_2055;

				BgL_arg5199z00_2054 = CNST_TABLE_REF(((long) 96));
				BgL_arg5200z00_2055 = CNST_TABLE_REF(((long) 2));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5199z00_2054,
					BgL_arg5200z00_2055, BGl_proc5431z00zzsaw_jvm_inlinez00);
			}
			{	/* SawJvm/inline.scm 556 */
				obj_t BgL_arg5206z00_2064;

				obj_t BgL_arg5207z00_2065;

				BgL_arg5206z00_2064 = CNST_TABLE_REF(((long) 97));
				BgL_arg5207z00_2065 = CNST_TABLE_REF(((long) 2));
				return
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5206z00_2064,
					BgL_arg5207z00_2065, BGl_proc5432z00zzsaw_jvm_inlinez00);
			}
		}
	}



/* <anonymous:5209> */
	obj_t BGl_zc3anonymousza35209ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2934,
		obj_t BgL_mez00_2935, obj_t BgL_argsz00_2936)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 556 */
			{
				obj_t BgL_mez00_2067;

				obj_t BgL_argsz00_2068;

				BgL_mez00_2067 = BgL_mez00_2935;
				BgL_argsz00_2068 = BgL_argsz00_2936;
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_2067), CAR(BgL_argsz00_2068));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2067), CNST_TABLE_REF(((long) 98)));
				{	/* SawJvm/inline.scm 559 */
					obj_t BgL_arg5211z00_2071;

					{	/* SawJvm/inline.scm 559 */
						obj_t BgL_pairz00_2812;

						BgL_pairz00_2812 = BgL_argsz00_2068;
						BgL_arg5211z00_2071 = CAR(CDR(BgL_pairz00_2812));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_2067), BgL_arg5211z00_2071);
				}
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2067), CNST_TABLE_REF(((long) 99)));
		}}
	}



/* <anonymous:5202> */
	obj_t BGl_zc3anonymousza35202ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2937,
		obj_t BgL_mez00_2938, obj_t BgL_argsz00_2939)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 548 */
			{
				obj_t BgL_mez00_2057;

				obj_t BgL_argsz00_2058;

				BgL_mez00_2057 = BgL_mez00_2938;
				BgL_argsz00_2058 = BgL_argsz00_2939;
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_2057), CAR(BgL_argsz00_2058));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2057), CNST_TABLE_REF(((long) 98)));
				{	/* SawJvm/inline.scm 551 */
					obj_t BgL_arg5204z00_2061;

					{	/* SawJvm/inline.scm 551 */
						obj_t BgL_pairz00_2801;

						BgL_pairz00_2801 = BgL_argsz00_2058;
						BgL_arg5204z00_2061 = CAR(CDR(BgL_pairz00_2801));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_2057), BgL_arg5204z00_2061);
				}
				{	/* SawJvm/inline.scm 552 */
					obj_t BgL_arg5205z00_2062;

					{	/* SawJvm/inline.scm 552 */
						obj_t BgL_pairz00_2805;

						BgL_pairz00_2805 = BgL_argsz00_2058;
						BgL_arg5205z00_2062 = CAR(CDR(CDR(BgL_pairz00_2805)));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_2057), BgL_arg5205z00_2062);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2057), CNST_TABLE_REF(((long) 100)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:5198> */
	obj_t BGl_zc3anonymousza35198ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2940,
		obj_t BgL_mez00_2941)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 545 */
			{
				obj_t BgL_mez00_2051;

				BgL_mez00_2051 = BgL_mez00_2941;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2051), CNST_TABLE_REF(((long) 102)));
		}}
	}



/* <anonymous:5194> */
	obj_t BGl_zc3anonymousza35194ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2942,
		obj_t BgL_mez00_2943)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 527 */
			{
				obj_t BgL_mez00_2045;

				BgL_mez00_2045 = BgL_mez00_2943;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2045), CNST_TABLE_REF(((long) 103)));
		}}
	}



/* <anonymous:5190> */
	obj_t BGl_zc3anonymousza35190ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2944,
		obj_t BgL_mez00_2945)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 520 */
			{
				obj_t BgL_mez00_2039;

				BgL_mez00_2039 = BgL_mez00_2945;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2039), CNST_TABLE_REF(((long) 104)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:5186> */
	obj_t BGl_zc3anonymousza35186ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2946,
		obj_t BgL_mez00_2947)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 517 */
			{
				obj_t BgL_mez00_2033;

				BgL_mez00_2033 = BgL_mez00_2947;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2033), CNST_TABLE_REF(((long) 105)));
		}}
	}



/* <anonymous:5182> */
	obj_t BGl_zc3anonymousza35182ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2948,
		obj_t BgL_mez00_2949)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 514 */
			{
				obj_t BgL_mez00_2027;

				BgL_mez00_2027 = BgL_mez00_2949;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2027), CNST_TABLE_REF(((long) 106)));
		}}
	}



/* <anonymous:5178> */
	obj_t BGl_zc3anonymousza35178ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2950,
		obj_t BgL_mez00_2951)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 507 */
			{
				obj_t BgL_mez00_2021;

				BgL_mez00_2021 = BgL_mez00_2951;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2021), CNST_TABLE_REF(((long) 107)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:5174> */
	obj_t BGl_zc3anonymousza35174ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2952,
		obj_t BgL_mez00_2953)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 503 */
			{
				obj_t BgL_mez00_2015;

				BgL_mez00_2015 = BgL_mez00_2953;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2015), CNST_TABLE_REF(((long) 108)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:5170> */
	obj_t BGl_zc3anonymousza35170ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2954,
		obj_t BgL_mez00_2955)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 500 */
			{
				obj_t BgL_mez00_2009;

				BgL_mez00_2009 = BgL_mez00_2955;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2009), CNST_TABLE_REF(((long) 109)));
		}}
	}



/* <anonymous:5166> */
	obj_t BGl_zc3anonymousza35166ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2956,
		obj_t BgL_mez00_2957)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 497 */
			{
				obj_t BgL_mez00_2003;

				BgL_mez00_2003 = BgL_mez00_2957;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_2003), CNST_TABLE_REF(((long) 110)));
		}}
	}



/* <anonymous:5162> */
	obj_t BGl_zc3anonymousza35162ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2958,
		obj_t BgL_mez00_2959)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 494 */
			{
				obj_t BgL_mez00_1997;

				BgL_mez00_1997 = BgL_mez00_2959;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1997), CNST_TABLE_REF(((long) 111)));
		}}
	}



/* <anonymous:5158> */
	obj_t BGl_zc3anonymousza35158ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2960,
		obj_t BgL_mez00_2961)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 478 */
			{
				obj_t BgL_mez00_1991;

				BgL_mez00_1991 = BgL_mez00_2961;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1991), CNST_TABLE_REF(((long) 112)));
		}}
	}



/* <anonymous:5154> */
	obj_t BGl_zc3anonymousza35154ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2962,
		obj_t BgL_mez00_2963)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 474 */
			{
				obj_t BgL_mez00_1985;

				BgL_mez00_1985 = BgL_mez00_2963;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1985), CNST_TABLE_REF(((long) 113)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:5150> */
	obj_t BGl_zc3anonymousza35150ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2964,
		obj_t BgL_mez00_2965)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 468 */
			{
				obj_t BgL_mez00_1979;

				BgL_mez00_1979 = BgL_mez00_2965;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1979), CNST_TABLE_REF(((long) 114)));
		}}
	}



/* <anonymous:5146> */
	obj_t BGl_zc3anonymousza35146ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2966,
		obj_t BgL_mez00_2967)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 465 */
			{
				obj_t BgL_mez00_1973;

				BgL_mez00_1973 = BgL_mez00_2967;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1973), CNST_TABLE_REF(((long) 115)));
		}}
	}



/* <anonymous:5142> */
	obj_t BGl_zc3anonymousza35142ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2968,
		obj_t BgL_mez00_2969)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 446 */
			{
				obj_t BgL_mez00_1967;

				BgL_mez00_1967 = BgL_mez00_2969;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1967), CNST_TABLE_REF(((long) 116)));
		}}
	}



/* <anonymous:5138> */
	obj_t BGl_zc3anonymousza35138ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2970,
		obj_t BgL_mez00_2971)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 443 */
			{
				obj_t BgL_mez00_1961;

				BgL_mez00_1961 = BgL_mez00_2971;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1961), CNST_TABLE_REF(((long) 117)));
		}}
	}



/* <anonymous:5134> */
	obj_t BGl_zc3anonymousza35134ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2972,
		obj_t BgL_mez00_2973)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 439 */
			{
				obj_t BgL_mez00_1955;

				BgL_mez00_1955 = BgL_mez00_2973;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1955), CNST_TABLE_REF(((long) 118)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:5130> */
	obj_t BGl_zc3anonymousza35130ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2974,
		obj_t BgL_mez00_2975)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 434 */
			{
				obj_t BgL_mez00_1949;

				BgL_mez00_1949 = BgL_mez00_2975;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1949), CNST_TABLE_REF(((long) 119)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1949), CNST_TABLE_REF(((long) 120)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1949), CNST_TABLE_REF(((long) 121)));
		}}
	}



/* <anonymous:5126> */
	obj_t BGl_zc3anonymousza35126ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2976,
		obj_t BgL_mez00_2977)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 431 */
			{	/* SawJvm/inline.scm 432 */
				obj_t BgL_res5440z00_3211;

				BgL_res5440z00_3211 = CNST_TABLE_REF(((long) 122));
				return BgL_res5440z00_3211;
			}
		}
	}



/* <anonymous:5122> */
	obj_t BGl_zc3anonymousza35122ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2978,
		obj_t BgL_mez00_2979)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 428 */
			{	/* SawJvm/inline.scm 429 */
				obj_t BgL_res5441z00_3213;

				BgL_res5441z00_3213 = CNST_TABLE_REF(((long) 122));
				return BgL_res5441z00_3213;
			}
		}
	}



/* <anonymous:5118> */
	obj_t BGl_zc3anonymousza35118ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2980,
		obj_t BgL_mez00_2981)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 425 */
			{
				obj_t BgL_mez00_1931;

				BgL_mez00_1931 = BgL_mez00_2981;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1931), CNST_TABLE_REF(((long) 123)));
		}}
	}



/* <anonymous:5113> */
	obj_t BGl_zc3anonymousza35113ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2982,
		obj_t BgL_mez00_2983, obj_t BgL_onzf3zf3_2984, obj_t BgL_labz00_2985)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 400 */
			{
				obj_t BgL_mez00_1922;

				obj_t BgL_onzf3zf3_1923;

				obj_t BgL_labz00_1924;

				BgL_mez00_1922 = BgL_mez00_2983;
				BgL_onzf3zf3_1923 = BgL_onzf3zf3_2984;
				BgL_labz00_1924 = BgL_labz00_2985;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1922), CNST_TABLE_REF(((long) 124)));
				{	/* SawJvm/inline.scm 402 */
					obj_t BgL_arg5114z00_2799;

					if (CBOOL(BgL_onzf3zf3_1923))
						{	/* SawJvm/inline.scm 402 */
							BgL_arg5114z00_2799 = CNST_TABLE_REF(((long) 125));
						}
					else
						{	/* SawJvm/inline.scm 402 */
							BgL_arg5114z00_2799 = CNST_TABLE_REF(((long) 126));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1922), BgL_arg5114z00_2799,
						BgL_labz00_1924);
				}
			}
		}
	}



/* <anonymous:5109> */
	obj_t BGl_zc3anonymousza35109ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2986,
		obj_t BgL_mez00_2987)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 396 */
			{
				obj_t BgL_mez00_1916;

				BgL_mez00_1916 = BgL_mez00_2987;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1916), CNST_TABLE_REF(((long) 124)));
				return
					BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_1916,
					CNST_TABLE_REF(((long) 125)));
		}}
	}



/* <anonymous:5105> */
	obj_t BGl_zc3anonymousza35105ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2988,
		obj_t BgL_mez00_2989)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 388 */
			{
				obj_t BgL_mez00_1910;

				BgL_mez00_1910 = BgL_mez00_2989;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1910), CNST_TABLE_REF(((long) 127)));
		}}
	}



/* <anonymous:5101> */
	obj_t BGl_zc3anonymousza35101ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2990,
		obj_t BgL_mez00_2991)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 387 */
			{
				obj_t BgL_mez00_1904;

				BgL_mez00_1904 = BgL_mez00_2991;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1904), CNST_TABLE_REF(((long) 128)));
		}}
	}



/* <anonymous:5097> */
	obj_t BGl_zc3anonymousza35097ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2992,
		obj_t BgL_mez00_2993)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 386 */
			{
				obj_t BgL_mez00_1898;

				BgL_mez00_1898 = BgL_mez00_2993;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1898), CNST_TABLE_REF(((long) 129)));
		}}
	}



/* <anonymous:5093> */
	obj_t BGl_zc3anonymousza35093ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2994,
		obj_t BgL_mez00_2995)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 385 */
			{
				obj_t BgL_mez00_1892;

				BgL_mez00_1892 = BgL_mez00_2995;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1892), CNST_TABLE_REF(((long) 130)));
		}}
	}



/* <anonymous:5089> */
	obj_t BGl_zc3anonymousza35089ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2996,
		obj_t BgL_mez00_2997)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 384 */
			{
				obj_t BgL_mez00_1886;

				BgL_mez00_1886 = BgL_mez00_2997;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1886), CNST_TABLE_REF(((long) 131)));
		}}
	}



/* <anonymous:5084> */
	obj_t BGl_zc3anonymousza35084ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_2998,
		obj_t BgL_mez00_2999, obj_t BgL_onzf3zf3_3000, obj_t BgL_labz00_3001)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 380 */
			{
				obj_t BgL_mez00_1877;

				obj_t BgL_onzf3zf3_1878;

				obj_t BgL_labz00_1879;

				BgL_mez00_1877 = BgL_mez00_2999;
				BgL_onzf3zf3_1878 = BgL_onzf3zf3_3000;
				BgL_labz00_1879 = BgL_labz00_3001;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1877), CNST_TABLE_REF(((long) 132)));
				{	/* SawJvm/inline.scm 382 */
					obj_t BgL_arg5085z00_2798;

					if (CBOOL(BgL_onzf3zf3_1878))
						{	/* SawJvm/inline.scm 382 */
							BgL_arg5085z00_2798 = CNST_TABLE_REF(((long) 133));
						}
					else
						{	/* SawJvm/inline.scm 382 */
							BgL_arg5085z00_2798 = CNST_TABLE_REF(((long) 134));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1877), BgL_arg5085z00_2798,
						BgL_labz00_1879);
				}
			}
		}
	}



/* <anonymous:5079> */
	obj_t BGl_zc3anonymousza35079ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3002,
		obj_t BgL_mez00_3003, obj_t BgL_onzf3zf3_3004, obj_t BgL_labz00_3005)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 376 */
			{
				obj_t BgL_mez00_1868;

				obj_t BgL_onzf3zf3_1869;

				obj_t BgL_labz00_1870;

				BgL_mez00_1868 = BgL_mez00_3003;
				BgL_onzf3zf3_1869 = BgL_onzf3zf3_3004;
				BgL_labz00_1870 = BgL_labz00_3005;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1868), CNST_TABLE_REF(((long) 132)));
				{	/* SawJvm/inline.scm 378 */
					obj_t BgL_arg5080z00_2797;

					if (CBOOL(BgL_onzf3zf3_1869))
						{	/* SawJvm/inline.scm 378 */
							BgL_arg5080z00_2797 = CNST_TABLE_REF(((long) 135));
						}
					else
						{	/* SawJvm/inline.scm 378 */
							BgL_arg5080z00_2797 = CNST_TABLE_REF(((long) 136));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1868), BgL_arg5080z00_2797,
						BgL_labz00_1870);
				}
			}
		}
	}



/* <anonymous:5074> */
	obj_t BGl_zc3anonymousza35074ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3006,
		obj_t BgL_mez00_3007, obj_t BgL_onzf3zf3_3008, obj_t BgL_labz00_3009)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 372 */
			{
				obj_t BgL_mez00_1859;

				obj_t BgL_onzf3zf3_1860;

				obj_t BgL_labz00_1861;

				BgL_mez00_1859 = BgL_mez00_3007;
				BgL_onzf3zf3_1860 = BgL_onzf3zf3_3008;
				BgL_labz00_1861 = BgL_labz00_3009;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1859), CNST_TABLE_REF(((long) 137)));
				{	/* SawJvm/inline.scm 374 */
					obj_t BgL_arg5075z00_2796;

					if (CBOOL(BgL_onzf3zf3_1860))
						{	/* SawJvm/inline.scm 374 */
							BgL_arg5075z00_2796 = CNST_TABLE_REF(((long) 136));
						}
					else
						{	/* SawJvm/inline.scm 374 */
							BgL_arg5075z00_2796 = CNST_TABLE_REF(((long) 135));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1859), BgL_arg5075z00_2796,
						BgL_labz00_1861);
				}
			}
		}
	}



/* <anonymous:5069> */
	obj_t BGl_zc3anonymousza35069ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3010,
		obj_t BgL_mez00_3011, obj_t BgL_onzf3zf3_3012, obj_t BgL_labz00_3013)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 368 */
			{
				obj_t BgL_mez00_1850;

				obj_t BgL_onzf3zf3_1851;

				obj_t BgL_labz00_1852;

				BgL_mez00_1850 = BgL_mez00_3011;
				BgL_onzf3zf3_1851 = BgL_onzf3zf3_3012;
				BgL_labz00_1852 = BgL_labz00_3013;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1850), CNST_TABLE_REF(((long) 137)));
				{	/* SawJvm/inline.scm 370 */
					obj_t BgL_arg5070z00_2795;

					if (CBOOL(BgL_onzf3zf3_1851))
						{	/* SawJvm/inline.scm 370 */
							BgL_arg5070z00_2795 = CNST_TABLE_REF(((long) 134));
						}
					else
						{	/* SawJvm/inline.scm 370 */
							BgL_arg5070z00_2795 = CNST_TABLE_REF(((long) 133));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1850), BgL_arg5070z00_2795,
						BgL_labz00_1852);
				}
			}
		}
	}



/* <anonymous:5064> */
	obj_t BGl_zc3anonymousza35064ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3014,
		obj_t BgL_mez00_3015, obj_t BgL_onzf3zf3_3016, obj_t BgL_labz00_3017)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 364 */
			{
				obj_t BgL_mez00_1841;

				obj_t BgL_onzf3zf3_1842;

				obj_t BgL_labz00_1843;

				BgL_mez00_1841 = BgL_mez00_3015;
				BgL_onzf3zf3_1842 = BgL_onzf3zf3_3016;
				BgL_labz00_1843 = BgL_labz00_3017;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1841), CNST_TABLE_REF(((long) 132)));
				{	/* SawJvm/inline.scm 366 */
					obj_t BgL_arg5065z00_2794;

					if (CBOOL(BgL_onzf3zf3_1842))
						{	/* SawJvm/inline.scm 366 */
							BgL_arg5065z00_2794 = CNST_TABLE_REF(((long) 138));
						}
					else
						{	/* SawJvm/inline.scm 366 */
							BgL_arg5065z00_2794 = CNST_TABLE_REF(((long) 139));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1841), BgL_arg5065z00_2794,
						BgL_labz00_1843);
				}
			}
		}
	}



/* <anonymous:5060> */
	obj_t BGl_zc3anonymousza35060ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3018,
		obj_t BgL_mez00_3019)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 361 */
			{
				obj_t BgL_mez00_1835;

				BgL_mez00_1835 = BgL_mez00_3019;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1835), CNST_TABLE_REF(((long) 140)));
		}}
	}



/* <anonymous:5056> */
	obj_t BGl_zc3anonymousza35056ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3020,
		obj_t BgL_mez00_3021)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 358 */
			{
				obj_t BgL_mez00_1829;

				BgL_mez00_1829 = BgL_mez00_3021;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1829), CNST_TABLE_REF(((long) 141)));
		}}
	}



/* <anonymous:5052> */
	obj_t BGl_zc3anonymousza35052ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3022,
		obj_t BgL_mez00_3023)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 355 */
			{
				obj_t BgL_mez00_1823;

				BgL_mez00_1823 = BgL_mez00_3023;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1823), CNST_TABLE_REF(((long) 140)));
		}}
	}



/* <anonymous:5048> */
	obj_t BGl_zc3anonymousza35048ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3024,
		obj_t BgL_mez00_3025)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 352 */
			{
				obj_t BgL_mez00_1817;

				BgL_mez00_1817 = BgL_mez00_3025;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1817), CNST_TABLE_REF(((long) 141)));
		}}
	}



/* <anonymous:5044> */
	obj_t BGl_zc3anonymousza35044ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3026,
		obj_t BgL_mez00_3027)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 349 */
			{
				obj_t BgL_mez00_1811;

				BgL_mez00_1811 = BgL_mez00_3027;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1811), CNST_TABLE_REF(((long) 142)));
		}}
	}



/* <anonymous:5040> */
	obj_t BGl_zc3anonymousza35040ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3028,
		obj_t BgL_mez00_3029)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 346 */
			{
				obj_t BgL_mez00_1805;

				BgL_mez00_1805 = BgL_mez00_3029;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1805), CNST_TABLE_REF(((long) 143)));
		}}
	}



/* <anonymous:5036> */
	obj_t BGl_zc3anonymousza35036ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3030,
		obj_t BgL_mez00_3031)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 343 */
			{
				obj_t BgL_mez00_1799;

				BgL_mez00_1799 = BgL_mez00_3031;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1799), CNST_TABLE_REF(((long) 144)));
		}}
	}



/* <anonymous:5032> */
	obj_t BGl_zc3anonymousza35032ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3032,
		obj_t BgL_mez00_3033)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 340 */
			{
				obj_t BgL_mez00_1793;

				BgL_mez00_1793 = BgL_mez00_3033;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1793), CNST_TABLE_REF(((long) 145)));
		}}
	}



/* <anonymous:5028> */
	obj_t BGl_zc3anonymousza35028ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3034,
		obj_t BgL_mez00_3035)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 332 */
			{
				obj_t BgL_mez00_1787;

				BgL_mez00_1787 = BgL_mez00_3035;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1787), CNST_TABLE_REF(((long) 146)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1787), CNST_TABLE_REF(((long) 147)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1787), CNST_TABLE_REF(((long) 148)));
		}}
	}



/* <anonymous:5024> */
	obj_t BGl_zc3anonymousza35024ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3036,
		obj_t BgL_mez00_3037)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 331 */
			{
				obj_t BgL_mez00_1781;

				BgL_mez00_1781 = BgL_mez00_3037;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1781), CNST_TABLE_REF(((long) 148)));
		}}
	}



/* <anonymous:5020> */
	obj_t BGl_zc3anonymousza35020ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3038,
		obj_t BgL_mez00_3039)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 330 */
			{
				obj_t BgL_mez00_1775;

				BgL_mez00_1775 = BgL_mez00_3039;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1775), CNST_TABLE_REF(((long) 121)));
		}}
	}



/* <anonymous:5016> */
	obj_t BGl_zc3anonymousza35016ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3040,
		obj_t BgL_mez00_3041)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 329 */
			{
				obj_t BgL_mez00_1769;

				BgL_mez00_1769 = BgL_mez00_3041;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1769), CNST_TABLE_REF(((long) 149)));
		}}
	}



/* <anonymous:5012> */
	obj_t BGl_zc3anonymousza35012ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3042,
		obj_t BgL_mez00_3043)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 328 */
			{
				obj_t BgL_mez00_1763;

				BgL_mez00_1763 = BgL_mez00_3043;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1763), CNST_TABLE_REF(((long) 150)));
		}}
	}



/* <anonymous:5008> */
	obj_t BGl_zc3anonymousza35008ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3044,
		obj_t BgL_mez00_3045)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 327 */
			{
				obj_t BgL_mez00_1757;

				BgL_mez00_1757 = BgL_mez00_3045;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1757), CNST_TABLE_REF(((long) 151)));
		}}
	}



/* <anonymous:5004> */
	obj_t BGl_zc3anonymousza35004ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3046,
		obj_t BgL_mez00_3047)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 326 */
			{
				obj_t BgL_mez00_1751;

				BgL_mez00_1751 = BgL_mez00_3047;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1751), CNST_TABLE_REF(((long) 151)));
		}}
	}



/* <anonymous:5000> */
	obj_t BGl_zc3anonymousza35000ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3048,
		obj_t BgL_mez00_3049)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 325 */
			{
				obj_t BgL_mez00_1745;

				BgL_mez00_1745 = BgL_mez00_3049;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1745), CNST_TABLE_REF(((long) 152)));
		}}
	}



/* <anonymous:4996> */
	obj_t BGl_zc3anonymousza34996ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3050,
		obj_t BgL_mez00_3051)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 324 */
			{
				obj_t BgL_mez00_1739;

				BgL_mez00_1739 = BgL_mez00_3051;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1739), CNST_TABLE_REF(((long) 153)));
		}}
	}



/* <anonymous:4991> */
	obj_t BGl_zc3anonymousza34991ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3052,
		obj_t BgL_mez00_3053)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 323 */
			{
				obj_t BgL_mez00_1733;

				BgL_mez00_1733 = BgL_mez00_3053;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1733), CNST_TABLE_REF(((long) 154)));
		}}
	}



/* <anonymous:4986> */
	obj_t BGl_zc3anonymousza34986ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3054,
		obj_t BgL_mez00_3055, obj_t BgL_onzf3zf3_3056, obj_t BgL_labz00_3057)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 318 */
			{
				obj_t BgL_mez00_1724;

				obj_t BgL_onzf3zf3_1725;

				obj_t BgL_labz00_1726;

				BgL_mez00_1724 = BgL_mez00_3055;
				BgL_onzf3zf3_1725 = BgL_onzf3zf3_3056;
				BgL_labz00_1726 = BgL_labz00_3057;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1724), CNST_TABLE_REF(((long) 146)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1724), CNST_TABLE_REF(((long) 121)));
				{	/* SawJvm/inline.scm 321 */
					obj_t BgL_arg4987z00_2793;

					if (CBOOL(BgL_onzf3zf3_1725))
						{	/* SawJvm/inline.scm 321 */
							BgL_arg4987z00_2793 = CNST_TABLE_REF(((long) 139));
						}
					else
						{	/* SawJvm/inline.scm 321 */
							BgL_arg4987z00_2793 = CNST_TABLE_REF(((long) 138));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1724), BgL_arg4987z00_2793,
						BgL_labz00_1726);
				}
			}
		}
	}



/* <anonymous:4981> */
	obj_t BGl_zc3anonymousza34981ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3058,
		obj_t BgL_mez00_3059, obj_t BgL_onzf3zf3_3060, obj_t BgL_labz00_3061)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 313 */
			{
				obj_t BgL_mez00_1715;

				obj_t BgL_onzf3zf3_1716;

				obj_t BgL_labz00_1717;

				BgL_mez00_1715 = BgL_mez00_3059;
				BgL_onzf3zf3_1716 = BgL_onzf3zf3_3060;
				BgL_labz00_1717 = BgL_labz00_3061;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1715), CNST_TABLE_REF(((long) 146)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1715), CNST_TABLE_REF(((long) 121)));
				{	/* SawJvm/inline.scm 316 */
					obj_t BgL_arg4982z00_2792;

					if (CBOOL(BgL_onzf3zf3_1716))
						{	/* SawJvm/inline.scm 316 */
							BgL_arg4982z00_2792 = CNST_TABLE_REF(((long) 138));
						}
					else
						{	/* SawJvm/inline.scm 316 */
							BgL_arg4982z00_2792 = CNST_TABLE_REF(((long) 139));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1715), BgL_arg4982z00_2792,
						BgL_labz00_1717);
				}
			}
		}
	}



/* <anonymous:4976> */
	obj_t BGl_zc3anonymousza34976ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3062,
		obj_t BgL_mez00_3063, obj_t BgL_onzf3zf3_3064, obj_t BgL_labz00_3065)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 310 */
			{
				obj_t BgL_mez00_1706;

				obj_t BgL_onzf3zf3_1707;

				obj_t BgL_labz00_1708;

				BgL_mez00_1706 = BgL_mez00_3063;
				BgL_onzf3zf3_1707 = BgL_onzf3zf3_3064;
				BgL_labz00_1708 = BgL_labz00_3065;
				{	/* SawJvm/inline.scm 311 */
					obj_t BgL_arg4977z00_2791;

					if (CBOOL(BgL_onzf3zf3_1707))
						{	/* SawJvm/inline.scm 311 */
							BgL_arg4977z00_2791 = CNST_TABLE_REF(((long) 155));
						}
					else
						{	/* SawJvm/inline.scm 311 */
							BgL_arg4977z00_2791 = CNST_TABLE_REF(((long) 156));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1706), BgL_arg4977z00_2791,
						BgL_labz00_1708);
				}
			}
		}
	}



/* <anonymous:4971> */
	obj_t BGl_zc3anonymousza34971ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3066,
		obj_t BgL_mez00_3067, obj_t BgL_onzf3zf3_3068, obj_t BgL_labz00_3069)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 307 */
			{
				obj_t BgL_mez00_1697;

				obj_t BgL_onzf3zf3_1698;

				obj_t BgL_labz00_1699;

				BgL_mez00_1697 = BgL_mez00_3067;
				BgL_onzf3zf3_1698 = BgL_onzf3zf3_3068;
				BgL_labz00_1699 = BgL_labz00_3069;
				{	/* SawJvm/inline.scm 308 */
					obj_t BgL_arg4972z00_2790;

					if (CBOOL(BgL_onzf3zf3_1698))
						{	/* SawJvm/inline.scm 308 */
							BgL_arg4972z00_2790 = CNST_TABLE_REF(((long) 157));
						}
					else
						{	/* SawJvm/inline.scm 308 */
							BgL_arg4972z00_2790 = CNST_TABLE_REF(((long) 158));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1697), BgL_arg4972z00_2790,
						BgL_labz00_1699);
				}
			}
		}
	}



/* <anonymous:4966> */
	obj_t BGl_zc3anonymousza34966ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3070,
		obj_t BgL_mez00_3071, obj_t BgL_onzf3zf3_3072, obj_t BgL_labz00_3073)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 304 */
			{
				obj_t BgL_mez00_1688;

				obj_t BgL_onzf3zf3_1689;

				obj_t BgL_labz00_1690;

				BgL_mez00_1688 = BgL_mez00_3071;
				BgL_onzf3zf3_1689 = BgL_onzf3zf3_3072;
				BgL_labz00_1690 = BgL_labz00_3073;
				{	/* SawJvm/inline.scm 305 */
					obj_t BgL_arg4967z00_2789;

					if (CBOOL(BgL_onzf3zf3_1689))
						{	/* SawJvm/inline.scm 305 */
							BgL_arg4967z00_2789 = CNST_TABLE_REF(((long) 158));
						}
					else
						{	/* SawJvm/inline.scm 305 */
							BgL_arg4967z00_2789 = CNST_TABLE_REF(((long) 157));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1688), BgL_arg4967z00_2789,
						BgL_labz00_1690);
				}
			}
		}
	}



/* <anonymous:4961> */
	obj_t BGl_zc3anonymousza34961ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3074,
		obj_t BgL_mez00_3075, obj_t BgL_onzf3zf3_3076, obj_t BgL_labz00_3077)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 301 */
			{
				obj_t BgL_mez00_1679;

				obj_t BgL_onzf3zf3_1680;

				obj_t BgL_labz00_1681;

				BgL_mez00_1679 = BgL_mez00_3075;
				BgL_onzf3zf3_1680 = BgL_onzf3zf3_3076;
				BgL_labz00_1681 = BgL_labz00_3077;
				{	/* SawJvm/inline.scm 302 */
					obj_t BgL_arg4962z00_2788;

					if (CBOOL(BgL_onzf3zf3_1680))
						{	/* SawJvm/inline.scm 302 */
							BgL_arg4962z00_2788 = CNST_TABLE_REF(((long) 156));
						}
					else
						{	/* SawJvm/inline.scm 302 */
							BgL_arg4962z00_2788 = CNST_TABLE_REF(((long) 155));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1679), BgL_arg4962z00_2788,
						BgL_labz00_1681);
				}
			}
		}
	}



/* <anonymous:4956> */
	obj_t BGl_zc3anonymousza34956ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3078,
		obj_t BgL_mez00_3079, obj_t BgL_onzf3zf3_3080, obj_t BgL_labz00_3081)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 298 */
			{
				obj_t BgL_mez00_1670;

				obj_t BgL_onzf3zf3_1671;

				obj_t BgL_labz00_1672;

				BgL_mez00_1670 = BgL_mez00_3079;
				BgL_onzf3zf3_1671 = BgL_onzf3zf3_3080;
				BgL_labz00_1672 = BgL_labz00_3081;
				{	/* SawJvm/inline.scm 299 */
					obj_t BgL_arg4957z00_2787;

					if (CBOOL(BgL_onzf3zf3_1671))
						{	/* SawJvm/inline.scm 299 */
							BgL_arg4957z00_2787 = CNST_TABLE_REF(((long) 159));
						}
					else
						{	/* SawJvm/inline.scm 299 */
							BgL_arg4957z00_2787 = CNST_TABLE_REF(((long) 160));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1670), BgL_arg4957z00_2787,
						BgL_labz00_1672);
				}
			}
		}
	}



/* <anonymous:4952> */
	obj_t BGl_zc3anonymousza34952ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3082,
		obj_t BgL_mez00_3083)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 295 */
			{
				obj_t BgL_mez00_1664;

				BgL_mez00_1664 = BgL_mez00_3083;
				return
					BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_1664,
					CNST_TABLE_REF(((long) 155)));
		}}
	}



/* <anonymous:4948> */
	obj_t BGl_zc3anonymousza34948ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3084,
		obj_t BgL_mez00_3085)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 292 */
			{
				obj_t BgL_mez00_1658;

				BgL_mez00_1658 = BgL_mez00_3085;
				return
					BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_1658,
					CNST_TABLE_REF(((long) 157)));
		}}
	}



/* <anonymous:4944> */
	obj_t BGl_zc3anonymousza34944ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3086,
		obj_t BgL_mez00_3087)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 289 */
			{
				obj_t BgL_mez00_1652;

				BgL_mez00_1652 = BgL_mez00_3087;
				return
					BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_1652,
					CNST_TABLE_REF(((long) 158)));
		}}
	}



/* <anonymous:4940> */
	obj_t BGl_zc3anonymousza34940ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3088,
		obj_t BgL_mez00_3089)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 286 */
			{
				obj_t BgL_mez00_1646;

				BgL_mez00_1646 = BgL_mez00_3089;
				return
					BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_1646,
					CNST_TABLE_REF(((long) 156)));
		}}
	}



/* <anonymous:4936> */
	obj_t BGl_zc3anonymousza34936ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3090,
		obj_t BgL_mez00_3091)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 283 */
			{
				obj_t BgL_mez00_1640;

				BgL_mez00_1640 = BgL_mez00_3091;
				return
					BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_1640,
					CNST_TABLE_REF(((long) 159)));
		}}
	}



/* <anonymous:4932> */
	obj_t BGl_zc3anonymousza34932ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3092,
		obj_t BgL_mez00_3093)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 270 */
			{
				obj_t BgL_mez00_1634;

				BgL_mez00_1634 = BgL_mez00_3093;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1634), CNST_TABLE_REF(((long) 161)));
		}}
	}



/* <anonymous:4928> */
	obj_t BGl_zc3anonymousza34928ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3094,
		obj_t BgL_mez00_3095)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 267 */
			{	/* SawJvm/inline.scm 268 */
				obj_t BgL_res5442z00_3215;

				BgL_res5442z00_3215 = CNST_TABLE_REF(((long) 122));
				return BgL_res5442z00_3215;
			}
		}
	}



/* <anonymous:4924> */
	obj_t BGl_zc3anonymousza34924ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3096,
		obj_t BgL_mez00_3097)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 264 */
			{	/* SawJvm/inline.scm 265 */
				obj_t BgL_res5443z00_3217;

				BgL_res5443z00_3217 = CNST_TABLE_REF(((long) 122));
				return BgL_res5443z00_3217;
			}
		}
	}



/* <anonymous:4920> */
	obj_t BGl_zc3anonymousza34920ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3098,
		obj_t BgL_mez00_3099)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 258 */
			{
				obj_t BgL_mez00_1616;

				BgL_mez00_1616 = BgL_mez00_3099;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1616), CNST_TABLE_REF(((long) 161)));
		}}
	}



/* <anonymous:4916> */
	obj_t BGl_zc3anonymousza34916ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3100,
		obj_t BgL_mez00_3101)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 255 */
			{	/* SawJvm/inline.scm 256 */
				obj_t BgL_res5444z00_3219;

				BgL_res5444z00_3219 = CNST_TABLE_REF(((long) 122));
				return BgL_res5444z00_3219;
			}
		}
	}



/* <anonymous:4912> */
	obj_t BGl_zc3anonymousza34912ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3102,
		obj_t BgL_mez00_3103)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 252 */
			{
				obj_t BgL_mez00_1604;

				BgL_mez00_1604 = BgL_mez00_3103;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1604), CNST_TABLE_REF(((long) 162)));
		}}
	}



/* <anonymous:4908> */
	obj_t BGl_zc3anonymousza34908ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3104,
		obj_t BgL_mez00_3105)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 249 */
			{
				obj_t BgL_mez00_1598;

				BgL_mez00_1598 = BgL_mez00_3105;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1598), CNST_TABLE_REF(((long) 163)));
		}}
	}



/* <anonymous:4904> */
	obj_t BGl_zc3anonymousza34904ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3106,
		obj_t BgL_mez00_3107)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 245 */
			{
				obj_t BgL_mez00_1592;

				BgL_mez00_1592 = BgL_mez00_3107;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1592), CNST_TABLE_REF(((long) 120)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1592), CNST_TABLE_REF(((long) 121)));
		}}
	}



/* <anonymous:4900> */
	obj_t BGl_zc3anonymousza34900ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3108,
		obj_t BgL_mez00_3109)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 242 */
			{
				obj_t BgL_mez00_1586;

				BgL_mez00_1586 = BgL_mez00_3109;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1586), CNST_TABLE_REF(((long) 164)));
		}}
	}



/* <anonymous:4896> */
	obj_t BGl_zc3anonymousza34896ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3110,
		obj_t BgL_mez00_3111)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 239 */
			{
				obj_t BgL_mez00_1580;

				BgL_mez00_1580 = BgL_mez00_3111;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1580), CNST_TABLE_REF(((long) 165)));
		}}
	}



/* <anonymous:4891> */
	obj_t BGl_zc3anonymousza34891ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3112,
		obj_t BgL_mez00_3113, obj_t BgL_onzf3zf3_3114, obj_t BgL_labz00_3115)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 233 */
			{
				obj_t BgL_mez00_1571;

				obj_t BgL_onzf3zf3_1572;

				obj_t BgL_labz00_1573;

				BgL_mez00_1571 = BgL_mez00_3113;
				BgL_onzf3zf3_1572 = BgL_onzf3zf3_3114;
				BgL_labz00_1573 = BgL_labz00_3115;
				{	/* SawJvm/inline.scm 234 */
					obj_t BgL_arg4892z00_2786;

					if (CBOOL(BgL_onzf3zf3_1572))
						{	/* SawJvm/inline.scm 234 */
							BgL_arg4892z00_2786 = CNST_TABLE_REF(((long) 155));
						}
					else
						{	/* SawJvm/inline.scm 234 */
							BgL_arg4892z00_2786 = CNST_TABLE_REF(((long) 156));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1571), BgL_arg4892z00_2786,
						BgL_labz00_1573);
				}
			}
		}
	}



/* <anonymous:4886> */
	obj_t BGl_zc3anonymousza34886ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3116,
		obj_t BgL_mez00_3117, obj_t BgL_onzf3zf3_3118, obj_t BgL_labz00_3119)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 230 */
			{
				obj_t BgL_mez00_1562;

				obj_t BgL_onzf3zf3_1563;

				obj_t BgL_labz00_1564;

				BgL_mez00_1562 = BgL_mez00_3117;
				BgL_onzf3zf3_1563 = BgL_onzf3zf3_3118;
				BgL_labz00_1564 = BgL_labz00_3119;
				{	/* SawJvm/inline.scm 231 */
					obj_t BgL_arg4887z00_2785;

					if (CBOOL(BgL_onzf3zf3_1563))
						{	/* SawJvm/inline.scm 231 */
							BgL_arg4887z00_2785 = CNST_TABLE_REF(((long) 157));
						}
					else
						{	/* SawJvm/inline.scm 231 */
							BgL_arg4887z00_2785 = CNST_TABLE_REF(((long) 158));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1562), BgL_arg4887z00_2785,
						BgL_labz00_1564);
				}
			}
		}
	}



/* <anonymous:4881> */
	obj_t BGl_zc3anonymousza34881ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3120,
		obj_t BgL_mez00_3121, obj_t BgL_onzf3zf3_3122, obj_t BgL_labz00_3123)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 227 */
			{
				obj_t BgL_mez00_1553;

				obj_t BgL_onzf3zf3_1554;

				obj_t BgL_labz00_1555;

				BgL_mez00_1553 = BgL_mez00_3121;
				BgL_onzf3zf3_1554 = BgL_onzf3zf3_3122;
				BgL_labz00_1555 = BgL_labz00_3123;
				{	/* SawJvm/inline.scm 228 */
					obj_t BgL_arg4882z00_2784;

					if (CBOOL(BgL_onzf3zf3_1554))
						{	/* SawJvm/inline.scm 228 */
							BgL_arg4882z00_2784 = CNST_TABLE_REF(((long) 158));
						}
					else
						{	/* SawJvm/inline.scm 228 */
							BgL_arg4882z00_2784 = CNST_TABLE_REF(((long) 157));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1553), BgL_arg4882z00_2784,
						BgL_labz00_1555);
				}
			}
		}
	}



/* <anonymous:4876> */
	obj_t BGl_zc3anonymousza34876ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3124,
		obj_t BgL_mez00_3125, obj_t BgL_onzf3zf3_3126, obj_t BgL_labz00_3127)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 224 */
			{
				obj_t BgL_mez00_1544;

				obj_t BgL_onzf3zf3_1545;

				obj_t BgL_labz00_1546;

				BgL_mez00_1544 = BgL_mez00_3125;
				BgL_onzf3zf3_1545 = BgL_onzf3zf3_3126;
				BgL_labz00_1546 = BgL_labz00_3127;
				{	/* SawJvm/inline.scm 225 */
					obj_t BgL_arg4877z00_2783;

					if (CBOOL(BgL_onzf3zf3_1545))
						{	/* SawJvm/inline.scm 225 */
							BgL_arg4877z00_2783 = CNST_TABLE_REF(((long) 156));
						}
					else
						{	/* SawJvm/inline.scm 225 */
							BgL_arg4877z00_2783 = CNST_TABLE_REF(((long) 155));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1544), BgL_arg4877z00_2783,
						BgL_labz00_1546);
				}
			}
		}
	}



/* <anonymous:4871> */
	obj_t BGl_zc3anonymousza34871ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3128,
		obj_t BgL_mez00_3129, obj_t BgL_onzf3zf3_3130, obj_t BgL_labz00_3131)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 221 */
			{
				obj_t BgL_mez00_1535;

				obj_t BgL_onzf3zf3_1536;

				obj_t BgL_labz00_1537;

				BgL_mez00_1535 = BgL_mez00_3129;
				BgL_onzf3zf3_1536 = BgL_onzf3zf3_3130;
				BgL_labz00_1537 = BgL_labz00_3131;
				{	/* SawJvm/inline.scm 222 */
					obj_t BgL_arg4872z00_2782;

					if (CBOOL(BgL_onzf3zf3_1536))
						{	/* SawJvm/inline.scm 222 */
							BgL_arg4872z00_2782 = CNST_TABLE_REF(((long) 159));
						}
					else
						{	/* SawJvm/inline.scm 222 */
							BgL_arg4872z00_2782 = CNST_TABLE_REF(((long) 160));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1535), BgL_arg4872z00_2782,
						BgL_labz00_1537);
				}
			}
		}
	}



/* <anonymous:4867> */
	obj_t BGl_zc3anonymousza34867ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3132,
		obj_t BgL_mez00_3133)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 218 */
			{
				obj_t BgL_mez00_1529;

				BgL_mez00_1529 = BgL_mez00_3133;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1529), CNST_TABLE_REF(((long) 162)));
		}}
	}



/* <anonymous:4859> */
	obj_t BGl_zc3anonymousza34859ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3134,
		obj_t BgL_mez00_3135)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 213 */
			{
				obj_t BgL_mez00_1519;

				BgL_mez00_1519 = BgL_mez00_3135;
				{	/* SawJvm/inline.scm 214 */
					obj_t BgL_arg4860z00_1521;

					{	/* SawJvm/inline.scm 214 */
						obj_t BgL_arg4861z00_1522;

						obj_t BgL_arg4862z00_1523;

						BgL_arg4861z00_1522 = CNST_TABLE_REF(((long) 166));
						{	/* SawJvm/inline.scm 214 */
							obj_t BgL_list4863z00_1524;

							BgL_list4863z00_1524 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg4862z00_1523 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
										(long) 167)), BgL_list4863z00_1524);
						}
						BgL_arg4860z00_1521 =
							MAKE_PAIR(BgL_arg4861z00_1522, BgL_arg4862z00_1523);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1519), BgL_arg4860z00_1521);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1519), CNST_TABLE_REF(((long) 120)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1519), CNST_TABLE_REF(((long) 121)));
		}}
	}



/* <anonymous:4855> */
	obj_t BGl_zc3anonymousza34855ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3136,
		obj_t BgL_mez00_3137)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 210 */
			{
				obj_t BgL_mez00_1513;

				BgL_mez00_1513 = BgL_mez00_3137;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1513), CNST_TABLE_REF(((long) 168)));
		}}
	}



/* <anonymous:4846> */
	obj_t BGl_zc3anonymousza34846ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3138,
		obj_t BgL_mez00_3139, obj_t BgL_argsz00_3140)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 203 */
			{
				obj_t BgL_mez00_1501;

				obj_t BgL_argsz00_1502;

				BgL_mez00_1501 = BgL_mez00_3139;
				BgL_argsz00_1502 = BgL_argsz00_3140;
				{	/* SawJvm/inline.scm 204 */
					obj_t BgL_arg4847z00_1504;

					{	/* SawJvm/inline.scm 204 */
						obj_t BgL_arg4848z00_1505;

						obj_t BgL_arg4849z00_1506;

						BgL_arg4848z00_1505 = CNST_TABLE_REF(((long) 169));
						{	/* SawJvm/inline.scm 204 */
							obj_t BgL_list4850z00_1507;

							BgL_list4850z00_1507 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg4849z00_1506 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
										(long) 170)), BgL_list4850z00_1507);
						}
						BgL_arg4847z00_1504 =
							MAKE_PAIR(BgL_arg4848z00_1505, BgL_arg4849z00_1506);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1501), BgL_arg4847z00_1504);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_1501), CAR(BgL_argsz00_1502));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1501), CNST_TABLE_REF(((long) 120)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1501), CNST_TABLE_REF(((long) 121)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1501), CNST_TABLE_REF(((long) 99)));
		}}
	}



/* <anonymous:4841> */
	obj_t BGl_zc3anonymousza34841ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3141,
		obj_t BgL_mez00_3142)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 200 */
			{
				obj_t BgL_mez00_1495;

				BgL_mez00_1495 = BgL_mez00_3142;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1495), CNST_TABLE_REF(((long) 171)));
		}}
	}



/* <anonymous:4836> */
	obj_t BGl_zc3anonymousza34836ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3143,
		obj_t BgL_mez00_3144, obj_t BgL_onzf3zf3_3145, obj_t BgL_labz00_3146)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 192 */
			{
				obj_t BgL_mez00_1486;

				obj_t BgL_onzf3zf3_1487;

				obj_t BgL_labz00_1488;

				BgL_mez00_1486 = BgL_mez00_3144;
				BgL_onzf3zf3_1487 = BgL_onzf3zf3_3145;
				BgL_labz00_1488 = BgL_labz00_3146;
				if (CBOOL(BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00))
					{	/* SawJvm/inline.scm 194 */
						obj_t BgL_arg4837z00_2780;

						if (CBOOL(BgL_onzf3zf3_1487))
							{	/* SawJvm/inline.scm 194 */
								BgL_arg4837z00_2780 = CNST_TABLE_REF(((long) 125));
							}
						else
							{	/* SawJvm/inline.scm 194 */
								BgL_arg4837z00_2780 = CNST_TABLE_REF(((long) 126));
							}
						return
							BGl_branchz00zzsaw_jvm_outz00(
							(BgL_jvmz00_bglt) (BgL_mez00_1486), BgL_arg4837z00_2780,
							BgL_labz00_1488);
					}
				else
					{	/* SawJvm/inline.scm 193 */
						return CNST_TABLE_REF(((long) 172));
		}}}
	}



/* <anonymous:4831> */
	obj_t BGl_zc3anonymousza34831ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3147,
		obj_t BgL_mez00_3148, obj_t BgL_onzf3zf3_3149, obj_t BgL_labz00_3150)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 189 */
			{
				obj_t BgL_mez00_1477;

				obj_t BgL_onzf3zf3_1478;

				obj_t BgL_labz00_1479;

				BgL_mez00_1477 = BgL_mez00_3148;
				BgL_onzf3zf3_1478 = BgL_onzf3zf3_3149;
				BgL_labz00_1479 = BgL_labz00_3150;
				{	/* SawJvm/inline.scm 190 */
					obj_t BgL_arg4832z00_2779;

					if (CBOOL(BgL_onzf3zf3_1478))
						{	/* SawJvm/inline.scm 190 */
							BgL_arg4832z00_2779 = CNST_TABLE_REF(((long) 125));
						}
					else
						{	/* SawJvm/inline.scm 190 */
							BgL_arg4832z00_2779 = CNST_TABLE_REF(((long) 126));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1477), BgL_arg4832z00_2779,
						BgL_labz00_1479);
				}
			}
		}
	}



/* <anonymous:4813> */
	obj_t BGl_zc3anonymousza34813ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3151,
		obj_t BgL_mez00_3152, obj_t BgL_argsz00_3153)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 174 */
			{
				obj_t BgL_mez00_1454;

				obj_t BgL_argsz00_1455;

				BgL_mez00_1454 = BgL_mez00_3152;
				BgL_argsz00_1455 = BgL_argsz00_3153;
				{	/* SawJvm/inline.scm 175 */
					obj_t BgL_funz00_1457;

					BgL_funz00_1457 =
						BGl_skipzd2movzd2zzsaw_jvm_inlinez00(CAR(BgL_argsz00_1455));
					if (BGl_iszd2azf3z21zz__objectz00(BgL_funz00_1457,
							BGl_rtl_loadiz00zzsaw_defsz00))
						{	/* SawJvm/inline.scm 177 */
							bool_t BgL_testz00_3966;

							{	/* SawJvm/inline.scm 177 */
								BgL_atomz00_bglt BgL_obj2135z00_2777;

								{
									BgL_rtl_loadiz00_bglt BgL_auxz00_3967;

									BgL_auxz00_3967 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_1457);
									BgL_obj2135z00_2777 =
										(((BgL_rtl_loadiz00_bglt) CREF(BgL_auxz00_3967))->
										BgL_constantz00);
								}
								BgL_testz00_3966 =
									CBOOL(
									(((BgL_atomz00_bglt) CREF(BgL_obj2135z00_2777))->
										BgL_valuez00));
							}
							if (BgL_testz00_3966)
								{	/* SawJvm/inline.scm 177 */
									return
										BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_1454),
										CNST_TABLE_REF(((long) 173)));
								}
							else
								{	/* SawJvm/inline.scm 177 */
									return
										BGl_codez12z12zzsaw_jvm_outz00(
										(BgL_jvmz00_bglt) (BgL_mez00_1454),
										CNST_TABLE_REF(((long) 174)));
						}}
					else
						{	/* SawJvm/inline.scm 180 */
							obj_t BgL_l1z00_1461;

							obj_t BgL_l2z00_1462;

							BgL_l1z00_1461 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_string5433z00zzsaw_jvm_inlinez00);
							BgL_l2z00_1462 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_string5433z00zzsaw_jvm_inlinez00);
							BGl_genzd2exprzd2zzsaw_jvm_codez00((BgL_jvmz00_bglt)
								(BgL_mez00_1454), CAR(BgL_argsz00_1455));
							{	/* SawJvm/inline.scm 182 */
								obj_t BgL_arg4819z00_1464;

								{	/* SawJvm/inline.scm 182 */
									obj_t BgL_arg4820z00_1465;

									obj_t BgL_arg4821z00_1466;

									BgL_arg4820z00_1465 = CNST_TABLE_REF(((long) 138));
									{	/* SawJvm/inline.scm 182 */
										obj_t BgL_list4822z00_1467;

										BgL_list4822z00_1467 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg4821z00_1466 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_l1z00_1461, BgL_list4822z00_1467);
									}
									BgL_arg4819z00_1464 =
										MAKE_PAIR(BgL_arg4820z00_1465, BgL_arg4821z00_1466);
								}
								BGl_codez12z12zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_1454), BgL_arg4819z00_1464);
							}
							BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_1454),
								CNST_TABLE_REF(((long) 173)));
							{	/* SawJvm/inline.scm 184 */
								obj_t BgL_arg4823z00_1468;

								{	/* SawJvm/inline.scm 184 */
									obj_t BgL_arg4824z00_1469;

									obj_t BgL_arg4825z00_1470;

									BgL_arg4824z00_1469 = CNST_TABLE_REF(((long) 175));
									{	/* SawJvm/inline.scm 184 */
										obj_t BgL_list4826z00_1471;

										BgL_list4826z00_1471 = MAKE_PAIR(BNIL, BNIL);
										BgL_arg4825z00_1470 =
											BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
											(BgL_l2z00_1462, BgL_list4826z00_1471);
									}
									BgL_arg4823z00_1468 =
										MAKE_PAIR(BgL_arg4824z00_1469, BgL_arg4825z00_1470);
								}
								BGl_codez12z12zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_1454), BgL_arg4823z00_1468);
							}
							BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_1454), BgL_l1z00_1461);
							BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_1454),
								CNST_TABLE_REF(((long) 174)));
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								(BgL_jvmz00_bglt) (BgL_mez00_1454), BgL_l2z00_1462);
						}
				}
			}
		}
	}



/* <anonymous:4807> */
	obj_t BGl_zc3anonymousza34807ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3154,
		obj_t BgL_mez00_3155, obj_t BgL_onzf3zf3_3156, obj_t BgL_labz00_3157)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 170 */
			{
				obj_t BgL_mez00_1445;

				obj_t BgL_onzf3zf3_1446;

				obj_t BgL_labz00_1447;

				BgL_mez00_1445 = BgL_mez00_3155;
				BgL_onzf3zf3_1446 = BgL_onzf3zf3_3156;
				BgL_labz00_1447 = BgL_labz00_3157;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1445), CNST_TABLE_REF(((long) 174)));
				{	/* SawJvm/inline.scm 172 */
					obj_t BgL_arg4808z00_2773;

					if (CBOOL(BgL_onzf3zf3_1446))
						{	/* SawJvm/inline.scm 172 */
							BgL_arg4808z00_2773 = CNST_TABLE_REF(((long) 126));
						}
					else
						{	/* SawJvm/inline.scm 172 */
							BgL_arg4808z00_2773 = CNST_TABLE_REF(((long) 125));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1445), BgL_arg4808z00_2773,
						BgL_labz00_1447);
				}
			}
		}
	}



/* <anonymous:4803> */
	obj_t BGl_zc3anonymousza34803ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3158,
		obj_t BgL_mez00_3159)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 167 */
			{
				obj_t BgL_mez00_1439;

				BgL_mez00_1439 = BgL_mez00_3159;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1439), CNST_TABLE_REF(((long) 176)));
		}}
	}



/* <anonymous:4799> */
	obj_t BGl_zc3anonymousza34799ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3160,
		obj_t BgL_mez00_3161)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 158 */
			{
				obj_t BgL_mez00_1433;

				BgL_mez00_1433 = BgL_mez00_3161;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1433), CNST_TABLE_REF(((long) 177)));
		}}
	}



/* <anonymous:4795> */
	obj_t BGl_zc3anonymousza34795ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3162,
		obj_t BgL_mez00_3163, obj_t BgL_argsz00_3164)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 155 */
			{
				obj_t BgL_mez00_1426;

				obj_t BgL_argsz00_1427;

				BgL_mez00_1426 = BgL_mez00_3163;
				BgL_argsz00_1427 = BgL_argsz00_3164;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1426), CNST_TABLE_REF(((long) 178)));
		}}
	}



/* <anonymous:4791> */
	obj_t BGl_zc3anonymousza34791ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3165,
		obj_t BgL_mez00_3166)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 151 */
			{
				obj_t BgL_mez00_1420;

				BgL_mez00_1420 = BgL_mez00_3166;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1420), CNST_TABLE_REF(((long) 100)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:4787> */
	obj_t BGl_zc3anonymousza34787ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3167,
		obj_t BgL_mez00_3168)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 148 */
			{
				obj_t BgL_mez00_1414;

				BgL_mez00_1414 = BgL_mez00_3168;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1414), CNST_TABLE_REF(((long) 99)));
		}}
	}



/* <anonymous:4783> */
	obj_t BGl_zc3anonymousza34783ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3169,
		obj_t BgL_mez00_3170)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 145 */
			{
				obj_t BgL_mez00_1408;

				BgL_mez00_1408 = BgL_mez00_3170;
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1408), CNST_TABLE_REF(((long) 179)));
		}}
	}



/* <anonymous:4775> */
	obj_t BGl_zc3anonymousza34775ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3171,
		obj_t BgL_mez00_3172, obj_t BgL_argsz00_3173)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 133 */
			{
				obj_t BgL_mez00_1399;

				obj_t BgL_argsz00_1400;

				BgL_mez00_1399 = BgL_mez00_3172;
				BgL_argsz00_1400 = BgL_argsz00_3173;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 180)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 181)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 182)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 181)));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CAR(BgL_argsz00_1400));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 183)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 181)));
				{	/* SawJvm/inline.scm 141 */
					obj_t BgL_arg4777z00_1403;

					{	/* SawJvm/inline.scm 141 */
						obj_t BgL_pairz00_2769;

						BgL_pairz00_2769 = BgL_argsz00_1400;
						BgL_arg4777z00_1403 = CAR(CDR(BgL_pairz00_2769));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_1399), BgL_arg4777z00_1403);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 179)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1399), CNST_TABLE_REF(((long) 184)));
		}}
	}



/* <anonymous:4768> */
	obj_t BGl_zc3anonymousza34768ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3174,
		obj_t BgL_mez00_3175, obj_t BgL_argsz00_3176)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 118 */
			{
				obj_t BgL_mez00_1389;

				obj_t BgL_argsz00_1390;

				BgL_mez00_1389 = BgL_mez00_3175;
				BgL_argsz00_1390 = BgL_argsz00_3176;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 180)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 181)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 182)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 181)));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CAR(BgL_argsz00_1390));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 183)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 181)));
				{	/* SawJvm/inline.scm 126 */
					obj_t BgL_arg4770z00_1393;

					{	/* SawJvm/inline.scm 126 */
						obj_t BgL_pairz00_2758;

						BgL_pairz00_2758 = BgL_argsz00_1390;
						BgL_arg4770z00_1393 = CAR(CDR(BgL_pairz00_2758));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_1389), BgL_arg4770z00_1393);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 185)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 181)));
				{	/* SawJvm/inline.scm 129 */
					obj_t BgL_arg4771z00_1394;

					{	/* SawJvm/inline.scm 129 */
						obj_t BgL_pairz00_2762;

						BgL_pairz00_2762 = BgL_argsz00_1390;
						BgL_arg4771z00_1394 = CAR(CDR(CDR(BgL_pairz00_2762)));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_1389), BgL_arg4771z00_1394);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 179)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1389), CNST_TABLE_REF(((long) 184)));
		}}
	}



/* <anonymous:4761> */
	obj_t BGl_zc3anonymousza34761ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3177,
		obj_t BgL_mez00_3178, obj_t BgL_argsz00_3179)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 103 */
			{
				obj_t BgL_mez00_1379;

				obj_t BgL_argsz00_1380;

				BgL_mez00_1379 = BgL_mez00_3178;
				BgL_argsz00_1380 = BgL_argsz00_3179;
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 180)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 181)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 182)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 181)));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CAR(BgL_argsz00_1380));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 183)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 181)));
				{	/* SawJvm/inline.scm 111 */
					obj_t BgL_arg4763z00_1383;

					{	/* SawJvm/inline.scm 111 */
						obj_t BgL_pairz00_2747;

						BgL_pairz00_2747 = BgL_argsz00_1380;
						BgL_arg4763z00_1383 = CAR(CDR(BgL_pairz00_2747));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_1379), BgL_arg4763z00_1383);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 185)));
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 181)));
				{	/* SawJvm/inline.scm 114 */
					obj_t BgL_arg4764z00_1384;

					{	/* SawJvm/inline.scm 114 */
						obj_t BgL_pairz00_2751;

						BgL_pairz00_2751 = BgL_argsz00_1380;
						BgL_arg4764z00_1384 = CAR(CDR(CDR(BgL_pairz00_2751)));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_1379), BgL_arg4764z00_1384);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 179)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1379), CNST_TABLE_REF(((long) 184)));
		}}
	}



/* <anonymous:4747> */
	obj_t BGl_zc3anonymousza34747ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3180,
		obj_t BgL_mez00_3181, obj_t BgL_argsz00_3182)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 96 */
			{
				obj_t BgL_mez00_1363;

				obj_t BgL_argsz00_1364;

				BgL_mez00_1363 = BgL_mez00_3181;
				BgL_argsz00_1364 = BgL_argsz00_3182;
				{	/* SawJvm/inline.scm 97 */
					obj_t BgL_arg4748z00_1366;

					{	/* SawJvm/inline.scm 97 */
						obj_t BgL_arg4749z00_1367;

						obj_t BgL_arg4750z00_1368;

						BgL_arg4749z00_1367 = CNST_TABLE_REF(((long) 169));
						{	/* SawJvm/inline.scm 97 */
							obj_t BgL_arg4751z00_1369;

							{	/* SawJvm/inline.scm 97 */
								obj_t BgL_arg4754z00_1372;

								BgL_arg4754z00_1372 =
									BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
								BgL_arg4751z00_1369 =
									BGl_declarezd2globalzd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_1363),
									(BgL_globalz00_bglt) (BgL_arg4754z00_1372));
							}
							{	/* SawJvm/inline.scm 97 */
								obj_t BgL_list4753z00_1371;

								BgL_list4753z00_1371 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4750z00_1368 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4751z00_1369, BgL_list4753z00_1371);
						}}
						BgL_arg4748z00_1366 =
							MAKE_PAIR(BgL_arg4749z00_1367, BgL_arg4750z00_1368);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1363), BgL_arg4748z00_1366);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_1363), CAR(BgL_argsz00_1364));
				{	/* SawJvm/inline.scm 99 */
					obj_t BgL_arg4756z00_1374;

					{	/* SawJvm/inline.scm 99 */
						obj_t BgL_pairz00_2742;

						BgL_pairz00_2742 = BgL_argsz00_1364;
						BgL_arg4756z00_1374 = CAR(CDR(BgL_pairz00_2742));
					}
					BGl_genzd2exprzd2zzsaw_jvm_codez00(
						(BgL_jvmz00_bglt) (BgL_mez00_1363), BgL_arg4756z00_1374);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1363), CNST_TABLE_REF(((long) 100)));
				return CNST_TABLE_REF(((long) 101));
		}}
	}



/* <anonymous:4734> */
	obj_t BGl_zc3anonymousza34734ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3183,
		obj_t BgL_mez00_3184, obj_t BgL_argsz00_3185)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 91 */
			{
				obj_t BgL_mez00_1348;

				obj_t BgL_argsz00_1349;

				BgL_mez00_1348 = BgL_mez00_3184;
				BgL_argsz00_1349 = BgL_argsz00_3185;
				{	/* SawJvm/inline.scm 92 */
					obj_t BgL_arg4735z00_1351;

					{	/* SawJvm/inline.scm 92 */
						obj_t BgL_arg4736z00_1352;

						obj_t BgL_arg4737z00_1353;

						BgL_arg4736z00_1352 = CNST_TABLE_REF(((long) 169));
						{	/* SawJvm/inline.scm 92 */
							obj_t BgL_arg4739z00_1354;

							{	/* SawJvm/inline.scm 92 */
								obj_t BgL_arg4742z00_1357;

								BgL_arg4742z00_1357 =
									BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
								BgL_arg4739z00_1354 =
									BGl_declarezd2globalzd2zzsaw_jvm_outz00(
									(BgL_jvmz00_bglt) (BgL_mez00_1348),
									(BgL_globalz00_bglt) (BgL_arg4742z00_1357));
							}
							{	/* SawJvm/inline.scm 92 */
								obj_t BgL_list4741z00_1356;

								BgL_list4741z00_1356 = MAKE_PAIR(BNIL, BNIL);
								BgL_arg4737z00_1353 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
									(BgL_arg4739z00_1354, BgL_list4741z00_1356);
						}}
						BgL_arg4735z00_1351 =
							MAKE_PAIR(BgL_arg4736z00_1352, BgL_arg4737z00_1353);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_1348), BgL_arg4735z00_1351);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					(BgL_jvmz00_bglt) (BgL_mez00_1348), CAR(BgL_argsz00_1349));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_1348), CNST_TABLE_REF(((long) 99)));
		}}
	}



/* check-jvm-inlines */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 24 */
			{	/* SawJvm/inline.scm 25 */
				obj_t BgL_unresolvedz00_2073;

				BgL_unresolvedz00_2073 =
					BGl_filterz00zz__r4_control_features_6_9z00
					(BGl_proc5434z00zzsaw_jvm_inlinez00,
					BGl_za2jvmzd2inlinesza2zd2zzsaw_jvm_inlinez00);
				if (PAIRP(BgL_unresolvedz00_2073))
					{	/* SawJvm/inline.scm 27 */
						return
							BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 186)),
							BGl_string5435z00zzsaw_jvm_inlinez00, BgL_unresolvedz00_2073);
					}
				else
					{	/* SawJvm/inline.scm 27 */
						return BFALSE;
					}
			}
		}
	}



/* _check-jvm-inlines */
	obj_t BGl__checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00(obj_t BgL_envz00_3187)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 24 */
			return BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
		}
	}



/* <anonymous:5214> */
	obj_t BGl_zc3anonymousza35214ze3z83zzsaw_jvm_inlinez00(obj_t BgL_envz00_3188,
		obj_t BgL_iz00_3189)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 25 */
			{
				obj_t BgL_iz00_2076;

				{	/* SawJvm/inline.scm 25 */
					bool_t BgL_auxz00_4191;

					BgL_iz00_2076 = BgL_iz00_3189;
					if (CBOOL(BGl_findzd2globalzd2zzast_envz00(BgL_iz00_2076, BNIL)))
						{	/* SawJvm/inline.scm 25 */
							BgL_auxz00_4191 = ((bool_t) 0);
						}
					else
						{	/* SawJvm/inline.scm 25 */
							BgL_auxz00_4191 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_4191);
				}
			}
		}
	}



/* inline-call? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt BgL_mez00_1,
		BgL_globalz00_bglt BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 35 */
			if (CBOOL((((BgL_jvmz00_bglt) CREF(BgL_mez00_1))->BgL_inlinez00)))
				{	/* SawJvm/inline.scm 37 */
					obj_t BgL_funz00_2082;

					{	/* SawJvm/inline.scm 37 */
						obj_t BgL_auxz00_4199;

						{
							BgL_variablez00_bglt BgL_auxz00_4200;

							BgL_auxz00_4200 = (BgL_variablez00_bglt) (BgL_varz00_2);
							BgL_auxz00_4199 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4200))->BgL_idz00);
						}
						BgL_funz00_2082 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_4199,
							CNST_TABLE_REF(((long) 8)));
					}
					if (CBOOL(BgL_funz00_2082))
						{	/* SawJvm/inline.scm 38 */
							return
								PROCEDURE_ENTRY(BgL_funz00_2082) (BgL_funz00_2082,
								(obj_t) (BgL_mez00_1), BEOA);
						}
					else
						{	/* SawJvm/inline.scm 38 */
							return CNST_TABLE_REF(((long) 172));
				}}
			else
				{	/* SawJvm/inline.scm 36 */
					return BFALSE;
				}
		}
	}



/* _inline-call? */
	obj_t BGl__inlinezd2callzf3z21zzsaw_jvm_inlinez00(obj_t BgL_envz00_3190,
		obj_t BgL_mez00_3191, obj_t BgL_varz00_3192)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 35 */
			return
				BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(
				(BgL_jvmz00_bglt) (BgL_mez00_3191),
				(BgL_globalz00_bglt) (BgL_varz00_3192));
		}
	}



/* inline-call-with-args? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt
		BgL_mez00_3, BgL_globalz00_bglt BgL_varz00_4, obj_t BgL_argsz00_5)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 52 */
			if (CBOOL((((BgL_jvmz00_bglt) CREF(BgL_mez00_3))->BgL_inlinez00)))
				{	/* SawJvm/inline.scm 54 */
					obj_t BgL_funz00_2088;

					{	/* SawJvm/inline.scm 54 */
						obj_t BgL_auxz00_4217;

						{
							BgL_variablez00_bglt BgL_auxz00_4218;

							BgL_auxz00_4218 = (BgL_variablez00_bglt) (BgL_varz00_4);
							BgL_auxz00_4217 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4218))->BgL_idz00);
						}
						BgL_funz00_2088 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_4217,
							CNST_TABLE_REF(((long) 2)));
					}
					if (CBOOL(BgL_funz00_2088))
						{	/* SawJvm/inline.scm 55 */
							return
								PROCEDURE_ENTRY(BgL_funz00_2088) (BgL_funz00_2088,
								(obj_t) (BgL_mez00_3), BgL_argsz00_5, BEOA);
						}
					else
						{	/* SawJvm/inline.scm 55 */
							return CNST_TABLE_REF(((long) 172));
				}}
			else
				{	/* SawJvm/inline.scm 53 */
					return BFALSE;
				}
		}
	}



/* _inline-call-with-args? */
	obj_t BGl__inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3193, obj_t BgL_mez00_3194, obj_t BgL_varz00_3195,
		obj_t BgL_argsz00_3196)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 52 */
			return
				BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(
				(BgL_jvmz00_bglt) (BgL_mez00_3194),
				(BgL_globalz00_bglt) (BgL_varz00_3195), BgL_argsz00_3196);
		}
	}



/* inline-predicate? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt BgL_mez00_6,
		BgL_globalz00_bglt BgL_varz00_7, obj_t BgL_onzf3zf3_8, obj_t BgL_labz00_9)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 66 */
			if (CBOOL((((BgL_jvmz00_bglt) CREF(BgL_mez00_6))->BgL_inlinez00)))
				{	/* SawJvm/inline.scm 67 */
					obj_t BgL_funz00_2824;

					{	/* SawJvm/inline.scm 67 */
						obj_t BgL_auxz00_4235;

						{
							BgL_variablez00_bglt BgL_auxz00_4236;

							BgL_auxz00_4236 = (BgL_variablez00_bglt) (BgL_varz00_7);
							BgL_auxz00_4235 =
								(((BgL_variablez00_bglt) CREF(BgL_auxz00_4236))->BgL_idz00);
						}
						BgL_funz00_2824 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_4235,
							CNST_TABLE_REF(((long) 15)));
					}
					if (CBOOL(BgL_funz00_2824))
						{	/* SawJvm/inline.scm 67 */
							return
								PROCEDURE_ENTRY(BgL_funz00_2824) (BgL_funz00_2824,
								(obj_t) (BgL_mez00_6), BgL_onzf3zf3_8, BgL_labz00_9, BEOA);
						}
					else
						{	/* SawJvm/inline.scm 67 */
							return CNST_TABLE_REF(((long) 172));
				}}
			else
				{	/* SawJvm/inline.scm 67 */
					return BFALSE;
				}
		}
	}



/* _inline-predicate? */
	obj_t BGl__inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(obj_t BgL_envz00_3197,
		obj_t BgL_mez00_3198, obj_t BgL_varz00_3199, obj_t BgL_onzf3zf3_3200,
		obj_t BgL_labz00_3201)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 66 */
			return
				BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(
				(BgL_jvmz00_bglt) (BgL_mez00_3198),
				(BgL_globalz00_bglt) (BgL_varz00_3199), BgL_onzf3zf3_3200,
				BgL_labz00_3201);
		}
	}



/* skip-mov */
	obj_t BGl_skipzd2movzd2zzsaw_jvm_inlinez00(obj_t BgL_argz00_10)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 80 */
		BGl_skipzd2movzd2zzsaw_jvm_inlinez00:
			if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_10,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawJvm/inline.scm 82 */
					BgL_rtl_funz00_bglt BgL_funz00_2096;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_4252;

						BgL_auxz00_4252 = (BgL_rtl_insz00_bglt) (BgL_argz00_10);
						BgL_funz00_2096 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4252))->BgL_funz00);
					}
					{	/* SawJvm/inline.scm 83 */
						bool_t BgL_testz00_4255;

						{	/* SawJvm/inline.scm 83 */
							obj_t BgL_obj4240z00_2831;

							BgL_obj4240z00_2831 = (obj_t) (BgL_funz00_2096);
							BgL_testz00_4255 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj4240z00_2831,
								BGl_rtl_movz00zzsaw_defsz00);
						}
						if (BgL_testz00_4255)
							{
								obj_t BgL_argz00_4258;

								{	/* SawJvm/inline.scm 84 */
									obj_t BgL_pairz00_2833;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_4259;

										BgL_auxz00_4259 = (BgL_rtl_insz00_bglt) (BgL_argz00_10);
										BgL_pairz00_2833 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_4259))->
											BgL_argsz00);
									}
									BgL_argz00_4258 = CAR(BgL_pairz00_2833);
								}
								BgL_argz00_10 = BgL_argz00_4258;
								goto BGl_skipzd2movzd2zzsaw_jvm_inlinez00;
							}
						else
							{	/* SawJvm/inline.scm 83 */
								return (obj_t) (BgL_funz00_2096);
							}
					}
				}
			else
				{	/* SawJvm/inline.scm 81 */
					return BgL_argz00_10;
				}
		}
	}



/* compute-boolean */
	obj_t BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(obj_t BgL_mez00_11,
		obj_t BgL_copz00_12)
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 273 */
			{	/* SawJvm/inline.scm 275 */
				obj_t BgL_l1z00_2100;

				obj_t BgL_l2z00_2101;

				BgL_l1z00_2100 =
					BGl_gensymz00zz__r4_symbols_6_4z00
					(BGl_string5433z00zzsaw_jvm_inlinez00);
				BgL_l2z00_2101 =
					BGl_gensymz00zz__r4_symbols_6_4z00
					(BGl_string5433z00zzsaw_jvm_inlinez00);
				{	/* SawJvm/inline.scm 276 */
					obj_t BgL_arg5230z00_2102;

					{	/* SawJvm/inline.scm 276 */
						obj_t BgL_arg5231z00_2103;

						{	/* SawJvm/inline.scm 276 */
							obj_t BgL_list5232z00_2104;

							BgL_list5232z00_2104 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg5231z00_2103 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_l1z00_2100,
								BgL_list5232z00_2104);
						}
						BgL_arg5230z00_2102 = MAKE_PAIR(BgL_copz00_12, BgL_arg5231z00_2103);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_11), BgL_arg5230z00_2102);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_11), CNST_TABLE_REF(((long) 187)));
				{	/* SawJvm/inline.scm 278 */
					obj_t BgL_arg5233z00_2105;

					{	/* SawJvm/inline.scm 278 */
						obj_t BgL_arg5234z00_2106;

						obj_t BgL_arg5235z00_2107;

						BgL_arg5234z00_2106 = CNST_TABLE_REF(((long) 175));
						{	/* SawJvm/inline.scm 278 */
							obj_t BgL_list5236z00_2108;

							BgL_list5236z00_2108 = MAKE_PAIR(BNIL, BNIL);
							BgL_arg5235z00_2107 =
								BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_l2z00_2101,
								BgL_list5236z00_2108);
						}
						BgL_arg5233z00_2105 =
							MAKE_PAIR(BgL_arg5234z00_2106, BgL_arg5235z00_2107);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						(BgL_jvmz00_bglt) (BgL_mez00_11), BgL_arg5233z00_2105);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_11), BgL_l1z00_2100);
				BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_11), CNST_TABLE_REF(((long) 146)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					(BgL_jvmz00_bglt) (BgL_mez00_11), BgL_l2z00_2101);
			}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_inlinez00()
	{
		AN_OBJECT;
		{	/* SawJvm/inline.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 397025513),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 71277553),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(((long) 382350697),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5436z00zzsaw_jvm_inlinez00));
		}
	}

#ifdef __cplusplus
}
#endif
