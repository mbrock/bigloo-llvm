/*===========================================================================*/
/*   (SawMsil/inline.scm)                                                    */
/*   Bigloo (3.6a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Sun Jan 23 07:38:25 CET 2011        */
/*===========================================================================*/
/* COMPILATION: (/users/serrano/prgm/project/bigloo/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /users/serrano/prgm/project/bigloo/lib/3.6a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMsil/inline.scm)*/
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


	static obj_t BGl_zc3anonymousza34958ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_remz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34962ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34966ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34970ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34974ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34692ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34706ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34979ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34698ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34983ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34713ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_subz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34987ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_loadzd2globalzd2zzmsil_outz00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_isinstz00zzmsil_outz00(BgL_dotnetz00_bglt, BgL_typez00_bglt);
	static obj_t BGl_zc3anonymousza34991ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34719ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	static obj_t BGl_zc3anonymousza34996ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(BgL_dotnetz00_bglt);
	extern obj_t BGl_bitnotz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzmsil_inlinez00();
	static obj_t BGl__inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34725ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_brtruez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34729ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl__checkzd2msilzd2inlinesz00zzmsil_inlinez00(obj_t);
	static obj_t BGl_zc3anonymousza34733ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34737ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2predicatezf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34742ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2msilzd2inlinesz00zzmsil_inlinez00();
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_zc3anonymousza34746ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmsil_inlinez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmsil_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_zc3anonymousza34750ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmsil_inlinez00();
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34754ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34758ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl_zc3anonymousza34763ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2callzf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt,
		BgL_globalz00_bglt);
	extern obj_t BGl_brfalsez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl__inlinezd2predicatezf3z21zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34767ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_addz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34771ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34775ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34779ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_newobjz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_beqz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_bgez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_bgtz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34784ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	extern obj_t BGl_blez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34788ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_bltz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	extern obj_t BGl_bnez00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34800ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_ceqz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34792ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_cgtz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34805ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34796ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_cltz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34809ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_genzd2exprzd2zzmsil_codez00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_bitorz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34813ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_divz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34817ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_brz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmsil_inlinez00();
	extern obj_t BGl_loadzd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34822ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_storezd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_pushzd2constant2zd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza34826ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_dupz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34830ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34834ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_bitxorz00zzmsil_outz00(BgL_dotnetz00_bglt);
	BGL_IMPORT bool_t BGl_iszd2azf3z21zz__objectz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmsil_inlinez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34838ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmsil_inlinez00();
	static obj_t BGl_zc3anonymousza34842ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_ldnullz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34847ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2msilzd2inlinesza2zd2zzmsil_inlinez00 = BUNSPEC;
	static obj_t BGl_zc3anonymousza34851ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_bitandz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34860ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34864ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34868ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_loadzd2vectorzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmsil_inlinez00();
	static obj_t BGl_zc3anonymousza34872ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34877ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_skipzd2movzd2zzmsil_inlinez00(obj_t);
	static obj_t BGl_zc3anonymousza34881ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl__inlinezd2callzf3z21zzmsil_inlinez00(obj_t, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34885ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34890ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35000ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34902ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34894ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35004ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34906ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34898ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza35008ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34911ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_zc3anonymousza35012ze3z83zzmsil_inlinez00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_open_input_string(obj_t, int);
	BGL_IMPORT obj_t BGl_filterz00zz__r4_control_features_6_9z00(obj_t, obj_t);
	extern obj_t BGl_pushzd2constantzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_zc3anonymousza35016ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34917ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_negz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza35020ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t BGl_zc3anonymousza35023ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34924ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_mulz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_zc3anonymousza34928ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_pushzd2intzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	extern obj_t BGl_labelz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34932ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_newarrayz00zzmsil_outz00(BgL_dotnetz00_bglt, obj_t);
	static obj_t BGl_zc3anonymousza34936ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_storezd2fieldzd2zzmsil_outz00(BgL_dotnetz00_bglt, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34940ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34945ze3z83zzmsil_inlinez00(obj_t, obj_t);
	static obj_t BGl_zc3anonymousza34949ze3z83zzmsil_inlinez00(obj_t, obj_t);
	extern obj_t BGl_popz00zzmsil_outz00(BgL_dotnetz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzmsil_inlinez00();
	static obj_t BGl_zc3anonymousza34953ze3z83zzmsil_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[88];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2msilzd2inlineszd2envzd2zzmsil_inlinez00,
		BgL_bgl__checkza7d2msilza7d25224z00,
		BGl__checkzd2msilzd2inlinesz00zzmsil_inlinez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5132z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345225z00,
		BGl_zc3anonymousza34692ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5133z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345226z00,
		BGl_zc3anonymousza34698ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5134z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345227z00,
		BGl_zc3anonymousza34706ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5135z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345228z00,
		BGl_zc3anonymousza34713ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5136z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345229z00,
		BGl_zc3anonymousza34719ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5137z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345230z00,
		BGl_zc3anonymousza34725ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5138z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345231z00,
		BGl_zc3anonymousza34729ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5140z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345232z00,
		BGl_zc3anonymousza34737ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5139z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345233z00,
		BGl_zc3anonymousza34733ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5141z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345234z00,
		BGl_zc3anonymousza34742ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5142z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345235z00,
		BGl_zc3anonymousza34746ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5143z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345236z00,
		BGl_zc3anonymousza34750ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5144z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345237z00,
		BGl_zc3anonymousza34754ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5145z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345238z00,
		BGl_zc3anonymousza34758ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5146z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345239z00,
		BGl_zc3anonymousza34763ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5147z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345240z00,
		BGl_zc3anonymousza34767ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5148z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345241z00,
		BGl_zc3anonymousza34771ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5150z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345242z00,
		BGl_zc3anonymousza34779ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5149z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345243z00,
		BGl_zc3anonymousza34775ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5151z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345244z00,
		BGl_zc3anonymousza34784ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5152z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345245z00,
		BGl_zc3anonymousza34788ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5153z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345246z00,
		BGl_zc3anonymousza34792ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5154z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345247z00,
		BGl_zc3anonymousza34796ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5155z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345248z00,
		BGl_zc3anonymousza34800ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5156z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345249z00,
		BGl_zc3anonymousza34805ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5157z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345250z00,
		BGl_zc3anonymousza34809ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5158z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345251z00,
		BGl_zc3anonymousza34813ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5160z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345252z00,
		BGl_zc3anonymousza34822ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5159z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345253z00,
		BGl_zc3anonymousza34817ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5161z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345254z00,
		BGl_zc3anonymousza34826ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5162z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345255z00,
		BGl_zc3anonymousza34830ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5163z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345256z00,
		BGl_zc3anonymousza34834ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5164z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345257z00,
		BGl_zc3anonymousza34838ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5165z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345258z00,
		BGl_zc3anonymousza34842ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5166z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345259z00,
		BGl_zc3anonymousza34847ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5167z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345260z00,
		BGl_zc3anonymousza34851ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5168z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345261z00,
		BGl_zc3anonymousza34860ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5170z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345262z00,
		BGl_zc3anonymousza34868ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5169z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345263z00,
		BGl_zc3anonymousza34864ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5171z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345264z00,
		BGl_zc3anonymousza34872ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5172z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345265z00,
		BGl_zc3anonymousza34877ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5173z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345266z00,
		BGl_zc3anonymousza34881ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5174z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345267z00,
		BGl_zc3anonymousza34885ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5175z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345268z00,
		BGl_zc3anonymousza34890ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5176z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345269z00,
		BGl_zc3anonymousza34894ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5177z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345270z00,
		BGl_zc3anonymousza34898ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5178z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345271z00,
		BGl_zc3anonymousza34902ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5180z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345272z00,
		BGl_zc3anonymousza34911ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5179z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345273z00,
		BGl_zc3anonymousza34906ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5181z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345274z00,
		BGl_zc3anonymousza34917ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5182z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345275z00,
		BGl_zc3anonymousza34924ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5183z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345276z00,
		BGl_zc3anonymousza34928ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5184z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345277z00,
		BGl_zc3anonymousza34932ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5185z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345278z00,
		BGl_zc3anonymousza34936ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5186z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345279z00,
		BGl_zc3anonymousza34940ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5187z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345280z00,
		BGl_zc3anonymousza34945ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5188z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345281z00,
		BGl_zc3anonymousza34949ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5200z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355282z00,
		BGl_zc3anonymousza35000ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5190z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345283z00,
		BGl_zc3anonymousza34958ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5189z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345284z00,
		BGl_zc3anonymousza34953ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5201z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355285z00,
		BGl_zc3anonymousza35004ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5191z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345286z00,
		BGl_zc3anonymousza34962ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5202z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355287z00,
		BGl_zc3anonymousza35008ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5192z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345288z00,
		BGl_zc3anonymousza34966ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5203z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355289z00,
		BGl_zc3anonymousza35012ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5193z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345290z00,
		BGl_zc3anonymousza34970ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5204z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355291z00,
		BGl_zc3anonymousza35016ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5194z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345292z00,
		BGl_zc3anonymousza34974ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5205z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355293z00,
		BGl_zc3anonymousza35020ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5195z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345294z00,
		BGl_zc3anonymousza34979ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5196z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345295z00,
		BGl_zc3anonymousza34983ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5197z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345296z00,
		BGl_zc3anonymousza34987ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5198z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345297z00,
		BGl_zc3anonymousza34991ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5199z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a345298z00,
		BGl_zc3anonymousza34996ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc5218z00zzmsil_inlinez00,
		BgL_bgl_za7c3anonymousza7a355299z00,
		BGl_zc3anonymousza35023ze3z83zzmsil_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string5206z00zzmsil_inlinez00,
		BgL_bgl_string5206za700za7za7m5300za7, "L", 1);
	      DEFINE_STRING(BGl_string5207z00zzmsil_inlinez00,
		BgL_bgl_string5207za700za7za7m5301za7, "bigloo.real", 11);
	      DEFINE_STRING(BGl_string5208z00zzmsil_inlinez00,
		BgL_bgl_string5208za700za7za7m5302za7, "bigloo.symbol", 13);
	      DEFINE_STRING(BGl_string5210z00zzmsil_inlinez00,
		BgL_bgl_string5210za700za7za7m5303za7, "bigloo.pair", 11);
	      DEFINE_STRING(BGl_string5209z00zzmsil_inlinez00,
		BgL_bgl_string5209za700za7za7m5304za7, "nil", 3);
	      DEFINE_STRING(BGl_string5211z00zzmsil_inlinez00,
		BgL_bgl_string5211za700za7za7m5305za7, "bigloo.procedure", 16);
	      DEFINE_STRING(BGl_string5212z00zzmsil_inlinez00,
		BgL_bgl_string5212za700za7za7m5306za7, "bbool", 5);
	      DEFINE_STRING(BGl_string5213z00zzmsil_inlinez00,
		BgL_bgl_string5213za700za7za7m5307za7, "faux", 4);
	      DEFINE_STRING(BGl_string5214z00zzmsil_inlinez00,
		BgL_bgl_string5214za700za7za7m5308za7, "vrai", 4);
	      DEFINE_STRING(BGl_string5215z00zzmsil_inlinez00,
		BgL_bgl_string5215za700za7za7m5309za7, "I", 1);
	      DEFINE_STRING(BGl_string5216z00zzmsil_inlinez00,
		BgL_bgl_string5216za700za7za7m5310za7, "", 0);
	      DEFINE_STRING(BGl_string5217z00zzmsil_inlinez00,
		BgL_bgl_string5217za700za7za7m5311za7, "bigloo.bint", 11);
	      DEFINE_STRING(BGl_string5220z00zzmsil_inlinez00,
		BgL_bgl_string5220za700za7za7m5312za7, "msil_inline", 11);
	      DEFINE_STRING(BGl_string5219z00zzmsil_inlinez00,
		BgL_bgl_string5219za700za7za7m5313za7, "Cannot find inlined functions", 29);
	      DEFINE_STRING(BGl_string5221z00zzmsil_inlinez00,
		BgL_bgl_string5221za700za7za7m5314za7,
		"not-inlined SawMsil (int int int) int (obj obj) pair bint procedure env vector car no-value cdr obj symbol pname bstring real (double) value double c-bitnot c-bitxor c-bitand c-bitor c-negfl c-/fl c-*fl c--fl c-+fl c->=fl c-<=fl c->fl c-<fl c-=fl $real->double $double->real c-flonum? c-symbol->string $string-length c-symbol? c-null? c-set-cdr! c-set-car! c-boxed-eq? procedure-set! procedure-ref c-procedure? $vector-bound-check? $string-bound-check? c-fixnum? c-cdr c-car c-pair? c-cons $obj->bool $bool->bbool c-remainderfx c-quotientfx c-negfx c-/fx c-*fx c--fx c-+fx c->=fx c-<=fx c->fx c-<fx c-=llong c-=elong msil_inline_predicate c-=fx $bint->long $bint->int $int->long $long->int procedure-1-el-ref make-el-procedure-1 procedure-el-set! procedure-el-ref make-el-procedure make-l-procedure make-va-procedure msil_inline_function make-fx-procedure cnst-table-set! msil_inline_function_args cnst-table-ref ",
		913);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_inlinezd2callzf3zd2envzf3zzmsil_inlinez00,
		BgL_bgl__inlineza7d2callza7f5315z00,
		BGl__inlinezd2callzf3z21zzmsil_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2callzd2withzd2argszf3zd2envzf3zzmsil_inlinez00,
		BgL_bgl__inlineza7d2callza7d5316z00,
		BGl__inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2predicatezf3zd2envzf3zzmsil_inlinez00,
		BgL_bgl__inlineza7d2predic5317za7,
		BGl__inlinezd2predicatezf3z21zzmsil_inlinez00, 0L, BUNSPEC, 4);



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmsil_inlinez00(long
		BgL_checksumz00_2838, char *BgL_fromz00_2839)
	{
		AN_OBJECT;
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmsil_inlinez00))
				{
					BGl_requirezd2initializa7ationz75zzmsil_inlinez00 =
						BBOOL(((bool_t) 0));
					BGl_libraryzd2moduleszd2initz00zzmsil_inlinez00();
					BGl_cnstzd2initzd2zzmsil_inlinez00();
					BGl_importedzd2moduleszd2initz00zzmsil_inlinez00();
					BGl_toplevelzd2initzd2zzmsil_inlinez00();
					return BUNSPEC;
				}
			else
				{
					return BUNSPEC;
				}
		}
	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 1 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "msil_inline");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"msil_inline");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "msil_inline");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "msil_inline");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"msil_inline");
			return BUNSPEC;
		}
	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 1 */
			{	/* SawMsil/inline.scm 1 */
				obj_t BgL_cportz00_2826;

				BgL_cportz00_2826 =
					bgl_open_input_string(BGl_string5221z00zzmsil_inlinez00,
					(int) (((long) 0)));
				{
					long BgL_iz00_2827;

					BgL_iz00_2827 = ((long) 87);
				BgL_loopz00_2828:
					if ((BgL_iz00_2827 == ((long) -1)))
						{	/* SawMsil/inline.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMsil/inline.scm 1 */
							{	/* SawMsil/inline.scm 1 */
								obj_t BgL_arg5223z00_2830;

								{	/* SawMsil/inline.scm 1 */

									{	/* SawMsil/inline.scm 1 */
										obj_t BgL_locationz00_2832;

										BgL_locationz00_2832 = BBOOL(((bool_t) 0));
										{	/* SawMsil/inline.scm 1 */

											BgL_arg5223z00_2830 =
												BGl_readz00zz__readerz00(BgL_cportz00_2826,
												BgL_locationz00_2832);
										}
									}
								}
								{	/* SawMsil/inline.scm 1 */
									int BgL_auxz00_2858;

									BgL_auxz00_2858 = (int) (BgL_iz00_2827);
									CNST_TABLE_SET(BgL_auxz00_2858, BgL_arg5223z00_2830);
							}}
							{	/* SawMsil/inline.scm 1 */
								int BgL_auxz00_2833;

								BgL_auxz00_2833 = (int) ((BgL_iz00_2827 - ((long) 1)));
								{
									long BgL_iz00_2863;

									BgL_iz00_2863 = (long) (BgL_auxz00_2833);
									BgL_iz00_2827 = BgL_iz00_2863;
									goto BgL_loopz00_2828;
								}
							}
						}
				}
			}
		}
	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 1 */
			BGl_za2msilzd2inlinesza2zd2zzmsil_inlinez00 = BNIL;
			{	/* SawMsil/inline.scm 85 */
				obj_t BgL_arg4689z00_1315;

				obj_t BgL_arg4690z00_1316;

				BgL_arg4689z00_1315 = CNST_TABLE_REF(((long) 0));
				BgL_arg4690z00_1316 = CNST_TABLE_REF(((long) 1));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4689z00_1315,
					BgL_arg4690z00_1316, BGl_proc5132z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 90 */
				obj_t BgL_arg4695z00_1324;

				obj_t BgL_arg4696z00_1325;

				BgL_arg4695z00_1324 = CNST_TABLE_REF(((long) 2));
				BgL_arg4696z00_1325 = CNST_TABLE_REF(((long) 1));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4695z00_1324,
					BgL_arg4696z00_1325, BGl_proc5133z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 97 */
				obj_t BgL_arg4703z00_1334;

				obj_t BgL_arg4704z00_1335;

				BgL_arg4703z00_1334 = CNST_TABLE_REF(((long) 3));
				BgL_arg4704z00_1335 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4703z00_1334,
					BgL_arg4704z00_1335, BGl_proc5134z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 100 */
				obj_t BgL_arg4710z00_1342;

				obj_t BgL_arg4711z00_1343;

				BgL_arg4710z00_1342 = CNST_TABLE_REF(((long) 5));
				BgL_arg4711z00_1343 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4710z00_1342,
					BgL_arg4711z00_1343, BGl_proc5135z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 103 */
				obj_t BgL_arg4716z00_1350;

				obj_t BgL_arg4717z00_1351;

				BgL_arg4716z00_1350 = CNST_TABLE_REF(((long) 6));
				BgL_arg4717z00_1351 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4716z00_1350,
					BgL_arg4717z00_1351, BGl_proc5136z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 107 */
				obj_t BgL_arg4722z00_1358;

				obj_t BgL_arg4723z00_1359;

				BgL_arg4722z00_1358 = CNST_TABLE_REF(((long) 7));
				BgL_arg4723z00_1359 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4722z00_1358,
					BgL_arg4723z00_1359, BGl_proc5137z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 110 */
				obj_t BgL_arg4726z00_1364;

				obj_t BgL_arg4727z00_1365;

				BgL_arg4726z00_1364 = CNST_TABLE_REF(((long) 8));
				BgL_arg4727z00_1365 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4726z00_1364,
					BgL_arg4727z00_1365, BGl_proc5138z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 113 */
				obj_t BgL_arg4730z00_1370;

				obj_t BgL_arg4731z00_1371;

				BgL_arg4730z00_1370 = CNST_TABLE_REF(((long) 9));
				BgL_arg4731z00_1371 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4730z00_1370,
					BgL_arg4731z00_1371, BGl_proc5139z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 117 */
				obj_t BgL_arg4734z00_1376;

				obj_t BgL_arg4735z00_1377;

				BgL_arg4734z00_1376 = CNST_TABLE_REF(((long) 10));
				BgL_arg4735z00_1377 = CNST_TABLE_REF(((long) 1));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4734z00_1376,
					BgL_arg4735z00_1377, BGl_proc5140z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 120 */
				obj_t BgL_arg4739z00_1383;

				obj_t BgL_arg4740z00_1384;

				BgL_arg4739z00_1383 = CNST_TABLE_REF(((long) 11));
				BgL_arg4740z00_1384 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4739z00_1383,
					BgL_arg4740z00_1384, BGl_proc5141z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 128 */
				obj_t BgL_arg4743z00_1389;

				obj_t BgL_arg4744z00_1390;

				BgL_arg4743z00_1389 = CNST_TABLE_REF(((long) 12));
				BgL_arg4744z00_1390 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4743z00_1389,
					BgL_arg4744z00_1390, BGl_proc5142z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 131 */
				obj_t BgL_arg4747z00_1395;

				obj_t BgL_arg4748z00_1396;

				BgL_arg4747z00_1395 = CNST_TABLE_REF(((long) 13));
				BgL_arg4748z00_1396 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4747z00_1395,
					BgL_arg4748z00_1396, BGl_proc5143z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 137 */
				obj_t BgL_arg4751z00_1401;

				obj_t BgL_arg4752z00_1402;

				BgL_arg4751z00_1401 = CNST_TABLE_REF(((long) 14));
				BgL_arg4752z00_1402 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4751z00_1401,
					BgL_arg4752z00_1402, BGl_proc5144z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 140 */
				obj_t BgL_arg4755z00_1407;

				obj_t BgL_arg4756z00_1408;

				BgL_arg4755z00_1407 = CNST_TABLE_REF(((long) 15));
				BgL_arg4756z00_1408 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4755z00_1407,
					BgL_arg4756z00_1408, BGl_proc5145z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 147 */
				obj_t BgL_arg4760z00_1413;

				obj_t BgL_arg4761z00_1414;

				BgL_arg4760z00_1413 = CNST_TABLE_REF(((long) 16));
				BgL_arg4761z00_1414 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4760z00_1413,
					BgL_arg4761z00_1414, BGl_proc5146z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 150 */
				obj_t BgL_arg4764z00_1419;

				obj_t BgL_arg4765z00_1420;

				BgL_arg4764z00_1419 = CNST_TABLE_REF(((long) 16));
				BgL_arg4765z00_1420 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4764z00_1419,
					BgL_arg4765z00_1420, BGl_proc5147z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 153 */
				obj_t BgL_arg4768z00_1427;

				obj_t BgL_arg4769z00_1428;

				BgL_arg4768z00_1427 = CNST_TABLE_REF(((long) 18));
				BgL_arg4769z00_1428 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4768z00_1427,
					BgL_arg4769z00_1428, BGl_proc5148z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 156 */
				obj_t BgL_arg4772z00_1433;

				obj_t BgL_arg4773z00_1434;

				BgL_arg4772z00_1433 = CNST_TABLE_REF(((long) 18));
				BgL_arg4773z00_1434 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4772z00_1433,
					BgL_arg4773z00_1434, BGl_proc5149z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 159 */
				obj_t BgL_arg4776z00_1441;

				obj_t BgL_arg4777z00_1442;

				BgL_arg4776z00_1441 = CNST_TABLE_REF(((long) 19));
				BgL_arg4777z00_1442 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4776z00_1441,
					BgL_arg4777z00_1442, BGl_proc5150z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 162 */
				obj_t BgL_arg4780z00_1447;

				obj_t BgL_arg4782z00_1448;

				BgL_arg4780z00_1447 = CNST_TABLE_REF(((long) 19));
				BgL_arg4782z00_1448 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4780z00_1447,
					BgL_arg4782z00_1448, BGl_proc5151z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 165 */
				obj_t BgL_arg4785z00_1455;

				obj_t BgL_arg4786z00_1456;

				BgL_arg4785z00_1455 = CNST_TABLE_REF(((long) 20));
				BgL_arg4786z00_1456 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4785z00_1455,
					BgL_arg4786z00_1456, BGl_proc5152z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 168 */
				obj_t BgL_arg4789z00_1461;

				obj_t BgL_arg4790z00_1462;

				BgL_arg4789z00_1461 = CNST_TABLE_REF(((long) 21));
				BgL_arg4790z00_1462 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4789z00_1461,
					BgL_arg4790z00_1462, BGl_proc5153z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 171 */
				obj_t BgL_arg4793z00_1467;

				obj_t BgL_arg4794z00_1468;

				BgL_arg4793z00_1467 = CNST_TABLE_REF(((long) 20));
				BgL_arg4794z00_1468 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4793z00_1467,
					BgL_arg4794z00_1468, BGl_proc5154z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 174 */
				obj_t BgL_arg4797z00_1475;

				obj_t BgL_arg4798z00_1476;

				BgL_arg4797z00_1475 = CNST_TABLE_REF(((long) 21));
				BgL_arg4798z00_1476 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4797z00_1475,
					BgL_arg4798z00_1476, BGl_proc5155z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 177 */
				obj_t BgL_arg4801z00_1483;

				obj_t BgL_arg4802z00_1484;

				BgL_arg4801z00_1483 = CNST_TABLE_REF(((long) 22));
				BgL_arg4802z00_1484 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4801z00_1483,
					BgL_arg4802z00_1484, BGl_proc5156z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 180 */
				obj_t BgL_arg4806z00_1491;

				obj_t BgL_arg4807z00_1492;

				BgL_arg4806z00_1491 = CNST_TABLE_REF(((long) 23));
				BgL_arg4807z00_1492 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4806z00_1491,
					BgL_arg4807z00_1492, BGl_proc5157z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 186 */
				obj_t BgL_arg4810z00_1499;

				obj_t BgL_arg4811z00_1500;

				BgL_arg4810z00_1499 = CNST_TABLE_REF(((long) 24));
				BgL_arg4811z00_1500 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4810z00_1499,
					BgL_arg4811z00_1500, BGl_proc5158z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 189 */
				obj_t BgL_arg4814z00_1505;

				obj_t BgL_arg4815z00_1506;

				BgL_arg4814z00_1505 = CNST_TABLE_REF(((long) 25));
				BgL_arg4815z00_1506 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4814z00_1505,
					BgL_arg4815z00_1506, BGl_proc5159z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 192 */
				obj_t BgL_arg4819z00_1511;

				obj_t BgL_arg4820z00_1512;

				BgL_arg4819z00_1511 = CNST_TABLE_REF(((long) 26));
				BgL_arg4820z00_1512 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4819z00_1511,
					BgL_arg4820z00_1512, BGl_proc5160z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 195 */
				obj_t BgL_arg4823z00_1517;

				obj_t BgL_arg4824z00_1518;

				BgL_arg4823z00_1517 = CNST_TABLE_REF(((long) 27));
				BgL_arg4824z00_1518 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4823z00_1517,
					BgL_arg4824z00_1518, BGl_proc5161z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 198 */
				obj_t BgL_arg4827z00_1523;

				obj_t BgL_arg4828z00_1524;

				BgL_arg4827z00_1523 = CNST_TABLE_REF(((long) 28));
				BgL_arg4828z00_1524 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4827z00_1523,
					BgL_arg4828z00_1524, BGl_proc5162z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 201 */
				obj_t BgL_arg4831z00_1529;

				obj_t BgL_arg4832z00_1530;

				BgL_arg4831z00_1529 = CNST_TABLE_REF(((long) 29));
				BgL_arg4832z00_1530 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4831z00_1529,
					BgL_arg4832z00_1530, BGl_proc5163z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 204 */
				obj_t BgL_arg4835z00_1535;

				obj_t BgL_arg4836z00_1536;

				BgL_arg4835z00_1535 = CNST_TABLE_REF(((long) 30));
				BgL_arg4836z00_1536 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4835z00_1535,
					BgL_arg4836z00_1536, BGl_proc5164z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 210 */
				obj_t BgL_arg4839z00_1541;

				obj_t BgL_arg4840z00_1542;

				BgL_arg4839z00_1541 = CNST_TABLE_REF(((long) 22));
				BgL_arg4840z00_1542 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4839z00_1541,
					BgL_arg4840z00_1542, BGl_proc5165z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 215 */
				obj_t BgL_arg4844z00_1547;

				obj_t BgL_arg4845z00_1548;

				BgL_arg4844z00_1547 = CNST_TABLE_REF(((long) 23));
				BgL_arg4845z00_1548 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4844z00_1547,
					BgL_arg4845z00_1548, BGl_proc5166z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 223 */
				obj_t BgL_arg4848z00_1553;

				obj_t BgL_arg4849z00_1554;

				BgL_arg4848z00_1553 = CNST_TABLE_REF(((long) 31));
				BgL_arg4849z00_1554 = CNST_TABLE_REF(((long) 1));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4848z00_1553,
					BgL_arg4849z00_1554, BGl_proc5167z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 238 */
				obj_t BgL_arg4857z00_1568;

				obj_t BgL_arg4858z00_1569;

				BgL_arg4857z00_1568 = CNST_TABLE_REF(((long) 32));
				BgL_arg4858z00_1569 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4857z00_1568,
					BgL_arg4858z00_1569, BGl_proc5168z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 244 */
				obj_t BgL_arg4861z00_1574;

				obj_t BgL_arg4862z00_1575;

				BgL_arg4861z00_1574 = CNST_TABLE_REF(((long) 32));
				BgL_arg4862z00_1575 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4861z00_1574,
					BgL_arg4862z00_1575, BGl_proc5169z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 248 */
				obj_t BgL_arg4865z00_1582;

				obj_t BgL_arg4866z00_1583;

				BgL_arg4865z00_1582 = CNST_TABLE_REF(((long) 33));
				BgL_arg4866z00_1583 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4865z00_1582,
					BgL_arg4866z00_1583, BGl_proc5170z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 251 */
				obj_t BgL_arg4869z00_1588;

				obj_t BgL_arg4870z00_1589;

				BgL_arg4869z00_1588 = CNST_TABLE_REF(((long) 34));
				BgL_arg4870z00_1589 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4869z00_1588,
					BgL_arg4870z00_1589, BGl_proc5171z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 255 */
				obj_t BgL_arg4874z00_1597;

				obj_t BgL_arg4875z00_1598;

				BgL_arg4874z00_1597 = CNST_TABLE_REF(((long) 35));
				BgL_arg4875z00_1598 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4874z00_1597,
					BgL_arg4875z00_1598, BGl_proc5172z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 258 */
				obj_t BgL_arg4878z00_1603;

				obj_t BgL_arg4879z00_1604;

				BgL_arg4878z00_1603 = CNST_TABLE_REF(((long) 36));
				BgL_arg4879z00_1604 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4878z00_1603,
					BgL_arg4879z00_1604, BGl_proc5173z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 261 */
				obj_t BgL_arg4882z00_1609;

				obj_t BgL_arg4883z00_1610;

				BgL_arg4882z00_1609 = CNST_TABLE_REF(((long) 37));
				BgL_arg4883z00_1610 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4882z00_1609,
					BgL_arg4883z00_1610, BGl_proc5174z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 265 */
				obj_t BgL_arg4887z00_1618;

				obj_t BgL_arg4888z00_1619;

				BgL_arg4887z00_1618 = CNST_TABLE_REF(((long) 38));
				BgL_arg4888z00_1619 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4887z00_1618,
					BgL_arg4888z00_1619, BGl_proc5175z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 268 */
				obj_t BgL_arg4891z00_1624;

				obj_t BgL_arg4892z00_1625;

				BgL_arg4891z00_1624 = CNST_TABLE_REF(((long) 38));
				BgL_arg4892z00_1625 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4891z00_1624,
					BgL_arg4892z00_1625, BGl_proc5176z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 271 */
				obj_t BgL_arg4895z00_1632;

				obj_t BgL_arg4896z00_1633;

				BgL_arg4895z00_1632 = CNST_TABLE_REF(((long) 39));
				BgL_arg4896z00_1633 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4895z00_1632,
					BgL_arg4896z00_1633, BGl_proc5177z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 274 */
				obj_t BgL_arg4899z00_1638;

				obj_t BgL_arg4900z00_1639;

				BgL_arg4899z00_1638 = CNST_TABLE_REF(((long) 39));
				BgL_arg4900z00_1639 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4899z00_1638,
					BgL_arg4900z00_1639, BGl_proc5178z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 280 */
				obj_t BgL_arg4903z00_1646;

				obj_t BgL_arg4904z00_1647;

				BgL_arg4903z00_1646 = CNST_TABLE_REF(((long) 40));
				BgL_arg4904z00_1647 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4903z00_1646,
					BgL_arg4904z00_1647, BGl_proc5179z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 284 */
				obj_t BgL_arg4908z00_1655;

				obj_t BgL_arg4909z00_1656;

				BgL_arg4908z00_1655 = CNST_TABLE_REF(((long) 41));
				BgL_arg4909z00_1656 = CNST_TABLE_REF(((long) 1));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4908z00_1655,
					BgL_arg4909z00_1656, BGl_proc5180z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 290 */
				obj_t BgL_arg4914z00_1664;

				obj_t BgL_arg4915z00_1665;

				BgL_arg4914z00_1664 = CNST_TABLE_REF(((long) 42));
				BgL_arg4915z00_1665 = CNST_TABLE_REF(((long) 1));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4914z00_1664,
					BgL_arg4915z00_1665, BGl_proc5181z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 298 */
				obj_t BgL_arg4921z00_1674;

				obj_t BgL_arg4922z00_1675;

				BgL_arg4921z00_1674 = CNST_TABLE_REF(((long) 43));
				BgL_arg4922z00_1675 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4921z00_1674,
					BgL_arg4922z00_1675, BGl_proc5182z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 301 */
				obj_t BgL_arg4925z00_1682;

				obj_t BgL_arg4926z00_1683;

				BgL_arg4925z00_1682 = CNST_TABLE_REF(((long) 44));
				BgL_arg4926z00_1683 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4925z00_1682,
					BgL_arg4926z00_1683, BGl_proc5183z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 305 */
				obj_t BgL_arg4929z00_1688;

				obj_t BgL_arg4930z00_1689;

				BgL_arg4929z00_1688 = CNST_TABLE_REF(((long) 45));
				BgL_arg4930z00_1689 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4929z00_1688,
					BgL_arg4930z00_1689, BGl_proc5184z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 309 */
				obj_t BgL_arg4933z00_1694;

				obj_t BgL_arg4934z00_1695;

				BgL_arg4933z00_1694 = CNST_TABLE_REF(((long) 46));
				BgL_arg4934z00_1695 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4933z00_1694,
					BgL_arg4934z00_1695, BGl_proc5185z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 313 */
				obj_t BgL_arg4937z00_1702;

				obj_t BgL_arg4938z00_1703;

				BgL_arg4937z00_1702 = CNST_TABLE_REF(((long) 47));
				BgL_arg4938z00_1703 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4937z00_1702,
					BgL_arg4938z00_1703, BGl_proc5186z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 333 */
				obj_t BgL_arg4942z00_1711;

				obj_t BgL_arg4943z00_1712;

				BgL_arg4942z00_1711 = CNST_TABLE_REF(((long) 48));
				BgL_arg4943z00_1712 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4942z00_1711,
					BgL_arg4943z00_1712, BGl_proc5187z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 336 */
				obj_t BgL_arg4946z00_1717;

				obj_t BgL_arg4947z00_1718;

				BgL_arg4946z00_1717 = CNST_TABLE_REF(((long) 49));
				BgL_arg4947z00_1718 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4946z00_1717,
					BgL_arg4947z00_1718, BGl_proc5188z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 342 */
				obj_t BgL_arg4950z00_1723;

				obj_t BgL_arg4951z00_1724;

				BgL_arg4950z00_1723 = CNST_TABLE_REF(((long) 50));
				BgL_arg4951z00_1724 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4950z00_1723,
					BgL_arg4951z00_1724, BGl_proc5189z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 346 */
				obj_t BgL_arg4955z00_1732;

				obj_t BgL_arg4956z00_1733;

				BgL_arg4955z00_1732 = CNST_TABLE_REF(((long) 51));
				BgL_arg4956z00_1733 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4955z00_1732,
					BgL_arg4956z00_1733, BGl_proc5190z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 349 */
				obj_t BgL_arg4959z00_1738;

				obj_t BgL_arg4960z00_1739;

				BgL_arg4959z00_1738 = CNST_TABLE_REF(((long) 52));
				BgL_arg4960z00_1739 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4959z00_1738,
					BgL_arg4960z00_1739, BGl_proc5191z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 352 */
				obj_t BgL_arg4963z00_1744;

				obj_t BgL_arg4964z00_1745;

				BgL_arg4963z00_1744 = CNST_TABLE_REF(((long) 53));
				BgL_arg4964z00_1745 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4963z00_1744,
					BgL_arg4964z00_1745, BGl_proc5192z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 355 */
				obj_t BgL_arg4967z00_1752;

				obj_t BgL_arg4968z00_1753;

				BgL_arg4967z00_1752 = CNST_TABLE_REF(((long) 54));
				BgL_arg4968z00_1753 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4967z00_1752,
					BgL_arg4968z00_1753, BGl_proc5193z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 358 */
				obj_t BgL_arg4971z00_1760;

				obj_t BgL_arg4972z00_1761;

				BgL_arg4971z00_1760 = CNST_TABLE_REF(((long) 55));
				BgL_arg4972z00_1761 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4971z00_1760,
					BgL_arg4972z00_1761, BGl_proc5194z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 361 */
				obj_t BgL_arg4975z00_1768;

				obj_t BgL_arg4977z00_1769;

				BgL_arg4975z00_1768 = CNST_TABLE_REF(((long) 56));
				BgL_arg4977z00_1769 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4975z00_1768,
					BgL_arg4977z00_1769, BGl_proc5195z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 364 */
				obj_t BgL_arg4980z00_1776;

				obj_t BgL_arg4981z00_1777;

				BgL_arg4980z00_1776 = CNST_TABLE_REF(((long) 57));
				BgL_arg4981z00_1777 = CNST_TABLE_REF(((long) 17));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4980z00_1776,
					BgL_arg4981z00_1777, BGl_proc5196z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 368 */
				obj_t BgL_arg4984z00_1784;

				obj_t BgL_arg4985z00_1785;

				BgL_arg4984z00_1784 = CNST_TABLE_REF(((long) 58));
				BgL_arg4985z00_1785 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4984z00_1784,
					BgL_arg4985z00_1785, BGl_proc5197z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 371 */
				obj_t BgL_arg4988z00_1790;

				obj_t BgL_arg4989z00_1791;

				BgL_arg4988z00_1790 = CNST_TABLE_REF(((long) 59));
				BgL_arg4989z00_1791 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4988z00_1790,
					BgL_arg4989z00_1791, BGl_proc5198z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 374 */
				obj_t BgL_arg4993z00_1796;

				obj_t BgL_arg4994z00_1797;

				BgL_arg4993z00_1796 = CNST_TABLE_REF(((long) 60));
				BgL_arg4994z00_1797 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4993z00_1796,
					BgL_arg4994z00_1797, BGl_proc5199z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 377 */
				obj_t BgL_arg4997z00_1802;

				obj_t BgL_arg4998z00_1803;

				BgL_arg4997z00_1802 = CNST_TABLE_REF(((long) 61));
				BgL_arg4998z00_1803 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg4997z00_1802,
					BgL_arg4998z00_1803, BGl_proc5200z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 380 */
				obj_t BgL_arg5001z00_1808;

				obj_t BgL_arg5002z00_1809;

				BgL_arg5001z00_1808 = CNST_TABLE_REF(((long) 62));
				BgL_arg5002z00_1809 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5001z00_1808,
					BgL_arg5002z00_1809, BGl_proc5201z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 386 */
				obj_t BgL_arg5005z00_1814;

				obj_t BgL_arg5006z00_1815;

				BgL_arg5005z00_1814 = CNST_TABLE_REF(((long) 63));
				BgL_arg5006z00_1815 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5005z00_1814,
					BgL_arg5006z00_1815, BGl_proc5202z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 389 */
				obj_t BgL_arg5009z00_1820;

				obj_t BgL_arg5010z00_1821;

				BgL_arg5009z00_1820 = CNST_TABLE_REF(((long) 64));
				BgL_arg5010z00_1821 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5009z00_1820,
					BgL_arg5010z00_1821, BGl_proc5203z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 392 */
				obj_t BgL_arg5013z00_1826;

				obj_t BgL_arg5014z00_1827;

				BgL_arg5013z00_1826 = CNST_TABLE_REF(((long) 65));
				BgL_arg5014z00_1827 = CNST_TABLE_REF(((long) 4));
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5013z00_1826,
					BgL_arg5014z00_1827, BGl_proc5204z00zzmsil_inlinez00);
			}
			{	/* SawMsil/inline.scm 395 */
				obj_t BgL_arg5017z00_1832;

				obj_t BgL_arg5018z00_1833;

				BgL_arg5017z00_1832 = CNST_TABLE_REF(((long) 66));
				BgL_arg5018z00_1833 = CNST_TABLE_REF(((long) 4));
				return
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg5017z00_1832,
					BgL_arg5018z00_1833, BGl_proc5205z00zzmsil_inlinez00);
			}
		}
	}



/* <anonymous:5020> */
	obj_t BGl_zc3anonymousza35020ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2612,
		obj_t BgL_mez00_2613)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 395 */
			{
				obj_t BgL_mez00_1835;

				BgL_mez00_1835 = BgL_mez00_2613;
				return
					BGl_bitnotz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1835));
			}
		}
	}



/* <anonymous:5016> */
	obj_t BGl_zc3anonymousza35016ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2614,
		obj_t BgL_mez00_2615)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 392 */
			{
				obj_t BgL_mez00_1829;

				BgL_mez00_1829 = BgL_mez00_2615;
				return
					BGl_bitxorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1829));
			}
		}
	}



/* <anonymous:5012> */
	obj_t BGl_zc3anonymousza35012ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2616,
		obj_t BgL_mez00_2617)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 389 */
			{
				obj_t BgL_mez00_1823;

				BgL_mez00_1823 = BgL_mez00_2617;
				return
					BGl_bitandz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1823));
			}
		}
	}



/* <anonymous:5008> */
	obj_t BGl_zc3anonymousza35008ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2618,
		obj_t BgL_mez00_2619)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 386 */
			{
				obj_t BgL_mez00_1817;

				BgL_mez00_1817 = BgL_mez00_2619;
				return BGl_bitorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1817));
			}
		}
	}



/* <anonymous:5004> */
	obj_t BGl_zc3anonymousza35004ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2620,
		obj_t BgL_mez00_2621)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 380 */
			{
				obj_t BgL_mez00_1811;

				BgL_mez00_1811 = BgL_mez00_2621;
				return BGl_negz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1811));
			}
		}
	}



/* <anonymous:5000> */
	obj_t BGl_zc3anonymousza35000ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2622,
		obj_t BgL_mez00_2623)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 377 */
			{
				obj_t BgL_mez00_1805;

				BgL_mez00_1805 = BgL_mez00_2623;
				return BGl_divz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1805));
			}
		}
	}



/* <anonymous:4996> */
	obj_t BGl_zc3anonymousza34996ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2624,
		obj_t BgL_mez00_2625)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 374 */
			{
				obj_t BgL_mez00_1799;

				BgL_mez00_1799 = BgL_mez00_2625;
				return BGl_mulz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1799));
			}
		}
	}



/* <anonymous:4991> */
	obj_t BGl_zc3anonymousza34991ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2626,
		obj_t BgL_mez00_2627)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 371 */
			{
				obj_t BgL_mez00_1793;

				BgL_mez00_1793 = BgL_mez00_2627;
				return BGl_subz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1793));
			}
		}
	}



/* <anonymous:4987> */
	obj_t BGl_zc3anonymousza34987ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2628,
		obj_t BgL_mez00_2629)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 368 */
			{
				obj_t BgL_mez00_1787;

				BgL_mez00_1787 = BgL_mez00_2629;
				return BGl_addz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1787));
			}
		}
	}



/* <anonymous:4983> */
	obj_t BGl_zc3anonymousza34983ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2630,
		obj_t BgL_mez00_2631, obj_t BgL_onzf3zf3_2632, obj_t BgL_labz00_2633)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 364 */
			{
				obj_t BgL_mez00_1779;

				obj_t BgL_onzf3zf3_1780;

				obj_t BgL_labz00_1781;

				BgL_mez00_1779 = BgL_mez00_2631;
				BgL_onzf3zf3_1780 = BgL_onzf3zf3_2632;
				BgL_labz00_1781 = BgL_labz00_2633;
				if (CBOOL(BgL_onzf3zf3_1780))
					{	/* SawMsil/inline.scm 365 */
						return
							BGl_bgez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1779),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1781);
					}
				else
					{	/* SawMsil/inline.scm 365 */
						return
							BGl_bltz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1779),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1781);
					}
			}
		}
	}



/* <anonymous:4979> */
	obj_t BGl_zc3anonymousza34979ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2634,
		obj_t BgL_mez00_2635, obj_t BgL_onzf3zf3_2636, obj_t BgL_labz00_2637)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 361 */
			{
				obj_t BgL_mez00_1771;

				obj_t BgL_onzf3zf3_1772;

				obj_t BgL_labz00_1773;

				BgL_mez00_1771 = BgL_mez00_2635;
				BgL_onzf3zf3_1772 = BgL_onzf3zf3_2636;
				BgL_labz00_1773 = BgL_labz00_2637;
				if (CBOOL(BgL_onzf3zf3_1772))
					{	/* SawMsil/inline.scm 362 */
						return
							BGl_blez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1771),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1773);
					}
				else
					{	/* SawMsil/inline.scm 362 */
						return
							BGl_bgtz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1771),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1773);
					}
			}
		}
	}



/* <anonymous:4974> */
	obj_t BGl_zc3anonymousza34974ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2638,
		obj_t BgL_mez00_2639, obj_t BgL_onzf3zf3_2640, obj_t BgL_labz00_2641)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 358 */
			{
				obj_t BgL_mez00_1763;

				obj_t BgL_onzf3zf3_1764;

				obj_t BgL_labz00_1765;

				BgL_mez00_1763 = BgL_mez00_2639;
				BgL_onzf3zf3_1764 = BgL_onzf3zf3_2640;
				BgL_labz00_1765 = BgL_labz00_2641;
				if (CBOOL(BgL_onzf3zf3_1764))
					{	/* SawMsil/inline.scm 359 */
						return
							BGl_bgtz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1763),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1765);
					}
				else
					{	/* SawMsil/inline.scm 359 */
						return
							BGl_blez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1763),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1765);
					}
			}
		}
	}



/* <anonymous:4970> */
	obj_t BGl_zc3anonymousza34970ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2642,
		obj_t BgL_mez00_2643, obj_t BgL_onzf3zf3_2644, obj_t BgL_labz00_2645)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 355 */
			{
				obj_t BgL_mez00_1755;

				obj_t BgL_onzf3zf3_1756;

				obj_t BgL_labz00_1757;

				BgL_mez00_1755 = BgL_mez00_2643;
				BgL_onzf3zf3_1756 = BgL_onzf3zf3_2644;
				BgL_labz00_1757 = BgL_labz00_2645;
				if (CBOOL(BgL_onzf3zf3_1756))
					{	/* SawMsil/inline.scm 356 */
						return
							BGl_bltz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1755),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1757);
					}
				else
					{	/* SawMsil/inline.scm 356 */
						return
							BGl_bgez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1755),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1757);
					}
			}
		}
	}



/* <anonymous:4966> */
	obj_t BGl_zc3anonymousza34966ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2646,
		obj_t BgL_mez00_2647, obj_t BgL_onzf3zf3_2648, obj_t BgL_labz00_2649)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 352 */
			{
				obj_t BgL_mez00_1747;

				obj_t BgL_onzf3zf3_1748;

				obj_t BgL_labz00_1749;

				BgL_mez00_1747 = BgL_mez00_2647;
				BgL_onzf3zf3_1748 = BgL_onzf3zf3_2648;
				BgL_labz00_1749 = BgL_labz00_2649;
				if (CBOOL(BgL_onzf3zf3_1748))
					{	/* SawMsil/inline.scm 353 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1747),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1749);
					}
				else
					{	/* SawMsil/inline.scm 353 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1747),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1749);
					}
			}
		}
	}



/* <anonymous:4962> */
	obj_t BGl_zc3anonymousza34962ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2650,
		obj_t BgL_mez00_2651)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 349 */
			{
				obj_t BgL_mez00_1741;

				BgL_mez00_1741 = BgL_mez00_2651;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1741),
					CNST_TABLE_REF(((long) 67)), BGl_string5207z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 68)));
		}}
	}



/* <anonymous:4958> */
	obj_t BGl_zc3anonymousza34958ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2652,
		obj_t BgL_mez00_2653)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 346 */
			{
				obj_t BgL_mez00_1735;

				BgL_mez00_1735 = BgL_mez00_2653;
				return
					BGl_newobjz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1735),
					BGl_string5207z00zzmsil_inlinez00, CNST_TABLE_REF(((long) 69)));
		}}
	}



/* <anonymous:4953> */
	obj_t BGl_zc3anonymousza34953ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2654,
		obj_t BgL_mez00_2655, obj_t BgL_onzf3zf3_2656, obj_t BgL_labz00_2657)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 342 */
			{
				obj_t BgL_mez00_1726;

				obj_t BgL_onzf3zf3_1727;

				obj_t BgL_labz00_1728;

				BgL_mez00_1726 = BgL_mez00_2655;
				BgL_onzf3zf3_1727 = BgL_onzf3zf3_2656;
				BgL_labz00_1728 = BgL_labz00_2657;
				BGl_isinstz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1726),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 70))));
				if (CBOOL(BgL_onzf3zf3_1727))
					{	/* SawMsil/inline.scm 343 */
						return
							BGl_brtruez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1726),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1728);
					}
				else
					{	/* SawMsil/inline.scm 343 */
						return
							BGl_brfalsez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1726),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1728);
					}
			}
		}
	}



/* <anonymous:4949> */
	obj_t BGl_zc3anonymousza34949ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2658,
		obj_t BgL_mez00_2659)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 336 */
			{
				obj_t BgL_mez00_1720;

				BgL_mez00_1720 = BgL_mez00_2659;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1720),
					CNST_TABLE_REF(((long) 71)), BGl_string5208z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 72)));
		}}
	}



/* <anonymous:4945> */
	obj_t BGl_zc3anonymousza34945ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2660,
		obj_t BgL_mez00_2661)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 333 */
			{
				obj_t BgL_mez00_1714;

				BgL_mez00_1714 = BgL_mez00_2661;
				return
					BGl_loadzd2vectorzd2lengthz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1714));
			}
		}
	}



/* <anonymous:4940> */
	obj_t BGl_zc3anonymousza34940ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2662,
		obj_t BgL_mez00_2663, obj_t BgL_onzf3zf3_2664, obj_t BgL_labz00_2665)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 313 */
			{
				obj_t BgL_mez00_1705;

				obj_t BgL_onzf3zf3_1706;

				obj_t BgL_labz00_1707;

				BgL_mez00_1705 = BgL_mez00_2663;
				BgL_onzf3zf3_1706 = BgL_onzf3zf3_2664;
				BgL_labz00_1707 = BgL_labz00_2665;
				BGl_isinstz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1705),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 73))));
				if (CBOOL(BgL_onzf3zf3_1706))
					{	/* SawMsil/inline.scm 314 */
						return
							BGl_brtruez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1705),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1707);
					}
				else
					{	/* SawMsil/inline.scm 314 */
						return
							BGl_brfalsez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1705),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1707);
					}
			}
		}
	}



/* <anonymous:4936> */
	obj_t BGl_zc3anonymousza34936ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2666,
		obj_t BgL_mez00_2667, obj_t BgL_onzf3zf3_2668, obj_t BgL_labz00_2669)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 309 */
			{
				obj_t BgL_mez00_1697;

				obj_t BgL_onzf3zf3_1698;

				obj_t BgL_labz00_1699;

				BgL_mez00_1697 = BgL_mez00_2667;
				BgL_onzf3zf3_1698 = BgL_onzf3zf3_2668;
				BgL_labz00_1699 = BgL_labz00_2669;
				BGl_pushzd2constantzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1697),
					BGl_string5209z00zzmsil_inlinez00);
				if (CBOOL(BgL_onzf3zf3_1698))
					{	/* SawMsil/inline.scm 311 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1697),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1699);
					}
				else
					{	/* SawMsil/inline.scm 311 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1697),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1699);
					}
			}
		}
	}



/* <anonymous:4932> */
	obj_t BGl_zc3anonymousza34932ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2670,
		obj_t BgL_mez00_2671)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 305 */
			{
				obj_t BgL_mez00_1691;

				BgL_mez00_1691 = BgL_mez00_2671;
				BGl_storezd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1691),
					CNST_TABLE_REF(((long) 74)), BGl_string5210z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 75)));
				return CNST_TABLE_REF(((long) 76));
		}}
	}



/* <anonymous:4928> */
	obj_t BGl_zc3anonymousza34928ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2672,
		obj_t BgL_mez00_2673)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 301 */
			{
				obj_t BgL_mez00_1685;

				BgL_mez00_1685 = BgL_mez00_2673;
				BGl_storezd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1685),
					CNST_TABLE_REF(((long) 74)), BGl_string5210z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 77)));
				return CNST_TABLE_REF(((long) 76));
		}}
	}



/* <anonymous:4924> */
	obj_t BGl_zc3anonymousza34924ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2674,
		obj_t BgL_mez00_2675, obj_t BgL_onzf3zf3_2676, obj_t BgL_labz00_2677)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 298 */
			{
				obj_t BgL_mez00_1677;

				obj_t BgL_onzf3zf3_1678;

				obj_t BgL_labz00_1679;

				BgL_mez00_1677 = BgL_mez00_2675;
				BgL_onzf3zf3_1678 = BgL_onzf3zf3_2676;
				BgL_labz00_1679 = BgL_labz00_2677;
				if (CBOOL(BgL_onzf3zf3_1678))
					{	/* SawMsil/inline.scm 299 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1677),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1679);
					}
				else
					{	/* SawMsil/inline.scm 299 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1677),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1679);
					}
			}
		}
	}



/* <anonymous:4917> */
	obj_t BGl_zc3anonymousza34917ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2678,
		obj_t BgL_mez00_2679, obj_t BgL_argsz00_2680)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 290 */
			{
				obj_t BgL_mez00_1667;

				obj_t BgL_argsz00_1668;

				BgL_mez00_1667 = BgL_mez00_2679;
				BgL_argsz00_1668 = BgL_argsz00_2680;
				BGl_genzd2exprzd2zzmsil_codez00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1667), CAR(BgL_argsz00_1668));
				BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1667),
					CNST_TABLE_REF(((long) 78)), BGl_string5211z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 79)));
				{	/* SawMsil/inline.scm 293 */
					obj_t BgL_arg4919z00_1671;

					{	/* SawMsil/inline.scm 293 */
						obj_t BgL_pairz00_2511;

						BgL_pairz00_2511 = BgL_argsz00_1668;
						BgL_arg4919z00_1671 = CAR(CDR(BgL_pairz00_2511));
					}
					BGl_genzd2exprzd2zzmsil_codez00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1667), BgL_arg4919z00_1671);
				}
				{	/* SawMsil/inline.scm 294 */
					obj_t BgL_arg4920z00_1672;

					{	/* SawMsil/inline.scm 294 */
						obj_t BgL_pairz00_2515;

						BgL_pairz00_2515 = BgL_argsz00_1668;
						BgL_arg4920z00_1672 = CAR(CDR(CDR(BgL_pairz00_2515)));
					}
					BGl_genzd2exprzd2zzmsil_codez00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1667), BgL_arg4920z00_1672);
				}
				BGl_storezd2vectorzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1667), CNST_TABLE_REF(((long) 74)));
				return CNST_TABLE_REF(((long) 76));
		}}
	}



/* <anonymous:4911> */
	obj_t BGl_zc3anonymousza34911ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2681,
		obj_t BgL_mez00_2682, obj_t BgL_argsz00_2683)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 284 */
			{
				obj_t BgL_mez00_1658;

				obj_t BgL_argsz00_1659;

				BgL_mez00_1658 = BgL_mez00_2682;
				BgL_argsz00_1659 = BgL_argsz00_2683;
				BGl_genzd2exprzd2zzmsil_codez00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1658), CAR(BgL_argsz00_1659));
				BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1658),
					CNST_TABLE_REF(((long) 78)), BGl_string5211z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 79)));
				{	/* SawMsil/inline.scm 287 */
					obj_t BgL_arg4913z00_1662;

					{	/* SawMsil/inline.scm 287 */
						obj_t BgL_pairz00_2506;

						BgL_pairz00_2506 = BgL_argsz00_1659;
						BgL_arg4913z00_1662 = CAR(CDR(BgL_pairz00_2506));
					}
					BGl_genzd2exprzd2zzmsil_codez00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1658), BgL_arg4913z00_1662);
				}
				return
					BGl_loadzd2vectorzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1658), CNST_TABLE_REF(((long) 74)));
		}}
	}



/* <anonymous:4906> */
	obj_t BGl_zc3anonymousza34906ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2684,
		obj_t BgL_mez00_2685, obj_t BgL_onzf3zf3_2686, obj_t BgL_labz00_2687)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 280 */
			{
				obj_t BgL_mez00_1649;

				obj_t BgL_onzf3zf3_1650;

				obj_t BgL_labz00_1651;

				BgL_mez00_1649 = BgL_mez00_2685;
				BgL_onzf3zf3_1650 = BgL_onzf3zf3_2686;
				BgL_labz00_1651 = BgL_labz00_2687;
				BGl_isinstz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1649),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 80))));
				if (CBOOL(BgL_onzf3zf3_1650))
					{	/* SawMsil/inline.scm 281 */
						return
							BGl_brtruez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1649),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1651);
					}
				else
					{	/* SawMsil/inline.scm 281 */
						return
							BGl_brfalsez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1649),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1651);
					}
			}
		}
	}



/* <anonymous:4902> */
	obj_t BGl_zc3anonymousza34902ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2688,
		obj_t BgL_mez00_2689, obj_t BgL_onzf3zf3_2690, obj_t BgL_labz00_2691)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 274 */
			{
				obj_t BgL_mez00_1641;

				obj_t BgL_onzf3zf3_1642;

				obj_t BgL_labz00_1643;

				BgL_mez00_1641 = BgL_mez00_2689;
				BgL_onzf3zf3_1642 = BgL_onzf3zf3_2690;
				BgL_labz00_1643 = BgL_labz00_2691;
				if (CBOOL(BgL_onzf3zf3_1642))
					{	/* SawMsil/inline.scm 275 */
						return
							BGl_bltz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1641),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1643);
					}
				else
					{	/* SawMsil/inline.scm 275 */
						return
							BGl_bgez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1641),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1643);
					}
			}
		}
	}



/* <anonymous:4898> */
	obj_t BGl_zc3anonymousza34898ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2692,
		obj_t BgL_mez00_2693)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 271 */
			{
				obj_t BgL_mez00_1635;

				BgL_mez00_1635 = BgL_mez00_2693;
				return BGl_cltz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1635));
			}
		}
	}



/* <anonymous:4894> */
	obj_t BGl_zc3anonymousza34894ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2694,
		obj_t BgL_mez00_2695, obj_t BgL_onzf3zf3_2696, obj_t BgL_labz00_2697)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 268 */
			{
				obj_t BgL_mez00_1627;

				obj_t BgL_onzf3zf3_1628;

				obj_t BgL_labz00_1629;

				BgL_mez00_1627 = BgL_mez00_2695;
				BgL_onzf3zf3_1628 = BgL_onzf3zf3_2696;
				BgL_labz00_1629 = BgL_labz00_2697;
				if (CBOOL(BgL_onzf3zf3_1628))
					{	/* SawMsil/inline.scm 269 */
						return
							BGl_bltz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1627),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1629);
					}
				else
					{	/* SawMsil/inline.scm 269 */
						return
							BGl_bgez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1627),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1629);
					}
			}
		}
	}



/* <anonymous:4890> */
	obj_t BGl_zc3anonymousza34890ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2698,
		obj_t BgL_mez00_2699)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 265 */
			{
				obj_t BgL_mez00_1621;

				BgL_mez00_1621 = BgL_mez00_2699;
				return BGl_cltz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1621));
			}
		}
	}



/* <anonymous:4885> */
	obj_t BGl_zc3anonymousza34885ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2700,
		obj_t BgL_mez00_2701, obj_t BgL_onzf3zf3_2702, obj_t BgL_labz00_2703)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 261 */
			{
				obj_t BgL_mez00_1612;

				obj_t BgL_onzf3zf3_1613;

				obj_t BgL_labz00_1614;

				BgL_mez00_1612 = BgL_mez00_2701;
				BgL_onzf3zf3_1613 = BgL_onzf3zf3_2702;
				BgL_labz00_1614 = BgL_labz00_2703;
				BGl_isinstz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1612),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 81))));
				if (CBOOL(BgL_onzf3zf3_1613))
					{	/* SawMsil/inline.scm 262 */
						return
							BGl_brtruez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1612),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1614);
					}
				else
					{	/* SawMsil/inline.scm 262 */
						return
							BGl_brfalsez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1612),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1614);
					}
			}
		}
	}



/* <anonymous:4881> */
	obj_t BGl_zc3anonymousza34881ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2704,
		obj_t BgL_mez00_2705)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 258 */
			{
				obj_t BgL_mez00_1606;

				BgL_mez00_1606 = BgL_mez00_2705;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1606),
					CNST_TABLE_REF(((long) 74)), BGl_string5210z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 75)));
		}}
	}



/* <anonymous:4877> */
	obj_t BGl_zc3anonymousza34877ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2706,
		obj_t BgL_mez00_2707)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 255 */
			{
				obj_t BgL_mez00_1600;

				BgL_mez00_1600 = BgL_mez00_2707;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1600),
					CNST_TABLE_REF(((long) 74)), BGl_string5210z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 77)));
		}}
	}



/* <anonymous:4872> */
	obj_t BGl_zc3anonymousza34872ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2708,
		obj_t BgL_mez00_2709, obj_t BgL_onzf3zf3_2710, obj_t BgL_labz00_2711)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 251 */
			{
				obj_t BgL_mez00_1591;

				obj_t BgL_onzf3zf3_1592;

				obj_t BgL_labz00_1593;

				BgL_mez00_1591 = BgL_mez00_2709;
				BgL_onzf3zf3_1592 = BgL_onzf3zf3_2710;
				BgL_labz00_1593 = BgL_labz00_2711;
				BGl_isinstz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1591),
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 82))));
				if (CBOOL(BgL_onzf3zf3_1592))
					{	/* SawMsil/inline.scm 252 */
						return
							BGl_brtruez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1591),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1593);
					}
				else
					{	/* SawMsil/inline.scm 252 */
						return
							BGl_brfalsez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1591),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1593);
					}
			}
		}
	}



/* <anonymous:4868> */
	obj_t BGl_zc3anonymousza34868ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2712,
		obj_t BgL_mez00_2713)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 248 */
			{
				obj_t BgL_mez00_1585;

				BgL_mez00_1585 = BgL_mez00_2713;
				return
					BGl_newobjz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1585),
					BGl_string5210z00zzmsil_inlinez00, CNST_TABLE_REF(((long) 83)));
		}}
	}



/* <anonymous:4864> */
	obj_t BGl_zc3anonymousza34864ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2714,
		obj_t BgL_mez00_2715, obj_t BgL_onzf3zf3_2716, obj_t BgL_labz00_2717)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 244 */
			{
				obj_t BgL_mez00_1577;

				obj_t BgL_onzf3zf3_1578;

				obj_t BgL_labz00_1579;

				BgL_mez00_1577 = BgL_mez00_2715;
				BgL_onzf3zf3_1578 = BgL_onzf3zf3_2716;
				BgL_labz00_1579 = BgL_labz00_2717;
				BGl_pushzd2constant2zd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1577),
					BGl_string5212z00zzmsil_inlinez00, BGl_string5213z00zzmsil_inlinez00);
				if (CBOOL(BgL_onzf3zf3_1578))
					{	/* SawMsil/inline.scm 246 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1577),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1579);
					}
				else
					{	/* SawMsil/inline.scm 246 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1577),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1579);
					}
			}
		}
	}



/* <anonymous:4860> */
	obj_t BGl_zc3anonymousza34860ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2718,
		obj_t BgL_mez00_2719)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 238 */
			{
				obj_t BgL_mez00_1571;

				BgL_mez00_1571 = BgL_mez00_2719;
				BGl_pushzd2constant2zd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1571),
					BGl_string5212z00zzmsil_inlinez00, BGl_string5213z00zzmsil_inlinez00);
				BGl_ceqz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1571));
				BGl_pushzd2intzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1571), BINT(((long) 1)));
				return
					BGl_bitxorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1571));
			}
		}
	}



/* <anonymous:4851> */
	obj_t BGl_zc3anonymousza34851ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2720,
		obj_t BgL_mez00_2721, obj_t BgL_argsz00_2722)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 223 */
			{
				obj_t BgL_mez00_1556;

				obj_t BgL_argsz00_1557;

				BgL_mez00_1556 = BgL_mez00_2721;
				BgL_argsz00_1557 = BgL_argsz00_2722;
				{	/* SawMsil/inline.scm 224 */
					obj_t BgL_funz00_1559;

					BgL_funz00_1559 =
						BGl_skipzd2movzd2zzmsil_inlinez00(CAR(BgL_argsz00_1557));
					if (BGl_iszd2azf3z21zz__objectz00(BgL_funz00_1559,
							BGl_rtl_loadiz00zzsaw_defsz00))
						{	/* SawMsil/inline.scm 226 */
							bool_t BgL_testz00_3304;

							{	/* SawMsil/inline.scm 226 */
								BgL_atomz00_bglt BgL_obj2135z00_2500;

								{
									BgL_rtl_loadiz00_bglt BgL_auxz00_3305;

									BgL_auxz00_3305 = (BgL_rtl_loadiz00_bglt) (BgL_funz00_1559);
									BgL_obj2135z00_2500 =
										(((BgL_rtl_loadiz00_bglt) CREF(BgL_auxz00_3305))->
										BgL_constantz00);
								}
								BgL_testz00_3304 =
									CBOOL(
									(((BgL_atomz00_bglt) CREF(BgL_obj2135z00_2500))->
										BgL_valuez00));
							}
							if (BgL_testz00_3304)
								{	/* SawMsil/inline.scm 226 */
									return
										BGl_pushzd2constant2zd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_1556),
										BGl_string5212z00zzmsil_inlinez00,
										BGl_string5214z00zzmsil_inlinez00);
								}
							else
								{	/* SawMsil/inline.scm 226 */
									return
										BGl_pushzd2constant2zd2zzmsil_outz00(
										(BgL_dotnetz00_bglt) (BgL_mez00_1556),
										BGl_string5212z00zzmsil_inlinez00,
										BGl_string5213z00zzmsil_inlinez00);
								}
						}
					else
						{	/* SawMsil/inline.scm 229 */
							obj_t BgL_l1z00_1563;

							obj_t BgL_l2z00_1564;

							BgL_l1z00_1563 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_string5215z00zzmsil_inlinez00);
							BgL_l2z00_1564 =
								BGl_gensymz00zz__r4_symbols_6_4z00
								(BGl_string5215z00zzmsil_inlinez00);
							BGl_genzd2exprzd2zzmsil_codez00((BgL_dotnetz00_bglt)
								(BgL_mez00_1556), CAR(BgL_argsz00_1557));
							BGl_brfalsez00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1556),
								BGl_string5216z00zzmsil_inlinez00, BgL_l1z00_1563);
							BGl_pushzd2constant2zd2zzmsil_outz00((BgL_dotnetz00_bglt)
								(BgL_mez00_1556), BGl_string5212z00zzmsil_inlinez00,
								BGl_string5214z00zzmsil_inlinez00);
							BGl_brz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1556),
								BGl_string5216z00zzmsil_inlinez00, BgL_l2z00_1564);
							BGl_labelz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1556),
								BGl_string5216z00zzmsil_inlinez00, BgL_l1z00_1563);
							BGl_pushzd2constant2zd2zzmsil_outz00((BgL_dotnetz00_bglt)
								(BgL_mez00_1556), BGl_string5212z00zzmsil_inlinez00,
								BGl_string5213z00zzmsil_inlinez00);
							return
								BGl_labelz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1556),
								BGl_string5216z00zzmsil_inlinez00, BgL_l2z00_1564);
						}
				}
			}
		}
	}



/* <anonymous:4847> */
	obj_t BGl_zc3anonymousza34847ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2723,
		obj_t BgL_mez00_2724)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 215 */
			{
				obj_t BgL_mez00_1550;

				BgL_mez00_1550 = BgL_mez00_2724;
				BGl_cltz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1550));
				BGl_pushzd2intzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1550), BINT(((long) 1)));
				return
					BGl_bitxorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1550));
			}
		}
	}



/* <anonymous:4842> */
	obj_t BGl_zc3anonymousza34842ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2725,
		obj_t BgL_mez00_2726)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 210 */
			{
				obj_t BgL_mez00_1544;

				BgL_mez00_1544 = BgL_mez00_2726;
				BGl_cgtz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1544));
				BGl_pushzd2intzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1544), BINT(((long) 1)));
				return
					BGl_bitxorz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1544));
			}
		}
	}



/* <anonymous:4838> */
	obj_t BGl_zc3anonymousza34838ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2727,
		obj_t BgL_mez00_2728)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 204 */
			{
				obj_t BgL_mez00_1538;

				BgL_mez00_1538 = BgL_mez00_2728;
				return BGl_remz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1538));
			}
		}
	}



/* <anonymous:4834> */
	obj_t BGl_zc3anonymousza34834ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2729,
		obj_t BgL_mez00_2730)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 201 */
			{
				obj_t BgL_mez00_1532;

				BgL_mez00_1532 = BgL_mez00_2730;
				return BGl_divz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1532));
			}
		}
	}



/* <anonymous:4830> */
	obj_t BGl_zc3anonymousza34830ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2731,
		obj_t BgL_mez00_2732)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 198 */
			{
				obj_t BgL_mez00_1526;

				BgL_mez00_1526 = BgL_mez00_2732;
				return BGl_negz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1526));
			}
		}
	}



/* <anonymous:4826> */
	obj_t BGl_zc3anonymousza34826ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2733,
		obj_t BgL_mez00_2734)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 195 */
			{
				obj_t BgL_mez00_1520;

				BgL_mez00_1520 = BgL_mez00_2734;
				return BGl_divz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1520));
			}
		}
	}



/* <anonymous:4822> */
	obj_t BGl_zc3anonymousza34822ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2735,
		obj_t BgL_mez00_2736)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 192 */
			{
				obj_t BgL_mez00_1514;

				BgL_mez00_1514 = BgL_mez00_2736;
				return BGl_mulz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1514));
			}
		}
	}



/* <anonymous:4817> */
	obj_t BGl_zc3anonymousza34817ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2737,
		obj_t BgL_mez00_2738)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 189 */
			{
				obj_t BgL_mez00_1508;

				BgL_mez00_1508 = BgL_mez00_2738;
				return BGl_subz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1508));
			}
		}
	}



/* <anonymous:4813> */
	obj_t BGl_zc3anonymousza34813ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2739,
		obj_t BgL_mez00_2740)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 186 */
			{
				obj_t BgL_mez00_1502;

				BgL_mez00_1502 = BgL_mez00_2740;
				return BGl_addz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1502));
			}
		}
	}



/* <anonymous:4809> */
	obj_t BGl_zc3anonymousza34809ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2741,
		obj_t BgL_mez00_2742, obj_t BgL_onzf3zf3_2743, obj_t BgL_labz00_2744)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 180 */
			{
				obj_t BgL_mez00_1494;

				obj_t BgL_onzf3zf3_1495;

				obj_t BgL_labz00_1496;

				BgL_mez00_1494 = BgL_mez00_2742;
				BgL_onzf3zf3_1495 = BgL_onzf3zf3_2743;
				BgL_labz00_1496 = BgL_labz00_2744;
				if (CBOOL(BgL_onzf3zf3_1495))
					{	/* SawMsil/inline.scm 181 */
						return
							BGl_bgez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1494),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1496);
					}
				else
					{	/* SawMsil/inline.scm 181 */
						return
							BGl_bltz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1494),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1496);
					}
			}
		}
	}



/* <anonymous:4805> */
	obj_t BGl_zc3anonymousza34805ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2745,
		obj_t BgL_mez00_2746, obj_t BgL_onzf3zf3_2747, obj_t BgL_labz00_2748)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 177 */
			{
				obj_t BgL_mez00_1486;

				obj_t BgL_onzf3zf3_1487;

				obj_t BgL_labz00_1488;

				BgL_mez00_1486 = BgL_mez00_2746;
				BgL_onzf3zf3_1487 = BgL_onzf3zf3_2747;
				BgL_labz00_1488 = BgL_labz00_2748;
				if (CBOOL(BgL_onzf3zf3_1487))
					{	/* SawMsil/inline.scm 178 */
						return
							BGl_blez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1486),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1488);
					}
				else
					{	/* SawMsil/inline.scm 178 */
						return
							BGl_bgtz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1486),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1488);
					}
			}
		}
	}



/* <anonymous:4800> */
	obj_t BGl_zc3anonymousza34800ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2749,
		obj_t BgL_mez00_2750, obj_t BgL_onzf3zf3_2751, obj_t BgL_labz00_2752)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 174 */
			{
				obj_t BgL_mez00_1478;

				obj_t BgL_onzf3zf3_1479;

				obj_t BgL_labz00_1480;

				BgL_mez00_1478 = BgL_mez00_2750;
				BgL_onzf3zf3_1479 = BgL_onzf3zf3_2751;
				BgL_labz00_1480 = BgL_labz00_2752;
				if (CBOOL(BgL_onzf3zf3_1479))
					{	/* SawMsil/inline.scm 175 */
						return
							BGl_bgtz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1478),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1480);
					}
				else
					{	/* SawMsil/inline.scm 175 */
						return
							BGl_blez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1478),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1480);
					}
			}
		}
	}



/* <anonymous:4796> */
	obj_t BGl_zc3anonymousza34796ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2753,
		obj_t BgL_mez00_2754, obj_t BgL_onzf3zf3_2755, obj_t BgL_labz00_2756)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 171 */
			{
				obj_t BgL_mez00_1470;

				obj_t BgL_onzf3zf3_1471;

				obj_t BgL_labz00_1472;

				BgL_mez00_1470 = BgL_mez00_2754;
				BgL_onzf3zf3_1471 = BgL_onzf3zf3_2755;
				BgL_labz00_1472 = BgL_labz00_2756;
				if (CBOOL(BgL_onzf3zf3_1471))
					{	/* SawMsil/inline.scm 172 */
						return
							BGl_bltz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1470),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1472);
					}
				else
					{	/* SawMsil/inline.scm 172 */
						return
							BGl_bgez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1470),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1472);
					}
			}
		}
	}



/* <anonymous:4792> */
	obj_t BGl_zc3anonymousza34792ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2757,
		obj_t BgL_mez00_2758)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 168 */
			{
				obj_t BgL_mez00_1464;

				BgL_mez00_1464 = BgL_mez00_2758;
				return BGl_cgtz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1464));
			}
		}
	}



/* <anonymous:4788> */
	obj_t BGl_zc3anonymousza34788ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2759,
		obj_t BgL_mez00_2760)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 165 */
			{
				obj_t BgL_mez00_1458;

				BgL_mez00_1458 = BgL_mez00_2760;
				return BGl_cltz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1458));
			}
		}
	}



/* <anonymous:4784> */
	obj_t BGl_zc3anonymousza34784ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2761,
		obj_t BgL_mez00_2762, obj_t BgL_onzf3zf3_2763, obj_t BgL_labz00_2764)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 162 */
			{
				obj_t BgL_mez00_1450;

				obj_t BgL_onzf3zf3_1451;

				obj_t BgL_labz00_1452;

				BgL_mez00_1450 = BgL_mez00_2762;
				BgL_onzf3zf3_1451 = BgL_onzf3zf3_2763;
				BgL_labz00_1452 = BgL_labz00_2764;
				if (CBOOL(BgL_onzf3zf3_1451))
					{	/* SawMsil/inline.scm 163 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1450),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1452);
					}
				else
					{	/* SawMsil/inline.scm 163 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1450),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1452);
					}
			}
		}
	}



/* <anonymous:4779> */
	obj_t BGl_zc3anonymousza34779ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2765,
		obj_t BgL_mez00_2766)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 159 */
			{
				obj_t BgL_mez00_1444;

				BgL_mez00_1444 = BgL_mez00_2766;
				return BGl_ceqz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1444));
			}
		}
	}



/* <anonymous:4775> */
	obj_t BGl_zc3anonymousza34775ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2767,
		obj_t BgL_mez00_2768, obj_t BgL_onzf3zf3_2769, obj_t BgL_labz00_2770)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 156 */
			{
				obj_t BgL_mez00_1436;

				obj_t BgL_onzf3zf3_1437;

				obj_t BgL_labz00_1438;

				BgL_mez00_1436 = BgL_mez00_2768;
				BgL_onzf3zf3_1437 = BgL_onzf3zf3_2769;
				BgL_labz00_1438 = BgL_labz00_2770;
				if (CBOOL(BgL_onzf3zf3_1437))
					{	/* SawMsil/inline.scm 157 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1436),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1438);
					}
				else
					{	/* SawMsil/inline.scm 157 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1436),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1438);
					}
			}
		}
	}



/* <anonymous:4771> */
	obj_t BGl_zc3anonymousza34771ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2771,
		obj_t BgL_mez00_2772)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 153 */
			{
				obj_t BgL_mez00_1430;

				BgL_mez00_1430 = BgL_mez00_2772;
				return BGl_ceqz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1430));
			}
		}
	}



/* <anonymous:4767> */
	obj_t BGl_zc3anonymousza34767ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2773,
		obj_t BgL_mez00_2774, obj_t BgL_onzf3zf3_2775, obj_t BgL_labz00_2776)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 150 */
			{
				obj_t BgL_mez00_1422;

				obj_t BgL_onzf3zf3_1423;

				obj_t BgL_labz00_1424;

				BgL_mez00_1422 = BgL_mez00_2774;
				BgL_onzf3zf3_1423 = BgL_onzf3zf3_2775;
				BgL_labz00_1424 = BgL_labz00_2776;
				if (CBOOL(BgL_onzf3zf3_1423))
					{	/* SawMsil/inline.scm 151 */
						return
							BGl_beqz00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1422),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1424);
					}
				else
					{	/* SawMsil/inline.scm 151 */
						return
							BGl_bnez00zzmsil_outz00(
							(BgL_dotnetz00_bglt) (BgL_mez00_1422),
							BGl_string5206z00zzmsil_inlinez00, BgL_labz00_1424);
					}
			}
		}
	}



/* <anonymous:4763> */
	obj_t BGl_zc3anonymousza34763ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2777,
		obj_t BgL_mez00_2778)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 147 */
			{
				obj_t BgL_mez00_1416;

				BgL_mez00_1416 = BgL_mez00_2778;
				return BGl_ceqz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1416));
			}
		}
	}



/* <anonymous:4758> */
	obj_t BGl_zc3anonymousza34758ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2779,
		obj_t BgL_mez00_2780)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 140 */
			{
				obj_t BgL_mez00_1410;

				BgL_mez00_1410 = BgL_mez00_2780;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1410),
					CNST_TABLE_REF(((long) 84)), BGl_string5217z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 68)));
		}}
	}



/* <anonymous:4754> */
	obj_t BGl_zc3anonymousza34754ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2781,
		obj_t BgL_mez00_2782)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 137 */
			{
				obj_t BgL_mez00_1404;

				BgL_mez00_1404 = BgL_mez00_2782;
				return
					BGl_loadzd2fieldzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1404),
					CNST_TABLE_REF(((long) 84)), BGl_string5217z00zzmsil_inlinez00,
					CNST_TABLE_REF(((long) 68)));
		}}
	}



/* <anonymous:4750> */
	obj_t BGl_zc3anonymousza34750ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2783,
		obj_t BgL_mez00_2784)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 131 */
			return BUNSPEC;
		}
	}



/* <anonymous:4746> */
	obj_t BGl_zc3anonymousza34746ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2785,
		obj_t BgL_mez00_2786)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 128 */
			return BUNSPEC;
		}
	}



/* <anonymous:4742> */
	obj_t BGl_zc3anonymousza34742ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2787,
		obj_t BgL_mez00_2788)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 120 */
			{
				obj_t BgL_mez00_1386;

				BgL_mez00_1386 = BgL_mez00_2788;
				return BGl_popz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1386));
			}
		}
	}



/* <anonymous:4737> */
	obj_t BGl_zc3anonymousza34737ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2789,
		obj_t BgL_mez00_2790, obj_t BgL_argsz00_2791)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 117 */
			return BGl_ldnullz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_2790));
		}
	}



/* <anonymous:4733> */
	obj_t BGl_zc3anonymousza34733ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2792,
		obj_t BgL_mez00_2793)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 113 */
			{
				obj_t BgL_mez00_1373;

				BgL_mez00_1373 = BgL_mez00_2793;
				BGl_storezd2vectorzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1373), CNST_TABLE_REF(((long) 74)));
				return CNST_TABLE_REF(((long) 76));
		}}
	}



/* <anonymous:4729> */
	obj_t BGl_zc3anonymousza34729ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2794,
		obj_t BgL_mez00_2795)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 110 */
			{
				obj_t BgL_mez00_1367;

				BgL_mez00_1367 = BgL_mez00_2795;
				return
					BGl_loadzd2vectorzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1367), CNST_TABLE_REF(((long) 74)));
		}}
	}



/* <anonymous:4725> */
	obj_t BGl_zc3anonymousza34725ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2796,
		obj_t BgL_mez00_2797)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 107 */
			{
				obj_t BgL_mez00_1361;

				BgL_mez00_1361 = BgL_mez00_2797;
				return
					BGl_newarrayz00zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1361), CNST_TABLE_REF(((long) 74)));
		}}
	}



/* <anonymous:4719> */
	obj_t BGl_zc3anonymousza34719ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2798,
		obj_t BgL_mez00_2799)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 103 */
			{
				obj_t BgL_mez00_1353;

				BgL_mez00_1353 = BgL_mez00_2799;
				BGl_dupz00zzmsil_outz00((BgL_dotnetz00_bglt) (BgL_mez00_1353));
				{	/* SawMsil/inline.scm 105 */
					obj_t BgL_arg4720z00_1355;

					obj_t BgL_arg4721z00_1356;

					{
						BgL_dotnetz00_bglt BgL_auxz00_3435;

						BgL_auxz00_3435 = (BgL_dotnetz00_bglt) (BgL_mez00_1353);
						BgL_arg4720z00_1355 =
							(((BgL_dotnetz00_bglt) CREF(BgL_auxz00_3435))->BgL_qnamez00);
					}
					BgL_arg4721z00_1356 = CNST_TABLE_REF(((long) 85));
					return
						BGl_newobjz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1353), BgL_arg4720z00_1355,
						BgL_arg4721z00_1356);
				}
			}
		}
	}



/* <anonymous:4713> */
	obj_t BGl_zc3anonymousza34713ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2800,
		obj_t BgL_mez00_2801)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 100 */
			{
				obj_t BgL_mez00_1345;

				BgL_mez00_1345 = BgL_mez00_2801;
				{	/* SawMsil/inline.scm 101 */
					obj_t BgL_arg4714z00_2493;

					obj_t BgL_arg4715z00_2494;

					{
						BgL_dotnetz00_bglt BgL_auxz00_3441;

						BgL_auxz00_3441 = (BgL_dotnetz00_bglt) (BgL_mez00_1345);
						BgL_arg4714z00_2493 =
							(((BgL_dotnetz00_bglt) CREF(BgL_auxz00_3441))->BgL_qnamez00);
					}
					BgL_arg4715z00_2494 = CNST_TABLE_REF(((long) 85));
					return
						BGl_newobjz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1345), BgL_arg4714z00_2493,
						BgL_arg4715z00_2494);
				}
			}
		}
	}



/* <anonymous:4706> */
	obj_t BGl_zc3anonymousza34706ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2802,
		obj_t BgL_mez00_2803)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 97 */
			{
				obj_t BgL_mez00_1337;

				BgL_mez00_1337 = BgL_mez00_2803;
				{	/* SawMsil/inline.scm 98 */
					obj_t BgL_arg4707z00_2490;

					obj_t BgL_arg4708z00_2491;

					{
						BgL_dotnetz00_bglt BgL_auxz00_3447;

						BgL_auxz00_3447 = (BgL_dotnetz00_bglt) (BgL_mez00_1337);
						BgL_arg4707z00_2490 =
							(((BgL_dotnetz00_bglt) CREF(BgL_auxz00_3447))->BgL_qnamez00);
					}
					BgL_arg4708z00_2491 = CNST_TABLE_REF(((long) 85));
					return
						BGl_newobjz00zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1337), BgL_arg4707z00_2490,
						BgL_arg4708z00_2491);
				}
			}
		}
	}



/* <anonymous:4698> */
	obj_t BGl_zc3anonymousza34698ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2804,
		obj_t BgL_mez00_2805, obj_t BgL_argsz00_2806)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 90 */
			{
				obj_t BgL_mez00_1327;

				obj_t BgL_argsz00_1328;

				BgL_mez00_1327 = BgL_mez00_2805;
				BgL_argsz00_1328 = BgL_argsz00_2806;
				{	/* SawMsil/inline.scm 91 */
					obj_t BgL_arg4700z00_1330;

					BgL_arg4700z00_1330 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					BGl_loadzd2globalzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1327),
						(BgL_globalz00_bglt) (BgL_arg4700z00_1330));
				}
				BGl_genzd2exprzd2zzmsil_codez00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1327), CAR(BgL_argsz00_1328));
				{	/* SawMsil/inline.scm 93 */
					obj_t BgL_arg4702z00_1332;

					{	/* SawMsil/inline.scm 93 */
						obj_t BgL_pairz00_2486;

						BgL_pairz00_2486 = BgL_argsz00_1328;
						BgL_arg4702z00_1332 = CAR(CDR(BgL_pairz00_2486));
					}
					BGl_genzd2exprzd2zzmsil_codez00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1327), BgL_arg4702z00_1332);
				}
				BGl_storezd2vectorzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1327), CNST_TABLE_REF(((long) 74)));
				return CNST_TABLE_REF(((long) 76));
		}}
	}



/* <anonymous:4692> */
	obj_t BGl_zc3anonymousza34692ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2807,
		obj_t BgL_mez00_2808, obj_t BgL_argsz00_2809)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 85 */
			{
				obj_t BgL_mez00_1318;

				obj_t BgL_argsz00_1319;

				BgL_mez00_1318 = BgL_mez00_2808;
				BgL_argsz00_1319 = BgL_argsz00_2809;
				{	/* SawMsil/inline.scm 86 */
					obj_t BgL_arg4693z00_1321;

					BgL_arg4693z00_1321 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
					BGl_loadzd2globalzd2zzmsil_outz00(
						(BgL_dotnetz00_bglt) (BgL_mez00_1318),
						(BgL_globalz00_bglt) (BgL_arg4693z00_1321));
				}
				BGl_genzd2exprzd2zzmsil_codez00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1318), CAR(BgL_argsz00_1319));
				return
					BGl_loadzd2vectorzd2zzmsil_outz00(
					(BgL_dotnetz00_bglt) (BgL_mez00_1318), CNST_TABLE_REF(((long) 74)));
		}}
	}



/* check-msil-inlines */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2msilzd2inlinesz00zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 25 */
			{	/* SawMsil/inline.scm 26 */
				obj_t BgL_unresolvedz00_1838;

				BgL_unresolvedz00_1838 =
					BGl_filterz00zz__r4_control_features_6_9z00
					(BGl_proc5218z00zzmsil_inlinez00,
					BGl_za2msilzd2inlinesza2zd2zzmsil_inlinez00);
				if (PAIRP(BgL_unresolvedz00_1838))
					{	/* SawMsil/inline.scm 28 */
						return
							BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 86)),
							BGl_string5219z00zzmsil_inlinez00, BgL_unresolvedz00_1838);
					}
				else
					{	/* SawMsil/inline.scm 28 */
						return BFALSE;
					}
			}
		}
	}



/* _check-msil-inlines */
	obj_t BGl__checkzd2msilzd2inlinesz00zzmsil_inlinez00(obj_t BgL_envz00_2811)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 25 */
			return BGl_checkzd2msilzd2inlinesz00zzmsil_inlinez00();
		}
	}



/* <anonymous:5023> */
	obj_t BGl_zc3anonymousza35023ze3z83zzmsil_inlinez00(obj_t BgL_envz00_2812,
		obj_t BgL_iz00_2813)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 26 */
			{
				obj_t BgL_iz00_1841;

				{	/* SawMsil/inline.scm 26 */
					bool_t BgL_auxz00_3484;

					BgL_iz00_1841 = BgL_iz00_2813;
					if (CBOOL(BGl_findzd2globalzd2zzast_envz00(BgL_iz00_1841, BNIL)))
						{	/* SawMsil/inline.scm 26 */
							BgL_auxz00_3484 = ((bool_t) 0);
						}
					else
						{	/* SawMsil/inline.scm 26 */
							BgL_auxz00_3484 = ((bool_t) 1);
						}
					return BBOOL(BgL_auxz00_3484);
				}
			}
		}
	}



/* inline-call? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2callzf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt BgL_mez00_1,
		BgL_globalz00_bglt BgL_varz00_2)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 36 */
			{	/* SawMsil/inline.scm 37 */
				obj_t BgL_funz00_1846;

				{	/* SawMsil/inline.scm 37 */
					obj_t BgL_auxz00_3489;

					{
						BgL_variablez00_bglt BgL_auxz00_3490;

						BgL_auxz00_3490 = (BgL_variablez00_bglt) (BgL_varz00_2);
						BgL_auxz00_3489 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3490))->BgL_idz00);
					}
					BgL_funz00_1846 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_3489,
						CNST_TABLE_REF(((long) 4)));
				}
				if (CBOOL(BgL_funz00_1846))
					{	/* SawMsil/inline.scm 38 */
						return
							PROCEDURE_ENTRY(BgL_funz00_1846) (BgL_funz00_1846,
							(obj_t) (BgL_mez00_1), BEOA);
					}
				else
					{	/* SawMsil/inline.scm 38 */
						return CNST_TABLE_REF(((long) 87));
		}}}
	}



/* _inline-call? */
	obj_t BGl__inlinezd2callzf3z21zzmsil_inlinez00(obj_t BgL_envz00_2814,
		obj_t BgL_mez00_2815, obj_t BgL_varz00_2816)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 36 */
			return
				BGl_inlinezd2callzf3z21zzmsil_inlinez00(
				(BgL_dotnetz00_bglt) (BgL_mez00_2815),
				(BgL_globalz00_bglt) (BgL_varz00_2816));
		}
	}



/* inline-call-with-args? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt
		BgL_mez00_3, BgL_globalz00_bglt BgL_varz00_4, obj_t BgL_argsz00_5)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 49 */
			{	/* SawMsil/inline.scm 50 */
				obj_t BgL_funz00_2525;

				{	/* SawMsil/inline.scm 50 */
					obj_t BgL_auxz00_3504;

					{
						BgL_variablez00_bglt BgL_auxz00_3505;

						BgL_auxz00_3505 = (BgL_variablez00_bglt) (BgL_varz00_4);
						BgL_auxz00_3504 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3505))->BgL_idz00);
					}
					BgL_funz00_2525 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_3504,
						CNST_TABLE_REF(((long) 1)));
				}
				if (CBOOL(BgL_funz00_2525))
					{	/* SawMsil/inline.scm 50 */
						return
							PROCEDURE_ENTRY(BgL_funz00_2525) (BgL_funz00_2525,
							(obj_t) (BgL_mez00_3), BgL_argsz00_5, BEOA);
					}
				else
					{	/* SawMsil/inline.scm 50 */
						return CNST_TABLE_REF(((long) 87));
		}}}
	}



/* _inline-call-with-args? */
	obj_t BGl__inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(obj_t
		BgL_envz00_2817, obj_t BgL_mez00_2818, obj_t BgL_varz00_2819,
		obj_t BgL_argsz00_2820)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 49 */
			return
				BGl_inlinezd2callzd2withzd2argszf3z21zzmsil_inlinez00(
				(BgL_dotnetz00_bglt) (BgL_mez00_2818),
				(BgL_globalz00_bglt) (BgL_varz00_2819), BgL_argsz00_2820);
		}
	}



/* inline-predicate? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2predicatezf3z21zzmsil_inlinez00(BgL_dotnetz00_bglt BgL_mez00_6,
		BgL_globalz00_bglt BgL_varz00_7, obj_t BgL_onzf3zf3_8, obj_t BgL_labz00_9)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 61 */
			{	/* SawMsil/inline.scm 62 */
				obj_t BgL_funz00_2529;

				{	/* SawMsil/inline.scm 62 */
					obj_t BgL_auxz00_3519;

					{
						BgL_variablez00_bglt BgL_auxz00_3520;

						BgL_auxz00_3520 = (BgL_variablez00_bglt) (BgL_varz00_7);
						BgL_auxz00_3519 =
							(((BgL_variablez00_bglt) CREF(BgL_auxz00_3520))->BgL_idz00);
					}
					BgL_funz00_2529 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_auxz00_3519,
						CNST_TABLE_REF(((long) 17)));
				}
				if (CBOOL(BgL_funz00_2529))
					{	/* SawMsil/inline.scm 62 */
						return
							PROCEDURE_ENTRY(BgL_funz00_2529) (BgL_funz00_2529,
							(obj_t) (BgL_mez00_6), BgL_onzf3zf3_8, BgL_labz00_9, BEOA);
					}
				else
					{	/* SawMsil/inline.scm 62 */
						return CNST_TABLE_REF(((long) 87));
		}}}
	}



/* _inline-predicate? */
	obj_t BGl__inlinezd2predicatezf3z21zzmsil_inlinez00(obj_t BgL_envz00_2821,
		obj_t BgL_mez00_2822, obj_t BgL_varz00_2823, obj_t BgL_onzf3zf3_2824,
		obj_t BgL_labz00_2825)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 61 */
			return
				BGl_inlinezd2predicatezf3z21zzmsil_inlinez00(
				(BgL_dotnetz00_bglt) (BgL_mez00_2822),
				(BgL_globalz00_bglt) (BgL_varz00_2823), BgL_onzf3zf3_2824,
				BgL_labz00_2825);
		}
	}



/* skip-mov */
	obj_t BGl_skipzd2movzd2zzmsil_inlinez00(obj_t BgL_argz00_10)
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 74 */
		BGl_skipzd2movzd2zzmsil_inlinez00:
			if (BGl_iszd2azf3z21zz__objectz00(BgL_argz00_10,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawMsil/inline.scm 76 */
					BgL_rtl_funz00_bglt BgL_funz00_1856;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_3536;

						BgL_auxz00_3536 = (BgL_rtl_insz00_bglt) (BgL_argz00_10);
						BgL_funz00_1856 =
							(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3536))->BgL_funz00);
					}
					{	/* SawMsil/inline.scm 77 */
						bool_t BgL_testz00_3539;

						{	/* SawMsil/inline.scm 77 */
							obj_t BgL_obj4195z00_2535;

							BgL_obj4195z00_2535 = (obj_t) (BgL_funz00_1856);
							BgL_testz00_3539 =
								BGl_iszd2azf3z21zz__objectz00(BgL_obj4195z00_2535,
								BGl_rtl_movz00zzsaw_defsz00);
						}
						if (BgL_testz00_3539)
							{
								obj_t BgL_argz00_3542;

								{	/* SawMsil/inline.scm 78 */
									obj_t BgL_pairz00_2537;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_3543;

										BgL_auxz00_3543 = (BgL_rtl_insz00_bglt) (BgL_argz00_10);
										BgL_pairz00_2537 =
											(((BgL_rtl_insz00_bglt) CREF(BgL_auxz00_3543))->
											BgL_argsz00);
									}
									BgL_argz00_3542 = CAR(BgL_pairz00_2537);
								}
								BgL_argz00_10 = BgL_argz00_3542;
								goto BGl_skipzd2movzd2zzmsil_inlinez00;
							}
						else
							{	/* SawMsil/inline.scm 77 */
								return (obj_t) (BgL_funz00_1856);
							}
					}
				}
			else
				{	/* SawMsil/inline.scm 75 */
					return BgL_argz00_10;
				}
		}
	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 1 */
			return BUNSPEC;
		}
	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 1 */
			return BUNSPEC;
		}
	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmsil_inlinez00()
	{
		AN_OBJECT;
		{	/* SawMsil/inline.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 445289072),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 171845042),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 43233168),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 498112980),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 72321574),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 17869975),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 358171001),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 355177025),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 143212498),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 466514915),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 52967775),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_dotnet_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 192042637),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzmsil_outz00(((long) 112026228),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			BGl_modulezd2initializa7ationz75zzmsil_codez00(((long) 446080200),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 531182497),
				BSTRING_TO_STRING(BGl_string5220z00zzmsil_inlinez00));
		}
	}

#ifdef __cplusplus
}
#endif
